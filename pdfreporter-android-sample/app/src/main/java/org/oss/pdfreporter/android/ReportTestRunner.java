package org.oss.pdfreporter.android;

import android.content.Context;
import android.support.annotation.NonNull;

import org.oss.pdfreporter.PdfReporter;
import org.oss.pdfreporter.engine.JRExporterParameter;
import org.oss.pdfreporter.engine.JasperReport;
import org.oss.pdfreporter.engine.export.JRPdfExporterParameter;
import org.oss.pdfreporter.pdf.IDocument;
import org.oss.pdfreporter.registry.ApiRegistry;
import org.oss.pdfreporter.repo.RepositoryManager;
import org.oss.pdfreporter.repo.SubreportUtil;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;

public class ReportTestRunner {

    //JRXML file names
    private static final String DESIGN_REPORT_FONTS = "FontsReport.jrxml";
    private static final String DESIGN_REPORT_SHIPMENTS = "ShipmentsReportSqlJeval.jrxml";
    private static final String DESIGN_REPORT_PRODUCTS = "ProductsReport.jrxml";
    private static final String DESIGN_REPORT_ORDERS = "OrdersReport.jrxml";
    private static final String DESIGN_REPORT_LATE_ORDERS = "LateOrdersReport.jrxml";

    private static final String DESIGN_REPORT_IMAGE = "ImagesReport.jrxml";
    private static final String DESIGN_REPORT_SHAPES = "ShapesReport.jrxml";
    private static final String DESIGN_REPORT_PARAGRAPH = "ParagraphsReport.jrxml";
    private static final String DESIGN_REPORT_STYLEDTEXT = "StyledTextReport.jrxml";
    private static final String DESIGN_REPORT_CDBOOCKLET = "CDBooklet.jrxml";
    private static final String DESIGN_REPORT_ROTATION = "RotationReport.jrxml";
    private static final String DESIGN_REPORT_PDFCRYPT = "PdfEncryptReport.jrxml";
    private static final String DESIGN_REPORT_MASTER = "MasterReport.jrxml";
    private static final String DESIGN_REPORT_LANDSCAPE = "LandscapeReport.jrxml";
    private static final String DESIGN_REPORT_STRETCH = "StretchReport.jrxml";
    private static final String DESIGN_REPORT_TABULAR = "TabularReport.jrxml";
    private static final String DESIGN_REPORT_JSON = "JsonCustomersReport.jrxml";

    //data source
    private static final String XML_DATA_NORTHWIND = "northwind.xml";
    private static final String XPATH_DATA_NORTHWIND_ORDERS = "/Northwind/Orders";
    private static final String XPATH_DATA_NORTHWIND_ORDERS_SHIPPED_NOT_NULL = "/Northwind/Orders[ShippedDate]";
    private static final String XML_DATA_CDBOOKLET = "CDBooklets.xml";
    private static final String XPATH_DATA_CDBOOKLET = "/CDBooklets";

    @NonNull
    private Context mContext;

    public ReportTestRunner(@NonNull Context context) {
        mContext = context.getApplicationContext();
    }

    public static class ReportPlist {
        public final String id;
        public final String name;

        public ReportPlist(String id, String name) {
            this.id = id;
            this.name = name;
        }

        @Override
        public String toString() {
            return name;
        }
    }

    public List<ReportPlist> loadReportList() {
        final List<ReportPlist> list = new ArrayList<>(20);
        list.add(new ReportPlist(DESIGN_REPORT_FONTS, "Fonts"));
        list.add(new ReportPlist(DESIGN_REPORT_SHIPMENTS, "Shipments (SQL)"));
        list.add(new ReportPlist(DESIGN_REPORT_MASTER, "Master report"));
        list.add(new ReportPlist(DESIGN_REPORT_PRODUCTS, "Products"));
        list.add(new ReportPlist(DESIGN_REPORT_STRETCH, "Stretch"));
        list.add(new ReportPlist(DESIGN_REPORT_TABULAR, "Tabular"));
        list.add(new ReportPlist(DESIGN_REPORT_ORDERS, "Orders"));
        list.add(new ReportPlist(DESIGN_REPORT_LATE_ORDERS, "Late Orders"));
        list.add(new ReportPlist(DESIGN_REPORT_IMAGE, "Images"));
        list.add(new ReportPlist(DESIGN_REPORT_LANDSCAPE, "Landscape"));
        list.add(new ReportPlist(DESIGN_REPORT_SHAPES, "Shapes"));
        list.add(new ReportPlist(DESIGN_REPORT_ROTATION, "Rotation"));
        list.add(new ReportPlist(DESIGN_REPORT_PDFCRYPT, "Encrypted"));
        list.add(new ReportPlist(DESIGN_REPORT_PARAGRAPH, "Paragraph"));
        list.add(new ReportPlist(DESIGN_REPORT_STYLEDTEXT, "Styled text"));
        list.add(new ReportPlist(DESIGN_REPORT_CDBOOCKLET, "CD Booklet (XML)"));
        list.add(new ReportPlist(DESIGN_REPORT_JSON, "JSON Report"));
        return list;
    }

    private String getRootFolder() {
        return mContext.getExternalFilesDir(null) + "/reports";
    }

    private String getResourcesFolder() {
        return getRootFolder() + "/resources";
    }

    private String getOuputPdfFolder() {
        return mContext.getExternalFilesDir(null).toString();
    }

    private String getDatabasePath() {
        return getRootFolder() + RepositoryManager.PATH_DELIMITER + "data.db";
    }

    public String exportReport(String identifier) throws Exception{
        if (identifier.equals(DESIGN_REPORT_FONTS)) {
            return exportFonts();
        } else if (identifier.equals(DESIGN_REPORT_SHIPMENTS)) {
            return exportShippment();
        } else if (identifier.equals(DESIGN_REPORT_MASTER)) {
            return exportMasterReport();
        } else if (identifier.equals(DESIGN_REPORT_PRODUCTS)) {
            return exportProducts();
        } else if (identifier.equals(DESIGN_REPORT_STRETCH)) {
            return exportStretch();
        } else if (identifier.equals(DESIGN_REPORT_TABULAR)) {
            return exportTabular();
        } else if (identifier.equals(DESIGN_REPORT_ORDERS)) {
            return exportOrders();
        } else if (identifier.equals(DESIGN_REPORT_LATE_ORDERS)) {
            return exportLateOrder();
        } else if (identifier.equals(DESIGN_REPORT_IMAGE)) {
            return exportImages();
        } else if (identifier.equals(DESIGN_REPORT_LANDSCAPE)) {
            return exportLandscape();
        } else if (identifier.equals(DESIGN_REPORT_SHAPES)) {
            return exportShapes();
        } else if (identifier.equals(DESIGN_REPORT_ROTATION)) {
            return exportRotation();
        } else if (identifier.equals(DESIGN_REPORT_PDFCRYPT)) {
            return exportEncrypt();
        } else if (identifier.equals(DESIGN_REPORT_PARAGRAPH)) {
            return exportParagraph();
        } else if (identifier.equals(DESIGN_REPORT_STYLEDTEXT)) {
            return exportStyledText();
        } else if (identifier.equals(DESIGN_REPORT_CDBOOCKLET)) {
            return exportCDBooklet();
        } else if (identifier.equals(DESIGN_REPORT_JSON)) {
            return exportJsonDataSource();
        }

        return null;
    }

    private PdfReporter getExporter(String jrxmlPath, String reportFolder, String extraFolder) {
        //path to root folder with all reports
        final String rootFolder = getRootFolder();
        final String resourceFolder = getResourcesFolder();

        RepositoryManager repo = RepositoryManager.getInstance();
        repo.reset();
        repo.setDefaultResourceFolder(resourceFolder);
        repo.setDefaulReportFolder(rootFolder + RepositoryManager.PATH_DELIMITER + "jrxml" + RepositoryManager.PATH_DELIMITER + reportFolder);
        if (null != extraFolder) {
            repo.addExtraReportFolder(resourceFolder + RepositoryManager.PATH_DELIMITER + extraFolder);
        }
        repo.addExtraReportFolder(resourceFolder);

        PdfReporter reporter = new PdfReporter(jrxmlPath, getOuputPdfFolder(), new NullOutputFilenameCallback());

        return  reporter;
    }

    private String exportFonts() throws Exception {
        return getExporter(DESIGN_REPORT_FONTS, "fonts", "extra-fonts").exportPdf();
    }

    private String exportShippment() throws Exception {
        return getExporter(DESIGN_REPORT_SHIPMENTS, "crosstabs", "extra-fonts").setSqlSource(getDummySqlDriver(),getDatabasePath(), null, null).exportPdf();
    }

    private String exportMasterReport() throws Exception {
        return getExporter(DESIGN_REPORT_MASTER, "subreports", "extra-fonts")
                .addSubreport("ProductsSubreport", "ProductReport.jasper")
                .setSqlSource(getDummySqlDriver(),getDatabasePath(), null, null)
                .exportPdf();
    }

    private String exportProducts() throws Exception {
        return getExporter(DESIGN_REPORT_PRODUCTS, "crosstabs", "extra-fonts").setSqlSource(getDummySqlDriver(),getDatabasePath(), null, null).exportPdf();
    }

    private String exportStretch() throws Exception {
        return getExporter(DESIGN_REPORT_STRETCH, "stretch", null).exportPdf();
    }

    private String exportTabular() throws Exception {
        return getExporter(DESIGN_REPORT_TABULAR, "tabular", "extra-fonts").exportPdf();
    }

    private String exportOrders() throws Exception {
        return getExporter(DESIGN_REPORT_ORDERS, "crosstabs", "extra-fonts").setXmlSource(getResourcesFolder() + "/" + XML_DATA_NORTHWIND, XPATH_DATA_NORTHWIND_ORDERS).exportPdf();
    }

    private String exportLateOrder() throws Exception {
        return getExporter(DESIGN_REPORT_LATE_ORDERS, "crosstabs", "extra-fonts").setXmlSource(getResourcesFolder() + "/" + XML_DATA_NORTHWIND, XPATH_DATA_NORTHWIND_ORDERS_SHIPPED_NOT_NULL).exportPdf();
    }

    private String exportImages() throws Exception {
        return getExporter(DESIGN_REPORT_IMAGE, "images", null).exportPdf();
    }

    private String exportLandscape() throws Exception {
        return getExporter(DESIGN_REPORT_LANDSCAPE, "landscape", null).exportPdf();
    }

    private String exportShapes() throws Exception {
        return getExporter(DESIGN_REPORT_SHAPES, "shapes", null).exportPdf();
    }

    private String exportRotation() throws Exception {
        return getExporter(DESIGN_REPORT_ROTATION, "misc", null).exportPdf();
    }

    private String exportEncrypt() throws Exception {
        return getExporter(DESIGN_REPORT_PDFCRYPT, "misc", null).addEncryption(true, "jasper", "reports", IDocument.PERMISSION_COPY | IDocument.PERMISSION_PRINT).exportPdf();
    }

    private String exportParagraph() throws Exception {
        return getExporter(DESIGN_REPORT_PARAGRAPH, "text", "extra-fonts").exportPdf();
    }

    private String exportStyledText() throws Exception {
        return getExporter(DESIGN_REPORT_STYLEDTEXT, "text", "extra-fonts").exportPdf();
    }

    private String exportCDBooklet() throws Exception {
        return getExporter(DESIGN_REPORT_CDBOOCKLET, "cdbooklet", "extra-fonts").setXmlSource(getResourcesFolder() + "/" + XML_DATA_CDBOOKLET, XPATH_DATA_CDBOOKLET).exportPdf();
    }

    private String getDummySqlDriver() {
        return "java.lang.Object";
    }

    private String exportJsonDataSource() throws Exception{
        return getExporter(DESIGN_REPORT_JSON, "jsondatasource","extra-fonts")
                .addSubreport("JsonOrdersReport", "JsonOrdersReport.jasper")
                .addJSONParams("yyyy-MM-dd", "#,##0.##", "en", "en_US")
                .setJsonSource()
                .exportPdf();
    }
}
