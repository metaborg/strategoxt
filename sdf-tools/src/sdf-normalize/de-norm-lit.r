module de-norm-lit
(*
	Author: Joost Visser (Joost.Visser@cwi.nl)

	Usage:
	  de-norm-lit -i <Imploded-AsFix> -o <Imploded-AsFix>

	  Replaces all occurences of "lit" in an Imploded-AsFix
	  tree by occurences of "qlit" and "uqlit". Any literal
	  that _can_ be converted to an unquoted literal _will_
	  be. Otherwise it is converted to a quoted literal.

	  See also: norm-lit.
*)

imports
 Literal-lib asfix Literals-Sdf-Syntax

strategies

  de-norm-lit
    = iowrap(sometd(de-Normalize))

rules

  de-Normalize:
    lit(str)	-> uqlit(<is-UQLiteral>str)
  de-Normalize:
    lit(str)	-> qlit(<quote>str)

