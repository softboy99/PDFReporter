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
package org.oss.pdfreporter.image;

import org.oss.pdfreporter.exception.NotImplementedException;


public class Image implements IImage {
	private final ImageManager imageManager;
	private final com.itextpdf.text.Image delegate;
	
	Image(ImageManager imageManager, com.itextpdf.text.Image image) {
		this.imageManager = imageManager;
		this.delegate = image;
	}
	@Override
	public int getWidth() {
		return (int) delegate.getPlainWidth();
	}

	@Override
	public int getHeight() {
		return (int) delegate.getPlainHeight();
	}
	
	public com.itextpdf.text.Image getPeer() {
		return delegate;
	}
	@Override
	public String getResourcePath() {
		throw new NotImplementedException();
	}
	@Override
	public IImageManager getImageManager() {
		return imageManager;
	}

}
