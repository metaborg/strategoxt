module test11
signature
  sorts Term
  constructors
    Var : String -> Term

strategies

  f(g : Term * (Term -> Term) -> Term) : x -> <g(id)> x

  h : y -> z where <Var(id)> y => z

  main =
    !Var("a");
    where(f(Var) + h)
