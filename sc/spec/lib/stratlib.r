\literate[Library for Strategies]
	
% $Id: stratlib.r,v 1.1 2001/08/22 09:35:02 visser Exp $

% Copyright (C) 1998-2001 Eelco Visser <visser@acm.org>
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


	This module instantiates several language independent
	functions to the strategy language.

\begin{code}
module stratlib
imports strategy sugar substitution free-variables string
\end{code}

\begin{code}
rules

  Add1 : Var(x)  -> [x]
  Add2 : SVar(x) -> [x]
 
  IsVar  : Var(x) -> x
  IsSVar : Call(SVar(x), []) -> x
  MkTVar : x -> Var(x)
  MkSVar : x -> SVar(x)
  MkCall : x -> Call(SVar(x), [])

strategies

  SVarShape(s) = Call(SVar(s), [])

\end{code}

	\paragraph{Bound Variables}

	The following rules and strategies define which constructs
	bind variables. The \verb|Bnd| rules define which variables
	are bound. The \verb|paste| strategies define where new variables
	should be pasted in case of renaming. The \verb|boundin| strategies
	define in which arguments of the constructs the variables are 
	binding.

\begin{code}
rules

  Bind0 : Scope(xs, s) -> xs
  Bind0 : LRule(Rule(t1, t2, s)) -> <tvars> t1
  Bind1 : Let(defs, s2) -> <map(\ SDef(f, xs, s1) -> f\ )> defs
  Bind2 : SDef(f, xs, s) -> <map(\ VarDec(x, _) -> x \ )> xs
  Bind3 : Rec(x, s) -> [x]

  Bind4 : DynamicRules(rs) -> <tvars> rs

strategies

  tpaste(nwvars) =
    Scope(nwvars, id)

  tboundin(bnd, ubnd, ignore) =
    Scope(ignore, bnd)
    + DynamicRules(bnd)

  spaste(nwvars) =
      Let(split(id,nwvars); 
          zip(\ (SDef(_,xs,s), f) -> SDef(f,xs,s)\ )
         , id)
    + SDef(id, split(id, nwvars); zip(\ (VarDec(x,t), y) -> VarDec(y,t)\ ), id)
    + Rec(nwvars; Hd, id)

  sboundin(bnd, ubnd, ignore) =
      Let(bnd, bnd)
    + SDef(ignore, ignore, bnd)
    + Rec(ignore, bnd)

\end{code}

	\paragraph{Free Variables and Renaming}

\begin{code}
strategies

  tvars = free-vars(Add1, Bind0 + Bind4, tboundin)

  svars = free-vars(Add2, Bind1 + Bind2 + Bind3, sboundin)

  trename = rename(Var, Bind0, tboundin, tpaste)
  srename = rename(SVar, Bind1 + Bind2 + Bind3, sboundin, spaste)

  svars-arity = 
    free-vars2(\Call(SVar(f), as) -> [(f, <length> as)]\
              ,Bind1 + Bind2 + Bind3
              ,sboundin
              ,{f:?((f,_),f)})

  tsubs = substitute(IsVar)

  ssubs = substitute(IsSVar)

  tsubstitute = substitute(IsVar, Var, Bind0, tboundin, tpaste)

  strename = trename ; srename

  is_var_list = map(Var(id))
  is_svar_list = map(SVar(id))
\end{code}

	Context strategies for strategies

\begin{code}
strategies

  conLChoice(s) = rec x(s + LChoice(x, id) + LChoice(id, x))

  conChoice(s) = rec x(s + (Choice(x, id) + Choice(id, x)))

  conChoiceL(s) = Choice(s, id) + s

  choicebu-l'(s) = rec x(try(Choice(id, x); s))

  choicebu-l(s) = rec x(try(Choice(x, x); s))

  choicetd(s) = rec x(s <+ Choice(x, x))

  choicemap(s) = rec x(Choice(x, x) <+ s)

  choicebu(s) = rec x(try(Choice(x, x); s))

  firstInSeq(s) = s <+ Seq(s, id)

  lastInSeq(s) = Seq(id, rec x(s <+ Seq(not(oncetd(s)), x)))
\end{code}
