\literate[list-filter-test]

	\begin{abstract}
	Tests for filtering lists
	\end{abstract}

\begin{code}
module list-filter-test
imports sunit list-filter
strategies

  main = 
    test-suite(!"list-filter-test",
      test1;
      test2
    )

  test1 =
    apply-test(!"test1"
	, filter(?("a",_))
	, ![("b",0),("a","b"),("b","c"),("a",1)]
	, ![("a","b"),("a",1)]
	)

  test2 =
    apply-test(!"test2"
	, partition(is-string)
	, ![0,"a","b",1]
	, !(["a","b"],[0,1])
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
