\literate[{\btt PACK-MODULES}]

% Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
% 
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.

% $Id: stratego-imports.r,v 1.3 2002/03/19 12:39:00 eelco Exp $

\begin{code}
module stratego-stratego
imports
  lib pack-graph file
  get-modules
  Stratego-Specifications Stratego-Modules gt-paths

strategies

  main = get-modules(stratego-imports, !"r"); <exit>0

  stratego-imports(mkpt, ext) =
	\ root -> (root, (), []) \;
	graph-nodes(Fst; parse(parse-mod, mkpt, ext),
		    out-edges,
                    add-node )


  parse(parser, mkpath, ext) =
        ?module-name;
        find-file(mkpath, ext) => m;
	where(\ 'in -> <printnl> (stderr, ["  including ", 'in]) \ );
        split(id, parser) => tree;
        <get-stratego-imports>tree => i;
        !Node(module-name,m,i)

get-stratego-imports =
   \ (_, Specification(xs)) -> xs \;
   filter(\ Imports(xs) -> xs \ );
   concat

rules

add-node: (_, Node( n, location, edges), xs) -> <conc>(xs',[Node(n, location)])
   where
      <map( add_edge(!n) ) >edges => edges';
      <conc>(edges', xs) => xs'

parse-mod : 'in -> trm
     where <conc-strings> ("imports-stratego",
          <get-pid; int-to-string>()) => out;
          <call>("parse-mod", ["-silent", "-i", 'in, "-o", out]);
          <ReadFromFile> out => trm;
          <rm-files>[out]

out-edges:
   Node( _, _, edges ) -> edges


add_edge(source) : 
   target -> Edge(<source>(), target )

\end{code}
