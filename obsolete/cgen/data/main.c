/*

$Id: main.c,v 1.1 2001/08/21 22:10:34 visser Exp $

*/

#include <time.h>
#include <sys/times.h>
#include <strategy.h>
#include <debug.h>

/* FATAL_ERROR */

ATerm doit(ATerm );

void print_profile(clock_t duration)
{
  if(duration != 0)
    Tprintf(stderr, " (%d seconds, %d steps, %d steps/sec, %d bms, %d bms/sec\n",
	    duration, rule_counter, rule_counter/duration,
	    match_counter + build_counter, 
	    (match_counter + build_counter)/duration);
}

void main(int argc, char *argv[])
{ 
  clock_t duration;
  struct tms start, end;
  ATerm in_term, out_term;

  ATinit(argc, argv, &in_term);

  /* Push term to be reduced on term stack */

  if ((in_term = ATreadFromFile(stdin)) == NULL) {
    Tprintf(stdout, "not a valid term\n");
    exit(1);
  }

  in_term = list_to_consnil(in_term);

  /* Execute the strategy */

  times(&start);
  out_term = doit(in_term);
  times(&end);
  duration = (end.tms_utime - start.tms_utime)/CLOCKS_PER_SEC;
 
  if (out_term)
    {
      Tprintf(stderr, "rewriting succeeded\n");
      print_profile(duration);
      Tprintf(stdout, "%t\n", consnil_to_list(out_term));
      exit(0);
    }
  else
    {
      Tprintf(stderr, "rewriting failed\n");
      print_profile(duration);
      exit(1);
    }
}

