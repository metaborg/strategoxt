\literate[list-set-test]

	\begin{abstract}
	Tests for set operations on lists
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
module list-set-test
imports list-set sunit

strategies 

  main = 
    test-suite(!"list-set-test",
	test1;  
	test2;  
	test3;  
	test4;  
	test5;
	test6;
	test7;
	test8;
	test9
     )

  test1 = 
    apply-test(!"test1"
	, union
	, !(["a","b"],["c","d"])
	, !["a","b","c","d"]
	)

  test2 =
    apply-test(!"test2"
	, union
	, !(["a","b"],["b","d"])
	, !["a","b","d"]
	)

  test3 = 
    apply-test(!"test3"
	, diff
	, !(["a","b"],["c","d"])
	, !["a","b"]
	)

  test4 =
    apply-test(!"test4a"
	, diff
	, !(["a","b"],["b","d"])
	, !["a"]
	);
    apply-test(!"test4b"
	, isect
	, !(["a","b"],["b","d"])
	, !["b"]
	)

signature
  constructors
    F : A * A -> A
    G : A * A -> A
    H : A * A -> A
    I : A -> A
    A : A
    B : A
    C : A

strategies

  test5 = 
    apply-test(!"test5"
	, collect-split(\ H(x,y) -> I(x) \, \ H(x,y) -> [H(x,y)] \ )
	, !F(G(A,H(A,B)),H(B,C))
	, !(F(G(A,I(A)), I(B)), [H(A,B),H(B,C)])
	)

  test6 = 
    apply-test(!"test6"
	, collect-split(\ H(x,y) -> I(x) \, \ H(x,y) -> [H(x,y)] \ )
	, !F(G(A,H(A,3.0)),H(1,C))
	, !(F(G(A,I(A)), I(1)), [H(A,3.0),H(1,C)])
	)

  test7 = 
    apply-test(!"test7a"
	, occurrences(?A)
	, !F(G(A,H(A,3.0)),H(1,C))
	, !2
	); 
    apply-test(!"test7b"
	, occurrences(?H(_,_))
	, !F(G(A,H(A,H(A,A))),H(1,C))
	, !3
	)

  test8 = 
    apply-test(!"test8a"
	, node-size
	, !F(G(A,H(A,3.0)),H(1,C))
	, !2
	);
    apply-test(!"test8b"
	, term-size
	, !F(G(A,H(A,3.0)),H(1,C))
	, !9
	)

  test9 = 
    apply-test(!"test9a"
	, collect-om(G(id,id))
	, !F(G(A,G(A,B)),G(B,C))
	, ![G(A,G(A,B)),G(B,C)]
	);
    apply-test(!"test9b"
	, collect-all(G(id,id))
	, !F(G(A,G(A,B)),G(B,C))
	, ![G(A,G(A,B)),G(A,B),G(B,C)]
	)
\end{code}
