module sdf-normalize
imports 
  lib
  Sdf-Syntax

strategies

  sdf-normalize
    = iowrap(resolve-aliases;remove-aliases)

  resolve-aliases
    = \grammar -> <substitute(sort(id))>(subst,grammar)
       where <get-substitution>grammar => subst
      \

  get-substitution
    = collect(
        get-substitution-item
      , skip-substitution-item
      )

  get-substitution-item
    = // aliases are turned into substitutions
      \alias(symbol,s) -> (s,symbol)\
      // injections without cons(..) attribute are turned into substitutions
    + \prod([symbol],s,as) -> (s,symbol)
       where <not(oncetd(cons(id)+reject))>as
      \

  skip-substitution-item(collect,empty)
    = lexical-syntax(id)
    + lexical-priorities(id)

  remove-aliases
    = alltd(
        \aliases(_) -> empty-grammar\
      + context-free-syntax(filter-injections)
      + syntax(filter-injections)
      )

  filter-injections
    = filter(not(
        prod([id],id,not(oncetd(cons(id)+reject)))
      ))


