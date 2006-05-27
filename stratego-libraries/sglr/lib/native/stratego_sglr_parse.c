/**
 * See stratego_sglr_parse_table.c for information on the reasons for
 * using the "language" hacks.
 *
 * @author Martin Bravenboer
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <aterm2.h>
#include <srts/stratego.h>
#include <stratego-lib/stratego-lib-common.h>
#include <sglr.h>
#include <parse-table.h>
#include <rsrc-usage.h>
#include <MEPT-utils.h>

#include "stratego_sglr.h"
#include "stratego_sglr_internal.h"

/**
 * State
 */
static ATerm parse_error_term = NULL;
static ATerm none_term = NULL;

/**
 * Prototypes
 */
ATerm SGparseStringUsingTable(parse_table* table, const char* sort, const char* string, const char* path);
static char* read_text_from_stream(FILE* stream);

void STRSGLR_ensure_init(void)
{
  ATerm foo;

  static ATbool STRSGLR_init = ATfalse;
  if(STRSGLR_init)
    return;

  STRSGLR_init = ATtrue;

  PT_initMEPTApi();
  PT_initAsFix2Api();
  initErrorApi();

  SG_TOOLBUS_OFF();
  SG_OUTPUT_ON();
  foo = STRSGLR_set_default_config();

  none_term = (ATerm) ATmakeAppl(ATmakeAFun("None", 0, ATfalse));
  ATprotect(&none_term);
  ATprotect(&parse_error_term);
}

ATerm STRSGLR_set_default_config(void)
{
  STRSGLR_ensure_init();

  STRSGLR_set_default_filters();
  SG_CYCLE_ON();
  SG_ASFIX2_ON();
  SG_AMBIGUITY_ERROR_OFF();
  return (ATerm) ATempty;
}

static ATerm parse_string_pt(const char* string, ATerm tbl_term, ATerm start_term, ATerm path_term)
{
  ATerm result = NULL;
  parse_table* tbl = NULL;
  const char* start = NULL;
  const char* path = NULL;

  STRSGLR_ensure_init();
  STRSGLR_clear_parse_error();

  tbl = parse_table_from_term(tbl_term);
  if(tbl == NULL)
    return NULL; // @todo: set the error term.

  if(AT_isString(start_term))
  {
    start = AT_getString(start_term);
  }
  else
  {
    if(start_term != none_term)
      return NULL;  
  }

  if(AT_isString(path_term))
  {
    path = AT_getString(path_term);
  }
  else
  {
    return NULL;
  }

  result = SGparseStringUsingTable(tbl, start, string, path);
  if(result != NULL)
  {
    if(SGisParseError(result))
    {
      parse_error_term = result;
      result = NULL;
    }
  }

  return result;
}

/**
 * Parse a string.
 *
 * sort is allowed to be None.
 */
ATerm STRSGLR_parse_string_pt(ATerm string_term, ATerm tbl_term, ATerm start_term, ATerm path_term)
{
  if(AT_isString(string_term))
    return parse_string_pt(AT_getString(string_term), tbl_term, start_term, path_term);
  else
    return NULL;
}

/**
 * Parse a stream.
 *
 * sort is allowed to be None.
 */
ATerm STRSGLR_parse_stream_pt(ATerm onfail(ATerm), ATerm stream_term, ATerm tbl_term, ATerm start_term, ATerm path_term)
{
  char* text;
  ATerm result;

  FILE* stream = stream_from_term(stream_term);
  if(stream == NULL)
    return NULL;

  text = read_text_from_stream(stream);
  if(text == NULL)
    return NULL;

  result = parse_string_pt(text, tbl_term, start_term, path_term);
  if(result == NULL)
  {
    onfail(ATmakeString(text));
  }
  free(text);
  return result;
}

ATerm STRSGLR_get_parse_error(void)
{
  return parse_error_term;
}

ATerm STRSGLR_is_parse_tree(ATerm trm)
{
  if(SGisParseTree(trm))
  {
    return trm;
  }
  else
  {
    return NULL;
  }
}

ATerm STRSGLR_clear_parse_error(void)
{
  if(parse_error_term != NULL)
  {
    parse_error_term = NULL;
  }

  return (ATerm) ATempty;
}

static char* read_text_from_stream(FILE* stream)
{
  char* result;
  struct stat statbuf;
  int fd = fileno(stream);
  int c = 0;
  int position = 0;

  IF_STATISTICS(SG_Timer());

  if(fstat(fd, &statbuf) != 0)
    return NULL;

  if(S_ISREG(statbuf.st_mode))
  {
    size_t fsize = statbuf.st_size;
    result = malloc(fsize + 1);

    while((c = fgetc(stream)) != EOF)
    {
      result[position] = c;
      position++;
    }
  }
  else
  {
    int BUFSIZE = 65536;
    int bufsize = BUFSIZE;
    result = malloc(BUFSIZE);

    while((c = fgetc(stream)) != EOF)
    {
      if(position >= bufsize) {
        bufsize += BUFSIZE;
        result = realloc(result, bufsize);
      }

      result[position] = c;
      position++;
    }

    if(position >= bufsize)
      result = realloc(result, bufsize + 1);
  }

  result[position] = '\0';
  IF_STATISTICS(fprintf(SG_log(), "Reading stream of input: %.6f\n", SG_Timer()));

  return result;
}
