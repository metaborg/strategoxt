/*

SRTS -- The Stratego Run-Time System

Copyright (c) 1998-2003 Eelco Visser <visser@acm.org>

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
USA

*/

#ifndef SRTS_ATERM_EXTENSION_H
#define SRTS_ATERM_EXTENSION_H

#include <aterm2.h>

/* Extension of ATerm library */

#define t_string(t) ATgetName(ATgetSymbol(t))

#define t_is_appl(t) (ATgetType(t) == AT_APPL)

#define t_is_string(t) (t_is_appl(t) && ATisQuoted(ATgetSymbol(t)))
#define AT_isString(t) (t_is_appl(t) && ATisQuoted(ATgetSymbol(t)))

#define ATisReal(t) (ATgetType(t) == AT_REAL)
#define ATisInt(t)  (ATgetType(t) == AT_INT)
#define ATisBlob(t) (ATgetType(t) == AT_BLOB)
#define ATisList(t) (ATgetType(t) == AT_LIST)

#define AT_getInt(t)    (ATisInt(t) ? (((ATermInt)t)->value) : (int)_fail(t))
#define AT_getString(t) (AT_isString(t) ? ((const char*) ATgetName(ATgetSymbol(t))) : (char*)_fail(t))

// ATerm list_to_consnil(ATerm t);
// ATerm list_to_tconstnil(ATerm t);
// ATerm list_to_consnil_op(ATermList t);
// ATerm list_to_consnil_op_tl(ATermList t, ATerm tl);
// ATerm list_to_consnil_shallow(ATerm t);
// ATerm list_to_tconstnil_op(ATermList t);
// ATerm consnil_to_list(ATerm t);
// ATerm consnil_to_list_shallow(ATerm t);
// ATerm tuple_cong(ATermList t);
// ATerm list_cong(ATermList t, ATerm tl);

#define MakeInt(n) ((ATerm)ATmakeInt(n))

ATerm ATmakeString(const char *name);
ATerm ATmakeStringQ(const char *name);
ATbool ATisString(ATerm t);
ATbool ATisThisString(ATerm t, const char *name);
ATermList ATmap(ATermList l, ATerm (* f)(ATerm));
ATbool AThasName(ATerm t, const char *name);

ATermList CheckATermList(ATerm t);

ATerm App0(const char *name);
ATerm App1(const char *name, ATerm arg1);
ATerm App2(const char *name, ATerm arg1, ATerm arg2);
ATerm App3(const char *name, ATerm arg1, ATerm arg2, ATerm arg3);
ATerm App4(const char *name, ATerm arg1, ATerm arg2, ATerm arg3, ATerm arg4);
ATerm App5(const char *name, ATerm arg1, ATerm arg2, ATerm arg3, ATerm arg4, ATerm arg5);
ATerm App6(const char *name, ATerm arg1, ATerm arg2, ATerm arg3, ATerm arg4, ATerm arg5, ATerm arg6);
ATerm App7(const char *name, ATerm arg1, ATerm arg2, ATerm arg3, ATerm arg4, ATerm arg5, ATerm arg6, ATerm arg7);

ATerm AppN(const char *name, ATermList args);

#endif

