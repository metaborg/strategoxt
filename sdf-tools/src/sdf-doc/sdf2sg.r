(*
 GT -- Grammar Tools
 Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
                    Eelco Visser <visser@acm.org>
                    Joost Visser <jvisser@cwi.nl>

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2, or (at your option)
 any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 02111-1307, USA.

 $Id: sdf2sg.r,v 1.2 2001/08/09 12:02:39 mdejonge Exp $
*)

module sdf2sg
imports
  lib sdf-analysis GraphXML Literal-lib

strategies

  main
    = iowrap(sort-graph)

  sort-graph
    = where(collect-edges => es)
    ; where(collect-nodes => ns)
    ; !(es,ns);conc
    //; !(es,[]);conc
    //; !es
    ; graph-from-edges

  collect-edges
    = collect( \prod    (  ss,s,_) -> <build-edges>(ss ,<get-sortname>s)\
            <+ \prod-fun(_,ss,s,_) -> <build-edges>(ss ,<get-sortname>s)\
            <+ \alias   (   a,s)   -> <build-edges>([a],<get-sortname>s)\
             , skip-appl // skip the production child of non-imploded application node
             )
    ; concat
    ; uniq

  get-sortname
    = \sort(s) -> s\
   <+ \layout() -> "LAYOUT"\

(*
  collect-nodes
    = where( declared-sorts        => alldecs )
    ; where( <uniq>alldecs         => decs )	// Declared sorts
    ; where( defined-sorts         => defs ) 	// Defined sorts
    ; where( used-sorts            => uses )	// Used sorts
    ; where( !(defs,uses);diff     => tops )	// Top sorts
    //; where( !alldecs; doubles             )    // Multiply declared sorts
    ; where( !(defs,uses);union    => srts )
    ; where( !(srts,decs);diff     )		// Non-declared sorts
    ; where( !(uses,defs);diff     => bs   )	// Bottom sorts
    ; where( !(tops,decs);diff     => ndts )	// Non-declared top sorts
    ; where( !(decs,srts);diff     )		// Unknown declared sorts
    ; !bs ; map( \s -> node1([name(<quote>s),class(<quote>"bottom")])\ )
*)

  collect-nodes
    = \grammar -> nodes
       where <declared-sorts>grammar => alldecs
           ; <uniq>alldecs           => decs	// Declared sorts
           ; <defined-sorts>grammar  => defs	// Defined sorts
           ; <used-sorts>grammar     => uses	// Used sorts
           ; <diff>(defs,uses)    => tops	// Top sorts
           ; <union>(defs,uses)   => srts 
           ; <diff>(srts,decs)			// Non-declared sorts
           ; <diff>(uses,defs)    => bs		// Bottom sorts
           ; <diff>(tops,decs)    => ndts	// Non-declared top sorts
           ; <diff>(decs,srts)			// Unknown declared sorts
           ; <isect>(tops,decs)   =>  dts	// Declared top sorts
           ; <concat>[<map(mk-bottom-node)>bs,
                      <map(mk-nondeclared-top-node)>ndts,
                      <map(mk-declared-top-node)>dts,
                      <map(mk-declared-node)>decs
                     ]              => nodes
       \

  mk-bottom-node
    = \n -> node1([name(<quote>n),class(<quote>"bottom")])\
  mk-nondeclared-top-node
    = \n -> node1([name(<quote>n),class(<quote>"nondeclared-top")])\
  mk-declared-top-node
    = \n -> node1([name(<quote>n),class(<quote>"declared-top")])\
  mk-declared-node
    = \n -> node1([name(<quote>n),class(<quote>"declared")])\

  graph-from-edges
    = \es -> GraphXML([],[graph([],es)])\

  build-edges
    = \(ss,s) -> <filter(collect(\x -> <mk-edge>(<get-sortname>x,s)\));concat>ss\

  mk-edge
    = \(x,y) -> edge1([source(<quote>x),target(<quote>y)])\

  skip-appl(x,t)
    = \appl(_,ts) -> <x>ts\

signature
  constructors
    appl : Production * List(AsFixTerm) -> AsFixTerm
