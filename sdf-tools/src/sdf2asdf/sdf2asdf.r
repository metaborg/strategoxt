module sdf2asdf
(* 
	Author: Joost Visser (Joost.Visser@cwi.nl)

	Usage:

	  sdf2asdf -i <sdf> -o <asdf>

	where
	  <sdf>    File name of Sdf grammar in imploded AsFix
	  <asdf>   File name of AbstractSdf grammar in implode AsFix

	This tool maps an Sdf grammar to an AbstractSdf grammar. It
	assumes constructor attributes have already been added to all
	productions.  Productions without constructor attributes are
	ignored.
*)

imports
  Sdf2ASdf

strategies

  main
    = iowrap(sdf2asdf)
