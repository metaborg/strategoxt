module Stratego-Sugar
  imports Stratego-Strategies
  signature
    constructors
      List : List(Term) -> Term
      Tuple : List(Term) -> Term
      Con : Identifier * Term * Option(SVar) -> Term
      App : Strat * Term -> Term
      AM : Strat * Term -> Strat
      BA : StratAux * Term -> Strat
      SRule : Rule -> Strat

