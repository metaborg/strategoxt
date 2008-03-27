#include "stratego-sref.h"

/**
 * This function is used to remove unused reference.
 */
ATerm SREF_destroy (ATerm r)
{
  ATerm *v = NULL;

  if (ATmatch(r, "Ref(<int>)", &v) == ATfalse)
    _fail(r);

  if (v == NULL)
    _fail(r);

  ATunprotect(v);
  free(v);

  return ATmake("Ref(<int>)", NULL);
}
