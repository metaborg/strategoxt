\literate[Pack-Stratego: Flattening a Stratego module hierarchy]

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

\begin{code}
module pack-stratego
imports lib pack-graph pack-modules sugar dynamic-rules
signature
  constructors
    Prefix : Option

strategies

  main = 
    where([get-path => prefix | id]; rules(Option : Prefix -> prefix));
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
     <find-in-path> (<id>, <mkpath>);
     (   !(<id>, <parse-mod>)
      <+ <fatal-error> ["parse error in ", <id>])

  <+ guarantee-extension(!"cr"); //debug(!"looking for: ");
     <find-in-path> (<id>, <mkpath>);
     (   !(<id>, <parse-cmod(mkpath)>)
      <+ <fatal-error> ["parse error in ", <id>])

  <+ guarantee-extension(!"mtree"); //debug(!"looking for: ");
     <find-in-path>(<id>, <mkpath>); 
     !(<id>, <ReadFromFile>)

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
    filein -> trm
    where <conc-strings> ("pack-stratego", 
                          <get-pid; int-to-string>()) => fileout; 
	  (* <printnl> (stderr, ["  parsing ", filein]); *)
	  <call>(<conc-strings>(<Option>Prefix,"parse-mod"), 
		 ["-silent", "-i", filein, "-o", fileout]);
	  <ReadFromFile> fileout => trm;
	  <rm-files> [fileout]


  // parse module with concrete syntax terms

  parse-cmod(mkpath) : 
    filein -> trm
    where 
	debug(!"parse-cmod a: ");
	<basename; guarantee-extension(!"syn"); ReadFromFile> filein => syntax#(_);
	debug(!"parse-cmod b: ");
	<get-parse-table(mkpath)> syntax => tbl;
	debug(!"parse-cmod c: ");
	new-file => fileout1; new-file => fileout2; 
        new-file => fileout3; 
        <basename; guarantee-extension(!"rtree")> filein => fileout4; 
        new-file => fileout5;
	debug(!"parse-cmod d: ");
	<call> ("sglr",  ["-2", "-p", tbl, "-i", filein,   "-o", fileout1]);
	debug(!"parse-cmod e: ");
	<call> ("implode-asfix",    ["-i", fileout1, "-o", fileout2]);
	debug(!"parse-cmod f: ");
	<call> (<conc-strings>(<Option>Prefix,"meta-explode"), ["-i", fileout2, "-o", fileout3]);
	debug(!"parse-cmod g: ");
	<call> ("stratego-desugar", ["-i", fileout3, "-o", fileout4]);
	debug(!"parse-cmod h: ");
	<ReadFromFile> fileout4 => trm;
	<debug(!"parse-cmod ast in: ")> fileout4

  get-parse-table(mkpath) :
    syntax -> tbl2
    where
    debug(!"get-parse-table a: ");
    <guarantee-extension(!"tbl")> syntax => tbl1;
    debug(!"get-parse-table b: ");
    ( <find-in-path> (tbl1, <mkpath>)
    <+ <get-syntax-definition(mkpath)> syntax => def;
       debug(!"get-parse-table c: ");
       <call> ("sdf2table", ["-i", def, "-o", tbl1, "-m", syntax]);
       debug(!"get-parse-table d: ");
       !tbl1
    )  => tbl2

  get-syntax-definition(mkpath) :
    syntax -> def
    where 
        debug(!"get-syntax-definition a: ");
	<guarantee-extension(!"def")> syntax => def;
        debug(!"get-syntax-definition b: ");
        ( <find-in-path> (def, <mkpath>);
          debug(!"get-syntax-definition c: ")
        <+ <guarantee-extension(!"sdf")> syntax => sdf;
           debug(!"get-syntax-definition d: ");
	   new-file => adef;
           <call> ("pack-sdf", ["-i", sdf, "-o", adef | <mkpath;map(!["-I", <id>]); concat>]);
           <call> ("asource",  ["-i", adef, "-o", def ]);
           debug(!"get-syntax-definition e: ");
	   !def
        )
\end{code}

% Copyright (C) 2000-2002 Eelco Visser <visser@acm.org>
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
