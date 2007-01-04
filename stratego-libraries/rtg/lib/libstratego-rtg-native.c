#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>

ATerm strrtg_repeat_1_0(StrSL sl, StrCL f, ATerm t)
{
  ATerm result = t;
  ATerm next;

  next = cl_fun(f)(cl_sl(f), t);
  while(next != NULL)
  {
    result = next;
    next = cl_fun(f)(cl_sl(f), result);
  }

  return result;
}

ATerm strrtg_list_loop1_1_0(StrSL sl, StrCL f, ATerm t)
{
  if(ATgetType(t) == AT_LIST) {
    ATbool success = ATfalse;
    ATermList suffix = (ATermList) t;

    while(!ATisEmpty(suffix))
    {
      ATerm result = cl_fun(f)(cl_sl(f), ATgetFirst(suffix));
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
