module norm-lit
(*
	Author: Joost Visser (Joost.Visser@cwi.nl)

	Usage:
	  normlit -i <Imploded-AsFix> -o <Imploded-AsFix>

	  Replaces all occurences of "uqlit" and "qlit" nodes
	  in an Imploded-AsFix tree by "lit" nodes. Enclosing
	  double quotes of quoted literals ("qlit") are stripped
	  away.

	  Input trees can be parsed and imploded Sdf2 grammars, or
          AsFix trees (which contain parsed and imploded Sdf2
	  productions).

	  See also: de-norm-lit.
*)

imports
  Literal-lib Literals-Sdf-Syntax asfix

strategies

  norm-lit
    = iowrap(alltd(Normalize))

rules

  Normalize:
    uqlit(str)	-> lit(str)
  Normalize:
    qlit(str)	-> lit(<de-quote>str)

