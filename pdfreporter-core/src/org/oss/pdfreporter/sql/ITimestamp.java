/*******************************************************************************
 * Copyright (c) 2013 Open Software Solutions GmbH.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Lesser Public License v3.0
 * which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/lgpl-3.0.html
 * 
 * Contributors:
 *     Open Software Solutions GmbH - initial API and implementation
 ******************************************************************************/
package org.oss.pdfreporter.sql;

/**
 * A Date YYYY-MM-DD HH:MM:SS s+
 * @author donatmuller, 2013, last change 10:27:18 AM
 * 
 */
public interface ITimestamp {
	/**
	 * Milliseconds sins 1.1.1970
	 * @return
	 */
	long getMilliseconds();
}
