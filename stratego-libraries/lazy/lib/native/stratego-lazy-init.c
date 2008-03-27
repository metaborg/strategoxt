#include "stratego-lazy-internal.h"

static Symbol invalid_sym;
ATerm invalid_term;

struct lazy_scope global_lazy_scope = {
  &global_lazy_scope, 0, 0
};

LzScope gl_lazy_scope = &global_lazy_scope;
LzScope gl_cache_scope = &global_lazy_scope;

static void init_module_constructors(void);
static void init_module_constant_terms(void);
static ATbool value_blob_destructor(ATermBlob);

#include <srts/init-stratego-module.h>

static void init_module_constructors(void)
{
  invalid_sym = ATmakeSymbol("invalid", 0, ATfalse);
  ATprotectSymbol(invalid_sym);

  ATregisterBlobDestructor(value_blob_destructor);
}

static void init_module_constant_terms(void)
{
  ATprotect(&(invalid_term));
  invalid_term = (ATerm) ATmakeAppl(invalid_sym);
}

static ATbool value_blob_destructor(ATermBlob b)
{
  LzValue v = get_lzvalue((ATerm) b);

  if (v == NULL)
    return ATfalse;

  free_lzvalue(v);

  return ATtrue;
}
