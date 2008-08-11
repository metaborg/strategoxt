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
#include "aterm-extension.h"  

typedef struct str_frame *StrSL;
typedef struct str_closure *StrCL;
typedef struct str_funlink *StrFL;
typedef ATerm (*StrFun)();

struct str_funlink
{
  StrFun fun;
  StrFL next;
};

struct str_closure 
{
  StrFL fl;
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
  frame.parent = (par); 

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

#define sl_cl(i,s) (*(((s)->funs)+i))

#define sl_cl_fl(i,s) cl_fl((*(((s)->funs)+i)))
#define sl_cl_sl(i,s) cl_sl((*(((s)->funs)+i)))

#define cl_fl(cl) (cl->fl)
#define cl_sl(cl) (cl->sl)

#define fl_fun(fl) (fl->fun)
#define fl_next(fl) (fl->next)

#define COMMA ,

#define res_cl_call_1(var, cl, arg)             \
{                                               \
  ATerm r_;                                     \
  const StrCL cl_ = cl;                         \
  const StrSL sl_ = cl_sl(cl_);                 \
  StrFL fl_ = cl_fl(cl_);                       \
  do {                                          \
    r_ = fl_fun(fl_)(sl_, arg);                 \
    fl_ = fl_next(fl_);                         \
  } while(!r_ && fl_);                          \
  var = r_;                                     \
}

#define res_cl_call_2(var, cl, arg1, arg2) \
  res_cl_call_1(var, cl, arg1 COMMA arg2)
#define res_cl_call_3(var, cl, arg1, arg2, arg3) \
  res_cl_call_1(var, cl, arg1 COMMA arg2 COMMA arg3)

#include "stratego-dynamic-call.h"

/**
 * Global variable that is used to construct a linked list
 * of initializers in the Stratego libraries and application.
 */
extern void (* SRTS_stratego_initialize)(void);
extern ATerm SRTS_default_xtc_repository;
extern ATerm SRTS_package_name;
extern ATerm SRTS_package_version;
extern ATerm SRTS_package_revision;
extern ATerm SRTS_package_bugreport;



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

#define TRACING_TABLE_SIZE 65536

#endif
