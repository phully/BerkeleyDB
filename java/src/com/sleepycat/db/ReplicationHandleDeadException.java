/*-
 * See the file LICENSE for redistribution information.
 *
 * Copyright (c) 1997-2006
 *	Sleepycat Software.  All rights reserved.
 *
 * $Id: ReplicationHandleDeadException.java,v 12.3 2006/07/14 07:45:58 mjc Exp $
 */
package com.sleepycat.db;

import com.sleepycat.db.internal.DbEnv;

public class ReplicationHandleDeadException extends DatabaseException {
    /* package */ ReplicationHandleDeadException(final String s,
                                   final int errno,
                                   final DbEnv dbenv) {
        super(s, errno, dbenv);
    }
}
