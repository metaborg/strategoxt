\literate[bin-tree]

	\begin{abstract}

	Binary trees are represented by the constructors \verb|EmptyNode|
	and \verb|BinNode|.

	\end{abstract}

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

\begin{code}
module bin-tree
signature
  sorts BinTree(a)
  constructors
    EmptyNode : BinTree(a)
    BinNode   : a * BinTree(a) * BinTree(a) -> BinTree(a)
\end{code}

    