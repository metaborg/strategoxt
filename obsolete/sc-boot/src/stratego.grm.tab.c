
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
#define	PLUSPLUS	319
#define	LTPLUSPLUS	320
#define	LTPLUS	321
#define	PLUSGT	322
#define	PLUSPLUSGT	323
#define	SEMICOLON	324
#define	DOUBLEARROW	325
#define	LEFTDOUBLEARROW	326
#define	RBRACK	327
#define	NOT	328
#define	WHERE	329
#define	TEST	330
#define	ONE	331
#define	ALL	332
#define	THREAD	333
#define	SOMETOK	334
#define	MU	335
#define	LET	336
#define	BAGOF	337
#define	REAL	338
#define	INT	339

#line 1 "stratego.grm"

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



#define	YYFINAL		283
#define	YYFLAG		-32768
#define	YYNTBASE	86

#define YYTRANSLATE(x) ((unsigned)(x) <= 339 ? yytranslate[x] : 125)

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
    77,    78,    79,    80,    81,    82,    83,    84,    85
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     4,     8,    13,    15,    17,    20,    21,    24,    27,
    29,    32,    34,    37,    38,    39,    42,    45,    48,    51,
    54,    57,    59,    62,    63,    66,    69,    70,    74,    75,
    79,    81,    84,    86,    88,    89,    92,    96,   100,   102,
   106,   110,   112,   114,   116,   119,   121,   124,   126,   128,
   130,   133,   137,   142,   146,   151,   155,   161,   162,   165,
   166,   172,   173,   177,   178,   182,   184,   188,   189,   191,
   195,   196,   197,   200,   205,   210,   215,   220,   221,   224,
   227,   232,   238,   241,   244,   249,   256,   260,   265,   269,
   271,   273,   276,   281,   287,   292,   297,   302,   308,   314,
   318,   322,   326,   330,   334,   338,   344,   348,   352,   357,
   363,   368,   373,   378,   383,   387,   392,   394,   396,   398,
   403,   404,   407,   408,   412,   413,   415,   419,   420,   423,
   426,   431,   432,   436,   437,   439,   443,   445,   449,   450,
   452,   456,   457,   460,   467
};

static const short yyrhs[] = {    34,
   100,    89,     0,    57,    58,    87,     0,    29,   113,    30,
   101,     0,   113,     0,    88,     0,    87,    88,     0,     0,
    59,     4,     0,    60,     4,     0,    91,     0,    30,   113,
     0,    91,     0,    89,    91,     0,     0,     0,    90,   100,
     0,    22,    90,     0,    44,   117,     0,    48,   117,     0,
    45,    92,     0,    37,   123,     0,    93,     0,    92,    93,
     0,     0,    46,    94,     0,    36,    96,     0,     0,    94,
   100,    95,     0,     0,    28,   106,    43,     0,     0,     0,
     0,     0,     0,    10,     0,    47,     0,     0,    96,    97,
     0,   100,    62,    98,     0,    99,     7,    98,     0,   101,
     0,    28,    98,    43,     0,    99,    10,    98,     0,    98,
     0,     3,     0,     5,     0,   100,   103,     0,    51,     0,
    51,   101,     0,    85,     0,    84,     0,     4,     0,   100,
   105,     0,   100,    14,   101,     0,    29,   113,    30,   101,
     0,    29,   113,    30,     0,    24,   106,   102,    73,     0,
    28,   106,    43,     0,   101,    54,    28,   101,    43,     0,
     0,    12,   101,     0,     0,    24,   101,   112,    73,   104,
     0,     0,    28,   100,    43,     0,     0,    28,   106,    43,
     0,   101,     0,   101,    18,   106,     0,     0,   100,     0,
   100,    18,   107,     0,     0,     0,   108,   109,     0,   100,
   119,    62,   110,     0,   100,   119,    63,   111,     0,   101,
     7,   101,   112,     0,   113,     8,   113,   112,     0,     0,
    75,   113,     0,   100,   115,     0,   100,    55,   100,   115,
     0,   113,    54,    28,   113,    43,     0,    33,   101,     0,
    17,   101,     0,    40,    28,     4,    43,     0,    40,    28,
     4,    18,   106,    43,     0,    53,   110,    53,     0,    29,
   113,    30,   101,     0,   113,    71,   101,     0,    20,     0,
    50,     0,    85,   113,     0,    44,    28,   108,    43,     0,
    56,    44,    28,   108,    43,     0,    74,    28,   113,    43,
     0,    75,    28,   113,    43,     0,    76,    28,   113,    43,
     0,    25,   107,    62,   113,    41,     0,    26,   107,    62,
   113,    42,     0,    25,   113,    41,     0,   113,    70,   113,
     0,   113,    64,   113,     0,   113,    65,   113,     0,   113,
    67,   113,     0,   113,    66,   113,     0,   113,    29,   113,
    64,   113,     0,   113,    68,   113,     0,   113,    69,   113,
     0,    83,    28,   113,    43,     0,    81,   100,    28,   113,
    43,     0,    80,    28,   113,    43,     0,    77,    28,   113,
    43,     0,    78,    28,   113,    43,     0,    79,    28,   113,
    43,     0,    28,   116,    43,     0,    24,   116,   114,    73,
     0,     4,     0,    85,     0,    84,     0,    82,   117,    61,
   113,     0,     0,    12,   113,     0,     0,    28,   116,    43,
     0,     0,   113,     0,   113,    18,   116,     0,     0,   117,
   118,     0,   117,   109,     0,   100,   119,    19,   113,     0,
     0,    28,   120,    43,     0,     0,   121,     0,   121,    18,
   120,     0,   100,     0,   100,    62,    98,     0,     0,   100,
     0,   100,    18,   122,     0,     0,   124,   123,     0,   100,
    28,   122,    43,    19,   101,     0,   100,    19,   101,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   170,   171,   172,   173,   176,   177,   178,   181,   182,   183,
   184,   187,   188,   189,   192,   193,   196,   197,   198,   199,
   200,   203,   204,   205,   208,   209,   212,   213,   215,   216,
   219,   220,   223,   224,   227,   228,   231,   234,   235,   236,
   240,   241,   244,   245,   250,   257,   259,   261,   262,   263,
   264,   265,   266,   267,   268,   271,   277,   281,   282,   285,
   286,   290,   291,   294,   295,   298,   299,   300,   303,   304,
   305,   310,   311,   315,   316,   320,   323,   327,   328,   334,
   336,   340,   344,   345,   347,   348,   350,   352,   353,   355,
   356,   357,   359,   360,   362,   363,   364,   366,   368,   370,
   372,   374,   375,   377,   378,   380,   383,   384,   386,   388,
   389,   390,   391,   392,   396,   401,   403,   404,   406,   408,
   412,   413,   417,   418,   422,   423,   424,   430,   431,   432,
   436,   440,   441,   444,   445,   446,   449,   450,   452,   453,
   454,   457,   458,   461,   463
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
"DUMP","LOAD","IN","COLON","DOUBLECOLON","PLUS","PLUSPLUS","LTPLUSPLUS","LTPLUS",
"PLUSGT","PLUSPLUSGT","SEMICOLON","DOUBLEARROW","LEFTDOUBLEARROW","RBRACK","NOT",
"WHERE","TEST","ONE","ALL","THREAD","SOMETOK","MU","LET","BAGOF","REAL","INT",
"start","commands","command","decls","mods","decl","sdecls","sdecl","idlist",
"optkind","opdecls","opdecl","type","typelist","id","term","tail","optcont",
"trav","opttermlist","termlist","tvarlist","rules","rule_def","rule","stratrule",
"optcond","strategy","strategytail","optstrategylist","strategylist","strategies",
"strategy_def","optvarlist","varlist","typedid","purevarlist","overlays","overlay", NULL
};
#endif

static const short yyr1[] = {     0,
    86,    86,    86,    86,    87,    87,    87,    88,    88,    88,
    88,    89,    89,    89,    90,    90,    91,    91,    91,    91,
    91,    92,    92,    92,    93,    93,    94,    94,    95,    95,
    -1,    -1,    -1,    -1,    96,    96,    97,    98,    98,    98,
    99,    99,   100,   100,   101,   101,   101,   101,   101,   101,
   101,   101,   101,   101,   101,   101,   101,   102,   102,   103,
   103,   104,   104,   105,   105,   106,   106,   106,   107,   107,
   107,   108,   108,   109,   109,   110,   111,   112,   112,   113,
   113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
   113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
   113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
   113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
   114,   114,   115,   115,   116,   116,   116,   117,   117,   117,
   118,   119,   119,   120,   120,   120,   121,   121,   122,   122,
   122,   123,   123,   124,   124
};

static const short yyr2[] = {     0,
     3,     3,     4,     1,     1,     2,     0,     2,     2,     1,
     2,     1,     2,     0,     0,     2,     2,     2,     2,     2,
     2,     1,     2,     0,     2,     2,     0,     3,     0,     3,
     1,     2,     1,     1,     0,     2,     3,     3,     1,     3,
     3,     1,     1,     1,     2,     1,     2,     1,     1,     1,
     2,     3,     4,     3,     4,     3,     5,     0,     2,     0,
     5,     0,     3,     0,     3,     1,     3,     0,     1,     3,
     0,     0,     2,     4,     4,     4,     4,     0,     2,     2,
     4,     5,     2,     2,     4,     6,     3,     4,     3,     1,
     1,     2,     4,     5,     4,     4,     4,     5,     5,     3,
     3,     3,     3,     3,     3,     5,     3,     3,     4,     5,
     4,     4,     4,     4,     3,     4,     1,     1,     1,     4,
     0,     2,     0,     3,     0,     1,     3,     0,     2,     2,
     4,     0,     3,     0,     1,     3,     1,     3,     0,     1,
     3,     0,     2,     6,     3
};

static const short yydefact[] = {     0,
    43,   117,    44,     0,    90,   125,    71,    71,   125,     0,
     0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   128,     0,   119,   118,
   123,     4,    50,    68,    68,     0,    46,    49,    48,    60,
    84,     0,   126,   121,   123,     0,     0,    69,     0,     0,
     0,    83,    14,     0,    72,     0,     0,     0,     7,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
   125,     0,    80,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    66,    58,     0,     0,    47,     0,     0,
    68,    45,    51,     0,     0,   125,     0,     0,    71,     0,
   100,     0,   115,     0,    15,   142,   128,    24,   128,     1,
    12,     0,     0,     0,    87,    72,     0,     0,     0,     2,
     5,    10,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   132,   130,   129,     0,     0,   123,     0,     0,   102,
   103,   105,   104,   107,   108,   101,    89,    68,     0,     0,
    56,    54,    52,    78,     0,     0,     0,   127,   122,   116,
    70,     0,     0,    88,    17,     0,    21,   142,    18,    35,
    27,    20,    22,    19,    13,    68,    85,    93,   132,    73,
    78,     0,    11,     8,     9,     6,    95,    96,    97,   112,
   113,   114,   111,     0,   120,   134,     0,   109,   124,    81,
     0,     0,    67,    59,    55,    53,     0,     0,    65,     0,
    88,    98,    99,    16,     0,   139,   143,    26,    25,    23,
     0,     0,    76,    94,   110,   137,     0,   135,     0,     0,
     0,   106,    82,    79,    62,    57,   145,   140,     0,    36,
     0,    29,    86,     0,   133,   134,   131,    74,    75,     0,
     0,    61,   139,     0,     0,    68,    28,    68,    42,     0,
    39,   136,     0,     0,   141,     0,    37,     0,    42,    39,
     0,     0,    78,    63,   144,    30,    40,    38,    41,    77,
     0,     0,     0
};

static const short yydefgoto[] = {   281,
   120,   121,   110,   165,   122,   172,   173,   219,   257,   218,
   240,   259,   260,    31,    84,   150,    92,   252,    93,    86,
    46,   113,   133,    57,   249,   208,    43,    98,    73,    44,
    68,   134,   197,   227,   228,   239,   167,   168
};

static const short yypact[] = {   335,
-32768,-32768,-32768,    22,-32768,   419,   419,    98,   419,   419,
    22,    98,   -12,     6,-32768,    22,    -9,    35,    31,    80,
    86,    92,    93,    97,   102,    98,-32768,   103,-32768,   502,
   -10,   266,-32768,    22,    22,   419,    22,-32768,-32768,   105,
    72,   419,   129,   138,    19,   106,   333,   142,   107,   128,
   137,    72,   187,   169,-32768,    16,   121,   147,    68,   419,
   419,   419,   419,   419,   419,   419,   148,     8,   419,    -5,
   419,    98,-32768,   419,   151,   419,   419,   419,   419,   419,
   419,   419,    22,    30,   170,   143,   412,    72,    22,    22,
    22,-32768,-32768,   153,   495,   419,   419,   114,    98,   419,
-32768,   419,-32768,    22,-32768,    98,-32768,   -17,-32768,   187,
-32768,    10,    33,    22,-32768,-32768,   419,   184,   185,    68,
-32768,-32768,   545,   563,   592,   610,   639,   657,   686,   419,
   419,   162,-32768,-32768,   704,   167,   188,   808,   419,   266,
   266,   266,   266,   266,   266,   -14,    72,    22,    22,   140,
-32768,    22,    72,    29,   174,    22,    22,-32768,   266,-32768,
-32768,   735,   753,     9,    98,    63,-32768,    98,    98,-32768,
-32768,   -17,-32768,    98,-32768,    22,-32768,-32768,   162,-32768,
    29,    49,   266,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   782,   266,    98,    -2,-32768,-32768,-32768,
   419,   800,-32768,    72,-32768,    72,   419,   145,-32768,    34,
    72,-32768,-32768,-32768,    22,    98,-32768,    98,    98,-32768,
   176,   -42,-32768,-32768,-32768,   158,   178,   204,   419,    22,
   419,   266,-32768,   266,   197,-32768,    72,   211,   190,-32768,
   166,   202,-32768,    38,-32768,    98,   266,-32768,-32768,    70,
    98,-32768,    98,   217,    38,    22,-32768,    38,    37,   144,
    72,-32768,   419,   195,-32768,    22,   149,   198,   201,    30,
    38,    38,   210,-32768,    72,-32768,-32768,-32768,-32768,-32768,
   245,   246,-32768
};

static const short yypgoto[] = {-32768,
-32768,   130,-32768,-32768,   -39,-32768,    76,-32768,-32768,-32768,
-32768,  -109,-32768,    -4,    28,-32768,-32768,-32768,-32768,   -33,
    -3,   139,  -107,    23,-32768,  -179,   227,-32768,   119,     1,
    48,-32768,    81,    13,-32768,    12,   116,-32768
};


#define	YYLAST		879


static const short yytable[] = {    40,
    85,   223,    45,    48,    49,   180,    40,    53,    -3,    50,
     1,    40,     3,   111,    74,    54,   229,    71,   170,   230,
   231,    67,   114,    74,     1,    33,     3,   176,   171,    40,
    40,    41,    40,    55,    58,     1,    99,     3,    52,    75,
     1,    33,     3,    56,    72,    34,    71,   148,    75,    35,
    36,     1,   177,     3,  -138,    82,    83,   155,    60,   230,
   231,    34,    94,   132,    88,   258,    36,   137,   131,    94,
   175,   136,    37,    72,   180,   178,   236,   263,    40,  -138,
   -69,   215,    94,    94,    40,    40,    40,    94,    37,   105,
   216,   224,    59,   280,    48,   161,   158,   117,    74,    40,
     1,   166,     3,   207,   106,    38,    39,    61,   179,    40,
   147,   107,   108,    62,   203,   109,   153,   154,    89,    63,
    64,    38,    39,    75,    65,    94,   118,   119,    90,    66,
    69,   164,    91,    76,    77,    78,    79,    80,    81,    82,
    83,   181,   221,    40,    40,   267,    96,    40,   269,    97,
   271,    40,    40,   272,   169,   -42,   174,    74,   -42,    99,
   214,   278,   279,   166,   132,    74,   104,   100,   102,   132,
   103,    40,   112,   115,   116,   130,   204,   179,   139,   206,
   156,   149,    75,   210,   211,   151,   160,   184,   185,   196,
    75,   226,    76,    77,    78,    79,    80,    81,    82,    83,
    76,    77,    78,    79,    80,    81,    82,    83,   105,   199,
    40,   238,   205,   241,   242,    71,   209,   235,   243,   244,
   245,   246,   268,   106,   251,    40,    32,   255,   253,   256,
   107,   108,   254,    47,   109,   266,    51,   274,    74,    40,
   276,   226,   237,   277,   282,   283,   264,   220,   238,   186,
    40,    40,   248,    40,   182,   200,    70,    56,   262,   222,
     0,    40,    87,    75,   265,     0,    40,    40,    95,     0,
     0,   261,     0,    76,    77,    78,    79,    80,    81,    82,
    83,     0,   261,   217,   207,   270,   123,   124,   125,   126,
   127,   128,   129,   275,    74,   135,     0,     0,   261,   261,
   138,     0,   140,   141,   142,   143,   144,   145,   146,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
     0,     0,     0,   159,     0,     0,   162,     0,   163,    76,
    77,    78,    79,    80,    81,    82,    83,     1,     2,     3,
     0,     0,     0,   183,     0,     0,     0,     0,     0,     0,
     0,     4,     0,     0,     5,     0,   194,   195,     6,     7,
     8,    74,     9,    10,     0,   202,     0,    11,    12,     0,
     0,     0,     0,   101,    13,     0,     0,     0,    14,     0,
     0,     0,     0,     0,    15,     0,    75,    16,     0,     0,
    17,    18,     0,     0,     0,     0,    76,    77,    78,    79,
    80,    81,    82,    83,     0,     0,     0,     0,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     0,     1,     2,     3,     0,     0,     0,   232,     0,     0,
     0,     0,     0,   234,     0,     4,     0,     0,     5,     0,
    74,   152,     6,     7,     8,     0,     9,    42,     0,     0,
     0,    11,     0,     0,     0,   247,     0,   250,    13,     0,
     0,     0,    14,     0,     0,    75,     0,     0,    15,     0,
     0,    16,     0,     0,    17,    76,    77,    78,    79,    80,
    81,    82,    83,     0,     0,     0,     0,     0,     0,   273,
     0,     0,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,     1,     2,     3,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
     0,     5,     0,    74,   157,     6,     7,     8,     0,     9,
    42,     0,     0,     0,    11,     0,     0,     0,     0,     0,
     0,    13,     0,     0,     0,    14,     0,     0,    75,     0,
     0,    15,     0,     0,    16,     0,     0,    17,    76,    77,
    78,    79,    80,    81,    82,    83,     0,     0,     0,     0,
     0,     0,     0,    74,     0,    19,     0,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,   187,     0,     0,
     0,    74,     0,     0,     0,     0,     0,     0,    75,     0,
     0,     0,     0,     0,     0,   188,     0,     0,    76,    77,
    78,    79,    80,    81,    82,    83,    75,     0,     0,     0,
    74,     0,     0,     0,     0,     0,    76,    77,    78,    79,
    80,    81,    82,    83,   189,     0,     0,     0,    74,     0,
     0,     0,     0,     0,     0,    75,     0,     0,     0,     0,
     0,     0,   190,     0,     0,    76,    77,    78,    79,    80,
    81,    82,    83,    75,     0,     0,     0,    74,     0,     0,
     0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
    83,   191,     0,     0,     0,    74,     0,     0,     0,     0,
     0,     0,    75,     0,     0,     0,     0,     0,     0,   192,
     0,     0,    76,    77,    78,    79,    80,    81,    82,    83,
    75,     0,     0,     0,    74,     0,     0,     0,     0,     0,
    76,    77,    78,    79,    80,    81,    82,    83,   193,     0,
     0,     0,    74,     0,     0,     0,     0,     0,     0,    75,
     0,     0,     0,     0,     0,     0,   198,     0,     0,    76,
    77,    78,    79,    80,    81,    82,    83,    75,     0,     0,
     0,     0,     0,    74,     0,     0,     0,    76,    77,    78,
    79,    80,    81,    82,    83,   212,     0,     0,     0,     0,
     0,    74,     0,     0,     0,     0,     0,     0,    75,     0,
     0,     0,     0,     0,   213,     0,     0,     0,    76,    77,
    78,    79,    80,    81,    82,    83,    75,     0,     0,     0,
    74,     0,     0,     0,     0,     0,    76,    77,    78,    79,
    80,    81,    82,    83,   225,     0,     0,     0,    74,     0,
     0,     0,     0,     0,     0,    75,    74,     0,     0,     0,
     0,     0,   233,     0,     0,    76,    77,    78,    79,    80,
    81,    82,    83,    75,     0,     0,     0,     0,     0,     0,
     0,    75,     0,    76,    77,    78,    79,    80,    81,    82,
    83,   201,    77,    78,    79,    80,    81,    82,    83
};

static const short yycheck[] = {     4,
    34,   181,     7,     8,     8,   113,    11,    12,     0,     9,
     3,    16,     5,    53,    29,    28,    19,    28,    36,    62,
    63,    26,     7,    29,     3,     4,     5,    18,    46,    34,
    35,     4,    37,    28,    44,     3,    18,     5,    11,    54,
     3,     4,     5,    16,    55,    24,    28,    18,    54,    28,
    29,     3,    43,     5,    18,    70,    71,    91,    28,    62,
    63,    24,    54,    68,    37,    28,    29,    72,    61,    54,
   110,    71,    51,    55,   182,    43,    43,     8,    83,    43,
    62,    19,    54,    54,    89,    90,    91,    54,    51,    22,
    28,    43,    58,   273,    99,    99,    96,    30,    29,   104,
     3,   106,     5,    75,    37,    84,    85,    28,   113,   114,
    83,    44,    45,    28,   148,    48,    89,    90,    14,    28,
    28,    84,    85,    54,    28,    54,    59,    60,    24,    28,
    28,   104,    28,    64,    65,    66,    67,    68,    69,    70,
    71,   114,   176,   148,   149,   255,    18,   152,   258,    12,
     7,   156,   157,    10,   107,     7,   109,    29,    10,    18,
   165,   271,   272,   168,   169,    29,    30,    62,    62,   174,
    43,   176,     4,    53,    28,    28,   149,   182,    28,   152,
    28,    12,    54,   156,   157,    43,    73,     4,     4,    28,
    54,   196,    64,    65,    66,    67,    68,    69,    70,    71,
    64,    65,    66,    67,    68,    69,    70,    71,    22,    43,
   215,   216,    73,   218,   219,    28,    43,    73,    43,    62,
    43,    18,   256,    37,    28,   230,     0,    62,    18,    28,
    44,    45,    43,     7,    48,    19,    10,    43,    29,   244,
    43,   246,   215,    43,     0,     0,   251,   172,   253,   120,
   255,   256,   230,   258,   116,   137,    30,   230,   246,   179,
    -1,   266,    36,    54,   253,    -1,   271,   272,    42,    -1,
    -1,   244,    -1,    64,    65,    66,    67,    68,    69,    70,
    71,    -1,   255,   168,    75,   258,    60,    61,    62,    63,
    64,    65,    66,   266,    29,    69,    -1,    -1,   271,   272,
    74,    -1,    76,    77,    78,    79,    80,    81,    82,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
    -1,    -1,    -1,    97,    -1,    -1,   100,    -1,   102,    64,
    65,    66,    67,    68,    69,    70,    71,     3,     4,     5,
    -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    17,    -1,    -1,    20,    -1,   130,   131,    24,    25,
    26,    29,    28,    29,    -1,   139,    -1,    33,    34,    -1,
    -1,    -1,    -1,    41,    40,    -1,    -1,    -1,    44,    -1,
    -1,    -1,    -1,    -1,    50,    -1,    54,    53,    -1,    -1,
    56,    57,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
    68,    69,    70,    71,    -1,    -1,    -1,    -1,    74,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    -1,     3,     4,     5,    -1,    -1,    -1,   201,    -1,    -1,
    -1,    -1,    -1,   207,    -1,    17,    -1,    -1,    20,    -1,
    29,    30,    24,    25,    26,    -1,    28,    29,    -1,    -1,
    -1,    33,    -1,    -1,    -1,   229,    -1,   231,    40,    -1,
    -1,    -1,    44,    -1,    -1,    54,    -1,    -1,    50,    -1,
    -1,    53,    -1,    -1,    56,    64,    65,    66,    67,    68,
    69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,   263,
    -1,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
    82,    83,    84,    85,     3,     4,     5,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,
    -1,    20,    -1,    29,    30,    24,    25,    26,    -1,    28,
    29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    54,    -1,
    -1,    50,    -1,    -1,    53,    -1,    -1,    56,    64,    65,
    66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    29,    -1,    74,    -1,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    43,    -1,    -1,
    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    64,    65,
    66,    67,    68,    69,    70,    71,    54,    -1,    -1,    -1,
    29,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
    68,    69,    70,    71,    43,    -1,    -1,    -1,    29,    -1,
    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
    -1,    -1,    43,    -1,    -1,    64,    65,    66,    67,    68,
    69,    70,    71,    54,    -1,    -1,    -1,    29,    -1,    -1,
    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
    71,    43,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    43,
    -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
    54,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
    64,    65,    66,    67,    68,    69,    70,    71,    43,    -1,
    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    54,
    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    64,
    65,    66,    67,    68,    69,    70,    71,    54,    -1,    -1,
    -1,    -1,    -1,    29,    -1,    -1,    -1,    64,    65,    66,
    67,    68,    69,    70,    71,    41,    -1,    -1,    -1,    -1,
    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    64,    65,
    66,    67,    68,    69,    70,    71,    54,    -1,    -1,    -1,
    29,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
    68,    69,    70,    71,    43,    -1,    -1,    -1,    29,    -1,
    -1,    -1,    -1,    -1,    -1,    54,    29,    -1,    -1,    -1,
    -1,    -1,    43,    -1,    -1,    64,    65,    66,    67,    68,
    69,    70,    71,    54,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    54,    -1,    64,    65,    66,    67,    68,    69,    70,
    71,    64,    65,    66,    67,    68,    69,    70,    71
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
#line 170 "stratego.grm"
{parse_tree = ATmake("Specification([<list>])", yyvsp[0].list);;
    break;}
case 2:
#line 171 "stratego.grm"
{parse_tree = (ATerm)yyvsp[0].list;
    break;}
case 3:
#line 172 "stratego.grm"
{parse_tree = App2("App", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 4:
#line 173 "stratego.grm"
{parse_tree = App1("Strategy",yyvsp[0].term);;
    break;}
case 5:
#line 176 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 6:
#line 177 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 7:
#line 178 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 8:
#line 181 "stratego.grm"
{yyval.term = App1("Dump", yyvsp[0].term);;
    break;}
case 9:
#line 182 "stratego.grm"
{yyval.term = App1("Load", yyvsp[0].term);;
    break;}
case 10:
#line 183 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 11:
#line 184 "stratego.grm"
{yyval.term = App1("Eval", yyvsp[0].term);;
    break;}
case 12:
#line 187 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 13:
#line 188 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 14:
#line 189 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 15:
#line 192 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 16:
#line 193 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 17:
#line 196 "stratego.grm"
{yyval.term = App1("Imports", (ATerm) yyvsp[0].list);;
    break;}
case 18:
#line 197 "stratego.grm"
{yyval.term = App1("Rules", (ATerm) yyvsp[0].list);;
    break;}
case 19:
#line 198 "stratego.grm"
{yyval.term = App1("Strategies", (ATerm) yyvsp[0].list);;
    break;}
case 20:
#line 199 "stratego.grm"
{yyval.term = App1("Signature", (ATerm) yyvsp[0].list);;
    break;}
case 21:
#line 200 "stratego.grm"
{yyval.term = App1("Overlays", (ATerm) yyvsp[0].list);;
    break;}
case 22:
#line 203 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 23:
#line 204 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 24:
#line 205 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 25:
#line 208 "stratego.grm"
{yyval.term = App1("Sorts", (ATerm) yyvsp[0].list);;
    break;}
case 26:
#line 209 "stratego.grm"
{yyval.term = App1("Constructors", (ATerm) yyvsp[0].list);;
    break;}
case 27:
#line 212 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 28:
#line 213 "stratego.grm"
{yyval.list = ATappend(yyvsp[-2].list, App2("Sort", yyvsp[-1].term, yyvsp[0].term));;
    break;}
case 29:
#line 215 "stratego.grm"
{yyval.term = (ATerm) ATempty;;
    break;}
case 30:
#line 216 "stratego.grm"
{yyval.term = (ATerm) yyvsp[-1].list;;
    break;}
case 31:
#line 219 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 32:
#line 220 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 33:
#line 223 "stratego.grm"
{yyval.term = ATmake("Type");;
    break;}
case 34:
#line 224 "stratego.grm"
{yyval.term = ATmake("TypeList");;
    break;}
case 35:
#line 227 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 36:
#line 228 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 37:
#line 231 "stratego.grm"
{yyval.term = App2("OpDecl", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 38:
#line 234 "stratego.grm"
{yyval.term = App2("FunType", (ATerm) yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 39:
#line 235 "stratego.grm"
{yyval.term = App1("ConstType", yyvsp[0].term);;
    break;}
case 40:
#line 236 "stratego.grm"
{yyval.term = yyvsp[-1].term;;
    break;}
case 41:
#line 240 "stratego.grm"
{yyval.list = ATappend(yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 42:
#line 241 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 43:
#line 244 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 44:
#line 245 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 45:
#line 250 "stratego.grm"
{if(ATisEmpty(yyvsp[0].list)) 
					   yyval.term = App1("Var", yyvsp[-1].term);
					 else
					   yyval.term = App3("Con", 
						      App1("Var", yyvsp[-1].term), ATgetFirst(yyvsp[0].list), 
						      ATgetFirst(ATgetNext(yyvsp[0].list)));;
    break;}
case 46:
#line 257 "stratego.grm"
{yyval.term = ATmake("Wld");;
    break;}
case 47:
#line 259 "stratego.grm"
{yyval.term = App1("BuildDefault", yyvsp[0].term);;
    break;}
case 48:
#line 261 "stratego.grm"
{yyval.term = App1("Int", (ATerm) ATmakeInt(yyvsp[0].num));;
    break;}
case 49:
#line 262 "stratego.grm"
{yyval.term = App1("Real", (ATerm) ATmakeReal(yyvsp[0].real));;
    break;}
case 50:
#line 263 "stratego.grm"
{yyval.term = App1("Str", yyvsp[0].term);;
    break;}
case 51:
#line 264 "stratego.grm"
{yyval.term = App2("Op", yyvsp[-1].term, (ATerm) yyvsp[0].list);;
    break;}
case 52:
#line 265 "stratego.grm"
{yyval.term = App2("As", App1("Var", yyvsp[-2].term), yyvsp[0].term);;
    break;}
case 53:
#line 266 "stratego.grm"
{yyval.term = App2("App", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 54:
#line 267 "stratego.grm"
{yyval.term = App1("RootApp", yyvsp[-1].term);;
    break;}
case 55:
#line 268 "stratego.grm"
{yyval.term = list_to_consnil_op_tl(yyvsp[-2].list, yyvsp[-1].term);;
    break;}
case 56:
#line 271 "stratego.grm"
{if(ATgetLength(yyvsp[-1].list) == 1)
    					   yyval.term = ATgetFirst(yyvsp[-1].list);
  				 	 else
					   yyval.term = App2("Op", ATmakeString(""), (ATerm) yyvsp[-1].list);;
    break;}
case 57:
#line 278 "stratego.grm"
{yyval.term = App2("Explode", yyvsp[-4].term, yyvsp[-1].term);
    break;}
case 58:
#line 281 "stratego.grm"
{yyval.term = ATmake("Op(\"Nil\",[])");;
    break;}
case 59:
#line 282 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 60:
#line 285 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 61:
#line 287 "stratego.grm"
{yyval.list = ATmakeList2(yyvsp[-3].term, App2("Call", yyvsp[0].term, (ATerm) ATmakeList0()));;
    break;}
case 62:
#line 290 "stratego.grm"
{yyval.term = ATmake("SVar(\"oncetd\")"); ;
    break;}
case 63:
#line 291 "stratego.grm"
{yyval.term = App1("SVar", yyvsp[-1].term);;
    break;}
case 64:
#line 294 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 65:
#line 295 "stratego.grm"
{yyval.list = yyvsp[-1].list;;
    break;}
case 66:
#line 298 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 67:
#line 299 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 68:
#line 300 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 69:
#line 303 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 70:
#line 304 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 71:
#line 305 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 72:
#line 310 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 73:
#line 311 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 74:
#line 315 "stratego.grm"
{yyval.term = App3("RDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, (ATerm) yyvsp[0].term);;
    break;}
case 75:
#line 317 "stratego.grm"
{yyval.term = App3("RDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, (ATerm) yyvsp[0].term);;
    break;}
case 76:
#line 320 "stratego.grm"
{yyval.term = App3("Rule", yyvsp[-3].term, yyvsp[-1].term, yyvsp[0].term);	;
    break;}
case 77:
#line 324 "stratego.grm"
{yyval.term = App3("StratRule", yyvsp[-3].term, yyvsp[-1].term, yyvsp[0].term);	;
    break;}
case 78:
#line 327 "stratego.grm"
{yyval.term = ATmake("Id");;
    break;}
case 79:
#line 328 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 80:
#line 334 "stratego.grm"
{yyval.term = App2("Call", App1("SVar", yyvsp[-1].term), (ATerm) yyvsp[0].list);;
    break;}
case 81:
#line 337 "stratego.grm"
{yyval.term = App2("Call", App1("SVar", App2("Mod", yyvsp[-3].term, yyvsp[-1].term)), 
							   (ATerm)yyvsp[0].list);;
    break;}
case 82:
#line 341 "stratego.grm"
{yyval.term = App2("ExplodeCong", yyvsp[-4].term, yyvsp[-1].term);
    break;}
case 83:
#line 344 "stratego.grm"
{yyval.term = App1("Match", yyvsp[0].term);;
    break;}
case 84:
#line 345 "stratego.grm"
{yyval.term = App1("Build", yyvsp[0].term);;
    break;}
case 85:
#line 347 "stratego.grm"
{yyval.term = App2("Prim", yyvsp[-1].term, (ATerm) ATempty);;
    break;}
case 86:
#line 348 "stratego.grm"
{yyval.term = App2("Prim", yyvsp[-3].term, (ATerm) yyvsp[-1].list);;
    break;}
case 87:
#line 350 "stratego.grm"
{yyval.term = App1("LRule", yyvsp[-1].term);;
    break;}
case 88:
#line 352 "stratego.grm"
{yyval.term = App2("BA", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 89:
#line 353 "stratego.grm"
{yyval.term = App2("AM", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 90:
#line 355 "stratego.grm"
{yyval.term = ATmake("Fail");;
    break;}
case 91:
#line 356 "stratego.grm"
{yyval.term = ATmake("Id");;
    break;}
case 92:
#line 357 "stratego.grm"
{yyval.term = App2("Path", (ATerm) ATmakeInt(yyvsp[-1].num), yyvsp[0].term); ;
    break;}
case 93:
#line 359 "stratego.grm"
{yyval.term = App1("DynamicRules", (ATerm) yyvsp[-1].list);;
    break;}
case 94:
#line 360 "stratego.grm"
{yyval.term = App1("OverrideDynamicRules", (ATerm) yyvsp[-1].list);;
    break;}
case 95:
#line 362 "stratego.grm"
{yyval.term = App1("Not", yyvsp[-1].term);;
    break;}
case 96:
#line 363 "stratego.grm"
{yyval.term = App1("Where", yyvsp[-1].term);;
    break;}
case 97:
#line 364 "stratego.grm"
{yyval.term = App1("Test", yyvsp[-1].term);;
    break;}
case 98:
#line 367 "stratego.grm"
{yyval.term = App2("Scope", (ATerm) yyvsp[-3].list, yyvsp[-1].term);;
    break;}
case 99:
#line 369 "stratego.grm"
{yyval.term = App2("DynRuleScope", (ATerm) yyvsp[-3].list, yyvsp[-1].term);;
    break;}
case 100:
#line 370 "stratego.grm"
{yyval.term = App1("ScopeDefault", yyvsp[-1].term);;
    break;}
case 101:
#line 372 "stratego.grm"
{yyval.term = App2("Seq", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 102:
#line 374 "stratego.grm"
{yyval.term = App2("Choice", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 103:
#line 375 "stratego.grm"
{yyval.term = App2("GChoice", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 104:
#line 377 "stratego.grm"
{yyval.term = App2("LChoice", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 105:
#line 378 "stratego.grm"
{yyval.term = App2("LGChoice", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 106:
#line 381 "stratego.grm"
{yyval.term = App3("GuardedLChoice", yyvsp[-4].term, yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 107:
#line 383 "stratego.grm"
{yyval.term = App2("LChoice", yyvsp[0].term, yyvsp[-2].term);;
    break;}
case 108:
#line 384 "stratego.grm"
{yyval.term = App2("LGChoice", yyvsp[0].term, yyvsp[-2].term);;
    break;}
case 109:
#line 386 "stratego.grm"
{yyval.term = App1("Bagof", yyvsp[-1].term);;
    break;}
case 110:
#line 388 "stratego.grm"
{yyval.term = App2("Rec", yyvsp[-3].term, yyvsp[-1].term);;
    break;}
case 111:
#line 389 "stratego.grm"
{yyval.term = App1("Some", yyvsp[-1].term);;
    break;}
case 112:
#line 390 "stratego.grm"
{yyval.term = App1("One", yyvsp[-1].term);;
    break;}
case 113:
#line 391 "stratego.grm"
{yyval.term = App1("All", yyvsp[-1].term);;
    break;}
case 114:
#line 392 "stratego.grm"
{yyval.term = App1("Thread", yyvsp[-1].term);;
    break;}
case 115:
#line 396 "stratego.grm"
{if(ATgetLength(yyvsp[-1].list) == 1)
    					   yyval.term = ATgetFirst(yyvsp[-1].list);
  				 	 else
					   yyval.term = App2("Call", App1("SVar", ATmakeString("")), (ATerm) yyvsp[-1].list);;
    break;}
case 116:
#line 402 "stratego.grm"
{yyval.term = list_cong(yyvsp[-2].list, yyvsp[-1].term);;
    break;}
case 117:
#line 403 "stratego.grm"
{yyval.term = App1("Match", App1("Str", yyvsp[0].term));;
    break;}
case 118:
#line 404 "stratego.grm"
{yyval.term = App1("Match", 
					      App1("Int", (ATerm) ATmakeInt(yyvsp[0].num)));;
    break;}
case 119:
#line 406 "stratego.grm"
{yyval.term = App1("Match", 
					      App1("Real", (ATerm) ATmakeReal(yyvsp[0].real)));;
    break;}
case 120:
#line 408 "stratego.grm"
{yyval.term = App2("Let", (ATerm) yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 121:
#line 412 "stratego.grm"
{yyval.term = ATmake("Call(SVar(\"Nil\"),[])");;
    break;}
case 122:
#line 413 "stratego.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 123:
#line 417 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 124:
#line 418 "stratego.grm"
{yyval.list = yyvsp[-1].list;;
    break;}
case 125:
#line 422 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 126:
#line 423 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 127:
#line 424 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 128:
#line 430 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 129:
#line 431 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 130:
#line 432 "stratego.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 131:
#line 436 "stratego.grm"
{yyval.term = App3("SDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 132:
#line 440 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 133:
#line 441 "stratego.grm"
{yyval.list = yyvsp[-1].list;;
    break;}
case 134:
#line 444 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 135:
#line 445 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 136:
#line 446 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 137:
#line 449 "stratego.grm"
{yyval.term = App1("DefaultVarDec", yyvsp[0].term);;
    break;}
case 138:
#line 450 "stratego.grm"
{yyval.term = App2("VarDec", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 139:
#line 452 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 140:
#line 453 "stratego.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 141:
#line 454 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 142:
#line 457 "stratego.grm"
{yyval.list = ATmakeList0();;
    break;}
case 143:
#line 458 "stratego.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-1].term);;
    break;}
case 144:
#line 462 "stratego.grm"
{yyval.term = App3("Overlay", yyvsp[-5].term, (ATerm) yyvsp[-3].list, yyvsp[0].term);;
    break;}
case 145:
#line 463 "stratego.grm"
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
#line 468 "stratego.grm"
