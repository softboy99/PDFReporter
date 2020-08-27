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
import java.io.InputStream;
import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.logging.Logger;

import org.oss.pdfreporter.net.IURL;
import org.oss.pdfreporter.registry.ISessionListener;
import org.oss.pdfreporter.registry.ISessionObject;


public abstract class AbstractImageManager implements IImageManager, ISessionListener {

	private final Logger logger = Logger.getLogger(AbstractImageManager.class.getName());
	private final Map<String,IImage> imageCache;
	
	AbstractImageManager() {
		imageCache = new HashMap<String, IImage>();
	}
	
	@Override
	public IImage loadImage(String filePath) throws IOException {
		return loadImage(filePath, 0.0f, 0.0f);
	}
	
	
	@Override
	public IImage loadImage(InputStream image) throws IOException {
		return loadImage(image, 0.0f, 0.0f);
	}

	@Override
	public IImage loadImage(IURL fileURL) throws IOException {
		return loadImage(fileURL, 0.0f, 0.0f);
	}

	@Override
	public IImage loadImage(String filePath, float quality, float scale) throws IOException {
		String key = filePath + " quality:" + quality + " scale:" + scale;
		if (!imageCache.containsKey(key)) {
			imageCache.put(key, new FileImageProxy(this, filePath, quality, scale));
			logger.finest("Caching image: " + filePath);
		} else {
			logger.finest("Load Image from cache: " + key);
		}
		return imageCache.get(key);
	}

	@Override
	public IImage loadImage(InputStream image, float quality, float scale) throws IOException {
		String key = "InputStream@" + image + " quality:" + quality + " scale:" + scale;
		if (!imageCache.containsKey(key)) {
			imageCache.put(key, new StreamImageProxy(this, image, quality, scale));
			logger.finest("Caching image: InputStream@" + image);
		} else {
			logger.finest("Load Image from cache: " + key);
		}
		return imageCache.get(key);
	}

	@Override
	public IImage loadImage(IURL urlPath, float quality, float scale) throws IOException {
		String key = urlPath.getPath() + " quality:" + quality + " scale:" + scale;
		if (!imageCache.containsKey(key)) {
			imageCache.put(key, new UrlImageProxy(this, urlPath, quality, scale));
			logger.finest("Caching image: " + urlPath.getPath());
		} else {
			logger.finest("Load Image from cache: " + key);
		}
		return imageCache.get(key);
	}

	
	@Override
	public void dispose() {
		imageCache.clear();
		disposeInternal();
	}
	
	@Override
	public void get(String key) {
	}

	@Override
	public void put(String key, ISessionObject value) {
	}

	@Override
	public void remove(String key) {
	}

	
	@Override
	public Collection<IImage> getLoadedImages() {
		return imageCache.values();
	}

	/**
	 * Load an image from file.
	 * @param filePath
	 * @param quality
	 * @param scale
	 * @return IImage
	 * @throws IOException
	 */
	abstract IImage loadImageInternal(String filePath, float quality, float scale) throws IOException;
	
	/**
	 * Load an image from stream.
	 * @param image
	 * @param quality
	 * @param scale
	 * @return IImage
	 * @throws IOException
	 */
	abstract IImage loadImageInternal(InputStream image, float quality, float scale) throws IOException;
	
	/**
	 * Load an image from file.
	 * @param urlPath
	 * @param quality
	 * @param scale
	 * @return IImage
	 * @throws IOException
	 */
	abstract IImage loadImageInternal(IURL urlPath, float quality, float scale) throws IOException;
	
		
	/**
	 * Free all resources of previous loadImageInternal operations.
	 */
	abstract void disposeInternal();

}
