module Stratego
signature
  constructors
    Module : ModName * List(Decl) -> Module
    Specification : List(Decl) -> Module
signature
  constructors
    Script : List(Command) -> Script
    Command : Decl -> Command
    Dump : String -> Command
    Load : String -> Command
    Eval : Strategy -> Command
signature
  constructors
    Imports : List(ModName) -> Decl
    Rules : List(Def) -> Decl
    Strategies : List(Def) -> Decl
    Signature : List(Sdecl) -> Decl
    Overlays : List(Overlay) -> Decl
signature
  constructors
    Sorts : List(Sort) -> Sdecl
    Constructors : List(Opdecl) -> Sdecl
signature
  constructors
    SortNoArgs : Id -> Sort
    Sort : Id * List(Term) -> Sort
signature
  constructors
    Star : Kind
    StarStar : Kind
signature
  constructors
    OpDecl : Id * Type -> Opdecl
signature
  constructors
    ConstType : Term -> Type
    FunType : List(Type) * Type -> Type
signature
  constructors
    Var : Id -> Var
    ListVar : LId -> LID
    Var : LID -> Var
signature
  constructors
    Wld : Term
    Int : Int -> Term
    Real : Real -> Term
    Str : String -> Term
    BuildDefault : Term -> Term
    Con : Var * Context -> Term
    Op : Id * List(Term) -> Term
    As : Var * Term -> Term
    Tuple : List(Term) -> Term
    App : Strategy * Term -> Term
    List : List(Term) -> Term
    ListTail : List(Term) * Term -> Term
    Explode : Term * Term -> Term
    RootApp : StrategyAngle -> Term
    Anno : Term * Term -> Term
signature
  constructors
    Con1 : Term -> Context
    Con2 : Term * Id -> Context
    Con3 : Term * Strategy -> Context
    Con4 : Term * Strategy * Id -> Context
signature
  constructors
    RDefNoArgs : Id * Rule -> RuleDef
    RDef : Id * List(Typedid) * Rule -> RuleDef
signature
  constructors
    SRDefNoArgs : Id * StratRule -> RuleDef
    SRDef : Id * List(Typedid) * StratRule -> RuleDef
signature
  constructors
    RuleNoCond : Term * Term -> Rule
    Rule : Term * Term * Strategy -> Rule
signature
  constructors
    StratRuleNoCond : Strategy * Strategy -> StratRule
    StratRule : Strategy * Strategy * Strategy -> StratRule
signature
  constructors
    Fail : Strategy
    Id : Strategy
    SVar : Id -> SVar
    Let : List(Either(StrategyDef,RuleDef)) * Strategy -> Strategy
    CallNoArgs : SVar -> Strategy
    Call : SVar * List(Strategy) -> Strategy
    Match : Term -> Strategy
    Build : Term -> Strategy
    ScopeDefault : Strategy -> Strategy
    Scope : List(ID) * Strategy -> Strategy
    BA : StrategyAngle * Term -> Strategy
    AM : Strategy * Term -> Strategy
    ParenStrat : Strategy -> StrategyParen
    LRule : Rule -> Strategy
    Seq : Strategy * Strategy -> Strategy
    Choice : Strategy * Strategy -> Strategy
    LChoice : Strategy * Strategy -> Strategy
    RChoice : Strategy * Strategy -> Strategy
    GChoice : Strategy * Strategy -> Strategy
    LGChoice : Strategy * Strategy -> Strategy
    RGChoice : Strategy * Strategy -> Strategy
    GuardedLChoice : Strategy * StrategyMid * Strategy -> Strategy
    Rec : Id * Strategy -> Strategy
    Not : Strategy -> Strategy
    Where : Strategy -> Strategy
    Test : Strategy -> Strategy
    Bagof : Strategy -> Strategy
signature
  constructors
    PrimNoArgs : String -> Strategy
    Prim : String * List(Term) -> Strategy
    Path : Int * Strategy -> Strategy
    Some : Strategy -> Strategy
    One : Strategy -> Strategy
    All : Strategy -> Strategy
    Thread : Strategy -> Strategy
    StrCong : String -> Strategy
    IntCong : Int -> Strategy
    RealCong : Real -> Strategy
    TupleCong : Strategy
    TupleCong : Strategy * List(Strategy) -> Strategy
    ModCongNoArgs : Mod -> Strategy
    ModCong : Mod * List(Strategy) -> Strategy
    Mod : Id * Id -> Mod
    ListCongNoTail : List(Strategy) -> Strategy
    ListCong : List(Strategy) * Strategy -> Strategy
    ExplodeCong : Strategy * StrategyParen -> Strategy
    DynamicRules : List(RuleDef) -> Strategy
    OverrideDynamicRules : List(RuleDef) -> Strategy
    DynRuleScope : List(Id) * Strategy -> Strategy
signature
  constructors
    SDefNoArgs : Id * Strategy -> StrategyDef
    SDef : Id * List(Typedid) * Strategy -> StrategyDef
signature
  constructors
    DefaultVarDec : Id -> Typedid
    VarDec : Id * Type -> Typedid
signature
  constructors
    OverlayNoArgs : Id * Term -> Overlay
    Overlay : Id * List(Id) * Term -> Overlay
