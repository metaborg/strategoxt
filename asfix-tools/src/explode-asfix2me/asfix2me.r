module asfix2me
imports asfix

signature
constructors
   list : Sort   -> Production
   lit  : String -> Tree
   assoc : Attr  -> Attr