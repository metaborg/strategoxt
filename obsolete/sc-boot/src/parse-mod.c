/*

Copyright (C) 1998, 1999 Eelco Visser <visser@acm.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.

*/

#include <aterm2.h>
#include "stratego.h"
#include "options.h"

int parse();
char file_name[256];
extern ATerm parse_tree;
extern FILE *yyin;
extern int yylineno;
extern ATerm yylval;
extern int line;

extern int yydebug;

FILE *outfile;

#define spec_decls(spec) (ATermList) ATgetArgument(spec, 0)

ATermList imported;
ATermList includes;
FILE *dep_file;

ATerm parse_file(char *name);

ATermList get_imports(ATermList decls)
{
  ATerm decl, mod, spec;
  ATermList mods, new_decls;
  
  new_decls = ATmakeList0();
  while(!ATisEmpty(decls)) {
    decl = ATgetFirst(decls);
    decls = ATgetNext(decls);
    if(ATmatch(decl, "Imports([<list>])", &mods)) {
	while(!ATisEmpty(mods)) {
	    mod = ATgetFirst(mods);
	    mods = ATgetNext(mods);
	    if(ATindexOf(imported, mod, 0) == -1) 
	      {
		if(!silent)
		  ATfprintf(stderr, "        importing: %t\n", mod);
		imported = ATinsert(imported, mod);
		sprintf(file_name, "%s.r", t_string(mod));
		spec = parse_file(file_name);
		new_decls = ATconcat(spec_decls(spec), new_decls);
	    }
	    else
	      {
		if(!silent)
		  ATfprintf(stderr, "        importing: %t (done)\n", mod);
	      }
	}
    } else {
	new_decls = ATinsert(new_decls, decl);
    }
  }
  return new_decls;
}

FILE *find_file(char *name)
{
  char file[1024];
  ATermList i;
  yyin = NULL;
  for(i = includes; !ATisEmpty(i); i = ATgetNext(i)) {
    sprintf(file, "%s/%s", ATgetName(ATgetSymbol(ATgetFirst(i))), name);
    yyin = fopen(file, "r");
    if(yyin) {
      sprintf(file_name, "%s", file);
      break;
    }
  }
  return yyin;
}

ATerm parse_file(char *name)
{
  ATermList decls;
  int res;

  if(name == NULL) {
    yyin = stdin;
    if(!silent)
      fprintf(stderr, "parsing stdin ...");
  } else {
    yyin = fopen(name, "r");
    sprintf(file_name, "%s", name);
    /* yyin = find_file(name); */ 
    /* add file to list of dependencies */
    /* ATfprintf(dep_file, "%s ", file_name); */
    yylineno = 0;
    if(!yyin) {
      fprintf(stderr, "no such file: %s\n", name);
      exit(1);
    }
    if(!silent)
      fprintf(stderr, "parsing %s ...", file_name);
  }
  if((res = parse()) == 0) 
    {    
      if(!silent) 
	{
	  ATfprintf(stderr, " succeeded\n", parse_tree);
	  // ATfprintf(stderr, " %d lines\n", line);
	}
      return parse_tree;    
    } 
  else 
    {    
      ATfprintf(stderr, " parsing %s failed\n\n", name);
      exit(1);
    }
}

void open_dependencies(char *name)
{
  FILE *file;
  int i;
  sprintf(file_name, "%s.dep", name);
  file = fopen(file_name, "w");
  sprintf(file_name, "%s", name);

  for(i = 0; file_name[i] != '\0'; i++) ;
  i = i - 2;
  file_name[i] = '\0';
  ATfprintf(file, "%s.tree, %s.comp: ", file_name, file_name);

  dep_file = file;
  return;
  /*
  while(!(ATisEmpty(names))) {
    ATfprintf(dep_file, "%s.r ", ATgetName(ATgetSymbol(ATgetFirst(names))));
    names = ATgetNext(names);
  }
  */
}

int main(int argc, char *argv[])
{
  ATerm tree;

  ATinit(argc, argv, &tree);
  ATprotect((ATerm*)&imported);
  ATprotect(&parse_tree);
  ATprotect((ATerm*)&includes);

  process_options(argc, argv);

  imported = ATmakeList0();
  yydebug = 0; 
  /* open_dependencies(input_file); */
  tree = parse_file(input_file);
  /* Open output file */
  if (output_file == NULL)
    outfile = stdout;
  else
    outfile = fopen(output_file, "w"); 
  if(binary_output)
    ATwriteToBinaryFile(tree, outfile);
  else
    ATwriteToTextFile(tree, outfile);
  /* print_dependencies(input_file, imported); */
  exit(0);
}
