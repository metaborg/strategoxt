\literate[char-test]

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
module char-test
imports char sunit

strategies 

  main = 
    test-suite(!"char-test",
	is-num-test;
	is-alphanum-test;
	is-not-num-test
    )

  is-num-test =
    apply-test(!"is-num-test",is-num,!50,!50)

  is-alphanum-test =
    apply-test(!"is-alphanum-test",is-alphanum,!50,!50)

  is-not-num-test =
    apply-test(!"is-not-num-test",not(is-num),!130,!130)
\end{code}

