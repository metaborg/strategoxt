module stratego-eval-test
imports stratego-eval sunit

strategies

  main =
    test-suite(!"stratego-eval-test",
	test1
    )

  test1 = 
    apply-test(!"test1"
	, pattern-match(Var(id))
	, ![(Var("x"), Op("F",[Op("A",[])]))]
	, ![(Var("x"), Op("F",[Op("A",[])]))]
	)