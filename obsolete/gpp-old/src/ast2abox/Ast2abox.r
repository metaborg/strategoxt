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

% $Id: Ast2abox.r,v 1.3 2002/03/14 16:47:21 eelco Exp $

% Author: Merijn de Jonge (mdjonge@cwi.nl)

\begin{code}
module Ast2abox

imports
   pp-tables-io instantiate lib misc asfix

signature
   constructors
      PP-Table : String -> Option
      
strategies
   Ast2abox = iowrap( ast2abox, 
                   Option( "-v", !Verbose()) +
                   ArgOption( "-p", \x -> PP-Table(x)\ ,
                    !"-p <table>       Use pretty-print entries from <table>"))

  ast2abox =
    ?(options, term);
    // Obtain list of pp tables. Reverse to get correct ordering of
    // tables
    <collect(\ PP-Table(t) -> t \)>options
    ; reverse
    ; read-pp-tables
     
    // translate term to abox
    ; <trm2abox>term
     
    // In case the constructed abox term is a list of aboxes, we put it in a HV box.
    ; try( is-list; \x -> HV([], x ) \ )
    ; split(!options, id)
      
trm2abox =
  trm2abox1 <+ trm2abox2 <+ trm2abox3

trm2abox1 =
   ?s;
   is-string;
   !S(s)

trm2abox2 =
   is-list;
   map( trm2abox )
   
trm2abox3 =
   // Obtain function symbol and a list of arguments. 
   ?f#( args )

   // Obtain a box template for "f"
   ; <pp-table-get'>[f] => (path, abox)

   ; <nzip( \ (x, y) -> <arg2abox> (x, [f], y) \ )>args => aboxes
  
   ; <instantiate>( abox, aboxes )

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

symbol2abox = 
  symbol2abox1 <+ symbol2abox2 <+ symbol2abox3 <+ symbol2abox4
  <+ symbol2abox5 <+ symbol2abox6 <+ symbol2abox7

// Rule to format alt(n,[]), with empty list of arguments
symbol2abox1 =
   ?( alt, path, template, alt(n, []));
   <instantiate>([<index>(n, template)], [] )

// Rule to format alt(n,[arg]), with non-empty list of arguments
symbol2abox2 =
   ?( alt, path, template, alt(n, [arg]));
   <arg2abox>(n, path, arg) => aboxes;
   <instantiate>([<index>(n, template)], [aboxes] )
   

// Rule to format optional: Some(x)
symbol2abox3 =
   ?( opt, path, template, Some(x) );
   <arg2abox>(1, path, x) => aboxes;
   <instantiate>(template, [aboxes])

// Rule to format optinal: None
symbol2abox4 =
   ?( opt, path, template, None ); ![]

// Rule to format iter and iter-star list
symbol2abox5 =
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
symbol2abox6 =
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
symbol2abox7 =
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
