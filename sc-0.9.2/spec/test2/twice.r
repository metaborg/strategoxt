module twice
imports lib memo
signature
  constructors
    A : Term
    B : Term

rules

    RuleA      : A -> B

strategies

    main       = <Main> [A, A]

    Main       = memo-scope([ma, ma])

    ma 	       = memo(RuleA)
