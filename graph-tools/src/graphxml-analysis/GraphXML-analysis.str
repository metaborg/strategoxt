module GraphXML-analysis
imports
  GraphXML options Literal-lib list-basic termid

strategies

  main
    = io-idwrap(InId("\"graphxml_1_1-0\""), 
                get-sinks-and-origins;print-sinks-and-origins)

  get-targets
    = collect(\target(x)-><de-quote>x\)

  get-sources
    = collect(\source(x)-><de-quote>x\)

  get-sinks
    = \g -> <diff>(targets,sources)
       where <get-targets>g => targets
           ; <get-sources>g => sources
      \

  get-origins
    = \g -> <diff>(sources,targets)
       where <get-targets>g => targets
           ; <get-sources>g => sources
      \

  get-sinks-and-origins
    = \g -> (<diff>(targets,sources),<diff>(sources,targets))
       where <get-targets>g => targets
           ; <get-sources>g => sources
      \

  print-sinks-and-origins
    = (?sinks,?origins)
    ; !["SINKS: ",   <nodenames2string>sinks, "\n", 
        "ORIGINS: ", <nodenames2string>origins, "\n"
       ]
    ; concat-strings
//    = (?sinks,?origins)
//    ; !sinks;debug(!"SINKS: ")
//    ; !origins;debug(!"ORIGINS: ")
//    ; !""

  nodenames2string
    = separate-by(!" ");concat-strings
