definition
module AbstractDeclarators
signature
  constructors
    PointerOf : List(TypeQualifier) -> Pointer
signature
signature
  constructors
    Pointer : Pointers *
              Option(Either(PostfixAbstractDeclarator,PostfixingAbstractDeclarator)) -> UnaryAbstractDeclarator
signature
  constructors
    ParamListVarArgs : List(ParameterDeclaration) -> PostfixingAbstractDeclarator
    ParamList : List(ParameterDeclaration) -> PostfixingAbstractDeclarator
signature
  constructors
    ArrayDecl : Option(ArrayAbstractDeclarator) * Option(ConstantExpression) -> ArrayAbstractDeclarator
signature
  constructors
    DeclBracket : UnaryAbstractDeclarator -> PostfixAbstractDeclarator
    DeclBracket1 : PostfixAbstractDeclarator -> PostfixAbstractDeclarator
    DeclBracket2 : PostfixingAbstractDeclarator -> PostfixAbstractDeclarator
    FunType : UnaryAbstractDeclarator * PostfixingAbstractDeclarator -> PostfixAbstractDeclarator
module ParameterDeclarators
signature
  constructors
    ParamDecl : Either(DeclarationQualifierList,Either(List(TypeQualifier),Either(DeclarationSpecifier,TypeSpecifier)))
                * Option(Either(AbstractDeclarator,IdentifierDeclarator)) -> ParameterDeclaration
    ParamDecl2 : Either(DeclarationSpecifier,TypeSpecifier) * TypedefDeclarator -> ParameterDeclaration
signature
  constructors
    TypeName : Either(TypeSpecifier,List(TypeQualifier)) *
               Option(AbstractDeclarator) -> TypeName
module Enumerators
signature
  constructors
    Enum : Option(IdentifierOrTypedefName) * List(Enumerator) -> EnumSpecifier
    EnumId : IdentifierOrTypedefName -> EnumSpecifier
signature
  constructors
    Enumerator : IdentifierOrTypedefName * Option(EnumeratorValue) -> Enumerator
signature
  constructors
    EnumVal : ConstantExpression -> EnumeratorValue
module StructsAndUnions
signature
signature
  constructors
    Struct : Option(IdentifierOrTypedefName) * List(MemberDeclaration) -> StructSpecifier
    StructId : IdentifierOrTypedefName -> StructSpecifier
signature
  constructors
    Union : Option(IdentifierOrTypedefName) * List(MemberDeclaration) -> UnionSpecifier
    UnionId : IdentifierOrTypedefName -> UnionSpecifier
signature
  constructors
    MemDecl : TypeSpecifier * List(MemberDeclarator) -> MemberDeclaration
    MemDecl1 : List(TypeQualifier) * List(MemberIdentifierDeclarator) -> MemberDeclaration
signature
  constructors
    BitFieldSize : Option(Declarator) * ConstantExpression -> MemberDeclarator
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
    FunCall : PostfixExpression * ArgumentExpressionList -> PostfixExpression
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
module Types
signature
  constructors
    Typedef : StorageClass
    Extern : StorageClass
    Static : StorageClass
    Auto : StorageClass
    Register : StorageClass
signature
  constructors
    Int : BasicTypeName
    Char : BasicTypeName
    Short : BasicTypeName
    Long : BasicTypeName
    Float : BasicTypeName
    Double : BasicTypeName
    Signed : BasicTypeName
    Unsigned : BasicTypeName
    Void : BasicTypeName
signature
  constructors
    Const : TypeQualifier
    Volatile : TypeQualifier
signature
  constructors
    Declaration : Either(DeclarationQualifierList,List(TypeQualifier)) *
                  List(IdDecl) -> Declaration
    Declaration2 : Either(DeclarationSpecifier,TypeSpecifier) * List(VarDecl) -> Declaration
signature
  constructors
    IdDeclInit : IdentifierDeclarator * Initializer -> IdDecl
    DeclInit : Declarator * Initializer -> VarDecl
    ArrayInit : List(Initializer) -> Initializer
    ArrayInitIncomplete : List(Initializer) -> Initializer
    AssignInit : AssignmentExpression -> Initializer
signature
  constructors
    TypeSpec : List(TypeQualifier) *
               Either(BasicTypeName,Either(ElaboratedTypeName,TypedefName)) *
               List(Either(TypeQualifier,BasicTypeName)) -> TypeSpecifier
signature
signature
  constructors
    DQualifiers : List(TypeQualifier) * StorageClass *
                  List(DeclarationQualifier) -> DeclarationQualifierList
signature
  constructors
    DeclSpec : List(TypeQualifier) * StorageClass * List(DeclarationQualifier)
               * Either(BasicTypeName,Either(ElaboratedTypeName,TypedefName)) *
               List(Either(DeclarationQualifier,BasicTypeName)) -> DeclarationSpecifier
module Identifiers
signature
  constructors
    Id : ID -> IDENTIFIER
    TypeId : ID -> TypedefName
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
module Program
signature
signature
  constructors
    FunDef : Either(NoTypeSpecifier,Either(DeclarationSpecifier,Either(TypeSpecifier,Either(DeclarationQualifierList,List(TypeQualifier)))))
             *
             Either(IdentifierDeclarator,(OldFunctionDeclarator,List(Declaration)))
             * CompoundStatement -> FunctionDefinition
signature
  constructors
    NoTypeSpecifier : NoTypeSpecifier
module Declarators
signature
signature
  constructors
    IdDecl : PointersOpt * IDENTIFIER * Option(PostfixingAbstractDeclarator) -> IdentifierDeclarator
    FunDecl : PointersOpt * IdentifierDeclarator *
              Option(PostfixingAbstractDeclarator) -> IdentifierDeclarator
signature
  constructors
    TypedefDeclarator1 : PointersOpt * TypedefName *
                         Option(PostfixingAbstractDeclarator) -> TypedefDeclarator
    TypedefDeclarator2 : PointersOpt * TypedefDeclarator *
                         Option(PostfixingAbstractDeclarator) -> TypedefDeclarator
signature
  constructors
    OldFunction1 : PointersOpt * ParenIdentifierDeclarator * List(IDENTIFIER) -> OldFunctionDeclarator
    OldFunction2 : PointersOpt * OldFunctionDeclarator *
                   Option(PostfixingAbstractDeclarator) -> OldFunctionDeclarator
module Preprocessor
signature
signature
  constructors
    PpIf : IfLine * List(ExternalDefinition) *
           List((ElifLine,List(ExternalDefinition))) *
           Option((ElseLine,List(ExternalDefinition))) -> ExternalDefinition
module Lexical
module Constants
module Keywords
signature
  constructors
    return : RETURN
    exit : RETURN
signature
module C
imports Keywords Constants Lexical Preprocessor Declarators Program Statements
        Identifiers Types Expressions StructsAndUnions Enumerators
        ParameterDeclarators AbstractDeclarators
module Main
imports C
