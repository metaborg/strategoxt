module meta-explode
imports lib stratego
signature
  constructors
    ToTerm       : a -> Term
    FromTerm     : Term -> a

    ToStrategy   : a -> Strategy
    FromStrategy : Strategy -> a

    meta-var     : String -> a
    Cong         : String * List(Strategy) -> Strategy

    Conc : Term * Term -> Term
    Ins  : Term -> Term

strategies

  main = 
    iowrap(meta-explode)

  meta-explode =
    alltd(?ToTerm(<trm-explode>) 
	  + ?ToStrategy(<str-explode>))

  trm-explode =
     \ meta-var(x) -> Var(x) \
  <+ is-string; !Str(<id>)
  <+ ?FromTerm(<meta-explode>)
  <+ ?FromStrategy(<meta-explode>)
  <+ \ Conc(ts1,ts2) -> <foldr(!<trm-explode> ts2, !Op("Cons", [<Fst>, <Snd>]), trm-explode)> ts1 \
  <+ \ [] -> Op("Nil", []) \
  <+ \ [x | xs] -> Op("Cons", [<trm-explode> x, <trm-explode> xs]) \
  <+ \ op#(ts) -> Op(op, <map(trm-explode)> ts) \

  str-explode =
     \ meta-var(x) -> Call(SVar(x),[]) \
  //<+ is-string; !StrCong(<id>)
  <+ ?FromTerm(<meta-explode>)
  <+ ?FromStrategy(<meta-explode>)
  <+ \ op#(ts) -> Cong(op, <map(str-explode)> ts) \
