module test28
imports sunit annotations
signature
  sorts Exp Type
  constructors
    Var  : String -> Exp
    Plus : Exp * Exp -> Exp
    Int  : Type

strategies

  main = 
    test-suite(!"test28",
      test1;
      test2; 
      test3;
      test4;
      test5;
      test6;
      test7;
      test8
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
	, !Plus(Var("a"),Var("b")){Int}
	)

  test3 =
    apply-test(!"test3"
	, set-annotations; catch-annos
	, !(Plus(Var("a"), Var("b")), Int)
	, !Anno(Plus(Var("a"),Var("b")),Int)
	)

  TypeCheck' :  
    Plus(<?e1; prim("SSLgetAnnotations", e1) => Int>, 
         <?e2; prim("SSLgetAnnotations", e2) => Int>) 
    -> <prim("ATsetAnnotations", Plus(e1, e2), Int)>()

  test4 =
    apply-test(!"test4"
	, TypeCheck'
	, !Plus(<prim("ATsetAnnotations", Var("a"), Int)>, 
                <prim("ATsetAnnotations", Var("b"), Int)>)
	, prim("ATsetAnnotations", 
               Plus(<prim("ATsetAnnotations", Var("a"), Int)>, 
                    <prim("ATsetAnnotations", Var("b"), Int)>), Int)
	)

  // Match agains annotations and build term with annotations

  TypeCheck :
    Plus(e1{Int}, e2{Int}) -> Plus(e1, e2){Int}

  test5 =
    apply-test(!"test5"
	, TypeCheck
	, !Plus(Var("a"){Int}, Var("b"){Int})
	, !Plus(Var("a"){Int}, Var("b"){Int}){Int}
	)

  // Matching should ignore annotations

  CommPlus :
    Plus(x, y) -> Plus(y, x)

  test6 =
    apply-test(!"test6"
	, CommPlus
	, !Plus(Var("a"){Int}, Var("b"){Int})
	, !Plus(Var("b"){Int}, Var("a"){Int})
	)

  // Annotation congruence

  test7 =
    apply-test(!"test7"
	, id{CommPlus}
	, !Var("c"){Plus(Var("a"){Int}, Var("b"){Int})}
	, !Var("c"){Plus(Var("b"){Int}, Var("a"){Int})}
	)

  // Annotations and traversal

  TypeCheck :
    Var(x) -> Var(x) {Int}

  test8 =
    apply-test(!"test5"
	, bottomup(try(TypeCheck))
	, !Plus(Var("c"), Plus(Var("a"), Var("b")))
	, !Plus(Var("c"){Int},Plus(Var("a"){Int},Var("b"){Int}){Int}){Int}
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

