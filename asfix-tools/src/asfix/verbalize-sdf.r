module verbalize-sdf
imports
  Sdf-Syntax Sdf-NormLit-Syntax
  lib Char-lib
  Literal-lib

strategies

  syms2strs 
    = filter(sym2strs)
    ; concat

  sym2strs
    = Sym2Strs; map(toAlphaNum <+ id)

  sym2str
    = sym2strs;concat-strings

  sym2str' (* Same as sym2str, except literals and labels are ignored) *)
    = Sym2Strs'; map(toAlphaNum <+ id); concat-strings; not(?"")

  lits2strs 
    = filter(lit2str)

  lit2str
    = list-ana(Lit2Str)
    ; separate-by(!"-")
    ; concat-strings
    ; (toAlphaNum <+ id)

  Lit2Str
    = \lit(str)	-> <try(de-quote;de-escape)>str\


strategies

  Sym2Strs = rec x( 
    \ cf(sym)			-> <x> sym \
  + \ lex(sym)			-> <x> sym \
  + \ empty()			-> ["unit"] \
  + \ seq(s,ss)			-> <filter(x);concat>Cons(s,ss) \
  + \ opt(sym)			-> <x;at-end(!["opt"])> sym \
  + \ iter(sym)			-> <x;at-end(!["p"])> sym \
  + \ iter-star(sym)		-> <x;at-end(!["s"])> sym \
  + \ iter-sep(sym,sep)		-> <concat>[<x>sym,<x>sep,["p"]] \
  + \ iter-star-sep(sym,sep)	-> <concat>[<x>sym,<x>sep,["s"]] \
  + \ iter-n(sym,_)		-> <concat>[<x>sym,       ["n"]] \
  + \ iter-sep-n(sym,sep,_)	-> <concat>[<x>sym,<x>sep,["n"]] \
  + \ set(sym)			-> <concat>[["Setof"],<x>sym] \
  + \ pair(s1,s2)		-> <concat>[<x>s1,["and"],<x>s2] \
  + \ func(ss,s)		-> <concat>[<filter(x);concat>ss,["to"],<x>s] \
  + \ alt(s1,s2)		-> <concat>[<x>s1,["or"],<x>s2] \
  + \ perm(ss)			-> Cons("Permof",<filter(x);concat>ss) \
  + \ sort(str)			-> [str] \
  + \ lit(str)			-> [<try(de-quote;de-escape)>str] \
  + \ label(str,_)		-> [<try(de-quote;de-escape)>str] \
  + \ layout			-> ["LAYOUT"] \
  )

  Sym2Strs' = rec x( (* Same as Sym2Strs, except that literals and labels are ignored *)
    \ cf(sym)			-> <x> sym \
  + \ lex(sym)			-> <x> sym \
  + \ empty()			-> ["unit"] \
  + \ seq(s,ss)			-> <filter(x);concat>Cons(s,ss) \
  + \ opt(sym)			-> <x;at-end(!["opt"])> sym \
  + \ iter(sym)			-> <x;at-end(!["p"])> sym \
  + \ iter-star(sym)		-> <x;at-end(!["s"])> sym \
  + \ iter-sep(sym,sep)		-> <concat>[<x>sym,<x>sep,["p"]] \
  + \ iter-star-sep(sym,sep)	-> <concat>[<x>sym,<x>sep,["s"]] \
//  + \ iter-star-sep(sym,sep)	-> <filter(x);concat;at-end(!["s"])>[sym,sep] \
  + \ iter-n(sym,_)		-> <concat>[<x>sym,       ["n"]] \
  + \ iter-sep-n(sym,sep,_)	-> <concat>[<x>sym,<x>sep,["n"]] \
  + \ set(sym)			-> <concat>[["Setof"],<x>sym] \
  + \ pair(s1,s2)		-> <concat>[<x>s1,["and"],<x>s2] \
  + \ func(ss,s)		-> <concat>[<filter(x);concat>ss,["to"],<x>s] \
  + \ alt(s1,s2)		-> <concat>[<x>s1,["or"],<x>s2] \
  + \ perm(ss)			-> Cons("Permof",<filter(x);concat>ss) \
  + \ sort(str)			-> [str] \
  + \ lit(_)			-> [] \
  + \ label(_,sym)		-> <x> sym \
  )

  PpSym = rec x( 
    \ cf(sym)			-> <concat>[["<"], <x> sym, ["-CF>"]] \
  + \ lex(sym)			-> <concat>[["<"], <x> sym, ["-LEX>"]] \
  + \ empty()			-> ["()"] \
  + \ seq(s,ss)			-> <concat>[["("], <map(x)> [s|ss], [")"]] \
  + \ opt(sym)			-> <x;at-end(!["opt"])> sym \
  + \ iter(sym)			-> <x;at-end(!["+"])> sym \
  + \ iter-star(sym)		-> <x;at-end(!["*"])> sym \
  + \ iter-sep(sym,sep)		-> <concat>[["{"], <x>sym, <x>sep, ["}+"]] \
  + \ iter-star-sep(sym,sep)	-> <concat>[["{"], <x>sym, <x>sep,["}*"]] \
  + \ iter-n(sym,_)		-> <concat>[<x>sym,       ["n"]] \
  + \ iter-sep-n(sym,sep,_)	-> <concat>[<x>sym,<x>sep,["n"]] \
  + \ set(sym)			-> <concat>[["Setof"],<x>sym] \
  + \ pair(s1,s2)		-> <concat>[<x>s1,["and"],<x>s2] \
  + \ func(ss,s)		-> <concat>[<filter(x);concat>ss,["to"],<x>s] \
  + \ alt(s1,s2)		-> <concat>[<x>s1,["|"],<x>s2] \
  + \ perm(ss)			-> Cons("Permof",<filter(x);concat>ss) \
  + \ sort(str)			-> [str] \
  + \ lit(str)			-> [<try(de-quote;de-escape)>str] \
  + \ label(str,_)		-> [<try(de-quote;de-escape)>str] \
 <+ \ layout			-> ["LAYOUT"] \
  )

rules
  toAlphaNum :	","	-> "comma"
  toAlphaNum :	":"	-> "colon"
  toAlphaNum :	";"	-> "semicolon"
  toAlphaNum : 	"+"	-> "plus"
  toAlphaNum : 	"++"	-> "incr"
  toAlphaNum :  "-"	-> "minus"
  toAlphaNum : 	"--"	-> "decr"
  toAlphaNum :  "*"	-> "times"
  toAlphaNum :  "/"	-> "div"
  toAlphaNum :  "&"	-> "address"
  toAlphaNum :  "&&"	-> "and"
  toAlphaNum :  "!"	-> "not"
  toAlphaNum :  "-"	-> "minus"
  toAlphaNum :  "~"	-> "tilde"


  toAlphaNum :  "%"	-> "mod"
  toAlphaNum :  "<<"	-> "shift-left"
  toAlphaNum :  ">>"	-> "shift-right"
  toAlphaNum :  "!="	-> "not-equal"

(*
  toAlphaNum :  "."	-> "field"
  toAlphaNum :  ""	-> ""
  toAlphaNum :  ""	-> ""
  toAlphaNum :  ""	-> ""
  toAlphaNum :  ""	-> ""
  toAlphaNum :  ""	-> ""
  toAlphaNum :  ""	-> ""
  toAlphaNum :  ""	-> ""
  toAlphaNum :  ""	-> ""
  toAlphaNum :  ""	-> ""
  toAlphaNum :  ""	-> ""
  toAlphaNum :  ""	-> ""
  toAlphaNum :  "("	-> ""
  toAlphaNum :	")"	-> ""
  toAlphaNum :  "{"	-> ""
  toAlphaNum :  "}"     -> ""
  toAlphaNum :  "["	-> ""
  toAlphaNum :  "]"	-> ""
  toAlphaNum :  "[["	-> ""
  toAlphaNum :  "]]"	-> ""
*)
  toAlphaNum :	"<"	-> "lt"
  toAlphaNum :	"<="	-> "le"
  toAlphaNum :  ">"	-> "gt"
  toAlphaNum :  ">="	-> "ge"
  toAlphaNum :  "|"     -> "bar"
  toAlphaNum :  "="	-> "equal"
  toAlphaNum :  "=="	-> "equal"
  toAlphaNum :  "||"    -> "or"
  toAlphaNum :  ":="	-> "assign"
  toAlphaNum :	"->"	-> "rightarrow"
  toAlphaNum :  "=>"    -> "rightdoublearrow"

  toAlphaNum :  "*="    -> "assignMul" 
  toAlphaNum :  "/="    -> "assignDiv" 
  toAlphaNum :  "%="    -> "assignMod" 
  toAlphaNum :  "+="    -> "assignPlus" 
  toAlphaNum :  "-="    -> "assignMin" 
  toAlphaNum :  "<<="   -> "assignSL" 
  toAlphaNum :  ">>="   -> "assignSR" 
  toAlphaNum :  "&="    -> "assignAnd" 
  toAlphaNum :  "^="    -> "assignExp" 
  toAlphaNum :  "|="    -> "assignOr" 


  toAlphaNum :	xs	-> ""
                where <explode-string;not(map(isAlphaNumHyphen))>xs

strategies

  sepby(s)
    = rec x(  Nil
           <+ Cons(id,Nil)
           <+ Cons(id, \ tl -> Cons(<s>tl,<x>tl) \)
           )

  list-ana(s)
    = rec x((s;Singleton) <+ {xs:?_#(xs);!xs;filter(x);concat} <+ !Nil)
  
  tfilter(s)
    = rec x(TNil + (TCons(s,x) <+ tTl ; x))

rules

  tuple2list = ?""#(<id>)

  Singleton : x -> [x]  

  tTl : ""#([x, tp]) -> ""#(tp)


