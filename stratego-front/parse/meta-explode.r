\begin{code}
module meta-explode
imports lib Stratego
strategies
  meta-explode =
    alltd(?ToTerm(<trm-explode>) + ?ToStrategy(<str-explode>))

  trm-explode =
    TrmMetaVar <+ TrmStr <+ TrmFromTerm <+ TrmFromStr <+ TrmAnno 
    <+ TrmConc <+ TrmNil <+ TrmCons <+ TrmOp

  TrmOp       : op#(ts) -> Op(op, <map(trm-explode)> ts)

  TrmMetaVar  : meta-var(x) -> Var(x) 
  TrmStr      = is-string; !Str(<id>)
  TrmFromTerm = ?FromTerm(<meta-explode>)
  TrmFromStr  = ?FromStrategy(<meta-explode>)
  TrmAnno     = Anno(trm-explode, meta-explode)
  TrmNil      : [] -> Op("Nil", [])
  TrmCons     : [x | xs] -> Op("Cons",[<trm-explode>x, <trm-explode>xs])
  TrmConc     : Conc(ts1,ts2) -> 
                <foldr(!<trm-explode> ts2, 
                       !Op("Cons", [<Fst>, <Snd>]), trm-explode)> ts1
\end{code}
\begin{comment}
\begin{code}
strategies

  main = 
    iowrap(meta-explode)

  str-explode =
     \ meta-var(x) -> Call(SVar(x),[]) \
  //<+ is-string; !StrCong(<id>)
  <+ TrmFromTerm
  <+ TrmFromStr
  <+ \ [] -> Cong("Nil", []) \
  <+ \ [t | ts] -> Cong("Cons", [<str-explode>t , <str-explode>ts]) \
  <+ \ op#(ts) -> Cong(op, <map(str-explode)> ts) \

signature
  constructors
    ToTerm       : a -> Term
    FromTerm     : Term -> a

    ToStrategy   : a -> Strategy
    FromStrategy : Strategy -> a

    meta-var     : String -> a
    Cong         : String * List(Strategy) -> Strategy

    Conc	 : Term * Term -> Term
    Ins		 : Term -> Term
\end{code}
\end{comment}
