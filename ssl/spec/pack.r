\literate[pack]

	\begin{abstract}

	Module systems allow the definition of a program to be
	split into separate units stored in separate files. For
	languages that do not support separate compilation (such
	as grammar formalisms) these separate units need to be
	combined to create the whole program.
	This module defines generic strategies for packing a
	set of modules reachable from a root module and for
	flattening a set of modules into a single program.

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


\paragraph{Analysis}

	Aspects of module packing and flattening

	\begin{enumerate}

	\item finding the module associated with the module name

	\item doing something with the module, i.e., adding it
	to the result

	\item finding the imports in a module

	\item keeping track of which modules have already been inlined

	\end{enumerate}
	
\begin{code}
module pack
imports string pack-graph
\end{code}
	
\paragraph{Packing}

	Packing a module consists of collecting all modules into
	a single file.

\begin{code}
rules

  PackInit : root -> (root, (), [])

strategies

  pack(parser, imp) = 
	PackInit; 
	graph-nodes(Fst; parser, get-imports(imp), \ (n,x,xs) -> [x|xs] \ )

  get-imports(imp) =
	collect(imp); 
	concat
\end{code}

\paragraph{Unpacking}
	
	Unpacking is the reverse of packing, i.e., writing each module
	in a list of modules to a separate file.

\begin{code}
rules

  WriteMod(getname, write, ext) : 
    mod -> <write>(<add-extension>(<getname>mod, <ext>()), mod)

strategies

  unpack(wrapper, getname, ext) = 
	wrapper(WriteMod(getname, WriteToTextFile, ext))
\end{code}

\paragraph{Flatten}

	\verb|<flatten> (root, mods)| produces a flattened version
	of the root module.

\begin{code}
strategies

  flatten(imp, nameeq, getcontent) = 
	FlattenInit;
	graph-nodes(lookup(nameeq),
		 get-imports(imp), 
		 Ttl; (getcontent, id); conc)

rules

  FlattenInit : (root, mods) -> (root, mods, [])
\end{code}