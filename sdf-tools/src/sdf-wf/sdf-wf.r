module sdf-wf
imports
  lib sdf-analysis

strategies

  sdf-wf
    = iowrap
        ( where( declared-sorts                                             => alldecs )
        ; where( !"ANALYSES:";debug )
        ; where( <uniq>alldecs         ;debug(!" Declared sorts:          ") => decs )
        ; where( defined-sorts         ;debug(!" Defined sorts:           ") => defs )
        ; where( used-sorts            ;debug(!" Used sorts:              ") => uses )
        ; where( !(defs,uses);diff     ;debug(!" Top sorts:               ") => tops )
        ; where( !alldecs; doubles     ;debug(!" Multiply declared sorts: ") )
        ; where( !(defs,uses);union                                          => srts )
        ; where( !(srts,decs);diff     ;debug(!" Non-declared sorts:      ") )
        ; where( !"NUMBERS:";debug )
	; where( !srts;length          ;debug(!" Sorts:                   ") )
        ; where( !"WARNINGS:";debug )
        ; where( !(uses,defs);diff     ;debug(!" Bottom sorts:            ") )
        ; where( !(tops,decs);diff     ;debug(!" Non-declared top sorts:  ") )
        ; where( !(decs,srts);diff     ;debug(!" Unknown declared sorts:  ") )
        )

  doubles
    = {xs: ?xs ; filter(not(once(!xs))) ; uniq}

  once(xs) 
    = {x : ?x
       ; where(
          xs; filter(?x) => [_]
        )
       ;!x }

