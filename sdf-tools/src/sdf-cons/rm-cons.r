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

