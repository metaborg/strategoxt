\literate[exec-test]
\begin{code}
module exec-test
imports sunit exec
strategies

  main = 
    test-suite(!"exec-test",
      test1
    )

  test1 =
    where(
      <WriteToTextFile>("exec-test-data1.trm", "abc");
      <WriteToTextFile>("exec-test-data2.trm", "def")
    );
    apply-and-check(!"test1"
	, copy-file(id, !"exec-test-data2", id)
	, !("exec-test-data1", ".trm")
	, ?("exec-test-data2", ".trm")
          ; where(<ReadFromFile> "exec-test-data2.trm" => "abc")
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
