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
