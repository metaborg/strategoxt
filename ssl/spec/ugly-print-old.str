\literate[ugly-print]
\begin{code}
module ugly-print
imports abox-ext
strategies

  ugly-print = 
  rec x(try(
	UP-Int 
	<+ UP-Str
	<+ UP-Cnst	
	<+ UP-Lst(x) 
	<+ UP-App(x)
  ))

rules

  UP-Cnst : 
    f#([]) -> S(f)

  UP-App(s) : 
    f#(xs) -> H0([S(f), Parens(V0(<map(s); post-commas> xs))])

  UP-Str :
    x -> <Quote> S(x) where <is-string> x

  UP-Int :
    x -> S(<int-to-string> x) where <is-int> x

  UP-Lst(s) :
    [] -> S("[]")

  UP-Lst(s) :
    l @ [x | xs] -> H0([S("["), V0(<map(s); post-commas> l), S("]")])
\end{code}

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

