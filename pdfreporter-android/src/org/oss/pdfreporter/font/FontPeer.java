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
package org.oss.pdfreporter.font;

import java.util.logging.Level;
import java.util.logging.Logger;

import com.itextpdf.text.pdf.BaseFont;

//import com.lowagie.text.pdf.BaseFont;

public class FontPeer implements IFontPeer {

	private final BaseFont delegate;
	private final IFontMetric fontMetric;
	
	FontPeer(final BaseFont delegate) {
		super();
		this.delegate = delegate;
		this.fontMetric = new FontMetric(delegate);
	}

	@Override
	public IFontMetric getMetric() {
		return fontMetric;
	}

	@Override
	public Object getPeer() {
		return delegate;
	}
	
	private static class FontMetric extends AbstractFontMetric implements IFontMetric {
		private final static Logger logger = Logger.getLogger(FontMetric.class.getName());
		private final BaseFont delegate;
		
		private FontMetric(final BaseFont delegate) {
			super();
			this.delegate = delegate;
		}

		@Override
		public int measureText(final String text, final int width, final boolean wordwrap) {
			int remainingWidth = width;
			int idx=0;
			int lastWordPos = 0;
			while (remainingWidth>0 && idx<text.length()) {
				final char ch = text.charAt(idx);
				if (ch<=' ') {
					lastWordPos = idx + 1;
				}
				remainingWidth-=delegate.getWidth(ch);
				idx++;
			}
			if(remainingWidth<0) idx--;
			final int result = !wordwrap || text.length()==idx ? idx : lastWordPos;
			if (logger.isLoggable(Level.FINEST)) {			
				logger.finest(String.format("%s measureText %s %s %s", result,text,width,wordwrap));
			}		
			return result;
		}

		@Override
		public int getWidth(final String text) {
			return delegate.getWidth(text);
		}
		

	}

}
