\literate[parse-options-test]
\begin{code}
module parse-options-test
imports sunit parse-options
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
strategies

  main = 
    test-suite(!"parse-options-test",
      test1;
      test2
    )

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

  io-options =
	Option("-S"+"--silent",       !Silent(),          !"-S|--silent      Silent execution")
	+ Option("--verbose",         !Verbose(),         !"--verbose        Verbose execution")
	+ Option("-v"+"--version",    !Version(),         !"-v|--version     Display prgram's version")
	+ ArgOption("@version",       !DeclVersion(<id>), !"@version         Unknown" )
	+ ArgOption("-i" + "--input", !Input(<id>),       !"-i f|--input f   Read input from f")
	+ ArgOption("-o"+"--uotput",  !Output(<id>),      !"-o f|--output f  Write output to f" )
	+ Option("-b",                !Binary(),          !"-b               Write binary output")
	+ Option("-s",                !Statistics(),      !"-s               Turn on statisctics")

  test1 =
    apply-test(!"test1"
	, where(<table-put>("usage-table", "usage", []));
          parse-options'( sc-options <+ io-options + system-usage-switch)
	, !["pack-stratego", "-I", ".", "-I", "..", "-CI", "-I/tmp/include"]
	, ![Program("pack-stratego"),Ignore,Ignore,Ignore]
	)

  test2 =
    apply-test(!"test2"
	, parse-options(sc-options <+ io-options)
	, !["pack-stratego", "-I", ".", "-I", "..", "-CI", "-I/tmp/include"]
	, ![Program("pack-stratego"),Ignore,Ignore,Ignore] 
	)
\end{code}

% Copyright (C) 2002 Eelco Visser <visser@acm.org>
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
