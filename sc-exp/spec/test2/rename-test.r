\literate[rename-test]
\begin{code}
module rename-test
imports sunit rename
strategies

  main = 
    test-suite(!"rename-test",
	test1;
	test2
    )

\end{code}

First example: untyped lambda calculus

\begin{code}
signature
  sorts Exp
  constructors
    Abs : String * Exp -> Exp
    Var : String -> Exp
    App : Exp * Exp -> Exp
rules

  EBnd : Abs(x, e) -> [x]

strategies

  is-evar(s) = Var(s)

  EPaste(nwvars) =
    Abs(nwvars; Hd, id)

  EBoundIn(bndvars, ubndvars,ignore) =
    Abs(ignore, bndvars)

  erename = 
    rename(is-evar, EBnd, EBoundIn, EPaste)
\end{code}

Tests

\begin{code}
   test1 = 
     apply-and-check(!"test1"
	, debug(!"bla: "); erename;  debug(!"blabla: ")
	, !App(Abs("x", Var("x")), Var("x"))
	, {?App(Abs(a_0, Var(a_0)),Var("x")); where(<not(eq)> (a_0, "x"))}
	)
\end{code}


Second example: typed lambda calculus

\begin{code}
signature
  sorts Exp
  constructors
    Abs    : String * Type * Exp -> Exp
    Var    : String * Type -> Exp
    Letrec : List(Fdec) * Exp -> Exp
    Fdec   : String * Type * Exp -> Fdec
rules

  TBnd : Abs(x, t, e) -> [x]
  TBnd : Letrec(fdecs, e) -> <map(Name)> fdecs

  Name : Fdec(f, t, e) -> f

strategies

  is-var(s) = Var(s, id)

  TBoundIn(bndvars, ubndvars, ignore) =
    Abs(ignore, ignore, bndvars) +
    Letrec(bndvars, bndvars)

  TPaste(nwvars) =
    Abs(nwvars; Hd, id, id) +
    Letrec(split(id,nwvars); zip(PasteFdec), id)


  PasteFdec : 
    (Fdec(f, t, e), g) -> Fdec(g, t, e)

  trename = 
    rename(is-var, TBnd, TBoundIn, TPaste)
\end{code}

  Tests

\begin{code}
   test2 = 
     apply-and-check(!"test2"
	, trename
	, !App(Abs("x",   "a", Var("x",   "a")), Var("x", "a"))
	, ?App(Abs(b_0, "a", Var(b_0, "a")), Var("x", "a"))
	)
\end{code}

% Copyright (C) 2001-2002 Eelco Visser <visser@acm.org>
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
