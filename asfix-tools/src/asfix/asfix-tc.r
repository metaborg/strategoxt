(* $Id: asfix-tc.r,v 1.1 2001/05/30 15:19:00 mdejonge Exp $

	A typechecker for AsFixTerms

*)

module asfix-tc
imports asfix-abstractions

strategies

  asfix-tc = stdio(isAsFixTerm)

  isAsFixTerm =
    rec x(
	is-int
    <+
	appl(prod(list(isAsFixSort), isAsFixSort, id),
             list(isAsFixTerm))
    )