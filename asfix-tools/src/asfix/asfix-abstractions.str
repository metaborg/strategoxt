module asfix-abstractions
imports asfix list tuple Character-Class-Syntax.r

signature
constructors
   ConcLayout: Layout -> Conclayout
   'id : a -> a

overlays // for LISTS

  conc-prod(s) = 
    prod([cf(iter(s)),cf(opt(layout)),cf(iter(s))],cf(iter(s)),no-attrs)

  iter-inj-prod(s) =
    prod([cf(s)], cf(iter(s)), no-attrs)

  af-iter-inj(s, x) =
    appl(iter-inj-prod(s), [x])

  af-conc(s,x,l,y) = 
    appl(conc-prod(s), [x, l, y])

// START and LAYOUT

overlays

  flatlit(str) = flatlex(lit(str), str)

  white(str) = flatlex(cf(opt(layout)), str)

  start(s,l1,x,l2) =       
    appl(prod([cf(opt(layout)),cf(sort(s)),cf(opt(layout))],
              sort("<START>"),no-attrs),
         [l1,x,l2])

  CfLayout(l) =
     appl(prod([lex(layout)], cf(layout), no-attrs), [l])

  ConcCfLayout(l1, l2) = 
     appl(prod([cf(layout), cf(layout)], cf(layout), attrs([atr("left")])), [l1, l2])

  NoCfLayout = 
     appl(prod([], cf(opt(layout)), no-attrs), [])
     
  CfOptLayout(l) =
     appl(prod([cf(layout)], cf(opt(layout)), no-attrs), [l])

  Space =
   CfLayout(appl(prod([char-class([range(9,10),32])],lex(layout),attrs(['id("Layout")])), [32]))

  NewLine =
   CfLayout(appl(prod([char-class([range(9,10),32])],lex(layout),attrs(['id("Layout")])), [10]))

  OptNewLine =
     CfOptLayout(NewLine)

strategies

  yield = rec x(appl(id, map(x)); \ appl(p, ts) -> <concat> ts \
                <+ \ flatlex(_, str) -> <explode-string> str \
	        <+ \ a -> [a] \ ); 
          implode-string

(*
overlays

  AfLit(s) = 
    appl(prod(_ char-sorts, lit(s), no-attrs), _ chars)
    where <explode-string> s => chars;
          <map(\c -> char-class([c])\ )> chars => char-sorts
*)

rules

  flatten : appl(prod(_,srt,_), ts) -> flatlex(srt, str)
	    where yield => str

  flatten : flatlex(srt,str) -> flatlex(srt,str)

  lit-tree :
    str -> appl(prod(char-sorts, lit(str), no-attrs), chars)
    where <explode-string> str => chars;
          <map( \c -> char-class([c])\ )> chars => char-sorts

  conc-layout1 : 
    (CfOptLayout(l1), CfOptLayout(l2)) -> 
    CfOptLayout(ConcCfLayout(l1, l2))

  conc-layout2 : 
    (NoCfLayout, l) -> l

  conc-layout3 : 
    (l, NoCfLayout) -> l

strategies

  conc-layout = conc-layout1 <+ conc-layout2 <+ conc-layout3

rules

  UnStart : start(s,l1,x,l2) -> (l1, x, l2)

  CombineLayout(s1,s2) : 
    ((l1, x, l2), (l3, y, l4)) -> 
    (l1, <s1> (x, <s2>(l2, l3), y), l4)

strategies
  concat-layout = foldr1a(conc-layout <+ \ x -> ConcLayout(x) \ )

  //foldr1a(s) = rec x( \ [x] -> x\ <+ FoldR; (id, x); s)

//  foldr1a(s) = rec f( 
//     \ [x] -> x \ 
//  <+ \ [x|xs] -> <s>(x, <f>xs) \ 
//  )

foldr1a(s) = rec f( 
 \[x] -> x \
<+
 \ [a,b|xs] -> <f>[<s>(a, b)|xs] \
)
