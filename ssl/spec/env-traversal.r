\literate[env-traversal]

	\begin{abstract}
	Traversals that carry an environment.
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
module env-traversal
rules

  all-dist(s) : 
    (t, env) -> <all(\x -> <s>(x,env)\)> t

  one-dist(s) : 
    (t, env) -> <one(\x -> <s>(x,env)\)> t

  d(s) : 
    Pair(t, env) -> <s> t

  t(s) : 
    Pair(t, env) -> Pair(<s>t, env)

  coll(s) : 
    f#(xs) -> (f#(ys), zs)
    where <unzip(s)> xs => (ys, zs)

strategies

  env-alltd(s) = 
    rec x(s <+ all-dist(x))

  env-topdown(s) = 
    rec x(s; all-dist(x))

  env-topdown(s, skip: term * (term -> term) -> term) = 
    rec x(s; (skip(x) <+ all-dist(x)))

  env-bottomup(s) = 
    rec x(split(all-dist(x), Snd); s)

  thread-alltd(s) = 
    rec x(s <+ thread(x))

  env-oncetd(s) = 
    rec x(s <+ one-dist(x))
\end{code}
