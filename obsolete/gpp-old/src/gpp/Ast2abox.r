\literate[Ast2abox]
% GT -- Grammar Tools
% Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
%                    Eelco Visser <visser@acm.org>
%                    Joost Visser <jvisser@cwi.nl>
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

% $Id: Ast2abox.r,v 1.1 2001/06/05 09:11:46 mdejonge Exp $

% Author: Merijn de Jonge (mdjonge@cwi.nl)

\begin{code}
module Ast2abox

imports
   pp-tables-io instantiate lib misc gpp_options asfix

signature
   constructors
      PP-Table : String -> Option
      
strategies
   Ast2abox = iowrapO( ast2abox, 
                   Option( "-v", !Verbose()) +
                   ArgOption( "-p", \x -> PP-Table(x)\  ), usage'  )

   ast2abox =
      ?(options, term);
      // Obtain list of pp tables. Reverse to get correct ordering of
      // tables
      <collect(\ PP-Table(t) -> t \)>options;reverse;
      read-pp-tables;
      <trm2abox>term;
      // In case the constructed abox term is a list of aboxes, we put it in
      // a HV box.
      try( is-list; \x -> HV([], x ) \ );
      split(!options, id)
      
trm2abox =
   ?s;
   is-string;
   !S(s)

trm2abox =
   is-list;
   map( trm2abox )
   
trm2abox =
   // Obtain function symbol and a list of arguments. 
   ?f#( args );

   // Obtain a box template for "f"
    <pp-table-get'>[f] => (path, abox);

   <nzip( {x, y, a: \(x, y) -> a 
      where
         !(x, [f], y);
         arg2abox => a
         \ } )> args => aboxes; 
  
   <instantiate>( abox, aboxes )

strategies
arg2abox =
   ?(n, path, arg);
   <conc>(path, [n]) => new_path;
   (
      pp-table-get => (full_path, template);
      <get-symbol>full_path => symbol;
      <symbol2abox>( symbol, new_path, template, arg)
   <+
      <trm2abox>arg
   )

// Rule to format alt(n,[]), with empty list of arguments
symbol2abox =
   ?( alt, path, template, alt(n, []));
   <instantiate>([<index>(n, template)], [] )

// Rule to format alt(n,[arg]), with non-empty list of arguments
symbol2abox =
   ?( alt, path, template, alt(n, [arg]));
   <arg2abox>(n, path, arg) => aboxes;
   <instantiate>([<index>(n, template)], [aboxes] )
   

// Rule to format optional: Some(x)
symbol2abox =
   ?( opt, path, template, Some(x) );
   <conc>(path, [1]) => new-path;
   <arg2abox>(1, path, x) => aboxes;
   <instantiate>(template, [aboxes])

// Rule to format optinal: None
symbol2abox =
   ?( opt, path, template, None ); ![]

// Rule to format iter and iter-star list
symbol2abox =
   (
   ?( "iter", path, template, lst )
   +
   ?( "iter-star", path, template, lst ) 
   );
   <map( { t, ab: \t -> ab 
       where
          !(1, path, t);arg2abox => ab \ } ) >lst => aboxes;
   <instantiate>(template, [aboxes])


// Rule to format iter-sep and iter-star-sep list
symbol2abox =
   (
    ?( "iter-sep", path, template, lst )
   +
    ?( "iter-star-sep", path, template, lst )
   );
   <nzip(BuildSepList(!path) )>lst => aboxes;
   (
      // For correct instantiation, we have to make sure that the 
      // list of elements contains separators. In case the box template
      //  contains only a single placeholder, we extend the listof elements
      //  with "dummy" separators.
      <collect'(S(id));length>template;
      ?1;
      !aboxes;
      rec x({e, xs:
         ?[]; ![]
         <+
         ?[e]; ![e]
         <+
         ?[e|xs]; ![e,e|<x>xs]
      })
      <+
      !aboxes
   );
   instantiate-sep-list(!template)

// Rule ro format sequences
symbol2abox =
   ?( "seq", path, template, lst );
   <tuple2list>lst;
   nzip( {n, t, abox: \(n,t) -> abox
      where
      <arg2abox>(n, path, t) => abox \ } ) => aboxes;
   <instantiate>(template, aboxes)

rules
// Build a sepator list by formatting its elements which are numbered
// tuples. Odd entries denote symbols and are formatted using the path
// <path>.1; even entries denote separators and are formatted using the path
// <path>.2
BuildSepList( path ): (n, s ) -> abox
where
   <even>n;
   !(2, <path>(), s); arg2abox => abox
   <+
   !(1, <path>(), s); arg2abox => abox

// The symbol of the SDF production is contained in the path of pretty-print
// rules. Get-symbol returns the last symbol of a path.
get-symbol: Path(cons-name, selectors) -> symbol
   where
   <at-last( [selector(id, ?symbol)] )>selectors
\end{code}
