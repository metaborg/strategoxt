\literate[misc]
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

% $Id: misc.r,v 1.1 2001/06/05 09:11:48 mdejonge Exp $

% Author: Merijn de Jonge (mdjonge@cwi.nl)

\begin{code}
module misc

strategies
even =
   ?num; <mod>(num,2);?0

tuple2list =
   rec x ( { t, ts:
         ?() ; ![]
      <+ 
         ?TCons( t, ts );
         ![t | <x>ts]
     } )

collect'(s) =
   rec x(
      s; \y -> [y]\ 
   <+ 
      crush(![],conc,x)
   )

// Try to flatten lists but do not change to total number of elements. This
// means that empty lists (containg for a single element) are not removed.
flat-list =
rec x({a,xs:
      []
   <+
      ?[[]|xs];[[]|<x>xs]
   <+
      ?[a|xs];<is-list>a;
      <conc;x>(a,xs)
   <+
      [id|x]
   })

remove-trailing(s) =
   rec x (
      [s|id];Tl;x
      <+
      id
   )

notify(s) =
   try(
   where(
      where(has-option(!Verbose));
      debug(s)
   ))
\end{code}
