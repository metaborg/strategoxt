#include <aterm2.h>
#include "strategy.h"

int parse();
char file_name[256];
extern ATerm parse_tree;
extern FILE *yyin;
extern int yylineno;
extern ATerm yylval;

#define spec_decls(spec) (ATermList) ATgetArgument(spec, 0)

ATermList imported;

ATerm parse_term_file(char *name)
{
  int res;

  if(name == NULL) {
    yyin = stdin;
    fprintf(stderr, "parsing stdin ...");
  } else {
    sprintf(file_name, "%s", name);
    yyin = fopen(file_name, "r");
    yylineno = 0;
    if(!yyin) {
      fprintf(stderr, "no such file: %s\n", file_name);
      exit(1);
    }
    fprintf(stderr, "parsing %s ...", file_name);
  }
  if((res = parse()) == 0) {
    ATfprintf(stderr, " succeeded\n");
    return parse_tree;    
  } else {
    ATfprintf(stderr, " failed\n\n");
    exit(1);
  }
}

#define BLA(a, b)

#ifdef STAND_ALONE_PARSER

void main(int argc, char *argv[])
{
  ATerm tree;

  ATinit(argc, argv, &tree);
  ATprotect(&parse_tree);

  imported = ATmakeList0();
  tree = parse_term_file(argv[1]);
  ATfprintf(stdout, "%t\n", tree);
  exit(0);
}

#endif
