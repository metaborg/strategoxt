\literate[lex2sdf]

Author: Eelco Visser

\begin{code}
module lex2sdf
imports lib lex Sdf2-Syntax asfix yacc2sdf termid

strategies

  lex2sdf = 
    io-idwrap("\"lex-0\"", lex2sdf-main)

  lex2sdf-main =
    topdown(repeat(Goal2Mod + Def2Prod + Rule2Prod + LexLiteral + Lex2Sdf));
    alltd(sort(upper_no_underscore))

rules

  Goal2Mod :
    Goal(defs,[],rs) -> 
    <mkterm>("\"sdf-2.1\"", [Module("Lexical", [Exports([defs, rs])], [])])

  Def2Prod :
    Define(a, alts) -> 
    lexical-syntax(<map(\ as -> prod(as, sort(a), no-attrs) \ )> alts)

  Rule2Prod :
    Rule(None, FlexRule(None,Rule1(None, alts, None)), a) ->
    lexical-syntax(<map(\ as -> prod(as, sort(a), no-attrs) \ )> alts)

  LexLiteral :
    prod(cs, a, no-attrs) -> prod([lit(l)], a, no-attrs)
    where <map(\ Char(c) -> c\ ); concat-strings> cs => l

  Lex2Sdf :
    Ccl(ranges) -> simple-charclass(ranges')
    where <foldr1(\ [r] -> r\, \ (r, rs) -> conc-ranges(r, rs) \ )> ranges => ranges'

  Lex2Sdf :
    NotCcl(ranges) -> not-charclass(simple-charclass(ranges'))
    where <foldr1(\ [r] -> r\, \ (r, rs) -> conc-ranges(r, rs) \ )> ranges => ranges'

  Lex2Sdf :
    CclChar(x) -> y
    where <escape(CharEsc)> x => y

  Lex2Sdf :
    Char(x) -> y
    where <escape(CharEsc)> x => y

  CharEsc(x) : 
    [c| cs] -> [92, c | <x>cs]
    where <not(is-alphanum + 92)> c

  CharEsc(x) : 
    [92, c| cs] -> [92, c | <x>cs]

  Lex2Sdf :
    CclRange(x, y) -> range(x, y)

  Lex2Sdf :
    AnyChar -> not-charclass(simple-charclass(no-charranges))

  Lex2Sdf :
    Sort(a) -> sort(a)

  Lex2Sdf :
    Lit(x) -> lit(x)
 
  Lex2Sdf :
    NeList(a) -> iter(a)

  Lex2Sdf :
    List(a) -> iter-star(a)

  Lex2Sdf :
    Opt(a) -> opt(a)
\end{code}

