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

\begin{code}
module imports-sdf
imports get-modules asfix
        lib pack-graph pack file Sdf-ParseTree-Syntax Kernel-Sdf-Syntax
        sglr gt-paths

signature
  sorts Node
  constructors
    Node: X * X * X -> Z

strategies

  main = get-modules(imports-sdf, !"sdf"); <exit>0

  imports-sdf(mkpt, ext) =
	\ root -> (root, ["." | <mkpt>()], []) \;
	graph-nodes(parse-sdf(ext),
		    out-edges,
                    add-node )


parse-sdf( ext) =
        (guarantee-extension(ext), id);
        ?module-name;
        find-in-path => m;
        debug(!"  including ");
        split(id , \'in -> <sglr> (<concat-strings>[SDFTOOLS, "/share/sdf-tools/sdf.cons.tbl"], 'in)\ ) => tree;
        <get-sdf-imports>tree => i;
        <get-module-name>tree => n;
        !Node(module-name, m, i)

rules

add-node: (m, Node( (f,p), location, edges), xs) -> <conc>(xs',[Node(m, location)])
   where
      <map( add_edge(!m) ) >edges => edges';
      <conc>(edges', xs) => xs'

out-edges:
   x -> edges
   where
      ?Node( _,_, edges )

get-sdf-imports:
   x -> y
   where 
      <collect(?appl(prod(_, cf(sort("Import")), _), _); get-module-name, skip)>x => y

get-module-name:
   x -> y
   where
      <oncetd(?appl(prod(_,cf(sort("ModuleId")),_),_);yield=>y)>x

add_edge(k) : x -> e
   where
      k             => k';
      !Edge(k', x ) => e

strategies
   yield = rec x(appl(id, map(x)); \ appl(p, ts) -> <concat> ts \
	        <+ \ a -> [a] \ ); 
           implode-string 

  skip(x,y) =  parsetree(x,id) 
             <+
               appl(prod(id, cf(sort("Module")), id), [id,id,id,x,id,x])
             <+
               appl(prod(id, cf(opt(layout) 
                              <+ 
                                sort("Productions") 
                              <+
                                sort("Symbols") 
                              <+
                                sort("Priorities")  
                              <+
                                sort("Restrictions")  
                              <+
                                sort("Aliases")  
                               ), id), id ) ; y
             <+
                prod(id,id,id); y

\end{code}
