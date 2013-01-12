#include <stdio.h>
#include <aterm2.h>
#include <sglr.h>
#include <parse-table.h>

#define MAX_INACTIVE_PARSE_TABLES 1024

parse_table* parse_table_from_term(ATerm tbl_term);
ATerm parse_table_to_term(parse_table* tbl);
void STRSGLR_ensure_init(void);
void inactivate_parse_table(ATerm t);
ATerm activate_parse_table(ATerm t);
