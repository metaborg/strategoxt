\literate[annotations]
   \begin{abstract}
	This module defines primitives for getting and setting term
	annotations. The preferred way to access annotations, however,
	is through the term syntax t1{t2}, which allows matching and
	building terms with annotations.
   \end{abstract}
\begin{code}
module annotations
signature
  constructors
    Anno : a * b -> a
strategies

  get-annotations = 
    ?t; prim("SSLgetAnnotations", t)

  set-annotations = 
    ?(t, a); prim("ATsetAnnotations", t, a)

  rm-annotations = 
    ?t; prim("ATremoveAnnotations", t)

  has-annos = 
    ?_{_}

  strip-annos = 
    bottomup(rm-annotations)

  catch-annos = 
    rec x(try(!Anno(<rm-annotations>, <get-annotations>); Anno(all(x), id)) <+ all(x))
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
