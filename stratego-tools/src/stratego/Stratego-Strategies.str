module Stratego-Strategies
  imports Stratego-Terms
  signature
    constructors
      Id : Strat
      Fail : Strat
      Test : Strat -> Strat
      Not : Strat -> Strat
      Seq : Strat * Strat -> Strat
      Choice : Strat * Strat -> Strat
      LChoice : Strat * Strat -> Strat
      Rec : SVar * Strat -> Strat
      StrCong : String -> Strat
      IntCong : Natural -> Strat
      TupleCong : Strat * List(Strat) -> Strat
      ListCong : List(Strat) -> Strat
      Path : Natural * Strat -> Strat
      One : Strat -> Strat
      Some : Strat -> Strat
      All : Strat -> Strat
      Thread : Strat -> Strat
      Kids : Strat
      Match : Term -> Strat
      Build : Term -> Strat
      Scope : List(Identifier) * Strat -> Strat
      Where : Strat -> Strat
      Let : SDef * Strat -> Strat
      Call : SVar * List(Strat) -> Strat
      SVar : Identifier -> SVar
      SDef : Identifier * List(Identifier) * Strat -> SDef

