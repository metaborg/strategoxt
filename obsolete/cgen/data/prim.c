#include "strategy.h"
#include "prim.h"
#include "terms.h"

/* Strings */

void *_is_string()
{ char *k;
  if(ATmatch(Ttop(), "<str>", &k))
    {
      return NULL; 
    } 
  else return fail_address; 
}

/* New: generating new strings */

int new_counter = 0;
int new_alphacounter = 0;
char new_string[256] = "";
#define ASCIIa 97

void new(void)
{
  sprintf(new_string, "%c_%d", ASCIIa + new_alphacounter, new_counter);
  while(ATfindSymbol(new_string, 0, ATtrue)) {
    new_alphacounter++;
    if(new_alphacounter % 26 == 0) {
      new_alphacounter = 0; 
      new_counter++;
    }
    sprintf(new_string, "%c_%d", ASCIIa + new_alphacounter, new_counter);
  }
  Tset((ATerm) ATmakeAppl0(ATmakeSymbol(new_string, 0, ATtrue)));
}

void *_implode_string()
{ 
  ATerm chars; 
  int i;
  char str[1024];
  ATerm t;
  chars = Ttop();
  /* ATfprintf(stderr, "chars = %t\n", chars); */
  for(i = 0; !AThasName(chars, "Nil"); 
      chars = (ATerm) ATgetNext((ATermList) chars), i++)
    {
      t = ATgetFirst((ATermList) chars);
      /* ATfprintf(stderr, "t = %t\n", t); */
      if(!ATisInt(t))
	return fail_address;
      else
	str[i] = ATgetInt((ATermInt) t);
    }
  str[i] = '\0';
  Tset((ATerm) ATmakeString(str));
  return NULL;
}

void *_explode_string()
{ 
  char *str;
  int i;
  ATerm chars;
  if(!ATisString(Ttop()))
    {
      /* ATfprintf(stderr, "warning: " 
	 "explode_string: term not a string: %t\n", Ttop()); */
      /* assert(ATisString(Ttop())); */
      return fail_address;
    }
  str = ATgetName(ATgetSymbol(Ttop()));
  for(i = 0; str[i] != '\0'; i++) ;
  for(chars = ATmake("Nil"); i > 0; i--) {
    chars = App2("Cons", (ATerm) ATmakeInt(str[i - 1]), chars);
    // if(str[i - 1] == 92) i--;
  }
  Tset(chars);
  return NULL;
}

/* Integers */

void *_is_int()
{ int k;
  if(ATmatch(Ttop(), "<int>", &k))
    {
      return NULL; 
    } 
  else return fail_address; 
}

void *_int()
{ int k;
  double r; 
  if(ATmatch(Ttop(), "<int>", &k))
    {
      return NULL; 
    } 
  else if(ATmatch(Ttop(), "<real>", &r))
    {
      Tset((ATerm) ATmakeInt((int)r));
      return NULL; 
    } 
  else return fail_address; 
}

int number_pair(int *k, int *l, double *r1, double *r2)
{  
  if(ATmatch(Ttop(), "TCons(<int>, TCons(<int>, TNil))", k, l))
    return 1; 
  else if(ATmatch(Ttop(), "TCons(<real>, TCons(<real>, TNil))", r1, r2))
    return 2; 
  else if(ATmatch(Ttop(), "TCons(<int>, TCons(<real>, TNil))", k, r2))
    { 
      *r1 = (double)*k;	
      return 3; 
    }
  else if(ATmatch(Ttop(), "TCons(<real>, TCons(<int>, TNil))", r1, l))
    { 
      *r2 = (double)*l;	
      return 4; 
    }
  else return 0;
}

void *_plus()
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    {
      Tset((ATerm) ATmakeInt(k + l));	
    }
  else 
    {
      Tset((ATerm) ATmakeReal(r1 + r2));	
    }
  return NULL;
}

void *_minus()
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    {
      Tset((ATerm) ATmakeInt(k - l));	
    }
  else 
    {
      Tset((ATerm) ATmakeReal(r1 - r2));	
    }
  return NULL;
}


void *_mul()
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    {
      Tset((ATerm) ATmakeInt(k * l));	
    }
  else 
    {
      Tset((ATerm) ATmakeReal(r1 * r2));	
    }
  return NULL;
}

void *_div()
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    {
      if(k % l == 0)
	{ Tset((ATerm) ATmakeInt(k / l)); }
      else
	{ Tset((ATerm) ATmakeReal((double)k / (double)l)); }
    }
  else 
    {
      Tset((ATerm) ATmakeReal(r1 / r2));	
    }
  return NULL;
}

void *_mod()
{ int k, l;
  if(ATmatch(Ttop(), "TCons(<int>, TCons(<int>, TNil))", &k, &l))
    { 
      Tset((ATerm) ATmakeInt(k % l));	
      return NULL;
    } 
  else return fail_address; 
}

void *_geq()
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    return k >= l ? NULL : fail_address;
  else 
    return r1 >= r2 ? NULL : fail_address;
  return NULL;
}

void *_gt()
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    return k > l ? NULL : fail_address;
  else 
    return r1 > r2 ? NULL : fail_address;
  return NULL;
}

void *_leq()
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    return k <= l ? NULL : fail_address;
  else 
    return r1 <= r2 ? NULL : fail_address;
  return NULL;
}

void *_lt()
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    return k < l ? NULL : fail_address;
  else 
    return r1 < r2 ? NULL : fail_address;
  return NULL;
}

void *_max()
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    { Tset((ATerm) ATmakeInt(k >= l ? k : l)); }
  else 
    { Tset((ATerm) ATmakeReal(r1 >= r2 ? r1 : r2)); }
  return NULL;
}

void *_min()
{ int k, l;
  double r1, r2;
  int res = number_pair(&k, &l, &r1, &r2);

  if(res == 0) return fail_address;
  else if(res == 1)
    { Tset((ATerm) ATmakeInt(k <= l ? k : l)); }
  else 
    { Tset((ATerm) ATmakeReal(r1 <= r2 ? r1 : r2)); }
  return NULL;
}

/* Terms */

void *_mkterm()
{ 
  char *f;
  ATermList ts;
  MatchFunFC("TCons", &&mkterm_fail);
  Arg(0);
  if(!ATisString(Ttop())) goto mkterm_fail;
  f = t_string(Ttop());
  Tpop();
  Arg(1);
  Tdrop();
  MatchFunFC("TCons", &&mkterm_fail);
  Arg(0);
  ts = (ATermList) consnil_to_list_shallow(Ttop());
  Tpop();
  Tset((ATerm) ATmakeApplList(ATmakeSymbol(f, ATgetLength(ts), ATfalse), ts));
  return NULL;
 mkterm_fail:
  return fail_address;
}

/* Kids: map constructor application to tuple of children */

ATerm mktuple(ATermList l)
{
    ATermAppl t;
    ATfprintf(stdout, "mktuple(%t)\n", l); 
    if(ATisEmpty(l)) 
        t = ATmakeAppl0(ATmakeSymbol("TNil", 0, ATfalse));
    else
        t = ATmakeAppl2(ATmakeSymbol("TCons", 2, ATfalse),
			ATgetFirst(l),
			mktuple(ATgetNext(l)));
    ATfprintf(stdout, " = %t\n", t);
    return (ATerm) t;             
}

ATbool is_tuple(ATerm t) 
{
  return ((strcmp(ATgetName(ATgetSymbol(t)), "TCons") == 0 || 
	   strcmp(ATgetName(ATgetSymbol(t)), "TNil") == 0) 
	  && !(t_is_string(t)));
}

ATbool is_empty_tuple(ATerm t)
{
  return strcmp(t_string(t), "TNil") == 0;
}

/*
void kids222(void)
{
  if(t_is_appl(Ttop()))
    { 
      if(!is_tuple(Ttop())) 
	Tset(mktuple(ATgetArguments((ATermAppl) Ttop()))); 
    } 
  else Tset(ATmakeAppl0(ATmakeSymbol("TNil", 0, ATfalse)));
}
*/

void kids(void)
{
  int i;
  if(t_is_appl(Ttop()))
    { 
      TravInit();
      i = 0;
      loop :
	NextSon(&&empty);
	i++;
      goto loop;
      empty :
      Tpush();
      BuildFun("TNil", 0);
      for(; i > 0; i--) {
	Tpush();
	BuildFun("TCons", 2);
      }
      Tdrop();
      Tdrop();
      CloseCounter();
    } 
  else { Tset((ATerm) ATmakeAppl0(ATmakeSymbol("TNil", 0, ATfalse))); }
}

/* IO */

ATbool MatchPair(ATerm pair, ATerm *left, ATerm *right)
{
  MatchFunFC("TCons", &&mkterm_fail);
  Arg(0);
  *left = Ttop();
  Tpop();
  Arg(1);
  MatchFunFC("TCons", &&mkterm_fail);
  Arg(0);
  *right = Ttop();
  Tpop();
  Arg(1);
  MatchFunFC("TNil", &&mkterm_fail);
  Tpop();
  Tpop();
  return ATtrue;
 mkterm_fail:
  return ATfalse;
}

ATermTable ST_file_table = NULL;

void ST_file_table_init(void)
{
  ST_file_table = ATtableCreate(16, 80);
  ATtablePut(ST_file_table, ATmake("stdin"),  ATmake("<int>", (int)stdin));
  ATtablePut(ST_file_table, ATmake("stdout"), ATmake("<int>", (int)stdout));
  ATtablePut(ST_file_table, ATmake("stderr"), ATmake("<int>", (int)stderr));
}

void *ST_open_file(void)
{
  FILE *file;
  ATerm name;

  if(ST_file_table == NULL)
    ST_file_table_init();
  
  name = Ttop();
  if(ATmatch(name, "stdout"))
    file = stdout;
  else if(ATmatch(name, "stderr"))
    file = stderr;
  else if(ATmatch(name, "stdin"))
    file = stdin;
  else if(t_is_string(name))
    {
      file = fopen(t_string(name), "w");
      if(file == NULL)
	return fail_address;
      ATtablePut(ST_file_table, name, ATmake("<int>", (int)file));      
    }
  return NULL;
}

FILE *_ST_file_table_lookup(ATerm name)
{
  ATerm desc;

  if(ST_file_table == NULL)
    ST_file_table_init();

  if((desc = ATtableGet(ST_file_table, name)) == NULL)
    return NULL;
  else
    return (FILE *)ATgetInt((ATermInt)desc);
}

void *ST_print(void)
{  
  FILE *outfile;
  ATerm file, str;

  if(MatchPair(Ttop(), &file, &str))
    {
      outfile = _ST_file_table_lookup(file);
      if(outfile == NULL) 
	return fail_address;
      str = consnil_to_list(str);
      while(!ATisEmpty((ATermList)str))
	{
	  if(ATisString(ATgetFirst((ATermList)str)))
	    ATfprintf(outfile, "%s", t_string(ATgetFirst((ATermList)str)));
	  else if(ATisReal(ATgetFirst((ATermList)str)))
	    ATfprintf(outfile, "%.2f", ATgetReal((ATermReal)ATgetFirst((ATermList)str)));
	  else
	    ATfprintf(outfile, "%t", ATgetFirst((ATermList)str));
	  str = (ATerm)ATgetNext((ATermList)str);
	}
      return NULL;
    }
  return fail_address; 
}

void *ST_printnl(void)
{  
  FILE *outfile;
  ATerm file, str;

  if(MatchPair(Ttop(), &file, &str))
    {
      outfile = _ST_file_table_lookup(file);
      if(outfile == NULL) 
	return fail_address;
      str = consnil_to_list(str);
      while(!ATisEmpty((ATermList)str))
	{
	  if(ATisString(ATgetFirst((ATermList)str)))
	    ATfprintf(outfile, "%s", t_string(ATgetFirst((ATermList)str)));
	  else if(ATisReal(ATgetFirst((ATermList)str)))
	    ATfprintf(outfile, "%.2f", ATgetReal((ATermReal)ATgetFirst((ATermList)str)));
	  else
	    ATfprintf(outfile, "%t", ATgetFirst((ATermList)str));
	  str = (ATerm)ATgetNext((ATermList)str);
	}
      ATfprintf(outfile, "\n");
      return NULL;
    }
  return fail_address; 
}

void *ST_printascii(void)
{  
  FILE *outfile;
  ATerm file, str;

  if(MatchPair(Ttop(), &file, &str))
    {
      outfile = _ST_file_table_lookup(file);
      if(outfile == NULL) 
	return fail_address;
      str = consnil_to_list(str);
      while(!ATisEmpty((ATermList)str))
	{
	  if(ATisInt(ATgetFirst((ATermList)str)))
	    ATfprintf(outfile, "%c", 
		      ATgetInt((ATermInt)ATgetFirst((ATermList)str)));
	  else
	    ATfprintf(outfile, "%t", ATgetFirst((ATermList)str));
	  str = (ATerm)ATgetNext((ATermList)str);
	}
      ATfprintf(outfile, "\n");
      return NULL;
    }
  return fail_address; 
}

void *ST_ReadFromFile(void)
{
  ATerm filename, in_term;
  FILE *infile;

  filename = Ttop();

  if(ATmatch(filename, "stdin"))
    infile = stdin;
  else if(ATisString(filename))
    infile = fopen(t_string(filename), "r");
  else
    return fail_address;

  if((in_term = ATreadFromFile(infile)) == NULL)
    {
      ATfprintf(stderr, "not a valid term\n");
      return fail_address;
    }
  
  Tset(list_to_consnil(in_term));
  return NULL;
}

void *ST_WriteToFile(ATbool binary)
{  
  FILE *outfile;
  ATerm filename, trm;
  if(MatchPair(Ttop(), &filename, &trm))
    {
      if(ATmatch(filename, "stdout"))
	outfile = stdout;
      else if(ATmatch(filename, "stderr"))
	outfile = stderr;
      else if(ATisString(filename))
	outfile = fopen(t_string(filename), "w");
      else return fail_address;
      if(outfile != NULL)
	{
	  if(binary)
	    ATwriteToBinaryFile(consnil_to_list(trm), outfile);
	  else 
	    {
	      ATwriteToTextFile(consnil_to_list(trm), outfile);
	      fprintf(outfile, "\n");
	    }
	}
      return NULL;
    }
  return fail_address; 
}

void *ST_WriteToBinaryFile(void)
{
  return ST_WriteToFile(ATtrue);
}


void *ST_WriteToTextFile(void)
{
  return ST_WriteToFile(ATfalse);
}

void *ST_exit(void)
{
  if(ATisInt(Ttop()))
    {
      exit ATgetInt((ATermInt) Ttop());
    }
  else
    return fail_address;
}

/* Time */

#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>

struct rusage rusage;

double dtime(void)
{
 static double p[3];
 double q;

 q = p[2];

 getrusage(RUSAGE_SELF,&rusage);

 p[2] = (double)(rusage.ru_utime.tv_sec);
 p[2] = p[2] + (double)(rusage.ru_utime.tv_usec) * 1.0e-06;
 p[1] = p[2] - q;
        
 return p[1];
}

void *ST_dtime(void)
{
  double dt;
  dt = dtime();
  Tset((ATerm)ATmakeReal(dt));
  return NULL;
}

/* Call

   apply a program to a list of arguments
*/
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void *ST_call(void)
{
  int pid;
  ATerm prog;
  ATermList args;
  char *str_args[256];
  int i;
  
  /* ATfprintf(stderr, "<call> %t\n", Ttop()); */

  if(!MatchPair(Ttop(), &prog, (ATerm*) &args))
      return fail_address;

  if(!t_is_string(prog))
    return fail_address;
  
  ATfprintf(stderr, "%s", t_string(prog));

  args = (ATermList) consnil_to_list((ATerm) args);

  i = 0;
  str_args[i++] = t_string(prog);
  while(!ATisEmpty(args))
    {
      ATerm arg;
      if(i > 255)
	return fail_address;
      arg = ATgetFirst(args);
      args = ATgetNext(args);
      if(!t_is_string(arg))
	return fail_address;
      ATfprintf(stderr, " %s", t_string(arg));
      str_args[i++] = t_string(arg);
    }
  str_args[i] = NULL;

  ATfprintf(stderr, "\n");

  pid = fork();
  if(pid == 0)
    {
      /* fprintf(stderr, "PID = %d (I am the child)\n", pid); */
      
      if(execvp(t_string(prog), str_args) == -1)
        {
          fprintf(stderr, "%s: file not found\n", t_string(prog));
          exit(1);
        }
      fprintf(stderr, "Something went wrong\n");
      return fail_address;
    }
  else if(pid > 0)
    {
      int status;
      /* fprintf(stderr, "PID = %d (I am the father)\n", pid); */
      wait(&status);
      /* fprintf(stderr, "Return from call (status = %d)\n", WEXITSTATUS(status)); */
      if(WIFEXITED(status) && WEXITSTATUS(status) == 0)
	return NULL;
      else 
	{
	  fprintf(stderr, "Child has exited with status %d\n", 
		  WEXITSTATUS(status));
	  return fail_address;
	}
    }
  else 
    {
      fprintf(stderr, "Forking failed\n");
      return fail_address;
    }
}
