\literate[int-list]

	\begin{abstract}
	Operations on integer lists
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
module int-list
imports list integers
strategies

  sum = foldr(!0, add)

  average = split(sum, length); div

  list-min = list-accum(min)

  list-max = list-accum(max)

  list-accum(s) = split(Tl, Hd); foldl(s)

  add-lists = list-accum(zip(add <+ !""))

  averages = 
  { len: where(length => len);
    add-lists;
    map(try(sect(div, !len)))
  }

  round-list = map(test(sect(leq, !100)) <+ int)

  int-sort = sort-list(SortL(gt))

  is-interval-from = 
  rec r(
    \ (low,[]) -> low \
    <+ {l: \ (low,[x|xs]) -> <r>(x,xs)
           where <add>(low,1) => l
               ; <eq>(x,l)\ }
  )

rules

  is-interval:
    [x|xs]
  ->
    (x,<is-interval-from>(x,xs))

\end{code}
