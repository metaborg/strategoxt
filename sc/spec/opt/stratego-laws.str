\literate[{\btt stratego-laws}]

	This module specifies basic simplification rules for strategies.

\begin{code}
module stratego-laws
imports stratego desugar list scope-laws bind-laws idfail-laws
        congruence-laws build-match-laws
strategies

  Simplify = 
    ElimId
    + ElimFail 
    + HL
    + AssociateR
    + Idempotency
    + EmptyScope
    + (MatchingCongruence <+ TransformingAnnoCongruence <+ TransformingCongruence)

  Optimize =
    Simplify
    + HoistLet 
    + CopyPropagation
    + FuseScope
    + NoEffect
    + BuildMatch
    + (Inline <+ InlineDont)

  simplify0 = 
    downup(repeat(Simplify))

  simplify = 
    downup(repeat(Optimize))

  simplify-widen =
    downup(repeat(Optimize + WidenScope))

  simplify-narrow =
    topdown(try(NarrowScope))

  simplify-clean =
    topdown(try(CleanupScope; try(FuseScope)))

rules

  Commutativity : 
    Choice(x, y) -> Choice(y, x)

  AssociateR: 
    Choice(Choice(x, y), z) -> Choice(x, Choice(y, z))

  AssociateR : 
    Seq(Seq(x, y), z) -> Seq(x, Seq(y, z))

  AssociateR : 
    LChoice(LChoice(x, y), z) -> LChoice(x, LChoice(y, z))
 
  AssociateL: 
    Seq(s1, Seq(s2, s3)) -> Seq(Seq(s1, s2), s3)

  Idempotency :
    Choice(x, x)  -> x
  Idempotency :
    LChoice(x, x) -> x
  Idempotency :
    Where(Where(s))  -> Where(s)
  Idempotency :
    Not(Not(s)) -> Test(s)
  Idempotency :
    Test(Test(s)) -> Test(s)
  Idempotency :
    Where(Seq(Where(s1), Seq(Build(t), s2))) ->
    Where(Seq(s1, Seq(Build(t), s2)))
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
