module restore-asfix2

imports lib Sdf-Syntax asfix2me

overlays 
   CfIterStarEmpty(s)     = appl(prod([],cf(iter-star(s)),no-attrs),[])
   CfIter2IterStar(s,es)  = appl(prod([cf(iter(s))],cf(iter-star(s)),no-attrs),es)
   CfIterSingleton(s,e)   = appl(prod([cf(s)], cf(iter(s)), no-attrs),[e])
   CfIterCons(s,e1,ws,e2) = appl(prod([cf(iter(s)),cf(opt(layout)),cf(iter(s))],cf(iter(s)),attrs([atr(left)])),[e1,ws,e2])


   CfIterStarSepEmpty(s1,s2)       = appl(prod([],cf(iter-star-sep(s1,s2)),no-attrs),[])
   CfIterSep2IterStarSep(s1,s2,es) = appl(prod([cf(iter-sep(s1,s2))],cf(iter-star-sep(s1,s2)),no-attrs),es)
   CfIterSepSingleton(s1,s2,e)     = appl(prod([cf(s1)], cf(iter-sep(s1,s2)), no-attrs),[e])
   CfIterSepCons(s1,s2,e1,ws1,s,ws2,e2) = appl(prod([cf(iter-sep(s1,s2)),cf(opt(layout)),cf(s2),cf(opt(layout)),cf(iter-sep(s1,s2))],cf(iter-sep(s1,s2)),attrs([atr(left)])),[e1,ws1,s,ws2,e2])

   LexIterStarEmpty(s)    = appl(prod([],lex(iter-star(s)),no-attrs),[])
   LexIter2IterStar(s,es) = appl(prod([lex(iter(s))],lex(iter-star(s)),no-attrs),es)
   LexIterSingleton(s,e)  = appl(prod([lex(s)], lex(iter(s)), no-attrs),[e])
   LexIterCons(s,e1,e2)   = appl(prod([lex(iter(s)),lex(iter(s))],lex(iter(s)),attrs([atr(left)])),[e1,e2])

   LayoutCharacter(e) = appl(prod([lex(layout)],cf(layout),no-attrs),[appl(prod([char-class([range(0,255)])],lex(layout),no-attrs),[e])])
   LexLayoutElement(e,s) = appl(prod([lex(layout)],cf(layout),no-attrs),[appl(prod([lex(s)],lex(layout),no-attrs),[e])])
   CfLayoutElement(e,s)  = appl(prod([cf(s)],cf(layout),no-attrs),[e])
   LayoutCons(s1,s2)     = appl(prod([cf(layout),cf(layout)],cf(layout),attrs(atr(left))),[s1,s2]) 
   
strategies
    restore-asfix2 = iowrap( RestoreAsFix2 )

   
RestoreAsFix2 = 
   bottomup(try(unflatten-literal)
           ;
              try(unflatten-list)
           ;
              try(unflatten-layout)
           ;
              try(unflatten-lexical)
           )


unflatten-literal:
   appl(prod, args) -> appl(prod, args')
   where
   !args;
   list-some( {s, Characters: \
      lit(s) -> appl(prod(Characters,lit(s),no-attrs),Characters)
      where
         <explode-string>s => Characters
      \ } ) => args'

// Construct Cf iter and iter-star from AsFix2ME lists
unflatten-list:
   appl(list(cf(iter-star(s))), []) -> CfIterStarEmpty(s)

unflatten-list:
   appl(list(cf(iter-star(s))), [x|xs]) -> CfIter2IterStar(s,[x'])
    where
       <unflatten-list>appl(list(cf(iter(s))),[x|xs]) => x'

unflatten-list:
   appl(list(cf(iter(s))),xs) -> x'
   where
      <MkCfConsList(!s)>xs => x'




// Construct Cf iter -sepand iter-star-sep from AsFix2ME lists
unflatten-list:
   appl(list(cf(iter-star-sep(s1,s2))), []) -> CfIterStarSepEmpty(s1,s2)

unflatten-list:
   appl(list(cf(iter-star-sep(s1,s2))), [x|xs]) -> CfIterSep2IterStarSep(s1,s2,[x'])
    where
       <unflatten-list>appl(list(cf(iter-sep(s1,s2))),[x|xs]) => x'

unflatten-list:
   appl(list(cf(iter-sep(s1,s2))),xs) -> x'
   where
      <MkCfConsList(!s1,!s2)>xs => x'


MkCfConsList(s) =
      rec x ({e1,e2,e,ws1,ws2,es:
         ?[e]; !CfIterSingleton(<s>(),e)
      <+
         ?[e1,ws1,e2|es]
         ;<x>[CfIterCons(<s>(),CfIterSingleton(<s>(),e1),ws1,CfIterSingleton(<s>(),e2))|es]
      })

MkCfConsList(s1,s2) =
      rec x ({e1,ws1,sep,ws2,e2,e,es:
         ?[e]; !CfIterSepSingleton(<s1>(),<s2>(),e)
      <+
         ?[e1,ws1,sep,ws2,e2|es]
         ;<x>[CfIterSepCons(<s1>(),<s2>(),CfIterSepSingleton(<s1>(),<s2>(),e1),ws1,sep,ws2,CfIterSepSingleton(<s1>(),<s2>(),e2))|es]
      })


// Construct Lex iter and iter-star from AsFix2ME lists
// Separated lists are handled like ordinary lists. This means that
// separators become normal elements of lists.
// 
unflatten-list:
   appl(list(iter-star(s)), []) -> LexIterStarEmpty(s)

unflatten-list:
   appl(list(iter-star(s)), [x|xs]) -> LexIter2IterStar(s,[x'])
    where
       <unflatten-list>appl(list(iter(s)),[x|xs]) => x'

unflatten-list:
   appl(list(iter(s)),xs) -> x'
   where
      <MkLexConsList(!s)>xs => x'

MkLexConsList(s) =
      rec x ({e1,e2,e,es:
         ?[e]; !LexIterSingleton(<s>(),e)
      <+
         ?[e1,e2|es]
         ;<x>[LexIterCons(<s>(),LexIterSingleton(<s>(),e1),LexIterSingleton(<s>(),e2))|es]
      })

unflatten-layout :
   appl(prod([cf(layout)],cf(opt(layout)),no-attrs),xs) -> appl(prod([cf(layout)],cf(opt(layout)),no-attrs),x')
    where
     <MkLayoutConsList> xs => x'

MkLayoutConsList =
      rec x ({e1,e2,e,es:
      ?[e]; <MkLayoutCharacter>e

      <+
         ?[e1,e2|es]
         ;<x>[LayoutCons(<MkLayoutCharacter>e1,<MkLayoutCharacter>e2)|es]
      })

MkLayoutCharacter =
    ?e;
    (
       is-int;
       !LayoutCharacter(e)
    +
       ?appl(prod(syms,lex(s),attrs),_);
       !LexLayoutElement(e,s)
    +
       ?appl(prod(syms,cf(s),attrs),_);
            !CfLayoutElement(e,s)                    
    )
    
unflatten-lexical:
    appl(prod([lex(s)],cf(s),no-attrs), [appl(prod(syms,iter-star(char-class([range(0,255)])), no-attrs), xs )]) -> 
       appl(prod([lex(s)],cf(s), no-attrs),xs')
    where
       !appl(prod([lex(iter-star(char-class([range(0,255)])))],lex(s),no-attrs),
       [appl(prod(syms,lex(iter-star(char-class([range(0,255)]))), no-attrs), xs )]) => xs'




