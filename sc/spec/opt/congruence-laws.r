module congruence-laws
imports stratego

rules

  MatchingCongruence :
    Cong(f, ss) -> Match(Op(f, ts))
    where <map(\ Match(t) -> t \ + \ Id -> Wld \ )> ss => ts

  TransformingCongruence :
    Cong(f, ss) -> 
    Scope(<conc>(xs,ys), 
          Seq(Match(Op(f, xs')),
          Seq(Seqs(ss'),
              Build(Op(f, ys')))))
    where <map(new)> ss => xs; <map(!Var(<id>))> xs => xs';
	  <map(new)> ss => ys; <map(!Var(<id>))> ys => ys';
          <zip(\ ((x,y), s) -> Seq(Build(Var(x)), Seq(s, Match(Var(y)))) \ )> (<zip(id)>(xs,ys), ss) => ss'

(*
  Canon :
    Cong(c, ss) -> 
    Scope(<conc>(xs,ys), 
          Seq(Match(Op(c, <map(\ x -> Var(x)\ )> xs)), 
              Seq(Where(<foldr(!Id,\ (s1,s2) -> Seq(s1,s2) \ )> ss'),
                  Build(Op(c, <map(\ x -> Var(x)\ )> ys)))))
    where <unzip(ApplyStrat)> ss => (xys, ss')
        ; <unzip(id)> xys => (xs, ys)

  ApplyStrat : 
    s -> ((x,y),Seq(Build(Var(x)), Seq(s, Match(Var(y)))))
    where new => x; new => y
*)
