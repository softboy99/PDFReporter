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
package test.org.oss.pdfreporter.providers;

import java.io.IOException;

import org.oss.pdfreporter.engine.JREmptyDataSource;
import org.oss.pdfreporter.net.IURL;
import org.oss.pdfreporter.pdf.IDocument;
import org.oss.pdfreporter.registry.ApiRegistry;
import org.oss.pdfreporter.repo.FileResourceLoader;

import test.org.oss.pdfreporter.testcases.compare.Platform;

public class DesktopTestProvider implements TestProviderInterface{

	@Override
	public String inputPath(String input) {
		return "../pdfreporter-testdata/"+input;
	}

	@Override
	public String outputPath(String input) {
		return "../pdfreporter-testdata/"+input;
	}

	@Override
	public Object loadImage(String name) throws IOException {
		IURL url = FileResourceLoader.findFirstConfiguredFileResource(name);
		return ApiRegistry.getImageFactory().getImageManager().loadImage(url.getPath());
	}

	@Override
	public Object createEmptyDatasource(int rows) {
		return new JREmptyDataSource(rows);
	}

	@Override
	public int getReadAndPrintPermission() {
		return IDocument.PERMISSION_COPY | IDocument.PERMISSION_PRINT;
	}

	@Override
	public boolean isPlatform(Platform platform) {
		return Platform.DESKTOP==platform;
	}

	@Override
	public IURL getImageUrl(String name) throws IOException {
		return FileResourceLoader.findFirstConfiguredFileResource(name);
	}
}
