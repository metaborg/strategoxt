// SDF Tools
// Copyright (C) 2001 Merijn de Jonge <mdejonge@cwi.nl>
//                    Eelco Visser <visser@acm.org>
//                    Joost Visser <jvisser@cwi.nl>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2, or (at your option)
// any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
// 02111-1307, USA.           


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
 Literal-lib asfix Literals-Sdf-Syntax termid

strategies

  de-norm-lit
    = io-idwrap(InOutId("\"sdf-2.1\"", !"\"sdf-2.1\""),sometd(de-Normalize))

rules

  de-Normalize:
    lit(str)	-> uqlit(<is-UQLiteral>str)
  de-Normalize:
    lit(str)	-> qlit(<quote>str)

