module test18
imports sunit
signature
  constructors
    A : Term
    B : Term
    F : Term * Term -> Term

strategies

  main = 
    test-suite(!"test18",
	test1;
	test2;
	test3
    )

  test1 =
    apply-test(!"test1a"
	, \ [f#(args)] -> [(f, args)] \
	, !["f"]
	, ![("\"f\"", [])]
	);
    apply-test(!"test1b"
	, \ f#(args) -> (f, args) \
	, !F(A,B)
	, !("F", [A, B])
	)

 test2 =
    apply-test(!"test2a"
	, \ [f#(args)] -> [f#(args)] \
	, !["f"]
	, !["f"]
	);
    apply-test(!"test2b"
	, \ [(f,args)] -> [f#(args)] \
	, ![("f",[])]
	, !["f"]
	);
    apply-test(!"test2b"
	, \ [(f,args)] -> [f#(args)] \
	, ![("\"f\"",[])]
	, !["f"]
	)

 test3 =
    apply-test(!"test3a"
	, \ [f#(args)] -> [f#(args)] \
	, ![F(A,B)]
	, ![F(A,B)]
	);
    apply-test(!"test3b"
	, explode-term
	, !F(A,B)
	, !("F", [A, B])
	);
    apply-test(!"test3c"
	, mkterm
	, !("F", [A, B])
	, !F(A,B)
	)
