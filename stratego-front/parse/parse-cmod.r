module parse-cmod
imports lib config

signature
  constructors
    Include: File -> Include

strategies

  parse-cmod =
    where([get-path => prefix | id])
    ; where(prim("get_conf_pkgdatadir") => datadir)
    ; import-config-file(
        find-config-file(![prefix,datadir], !"parse-cmod.config")
      )
    ; parse-options(io-options 
        + ArgOption("-I" + "--Include", where(<extend-config>("-I", [<id>])),
	            !"-I p|--Include p include modules from directory p")) => options
    ; <extend-config> ("-I", ["./"])
    ; <get-config> "-i" => infile
    ; debug(!"parsing ")
    ; (<get-config> "-o" <+ new-file) => outfile
    ; <parse-concrete-module> (infile, outfile)
    ; (<get-config> "-o" 
       <+ <ReadFromFile> outfile
          ; where(<rm-files> [outfile])
          ; <WriteToTextFile> (stdout, <id>))
    ; <exit> 0

  parse-concrete-module =
    ? (filein, fileout)
    ; <get-syntax> filein      => syntax
    ; <get-parse-table> syntax => tbl
    ; <basename; guarantee-extension(!"atree")> filein => fileout2
    ; !filein
    ; call-tmp(<get-config> "sglr",             !["-2", "-p", tbl],
      call-out(<get-config> "implode-asfix",    ![], !fileout2,
      call-tmp(<get-config> "meta-explode",     ![],
      call-out(<get-config> "stratego-desugar", ![], !fileout, id))))

  get-syntax = 
     basename
     ; guarantee-extension(!"syn") => synfile
     ; ReadFromFile => syntax#(_)
     ; !syntax
  <+ <fatal-error>["syntax declaration file for: ", <id>, " not found"]

  get-parse-table =
    ? syntax
    ; <guarantee-extension(!"tbl")> syntax => tbl1
    ; ( <find-in-path; debug(!"using parse table: ")> (tbl1, <get-config> "-I")
       <+ say(!"creating parse table")
          ; <get-syntax-definition> syntax => def
          ; <call> (<get-config>"sdf2table", ["-i", def, "-o", tbl1, "-m", syntax])
          ; !tbl1
      )

  get-syntax-definition =
    ? syntax
    ; <guarantee-extension(!"def")> syntax => def
    ; ( <find-in-path; debug(!"using syntax definition: ")> (def, <get-config> "-I")
        <+ say(!"creating syntax definition")
           ; <guarantee-extension(!"sdf")> syntax => sdf
	   ; temp-file( \ (adef, _) -> <
                <call> (<get-config>"pack-sdf", 
                        ["-i", sdf, "-o", adef | <get-config; map(!["-I", <id>]); concat> "-I"])
                ; <call> (<get-config> "asource",  ["-i", adef, "-o", def ])
	     > \ )
	   ; !def
        )
