\literate[simple-traversal-test]

	\begin{abstract}
	A simple-traversal module for definition of unit tests.
	\end{abstract}

\begin{code}
module simple-traversal-test
imports sunit simple-traversal
signature
  constructors
    F : Term * Term -> Term
    G : Term * Term -> Term
    A : Term 
    B : Term
strategies

  main = 
    test-suite(!"simple-traversal-test",
      test1;
      test2;
      test3
    )

  test1 =
    apply-test(!"test1a"
	, all(fail)
	, !A
	, !A
	);
    apply-and-fail(!"test1b"
	, all(fail)
	, !F(G(B,F(A,B)),F(B,A))
	)

  f(x) = F(x,id)

  test2 =
    apply-test(!"test2"
	, leaves(!A, all(fail))
	, !F(G(B,F(A,B)),F(B,A))
	, !F(G(A,F(A,A)),F(A,A))
	);
    apply-test(!"test2"
	, leaves(!A, all(fail), f)
	, !F(G(B,F(B,B)),F(B,B))
	, !F(G(A,F(A,B)),F(B,B))
	)

  test3 =
    apply-test(!"test3a"
	, where(new-counter => c1)
          ; debug; bottomup(debug; \ t -> t{<next-counter> c1} \; debug)
	, !F(G(B,F(A,B)),F(B,A))
	, !F(G(B{1},F(A{2},B{3}){4}){5},F(B{6},A{7}){8}){9}
	);
    apply-test(!"test3b"
	, where(new-counter => c2)
          ; topdown(\ t -> t{<next-counter> c2} \ )
	, !F(G(B,F(A,B)),F(B,A))
	, !F(G(B{3},F(A{5},B{6}){4}){2},F(B{8},A{9}){7}){1}
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
