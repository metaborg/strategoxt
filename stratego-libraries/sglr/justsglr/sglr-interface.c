/*  $Id: sglr-interface.c 20451 2006-10-11 10:35:13Z jurgenv $  */

#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include <aterm1.h>
#include <atb-tool.h>
#include <Error-utils.h>

#include "sglr.h"
#include "sglr-strings.h"
#include "mem-alloc.h"
#include "parser.h"
#include "forest.h"
#include "rsrc-usage.h"


ATerm  SG_TermToToolbus(ATerm t);
static size_t SG_FileSize(const char *FN);
void   SG_PrintToken(FILE *out, token c);
void   SG_Validate(const char *caller);
static char  *SG_ReadFile(const char *prg, const char *err, const char *fnam, size_t *fsize);


/*
 Controlling global behaviour: verbosity, debugging mode, dot
 output of parse forests/parse stacks, and so on.
 */

int  _SG_Mode = 0;
char *SG_Path;

/*  Globals that are private to sglr-interface  */

static char *SG_theText;
static int   SG_textIndex;
static int   SG_textEnd;

/*
    |SGinitParser| initializes the parser's operating mode to a
    sensible default
 */

void  SGinitParser(ATbool toolbus_mode)
{
  if(toolbus_mode) {
    SG_TOOLBUS_ON();
  }

  SG_FILTER_ON();
  SG_FILTER_REMOVECYCLES_OFF();
  SG_FILTER_DIRECTEAGERNESS_ON();
  SG_FILTER_EAGERNESS_ON();
  SG_FILTER_INJECTIONCOUNT_ON();
  SG_FILTER_PRIORITY_ON();
  SG_FILTER_REJECT_ON();
  
  SG_BINARY_ON();
}

void SGshowMode()
{
  ATfprintf(stderr, "TOOLBUS:     %s\n", SG_TOOLBUS?"y":"n");
  ATfprintf(stderr, "ERROR:       %s\n", SG_ERROR?"y":"n");
  ATfprintf(stderr, "VERBOSE:     %s\n", SG_VERBOSE?"y":"n");
  ATfprintf(stderr, "DEBUG:       %s\n", SG_DEBUG?"y":"n");
  ATfprintf(stderr, "SHOWSTAT:    %s\n", SG_SHOWSTAT?"y":"n");
  ATfprintf(stderr, "ASFIX2ME:    %s\n", SG_ASFIX2ME?"y":"n");
  ATfprintf(stderr, "BINARY:      %s\n", SG_BINARY?"y":"n");
  ATfprintf(stderr, "SHOWSTACK:   %s\n", SG_SHOWSTACK?"y":"n");
  ATfprintf(stderr, "FILTER:      %s\n", SG_FILTER?"y":"n");
  ATfprintf(stderr, "STARTSYMBOL: %s\n", SG_STARTSYMBOL?"y":"n");
}

/**  The ToolBus API functions  **/

/*
 The function |SGopenLanguageFromTerm| initializes the parse table for
 language |L| from the term |tbl|.
 */

ATerm SGopenLanguageFromTerm(language L, ATerm tbl, const char *path)
{
  parse_table *pt = NULL;

  IF_STATISTICS(ATfprintf(SG_log(), "Language: %t\n", L); SG_Timer());

  pt = SG_BuildParseTable((ATermAppl) tbl, path);

  IF_STATISTICS(ATfprintf(SG_log(),
                          "Obtaining parse table for %t took %.6fs\n",
                          L, SG_Timer()));
  if (pt) {
    SG_SaveParseTable(L, pt);
  }

  return (ATerm) (pt ? ATempty : NULL);
}

ATerm SGopenLanguage(language L, const char *FN, const char *inFile)
{
  parse_table *pt;

  if (!L || !FN) {
    return (ATerm) NULL;
  }

  SG_Validate("SGopenLanguage");
  IF_VERBOSE(
    if (FN)
      ATwarning("opening parse table %s\n", SG_SAFE_STRING(FN))
  );

  pt = SG_AddParseTable(L, FN, inFile);

  return (ATerm) (pt ? ATempty : NULL);
}

/*
 The function |SGparseString| parses the text in string |S| with the
 parse table for language |L|.  The string is saved in the global
 variable |SG_theText|, which is accessed through the function
 |SG_GetChar|.  This the function that is passed to the
 parser.  The end of string character |'\0'| is converted into the end
 of file value |SG_EOF|.

 Because the string passed to |SGparseString| might be a string that was
 contained in a term, we have to save it from being garbage collected.
 This is done by duplicating it.
 */

ATerm SGparseString(const char *input, SGLR_ParseTable parseTable, const char *topSort, const char *path)
{
  ATerm t;

  SG_InitPTGlobals();

  SG_Validate("SGparseString");
  SG_theText = strdup(input);
  SG_textIndex = 0;
  SG_textEnd = strlen(SG_theText);

  if (topSort != NULL && *topSort == '\0') {
    topSort = NULL;
  }

  t = (ATerm) SG_Parse(path, (parse_table *)parseTable, topSort, SG_GetChar, SG_textEnd);

  free(SG_theText);

  return t;
}


ATerm SGparseStringAsAsFix(const char *input, SGLR_ParseTable parseTable, 
			   const char *topSort, const char *path)
{
  SG_ASFIX2ME_ON();

  return SGparseString(input, parseTable, topSort, path);
}

/*
 The function |SGparseFile| parses the text in file |FN| with the
 parse table for language |L|.  The function |SG_GetChar| returns
 the next char from a file buffer, and |SG_UnGetChar| is its counterpart.
 These functions are used to instantiate the buffer parameter function
 for the parser, and for lookahead restriction handling.
 */


/*
 If either no filename or `-' is specified, standard input is used.
 */

ATerm SGparseFile(const char *prgname, 
		  language L, 
		  const char *G, 
		  const char *FN)
{
  forest ret;
  size_t ntok = 0;
  parse_table *pt;

  SG_Validate("SGparseFile");
  if ((pt = SG_LookupParseTable(L, FN)) == NULL) {
    IF_VERBOSE(ATwarning("no such parse table (%s)\n", 
			 SG_SAFE_LANGUAGE(L)));
    return NULL;
  }

  if ((SG_theText = SG_ReadFile(prgname, NULL, FN, &ntok)) == NULL) {
    return NULL;
  }
  

  /* make sure the string is terminated */
  SG_textEnd = ntok;
  SG_textIndex = 0;
  SG_theText[SG_textEnd] = '\0';

  IF_VERBOSE(ATwarning("%s: parsing file %s (%d tokens)\n", prgname, FN, ntok));
  ret = SG_Parse(FN, pt, G?(*G?G:0):NULL, SG_GetChar, SG_textEnd);
  SG_Free(SG_theText);
  return (ATerm) ret;
}

ATerm SGparseStringWithLoadedTable(const char *prgname, 
		  language L, 
		  const char *input,
		  const char *topSort, 
		  const char *path)
{
  forest ret;
  parse_table *pt;

  SG_Validate("SGparseFile");
  if ((pt = SG_LookupParseTable(L, path)) == NULL) {
    IF_VERBOSE(ATwarning("no such parse table (%s)\n", 
			 SG_SAFE_LANGUAGE(L)));
    return (ATerm) ERR_makeErrorError("Parse table not found", ERR_makeSubjectListEmpty());
  }

  SG_theText = strdup(input);
  SG_textIndex = 0;
  SG_textEnd = strlen(SG_theText);

  if (topSort != NULL && *topSort == '\0') {
    topSort = NULL;
  }
  
  ret = SG_Parse(path, pt, topSort, SG_GetChar, SG_textEnd);
  SG_Free(SG_theText);
  return (ATerm) ret;
}

/*
 Opening a file for writing and write a term to it.
 */

ATerm SGtermToFile(const char *prgname, ATerm t, const char *FN)
{
  FILE *output_file;

  if (t == NULL) {
    return NULL;
  }

  if (SG_OUTPUT) {
    if (!strcmp(FN, "") || !strcmp(FN, "-")) {
      output_file = stdout;
    }
    else if (!(output_file = fopen(FN, "wb"))) {
      ATerror("%s: cannot create %s\n", prgname, FN);
    }
    IF_VERBOSE(ATwarning("%s: writing %s to %s\n", prgname,
                         SG_ERROR?"error output":"parse result", FN));
    if(SG_BINARY) {
      ATwriteToBinaryFile(t, output_file);
    }
    else {
      ATwriteToTextFile(t, output_file);
      putc('\n', output_file);                /*  For convenience; sosumi!  */
    }
  
    if(output_file != stdout) {
      fclose(output_file);
    }
    else {
      fflush(output_file);                    /*  Avoid mixing stdout/stderr  */
    }
  }
  return t;
}

/*
 Parse using Language File -- the core function for stand-alone use.
 It opens (or reuses) the parse table, parses the input file, writes
 the parse tree to the output file and returns the parse result.
 */

ATerm SGparseFileUsingTable(const char *prg, 
			    const char *ptblfil, 
			    const char *sort,
                            const char *infil, 
			    const char *outfil)
{
  language L = ATmake("<str>", ptblfil);

  if (infil && 
      *infil && 
      strcmp(infil,"-") && 
      (int)SG_FileSize(infil) < 0) {
    ATerror("%s: cannot open %s\n", prg, infil);
  }
  
  SG_InitParseTableErrorList();

  if (!SGopenLanguage(L, ptblfil, infil)) {
    return SGtermToFile(prg,
			ERR_ErrorToTerm(SG_makeParseTableErrorError()),
			outfil);
  }
  return SGtermToFile(prg, SGparseFile(prg, L, sort, infil), outfil);
}

/*
 Check parser output to see if it's a valid parse tree, or a parse error
 */

ATbool SGisParseTree(ATerm t)
{
  return ATgetAFun(t) == SG_ParseTree_AFun;
}

ATbool SGisParseError(ATerm t)
{
  return ATgetAFun(t) == SG_ParseError_AFun;
}


/*
  A few privates...
 */


int SG_GetChar(void)
{
  if (SG_textIndex >= SG_textEnd)
    return SG_EOF;

  return (unsigned char) SG_theText[SG_textIndex++];
}

void SG_UnGetChar(void)
{
  assert(SG_textIndex > 0);
  SG_textIndex--;
}

#if 1
ATerm SG_TermToToolbus(ATerm t)
{
  SG_InitPTGlobals();  /*  Make REALLY sure the PT globals are initialised  */

  return SG_TOOLBUS
    ? (ATerm) ATmakeAppl1(SG_SndValue_AFun, t)
    : t;
}
#endif


FILE  *SG_Log = NULL;

FILE  *SG_OpenLog(const char *prg, const char *fnam)
{
  if (SG_Log)
    return SG_Log;

  if (!fnam || !strcmp(fnam, ""))
    fnam = ".sglr-log";
  if (!(SG_Log = fopen(fnam, "wb"))) {
    ATerror("%s%sCannot create logfile %s\n",  SG_COND_STRING(prg), prg?": ":"", fnam);
  }
  IF_VERBOSE(ATwarning("%s%slogging to %s\n",  SG_COND_STRING(prg), prg?": ":"", fnam));
  return SG_Log;
}

FILE  *SG_log(void)
{
  return SG_Log;
}

void SG_SetLog(FILE* stream)
{
  SG_Log = stream;
}

void SG_CloseLog(void)
{
  if(SG_Log) fclose(SG_Log);
}

static size_t SG_FileSize(const char *FN)
{
  struct stat  statbuf;

  if (!FN || !strcmp(FN, "") || !strcmp(FN, "-"))
    return -1;  /*  We can't tell how many tokens to read  */

  if(stat(FN, &statbuf) < 0) {
    return -1;  /*  We can't tell how many tokens to read, and
    may not be able to read anything... */
  }
  return statbuf.st_size;
}

/*
 |SG_PrintToken| prints token |c| on file |out|
 */

void SG_PrintToken(FILE *out, token c)
{
  int i = SG_GETTOKEN(c);

  if(i != SG_EOF &&isgraph(i)) {
    fprintf(out, "%c", i);
  } else {
    switch(i) {
      case SG_EOF:
        fprintf(out, "EOF");
        break;
      case '\t':
        fprintf(out, "\\t");
        break;
      case '\n':
        fprintf(out, "\\n");
        break;
      case '\r':
        fprintf(out, "\\r");
        break;
      default:
        fprintf(out, "\\%d", i);
        break;
    }
  }
}

/*
 SG_Validate: check the `mode' bits, to make sure that no
 debugging/statistics output is written unless the logging
 file is opened, &c.
 */

void SG_Validate(const char *caller)
{
  IF_STATISTICS(
    if (!SG_log()) {
      ATwarning("Warning: implicitly opening logfile\n");
      SG_OpenLog(caller, ".sglr-log");
    }
  );
}


/*  The function |SGopenFile| tries to open a named file for reading.  */

FILE *SG_OpenFile(const char *std_error, const char *FN)
{
  FILE *file;

  if (!FN || !strcmp(FN, "") || !strcmp(FN, "-")) {
    if (!std_error || (FN && !strcmp(FN, "-"))) {
      return stdin;
    }

    return NULL;
  }

  if (!(file = fopen(FN, "rb"))) {
    return NULL;
  }
  return file;
}

/*
 |SGreadFile| opens a named file and reads it into a buffer.
 The buffer is allocated here, but must be disposed by the caller.
 Also returned is the number of bytes actually read, in its fsize
 parameter.
 */

#define SG_BUFCHUNK  65536

static char *SG_ReadFile(const char *prg, 
			 const char *err, 
			 const char *fnam, 
			 size_t *fsize)
{
  FILE   *in;
  char   *buf;

  IF_STATISTICS(SG_Timer());

  *fsize = 0L;
  if((in = SG_OpenFile(err, fnam)) == NULL) {
    return NULL;
  }
  if(in != stdin) {
    *fsize = SG_FileSize(fnam);
    /* we allocate one char extra for EOS */
    buf = SG_Malloc(1, *fsize+1);
    if(*fsize != fread(buf, 1, *fsize, in)) {
      ATerror("%s: error reading %s\n", prg, fnam);
    }
    SG_CloseFile(in);
  } else {
    size_t curbufsize = SG_BUFCHUNK;
    register int    c;

    buf = SG_Malloc(sizeof(char), SG_BUFCHUNK);
    while((c = getc(in)) != EOF) {
      if(*fsize >= curbufsize) {
        curbufsize += SG_BUFCHUNK;
        buf = SG_Realloc(buf, sizeof(char), curbufsize);
      }
      buf[*fsize] = c;
      (*fsize)++;
    }
    buf = SG_Realloc(buf, (*fsize)+1, sizeof(char));
  }
  IF_STATISTICS(fprintf(SG_log(), "Read %ld input tokens from \"%s\" in %.6fs\n",
                        (long) *fsize, fnam, SG_Timer()));

  return buf;
}

void SG_CloseFile(FILE *fd)
{
  if(fd != stdin)
    fclose(fd);
}

void SG_ReportErrLine(int line, int col)
{
  char *errmsg = SG_theText+SG_textIndex, linestr[16];
  int  currlen=0, maxlen, prefixlen;

  snprintf(linestr, 16, "%d", line);
  prefixlen=strlen(linestr)+2;
  maxlen=80-prefixlen;

  if(*errmsg == '\n') {
    errmsg--;
  }
  while(currlen<maxlen && errmsg>SG_theText && *errmsg!='\n') {
    currlen++; errmsg--;
  }

  fprintf(stderr, "%d: ", line);
  while(errmsg <= SG_theText+SG_textEnd && *errmsg != '\n' && maxlen--)
    fprintf(stderr, "%c", *errmsg++);
  fprintf(stderr, "\n%*.*s%*s\n", prefixlen, prefixlen, "", col, "^");
}
