/*******************************************************************************
 * Copyright (c) 2013 Open Software Solutions GmbH.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Public License v3.0
 * which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Contributors:
 *     Open Software Solutions GmbH - initial API and implementation
 ******************************************************************************/
package org.oss.pdfreporter.xml.parsers.wrapper;

import java.io.InputStream;
import java.io.Reader;

import org.oss.pdfreporter.xml.parsers.IInputSource;
import org.xml.sax.InputSource;


public class UnmarshallingInputSource extends InputSource {
	private final IInputSource delegate;

	public UnmarshallingInputSource(IInputSource delegate) {
		super();
		this.delegate = delegate;
	}

	public IInputSource getDelegate() {
		return delegate;
	}

	@Override
	public void setByteStream(InputStream byteStream) {
		delegate.setByteStream(byteStream);
	}

	@Override
	public InputStream getByteStream() {
		return delegate.getByteStream();
	}

	@Override
	public void setCharacterStream(Reader characterStream) {
		delegate.setCharacterStream(characterStream);
	}

	@Override
	public Reader getCharacterStream() {
		return delegate.getCharacterStream();
	}
	
}
