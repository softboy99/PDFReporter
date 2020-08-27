/*******************************************************************************
 * Copyright (c) 2015 Open Software Solutions GmbH.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Public License v3.0
 * which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Contributors:
 *     Open Software Solutions GmbH
 ******************************************************************************/
package org.oss.pdfreporter.font.text;

import java.util.logging.Level;
import java.util.logging.Logger;

import org.oss.pdfreporter.text.AttributedStringConverter;
import org.oss.pdfreporter.text.Paragraph;
import org.oss.pdfreporter.uses.java.awt.text.AttributedString;
import org.oss.pdfreporter.uses.java.awt.text.IAttributedCharacterIterator;


public class LineBreakMeasurer implements ILineBreakMeasurer {
	private final static Logger logger = Logger.getLogger(LineBreakMeasurer.class.getName());

	private final Paragraph paragraph;
	private final IBreakIterator wordBreakIterator;
	private final IBreakIterator characterBreakIterator;
	private final int limit;
    private int start;
    private int pos;
	
	public LineBreakMeasurer(final AttributedString attributedText, final String plainText, final IBreakIterator breakIterator) {
		final IAttributedCharacterIterator charcterIterator = attributedText.getIterator();
		this.limit = charcterIterator.getEndIndex();
	    this.pos = this.start = charcterIterator.getBeginIndex();
	    this.paragraph = AttributedStringConverter.convert(attributedText, plainText);
	    this.wordBreakIterator = breakIterator;
	    this.wordBreakIterator.setText(paragraph);
	    this.characterBreakIterator = new CharacterBreakIterator();
	    this.characterBreakIterator.setText(paragraph);
	}
	
	public LineBreakMeasurer(final AttributedString attributedText, final String plainText) {
		this(attributedText,plainText,new WordBreakIterator());
	}

	public LineBreakMeasurer(final AttributedString attributedText, final IBreakIterator breakIterator) {
		this(attributedText,AttributedStringConverter.getPlainText(attributedText),breakIterator);
	}

	public LineBreakMeasurer(final AttributedString attributedText) {
		this(attributedText,new WordBreakIterator());
	}
	
	@Override
	public int nextOffset(final float wrappingWidth) {
		return nextOffset(wrappingWidth, limit, false);
	}

	@Override
	public int nextOffset(final float wrappingWidth, final int offsetLimit,
			final boolean requireNextWord) {
		int nextOffset = pos;
		if (pos < limit) {	
            if (offsetLimit <= pos) {
                throw new IllegalArgumentException("offsetLimit must be after current position");
            }
            nextOffset += wordBreakIterator.next(wrappingWidth);
            if (pos==nextOffset && !requireNextWord) {
            	nextOffset += characterBreakIterator.next(wrappingWidth);
            }
	        if (nextOffset > offsetLimit) {
	            nextOffset = offsetLimit;
	        }
		}
		return nextOffset;
	}

	@Override
	public ITextLayout nextLayout(final float wrappingWidth) {
		return nextLayout(wrappingWidth, limit, false);
	}

	@Override
	public ITextLayout nextLayout(final float wrappingWidth, final int offsetLimit,
			final boolean requireNextWord) {
		final int currentOffset = pos;
		final int nextOffset = nextOffset(wrappingWidth,offsetLimit,requireNextWord);
		if (currentOffset==nextOffset && requireNextWord) {
			return null;
		}
		setPosition(nextOffset);
		final Paragraph textLine = paragraph.subParagraph(currentOffset, nextOffset);
        final ITextLayout textLayout = new TextLayout(textLine, nextOffset - currentOffset);
		if (logger.isLoggable(Level.FINER)) {
			logger.finer(textLayout.toString());
		}
		return textLayout;
	}
	
	
	@Override
	public int getPosition() {
		if (logger.isLoggable(Level.FINEST)) {
			logger.finest(String.format("%s", pos));
		}
        return pos;
	}

	@Override
	public void setPosition(final int newPosition) {
        if (newPosition < start || newPosition > limit) {
            throw new IllegalArgumentException("position is out of range");
        }
		if (newPosition < limit) {	
			final Paragraph nextParagraph = paragraph.subParagraph(newPosition);
			wordBreakIterator.setText(nextParagraph);
			characterBreakIterator.setText(nextParagraph);
		}
        pos = newPosition;
	}

	@Override
	public void insertChar(final IAttributedCharacterIterator newParagraph,
			final int insertPos) {
		throw new UnsupportedOperationException();
	}

	@Override
	public void deleteChar(final IAttributedCharacterIterator newParagraph,
			final int deletePos) {
		throw new UnsupportedOperationException();
	}

	
}
