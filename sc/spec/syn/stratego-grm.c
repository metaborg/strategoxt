
/*  A Bison parser, made from stratego-grm.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	LCID	257
#define	STRINGTOK	258
#define	UCID	259
#define	ID	260
#define	LID	261
#define	ARROW	262
#define	LONGARROW	263
#define	ASSIGN	264
#define	ASTERISK	265
#define	BACKARROW	266
#define	BAR	267
#define	BUILD	268
#define	AS	269
#define	ANNBUILD	270
#define	ANNRM	271
#define	BUILDe	272
#define	COMMA	273
#define	EQ	274
#define	FAIL	275
#define	GG	276
#define	IMPORTS	277
#define	KIDS	278
#define	LBRACK	279
#define	LCURLY	280
#define	LCURLYBAR	281
#define	LL	282
#define	LPAREN	283
#define	LT	284
#define	GT	285
#define	ANNMATCH	286
#define	MATCH	287
#define	MATCHe	288
#define	MODULE	289
#define	NEW	290
#define	CONSTRUCTORS	291
#define	OVERLAYS	292
#define	PARSEPROG	293
#define	PARSEQUERY	294
#define	PRIM	295
#define	RCURLY	296
#define	BARRCURLY	297
#define	RPAREN	298
#define	RULES	299
#define	SIGNATURE	300
#define	SORTS	301
#define	STARSTAR	302
#define	STRATEGIES	303
#define	STR_GT	304
#define	SUCC	305
#define	UNDERSCORE	306
#define	DOT	307
#define	BACKSLASH	308
#define	EXPLODE	309
#define	MODIFIER	310
#define	OVERRIDE	311
#define	STRATEGO	312
#define	SCRIPT	313
#define	DUMP	314
#define	LOAD	315
#define	IN	316
#define	COLON	317
#define	DOUBLECOLON	318
#define	PLUS	319
#define	PLUSPLUS	320
#define	LTPLUSPLUS	321
#define	LTPLUS	322
#define	PLUSGT	323
#define	PLUSPLUSGT	324
#define	SEMICOLON	325
#define	DOUBLEARROW	326
#define	LEFTDOUBLEARROW	327
#define	RBRACK	328
#define	NOT	329
#define	WHERE	330
#define	TEST	331
#define	ONE	332
#define	ALL	333
#define	THREAD	334
#define	SOMETOK	335
#define	MU	336
#define	LET	337
#define	BAGOF	338
#define	REAL	339
#define	INT	340

#line 1 "stratego-grm.y"

#include <aterm1.h>
#include <srts/stratego.h>

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


#line 24 "stratego-grm.y"
typedef union{ 
   int    num;
   double real;
   char   *string;
   ATerm  term;
   ATermList list;
} YYSTYPE;
#line 32 "stratego-grm.y"


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



#define	YYFINAL		291
#define	YYFLAG		-32768
#define	YYNTBASE	87

#define YYTRANSLATE(x) ((unsigned)(x) <= 340 ? yytranslate[x] : 127)

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
    77,    78,    79,    80,    81,    82,    83,    84,    85,    86
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     4,     8,    13,    15,    17,    20,    21,    24,    27,
    29,    32,    34,    37,    38,    39,    42,    45,    48,    51,
    54,    57,    59,    62,    63,    66,    69,    70,    74,    75,
    79,    81,    84,    86,    88,    89,    92,    96,   100,   102,
   106,   110,   112,   114,   116,   118,   121,   123,   125,   128,
   130,   132,   134,   137,   141,   146,   150,   155,   159,   165,
   170,   171,   174,   175,   181,   182,   186,   187,   191,   193,
   197,   198,   200,   204,   205,   206,   209,   214,   219,   224,
   229,   230,   233,   236,   241,   247,   250,   253,   258,   265,
   269,   274,   278,   280,   282,   285,   290,   296,   301,   306,
   311,   317,   323,   327,   331,   335,   339,   343,   347,   353,
   357,   361,   366,   372,   377,   382,   387,   392,   396,   401,
   403,   405,   407,   412,   417,   418,   421,   422,   426,   427,
   429,   433,   434,   437,   440,   445,   446,   450,   451,   453,
   457,   459,   463,   464,   466,   470,   471,   474,   481
};

static const short yyrhs[] = {    35,
   101,    90,     0,    58,    59,    88,     0,    30,   115,    31,
   103,     0,   115,     0,    89,     0,    88,    89,     0,     0,
    60,     4,     0,    61,     4,     0,    92,     0,    31,   115,
     0,    92,     0,    90,    92,     0,     0,     0,    91,   101,
     0,    23,    91,     0,    45,   119,     0,    49,   119,     0,
    46,    93,     0,    38,   125,     0,    94,     0,    93,    94,
     0,     0,    47,    95,     0,    37,    97,     0,     0,    95,
   101,    96,     0,     0,    29,   108,    44,     0,     0,     0,
     0,     0,     0,    11,     0,    48,     0,     0,    97,    98,
     0,   101,    63,    99,     0,   100,     8,    99,     0,   103,
     0,    29,    99,    44,     0,   100,    11,    99,     0,    99,
     0,     3,     0,     5,     0,     7,     0,   101,   105,     0,
   102,     0,    52,     0,    52,   103,     0,    86,     0,    85,
     0,     4,     0,   101,   107,     0,   101,    15,   103,     0,
    30,   115,    31,   103,     0,    30,   115,    31,     0,    25,
   108,   104,    74,     0,    29,   108,    44,     0,   103,    55,
    29,   103,    44,     0,   103,    26,   108,    42,     0,     0,
    13,   103,     0,     0,    25,   103,   114,    74,   106,     0,
     0,    29,   101,    44,     0,     0,    29,   108,    44,     0,
   103,     0,   103,    19,   108,     0,     0,   101,     0,   101,
    19,   109,     0,     0,     0,   110,   111,     0,   101,   121,
    63,   112,     0,   101,   121,    64,   113,     0,   103,     8,
   103,   114,     0,   115,     9,   115,   114,     0,     0,    76,
   115,     0,   101,   117,     0,   101,    56,   101,   117,     0,
   115,    55,    29,   115,    44,     0,    34,   103,     0,    18,
   103,     0,    41,    29,     4,    44,     0,    41,    29,     4,
    19,   108,    44,     0,    54,   112,    54,     0,    30,   115,
    31,   103,     0,   115,    72,   103,     0,    21,     0,    51,
     0,    86,   115,     0,    45,    29,   110,    44,     0,    57,
    45,    29,   110,    44,     0,    75,    29,   115,    44,     0,
    76,    29,   115,    44,     0,    77,    29,   115,    44,     0,
    26,   109,    63,   115,    42,     0,    27,   109,    63,   115,
    43,     0,    26,   115,    42,     0,   115,    71,   115,     0,
   115,    65,   115,     0,   115,    66,   115,     0,   115,    68,
   115,     0,   115,    67,   115,     0,   115,    30,   115,    65,
   115,     0,   115,    69,   115,     0,   115,    70,   115,     0,
    84,    29,   115,    44,     0,    82,   101,    29,   115,    44,
     0,    81,    29,   115,    44,     0,    78,    29,   115,    44,
     0,    79,    29,   115,    44,     0,    80,    29,   115,    44,
     0,    29,   118,    44,     0,    25,   118,   116,    74,     0,
     4,     0,    86,     0,    85,     0,    83,   119,    62,   115,
     0,   115,    26,   115,    42,     0,     0,    13,   115,     0,
     0,    29,   118,    44,     0,     0,   115,     0,   115,    19,
   118,     0,     0,   119,   120,     0,   119,   111,     0,   101,
   121,    20,   115,     0,     0,    29,   122,    44,     0,     0,
   123,     0,   123,    19,   122,     0,   101,     0,   101,    63,
    99,     0,     0,   101,     0,   101,    19,   124,     0,     0,
   126,   125,     0,   101,    29,   124,    44,    20,   103,     0,
   101,    20,   103,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   172,   173,   174,   175,   178,   179,   180,   183,   184,   185,
   186,   189,   190,   191,   194,   195,   198,   199,   200,   201,
   202,   205,   206,   207,   210,   211,   214,   215,   218,   219,
   222,   223,   226,   227,   230,   231,   234,   237,   238,   239,
   243,   244,   247,   248,   253,   258,   265,   267,   269,   271,
   272,   273,   274,   275,   276,   277,   278,   281,   287,   289,
   292,   293,   296,   297,   301,   302,   306,   307,   310,   311,
   312,   315,   316,   317,   322,   323,   327,   328,   332,   335,
   339,   340,   346,   348,   352,   356,   357,   359,   360,   362,
   364,   365,   367,   368,   369,   371,   372,   374,   375,   376,
   378,   380,   382,   384,   386,   387,   389,   390,   392,   395,
   396,   398,   400,   401,   402,   403,   404,   408,   413,   415,
   416,   418,   420,   423,   430,   431,   435,   436,   440,   441,
   442,   448,   449,   450,   454,   458,   459,   462,   463,   464,
   467,   468,   471,   472,   473,   476,   477,   480,   482
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","LCID","STRINGTOK",
"UCID","ID","LID","ARROW","LONGARROW","ASSIGN","ASTERISK","BACKARROW","BAR",
"BUILD","AS","ANNBUILD","ANNRM","BUILDe","COMMA","EQ","FAIL","GG","IMPORTS",
"KIDS","LBRACK","LCURLY","LCURLYBAR","LL","LPAREN","LT","GT","ANNMATCH","MATCH",
"MATCHe","MODULE","NEW","CONSTRUCTORS","OVERLAYS","PARSEPROG","PARSEQUERY","PRIM",
"RCURLY","BARRCURLY","RPAREN","RULES","SIGNATURE","SORTS","STARSTAR","STRATEGIES",
"STR_GT","SUCC","UNDERSCORE","DOT","BACKSLASH","EXPLODE","MODIFIER","OVERRIDE",
"STRATEGO","SCRIPT","DUMP","LOAD","IN","COLON","DOUBLECOLON","PLUS","PLUSPLUS",
"LTPLUSPLUS","LTPLUS","PLUSGT","PLUSPLUSGT","SEMICOLON","DOUBLEARROW","LEFTDOUBLEARROW",
"RBRACK","NOT","WHERE","TEST","ONE","ALL","THREAD","SOMETOK","MU","LET","BAGOF",
"REAL","INT","start","commands","command","decls","mods","decl","sdecls","sdecl",
"idlist","optkind","opdecls","opdecl","type","typelist","id","lid","term","tail",
"optcont","trav","opttermlist","termlist","tvarlist","rules","rule_def","rule",
"stratrule","optcond","strategy","strategytail","optstrategylist","strategylist",
"strategies","strategy_def","optvarlist","varlist","typedid","purevarlist","overlays",
"overlay", NULL
};
#endif

static const short yyr1[] = {     0,
    87,    87,    87,    87,    88,    88,    88,    89,    89,    89,
    89,    90,    90,    90,    91,    91,    92,    92,    92,    92,
    92,    93,    93,    93,    94,    94,    95,    95,    96,    96,
    -1,    -1,    -1,    -1,    97,    97,    98,    99,    99,    99,
   100,   100,   101,   101,   102,   103,   103,   103,   103,   103,
   103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
   104,   104,   105,   105,   106,   106,   107,   107,   108,   108,
   108,   109,   109,   109,   110,   110,   111,   111,   112,   113,
   114,   114,   115,   115,   115,   115,   115,   115,   115,   115,
   115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
   115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
   115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
   115,   115,   115,   115,   116,   116,   117,   117,   118,   118,
   118,   119,   119,   119,   120,   121,   121,   122,   122,   122,
   123,   123,   124,   124,   124,   125,   125,   126,   126
};

static const short yyr2[] = {     0,
     3,     3,     4,     1,     1,     2,     0,     2,     2,     1,
     2,     1,     2,     0,     0,     2,     2,     2,     2,     2,
     2,     1,     2,     0,     2,     2,     0,     3,     0,     3,
     1,     2,     1,     1,     0,     2,     3,     3,     1,     3,
     3,     1,     1,     1,     1,     2,     1,     1,     2,     1,
     1,     1,     2,     3,     4,     3,     4,     3,     5,     4,
     0,     2,     0,     5,     0,     3,     0,     3,     1,     3,
     0,     1,     3,     0,     0,     2,     4,     4,     4,     4,
     0,     2,     2,     4,     5,     2,     2,     4,     6,     3,
     4,     3,     1,     1,     2,     4,     5,     4,     4,     4,
     5,     5,     3,     3,     3,     3,     3,     3,     5,     3,
     3,     4,     5,     4,     4,     4,     4,     3,     4,     1,
     1,     1,     4,     4,     0,     2,     0,     3,     0,     1,
     3,     0,     2,     2,     4,     0,     3,     0,     1,     3,
     1,     3,     0,     1,     3,     0,     2,     6,     3
};

static const short yydefact[] = {     0,
    43,   120,    44,     0,    93,   129,    74,    74,   129,     0,
     0,     0,     0,     0,    94,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   132,     0,   122,   121,
   127,     4,    52,    45,    71,    71,     0,    48,    51,    50,
    63,    47,    87,     0,   130,   125,   127,     0,     0,    72,
     0,     0,     0,    86,    14,     0,    75,     0,     0,     0,
     7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    95,   129,     0,    83,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    69,    61,     0,     0,
    49,     0,     0,    71,    46,    53,    71,     0,     0,   129,
     0,     0,    74,     0,   103,     0,   118,     0,    15,   146,
   132,    24,   132,     1,    12,     0,     0,     0,    90,    75,
     0,     0,     0,     2,     5,    10,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   136,   134,   133,     0,     0,
   127,     0,     0,     0,   105,   106,   108,   107,   110,   111,
   104,    92,    71,     0,     0,    58,    56,    54,    81,     0,
     0,     0,     0,   131,   126,   119,    73,     0,     0,    91,
    17,     0,    21,   146,    18,    35,    27,    20,    22,    19,
    13,    71,    88,    96,   136,    76,    81,     0,    11,     8,
     9,     6,    98,    99,   100,   115,   116,   117,   114,     0,
   123,   138,     0,   112,   128,    84,   124,     0,     0,    70,
    62,    57,    55,     0,     0,    68,    60,     0,    91,   101,
   102,    16,     0,   143,   147,    26,    25,    23,     0,     0,
    79,    97,   113,   141,     0,   139,     0,     0,     0,   109,
    85,    82,    65,    59,   149,   144,     0,    36,     0,    29,
    89,     0,   137,   138,   135,    77,    78,     0,     0,    64,
   143,     0,     0,    71,    28,    71,    42,     0,    39,   140,
     0,     0,   145,     0,    37,     0,    42,    39,     0,     0,
    81,    66,   148,    30,    40,    38,    41,    80,     0,     0,
     0
};

static const short yydefgoto[] = {   289,
   124,   125,   114,   171,   126,   178,   179,   227,   265,   226,
   248,   267,   268,    31,    42,    87,   155,    95,   260,    96,
    89,    48,   117,   137,    59,   257,   215,    45,   102,    75,
    46,    70,   138,   203,   235,   236,   247,   173,   174
};

static const short yypact[] = {   362,
-32768,-32768,-32768,    50,-32768,   448,   448,   119,   448,   448,
    50,   119,    12,    19,-32768,    50,     4,    38,    27,    74,
    86,    97,   101,   108,   109,   119,-32768,   110,-32768,   532,
    22,   987,-32768,-32768,    50,    50,   448,    50,-32768,-32768,
    80,-32768,     3,   448,   160,   130,    65,    83,   525,   135,
    94,   116,   572,     3,   102,   157,-32768,    -3,   111,   134,
   248,   448,   448,   448,   448,   448,   448,   448,   143,    10,
   448,   -10,   448,   119,-32768,   448,   448,   144,   448,   448,
   448,   448,   448,   448,   448,    50,    -8,   151,   131,   593,
     3,    50,    50,    50,-32768,-32768,    50,   145,   602,   448,
   448,   103,   119,   448,-32768,   448,-32768,    50,-32768,   119,
-32768,   -12,-32768,   102,-32768,     0,    21,    50,-32768,-32768,
   448,   177,   178,   248,-32768,-32768,   649,   657,   704,   712,
   759,   767,   814,   448,   448,   156,-32768,-32768,   822,   148,
   158,   869,  1005,   448,   987,   987,   987,   987,   987,   987,
    61,     3,    50,    50,   120,-32768,    50,     3,     7,   149,
   153,    50,    50,-32768,   987,-32768,-32768,   877,   924,    14,
   119,    78,-32768,   119,   119,-32768,-32768,   -12,-32768,   119,
-32768,    50,-32768,-32768,   156,-32768,     7,    33,   987,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   932,
   987,   119,    47,-32768,-32768,-32768,-32768,   448,   979,-32768,
     3,-32768,     3,   448,   122,-32768,-32768,    -5,     3,-32768,
-32768,-32768,    50,   119,-32768,   119,   119,-32768,   155,   -36,
-32768,-32768,-32768,   137,   165,   191,   448,    50,   448,   987,
-32768,   987,   168,-32768,     3,   192,   169,-32768,   154,   183,
-32768,    56,-32768,   119,   987,-32768,-32768,   136,   119,-32768,
   119,   194,    56,    50,-32768,    56,    73,    35,     3,-32768,
   448,   172,-32768,    50,   112,   174,   180,    -8,    56,    56,
   441,-32768,     3,-32768,-32768,-32768,-32768,-32768,   221,   233,
-32768
};

static const short yypgoto[] = {-32768,
-32768,   113,-32768,-32768,   -38,-32768,    57,-32768,-32768,-32768,
-32768,  -111,-32768,    -4,-32768,    26,-32768,-32768,-32768,-32768,
   -26,    -7,   121,  -115,    -2,-32768,  -181,   251,-32768,    98,
     1,    18,-32768,    55,   -11,-32768,   -19,    70,-32768
};


#define	YYLAST		1077


static const short yytable[] = {    41,
    51,   186,    47,    50,   118,   231,    41,    55,    88,    52,
   153,    41,     1,    -3,     3,    76,   115,    97,   182,    77,
    97,    69,    97,     1,   176,     3,   238,   239,    97,    43,
    41,    41,    97,    41,   177,     1,    54,     3,   244,    97,
    56,    58,   279,   183,    78,   280,    98,    57,    60,    98,
    73,    98,     1,    33,     3,    62,    34,    98,     1,    33,
     3,    98,    34,    91,   184,   136,   237,   160,    98,   141,
   161,   135,   186,   140,    35,   181,   232,    74,    36,    37,
    35,    41,   214,   103,   266,    37,    76,    41,    41,    41,
    77,  -142,    41,    73,    92,   167,    61,   223,    50,   288,
   164,    38,    63,    41,    93,   172,   224,    38,    94,   238,
   239,   152,   185,    41,    64,    78,  -142,   158,   159,   -42,
    74,     1,   -42,     3,   109,    65,   210,   -72,   175,    66,
   180,    85,    86,   170,    39,    40,    67,    68,    71,   110,
    39,    40,   101,   187,   271,   104,   111,   112,    41,    41,
   113,   275,    41,   103,   277,   229,   106,    41,    41,   107,
   116,    76,   120,   154,   119,    77,   222,   286,   287,   172,
   136,   134,   144,   162,   156,   136,   166,    41,   100,   211,
   190,   191,   213,   185,   202,    76,    73,   218,   219,    77,
    78,   205,   216,   212,   217,   243,   259,   234,   251,   252,
    79,    80,    81,    82,    83,    84,    85,    86,   253,   254,
   261,   264,   262,   274,    78,   282,   263,   284,    41,   246,
   290,   249,   250,   285,    79,    80,    81,    82,    83,    84,
    85,    86,   291,    41,   228,   256,   192,   276,   206,   230,
   188,   273,   270,   225,     0,     0,     0,    41,   245,   234,
    32,     0,     0,     0,   272,     0,   246,    49,    41,    41,
    53,    41,     0,    58,     0,     0,     0,     0,     0,    41,
   109,     0,     0,     0,    41,    41,     0,   269,   121,     0,
    72,     0,     0,     0,     0,   110,     0,    90,   269,     0,
     0,   278,   111,   112,    99,     0,   113,     0,     0,   283,
     0,     0,     0,     0,   269,   269,     0,   122,   123,     0,
     0,     0,   127,   128,   129,   130,   131,   132,   133,     0,
     0,   139,     0,     0,     0,     0,   142,   143,     0,   145,
   146,   147,   148,   149,   150,   151,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   165,     0,     0,   168,     0,   169,     0,     0,     0,
     0,     0,     0,     0,     1,     2,     3,     0,     0,     0,
     0,   189,     0,     0,     0,     0,     0,     0,     0,     4,
     0,     0,     5,     0,   200,   201,     6,     7,     8,     0,
     9,    10,     0,     0,   209,    11,    12,     0,     0,     0,
     0,     0,    13,     0,     0,     0,    14,     0,     0,     0,
     0,     0,    15,     0,     0,    16,     0,     0,    17,    18,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,     0,     0,
     1,     2,     3,     0,     0,     0,     0,     0,   240,     0,
     0,     0,     0,     0,   242,     4,    76,     0,     5,     0,
    77,     0,     6,     7,     8,     0,     9,    44,     0,     0,
     0,    11,     0,     0,     0,     0,     0,   255,    13,   258,
     0,     0,    14,     0,     0,    78,     0,     0,    15,     0,
     0,    16,     0,     0,    17,    79,    80,    81,    82,    83,
    84,    85,    86,     0,     0,     0,   214,     0,     0,     0,
     0,   281,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,     1,     2,     3,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
    76,     0,     5,     0,    77,     0,     6,     7,     8,     0,
     9,    44,     0,     0,     0,    11,   105,     0,     0,     0,
     0,     0,    13,     0,     0,     0,    14,     0,     0,    78,
     0,     0,    15,     0,     0,    16,     0,     0,    17,    79,
    80,    81,    82,    83,    84,    85,    86,    76,     0,     0,
     0,    77,   108,     0,     0,     0,    19,     0,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    76,     0,
     0,     0,    77,   157,     0,     0,    78,    76,     0,     0,
     0,    77,   163,     0,     0,     0,    79,    80,    81,    82,
    83,    84,    85,    86,     0,     0,     0,    78,     0,     0,
     0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
    82,    83,    84,    85,    86,     0,    79,    80,    81,    82,
    83,    84,    85,    86,    76,     0,     0,     0,    77,     0,
     0,     0,    76,     0,     0,     0,    77,     0,     0,     0,
     0,     0,   193,     0,     0,     0,     0,     0,     0,     0,
   194,     0,     0,    78,     0,     0,     0,     0,     0,     0,
     0,    78,     0,    79,    80,    81,    82,    83,    84,    85,
    86,    79,    80,    81,    82,    83,    84,    85,    86,    76,
     0,     0,     0,    77,     0,     0,     0,    76,     0,     0,
     0,    77,     0,     0,     0,     0,     0,   195,     0,     0,
     0,     0,     0,     0,     0,   196,     0,     0,    78,     0,
     0,     0,     0,     0,     0,     0,    78,     0,    79,    80,
    81,    82,    83,    84,    85,    86,    79,    80,    81,    82,
    83,    84,    85,    86,    76,     0,     0,     0,    77,     0,
     0,     0,    76,     0,     0,     0,    77,     0,     0,     0,
     0,     0,   197,     0,     0,     0,     0,     0,     0,     0,
   198,     0,     0,    78,     0,     0,     0,     0,     0,     0,
     0,    78,     0,    79,    80,    81,    82,    83,    84,    85,
    86,    79,    80,    81,    82,    83,    84,    85,    86,    76,
     0,     0,     0,    77,     0,     0,     0,    76,     0,     0,
     0,    77,     0,     0,     0,     0,     0,   199,     0,     0,
     0,     0,     0,     0,     0,   204,     0,     0,    78,     0,
     0,     0,     0,     0,     0,     0,    78,     0,    79,    80,
    81,    82,    83,    84,    85,    86,    79,    80,    81,    82,
    83,    84,    85,    86,    76,     0,     0,     0,    77,     0,
     0,     0,    76,     0,     0,     0,    77,     0,     0,     0,
   207,     0,     0,     0,     0,     0,     0,     0,   220,     0,
     0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
     0,    78,     0,    79,    80,    81,    82,    83,    84,    85,
    86,    79,    80,    81,    82,    83,    84,    85,    86,    76,
     0,     0,     0,    77,     0,     0,     0,    76,     0,     0,
     0,    77,     0,     0,     0,     0,   221,     0,     0,     0,
     0,     0,     0,     0,     0,   233,     0,     0,    78,     0,
     0,     0,     0,     0,     0,     0,    78,     0,    79,    80,
    81,    82,    83,    84,    85,    86,    79,    80,    81,    82,
    83,    84,    85,    86,    76,     0,     0,     0,    77,     0,
     0,     0,    76,     0,     0,     0,    77,     0,     0,     0,
     0,     0,   241,     0,     0,     0,     0,     0,     0,     0,
    76,     0,     0,    78,    77,     0,     0,     0,     0,     0,
     0,    78,     0,    79,    80,    81,    82,    83,    84,    85,
    86,    79,    80,    81,    82,    83,    84,    85,    86,    78,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   208,
    80,    81,    82,    83,    84,    85,    86
};

static const short yycheck[] = {     4,
     8,   117,     7,     8,     8,   187,    11,    12,    35,     9,
    19,    16,     3,     0,     5,    26,    55,    26,    19,    30,
    26,    26,    26,     3,    37,     5,    63,    64,    26,     4,
    35,    36,    26,    38,    47,     3,    11,     5,    44,    26,
    29,    16,     8,    44,    55,    11,    55,    29,    45,    55,
    29,    55,     3,     4,     5,    29,     7,    55,     3,     4,
     5,    55,     7,    38,    44,    70,    20,    94,    55,    74,
    97,    62,   188,    73,    25,   114,    44,    56,    29,    30,
    25,    86,    76,    19,    29,    30,    26,    92,    93,    94,
    30,    19,    97,    29,    15,   103,    59,    20,   103,   281,
   100,    52,    29,   108,    25,   110,    29,    52,    29,    63,
    64,    86,   117,   118,    29,    55,    44,    92,    93,     8,
    56,     3,    11,     5,    23,    29,   153,    63,   111,    29,
   113,    71,    72,   108,    85,    86,    29,    29,    29,    38,
    85,    86,    13,   118,     9,    63,    45,    46,   153,   154,
    49,   263,   157,    19,   266,   182,    63,   162,   163,    44,
     4,    26,    29,    13,    54,    30,   171,   279,   280,   174,
   175,    29,    29,    29,    44,   180,    74,   182,    19,   154,
     4,     4,   157,   188,    29,    26,    29,   162,   163,    30,
    55,    44,    44,    74,    42,    74,    29,   202,    44,    63,
    65,    66,    67,    68,    69,    70,    71,    72,    44,    19,
    19,    29,    44,    20,    55,    44,    63,    44,   223,   224,
     0,   226,   227,    44,    65,    66,    67,    68,    69,    70,
    71,    72,     0,   238,   178,   238,   124,   264,   141,   185,
   120,   261,   254,   174,    -1,    -1,    -1,   252,   223,   254,
     0,    -1,    -1,    -1,   259,    -1,   261,     7,   263,   264,
    10,   266,    -1,   238,    -1,    -1,    -1,    -1,    -1,   274,
    23,    -1,    -1,    -1,   279,   280,    -1,   252,    31,    -1,
    30,    -1,    -1,    -1,    -1,    38,    -1,    37,   263,    -1,
    -1,   266,    45,    46,    44,    -1,    49,    -1,    -1,   274,
    -1,    -1,    -1,    -1,   279,   280,    -1,    60,    61,    -1,
    -1,    -1,    62,    63,    64,    65,    66,    67,    68,    -1,
    -1,    71,    -1,    -1,    -1,    -1,    76,    77,    -1,    79,
    80,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   101,    -1,    -1,   104,    -1,   106,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,
    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
    -1,    -1,    21,    -1,   134,   135,    25,    26,    27,    -1,
    29,    30,    -1,    -1,   144,    34,    35,    -1,    -1,    -1,
    -1,    -1,    41,    -1,    -1,    -1,    45,    -1,    -1,    -1,
    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,    57,    58,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    86,    -1,    -1,
     3,     4,     5,    -1,    -1,    -1,    -1,    -1,   208,    -1,
    -1,    -1,    -1,    -1,   214,    18,    26,    -1,    21,    -1,
    30,    -1,    25,    26,    27,    -1,    29,    30,    -1,    -1,
    -1,    34,    -1,    -1,    -1,    -1,    -1,   237,    41,   239,
    -1,    -1,    45,    -1,    -1,    55,    -1,    -1,    51,    -1,
    -1,    54,    -1,    -1,    57,    65,    66,    67,    68,    69,
    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
    -1,   271,    75,    76,    77,    78,    79,    80,    81,    82,
    83,    84,    85,    86,     3,     4,     5,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
    26,    -1,    21,    -1,    30,    -1,    25,    26,    27,    -1,
    29,    30,    -1,    -1,    -1,    34,    42,    -1,    -1,    -1,
    -1,    -1,    41,    -1,    -1,    -1,    45,    -1,    -1,    55,
    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,    57,    65,
    66,    67,    68,    69,    70,    71,    72,    26,    -1,    -1,
    -1,    30,    31,    -1,    -1,    -1,    75,    -1,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    86,    26,    -1,
    -1,    -1,    30,    31,    -1,    -1,    55,    26,    -1,    -1,
    -1,    30,    31,    -1,    -1,    -1,    65,    66,    67,    68,
    69,    70,    71,    72,    -1,    -1,    -1,    55,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    55,    65,    66,    67,
    68,    69,    70,    71,    72,    -1,    65,    66,    67,    68,
    69,    70,    71,    72,    26,    -1,    -1,    -1,    30,    -1,
    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    44,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    55,    -1,    65,    66,    67,    68,    69,    70,    71,
    72,    65,    66,    67,    68,    69,    70,    71,    72,    26,
    -1,    -1,    -1,    30,    -1,    -1,    -1,    26,    -1,    -1,
    -1,    30,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    55,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    65,    66,
    67,    68,    69,    70,    71,    72,    65,    66,    67,    68,
    69,    70,    71,    72,    26,    -1,    -1,    -1,    30,    -1,
    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    44,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    55,    -1,    65,    66,    67,    68,    69,    70,    71,
    72,    65,    66,    67,    68,    69,    70,    71,    72,    26,
    -1,    -1,    -1,    30,    -1,    -1,    -1,    26,    -1,    -1,
    -1,    30,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    55,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    65,    66,
    67,    68,    69,    70,    71,    72,    65,    66,    67,    68,
    69,    70,    71,    72,    26,    -1,    -1,    -1,    30,    -1,
    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    55,    -1,    65,    66,    67,    68,    69,    70,    71,
    72,    65,    66,    67,    68,    69,    70,    71,    72,    26,
    -1,    -1,    -1,    30,    -1,    -1,    -1,    26,    -1,    -1,
    -1,    30,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    55,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    65,    66,
    67,    68,    69,    70,    71,    72,    65,    66,    67,    68,
    69,    70,    71,    72,    26,    -1,    -1,    -1,    30,    -1,
    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    26,    -1,    -1,    55,    30,    -1,    -1,    -1,    -1,    -1,
    -1,    55,    -1,    65,    66,    67,    68,    69,    70,    71,
    72,    65,    66,    67,    68,    69,    70,    71,    72,    55,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
    66,    67,    68,    69,    70,    71,    72
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
#line 172 "stratego-grm.y"
{parse_tree = ATmake("Specification([<list>])", yyvsp[0].list);;
    break;}
case 2:
#line 173 "stratego-grm.y"
{parse_tree = (ATerm)yyvsp[0].list;;
    break;}
case 3:
#line 174 "stratego-grm.y"
{parse_tree = App2("App", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 4:
#line 175 "stratego-grm.y"
{parse_tree = App1("Strategy",yyvsp[0].term);;
    break;}
case 5:
#line 178 "stratego-grm.y"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 6:
#line 179 "stratego-grm.y"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 7:
#line 180 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 8:
#line 183 "stratego-grm.y"
{yyval.term = App1("Dump", yyvsp[0].term);;
    break;}
case 9:
#line 184 "stratego-grm.y"
{yyval.term = App1("Load", yyvsp[0].term);;
    break;}
case 10:
#line 185 "stratego-grm.y"
{yyval.term = yyvsp[0].term;;
    break;}
case 11:
#line 186 "stratego-grm.y"
{yyval.term = App1("Eval", yyvsp[0].term);;
    break;}
case 12:
#line 189 "stratego-grm.y"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 13:
#line 190 "stratego-grm.y"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 14:
#line 191 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 15:
#line 194 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 16:
#line 195 "stratego-grm.y"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 17:
#line 198 "stratego-grm.y"
{yyval.term = App1("Imports", (ATerm) yyvsp[0].list);;
    break;}
case 18:
#line 199 "stratego-grm.y"
{yyval.term = App1("Rules", (ATerm) yyvsp[0].list);;
    break;}
case 19:
#line 200 "stratego-grm.y"
{yyval.term = App1("Strategies", (ATerm) yyvsp[0].list);;
    break;}
case 20:
#line 201 "stratego-grm.y"
{yyval.term = App1("Signature", (ATerm) yyvsp[0].list);;
    break;}
case 21:
#line 202 "stratego-grm.y"
{yyval.term = App1("Overlays", (ATerm) yyvsp[0].list);;
    break;}
case 22:
#line 205 "stratego-grm.y"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 23:
#line 206 "stratego-grm.y"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 24:
#line 207 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 25:
#line 210 "stratego-grm.y"
{yyval.term = App1("Sorts", (ATerm) yyvsp[0].list);;
    break;}
case 26:
#line 211 "stratego-grm.y"
{yyval.term = App1("Constructors", (ATerm) yyvsp[0].list);;
    break;}
case 27:
#line 214 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 28:
#line 215 "stratego-grm.y"
{yyval.list = ATappend(yyvsp[-2].list, App2("Sort", yyvsp[-1].term, yyvsp[0].term));;
    break;}
case 29:
#line 218 "stratego-grm.y"
{yyval.term = (ATerm) ATempty;;
    break;}
case 30:
#line 219 "stratego-grm.y"
{yyval.term = (ATerm) yyvsp[-1].list;;
    break;}
case 31:
#line 222 "stratego-grm.y"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 32:
#line 223 "stratego-grm.y"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 33:
#line 226 "stratego-grm.y"
{yyval.term = ATmake("Type");;
    break;}
case 34:
#line 227 "stratego-grm.y"
{yyval.term = ATmake("TypeList");;
    break;}
case 35:
#line 230 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 36:
#line 231 "stratego-grm.y"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 37:
#line 234 "stratego-grm.y"
{yyval.term = App2("OpDecl", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 38:
#line 237 "stratego-grm.y"
{yyval.term = App2("FunType", (ATerm) yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 39:
#line 238 "stratego-grm.y"
{yyval.term = App1("ConstType", yyvsp[0].term);;
    break;}
case 40:
#line 239 "stratego-grm.y"
{yyval.term = yyvsp[-1].term;;
    break;}
case 41:
#line 243 "stratego-grm.y"
{yyval.list = ATappend(yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 42:
#line 244 "stratego-grm.y"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 43:
#line 247 "stratego-grm.y"
{yyval.term = yyvsp[0].term;;
    break;}
case 44:
#line 248 "stratego-grm.y"
{yyval.term = yyvsp[0].term;;
    break;}
case 45:
#line 253 "stratego-grm.y"
{yyval.term = yyvsp[0].term;;
    break;}
case 46:
#line 258 "stratego-grm.y"
{if(ATisEmpty(yyvsp[0].list)) 
					   yyval.term = App1("Var", yyvsp[-1].term);
					 else
					   yyval.term = App3("Con", 
						      App1("Var", yyvsp[-1].term), ATgetFirst(yyvsp[0].list), 
						      ATgetFirst(ATgetNext(yyvsp[0].list)));;
    break;}
case 47:
#line 265 "stratego-grm.y"
{yyval.term = App1("Var",  App1("ListVar", yyvsp[0].term));;
    break;}
case 48:
#line 267 "stratego-grm.y"
{yyval.term = ATmake("Wld");;
    break;}
case 49:
#line 269 "stratego-grm.y"
{yyval.term = App1("BuildDefault", yyvsp[0].term);;
    break;}
case 50:
#line 271 "stratego-grm.y"
{yyval.term = App1("Int", (ATerm) ATmakeInt(yyvsp[0].num));;
    break;}
case 51:
#line 272 "stratego-grm.y"
{yyval.term = App1("Real", (ATerm) ATmakeReal(yyvsp[0].real));;
    break;}
case 52:
#line 273 "stratego-grm.y"
{yyval.term = App1("Str", yyvsp[0].term);;
    break;}
case 53:
#line 274 "stratego-grm.y"
{yyval.term = App2("Op", yyvsp[-1].term, (ATerm) yyvsp[0].list);;
    break;}
case 54:
#line 275 "stratego-grm.y"
{yyval.term = App2("As", App1("Var", yyvsp[-2].term), yyvsp[0].term);;
    break;}
case 55:
#line 276 "stratego-grm.y"
{yyval.term = App2("App", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 56:
#line 277 "stratego-grm.y"
{yyval.term = App1("RootApp", yyvsp[-1].term);;
    break;}
case 57:
#line 278 "stratego-grm.y"
{yyval.term = list_to_consnil_op_tl(yyvsp[-2].list, yyvsp[-1].term);;
    break;}
case 58:
#line 281 "stratego-grm.y"
{if(ATgetLength(yyvsp[-1].list) == 1)
    					   yyval.term = ATgetFirst(yyvsp[-1].list);
  				 	 else
					   yyval.term = App2("Op", ATmakeString(""), (ATerm) yyvsp[-1].list);;
    break;}
case 59:
#line 288 "stratego-grm.y"
{yyval.term = App2("Explode", yyvsp[-4].term, yyvsp[-1].term);;
    break;}
case 60:
#line 289 "stratego-grm.y"
{yyval.term = App2("Anno", yyvsp[-3].term, list_to_consnil_op(yyvsp[-1].list));;
    break;}
case 61:
#line 292 "stratego-grm.y"
{yyval.term = ATmake("Op(\"Nil\",[])");;
    break;}
case 62:
#line 293 "stratego-grm.y"
{yyval.term = yyvsp[0].term;;
    break;}
case 63:
#line 296 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 64:
#line 298 "stratego-grm.y"
{yyval.list = ATmakeList2(yyvsp[-3].term, App2("Call", yyvsp[0].term, (ATerm) ATmakeList0()));;
    break;}
case 65:
#line 301 "stratego-grm.y"
{yyval.term = ATmake("SVar(\"oncetd\")"); ;
    break;}
case 66:
#line 302 "stratego-grm.y"
{yyval.term = App1("SVar", yyvsp[-1].term);;
    break;}
case 67:
#line 306 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 68:
#line 307 "stratego-grm.y"
{yyval.list = yyvsp[-1].list;;
    break;}
case 69:
#line 310 "stratego-grm.y"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 70:
#line 311 "stratego-grm.y"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 71:
#line 312 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 72:
#line 315 "stratego-grm.y"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 73:
#line 316 "stratego-grm.y"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 74:
#line 317 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 75:
#line 322 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 76:
#line 323 "stratego-grm.y"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 77:
#line 327 "stratego-grm.y"
{yyval.term = App3("RDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, (ATerm) yyvsp[0].term);;
    break;}
case 78:
#line 329 "stratego-grm.y"
{yyval.term = App3("RDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, (ATerm) yyvsp[0].term);;
    break;}
case 79:
#line 332 "stratego-grm.y"
{yyval.term = App3("Rule", yyvsp[-3].term, yyvsp[-1].term, yyvsp[0].term);	;
    break;}
case 80:
#line 336 "stratego-grm.y"
{yyval.term = App3("StratRule", yyvsp[-3].term, yyvsp[-1].term, yyvsp[0].term);	;
    break;}
case 81:
#line 339 "stratego-grm.y"
{yyval.term = ATmake("Id");;
    break;}
case 82:
#line 340 "stratego-grm.y"
{yyval.term = yyvsp[0].term;;
    break;}
case 83:
#line 346 "stratego-grm.y"
{yyval.term = App2("Call", App1("SVar", yyvsp[-1].term), (ATerm) yyvsp[0].list);;
    break;}
case 84:
#line 349 "stratego-grm.y"
{yyval.term = App2("Call", App1("SVar", App2("Mod", yyvsp[-3].term, yyvsp[-1].term)), 
							   (ATerm)yyvsp[0].list);;
    break;}
case 85:
#line 353 "stratego-grm.y"
{yyval.term = App2("ExplodeCong", yyvsp[-4].term, yyvsp[-1].term);;
    break;}
case 86:
#line 356 "stratego-grm.y"
{yyval.term = App1("Match", yyvsp[0].term);;
    break;}
case 87:
#line 357 "stratego-grm.y"
{yyval.term = App1("Build", yyvsp[0].term);;
    break;}
case 88:
#line 359 "stratego-grm.y"
{yyval.term = App2("Prim", yyvsp[-1].term, (ATerm) ATempty);;
    break;}
case 89:
#line 360 "stratego-grm.y"
{yyval.term = App2("Prim", yyvsp[-3].term, (ATerm) yyvsp[-1].list);;
    break;}
case 90:
#line 362 "stratego-grm.y"
{yyval.term = App1("LRule", yyvsp[-1].term);;
    break;}
case 91:
#line 364 "stratego-grm.y"
{yyval.term = App2("BA", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 92:
#line 365 "stratego-grm.y"
{yyval.term = App2("AM", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 93:
#line 367 "stratego-grm.y"
{yyval.term = ATmake("Fail");;
    break;}
case 94:
#line 368 "stratego-grm.y"
{yyval.term = ATmake("Id");;
    break;}
case 95:
#line 369 "stratego-grm.y"
{yyval.term = App2("Path", (ATerm) ATmakeInt(yyvsp[-1].num), yyvsp[0].term); ;
    break;}
case 96:
#line 371 "stratego-grm.y"
{yyval.term = App1("DynamicRules", (ATerm) yyvsp[-1].list);;
    break;}
case 97:
#line 372 "stratego-grm.y"
{yyval.term = App1("OverrideDynamicRules", (ATerm) yyvsp[-1].list);;
    break;}
case 98:
#line 374 "stratego-grm.y"
{yyval.term = App1("Not", yyvsp[-1].term);;
    break;}
case 99:
#line 375 "stratego-grm.y"
{yyval.term = App1("Where", yyvsp[-1].term);;
    break;}
case 100:
#line 376 "stratego-grm.y"
{yyval.term = App1("Test", yyvsp[-1].term);;
    break;}
case 101:
#line 379 "stratego-grm.y"
{yyval.term = App2("Scope", (ATerm) yyvsp[-3].list, yyvsp[-1].term);;
    break;}
case 102:
#line 381 "stratego-grm.y"
{yyval.term = App2("DynRuleScope", (ATerm) yyvsp[-3].list, yyvsp[-1].term);;
    break;}
case 103:
#line 382 "stratego-grm.y"
{yyval.term = App1("ScopeDefault", yyvsp[-1].term);;
    break;}
case 104:
#line 384 "stratego-grm.y"
{yyval.term = App2("Seq", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 105:
#line 386 "stratego-grm.y"
{yyval.term = App2("Choice", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 106:
#line 387 "stratego-grm.y"
{yyval.term = App2("GChoice", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 107:
#line 389 "stratego-grm.y"
{yyval.term = App2("LChoice", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 108:
#line 390 "stratego-grm.y"
{yyval.term = App2("LGChoice", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 109:
#line 393 "stratego-grm.y"
{yyval.term = App3("GuardedLChoice", yyvsp[-4].term, yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 110:
#line 395 "stratego-grm.y"
{yyval.term = App2("LChoice", yyvsp[0].term, yyvsp[-2].term);;
    break;}
case 111:
#line 396 "stratego-grm.y"
{yyval.term = App2("LGChoice", yyvsp[0].term, yyvsp[-2].term);;
    break;}
case 112:
#line 398 "stratego-grm.y"
{yyval.term = App1("Bagof", yyvsp[-1].term);;
    break;}
case 113:
#line 400 "stratego-grm.y"
{yyval.term = App2("Rec", yyvsp[-3].term, yyvsp[-1].term);;
    break;}
case 114:
#line 401 "stratego-grm.y"
{yyval.term = App1("Some", yyvsp[-1].term);;
    break;}
case 115:
#line 402 "stratego-grm.y"
{yyval.term = App1("One", yyvsp[-1].term);;
    break;}
case 116:
#line 403 "stratego-grm.y"
{yyval.term = App1("All", yyvsp[-1].term);;
    break;}
case 117:
#line 404 "stratego-grm.y"
{yyval.term = App1("Thread", yyvsp[-1].term);;
    break;}
case 118:
#line 408 "stratego-grm.y"
{if(ATgetLength(yyvsp[-1].list) == 1)
    					   yyval.term = ATgetFirst(yyvsp[-1].list);
  				 	 else
					   yyval.term = App2("Call", App1("SVar", ATmakeString("")), (ATerm) yyvsp[-1].list);;
    break;}
case 119:
#line 414 "stratego-grm.y"
{yyval.term = list_cong(yyvsp[-2].list, yyvsp[-1].term);;
    break;}
case 120:
#line 415 "stratego-grm.y"
{yyval.term = App1("Match", App1("Str", yyvsp[0].term));;
    break;}
case 121:
#line 416 "stratego-grm.y"
{yyval.term = App1("Match", 
					      App1("Int", (ATerm) ATmakeInt(yyvsp[0].num)));;
    break;}
case 122:
#line 418 "stratego-grm.y"
{yyval.term = App1("Match", 
					      App1("Real", (ATerm) ATmakeReal(yyvsp[0].real)));;
    break;}
case 123:
#line 420 "stratego-grm.y"
{yyval.term = App2("Let", (ATerm) yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 124:
#line 424 "stratego-grm.y"
{yyval.term = App2("Call", 
						  App1("SVar", ATmakeString("Anno_Cong__")), 
					          (ATerm) ATmakeList2(yyvsp[-3].term, yyvsp[-1].term));;
    break;}
case 125:
#line 430 "stratego-grm.y"
{yyval.term = ATmake("Call(SVar(\"Nil\"),[])");;
    break;}
case 126:
#line 431 "stratego-grm.y"
{yyval.term = yyvsp[0].term;;
    break;}
case 127:
#line 435 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 128:
#line 436 "stratego-grm.y"
{yyval.list = yyvsp[-1].list;;
    break;}
case 129:
#line 440 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 130:
#line 441 "stratego-grm.y"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 131:
#line 442 "stratego-grm.y"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 132:
#line 448 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 133:
#line 449 "stratego-grm.y"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 134:
#line 450 "stratego-grm.y"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 135:
#line 454 "stratego-grm.y"
{yyval.term = App3("SDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 136:
#line 458 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 137:
#line 459 "stratego-grm.y"
{yyval.list = yyvsp[-1].list;;
    break;}
case 138:
#line 462 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 139:
#line 463 "stratego-grm.y"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 140:
#line 464 "stratego-grm.y"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 141:
#line 467 "stratego-grm.y"
{yyval.term = App1("DefaultVarDec", yyvsp[0].term);;
    break;}
case 142:
#line 468 "stratego-grm.y"
{yyval.term = App2("VarDec", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 143:
#line 471 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 144:
#line 472 "stratego-grm.y"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 145:
#line 473 "stratego-grm.y"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 146:
#line 476 "stratego-grm.y"
{yyval.list = ATmakeList0();;
    break;}
case 147:
#line 477 "stratego-grm.y"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-1].term);;
    break;}
case 148:
#line 481 "stratego-grm.y"
{yyval.term = App3("Overlay", yyvsp[-5].term, (ATerm) yyvsp[-3].list, yyvsp[0].term);;
    break;}
case 149:
#line 482 "stratego-grm.y"
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
#line 487 "stratego-grm.y"
