module test29
imports sunit
signature
  sorts Exp Type
  constructors
    Var  : String -> Exp
    Plus : Exp * Exp -> Exp

strategies

  main = 
    test-suite(!"test29",
      test1;
      test2;
      test3;
      test4;
      test5
    )

  test1 =
    apply-test(!"test1"
	, id
	, !Plus(Var("a"), Var("b"))
	, !Plus(Var("a"), Var("b"))
	)

  test2 =
    apply-test(!"test2a"
	, all(id)
	, !Plus(Var("a"), Var("b"))
	, !Plus(Var("a"), Var("b"))
	);
    apply-test(!"test2b"
	, all(id)
	, !Var("a")
	, !Var("a")
	);
    apply-test(!"test2c"
	, all(id)
	, !"a"
	, !"a"
	)

  test3 =
    apply-test(!"test3a" 
	, topdown(id)
	, !"a"
	, !"a"
	);
    apply-test(!"test3b"
	, topdown(id)
	, !Var("a")
	, !Var("a")
	);
    apply-test(!"test3c"
	, topdown(id)
	, !Plus(Var("a"), Var("b"))
	, !Plus(Var("a"), Var("b"))
	)

  test4 =
    apply-test(!"test4a"
	, bottomup(id)
	, !"a"
	, !"a"
	);
    apply-test(!"test4b"
	, bottomup(id)
	, !Var("a")
	, !Var("a")
	);
    apply-test(!"test4c"
	, bottomup(id)
	, !Plus(Var("a"), Var("b"))
	, !Plus(Var("a"), Var("b"))
	)

  test5 =
    apply-test(!"test5"
	, topdown(try(is-string; !"A"))
	, !Plus(Var("a"), Var("b"))
	, !Plus(Var("A"), Var("A"))
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

