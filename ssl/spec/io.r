\literate[io]

	\begin{abstract}

	A transformation system needs to input terms to transform
	and output transformed terms. Instead of providing a single
	fixed mechanism for IO, this module
	defines primitives for file input and output of
	terms and strings. These primitives can be used in a variety
	of ways to define customized IO.

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

	A compiled Stratego specification applies the strategy
	\verb|main| to the command line options that it gets. When
	interpreting these it will probably be necessary to read in
	a term from file and later write the transformed term back
	to (another) file. This module provides the primitives for
	doing file input and output. Module \verb|options| defines
	strategies to parse and analyze the command line options.

\begin{code}
module io
imports list string tuple integers time exec
\end{code}

	A \verb|file| can be a string or one of the terms
	\verb|stdin|, \verb|stdout|, \verb|stderr|.

\begin{code}
signature
  sorts File
  constructors
    stdin  : File
    stdout : File
    stderr : File
\end{code}

	\verb|<ReadFromFile> file| reads the term in \verb|file|. The
	\verb|file| needs to be in textual or binary ATerm format.

	\verb|<WriteToTextFile> (file, term)| writes \verb|term| to
	file in textual ATerm format.

	\verb|<WriteToBinaryFile> (file, term)| writes \verb|term| to
	file in BAF format.

 	\verb|<print> (file, [t1,...,tn])| prints the terms \verb|ti|
	to file. If \verb|ti| is a string it is printed without quotes,
	otherwise it is printed as a term. \verb|printnl| has the same
	behaviour, but also prints a newline after \verb|tn|.

	Before printing to a file the file should be opened using
	\verb|<open-file> filename|, which truncates the file, or creates
	it if it doesn't exist.  To append to a file, open the file
	with \verb|<append-file> filename|.  The file is created if it
	doesn't exist.

\begin{code}
strategies

  print             = ?(name, strs); where(prim("SSL_print", name, strs))
  printnl           = ?(name, strs); where(prim("SSL_printnl", name, strs))
  printascii        = ?(name, strs); where(prim("SSL_printascii", name, strs))

  file-exists	    = ?name; prim("SSL_file_exists", name)
  open-file	    = ?name; prim("SSL_open_file", name)
  append-file	    = ?name; prim("SSL_append_file", name)
  close-file	    = ?name; prim("SSL_close_file", name)

  ReadFromFile      = ?file; prim("SSL_ReadFromFile", file)
  WriteToBinaryFile = ?(file, t); prim("SSL_WriteToBinaryFile", file, t)
  WriteToTextFile   = ?(file, t); prim("SSL_WriteToTextFile", file, t)
\end{code}

 	The primitive \verb|print-stack| prints the top n elements of
 	the stack if applied as \verb|<print-stack>| n or the entire
	stack if
 	applied to a non-integer term.

\begin{code}
  print-stack = 
    obsolete(!"print-stack; use debug or gdb")
\end{code}

	The strategy \verb|debug| prints the
	current term to \verb|stderr| without changing it. This is
	a useful strategy for debugging specifications (hence its
	name).

\begin{code}
strategies

  open(file) = file; ReadFromFile

  save(file) = split(file, id); WriteToTextFile

  debug      = where(split(!stderr, \x -> [x]\); printnl)
  debug(msg) = where(split(!stderr, \x -> [<msg>(),x]\); printnl)

  say(msg)   = where(msg; debug)

  echo       = where(split(!stdout, \x -> [x]\); printnl)
  echo(msg)  = where(split(!stdout, \x -> [<msg>(),x]\); printnl)

  debug-stdout(msg) = 
    obsolete(!"debug-stdout; use echo");
    where(split(!stdout, \x -> [<msg>(),x]\); printnl)

  trace(msg,s) =
    debug(msg); (s; debug(!"succeeded: ") <+ debug(!"failed: "))

  error = where(split(!stderr, id); printnl)

  fatal-error = where(error; <exit> 1)

  giving-up   = <fatal-error>["giving-up"]

  printchar   = where(split(!stdout, \x -> [x]\ ); printascii)

  printstring = where(split(!stdout, \x -> [x]\ ); print)

  print-strings-nl(out) = where(split(out, id); printnl)

  obsolete(msg) = where(msg; debug(!"obsolete library strategy: "))
\end{code}

	The operator \verb|stdio| implements a simple user-interface
	for transformers. A term is read from standard input,
	transformed with parameter strategy \verb|s| and then written
	to standard output. If the transformation failed the text
	\verb|rewriting failed| is written to standard error.

\begin{code}
strategies

  stdio(s) = <ReadFromFile> stdin;
             s; 
             split(!stdout, id); WriteToTextFile
          <+ <fatal-error> ["** rewriting failed"]
\end{code}

	A variant of this strategy provides a pair of the command-line
	options and the input file to the strategy.

\begin{code}
strategies

  stdioO(s) = split(id, <ReadFromFile> stdin); 
              s;
              split(!stdout, id); WriteToTextFile
           <+ <fatal-error> ["** rewriting failed"]
\end{code}

	Generate a new, not existing file name.

\begin{code}
strategies

  new-file =
    rec x(<conc-strings> (<new>(), ".tmp"); try(file-exists; x))

  temp-file(s) =
  where(new-file => f)
  ; split(!f, id)
  ; (s; where(<rm-files> [f])
     <+ where(<rm-files> [f]); fail)
\end{code}
