module sdf-de-normalize
imports
  lib Sdf-Syntax

strategies

  sdf-de-normalize
    = iowrap(
        alltd(de-normalize-syntax)
      )

  de-normalize-syntax
    = syntax(remove-generated-prods;?prods)
    ; where (<filter(mk-prod-lex)>prods => lex-prods)
    ; where (<filter(mk-prod-cf)>prods => cf-prods)
    ; !conc-grammars(lexical-syntax(lex-prods),
                     context-free-syntax(cf-prods))

  remove-generated-prods 
  // We exploit the fact that all generated productions
  // have an id attribute. We remove this attribute on the fly.
    = filter(remove-id-attribute)

  remove-id-attribute
    = \prod(ss,s,attrs([Id(_)])) -> prod(ss,s,no-attrs)\
   <+ \prod(ss,s,attrs([as]))    -> prod(ss,s,<mk-attrs>as')
       where <filter(not(Id(id)))>as => as'
           ; <oncetd(Id(id))>as  // At least one id attribute.
      \

  mk-attrs
    = \[] -> no-attrs\
   <+ \as -> attrs(as)\


  mk-prod-lex
    = prod(map(de-norm-lex-symbol),de-norm-lex-symbol,id)

  mk-prod-cf
    = prod(
        map(de-norm-cf-symbol);filter(not(opt(layout))),
        de-norm-cf-symbol,
        id
      )

  de-norm-lex-symbol
    = char-class(id)
    + ?lit(_)
    + \lex(symbol)->symbol\

  de-norm-cf-symbol
    = char-class(id)
    + ?lit(_)
    + \cf(symbol)->symbol\
