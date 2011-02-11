#include <srts/stratego.h>
#include "stratego-lib-common.h"

static ATermTable SSL_dr_table = NULL;
static ATerm SSL_dr_table_term = NULL;

/**
 * Converts SSL's ATermTable table-table to a representation in an ATerm.
 */
ATerm SSL_dynamic_rules_hashtable() {
  if(SSL_dr_table == NULL) {
    SSL_dr_table = ATtableCreate(100, 80);
    SSL_dr_table_term = hashtable_to_term(SSL_dr_table);
    ATprotect(&SSL_dr_table_term);
  }

  return SSL_dr_table_term;
}



