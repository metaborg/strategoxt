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
  ATermAppl t;
  if(ATisString(c))
    { 
      t = (ATermAppl)ATparse(t_string(c));
      f = t_string(t);
      ts = (ATermList) consnil_to_list_shallow(ts0);
      c =((ATerm) ATmakeApplList(ATmakeSymbol(f, ATgetLength(ts), ATisQuoted(ATgetAFun(t))), ts));
       
      return c;
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
//  ATfprintf(stderr, "SSL_explode_term(%t)\n", t);
  switch(ATgetType(t)) {
  case AT_APPL :
    {
      Symbol sym;
      ATerm t1;
      sym = ATgetSymbol(t);
      if(ATisQuoted(sym))
        t1 = ATmakeStringQ(ATgetName(sym));
      else
        t1 = ATmakeString(ATgetName(sym));
//  ATfprintf(stderr, "exploded _term(%t)\n", t1);
  
      t = App2("TCons", t1,
                  App2("TCons",
                       (ATerm)
		       list_to_consnil_shallow((ATerm)ATgetArguments((ATermAppl)t)),
                       App0("TNil")));
      break;
    }
  case AT_INT :
    t = ATmake("TCons(<int>,TCons(Nil,TNil))", ATgetInt((ATermInt)t));
    break;
  case AT_REAL :
    t = ATmake("TCons(<real>,TCons(Nil,TNil))", ATgetReal((ATermReal)t));
    break;
  default:
    _fail(t);
  }
  // ATfprintf(stderr, "SSL_explode_term: %t\n", t);
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
