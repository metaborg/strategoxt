module Stratego-Signatures
  signature
    constructors
      Signature : List(BSig) -> Signature
      Sorts : List(SortDecl) -> BSig
      Operations : List(OpDecl) -> BSig
      Constructors : List(OpDecl) -> BSig
      OpDecl : Identifier * Type -> OpDecl
      ConstType : Term -> Type

      FunType : List(Type) * Type -> Type
      Sort : Identifier * List(Term) -> SortDecl

      As: Identifier * Term -> Term
      BuildDefault: Term -> Term
