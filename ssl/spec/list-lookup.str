\literate[list-lookup]

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

	Lookup: find value associated to key 

	Find first element of a list to which a strategy s applies 

	An alternative formulation of lookup is the following. The
	advantage over lookup is that it does not construct
	intermediate pairs.

\begin{code}
module list-lookup
imports list-basic
rules

  Look1 : (x, [(x, y)|_]) -> y
  Look2 : (x, [_|xs]) -> (x, xs)

  Look1'(keyeq) : (x, [y|_]) -> y where <keyeq> (x, y)

strategies

   lookup = rec x(Look1 <+ Look2 ; x)

   getfirst(s) = rec x(Hd; s <+ Tl; x)

   lookup' = {x, xs: ?(x, xs) ; <getfirst({y: ?(x, y); !y})> xs}

   lookup(keyeq) = rec x((Look1'(keyeq) <+ Look2; x))
\end{code}
