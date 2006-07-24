/*-
 * See the file LICENSE for redistribution information.
 *
 * Copyright (c) 1997-2006
 *	Sleepycat Software.  All rights reserved.
 *
 * $Id: RepQuoteEnvironment.java,v 1.2 2006/06/27 22:48:15 bostic Exp $
 */

package db.repquote;

import com.sleepycat.db.*;

/*
 * A simple wrapper class, that facilitates storing some
 * custom information with an Environment object.
 * The information is used by the Replication callback (handleEvent).
 */
public class RepQuoteEnvironment extends Environment
{
    private boolean isMaster;

    public RepQuoteEnvironment(final java.io.File host,
        EnvironmentConfig config)
        throws DatabaseException, java.io.FileNotFoundException
    {
        super(host, config);
        isMaster = false;
    }

    boolean getIsMaster()
    {
        return isMaster;
    }

    public void setIsMaster(boolean isMaster)
    {
        this.isMaster = isMaster;
    }
}

