\literate[bin-tree-set]

	\begin{abstract}

	Binary trees are efficient representations of sets of elements
	in terms of lookup. Based on the unique addresses of terms
	under hash-consing, efficient representations of sets of terms
	can be made with binary terms.

	\end{abstract}

% Copyright (C) 199-2001 Eelco Visser <visser@acm.org>
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
module bin-tree-set
imports bin-tree
strategies

  branch(mky, lt, gt, et) = 
	BinNode(where(\x -> <eq>(x, <mky>())\), id, id) <+
	BinNode(where(\x -> <address-lt>(<mky>(), x)\), lt, id) <+
	BinNode(where(\x -> <address-lt>(x, <mky>())\), id, gt) <+
	EmptyNode; et

rules

  bin-add : 
	(a, t) -> 
	<rec x(branch(!a, x, x, !BinNode(a, EmptyNode, EmptyNode)))> t

  Merge(s) : 
	(EmptyNode, x) -> x
  
  Merge(s) : 
	(x, EmptyNode) -> x

  Merge(s) : 
	(BinNode(x, l1, r1), BinNode(x, l2, r2)) ->
	BinNode(x, <s> (l1, l2), <s> (r1, r2))

  Merge(s) : 
	(BinNode(x, l1, EmptyNode), BinNode(y, l2, r2)) ->
	BinNode(y, <s> (BinNode(x, l1, EmptyNode), l2), r2)
	where <address-lt> (x, y)

  Merge(s) : 
	(BinNode(x, EmptyNode, r1), BinNode(y, l2, r2)) ->
	BinNode(y, l2, <s> (BinNode(x, EmptyNode, r1), r2))
	where <address-lt> (y, x)

  Merge(s) : 
	(BinNode(x, l1, r1), BinNode(y, l2, r2)) ->
	<s> (r1, BinNode(y, <s> (BinNode(x, l1, EmptyNode), l2), r2))
	where <address-lt> (x, y)

  Merge(s) : 
	(BinNode(x, l1, r1), BinNode(y, l2, r2)) ->
	<s> (r2, BinNode(x, <s> (BinNode(y, l2, EmptyNode), l1), r1))
	where <address-lt> (y, x)

strategies

  merge = rec x(Merge(x))

  mkbinset = foldr(!EmptyNode, bin-add)
\end{code}

    