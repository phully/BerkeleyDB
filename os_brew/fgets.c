/*-
 * See the file LICENSE for redistribution information.
 *
 * Copyright (c) 2006
 *	Oracle Corp.  All rights reserved.
 *
 * $Id: fgets.c,v 1.2 2006/09/13 17:38:18 bostic Exp $
 */

#include "db_config.h"

#include "db_int.h"

/*
 * fgets --
 *
 * PUBLIC: #ifndef HAVE_FGETS
 * PUBLIC: char *fgets __P((char *, int, FILE *));
 * PUBLIC: #endif
 */
char *
fgets(s, n, fp)
	char *s;
	int n;
	FILE *fp;
{
	int c;
	char *cs;

	c = 0;
	cs = s;

	while (--n > 0 && (c = fgetc(fp)) != EOF) {
		*cs++ = c;
		if (c == '\n')
			break;
	}
	if (c == EOF && cs == s)
		return (NULL);

	*cs++ = '\0';
	return (s);
}
