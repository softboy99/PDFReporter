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
package org.oss.pdfreporter.pdf;

import java.util.ArrayList;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;

import org.oss.pdfreporter.font.IFont;
import org.oss.pdfreporter.geometry.IRectangle;
import org.oss.pdfreporter.text.HorizontalAlignment;
import org.oss.pdfreporter.text.Paragraph;
import org.oss.pdfreporter.text.ParagraphText;


public class ParagraphRenderer {
	private final static Logger logger = Logger.getLogger(ParagraphRenderer.class.getName());
	private static float LEADING_FACTOR = 1.25f;
	private final Paragraph paragraph;
	private final HorizontalAlignment alignment;
	private final IRectangle bounding;
	private final List<ParagraphText> textLine;
	private float leading;
	private float y, widthLeft;
	
	public ParagraphRenderer(final Paragraph paragraph,
			final HorizontalAlignment alignment, final IRectangle bounding) {
		super();
		this.paragraph = paragraph;
		this.alignment = alignment;
		this.bounding = bounding;
		this.textLine = new ArrayList<ParagraphText>();
	}
	
	public void render(final IPage page, final boolean wordwrap) {
		page.beginText();
		leading = 0;
		y = bounding.getY();
		widthLeft = bounding.getWidth();
		for (final ParagraphText text : paragraph) {
			final int chars = text.measureText(widthLeft, wordwrap);
			if (chars<text.getLength()) {
				add(text.split(calcSpiltPos(chars,wordwrap)));
				renderLine(page);
			} else {
				add(text);
				// TODO (27.06.2013, Donat, Open Software Solutions): Hack to render Styled Text Report (add proper support for linebreaks and tabs)
				if (text.getText().contains("\n")) {
					renderLine(page);
				}
			}
		}
		renderLine(page);
		page.endText();
	}

	private int calcSpiltPos(int splitpos, final boolean wordwrap) {
		if (wordwrap && splitpos > 0) {
			if (alignment==HorizontalAlignment.ALIGN_RIGHT) {
				splitpos--;
			}
		}
		return splitpos;
	}

	private void add(final ParagraphText text) {
		textLine.add(text);
		widthLeft -= text.getWidth();
		leading = Math.max(leading, text.getFont().getSize() * LEADING_FACTOR);
	}

	private void renderLine(final IPage page) {
		float x;
		switch (alignment) {
		case ALIGN_LEFT:
			x = bounding.getX();
			break;
		case ALIGN_RIGHT:
			x = bounding.getX() + widthLeft;
			break;
		case  ALIGN_CENTER:
			x = bounding.getX() + widthLeft / 2;
			break;
		case ALIGN_JUSTIFY:
			// TODO adjust word and character spacing to consume widthLeft
			// How is this done best with different fonts and sizes  ?
		default:	
			x = bounding.getX();
		}
		for (final ParagraphText text : textLine) {
			// TODO render background
			if (logger.isLoggable(Level.FINEST)) {
				final IFont font = text.getFont();
				logger.finest(String.format("text: %s, fontName: %s, fontStyle: %s, fontDecoration: %s, fontSize: %s ", text.getText(), font.getName(), font.getStyle(), font.getDecoration(), font.getSize()));
			}
			page.setFont(text.getFont());
			page.setRGBColorFill(text.getForeground());
			page.setTextPos(x, y);
			page.textOut(text.getText());
			x += text.getWidth();
		}
		y -= leading;
		leading = 0;
		widthLeft = bounding.getWidth();
		textLine.clear();
	}

}
