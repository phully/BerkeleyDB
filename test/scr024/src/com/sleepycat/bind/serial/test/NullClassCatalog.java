/*-
 * See the file LICENSE for redistribution information.
 *
 * Copyright (c) 2002-2006
 *	Sleepycat Software.  All rights reserved.
 *
 * $Id: NullClassCatalog.java,v 12.3 2006/06/27 22:48:19 bostic Exp $
 */

package com.sleepycat.bind.serial.test;

import java.io.ObjectStreamClass;
import java.math.BigInteger;

import com.sleepycat.db.DatabaseException;
import com.sleepycat.bind.serial.ClassCatalog;

/**
 * NullCatalog is a dummy Catalog implementation that simply
 * returns large (8 byte) class IDs so that ObjectOutput
 * can be simulated when computing a serialized size.
 *
 * @author Mark Hayes
 */
class NullClassCatalog implements ClassCatalog {

    private long id = Long.MAX_VALUE;

    public void close()
        throws DatabaseException {
    }

    public byte[] getClassID(ObjectStreamClass classFormat)
        throws DatabaseException {

        return BigInteger.valueOf(id--).toByteArray();
    }

    public ObjectStreamClass getClassFormat(byte[] classID)
        throws DatabaseException, ClassNotFoundException {

        return null; // ObjectInput not supported
    }
}
