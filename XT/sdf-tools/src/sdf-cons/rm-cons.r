module rm-cons
(*
	Author: Joost Visser (Joost.Visser@cwi.nl)

	Usage:
	  rm-cons -i <Imploded-AsFix> -o <Implode-AsFix>

	Removes all cons(...) attributes from the productions
	in an Sdf grammar.
*)

imports
  lib Kernel-Sdf-Syntax Label-Sdf-Syntax

strategies

  main
    = iowrap(rm-cons)

  rm-cons
    = rec x( attrs(filter(not(?cons(_))))
          <+ all(x)
	  <+ id
           )
    ; simplify-sdf

  simplify-sdf
    = reduce(Simplify-sdf)

rules

  Simplify-sdf:
    attrs([])				-> no-attrs()

signature

  constructors
    no-attrs: 					   Attributes
    attrs: List(Attr)				-> Attributes

