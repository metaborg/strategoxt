\literate[tuple-test]
\begin{code}
module tuple-test
imports tuple sunit
strategies 

  main = 
    test-suite(!"tuple-test",
	tuple-zip-test;
        tuple-unzip-test
     )

  tuple-zip-test =
    apply-test(!"tuple-zip-test"
              ,tuple-zip(id)
              ,!([1,2,3], [4,5,6], [7,8,9])
              ,![(1,4,7), (2,5,8), (3,6,9)]
              )

  tuple-unzip-test =
    apply-test(!"tuple-unzip-test"
              ,tuple-unzip(id)
              ,![(1,4,7), (2,5,8), (3,6,9)]
              ,!([1,2,3], [4,5,6], [7,8,9])
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
