\literate[{\tt PROTO-SC}: Stratego Compiler Driver]

	\begin{abstract}

	This module glues together the components that make up the
	Stratego compiler. It is usually run from a script that
	provides the default information about paths.

	\end{abstract}

\begin{code}
module sc
imports lib sugar dynamic-rules config verbose
strategies

  sc = 
  ( command-line-options
    ; profile'( if-verbose1(<printnl>(stderr, ["-----\ncompilation succeeded:   " | <id>])), 
        compile
      )
    ; if-verbose2(<printnl>(stderr, ["compilation succeeded (", <run-time>, " secs)"]))
    ; <exit> 0
  ) <+ <printnl>(stderr, ["compilation failed (", <run-time>, " secs)"])
       ; <exit> 1

  compile =
    front
    ; optimize
    ; back-end
    ; c-compile
    ; try(not(<get-config>"--norm"); remove-intermediates)

  front =
    profile'(if-verbose1(<printnl>(stderr, ["front-end succeeded:     " | <id>])), 
      parse
      ; output-ast
      ; add-main 
      ; frontend 
      ; output-frontend
      ; extract  
      ; stratego-nf 
      ; rename-defs
    )
 
  optimize =
    profile'(if-verbose1(<printnl>(stderr, ["optimization succeeded:  " | <id>])), 
        optimize1 
        ; try(where(not(<get-config> "--fusion")); fusion)
        ; inline
        ; compile-match 
        ; optimize2
        //  ; stratego-of
    )

  back-end =
    profile'(if-verbose1(<printnl>(stderr, ["back-end succeeded:      " | <id>])), 
      canonicalize
      ; stratego-cf
      ; s2c
      //  ; c-format 
      ; ac2abox
      ; abox2text
    )

  c-compile =
     <get-config> "-c"
  <+ profile'(if-verbose1(<printnl>(stderr, ["C compilation succeeded: " | <id>])), 
       c-to-object-code 
       ; link-object-code
     )

strategies

// Command line options

  command-line-options =
    where([get-path => prefix | id])
    ; where(prim("get_conf_pkgdatadir") => pkgdatadir)
    ; where(prim("get_conf_datadir") => datadir)
    ; import-config-file(
        find-config-file(![prefix, pkgdatadir], !"sc.config")
      )
    ; import-config-files(
        find-plugins(![<conc-strings>(datadir,"/sc-plugins")], !".plugin")
      )
    ; parse-options(sc-options)
    ; try(<get-config> "--man"
          ; <call>("cat", [<get-config> "manual"])
          ; <exit> 0)
    ; try(<get-config> "-v"
          ; sc-version 
          ; <exit> 0)
    ; (!(<get-config; basename> "-i", "")  
       <+ <fatal-error> ["no main module specified"])
    ; sc-announce
    ; if-verbose1(where(<get-config> "-i"; debug(!"compiling ")))

signature
  sorts Option
  constructors
    Dir      : String -> Option
    ExecDir  : String -> Option
    InclDir  : String -> Option
    CInclDir : String -> Option
    CLibDir  : String -> Option
    Input    : String -> Option
    Main     : String -> Option
    AST      : Option
    Ignore   : Option
    CC       : Option
    NORM     : Option
    FUSION   : Option
    FRONTEND : Option
    CSYNTAX  : Option
    TraceAll : Option
    Trace    : String -> Option
    Manual   : Option

strategies

  sc-options =
    ArgOption("-i",
	where(<set-config>("-i", <id>)); !Input(<basename>),
	!"-i file            Main module to compile (required)\n")


  + ArgOption("-o" + "--output",  
	where(<set-config> ("-o",<id>)); !Output(<id>),      
	!"-o f|--output f    Write output to f" )

  + ArgOption("-I" + "--Include",        
	where(<extend-config>("-I", ["-I", <id>])); !Ignore,
	!"-I d|--Include d   Include modules from directory d")

  + ArgOption("--main" + "-m",
	where(<set-config>("-m", <id>)); !Main(<id>),
	!"--main f | -m f    Main strategy to compile (default: main)\n")



  + ArgOption("--C-include",       
	where(<post-extend-config>("--C-include", [<id>]));!Ignore, 
	!"--C-include h      Include header file h (\"file.h\" or <file.h>)")

  + ArgOption("-CI",       
	where(<extend-config>("-CI", [<id>])); !Ignore,
	!"-CI d              Include C headers from directory d")

  + ArgOption("-CL",
	where(<extend-config>("-CL", [<id>])); !Ignore,
	!"-CL d              Include binary libraries from directory d\n")

  + Option("-c",          
	where(<set-config>("-c",())); !CC,
	!"-c                 Produce C code only (don't compile)" )

  + Option("--ast",
	where(<set-config>("--ast",())); !AST,
	!"--ast              Produce abstract syntax tree" )

  + Option("-F",           
	where(<set-config>("-F",())); !FRONTEND,
	!"-F                 Produce normalized specification" )

  + Option("--norm",
        where(<set-config>("--norm", ())); !NORM,
	!"--norm             Do not remove intermediate results" )

  + Option("--fusion",     
	where(<toggle-config>("--fusion",())); !FUSION,
	!"--fusion           Toggle specialize applications of innermost (default: on)" )

  + Option("--trace-all",  
	where(<set-config>("--trace-all",())); !TraceAll,
	!"--trace-all        Instrument all definitions to print tracing information" )

  + ArgOption("-t",        
	where(<extend-config>("-t", [<id>])); \ x -> Trace(x) \,
	!"-t f               Instrument definition of f to print tracing information\n" )


  + ArgOption("--verbose",         
	where(<set-config> ("--verbose",<string-to-int>)); !Verbose(<id>),         
	!"--verbose i       Verbosity level i (default 1)")

  + Option("-S"+"--silent",       
	where(<set-config> ("--verbose",0)); !Verbose(0),          
	!"-S|--silent      Silent execution (same as --verbose 0)")


  + Option("-h" + "--help",         
	where(<set-config> ("-h",())); !Help(),         
	!"-h | --help        Show help")

  + Option("--man",         
	where(<set-config> ("--man",())); !Manual(),         
	!"--man              Show manual page")

  + Option("-v"+"--version",     
	where(<set-config> ("-v",())); !Version(),         
	!"-v|--version       Display program's version")

  short-description(p) = 
    !["Usage: ", <p>(), " [options]"] 

  long-description(p) = ![	
	"   \n",
	"   The Stratego Compiler translates Stratego specifications to C code\n",
	"   \n",
	"   Typical usage:\n",
	"     ", <p>, " -i mod\n",
	"   to compile module mod\n",
	"   \n",
	"   Stratego is a language for program transformation based on the\n",
        "   paradigm of rewriting strategies. For documentation see\n",
	"   \n",
	"                 http://www.stratego-language.org",
	"   \n",
	"   \n",
	"   Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>\n",
	"   \n",
	"   This program is free software; you can redistribute it and/or modify\n",
	"   it under the terms of the GNU General Public License as published by\n",
	"   the Free Software Foundation; either version 2, or (at your option)\n",
	"   any later version.\n"
  ]

  sc-version =
    where(<printnl>(stderr, 
	  ["The Stratego Compiler (version ", <get-config> "VERSION", ")"]))

  sc-announce =
    if-verbose2(sc-version)

strategies

// Compiler components
	
  // Collect all modules into one abstract syntax tree

  parse = 
    pipe(<get-config> "pack-stratego", !".tree",
         <concat> [<!["-dep", <get-config> "-o"] <+ !["-dep", <get-config> "-i"]>,
                   <get-config> "-I", <pass-verbose> ])

  output-ast =
    try(where(<get-config>"--ast")
       ; (?file, ?ext)
       ; <printnl>(stderr, ["abstract syntax (after parsing) written to ", file, ext])
       ; <exit> 0)

  output-frontend =
    try(where(<get-config> "-F")
       ; (extract-all <+ <fatal-error> ["extracting all definitions failed"])
       ; (?file, ?ext)
       ; <printnl>(stderr, ["abstract syntax (after frontend) written to ", file, ext])
       ; <exit> 0)

  // Adding main strategy
  // What happens if the specification already contains a main strategy? 

  AddMain(m) : 
    Specification(sects) -> 
    Specification([Strategies([SDef("main", [], Call(SVar(<m>()), []))]) 
                  | sects])

  add-main =
    where(<get-config> "-m" => m)
    ; transform-file(AddMain(!m), !".tree1")
   <+ transform-file(id, !".tree1")

  pass-verbose = 
    !["--verbose", <subt; int-to-string>(<get-config <+ !1> "--verbose", 1)]

  frontend = 
    pipe(<get-config> "frontend", !".s1", !["-b" | <pass-verbose> ])

  extract = 
    pipe(<get-config> "extract", !".s2", !["-b" | <pass-verbose> ])

  extract-all = 
    pipe(<get-config> "extract-all", !".sdefs", !["-b" | <pass-verbose> ])

  rename-defs = 
    pipe(<get-config> "rename-defs", !".s3", !["-b" | <pass-verbose> ])

  stratego-nf = 
    pipe(<get-config> "Stratego-Normal-Format", id, !["-b" | <pass-verbose> ])

  optimize1 = 
    pipe(<get-config> "optimize1", !".s4", !["-b"| <pass-verbose> ])

  fusion = 
    pipe(<get-config> "fusion", !".s5", !["-b" | <pass-verbose> ])

  inline = 
    pipe(<get-config> "inline", !".s6", !["-b" | <pass-verbose> ])

  compile-match = 
    pipe(<get-config> "compile-match", !".s7", !["-b" | <pass-verbose> ])

  optimize2 = 
    pipe(<get-config> "optimize2", !".s8", !["-b" | <pass-verbose> ])

  stratego-of = 
    pipe(<get-config> "Stratego-Optimized-Format", id,  !["-b" | <pass-verbose> ])

  canonicalize = 
    pipe(<get-config> "canonicalize", !".s9", !["-b" | <pass-verbose> ])
 
  stratego-cf = 
    pipe(<get-config> "Stratego-Canonical-Format", id,  !["-b" | <pass-verbose> ]) 

  s2c =
    pipe(<get-config> "s2c", !".ac", 
	 <conc>(<pass-verbose>,
	        ["-b" | <get-config; map(!["--C-include", <id>]); concat> "--C-include"]))
			  
		  // <TraceAllFuns; !["--trace-all"] <+ get-traced-funs> () )

  c-format = 
    pipe(<get-config> "C-Format",      !".ac", !["-b"])

  ac2abox = 
    pipe(<get-config> "ast2abox",      !".c.abox", !["-p", <get-config> "C.pp"])

  abox2text = 
    pipe(<get-config> "abox2text",     !".c")

  get-traced-funs =
    <table-getlist> "TraceFun";
    map(\ (f, _) -> ["-t", f] \ );
    concat;
    if-verbose1([] <+ debug(!"traced functions: "))

  c-to-object-code =
    if-verbose2(say(!"compiling C code"))
    ; where(conc-strings => cfile)
    ; (id, !".o")       
    ; where(conc-strings => target)
    ; where(<if-verbose3(where(<printnl>(stderr, [<Fst> | <Snd>]))); call> 
		("gcc", <conc> (<get-config> "-CI", ["-c", cfile,"-o", target])))

  link-object-code = 
    if-verbose2(say(!"linking object code"))
    ; where(conc-strings => ofile)
    ; (try(<get-config> "-o"), !"") 
    ; where(conc-strings => target)
    ; where(<if-verbose3(where(<printnl>(stderr, [<Fst> | <Snd>])));call> 
		("gcc", [ofile, "-o", target | <get-config> "-CL"]))

  remove-intermediates =
    ?(base, _);
    where(<rzip(conc-strings); rm-files>
            (base, [".tree", ".tree1", ".s1", ".s2", 
		    ".s3", ".s4", ".s5", ".s6", ".s7", ".s8", ".s9", 
		    ".ac", ".c.abox", ".o"]))
\end{code}

% Copyright (C) 1999-2002 Eelco Visser <visser@acm.org>
% 
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.

