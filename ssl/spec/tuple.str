\literate[tuple]

	\begin{abstract}

	Operations on tuples

	\end{abstract}

\begin{code}
module tuple
imports list-cons tuple-cons list-index list-zip
strategies

  TupleToList : "" # (xs) -> xs
  ListToTuple : xs -> "" # (xs)

  Fst   : "" # ([x | xs]) -> x
  Snd   : "" # ([x, y | xs]) -> y
  Third : "" # ([x, y, z | xs]) -> z

  Dupl  : x -> (x, x)

  split(f, g) = !(<f>, <g>)
  split3(f, g, h) = !(<f>, <g>, <h>)

  Swap : (x, y) -> (y, x)

  Thd = Fst
  Ttl : "" # ([x | xs]) -> "" # (xs)

	
  // tindex: get the nth element of a tuple

  tindex = 
    (id, ?""#(<id>)); index

  is-tuple = 
    ?""#(_)

  // tmap: apply a strategy to each element of a tuple

  tmap(s) = 
    is-tuple; all(s)

  // Tuple Concat: concatenate the lists in a tuple of lists, where the
  // concatenation strategy s is a parameter.

  tconcat(s) = 
    is-tuple; crush(![], s)

  tconcat'(s1, s2) = 
    is-tuple; crush(<s1> [], s2)

  //at_tsuffix(s) = 
  //  rec x(s <+ TCons(id, x))

  tcata(s1, s2) = 
    is-tuple; crush(s1, s2)

  tfoldr(s1, s2) = 
    tcata(s1, s2)

  tzip(s)  = 
    (TupleToList, TupleToList); zip(s)

  tuple-zip(s) = 
    rec x(![<tmap(Hd); s> | <tmap(Tl); x>]
          <+ tmap([]); ![])

  tuple-unzip(s) =
    rec x(![<map(Thd); s> | <map(Ttl); x>] <+ map(()); ![])
  ; !"" #(<id>)

\end{code}

% Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>
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
