\literate[scoped-finite-map]

\begin{abstract}
	Tables are useful for storing finite maps from closed terms
	to closed terms and can be accessed in almost constant
	time by means of hashing. In many program transformation
	applications a table is used to keep track of a scoped 
	finite map in which the bindings have to be removed after
	leaving the scope. Adding and removing entries in the
	finite map has to be done according to the scope structure
	and thus interferes with traversal. This module introduces
	operators that separate the declaration of a scope
	and the addition of bindings. Removing bindings at the
	end of a scope is completely transparent.
\end{abstract}

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
module scoped-finite-map
imports tables io

signature
  constructors
    Scopes : Key

strategies

  init-name-space(ns) = 
    where(ns; table-create)

  exit-name-space(ns) =  
    where(ns; table-destroy)

  begin-scope(ns) = //debug(!"begin-scope: ");
  where(ns => ns
  ; <table-put>(ns, Scopes, [[] | <table-get <+ ![]>(ns, Scopes)])
  )

  end-scope(ns) = //debug(!"end-scope: ");
  where(ns => ns
  ; (<table-get>(ns, Scopes) <+ ![[]]) => [scope | scopes]
  ; <table-put>(ns, Scopes, scopes)
  ; <map( \ key -> <table-pop>(ns, key) \ )> scope
  )

  scope(ns, s) =
    begin-scope(ns); (s; end-scope(ns) <+ end-scope(ns); fail)

  assert(ns) = ?(key, val); //debug(!"assert: ");
  where(ns => ns
  ; <table-push>(ns, key, val)
  ; (<table-get>(ns, Scopes) <+ ![[]]) => [scope | scopes]
  ; <table-put>(ns, Scopes, [[key | scope] | scopes])
  //; debug(!"asserted: ")
  )

  override-key(ns) = ?(key, val); //debug(!"override-key: ");
  where(ns => ns
  ; <table-replace>(ns, key, val)
  //; debug(!"overriden: ")
  )

  rewrite(ns) = //debug(!"rewrite: "); 
    \ key -> <table-lookup>(<ns>(), key) \
  //; debug(!"rewriten: ")
\end{code}

\paragraph{Usage}

\begin{itemize}

\item \verb|init-name-space(!"fun")| initializes a name space for
function symbols, say.

\item \verb|exit-name-space(!"fun")| destroys the name space.

\item \verb|begin-scope(!"fun")| starts a new scope

\item \verb|end-scope(!"fun")| ends a scope

\item \verb|scope(!"fun", inline)| applies inline to the subject term
in a new scope, which is exited after inline returns, even if inline
fails.

\item \verb|<assert(!"fun")>("foldr", Fdec("foldr", xs, e))| binds a
value (e.g., a function declaration), to a key (e.g., the name of the
function)

\item \verb|<rewrite(!"fun")> "foldr"| retrieves the declaration

\end{itemize}

\paragraph{Example}

For an example see module \verb|scoped-finite-map-test|.

\paragraph{Backtracking}

Be aware that, in general, side-effects are not undone after a
failure.  The \verb|scope| strategy deals with this by catching a
possible failure of the scoped strategy, exiting the scope and then
failing again.
