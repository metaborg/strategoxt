#include "stratego-sref.h"

/**
 * This function is used to dereference a pointer include in the Ref
 * constructor.
 *
 * This function fail is 'r' is not a reference or if the
 * reference/value is invalid.
 */
ATerm SREF_deref (ATerm r)
{
  ATerm *v = NULL;

  if (ATmatch(r, "Ref(<int>)", &v) == ATfalse)
    _fail(r);

  if (v == NULL)
    _fail(r);

  return *v;
}
