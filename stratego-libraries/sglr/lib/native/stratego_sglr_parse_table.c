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
    return parse_table_to_term(tbl);
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
    SG_DiscardParseTable(tbl);
    result = (ATerm) ATempty;
  }

  return result;
}
