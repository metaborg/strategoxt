\literate[Syntactic Sugar]

% Copyright (C) 1998, 1999, 2000 Eelco Visser <visser@acm.org>
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


	In this section we define specifications that declare
	signatures, rules and strategy definitions. This is just
	syntactic sugar for declaring a strategy. In
	Section~\ref{Sec:Desugar} we will show how these constructs
	can be defined in terms of the basic strategies of
	Section~\ref{Sec:Strategies}.

\begin{code}
module sugar
imports strategy signatures
\end{code}

	\paragraph{Variadic versions of some combinators}

\begin{code}
signature
  constructors
    Seqs     : List(Strat) -> Strat
    Choices  : List(Strat) -> Strat
    LChoices : List(Strat) -> Strat

    Lets     : List(SDef) * Strat -> Strat

    ScopeDefault : Strat -> Strat
    DynRuleScope : List(String) * Strat -> Strat
\end{code}

	\paragraph{Match, Build, Apply Combinations}

\begin{code}
signature
  constructors
    MA  : Term  * Strat       -> Strat   (* t => s *)
    AM  : Strat * Term        -> Strat   (* s => t *)
    BA  : Strat * Term        -> Strat   (* <s> t *)
    BAM : Strat * Term * Term -> Strat   (* <s> t => t' *)
\end{code}

	\paragraph{Contexts \& Term Application}

\begin{code}
signature
  constructors
    Con          : Var * Term * SVar   -> Term    (* x[t](f) *)
    App          : Strat * Term        -> Term    (* <s> t *)
    RootApp      : Strat               -> Term    (* <s> *)
    InfixApp     : Term * Strat * Term -> Term    (* t1 .s. t2 *)
    Explode      : Term * Term         -> Term    (* t1 # (t2) *)
    ExplodeCong  : Strat * Strat       -> Strat   (* s1 # (s2) *)
    As           : Var * Term          -> Term    (* x@t *)
    BuildDefault : Term                -> Term    (* _ t *)
\end{code}

	\paragraph{Rules \& Rule Definitions}

\begin{code}
signature
  sorts Rule RDef 
  constructors
    Rule      : Term * Term * Strat          -> Rule    (* t1 -> t2 where s *)
    StratRule : Strat * Strat * Strat        -> Rule    (* t1 --> t2 where s *)
    LRule     : Rule                         -> Strat   (* \ t1 -> t2 where \ *)
    SRule     : Rule                         -> Strat
    RDef      : String * List(String) * Rule -> RDef    (* f(xs) : r *)

    DynamicRules : List(RDef) -> Strat
    OverrideDynamicRules : List(RDef) -> Strat
\end{code}

	\paragraph{Modifiers}

	modifiers for congruence operators

\begin{code}
signature
  constructors
    Mod : String * String -> Id	(* C^T and C^D *)
\end{code}

	\paragraph{Overlays}

\begin{code}
signature
  sorts Overlay
  constructors
    Overlay : String * List(String) * Term -> Overlay
\end{code}

	\paragraph{Specifications}
    
\begin{code}
signature
  sorts BSpec Spec
  constructors
    Signature     : List(BSig)    -> BSpec
    Overlays      : List(Overlay) -> BSpec
    Rules         : List(RDef)    -> BSpec
    Strategies    : List(SDef)    -> BSpec
    Imports       : List(String)  -> BSpec
    Specification : List(BSpec)   -> Spec
\end{code}
