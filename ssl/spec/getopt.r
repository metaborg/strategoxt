\literate{getopt}
%    Copyright (C) 2002  Otto Skrove Bagge
%
%    This program is free software; you can redistribute it and/or modify
%    it under the terms of the GNU General Public License as published by
%    the Free Software Foundation; either version 2 of the License, or
%    (at your option) any later version.
%
%    This program is distributed in the hope that it will be useful,
%    but WITHOUT ANY WARRANTY; without even the implied warranty of
%    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
%    GNU General Public License for more details.
%
%    You should have received a copy of the GNU General Public License
%    along with this program; if not, write to the Free Software
%    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA


	This module parses command line arguments and build an option table
	for convenient retrieval.  Non-option arguments are returned to
	the caller.  Traditional Unix / GNU option syntax is supported:

	* Short options start with `-'.

	* Two or more short options can be combined in a single word: `-abcd'

	* Short options can take arguments: `-o FILE' or `-oFILE',
	  or even `-abcoFILE' (where a, b, c don't take arguments), 
	  but not `-oFILEabc'.

	* Arguments can be optional: `-d', `-dARG', `-d NotAnArgument'.

	* A single `-' is not an option.

	* Long options start with `--': `--help', `--verbose'.

	* Long options can take arguments: `--output=FILE' or `--output FILE'.

	* Arguments can be optional: `--debug', `--debug=ARG',
		`--debug NotAnArgument'.

	* `--' ends option parsing; the rest of the argument list is considered
	  non-option arguments.

	
	Unknown options, missing arguments and extraneous arguments are
	detected and reported.  The behaviour of the option parser can be
	modified by passing it extra arguments.

	An option specifier looks like this:

		(long, short, doc, opts, key)

	where

		long is the long option name (e.g. "help", "output")
			(or a list of long option names)

		short is the short option name (e.g. "h", "o")
			(or a list of short option names)

		doc is a short help text (35 chars or less)

			(default: no help text)

		opts is a list of options:

		    OptArg        -- this option takes an argument
		    OptMultiArg   -- option can be given several times,
					the arguments are collected into a list
		    OptOptArg     -- option takes an optional argument
		    OptNoDoc      -- don't show help text for this option
		    OptArgName(n) -- use n as argument name in help text

			(default: [])

		key is a string that identifies this option (e.g. "h", "o")

			(default: first short option name, or first long
			option name if no short options are given)

	example:

	  my-options = ![
		("help", "h", "display help message"),
		("version", "V", "display version and exit"),
		(["quiet", "silent"], "q", "be quiet"),
		"I/O options:",
		("output", "o", "output to FILE", [OptArg, OptArgName("FILE")])
		("input", "i", "read from FILE", [OptMultiArg, 
				OptArgName("FILE")])]

	Options are parsed using getopt-parse:
	
		main = 
		  ?args;
		  <getopt-parse(spec,usage,progver,progbug,s,g,f)> args 
				=> args';
		  doit

	where
		args is a list of command line arguments

		args' is a list of non-option arguments

		spec builds a list of option specifiers

		usage builds a string (or a list of strings) with usage text

		progver builds a string containing program name and version

		progbug builds a string with the email address to send bugs to

		s will be applied to each successfully parsed option:

			<s> (key, arg)	(with argument)
			<s> (key, [])	(without argument)

			(default: getopt-help <+ setopt)

			(getopt-help will print help or version message, and
			exit when applied to ("h") or ("V"))

		g retrieves the current value of a multi-value option:

			<g> key => val

			(default: getopt)

		f will be applied to each unsuccessfully parsed option:

			<f> (key, arglist-rest) => arglist-rest'

			(default: getopt-fail -- prints message and exits)

		args is a list containing 

	example:

		getopt-parse(my-options, !"myprogram [options] file1 ...",
			!"myprogram v0.9", !"bugs@my.org")

	
	If setopt is used in s, processed options are stored in a table,
	and can be retrieved later with getopt:

		<getopt> "i" => filename

		<getopt> "v"; print-verbose-message

	getopt fails if the option has not been seen, otherwise it returns the
	option's argument, if appropriate, or the number of times the option
	was given (as an int).  A special version, getopt-arg, returns the
	argument if one was given, or fails otherwise:

		<getopt-arg <+ getopt; !"default"> "f"

	The program name (zeroth argument) can be retrieved with:

		<getopt> "program-name" => progname

	The help text is stored in the option table, and can be displayed
	at any time:

		<getopt-display> "help"

		<getopt-display> "usage"

		<getopt-display> "version"
	


\begin{code}
module getopt
imports dynamic-rules string list-basic tables
signature
  sorts Option
  constructors
    OptArg:		Option
    OptMultiArg:	Option
    OptOptArg:		Option
    OptNoDoc:		Option
    OptArgName: String -> Option

    OptRest:  String -> Option
strategies
  getopt-demo =
	getopt-parse(getopt-my-options,
		!["getopt [options] file ...", "getopt -h"],
		!"getopt v1.0",
		!"<bugs@codeboost.org>");
	debug(!"Arguments: ");
	(<getopt> "q" <+ !""); debug(!"-q: ");
	(<getopt> "o" <+ !""); debug(!"-o: ");
	(<getopt> "i" <+ !""); debug(!"-i: ");
	(<getopt> "f" <+ !""); debug(!"-f: ");
	(<getopt> "b" <+ !""); debug(!"-b: ");
	<exit> 0

  getopt-my-options = 
	![
		("help", "h", "display help message and exit"),
		("version", "V", "display version and exit"),
		(["quiet", "silent"], "q", "be quiet"),
		("output", "o", "output to FILE", 
			[OptArg, OptArgName("FILE")]),
		("include", "i", "include FILE",
			[OptMultiArg, OptArgName("FILE")]),
		(""),
		("Special options:"),
		("bar", "b", "enable bar"),
		("foo", "f", "enable foo (with VAL)",
			[OptOptArg, OptArgName("VAL")])
	]

  getopt-parse(spec,usage,progver,progbug) =
	getopt-parse(spec,usage,progver,progbug, getopt-help <+ setopt,
		getopt, getopt-fail)

  getopt-parse(spec,usage,progver,progbug,s,g,f) =
    {| parse-opt-rule:
	where(
		<table-create> "getopt";
		<setopt> ("getopt-version-string", <progver;string-or-list>());
		usage; add-doc-usage;
		<add-doc-string> [];
		<add-doc-string> ["Options:"];
		spec; map(parse-opt-spec);
		progbug; add-doc-bugs
	);
	?[n | as];
	<setopt> ("program-name", n);
	!([], as);
	repeat(parse-option(s,g,f));
	\ (a, o) -> <conc> (<reverse> a, o) \
    |}

  parse-opt-spec =
	?(long, short, doc, opts, key);
	<string-or-list; map(make-opt-rule(!key, !opts))> long;
	<string-or-list; map(make-opt-rule(!key, !opts))> short;
	<add-doc-option> (long, short, opts, doc)

  parse-opt-spec =
	?(long, short, doc, opts);
	(<string-or-list> short => [_ | _]
	 <+ <string-or-list> long => [_ | _]) => [k | _];
	<parse-opt-spec> (long, short, doc, opts, k)

  parse-opt-spec =
	?(long, short, doc);
	<parse-opt-spec> (long, short, doc, [])

  parse-opt-spec =
	?(long, short);
	<parse-opt-spec> (long, short, "", [OptNoDoc])

  parse-opt-spec =
	is-string;
	add-doc-string
	


  make-opt-rule(key, opts) =
	?o;
	opts; not(fetch(OptArg + OptMultiArg + OptOptArg));
	key => k;
	rules(
		parse-opt-rule(s,g): [(o, a) | xs] -> xs'
		where	<option-get-no-arg> (a, xs) => xs';
			<s> (k, [])
	)

  make-opt-rule(key, opts) =
	?o;
	opts; fetch(OptArg);
	key => k;
	rules(
		parse-opt-rule(s,g): [(o, a) | xs] -> xs'
		where	<option-get-arg> (a, xs) => (a', xs');
			<s> (k, a')
	)

  make-opt-rule(key, opts) =
	?o;
	opts; fetch(OptMultiArg);
	key => k;
	rules(
		parse-opt-rule(s,g): [(o, a) | xs] -> xs'
		where	<g <+ ![]> k => as;
			<option-get-arg> (a, xs) => (a', xs');
			<s> (k, <conc> (as, [a']))
	)

  make-opt-rule(key, opts) =
	?o;
	opts; fetch(OptOptArg);
	key => k;
	rules(
		parse-opt-rule(s,g): [(o, a) | xs] -> xs'
		where	<option-get-opt-arg> (a, xs) => (a', xs');
			(<1> a'; <s> (k, []) <+ <s> (k, a'))
	)

  option-get-arg = option-get-arg1 <+ option-get-arg2

  option-get-arg1: (1, [x | xs]) -> (x, xs)

  option-get-arg1: (OptRest(a), xs) -> (a, xs)

  option-get-arg2: (a, xs) -> (a, xs)
	where	<not(1)> a

  option-get-opt-arg = option-get-opt-arg1 <+ option-get-opt-arg2

  option-get-opt-arg1: (1, xs) -> (1, xs)

  option-get-opt-arg1: (OptRest(a), xs) -> (a, xs)

  option-get-opt-arg2: (a, xs) -> (a, xs)

  option-get-no-arg: (1, xs) -> xs

  option-get-no-arg: (OptRest(a), xs) -> [OptRest(a) | xs]


  parse-option(s,g,f) = parse-option0 <+ parse-option1(s,g,f) <+ parse-option2

  parse-option0: (as, ["-" | os]) -> (["-" | as], os)

  parse-option0: (as, ["--" | os]) -> (<conc> (<reverse> os, as), [])
 
  parse-option1(s,g,f): (as, [o | os]) -> (as, os')
	where	<explode-string> o => [45 | o'];
		<p-opt1l(s,g) <+ p-opt1s(s,g) <+ p-opt1e(f)> (o', os) => os'

  p-opt1l(s,g): ([45 | o], os) -> os'
	where	<split-fetch(61); (implode-string,implode-string)> o => o';
		<parse-opt-rule(s,g)> [o' | os] => os'
		<+ <parse-opt-rule(s,g)> [(<implode-string>o, 1) | os] => os'

  p-opt1s(s,g): (o, os) -> os'
	where	<repeat(p-opt1s'(s,g))> (o, os) => ([], os')

  p-opt1s'(s,g): ([l | ls], os) -> (ls', os')
	where	<implode-string> [l] => sl;
		<implode-string> ls => sls;
		<not([]); !OptRest(sls) <+ !1> ls => rest;
		<parse-opt-rule(s,g)> [(sl, rest) | os] => os1;
		<[OptRest(id) | ?r]; !(ls, r) <+ !([], os1)> os1 => (ls', os')

  p-opt1e(f) =
	?(o, os);
	<implode-string> [45 | o] => s;
	<f> (s, os)


  parse-option2: (as, [o | os]) -> ([o | as], os)


  getopt =
	?o;
	<table-get> ("getopt", o)

  getopt-arg =
	?o;
	<table-get> ("getopt", o);
	not(is-int)


  setopt =
	?(o, []);
	<table-get; is-int <+ !0> ("getopt", o) => i;
	<table-put> ("getopt", o, <add> (i, 1))
     <+
	?(o, v);
	<table-put> ("getopt", o, v)



  add-doc-usage =
	string-or-list;
	?[u | alt];
	<add-doc-string> ["Usage: ", u];
	<table-push> ("getopt", "getopt-usage-string", ["Usage: ", u]);
	<map(add-doc-usage')> alt

  add-doc-usage' =
	?u;
	<add-doc-string> ["   or: ", u];
	<table-push> ("getopt", "getopt-usage-string", ["   or: ", u])

  add-doc-string =
	?s;
	<try(is-string; \ x -> [x] \ )> s => s';
	<table-push> ("getopt", "getopt-doc-string", s')

  add-doc-option =
	add-doc-option1 <+ add-doc-option2

  add-doc-option1 =
	?(long, short, opts, doc);
	<fetch(OptNoDoc)> opts

  add-doc-option2 =
	?(long, short, opts, doc);
	<get-arg-name-help> opts => (larg, sarg);
	<string-or-list> long => l1;
	<map(<concat-strings> ["--", <id>, larg])> l1 => l2;
	<separate-by(!", "); concat-strings> l2 => l;
	<string-or-list> short => s1;
	<map(<conc-strings> ("-", <id>))> s1 => s2;
	<separate-by(!", "); concat-strings> s2 => s3;
	<conc-strings> (s3, sarg) => s;
	<pad-after(!32)> (s, 7) => s';
	<filter(not("")); separate-by(!"  "); concat-strings> [s', l] => o;
	<concat-strings> ["  ", o, "  "] => o1;
	<pad-after(!32)> (o1, 40) => o';
	<add-doc-string> [o', doc]

  get-arg-name-help =
	   fetch(OptArgName(?n));
	   (fetch(OptOptArg);
	    !(<concat-strings> ["[=", n, "]"], <concat-strings> [" [", n, "]"])
	    <+ !(<conc-strings> ("=", n), <conc-strings> (" ", n)))
	<+ fetch(OptArg + OptMultiArg);
	   !("=ARG", " ARG")
	<+ fetch(OptOptArg);
	   !("=[ARG]", " [ARG]")
	<+ !("", "")

  pad-after(s) = ?(str,n);
    !str;
    explode-string => str';
    length => l;
    (<geq>(l,n);!str <+
     <subt>(n,l);
     rec r(\ 0 -> [] \ <+ \ n -> [<s>()|<subt;r>(n,1)] \ );
     \ p -> (str', p) \;
     conc;
     implode-string
    )

  add-doc-bugs =
	?s;
	try(
		<is-string; not("")> s;
		<add-doc-string> [];
		<add-doc-string> ["Report bugs to ", s, "."]
	)

  string-or-list = is-list <+ is-string; MkSingleton

  getopt-fail =
	?(s, _);
	<error> ["syntax error in argument: ", s];
	<exit> 1

  getopt-help =
	?("h", []);
	<getopt-display> "help";
	<exit> 0

  getopt-help =
	?("V", []);
	<getopt-display> "version";
	<exit> 0

  getopt-display =
	?"help";
	<getopt; reverse> "getopt-doc-string" => ss;
	<map(error)> ss

  getopt-display =
	?"usage";
	<getopt; reverse> "getopt-usage-string" => ss;
	<map(error)> ss

  getopt-display = 
	?"version";
	<getopt; error> "getopt-version-string"
