\literate[tuple]

	\begin{abstract}

	Signature of tuples and simple operations.

	\end{abstract}

	Starting with Stratego 0.6.5 the representation of tuples with
	TNil and TCons is replaced with fixed length tuples constructed
	using the empty identifier.

\begin{code}
module tuple-cons
//signature
  //sorts Prod(ListType)
  //constructors
    //TNil  : Prod([])
    //TCons : a * Prod(lt) -> Prod(Cons(a, lt))
    //Pair  : a * b -> Prod([a,b])
overlays
  Pair(x, y) = (x, y)
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
