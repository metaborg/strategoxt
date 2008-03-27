#include <stdarg.h>
#include "stratego-lazy-internal.h"

static ATerm get_cache(LzValue v, ATerm key)
{
  ATerm t = NULL;

  update_scope_link(&v->cache_scp);
  if (v->cache_scp == NULL)
  {
    v->cache_dict = ATdictCreate();

    v->saved_cache_scp = gl_cache_scope;
    gl_cache_scope = &global_lazy_scope;
  }
  else
  {
    t = ATdictGet(v->cache_dict, key);

    if (v->cache_scp->depth > gl_cache_scope->depth)
      gl_cache_scope = v->cache_scp;
  }
  return t;
}


static ATerm set_cache(LzValue v, ATerm key, ATerm t)
{
  ATerm val = t;

  if (t == NULL)
    val = invalid_term;
  v->cache_dict = ATdictPut(v->cache_dict, key, t);

  if (v->decl_scp->depth > gl_cache_scope->depth)
    gl_cache_scope = v->decl_scp;
  define_scope_link(&v->cache_scp, gl_cache_scope);

  if (v->saved_cache_scp->depth > gl_cache_scope->depth)
    gl_cache_scope = v->saved_cache_scp;

  return t;
}


ATerm LAZY_call(StrCL getv, ...)
{
  ATerm t = NULL;
  LzValue v = get_lzvalue(cl_fun(getv)(cl_sl(getv), invalid_term));

  if (v == NULL)
    _fail(NULL);

  update_scope_link(&v->decl_scp);
  if (v->decl_scp == NULL)
  {
    ATfprintf(stderr, "LAZY_call: No strategy defined to compute a lazy value.\n");
    _fail(NULL);
  }

  unsigned int ncl = v->num_cl;
  unsigned int nt = v->num_t;
  unsigned int argc = ncl + nt;
  ATermList key = ATmakeList0();

  if (argc != 0)
  {
    void *argv[argc];
    va_list a;

    va_start(a, getv);
    argc = 0;
    while(ncl--)
    {
      argv[argc] = va_arg(a, void *);
      key = ATinsert(key, (ATerm) ATmakeInt( (int) cl_fun(((StrCL) argv[argc])) ));
      argc++;
    }

    while(nt--)
    {
      argv[argc] = va_arg(a, void *);
      key = ATinsert(key, (ATerm) argv[argc]);
      argc++;
    }
    va_end(a);

    t = get_cache(v, (ATerm) key);
    if (t == invalid_term)
      t = NULL;
    else if (t == NULL)
    {
      switch(argc)
      {
        case 1: t = (v->fun)(NULL, argv[0], v->decl_t); break;
        case 2: t = (v->fun)(NULL, argv[0], argv[1], v->decl_t); break;
        default:
          ATfprintf(stderr, "LAZY_call: Too many arguments. (%d)\n", argc);
          t = NULL;
      }
      t = set_cache(v, (ATerm) key, t);
    }
  }
  else
  {
    t = get_cache(v, (ATerm) key);
    if (t == invalid_term)
      t = NULL;
    else if (t == NULL)
      t = set_cache(v, (ATerm) key, (v->fun)(NULL, v->decl_t));
  }

  return t;
}
