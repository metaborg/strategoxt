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
 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <assert.h>
#include <aterm2.h> 
#include "srts/stratego.h"
#include "srts/mprotect.h"

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
        int i, arity = ATgetArity(c), changed = 0;
        ATerm kids[arity], original, new;
        for(i = 0; i < arity; i++)
          {
            original = ATgetArgument(t, i);
            new = f(original);
            kids[i] = new;
            if(original != new) changed++;
          }
        if(changed)
          t = (ATerm) ATmakeApplArray(c, kids);
      }
      break;
    case AT_LIST :
      if(!ATisEmpty(t))
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
	  ATerm t_bak = t, original, new;
	  int i_bak = i;
	  if (PushChoice() == 0)
	    {
	      original = ATgetArgument(t, i);
	      new = f(original);
	      if(new != original)
		t = (ATerm)ATsetArgument((ATermAppl) t, new, i);
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
	      if(el == el_bak)
		suffix = (ATermList) t;
	      else
		{
		  suffix = ATinsert(suffix, el);
		  while(!ATisEmpty(prefix)) {
		    suffix = ATinsert(suffix, ATgetFirst(prefix));
		    prefix = ATgetNext(prefix);
		  }
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

static ATermList _map_some(ATermList ts, ATerm f(ATerm), volatile int transformed)
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
  return ts;
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

ATermList CheckATermList(ATerm t)
{
  //ATfprintf(stderr, "CheckATermList(%t)\n", t);
  if(ATgetType(t) != AT_LIST) {
    ATfprintf(stderr, "Warning: trying to build list with illegal tail: %t\n", t);
    _fail(t);
  }
  //ATfprintf(stderr, "CheckATermList(%t) = true\n", t);
  return (ATermList) t;
}
