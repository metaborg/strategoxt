\literate[integers-test]

	\begin{abstract}
	A integers module for definition of unit tests.
	\end{abstract}


\begin{code}
module integers-test
imports sunit integers
strategies

  main = 
    test-suite(!"integers-test",
      test1;
      test2;
      test3
    )

  test1 =
    apply-test(!"test1"
	, leq
	, !(5,5)
	, !(5,5)
	)

  test2 =
    apply-test(!"test2a"
	, !(<divi>(<id>, 2), <mod; ?0>(<id>, 2))
	, !16
	, !(8,0)
	);
    apply-test(!"test2b"
	, log2
	, !16
	, !4
	);
    apply-and-fail(!"test2c"
	, log2
	, !6
	)

  test3 =
    apply-test(!"test3"
	, addS
	, !("5","3")
	, !"8"
	);
    apply-test(!"test3"
	, ltS
	, !("5","3")
	, !("5","3")
	)

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
