module sdf-pp
imports sdf text lib
strategies

  main = iowrap(pp-sdf)

rules

  PP-SDF : Definition(ms) -> Vs([S("definition"), Vs(ms)])
  
  PP-SDF : Module(n, s) -> Vs([S(""), H(S("module "), S(n)), Vs(s)])
  
  PP-SDF : Exports(gs) -> Vs([S("exports"), I(Vs(gs))])

  PP-SDF : Imports(gs) -> Hs([S("imports "), Hs(<space-sep> gs)])

  PP-SDF : modname(s) -> S(s)

  PP-SDF : Sorts(gs) -> Hs([S("sorts "), Hs(<space-sep> gs)])

  PP-SDF : cf-syntax(ps) -> Vs([S(" "), S("context-free syntax"), I(Vs(ps))])

  PP-SDF : lex-syntax(ps) -> Vs([S(" "), S("lexical syntax"), I(Vs(ps))])

  PP-SDF : prod(syms, sym, as) -> 
           Hs(<conc>(<space-sep> syms, [S("-> "), sym]))

  PP-SDF : layout -> S("LAYOUT")

  PP-SDF : sort(str) -> S(str)

  PP-SDF : lit(x) -> Hs([L(Cs([34])), S(x), L(Cs([34]))])

  PP-SDF : CharLiteral(str) -> Hs([L(Cs([34])), S(str), L(Cs([34]))])

  PP-SDF : cf(x) -> Hs([S("<"), x, S("-CF>")])

  PP-SDF : lex(x) -> Hs([S("<"), x, S("-LEX>")])

  PP-SDF : Action(_) -> E

  (* Regular expressions *)

  PP-SDF : opt(s) -> H(s, S("?"))

  PP-SDF : iter(s) -> H(s, S("+"))

  PP-SDF : iter-star(s) -> H(s, S("*"))

  PP-SDF : iter-sep(s, sep) -> Hs([S("{"), s, S(" "), sep, S("}+")])

  PP-SDF : seq(ss) -> Hs([S("("), Hs(<space-sep> ss), S(")")])

  PP-SDF : alt(ss) -> Hs([S("("), Hs(<inject(!S(" | "))> ss), S(")")])

rules

  Inject(s) : Cons(x, y) -> Cons(x, Cons(<s>(),  y))

strategies

  space-sep = inject(!S(" "))

  inject(s) = rec x(Nil + Cons(id, x); Inject(s))

  pp-sdf = topdown(repeat(PP-SDF)); normalize-text 