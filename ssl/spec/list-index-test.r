\literate[list-index-test]

	\begin{abstract}
	Unit tests for list-index
	\end{abstract}

\begin{code}
module list-index-test
imports sunit list-index
strategies

  main = 
    test-suite(!"list-index-test",
      test1  ;
      test2  ;
      test3a ;
      test3b ;
      test3c ;
      test3d ;
      test4a ;
      test4b ;
      test5
    )

  test1 =
    apply-test(!"test1"
	, set-index
	, !(3, "a", ["a", "b", "c", "d", "e"])
	, !         ["a", "b", "c", "a", "e"]
	) 

  test2 =
    apply-test(!"test2"
	, insert
	, !(3, "a", ["a", "b", "c", "d", "e"])
	, !         ["a", "b", "c", "a", "d", "e"]
	)

  test3a =
    apply-test(!"test3a"
	, index
	, !(3, ["a", "b", "c", "d", "e"])
	, !"c"
	)

  test3b =
    apply-test(!"test3b"
	, index
	, !(1, ["a", "b", "c", "d", "e"])
	, !"a"
	)

  test3c =
    apply-test(!"test3c"
	, index
	, !(5, ["a", "b", "c", "d", "e"])
	, !"e"
	)

  test3d =
    apply-test(!"test3d"
	, index
	, !(1, ["a"])
	, !"a"
	)

  test4a =
    apply-test(!"test4a"
	, map-with-index(Fst; inc)
	, !["a", "b", "c"]
	, ![2, 3, 4]
	)

  test4b =
    apply-test(!"test4b"
	, map-with-index(Fst; inc)
	, ![]
	, ![]
	)

  test5 =
    apply-test(!"test5"
	, add-indices
	, !["a", "b", "c", "d", "e"]
	, ![(1, "a"), (2, "b"), (3, "c"), (4, "d"), (5, "e")]
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
