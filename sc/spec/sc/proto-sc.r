\literate[{\tt PROTO-SC}: Stratego Compiler]

\begin{abstract}
This module glues together the components that make up the Stratego
compiler. It is usually run from a script that provides the default
information about paths.
\end{abstract}

% Copyright (C) 1999-2001 Eelco Visser <visser@acm.org>
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


\begin{code}
module sc
imports lib sugar dynamic-rules
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
\end{code}

	Processing the command-line options

\begin{code}
strategies

  main = sc

  sc = (process-sc-options <+ sc-usage; <exit> 1);
       ((need-help(sc-usage; <exit> 1), id)
        <+ sc-announce;
	   parse;
	   output-ast;
	   add-main;
	   core;
	   cc1; 
           cc2;
           try(not((option-defined(?NORM()), id)); 
               (id, remove-intermediates));
           <printnl>(stderr, ["compilation succeeded"]);
	   <exit> 0
        <+ <printnl>(stderr, ["compilation failed"]);
	   <exit> 1
       )
       
  process-sc-options =
        where(filter-options(?"-I") => incl);
        where(filter-option-args(?"-CI") => cincl);
        where(filter-option-args(?"-CL") => clib);
        parse-options(sc-options <+ io-options);
        (option-defined(Input(?'in));
        \ opts -> 
	  ([InclDir(incl), CInclDir(cincl), CLibDir(clib) | opts], 
	   ('in, ".r")) \
        <+ \opts -> ([Help | opts], "")\ )

  sc-options =
	ArgOption("-e",          \x -> ExecDir(x)\ )
	+ ArgOption("-I",        !Ignore) // \x -> InclDir(x)\ )
	+ ArgOption("--Include", !Ignore) // \x -> InclDir(x)\ ) 
	+ ArgOption("-CI",       !Ignore) // \ (x,y) -> CInclDir(x)\ )
	+ ArgOption("-CL",       !Ignore) // \ (x,y) -> CLibDir(x)\ )
	+ Option("-CC",          !CC )
	+ Option("--norm",        !NORM )
	+ ArgOption("-i",        \x -> Input(<basename> x)\ )
	+ ArgOption("--main",    \x -> Main(x)\ )
	+ ArgOption("-m",        \x -> Main(x)\ ) 
	+ Option("--ast",        !AST )
	+ Option("-F",           !FRONTEND )
	+ Option("--fusion",     !FUSION )
	+ Option("--csyntax",	 !CSYNTAX )
	+ Option("--trace-all",  !TraceAll; rules(TraceAllFuns : () -> ()))
	+ ArgOption("-t",        \x -> Trace(x) where rules(TraceFun : x -> ()) \ )

strategies

  sc-usage = 
  sc-version;
  <printnl>(stderr, 
	    ["Usage: sc [options] -i file\n",
	     "Options:\n",
	     "  -i spec       Compile specification spec\n",
	     "  -o target     Name executable target\n",
	     "  --main s      Name main strategy [default: main]\n",
	     "  -I dir        Look in dir for imported Stratego modules\n",
 	     "  -CI opt       Pass opt to gcc object compilation phase\n",
	     "  -CL opt       Pass opt to gcc linking phase\n",
	     "  --trace-all   Trace all strategies in the specification\n",
	     "  -t f	      Trace strategy f\n",
	     "  --ast         Output abstract syntax of specification\n",
	     "  --norm        Do not remove intermediate files\n",
	     "  -F	      Produce all definitions pre-processed by frontend\n",
	     "  -v	      Show version\n",
	     "  -h|--help     Display this message"
            ])

  sc-version =   
  (option-defined(DeclVersion(?version)) <+ !"" => version);
  where(<printnl>(stderr, 
	["The Stratego Compiler (version ", version, ")"]))

  sc-announce =
  try((option-defined(Verbose), id);
      (sc-version, id))
\end{code}

	Parsing specifications

\begin{code}
strategies

  parse = 
    (option-defined(InclDir(?incl));
     option-defined(ExecDir(?edir));
     try(option-defined(Output(?out))), ?('in, _));
    (id, pipe(<pref(!edir)> "/pack-stratego", !".tree", 
	      <conc> (<!["-dep", out] <+ !["-dep", 'in]>(), ["--silent" | incl])));
    try((id, copy-file(id, !out, !".tree")))
\end{code}

\begin{code}
strategies

  output-ast =
    try((option-defined(AST), (?file, ?ext)); 
        <printnl>(stderr, 
                  ["abstract syntax (after parsing) written to ", file, ext]);
        <exit> 0)

  output-frontend(dir) =
    try((option-defined(FRONTEND),id); 
        (id, extract-all(dir)
             <+ <fatal-error> ["extracting all definitions failed"]);        
        (id, (?file, ?ext)); 
        <printnl>(stderr, 
                  ["abstract syntax (after frontend) written to ", file, ext]);
        <exit> 0)
\end{code}

	Adding main strategy

	(*** What happens if the specification already contains a main
	strategy? ***)

\begin{code}

rules
 
  AddMain(m) : 
    Specification(sects) -> 
    Specification([Strategies([SDef("main", [], Call(SVar(<m>()), []))]) 
                  | sects])

strategies

  add-main =
    ((option-defined(Main(?m)), id);
     (id, transform-file(AddMain(!m), !".tree1"))
     <+ (id, transform-file(id, !".tree1")))

\end{code}

	The core of the compiler consists of the components that
	transform a specification to abstract machine instructions.

\begin{code}
strategies

  core = 
    (list(try(ExecDir(?dir))), id);
    (id, frontend(!dir));
         output-frontend(!dir);

    (id, extract(!dir);
         stratego-nf(!dir);
         rename-defs(!dir);
         inline(!dir);
         optimize1(!dir));

    try((option-defined(FUSION), 
         fusion(!dir)));

    (id, compile-match(!dir);
         optimize2(!dir)//;
    //     stratego-of(!dir)
    );

    (id, canonicalize(!dir);
         stratego-cf(!dir);
         s2c(!dir);
	 //c-format(!dir);
	 pp-c(!dir))

rules

  pref(d) : x -> <conc-strings> (<d>(), x)

strategies

  frontend(d)        = pipe(<pref(d)> "/frontend",      !".s1")
  extract(d)         = pipe(<pref(d)> "/extract",       !".s2")
  extract-all(d)     = pipe(<pref(d)> "/extract-all",   !".sdefs")

  rename-defs(d)     = pipe(<pref(d)> "/rename-defs",   !".s3")

  inline(d)          = pipe(<pref(d)> "/inline",        !".s4")
  optimize1(d)       = pipe(<pref(d)> "/optimize1",     !".s5")
  compile-match(d)   = pipe(<pref(d)> "/compile-match", !".s6")
  optimize2(d)       = pipe(<pref(d)> "/optimize2",     !".s7")

  canonicalize(d)    = pipe(<pref(d)> "/canonicalize",  !".s8")

  s2c(d)             = pipe(<pref(d)> "/s2c",		!".ac", 
			<TraceAllFuns; !["--trace-all"] <+ get-traced-funs> () )

  get-traced-funs =
    <table-getlist> "TraceFun";
    map(\ (f, _) -> ["-t", f] \ );
    concat;
    ([] <+ debug(!"traced functions: "))

  optimizer(d)       = pipe(<pref(d)> "/optimizer",     !".s6")
  matching-tree(d)   = pipe(<pref(d)> "/matching-tree", !".s7")

  fusion(d)          = pipe(<pref(d)> "/fusion",        !".so2")
  backend(d)         = pipe(<pref(d)> "/backend",       !".i1")

  new-backend(d)     = pipe(<pref(d)> "/newbackend",    !".i1")

  postprocess(d)     = pipe(<pref(d)> "/postprocess",   !".i")

  pp-instructions(d) = pipe(<pref(d)> "/pp-instructions", !".c")

  pp-c(d)	     = where(dtime);
		       pipe(<pref(d)> "/ac2c", !".c");
		       where(dtime => t; <printnl> (stderr, [<pref(d)> "/ac2c", " (", t, ")"]))
  c-format(d)        = pipe(<pref(d)> "/C-Format", !".ac")

  stratego-nf(d)     = pipe(<pref(d)> "/Stratego-Normal-Format", id)
  stratego-cf(d)     = pipe(<pref(d)> "/Stratego-Canonical-Format", id)
  stratego-of(d)     = pipe(<pref(d)> "/Stratego-Optimized-Format", id)
  abstract-mf(d)     = pipe(<pref(d)> "/Abstract-Machine-Format", id)
\end{code}

\begin{code}
strategies

rules

  I-option : x -> <conc-strings>("-I", x)
  L-option : x -> <conc-strings>("-L", x)

strategies

  lib(d)      = <conc-strings>(<d>(), "/lib")
  liblib(d)   = <conc-strings>(<lib(d)>(), "/lib")
  include(d)  = <conc-strings>(<lib(d)>(), "/include")
  libstrat(d) = <conc-strings>(<lib(d)>(), "/stratego")
  
  gcc = \ args -> <call>("gcc", args) \

  cc1 =		
	where(<printnl>(stderr, ["compiling"]));
	(list(try(CInclDir(?cincl))), id); 
	(id, where(conc-strings => cfile);
             (id, !".o");        
             where(conc-strings => target);
             where(<gcc> <conc> (cincl,["-c", cfile,"-o", target])))

  cc2 = 
	where(<printnl>(stderr, ["linking"]));
	(list(try(Dir(?dir) + CLibDir(?clib) + Output(?out))), id); 
        (id, where(conc-strings => ofile);
             (try(!out), !""); 
             where(conc-strings => target);
             where(<gcc> [ofile, "-o", target
			 | <map(split-at-space); concat> clib]))

  remove-intermediates =
    ?(base, _);
    where(<rzip(conc-strings); rm-files>
            (base, [".tree", ".tree1", ".s1", ".s2", 
		    ".s3", ".s4", ".s5", ".s6", ".s7", ".s8", 
		    ".ac", ".ac.abox", ".o"]))
\end{code}
