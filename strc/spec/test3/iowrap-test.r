module iowrap-test
imports lib
signature
  constructors
    A : Term 
    B : Term

strategies

  main = iowrap(RA)

rules

  RA   : A() -> B()
