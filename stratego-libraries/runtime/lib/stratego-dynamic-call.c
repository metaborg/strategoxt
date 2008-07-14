#include "srts/stratego.h"

static ATbool dynclosure_destructor(ATermBlob b);

static void init_module_constant_terms(void) {}
static void init_module_constructors(void) {
  ATregisterBlobDestructor(dynclosure_destructor);
}

#include "srts/init-stratego-module.h"
#define DYNC_MAGIC 0x44796e43 /* DynC */

typedef struct str_dynclosure *StrDL;

struct str_dynclosure
{
  unsigned int magic;
  struct str_closure cl;
  unsigned int ns, nt;
};

ATermTable strategy_table ;

void SRTS_register_function(ATerm name, StrCL fcn) {
  ATtablePut(strategy_table, name, (ATerm) ATmakeBlob(sizeof fcn, fcn));
  SRTS_lookup_function(name);
}

StrCL SRTS_lookup_function(ATerm name) {
  ATerm res = ATtableGet(strategy_table,name);

  if(res == NULL) {
    return NULL;
  }

  return (StrCL) ATgetBlobData((ATermBlob) res);
}

ATerm SRTS_dyn(StrCL cl, unsigned int ns, unsigned int nt) {
  StrDL dl;

  dl = malloc(sizeof(struct str_dynclosure));
  if (NULL == dl)
  {
    fprintf(stderr, "*** STRS_dyn: not enough memory.\n");
    return NULL;
  }

  dl->magic = DYNC_MAGIC;
  dl->cl = *cl;
  dl->ns = ns;
  dl->nt = nt;

  return (ATerm) ATmakeBlob(sizeof(struct str_dynclosure), dl);
}

static StrDL Blob2DynClosure(ATerm b) {
  StrDL dl;

  if(NULL == b || !ATisBlob(b) || !ATgetBlobSize(b) != sizeof(struct str_dynclosure))
    return NULL;

  dl = (StrDL) ATgetBlobData((ATermBlob) b);
  if(dl->magic != DYNC_MAGIC)
    return NULL;

  return dl;
}

StrCL SRTS_call(ATerm s, unsigned int ns, unsigned int nt) {
  StrDL dl = Blob2DynClosure(s);

  if(NULL == dl)
    return NULL;

  if(dl->ns != ns || dl->nt != nt)
  {
    fprintf(stderr, "*** SRTS_call: wrong number of arguments, excepts %u strategies and %u terms.\n", dl->ns, dl->nt);
    return NULL;
  }

  return &dl->cl;
}

static ATbool dynclosure_destructor(ATermBlob b) {
  StrDL dl = Blob2DynClosure((ATerm) b);

  if(NULL == dl)
    return ATfalse;

  free(dl);

  return ATtrue;
}
