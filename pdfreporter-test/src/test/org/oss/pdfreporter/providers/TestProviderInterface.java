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

import org.oss.pdfreporter.net.IURL;

import test.org.oss.pdfreporter.testcases.compare.Platform;

public interface TestProviderInterface {
	public String inputPath(String input);
	public String outputPath(String input);
	public Object loadImage(String name)  throws IOException;
	public IURL getImageUrl(String name) throws IOException;
	public Object createEmptyDatasource(int rows);
	public int getReadAndPrintPermission();
	public boolean isPlatform(Platform platform);
}
