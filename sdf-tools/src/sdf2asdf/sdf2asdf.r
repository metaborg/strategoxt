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
  Sdf2ASdf termid

strategies

  main
    = io-idwrap("\"sdf-2.1\"", sdf2asdf)
