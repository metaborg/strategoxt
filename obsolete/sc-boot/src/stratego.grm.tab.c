
/*  A Bison parser, made from stratego.grm
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	LCID	257
#define	STRINGTOK	258
#define	UCID	259
#define	ID	260
#define	ARROW	261
#define	LONGARROW	262
#define	ASSIGN	263
#define	ASTERISK	264
#define	BACKARROW	265
#define	BAR	266
#define	BUILD	267
#define	AS	268
#define	ANNBUILD	269
#define	ANNRM	270
#define	BUILDe	271
#define	COMMA	272
#define	EQ	273
#define	FAIL	274
#define	GG	275
#define	IMPORTS	276
#define	KIDS	277
#define	LBRACK	278
#define	LCURLY	279
#define	LCURLYBAR	280
#define	LL	281
#define	LPAREN	282
#define	LT	283
#define	GT	284
#define	ANNMATCH	285
#define	MATCH	286
#define	MATCHe	287
#define	MODULE	288
#define	NEW	289
#define	CONSTRUCTORS	290
#define	OVERLAYS	291
#define	PARSEPROG	292
#define	PARSEQUERY	293
#define	PRIM	294
#define	RCURLY	295
#define	BARRCURLY	296
#define	RPAREN	297
#define	RULES	298
#define	SIGNATURE	299
#define	SORTS	300
#define	STARSTAR	301
#define	STRATEGIES	302
#define	STR_GT	303
#define	SUCC	304
#define	UNDERSCORE	305
#define	DOT	306
#define	BACKSLASH	307
#define	EXPLODE	308
#define	MODIFIER	309
#define	OVERRIDE	310
#define	STRATEGO	311
#define	SCRIPT	312
#define	DUMP	313
#define	LOAD	314
#define	IN	315
#define	COLON	316
#define	DOUBLECOLON	317
#define	PLUS	318
#define	LTPLUS	319
#define	SEMICOLON	320
#define	DOUBLEARROW	321
#define	LEFTDOUBLEARROW	322
#define	RBRACK	323
#define	NOT	324
#define	WHERE	325
#define	TEST	326
#define	ONE	327
#define	ALL	328
#define	THREAD	329
#define	SOMETOK	330
#define	MU	331
#define	LET	332
#define	REAL	333
#define	INT	334

#line 1 "stratego.grm"

#include <aterm1.h>
#include "stratego.h"

extern int yylineno;
extern char file_name[256];
extern FILE *yyin;

ATerm parse_tree;

void yymessage(char *msg)
{
  fprintf(stderr, "%s: line %d - %s\n", file_name, yylineno + 1, msg);
}

void yyerror(char *msg)
{
  yymessage(msg);
  exit(1);
}


#line 24 "stratego.grm"
typedef union{
   int    num;
   double real;
   char   *string;
   ATerm  term;
   ATermList list;
} YYSTYPE;
#line 32 "stratego.grm"


/* int yylex(void); */
 
int yylex(YYSTYPE *lvalp);
int yyparse(void);

int parse()
{
   int result;
   result = yyparse();
   return result;
}
#ifndef YYDEBUG
#define YYDEBUG 1
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		267
#define	YYFLAG		-32768
#define	YYNTBASE	81

#define YYTRANSLATE(x) ((unsigned)(x) <= 334 ? yytranslate[x] : 120)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    77,    78,    79,    80
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     4,     8,    13,    15,    17,    20,    21,    24,    27,
    29,    32,    34,    37,    38,    39,    42,    45,    48,    51,
    54,    57,    59,    62,    63,    66,    69,    70,    74,    75,
    79,    81,    84,    86,    88,    89,    92,    96,   100,   102,
   106,   110,   112,   114,   116,   119,   121,   124,   126,   128,
   130,   133,   137,   142,   147,   151,   157,   158,   161,   162,
   168,   169,   173,   174,   178,   180,   184,   185,   187,   191,
   192,   193,   196,   201,   206,   211,   216,   217,   220,   221,
   224,   227,   232,   238,   241,   244,   249,   256,   260,   265,
   269,   271,   273,   276,   281,   287,   292,   297,   302,   308,
   314,   318,   322,   326,   330,   336,   341,   346,   351,   356,
   360,   365,   367,   369,   371,   376,   377,   380,   381,   385,
   386,   388,   392,   393,   396,   399,   404,   405,   409,   410,
   412,   416,   418,   422,   423,   425,   429,   430,   433,   440
};

static const short yyrhs[] = {    34,
    95,    84,     0,    57,    58,    82,     0,    29,   108,    30,
    96,     0,   108,     0,    83,     0,    82,    83,     0,     0,
    59,     4,     0,    60,     4,     0,    86,     0,    30,   108,
     0,    86,     0,    84,    86,     0,     0,     0,    85,    95,
     0,    22,    85,     0,    44,   112,     0,    48,   112,     0,
    45,    87,     0,    37,   118,     0,    88,     0,    87,    88,
     0,     0,    46,    89,     0,    36,    91,     0,     0,    89,
    95,    90,     0,     0,    28,   101,    43,     0,     0,     0,
     0,     0,     0,    10,     0,    47,     0,     0,    91,    92,
     0,    95,    62,    93,     0,    94,     7,    93,     0,    96,
     0,    28,    93,    43,     0,    94,    10,    93,     0,    93,
     0,     3,     0,     5,     0,    95,    98,     0,    51,     0,
    51,    96,     0,    80,     0,    79,     0,     4,     0,    95,
   100,     0,    95,    14,    96,     0,    29,   108,    30,    96,
     0,    24,   101,    97,    69,     0,    28,   101,    43,     0,
    96,    54,    28,    96,    43,     0,     0,    12,    96,     0,
     0,    24,    96,   107,    69,    99,     0,     0,    28,    95,
    43,     0,     0,    28,   101,    43,     0,    96,     0,    96,
    18,   101,     0,     0,    95,     0,    95,    18,   102,     0,
     0,     0,   103,   104,     0,    95,   114,    62,   105,     0,
    95,   114,    63,   106,     0,    96,     7,    96,   107,     0,
   108,     8,   108,   107,     0,     0,    71,   108,     0,     0,
    68,   108,     0,    95,   110,     0,    95,    55,    95,   110,
     0,   108,    54,    28,   108,    43,     0,    33,    96,     0,
    17,    96,     0,    40,    28,     4,    43,     0,    40,    28,
     4,    18,   101,    43,     0,    53,   105,    53,     0,    29,
   108,    30,    96,     0,   108,    67,    96,     0,    20,     0,
    50,     0,    80,   108,     0,    44,    28,   103,    43,     0,
    56,    44,    28,   103,    43,     0,    70,    28,   108,    43,
     0,    71,    28,   108,    43,     0,    72,    28,   108,    43,
     0,    25,   102,    62,   108,    41,     0,    26,   102,    62,
   108,    42,     0,    25,   108,    41,     0,   108,    66,   108,
     0,   108,    64,   108,     0,   108,    65,   108,     0,    77,
    95,    28,   108,    43,     0,    76,    28,   108,    43,     0,
    73,    28,   108,    43,     0,    74,    28,   108,    43,     0,
    75,    28,   108,    43,     0,    28,   111,    43,     0,    24,
   111,   109,    69,     0,     4,     0,    80,     0,    79,     0,
    78,   112,    61,   108,     0,     0,    12,   108,     0,     0,
    28,   111,    43,     0,     0,   108,     0,   108,    18,   111,
     0,     0,   112,   113,     0,   112,   104,     0,    95,   114,
    19,   108,     0,     0,    28,   115,    43,     0,     0,   116,
     0,   116,    18,   115,     0,    95,     0,    95,    62,    93,
     0,     0,    95,     0,    95,    18,   117,     0,     0,   119,
   118,     0,    95,    28,   117,    43,    19,    96,     0,    95,
    19,    96,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   171,   172,   173,   174,   177,   178,   179,   182,   183,   184,
   185,   188,   189,   190,   193,   194,   197,   198,   199,   200,
   201,   204,   205,   206,   209,   210,   213,   214,   216,   217,
   220,   221,   224,   225,   228,   229,   232,   235,   236,   237,
   241,   242,   245,   246,   251,   258,   260,   262,   263,   264,
   265,   266,   267,   268,   269,   270,   274,   275,   278,   279,
   283,   284,   287,   288,   291,   292,   293,   296,   297,   298,
   303,   304,   308,   309,   313,   316,   320,   321,   327,   328,
   331,   333,   337,   341,   342,   344,   345,   347,   349,   350,
   352,   353,   354,   356,   357,   359,   360,   361,   363,   365,
   367,   369,   370,   371,   372,   373,   374,   375,   376,   377,
   378,   380,   381,   383,   385,   389,   390,   394,   395,   399,
   400,   401,   407,   408,   409,   413,   417,   418,   421,   422,
   423,   426,   427,   429,   430,   431,   434,   435,   438,   440
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","LCID","STRINGTOK",
"UCID","ID","ARROW","LONGARROW","ASSIGN","ASTERISK","BACKARROW","BAR","BUILD",
"AS","ANNBUILD","ANNRM","BUILDe","COMMA","EQ","FAIL","GG","IMPORTS","KIDS","LBRACK",
"LCURLY","LCURLYBAR","LL","LPAREN","LT","GT","ANNMATCH","MATCH","MATCHe","MODULE",
"NEW","CONSTRUCTORS","OVERLAYS","PARSEPROG","PARSEQUERY","PRIM","RCURLY","BARRCURLY",
"RPAREN","RULES","SIGNATURE","SORTS","STARSTAR","STRATEGIES","STR_GT","SUCC",
"UNDERSCORE","DOT","BACKSLASH","EXPLODE","MODIFIER","OVERRIDE","STRATEGO","SCRIPT",
"DUMP","LOAD","IN","COLON","DOUBLECOLON","PLUS","LTPLUS","SEMICOLON","DOUBLEARROW",
"LEFTDOUBLEARROW","RBRACK","NOT","WHERE","TEST","ONE","ALL","THREAD","SOMETOK",
"MU","LET","REAL","INT","start","commands","command","decls","mods","decl","sdecls",
"sdecl","idlist","optkind","opdecls","opdecl","type","typelist","id","term",
"tail","optcont","trav","opttermlist","termlist","tvarlist","rules","rule_def",
"rule","stratrule","optcond","strategy","strategytail","optstrategylist","strategylist",
"strategies","strategy_def","optvarlist","varlist","typedid","purevarlist","overlays",
"overlay", NULL
};
#endif

static const short yyr1[] = {     0,
    81,    81,    81,    81,    82,    82,    82,    83,    83,    83,
    83,    84,    84,    84,    85,    85,    86,    86,    86,    86,
    86,    87,    87,    87,    88,    88,    89,    89,    90,    90,
    -1,    -1,    -1,    -1,    91,    91,    92,    93,    93,    93,
    94,    94,    95,    95,    96,    96,    96,    96,    96,    96,
    96,    96,    96,    96,    96,    96,    97,    97,    98,    98,
    99,    99,   100,   100,   101,   101,   101,   102,   102,   102,
   103,   103,   104,   104,   105,   106,   107,   107,    -1,    -1,
   108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
   108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
   108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
   108,   108,   108,   108,   108,   109,   109,   110,   110,   111,
   111,   111,   112,   112,   112,   113,   114,   114,   115,   115,
   115,   116,   116,   117,   117,   117,   118,   118,   119,   119
};

static const short yyr2[] = {     0,
     3,     3,     4,     1,     1,     2,     0,     2,     2,     1,
     2,     1,     2,     0,     0,     2,     2,     2,     2,     2,
     2,     1,     2,     0,     2,     2,     0,     3,     0,     3,
     1,     2,     1,     1,     0,     2,     3,     3,     1,     3,
     3,     1,     1,     1,     2,     1,     2,     1,     1,     1,
     2,     3,     4,     4,     3,     5,     0,     2,     0,     5,
     0,     3,     0,     3,     1,     3,     0,     1,     3,     0,
     0,     2,     4,     4,     4,     4,     0,     2,     0,     2,
     2,     4,     5,     2,     2,     4,     6,     3,     4,     3,
     1,     1,     2,     4,     5,     4,     4,     4,     5,     5,
     3,     3,     3,     3,     5,     4,     4,     4,     4,     3,
     4,     1,     1,     1,     4,     0,     2,     0,     3,     0,
     1,     3,     0,     2,     2,     4,     0,     3,     0,     1,
     3,     1,     3,     0,     1,     3,     0,     2,     6,     3
};

static const short yydefact[] = {     0,
    43,   112,    44,     0,    91,   120,    70,    70,   120,     0,
     0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   123,   114,   113,   118,
     4,    50,    67,    67,     0,    46,    49,    48,    59,    85,
     0,   121,   116,   118,     0,     0,    68,     0,     0,     0,
    84,    14,     0,    71,     0,     0,     0,     7,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    93,   120,     0,
    81,     0,     0,     0,     0,     0,    65,    57,     0,     0,
    47,     0,     0,    67,    45,    51,     0,     0,   120,     0,
     0,    70,     0,   101,     0,   110,     0,    15,   137,   123,
    24,   123,     1,    12,     0,     0,     0,    88,    71,     0,
     0,     0,     2,     5,    10,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   127,   125,   124,     0,   118,     0,
   103,   104,   102,    90,    67,     0,     0,    55,     0,    52,
    77,     0,     0,     0,   122,   117,   111,    69,     0,     0,
    89,    17,     0,    21,   137,    18,    35,    27,    20,    22,
    19,    13,    67,    86,    94,   127,    72,    77,     0,    11,
     8,     9,     6,    96,    97,    98,   107,   108,   109,   106,
     0,   115,   129,     0,   119,    82,     0,    66,    58,    54,
    53,     0,     0,    64,     0,    89,    99,   100,    16,     0,
   134,   138,    26,    25,    23,     0,     0,    75,    95,   105,
   132,     0,   130,     0,     0,     0,    83,    78,    61,    56,
   140,   135,     0,    36,     0,    29,    87,     0,   128,   129,
   126,    73,    74,     0,     0,    60,   134,     0,     0,    67,
    28,    67,    42,     0,    39,   131,     0,     0,   136,     0,
    37,     0,    42,    39,     0,     0,    77,    62,   139,    30,
    40,    38,    41,    76,     0,     0,     0
};

static const short yydefgoto[] = {   265,
   113,   114,   103,   152,   115,   159,   160,   204,   241,   203,
   224,   243,   244,    30,    77,   137,    85,   236,    86,    79,
    45,   106,   126,    56,   233,   193,    42,    91,    71,    43,
    67,   127,   184,   212,   213,   223,   154,   155
};

static const short yypact[] = {   320,
-32768,-32768,-32768,    20,-32768,   405,   405,    16,   405,   405,
    20,    16,   -15,    25,-32768,    20,    -3,    34,    42,    57,
    68,    77,    86,   101,   102,    16,-32768,-32768,   469,    -8,
   249,-32768,    20,    20,   405,    20,-32768,-32768,    73,    79,
   405,    89,   125,    49,    76,   191,   124,    82,   106,    96,
    79,   150,   141,-32768,     7,    94,   136,   144,   405,   405,
   405,   405,   405,   405,   405,   139,    12,   119,   405,    16,
-32768,   148,   405,   405,   405,    20,    28,   165,   137,   104,
    79,    20,    20,    20,-32768,-32768,   156,   163,   405,   405,
   116,    16,   405,-32768,   405,-32768,    20,-32768,    16,-32768,
    62,-32768,   150,-32768,     8,    13,    20,-32768,-32768,   405,
   182,   186,   144,-32768,-32768,   245,   254,   263,   314,   318,
   398,   403,   405,   405,   173,-32768,-32768,   159,   177,   405,
   249,   249,    58,    79,    20,    20,   122,-32768,    20,    79,
   -26,   164,    20,    20,-32768,   249,-32768,-32768,   196,   226,
    10,    16,    46,-32768,    16,    16,-32768,-32768,    62,-32768,
    16,-32768,    20,-32768,-32768,   173,-32768,   -26,    33,   249,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   462,   249,    16,    21,-32768,-32768,   467,-32768,    79,-32768,
    79,   405,   140,-32768,   -12,    79,-32768,-32768,-32768,    20,
    16,-32768,    16,    16,-32768,   167,    65,-32768,-32768,-32768,
   146,   170,   188,   405,    20,   405,-32768,   249,   187,-32768,
    79,   198,   171,-32768,   158,   193,-32768,    30,-32768,    16,
   249,-32768,-32768,    52,    16,-32768,    16,   204,    30,    20,
-32768,    30,     9,    84,    79,-32768,   405,   197,-32768,    20,
   113,   199,   200,    28,    30,    30,   347,-32768,    79,-32768,
-32768,-32768,-32768,-32768,   225,   234,-32768
};

static const short yypgoto[] = {-32768,
-32768,   131,-32768,-32768,   -46,-32768,    90,-32768,-32768,-32768,
-32768,    27,-32768,    -4,    39,-32768,-32768,-32768,-32768,   -22,
    -6,   155,  -101,    44,-32768,  -167,   212,-32768,   169,     0,
   -63,-32768,    99,    18,-32768,    47,   115,-32768
};


#define	YYLAST		549


static const short yytable[] = {    39,
   208,    48,    44,    47,   167,   104,    39,    52,    49,    -3,
    78,    39,    53,   107,     1,     1,     3,     3,     1,    69,
     3,    66,     1,    32,     3,   163,  -133,    87,    39,    39,
   220,    39,     1,    32,     3,     1,   156,     3,   161,   214,
    57,    87,    40,    33,   192,   135,    70,    34,    35,    51,
   164,  -133,    54,    33,    55,   165,   162,   242,    35,   247,
    87,   142,   125,    87,   200,   129,    92,   167,   128,    59,
    36,    39,   124,   201,    81,   209,    69,    39,    39,    39,
    36,    87,   215,   216,    60,   148,    82,    47,   145,   264,
   255,    58,    39,   256,   153,    61,    83,   157,    37,    38,
    84,   166,    39,    70,    62,    72,    89,   158,    37,    38,
   -68,    72,   188,    63,   134,    73,    74,    75,    76,   -42,
   140,   141,   -42,    75,    76,    97,   215,   216,    64,    65,
    39,    39,    87,   139,    39,   151,    90,    93,    39,    39,
   206,    92,    72,    95,   105,   168,   108,   199,    96,    72,
   153,   125,    73,    74,    75,    76,   125,    72,    39,    73,
    74,    75,    76,   109,   166,    98,   123,    73,    74,    75,
    76,    98,    72,   110,   189,   130,   136,   191,   211,   138,
    99,   195,   196,   143,   147,   171,    99,   100,   101,   172,
   190,   102,   144,   100,   101,    39,   222,   102,   225,   226,
   183,   185,   111,   112,    69,   230,   194,   228,   219,   227,
    39,    31,   229,   238,   235,   237,    72,   252,    46,   239,
   240,    50,   250,    39,   266,   211,    73,    74,    75,    76,
   248,    94,   222,   267,    39,    39,   197,    39,   221,   258,
    68,   260,   261,   173,    72,    39,    80,   246,   205,    72,
    39,    39,    88,    55,    73,    74,    75,    76,   232,    73,
    74,    75,    76,   169,   207,   251,   245,   198,   253,   202,
   116,   117,   118,   119,   120,   121,   122,   245,     0,    72,
   254,   262,   263,   249,   131,   132,   133,   174,   259,    73,
    74,    75,    76,   245,   245,     0,   175,   186,    72,     0,
     0,   146,    72,     0,   149,   176,   150,    72,    73,    74,
    75,    76,    73,    74,    75,    76,    72,    73,    74,    75,
    76,   170,     1,     2,     3,     0,    73,    74,    75,    76,
     0,     0,     0,     0,   181,   182,     4,     0,     0,     5,
     0,   187,     0,     6,     7,     8,     0,     9,    10,     0,
     0,     0,    11,    12,     0,     0,   177,     0,     0,    13,
   178,     0,     0,    14,     0,     0,     0,    72,     0,    15,
     0,    72,    16,     0,     0,    17,    18,    73,    74,    75,
    76,    73,    74,    75,    76,     0,     0,     0,     0,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    72,     0,     0,   218,     0,     0,     0,     1,     2,     3,
    73,    74,    75,    76,     0,     0,     0,   192,     0,     0,
     0,     4,     0,     0,     5,   231,     0,   234,     6,     7,
     8,     0,     9,    41,     0,     0,     0,    11,     0,     0,
   179,     0,     0,     0,    13,   180,     0,     0,    14,     0,
     0,    72,     0,     0,    15,     0,    72,    16,   257,     0,
    17,    73,    74,    75,    76,     0,    73,    74,    75,    76,
     0,     1,     2,     3,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,     4,     0,     0,     5,     0,
     0,     0,     6,     7,     8,     0,     9,    41,     0,     0,
     0,    11,     0,     0,   210,     0,     0,     0,    13,   217,
     0,     0,    14,     0,     0,    72,     0,     0,    15,     0,
    72,    16,     0,     0,    17,    73,    74,    75,    76,     0,
    73,    74,    75,    76,     0,     0,     0,     0,    19,     0,
    21,    22,    23,    24,    25,    26,    27,    28,    29
};

static const short yycheck[] = {     4,
   168,     8,     7,     8,   106,    52,    11,    12,     9,     0,
    33,    16,    28,     7,     3,     3,     5,     5,     3,    28,
     5,    26,     3,     4,     5,    18,    18,    54,    33,    34,
    43,    36,     3,     4,     5,     3,   100,     5,   102,    19,
    44,    54,     4,    24,    71,    18,    55,    28,    29,    11,
    43,    43,    28,    24,    16,    43,   103,    28,    29,     8,
    54,    84,    67,    54,    19,    70,    18,   169,    69,    28,
    51,    76,    61,    28,    36,    43,    28,    82,    83,    84,
    51,    54,    62,    63,    28,    92,    14,    92,    89,   257,
     7,    58,    97,    10,    99,    28,    24,    36,    79,    80,
    28,   106,   107,    55,    28,    54,    18,    46,    79,    80,
    62,    54,   135,    28,    76,    64,    65,    66,    67,     7,
    82,    83,    10,    66,    67,    30,    62,    63,    28,    28,
   135,   136,    54,    30,   139,    97,    12,    62,   143,   144,
   163,    18,    54,    62,     4,   107,    53,   152,    43,    54,
   155,   156,    64,    65,    66,    67,   161,    54,   163,    64,
    65,    66,    67,    28,   169,    22,    28,    64,    65,    66,
    67,    22,    54,    30,   136,    28,    12,   139,   183,    43,
    37,   143,   144,    28,    69,     4,    37,    44,    45,     4,
    69,    48,    30,    44,    45,   200,   201,    48,   203,   204,
    28,    43,    59,    60,    28,    18,    43,    62,    69,    43,
   215,     0,    43,    43,    28,    18,    54,   240,     7,    62,
    28,    10,    19,   228,     0,   230,    64,    65,    66,    67,
   235,    41,   237,     0,   239,   240,    41,   242,   200,    43,
    29,    43,    43,   113,    54,   250,    35,   230,   159,    54,
   255,   256,    41,   215,    64,    65,    66,    67,   215,    64,
    65,    66,    67,   109,   166,   239,   228,    42,   242,   155,
    59,    60,    61,    62,    63,    64,    65,   239,    -1,    54,
   242,   255,   256,   237,    73,    74,    75,    43,   250,    64,
    65,    66,    67,   255,   256,    -1,    43,   129,    54,    -1,
    -1,    90,    54,    -1,    93,    43,    95,    54,    64,    65,
    66,    67,    64,    65,    66,    67,    54,    64,    65,    66,
    67,   110,     3,     4,     5,    -1,    64,    65,    66,    67,
    -1,    -1,    -1,    -1,   123,   124,    17,    -1,    -1,    20,
    -1,   130,    -1,    24,    25,    26,    -1,    28,    29,    -1,
    -1,    -1,    33,    34,    -1,    -1,    43,    -1,    -1,    40,
    43,    -1,    -1,    44,    -1,    -1,    -1,    54,    -1,    50,
    -1,    54,    53,    -1,    -1,    56,    57,    64,    65,    66,
    67,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    70,
    71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
    54,    -1,    -1,   192,    -1,    -1,    -1,     3,     4,     5,
    64,    65,    66,    67,    -1,    -1,    -1,    71,    -1,    -1,
    -1,    17,    -1,    -1,    20,   214,    -1,   216,    24,    25,
    26,    -1,    28,    29,    -1,    -1,    -1,    33,    -1,    -1,
    43,    -1,    -1,    -1,    40,    43,    -1,    -1,    44,    -1,
    -1,    54,    -1,    -1,    50,    -1,    54,    53,   247,    -1,
    56,    64,    65,    66,    67,    -1,    64,    65,    66,    67,
    -1,     3,     4,     5,    70,    71,    72,    73,    74,    75,
    76,    77,    78,    79,    80,    17,    -1,    -1,    20,    -1,
    -1,    -1,    24,    25,    26,    -1,    28,    29,    -1,    -1,
    -1,    33,    -1,    -1,    43,    -1,    -1,    -1,    40,    43,
    -1,    -1,    44,    -1,    -1,    54,    -1,    -1,    50,    -1,
    54,    53,    -1,    -1,    56,    64,    65,    66,    67,    -1,
    64,    65,    66,    67,    -1,    -1,    -1,    -1,    70,    -1,
    72,    73,    74,    75,    76,    77,    78,    79,    80
};
#define YYPURE 1

/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/lib/bison.simple"
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "/usr/lib/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 171 "stratego.grm"
{parse_tree = ATmake("Specification([<list>])", yyvsp[0].list);;
    break;}
case 2:
#line 172 "stratego.grm"
{parse_tree = (ATerm)yyvsp[0].list;
    break;}
case 3:
#line 173 "stratego.grm"
{parse_tree = App2("App", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 4:
#line 174 "stratego.grm"
{parse_tree = App1("Strategy",yyvsp[0].term);;
    break;}
case 5:
#line 177 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 6:
#line 178 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 7:
#line 179 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 8:
#line 182 "stratego.grm"
{yyval.term = App1("Dump", yyvsp[0].term);;
    break;}
case 9:
#line 183 "stratego.grm"
{yyval.term = App1("Load", yyvsp[0].term);;
    break;}
case 10:
#line 184 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 11:
#line 185 "stratego.grm"
{yyval.term = App1("Eval", yyvsp[0].term);;
    break;}
case 12:
#line 188 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 13:
#line 189 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 14:
#line 190 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 15:
#line 193 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 16:
#line 194 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 17:
#line 197 "stratego.grm"
{yyval.term = App1("Imports", (ATerm) yyvsp[0].list);;
    break;}
case 18:
#line 198 "stratego.grm"
{yyval.term = App1("Rules", (ATerm) yyvsp[0].list);;
    break;}
case 19:
#line 199 "stratego.grm"
{yyval.term = App1("Strategies", (ATerm) yyvsp[0].list);;
    break;}
case 20:
#line 200 "stratego.grm"
{yyval.term = App1("Signature", (ATerm) yyvsp[0].list);;
    break;}
case 21:
#line 201 "stratego.grm"
{yyval.term = App1("Overlays", (ATerm) yyvsp[0].list);;
    break;}
case 22:
#line 204 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 23:
#line 205 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 24:
#line 206 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 25:
#line 209 "stratego.grm"
{yyval.term = App1("Sorts", (ATerm) yyvsp[0].list);;
    break;}
case 26:
#line 210 "stratego.grm"
{yyval.term = App1("Operations", (ATerm) yyvsp[0].list);;
    break;}
case 27:
#line 213 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 28:
#line 214 "stratego.grm"
{yyval.list = ATinsert(yyvsp[-2].list, App2("Sort", yyvsp[-1].term, yyvsp[0].term));;
    break;}
case 29:
#line 216 "stratego.grm"
{yyval.term = ATmake("Nokind");;
    break;}
case 30:
#line 217 "stratego.grm"
{yyval.term = App1("Kinds", (ATerm) yyvsp[-1].list);;
    break;}
case 31:
#line 220 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 32:
#line 221 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 33:
#line 224 "stratego.grm"
{yyval.term = ATmake("Type");;
    break;}
case 34:
#line 225 "stratego.grm"
{yyval.term = ATmake("TypeList");;
    break;}
case 35:
#line 228 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 36:
#line 229 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 37:
#line 232 "stratego.grm"
{yyval.term = App2("OpDecl", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 38:
#line 235 "stratego.grm"
{yyval.term = App2("FunType", (ATerm) yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 39:
#line 236 "stratego.grm"
{yyval.term = App1("ConstType", yyvsp[0].term);;
    break;}
case 40:
#line 237 "stratego.grm"
{yyval.term = yyvsp[-1].term;;
    break;}
case 41:
#line 241 "stratego.grm"
{yyval.list = ATappend(yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 42:
#line 242 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 43:
#line 245 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 44:
#line 246 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 45:
#line 251 "stratego.grm"
{if(ATisEmpty(yyvsp[0].list)) 
					   yyval.term = App1("Var", yyvsp[-1].term);
					 else
					   yyval.term = App3("Con", 
						      App1("Var", yyvsp[-1].term), ATgetFirst(yyvsp[0].list), 
						      ATgetFirst(ATgetNext(yyvsp[0].list)));;
    break;}
case 46:
#line 258 "stratego.grm"
{yyval.term = ATmake("Wld");;
    break;}
case 47:
#line 260 "stratego.grm"
{yyval.term = App1("BuildDefault", yyvsp[0].term);;
    break;}
case 48:
#line 262 "stratego.grm"
{yyval.term = App1("Int", (ATerm) ATmakeInt(yyvsp[0].num));;
    break;}
case 49:
#line 263 "stratego.grm"
{yyval.term = App1("Real", (ATerm) ATmakeReal(yyvsp[0].real));;
    break;}
case 50:
#line 264 "stratego.grm"
{yyval.term = App1("Str", yyvsp[0].term);;
    break;}
case 51:
#line 265 "stratego.grm"
{yyval.term = App2("Op", yyvsp[-1].term, (ATerm) yyvsp[0].list);;
    break;}
case 52:
#line 266 "stratego.grm"
{yyval.term = App2("As", App1("Var", yyvsp[-2].term), yyvsp[0].term);;
    break;}
case 53:
#line 267 "stratego.grm"
{yyval.term = App2("App", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 54:
#line 268 "stratego.grm"
{yyval.term = list_to_consnil_op_tl(yyvsp[-2].list, yyvsp[-1].term);;
    break;}
case 55:
#line 269 "stratego.grm"
{yyval.term = list_to_tconstnil_op(yyvsp[-1].list);;
    break;}
case 56:
#line 271 "stratego.grm"
{yyval.term = App2("Explode", yyvsp[-4].term, yyvsp[-1].term);
    break;}
case 57:
#line 274 "stratego.grm"
{yyval.term = ATmake("Op(\"Nil\",[])");;
    break;}
case 58:
#line 275 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 59:
#line 278 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 60:
#line 280 "stratego.grm"
{yyval.list = ATmakeList2(yyvsp[-3].term, App2("Call", yyvsp[0].term, (ATerm) ATmakeList0()));;
    break;}
case 61:
#line 283 "stratego.grm"
{yyval.term = ATmake("SVar(\"oncetd\")"); ;
    break;}
case 62:
#line 284 "stratego.grm"
{yyval.term = App1("SVar", yyvsp[-1].term);;
    break;}
case 63:
#line 287 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 64:
#line 288 "stratego.grm"
{yyval.list = yyvsp[-1].list;;
    break;}
case 65:
#line 291 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 66:
#line 292 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 67:
#line 293 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 68:
#line 296 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 69:
#line 297 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 70:
#line 298 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 71:
#line 303 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 72:
#line 304 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 73:
#line 308 "stratego.grm"
{yyval.term = App3("RDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, (ATerm) yyvsp[0].term);;
    break;}
case 74:
#line 310 "stratego.grm"
{yyval.term = App3("RDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, (ATerm) yyvsp[0].term);;
    break;}
case 75:
#line 313 "stratego.grm"
{yyval.term = App3("Rule", yyvsp[-3].term, yyvsp[-1].term, yyvsp[0].term);	;
    break;}
case 76:
#line 317 "stratego.grm"
{yyval.term = App3("StratRule", yyvsp[-3].term, yyvsp[-1].term, yyvsp[0].term);	;
    break;}
case 77:
#line 320 "stratego.grm"
{yyval.term = ATmake("Id");;
    break;}
case 78:
#line 321 "stratego.grm"
{yyval.term = App1("Where", yyvsp[0].term);;
    break;}
case 79:
#line 327 "stratego.grm"
{yyval.term = ATmake("Id");;
    break;}
case 80:
#line 328 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 81:
#line 331 "stratego.grm"
{yyval.term = App2("Call", App1("SVar", yyvsp[-1].term), (ATerm) yyvsp[0].list);;
    break;}
case 82:
#line 334 "stratego.grm"
{yyval.term = App2("Call", App1("SVar", App2("Mod", yyvsp[-3].term, yyvsp[-1].term)), 
							   (ATerm)yyvsp[0].list);;
    break;}
case 83:
#line 338 "stratego.grm"
{yyval.term = App2("ExplodeCong", yyvsp[-4].term, yyvsp[-1].term);
    break;}
case 84:
#line 341 "stratego.grm"
{yyval.term = App1("Match", yyvsp[0].term);;
    break;}
case 85:
#line 342 "stratego.grm"
{yyval.term = App1("Build", yyvsp[0].term);;
    break;}
case 86:
#line 344 "stratego.grm"
{yyval.term = App2("Prim", yyvsp[-1].term, (ATerm) ATempty);;
    break;}
case 87:
#line 345 "stratego.grm"
{yyval.term = App2("Prim", yyvsp[-3].term, (ATerm) yyvsp[-1].list);;
    break;}
case 88:
#line 347 "stratego.grm"
{yyval.term = App1("LRule", yyvsp[-1].term);;
    break;}
case 89:
#line 349 "stratego.grm"
{yyval.term = App2("BA", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 90:
#line 350 "stratego.grm"
{yyval.term = App2("AM", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 91:
#line 352 "stratego.grm"
{yyval.term = ATmake("Fail");;
    break;}
case 92:
#line 353 "stratego.grm"
{yyval.term = ATmake("Id");;
    break;}
case 93:
#line 354 "stratego.grm"
{yyval.term = App2("Path", (ATerm) ATmakeInt(yyvsp[-1].num), yyvsp[0].term); ;
    break;}
case 94:
#line 356 "stratego.grm"
{yyval.term = App1("DynamicRules", (ATerm) yyvsp[-1].list);;
    break;}
case 95:
#line 357 "stratego.grm"
{yyval.term = App1("OverrideDynamicRules", (ATerm) yyvsp[-1].list);;
    break;}
case 96:
#line 359 "stratego.grm"
{yyval.term = App1("Not", yyvsp[-1].term);;
    break;}
case 97:
#line 360 "stratego.grm"
{yyval.term = App1("Where", yyvsp[-1].term);;
    break;}
case 98:
#line 361 "stratego.grm"
{yyval.term = App1("Test", yyvsp[-1].term);;
    break;}
case 99:
#line 364 "stratego.grm"
{yyval.term = App2("Scope", (ATerm) yyvsp[-3].list, yyvsp[-1].term);;
    break;}
case 100:
#line 366 "stratego.grm"
{yyval.term = App2("DynRuleScope", (ATerm) yyvsp[-3].list, yyvsp[-1].term);;
    break;}
case 101:
#line 367 "stratego.grm"
{yyval.term = App1("ScopeDefault", yyvsp[-1].term);;
    break;}
case 102:
#line 369 "stratego.grm"
{yyval.term = App2("Seq", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 103:
#line 370 "stratego.grm"
{yyval.term = App2("Choice", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 104:
#line 371 "stratego.grm"
{yyval.term = App2("LChoice", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 105:
#line 372 "stratego.grm"
{yyval.term = App2("Rec", yyvsp[-3].term, yyvsp[-1].term);;
    break;}
case 106:
#line 373 "stratego.grm"
{yyval.term = App1("Some", yyvsp[-1].term);;
    break;}
case 107:
#line 374 "stratego.grm"
{yyval.term = App1("One", yyvsp[-1].term);;
    break;}
case 108:
#line 375 "stratego.grm"
{yyval.term = App1("All", yyvsp[-1].term);;
    break;}
case 109:
#line 376 "stratego.grm"
{yyval.term = App1("Thread", yyvsp[-1].term);;
    break;}
case 110:
#line 377 "stratego.grm"
{yyval.term = tuple_cong(yyvsp[-1].list);;
    break;}
case 111:
#line 379 "stratego.grm"
{yyval.term = list_cong(yyvsp[-2].list, yyvsp[-1].term);;
    break;}
case 112:
#line 380 "stratego.grm"
{yyval.term = App1("Match", App1("Str", yyvsp[0].term));;
    break;}
case 113:
#line 381 "stratego.grm"
{yyval.term = App1("Match", 
					      App1("Int", (ATerm) ATmakeInt(yyvsp[0].num)));;
    break;}
case 114:
#line 383 "stratego.grm"
{yyval.term = App1("Match", 
					      App1("Real", (ATerm) ATmakeReal(yyvsp[0].real)));;
    break;}
case 115:
#line 385 "stratego.grm"
{yyval.term = App2("Let", (ATerm) yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 116:
#line 389 "stratego.grm"
{yyval.term = ATmake("Call(SVar(\"Nil\"),[])");;
    break;}
case 117:
#line 390 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 118:
#line 394 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 119:
#line 395 "stratego.grm"
{yyval.list = yyvsp[-1].list;;
    break;}
case 120:
#line 399 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 121:
#line 400 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 122:
#line 401 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 123:
#line 407 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 124:
#line 408 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 125:
#line 409 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 126:
#line 413 "stratego.grm"
{yyval.term = App3("SDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 127:
#line 417 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 128:
#line 418 "stratego.grm"
{yyval.list = yyvsp[-1].list;;
    break;}
case 129:
#line 421 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 130:
#line 422 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 131:
#line 423 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 132:
#line 426 "stratego.grm"
{yyval.term = App1("DefaultVarDec", yyvsp[0].term);;
    break;}
case 133:
#line 427 "stratego.grm"
{yyval.term = App2("VarDec", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 134:
#line 429 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 135:
#line 430 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 136:
#line 431 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 137:
#line 434 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 138:
#line 435 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-1].term);;
    break;}
case 139:
#line 439 "stratego.grm"
{yyval.term = App3("Overlay", yyvsp[-5].term, (ATerm) yyvsp[-3].list, yyvsp[0].term);;
    break;}
case 140:
#line 440 "stratego.grm"
{yyval.term = App3("Overlay", yyvsp[-2].term, (ATerm) ATmakeList0(), yyvsp[0].term);;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/lib/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 445 "stratego.grm"
