#include <time.h>
#include <sys/times.h>
#include <strategy.h>

void pp(ATerm t);

void pps(ATermList ts)
{
  if(!ATisEmpty(ts)) 
    {
      pp(ATgetFirst(ts));
      if(!ATisEmpty(ATgetNext(ts))) 
	{
	  ATfprintf(stdout, ","); 
	  pps(ATgetNext(ts));
	}
    }
  return;
}

void ppt(ATerm t)
{
  if(AThasName(t, "TCons"))
    {
      pp(ATgetArgument(t, 0)); 
      if(!AThasName(ATgetArgument(t, 1), "TNil")) 
	{
	  ATfprintf(stdout, ","); 
	  ppt(ATgetArgument(t, 1)); 
	}
    }
  return;
}

void ppl(ATerm t)
{
  if(AThasName(t, "Cons"))
    {
      pp(ATgetArgument(t, 0)); 
      if(!AThasName(ATgetArgument(t, 1), "Nil"))
	{
	  ATfprintf(stdout, ","); 
	  ppl(ATgetArgument(t, 1)); 
	}
    }
  return;
}

void pp(ATerm t)
{
  if(ATisString(t))
    ATfprintf(stdout, "%t", t);
  else if(AThasName(t, "TCons"))
    {
      ATfprintf(stdout, "(");
      ppt(t);
      ATfprintf(stdout, ")");
    }
  else if(ATmatch(t, "TNil"))
    ATfprintf(stdout, "()");
  else if(AThasName(t, "Cons"))
    {
      ATfprintf(stdout, "[");
      ppl(t);
      ATfprintf(stdout, "]");
    }
  else if(ATmatch(t, "Nil"))
    ATfprintf(stdout, "[]");
  else if(t_is_appl(t))
    {
      ATfprintf(stdout, "%s(", ATgetName(ATgetSymbol(t)));
      pps(ATgetArguments((ATermAppl) t));
      ATfprintf(stdout, ")", t);
    }
  else if(ATgetType(t) == AT_LIST)
    {
      ATfprintf(stdout, "[");
      pps((ATermList) t);
      ATfprintf(stdout, "]");
    }
  else 
    ATfprintf(stdout, "%t", t);
  return;
}

void main_pp(ATerm t)
{
  pp(t);
  ATfprintf(stdout, "\n", t);
  return;
}

void main(int argc, char *argv[])
{ 
  ATerm in_term;

  ATinit(argc, argv, &in_term);

  if ((in_term = ATreadFromFile(stdin)) == NULL) {
    ATfprintf(stdout, "not a valid term\n");
    exit(1);
  }

  main_pp(in_term);
  exit(0);
}

