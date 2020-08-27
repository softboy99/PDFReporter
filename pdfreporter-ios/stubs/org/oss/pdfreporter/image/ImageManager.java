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
package org.oss.pdfreporter.image;

import java.io.IOException;
import java.io.InputStream;
import java.util.Collection;

import org.oss.pdfreporter.net.IURL;
import org.oss.pdfreporter.registry.ISessionObject;

/**
 * STUB FOR COMPILATION ONLY
 * @author donatmuller, 2013, last change 10:00:14 AM
 */
public class ImageManager implements IImageManager {

	@Override
	public void dispose() {
	}

	@Override
	public void get(final String key) {
	}

	@Override
	public void put(final String key, final ISessionObject value) {
	}

	@Override
	public void remove(final String key) {
	}

	@Override
	public Collection<IImage> getLoadedImages() {
		return null;
	}

	@Override
	public IImage loadImage(final String filePath) throws IOException {
		return null;
	}

	@Override
	public IImage loadImage(final String filePath, final float quality, final float scale)
			throws IOException {
		return null;
	}

	@Override
	public IImage loadImage(final InputStream image) throws IOException {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public IImage loadImage(final IURL fileURL) throws IOException {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public IImage loadImage(final InputStream image, final float quality, final float scale)
			throws IOException {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public IImage loadImage(final IURL fileUrl, final float quality, final float scale)
			throws IOException {
		// TODO Auto-generated method stub
		return null;
	}

}
