
/*  A Bison parser, made from trs.grm
 by  GNU Bison version 1.27
  */

#define YYBISON 1  
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
#define	ANNBUILD	268
#define	ANNRM	269
#define	BUILDe	270
#define	COMMA	271
#define	EQ	272
#define	FAIL	273
#define	GG	274
#define	IMPORTS	275
#define	KIDS	276
#define	LBRACK	277
#define	LCURLY	278
#define	LL	279
#define	LPAREN	280
#define	LT	281
#define	GT	282
#define	ANNMATCH	283
#define	MATCH	284
#define	MATCHe	285
#define	MODULE	286
#define	NEW	287
#define	OPERATIONS	288
#define	OVERLAYS	289
#define	PARSEPROG	290
#define	PARSEQUERY	291
#define	PRIM	292
#define	RCURLY	293
#define	RPAREN	294
#define	RULES	295
#define	SIGNATURE	296
#define	SORTS	297
#define	STARSTAR	298
#define	STRATEGIES	299
#define	STR_GT	300
#define	SUCC	301
#define	UNDERSCORE	302
#define	DOT	303
#define	COLON	304
#define	DOUBLECOLON	305
#define	PLUS	306
#define	LTPLUS	307
#define	SEMICOLON	308
#define	DOUBLEARROW	309
#define	RBRACK	310
#define	NOT	311
#define	WHERE	312
#define	TEST	313
#define	ONE	314
#define	ALL	315
#define	THREAD	316
#define	SOMETOK	317
#define	MU	318
#define	REAL	319
#define	INT	320

#line 1 "trs.grm"

#include <aterm1.h>
#include "strategy.h"
#include "terms.h"

extern int yylineno;
extern char file_name[256];
extern FILE *yyin;

ATerm parse_tree;

void yyerror(char *msg)
{
  fprintf(stderr, "%s: line %d - %s\n", file_name, yylineno + 1, msg);
  exit(1);
}


#line 20 "trs.grm"
typedef union{
   int    num;
   double real;
   char   *string;
   ATerm  term;
   ATermList list;
} YYSTYPE;
#line 28 "trs.grm"


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



#define	YYFINAL		227
#define	YYFLAG		-32768
#define	YYNTBASE	67

#define YYTRANSLATE(x) ((unsigned)(x) <= 320 ? yytranslate[x] : 100)

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
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     4,     9,    11,    13,    16,    17,    19,    22,    25,
    28,    31,    34,    37,    39,    42,    43,    46,    49,    52,
    56,    57,    61,    63,    66,    68,    70,    73,    75,    79,
    83,    85,    89,    91,    93,    95,    98,   100,   102,   104,
   106,   109,   114,   118,   122,   123,   129,   130,   134,   135,
   139,   141,   145,   146,   148,   152,   153,   154,   157,   162,
   167,   172,   177,   178,   181,   184,   189,   192,   197,   200,
   207,   214,   217,   219,   221,   223,   228,   232,   237,   241,
   243,   245,   248,   253,   258,   263,   269,   273,   277,   281,
   287,   292,   297,   302,   307,   311,   315,   317,   319,   321,
   322,   326,   327,   329,   333,   334,   337,   342,   343,   347,
   348,   350,   354,   355,   358
};

static const short yyrhs[] = {    32,
    79,    68,     0,    23,    91,    56,    80,     0,    91,     0,
    70,     0,    68,    70,     0,     0,    79,     0,    69,    79,
     0,    21,    69,     0,    41,    86,     0,    45,    94,     0,
    42,    71,     0,    35,    98,     0,    72,     0,    71,    72,
     0,     0,    43,    73,     0,    34,    75,     0,    79,    74,
     0,    73,    79,    74,     0,     0,    26,    84,    40,     0,
     0,     0,     0,     0,     0,    10,     0,    44,     0,    75,
    76,     0,    76,     0,    79,    50,    77,     0,    78,     7,
    80,     0,    80,     0,    78,    10,    80,     0,    80,     0,
     3,     0,     5,     0,    79,    81,     0,    48,     0,    66,
     0,    65,     0,     4,     0,    79,    83,     0,    27,    91,
    28,    80,     0,    23,    84,    56,     0,    26,    84,    40,
     0,     0,    23,    80,    90,    56,    82,     0,     0,    26,
    79,    40,     0,     0,    26,    84,    40,     0,    80,     0,
    80,    17,    84,     0,     0,     3,     0,     3,    17,    85,
     0,     0,     0,    86,    87,     0,    79,    96,    50,    88,
     0,    79,    96,    51,    89,     0,    80,     7,    80,    90,
     0,    91,     8,    91,    90,     0,     0,    58,    91,     0,
    79,    92,     0,    30,    26,    80,    40,     0,    31,    80,
     0,    13,    26,    80,    40,     0,    16,    80,     0,    29,
    26,    80,    17,    80,    40,     0,    14,    26,    80,    17,
    80,    40,     0,    15,    80,     0,    33,     0,    46,     0,
    22,     0,    38,    26,     4,    40,     0,    25,    88,    20,
     0,    27,    91,    28,    80,     0,    91,    55,    80,     0,
    19,     0,    47,     0,    66,    91,     0,    57,    26,    91,
    40,     0,    58,    26,    91,    40,     0,    59,    26,    91,
    40,     0,    24,    85,    50,    91,    39,     0,    91,    54,
    91,     0,    91,    52,    91,     0,    91,    53,    91,     0,
    64,     3,    26,    91,    40,     0,    63,    26,    91,    40,
     0,    60,    26,    91,    40,     0,    61,    26,    91,    40,
     0,    62,    26,    91,    40,     0,    26,    93,    40,     0,
    23,    93,    56,     0,     4,     0,    66,     0,    65,     0,
     0,    26,    93,    40,     0,     0,    91,     0,    91,    17,
    93,     0,     0,    94,    95,     0,    79,    96,    18,    91,
     0,     0,    26,    97,    40,     0,     0,    79,     0,    79,
    17,    97,     0,     0,    99,    98,     0,    79,    26,    97,
    40,    18,    80,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   144,   145,   146,   149,   150,   151,   154,   155,   158,   159,
   160,   161,   162,   165,   166,   167,   170,   171,   174,   175,
   177,   178,   181,   182,   185,   186,   189,   190,   193,   196,
   197,   201,   202,   205,   206,   211,   218,   219,   220,   221,
   222,   223,   224,   225,   228,   229,   232,   233,   236,   237,
   240,   241,   242,   245,   246,   247,   252,   253,   257,   258,
   262,   265,   269,   270,   276,   278,   279,   281,   282,   284,
   286,   288,   290,   291,   292,   293,   295,   296,   297,   299,
   300,   301,   302,   303,   304,   305,   307,   308,   309,   310,
   311,   312,   313,   314,   315,   316,   317,   318,   320,   325,
   326,   330,   331,   332,   338,   339,   343,   347,   348,   351,
   352,   353,   356,   357,   360
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","LCID","STRINGTOK",
"UCID","ID","ARROW","LONGARROW","ASSIGN","ASTERISK","BACKARROW","BAR","BUILD",
"ANNBUILD","ANNRM","BUILDe","COMMA","EQ","FAIL","GG","IMPORTS","KIDS","LBRACK",
"LCURLY","LL","LPAREN","LT","GT","ANNMATCH","MATCH","MATCHe","MODULE","NEW",
"OPERATIONS","OVERLAYS","PARSEPROG","PARSEQUERY","PRIM","RCURLY","RPAREN","RULES",
"SIGNATURE","SORTS","STARSTAR","STRATEGIES","STR_GT","SUCC","UNDERSCORE","DOT",
"COLON","DOUBLECOLON","PLUS","LTPLUS","SEMICOLON","DOUBLEARROW","RBRACK","NOT",
"WHERE","TEST","ONE","ALL","THREAD","SOMETOK","MU","REAL","INT","start","decls",
"mods","decl","sdecls","sdecl","idlist","optkind","opdecls","opdecl","type",
"typelist","id","term","optcont","trav","opttermlist","termlist","tvarlist",
"rules","rule_def","rule","stratrule","optcond","strategy","optstrategylist",
"strategylist","strategies","strategy_def","optvarlist","varlist","overlays",
"overlay", NULL
};
#endif

static const short yyr1[] = {     0,
    67,    67,    67,    68,    68,    68,    69,    69,    70,    70,
    70,    70,    70,    71,    71,    71,    72,    72,    73,    73,
    74,    74,    -1,    -1,    -1,    -1,    75,    75,    76,    77,
    77,    78,    78,    79,    79,    80,    80,    80,    80,    80,
    80,    80,    80,    80,    81,    81,    82,    82,    83,    83,
    84,    84,    84,    85,    85,    85,    86,    86,    87,    87,
    88,    89,    90,    90,    91,    91,    91,    91,    91,    91,
    91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
    91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
    91,    91,    91,    91,    91,    91,    91,    91,    91,    92,
    92,    93,    93,    93,    94,    94,    95,    96,    96,    97,
    97,    97,    98,    98,    99
};

static const short yyr2[] = {     0,
     3,     4,     1,     1,     2,     0,     1,     2,     2,     2,
     2,     2,     2,     1,     2,     0,     2,     2,     2,     3,
     0,     3,     1,     2,     1,     1,     2,     1,     3,     3,
     1,     3,     1,     1,     1,     2,     1,     1,     1,     1,
     2,     4,     3,     3,     0,     5,     0,     3,     0,     3,
     1,     3,     0,     1,     3,     0,     0,     2,     4,     4,
     4,     4,     0,     2,     2,     4,     2,     4,     2,     6,
     6,     2,     1,     1,     1,     4,     3,     4,     3,     1,
     1,     2,     4,     4,     4,     5,     3,     3,     3,     5,
     4,     4,     4,     4,     3,     3,     1,     1,     1,     0,
     3,     0,     1,     3,     0,     2,     4,     0,     3,     0,
     1,     3,     0,     2,     6
};

static const short yydefact[] = {     0,
    34,    97,    35,     0,     0,     0,     0,    80,    75,   102,
    56,     0,   102,     0,     0,     0,     0,     0,    73,     0,
    74,    81,     0,     0,     0,     0,     0,     0,     0,     0,
    99,    98,   100,     3,     0,     0,    40,    53,    53,     0,
    37,    39,    38,    45,    72,    69,   102,     0,     0,    54,
     0,     0,     0,   103,     0,     0,     0,     0,    67,     6,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
   102,    65,     0,     0,     0,     0,     0,     0,    51,     0,
     0,     0,     0,    53,    36,    41,   102,     0,    96,    56,
     0,     0,    77,    95,     0,     0,     0,     0,   113,    57,
    16,   105,     1,     4,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    88,    89,    87,    79,    68,     0,
    53,    43,    44,     0,    63,     0,   104,     2,    55,     0,
    63,    78,     0,    66,     9,     7,     0,    13,   113,    10,
     0,     0,    12,    14,    11,     5,    76,    83,    84,    85,
    92,    93,    94,    91,     0,   101,     0,    52,    42,     0,
     0,    50,    86,    61,     0,     8,   110,   114,   108,    58,
    18,    28,     0,    17,    21,    15,   108,   106,    90,    71,
    64,    47,    70,   111,     0,   110,     0,    27,     0,    21,
    53,    19,     0,     0,    46,   110,     0,     0,     0,     0,
    29,     0,    31,    20,     0,     0,     0,   112,     0,   109,
    59,    60,     0,     0,     0,    22,   107,    48,   115,     0,
    30,    32,    63,    62,     0,     0,     0
};

static const short yydefgoto[] = {   225,
   103,   135,   104,   143,   144,   174,   192,   171,   172,   201,
   202,    44,    79,    85,   195,    86,    80,    51,   140,   170,
    53,   212,   161,    54,    72,    49,   145,   178,   187,   185,
   138,   139
};

static const short yypact[] = {   213,
-32768,-32768,-32768,   -17,   -10,    30,    30,-32768,-32768,   370,
    28,    30,   370,   370,    15,    43,    30,    56,-32768,    46,
-32768,-32768,    58,    62,    66,    68,    77,    83,    84,    74,
-32768,   304,    88,   123,    30,    30,-32768,    30,    30,   370,
-32768,-32768,-32768,    19,-32768,-32768,   370,    27,    -2,    98,
    70,   109,   103,    53,    89,   -25,    30,    30,-32768,    76,
   124,   370,   370,   370,   370,   370,   370,   370,   111,-32768,
   370,-32768,   370,   370,   370,    30,   104,   121,   126,    91,
   106,   -16,    30,    30,-32768,-32768,   370,    30,-32768,    28,
   370,    30,-32768,-32768,    30,   144,   122,    56,    56,-32768,
   -26,-32768,    76,-32768,   128,   -29,    72,    79,    96,   158,
   229,   246,   370,   129,   123,   123,    31,-32768,-32768,    30,
    30,-32768,-32768,    30,   108,   130,-32768,-32768,-32768,   -33,
   108,-32768,    30,-32768,    56,-32768,   146,-32768,    56,    56,
    56,    56,   -26,-32768,    56,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   292,-32768,   133,-32768,-32768,   370,
   127,-32768,-32768,-32768,   142,-32768,    56,-32768,   161,-32768,
    56,-32768,   134,    56,   162,-32768,   161,-32768,-32768,-32768,
   123,   163,-32768,   174,   152,    56,    51,-32768,    30,   162,
    30,-32768,   175,    56,-32768,    56,   177,   157,    30,   370,
-32768,    36,    48,-32768,   159,   370,   164,-32768,    30,-32768,
-32768,-32768,    -4,    30,    30,-32768,   123,-32768,-32768,   370,
-32768,-32768,   200,-32768,   201,   202,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,   102,-32768,    64,-32768,    24,-32768,    44,-32768,
-32768,     0,   173,-32768,-32768,-32768,   -32,   131,-32768,-32768,
    20,-32768,  -130,    90,-32768,   -11,-32768,-32768,    45,  -181,
    85,-32768
};


#define	YYLAST		436


static const short yytable[] = {    33,
   164,    55,    95,   220,   198,   163,    81,   141,    35,    33,
   148,   124,    33,    33,   208,    36,   142,    60,    73,    74,
    75,    76,    73,    74,    75,    76,    73,    74,    75,    76,
    50,    33,     1,    37,     3,    73,    74,    75,    76,    33,
    57,    83,   214,    87,    84,   215,    33,    73,    74,    75,
    76,   126,    38,    89,   -33,    39,    40,   -33,     1,   114,
     3,    33,    33,    33,    33,    33,    33,    33,    58,    87,
    33,    61,    33,    33,    33,   127,    69,    41,    73,    74,
    75,    76,    88,    62,    75,    76,    33,    63,   158,    34,
    33,    64,   224,    65,    42,    43,    98,   136,   137,    48,
   199,   200,    66,    56,    73,    74,    75,    76,    67,    68,
    99,   149,    33,    71,    90,    92,   100,   101,   150,    91,
   102,    70,    93,    73,    74,    75,    76,   105,    94,    82,
    73,    74,    75,    76,   166,   151,   113,   120,   137,   169,
   173,   175,   121,   119,   177,   123,   122,    73,    74,    75,
    76,   106,   107,   108,   109,   110,   111,   112,   205,    33,
   133,   134,   115,   116,   117,   160,   184,   147,   156,   162,
   173,   167,   180,   190,    73,    74,    75,    76,    45,    46,
   130,   183,   182,   189,    52,   184,   186,   191,   194,    59,
   196,   197,   206,   207,   209,   184,   210,   152,   216,    33,
   226,   227,   155,   218,   146,    33,   176,    77,    78,    73,
    74,    75,    76,   204,   188,     1,     2,     3,   211,    33,
   129,   193,     0,   168,     0,     4,     5,     6,     7,    96,
    97,     8,     0,     0,     9,    10,    11,    12,    13,    14,
     0,    15,    16,    17,    18,    19,     0,     0,   118,   181,
    20,    73,    74,    75,    76,   125,     0,   160,    21,    22,
   128,     0,     0,     0,   131,     0,     0,   132,   153,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,     0,
    73,    74,    75,    76,     0,   154,     0,     0,     0,   213,
     0,     0,   157,     0,     0,   217,   159,    73,    74,    75,
    76,     0,     0,     0,     0,   165,     1,     2,     3,   223,
     0,     0,     0,     0,     0,     0,     4,     5,     6,     7,
     0,     0,     8,     0,     0,     9,    47,    11,    12,    13,
    14,   179,    15,    16,    17,     0,    19,     0,     0,     0,
     0,    20,     0,    73,    74,    75,    76,     0,     0,    21,
    22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    23,   203,    25,    26,    27,    28,    29,    30,    31,    32,
     0,    52,     1,     2,     3,     0,     0,     0,     0,     0,
     0,   219,     4,     5,     6,     7,   221,   222,     8,     0,
     0,     9,    47,    11,    12,    13,    14,     0,    15,    16,
    17,     0,    19,     0,     0,     0,     0,    20,     0,     0,
     0,     0,     0,     0,     0,    21,    22,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32
};

static const short yycheck[] = {     0,
   131,    13,    28,     8,   186,    39,    39,    34,    26,    10,
    40,    28,    13,    14,   196,    26,    43,    18,    52,    53,
    54,    55,    52,    53,    54,    55,    52,    53,    54,    55,
     3,    32,     3,     4,     5,    52,    53,    54,    55,    40,
    26,    23,     7,    17,    26,    10,    47,    52,    53,    54,
    55,    84,    23,    56,     7,    26,    27,    10,     3,    71,
     5,    62,    63,    64,    65,    66,    67,    68,    26,    17,
    71,    26,    73,    74,    75,    87,     3,    48,    52,    53,
    54,    55,    56,    26,    54,    55,    87,    26,   121,     0,
    91,    26,   223,    26,    65,    66,    21,    98,    99,    10,
    50,    51,    26,    14,    52,    53,    54,    55,    26,    26,
    35,    40,   113,    26,    17,     7,    41,    42,    40,    50,
    45,    32,    20,    52,    53,    54,    55,     4,    40,    40,
    52,    53,    54,    55,   135,    40,    26,    17,   139,   140,
   141,   142,    17,    40,   145,    40,    56,    52,    53,    54,
    55,    62,    63,    64,    65,    66,    67,    68,   191,   160,
    17,    40,    73,    74,    75,    58,   167,    40,    40,    40,
   171,    26,    40,   174,    52,    53,    54,    55,     6,     7,
    91,    40,    56,    50,    12,   186,    26,    26,    26,    17,
    17,    40,    18,   194,    18,   196,    40,    40,    40,   200,
     0,     0,   113,    40,   103,   206,   143,    35,    36,    52,
    53,    54,    55,   190,   171,     3,     4,     5,   199,   220,
    90,   177,    -1,   139,    -1,    13,    14,    15,    16,    57,
    58,    19,    -1,    -1,    22,    23,    24,    25,    26,    27,
    -1,    29,    30,    31,    32,    33,    -1,    -1,    76,   160,
    38,    52,    53,    54,    55,    83,    -1,    58,    46,    47,
    88,    -1,    -1,    -1,    92,    -1,    -1,    95,    40,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
    52,    53,    54,    55,    -1,    40,    -1,    -1,    -1,   200,
    -1,    -1,   120,    -1,    -1,   206,   124,    52,    53,    54,
    55,    -1,    -1,    -1,    -1,   133,     3,     4,     5,   220,
    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
    -1,    -1,    19,    -1,    -1,    22,    23,    24,    25,    26,
    27,    40,    29,    30,    31,    -1,    33,    -1,    -1,    -1,
    -1,    38,    -1,    52,    53,    54,    55,    -1,    -1,    46,
    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    57,   189,    59,    60,    61,    62,    63,    64,    65,    66,
    -1,   199,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
    -1,   209,    13,    14,    15,    16,   214,   215,    19,    -1,
    -1,    22,    23,    24,    25,    26,    27,    -1,    29,    30,
    31,    -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66
};
#define YYPURE 1

/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/lib/bison.simple"
/* This file comes from bison-1.27.  */

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

#line 216 "/usr/lib/bison.simple"

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
#line 144 "trs.grm"
{parse_tree = ATmake("Specification([<list>])", yyvsp[0].list);;
    break;}
case 2:
#line 145 "trs.grm"
{parse_tree = App2("Trm", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 3:
#line 146 "trs.grm"
{parse_tree = App1("Strategy",yyvsp[0].term);;
    break;}
case 4:
#line 149 "trs.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 5:
#line 150 "trs.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 6:
#line 151 "trs.grm"
{yyval.list = ATmakeList0();;
    break;}
case 7:
#line 154 "trs.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 8:
#line 155 "trs.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 9:
#line 158 "trs.grm"
{yyval.term = App1("Imports", (ATerm) yyvsp[0].list);;
    break;}
case 10:
#line 159 "trs.grm"
{yyval.term = App1("Rules", (ATerm) yyvsp[0].list);;
    break;}
case 11:
#line 160 "trs.grm"
{yyval.term = App1("Strategies", (ATerm) yyvsp[0].list);;
    break;}
case 12:
#line 161 "trs.grm"
{yyval.term = App1("Signature", (ATerm) yyvsp[0].list);;
    break;}
case 13:
#line 162 "trs.grm"
{yyval.term = App1("Overlays", (ATerm) yyvsp[0].list);;
    break;}
case 14:
#line 165 "trs.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 15:
#line 166 "trs.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 16:
#line 167 "trs.grm"
{yyval.list = ATmakeList0();;
    break;}
case 17:
#line 170 "trs.grm"
{yyval.term = App1("Sorts", (ATerm) yyvsp[0].list);;
    break;}
case 18:
#line 171 "trs.grm"
{yyval.term = App1("Operations", (ATerm) yyvsp[0].list);;
    break;}
case 19:
#line 174 "trs.grm"
{yyval.list = ATmakeList1(App2("Sort", yyvsp[-1].term, yyvsp[0].term));;
    break;}
case 20:
#line 175 "trs.grm"
{yyval.list = ATinsert(yyvsp[-2].list, App2("Sort", yyvsp[-1].term, yyvsp[0].term));;
    break;}
case 21:
#line 177 "trs.grm"
{yyval.term = ATmake("Nokind");;
    break;}
case 22:
#line 178 "trs.grm"
{yyval.term = App1("Kinds", (ATerm) yyvsp[-1].list);;
    break;}
case 23:
#line 181 "trs.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 24:
#line 182 "trs.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 25:
#line 185 "trs.grm"
{yyval.term = ATmake("Type");;
    break;}
case 26:
#line 186 "trs.grm"
{yyval.term = ATmake("TypeList");;
    break;}
case 27:
#line 189 "trs.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 28:
#line 190 "trs.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 29:
#line 193 "trs.grm"
{yyval.term = App2("OpDecl", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 30:
#line 196 "trs.grm"
{yyval.term = App2("FunType", (ATerm) yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 31:
#line 197 "trs.grm"
{yyval.term = App1("ConstType", yyvsp[0].term);;
    break;}
case 32:
#line 201 "trs.grm"
{yyval.list = ATappend(yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 33:
#line 202 "trs.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 34:
#line 205 "trs.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 35:
#line 206 "trs.grm"
{yyval.term = yyvsp[0].term;;
    break;}
case 36:
#line 211 "trs.grm"
{if(ATisEmpty(yyvsp[0].list)) 
					   yyval.term = App1("Var", yyvsp[-1].term);
					 else
					   yyval.term = App3("Con", 
						      App1("Var", yyvsp[-1].term), ATgetFirst(yyvsp[0].list), 
						      ATgetFirst(ATgetNext(yyvsp[0].list)));;
    break;}
case 37:
#line 218 "trs.grm"
{yyval.term = ATmake("Wld");;
    break;}
case 38:
#line 219 "trs.grm"
{yyval.term = App1("Int", (ATerm) ATmakeInt(yyvsp[0].num));;
    break;}
case 39:
#line 220 "trs.grm"
{yyval.term = App1("Real", (ATerm) ATmakeInt(yyvsp[0].real));;
    break;}
case 40:
#line 221 "trs.grm"
{yyval.term = App1("Str", yyvsp[0].term);;
    break;}
case 41:
#line 222 "trs.grm"
{yyval.term = App2("Op", yyvsp[-1].term, (ATerm) yyvsp[0].list);;
    break;}
case 42:
#line 223 "trs.grm"
{yyval.term = App2("App", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 43:
#line 224 "trs.grm"
{yyval.term = list_to_consnil_op(yyvsp[-1].list);;
    break;}
case 44:
#line 225 "trs.grm"
{yyval.term = list_to_tconstnil_op(yyvsp[-1].list);;
    break;}
case 45:
#line 228 "trs.grm"
{yyval.list = ATmakeList0();;
    break;}
case 46:
#line 229 "trs.grm"
{yyval.list = ATmakeList2(yyvsp[-3].term, yyvsp[0].term);;
    break;}
case 47:
#line 232 "trs.grm"
{yyval.term = ATmake("SVar(\"oncetd\")"); ;
    break;}
case 48:
#line 233 "trs.grm"
{yyval.term = App1("SVar", yyvsp[-1].term);;
    break;}
case 49:
#line 236 "trs.grm"
{yyval.list = ATmakeList0();;
    break;}
case 50:
#line 237 "trs.grm"
{yyval.list = yyvsp[-1].list;;
    break;}
case 51:
#line 240 "trs.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 52:
#line 241 "trs.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 53:
#line 242 "trs.grm"
{yyval.list = ATmakeList0();;
    break;}
case 54:
#line 245 "trs.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 55:
#line 246 "trs.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 56:
#line 247 "trs.grm"
{yyval.list = ATmakeList0();;
    break;}
case 57:
#line 252 "trs.grm"
{yyval.list = ATmakeList0();;
    break;}
case 58:
#line 253 "trs.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 59:
#line 257 "trs.grm"
{yyval.term = App3("RDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, (ATerm) yyvsp[0].term);;
    break;}
case 60:
#line 259 "trs.grm"
{yyval.term = App3("RDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, (ATerm) yyvsp[0].term);;
    break;}
case 61:
#line 262 "trs.grm"
{yyval.term = App3("Rule", yyvsp[-3].term, yyvsp[-1].term, yyvsp[0].term);	;
    break;}
case 62:
#line 266 "trs.grm"
{yyval.term = App3("StratRule", yyvsp[-3].term, yyvsp[-1].term, yyvsp[0].term);	;
    break;}
case 63:
#line 269 "trs.grm"
{yyval.term = ATmake("Id");;
    break;}
case 64:
#line 270 "trs.grm"
{yyval.term = App1("Where", yyvsp[0].term);;
    break;}
case 65:
#line 276 "trs.grm"
{yyval.term = App2("Call", App1("SVar", yyvsp[-1].term), (ATerm) yyvsp[0].list);;
    break;}
case 66:
#line 278 "trs.grm"
{yyval.term = App1("Match", yyvsp[-1].term);;
    break;}
case 67:
#line 279 "trs.grm"
{yyval.term = App1("Match", yyvsp[0].term);;
    break;}
case 68:
#line 281 "trs.grm"
{yyval.term = App1("Build", yyvsp[-1].term);;
    break;}
case 69:
#line 282 "trs.grm"
{yyval.term = App1("Build", yyvsp[0].term);;
    break;}
case 70:
#line 285 "trs.grm"
{yyval.term = App2("AnnMatch", yyvsp[-3].term, yyvsp[-1].term);;
    break;}
case 71:
#line 287 "trs.grm"
{yyval.term = App2("AnnBuild", yyvsp[-3].term, yyvsp[-1].term);;
    break;}
case 72:
#line 288 "trs.grm"
{yyval.term = App1("AnnRemove", yyvsp[0].term);;
    break;}
case 73:
#line 290 "trs.grm"
{yyval.term = ATmake("Prim(\"new\")");;
    break;}
case 74:
#line 291 "trs.grm"
{yyval.term = ATmake("Prim(\"str_gt\")");;
    break;}
case 75:
#line 292 "trs.grm"
{yyval.term = ATmake("Prim(\"kids\")");;
    break;}
case 76:
#line 293 "trs.grm"
{yyval.term = App1("Prim", yyvsp[-1].term);;
    break;}
case 77:
#line 295 "trs.grm"
{yyval.term = App1("SRule", yyvsp[-1].term);;
    break;}
case 78:
#line 296 "trs.grm"
{yyval.term = App2("BA", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 79:
#line 297 "trs.grm"
{yyval.term = App2("AM", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 80:
#line 299 "trs.grm"
{yyval.term = ATmake("Fail");;
    break;}
case 81:
#line 300 "trs.grm"
{yyval.term = ATmake("Id");;
    break;}
case 82:
#line 301 "trs.grm"
{yyval.term = App2("Path", (ATerm) ATmakeInt(yyvsp[-1].num), yyvsp[0].term); ;
    break;}
case 83:
#line 302 "trs.grm"
{yyval.term = App1("Not", yyvsp[-1].term);;
    break;}
case 84:
#line 303 "trs.grm"
{yyval.term = App1("Where", yyvsp[-1].term);;
    break;}
case 85:
#line 304 "trs.grm"
{yyval.term = App1("Test", yyvsp[-1].term);;
    break;}
case 86:
#line 306 "trs.grm"
{yyval.term = App2("Scope", (ATerm) yyvsp[-3].list, yyvsp[-1].term);;
    break;}
case 87:
#line 307 "trs.grm"
{yyval.term = App2("Seq", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 88:
#line 308 "trs.grm"
{yyval.term = App2("Choice", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 89:
#line 309 "trs.grm"
{yyval.term = App2("LChoice", yyvsp[-2].term, yyvsp[0].term);;
    break;}
case 90:
#line 310 "trs.grm"
{yyval.term = App2("Rec", yyvsp[-3].term, yyvsp[-1].term);;
    break;}
case 91:
#line 311 "trs.grm"
{yyval.term = App1("Some", yyvsp[-1].term);;
    break;}
case 92:
#line 312 "trs.grm"
{yyval.term = App1("One", yyvsp[-1].term);;
    break;}
case 93:
#line 313 "trs.grm"
{yyval.term = App1("All", yyvsp[-1].term);;
    break;}
case 94:
#line 314 "trs.grm"
{yyval.term = App1("Thread", yyvsp[-1].term);;
    break;}
case 95:
#line 315 "trs.grm"
{yyval.term = tuple_cong(yyvsp[-1].list);;
    break;}
case 96:
#line 316 "trs.grm"
{yyval.term = list_cong(yyvsp[-1].list);;
    break;}
case 97:
#line 317 "trs.grm"
{yyval.term = App1("Match", App1("Str", yyvsp[0].term));;
    break;}
case 98:
#line 318 "trs.grm"
{yyval.term = App1("Match", 
					      App1("Int", (ATerm) ATmakeInt(yyvsp[0].num)));;
    break;}
case 99:
#line 320 "trs.grm"
{yyval.term = App1("Match", 
					      App1("Real", (ATerm) ATmakeInt(yyvsp[0].real)));;
    break;}
case 100:
#line 325 "trs.grm"
{yyval.list = ATmakeList0();;
    break;}
case 101:
#line 326 "trs.grm"
{yyval.list = yyvsp[-1].list;;
    break;}
case 102:
#line 330 "trs.grm"
{yyval.list = ATmakeList0();;
    break;}
case 103:
#line 331 "trs.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 104:
#line 332 "trs.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 105:
#line 338 "trs.grm"
{yyval.list = ATmakeList0();;
    break;}
case 106:
#line 339 "trs.grm"
{yyval.list = ATappend(yyvsp[-1].list, yyvsp[0].term);;
    break;}
case 107:
#line 343 "trs.grm"
{yyval.term = App3("SDef", yyvsp[-3].term, (ATerm) yyvsp[-2].list, yyvsp[0].term);;
    break;}
case 108:
#line 347 "trs.grm"
{yyval.list = ATmakeList0();;
    break;}
case 109:
#line 348 "trs.grm"
{yyval.list = yyvsp[-1].list;;
    break;}
case 110:
#line 351 "trs.grm"
{yyval.list = ATmakeList0();;
    break;}
case 111:
#line 352 "trs.grm"
{yyval.list = ATmakeList1(yyvsp[0].term);;
    break;}
case 112:
#line 353 "trs.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-2].term);;
    break;}
case 113:
#line 356 "trs.grm"
{yyval.list = ATmakeList0();;
    break;}
case 114:
#line 357 "trs.grm"
{yyval.list = ATinsert(yyvsp[0].list, yyvsp[-1].term);;
    break;}
case 115:
#line 361 "trs.grm"
{yyval.term = App3("Overlay", yyvsp[-5].term, (ATerm) yyvsp[-3].list, yyvsp[0].term);;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 542 "/usr/lib/bison.simple"

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
#line 365 "trs.grm"
