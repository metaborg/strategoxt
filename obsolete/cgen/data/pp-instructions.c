#include <time.h>
#include <sys/times.h>
#include <strategy.h>
#include "options.h"

#define do_indent fprintf(outfile, "%*s", indent, "")

FILE *infile;
FILE *outfile;

void pp(int indent, ATerm t);

void pps(int indent, ATermList ts)
{
  while(!ATisEmpty(ts)) {
    pp(indent, ATgetFirst(ts));
    ts = ATgetNext(ts);    
  }
}

void pp(int indent, ATerm t)
{
  ATermList ts, ts1, ts2;
  char *s, *s1, *s2;
  int i;

  if(ATmatch(t, "Program(RuleCounters([<list>]),Block([<list>]))", 
	     &ts1, &ts2))
    {
      int counter = 0;
      while(ATmatch((ATerm) ts1, "[RuleCounter(<str>,<str>),<list>]", 
		    &s1, &s2, &ts1))
	{
	  ATfprintf(outfile, "#define CR__%s %d\nRuleCounter(CR__%s,\"%s\",%d)\n",
		    s2, counter, s2, s1, counter);
	  counter++;
	}
      ATfprintf(outfile, "cur_rule_counter = %d;\n", counter);
      pps(indent, ts2);
    }
  else if(ATmatch(t, "Block([<list>])", &ts))
    pps(indent, ts);
  else if(strcmp(ATgetName(ATgetSymbol(t)), "Block") == 0)
    pp(indent, ATgetArgument(t, 0));
  else if(ATmatch(t, "Nil", &ts))
    return;
  else if(strcmp(ATgetName(ATgetSymbol(t)), "Cons") == 0) {
    pp(indent, ATgetArgument(t, 0));
    pp(indent, ATgetArgument(t, 1));
  }
  else if(ATmatch(t, "Goto(<str>)", &s))
    {do_indent; ATfprintf(outfile, "goto %s;\n", s);}
  else if(ATmatch(t, "Label(<str>)", &s))
    {do_indent; ATfprintf(outfile, "%s :\n", s);}
  else if(ATmatch(t, "Rpush(<str>)", &s))
    {do_indent; ATfprintf(outfile, "Rpush(%s);\n", s);}
  else if(ATmatch(t, "AllNextSon(<str>)", &s))
    {do_indent; ATfprintf(outfile, "AllNextSon(&&%s);\n", s);}
  else if(ATmatch(t, "ThreadNextSon(<str>)", &s))
    {do_indent; ATfprintf(outfile, "ThreadNextSon(&&%s);\n", s);}
  else if(ATmatch(t, "OneNextSon(<str>)", &s))
    {do_indent; ATfprintf(outfile, "OneNextSon(&&%s);\n", s);}
  else if(ATmatch(t, "SomeNextSon(<str>)", &s))
    {do_indent; ATfprintf(outfile, "SomeNextSon(&&%s);\n", s);}
  else if(ATmatch(t, "Cpush(<str>)", &s))
    {do_indent; ATfprintf(outfile, "Cpush(%s);\n", s);}
  else if(ATmatch(t, "Iprim(<str>);", &s))
    {do_indent; ATfprintf(outfile, "%s();\n", s);}
  else if(ATmatch(t, "Iprim2(<str>,<str>);", &s, &s2))
    {do_indent; ATfprintf(outfile, "%s(___%s);\n", s, s2);}
  else if(ATmatch(t, "ICountRule(<str>);", &s))
    {do_indent; ATfprintf(outfile, "CountRule(CR__%s);\n", s);}
  else if(ATmatch(t, "MatchFunFC(<str>,<str>)", &s, &s2))
    {do_indent; ATfprintf(outfile, "MatchFunFC(\"%s\",&&%s);\n", s, s2);}
  else if(ATmatch(t, "MatchIntFC(<int>,<str>)", &i, &s2))
    {do_indent; ATfprintf(outfile, "MatchIntFC(%d,&&%s);\n", i, s2);}
  else if(ATmatch(t, "MatchStringFC(<str>,<str>)", &s, &s2))
    {do_indent; ATfprintf(outfile, "MatchStringFC(\"%s\",&&%s);\n", s, s2);}
  else if(t_is_appl(t) && ATgetArity(ATgetSymbol(t)) == 0)
    {do_indent; ATfprintf(outfile, "%t();\n", t);}
  else {do_indent; ATfprintf(outfile, "%t;\n", t);}
}

void main_pp(int indent, ATerm t)
{
  ATfprintf(outfile, "#include <strategy.h>\nDOIT_START\n");
  pp(indent, t);
  ATfprintf(outfile, "DOIT_END\n");
}

int main(int argc, char *argv[])
{ 
  ATerm in_term;

  ATinit(argc, argv, &in_term);

  process_options(argc, argv);

  /* Open input file */

  if (input_file == NULL)
      infile = stdin;
  else
      infile = fopen(input_file, "r");

  /* Open output file */
  if (output_file == NULL)
    outfile = stdout;
  else
    outfile = fopen(output_file, "w");

  if ((in_term = ATreadFromFile(infile)) == NULL) {
    ATfprintf(outfile, "not a valid term\n");
    exit(1);
  }

  main_pp(2, in_term);
  exit(0);
}

