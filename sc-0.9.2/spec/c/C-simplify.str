module C-simplify
imports C
rules

  Csimplify :
    Compound(decs1, [Compound(decs2, stats) | stats']) -> 
    Compound(<conc>(decs1,decs2), <conc>(stats, stats'))

  Csimplify :
    Compound(decs1, [Compound(decs2, stats)]) -> 
    Compound(<conc>(decs1,decs2), stats)

  //Csimplify' :
  //  Compound(decs, stats) -> Compound(decs, stats')
  //  where <fetch(\ [Compound([], stats1) | stats2] -> <conc> (stats1, stats2) \ )> stats => stats'

  Csimplify :
    [Compound([], stats) | stats'] -> <conc>(stats, stats')

  Csimplify :
    IfElse(e, s, Compound([],[])) -> If(e, s)

  Csimplify :
    IfElse(e, Compound([],[]), s) -> If(Negation(e), s)

  Csimplify' : // not valid if s2 is a macro
    IfElse(e, s1, Compound([],[s2])) -> IfElse(e, s1, s2)
    where <Stat(id)> s2

  Csimplify' : // not valid if s1 is a macro
    IfElse(e, Compound([],[s1]), s2) -> IfElse(e, s1, s2)
    where <Stat(id)> s1

  Csimplify' : // not valid if s is a macro
    If(e, Compound([],[s])) -> If(e, s)
    where <Stat(id)> s
