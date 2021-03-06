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
package org.oss.pdfreporter.repo;

import java.io.File;

import org.oss.pdfreporter.net.FileUrl;
import org.oss.pdfreporter.net.IURL;


public class FileSystemResource {
	private final IURL url;
	private final String folderPath;
	
	public FileSystemResource(File resource) {
		this.url = new FileUrl(resource);
		this.folderPath = resource.getParent();
	}

	public IURL getUrl() {
		return url;
	}

	public String getFolderPath() {
		return folderPath;
	}

}
