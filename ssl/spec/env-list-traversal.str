\literate[env-listtraversal]

	\begin{abstract}
	Traversals that carry an environment.
	\end{abstract}

\begin{code}
module env-list-traversal
imports env-traversal simple-list-traversal
rules

  all-l-dist(s) : 
    (t, env) -> <all-l(\x -> <s>(x,env)\)> t

strategies

  env-alltd-l(s) = 
    rec x(s <+ all-l-dist(x))

  env-topdown-l(s) = 
    rec x(s; all-l-dist(x))

  env-topdown-l(s, skip: term * (term -> term) -> term) = 
    rec x(s; (skip(x) <+ all-l-dist(x)))

  env-bottomup-l(s) = 
    rec x(split(all-l-dist(x), Snd); s)

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
