\literate[annotations]

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

NOTE: NOT OPERATIVE

	Annotations in ATerms can be used to add extra information to
	terms that is not reflected in the term structure. However,
	due to its implementation in the ATerm library, these
	annotations are very fragile. If a subterm of the annotated
	term is modified, the annotation disappears. This is caused by
	the association of annotations to the \emph{pointers} of
	terms. This means that if the term is modified, i.e., is
	rebuilt, the annotation is no longer associated with the tree.

	In order to capture the information in annotations it is
	necessary to represent the annotations using normal term
	constructors. This means that subsequent transformations
	should be aware of the presence of the explicit annotations.

	This module defines a transformation that captures
	annotations.

\begin{code}
module annotations
signature
  constructors
    Anno : a * List(b) -> a

strategies

  get-annotation = prim("_ST_get_annotation")
  set-annotation = prim("_ST_set_annotation")

  catch-annos(s) = rec x(CatchAnnos(s); Anno(all(x), id) <+ all(x))

rules

  CatchAnnos(keys) : 
	x -> Anno(x, annos)
	where <rzip(GetAnno)> (x, <keys>()) => annos

  GetAnno : (trm, key) -> <mkterm> (key, anno)
	    where <get-annotation> (trm, key) => anno
\end{code}
