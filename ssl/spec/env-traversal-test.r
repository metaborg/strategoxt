\literate[env-traversal-test]

	\begin{abstract}
	A env-traversal module for definition of unit tests.
	\end{abstract}

\begin{code}
module env-traversal-test
imports sunit env-traversal
signature
  constructors
    F : A * A -> A
    G : A -> A
    A : A
    B : A

strategies

  main = 
    test-suite(!"env-traversal-test",
      test1
    )

  test1 =
    apply-test(!"test1a"
	, count-bottomup(?F(_,_)); ?(_,<id>)
	, !F(A,G(F(B,A)))
	, !2
	);
    apply-test(!"test1b"
	, count-bottomup(\ F(B,x) -> x \ )
	, !F(A,G(F(B,A)))
	, !(F(A,G(A)),1)
	)
\end{code}

% Copyright (C) 2002 Eelco Visser <visser@acm.org>
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
