\literate[time-test]

	\begin{abstract}
	A time module for definition of unit tests.
	\end{abstract}

\begin{code}
module time-test
imports sunit time
strategies

  main = profile(!"time for test: ",
    test-suite(!"time-test",
      test1
    )
  )

  test1 =
    apply-and-check(!"test1a"
	, times; test(clock; debug(!"clock: "))
	, !()
	, ?a; debug; (is-int,is-int,is-int,is-int)
	);
    apply-and-check(!"test1b"
	, <call>("ls", []); times
	, !()
	, ?b; debug; (is-int,is-int,is-int,is-int)
	)
\end{code}

% Copyright (C) 2002 Eelco Visser <visser@acm.org>
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
