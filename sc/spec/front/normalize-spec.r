\literate[{\tt NORMALIZE-SPEC}]
	
% $Id: normalize-spec.r,v 1.5 2002/01/10 21:00:39 stratego Exp $

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


\begin{code}
module normalize-spec
imports stratego lib
\end{code}

	The first phase of the front-end is the normalization of
	specifications. A specification consists of a list of basic
	specifications (signatures, overlays, rules and strategy
	definitions) in any order. Normalization collects the basic
	specifications of each kind and creates a specification of the
	form
\begin{verbatim}
  Specification([Signature(id),
                 Overlays(id),
                 Rules(id),
                 Strategies(id)])
\end{verbatim}

\begin{code}
strategies

  normalize-sigs = 
        map(NormBSIG);
        concat 

  normalize-specIO = iowrap(normalize-spec)

  normalize-spec =
    DefineSugar
  ; BSpecs
  ; map(NormBSP)
  ; foldr(!([], [], []), Combine)
  ; MkSpec
  ; Specification(vars-to-consts)
  ; define-lrules
  ; LiftDynamicRules

  DefineSugar = 
    topdown(try(\ DefaultVarDec(x) -> VarDec(x, DefaultStrat) \ ))

rules

  BSpecs : Specification(bspecs) -> bspecs

  NormBSIG : Constructors(ods) -> ods
  NormBSIG : Sorts(ss) -> []

  NormBSP : Signature(bsigs)  -> (<normalize-sigs> bsigs, [], [])
  NormBSP : Strategies(sdefs) -> ([], [], sdefs)
  NormBSP : Rules(rdefs)      -> ([], [], rdefs)
  NormBSP : Overlays(ols)     -> ([], ols, [])

  Combine : ((ods1, ols1, sdefs1), (ods2, ols2, sdefs2)) ->
	    (<conc> (ods1, ods2), 
             <conc> (ols1, ols2), 
             <conc> (sdefs1, sdefs2))

  MkSpec : (ods, ols, sdefs) -> 
           Specification([Signature([Constructors(ods)]),
			  Overlays(ols),
                          Strategies(sdefs)])
\end{code}

	Furthermore, the grammar cannot distighuish term variables
	from unary constructors. This distinction can only be made
	based on the signature. Variables are renamed to operator
	applications by duplicating the specification and mapping one
	specification to a substitution.

\begin{code}
rules

  Names   : Signature(bsigs) -> <filter(OpNames); concat> bsigs
  OpNames : Constructors(ods)  -> <filter(OpName)> ods
  OpName  : OpDecl(f, ConstType(_)) -> f

  Names   : Overlays(ols) -> <filter(OLName)> ols
  OLName  : Overlay(x, [], t) -> x

strategies

  const-names = filter(Names); concat

  vars-to-consts = 
    !(<const-names; map(!(<id>, Op(<id>,[])))>, <id>);
    tsubs
\end{code}

\begin{code}
rules

  UnaryConstructorName : OpDecl(f, ConstType(_)) -> f
  UnaryConstructorName : Overlay(x, [], t) -> x
\end{code}

\begin{code}
rules

  DefLRule : 
    LRule(Rule(t1, t2, s)) -> 
    Scope(<tvars> t1, SRule(Rule(t1, t2, s)))

  DefScopeDefault :
    ScopeDefault(s) -> Scope(<tvars> s, s)

strategies

  define-lrules = bottomup(try(DefLRule + DefScopeDefault))

\end{code}

	Normalizing dynamic rules

\begin{code}
strategies

  LiftDynamicRules =
    Specification([id,id,Strategies(define-rule-scope; lift-dynamic-rules)])

  define-rule-scope =
    topdown(try(DefDynamicRuleScope))

  lift-dynamic-rules =
    listtd(repeat(lift-dynamic-rule))

rules

  lift-dynamic-rule :
    [def | defs] -> <conc> ([def' | rdefs], defs)
    where <tvars> def => vars
        ; <rec x(env-oncetd(dist-scope(x) + split-dynamic-rules => (ss, rdefs); !Seqs(ss)))> 
           (def,vars) => def'

  dist-scope(x) :
    (Scope(xs,s),vars) -> Scope(xs, <x>(s,<union>(xs,vars)))

  split-dynamic-rules :
    (DynamicRules(rs),vars) -> 
    <map(SplitDynamicRule(!vars,\x -> Assert(x)\ )); unzip> rs

  split-dynamic-rules :
    (OverrideDynamicRules(rs),vars) -> 
    <map(SplitDynamicRule(!vars,\x -> OverrideKey(x)\ )); unzip> rs

overlays

  Assert(lab) = Call(SVar("assert"),[Build(Str(lab))])

  OverrideKey(lab) = Call(SVar("override-key"),[Build(Str(lab))])

  Rewrite(lab) = Call(SVar("rewrite"),[Build(Str(lab))])

  MetaPair(x,y) = Op("", [x, y])

rules

  DefDynamicRuleScope :
    DynRuleScope([], s) -> s

  // {| lab, labs : s |} -> scope(!lab, {| lab : s |})

  DefDynamicRuleScope :
    DynRuleScope([lab | labs], s) -> 
    Call(SVar("scope"),[Build(Str(lab)), DynRuleScope(labs, s)])

  // Informally, rule SplitDynamicRule defines the following transformation
  // if the right-hand side is the term Undefined:
  //
  // lab(xs) : l -> Undefined where cond
  // -> (where(<assert("lab")> (Keys(keys), Undefined)
  //    ,lab(xs) : l -> () where <rewrite("lab")> Keys(keys) => Undefined
  //                           ; cond; fail)

  SplitDynamicRule(context-vars,assert) :
    RDef(lab, xs, Rule(l, Op("Undefined",[]), cond)) ->
    (Where(BA(<assert>lab, 
              MetaPair(Op("Keys", keys), Op("Undefined",[])))),
     RDef(lab, xs, 
          Rule(l, Op("",[]), 
               Seq(BAM(Rewrite(lab), Op("Keys", keys), Op("Undefined",[])), 
               Seq(cond,
                   Fail)))))
    where 
       <isect>(<context-vars>(), <tvars> l); strings-to-vars => keys

  // Informally, rule SplitDynamicRule defines the following transformation
  // if the right-hand side is not the term Undefined:
  //
  // lab(xs) : l -> r where cond
  // -> (where(<assert("lab")> (Keys(keys), Defined(stamp, vals))
  //    ,lab(xs) : l -> r where <rewrite("lab")> Keys(keys) => Defined(stamp, vals)
  //                           ; cond; fail)

  SplitDynamicRule(context-vars,assert) :
    RDef(lab, xs, Rule(l, r, cond)) ->
    (Where(BA(<assert>lab, 
              MetaPair(Op("Keys", keys), Op("Defined", [Str(stamp) | vals])))),
     RDef(lab, xs, 
          Rule(l, r, 
               Seq(BAM(Rewrite(lab), Op("Keys", keys), Op("Defined", [Str(stamp) | vals])), 
                   cond))))
   where <not(eq)>(r, Op("Undefined",[]))
       ; <isect>(<context-vars>(), <tvars> l); strings-to-vars => keys
       ; <isect>(<context-vars>(), <tvars> (r, cond)); strings-to-vars => vals
       ; new => stamp

  strings-to-vars =
    map( \ x -> Var(x) \ )
\end{code}
