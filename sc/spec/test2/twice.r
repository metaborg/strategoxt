module twice
imports lib
signature
  constructors
    A : Term
    B : Term

rules

    RuleA      : A -> B

strategies

    main       = <Main> [A, A]

    Main       = where(<memo-init> "A"); [ma, ma]

    ma 	       = memo(!"A", RuleA)