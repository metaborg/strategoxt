module Stratego-Specifications
  imports Stratego-Signatures Stratego-Overlays Stratego-Rules
          Stratego-Strategies
  signature
    constructors
      Signature : List(BSig) -> BSpec
      Overlays : List(Overlay) -> BSpec
      Rules : List(RDef) -> BSpec
      Strategies : List(SDef) -> BSpec
      Specification : List(BSpec) -> Spec

