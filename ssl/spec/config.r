\literate[config]

	\begin{abstract}

	Strategies for creation and retrieval of configuration tables.

	\end{abstract}

	Configuration tables are the means to avoid embedding absolute
	path names in programs.

	A configuration table is stored in a file as an ATerm.

	Can be read easily.

	basic functionality:

		string -> string

	examples

		program -> fully qualified program name, i.e., with absolute path name

	extended functionality :

		name -> path
		name -> (name, name)

	e.g.,	"SGLR" -> "/home/xt"
		"sglr" -> Conc(Var("SGLR"), "/bin/sglr")

	when getting "sglr", the SGLR variable should be expanded

	other functionality: lookup in path

	Questions: is there a single config table, i.e., with a globally defined
	name?

\begin{code}
module config
imports dir

signature
  constructors
    Var    : String -> Config 
    Path   : String -> Config
    Prefix : Config * Config -> Config

strategies

  // locate configuration file in a list of directories (path)

  find-config-file(dirs, file) =
    dirs; fetch-elem(<concat-strings; file-exists> [<id>, "/", <file>])
    <+ <debug(file)>  " not found"; fail

  // find configuration file relative to a prefix

  find-config-file(prefix, dirs, file) =
    dirs; fetch-elem(<concat-strings; file-exists> [<prefix>, "/", <id>, "/", <file>])
    <+ <debug(file)>  " not found"; fail

  // find all configuration files with some extension ext in directories dirs
  // relative to prefix 

  find-plugins(prefix, dirs, ext) =
    find-plugins(dirs
                 ; map(\ d -> <concat-strings>[<prefix>, "/", d, "/"] \ )
               , ext)

  // find all configuration files with extension ext in directories dirs

  find-plugins(dirs, ext) =
     dirs
     ; filter({?dir; readdir
                   ; filter(has-extension(ext)
                            ; <concat-strings>[dir, "/", <id>])})
     ; concat


  // read configuration files and add to table

  import-config-file(file) = 
    where( file; debug(!"importing: "); ReadFromFile; <table-putlist> ("config", <id>) )

  import-config-files(files) = 
    where( 
	files
	; map( debug(!"importing: ")
	     ; ReadFromFile
	     ; <table-putlist> ("config", <id>)
	     )
    )


  // write configuration table to file

  export-config =
    <WriteToTextFile> (<id>, <table-getlist> "config")

  merge-configs =
    id

  set-config = 
    ?(key, val)
    ; <table-put> ("config", key, val)

  rm-config = 
    ?key
    ; <table-remove> ("config", key)

  toggle-config = 
    ?(key, val)
    ; (<get-config> key; <table-remove> ("config", key)
       <+ <set-config> (key, val))

  extend-config =
    ?(key, val)
    ; <table-put> ("config", key, <conc> (val, <get-config <+ ![]> key))

  post-extend-config =
    ?(key, val)
    ; <table-put> ("config", key, <conc> (<get-config <+ ![]> key, val))

  get-config = ?key;
    <table-get; try(eval-config; where(<table-put>("config", key, <id>)))> ("config", key)

  // get configurations of keys for which pred succeeds

  get-configs(pred) =
    <table-getlist> "config"; filter((pred,id); Snd) 

  // get configuration keys for which pred succeeds

  get-config-keys(pred) =
    <table-getlist> "config"; filter((pred,id); Fst) 

  eval-config : 
    Prefix(x, y) -> <conc-strings> (<eval-config> x, <eval-config> y)

  eval-config :
    Var(x) -> <get-config <+ debug(!"No configuration for variable: "); fail> x

  eval-config :
    Path(x) -> x

  eval-config =
    map(try(eval-config))

  eval-config =
    is-string

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
