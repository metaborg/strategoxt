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
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
02111-1307 USA

*/


#include <srts/stratego.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>

/* Integers */

inline static int _get_int(ATerm t)
{
  if(ATgetType(t) == AT_INT)
    return ATgetInt((ATermInt) t); 
  else 
    _fail(t);
  return(0);
}
  
ATerm SSL_is_int(ATerm t)
{ 
  if(ATgetType(t) == AT_INT)
    return(t);
  else 
    _fail(t);
  return(t);
}

inline static double _get_real(ATerm t)
{ 
  if(ATgetType(t) == AT_REAL)
    return(ATgetReal((ATermReal) t));
  else 
    return((double)_get_int(t));
}

ATerm SSL_is_real(ATerm t)
{
  if(ATgetType(t) == AT_REAL)
    return(t);
  else 
    _fail(t);
  return(t);
}

ATerm SSL_int(ATerm t)
{ 
  if(ATgetType(t) == AT_INT)
    return(t);
  else if(ATgetType(t) == AT_REAL)
    return((ATerm) ATmakeInt((int)ATgetReal((ATermReal) t)));
  else
    _fail(t);
  return(t);
}

ATerm SSL_addi(ATerm x, ATerm y)
{ 
  return((ATerm) ATmakeInt(_get_int(x) + _get_int(y)));
}

ATerm SSL_addr(ATerm x, ATerm y)
{ 
  return((ATerm) ATmakeReal(_get_real(x) + _get_real(y)));
}

ATerm SSL_subti(ATerm x, ATerm y)
{ 
  return((ATerm) ATmakeInt(_get_int(x) - _get_int(y)));
}

ATerm SSL_subtr(ATerm x, ATerm y)
{ 
  return((ATerm) ATmakeReal(_get_real(x) - _get_real(y)));
}

ATerm SSL_muli(ATerm x, ATerm y)
{ 
  return((ATerm) ATmakeInt(_get_int(x) * _get_int(y)));
}

ATerm SSL_mulr(ATerm x, ATerm y)
{ 
  return((ATerm) ATmakeReal(_get_real(x) * _get_real(y)));
}

ATerm SSL_divi(ATerm x, ATerm y)
{ 
  return((ATerm) ATmakeInt(_get_int(x) / _get_int(y)));
}

ATerm SSL_divr(ATerm x, ATerm y)
{ 
  return((ATerm) ATmakeReal(_get_real(x) / _get_real(y)));
}

ATerm SSL_mod(ATerm x, ATerm y)
{ 
  return((ATerm) ATmakeInt(_get_int(x) % _get_int(y)));
}

ATerm SSL_gti(ATerm x, ATerm y)
{ 
  if(_get_int(x) > _get_int(y))
    return((ATerm) ATempty);
  else
    _fail((ATerm) ATempty);
  return((ATerm) ATempty);
}

ATerm SSL_gtr(ATerm x, ATerm y)
{ 
  if(_get_real(x) > _get_real(y))
    return((ATerm) ATempty);
  else
    _fail((ATerm) ATempty);
  return((ATerm) ATempty);
}

ATerm SSL_cos(ATerm x)
{ 
  return((ATerm) ATmakeReal(cos(_get_real(x))));
}

ATerm SSL_sin(ATerm x)
{ 
  return((ATerm) ATmakeReal(sin(_get_real(x))));
}

ATerm SSL_sqrt(ATerm x)
{ 
  return((ATerm) ATmakeReal(sqrt(_get_real(x))));
}

ATerm SSL_atan2(ATerm x, ATerm y)
{ 
  return((ATerm) ATmakeReal(atan2(_get_real(x), _get_real(y))));
}

ATerm SSL_string_to_int(ATerm x)
{ 
  char *s, *p;
  int k;
  if(!ATmatch(x, "<str>", &s))
    _fail(x);

  errno = 0;
  k = strtol(s, &p, 10);
  if (*p || errno)
    _fail(x);

  return((ATerm) ATmakeInt(k));
}

ATerm SSL_int_to_string(ATerm x)
{ int k;
  double r;
  char buf[32];
  if(ATmatch(x, "<int>", &k)) 
    ;
  else if(ATmatch(x, "<real>", &r))
    k = r;
  else
    _fail(x);

  sprintf(buf, "%d", k);
  return((ATerm) ATmakeString(buf));
}

ATerm SSL_string_to_real(ATerm x)
{ char *s, *p;
  double r;
  if(ATmatch(x, "<str>", &s))
    ;
  else
    _fail(x);

  errno = 0;
  r = strtod(s, &p);
  if (*p || errno)
    _fail(x);

  return((ATerm) ATmakeReal(r));
}

ATerm SSL_real_to_string(ATerm x)
{ 
  char buf[32];
  sprintf(buf, "%.17g", _get_real(x));
  return((ATerm) ATmakeString(buf));
}

ATerm SSL_real(ATerm t)
{ 
  if(ATgetType(t) == AT_INT)
    return((ATerm)ATmakeReal((double)ATgetInt((ATermInt) t)));
  else  if(ATgetType(t) == AT_REAL)
    return(t);
  else 
    _fail(t);
  return(t);
}
