module term-to-adot
imports Dot lib
signature
  constructors
    Graph : Option
    Tree  : Option

strategies

  main = term-to-adot

  term-to-adot = 
    iowrap(to-adot, Option("--graph", !Graph()) + Option("--tree",  !Tree()))

  to-adot =
    ((option-defined(?Tree), term-to-tree) 
     <+ (option-defined(?Graph), term-to-graph))
  ; (id, graph-to-adot)

strategies

  term-to-graph = 
    rec x(
      split(split(address; NodeId, map(address; NodeId) <+ all(address; NodeId))
           , (foldr(![], union, x) <+ crush(![],union,x)))
      ; MkCons
    )

(*
  term-to-graph = 
    rec x(
      ![(<address; NodeId>
         , <map(address; NodeId) <+ all(address; NodeId)>)
       | <foldr(![], union, x) <+ crush(![],union,x)>]
    )
*)
      
  //term-to-tree =
  //  term-to-graph 

  NodeId = 
    split(!"node", int-to-string); conc-strings 
    
  term-to-tree = 
    split(new, id);
    rec x(
      (id, map(split(new,id)) <+ all(split(new,id)))
      ; split((id, map(Fst) <+ all(Fst)), Snd; (foldr(![], union, x) <+ crush(![],union,x)))
      ; MkCons
    )

rules

  graph-to-adot :
    edges -> dot-digraph(None,"term", stms)
    where <map(ListEdgeToDot <+ EdgeToDot); concat> edges => stms

  ListEdgeToDot :
    (n0, ns) -> 
    [node(Id(n0),Some(attrs([attr-id("label",<concat-strings>["\"", "[]", "\""])]))) 
    | <map( \ n1 -> edge(Id(n0),arrow,[Id(n1)],None) \ )> ns]
    where <is-list> ns

  EdgeToDot :
    (n0, i) -> 
    [node(Id(n0),Some(attrs([attr-id("label",<concat-strings>["\"", <int-to-string; escape> i, "\""])])))]
    where <is-int> i

  EdgeToDot :
    (n0, f#(ns)) -> 
    [node(Id(n0),Some(attrs([attr-id("label",<concat-strings>["\"", <escape> f, "\""])]))) 
    | <map( \ n1 -> edge(Id(n0),arrow,[Id(n1)],None) \ )> ns]
