module astratego2text
imports lib
strategies

  astratego2text =
    where([?program; get-path => prefix | id])
    ; where(prim("get_conf_pkgdatadir") => pkgdatadir)
    ; import-config-file(
        find-config-file(![prefix,pkgdatadir], !"astratego2text.config")
      )
    ; parse-options(io-options)
    ; <get-config> "-i"
    ; where((<get-config> "-o" <+ <conc-strings> (<id>, ".txt")) => outfile)
    ; call-tmp(<get-config>"ast2abox", !["-p", <get-config> "Stratego.pp"],
      call-out(<get-config>"abox2text", ![], !outfile, id))
    ; try(<get-config> "-S" <+ say(!program))


    
