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

% $Id: get-modules.r,v 1.3 2001/08/09 11:58:35 mdejonge Exp $

\begin{code}
module get-modules
imports options pack-graph graph-terms Literal-lib GraphXML

signature
   constructors
      GraphOutput    : Option
      GraphXMLOutput : Option
      FullPathName   : Option
      Include        : String -> Option
      Ext            : String -> Option
   constructors
      Node : String                           -> GraphItem
      Node : ModuleName * Location            -> GraphItem
      Node : ModuleName * Location * OutEdges -> GraphItem
      Edge : SourceString * TargetString      -> GraphItem

strategies

   get-modules( get-imports, def-ext ) =
   parse-options( 
            ArgOption( "-I", \ x -> Include(x) \ ) +
            ArgOption( "-e", \ x -> Ext(x) \ ) +
               Option( "-l",          !FullPathName ) +
               Option( "--ig",        !GraphOutput ) +
               Option( "-g",          !GraphOutput ) +
               Option( "--graphxml" , !GraphXMLOutput ) + 
               io-options );
   ?options;

   // Option handling
   try(need-help(get-modules-usage));
   where( filter( \ Include(p)->p \ ) => path );
   where(option-defined(?Ext(ext) ) <+ def-ext => ext);
   where(option-defined(?Input(infile)) <+ stdin => infile );

   <get-imports(!path, !ext)> infile;
   (
      where(<option-defined(?FullPathName())>options);
      map(try(\ Node(_,x) -> Node(x) \ ))
   <+
      map(try(\ Node(x,_) -> Node(x) \ ))
   );
   (
      // Generate IG output
      where(<option-defined(?GraphOutput())>options) ;
      split( collect( \ Node(x)    ->  <mkterm>("id", [x]) \ ), 
             collect( \ Edge(x, y) -> [<mkterm>("id", [x]),
                                       <mkterm>("id", [y])] \ ) ); 
      ?(nodes, edges); 
      !graph( nodes(nodes), edges(edges))
   <+
      // Generate GraphXML output
      where(<option-defined(?GraphXMLOutput())>options) ;
      split( collect( \ Node(x)    -> node1(name(<quote>x)) \ ), 
             collect( \ Edge(x, y) -> edge1([source(<quote>y), 
                                      target(<quote>x)]) \ ) ); 
      ?(nodes, edges); 
      !GraphXML( [], [graph([], <conc>(nodes, edges))])
   <+
      filter( \Node(x) -> x\ ) 
   );
   split( !options, id);
   output-file


  get-modules-usage =
    option-defined(?Program(prog));
    <printnl> (stderr,
	       ["usage : ", prog, 
                " [-S] [-I dir] [-i file]",
		" [-o file] [-s] [--help|-h|-?]",
                " [-g|--graphxml] [-l]",
                " [--ig]",
                " [-e ext]" ]);
    <exit> 1
\end{code}
