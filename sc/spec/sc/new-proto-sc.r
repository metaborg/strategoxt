\literate[{\tt SC}: Stratego Compiler]

% Copyright (C) 1999, 2000 Eelco Visser <visser@acm.org>
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
imports lib sugar
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
        (option-defined(Input(?in));
        \ opts -> 
	  ([InclDir(incl), CInclDir(cincl), CLibDir(clib) | opts], 
	   (in, ".r")) \
        <+ \opts -> ([Help | opts], "")\ )

  sc-options =
	ArgOption("-e",          \x -> ExecDir(x)\ )
	+ ArgOption("-I",        !Ignore) // \x -> InclDir(x)\ )
	+ ArgOption("--Include", !Ignore) // \x -> InclDir(x)\ ) 
	+ ArgOption("-CI",       !Ignore) // \ (x,y) -> CInclDir(x)\ )
	+ ArgOption("-CL",       !Ignore) // \ (x,y) -> CLibDir(x)\ )
	+ Option("-CC",          !CC )
	+ Option("-norm",        !NORM )
	+ ArgOption("-i",        \x -> Input(<basename> x)\ )
	+ ArgOption("--main",    \x -> Main(x)\ )
	+ ArgOption("-m",        \x -> Main(x)\ ) 
	+ Option("--ast",        !AST )

strategies

  sc-usage = 
  sc-version;
  <printnl>(stderr, 
	    ["Usage: sc [options] -i file\n",
	     "Options:\n",
	     "  -i spec     Compile specification spec\n",
	     "  -o target   Name executable target\n",
	     "  --main s    Name main strategy [default: main]\n",
	     "  -I dir      Look in dir for imported Stratego modules\n",
	     "  -CI dir     Look in dir for C include files\n",
	     "  -CL dir     Look in dir for C object libraries\n",
	     "  --ast       Output abstract syntax of specification\n",
	     "  -h|--help   Display this message"
            ])

  sc-version =   
  (option-defined(DeclVersion(?version)) <+ !"" => version);
  where(<printnl>(stderr, ["sc version ", version]))

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
     try(option-defined(Output(?out))), id);
    (id, pipe'(<pref(!edir)> "/pack-stratego", !".tree", 
	       <conc> (<!["-dep", out] <+ ![]>(), ["--silent" | incl])))
\end{code}

\begin{code}
strategies

  output-ast =
    try((option-defined(AST), (?file, ?ext)); 
        <printnl>(stderr, ["abstract syntax written to ", file, ext]);
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

  core-old = 
    (list(try(ExecDir(?dir))), id);
    (id, frontend(!dir);
         extract(!dir);
         inline(!dir);
         stratego-nf(!dir);
         optimizer(!dir);
         stratego-nf(!dir);
         matching-tree(!dir);
         stratego-of(!dir);
         optimizer(!dir);
         stratego-of(!dir);
         backend(!dir);
	 abstract-mf(!dir);
         postprocess(!dir);
         pp-instructions(!dir)
    )

  core = 
    (list(try(ExecDir(?dir))), id);
    (id, frontend(!dir);
         extract(!dir);
         inline(!dir);
         stratego-nf(!dir);
         compile-match(!dir);
         stratego-of(!dir);
         new-backend(!dir);
	 abstract-mf(!dir);
         postprocess(!dir);
         pp-instructions(!dir)
    )

rules

  pref(d) : x -> <conc-strings> (<d>(), x)

strategies

  frontend(d)        = pipe(<pref(d)> "/frontend",      !".s1")
  extract(d)         = pipe(<pref(d)> "/extract",       !".s2")
  inline(d)          = pipe(<pref(d)> "/inline",        !".s")
  optimizer(d)       = pipe(<pref(d)> "/optimizer",     !".so1")
  matching-tree(d)   = pipe(<pref(d)> "/matching-tree", !".so2")

  compile-match(d)   = pipe(<pref(d)> "/compile-match", !".so2")

  backend(d)         = pipe(<pref(d)> "/backend",       !".i1")

  new-backend(d)     = pipe(<pref(d)> "/new-backend",   !".i1")

  postprocess(d)     = pipe(<pref(d)> "/postprocess",   !".i")
  pp-instructions(d) = pipe(!"pp-instructions",         !".c")
	  (* pipe(<pref(d)> "pp-instructions",    !".c")/*)

  stratego-nf(d)     = pipe(<pref(d)> "/Stratego-Normal-Format", id)
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
             where(<gcc> <conc>([ofile, "-o", target], 
			        <map(split-at-space); concat> clib)))

  remove-intermediates =
    ?(base, _);
    where(<rzip(conc-strings); rm-files>
            (base, [".tree", ".tree1", ".s", ".s1", ".s2", 
		    ".so1", ".so2", ".i1", ".i", ".o"]))
\end{code}
