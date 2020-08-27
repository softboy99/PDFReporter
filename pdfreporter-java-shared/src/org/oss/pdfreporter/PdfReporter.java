/*******************************************************************************
 * Copyright (c) 2015 Open Software Solutions GmbH.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Lesser Public License v3.0
 * which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/lgpl-3.0.html
 *
 * Contributors:
 *     Open Software Solutions GmbH
 ******************************************************************************/
package org.oss.pdfreporter;

import java.io.Closeable;
import java.io.InputStream;
import java.util.HashMap;
import java.util.Map;

import org.oss.pdfreporter.engine.JRDataSource;
import org.oss.pdfreporter.engine.JREmptyDataSource;
import org.oss.pdfreporter.engine.JRException;
import org.oss.pdfreporter.engine.JRExporterParameter;
import org.oss.pdfreporter.engine.JRParameter;
import org.oss.pdfreporter.engine.JasperCompileManager;
import org.oss.pdfreporter.engine.JasperExportManager;
import org.oss.pdfreporter.engine.JasperFillManager;
import org.oss.pdfreporter.engine.JasperPrint;
import org.oss.pdfreporter.engine.JasperReport;
import org.oss.pdfreporter.engine.data.JRXmlDataSource;
import org.oss.pdfreporter.engine.data.JsonDataSource;
import org.oss.pdfreporter.engine.design.JasperDesign;
import org.oss.pdfreporter.engine.export.JRPdfExporterParameter;
import org.oss.pdfreporter.engine.query.JRXPathQueryExecuterFactory;
import org.oss.pdfreporter.engine.query.JsonQueryExecuterFactory;
import org.oss.pdfreporter.engine.util.JRLoader;
import org.oss.pdfreporter.engine.util.JRXmlUtils;
import org.oss.pdfreporter.engine.xml.JRXmlLoader;
import org.oss.pdfreporter.json.IJsonDataSource;
import org.oss.pdfreporter.registry.ApiRegistry;
import org.oss.pdfreporter.repo.FileResourceLoader;
import org.oss.pdfreporter.repo.SubreportUtil;
import org.oss.pdfreporter.sql.IConnection;
import org.oss.pdfreporter.sql.factory.ISqlFactory;
import org.oss.pdfreporter.text.bundle.StringLocale;
import org.oss.pdfreporter.uses.org.w3c.dom.Document;


public class PdfReporter implements IPdfReporter<JRExporterParameter> {

    private final String mPdfOutputFolder;
    private final String mJrxmlFilePath;
    private final IOutputFilenameCallback mFileNameCallback;
    private Map<JRExporterParameter, Object> mExportParameters = new HashMap<JRExporterParameter, Object>();
    private Map<String,Object> mFillParameters = new HashMap<String,Object>();
    private String mSubreportName;
    private String mSubreportLocation;

    private boolean mXmlReport;
    private boolean mSqlReport;
    private boolean mJsonReport;

    //xml report
    private String mXmlDataFile;
    private String mXmlXPath;

    //sql report
    private String mJdbcDriver;
    private String mJdbcConnection;
    private String mSqlUsername;
    private String mSqlPassword;

    //json report
    private String mJsonDataFile;
    private String mJsonExpression;

    public PdfReporter(String jrxmlFilePath, String outputFolder, IOutputFilenameCallback fileNameCallback) {
        mPdfOutputFolder = outputFolder;
        mJrxmlFilePath = jrxmlFilePath;
        mFileNameCallback = fileNameCallback;
    }

    /* (non-Javadoc)
	 * @see org.oss.pdfreporter.IPdfReporter#setExportParameters(java.util.Map)
	 */
    @Override
	public void setExportParameters(Map<JRExporterParameter, Object> exporterParameters) {
        mExportParameters.putAll(exporterParameters);
    }

    /* (non-Javadoc)
	 * @see org.oss.pdfreporter.IPdfReporter#setFillParameters(java.util.Map)
	 */
    @Override
	public void setFillParameters(Map<String,Object> fillParameters) {
        mFillParameters.putAll(fillParameters);
    }

    private String exportWithoutDataSource() throws Exception{
        return exportFromXml(null, null);
    }

    /* (non-Javadoc)
	 * @see org.oss.pdfreporter.IPdfReporter#setXmlSource(java.lang.String, java.lang.String)
	 */
    @Override
	public IPdfReporter<JRExporterParameter> setXmlSource(String xmlDataFile, String xmlXpath) {
        if (mSqlReport || mJsonReport) {
            throw new RuntimeException("Can't change report type, data source already set");
        }
        mXmlReport = true;

        this.mXmlDataFile = xmlDataFile;
        this.mXmlXPath = xmlXpath;

        return this;
    }

    /* (non-Javadoc)
	 * @see org.oss.pdfreporter.IPdfReporter#setSqlSource(java.lang.String, java.lang.String, java.lang.String, java.lang.String)
	 */
    @Override
	public IPdfReporter<JRExporterParameter> setSqlSource(String jdbcDriver, String jdbcConnection, String username, String password) {
        if (mXmlReport || mJsonReport) {
            throw new RuntimeException("Can't change report type, data source already set");
        }
        mSqlReport = true;

        this.mJdbcDriver = jdbcDriver;
        this.mJdbcConnection = jdbcConnection;
        this.mSqlUsername = username;
        this.mSqlPassword = password;

        return this;
    }

    /* (non-Javadoc)
	 * @see org.oss.pdfreporter.IPdfReporter#setJsonSource()
	 */
    @Override
	public IPdfReporter<JRExporterParameter> setJsonSource() {
        return setJsonSource(null, null);
    }

    /* (non-Javadoc)
	 * @see org.oss.pdfreporter.IPdfReporter#setJsonSource(java.lang.String)
	 */
    @Override
	public IPdfReporter<JRExporterParameter> setJsonSource(String jsonDataFile) {
        return setJsonSource(jsonDataFile, null);
    }

    /* (non-Javadoc)
	 * @see org.oss.pdfreporter.IPdfReporter#setJsonSource(java.lang.String, java.lang.String)
	 */
    @Override
	public IPdfReporter<JRExporterParameter> setJsonSource(String jsonDataFile, String selectExpression) {
        if (mXmlReport || mSqlReport) {
            throw new RuntimeException("Can't change report type, data source already set");
        }
        mJsonReport = true;

        mJsonDataFile = jsonDataFile;
        mJsonExpression = selectExpression;

        return this;
    }

    /* (non-Javadoc)
	 * @see org.oss.pdfreporter.IPdfReporter#exportPdf()
	 */
    @Override
	public String exportPdf() throws Exception {
        if (mXmlReport) {
            return exportFromXml(mXmlDataFile, mXmlXPath);
        } else if (mSqlReport) {
            return exportSqlReport(mJdbcConnection, mSqlUsername, mSqlPassword);
        } else  if (mJsonReport) {
            return exportJsonReport();
        } else {
            return exportWithoutDataSource();
        }
    }

	private String exportFromXml(String xmlDataFile, String xmlXpath)
			throws Exception {
		ApiRegistry.initSession();
		JRDataSource dataSource = null;
		InputStream isXmlData = null;
		try {
			JasperDesign design = loadReport(mJrxmlFilePath);
			JasperReport compiledReport = JasperCompileManager.compileReport(design);
			if (xmlDataFile == null) {
				dataSource = new JREmptyDataSource();
			} else {
				isXmlData = FileResourceLoader.getInputStream(xmlDataFile);
				JRXmlDataSource xmlDataSource = new JRXmlDataSource(isXmlData,
						xmlXpath);
				xmlDataSource.setDatePattern("yyyy-MM-dd");
				dataSource = xmlDataSource;
			}
			processSubreport();
			JasperPrint printReport = JasperFillManager.fillReport(compiledReport, mFillParameters, dataSource);
			String pathToPdfFile = pathToPdfFile(printReport);
			JasperExportManager.exportReportToPdfFile(printReport, pathToPdfFile, mExportParameters);
			return pathToPdfFile;
		} finally {
			close(isXmlData);
			ApiRegistry.dispose();
		}
	}
    
    private String getOutputFileName(JasperPrint print) {
    	return mFileNameCallback.getOutputFileName(print.getName());
    }

    private String exportSqlReport(String jdbcConnection, String username, String password) throws Exception {
        ApiRegistry.initSession();
        IConnection sqlDataSource = null;
        try {

            JasperDesign design = loadReport(mJrxmlFilePath);
            JasperReport report = JasperCompileManager.compileReport(design);

            ISqlFactory sqlFactory = ApiRegistry.getSqlFactory();

			Class.forName(mJdbcDriver);  // for compatibility better register the jdbc 4.0 style
			sqlDataSource = sqlFactory.newConnection(jdbcConnection, username, password);
            processSubreport();
            JasperPrint printReport = JasperFillManager.fillReport(report, mFillParameters, sqlDataSource);
            String pathToPdfFile = pathToPdfFile(printReport);
            JasperExportManager.exportReportToPdfFile(printReport, pathToPdfFile, mExportParameters);
            return pathToPdfFile;
        } finally {
            close(sqlDataSource);
            ApiRegistry.dispose();
        }
    }

	private String pathToPdfFile(JasperPrint printReport) {
		return mPdfOutputFolder + "/" + getOutputFileName(printReport) + ".pdf";
	}


    private String exportJsonReport() throws Exception {
        ApiRegistry.initSession();
        IJsonDataSource jsonDataSource = null;
        try {

            JasperDesign design = loadReport(mJrxmlFilePath);
            JasperReport report = JasperCompileManager.compileReport(design);

            JasperPrint printReport = null;
            processSubreport();
            if(mJsonDataFile == null){
                printReport = JasperFillManager.fillReport(report, mFillParameters);
            } else {

                InputStream jsonData = FileResourceLoader.getInputStream(mJsonDataFile);
                jsonDataSource = new JsonDataSource(jsonData, mJsonExpression);
                printReport = JasperFillManager.fillReport(report, mFillParameters, jsonDataSource);
            }

            String pathToPdfFile = pathToPdfFile(printReport);
            JasperExportManager.exportReportToPdfFile(printReport, pathToPdfFile, mExportParameters);
            return pathToPdfFile;
        } finally {
            close(jsonDataSource);
            ApiRegistry.dispose();
        }
    }

    /* (non-Javadoc)
	 * @see org.oss.pdfreporter.IPdfReporter#addSubreport(java.lang.String, java.lang.String)
	 */
    @Override
	public IPdfReporter<JRExporterParameter> addSubreport(String subreportName, String location) {
        mSubreportName = subreportName;
        mSubreportLocation = location;

        return this;
    }

    @Override
	public IPdfReporter<JRExporterParameter> compileSubreports() {
		return this;
	}

	private void processSubreport() throws JRException{
        if (mSubreportLocation != null && mSubreportName != null) {
            JasperReport subreport = SubreportUtil.loadSubreport(mSubreportLocation);
            mFillParameters.put(mSubreportName, subreport);
        }
    }

    /* (non-Javadoc)
	 * @see org.oss.pdfreporter.IPdfReporter#addEncryption(boolean, java.lang.String, java.lang.String, int)
	 */
    @Override
	public IPdfReporter<JRExporterParameter> addEncryption(boolean is128bitKey, String userPassword, String ownerPassword, int permissions) {
        mExportParameters.put(JRPdfExporterParameter.IS_ENCRYPTED, Boolean.TRUE);
        mExportParameters.put(JRPdfExporterParameter.IS_128_BIT_KEY, is128bitKey ? Boolean.TRUE : Boolean.FALSE);
        mExportParameters.put(JRPdfExporterParameter.USER_PASSWORD, userPassword);
        mExportParameters.put(JRPdfExporterParameter.OWNER_PASSWORD, ownerPassword);
        mExportParameters.put(JRPdfExporterParameter.PERMISSIONS, permissions);

        return this;
    }

    /* (non-Javadoc)
	 * @see org.oss.pdfreporter.IPdfReporter#addJSONParams(java.lang.String, java.lang.String, java.util.Locale, java.util.Locale)
	 */
    @Override
	public IPdfReporter<JRExporterParameter> addJSONParams(String datePattern, String numberPattern, String jsonLocale, String country) {
        mFillParameters.put(JsonQueryExecuterFactory.JSON_DATE_PATTERN, datePattern);
        mFillParameters.put(JsonQueryExecuterFactory.JSON_NUMBER_PATTERN,numberPattern);
        mFillParameters.put(JsonQueryExecuterFactory.JSON_LOCALE, StringLocale.fromLocaleString(jsonLocale));
        mFillParameters.put(JRParameter.REPORT_LOCALE, StringLocale.fromLocaleString(country));

        return this;
    }

    /* (non-Javadoc)
	 * @see org.oss.pdfreporter.IPdfReporter#addXMLParams(java.lang.String, java.lang.String, java.util.Locale, java.util.Locale)
	 */
    @Override
	public IPdfReporter<JRExporterParameter> addXMLParams(String datePattern, String numberPattern, String xmlLocale, String country) {
        mFillParameters.put(JRXPathQueryExecuterFactory.XML_DATE_PATTERN, datePattern);
        mFillParameters.put(JRXPathQueryExecuterFactory.XML_NUMBER_PATTERN, numberPattern);
        mFillParameters.put(JRXPathQueryExecuterFactory.XML_LOCALE, StringLocale.fromLocaleString(xmlLocale));
        mFillParameters.put(JRParameter.REPORT_LOCALE, StringLocale.fromLocaleString(country));
        return this;
    }

    /* (non-Javadoc)
	 * @see org.oss.pdfreporter.IPdfReporter#addSubReportXMLDocument(java.lang.String)
	 */
    @Override
	public IPdfReporter<JRExporterParameter> addSubReportXMLDocument(String xmlDataFile) {
    	Document document;
		try {
			document = JRXmlUtils.parse(JRLoader.getLocationInputStream(xmlDataFile));
		} catch (JRException e) {
			throw new RuntimeException("Error locating xml file: " + xmlDataFile,e);
		}
        mFillParameters.put(JRXPathQueryExecuterFactory.PARAMETER_XML_DATA_DOCUMENT, document);
        return this;
    }


    @Override
	public IPdfReporter<JRExporterParameter> selectLanguage(String language)  {
    	mFillParameters.put(JRParameter.REPORT_LANGUAGE, language);
    	return this;
	}
    
	@Override
	public IPdfReporter<JRExporterParameter> setEncoding(String charset) {
    	mFillParameters.put(JRParameter.REPORT_ENCODING, charset);
    	return this;
	}
  
	/* (non-Javadoc)
	 * @see org.oss.pdfreporter.IPdfReporter#addFillParameter(java.lang.String, java.lang.Object)
	 */
    @Override
	public IPdfReporter<JRExporterParameter> addFillParameter(String key, Object value) {
    	mFillParameters.put(key, value);
    	return this;
    }

    private JasperDesign loadReport(String reportFileName) throws Exception {
        InputStream isReport = null;
        try {
            isReport = FileResourceLoader.getInputStream(reportFileName);
            return JRXmlLoader.load(isReport);
        } finally {
            close(isReport);
        }
    }

    private void close(Closeable stream) throws Exception {
        if (stream!=null) {
            stream.close();
        }
    }


}
