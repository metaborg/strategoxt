\literate[list-index]

	\begin{abstract}

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
module list-index
imports list-cons simple-traversal
rules

  Ind1   : (1, [x | xs]) -> x
  Ind2   : (n, [x | xs]) -> (<subt> (n, 1), xs) where <geq> (n, 2)

  Gind0  : (x, ys) -> (1, x, ys)
  Gind1  : (n, x, [x | xs]) -> n
  Gind2  : (n, y, [x | xs]) -> (<add> (n, 1), y, xs)

strategies

(* Index: Get the n-th element of a list *)

  index = repeat(Ind2) ; Ind1

(* Get-index: get index of element in list *)

   get_index = Gind0 ; rec x(Gind1 <+ Gind2 ; x)
   get-index = Gind0 ; rec x(Gind1 <+ Gind2 ; x)

   get-index0(s) = at-suffix([s | id]; ![]); length
\end{code}

