/*  $Id: sglr.h,v 1.39.2.2 2005/03/18 07:38:17 markvdb Exp $  */

/*
 * The interface to the public SGLR functions
 */

#ifndef _SGLR_H_
#define _SGLR_H_  1

#if defined(DEBUG) && !defined(MEMSTAT)
#define MEMSTATS
void SG_Dump_ATtable(ATermTable t, char *s);
#endif


#include <aterm1.h>
#include <aterm2.h>
#include <MEPT.h>


/*  Data structures: states, actions, character ranges and parse tables  */

typedef int            state;
typedef int            label;
typedef unsigned short token;

typedef ATerm     action;
typedef ATermList lookahead;
typedef ATermList actions;
typedef ATermAppl production;

typedef ATermAppl tree;
typedef ATermAppl forest;

typedef ATerm language;

/*
 Needed all the time...
 */

#define SG_MAX(a,b)     (a>b?a:b)
/*
 When interfacing, some data type conversion may be necessary.
 Some macros implement the necessary abstraction.
 */

#define SG_GETSTATE(s)  (s)
#define SG_SETSTATE(s)  (s)
#define SG_GETTOKEN(t)  (t)
#define SG_MAKETOKEN(c) (c)
#define SG_GETLABEL(l)  (l)
#define SG_SETLABEL(l)  (l)

/*
 Char class max defines where PT production numbering starts,
 in other words, it reflects a reserved character range...
 */

#define SG_CHAR_CLASS_BOT 0                     /*  Lowest ordinary char  */
#define SG_CHAR_CLASS_TOP 255                   /*  Highest ordinary char */
#define SG_EOF            (SG_CHAR_CLASS_TOP+1) /*  The EOF char          */
#define SG_CHAR_CLASS_EOF (SG_CHAR_CLASS_TOP+1) /*  .. extended with EOF  */
#define SG_PROD_START     (SG_CHAR_CLASS_EOF+1) /*  Start of prods  */

/*
 Function prototypes
 */

void  SGinitParser(ATbool toolbus_mode);
void  SG_InitPTGlobals();
void  SGshowMode(void);

ATerm SGopenLanguage(language L, const char *FN, const char *inFile);
ATerm SGopenLanguageFromTerm(language L, ATerm tbl, const char *inFile);

ATerm SGparseString(const char *prgname, language L, const char *G, const char *S, const char *path);
ATerm SGparseStringAsAsFix(const char *prgname, language L, const char *G, const char *S, const char *path);

ATerm SGparseFile(const char *prgname, language L, const char *G, const char *FN);
ATerm SGtermToFile(const char *prgname, ATerm t, const char *FN);
ATerm SGparseFileUsingTable(const char *prg, const char *tbl, const char *sort,
                            const char *in, const char *out);

ATbool SGisParseTree(ATerm t);
ATbool SGisParseError(ATerm t);

enum  SG_NrMode {SG_NR_ASK, SG_NR_ZERO, SG_NR_INC, SG_NR_DEC};
int   SGnrAmb(int Mode);

enum  SG_SORTOPS { SG_SET, SG_UNSET, SG_GET };
char *SGsort(int Mode, forest t);

FILE *SG_OpenFile(const char *std_error, const char *FN);
void  SG_CloseFile(FILE *fd);

void SG_PrintToken(FILE *out, token c);
FILE *SG_OpenLog(const char *program, const char *fnam);
FILE *SG_log(void);
void  SGcloseLog(void);
void SG_SetLog(FILE* stream);

void SG_ReportErrLine(int line, int col);
int  SG_GetChar(void);
void SG_UnGetChar(void);
char *SG_StackDotOut(char *);

/*
 Controlling global behaviour: verbosity, debugging mode, dot
 output of parse forests/parse stacks, and so on.

 This is done by using access macro's on a global variable.
*/

extern int  _SG_Mode;

enum SGmodeFlags {
  SG_TOOLBUSFLAG, 
  SG_ERRORFLAG, 
  SG_VERBOSEFLAG, 
  SG_DEBUGFLAG,
  SG_SHOWSTATFLAG, 
  SG_OUTPUTFLAG, 
  SG_ASFIX1FLAG, 
  SG_BINARYFLAG,
  SG_SHOWSTACKFLAG, 
  SG_FILTERFLAG, 
  SG_FILTER_ASSOCIATIVITYFLAG,
  SG_FILTER_DIRECTEAGERNESSFLAG,
  SG_FILTER_EAGERNESSFLAG, 
  SG_FILTER_INJECTIONCOUNTFLAG,
  SG_FILTER_PRIORITYFLAG,
  SG_FILTER_REJECTFLAG,
  SG_ASFIX2MEFLAG,
  SG_STARTSYMBOLFLAG, 
  SG_GCFLAG, 
  SG_CYCLEFLAG, 
  SG_AMBIGUITY_ERRORFLAG
};

#define SG_BIT(i)            (1 << i)

#define SG_TOOLBUS           (_SG_Mode  &  SG_BIT(SG_TOOLBUSFLAG))
#define SG_TOOLBUS_ON()      (_SG_Mode |=  SG_BIT(SG_TOOLBUSFLAG))
#define SG_TOOLBUS_OFF()     (_SG_Mode &= ~SG_BIT(SG_TOOLBUSFLAG))
#define SG_ERROR             (_SG_Mode  &  SG_BIT(SG_ERRORFLAG))
#define SG_ERROR_ON()        (_SG_Mode |=  SG_BIT(SG_ERRORFLAG))
#define SG_ERROR_OFF()       (_SG_Mode &= ~SG_BIT(SG_ERRORFLAG))
#define SG_VERBOSE           (_SG_Mode  &  SG_BIT(SG_VERBOSEFLAG))
#define SG_VERBOSE_ON()      (_SG_Mode |=  SG_BIT(SG_VERBOSEFLAG))
#define SG_VERBOSE_OFF()     (_SG_Mode &= ~SG_BIT(SG_VERBOSEFLAG))
#define SG_DEBUG             (_SG_Mode  &  SG_BIT(SG_DEBUGFLAG))
#define SG_DEBUG_ON()        (_SG_Mode |=  SG_BIT(SG_DEBUGFLAG))
#define SG_DEBUG_OFF()       (_SG_Mode &= ~SG_BIT(SG_DEBUGFLAG))
#define SG_SHOWSTAT          (_SG_Mode  &  SG_BIT(SG_SHOWSTATFLAG))
#define SG_SHOWSTAT_ON()     (_SG_Mode |=  SG_BIT(SG_SHOWSTATFLAG))
#define SG_SHOWSTAT_OFF()    (_SG_Mode &= ~SG_BIT(SG_SHOWSTATFLAG))

#define SG_OUTPUT            (_SG_Mode  &  SG_BIT(SG_OUTPUTFLAG))
#define SG_OUTPUT_ON()       (_SG_Mode |=  SG_BIT(SG_OUTPUTFLAG))
#define SG_OUTPUT_OFF()      (_SG_Mode &= ~SG_BIT(SG_OUTPUTFLAG)) 
#define SG_ASFIX1            (_SG_Mode  &  SG_BIT(SG_ASFIX1FLAG))
#define SG_ASFIX1_ON()       (_SG_Mode |=  SG_BIT(SG_ASFIX1FLAG))
#define SG_ASFIX1_OFF()      (_SG_Mode &= ~SG_BIT(SG_ASFIX1FLAG))
#define SG_ASFIX2ME          (_SG_Mode  &  SG_BIT(SG_ASFIX2MEFLAG))
#define SG_ASFIX2ME_ON()     (_SG_Mode |=  SG_BIT(SG_ASFIX2MEFLAG))
#define SG_ASFIX2ME_OFF()    (_SG_Mode &= ~SG_BIT(SG_ASFIX2MEFLAG))
#define SG_ASFIX2            !(SG_ASFIX1 || SG_ASFIX2ME)
#define SG_ASFIX2_ON()       SG_ASFIX1_OFF()
#define SG_ASFIX2_OFF()      SG_ASFIX1_ON()

#define SG_BINARY            (_SG_Mode  &  SG_BIT(SG_BINARYFLAG))
#define SG_BINARY_ON()       (_SG_Mode |=  SG_BIT(SG_BINARYFLAG))
#define SG_BINARY_OFF()      (_SG_Mode &= ~SG_BIT(SG_BINARYFLAG))

#define SG_SHOWSTACK         (_SG_Mode  &  SG_BIT(SG_SHOWSTACKFLAG))
#define SG_SHOWSTACK_ON()    (_SG_Mode |=  SG_BIT(SG_SHOWSTACKFLAG))
#define SG_SHOWSTACK_OFF()   (_SG_Mode &= ~SG_BIT(SG_SHOWSTACKFLAG))

#define SG_FILTER            (_SG_Mode  &  SG_BIT(SG_FILTERFLAG))
#define SG_FILTER_ON()       (_SG_Mode |=  SG_BIT(SG_FILTERFLAG))
#define SG_FILTER_OFF()      (_SG_Mode &= ~SG_BIT(SG_FILTERFLAG))

#define SG_FILTER_ASSOCIATIVITY \
 (_SG_Mode  &  SG_BIT(SG_FILTER_ASSOCIATIVITYFLAG))
#define SG_FILTER_ASSOCIATIVITY_ON() \
 (_SG_Mode |=  SG_BIT(SG_FILTER_ASSOCIATIVITYFLAG))
#define SG_FILTER_ASSOCIATIVITY_OFF() \
 (_SG_Mode &= ~SG_BIT(SG_FILTER_ASSOCIATIVITYFLAG))

#define SG_FILTER_PRIORITY \
 (_SG_Mode  &  SG_BIT(SG_FILTER_PRIORITYFLAG))
#define SG_FILTER_PRIORITY_ON() \
 (_SG_Mode |=  SG_BIT(SG_FILTER_PRIORITYFLAG))
#define SG_FILTER_PRIORITY_OFF() \
 (_SG_Mode &= ~SG_BIT(SG_FILTER_PRIORITYFLAG))

#define SG_FILTER_EAGERNESS \
 (_SG_Mode  &  SG_BIT(SG_FILTER_EAGERNESSFLAG)) 
#define SG_FILTER_EAGERNESS_ON()  \
 (_SG_Mode |=  SG_BIT(SG_FILTER_EAGERNESSFLAG)) 
#define SG_FILTER_EAGERNESS_OFF() \
 (_SG_Mode &= ~SG_BIT(SG_FILTER_EAGERNESSFLAG))

#define SG_FILTER_INJECTIONCOUNT \
 (_SG_Mode  &  SG_BIT(SG_FILTER_INJECTIONCOUNTFLAG))
#define SG_FILTER_INJECTIONCOUNT_ON() \
 (_SG_Mode |=  SG_BIT(SG_FILTER_INJECTIONCOUNTFLAG))
#define SG_FILTER_INJECTIONCOUNT_OFF() \
  (_SG_Mode &= ~SG_BIT(SG_FILTER_INJECTIONCOUNTFLAG))

#define SG_FILTER_REJECT       (_SG_Mode  &  SG_BIT(SG_FILTER_REJECTFLAG))
#define SG_FILTER_REJECT_ON()  (_SG_Mode |=  SG_BIT(SG_FILTER_REJECTFLAG)) 
#define SG_FILTER_REJECT_OFF() (_SG_Mode &= ~SG_BIT(SG_FILTER_REJECTFLAG))

#define SG_FILTER_DIRECTEAGERNESS \
 (_SG_Mode  &  SG_BIT(SG_FILTER_DIRECTEAGERNESSFLAG))
#define SG_FILTER_DIRECTEAGERNESS_ON() \
 (_SG_Mode  |=  SG_BIT(SG_FILTER_DIRECTEAGERNESSFLAG))
#define SG_FILTER_DIRECTEAGERNESS_OFF() \
 (_SG_Mode  &=  ~SG_BIT(SG_FILTER_DIRECTEAGERNESSFLAG))

#define SG_STARTSYMBOL       (_SG_Mode  &  SG_BIT(SG_STARTSYMBOLFLAG))
#define SG_STARTSYMBOL_ON()  (_SG_Mode |=  SG_BIT(SG_STARTSYMBOLFLAG))
#define SG_STARTSYMBOL_OFF() (_SG_Mode &= ~SG_BIT(SG_STARTSYMBOLFLAG))

#define SG_CYCLE             (_SG_Mode  &  SG_BIT(SG_CYCLEFLAG))
#define SG_CYCLE_ON()        (_SG_Mode |=  SG_BIT(SG_CYCLEFLAG))
#define SG_CYCLE_OFF()       (_SG_Mode &= ~SG_BIT(SG_CYCLEFLAG))

#define SG_AMBIGUITY_ERROR       (_SG_Mode  &  SG_BIT(SG_AMBIGUITY_ERRORFLAG))
#define SG_AMBIGUITY_ERROR_ON()  (_SG_Mode |=  SG_BIT(SG_AMBIGUITY_ERRORFLAG))
#define SG_AMBIGUITY_ERROR_OFF() (_SG_Mode &= ~SG_BIT(SG_AMBIGUITY_ERRORFLAG))

#define SG_STATISTICS        (SG_SHOWSTAT || SG_DEBUG)

#define IF_VERBOSE(s)        if(SG_VERBOSE) {s;}
#define IF_DEBUG(s)          if(SG_DEBUG) {s;}
#define IF_STATISTICS(s)     if(SG_STATISTICS) {s;}

/*  A few global AFuns, used by several routines  */

extern AFun SG_EOF_Error_AFun,
       SG_Too_Many_Ambiguities_Error_AFun,
       SG_Amb_Node_AFun, SG_Position_AFun, SG_Productions_AFun,
       SG_Amb_Error_AFun, SG_SndValue_AFun, SG_ParseTree_AFun,
       SG_Appl_AFun, SG_Term_AFun, SG_ParseTreeAF1_AFun,
       SG_ParseError_AFun, SG_Character_AFun, SG_Line_AFun, SG_Col_AFun,
       SG_AmbiguousTree_AFun, SG_Offset_AFun;

#endif  /* _SGLR_H_ */
