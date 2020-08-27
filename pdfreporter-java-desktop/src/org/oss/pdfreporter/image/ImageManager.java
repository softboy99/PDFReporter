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

import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.image.BufferedImage;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;

import javax.imageio.IIOImage;
import javax.imageio.ImageIO;
import javax.imageio.ImageWriteParam;
import javax.imageio.ImageWriter;

import org.oss.pdfreporter.image.AbstractImageManager;
import org.oss.pdfreporter.image.IImage;
import org.oss.pdfreporter.net.IURL;

import com.lowagie.text.BadElementException;

public class ImageManager extends AbstractImageManager {

	
	ImageManager() {
		super();
	}

	@Override
	IImage loadImageInternal(String filePath, float quality, float scale) throws IOException {
		BufferedImage bufferedImage = ImageIO.read(new File(filePath));
		com.lowagie.text.Image iTextImage = loadImageInternal(bufferedImage, quality, scale);
		return new Image(this, iTextImage);
	}

	
	@Override
	IImage loadImageInternal(InputStream image, float quality, float scale)
			throws IOException {
		BufferedImage bufferedImage = ImageIO.read(image);
		com.lowagie.text.Image iTextImage = loadImageInternal(bufferedImage, quality, scale);
		return new Image(this, iTextImage);
	}

	@Override
	IImage loadImageInternal(IURL urlPath, float quality, float scale)
			throws IOException {
		BufferedImage bufferedImage = ImageIO.read(urlPath.openStream());
		com.lowagie.text.Image iTextImage = loadImageInternal(bufferedImage, quality, scale);
		return new Image(this, iTextImage);
	}

	@Override
	void disposeInternal() {
	}

	private com.lowagie.text.Image loadImageInternal(BufferedImage bufferedImage, float quality, float scale) throws IOException {
		if(quality>0 && scale>0) {
			int width = (int) (bufferedImage.getWidth()*scale);
			int height = (int) (bufferedImage.getHeight()*scale);
			BufferedImage resized = new BufferedImage(width, height, bufferedImage.getType());
		    Graphics2D g = resized.createGraphics();
		    g.setRenderingHint(RenderingHints.KEY_INTERPOLATION, RenderingHints.VALUE_INTERPOLATION_BILINEAR);
		    g.drawImage(bufferedImage, 0, 0, width, height, 0, 0, bufferedImage.getWidth(), bufferedImage.getHeight(), null);
		    g.dispose();
		    
		    ImageWriter writer = ImageIO.getImageWritersByFormatName("jpeg").next();
		    ImageWriteParam iwp = writer.getDefaultWriteParam();
		    iwp.setCompressionMode(ImageWriteParam.MODE_EXPLICIT);
		    iwp.setCompressionQuality(quality);
		    
		    ByteArrayOutputStream bout = new ByteArrayOutputStream();
		    writer.setOutput(ImageIO.createImageOutputStream(bout));
		    writer.write(null, new IIOImage(resized, null, null), iwp);
		    
		    bout.flush();
		    byte[] byteArray = bout.toByteArray();
		    
			try {
				return com.lowagie.text.Image.getInstance(byteArray);
			} catch (BadElementException e) {
				throw new IOException(e);
			}
		}
		else {
			try {
				return com.lowagie.text.Image.getInstance(bufferedImage,null,false);
			} catch (BadElementException e) {
				throw new IOException(e);
			}
		}
	}
}
