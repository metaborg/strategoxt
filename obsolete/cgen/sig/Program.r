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


    TranslationUnit : List(Bla) -> Program
    Include : String -> Bla

