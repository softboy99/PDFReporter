/*
 * JasperReports - Free Java Reporting Library.
 * Copyright (C) 2001 - 2011 Jaspersoft Corporation. All rights reserved.
 * http://www.jaspersoft.com
 *
 * Unless you have purchased a commercial license agreement from Jaspersoft,
 * the following license terms apply:
 *
 * This program is part of JasperReports.
 *
 * JasperReports is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * JasperReports is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with JasperReports. If not, see <http://www.gnu.org/licenses/>.
 */
package org.oss.pdfreporter.engine.fill;

import java.util.HashMap;
import java.util.Map;

import org.oss.pdfreporter.engine.JRCommonText;
import org.oss.pdfreporter.engine.JRException;
import org.oss.pdfreporter.engine.JRFont;
import org.oss.pdfreporter.engine.JRLineBox;
import org.oss.pdfreporter.engine.JRParagraph;
import org.oss.pdfreporter.engine.JRPrintText;
import org.oss.pdfreporter.engine.JRPropertiesUtil;
import org.oss.pdfreporter.engine.JRRuntimeException;
import org.oss.pdfreporter.engine.JRStyle;
import org.oss.pdfreporter.engine.JRTextElement;
import org.oss.pdfreporter.engine.fonts.FontUtil;
import org.oss.pdfreporter.engine.type.HorizontalAlignEnum;
import org.oss.pdfreporter.engine.type.LineSpacingEnum;
import org.oss.pdfreporter.engine.type.ModeEnum;
import org.oss.pdfreporter.engine.type.RotationEnum;
import org.oss.pdfreporter.engine.type.RunDirectionEnum;
import org.oss.pdfreporter.engine.type.VerticalAlignEnum;
import org.oss.pdfreporter.engine.util.JRSingletonCache;
import org.oss.pdfreporter.engine.util.JRStringUtil;
import org.oss.pdfreporter.engine.util.JRStyleResolver;
import org.oss.pdfreporter.engine.util.JRStyledText;
import org.oss.pdfreporter.engine.util.JRTextMeasurerUtil;
import org.oss.pdfreporter.engine.util.MarkupProcessor;
import org.oss.pdfreporter.engine.util.MarkupProcessorFactory;
import org.oss.pdfreporter.font.text.TextAttribute;
import org.oss.pdfreporter.geometry.IColor;
import org.oss.pdfreporter.uses.java.awt.text.IAttributedCharacterIterator.Attribute;



/**
 * @author Teodor Danciu (teodord@users.sourceforge.net)
 * @version $Id: JRFillTextElement.java 5765 2012-11-01 16:25:00Z lucianc $
 */
public abstract class JRFillTextElement extends JRFillElement implements JRTextElement
{
	
	public static final String PROPERTY_CONSUME_SPACE_ON_OVERFLOW = 
			JRPropertiesUtil.PROPERTY_PREFIX + "consume.space.on.overflow";

	/**
	 *
	 */
	private static final JRSingletonCache<MarkupProcessorFactory> markupProcessorFactoryCache = 
			new JRSingletonCache<MarkupProcessorFactory>(MarkupProcessorFactory.class);
	private static final Map<String,MarkupProcessor> markupProcessors = new HashMap<String,MarkupProcessor>();

	/**
	 *
	 */
	private boolean isLeftToRight = true;
	private JRTextMeasurer textMeasurer;
	private float lineSpacingFactor;
	private float leadingOffset;
	private float textHeight;
	private int elementStretchHeightDelta;
	private int textStart;
	private int textEnd;
	private short[] lineBreakOffsets;
	private String textTruncateSuffix;
	private String rawText;
	private JRStyledText styledText;
	private final Map<JRStyle,Map<Attribute,Object>> styledTextAttributesMap = new HashMap<JRStyle,Map<Attribute,Object>>();
	
	protected final JRLineBox initLineBox;
	protected final JRParagraph initParagraph;
	private final boolean consumeSpaceOnOverflow;
	protected JRLineBox lineBox;
	protected JRParagraph paragraph;

	/**
	 *
	 */
	protected JRFillTextElement(
		final JRBaseFiller filler,
		final JRTextElement textElement, 
		final JRFillObjectFactory factory
		)
	{
		super(filler, textElement, factory);

		initLineBox = textElement.getLineBox().clone(this);
		initParagraph = textElement.getParagraph().clone(this);

		// not supporting property expressions for this
		this.consumeSpaceOnOverflow = JRPropertiesUtil.getInstance(filler.getJasperReportsContext()).getBooleanProperty(
				textElement, PROPERTY_CONSUME_SPACE_ON_OVERFLOW, true);
	}
	

	protected JRFillTextElement(final JRFillTextElement textElement, final JRFillCloneFactory factory)
	{
		super(textElement, factory);
		
		initLineBox = textElement.getLineBox().clone(this);
		initParagraph = textElement.getParagraph().clone(this);
		this.consumeSpaceOnOverflow = textElement.consumeSpaceOnOverflow;
	}


	private void createTextMeasurer()
	{
		textMeasurer = JRTextMeasurerUtil.getInstance(filler.getJasperReportsContext()).createTextMeasurer(this);
	}

	protected void ensureTextMeasurer()
	{
		if (textMeasurer == null)
		{
			createTextMeasurer();
		}
	}


	/**
	 *
	 */
	@Override
	protected void evaluateStyle(
		final byte evaluation
		) throws JRException
	{
		super.evaluateStyle(evaluation);

		lineBox = null;
		paragraph = null;
		
		if (providerStyle != null)
		{
			lineBox = initLineBox.clone(this);
			paragraph = initParagraph.clone(this);
			JRStyleResolver.appendBox(lineBox, providerStyle.getLineBox());
			JRStyleResolver.appendParagraph(paragraph, providerStyle.getParagraph());
		}
	}


	/**
	 *
	 */
	@Override
	public ModeEnum getModeValue()
	{
		return JRStyleResolver.getMode(this, ModeEnum.TRANSPARENT);
	}

	/**
	 *
	 */
	@Override
	public HorizontalAlignEnum getHorizontalAlignmentValue()
	{
		return JRStyleResolver.getHorizontalAlignmentValue(this);
	}
		
	@Override
	public HorizontalAlignEnum getOwnHorizontalAlignmentValue()
	{
		return providerStyle == null || providerStyle.getOwnHorizontalAlignmentValue() == null ? ((JRTextElement)this.parent).getOwnHorizontalAlignmentValue() : providerStyle.getOwnHorizontalAlignmentValue();
	}

	/**
	 *
	 */
	@Override
	public void setHorizontalAlignment(final HorizontalAlignEnum horizontalAlignment)
	{
		throw new UnsupportedOperationException();
	}
		
	/**
	 *
	 */
	@Override
	public VerticalAlignEnum getVerticalAlignmentValue()
	{
		return JRStyleResolver.getVerticalAlignmentValue(this);
	}
		
	@Override
	public VerticalAlignEnum getOwnVerticalAlignmentValue()
	{
		return providerStyle == null || providerStyle.getOwnVerticalAlignmentValue() == null ? ((JRTextElement)this.parent).getOwnVerticalAlignmentValue() : providerStyle.getOwnVerticalAlignmentValue();
	}

	/**
	 *
	 */
	@Override
	public void setVerticalAlignment(final VerticalAlignEnum verticalAlignment)
	{
		throw new UnsupportedOperationException();
	}
		
	/**
	 *
	 */
	@Override
	public RotationEnum getRotationValue()
	{
		return JRStyleResolver.getRotationValue(this);
	}
		
	@Override
	public RotationEnum getOwnRotationValue()
	{
		return providerStyle == null || providerStyle.getOwnRotationValue() == null ? ((JRTextElement)this.parent).getOwnRotationValue() : providerStyle.getOwnRotationValue();
	}

	/**
	 *
	 */
	@Override
	public void setRotation(final RotationEnum rotation)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 * @deprecated Replaced by {@link JRParagraph#getLineSpacing()}.
	 */
	@Deprecated
	@Override
	public LineSpacingEnum getLineSpacingValue()
	{
		return getParagraph().getLineSpacing();
	}
		
	/**
	 * @deprecated Replaced by {@link JRParagraph#getOwnLineSpacing()}.
	 */
	@Deprecated
	@Override
	public LineSpacingEnum getOwnLineSpacingValue()
	{
		return getParagraph().getOwnLineSpacing();
	}

	/**
	 * @deprecated Replaced by {@link JRParagraph#setLineSpacing(LineSpacingEnum)}.
	 */
	@Deprecated
	@Override
	public void setLineSpacing(final LineSpacingEnum lineSpacing)
	{
		throw new UnsupportedOperationException();
	}
		
	/**
	 *
	 */
	@Override
	public String getMarkup()
	{
		return JRStyleResolver.getMarkup(this);
	}
		
	/**
	 *
	 */
	@Override
	public String getOwnMarkup()
	{
		return providerStyle == null || providerStyle.getOwnMarkup() == null ? ((JRTextElement)parent).getOwnMarkup() : providerStyle.getOwnMarkup();
	}

	/**
	 *
	 */
	@Override
	public void setMarkup(final String markup)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 *
	 */
	@Override
	public JRLineBox getLineBox()
	{
		return lineBox == null ? initLineBox : lineBox;
	}

	/**
	 *
	 */
	@Override
	public JRParagraph getParagraph()
	{
		return paragraph == null ? initParagraph : paragraph;
	}

	/**
	 * @deprecated
	 */
	@Deprecated
	public JRFont getFont()
	{
		return this;
	}

	
	/**
	 *
	 */
	protected Map<Attribute,Object> getStyledTextAttributes()
	{
		final JRStyle style = getStyle();
		Map<Attribute,Object> styledTextAttributes = styledTextAttributesMap.get(style);
		if (styledTextAttributes == null)
		{
			styledTextAttributes = new HashMap<Attribute,Object>(); 
			//JRFontUtil.getAttributes(styledTextAttributes, this, filler.getLocale());
			FontUtil.getInstance(filler.getJasperReportsContext()).getAttributesWithoutAwtFont(styledTextAttributes, this);
			styledTextAttributes.put(TextAttribute.FOREGROUND, getForecolor());
			if (getModeValue() == ModeEnum.OPAQUE)
			{
				styledTextAttributes.put(TextAttribute.BACKGROUND, getBackcolor());
			}
			styledTextAttributesMap.put(style, styledTextAttributes);
		}
		
		return styledTextAttributes;
	}

	/**
	 *
	 */
	protected float getLineSpacingFactor()
	{
		return lineSpacingFactor;
	}
		
	/**
	 *
	 */
	protected void setLineSpacingFactor(final float lineSpacingFactor)
	{
		this.lineSpacingFactor = lineSpacingFactor;
	}

	/**
	 *
	 */
	protected float getLeadingOffset()
	{
		return leadingOffset;
	}
		
	/**
	 *
	 */
	protected void setLeadingOffset(final float leadingOffset)
	{
		this.leadingOffset = leadingOffset;
	}

	/**
	 *
	 */
	public RunDirectionEnum getRunDirectionValue()
	{
		return isLeftToRight ? RunDirectionEnum.LTR : RunDirectionEnum.RTL;
	}
		
	/**
	 *
	 */
	protected float getTextHeight()
	{
		return textHeight;
	}
		
	/**
	 *
	 */
	protected void setTextHeight(final float textHeight)
	{
		this.textHeight = textHeight;
	}

	/**
	 *
	 */
	protected int getTextStart()
	{
		return textStart;
	}
		
	/**
	 *
	 */
	protected void setTextStart(final int textStart)
	{
		this.textStart = textStart;
	}

	/**
	 *
	 */
	protected int getTextEnd()
	{
		return textEnd;
	}
		
	/**
	 *
	 */
	protected void setTextEnd(final int textEnd)
	{
		this.textEnd = textEnd;
	}
	
	protected short[] getLineBreakOffsets()
	{
		return lineBreakOffsets;
	}

	protected void setLineBreakOffsets(final short[] lineBreakOffsets)
	{
		this.lineBreakOffsets = lineBreakOffsets;
	}

	protected void resetTextChunk()
	{
		textStart = 0;
		textEnd = 0;
		textTruncateSuffix = null;
		lineBreakOffsets = null;
		elementStretchHeightDelta = 0;
	}
	
	/**
	 *
	 */
	protected String getRawText()
	{
		return rawText;
	}

	/**
	 *
	 */
	protected void setRawText(final String rawText)
	{
		this.rawText = rawText;
		styledText = null;
	}


	/**
	 *
	 */
	@Override
	protected void reset()
	{
		super.reset();
		
		isLeftToRight = true;
		lineSpacingFactor = 0;
		leadingOffset = 0;
		textHeight = 0;
		elementStretchHeightDelta = 0;
	}


	/**
	 *
	 */
	@Override
	protected void rewind()
	{
		resetTextChunk();
	}


	/**
	 *
	 */
	protected JRStyledText getStyledText()
	{
		if (styledText == null)
		{
			final String text = getRawText();
			if (text != null)
			{
				styledText = 
					filler.getStyledTextParser().getStyledText(
						getStyledTextAttributes(), 
						text, 
						!JRCommonText.MARKUP_NONE.equals(getMarkup()),
						filler.getLocale()
						);
			}
		}
		
		return styledText;
	}

	/**
	 *
	 */
	public String getText()
	{
		final JRStyledText tmpStyledText = getStyledText();

		if (tmpStyledText == null)
		{
			return null;
		}

		return tmpStyledText.getText();
	}
	

	/**
	 *
	 */
	protected void chopTextElement(
		final int availableStretchHeight
		)
	{
		ensureTextMeasurer();
		
		final JRStyledText tmpStyledText = getStyledText();

		if (tmpStyledText == null)
		{
			return;
		}

		if (getTextEnd() == tmpStyledText.getText().length())
		{
			return;
		}

		final boolean canOverflow = canOverflow();
		final JRMeasuredText measuredText = textMeasurer.measure(
			tmpStyledText,
			getTextEnd(),
			availableStretchHeight,
			canOverflow
			);
		
		isLeftToRight = measuredText.isLeftToRight();
		setTextHeight(measuredText.getTextHeight());
		
		elementStretchHeightDelta = 0;
		if (getRotationValue().equals(RotationEnum.NONE))
		{
			//FIXME truncating to int here seems wrong as the text measurer compares 
			// the exact text height against the available height
			final int elementTextHeight = (int) getTextHeight() + getLineBox().getTopPadding() + getLineBox().getBottomPadding();
			final boolean textEnded = measuredText.getTextOffset() >= tmpStyledText.getText().length();
			if (textEnded || !canOverflow || !consumeSpaceOnOverflow)
			{
				setStretchHeight(elementTextHeight);
			}
			else
			{
				// occupy all remaining space so that no other element renders there
				// but do not change the print element height
				final int stretchHeight = getHeight() + availableStretchHeight;
				setStretchHeight(stretchHeight);
				
				// store the difference between the consumed stretch height and the text stretch height.
				// this will be used in fill() to set the print element height, 
				// which doesn't take into account the consumed empty space
				final int textStretchHeight = elementTextHeight > getHeight() ? elementTextHeight : getHeight();
				elementStretchHeightDelta = getStretchHeight() - textStretchHeight;
			}
		}
		else
		{
			setStretchHeight(getHeight());
		}
		
		setTextStart(getTextEnd());
		setTextEnd(measuredText.getTextOffset());
		setLineBreakOffsets(measuredText.getLineBreakOffsets());
		setTextTruncateSuffix(measuredText.getTextSuffix());
		setLineSpacingFactor(measuredText.getLineSpacingFactor());
		setLeadingOffset(measuredText.getLeadingOffset());
	}
	
	protected int getPrintElementHeight()
	{
		return getStretchHeight() - elementStretchHeightDelta;
	}
	
	protected abstract boolean canOverflow();


	/**
	 *
	 */
	@Override
	public String getFontName()
	{
		return JRStyleResolver.getFontName(this);
	}

	/**
	 *
	 */
	@Override
	public String getOwnFontName()
	{
		return providerStyle == null || providerStyle.getOwnFontName() == null ? ((JRFont)parent).getOwnFontName() : providerStyle.getOwnFontName();
	}

	/**
	 *
	 */
	@Override
	public void setFontName(final String fontName)
	{
		throw new UnsupportedOperationException();
	}


	/**
	 *
	 */
	@Override
	public boolean isBold()
	{
		return JRStyleResolver.isBold(this);
	}

	/**
	 *
	 */
	@Override
	public Boolean isOwnBold()
	{
		return providerStyle == null || providerStyle.isOwnBold() == null ? ((JRFont)parent).isOwnBold() : providerStyle.isOwnBold();
	}

	/**
	 *
	 */
	@Override
	public void setBold(final boolean isBold)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 * Alternative setBold method which allows also to reset
	 * the "own" isBold property.
	 */
	@Override
	public void setBold(final Boolean isBold)
	{
		throw new UnsupportedOperationException();
	}


	/**
	 *
	 */
	@Override
	public boolean isItalic()
	{
		return JRStyleResolver.isItalic(this);
	}

	/**
	 *
	 */
	@Override
	public Boolean isOwnItalic()
	{
		return providerStyle == null || providerStyle.isOwnItalic() == null ? ((JRFont)parent).isOwnItalic() : providerStyle.isOwnItalic();
	}

	/**
	 *
	 */
	@Override
	public void setItalic(final boolean isItalic)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 * Alternative setItalic method which allows also to reset
	 * the "own" isItalic property.
	 */
	@Override
	public void setItalic(final Boolean isItalic)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 *
	 */
	@Override
	public boolean isUnderline()
	{
		return JRStyleResolver.isUnderline(this);
	}

	/**
	 *
	 */
	@Override
	public Boolean isOwnUnderline()
	{
		return providerStyle == null || providerStyle.isOwnUnderline() == null ? ((JRFont)parent).isOwnUnderline() : providerStyle.isOwnUnderline();
	}

	/**
	 *
	 */
	@Override
	public void setUnderline(final boolean isUnderline)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 * Alternative setUnderline method which allows also to reset
	 * the "own" isUnderline property.
	 */
	@Override
	public void setUnderline(final Boolean isUnderline)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 *
	 */
	@Override
	public boolean isStrikeThrough()
	{
		return JRStyleResolver.isStrikeThrough(this);
	}

	/**
	 *
	 */
	@Override
	public Boolean isOwnStrikeThrough()
	{
		return providerStyle == null || providerStyle.isOwnStrikeThrough() == null ? ((JRFont)parent).isOwnStrikeThrough() : providerStyle.isOwnStrikeThrough();
	}

	/**
	 *
	 */
	@Override
	public void setStrikeThrough(final boolean isStrikeThrough)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 * Alternative setStrikeThrough method which allows also to reset
	 * the "own" isStrikeThrough property.
	 */
	@Override
	public void setStrikeThrough(final Boolean isStrikeThrough)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 *
	 */
	@Override
	public int getFontSize()
	{
		return JRStyleResolver.getFontSize(this);
	}

	/**
	 *
	 */
	@Override
	public Integer getOwnFontSize()
	{
		return providerStyle == null || providerStyle.getOwnFontSize() == null ? ((JRFont)parent).getOwnFontSize() : providerStyle.getOwnFontSize();
	}

	/**
	 *
	 */
	@Override
	public void setFontSize(final int size)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 * Alternative setSize method which allows also to reset
	 * the "own" size property.
	 */
	@Override
	public void setFontSize(final Integer size)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 *
	 */
	@Override
	public String getPdfFontName()
	{
		return JRStyleResolver.getPdfFontName(this);
	}

	/**
	 *
	 */
	@Override
	public String getOwnPdfFontName()
	{
		return providerStyle == null || providerStyle.getOwnPdfFontName() == null ? ((JRFont)parent).getOwnPdfFontName() : providerStyle.getOwnPdfFontName();
	}

	/**
	 *
	 */
	@Override
	public void setPdfFontName(final String pdfFontName)
	{
		throw new UnsupportedOperationException();
	}


	/**
	 *
	 */
	@Override
	public String getPdfEncoding()
	{
		return JRStyleResolver.getPdfEncoding(this);
	}

	/**
	 *
	 */
	@Override
	public String getOwnPdfEncoding()
	{
		return providerStyle == null || providerStyle.getOwnPdfEncoding() == null ? ((JRFont)parent).getOwnPdfEncoding() : providerStyle.getOwnPdfEncoding();
	}

	/**
	 *
	 */
	@Override
	public void setPdfEncoding(final String pdfEncoding)
	{
		throw new UnsupportedOperationException();
	}


	/**
	 *
	 */
	@Override
	public boolean isPdfEmbedded()
	{
		return JRStyleResolver.isPdfEmbedded(this);
	}

	/**
	 *
	 */
	@Override
	public Boolean isOwnPdfEmbedded()
	{
		return providerStyle == null || providerStyle.isOwnPdfEmbedded() == null ? ((JRFont)parent).isOwnPdfEmbedded() : providerStyle.isOwnPdfEmbedded();
	}

	/**
	 *
	 */
	@Override
	public void setPdfEmbedded(final boolean isPdfEmbedded)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 * Alternative setPdfEmbedded method which allows also to reset
	 * the "own" isPdfEmbedded property.
	 */
	@Override
	public void setPdfEmbedded(final Boolean isPdfEmbedded)
	{
		throw new UnsupportedOperationException();
	}

	
	/**
	 * 
	 */
	@Override
	public IColor getDefaultLineColor() 
	{
		return getForecolor();
	}

	
	/**
	 *
	 */
	@Override
	public void setHeight(final int height)
	{
		super.setHeight(height);
		
		createTextMeasurer();
	}


	@Override
	public void setWidth(final int width)
	{
		super.setWidth(width);
		
		createTextMeasurer();
	}

	protected String processMarkupText(String text)
	{
		text = JRStringUtil.replaceCRwithLF(text);
		
		if (text != null)
		{
			final String markup = getMarkup();
			if (
				!JRCommonText.MARKUP_NONE.equals(markup)
				&& !JRCommonText.MARKUP_STYLED_TEXT.equals(markup)
				)
			{
				text = getMarkupProcessor(markup).convert(text);
			}
		}
		
		return text;
	}

	protected MarkupProcessor getMarkupProcessor(final String markup)
	{
		MarkupProcessor markupProcessor = markupProcessors.get(markup);
		
		if (markupProcessor == null)
		{
			final String factoryClass = filler.getPropertiesUtil().getProperty(MarkupProcessorFactory.PROPERTY_MARKUP_PROCESSOR_FACTORY_PREFIX + markup);
			if (factoryClass == null)
			{
				throw new JRRuntimeException("No markup processor factory specifyed for '" + markup + "' markup.");
			}

			MarkupProcessorFactory factory = null;
			try
			{
				factory = markupProcessorFactoryCache.getCachedInstance(factoryClass);
			}
			catch (final JRException e)
			{
				throw new JRRuntimeException(e);
			}
			
			markupProcessor = factory.createMarkupProcessor();
			markupProcessors.put(markup, markupProcessor);
		}
		
		return markupProcessor;
	}

	protected void setPrintText(final JRPrintText printText)
	{
		final int startIndex = getTextStart();
		//final int endIndex = getTextEnd();
		final JRStyledText fullStyledText = getStyledText();
		final String fullText = fullStyledText.getText();
		// HACK (#84 quick fix attempt)				
		final int endIndex = getTextEnd()==0 && fullText.isEmpty() ? 0 : fullText.length();
		
		final boolean keepAllText = !canOverflow() 
				&& filler.getPropertiesUtil().getBooleanProperty(this, JRTextElement.PROPERTY_PRINT_KEEP_FULL_TEXT, false);
		if (keepAllText)
		{
			//assert getTextStart() == 0
			if (startIndex != 0)
			{
				throw new JRRuntimeException("Text start index != 0 on keep all text.");
			}
			
			if (!JRCommonText.MARKUP_NONE.equals(getMarkup()))
			{
				//rewrite as styled text
				final String styledText = filler.getStyledTextParser().write(
						fullStyledText);
				printText.setText(styledText);
			}
			else
			{
				printText.setText(fullText);
			}
			
			if (endIndex < fullText.length())
			{
				printText.setTextTruncateIndex(Integer.valueOf(endIndex));
			}
		}
		else
		{
			String printedText;
			if (!JRCommonText.MARKUP_NONE.equals(getMarkup()))
			{
				printedText = filler.getStyledTextParser().write(
						fullStyledText, 
						startIndex, endIndex);
			}
			else
			{
				printedText = fullText.substring(startIndex, endIndex);
			}
			printText.setText(printedText);
		}
		
		printText.setTextTruncateSuffix(getTextTruncateSuffix());
		printText.setLineBreakOffsets(getLineBreakOffsets());
	}

	protected String getTextTruncateSuffix()
	{
		return textTruncateSuffix;
	}

	protected void setTextTruncateSuffix(final String textTruncateSuffix)
	{
		this.textTruncateSuffix = textTruncateSuffix;
	}

}
