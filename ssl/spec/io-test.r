\literate[io-test]

	\begin{abstract}
	Tests for io operations
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
module io-test
imports sunit io
strategies

  main = 
    test-suite(!"io-test",
      test1;
      test2;
      test3
    )

  test1 =
    where(<open-file> ("io-test.r", "r"));
    apply-test(!"test1"
	, getchar 
	, !"io-test.r"
	, !92
	);
    where(<close-file> "io-test.r")

  test2 =
    where(<open-file> ("io-test.r", "r"));
    apply-test(!"test2a"
	, rec x({where(<getchar> "io-test.r" => c; not(10)); ![c | <x>()]} <+ ![]);
	  implode-string
	, !"io-test.r"
	, !"\\literate[io-test]"
	);
    apply-test(!"test2b"
	, split(readline, readline); 
	  (implode-string, implode-string)
	, !"io-test.r"
	, !("","\t\\begin{abstract}")
	);
    where(<close-file> "io-test.r")

  test3 =
    apply-test(!"test3"
	, printnl
	, !(stdout, ["\"\\\\/\""])
	, !(stdout, ["\"\\\\/\""])
	)

\end{code}
