module Sdf2Overlays

(* $Id: Sdf2Overlays.r,v 1.4 2002/03/16 15:14:30 eelco Exp $ *)

(* Warning: Sdf and Stratego both have Module(...) in their signature *)

imports
  lib
(*  Implode-Asfix *)
  asfix
  Prod2Oper

rules

  prod2overlay(n): 
    prod -> o
    where <prod2OMB(n)>prod => (o,m,b)
  prod2match(n): 
    prod -> m
    where <prod2OMB(n)>prod => (o,m,b)
  prod2build(n): 
    prod -> b
    where <prod2OMB(n)>prod => (o,m,b)

  prod2OMB(n) :
    prod -> ( Overlay( cnstr-overlay, params,  o-term ),
              SDef   ( cnstr-match,   Some(""#([params'])), m-strat),
              SDef   ( cnstr-build,   Some(""#([params'])), b-strat) )
    where <prod2cf-prod> prod 	=> cf-prod
        ; <id>cf-prod 		=> prod(syms,sym,attrs)
        ; <filter(Sym2Var)> syms 		=> vars
        ; <filter(Var2ATerm)> vars 		=> aterms
        ; <filter(Var2Param)> vars 		=> params
        ; <filter((*?variable(v);*)Var2Param')> vars	=> params'
        ; ( <oncetd(?cons(cnstr'))> attrs
         <+ <get-fun> prod => cnstr'
          )
	; <Literal2Stratego-Identifier> cnstr'	=> cnstr
        ; <add-suffix(!"-overlay")> cnstr	=> cnstr-overlay
        ; <add-suffix(!"-match")> cnstr 	=> cnstr-match
        ; <add-suffix(!"-build")> cnstr		=> cnstr-build
        ; <asfix2sterm(n)>appl(cf-prod,aterms)	=> o-term
        ; !Call(SVar(cnstr-overlay),Some(""#([<filter(Var2MatchStrat)>vars]))) => m-strat
        ; !Build(Op(cnstr-overlay,<filter(Var2BuildTerm)>vars))   => b-strat

strategies
  add-suffix(s)
    = explode-string ; at-end(s;explode-string) ; implode-string

strategies
  prod2cf-prod
    = try(prod-fun2prod)
    ; prod(Sep-by(!opt(layout()));map(sym2cf-sym+id), sym2cf-sym+id, id)

rules
  prod-fun2prod:
    prod-fun(f,syms,sym,as) -> prod(syms',sym,as)
    where <concat>[ [lit(f),lit("(")],
                    <Sep-by(!lit(","))>syms,
                    [lit(")")] ] => syms'

  get-fun:
    prod-fun(f,_,_,_) -> f

strategies

  sym2cf-sym
    = lit(id)
   <+ char-class(id)
   <+ ?label(_, sym); !sym;sym2cf-sym
   <+ \ s -> cf(s) \

  Sep-by(s)
    = rec x ( []
           <+ [id]
           <+ [id | ![<s>, <x>]]
            )

strategies

  asfix2sterm(n)
    = reduce(Asfix2STerm(n))

signature
  constructors
    variable        : String	-> Symbol
    layout-variable : String	-> Symbol

rules
  Sym2Var: cf(opt(layout()))	-> layout-variable(v) where new => v
  Sym2Var: cf(x)		-> variable(v) where <not(opt(layout))> x; new => v
  Sym2Var: lit(x)		-> lit(x)

  Var2Param:       layout-variable(v)	-> v
  Var2Param:       variable(v)		-> v

  Var2Param':      variable(v)		-> v

  Var2ATerm:       layout-variable(v)	-> Var(v)
  Var2ATerm:       variable(v)		-> Var(v)
  Var2ATerm:       lit(x)		-> <lit-sort2lit-term> lit(x)

  Var2MatchStrat:  layout-variable(v)	-> Id()
  Var2MatchStrat:  variable(v)		-> SVar(v)

  Var2BuildTerm:   layout-variable(v)	-> Op("empty-layout",[])
  Var2BuildTerm:   variable(v)		-> App(SVar(v),Tuple([]))

  Asfix2STerm(n):	appl(p,ts)		-> Op("appl",[p,List(ts)])
  Asfix2STerm(n):  prod(syms,sym,attrs)	-> Op("prod",[List(syms),sym,attrs])
  Asfix2STerm(n):	no-attrs()		-> Op("no-attrs",[])
  Asfix2STerm(n):  attrs(as)		-> Op("attrs",[List(<conc>(as,[Op("'id",[Str(<n;quote>())])]))])
  Asfix2STerm(n):  atr(a)			-> Op("atr",[a])
  Asfix2STerm(n):	cons(str)		-> Op("cons",[Str(str)])
  (* Here, we de-quote quoted literals without de-escaping !! *)
  Asfix2STerm(n):  constructor()		-> Op("constructor",[])
  Asfix2STerm(n):  memo()			-> Op("memo",[])
  Asfix2STerm(n):  left()			-> Op("left",[])
  Asfix2STerm(n):  right()			-> Op("right",[])
  Asfix2STerm(n):  assoc()			-> Op("assoc",[])
  Asfix2STerm(n):  non-assoc()		-> Op("non-assoc",[])
  Asfix2STerm(n):  cf(sym)			-> Op("cf",[sym])
  Asfix2STerm(n):  lex(sym)		-> Op("lex",[sym])
  Asfix2STerm(n):	lit(str)		-> Op("lit",[Str(<escape;quote>str)])
  (* Here, we de-quote quoted literals without de-escaping !! *)
  Asfix2STerm(n):	sort(str)		-> Op("sort",[Str(<quote>str)]) 
  Asfix2STerm(n):  opt(sym)		-> Op("opt",[sym])
  Asfix2STerm(n):  seq(sym,syms)		-> Op("seq",[sym,List(syms)])
  Asfix2STerm(n):  iter(sym)		-> Op("iter",[sym])
  Asfix2STerm(n):  iter-star(sym)		-> Op("iter-star",[sym])
  Asfix2STerm(n):  iter-sep(sym,sep)	-> Op("iter-sep",[sym,sep])
  Asfix2STerm(n):  iter-star-sep(sym,sep)	-> Op("iter-star-sep",[sym,sep])
  Asfix2STerm(n):	layout()		-> Op("layout",[])
  Asfix2STerm(n):	char-class(chars)	-> Op("char-class",[List(chars)])
  AsFix2STerm(n):  START			-> Op("START",[])

rules
  MyCns: 
    appl(p, ts) -> "c"#(ts)

rules
  lit-sort2lit-term:
    lit(str)	-> appl(prod(arg-sorts,lit(str'),no-attrs()),chars)
(*
    where ![] => chars
        ; ![] => arg-sorts
*)
    where 
        !str;
        try(de-quote;de-escape) => str';
        explode-string;map( int-to-string ) => chars
//	; ![] => arg-sorts
        ; <map(char-class-Ins)> chars => arg-sorts
 

  char-class-Ins:
    char 	-> char-class([char])
    

strategies

  modest-implode
    = PT;
      layout-yield;
      alltd(Lexical);
      topdown(repeat(Inj <+ Tuple));
      conc-to-cons

  once-layout-yield
    = appl(prod(id,cf(opt(layout)), id), id);
      yield;
      \ x -> Lay(x) \

  once-literal-yield :
    appl(prod(_,lit(str), _), _) -> Lit(str) 

  layout-yield
    = rec x(try(appl(id, filter(try( once-layout-yield 
                                   + once-literal-yield ); x)) + amb(list(x))))

signature
  constructors
    Lay : String -> AST
    Lit : String -> AST
