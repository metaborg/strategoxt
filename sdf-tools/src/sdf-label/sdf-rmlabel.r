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


module sdf-rmlabel
imports asfix lib

  signature
    constructors
      label : Literal * Symbol -> Symbol
      'id: a -> a
      empty-layout : a
overlays

    label-overlay(u_20,v_20,w_20,x_20)
      = appl(prod([cf(sort("Literal")),cf(opt(layout)),lit(":"),cf(opt(layout)),cf(sort("Symbol"))],cf(sort("Symbol")),attrs([cons("label"),'id("Label-Sdf-Syntax")])), [u_20,v_20,appl(prod([char-class([58])],lit(":"),no-attrs),[58]),w_20,x_20])


strategies
    label-match(c_21,f_21)
      = label-overlay(c_21,id,id,f_21)

    label-build(k_21,n_21)
      = !label-overlay(<k_21>(),empty-layout(),empty-layout(),<n_21>())

    sdf-rmlabel = iowrap( topdown( try(\label-overlay(a,b,c,d) -> d\ ) ))
