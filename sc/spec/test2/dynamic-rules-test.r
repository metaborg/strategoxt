\literate[dynamic-rules-test]

\begin{abstract}
	This module provides an example for the use of dynamic
	rules and tests their usage.
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
module dynamic-rules-test
imports dynamic-rules sunit

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

  exp-rename = 
  rec r({| RenameCall, RenameVar :
    try(RenameDeclaration + RenameArgs + RenameCall + RenameVar); all(r)
  |})

  RenameDeclaration =
    Let(list(RenameFdec + RenameVdec), id)

  RenameVdec :
    Vdec(x, e) -> Vdec(y, e)
    where new => y; rules(RenameVar : Var(x) -> Var(y))

  RenameFdec :
    Fdec(f, xs, e) -> Fdec(g, xs, e)
    where new => g; rules(RenameCall : Call(f, es) -> Call(g, es))

  RenameArgs :
    Fdec(f, xs, e) -> Fdec(f, ys, e)
    where <map(new)> xs => ys
        ; <zip({?(x,y); rules(RenameVar : Var(x) -> Var(y))})> (xs, ys)

  inline = 
  rec i({| Inline :
    repeat(Subst)
    ; (Declare; all(i)
       <+ {| Subst : Inline; i |}
       <+ all(i))
  |})
 
  Declare = 
    Let(list(DeclareFun + DeclareVar), id)

  DeclareVar =
    ?Vdec(x,e); 
    rules(
      Inline : Var(x) -> e 
    )

  DeclareFun =
    ?fdec@Fdec(f, _, _); 
    rules(
      Inline : 
        Call(f,es) -> e
        where <exp-rename> fdec => Fdec(_, xs, e)
            ; <zip({?(x,e); rules(Subst : Var(x) -> e)})> (xs, es)
    )

strategies

  main = 
    test-suite(!"dynamic-rules-test",
	//test0;
	//test1;
	//test2;
	//test3;
	//test4a;
	//test4b;
	test5
    )

  test0 =
    apply-test(!"test0"
	, exp-rename
	, !Let([Fdec("f", ["x"], Var("x"))],    
	    Let([Fdec("g", ["x"], Plus(Int(1), Call("f", [Var("x")])))],
             Let([Vdec("x", Int(1))], 
                 Call("g", [Var("x")]))))
	, !Let([Fdec("a_0",["b_0"],Var("b_0"))],
            Let([Fdec("c_0",["d_0"],Plus(Int(1),Call("a_0",[Var("d_0")])))],
             Let([Vdec("e_0",Int(1))],
                 Call("c_0",[Var("e_0")]))))
	)

  test1 =
    apply-test(!"test1"
	, inline
	, !Let([Vdec("x", Int(1))], Call("g", [Var("x")]))
	, !Let([Vdec("x", Int(1))], Call("g", [Int(1)]))
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

strategies

  define-bla =
    ?(f, g); rules(Bla : f -> g)
  
  override1 =
    <define-bla> ("f", "g")
  ; <Bla> "f" => x
  ; <define-bla> ("f", "h")
  ; <Bla> "f" => y
  ; !(x,y)
 
  test4a = 
    apply-test(!"test4a"
	, override1
	, !()
	, !("g", "h")
	)

  override2 =
    <define-bla> ("f", "g")
  ; <Bla> "f" => x
  ; {| Bla :
       <define-bla> ("f", "h")
       ; <Bla> "f" => y
       ; <define-bla> ("f", "i")
       ; <Bla> "f" => z
    |}
  ; <Bla> "f" => a
  ; !(x,y,z,a)

  test4b = 
    apply-test(!"test4b"
	, override2
	, !()
	, !("g", "h", "i", "g")
	)

strategies

  UnDeclareFun =
    ?Fdec(f, _, _)
    ; rules( NewRule : Call(f,_) -> Undefined )

  test5 = 
    apply-test(!"test5"
	, (UnDeclareFun,id); (id,try(NewRule))
	, !(Fdec("f", "i", "g"), Call("f",[]))
	, !(Fdec("f", "i", "g"), Call("f",[]))
	)

\end{code}