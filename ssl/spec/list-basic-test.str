\literate[list-basic-test]
\begin{code}
module list-basic-test
imports sunit list-basic

strategies

  main =
    test-suite(!"list-basic-test",
      map-test;
      split-fetch-test;
      upto-test1;
      upto-test2;
      fetch-test;
      fetch-elem-test;
      reverse-test;
      conc-test;
      concat-test;
      split-init-last-test
    )

  map-test =
    apply-test(!"map-test1"
	,map(!3)
	,![1,2,3,4,5,6,7]
	,![3,3,3,3,3,3,3]
	);
    apply-test(!"map-test2"
	,map(!3)
	,![]
	,![]
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

  reverse-test = 
    apply-test	(!"reverse-test"
		,reverse
		,![1,2,3,4,5]
		,![5,4,3,2,1]
		)

  conc-test = 
    apply-test	(!"conc-test"
		,conc
		,!([1,2,3,4,5], [1,2,3,4,5])
		,![1,2,3,4,5,1,2,3,4,5]
		)

  concat-test = 
    apply-test	(!"concat-test"
		,concat
		,![[1,2,3,4,5], [1,2,3,4,5]]
		,![1,2,3,4,5,1,2,3,4,5]
		)

  split-init-last-test =
    apply-test(!"split-init-last-test"
	, split-init-last
	, ![1, 2, 3, 4, 5]
	, !([1, 2, 3, 4], 5)
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

