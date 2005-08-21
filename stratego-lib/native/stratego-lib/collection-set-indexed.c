#include <srts/stratego.h>
#include "stratego-lib-common.h"

/*************************************************************************
 * IndexedSet <-> ATerm conversion
 */

/**
 * Returns a IndexedSet for a given ATerm
 */
ATermTable indexedSet_from_term(ATerm set_term) {
  ATermIndexedSet result = NULL;

  if(ATisInt(set_term)) {
    result = (ATermIndexedSet) ATgetInt((ATermInt)set_term);
  } else {
    fprintf(stderr, "[srts | error] SRTS/sets/indexedSet_from_term: not an int\n");
    _fail(set_term);
  }

  return result;
}

/**
 * Converts an IndexedSet to  a representation in an ATerm.
 */
ATerm indexedSet_to_term(ATermIndexedSet set) {
  /* TODO: use a Blob */
  return (ATerm) ATmakeInt((int) set);
}

/**************************************************************************
 * IndexedSet primitives
 */
ATerm SSL_indexedSet_create(ATerm initial_size_term, ATerm max_load_term) {
  assert_is_int(initial_size_term);
  assert_is_int(max_load_term);
  int initial_size  = _get_int(initial_size_term);
  int max_load      = _get_int(max_load_term);
  ATermIndexedSet result = ATindexedSetCreate(initial_size,max_load);
  return indexedSet_to_term(result);
}

ATerm SSL_indexedSet_destroy(ATerm set_term) {
  ATermIndexedSet set = indexedSet_from_term(set_term);
  ATindexedSetDestroy(set);
  return set_term;
}

ATerm SSL_indexedSet_reset(ATerm set_term) {
  ATermIndexedSet set = indexedSet_from_term(set_term);
  ATindexedSetReset(set);
  return set_term;
}

ATerm SSL_indexedSet_put(ATerm on_old(ATerm), ATerm set_term, ATerm elem) {
  ATerm result_term;
  ATbool new;
  ATermIndexedSet set = indexedSet_from_term(set_term);

  long index = ATindexedSetPut(set, elem, &new);
  result_term = (ATerm) (ATmakeInt(index));

  if(new) {
      return result_term;
  } else {
      return on_old(result_term);
  }
}

ATerm SSL_indexedSet_getIndex(ATerm set_term, ATerm elem) {
  ATermIndexedSet set = indexedSet_from_term(set_term);
  long index = ATindexedSetGetIndex(set, elem);

  if(index < 0) {
    _fail(set_term);
  }

  return (ATerm) (ATmakeInt(index));
}

ATerm SSL_indexedSet_getElem(ATerm set_term, ATerm index_term) {
  ATermIndexedSet set = indexedSet_from_term(set_term);
  assert_is_int(index_term);
  long index = _get_int(index_term);
  return (ATerm) ATindexedSetGetElem(set, index);
}

ATerm SSL_indexedSet_remove(ATerm set_term, ATerm elem) {
  ATermIndexedSet set = indexedSet_from_term(set_term);
  ATindexedSetRemove(set, elem);
  return set_term;
}

ATerm SSL_indexedSet_elements(ATerm set_term) {
  ATermIndexedSet set = indexedSet_from_term(set_term);
  return (ATerm) (ATindexedSetElements(set));
}

