#include "util.h"
#include "options.h"

void usage(void)
{
  ATfprintf(stderr, 
	    "usage:\n"
	    "  %s [-silent] [-i file] [-o file] [-b] [-stats] [-help|-h]\n", 
	    program_name);
  exit(1);
}

void process_options(int argc, char *argv[])
{
  int i;
  program_name = argv[0];

  input_file = NULL;
  output_file = NULL;
  silent = ATfalse;
  show_stats = 1;
  binary_output = ATfalse;
  includes = (ATermList) ATmake("[\".\"]");

  for(i = 1; i < argc; i++) 
    {
      if(streq(argv[i], "-silent")) 
	silent = ATtrue;
      else if(streq(argv[i], "-i"))
	{
	  if(i == argc - 1)
	    {
	      ATfprintf(stderr, "error: no input file specified after -i\n");
	      exit(1);
	    }
	  i++;
	  input_file = argv[i];
	}
      else if(streq(argv[i], "-o"))
	{
	  if(i == argc - 1)
	    {
	      ATfprintf(stderr, "error: no output file specified after -o\n");
	      exit(1);
	    }
	  i++;
	  output_file = argv[i];
	}
      else if(streq(argv[i], "-b"))
	binary_output = ATtrue;
      else if(streq(argv[i], "-include") || streq(argv[i], "-I"))
	{
	  if(i == argc - 1)
	    {
	      ATfprintf(stderr, "error: no include path specified after -I\n");
	      exit(1);
	    }
	  i++;
	  includes = ATappend(includes, ATmake("<str>", argv[i]));
	}
      else if(streq(argv[i], "-stats"))
	{
	  show_stats = 2;
	}
      else if(streq(argv[i], "-help") || streq(argv[i], "-h"))
	{
	  usage();
	}
      else
	{
	  ATfprintf(stderr, "unknown option: %s\n", argv[i]);
	  exit(1);
	}
    }
  return;
}
