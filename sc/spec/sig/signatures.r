\literate[Signatures]

% Copyright (C) 1998, 1999, 2000 Eelco Visser <visser@acm.org>
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



	Types and Kinds

\begin{code}
module signatures
signature
  constructors
    ConstType : Term              -> Type
    FunType   : List(Term) * Term -> Type
\end{code}

	Signatures

\begin{code}
signature
  sorts SortDecl OpDecl BSig
  constructors
    Sort       : String * List(Kind) -> SortDecl
    OpDecl     : String * Type       -> OpDecl
    Sorts      : List(SortDecl)      -> BSig
    Operations : List(OpDecl)        -> BSig

overlays

  DefaultStrat = FunType([ConstType(Op("ATerm",[]))], ConstType(Op("ATerm",[])))
\end{code}
