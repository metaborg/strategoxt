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

// Choice point implementation

#define JMPBUFS 16384
jmp_buf jmpbufs[JMPBUFS];
unsigned int nr_jmpbuf = 0;

inline unsigned int allocJmpBuf()
{
    assert(nr_jmpbuf < JMPBUFS);
    return nr_jmpbuf++;
}

ATerm _fail(ATerm t)
{
  // using setjmp and longjmp
  // ATfprintf(stderr, "_fail(%t) %d\n", t, nr_jmpbuf);
  assert(nr_jmpbuf > 0);
  longjmp(jmpbufs[--nr_jmpbuf], 1);
  
  // localFail();
  //fail();
  return (ATerm)ATempty;
}

/* choice: s1 <+ s2
   if(PushChoice() == 0) {s1; PopChoice();} else s2
*/

ATerm _id(ATerm t)
{
  return(t);
}


// Traversal combinators

#define ALLARRAY 8

ATerm _all(ATerm t, ATerm f(ATerm))
{
  switch(ATgetType(t))
    {
    case AT_APPL :
      {
	Symbol c = ATgetSymbol((ATermAppl) t);
	int i, arity = ATgetArity(c);
	if(arity > ALLARRAY)
	  {
	    ATermList ts = ATempty;
	    for(i = 0; i < arity; i++)
	      ts = ATinsert(ts, f(ATgetArgument(t, i)));
	    t = (ATerm) ATmakeApplList(c, ATreverse(ts));
	  } 
	else 
	  {
	    ATerm kids[ALLARRAY];
	    for(i = 0; i < arity; i++)
	      kids[i] = f(ATgetArgument(t, i));
	    t = (ATerm) ATmakeApplArray(c, kids);
	  }
      }
      break;
    case AT_LIST :
      if((ATermList) t != ATempty)
	{
	  //ATerm hd = f(ATgetFirst((ATermList) t));
	  //ATerm tl = f((ATerm) ATgetNext((ATermList) t));
	  t = (ATerm)ATmap((ATermList) t, f);
	}
      break;
    }
  
  return(t);
}
 
ATerm _one(ATerm t, ATerm f(ATerm))
{
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
  return(t);
}       
       
ATerm _some(ATerm t, ATerm f(ATerm)) 
{
  int transformed = 0;

  //ATfprintf(stderr, "_some(%t)\n", t);

  switch(ATgetType(t)) {
  case AT_APPL:
    {
      Symbol c = ATgetSymbol((ATermAppl) t);
      int i, arity = ATgetArity(c);
      //ATfprintf(stderr, "_some(%t) : AT_APPL\n", t);
      if(arity > ALLARRAY)
        {
          ATermList ts = ATempty;
          for(i = 0; i < arity; i++)
            {
              ATermList ts_bak = ts;
              int transformed_bak = transformed;
              if (PushChoice() == 0)
                {
                  ts = ATinsert(ts, f(ATgetArgument(t, i)));
                  PopChoice();
                  transformed++;
                }
              else
                {
                  ts = ts_bak;
                  transformed = transformed_bak;
                  ts = ATinsert(ts, ATgetArgument(t, i));
                }
            }
          if(transformed > 0)
            t = (ATerm) ATmakeApplList(c, ATreverse(ts));
          else
            _fail(t);
        }
      else
        {
          ATerm kids[ALLARRAY];
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
    }
    break;
  case AT_LIST :
    {
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
    }
    break;
  default :
    _fail(t);
  }
  return(t);
}           

ATerm _thread(ATerm t, ATerm f(ATerm))
{
  ATerm env;
  if(!match_cons(t, sym__2)) 
    _fail(t);
  env = ATgetArgument(t,1);
  t = ATgetArgument(t,0);
  switch(ATgetType(t)) {
  case AT_APPL:
    { 
      Symbol c = ATgetSymbol((ATermAppl) t);
      int i, arity = ATgetArity(c);
      if(arity > ALLARRAY)
	{
	  ATermList ts = ATempty;
	  for(i = 0; i < arity; i++)
	    {
	      ATerm tmp = f((ATerm)ATmakeAppl2(sym__2, ATgetArgument(t, i), env));
	      if(!match_cons(tmp, sym__2)) _fail(t);
	      ts = ATinsert(ts, ATgetArgument(tmp,0));
	      env = ATgetArgument(tmp,1);
	    }
	  t = (ATerm) ATmakeApplList(c, ATreverse(ts));
	}
      else 
	{
	  ATerm kids[ALLARRAY];
	  for(i = 0; i < arity; i++)
	    {
	      ATerm tmp = f((ATerm)ATmakeAppl2(sym__2, ATgetArgument(t, i), env));
	      if(!match_cons(tmp, sym__2)) _fail(t);
	      kids[i] = ATgetArgument(tmp,0);
	      env = ATgetArgument(tmp,1);
	    }
	  t = (ATerm) ATmakeApplArray(c, kids);
	}
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
  return (ATerm)ATmakeAppl2(sym__2, t, env);
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

ATerm main_0(ATerm);

int main(int argc, char *argv[])
{
  //long bp;
  ATerm out_term; 
  ATermList in_term;
  int i; 
  // choice_init(&bp); 
  ATinit(argc, argv, &out_term);
  init_constructors_srts();
  init_constructors();

#ifdef NEEDS_MPROTECT
  do_mprotect();
  set_segv_handler();
#endif

  in_term = ATempty; // (ATerm)ATmakeAppl0(sym_Nil_0);
  for(i = argc - 1; i >= 0; i--)
    {
      /*
      in_term = (ATerm) 
	ATmakeAppl2(sym_Cons_2,
		    (ATerm) ATmakeAppl0(ATmakeSymbol(argv[i],0,ATtrue)),
		    in_term);
      */
      in_term = ATinsert(in_term, (ATerm) ATmakeAppl0(ATmakeSymbol(argv[i],0,ATtrue)));
    }

  if(PushChoice() == 0) {
    out_term = main_0((ATerm)in_term); 
    ATfprintf(stdout, "%t\n", out_term);
    exit(0);
  } else {
    ATfprintf(stderr, "rewriting failed\n");
    exit(1);
  }

}


