\literate[{\btt SI: The Stratego Interpreter}]

% SI, the Stratego Interpreter
%
% Copyright (C) 2001 Eelco Visser <visser@acm.org>
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
module si
imports lib desugar spec-to-sdefs normalize-spec 
	eval-import stratego-eval

strategies

  main =
    create-runtime-environment;
    process-options;
    // copyright;
    read-script;
    evaluate-commands;
    destroy-runtime-environment;
    <exit> 0

 process-options =
   split-fetch(?"--args");
   (make-option-table, id);
   Snd

 make-option-table =
   parse-options(io-options <+ si-options);
   map(\ x@opt#(_) -> <table-push>("options", opt, x)\
    //; debug(!"declare option: ") 
      )

 si-options = 
   ArgOption("-I", \x -> InclDir(x)\ )
   + Option("-d", !Debug())// ; say(!"Debug mode: "))
   + Option("-t", !Trace())// ; say(!"Trace mode: "))

 ifdebug(s) =
   try(where(<table-lookup>("options", "Debug")); s)

 iftrace(s) =
   try(where(<table-lookup>("options", "Trace")); s)

 // Read script from standard input and save command-line options 
 // in second component of pair

 read-script =
   split(<ReadFromFile> stdin, id)

 copyright =
    where((<table-lookup> ("options", "DeclVersion") <+ !DeclVersion("")) 
          => DeclVersion(version));
    say(!"--------------------------------------------------------------------");
    say(<conc-strings>("This is SI, the Stratego Interpreter ", version));
    say(!"Copyright (c) 2001, Eelco Visser <visser@acm.org>");
    say(!"This program is free software; you can redistribute it and/or modify");
    say(!"it under the terms of the GNU General Public License as published by");
    say(!"the Free Software Foundation; either version 2, or (at your option)");
    say(!"any later version.");
    say(!"--------------------------------------------------------------------")

  create-runtime-environment =
    where(<table-create> "options"); // command-line options
    where(<table-create> "senv"); // strategy variables
    where(<table-create> "tenv")  // term variables

  destroy-runtime-environment =
    where(<table-destroy> "options");
    where(<table-destroy> "senv");
    where(<table-destroy> "tenv")

  evaluate-commands =
    repeat(
    {c, cs, t, t': 
      ?([c|cs], t);
      <eval-command> (c, t) => t';
      !(cs, t')
    })

  eval-command =
    ( eval-strategy
    + (eval-dump
      + eval-load
      + eval-import
      + eval-strategies
      + eval-rules
      , id); Snd
    ) <+ debug(!"unknown command: "); <exit> 1

  eval-strategy =
    ?(Eval(s), t);
    !App(<desugar>s, t);
    ifdebug(debug(!"Evaluate strategy: "));
    eval;
    iftrace(debug(!"> "));
    try(Fail;  <fatal-error> ["rewriting failed"])

  eval-strategies =
    ?Strategies(defs); !defs; 
    map(define-lrules; DeclareVariables; desugar; strename);
    define-strategies

  define-strategies =
    map(\ def@SDef(f, xs, _) -> <table-push>("senv", (f,<length>xs), def)\ )

  eval-rules =
    ?Rules(defs); !defs;
    //debug(!"eval-rules: ");
    map(define-lrules; RDtoSD; desugar);
    define-strategies

  eval-dump =
    ?Dump(file);
    <table-getlist> "tenv" => tenv;
    <table-getlist> "senv" => senv;
    <WriteToBinaryFile> (file, StrategoDump(tenv, senv));
    iftrace(say(<conc-strings> ("image written to file: ", file)))

  eval-load =
    ?Load(file);
    iftrace(say(<conc-strings> ("loading image from file: ", file)));
    <ReadFromFile> file => StrategoDump(tenv, senv);
    <table-putlist> ("tenv", tenv);
    <table-putlist> ("senv", senv)
\end{code}