/*

Copyright (C) 1998-2001 Eelco Visser <visser@acm.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.

*/

#ifndef UTIL_H
#define UTIL_H

#include <string.h>

#ifndef streq
#  define streq(s,t)	(!(strcmp(s,t)))
#endif

#ifndef MIN
#  define MIN(a,b)	((a) < (b) ? (a) : (b))
#endif

#ifndef MAX
#  define MAX(a,b)	((a) > (b) ? (a) : (b))
#endif

#define IDX_TOTAL               0
#define IDX_MIN                 1
#define IDX_MAX                 2

#define STATS(array, value)  \
  array[IDX_TOTAL] += value; \
  if(value < array[IDX_MIN]) \
    array[IDX_MIN] = value;  \
  if(value > array[IDX_MAX]) \
    array[IDX_MAX] = value
		            

#define MYMAXINT 0x7FFFFFFF

#endif
