module s2c
imports strategy automaton sugar lib C C-simplify dynamic-rules

strategies

  s2c = 
    iowrap(compile, s2c-options)

  compile = 
    rec x({| Initialized : 
             repeat(TranslateSpec + TranslateSig + TranslateDef + TranslateStrat)
           ; all(x)
           ; repeat(Csimplify) 
           |})

signature
  constructors
    TraceAll : Option
    Trace    : String -> Option

strategies

  s2c-options =
	Option("--trace-all", !TraceAll; debug(!"tracing all functions: ")
			      ; rules(TraceAllFuns : x -> x))
	+ ArgOption("-t",     \x -> Trace(x) where rules(TraceFun : x -> x) \ )

overlays

  CastATerm(e) = 
    TypeCast(TypeName(TypeSpec([],TypeId("ATerm"),[]),None),e)

  CastATermList(e) = 
    TypeCast(TypeName(TypeSpec([],TypeId("ATermList"),[]),None),e)

  CastATermInt(e) = 
    TypeCast(TypeName(TypeSpec([],TypeId("ATermInt"),[]),None),e)

  CastATermReal(e) = 
    TypeCast(TypeName(TypeSpec([],TypeId("ATermReal"),[]),None),e)

  CastATermAppl(e) = 
    TypeCast(TypeName(TypeSpec([],TypeId("ATermAppl"),[]),None),e)

//  Assign(x,e) = 
//    Assign(x,AssignEq,e)

  ATgetArgument(t, i) = 
    FunCall(Id("ATgetArgument"),[t,i])

  SymOfAppl(t) =
    FunCall(Id("ATgetSymbol"),[CastATermAppl(t)])

  CallFail = 
    Stat(FunCall(Id("_fail"),[Id("t")]))

  CheckATermList(e) = 
    FunCall(Id("CheckATermList"), [e])

rules

  TranslateSpec :
    Specification([Signature(ops), Strategies(defs)]) -> 
    TranslationUnit([
	  Include("#include <stratego.h>")
	, Include("#include <stratego-lib.h>")
	, Signature(ops) 
        | <conc>(sigs,defs)])
    where <map(SDefToDeclaration)> defs => sigs
\end{code}

Signatures

\begin{code}

  TranslateSig :
    Signature([Constructors(ops)]) ->
    TranslationUnit(<conc>(decls, [fundef]))
    where <map(DeclareConstructor)> ops => decls
        ; <InitConstructors> ops => fundef

  DeclareConstructor :
    OpDecl(c, t) ->
    Declaration2(TypeSpec([],TypeId("Symbol"),[]),[IdDecl([],Id(csym),None)])
    where <Arity> t => n
        ; <concat-strings>["sym_", <cify> c, "_", <int-to-string> n] => csym
        ; rules(ConstructorName : (c, n) -> csym)

  Arity : 
    ConstType(t) -> 0

  Arity : 
    FunType(ts, t) -> <length> ts

  InitConstructors :
    ops ->
    FunDef(TypeSpec([],Void,[]),
           IdDecl([],Id("init_constructors"),Some(ParamList([TypeSpec([],Void,[])]))),
           Compound([],<map(InitConstructor)> ops))

  InitConstructor :
    OpDecl(c, t) ->
    Compound([],
    [Stat(Assign(Id(csym), AssignEq,
                 FunCall(Id("ATmakeSymbol"),[StringLit([<double-quote>c]),IntConst(n),Id("ATfalse")]))),
     Stat(FunCall(Id("ATprotectSymbol"),[Id(csym)]))])
    where <Arity> t => ar; int-to-string => n
        ; <ConstructorName> (c, ar) => csym

\end{code}

Strategy definitions

\begin{code}
  SDefToDeclaration :
    SDef(f, args, s) -> 
    Declaration2(TypeSpec([],TypeId("ATerm"),[]),
                 [IdDecl([],Id(f),Some(ParamList([TypeSpec([],TypeId("ATerm"),[]) | params])))])
    where
      <map(TranslateVarDec)> args => params

  TranslateDef :
    SDef(f, args, s) -> 
    FunDef(TypeSpec([],TypeId("ATerm"),[]),
           IdDecl([],Id(f),Some(ParamList([ParamDecl(TypeSpec([],TypeId("ATerm"),[]),
                                                     IdDecl([],Id("t"),None)) | args']))),
	   body)
    where <map(TranslateVarDec)> args => args'
        ; <(TraceFun <+ TraceAllFuns, id); TracedBody <+ PlainBody> (f, s) => body

  PlainBody : 
    (f, s) -> Compound([],[s,Return(Id("t"))])

  TracedBody : 
    (f, s) ->
    Compound([],[Stat(FunCall("ATfprintf",
			[Id("stderr")
			,StringLit(<concat-strings; escape; double-quote>[f, "(%t)\n"])
			,Id("t")]))
		,s
		,Stat(FunCall("ATfprintf",
			     [Id("stderr")
			     ,StringLit(<concat-strings; escape; double-quote>[f,": %t\n"])
			     ,Id("t")]))
		,Return(Id("t"))])

  TranslateVarDec :
    VarDec(x, ConstType(_)) -> 
    ParamDecl(TypeSpec([],TypeId("ATerm"),[]),
              IdDecl([],Id(x),None))
  
  TranslateVarDec :
    VarDec(x, FunType(ts,_)) -> 
    ParamDecl(TypeSpec([],TypeId("ATerm"),[]),
              IdDecl([],Id(x),Some(ParamList(<map(TranslateType)> ts))))

  TranslateType : 
    ConstType(_) -> TypeSpec([],TypeId("ATerm"),[])

  TranslateType :
    FunType(ts, _) -> ParamDecl(TypeSpec([],TypeId("ATerm"),[]),ParamList(<map(TranslateType)> ts))
\end{code}

Strategy expressions

\begin{code}

  TranslateStrat :
    Id -> Compound([],[])

  TranslateStrat :
    Fail -> Stat(FunCall(Id("_fail"),[Id("t")]))

  TranslateStrat :
    Scope(xs, s) -> 
    Compound([Declaration2(TypeSpec([],TypeId("ATerm"),[]),
                           <map(\ x -> DeclInit(IdDecl([],Id(x),None),AssignInit(Id("NULL"))) \ )> xs)],[s])
    where 
      <map({?x; rules(Initialized : x -> "NULL")})> xs

  TranslateStrat :
    Seq(s1, s2) ->
    Compound([],[s1,s2])

  TranslateStrat :
    Choice(s1, s2) ->
    LChoice(s1, s2)

  TranslateStrat :
    LChoice(s1, s2) ->
    Compound([Declaration2(TypeSpec([],TypeId("ATerm"),[]),
                           [DeclInit(IdDecl([],Id(x),None),AssignInit(Id("t")))])],
             [IfElse(Equal(FunCall(Id("PushChoice"),[]),IntConst("0")),
                     Compound([],[s1,Stat(FunCall(Id("PopChoice"),[]))]),
                     Compound([],[Stat(Assign(Id("t"),AssignEq,Id(x))), s2]))])
    where new => x

  TranslateStrat :
    Not(s) ->
    Compound([Declaration2(TypeSpec([],TypeId("ATerm"),[]),
                           [DeclInit(IdDecl([],Id(x),None),AssignInit(Id("t")))])],
             [IfElse(Equal(FunCall(Id("PushChoice"),[]),IntConst("0")),
                     Compound([],[s,Stat(FunCall(Id("PopChoice"),[])),
                                  Stat(FunCall(Id("_fail"),Id("t")))]),
                     Compound([],[Stat(Assign(Id("t"),AssignEq,Id(x)))]))])
    where new => x

  // prim("f",[x1,...,xn]) --> f(x1,...,xn)
  //
  TranslateStrat :
    Prim(p,ts) ->
    Stat(Assign(Id("t"),AssignEq,FunCall(Id(p),es)))
    where <map(topdown(try(construct-term)))> ts => es

  TranslateStrat :
    Call(SVar(f),args) ->
    Stat(Assign(Id("t"),AssignEq,FunCall(Id(f),[Id("t") | args'])))
    where <map(\ Call(SVar(x),[]) -> Id(x) \ )> args => args'

  TranslateStrat :
    Test(s) ->
    Where(s)

  TranslateStrat :
    Where(s) ->
    Compound([Declaration2(TypeSpec([],TypeId("ATerm"),[]), IdDecl([],Id(x),None))],
             [Stat(Assign(Id(x),AssignEq,Id("t"))), s,Stat(Assign(Id("t"),AssignEq,Id(x)))])
    where new => x

  TranslateStrat :
    Let(defs,s) -> Compound(defs, [s])
\end{code}

	Matching

\begin{code}
signature
  constructors
    Match : Term * Exp -> Exp

rules

  TranslateStrat :
    Match(t) ->
    Match(t, Id("t"))

  TranslateStrat :
    Match(Wld, trm) ->
    Compound([],[])

  TranslateStrat :
    Match(BuildDefault(t), trm) ->
    Compound([],[])

  TranslateStrat :
    Match(As(t1,t2), trm) ->
    Compound([],[Match(t1,trm),Match(t2,trm)])

  TranslateStrat :
    Match(Var(x), trm) ->
    IfElse(LAnd(NotEqual(Id(x),Id("NULL")), NotEqual(Id(x),trm)),
           Stat(FunCall(Id("_fail"),[trm])),
           Stat(Assign(Id(x),AssignEq,trm)))
  //  where <not(Initialized)> x

  //TranslateStrat :
  //  Match(Var(x), trm) ->
  //  Stat(Assign(Id(x),AssignEq,trm))
  //  where <Initialized> x => "NULL"
  //      ; rules(Initialized : x -> trm)

  // string constants should probably be cached, just like constructor names

  TranslateStrat :
    Match(Str(x), trm) -> 
    If(NotEqual(SymOfAppl(trm), 
                FunCall(Id("ATmakeSymbol"),
                        [StringLit([<escape; double-quote>x]),IntConst("0"),Id("ATtrue")]))
      ,CallFail)

  TranslateStrat :
    Match(Int(i), trm) -> 
    If(LOr(NotEqual(FunCall(Id("ATgetType"),[trm]),Id("AT_INT")),
           NotEqual(FunCall(Id("ATgetInt"),[CastATermInt(trm)]),IntConst(<int-to-string>i)))
      ,CallFail)

  TranslateStrat :
    Match(Real(i),trm) -> 
    If(LOr(NotEqual(FunCall(Id("ATgetType"),[trm]),Id("AT_REAL")),
           NotEqual(FunCall(Id("ATgetReal"),[CastATermReal(trm)]),FloatConst(<real-to-string>i)))
      ,CallFail)

  TranslateStrat :
    Match(Op(c, ts), trm) ->
    IfElse(FunCall(Id("match_cons"),[trm, Id(<ConstructorName> (c, <length> ts))])
          ,Compound([],match-args)
	  ,CallFail)		
    where <not("Nil" + "Cons")> c; 
      <thread-map(\ Pair(t,i) -> 
         Pair(<MatchArg1 <+ MatchArg2>(t, ATgetArgument(trm,IntConst(<int-to-string>i))), <add>(i,1)) \ )> 
	     Pair(ts,0) => Pair(match-args,_)

  MatchArg1 : 
    (Var(x), trm) -> Match(Var(x), trm)
    where <Initialized> x => "NULL"

  MatchArg2 : 
    (t, trm) -> 
    Compound([Declaration2(TypeSpec([],TypeId("ATerm"),[]),
		           DeclInit(IdDecl([],Id(x),None), AssignInit(trm)))]
            ,[Match(t, Id(x))])
   where new => x

  TranslateStrat :
    Match(Op("Nil", []), trm) ->
    If(NotEqual(CastATermList(trm), Id("ATempty")), CallFail)

  TranslateStrat :
    Match(Op("Cons", [hd, tl]), trm) ->
    IfElse(LAnd(Equal(FunCall(Id("ATgetType"),[trm]), Id("AT_LIST")), 
               NotEqual(CastATermList(trm), Id("ATempty")))
          ,Compound([], match-args)
	  ,CallFail)		
    where <map(MatchArg1 <+ MatchArg2)> 
	   [(hd, FunCall(Id("ATgetFirst"),[CastATermList(trm)])), 
            (tl, CastATerm(FunCall(Id("ATgetNext"),[CastATermList(trm)])))] => match-args
\end{code}

	Matching automaton
  
\begin{code}
rules

  TranslateStrat :
    Assign(Var(x)) ->
    Stat(Assign(Id(x),AssignEq,Id("t")))

  TranslateStrat :
    Assign(Var(x),t) -> 
    Seq(Build(t),Match(Var(x)))
    where <not(Var(id))> t

  TranslateStrat :
    Assign(Var(x),Var(y)) -> 
    IfElse(LAnd(NotEqual(Id(x),Id("NULL")), NotEqual(Id(x),Id(y))),
           Stat(FunCall(Id("_fail"),[Id(y)])),
           Stat(Assign(Id(x),AssignEq,Id(y))))

  TranslateStrat :
    Continue(lab) -> 
    Goto(Id(lab))

  TranslateStrat :
    Case(lab, x, alts, s) ->
    Label(Id(lab), Case(x, alts, s))

  TranslateStrat :
    Case(Var(t), [], s) -> s

  TranslateStrat :
    Case(Var(t), [Alt(Str(str), xs, s1) | alts], s2) ->
    IfElse(FunCall(Id("match_string"),[Id(t),StringLit([<escape; double-quote>str])])
          ,Compound([],[s1])
          ,Compound([],[Case(Var(t), alts, s2)]))

  TranslateStrat :
    Case(Var(t), [Alt(Int(i), xs, s1) | alts], s2) ->
    IfElse(FunCall(Id("match_int"),[Id(t),IntConst(<int-to-string>i)])
          ,Compound([],[s1])
          ,Compound([],[Case(Var(t), alts, s2)]))

  TranslateStrat :
    Case(Var(t), [Alt(Real(i), xs, s1) | alts], s2) ->
    IfElse(FunCall(Id("match_real"),[Id(t),FloatConst(<real-to-string>i)])
          ,Compound([],[s1])
          ,Compound([],[Case(Var(t), alts, s2)]))

  TranslateStrat :
    Case(Var(t), [Alt(Fun(c, n), xs, s1) | alts], s2) ->
    IfElse(FunCall(Id("match_cons"),[Id(t), Id(<ConstructorName> (c, n))])
          ,Compound([], <conc>(get-args,[s1]))
          ,Compound([],[Case(Var(t), alts, s2)]))
    where <not("Nil" + "Cons")> c;
      <thread-map(\ Pair(Var(x), i) -> 
         Pair(Stat(Assign(Id(x), AssignEq, ATgetArgument(Id(t),IntConst(<int-to-string>i))))
             , <add>(i,1)) \ )> 
      Pair(xs,0) => Pair(get-args,_)


  TranslateStrat :
    Case(Var(t), [Alt(Fun("Nil", 0), [], s1) | alts], s2) ->
    IfElse(Equal(CastATermList(Id(t)), Id("ATempty"))
          ,Compound([], s1)
          ,Compound([],[Case(Var(t), alts, s2)]))

  TranslateStrat :
    Case(Var(t), [Alt(Fun("Cons", 2), [Var(x1),Var(x2)], s1) | alts], s2) ->
    IfElse(LAnd(Equal(FunCall(Id("ATgetType"),[Id(t)]), Id("AT_LIST")), 
               NotEqual(CastATermList(Id(t)), Id("ATempty")))
          ,Compound([], [Stat(Assign(Id(x1), AssignEq, 
				     FunCall(Id("ATgetFirst"),[CastATermList(Id(t))])))
                        ,Stat(Assign(Id(x2), AssignEq, 
				     CastATerm(FunCall(Id("ATgetNext"),[CastATermList(Id(t))]))))
                        ,s1])
          ,Compound([],[Case(Var(t), alts, s2)]))
\end{code}

	Building
  
\begin{code}
rules

  TranslateStrat :
    Build(t) ->
    Stat(Assign(Id("t"), AssignEq, <construct-term> t))

  construct-term =
    topdown(ConstructList; !CastATerm(<id>) <+ repeat(ConstructTerm))

  ConstructTerm :
    Int(i) -> 
    CastATerm(FunCall(Id("ATmakeInt"),[IntConst(<int-to-string> i)]))

  ConstructTerm :
    Real(x) ->
    CastATerm(FunCall(Id("ATmakeReal"), [FloatConst(<real-to-string> x)]))

  ConstructTerm :
    Str(x) ->
    CastATerm(FunCall(Id("ATmakeAppl"),
                      [FunCall(Id("ATmakeSymbol"),
			       [StringLit([<escape; double-quote>x]),IntConst("0"),Id("ATtrue")])]))

  ConstructTerm :
    Var(x) -> FunCall(Id("not_null"),[Id(x)])

  ConstructTerm :
    BuildDefault(t) -> t

  ConstructTerm :
    Op(c, ts) ->
    CastATerm(FunCall(Id("ATmakeAppl"),[Id(<ConstructorName> (c, <length> ts)) | ts]))

  ConstructList :
    Op("Nil", []) ->
    Id("ATempty")

  ConstructList :
    Op("Cons", [hd, tl]) ->
    FunCall(Id("ATinsert"),[tl', hd])
    where (<(Op("Nil", []) + Op("Cons", [id, id])); ConstructList> tl <+ !CheckATermList(tl)) => tl'
\end{code}
