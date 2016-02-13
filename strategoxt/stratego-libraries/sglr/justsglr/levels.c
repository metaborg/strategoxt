#include "levels.h"
#include <aterm2.h>

static ATermTable levels = NULL;
#define INITIAL_TABLE_SIZE  1024
#define LOAD_PERCENTAGE     75

void SG_cleanupLevels(void)
{
  ATtableDestroy(levels);

  levels = NULL;
}

void SG_initLevels(void)
{
  levels = ATtableCreate(INITIAL_TABLE_SIZE, LOAD_PERCENTAGE);

  if (levels == NULL) {
    ATerror("SG_initLevels: unable to allocate table for storing.");
  }
}

void SG_setLevel(ATerm t, int level)
{
  ATtablePut(levels, t, (ATerm) ATmakeInt(level));
}

void SG_unsetLevel(ATerm t)
{
  ATtableRemove(levels, t);
}

int SG_getLevel(ATerm t)
{
  ATermInt level = (ATermInt) ATtableGet(levels, t);

  if (level != NULL) {
    return ATgetInt(level);
  }
  else {
    return -1;
  }
}
