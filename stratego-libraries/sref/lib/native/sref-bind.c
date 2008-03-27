#include "stratego-sref.h"

/**
 * This function is used to bind a reference.
 *
 * This function fail if 'r' is not a reference or if the pointer is
 * invalid.
 *
 * To manage this with the garbage collector of ATerm this function
 * use the ATunprotect and the ATprotect functions.
 */
ATerm SREF_bind (ATerm val, ATerm r)
{
  ATerm *v = NULL;

  if (ATmatch(r, "Ref(<int>)", &v) == ATfalse)
    _fail(r);

  if (v == NULL)
    _fail(r);

  ATunprotect(v);
  *v = val;
  ATprotect(v);

  return r;
}
