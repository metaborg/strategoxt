/*

$Id: strategy-main.c,v 1.1 2001/08/21 22:10:35 visser Exp $

*/

#include <time.h>
#include <sys/times.h>
#include <strategy.h>
#include <debug.h>
#include "options.h"

FILE *infile;
FILE *outfile;

ATerm doit(ATerm );

void print_profile(double duration)
{
  int counter; 
  if(show_stats > 0)
    {
      ATfprintf(stderr, "\n  statistics      :");
      if(duration != 0)
	ATfprintf(stderr, 
		  " %.2f seconds, %d steps, %.2f steps/sec\n",
		  (double)duration, rule_counter, ((double) rule_counter)/duration);
      else
	ATfprintf(stderr, 
		  " %.2f seconds, %d steps\n",
		  duration, rule_counter);  
    }
  if(show_stats > 1) 
    {
      ATfprintf(stderr, "  counts per rule :\n");  
      for(counter = 0; counter < cur_rule_counter; counter++) 
	{ 
	  ATfprintf(stderr, "%17s : %6d\n", rule_counters[counter].name, 
		    rule_counters[counter].count); 
	}
    }
}

int old_main(int argc, char *argv[])
{ 
  double duration;
  struct tms start, end;
  ATerm in_term, out_term;

  ATinit(argc, argv, &in_term);

  ATprotectArray(term_stack,   TSIZE);
  ATprotectArray(environment,  ESIZE);

  process_options(argc, argv);

  /* Open input file */

  if (input_file == NULL)
      infile = stdin;
  else
      infile = fopen(input_file, "r");

  /* Push term to be reduced on term stack */

  if ((in_term = ATreadFromFile(infile)) == NULL) {
    ATfprintf(stderr, "not a valid term\n");
    exit(1);
  }

  in_term = list_to_consnil(in_term);

  debugs(ATfprintf(stderr, "in_term (b) = %t\n", in_term));

  /* Execute the strategy */

  times(&start);
  out_term = doit(in_term); 
  times(&end);
  duration = ((double)(end.tms_utime - start.tms_utime))/((double)CLK_TCK);
 
  if(out_term != NULL)
    {
      /* Open output file */
      if (output_file == NULL)
	  outfile = stdout;
      else
	  outfile = fopen(output_file, "w");
      /* ATfprintf(stdout, "%t\n", out_term); */  
      if(binary_output)
	ATwriteToBinaryFile(consnil_to_list(out_term), outfile);
      else
	ATwriteToTextFile(consnil_to_list(out_term), outfile);
    }

  print_profile(duration);

  if (!failed)
    {
      ATfprintf(stderr, "  rewriting succeeded\n");
      exit(0);
    }
  else 
    {
      ATfprintf(stderr, "  rewriting failed\n");
      exit(1);
    }
}

int main(int argc, char *argv[])
{ 
  ATerm in_term, out_term;
  int i;

  /* ATfprintf(stderr, "This is %s\n", argv[0]); */

  ATinit(argc, argv, &in_term);

  ATprotectArray(term_stack,   TSIZE);
  ATprotectArray(environment,  ESIZE);

  in_term = ATmake("Nil");
  for(i = argc - 1; i >= 0; i--)
    {
      /* ATfprintf(stderr, " %s", argv[i]); */
      in_term = App2("Cons", ATmakeString(argv[i]), in_term);
    }

  /* ATfprintf(stderr, "\n", argv[i]); */

  out_term = doit(in_term);
}
