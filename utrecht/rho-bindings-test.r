module rho-bindings-test
imports rho-bindings peano sunit

strategies

  main =   
    test-suite(!"rho-bindings-test",  
        //test1; 
        //test2; 
        //test3;
	test4;
	test5;
	test6
    )

  test1 = 
    apply-test(!"test1"
	, rho-free-vars
	, !App(Rule(Plus(Zero, Var("x")), Var("x")), 
                    Plus(Var("y"), Succ(Zero)))
	, ![Var("y")]
	)

  test2 = 
    apply-test(!"test2"
	, rho-free-vars
	, ![(Plus(Zero, Var("x")), 
             Plus(Zero, Succ(Zero)))]
	, ![Var("x")]
	)

  test3 = 
    apply-test(!"test3"
	, rho-free-vars
	, !App(Rule(Plus(Zero, Var("x")), LChoice(Var("x"), Var("y"))), 
                    Plus(Zero, Succ(Zero)))
	, ![Var("y")]
	)

  test4 = 
    apply-test(!"test4"
	, rho-rename
	, !Rule(Plus(Zero, Var("x")),   LChoice(Var("x"),   Var("y")))
	, !Rule(Plus(Zero, Var("a_0")), LChoice(Var("a_0"), Var("y")))
	)

  test5 = 
    apply-test(!"test5"
	, rho-substitute
	, !([(Var("x"), LChoice(Var("y"), Con("a")))],
             LChoice(Var("x"),
                     Rule(Var("x"), Var("x"))))
	, !LChoice(LChoice(Var("y"), Con("a")),
                   Rule(Var("b_0"), Var("b_0")))
	)

  test6 = 
    apply-test(!"test6"
	, rho-substitute
	, !([(Var("x"), LChoice(Var("y"), Con("a")))],
             Rule(Var("y"), LChoice(Var("y"), Var("x"))))
	, !Rule(Var("c_0"),LChoice(Var("c_0"),LChoice(Var("y"),Con("a"))))
	)
