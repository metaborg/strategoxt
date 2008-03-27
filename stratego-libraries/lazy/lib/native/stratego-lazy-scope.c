#include "stratego-lazy-internal.h"

ATerm LAZY_scope(StrCL cl, ATerm t)
{
  LzScope parent = gl_lazy_scope;
  LzScope scp = malloc(sizeof(struct lazy_scope));

  if (scp == NULL)
  {
    _fail(t);
  }

  scp->redirect = scp;
  scp->depth = parent->depth + 1;
  scp->count_ref = 0;

  gl_lazy_scope = scp;
  t = cl_fun(cl)(cl_sl(cl), t);
  gl_lazy_scope = parent;

  if (t != NULL)
    define_scope_link(&scp->redirect, gl_lazy_scope);
  else
    scp->redirect = NULL;

  if (scp->count_ref == 0)
    free(scp);

  return t;
}
