#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>

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
