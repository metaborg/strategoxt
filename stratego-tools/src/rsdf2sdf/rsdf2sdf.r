module rsdf2sdf
(*
	Author: Joost Visser (Joost.Visser@cwi.nl)

	Usage:
	  rsdf2sdf -i <RSdf-ADT> -o <Sdf-AST>

	Sdf-ADT		The imploded AsFix representation of
			an (Stratego+)Sdf definition.
	Sdf-ADT		The imploded AsFix representation of
			an Sdf definition.

	Sdf structures are passed-through unchanged.
	Stratego structures are changed into empty-grammars.
*)

imports
  lib Stratego-Specifications Grammar-Syntax termid

strategies

  main
    = io-idwrap("\"sdf-stratego-0\"", rsdf2sdf)

  rsdf2sdf
    = rec x(gramfilter <+ all(try(x)));
      termid(!"\"sdf-2.1\"")

rules

  gramfilter:
    Signature(t)	-> empty-grammar()
  gramfilter:
    Overlays(t)		-> empty-grammar()
  gramfilter:
    Rules(t)		-> empty-grammar()
  gramfilter:
    Strategies(t)	-> empty-grammar()
