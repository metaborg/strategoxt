module Prod2Oper
imports
  lib
  AsFix2-Syntax
  Stratego-Syntax

rules

  gram2bsigs :
    empty-grammar() -> []
  gram2bsigs :
    conc-grammars(g1,g2) -> bsigs
    where <filter(gram2bsigs);concat>[g1,g2] => bsigs
  gram2bsigs :
    context-free-syntax(prods) 
	-> [<filter(not(?Constructors([])))>Constructors(opdecls)]
           (* This filter avoids generation of empty operation
              sections, which the current Stratego implementations
              (0.4.7 and before) do not parse correctly. *)
    where <filter(prod2oper)>prods => opdecls  

  prod2oper :
    prod(syms,sym,attrs)
      -> OpDecl(<try(Rename-Keyword)>cnstr,<mkType>(terms,term))
    where <sym2term> sym => term
        ; <filter(sym2term)> syms => terms
        ; <oncetd(?cons(cnstr'))> attrs
        ; <Literal2Stratego-Identifier> cnstr' => cnstr
  prod2oper :
    prod-fun(c,syms,sym,attrs)
      -> OpDecl(<try(Rename-Keyword)>cnstr,FunType(terms,term))
    where <sym2term> sym => term
        ; <filter(sym2term)> syms => terms
        ; ( <oncetd(?cons(cnstr'))> attrs
         <+ !c => cnstr'
          )
        ; <Literal2Stratego-Identifier> cnstr' => cnstr

rules  

  mkType: ([],t)	-> ConstType(t)
  mkType: (ts,t)	-> FunType(ts,t)

  Rename-Keyword: "module" 	-> "Module"
  Rename-Keyword: "exports"	-> "Exports"
  Rename-Keyword: "hiddens"	-> "Hiddens"
  Rename-Keyword: "id"		-> "Id"
  Rename-Keyword: "imports"	-> "Imports"
  Rename-Keyword: "sorts"	-> "Sorts"

rules

  Sym2Term : bracket-symbol(sym)	-> sym

  Sym2Term : cf(sym)			-> sym
  Sym2Term : lex(sym)			-> Var("String")
(*  Sym2Term : varsym(sym)		-> Should not occur in productions *)
(*  Sym2Term : layout()			-> Should not occur in productions *)
(*
  Sym2Term : empty()			-> Unit
*)

  Sym2Term : seq(sym,syms)		-> Var("EmptySeq")
    where <filter(not(?dummy()))> Cons(sym,syms) => Nil
  Sym2Term : seq(sym,syms)		-> sym'
    where <filter(not(?dummy()))> Cons(sym,syms) => Cons(sym',Nil)
  Sym2Term : seq(sym,syms)		-> Tuple(symsyms)
    where <filter(not(?dummy()))> Cons(sym,syms) => symsyms

  Sym2Term : opt(sym)			-> Op("Option",[sym])
  Sym2Term : iter(sym)			-> Op("List",[sym])
  Sym2Term : iter-star(sym)		-> Op("List",[sym])
  Sym2Term : iter-sep(sym,dummy())	-> Op("List",[sym])
  Sym2Term : iter-star-sep(sym,dummy())	-> Op("List",[sym])
  Sym2Term : iter-n(sym,_)		-> Op("List",[sym])
  Sym2Term : iter-sep-n(sym,dummy(),_)	-> Op("List",[sym])
(*
  Sym2Term : set(sym)			-> Set(sym)
*)
  Sym2Term : pair(dummy(),s2)		-> s2
  Sym2Term : pair(s1,dummy())		-> s1
  Sym2Term : pair(s1,s2)		-> Op("Prod",[s1,s2])
(*  Sym2Term : Func(syms,sym)		-> Cannot be translated *)

  Sym2Term : alt(dummy(),s2)		-> Op("Option",[s2])
  Sym2Term : alt(s1,dummy())		-> Op("Option",[s1])
  Sym2Term : alt(s1,s2)			-> Op("Either",[s1,s2])

(*  Sym2Term : Perm(syms)		->  *)  
  Sym2Term : sort(str)			-> Var(str)
  Sym2Term : char-class(_)		-> Var("String")
  Sym2Term : lit(_)			-> dummy()
  Sym2Term : label(_,sym)		-> sym

  (* Simplification *)
  Sym2Term : Op("Option",[Op("List",[sym])])	-> Op("List",[sym])

  Propagate-dummy : 
    t					-> dummy()
    where <not(Nil + Cons(id,id))> t
        ; <one(?dummy())> t

signature
  constructors
    dummy : Dummy

strategies

  sym2term = innermost(Sym2Term <+ Propagate-dummy);not(?dummy())


(*
   To insure that all generated identifiers in stratego
   code are actually vallid Stratego Identifiers, we
   need the following (character-level) strategies.
*)

rules
  
  isNum:        x       -> <leq>(48,x) where <leq>(x,57)
  isUpper:      x       -> <leq>(65,x) where <leq>(x,90)
  isLower:      x       -> <leq>(97,x) where <leq>(x,122)
  isHyphen:     45      -> ()
  isPrime:	39	-> ()
  isUnderScore: 95	-> ()
  
strategies

  isAlphaNumHyphen = isNum + isUpper + isLower + isHyphen
  isAlphaNum       = isNum + isUpper + isLower
  isAlpha          =         isUpper + isLower

strategies

  is-Stratego-Identifier
    = test( explode-string
          ; Cons(isAlpha,map(isAlphaNumHyphen + isPrime + isUnderScore))
          )

(*
  Sdf specification of Stratego Identifiers:
    [A-Za-z] [A-Za-z0-9\_\'\-]* -> Identifier
*)

  Literal2Stratego-Identifier
    = try(de-quote;de-escape)
    ; is-Stratego-Identifier


strategies
    
  de-quote
    = explode-string
    ; test(Hd;?34)       (* first char is double-quote *)
    ; Tl
    ; at-last(?[34];![]) (* last char is double-quote *)
    ; implode-string

  de-escape
    = explode-string
    ; De-Escape
    ; implode-string

rules

  De-Escape:    Cons(92,Cons(34,xs))    -> Cons(34,<De-Escape>xs)
  De-Escape:    Cons(92,Cons(92,xs))    -> Cons(92,<De-Escape>xs)
  De-Escape:    Cons(x,xs)              -> Cons(x,<De-Escape>xs)
  De-Escape:    Nil                     -> Nil

strategies

  quote
    = explode-string
    ; Quote
    ; implode-string

  escape
    = explode-string;
      map(Escape);
      concat;
      implode-string

rules

  Quote:
    chars       -> <concat>[[34],chars,[34]]

  Escape: (* double-quote *)
    34   -> [92,34]
  Escape: (* back-slash *)
    92   -> [92,92]
  Escape:
    char -> [char]

