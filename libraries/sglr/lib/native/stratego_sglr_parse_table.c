/**
 *
 * @author Martin Bravenboer
 * @author Karl Trygve Kalleberg
 */

#include <stdio.h>
#include <aterm2.h>
#include <sglr.h>
#include <parse-table.h>

#include "stratego_sglr.h"
#include "stratego_sglr_internal.h"

/**
 * @todo Check if input is Blob
 */
parse_table* parse_table_from_term(ATerm tbl_term)
{
  return ATgetBlobData((ATermBlob) tbl_term);
}

ATerm parse_table_to_term(parse_table* tbl)
{
  return (ATerm) ATmakeBlob(sizeof(parse_table), tbl);
}

/**
 * @todo Check if input is parse table
 */
ATerm STRSGLR_open_parse_table(ATerm tbl_term)
{
  STRSGLR_ensure_init();
  SG_InitParseTableErrorList();
  parse_table* tbl = SG_BuildParseTable((ATermAppl) tbl_term, "unknown");

  if(tbl == NULL) {
    ERR_displaySummary(SG_makeParseTableErrorSummary("unknown"));
    return NULL;
  }
  else {
    return activate_parse_table(parse_table_to_term(tbl));
  }
}

/**
 * @todo Check parse_table_from_term returns 
 */
ATerm STRSGLR_close_parse_table(ATerm tbl_term)
{
  ATerm result;
  parse_table* tbl = parse_table_from_term(tbl_term);
  if(tbl == NULL)
  {
    result = NULL;
  }
  else
  {
    // STR-762: we cannot discard the parse table until all refs are dead
    // so we put it in the elderly home, waiting for it to die.
    inactivate_parse_table(tbl_term);
    result = (ATerm) ATempty;
  }

  return result;
}
