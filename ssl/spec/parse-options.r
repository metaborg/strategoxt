\literate[parse-options]

Example:
   module option-demo
   imports options
   
   strategies
   
   main =
      iowrap(id, 
             Option("--option1", 
                    id, 
                    !"--option1        This is a an example option")
            +ArgOption("--arg1",
                    id,
                    !"--arg1           This is an example arg option"))

   // Optional short description
   short-description(p) = !["Usage: ", <p>(), " [options]"]

   // Optional long description
   long-description(p) = !["This is a test program to demonstrate use of ",
                           "parse-options and  generation of usage ",
                           "info from option and switch specificatios. ",
                           "These now contain usage info as additional ",
                           "third argument."]

option-demo -h now displays:
Usage: option-demo [options]

Options:
   --option1        This is a an example option
   --arg1           This is an example arg option
   -S|--silent      Silent execution
   --verbose        Verbose execution
   -v|--version     Display prgram's version
   @version         Unknown
   -i f|--input f   Read input from f
   -o f|--output f  Write output to f
   -b               Write binary output
   -s               Turn on statisctics
   -h|-?|--help     Display usage information

Description:
This is a test program to demonstrate use of parse-options and  generation
of usage info from option and switch specifications. These now contain usage
info as additional third argument.

      

\begin{code}
module parse-options
imports lib config 
signature
  sorts Option
  constructors
    Program   : String  -> Option
    Undefined : String -> Option

strategies
  // Always provide '-h' switch
  system-usage-switch = 
     Option( "--help" + "-h" + "-?",
             !Help(),
             !"-h|-?|--help     Display usage information")

  // No default long description. Overrule to include program description in
  // usage info.
  short-description(s) = fail

  // No default short description. Overrule to include in usage info.
  long-description(s) = fail

  // Parse options. Add system-usage switch and display usage info when user
  // specified '-h' switch.
  parse-options(s) =
     where(<table-put>("usage-table", "usage", []));
     parse-options'( s + system-usage-switch);
     try
     (
        option-defined(Help); system-usage;<exit>0
     +
        option-defined(Undefined(?option)); 
        where(<printnl>(stderr, ["Invalid option: ", option]));
        system-usage;<exit>1
     );
     where(<table-destroy>"usage-table")
       
  // Register all usages of all defined switches; then parse switches as
  // specified by the user.
  parse-options'(s)=
        where(try(<s>"register-usage-info"));
	[where(<set-config> ("program", <id>)); !Program(<id>) |
	     rec x(([] + s; [id|x]) <+ UndefinedOption)]

  // Register useage info 's' by storing 's' in the table "usage-table".
  // Use fail, such that program execution continues with the next
  // alternative Option or ArgOption. This way we collect all usage info.
  register-usage(s) = 
     <table-push>("usage-table", "usage", <s>());
     fail

  // Display usage info containing a short description of the program, if
  // defined, followed by the usages of all switches. Finally, the long
  // descrition of the program is displayed when it is defined.
  system-usage  = 
     option-defined(Program(?p));
     try
(
       <printnl>(stderr, [<short-description(!p);concat-strings>() ])
     );
     
     <printnl>(stderr, ["\nOptions:"]);
     <table-get;reverse>("usage-table", "usage");
      map( \x -> <printnl>(stderr, ["   ", x]) \ );
      try(
        <printnl>(stderr, ["\nDescription:\n", 
                         <long-description(!p);concat-strings>()])
      )

rules

  Option(is-flag, label, s) :
	[flag|rest] -> [<label>()|rest]
	where <is-flag> flag

  Option(is-flag, label) = 
	Option(is-flag, label, !"")

  // Registere usage info, when Option is applied to the term
  // "register-usage-info".
  Option(is-flag, label, s) =
     "register-usage-info";register-usage(s)

  ArgOption(is-flag, label, s) :
  	[flag, arg | rest] -> [<label> arg | rest]
	where <is-flag> flag

  // Registere usage info, when ArgOption is applied to the term
  // "register-usage-info".
  ArgOption(is-flag, label, s) =
     "register-usage-info";register-usage(s)
     
  ArgOption(is-flag, label) =
    ArgOption(is-flag, label, !"")

  Arg2Option(is-flag, label) :
  	[flag, arg1, arg2 | rest] -> [<label> (arg1, arg2) | rest]
	where <is-flag> flag

  UndefinedOption :
	[x | rest] -> [Undefined(x) | rest]

strategies

  defined-option(s) = fetch(s)

  option-defined(s) = fetch(s)

  arg-option-value(s) = fetch(s)
\end{code}

% Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>
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
