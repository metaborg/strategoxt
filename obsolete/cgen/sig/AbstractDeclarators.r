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
