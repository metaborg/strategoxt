module Preprocessor
signature
signature
  constructors
    PpIf : IfLine * List(ExternalDefinition) *
           List((ElifLine,List(ExternalDefinition))) *
           Option((ElseLine,List(ExternalDefinition))) -> ExternalDefinition
