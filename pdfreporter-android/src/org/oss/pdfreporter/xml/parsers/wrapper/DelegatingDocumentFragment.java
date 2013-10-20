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

import org.oss.pdfreporter.uses.org.w3c.dom.DocumentFragment;

public class DelegatingDocumentFragment extends DelegatingNode implements DocumentFragment {
	private final org.w3c.dom.DocumentFragment delegate;

	public DelegatingDocumentFragment(org.w3c.dom.DocumentFragment delegate) {
		super(delegate);
		this.delegate = delegate;
	}

	public org.w3c.dom.DocumentFragment getDelegate() {
		return delegate;
	}
}
