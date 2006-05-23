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

#include <stdio.h>
#include <aterm2.h>
#include <string.h>

#define ATmakeSymbol ATmakeAFun

ATerm SRTS_getAnnotations(ATerm t)
{
  ATerm annos = ATgetAnnotations(t);
  if(annos == NULL)
    return (ATerm) ATempty;
  else 
    return annos;
}

ATerm SRTS_setAnnotations(ATerm t, ATerm ts) {
  if(ATisEmpty(ts))
    return AT_removeAnnotations(t);
  else
    return ATsetAnnotations(t, ts);
}

ATermList ATmap(ATermList l, ATerm (* f)(ATerm))
{
  if(ATisEmpty(l))
    return l;
  else 
    {
      ATerm hd = f(ATgetFirst(l));
      if(hd == NULL) return NULL;
      ATermList tl = ATmap(ATgetNext(l), f);
      if(tl == NULL) return NULL;
      return ATinsert(tl, hd);
    }
}

ATerm ATmakeString(const char *name)
{
  return (ATerm) ATmakeAppl0(ATmakeAFun(name, 0, ATtrue));
}

ATerm ATmakeStringQ(const char *name)
{
  return ATmakeString(ATwriteToString(ATmakeString(name)));
}

ATbool ATisString(ATerm t)
{
  Symbol s;
  //ATfprintf(stderr, "ATisString(%t)\n", t);
  if(ATgetType(t) != AT_APPL) return ATfalse;
  s = ATgetSymbol(t);
  return (ATgetArity(s) == 0) && ATisQuoted(s);
}

ATbool ATisThisString(ATerm t, const char *name)
{
  Symbol s;
  if(ATgetType(t) != AT_APPL) return ATfalse;
  s = ATgetSymbol(t);
  return (ATgetArity(s) == 0) && ATisQuoted(s) && 
         (strcmp(ATgetName(s), name) == 0);
}

ATbool AThasName(ATerm t, const char *name)
{
  return (strcmp(ATgetName(ATgetSymbol(t)), name) == 0)
    && !(ATisQuoted(ATgetSymbol(t)));
}

/* Shortcuts */

ATerm App0(const char *name)
{
  return (ATerm) ATmakeAppl0(ATmakeSymbol(name, 0, ATfalse));
}

ATerm App1(const char *name, ATerm arg1)
{
  return (ATerm) ATmakeAppl1(ATmakeSymbol(name, 1, ATfalse), arg1);
}

ATerm App2(const char *name, ATerm arg1, ATerm arg2)
{
  return (ATerm) ATmakeAppl2(ATmakeSymbol(name, 2, ATfalse), arg1, arg2);
}

ATerm App3(const char *name, ATerm arg1, ATerm arg2, ATerm arg3)
{
  return (ATerm) ATmakeAppl3(ATmakeSymbol(name, 3, ATfalse), arg1, arg2, arg3);
}

ATerm App4(const char *name, ATerm arg1, ATerm arg2, ATerm arg3, ATerm arg4)
{
  return (ATerm) ATmakeAppl4(ATmakeSymbol(name, 4, ATfalse), arg1, arg2, arg3, arg4);
}

ATerm App5(const char *name, ATerm arg1, ATerm arg2, ATerm arg3, ATerm arg4, ATerm arg5)
{
  return (ATerm) ATmakeAppl5(ATmakeSymbol(name, 5, ATfalse), arg1, arg2, arg3, arg4, arg5);
}

ATerm App6(const char *name, ATerm arg1, ATerm arg2, ATerm arg3, ATerm arg4, ATerm arg5, ATerm arg6)
{
  return (ATerm) ATmakeAppl6(ATmakeSymbol(name, 6, ATfalse), arg1, arg2, arg3, arg4, arg5, arg6);
}

ATerm AppN(const char *name, ATermList args)
{
  return (ATerm) ATmakeApplList(ATmakeSymbol(name, ATgetLength(args), ATfalse), args);
}

/* Conversion from terms with list notation to lists with Cons/Nil and
   back. 

ATerm list_to_consnil_op(ATermList t)
{
  if (ATisEmpty((ATermList) t)) {
    return ATmake("Op(\"Nil\",[])");
  }
  else
    return ATmake("Op(\"Cons\", [<list>])",
		  ATmakeList2(ATgetFirst(t),
			      list_to_consnil_op(ATgetNext(t))));
}

ATerm list_to_consnil_op_tl(ATermList t, ATerm tl)
{
  if (ATisEmpty((ATermList) t)) {
    return tl;
  }
  else
    return ATmake("Op(\"Cons\", [<list>])",
		  ATmakeList2(ATgetFirst(t),
			      list_to_consnil_op_tl(ATgetNext(t), tl)));
}


ATerm list_cong_aux(ATermList t, ATerm tl)
{
  if(ATisEmpty(t))
    return tl;
  else 
    return App2("Call", App1("SVar", ATmakeString("Cons")),
		(ATerm) ATmakeList2(ATgetFirst(t), 
				    list_cong_aux(ATgetNext(t), tl)));
}

ATerm list_cong(ATermList t, ATerm tl)
{
  if(ATisEmpty(t))
    return tl;
  else
    return list_cong_aux(t, tl);
}

*/
