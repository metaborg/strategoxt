module peano-test
imports peano rho-laws sunit

strategies

  main =   
    test-suite(!"peano-test",  
        test1; 
        test2; 
        test3; 
        test4; 
        test5; 
        test6; 
        test7; 
        test8; 
        test9
    )

  test1 = 
    apply-test(!"test1"
	, rho-eval
	, !App(Rule(Plus(Zero, Var("x")), Var("x")), 
                    Plus(Zero, Succ(Zero)))
	, !Succ(Zero)
	)

  test2 = 
    apply-test(!"test2"
	, rho-unify
	, ![(Plus(Zero, Var("x")), 
             Plus(Zero, Succ(Zero)))]
	, ![(Var("x"), Succ(Zero))]
	)

  test3 = 
    apply-test(!"test3"
	, rho-substitute
	, !([(Var("x"), Succ(Zero))], Var("x"))
	, !Succ(Zero)
	)

  test4 = 
    apply-and-fail(!"test4"
	, Fire
	, !App(Rule(Plus(Zero, Var("x")), Var("x")), 
                    Plus(Succ(Zero), Zero))
	, !()
	)

  test5 = 
    apply-test(!"test5"
	, rho-eval
	, !App(Rule(Plus(Zero, Var("x")), Var("x")), 
                    Plus(Succ(Zero), Zero))
	, !Null
	)

  test6 = 
    apply-and-fail(!"test6"
	, rho-match
	, ![(Plus(Zero, Var("x")), 
             Plus(Var("y"), Succ(Zero)))]
	, !()
	)

overlays

  B(z)    = App(Con("B"), z)
  F(x, y) = App(App(Con("F"), x), y)
  H(z)    = App(Con("H"), z)

strategies

  test7 = 
    apply-test(!"test7"
	, rho-eval
	, !App(Rule(B(Var("z")), 
                    App(Rule(F(Var("x"),Var("y")), H(Var("x"))),
                        F(Var("z"),Con("c")))),
               B(Con("d")))
	, !H(Con("d"))
	)

  test8 = 
    apply-and-fail(!"test8"
	, rho-match
	, ![(Plus(Var("x"), Var("x")), 
             Plus(Var("y"), Var("z")))]
	, !()
	)

  test9 = 
    apply-test(!"test9"
	, rho-eval
	, !App(
	     Pair(
               Rule(Plus(Zero, Var("x")), 
                    Var("x")), 
               Rule(Plus(Succ(Var("x")), Var("y")),
                    Succ(Plus(Var("x"), Var("y"))))),
             Plus(Succ(Zero), Zero))
	, !Succ(Plus(Zero, Zero))
	)
