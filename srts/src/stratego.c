/*

Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>

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
 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <assert.h>
#include <aterm2.h> 
#include "stratego.h"
#include "mprotect.h"

//static Symbol sym_Cons_2;
//static Symbol sym_Nil_0;
//static Symbol sym_Pair_2;
static Symbol sym__2;

void init_constructors_srts()
{
  //sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  //ATprotectSymbol(sym_Cons_2);     
  //sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  //ATprotectSymbol(sym_Nil_0); 
  //sym_Pair_2 = ATmakeSymbol("Pair", 2, ATfalse);
  //ATprotectSymbol(sym_Pair_2);    
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);                              
}

ATerm stratego__main(ATerm);
void init_constructors(void);
//oid init_constant_terms(void);

ATerm _id(ATerm t)
{
  return(t);
}

// Traversal combinators

ATerm _all(ATerm t, ATerm f(ATerm))
{
  ATerm annos = ATgetAnnotations(t);
  switch(ATgetType(t))
    {
    case AT_APPL :
      {
	Symbol c = ATgetSymbol((ATermAppl) t);
	int i, arity = ATgetArity(c);
	ATerm kids[arity];
	for(i = 0; i < arity; i++)
	  kids[i] = f(ATgetArgument(t, i));
	t = (ATerm) ATmakeApplArray(c, kids);
      }
      break;
    case AT_LIST :
      if((ATermList) t != ATempty)
	{
	  t = (ATerm)ATmap((ATermList) t, f);
	}
      break;
    }
  if(annos == NULL)
    return t;
  else
    return(ATsetAnnotations(t, annos));
}

ATerm _one(ATerm t, ATerm f(ATerm))
{
  ATerm annos = ATgetAnnotations(t);
  //ATfprintf(stderr, "_one(%t)\n", t);
  switch(ATgetType(t)) {
  case AT_APPL :
    {
      Symbol c = ATgetSymbol((ATermAppl) t);
      int i, arity = ATgetArity(c);
      for(i = 0; i < arity; i++)
	{
	  ATerm t_bak = t;
	  int i_bak = i;
	  if (PushChoice() == 0)
	    {
	      t = (ATerm)ATsetArgument((ATermAppl) t, f(ATgetArgument(t, i)), i);
	      PopChoice();
	      //ATfprintf(stderr, "_one: %t\n", t);
	      return(t);
	    }
          i = i_bak;
          t = t_bak;
	}
      _fail(t);
    }
    break;
  case AT_LIST :
    {
      ATermList prefix = ATempty, suffix = (ATermList) t;
      ATerm el;
      while(!ATisEmpty(suffix))
	{
	  ATerm el_bak;
	  el = ATgetFirst(suffix);
	  suffix = ATgetNext(suffix);
	  el_bak = el;
	  if(PushChoice() == 0)
	    {
	      el = f(el);
	      PopChoice();
	      suffix = ATinsert(suffix, el);
	      while(!ATisEmpty(prefix)) {
		suffix = ATinsert(suffix, ATgetFirst(prefix));
		prefix = ATgetNext(prefix);
	      }
	      // ATfprintf(stderr, "_one: %t\n", suffix);
	      return (ATerm) suffix;
	    }
	  else 
	    {
	      prefix = ATinsert(prefix, el_bak);
	    }
	}
      _fail(t);
    }
    break;
  default:
    _fail(t);
  }
  if(annos == NULL)
    return t;
  else
    return(ATsetAnnotations(t, annos));
}       

static ATermList _map_some(ATermList ts, ATerm f(ATerm), int transformed)
{
  if(ATisEmpty(ts))
    {
      if(transformed > 0)
	return ts;
      else 
	_fail((ATerm)ts);
    }
  else 
    {
      ATerm t = ATgetFirst(ts), t_bak = t;
      if (PushChoice() == 0)
	{
	  t = f(t);
	  PopChoice();
	  transformed++;
	}
      else
	{
	  t = t_bak;
	}
      ts = _map_some(ATgetNext(ts), f, transformed++);
      ts = ATinsert(ts, t);
      return ts;
    }
}
       
ATerm _some(ATerm t, ATerm f(ATerm)) 
{
  int transformed = 0;
  ATerm annos = ATgetAnnotations(t);

  //ATfprintf(stderr, "_some(%t)\n", t);

  switch(ATgetType(t)) {
  case AT_APPL:
    {
      Symbol c = ATgetSymbol((ATermAppl) t);
      int i, arity = ATgetArity(c);
      ATerm kids[arity];
      //ATfprintf(stderr, "_some(%t) : AT_APPL\n", t);
      for(i = 0; i < arity; i++)
	{
	  int transformed_bak = transformed;
	  if (PushChoice() == 0)
	    {
	      kids[i] = f(ATgetArgument(t, i));
	      PopChoice();
	      transformed++;
	    }
	  else
	    {
	      transformed = transformed_bak;
	      kids[i] = ATgetArgument(t, i);
	    }
	}
      if(transformed > 0)
	t = (ATerm) ATmakeApplArray(c, kids);
      else
	_fail(t);
    }
  break;
  case AT_LIST :
    {
      t = (ATerm) _map_some((ATermList) t, f, 0);
      /*
      ATermList prefix = ATempty, suffix = (ATermList) t;
      ATerm el;
      //ATfprintf(stderr, "_some(%t) : AT_LIST\n", t);
      while(!ATisEmpty(suffix))
	{
	  ATerm el_bak;
	  el = ATgetFirst(suffix);
	  suffix = ATgetNext(suffix);
	  el_bak = el;
	  if (PushChoice() == 0)
	    {
	      el = f(el);
	      PopChoice();
	      prefix = ATinsert(prefix, el);
	      transformed++;
	    }
	  else
	    {
	      prefix = ATinsert(prefix, el_bak);
	    }
	}
      if(transformed > 0)
	t = (ATerm) ATreverse(prefix);
      else
	_fail(t);
      */
    }
    break;
  default :
    _fail(t);
  }
  if(annos == NULL)
    return t;
  else
    return(ATsetAnnotations(t, annos));
}           

ATerm _thread(ATerm t, ATerm f(ATerm))
{
  ATerm env;
  ATerm annos;
  if(!match_cons(t, sym__2)) 
    _fail(t);
  env = ATgetArgument(t,1);
  t = ATgetArgument(t,0);
  annos = ATgetAnnotations(t);
  switch(ATgetType(t)) {
  case AT_APPL:
    { 
      Symbol c = ATgetSymbol((ATermAppl) t);
      int i, arity = ATgetArity(c);
      ATerm kids[arity];
      for(i = 0; i < arity; i++)
	{
	  ATerm tmp = f((ATerm)ATmakeAppl2(sym__2, ATgetArgument(t, i), env));
	  if(!match_cons(tmp, sym__2)) _fail(t);
	      kids[i] = ATgetArgument(tmp,0);
	      env = ATgetArgument(tmp,1);
	}
      t = (ATerm) ATmakeApplArray(c, kids);
    }
    break;
  case AT_LIST:
    {
      ATermList prefix = ATempty, suffix = (ATermList) t;
      while(!ATisEmpty(suffix))
	{
	  ATerm tmp = f((ATerm)ATmakeAppl2(sym__2, ATgetFirst(suffix), env));
	  if(!match_cons(tmp, sym__2)) 
	    _fail(t);
	  prefix = ATinsert(prefix, ATgetArgument(tmp,0));
	  suffix = ATgetNext(suffix);
	  env = ATgetArgument(tmp,1);
	}
      t = (ATerm) ATreverse(prefix);
    }
    break;
  }
  if(annos == NULL)
    return (ATerm)ATmakeAppl2(sym__2, t, env);
  else
    return (ATerm)ATmakeAppl2(sym__2, ATsetAnnotations(t, annos), env);
}

ATermList CheckATermList(ATerm t)
{
  //ATfprintf(stderr, "CheckATermList(%t)\n", t);
  if(ATgetType(t) != AT_LIST)
    {
      ATfprintf(stderr, "Warning: trying to build list with illegal tail: %t\n", t);
      _fail(t);
    }
  //ATfprintf(stderr, "CheckATermList(%t) = true\n", t);
  return (ATermList) t;
}

// Bag

#define BAGS 256
static ATermList bag[BAGS];
int bag_ptr=-1;

ATerm _bagof(ATerm t, ATerm f(ATerm))
{
  bag_ptr++;
  assert(bag_ptr < BAGS);
  bag[bag_ptr] = ATempty;

  if(GlobalPushChoice() == 0)
    {
      ATerm res = f(t);
      bag[bag_ptr] = ATinsert(bag[bag_ptr], res);
      _fail(t);
    }
  return (ATerm)ATreverse(bag[bag_ptr--]);
}

// Protection of CPL stack

void *at_malloc_protect(int size) {
  void *start = malloc(size);
  ATprotectMemory(start,size);
  return start;
}

void *at_realloc(char *old,int size) {
  void *start = realloc(old,size);
  if(!start) {
    printf("at_realloc: out of memory\n");
    exit(1);
  }
  return start;
}

void *at_realloc_protect(char *old,int size) {
  void *start = realloc(old,size);
  if(!start) {
    printf("at_realloc_protect: out of memory\n");
    exit(1);
  }
  ATunprotectMemory(old);
  ATprotectMemory(start,size);
  return start;
}

// Main function to be used by compiled programs

ATerm main_0(ATerm);

int main(int argc, char *argv[])
{

#ifdef USECPL
  long bp;
#endif

  ATerm out_term; 
  ATermList in_term;
  int i; 

  //ATfprintf(stderr, "main a\n");

#ifdef USECPL
  //ATfprintf(stderr, "using cpl\n");
  CPL_init_malloc_protect(at_malloc_protect);
  CPL_init_malloc(malloc);
  CPL_init_realloc_protect(at_realloc_protect);
  CPL_init_realloc(at_realloc);
                                   
  choice_init(&bp); 
#endif

  ATinit(argc, argv, &out_term);

  ATprotectArray((ATerm*)bag, BAGS); 
  init_constructors_srts();
  init_constructors();

#ifdef NEEDS_MPROTECT
  do_mprotect();
  set_segv_handler();
#endif

  //ATfprintf(stderr, "main b\n");

  in_term = ATempty; 
  for(i = argc - 1; i >= 0; i--)
    {
      in_term = ATinsert(in_term, (ATerm) ATmakeAppl0(ATmakeSymbol(argv[i],0,ATtrue)));
    }

  if(PushChoice() == 0) {
    out_term = main_0((ATerm)in_term); 
    ATfprintf(stdout, "%t\n", out_term);
    //ATfprintf(stderr, "main c\n");
    exit(0);
  } else {
    ATfprintf(stderr, "rewriting failed\n");
    exit(1);
  }

}


