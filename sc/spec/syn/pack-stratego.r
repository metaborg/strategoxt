\literate[pack-stratego]

	\begin{abstract}

	Module flattening strategy for Stratego based on the generic
	graph flattening algorithm from the library.
	The program handles command-line options for indicating paths
	to directories with library modules and finds modules based on
	such a path.
	It writes dependencies for inclusion in a Makefile to the .r.dep file.
	Pack-stratego calls an external process (parse-mod) for parsing
	individual modules.

	\end{abstract}

% Pack-Stratego: A Tool for flattening a Stratego module hierarchy
%
% Copyright (C) 2000 Eelco Visser <visser@acm.org>
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

\begin{code}
module pack-stratego
imports lib pack-graph pack-modules sugar dynamic-rules

strategies

  main = 
    where([get-path => prefix | id]; rules(Prefix : () -> prefix));
    pack-modules(pack-stratego, basename)

  pack-stratego(mkpt) =
	\ root -> (["list-cons","tuple-cons",root], (), []) \;
	graph-nodes-roots(Fst; get-module(!["." | <mkpt>()])
		         ,get-stratego-imports
		         ,\ (n,x,xs) -> [x|xs] \ );
	unzip;
	(id, flatten-stratego)


  get-module(mkpath) =
     guarantee-extension(!"r"); //debug(!"looking for: ");
     split(id, mkpath); find-in-path;
     (   split(id, parse-mod)
      <+ <fatal-error> ["parse error in ", <id>])

  <+ guarantee-extension(!"tree"); //debug(!"looking for: ");
     split(id, mkpath); find-in-path;
     split(id, ReadFromFile)

  <+ <fatal-error> ["module ", <id>, " not found"]

  get-stratego-imports =
    \ (_, Specification(xs)) -> xs \;
    filter(\Imports(xs) -> xs\ );
    concat

  flatten-stratego = 
    map(\Specification(xs) -> xs\; filter(not(Imports(id))));
    concat; 
    \ xs -> Specification(xs) \ 

rules

  parse-mod : 
    'in -> trm
    where <conc-strings> ("pack-stratego", 
                          <get-pid; int-to-string>()) => out; 
	  (* <printnl> (stderr, ["  parsing ", in]); *)
	  <call>(<conc-strings>(<Prefix>(),"parse-mod"), 
		 ["-silent", "-i", 'in, "-o", out]);
	  <ReadFromFile> out => trm;
	  <rm-files> [out]
\end{code}

