\literate[pp-tables]
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

% $Id: pp-tables-io.r,v 1.1.1.1 2001/06/05 09:11:48 mdejonge Exp $

% Author: Merijn de Jonge (mdjonge@cwi.nl)

\begin{code}

module pp-tables-io

imports
   lib pp-tables Literal-lib gpp_options

strategies

read-pp-tables =
   ?names;
   <table-create>"pp-table";
   <map(notify(!"Reading table: "); ReadFromFile; build-pp-table)>names

// Add entries to table. Reverse the list of entries to get correct ordering
// of entries.
build-pp-table =
   ?PP-Table(Entries);
   <reverse;map(makePPEntry;StoreEntry)>Entries

StoreEntry =
   ?PP-Entry( path, value );
   <table-put>("pp-table", <mk-key>path, (path, value));
   <path-to-string;notify(!"storing: ")>path

StoreEntryIfNotExists = 
      ?PP-Entry( path, value );
      (
         where(<table-get>("pp-table", <mk-key>path ))
      <+
         StoreEntry
      )
   

mk-key = ?Path1( s ) ;![s]
       <+
         ?Path( s1, s2 ) ;
          <map( {a, b: \ selector( a, b) -> a \ })>s2 =>  xs;
          ![s1|xs]

path-to-string = 
      ?Path1(s); !s
   <+
      ?Path( s1, s2 );
      <map( \selector(a,b) -> [".", <int-to-string>a,":", b] \ );concat>s2 => s3;
      <concat-strings>[s1 | s3]        

makePPEntry = topdown( try(MakePPTerm ) )

MakePPTerm = 
           ?Arg(n); !Arg(<string-to-int>n)
          +
           ?Arg2(n, m); !Arg2(<string-to-int>n, <string-to-int>m)
          +
           ?SOpt(x,n); !SOpt(x, n)
          +
           ?S( x ) ; !S(<de-quote;de-escape>x)
          +
           ?selector(n, x ); !selector(<string-to-int>n, x )
           

pp-table-get =
   ?key;
   <table-get>("pp-table", key ) => (path, template);
   where ( <path-to-string>path ; notify(!"obtaining: " ))

pp-table-get' =
   ?key;
   (
      pp-table-get 
   <+
      debug(!"No pp entry found for: ");
      fail
   )

pp-table-put =
   ?(key, value);
   !key;
   where(path-to-string; notify( !"storing: "));
   <table-put>("pp-table", key, value )

\end{code}
