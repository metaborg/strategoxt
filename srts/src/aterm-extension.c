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

#include <stdio.h>
#include <aterm2.h>
#include "debug.h"

#define ATmakeSymbol ATmakeAFun

ATermList ATmap(ATermList l, ATerm (* f)(ATerm))
{
  if(ATisEmpty(l))
    return l;
  else
    return ATinsert(ATmap(ATgetNext(l), f), f(ATgetFirst(l)));
}

ATerm ATmakeString(char *name)
{
  return (ATerm) ATmakeAppl0(ATmakeAFun(name, 0, ATtrue));
}

ATerm ATmakeStringQ(char *name)
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

ATbool ATisThisString(ATerm t, char *name)
{
  Symbol s;
  if(ATgetType(t) != AT_APPL) return ATfalse;
  s = ATgetSymbol(t);
  return (ATgetArity(s) == 0) && ATisQuoted(s) && 
         (strcmp(ATgetName(s), name) == 0);
}

ATbool AThasName(ATerm t, char *name)
{
  return (strcmp(ATgetName(ATgetSymbol(t)), name) == 0)
    && !(ATisQuoted(ATgetSymbol(t)));
}

/* Shortcuts */

ATerm App0(char *name)
{
  return (ATerm) ATmakeAppl0(ATmakeSymbol(name, 0, ATfalse));
}

ATerm App1(char *name, ATerm arg1)
{
  return (ATerm) ATmakeAppl1(ATmakeSymbol(name, 1, ATfalse), arg1);
}

ATerm App2(char *name, ATerm arg1, ATerm arg2)
{
  return (ATerm) ATmakeAppl2(ATmakeSymbol(name, 2, ATfalse), arg1, arg2);
}

ATerm App3(char *name, ATerm arg1, ATerm arg2, ATerm arg3)
{
  return (ATerm) ATmakeAppl3(ATmakeSymbol(name, 3, ATfalse), arg1, arg2, arg3);
}

ATerm App4(char *name, ATerm arg1, ATerm arg2, ATerm arg3, ATerm arg4)
{
  return (ATerm) ATmakeAppl4(ATmakeSymbol(name, 4, ATfalse), arg1, arg2, arg3, arg4);
}

ATerm App5(char *name, ATerm arg1, ATerm arg2, ATerm arg3, ATerm arg4, ATerm arg5)
{
  return (ATerm) ATmakeAppl5(ATmakeSymbol(name, 5, ATfalse), arg1, arg2, arg3, arg4, arg5);
}

ATerm App6(char *name, ATerm arg1, ATerm arg2, ATerm arg3, ATerm arg4, ATerm arg5, ATerm arg6)
{
  return (ATerm) ATmakeAppl6(ATmakeSymbol(name, 6, ATfalse), arg1, arg2, arg3, arg4, arg5, arg6);
}

ATerm AppN(char *name, ATermList args)
{
  return (ATerm) ATmakeApplList(ATmakeSymbol(name, ATgetLength(args), ATfalse), args);
}

/* Conversion from terms with list notation to lists with Cons/Nil and
   back. */

/*
ATerm list_to_consnil(ATerm t)
{

  switch(ATgetType(t)) {
  case AT_APPL:
    debugs(ATfprintf(stdout, "Application\n"));
    return (ATerm) 
      ATmakeApplList(ATgetSymbol(t),
		     ATmap(ATgetArguments((ATermAppl) t), list_to_consnil));
  case AT_LIST:  
    if (ATisEmpty((ATermList) t)) {
      debugs(Tprintf(stdout, "Nil\n"));
	return ATmake("Nil");
    }
    else {
      debugs(ATfprintf(stdout, "Cons(%t,%t)\n", 
		       list_to_consnil(ATgetFirst(t)),
		     list_to_consnil(ATgetNext(t))));
	return (ATerm)
	  ATmakeAppl2(ATmakeSymbol("Cons", 2, ATfalse),
		      list_to_consnil(ATgetFirst((ATermList) t)),
		      list_to_consnil((ATerm) ATgetNext((ATermList) t)));
    }
  case AT_INT:
  case AT_REAL:
  case AT_PLACEHOLDER:
  default: 
    debugs(ATfprintf(stdout, "Atom\n"));
    return t;
  }
}
*/

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

/*
ATerm list_to_tconstnil(ATerm t)
{

  switch(ATgetType(t)) {
  case AT_APPL:
    debugs(ATfprintf(stdout, "Application\n"));
    return (ATerm) 
      ATmakeApplList(ATgetSymbol(t),
		     ATmap(ATgetArguments((ATermAppl) t), list_to_tconstnil));
  case AT_LIST:  
    if (ATisEmpty((ATermList) t)) {
      debugs(ATfprintf(stdout, "TNil\n"));
	return (ATerm) ATmakeAppl0(ATmakeSymbol("TNil", 0, ATfalse));
    }
    else {
      debugs(ATfprintf(stdout, "TCons(%t,%t)\n", 
		       list_to_tconstnil(ATgetFirst(t)),
		       list_to_tconstnil(ATgetNext(t))));
	return (ATerm)
	  ATmakeAppl(ATmakeSymbol("TCons", 2, ATfalse),
		     list_to_tconstnil(ATgetFirst((ATermList) t)),
		     list_to_tconstnil((ATerm) ATgetNext((ATermList) t)));
    }
  case AT_INT:
  case AT_REAL:
  case AT_PLACEHOLDER:
  default: 
    debugs(ATfprintf(stdout, "Atom\n"));
    return t;
  }
}
*/

/*
ATerm list_to_consnil_shallow(ATerm t)
{

  if(ATgetType(t) == AT_LIST) 
    {
      if (ATisEmpty((ATermList) t)) {
	debugs(ATfprintf(stdout, "Nil\n"));
	return (ATerm) ATmakeAppl0(ATmakeSymbol("Nil", 0, ATfalse));
      }
      else {
	debugs(ATfprintf(stdout, "Cons(%t,%t)\n", 
			 list_to_consnil(ATgetFirst(t)),
			 list_to_consnil(ATgetNext(t))));
	return (ATerm)
	  ATmakeAppl(ATmakeSymbol("Cons", 2, ATfalse),
		     ATgetFirst((ATermList) t),
		     list_to_consnil_shallow((ATerm) ATgetNext((ATermList) t)));
      }
    }
  else      
    return t;
}
*/

/*
ATerm list_to_tconstnil_op(ATermList t)
{

  if (ATisEmpty((ATermList) t)) 
    return ATmake("Op(\"TNil\",[])");
  else
    return 
      ATmake("Op(\"TCons\",[<list>])", 
	     ATmakeList2(ATgetFirst(t),
			 list_to_tconstnil_op(ATgetNext(t))));
}
*/

/*
ATerm consnil_to_list(ATerm t)
{
  switch(ATgetType(t)) {
  case AT_APPL:

    if(AThasName(t, "Nil"))
      return (ATerm) ATmakeList0();

    else if(AThasName(t, "Cons"))
      {
	ATermList args;
	ATerm elt, lst, res;

	args = ATgetArguments((ATermAppl) t);
	elt = consnil_to_list(ATgetFirst(args));
	lst = consnil_to_list(ATgetFirst(ATgetNext(args)));

	if(ATgetType(lst) == AT_LIST)
	  res = (ATerm)ATinsert((ATermList) lst, elt);
	else
	    res = App2("Cons", elt, lst);
	
	return res;
      }
    else
      {
	return (ATerm) 
	  ATmakeApplList(ATgetSymbol(t),
	    ATmap(ATgetArguments((ATermAppl) t), consnil_to_list));
      }

  case AT_LIST:  
    fprintf(stderr, "AT_LIST seen\n");
    if (ATisEmpty((ATermList) t))
      return t;
    else
      return (ATerm) ATmap((ATermList) t, consnil_to_list);

  case AT_INT:
  case AT_REAL:
  case AT_PLACEHOLDER:
  default: 
    debugs(ATfprintf(stdout, "Atom\n"));
    return t;
  }
}

ATerm consnil_to_list_shallow(ATerm t)
{
  switch(ATgetType(t)) {
  case AT_APPL:
    if(AThasName(t, "Nil"))
      return (ATerm) ATmakeList0();
    else if(AThasName(t, "Cons"))
      {

	ATermList args;
	ATerm elt, lst, res;

	args = ATgetArguments((ATermAppl) t);
	elt = ATgetFirst(args);
	lst = (ATerm)consnil_to_list_shallow(ATgetFirst(ATgetNext(args)));

	if(ATgetType(lst) == AT_LIST)
	  res = (ATerm)ATinsert((ATermList) lst, elt);
	else
	    res = App2("Cons", elt, lst);
	
	return res;
      }
    else
      return t;

  case AT_LIST:  
  case AT_INT:
  case AT_REAL:
  case AT_PLACEHOLDER:
  default: 
    debugs(ATfprintf(stdout, "Atom\n"));
    return t;
  }
}
*/
/*
ATerm tuple_cong_aux(ATermList t)
{
  if(ATisEmpty(t))
    return ATmake("Call(SVar(\"TNil\"),[])");
  else 
    return App2("Call", App1("SVar", ATmakeString("TCons")),
		(ATerm) ATmakeList2(ATgetFirst(t), 
				    tuple_cong_aux(ATgetNext(t))));
}

ATerm tuple_cong(ATermList t)
{
  if(ATisEmpty(t))
    return ATmake("Call(SVar(\"TNil\"),[])");
  else if(ATgetLength(t) == 1)
    return ATgetFirst(t);
  else
    return tuple_cong_aux(t);
}
*/

ATerm list_cong_aux(ATermList t, ATerm tl)
{
  if(ATisEmpty(t))
    return tl;
  else 
    return App2("Call", App1("SVar", ATmakeString("Cons")),
		(ATerm) ATmakeList2(ATgetFirst(t), 
				    list_cong_aux(ATgetNext(t), tl)));
  /*
    return ATmake("Call(SVar(\"Cons\"),[<appl>,<appl>])", 
		 list_cong_aux(ATgetNext(t)),
		 ATgetFirst(t));	
  */
}

ATerm list_cong(ATermList t, ATerm tl)
{
  if(ATisEmpty(t))
    return tl;
  else
    return list_cong_aux(t, tl);
}



