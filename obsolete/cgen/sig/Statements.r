module Statements
signature
signature
  constructors
    Label : IdentifierOrTypedefName * Statement -> LabeledStatement
    Case : ConstantExpression * Statement -> LabeledStatement
    Default : Statement -> LabeledStatement
signature
  constructors
    Compound : List(Declaration) * List(Statement) -> CompoundStatement
signature
  constructors
    Stat : CommaExpressionOpt -> ExpressionStatement
signature
  constructors
    If : CommaExpression * Statement -> SelectionStatement
    IfElse : CommaExpression * Statement * Statement -> SelectionStatement
    Switch : CommaExpression * Statement -> SelectionStatement
signature
  constructors
    While : CommaExpression * Statement -> IterationStatement
    DoWhile : Statement * CommaExpression -> IterationStatement
    For : CommaExpressionOpt * CommaExpressionOpt * CommaExpressionOpt *
          Statement -> IterationStatement
signature
  constructors
    Goto : IdentifierOrTypedefName -> JumpStatement
    Continue : JumpStatement
    Break : JumpStatement
    Return : CommaExpressionOpt -> JumpStatement
    Exit : CommaExpressionOpt -> JumpStatement
