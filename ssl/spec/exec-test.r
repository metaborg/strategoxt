\literate[exec-test]

	\begin{abstract}
	Test
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
module exec-test
imports sunit exec
strategies

  main = 
    test-suite(!"exec-test",
      test1
    )

  test1 =
    apply-test(!"test1"
	, copy-file(id, !"data/test2", id)
	, !("data/test", ".trm")
	, !("data/test2", ".trm") 
	)
\end{code}
