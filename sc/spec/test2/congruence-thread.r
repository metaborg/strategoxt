module congruence-thread
imports sunit

strategies

  main = 
    test-suite(!"congruence-env-test",
	congruence-dist-test;
	congruence-thread-test;
	congruence-thread-test2
    )

signature
  constructors
    If   : Exp * Exp * Exp -> Exp
    Id   : Exp
    Cons : a * List(a) -> List(a)
    Nil  : List(a)
    Pair : a * b -> Pair(a,b)
    Zero : Nat
    Succ : Nat -> Nat

rules

  add-one : Pair(Id,x) -> Pair(Id,Succ(x))

strategies

  congruence-dist-test = 
    apply-test(!"congruence-dist-test"
	      ,If^D(id,id,id)
	      ,!Pair(If(Id,Id,Id),[]) 
	      ,!If(Pair(Id,[]),Pair(Id,[]),Pair(Id,[]))
	      )

  congruence-thread-test = 
    apply-test(!"congruence-thread-test"
	      ,If^T(add-one,add-one,add-one)
	      ,!Pair(If(Id,Id,Id),Zero)
	      ,!Pair(If(Id,Id,Id),Succ(Succ(Succ(Zero))))
	      )

signature
  constructors
    sort : String -> Symbol
    lit  : String -> Symbol
    KW   : String -> Box

strategies

  congruence-thread-test2 = 
    apply-test(!"congruence-thread-test2"
	      , thread-map(number-sort <+ Pair(pp-lit,id))
	      ,!Pair([sort("Do"),lit("1"),sort("Plus"),lit("2")],1)
	      ,!Pair([1, KW("1"), 2, KW("2")], 3)
	      )

  thread-map(s) = 
    rec x(Cons^T(s, x) + Nil^T)

rules

  number-sort : 
    Pair(sort(x), i) -> Pair(i, <add>(i,1))

  pp-lit : 
    lit(x) -> KW(x)
