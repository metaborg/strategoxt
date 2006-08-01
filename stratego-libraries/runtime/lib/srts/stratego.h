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
#include <assert.h>
#include <aterm2.h>
#include "stratego-config.h"
#include "aterm-extension.h"  
#include "stratego-dynamic-call.h"

typedef struct str_frame *StrSL;
typedef struct str_closure *StrCL;

struct str_closure 
{
  ATerm (*fun)();
  StrSL sl;
};

struct str_frame 
{
  StrSL parent;
  ATerm **vars;  
  StrCL *funs;
};

#define sl_decl(par) \
  struct str_frame frame; \
  frame.parent = par; 

#define sl_vars(n) \
  ATerm *sl_vars[n]; \
  frame.vars = sl_vars; 

#define sl_funs(n) \
  StrCL sl_funs[n]; \
  frame.funs = sl_funs;

#define sl_init_var(i,x) sl_vars[i] = &(x);
#define sl_init_fun(i,cl) sl_funs[i] = cl;

#define sl_up(sl) ((sl)->parent)

#define sl_readvar(i,s)  (*sl_writevar(i,s))
#define sl_writevar(i,s) (*(((s)->vars)+i))

#define sl_fun(i,s)    ((*(((s)->funs)+i))->fun)
#define sl_fun_sl(i,s) ((*(((s)->funs)+i))->sl)

#define sl_fun_cl(i,s) (*(((s)->funs)+i))

#define cl_fun(cl) (cl->fun)
#define cl_sl(cl) (cl->sl)


/**
 * Global variable that is used to construct a linked list
 * of initializers in the Stratego libraries and application.
 */
extern void (* SRTS_stratego_initialize)(void);
extern ATerm SRTS_default_xtc_repository;

ATerm _Id(StrSL, ATerm);
ATerm _Fail(StrSL, ATerm);
ATerm SRTS_all(StrSL, StrCL, ATerm);
ATerm SRTS_one(StrSL, StrCL, ATerm);
ATerm SRTS_some(StrSL, StrCL, ATerm);

#define _fail(x) return(NULL)

void SRTS_init_mprotect(void);

#define match_cons(t, sym) \
        ((ATgetType(t) == AT_APPL) && (ATgetSymbol(t) == (sym)))

#define match_string(t, str) \
        ((ATgetType(t) == AT_APPL) && (ATgetSymbol((ATermAppl)t) == ATmakeSymbol(str, 0, ATtrue)))

#define match_int(t, i) \
        ((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt)t) == i))

#define match_real(t, i) \
        ((ATgetType(t) == AT_REAL) && (ATgetInt((ATermReal)t) == i))

#endif
