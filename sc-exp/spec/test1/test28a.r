module test28a

signature
  sorts Exp Type
  constructors
    Var   : String -> Exp
    Plus  : Exp * Exp -> Exp
    Int   : Type
    Float : Type

strategies

  main = 
    <id{[Rename]}> Var("c"){Var("a")} => Var("c"){Var("r")}

  Rename:
    Var(_) -> Var("r")
