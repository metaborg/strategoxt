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
                                                 

module sdf-doc
imports
  lib Sdf-Syntax graph-terms termid

strategies

  main
    = io-idwrap(InId("\"sdf-2.1\""), sort-graph)

  sort-graph
    = collect( \prod    (  ss,sort(s),_) -> <build-edges>(ss,s)\
            <+ \prod-fun(_,ss,sort(s),_) -> <build-edges>(ss,s)\
            <+ \alias   (   a,sort(s))   -> <build-edges>(a ,s)\
             , skip-appl // skip the production child of non-imploded application node
             )
    ; concat
    ; graph-from-edges

  graph-from-edges
    = \edgelist -> graph(nodes(<collect-nodes>edgelist),edges(edgelist))\

  build-edges
    = \(ss,s) -> <filter(collect(\sort(x)-><mk-edge>(x,s)\));concat>ss\

  mk-edge
    = \(x,y) -> ['id(x),'id(y)]\

  skip-appl(x,t)
    = \appl(_,ts) -> <x>ts\

  collect-nodes
    = collect(?'id(_))

signature
  constructors
    appl : Production * List(AsFixTerm) -> AsFixTerm
