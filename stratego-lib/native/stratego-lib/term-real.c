#include <srts/stratego.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>
#include "stratego-lib-common.h"

ATerm SSL_is_real(ATerm t)
{
  if(ATgetType(t) == AT_REAL)
    return(t);
  else 
    _fail(t);
  return(t);
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

ATerm SSL_real_to_string(ATerm x)
{ 
  char buf[32];
  sprintf(buf, "%.17g", _get_real(x));
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

ATerm SSL_real(ATerm t) { 
  if(ATgetType(t) == AT_INT)
    return((ATerm)ATmakeReal((double)ATgetInt((ATermInt) t)));
  else  if(ATgetType(t) == AT_REAL)
    return(t);
  else 
    _fail(t);
  return(t);
}


