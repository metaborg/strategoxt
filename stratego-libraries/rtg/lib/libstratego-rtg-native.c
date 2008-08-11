#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>

static ATerm strrtg_repeat_1_0(StrSL sl, StrCL f, ATerm t);
static ATerm strrtg_list_loop1_1_0(StrSL sl, StrCL f, ATerm t);


static void init_module_constructors() {}
static void init_module_constant_terms() {}
static void register_strategies() {
  unsigned int i = 2;
  static struct str_closure cl[2];
  static struct str_funlink fl[2] = {
    { &strrtg_repeat_1_0, NULL },
    { &strrtg_list_loop1_1_0, NULL }
  };
  static const char *name[2] = {
    "strrtg_repeat_1_0",
    "strrtg_list_loop1_1_0"
  };

  assert(strategy_table != NULL);
  while(i--) {
    cl[i].fl = &fl[i];
    cl[i].sl = NULL;
    SRTS_register_function(
      (ATerm)ATmakeAppl0(ATmakeSymbol(name[i], 0, ATtrue)),
      &(cl[i])
    );
  }
}
static void init_strategies() {}

#include <srts/init-stratego-module.h>


static ATerm strrtg_repeat_1_0(StrSL sl, StrCL f, ATerm t)
{
  ATerm result = t;
  ATerm next;

  res_cl_call_1(next, f, t);
  while(next != NULL)
  {
    result = next;
    res_cl_call_1(next, f, result);
  }

  return result;
}

static ATerm strrtg_list_loop1_1_0(StrSL sl, StrCL f, ATerm t)
{
  if(ATgetType(t) == AT_LIST) {
    ATbool success = ATfalse;
    ATermList suffix = (ATermList) t;

    while(!ATisEmpty(suffix))
    {
      ATerm result;
      res_cl_call_1(result, f, ATgetFirst(suffix));
      if(result != NULL)
        success = ATtrue;
      
      suffix = ATgetNext(suffix);
    }

    if(success == ATtrue)
      return t;
    else
      return NULL;
  }
  else
  {
    return NULL;
  }
}
