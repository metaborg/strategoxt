#include <srts/stratego.h>

ATermTable SSL_table_table = NULL;


/**
 * Returns a ATermTable for a given ATerm
 */
ATermTable hashtable_from_term(ATerm table) {
  ATermTable result = NULL;

  if(ATisBlob(table)) {
    if(ATgetBlobSize((ATermBlob) table) != sizeof(ATermTable)) {
      fprintf(stderr, "[srts | error] SRTS/table/table_from_term: size of blob is not equal to size of ATermTable\n");
      _fail(table);
    } else {
      result = (ATermTable) ATgetBlobData((ATermBlob) table);
    }
  } else if(ATisInt(table)) {
    result = (ATermTable) AT_getInt(table);
  } else {
    fprintf(stderr, "[srts | error] SRTS/table/table_from_term: not a blob or int\n");
    _fail(table);
  }

  return result;
}

/**
 * Converts an ATermTable to  a representation in an ATerm.
 */
ATerm hashtable_to_term(ATermTable table) {
  return (ATerm) ATmakeInt((int) table);
  //  return (ATerm) ATmakeBlob(sizeof(ATermTable),table) ;
}


/**************************************************************************
 * Table primitives
 */
ATerm SSL_hashtable_create(ATerm initial_size_term, ATerm max_load_term) {
  int initial_size  = AT_getInt(initial_size_term);
  int max_load      = AT_getInt(max_load_term);
  ATermTable result = ATtableCreate(initial_size,max_load);
  return hashtable_to_term(result);
}

ATerm SSL_hashtable_destroy(ATerm table_term) {
  ATermTable table = hashtable_from_term(table_term);
  ATtableDestroy(table);
  return table_term;
}

ATerm SSL_hashtable_reset(ATerm table_term) {
  ATermTable table = hashtable_from_term(table_term);
  ATtableReset(table);
  return table_term;
}

ATerm SSL_hashtable_put(ATerm table_term, ATerm key, ATerm value) {
  ATermTable table = hashtable_from_term(table_term);
  ATtablePut(table, key, value);
  return table_term;
}

ATerm SSL_hashtable_get(ATerm table_term, ATerm key) {
  ATerm result = NULL;
  ATermTable table = hashtable_from_term(table_term);

  result = ATtableGet(table, key);
  if(result == NULL) {
    _fail(table_term);
  }

  return result;
}

ATerm SSL_hashtable_remove(ATerm table_term, ATerm key) {
  ATermTable table = hashtable_from_term(table_term);
  ATtableRemove(table, key);
  return table_term;
}

ATerm SSL_hashtable_keys(ATerm table_term) {
  ATermTable table = hashtable_from_term(table_term);
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



