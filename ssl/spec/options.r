\literate[options]

	\begin{abstract}

	\end{abstract}

% Copyright (C) 1998-2001 Eelco Visser <visser@acm.org>
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
module options
imports io parse-options
signature
  constructors
    Silent      : Option
    Verbose     : Option
    Version     : Option
    Input       : String -> Option
    Output      : String -> Option
    Binary      : Option
    Statistics  : Option
    Help        : Option
    Runtime     : Real   -> Option
    DeclVersion : String -> Option
\end{code}

	The operator \verb|iowrap| defines a default wrapper around a
	strategy that handles processing of options and reading and
	writing of terms from and to files.

\begin{code}
strategies

  iowrap(strat) = 
	iowrap((id, strat), fail)

  iowrapO(strat, extra-options) =
    obsolete(!"iowrapO/2: use iowrap/2");
    iowrap(strat, extra-options)

  iowrap(strat, extra-options) = 
    iowrap(strat, extra-options, default-usage)

  iowrapO(strat, extra-options, usage) =
    obsolete(!"iowrapO/3: use iowrap/3");
    iowrap(strat, extra-options, usage)

  iowrap(strat, extra-options, usage) =
    parse-options(extra-options <+ io-options); 
    store-options;
    (
        need-help(usage)
     <+ 
	input-file;
	apply-strategy(strat);
	output-file;
	report-success
     <+ 
	report-failure
   )

  iowrapNoOutput(strat, extra-options) = 
  iowrapNoOutput(strat, extra-options, default-usage)

  iowrapNoOutput(strat, extra-options, usage) =
   	parse-options(extra-options <+ io-options);
   	store-options;
	(
	    need-help(usage)
   	 <+ 
	    input-file;
	    apply-strategy(strat);
	    report-success
   	 <+ 
   	    report-failure
	)

  store-options = ?options;
  where( 
    <table-create>"option-table";
    <table-put>("option-table", "options", options)
  )

  get-options =
    <table-get>("option-table", "options")

  has-option(s) =
    test(<s; check-option>())

  option-value(s,default) =
    get-options; fetch-elem(s) <+ default

rules

  check-option: option -> ()
    where get-options => ops
        ; <'in>(option,ops)
\end{code}

	Handling of options

\begin{code}
strategies

  io-options =
	Option("-S"+"--silent",            !Silent(),           !"-S|--silent      Silent execution")
	+ Option("--verbose",   !Verbose(),                     !"--verbose        Verbose execution")
	+ Option("-v"+"--version",          !Version(),         !"-v|--version     Display prgram's version")
	+ ArgOption("@version",  \x -> DeclVersion(x)\,         !"@version         Unknown" )
	+ ArgOption("-i" + "--input",       \x -> Input(x)\ ,   !"-i f|--input f   Read input from f")
	+ ArgOption("-o"+"--uotput",       \x -> Output(x)\,    !"-o f|--output f  Write output to f" )
	+ Option("-b",          !Binary(),                      !"-b               Write binary output")
	+ Option("-s",          !Statistics(),                  !"-s               Turn on statisctics")

  usage' = 
    obsolete(!"usage': use default-usage")

  default-usage =
  	 where(option-defined(?Program(prog));
	       <printnl>
	       (stderr,
	       	["usage : ", prog, 
		 " [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"]);
	       <exit> 1)

  need-help(u) =
	option-defined(Help + Undefined(id) + Version); u

  need-help = need-help(default-usage)
\end{code}

	Input, strategy application and output

\begin{code}
  input-file' =
	obsolete(!"input-file'; use input-file");
	input-file

  input-file =
	 where((option-defined(?Input(infile)) <+ !stdin => infile));
  	 split(id, <ReadFromFile> infile)

  apply-strategy(strat) =
   	 where(dtime);
   	 strat;
   	 where(dtime => runtime);
	 \(options, trm) -> ([Runtime(runtime) | options], trm)\

  output-file' =
	obsolete(!"output-file'; use output-file");
	output-file

  output-file =
	 where((option-defined(?Output(outfile)) <+ !stdout => outfile, id)); 
	 (id, split(!outfile, id));
   	 ((option-defined(?Binary()), WriteToBinaryFile)
	  <+ (id, WriteToTextFile))

  report-success =
   	 where(try((not(option-defined(?Silent())), id);
		   (option-defined(?Runtime(runtime)), id);
		   (option-defined(?Program(prog)), id);
		   <printnl> (stderr,
			      [prog, " (", runtime, " secs)"])));
	 <exit> 0

  report-failure =
       	<printnl> (stderr, ["rewriting failed"]); 
       	<exit> 1
\end{code}
