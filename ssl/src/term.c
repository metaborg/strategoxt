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

#include <stratego.h>
#include <stdlib.h>

ATerm SSL_mkterm(ATerm c, ATerm ts0)
{ 
  char *f;
  ATermList ts;
  if(ATisString(c))
    { 
      f = t_string(c);
      ts = (ATermList) consnil_to_list_shallow(ts0);
      return((ATerm) ATmakeApplList(ATmakeSymbol(f, ATgetLength(ts), ATfalse), ts));
    }
  else if(ATgetType(c) == AT_REAL)
    return(c);
  else if(ATgetType(c) == AT_INT)
    return(c); 
  else
    _fail(c);
  return(c);
}

ATerm SSL_explode_term(ATerm t)
{
  switch(ATgetType(t)) {
  case AT_APPL :
    {
      Symbol sym;
      char*  s;
      ATerm t1;
      sym = ATgetSymbol(t);
      if(ATisQuoted(sym))
	t = ATmakeStringQ(ATgetName(sym));
      else
	t = ATmakeString(ATgetName(sym));
      return(App2("TCons", t, 
		  App2("TCons",
		       (ATerm) 
		       list_to_consnil_shallow((ATerm)ATgetArguments((ATermAppl)t)),
		       App0("TNil"))));
    }
  case AT_INT :
    return(ATmake("TCons(<int>,TCons(Nil,TNil))", ATgetInt((ATermInt)t)));
  case AT_REAL :
    return(ATmake("TCons(<real>,TCons(Nil,TNil))", ATgetReal((ATermReal)t)));
  default:
    _fail(t);
  }
  _fail(t);
  return(t);
}

ATerm SSL_address_lt(ATerm x, ATerm y)
{
  ATfprintf(stderr, "<address-lt> (%t,%t) (%d,%d): ", x, y, x, y);

  if((int)x < (int)y)
    {
      ATfprintf(stderr, "succeeds\n");
      return((ATerm) ATempty);
    }
  else
    {
      ATfprintf(stderr, "fails\n");
      _fail((ATerm) ATempty);
    }
  return((ATerm) ATempty);
}

ATerm SSL_address(ATerm t)
{
  /* ATfprintf(stderr, "<address> %t = %d\n", x, x); */
  return((ATerm)ATmakeInt((int)t));
}
