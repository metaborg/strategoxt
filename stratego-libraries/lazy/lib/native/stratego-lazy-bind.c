#include "stratego-lazy-internal.h"

ATerm LAZY_bind_value(StrCL s, ATerm ncl, ATerm nt, ATerm lz_value, ATerm t)
{
  LzValue v = get_lzvalue(lz_value);

  if (v == NULL)
    _fail(NULL);

  update_scope_link(&v->decl_scp);
  if (v->decl_scp != NULL)
  {
    ATfprintf(stderr, "LAZY_bind_value: The value is already bound, you cannot overload it.\n");
    _fail(t);
  }

  // FIXME: should check the type.
  v->num_cl = ATgetInt((ATermInt) ncl);
  v->num_t = ATgetInt((ATermInt) nt);

  v->fun = cl_fun(s);
  v->decl_t = t;
  define_scope_link(&v->decl_scp, gl_lazy_scope);
  return t;
}
