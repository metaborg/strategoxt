module Prop
signature
  constructors
    True : Prop
    False : Prop
    Not : Prop -> Prop
    And : Prop * Prop -> Prop
    Or : Prop * Prop -> Prop
