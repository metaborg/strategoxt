module Identifiers
   exports
      lexical syntax
         [a-zA-Z\_] [a-zA-Z\_0-9]* -> IDENTIFIER

      lexical restrictions
         IDENTIFIER -/- [a-zA-Z\_0-9]

      context-free syntax
         IDENTIFIER -> TypedefName {cons("IDENTIFIER")}
