\literate[annotations-test]

	\begin{abstract}
	Testing of annotations
	\end{abstract}

\begin{code}
module annotations-test
imports sunit annotations
signature
  sorts Exp Type
  constructors
    Var  : String -> Exp
    Plus : Exp * Exp -> Exp
    Int  : Type

strategies

  main = 
    test-suite(!"annotations-test",
      test1;
      test2;
      test3
    )

  test1 =
    apply-test(!"test1"
	, set-annotations
	, !(Plus(Var("a"), Var("b")), Int)
	, !Plus(Var("a"),Var("b")){Int}
	)

  test2 =
    apply-test(!"test2"
	, set-annotations; topdown(id)
	, !(Plus(Var("a"), Var("b")), Int)
	, !Plus(Var("a"), Var("b")){Int}
	)

  test3 =
    apply-test(!"test3"
	, set-annotations; catch-annos
	, !(Plus(Var("a"), Var("b")), Int)
	, !Anno(Plus(Var("a"),Var("b")),Int)
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

