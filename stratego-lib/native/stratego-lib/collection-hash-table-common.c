#include <srts/stratego.h>
#include "stratego-lib-common.h"

ATermTable SSL_table_table = NULL;

/**************************************************************************
 * Table primitives
 */
ATerm SSL_hashtable_create(ATerm initial_size_term, ATerm max_load_term) {
  assert_is_int(initial_size_term);
  assert_is_int(max_load_term);
  int initial_size  = _get_int(initial_size_term);
  int max_load      = _get_int(max_load_term);
  ATermTable result = ATtableCreate(initial_size,max_load);
  return hashtable_to_term(result);
}

ATerm SSL_hashtable_destroy(ATerm table_term) {
  ATermTable table = hashtable_from_term(table_term);
  if(table == NULL)
    _fail(table_term);

  ATtableDestroy(table);
  return table_term;
}

ATerm SSL_hashtable_reset(ATerm table_term) {
  ATermTable table = hashtable_from_term(table_term);
  if(table == NULL)
    _fail(table_term);

  ATtableReset(table);
  return table_term;
}

ATerm SSL_hashtable_put(ATerm table_term, ATerm key, ATerm value) {
  ATermTable table = hashtable_from_term(table_term);
  if(table == NULL)
    _fail(table_term);

  ATtablePut(table, key, value);
  return table_term;
}

ATerm SSL_hashtable_get(ATerm table_term, ATerm key) {
  ATerm result = NULL;
  ATermTable table = hashtable_from_term(table_term);
  if(table == NULL)
    _fail(table_term);

  result = ATtableGet(table, key);
  if(result == NULL) {
    _fail(table_term);
  }

  return result;
}

ATerm SSL_hashtable_remove(ATerm table_term, ATerm key) {
  ATermTable table = hashtable_from_term(table_term);
  if(table == NULL)
    _fail(table_term);

  ATtableRemove(table, key);
  return table_term;
}

ATerm SSL_hashtable_keys(ATerm table_term) {
  ATermTable table = hashtable_from_term(table_term);
  if(table == NULL)
    _fail(table_term);

  return (ATerm) ATtableKeys(table);
}

/**
 * Converts SSL's ATermTable table-table to a representation in an ATerm.
 */
ATerm SSL_table_hashtable(){
  if(SSL_table_table == NULL)
    SSL_table_table = ATtableCreate(100, 80);

  return hashtable_to_term(SSL_table_table);
}



