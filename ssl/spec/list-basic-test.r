\literate[list-basic-test]

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
module list-basic-test
imports sunit list-basic

strategies

  main =
    test-suite(!"list-basic-test",
      split-fetch-test;
      upto-test1;
      upto-test2;
      fetch-test;
      fetch-elem-test
    )

  split-fetch-test =
    apply-test(!"split-fetch-test"
	,split-fetch(?4)
	,![1,2,3,4,5,6,7]
	,!([1,2,3],[5,6,7])
	)

  upto-test1 =
    apply-test(!"upto-test1"
	      ,upto
	      ,!5
	      ,![0,1,2,3,4,5]
              )

  upto-test2 =
    apply-test(!"upto-test2"
	      ,upto
	      ,<subt> (0, 3)
	      ,![]
              )

  fetch-test = 
    apply-test(!"fetch-test"
	,fetch(\3 -> 6\)
	,![1,2,3,4,5]
	,![1,2,6,4,5]
	)

  fetch-elem-test = 
    apply-test	(!"fetch-elem-test"
		,fetch-elem(\3 -> 6\)
		,![1,2,3,4,5]
		,!6
		)

  length-test = 
    apply-test	(!"length-test"
		,length
		,![1,2,3,4,5]
		,!5
		)
\end{code}
