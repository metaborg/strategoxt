module traversal-test
imports sunit lib

signature
  sorts Term
  constructors
    A : Term
    B : Term
    C : Term
    F : Term -> Term
    G : Term * Term -> Term

strategies

  main = 
    test-suite(!"traversal-test",
	some-test1;
	some-test2
    )

  some-test1 =
    apply-test(!"some-test1a"
	, some(id)
	, !F(A)
	, !F(A)
	);
    apply-and-fail(!"some-test1b"
	, some(id)
	, !A
	);
    apply-test(!"some-test1c"
	, some(?A;!C)
	, !G(A,B)
	, !G(C,B)
	);
    apply-and-fail(!"some-test1d"
	, some(?A;!C)
	, !G(B,C)
	);
    apply-and-fail(!"some-test1e"
	, some(?A;!C)
	, !1
	)
	
  some-test2 =
    apply-test(!"some-test2a"
	, manytd(?A;!C)
	, !G(B,A)
	, !G(B,C)
	);
    apply-and-fail(!"some-test2b"
	, manytd(?A;!C)
	, !G(G(B,C),C)
	);
    apply-test(!"some-test2c"
	, manytd(not(?A;!C))
	, !G(B,A)
	, !G(B,A)
	)
