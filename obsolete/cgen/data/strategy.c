/*

$Id: strategy.c,v 1.1 2001/08/21 22:10:35 visser Exp $

Implementation of abstract machine instructions for stragegy
primitives. See strategy.h for more documentation.

*/

#include <aterm2.h>
#include "strategy.h"

#define ATmakeSymbol ATmakeAFun

ATbool ATfindSymbol(char *name, int arity, ATbool quoted);

/* Profiling */

int rule_counter = 0;
int match_counter = 0;
int build_counter = 0;
ATbool failed = false;

/* Term stack */

void TprintStack(void)
{ 
  int i; 
  ATfprintf(stdout, "tsp = %d\n", tsp); 
  for(i = tsp; i >= 0; i--) { 
    if(term_stack[i] == NULL) 
      ATfprintf(stdout, "  ts[%d] = NULL (%d)\n", i, tsp == i); 
    else
      ATfprintf(stdout, "  ts[%d] = %t (%d)\n",   i, term_stack[i], tsp == i);
  } 
}

/* Environment stack */

void EprintStack(void)
{ 
  int i; 
  ATfprintf(stdout, "esp = %d\n", esp); 
  for(i = 0; i <= esp; i++) { 
    if(environment[i] == NULL) 
      ATfprintf(stdout, "  es[%d] = NULL (%d)\n", i, esp == i); 
    else
      ATfprintf(stdout, "  es[%d] = %t (%d)\n",   i, environment[i], esp == i);
  }
}

/* Display stack */

int max_nesting = -1;

#define Desp(x)     display[x]
#define Dnesting(x) display[x - 1]
#define Dnext(x)    display[x - 2]

void Dinit(void)
{
  dsp = -1;
}

int dframe(int i)
{
  int x;
  x = dsp;
  while(x >= 2 && Dnesting(x) > i)
    x = Dnext(x);
  return Dnesting(x) == i ? x : -1;
}

long int Ed(int i, int o)
{
  int x;
  x = display[dframe(i)] - o;
  //ATfprintf(stderr, "Ed(%d, %d) = %d (frame = %d)\n", i, o, x, dframe(i));
  return x;
}

void Epushd(int i, int o) 
{ 
  int x = dframe(i - 1);
  Epush(o); 
  dsp += 3;
  Desp(dsp)     = esp;
  Dnesting(dsp) = i;
  Dnext(dsp)    = x;
  //ATfprintf(stderr, "Epushd(%d, %d) : x = %d dsp = %d\n", i, o, x, dsp);
}

void Epopd(int i, int o)
{ 
  assert(Desp(dsp) == esp);
  assert(Dnesting(dsp) == i);
  Epop(o);
  dsp -= 3;
  //ATfprintf(stderr, "Epopd(%d, %d) : dsp = %d\n", i, o, dsp);
}

void Drestore(void) 
{
}

/* Matching */

void *_MatchVar(int i)
{
  if(Eget(i) == NULL) {Eset(i, Ttop());}
  else if(!ATisEqual(Eget(i), Ttop())) {return fail_address;}
  return NULL;
}

void *_MatchVard(int i, long int o)
{
  if(Egetd(i, o) == NULL) {Esetd(i, o, Ttop());}
  else if(!ATisEqual(Egetd(i, o), Ttop())) {return fail_address;}
  return NULL;
}

void *_MatchInt(int i)
{
  if((ATgetType(Ttop()) != AT_INT) || (ATgetInt((ATermInt) Ttop()) != i)) 
    {return fail_address;}
  return NULL;
}

void *_MatchIntFC(int i, void *fc)
{
  if((ATgetType(Ttop()) != AT_INT) || (ATgetInt((ATermInt) Ttop()) != i)) 
    {return fc;}
  return NULL;
}

void *_MatchString(char *s)
{
  if(!ATisThisString(Ttop(), s))
    {return fail_address;}
  return NULL;
}

void *_MatchStringFC(char *s, void *fc)
{
  if(!ATisThisString(Ttop(), s))
    {return fc;}
  return NULL;
}

void *_MatchFun(char *f) 
{
  assert(Ttop() != NULL);
  if(!t_is_appl(Ttop()) 
     || strcmp(ATgetName(ATgetSymbol(Ttop())), f) != 0
     || ATisQuoted(ATgetSymbol(Ttop())))
    {return fail_address;}
  return NULL;
}

void *_MatchFunFC(char *f, void *fc)
{
  assert(Ttop() != NULL);
  if(!t_is_appl(Ttop())
     || strcmp(ATgetName(ATgetSymbol(Ttop())), f) != 0
     || ATisQuoted(ATgetSymbol(Ttop())))
    {
      return fc;
    }
  return NULL;
}

/* Building */

void BuildFun(char *f, int i)
{ 
  int j; 
  Tset((ATerm) ATmakeList0()); 
  for(j = i; j > 0; j--) { 
    Tseti(1, (ATerm) ATinsert((ATermList) Ttop(), Ttopi(1)));
    Tpop();
  }
  Tset((ATerm) ATmakeApplList(ATmakeSymbol(f, i, ATfalse),
			      (ATermList) Ttop()));
}

/* Traversal 

Initialization: Declare a new counter that will keep track of the
number of arguments of the node. Push the list of arguments on the
stack and set the counter to 0. */

void TravInit()
{
  NewCounter(); 
  if(t_is_appl(Ttop())) {
    Tpush(); 
    Tset((ATerm) ATgetArguments((ATermAppl) Ttopi(1)));
  }
  else {Tpush(); Tset((ATerm) ATmakeList0());}
  SetCounter(0);
}

/* When the list of arguments is empty proceed with the code at
|on_empty|. Otherwise shift the next argument on the stack.  */

void *_NextSon(void *on_empty)
{
  if(ATisEmpty((ATermList) Ttopi(TheCounter())))
    {return on_empty;}
  else {
    Tpush(); 
    IncCounter(); 
    Tset(ATgetFirst((ATermList) Ttopi(TheCounter())));
    Tseti(TheCounter(), (ATerm) ATgetNext((ATermList) Ttopi(TheCounter()))); 
  }
  return NULL;
}

void *_SomeNextSon(void *s)
{
  if(ATisEmpty((ATermList) Ttopi(TheCounter())))
    {if(IsCounterOK()) {return s;} else {return fail_address;}}
  else {
    Tpush(); 
    IncCounter(); 
    Tset(ATgetFirst((ATermList) Ttopi(TheCounter())));
    Tseti(TheCounter(), (ATerm) ATgetNext((ATermList) Ttopi(TheCounter()))); 
  }
  return NULL;
}

/* Rebuild the list of arguments and rebuild the application of the
original function symbol. */

void TravBuild(void)
{
  if(t_is_appl(Ttopi(TheCounter() + 1))) 
    {
      /* if(!(ATgetArity(ATgetSymbol(Ttopi(TheCounter() + 1))) 
              == TheCounter() + ATgetLength(Ttopi(TheCounter()))))
	{
	  int i;
	  for(i = 0; i <= TheCounter() + 1; i++) 
	    {
	      ATfprintf(stdout, "tsp[top-%d] = %t\n", i, Ttopi(i));
	    }
	  ATfprintf(stdout, "TheCounter = %d arity = %d\n", TheCounter(),
		    ATgetArity(ATgetSymbol(Ttopi(TheCounter() + 1))));
	}
      */
      assert(ATgetArity(ATgetSymbol(Ttopi(TheCounter() + 1))) == 
             (TheCounter() + ATgetLength(Ttopi(TheCounter()))));
      for(; TheCounter() > 0; DecCounter()) 
	{
	  Tseti(TheCounter(), 
		(ATerm) ATinsert((ATermList) Ttopi(TheCounter()), Ttop()));
	  Tpop();
	}
      Tseti(1, 
	    (ATerm) ATmakeApplList(ATgetSymbol(Ttopi(1)), (ATermList) Ttop()));
    }
  Tpop();
  CloseCounter();
}

/* Matching Traversal

When a traversal looks into a term only to match subterms, there is no
need to rebuild the term afterwards. */

void MatchTravInit()
{
  NewCounter(); 
  SetCounter(ATgetArity(ATgetSymbol(Ttop())));
  Tpush();
}

/* When the list of arguments is empty proceed with the code at
|on_empty|. Otherwise shift the next argument on the stack.  */

void *_MatchNextSon(void *on_empty)
{
  if(TheCounter() == 0)
    {return on_empty;}
  else {
    DecCounter(); 
    Tset(ATgetArgument(Ttopi(1), TheCounter()));
  }
  return NULL;
}
