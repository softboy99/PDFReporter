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
