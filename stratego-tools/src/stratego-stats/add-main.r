module add-main
imports lib

signature
   constructors
      Main:    String -> Option

      Specification: list(Module) -> Specification
      Strategies: a -> b
      SDef: a * b * c -> d
      Call: a * b -> c
      SVar: a -> b

strategies
add-main = iowrap( Add-Main,
              ArgOption("--main",    \x -> Main(x)\, !"--main m   Use module as main module" )
           )

Add-Main =
           where(option-value(Main(?main),!"main" => main));
           (id, AddMain(!main))

AddMain(m) : 
  Specification(sects) -> 
  Specification([Strategies([SDef("main", [], Call(SVar(<m>()), []))])
                | sects])
