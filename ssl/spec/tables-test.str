\literate[tables-test]

	\begin{abstract}
	Unit tests for table strategies
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
module tables-test
imports sunit tables
strategies

  main = 
    test-suite(!"tables-test",
      test1;
      test2;
      test3
    )

  test1 =
    apply-and-check(!"test1"
	, table-put
	, !("bla", "key", "value")
	, <table-get> ("bla", "key") => "value"
	)

  test2 =
    apply-and-fail(!"test2"
	, table-get
	, !("blabla", "key")
	)

  test3 =
    apply-test(!"test3"
	, table-keys
	, !"blablabla"
	, ![]
	)
\end{code}