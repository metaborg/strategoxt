module transform-file-test
imports lib
signature
  constructors
    B : Term
    C : Term

strategies

  main = stdio(Main)

  Main = 
	split(id,          !".a");
	transform-file(!B, !".b");
	transform-file(!C, !".c")