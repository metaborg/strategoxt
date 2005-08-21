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

#ifndef SRTS_STRATEGO_H
#define SRTS_STRATEGO_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <assert.h>
#include <aterm2.h>
#include "stratego-config.h"
#include "aterm-extension.h"  
#include "stratego-choice.h"
#include "stratego-dynamic-call.h"

/**
 * Global variable that is used to construct a linked list
 * of initializers in the Stratego libraries and application.
 */
extern void (* SRTS_stratego_initialize)(void);
extern ATerm SRTS_default_xtc_repository;

ATerm _Id(ATerm);
ATerm _Fail(ATerm);
ATerm _all(ATerm, ATerm f(ATerm));
ATerm _one(ATerm, ATerm f(ATerm));
ATerm _some(ATerm, ATerm f(ATerm));

#define _fail(x) return(NULL)

#define SRTS_all(f, t)    _all(t, f)
#define SRTS_one(f, t)    _one(t, f)
#define SRTS_some(f, t)   _some(t, f)

void SRTS_init_mprotect(void);

#define match_cons(t, sym) \
        ((ATgetType(t) == AT_APPL) && (ATgetSymbol(t) == (sym)))

#define match_string(t, str) \
        ((ATgetType(t) == AT_APPL) && (ATgetSymbol((ATermAppl)t) == ATmakeSymbol(str, 0, ATtrue)))

#define match_int(t, i) \
        ((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt)t) == i))

#define match_real(t, i) \
        ((ATgetType(t) == AT_REAL) && (ATgetInt((ATermReal)t) == i))

//#define not_null(x) (x == NULL ? _fail(x) : x)


#endif
