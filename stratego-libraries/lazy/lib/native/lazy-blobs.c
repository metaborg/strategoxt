#include <assert.h>
#include "stratego-lazy-internal.h"

#define LAZY_BLOB_MAGIC 0x4c415a59

LzValue get_lzvalue(ATerm t)
{
  ATermBlob b;
  LzValue v;

  if (t == NULL || !ATisBlob(t))
  {
    ATfprintf(stderr, "get_lzvalue: not a blob.\n");
    _fail(NULL);
  }

  b = (ATermBlob) t;
  if (ATgetBlobSize(b) != sizeof(struct lazy_value))
  {
    ATfprintf(stderr, "get_lzvalue: not a value blob (bad size).\n");
    _fail(NULL);
  }

  v = ATgetBlobData(b);
  if (v->magic != LAZY_BLOB_MAGIC)
  {
    ATfprintf(stderr, "get_lzvalue: not a value blob (bad magic).\n");
    _fail(NULL);
  }

  return v;
}


static ATerm new_lzvalue(void)
{
  LzValue v = malloc(sizeof(struct lazy_value));

  if (v == NULL)
  {
    ATfprintf(stderr, "set_lzvalue: allocation failed.\n");
    _fail(NULL);
  }

  ATprotect(&v->decl_t);
  ATprotect(&v->cache_dict);

  v->decl_scp = NULL;
  v->cache_scp = NULL;

  v->magic = LAZY_BLOB_MAGIC;
  return (ATerm) ATmakeBlob(sizeof(struct lazy_value), v);
}

void free_lzvalue(LzValue v)
{
  assert(v != NULL);
  delete_scope_link(v->decl_scp);
  delete_scope_link(v->cache_scp);
  ATunprotect(&v->decl_t);
  ATunprotect(&v->cache_dict);
  free(v);
}

ATerm LAZY_new_value(void)
{
  return new_lzvalue();
}
