module sdf

(* abstract syntax of SDF2 *)

signature
  sorts Grammar
  constructors
    Definition : List(Module) -> SDF

    Module     : String * List(Section) -> Module

    Exports    : List(Grammar) -> Section

    Imports    : List(String) -> Grammar

    cf-syntax  : List(Production) -> Grammar
    
    prod       : List(Symbol) * Symbol * Attributes -> Production

    layout     : Symbol
    sort       : String -> Symbol
    iter       : Symbol -> Symbol
    iter-star  : Symbol -> Symbol
    iter-sep   : Symbol * Symbol -> Symbol
    seq        : List(Symbol) -> Symbol

    