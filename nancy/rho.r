module rho

signature
  sorts Term
  constructors 
    Con  : String -> Term	// a
    Var  : String -> Term       // X
    Rule : Term * Term -> Term  // t -> t
    App  : Term * Term -> Term  // t . t
    Null : Term			// null
    Pair : Term * Term -> Term  // t, t

overlays

  Self(t1, t2) = App(App(t1, t2), t1)

strategies

  // for rho terms of the following form the semantics above
  // is well-defined (?)

  rho-term =
  rec t(
    Var(is-string)
    + Con(is-string)
    + App(t, t)
    + Rule(rho-pattern, t)
    + Pair(t, t)
    + Null
  )
 
  rho-pattern =
  rec p(
    Var(is-string)
    + Con(is-string)
    + App(p, p)
    + Pair(p, p)
    + Null
  )

(* For example, what is the meaning of the following rho-term

  App(
    Rule(Pair(Var("x"), Rule(F(Var("x")), G(Var("x"))))
        ,some-rhs)
   ,Pair(bla, Rule(F(bla), G(bla)))
  )

compare this to the following lambda calculus expression

 (\ x -> (\ (\x -> G(x)) -> some-rhs)) bla bla bla

(\ f(a) -> .... f ... a ...)  t

if you add pattern matching to \ calculus this becomes

 (\ (x, (\F(x) -> G(x))) -> some-rhs) bla bla bla


  App(Rule(App(Var("f"), Con("a")), ...), App(x, y))

  App(Rule(App(Var("f"), Con("a")), ...), t)

  subs(f a) =(beta, eta) t

  ( (X -> Y) -> ... ) ( a -> ...)


  (\ Scope(F(x) -> e) -> e') Scope(\y -> e')

  \ (\x -> e) -> (\y -> e')

  
 transform(Scope(f)) = Scope(\x -> transform(f x))

 all = f -> ((g x -> (all f g) (f x)) , (x -> x))(Succ Zero)

  Plus 1 2

  ((Plus 1) 2)

*)
