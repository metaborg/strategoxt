\literate[int-list-test]

	\begin{abstract}
	Tests for operations on integer lists
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
module int-list-test
imports int-list sunit

strategies 

  main = 
    test-suite(!"int-list-test",
	sort-test;
	is-interval-test;
	is-not-interval-test
    )
 
  sort-test =
    apply-test(!"sort-test",int-sort,![4,3,5],![3,4,5])

  is-interval-test =
    apply-test(!"is-interval-test",is-interval,![2,3,4],!(2,4))

  is-not-interval-test =
    apply-test(!"is-interval-test",not(is-interval),![2,3,5],![2,3,5])
\end{code}
