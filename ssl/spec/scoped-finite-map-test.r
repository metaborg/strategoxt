\literate[scoped-finite-map-test]

\begin{abstract}
	This module provides an example for the use of the scope
	operators in scoped-finite-map.r.
\end{abstract}
% Copyright (C) 2001 Eelco Visser <visser@acm.org>
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
module scoped-finite-map-test
imports scoped-finite-map sunit

signature
  constructors
    Var  : String -> Exp
    Int  : Int -> Exp
    Plus : Exp * Exp -> Exp
    Let  : List(Decl) * Exp -> Exp
    Call : String * List(Exp) -> Exp
    Fdec : String * List(String) * Exp -> Decl
    Vdec : String * Exp -> Decl

strategies

  exp-rename = id

  inline = 
    init-name-space(!"var");
    rec i(//debug(!"a: ");
          scope(!"var", Declare; all(i)
                        <+ Call(id, list(i)); Inline; i
                        <+ Substitute
                        <+ all(i)));
    exit-name-space(!"var")
 
  Declare = 
    Let(list(DeclareFun + DeclareVar), id)

  DeclareFun =
    ?fdec@Fdec(f, _, _); where(<assert(!"var")> (f, fdec))

  DeclareVar =
    ?Vdec(x,e); where(<assert(!"var")> (x, e))

rules

  Substitute :
    Var(x) -> e 
    where <rewrite(!"var")> x => e

  Inline :
    Call(f, es) -> e
    where <rewrite(!"var"); exp-rename> f => Fdec(f, xs, e);
          <zip(assert(!"var"))> (xs, es)

  // Note: this approach assumes that either the local variables
  // in Fdec are renamed to new unique variables, or that any
  // substitutions to variables in es are done before inlining.

strategies

  main = 
    test-suite(!"scoped-finite-map-test",
	test0;
	test1;
	test2;
	test3
    )

  test0 =
    apply-test(!"test0a"
	, assert(!"Bla")
	, !((),())
	, !((),())
	);
    apply-test(!"test0b"
	, rewrite(!"Bla")
	, !()
	, !()
	)

  test1 =
    apply-test(!"test1"
	, inline
	, !Let([Vdec("x", 1)], Call("g", [Var("x")]))
	, !Let([Vdec("x", 1)], Call("g", [1]))
	)

  test2 =
    apply-test(!"test2"
	, inline
	, !Let([Fdec("f", ["x"], Var("x"))],    
	    Let([Fdec("g", ["x"], Plus(Int(1), Call("f", [Var("x")])))],
             Let([Vdec("x", Int(1))], Call("g", [Var("x")]))))
	, !Let([Fdec("f",["x"],Var("x"))],
            Let([Fdec("g",["x"],Plus(Int(1),Var("x")))],
              Let([Vdec("x",Int(1))],Plus(Int(1),Int(1)))))
	)

  test3 =
    apply-test(!"test3"
	, inline
	, !Let([Fdec("f", ["x"], Plus(Int(1), Var("x")))],    
	   Let([Fdec("g", ["x"], Call("f", [Var("x")]))],
               Call("g", [Int(2)])))
	, !Let([Fdec("f",["x"],Plus(Int(1),Var("x")))],
           Let([Fdec("g",["x"],Plus(Int(1),Var("x")))],
               Plus(Int(1),Int(2))))
	)
\end{code}