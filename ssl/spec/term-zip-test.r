\literate[term-zip-test]

	\begin{abstract}
	Tests for generic zipping of term structures.
	\end{abstract}

\begin{code}
module term-zip-test
imports term-zip sunit

signature
  constructors
    Node : a * List(RoseTree(a)) -> RoseTree(a)
    Var  : String -> RoseTree(a)

strategies

  main =
    test-suite(!"term-zip-test",
	test1;
	test2;
	test3;
	test4;
	test5;
	test6;
	test7
    )

  test1 =
    apply-test(!"test1a"
	,term-zip((is-int,is-int), id)
	,!([1,2,3],
           [4,5,6])
	,![(1,4),(2,5),(3,6)]
	);
    apply-test(!"test1b"
	,term-zip((is-int,is-int), id)
	,!([[1],[2],[3]], 
           [[4],[5],[6]])
	,![[(1,4)],[(2,5)],[(3,6)]]
	)

  test2 = 
    apply-test(!"test2"
	,term-zip((is-int,is-int), id)
	,!(Node(1,[Node(2,[]),Node(3,[])]),
           Node(4,[Node(5,[]),Node(6,[])]))
	,!Node((1,4),[Node((2,5),[]),Node((3,6),[])])
	)

  test3 = 
    apply-test(!"test3"
	,term-zip((is-int,is-int), id)
	,!(Node(1,[Node(2,[]),Node(3,[])]),
           Node(1,[Node(5,[]),Node(6,[])]))
	,!Node((1,1),[Node((2,5),[]),Node((3,6),[])])
	)

  test4 =
    apply-test(!"test4"
	,term-zip(add, id)
	,!(Node(1,[Node(2,[]),Node(3,[])]),
           Node(4,[Node(5,[]),Node(6,[])]))
	,!Node(5,[Node(7,[]),Node(9,[])])
	)

  test5 =
    apply-test(!"test5"
	,term-zip(tmap(is-int), id)
	,!(Node(1,[Node(2,[]),Node(3,[])]),
           Node(4,[Node(5,[]),Node(6,[])]),
           Node(7,[Node(8,[]),Node(9,[])]))
	,!Node((1,4,7),[Node((2,5,8),[]),Node((3,6,9),[])])
	)

  test6 =
    apply-and-fail(!"test6"
	,term-zip(tmap(is-int), id)
	,!(Node(1,[Node(2,[]),Node(3,[])]),
           Node(4,[Node(5,[]),Node(6,[])]),
           Node(7,[Node(8,[])]))
	)

  pattern-match =
    term-zip(eq; ![] + \ (Var(x),y) -> [(x,y)] \
            ,crush(![],union))

  test7 =
    apply-test(!"test7"
	,pattern-match
	,!(Node(1,[Var("x"),  Node(3,[])]),
           Node(1,[Node(2,[]),Node(3,[])]))
	,![("x", Node(2,[]))]
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
