#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>

/**
 * @todo Table needs ATerm protection
 */
static ATerm **createMatrix(int max)
{
  int i;
  ATerm **result = malloc(max * sizeof(ATerm*));
  if(result == NULL) {
    fprintf(stderr, "out of memory\n");
    exit(1);
  }

  result[0] = malloc(max * max * sizeof(ATerm));
  if(result[0] == NULL) {
    fprintf(stderr, "out of memory\n");
    exit(1);
  }

  for(i = 1; i < max; i++) {
    result[i] = result[0] + i * max;
  }

  return result;
}

static void clearMatrix(ATerm** matrix, int max)
{
  int i;
  int j;
  for(i = 0; i < max; i++) {
    for(j = 0; j < max; j++) {
      matrix[i][j] = NULL;
    }
  }
}

static void freeMatrix(ATerm **edges)
{
  free((void *) edges[0]);
  free((void *) edges);
}

static void transcloseMatrix(ATerm** matrix, int max) {
  int i,j,k;

  for(i = 0; i <max; i++) {
    for(j = 0;j < max; j++) {
      if(matrix[i][j]) {
        for(k = 0; k < max; k++) {
          if(matrix[j][k] && i != k) {
            matrix[i][k] = matrix[i][j];
          }
        }
      }
    }
  }
}

/**
 * Implementation of the Floyd-Warshall algorithm.
 */
static void iset_transitive_closure(ATermIndexedSet nodes, ATermTable edges)
{
  int i,j,k;
  ATermList nodelist = ATindexedSetElements(nodes);
  int max = ATgetLength(nodelist);
  ATerm **matrix = createMatrix(max);
  AFun tuple2_fun = ATmakeAFun("", 2, ATfalse);
  AFun tuple3_fun = ATmakeAFun("", 3, ATfalse);

  for(i = 0; i < max; i++) {
    ATerm v1 = ATindexedSetGetElem(nodes, i);
    for(j = 0; j < max; j++) {
      ATerm v2 = ATindexedSetGetElem(nodes, j);
      ATerm edge = (ATerm) ATmakeAppl2(tuple2_fun, v1, v2);
      matrix[i][j] = ATtableGet(edges, edge);
    }
  }

  transcloseMatrix(matrix, max);

  for(i = 0; i < max; i++) {
    ATerm v1 = ATindexedSetGetElem(nodes, i);

    for(j = 0; j < max; j++) {
      if(matrix[i][j]) {
        ATerm v2 = ATindexedSetGetElem(nodes, j);
        ATerm edge = (ATerm) ATmakeAppl2(tuple2_fun, v1, v2);
        ATerm label = matrix[i][j];
        if(label != NULL) {
	  ATtablePut(edges, edge, label);
        }
      }
    }
  }

  freeMatrix(matrix);
}

ATerm iset_transitive_closure_0_2(StrSL sl, ATerm nodeset, ATerm edgetable, ATerm current)
{
  iset_transitive_closure(indexedSet_from_term(nodeset), hashtable_from_term(edgetable));
  return current;
}
