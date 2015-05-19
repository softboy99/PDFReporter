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
package org.oss.pdfreporter.image;

import java.io.IOException;

/**
 * Proxy that defers resource allocation until it is needed.
 * @author donatmuller, 2013, last change 3:22:05 PM
 */
public class ImageProxy implements IImage {

	private final AbstractImageManager imageManager;
	private final String filePath;
	private final float quality;
	private final float scale;
	private IImage delegate = null;
		
	ImageProxy(AbstractImageManager imageManager, String filePath, float quality, float scale) {
		super();
		this.imageManager = imageManager;
		this.filePath = filePath;
		this.quality = quality;
		this.scale = scale;
	}

	@Override
	public int getWidth() {
		return getDelegate().getWidth();
	}

	@Override
	public int getHeight() {
		return getDelegate().getHeight();
	}

	@Override
	public Object getPeer() {
		return getDelegate().getPeer();
	}

	
	@Override
	public String getResourcePath() {
		return filePath;
	}
	
	private IImage getDelegate() {
		load();
		return delegate;
	}
	
	private void load() {
		try {
			if (null == delegate) {
					this.delegate = imageManager.loadImageInternal(filePath, quality, scale);
			}
		} catch (IOException e) {
			throw new RuntimeException("Exception while loading image resource :" + filePath);
		}
	}

	@Override
	public IImageManager getImageManager() {
		return imageManager;
	}

}
