module Expressions
signature
  constructors
    IntConst : INTEGERconstant -> Constant
    FloatConst : FLOATINGconstant -> Constant
    OctConst : OCTALconstant -> Constant
    HexConst : HEXconstant -> Constant
    CharConst : CHARACTERconstant -> Constant
signature
  constructors
    StringLit : List(STRINGliteral) -> StringLiteralList
signature
  constructors
    ArrayIndex : PostfixExpression * CommaExpression -> PostfixExpression
    FunCall : PostfixExpression * List(AssignmentExpression) -> PostfixExpression
    Field : PostfixExpression * MemberName -> PostfixExpression
    DerefMember : PostfixExpression * MemberName -> PostfixExpression
    PostIncr : PostfixExpression -> PostfixExpression
    PostDecr : PostfixExpression -> PostfixExpression
signature
  constructors
    PreIncr : UnaryExpression -> UnaryExpression
    PreDecr : UnaryExpression -> UnaryExpression
    SizeofExp : UnaryExpression -> UnaryExpression
    SizeofType : TypeName -> UnaryExpression
    Address : CastExpression -> UnaryExpression
    Deref : CastExpression -> UnaryExpression
    Positive : CastExpression -> UnaryExpression
    Negative : CastExpression -> UnaryExpression
    Tilde : CastExpression -> UnaryExpression
    Negation : CastExpression -> UnaryExpression
signature
  constructors
    TypeCast : TypeName * CastExpression -> CastExpression
signature
  constructors
    Mul : MultiplicativeExpression * CastExpression -> MultiplicativeExpression
    Div : MultiplicativeExpression * CastExpression -> MultiplicativeExpression
    Mod : MultiplicativeExpression * CastExpression -> MultiplicativeExpression
signature
  constructors
    Add : AdditiveExpression * MultiplicativeExpression -> AdditiveExpression
    Subt : AdditiveExpression * MultiplicativeExpression -> AdditiveExpression
signature
  constructors
    ShiftLeft : ShiftExpression * AdditiveExpression -> ShiftExpression
    ShiftRight : ShiftExpression * AdditiveExpression -> ShiftExpression
signature
  constructors
    Lt : RelationalExpression * ShiftExpression -> RelationalExpression
    Gt : RelationalExpression * ShiftExpression -> RelationalExpression
    Le : RelationalExpression * ShiftExpression -> RelationalExpression
    Ge : RelationalExpression * ShiftExpression -> RelationalExpression
signature
  constructors
    Equal : EqualityExpression * RelationalExpression -> EqualityExpression
    NotEqual : EqualityExpression * RelationalExpression -> EqualityExpression
signature
  constructors
    And : EqualityExpression * ANDexpression -> ANDexpression
signature
  constructors
    ExOr : ANDexpression * ExclusiveORExpression -> ExclusiveORExpression
signature
  constructors
    IncOr : ExclusiveORExpression * InclusiveORExpression -> InclusiveORExpression
signature
  constructors
    LAnd : LogicalANDExpression * InclusiveORExpression -> LogicalANDExpression
signature
  constructors
    LOr : LogicalORExpression * LogicalANDExpression -> LogicalORExpression
signature
  constructors
    IfExp : LogicalORExpression * CommaExpression * ConditionalExpression -> ConditionalExpression
signature
  constructors
    Assign : UnaryExpression * AssignmentOperator * AssignmentExpression -> AssignmentExpression
signature
  constructors
    AssignEq : AssignmentOperator
    AssignMul : AssignmentOperator
    AssignDiv : AssignmentOperator
    AssignMod : AssignmentOperator
    AssignPlus : AssignmentOperator
    AssignMin : AssignmentOperator
    AssignSL : AssignmentOperator
    AssignSR : AssignmentOperator
    AssignAnd : AssignmentOperator
    AssignExp : AssignmentOperator
    AssignOr : AssignmentOperator
signature
  constructors
    Comma : AssignmentExpression * CommaExpression -> CommaExpression
    EmptyExp : CommaExpressionOpt
signature
