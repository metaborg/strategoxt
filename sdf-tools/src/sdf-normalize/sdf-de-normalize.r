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
    = ( char-class(id)
      + lit(id)
      + \lex(symbol)->symbol\ )
    ; alltd( lit(enquote) + de-norm-char-class )

  de-norm-cf-symbol
    = ( char-class(id)
      + lit(id)
      + \cf(symbol)->symbol\ )
    ; alltd( lit(enquote) + de-norm-char-class )

  de-norm-char-class
    = char-class(map(num2char <+ de-norm-range))
    ; char-class(ranges2simple-cc)

  de-norm-range
    = range(num2char,num2char)

  ranges2simple-cc
    = foldr(!no-charranges,\(r,rs)->conc-ranges(r,rs)\)
    ; \rs -> simple-charclass(rs)\

  // Digits, upper- and lowercase letters are turned into ShortChars
  // Newlines, tabs, and spaces are turned into ShortChars
  // All others are turned into NumChars. 
  num2char
    = ( ?n; where(<geq>(n,48);<leq>(n,57)); <implode-string>[n] )
   <+ ( ?n; where(<geq>(n,65);<leq>(n,90)); <implode-string>[n] )
   <+ ( ?n; where(<geq>(n,97);<leq>(n,122)); <implode-string>[n] )
   <+ \10 -> <implode-string>[92,110]\
   <+ \9  -> <implode-string>[92,116]\
   <+ \32 -> <implode-string>[92,32]\
   <+ ( num-to-string; \str -> <concat-strings>["\\",str," "]\ )

  num-to-string = 
    rec x(split(sect(mod, !10); sect(add, !48), sect(div, !10); int);
          (id, ?0; ![] <+ x); MkCons );
    reverse;
    implode-string

  enquote
    = \str -> <concat-strings>["\"",str,"\""]\
