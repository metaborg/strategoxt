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
