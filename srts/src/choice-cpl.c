#include "choice-cpl.h"

ATerm _fail(ATerm t)
{
  fail();
  return NULL;
}


ATerm _cpl_loaded(ATerm t)
{
  return t;
}
