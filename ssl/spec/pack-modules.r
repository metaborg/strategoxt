\literate[pack-modules]

	\begin{abstract}

	\end{abstract}

% Copyright (C) 2000 Eelco Visser <visser@acm.org>
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

CHANGES (by Joost Visser)
  * Strategy pack-modules(pack, dep-base) now takes two additonal 
    options:
      -dep target
      -nodep
    The first one specifies the maketarget and basename of the
    dependency file that is created. If this option is not passed,
    the argument dep-base is used instead. Finally, the -nodep option
    can be used to disable this and prevent any dependency file to
    be created. Note that -dep takes precendence over -nodep.
  * An additional strategy pack-modules(pack) was added that behaves
    like pack-modules, except no default for the dependency file 
    base name needs to be specified. Hence, only the command line
    options are relevant.

\begin{code}
module pack-modules
imports options pack-graph dynamic-rules
signature
  constructors
    Include: File -> Include
    Prefix : String -> Option

strategies

  pack-module-options =
    parse-options( io-options 
                 + ArgOption("-I"  , \x -> Include(x)\ )
                 + Option   ("-nodep",     !NoDependency )
                 + ArgOption("-dep", \x -> Dependency(x)\ )
                 + ArgOption("--prefix", \x -> Prefix(x)
					  where rules(Prefix : () -> x) \ )
                 )

  pack-modules(pack : term * (term -> term) -> term)
    = pack-modules(pack, fail)
      <+ <fatal-error> ["  packing failed"]

  pack-modules(pack : term * (term -> term) -> term, dep-base) =
    pack-module-options => options;
    try(need-help(pack-modules-usage));
    list(try( ?Program(prog)
            + ?Input('in) + ?Output(out) //+ ?Binary;!bin
            + ?Dependency(dep)
            ));
    filter( \Include(p)->p\ ) => path;
    (!'in <+ !stdin) => infile;
    (!out <+ !stdout) => outfile;
    <pack(!path)> infile => (files, spec);
    !options;
    (
       option-defined(?Binary);
       <WriteToBinaryFile>(outfile, spec)
    <+
       <WriteToTextFile>(outfile, spec)
    );
    try((!dep <+ (not(<option-defined(?NoDependency())> options);
                      dep-base)) => depfile;
        <create-dep-file(!depfile)> (outfile, files)
    );
    dtime => time;
    <printnl>(stderr, [prog, " (", time, " secs)"]);
    <exit> 0

  pack-modules-usage =
    option-defined(?Program(prog));
    <printnl> (stderr,
	       ["usage : ", prog, 
                " [-S] [-I dir] [-i file]",
		" [-o file] [-b] [-s] [--help|-h|-?]",
                " [-dep target | -nodep]" ]);
    <exit> 1

rules
  
  create-dep-file(dep-base) :
    (outfile, files) -> (outfile, files)
    where <dep-base> outfile => out  
	; <open-file> (<add-extension> (out, "dep"), "w") => dep
	; <printnl> (dep, [out | <separate-by(!" \\\n\t")> [" :" | files]])
	; <close-file> dep

signature
  constructors
    NoDependency :         Option
    Dependency : String -> Option
\end{code}
