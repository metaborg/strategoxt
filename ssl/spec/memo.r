\literate[memo]

\begin{abstract}
   	The memo operator makes a strategy
   	into a memoizing strategy that looks up the term to be transformed
   	in a memo table and only computes the transformation if the
   	term is not found.
\end{abstract}

% Copyright (C) 1999-2001 Eelco Visser <visser@acm.org>
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
module memo
imports tables

strategies

  memo-init  = table-create
  memo-purge = table-destroy

rules

  memo(name, s) :
    t -> t'
    where <table-get> (<name>(), t) => t'
       <+ <s> t => t'; <table-put> (<name>(), t, t')
\end{code}

\paragraph{Usage}

\begin{itemize}

\item \verb|<memo-init> tbl| creates a new memo table and
\verb|<memo-purge> tbl| destroys it.

\item \verb|<memo(tbl, s)> t| first looks up the term \verb|t| in the
memo table. If present the association in the table is produced, else
the result of \verb|<s> t| is computed and stored in the table.

\end{itemize}