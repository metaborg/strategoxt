\literate[thread]

	\begin{abstract}

	???

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
module thread
strategies

  f(s) : (F(x,y), e) -> (F(x', y'), e')
         where <s> (x, e)  => (x', e'');
               <s> (y, e') => (y', e')

  T(s) : (TCons(x, xs), e) -> (TCons(x', xs'), e')
         where <s> (x, e)   => (x', e'');
               <s> (xs, e') => (y', e')

  f(s) : (Var(x), (xs, ys, ts)) -> 
         (Var(y), (xs, Cons(y, ys), Seq(Build(y), Match(x))))
         where <in> (x, xs); new => y

  f(s) : (Var(x), (xs, ys, ts)) -> (Var(x), (Cons(x, xs), ys, ts))
         where <not(in)> (x, xs)

  split(f, g) : x -> (<f> x, <g> x)

  thread(init, f) = 
    init;
    rec x(f(x)
    <+ {t, e: 
        ?(t, e)
    
    )
\end{code}
