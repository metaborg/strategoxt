\literate[term-zip]
	
\begin{abstract}

	The zip strategy on lists takes a pair of lists and combines
	the elements of the lists into a list of pairs. This can be
	generalized by transforming a tuple of lists into a list of
	tuples. This module further generalizes zip by allowing any
	term structure instead of a list to be zipped.
	
\end{abstract}

\begin{code}
module term-zip 
imports list-zip
strategies

  // zipping a pair of terms

  pair-term-zip-bu(leaf, node) = 
    rec x(leaf <+ TermZip(x); node)

rules

  TermZip(s) : 
    (f#(xs), f#(ys)) -> f#(<zip(s)>(xs, ys))

strategies

  // zipping a tuple of terms 

  term-zip(leaf, node) = 
    rec x(leaf <+ TermTupleZip(x); node)

  TermTupleZip(s) =
    tmap({xs: ?f#(xs); !xs});
    tuple-zip(s);
    \ xs -> f#(xs) \
\end{code}

% Copyright (C) 2001-2002 Eelco Visser <visser@acm.org>
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

