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
 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <assert.h>
#include <aterm2.h> 
#include <choice.h> 
#include "stratego.h"

extern Symbol sym_Cons_2;
extern Symbol sym_Nil_0;
extern Symbol sym_Pair_2;

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
  if(ATgetType(t) == AT_APPL) 
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
  return(t);
}

ATerm _one(ATerm t, ATerm f(ATerm))
{
  if(ATgetType(t) == AT_APPL)
    { 
      Symbol c = ATgetSymbol((ATermAppl) t);
      int i, arity = ATgetArity(c);
      for(i = 0; i < arity; i++)
	if (PushChoice() == 0)
	  {
	    t = (ATerm)ATsetArgument((ATermAppl) t, f(ATgetArgument(t, i)), i);
	    PopChoice();
	    return(t);
	  }
      _fail(t);
    }
  else
    _fail(t);
  return(t);
}

ATerm _some(ATerm t, ATerm f(ATerm))
{
  int transformed = 0;

  if(ATgetType(t) == AT_APPL) 
    { 
      Symbol c = ATgetSymbol((ATermAppl) t);
      int i, arity = ATgetArity(c);
      if(arity > ALLARRAY)
	{
	  ATermList ts = ATempty;
	  for(i = 0; i < arity; i++)
	    {
	      if (PushChoice() == 0)
		{
		  ts = ATinsert(ts, f(ATgetArgument(t, i)));
		  PopChoice();
		  transformed++;
		}
	      else 
		ts = ATinsert(ts, ATgetArgument(t, i));
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
	      if (PushChoice() == 0)
		{
		  kids[i] = f(ATgetArgument(t, i));
		  PopChoice();
		  transformed++;
		}
	      else 
		kids[i] = ATgetArgument(t, i);
	    }
	  if(transformed > 0)
	    t = (ATerm) ATmakeApplArray(c, kids);
	  else
	    _fail(t);
	}
    }
  else
    _fail(t);
  return(t);
}


ATerm _thread(ATerm t, ATerm f(ATerm))
{
  ATerm env;
  if(!match_cons(t, sym_Pair_2)) _fail(t);
  env = ATgetArgument(t,1);
  t = ATgetArgument(t,0);
  if(ATgetType(t) == AT_APPL)
    { 
      Symbol c = ATgetSymbol((ATermAppl) t);
      int i, arity = ATgetArity(c);
      if(arity > ALLARRAY)
	{
	  ATermList ts = ATempty;
	  for(i = 0; i < arity; i++)
	    {
	      ATerm tmp = f((ATerm)ATmakeAppl2(sym_Pair_2, ATgetArgument(t, i), env));
	      if(!match_cons(tmp, sym_Pair_2)) _fail(t);
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
	      ATerm tmp = f((ATerm)ATmakeAppl2(sym_Pair_2, ATgetArgument(t, i), env));
	      if(!match_cons(tmp, sym_Pair_2)) _fail(t);
	      kids[i] = ATgetArgument(tmp,0);
	      env = ATgetArgument(tmp,1);
	    }
	  t = (ATerm) ATmakeApplArray(c, kids);
	}
    }
  return((ATerm)ATmakeAppl2(sym_Pair_2, t, env));
}

ATerm main_0(ATerm);

int main(int argc, char *argv[])
{
  long bp;
  ATerm in_term, out_term; 
  int i; 
  choice_init(&bp); 
  ATinit(argc, argv, &in_term);
  init_constructors();

  in_term = (ATerm)ATmakeAppl0(sym_Nil_0);
  for(i = argc - 1; i >= 0; i--)
    {
      in_term = (ATerm) 
	ATmakeAppl2(sym_Cons_2,
		    (ATerm) ATmakeAppl0(ATmakeSymbol(argv[i],0,ATtrue)),
		    in_term);
    }

  if(PushChoice() == 0) {
    out_term = main_0(in_term); 
    ATfprintf(stdout, "%t\n", out_term);
    exit(0);
  } else {
    ATfprintf(stderr, "rewriting failed\n");
    exit(1);
  }

}
