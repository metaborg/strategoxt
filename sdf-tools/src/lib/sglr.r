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

module sglr
imports exec gt-paths asfix

rules

  sglr : 
    (tbl, 'in, out) -> out
    where
      <call> (<concat-strings>[SGLR, "/bin/sglr"], ["-2", "-p", tbl, "-i", 'in, "-o", out])


  sglr : 
    (tbl, 'in) -> tree
    where
      <conc-strings> ("/tmp/sglr", <get-pid; int-to-string>()) => out; 
      <sglr> (tbl, 'in, out);
      <ReadFromFile> out => parsetree(tree,_);
      <rm-files> [out]
