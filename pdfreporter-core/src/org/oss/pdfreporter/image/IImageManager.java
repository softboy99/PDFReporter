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

import org.oss.pdfreporter.net.IURL;
import org.oss.pdfreporter.registry.ISessionListener;


public interface IImageManager extends ISessionListener {
	
	/**
	 * Images that are already loaded.
	 * @return
	 */
	Collection<IImage> getLoadedImages();

	/**
	 * Loads an image from file.
	 * @param filePath
	 * @return
	 */
	IImage loadImage(String filePath) throws IOException;
	
	/**
	 * Loads an image from stream.
	 * @param image
	 * @return
	 */
	IImage loadImage(InputStream image) throws IOException;
	
	/**
	 * Loads an image from URL.
	 * @param fileURL
	 * @return
	 */
	IImage loadImage(IURL fileURL) throws IOException;
	
	/**
	 * Loads, rescale and reencode image from file as jpg
	 * @param filePath
	 * @param quality 0 - 1
	 * @param scale 1 = no scaling
	 * @return
	 * @throws IOException
	 */
	IImage loadImage(String filePath, float quality, float scale) throws IOException;
	
	/**
	 * Loads, rescale and reencode image from stream as jpg
	 * @param image
	 * @param quality 0 - 1
	 * @param scale 1 = no scaling
	 * @return
	 * @throws IOException
	 */
	IImage loadImage(InputStream image, float quality, float scale) throws IOException;

	/**
	 * Loads, rescale and reencode image from URL as jpg
	 * @param fileUrl
	 * @param quality 0 - 1
	 * @param scale 1 = no scaling
	 * @return
	 * @throws IOException
	 */
	IImage loadImage(IURL fileUrl, float quality, float scale) throws IOException;
}
