module thread-test
imports lib sunit

signature
  constructors
    a    : Bla
    s    : Bla -> Bla
    Pair : a * b -> Pair(a, b)
    Ann  : Int * a -> a

    F : A * A * A -> A
    G : A -> A
    H : A -> A
    A : A
    B : A
    C : A

strategies

  main = 
    test-suite(!"thread-test",
      simple-test;
      preorder-number;
      postorder-number
    )

  simple-test = 
    apply-test(!"simple-test"
	, \ t -> Pair(t, 0) \; 
	  thread(\ Pair(x,y) -> Pair(x, <add>(y,1)) \ ) 
	, !F(G(A),H(B),C)
	, !Pair(F(G(A),H(B),C),3)
	)

  preorder-number = 
    apply-test(!"preorder-number"
	, \ t -> Pair(t, 0) \ ; 
	  rec x(\ Pair(t, n) -> Ann(n, <thread(x)> Pair(t, <add>(n,1))) \;
	        SwapAnn)
	, !F(G(A),H(B),C)
	, !Pair(Ann(0,F(Ann(1,G(Ann(2,A))),Ann(3,H(Ann(4,B))),Ann(5,C))),6)
	)

  postorder-number = 
    apply-test(!"postorder-number"
	, \ t -> Pair(t, 0) \ ; 
	  rec x(thread(x); Annotate)
	, !F(G(A),H(B),C)
	, !Pair(Ann(5,F(Ann(1,G(Ann(0,A))),Ann(3,H(Ann(2,B))),Ann(4,C))),6)
	)

rules

  SwapAnn : Ann(n, Pair(t, n')) -> Pair(Ann(n, t), n')

  Annotate : Pair(t, n) -> Pair(Ann(n, t), <add>(n,1))