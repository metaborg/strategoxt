\literate[list-misc-test]

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
module list-misc-test
imports sunit list-misc

strategies

  main =
    test-suite(!"list-misc-test",
	test1;
	copy-test
    )

  test1 =
    apply-test(!"test1"

	, rec flat(mapfoldr(id
		           ,is-list; flat <+ \ x -> [x] \
			   ,conc
			   ))

	, !["a",["b",["c","d"]],"e"]
	, !["a","b","c","d","e"]
	)

  copy-test = 
    apply-test(!"copy-test"
	, copy
	, !(4, "a")
	, !["a", "a", "a", "a"]
	)
\end{code}