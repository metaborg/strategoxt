module Fdl

signature
constructors

FeatureDiagram    : List ( FeatureDefinition ) * List( Constraint ) -> FeatureDiagram
FeatureDefinition : FeatureName * FeatureExpression -> FeatureDefinition 
'all              : List ( FeatureExpression ) -> FeatureExpression
one-of            : List ( FeatureExpression ) -> FeatureExpression
more-of           : List ( FeatureExpression ) -> FeatureExpression 
FeatureName       : FeatureName -> FeatureExpression 
AtomicFeature     : AtomicFeature -> FeatureExpression 
optional          : FeatureExpression -> FeatureExpression 
default           : AtomicFeature -> FeatureExpression 
dots              : AtomicFeature 
DiagramConstraint : DiagramConstraint -> Constraint 
UserConstraint    : UserConstraint -> Constraint 
requires          : AtomicFeature * AtomicFeature -> DiagramConstraint 
excludes          : AtomicFeature * AtomicFeature -> DiagramConstraint 
include           : AtomicFeature -> UserConstraint 
exclude           : AtomicFeature -> UserConstraint 

