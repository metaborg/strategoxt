#include "srts/stratego.h"

static ATbool heap_closure_destructor(ATermBlob b);
static ATbool heap_frame_destructor(ATermBlob b);

static void init_module_constant_terms(void) {}
static void init_module_constructors(void) {
  ATregisterBlobDestructor(heap_closure_destructor);
  ATregisterBlobDestructor(heap_frame_destructor);
}

#include "srts/init-stratego-module.h"

#define HPCL_MAGIC 0x4870436c /* HpCl */
typedef struct str_heap_closure *StrHCl;

struct str_heap_closure
{
  unsigned int magic;
  struct str_closure cl;
  unsigned int ns, nt;
  ATermBlob sl;
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
  StrHCl dl;

  dl = malloc(sizeof(struct str_heap_closure));
  if (NULL == dl)
  {
    fprintf(stderr, "*** STRS_dyn: not enough memory.\n");
    return NULL;
  }

  dl->magic = HPCL_MAGIC;
  dl->cl = *cl;
  dl->ns = ns;
  dl->nt = nt;

  /** Warning: This cast relies on the generated code. */
  dl->sl = ATmakeBlob(sizeof(struct str_heap_frame), (StrHSl) cl->sl);

  return (ATerm) ATmakeBlob(sizeof(struct str_heap_closure), dl);
}

static StrHCl Blob2HeapClosure(ATerm b) {
  StrHCl dl;

  if(NULL == b || !ATisBlob(b) || !ATgetBlobSize(b) != sizeof(struct str_heap_closure))
    return NULL;

  dl = (StrHCl) ATgetBlobData((ATermBlob) b);
  if(dl->magic != HPCL_MAGIC)
    return NULL;

  return dl;
}

StrCL SRTS_call(ATerm s, unsigned int ns, unsigned int nt) {
  StrHCl dl = Blob2HeapClosure(s);

  if(NULL == dl)
    return NULL;

  if(dl->ns != ns || dl->nt != nt) {
    fprintf(stderr, "*** SRTS_call: wrong number of arguments, excepts %u strategies and %u terms.\n", dl->ns, dl->nt);
    return NULL;
  }

  return &dl->cl;
}

static ATbool heap_closure_destructor(ATermBlob b) {
  StrHCl dl = Blob2HeapClosure((ATerm) b);

  if(NULL == dl)
    return ATfalse;

  free(dl);

  return ATtrue;
}

static ATbool heap_frame_destructor(ATermBlob b) {
  StrHSl hf;
  ATerm *vars;

  if(NULL == b || !ATisBlob(b) || !ATgetBlobSize(b) != sizeof(struct str_heap_closure))
    return ATfalse;

  hf = (StrHSl) ATgetBlobData(b);
  if(hf->magic != HPFR_MAGIC)
    return ATfalse;

  vars = hf->frame.vars;
  if(vars != NULL) {
    ATunprotectArray(vars);
    free(vars);
  }

  /**
   * hf->frame.funs is not freed because it is register in Blob.
   * The default destruction of a Blob free the data of the Blob if no
   * destructor are defined.
   */
  free(hf);

  return ATtrue;
}
