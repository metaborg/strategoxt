\literate[subs-obsolete]

	\begin{abstract}

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
module subs-obsolete
imports substitution
strategies

  subs'(isvar, mklst) = 
    obsolete(!"subs'/2");
    subs(isvar, mklst)

  subs(isvar) =
    obsolete(!"subs/1");
    //subs-args; 
    //\(sbs, t) -> <subs(isvar, !sbs)> t \
    substitute(isvar) 

  subs(isvar, mklst) = 
    obsolete(!"subs/2");
    split(mklst, id); substitute(isvar)

  subs_proper(isvar, ren) = 
    obsolete(!"subs_proper/2");
    substitute(isvar, ren)

  subs_proper'(isvar, ren, mklst) = 
    obsolete(!"subs_proper'/2");
    split(mklst, id); substitute(isvar, ren)
\end{code}