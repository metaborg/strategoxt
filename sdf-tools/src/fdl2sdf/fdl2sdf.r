module fdl2sdf

imports Sdf2-Syntax fdl termid Literal-lib Bracket-Symbol


strategies

fdl2sdf = 
   io-idwrap(InOutId("\"fdl-1\"", !"\"sdf-2.1\""), 
   bottomup(Fdl2Sdf))

short-description(p) = !["Usage: ", <p>(), " [options]"]

long-description(p)  = ![ "This program generates an SDF syntax definition from a Feature Description\n",
                          "written in the Feature Description Language (FDL). Feature constraints\n",
                          "are discarded."]


Fdl2Sdf :
   one-of(xs) ->
   <foldr1(\[x] -> x\, \(x,y) -> alt(x,y)\ )>xs


Fdl2Sdf :
   'all( x ) -> x

Fdl2Sdf :
   more-of(xs) -> iter(bracket-symbol(xs'))
   where
      <foldr1(\[x] -> x\, \(x,y) -> alt(x,y)\ )>xs => xs'

Fdl2Sdf :
   default(x) -> "default"

Fdl2Sdf :
   dots -> "..."

Fdl2Sdf :
   FeatureName(x) -> sort(x)

Fdl2Sdf :
   AtomicFeature(s) -> <quote>s

Fdl2Sdf :
   optional(x) -> opt(x)


Fdl2Sdf:
   FeatureDefinition(x,y) -> prod(syms, sort(x),attrs(cons(<quote>x)))
   where
   (
   <is-list>y;
      !y => syms
   <+
      ![y] => syms
   )

Fdl2Sdf: 
   FeatureDiagram(d,c) -> Module( "fdl-module", 'imports, ['sorts, cfs] )
   where
      !Imports(["Layout"])   => 'imports;
      <collect(sort(id));uniq>d       => s;
      !Exports(Sorts(s))              => 'sorts;
      !Exports(context-free-syntax(d)) => cfs

Fdl2Sdf = id

