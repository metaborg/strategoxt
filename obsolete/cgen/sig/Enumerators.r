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
