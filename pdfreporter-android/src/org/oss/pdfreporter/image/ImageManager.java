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

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;

import org.oss.pdfreporter.net.IURL;

import com.itextpdf.text.BadElementException;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;

//import com.lowagie.text.BadElementException;

public class ImageManager extends AbstractImageManager {

	
	ImageManager() {
		super();
	}

	@Override
	void disposeInternal() {
	}

	
	private byte[] getBytes(final Bitmap bitmap) {
		final ByteArrayOutputStream stream = new ByteArrayOutputStream();
		bitmap.compress(Bitmap.CompressFormat.JPEG, 100, stream);
		return stream.toByteArray();		
	}


	private com.itextpdf.text.Image loadImageInternal(final Bitmap bitmap, final float quality, final float scale) throws IOException {
		if(quality>0 && scale>0) {
			// ignoring quality
			final Bitmap scaledBitmap = Bitmap.createScaledBitmap(bitmap, (int)(bitmap.getWidth() * scale), (int)(bitmap.getHeight()* scale), true);
			try {
				return com.itextpdf.text.Image.getInstance(getBytes(scaledBitmap));
			} catch (final BadElementException e) {
				throw new IOException(e);
			}
		}
		else {
			try {
				return com.itextpdf.text.Image.getInstance(getBytes(bitmap));
			} catch (final BadElementException e) {
				throw new IOException(e);
			}
		}
	}

	@Override
	IImage loadImageInternal(final InputStream imageStream, final float quality, final float scale)
			throws IOException {
		final Bitmap image = BitmapFactory.decodeStream(imageStream);
		final com.itextpdf.text.Image iTextImage = loadImageInternal(image, quality, scale);
		return new Image(this, iTextImage);
	}

	@Override
	IImage loadImageInternal(final IURL imageUrl, final float quality, final float scale)
			throws IOException {
		final Bitmap image = BitmapFactory.decodeStream(imageUrl.openStream());
		final com.itextpdf.text.Image iTextImage = loadImageInternal(image, quality, scale);
		return new Image(this, iTextImage);
	}


	@Override
	IImage loadImageInternal(final String filePath, final float quality, final float scale) throws IOException {
		try {
			final com.itextpdf.text.Image iTextImage = com.itextpdf.text.Image.getInstance(filePath);
			if (scale > 0 ) {
				iTextImage.scalePercent(scale);
			}
			return new Image(this, iTextImage);
		} catch (final BadElementException e) {
			e.printStackTrace();
			throw new RuntimeException("Unable to load image from file: "  + filePath,e);
		}
	}
	
}
