module asfix2sdf
imports
  lib Sdf-Syntax

strategies
  asfix2sdf
    = iowrap(
        collect-prods
      ; prods2grammar
      ; id2Id // Needed to keep pretty-printer happy
      )

  collect-prods
    = collect(is-prod)

  is-prod
    = ?prod(_,_,_)
    // + ?prod-fun(_,_,_,_) // These do not occur in AsFix.

  prods2grammar
    = \prods ->
       Definition([Module("M",[],[Exports(syntax(prods))])])
      \

  id2Id
    = alltd(\'id(m) -> Id(m)\)


