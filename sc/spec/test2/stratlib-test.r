module stratlib-test
imports stratlib sunit DefaultStrat

strategies

  main = 
    test-suite(!"stratlib-test",
	tvars-test1;
//	tvars-test2;
	tsubstitute-test1;
	srename-test1;
	strename-test1
    )

  tvars-test1 =
	apply-test(!"tvars-test1", tvars, !Int(1), ![])

//  tvars-test2 =
//	apply-test(!"tvars-test2", tvars, !Real(1.1), ![])

  tsubstitute-test1 =
	apply-test(!"tsubstitute-test1"
                  ,tsubstitute
                  ,!([("x",Var("a")),("y",Op("Add",[Var("y"),Var("z")]))],
                     Op("BinExp",[Var("x"),Str("*"),Var("y")]))
                  ,! Op("BinExp",[Var("a"),Str("*"),Op("Add",[Var("y"),Var("z")])])
                  )

  srename-test1 =
  apply-and-check(!"srename-test1"
        , strename
	, !SDef("downup", [VarDec("s1",DefaultStrat),VarDec("s2",DefaultStrat)],Rec("x",Seq(Call(SVar("s1"),[]),Seq(All(Call(SVar("x"),[])),Call(SVar("s2"),[])))))
	, {?SDef("downup",[VarDec(a_0,DefaultStrat),VarDec(b_0,DefaultStrat)],Rec(c_0,Seq(Call(SVar(a_0),[]),Seq(All(Call(SVar(c_0),[])),Call(SVar(b_0),[])))))}
	)

  strename-test1 =
    apply-and-check(!"strename-test1"
        , strename
	, !|[ split(F, G | ) = {X: ?X; !(<F(|)> X, <G(|)> X)} ]|
	, debug; ?|[ split(f, g | ) = {x: ?x; !(<f(|)> x, <g(|)> x)} ]|
          ; debug; <debug; different; debug>["F", "G", "X", f, g, x]
	)

/*
SDefT("split",[DefaultVarDec("e_0"),DefaultVarDec("f_0")],[],
      Scope(["d_0"],Seq(Match(Var("d_0")),Build(Tuple([App(CallT(SVar("e_0"),[],[]),Var("d_0")),App(CallT(SVar("f_0"),[],[]),Var("d_0"))])))))
*/

  different =
    [] + where(!(<Hd>, <Tl>); not(member))
         ; where(Tl; different)
