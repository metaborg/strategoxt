#include <aterm2.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stratego_sglr.h"

struct Location {
  int line;
  int column;
};

#define FIRST_LINE 1
#define FIRST_COLUMN 1

/**
 * Constructors
 */
static AFun applFun;
static AFun ambFun;
static AFun locationFun;
static ATerm optLayout;

static void initLocation(void)
{
  applFun = ATmakeAFun("appl", 2, ATfalse);
  ATprotectAFun(applFun);
  ambFun = ATmakeAFun("amb", 1, ATfalse);
  ATprotectAFun(ambFun);
  locationFun = ATmakeAFun("Location", 4, ATfalse);
  ATprotectAFun(locationFun);

  applFun = ATmakeAFun("appl", 2, ATfalse);

  optLayout = ATparse("cf(opt(layout()))");
  ATprotect(&optLayout);
}

static ATerm traverse(ATerm tree, struct Location* session);

/**
 * Main entry point for Stratego
 */
ATerm STRSGLR_anno_location(ATerm t)
{
  initLocation();

  struct Location session;
  session.line = FIRST_LINE;
  session.column = FIRST_COLUMN;

  ATerm top = ATgetArgument(t, 0);
  ATerm whatever = ATgetArgument(t, 1);
  top = traverse(top, &session);
  return (ATerm) ATmakeAppl2(ATmakeAFun("parsetree", 2, ATfalse), top, whatever);
}

static bool isTreeChar(ATerm t)
{
  return ATgetType(t) == AT_INT;
}

static bool isTreeAppl(ATerm t)
{
  return ATgetType(t) == AT_APPL && ATgetAFun(t) == applFun;
}

static bool isTreeLayout(ATerm t)
{
  return isTreeAppl(t) && ATgetArgument(ATgetArgument(t, 0), 1) == optLayout;
}

static ATerm makeTreeAppl(ATerm prod, ATermList args) 
{
  return (ATerm) ATmakeAppl2(applFun, prod, (ATerm) args);
}

static bool isTreeAmb(ATerm t)
{
  return ATgetType(t) == AT_APPL && ATgetAFun(t) == ambFun;
}

static ATerm makeTreeAmb(ATermList t) 
{
  return (ATerm) ATmakeAppl1(ambFun, (ATerm) t);
}

static int getTreeChar(ATerm tree)
{
  return ATgetInt((ATermInt) tree);
}

static ATerm setLocation(ATerm t, int firstLine, int firstColumn, int lastLine, int lastColumn)
{
  ATermList annos = (ATermList) ATgetAnnotations(t);
  if(annos == NULL) {
    annos = ATempty;
  }
  annos = ATinsert(annos, (ATerm) ATmakeAppl(locationFun, 
    ATmakeInt(firstLine), ATmakeInt(firstColumn), ATmakeInt(lastLine), ATmakeInt(lastColumn)));
  return ATsetAnnotations(t, (ATerm) annos);
}

static void scan(ATerm t, struct Location* session)
{
  if (isTreeChar(t)) {
    if(getTreeChar(t) == '\n') {
      session->column = FIRST_COLUMN;
      session->line++;
    }
    else {
      session->column++;
    }
  }
  else if(isTreeAppl(t)) {
    ATermList args = (ATermList) ATgetArgument(t, 1);
    while(args != ATempty) {
      scan(ATgetFirst(args), session);
      args = ATgetNext(args);
    }
  }
  else if (isTreeAmb(t)) {
    scan(ATgetFirst(ATgetArgument(t, 0)), session);
  }
  else {
    ATwarning("unhandled tree: %t\n", t);
  }
}

static ATermList traverseArgs(ATermList args, struct Location* session)
{
  if(args == ATempty) {
    return args;
  }
  else {
    ATerm arg = traverse(ATgetFirst(args), session);
    return ATinsert(traverseArgs(ATgetNext(args), session), arg);
  }
}

static ATerm traverse(ATerm t, struct Location* session)
{
  int firstLine = session->line;
  int firstColumn = session->column;

  if (isTreeChar(t)) {
    if (getTreeChar(t) == '\n') {
      session->column = FIRST_COLUMN;
      session->line++;
    }
    else {
      session->column++;
    }
    return t;
  }
  else if(isTreeLayout(t)) {
    scan(t, session);
    return t;
  }
  else if(isTreeAppl(t)) {
    ATermList args = traverseArgs((ATermList) ATgetArgument(t, 1), session);
    ATermList annos = (ATermList) ATgetAnnotations(t);
    if(annos == NULL) {
      annos = ATempty;
    }

    t = makeTreeAppl(ATgetArgument(t, 0), args);
    t = ATsetAnnotations(t, (ATerm) annos);
  }
  else if (isTreeAmb(t)) {
    ATermList args = (ATermList) ATgetArgument(t, 0);
    ATermList newArgs = ATmakeList0();
    struct Location initialSession = *session;
    struct Location thisSession;

    while(args != ATempty) {
      thisSession = initialSession;
      newArgs = ATinsert(newArgs, traverse(ATgetFirst(args), &thisSession));
      args = ATgetNext(args);
    }

    session->line = thisSession.line;
    session->column = thisSession.column;
    t = makeTreeAmb(ATreverse(newArgs));
  }
  else {
    ATwarning("unhandled tree: %t\n", t);
  }

  int lastLine = session->line;
  int lastColumn = session->column;

  return setLocation(t, firstLine, firstColumn, lastLine, lastColumn);
}
