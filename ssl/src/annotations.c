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

/* Annotations */

#include <srts/stratego.h>
#include "tuples.h"

void *_get_annotation(void)
{
  ATerm trm, label, anno;
  /* ATfprintf(stderr, "<get-annotation> %t\n", Ttop()); */
  if(MatchPair(Ttop(), &trm, &label))
    {
      anno = ATgetAnnotation(trm, label);
      /* ATfprintf(stderr, "  anno = %d\n", anno); */
      if(anno == NULL)
	return fail_address;
      else 
	{
	  Tset(anno);
	  return NULL;
	}
    }
  return fail_address;
}

void *_set_annotation(void)
{
  ATerm trm, label, anno;
  if(MatchTriple(Ttop(), &trm, &label, &anno))
    {
      Tset(ATsetAnnotation(trm, label, anno));
      return NULL;
    }
  return fail_address;
}
