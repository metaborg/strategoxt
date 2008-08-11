/**
 * This file has to be compatible with the two versions of the C code
 * generated because it used with the stage1 (old compilation) and with the
 * last stage (new compilation).
 *
 * To solve this problem you must prefer prim notation instead of fake
 * externals.
 */
#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>

// new compiler generation
#ifdef cl_fl

static ATerm strc_cgen_aterm_0_0(StrSL sl, ATerm t);


static void init_module_constructors() {}
static void init_module_constant_terms() {}
static void register_strategies() {
  unsigned int i = 1;
  static struct str_closure cl[1];
  static struct str_funlink fl[1] = {
    { &strc_cgen_aterm_0_0, NULL }
  };
  static const char *name[1] = {
    "strc_cgen_aterm_0_0"
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
#endif

#ifdef cl_fl
static
#endif
ATerm strc_cgen_aterm_0_0(StrSL sl, ATerm t)
{
  int length = 0;
  int row = 0;
  int stringi = 0;
  int i = 0;
  char* string = ATwriteToBinaryString(t, &length);
  char* result = (char*) malloc(length * 6 + (int) (length / 15) + 6);

  if(result == NULL) {
    perror("SRTS/write_term_to_shared_string");
    _fail(t);
  }

  result[i] = '\n';
  i++;
  for(stringi = 0; stringi <= length; stringi++) {
    int j = 0;
    char buf[6];

    if(row > 15) {
      result[i] = '\n';
      i++;
      row = 0;
    }

    sprintf(buf, "0x%02x", (unsigned char) string[stringi]);
    while(buf[j] != 0) {
      result[i] = (unsigned char) buf[j];
      j++;
      i++;
    }

    result[i] = ',';
    i++;
    result[i] = ' ';
    i++;

    row = row + 1;
  }

  result[i] = 0;
  i++;

  t = (ATerm) ATmakeAppl(ATmakeSymbol("", 2, ATfalse)
    , (ATerm) ATmakeString(result)
    , (ATerm) ATmakeInt(length)
    );

  free(result);
  return t;
}
