module yacc

(* abstract syntax of yacc *)

signature
  sorts Spec
  constructors
    Spec  : List(Def) * Rules * C -> Spec
    Rules : List(Rule) -> Rules

    Rule  : Symbol * List(List(Symbol)) * OptSep -> Rule

    sort  : String -> Symbol

    number : String -> Symbol

    CharLiteral : String -> Symbol

    Prec :  Symbol

    Nmno : Either( Sort, CharLiteral) * Option(Number) -> Nmno