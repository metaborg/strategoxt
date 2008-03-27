#include "stratego-sref.h"

/**
 * This function always succeeded except if there is not enough
 * memory. It return an unbound reference.
 */
ATerm SREF_create (void)
{
  ATerm *v = NULL;

  if ((v = malloc(sizeof (ATerm))) == NULL)
  {
    ATfprintf(stderr, "REF_create: allocation failed.\n");
    _fail(NULL);
  }

  *v = ATmake("Ref(<int>)", v);
  ATprotect(v);

  return *v;
}
