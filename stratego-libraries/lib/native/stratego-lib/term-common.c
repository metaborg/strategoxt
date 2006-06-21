#include <srts/stratego.h>
#include <stdlib.h>

ATerm SSL_mkterm(ATerm c, ATerm ts0)
{ 
  char *f;
  ATermList ts;
  ATerm t;
  AFun fun;
  ATbool quoted;

  /*
  if(ATisThisString(c, "Nil") && ATgetLength(ts0) == 0)
    t = (ATerm) ATempty;
  else if(ATisThisString(c, "Cons") && ATgetLength(ts0) == 2)
    t = (ATerm) ATinsert(ATgetFirst(ATgetNext((ATermList)ts0)), ATgetFirst((ATermList)ts0));
  */
  switch(ATgetType(c)) {
  case AT_REAL:
  case AT_INT :
    t = c;
    break;
  case AT_LIST :
    t = (ATerm) CheckATermList(ts0);
    break;
  case AT_APPL:
    if(ATisString(c))
      { 
	f = ATgetName(ATgetAFun(c));
	if(f[0] == '\0')
	  quoted = ATfalse;
	else
	  {
	    fun = ATgetAFun(ATparse(f));
	    f = ATgetName(fun);
	    quoted = ATisQuoted(fun);
	  }
	
	if(ATgetType(ts0) != AT_LIST)
	  _fail(ts0);
	
	ts = (ATermList) ts0;
	
	t = ((ATerm) ATmakeApplList(ATmakeSymbol(f, ATgetLength(ts), quoted), ts));
      }
    else
      _fail(c);
    break;
  default:
    _fail(c);
  }

  return t;
}

ATerm SSL_explode_term(ATerm t)
{
  switch(ATgetType(t)) {
  case AT_APPL :
    {
      Symbol sym;
      ATerm t1;
      sym = ATgetSymbol(t);
      if(ATisQuoted(sym))
        t1 = ATmakeStringQ(ATgetName(sym));
      else
        t1 = ATmakeString(ATgetName(sym));
  
      t = App2("", t1, (ATerm) ATgetArguments((ATermAppl)t)
	       /* list_to_consnil_shallow((ATerm)ATgetArguments((ATermAppl)t)) */
	       );
      break;
    }
  case AT_INT :
    t = App2("", t, (ATerm)ATempty);
    break;
  case AT_REAL :
    t = App2("", t, (ATerm)ATempty);
    break;
  case AT_LIST :
    {
      t = App2("", (ATerm)ATempty, t);
	/*
      if(t == (ATerm)ATempty) 
	t = App2("", ATmakeString("Nil"), (ATerm)ATempty);
      else
	t = App2("", ATmakeString("Cons"), 
		 (ATerm) ATmakeList2(ATgetFirst((ATermList)t), (ATerm)ATgetNext((ATermList)t)));
	*/
      break;
    }
  case AT_PLACEHOLDER :
    {
	t = App2("", (ATerm) ATmakePlaceholder((ATerm) ATempty), (ATerm) ATmakeList1(ATgetPlaceholder((ATermPlaceholder) t)));
	break;
    }
  default:
    _fail(t);
  }

  return(t);
}


ATerm SSL_get_constructor(ATerm t)
{
  switch(ATgetType(t)) {
  case AT_APPL :
    {
      Symbol sym;
      sym = ATgetSymbol(t);
      if(ATisQuoted(sym))
        t = ATmakeStringQ(ATgetName(sym));
      else
        t = ATmakeString(ATgetName(sym));
      break;
    }
  case AT_INT :
    break;
  case AT_REAL :
    break;
  case AT_LIST :
    {
      t = (ATerm)ATempty;
      break;
    }
  case AT_PLACEHOLDER :
    {
      t = (ATerm) ATmakePlaceholder((ATerm) ATempty);
	break;
    }
  default:
    _fail(t);
  }
  return(t);
}

ATerm SSL_get_arguments(ATerm t)
{
  switch(ATgetType(t)) {
  case AT_APPL :
      t = (ATerm) ATgetArguments((ATermAppl)t);
      break;
  case AT_INT :
    t = (ATerm)ATempty;
    break;
  case AT_REAL :
    t = (ATerm)ATempty;
    break;
  case AT_LIST :
    break;
  case AT_PLACEHOLDER :
    t = (ATerm) ATmakeList1(ATgetPlaceholder((ATermPlaceholder) t));
    break;
  default:
    _fail(t);
  }
  return(t);
}

ATerm SSL_address_lt(ATerm x, ATerm y)
{
  if(x < y)
  {
    return((ATerm) ATempty);
  }
  else
  {
    _fail((ATerm) ATempty);
  }

  return((ATerm) ATempty);
}

ATerm SSL_address(ATerm t)
{
  return((ATerm)ATmakeInt((int)t));
}

ATerm SSL_checksum(ATerm t) {
  unsigned char *digest = ATchecksum(t);

  char buf[32] ;
  int i, offset = 0;

  for (i=0; i<16 ; i++) {
    offset += sprintf(&(buf[offset]), "%02x", digest[i]);
  }
  
  return((ATerm) ATmakeAppl0(ATmakeSymbol(buf, 0, ATtrue))) ;
}


