\literate[{\btt Stratego-Canonical-Format}]

\begin{code}
module Stratego-Normal-Format
imports stratego lib automaton
signature
  constructors
    MatchOp : String * List(String) -> Term

strategies

  main = iowrap(stratego-specification)

  stratego-specification =
    Specification([
      id,
      Strategies(list(strategy-definition))
    ])
    <+ debug(!"not a stratego-specification: ")

  strategy-definition =
    SDef(is-string, list(VarDec(is-string,id)), strategy-expression)
    <+ debug(!"not a strategy-definition: ")

  strategy-expression =
  rec exp(
	Id 
	+ Fail
	+ Not(exp)
	+ Test(exp)
	+ Seq(exp, exp)
	+ Choice(exp, exp)
	+ LChoice(exp, exp)
	+ Call(SVar(is-string),list(Call(SVar(is-string),[])))
	+ Rec(is-string, exp)
	+ Path(is-int, exp)
	+ Cong(is-string, list(exp))
	+ One(exp)
	+ Some(exp)
	+ All(exp)
	+ Thread(exp)
	+ Match(match-term-exp)
	+ Build(term-expression)
	+ Scope(list(is-string), exp)
	+ Where(exp)
	+ Prim(is-string,list(term-expression))
	+ Let(list(SDef(is-string,list(VarDec(is-string,id)),exp)),exp)
	+ Case(is-string,Var(is-string),list(case-alternative(exp)),exp)
	+ Assign(Var(is-string),term-expression)
	+ Assign(Var(is-string))
	+ Continue(is-string)

	<+ debug(!"not a strategy-expression: ")
	)

  case-alternative(exp) =
        Alt(Fun(is-string,is-int) + Str(is-string) + Int(is-int) + Real(is-real)
           , list(Var(is-string)),exp)
	<+ debug(!"not a case-alternative: ")

  match-term-exp =
  rec trm(
	Wld 
	+ Var(is-string)
	+ Int(is-int)
	+ Real(is-real)
	+ Str(is-string)
	+ BuildDefault(trm)
	+ As(Var(is-string), trm)
	+ Op(is-string, list(trm))
	<+ debug(!"not a match-term-expression: ")
  )

  term-expression =
  rec trm(
	Wld 
	+ Var(is-string)
	+ Int(is-int)
	+ Real(is-real)
	+ Str(is-string)
	+ BuildDefault(trm)
	+ As(Var(is-string), trm)
	+ Op(is-string, list(trm))
	<+ debug(!"not a term-expression: ")
	)
\end{code}
