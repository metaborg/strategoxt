#include <srts/stratego.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>
#include "stratego-lib-common.h"

ATerm SSL_is_int(ATerm t)
{ 
  if(ATgetType(t) == AT_INT)
    return(t);
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

ATerm SSL_rand() {
  int result = rand();
  return((ATerm) ATmakeInt(result));
}

ATerm SSL_srand(ATerm seed) {
  int val = _get_int(seed);
  srand(val);
  return (ATerm) ATempty;
}

ATerm SSL_RAND_MAX() {
  return((ATerm) ATmakeInt(RAND_MAX));
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


