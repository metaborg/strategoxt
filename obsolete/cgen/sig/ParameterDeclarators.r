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
