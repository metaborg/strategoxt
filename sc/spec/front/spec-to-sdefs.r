\literate[Specification to List of Definitions]

% $Id: spec-to-sdefs.r,v 1.1 2001/08/22 09:34:59 visser Exp $

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



	Translation of a specification consisting of a signature,
	rules and strategy definitions to a list of strategy
	definitions.

\begin{code}
module spec-to-sdefs
imports strategy sugar stratlib list-sort
\end{code}

\paragraph{Congruences from Signature}

	Congruences are recognized by the parser as strategy
	calls; The following strategy generates strategy definitions
	from the signature; For instance, the operator declaration
\begin{verbatim}
     OpDecl("F", FunType([_, _], _))
\end{verbatim}
	is translated to the strategy definition
\begin{verbatim}
     SDef("F", ["x1", "x2"], Cong("F", [SVar("x1"), SVar("x2")]))
\end{verbatim}

\begin{code}
rules
  
  MkCongDef : OpDecl(f, ConstType(t)) -> SDef(f, [], Cong(f, []))

  MkCongDef : OpDecl(f, FunType(ts, t)) -> 
              SDef(f, xdecs, Cong(f, <map(MkCall)> xs))
	      where <map(new; split(\ x -> VarDec(x, DefaultStrat) \, id));
                     unzip> ts => (xdecs, xs)

  MkCongDefs : Sorts(sds)      -> []
  MkCongDefs : Operations(ods) -> <map(MkCongDef)> ods

strategies

  congdefs = map(MkCongDefs); concat
\end{code}

\paragraph{Constructors from Operators}

\begin{code}
(*
  MkConsDef : OpDecl(f, FunType(ts, t)) -> 
              RDef(f, [], )
	      where <map(new)> ts => xs

	RDef(f, [],
	   Rule(Op(x1,...,xn), Op(f, xs), id)

  MkConsDef : 
    Overlay(f, xs, t) -> RDef(f, [], Op(x1,...,xn), t)
*)
\end{code}


\paragraph{Congruences from Overlays}

	Each overlay defines a congruence operator as well as
	abstractions to be used in match and build operations. 

\begin{code}
rules

  Overlay-to-Congdef :
    Overlay(f, xs, t) -> SDef(f, xs, <trm-to-cong> t)

  Trm-to-Cong : Var(x)          -> Call(SVar(x), [])
  Trm-to-Cong : Op(f, ts)       -> Call(SVar(f), ts)
  Trm-to-Cong : Str(x)          -> Match(Str(x))
  Trm-to-Cong : Int(x)          -> Match(Int(x))
  Trm-to-Cong : Real(x)         -> Match(Real(x))
  Trm-to-Cong : BuildDefault(x) -> Id

strategies

  trm-to-cong = rec x(try(Op(id, map(x))); Trm-to-Cong)
\end{code}

\paragraph{Expanding Overlays}   

\begin{code}
rules
  
  ExpOverlay(ols) : 
    Op(f, ts) -> <tsubstitute> (sbs, t)
    where ols; fetch(where({xs, t: ?Overlay(f, xs, t);
                                   !(<zip(id)> (xs, ts), t)} 
                           => (sbs, t)))

// Note: when overlays in overlay definitions already have been
// expanded the repeat is not necessary. Therefore exp-overlays1 and
// exp-overlays2:

strategies

  exp-overlays1(ols) = 
    try(where(not(ols => [])); 
        topdown(repeat(ExpOverlay(ols))))

  exp-overlays2(ols) = 
    try(where(not(ols => [])); 
        topdown(try(ExpOverlay(ols))))
\end{code}


\paragraph{Rule Definitions to Strategy Definitions}

	A rule definition defines an implicitly scoped strategy
	definition;

\begin{code}
rules

  RDtoSD : RDef(f, xs, r) -> SDef(f, xs, Scope(<tvars> r, SRule(r)))

  DeclareVariables :
	SDef(f, xs, s) -> SDef(f, xs, Scope(<tvars> s, s))
\end{code} 

\paragraph{Specification to Definition List}

	Desugaring a specification consist of deriving the list of
	joined strategy definitions from its rule definitions and
	strategy definitions; The signature components are ignored;

\begin{code}
rules

  Sp0 : Specification(bspecs) -> bspecs
  Sp1 : Signature(bsigs)      -> <congdefs> bsigs
  Sp2 : Strategies(sdefs)     -> sdefs
  Sp3 : Rules(rdefs)          -> <map(RDtoSD)> rdefs

  RulesToSdefs : 
    Specification([
      Signature(bsigs), 
      Strategies(sdefs)
    ]) ->
    Specification([
      Signature(bsigs),
      Strategies(<conc> (<congdefs> bsigs, 
                         <map(RDtoSD + DeclareVariables)> sdefs))
    ])

  ExpandOverlays : 
    Specification([
      Signature(bsigs), 
      Overlays(ols), 
      Strategies(sdefs)
    ]) ->
    Specification([
      Signature(bsigs), 
      Strategies(<conc>(<map(Overlay-to-Congdef)> ols, <exp-overlays2(!ols')> sdefs))
    ])
    where <exp-overlays1(!ols)> ols => ols'

strategies

  ExpandOverlaysIO = iowrap(ExpandOverlays)

  //spec-to-sdefs = 
	//Spec-to-Sdefs; 
	//strename
\end{code}

  
