module automaton-sig
signature
  sorts Aut
  constructors
    Down       : Int * Aut -> Aut
    Up         : Aut       -> Aut
    Accept     : List(Int) -> Aut
    Case       : List(Aut) -> Aut

    Fun        : String * Int -> Fun

    MatchVars  : List(String) * Path * Aut -> Aut
    MatchFunA  : Fun * List(String) * Path * Aut -> Aut

    MatchTerm  : Path * Term * Aut -> Aut