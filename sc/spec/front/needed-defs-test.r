module needed-defs-test
imports needed-defs sunit

strategies

  needed-defs-test = 
    test-suite(!"needed-defs-test",
      define-congruence-test
    )

  define-congruence-test =
    apply-test(!"define-congruence-test"
	      ,DefineCongruence
	      ,!("If", "T", 3)
              ,open(!"data/if-congruence.trm")
              )