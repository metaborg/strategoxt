\literate[tuple]

	\begin{abstract}

	Signature of tuples and simple operations.

	\end{abstract}

% Copyright (C) 1998-2001 Eelco Visser <visser@acm.org>
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
module tuple
imports list-cons tuple-cons
rules
  Fst   : TCons(x, tp) -> x
  Snd   : TCons(x, TCons(y, tp)) -> y
  Third : TCons(x, TCons(y, TCons(z, tp))) -> z
  TInd1 : (1, TCons(x, tp)) -> x
  TInd2 : (n, TCons(x, tp)) -> (<subt> (n, 1), tp)

  Dupl  : x -> (x, x)

  split(f, g)     : x -> (<f> x, <g> x)
  split3(f, g, h) : x -> (<f> x, <g> x, <h> x)

  Swap : (x, y) -> (y, x)

  Thd : TCons(x, xs) -> x
  Ttl : TCons(x, xs) -> xs

strategies

  tindex = rec x(TInd1 <+ TInd2 ; x)

  tmap(s) = rec x(TNil + TCons(s, x))

  tconcat(s) = rec y(\ TNil -> Nil\ 
                     + \ TCons(x, xs) -> (x, <y> xs)\ ; s)

  tconcat'(s1, s2) = 
    rec y(TNil; s1
          + \ TCons(x, xs) -> (x, <y> xs)\ ; s2)

  at_tsuffix(s) = rec x(s <+ TCons(id, x))

  tcata(s1, s2) = rec y(TNil; s1 <+
			\ TCons(x, xs) -> (x, <y> xs)\ ; s2)
\end{code}

\paragraph{Documentation}

	tindex: get the nth element of a tuple

	tmap: apply a strategy to each element of a tuple

	Tuple Concat: concatenate the lists in a tuple of lists, where the
	concatenation strategy s is a parameter.
