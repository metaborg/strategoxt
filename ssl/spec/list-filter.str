\literate[list-filter]
\begin{code}
module list-filter
imports list
strategies

  filter(s) = 
    [] + [s | filter(s)] <+ ?[_ | <filter(s)> ]

  filter-gen(pred, cont : term * (term -> term) -> term) =
    rec x([] + (pred; cont(x)) <+ Tl; x)

  (* filter(s) = filter-gen([s | id], at-tail) *)

  skip1(s) = at-tail(s)
  skip2(s) = at-tail(at-tail(s))

  filter-option-args(flag) = filter-gen([flag | id]; Tl, skip1)

  filter-options(flag) = filter-gen([flag | id], skip2)

  // partition(s) = split(filter(s), filter(not(s)))

  partition(s) = rec part(
    \ [] -> ([],[]) \
    + ({[s => x | id]; ?[_|<part>]; !([x | <Fst>], <Snd>)} <+
       {[id =>x | id]; ?[_|<part>]; !(<Fst>, [x | <Snd>])})
  )

  partition'(s) = rec part(
    \ [] -> ([],[]) \
    + \ [z | zs] -> <!([<s> z | xs], ys) <+ !(xs, [z | ys])>
        where <part> zs => (xs, ys) \
  )

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
