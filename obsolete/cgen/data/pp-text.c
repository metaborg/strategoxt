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
  ATermList ts;

  if(AThasName(t, "V"))
    {
      pp(indent, ATgetArgument(t, 0));
      ATfprintf(outfile, "\n");
      pp(indent, ATgetArgument(t, 1));
    }
  else if(ATmatch(t, "L(Cs([<list>]))", &ts))
    {
      while(!ATisEmpty(ts)) 
	{ int i;
	  i = ATgetInt((ATermInt) ATgetFirst(ts));
	  /* if(i == 92) 
	    {
	      ts = ATgetNext(ts);
	      i = ATgetInt((ATermInt) ATgetFirst(ts));
	      } 
	  */
	  ATfprintf(outfile, "%c", i);
	  ts = ATgetNext(ts);
	}
    }
  else
    ATfprintf(outfile, "unknown construct: %t\n", t);
}

void main_pp(int indent, ATerm t)
{
  pp(indent, t);
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

