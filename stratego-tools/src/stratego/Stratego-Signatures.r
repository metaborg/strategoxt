module Stratego-Signatures
  signature
    constructors
      Signature : List(BSig) -> Signature
      Sorts : List(SortDecl) -> BSig
      Operations : List(OpDecl) -> BSig
      Constructors : List(OpDecl) -> BSig
      Sort : Identifier * List(Identifier) -> SortDecl
      OpDecl : Identifier * Type -> OpDecl
      ConstType : Term -> Type
      FunType : List(Term) * Term -> Type

