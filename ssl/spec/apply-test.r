\literate[apply-test]

\begin{code}
module apply-test
imports apply sunit integers

strategies 

  main = 
    test-suite(!"apply-test",
	apply-test-1;
	apply-test-2;
	apply-test-3;
	apply-test-4
    )

  apply-test-1 =
    apply-test(!"apply-test-1",apply(inc,fail),!2,!3)

  apply-test-2 =
    apply-test(!"apply-test-2",apply(fail,inc2),!2,!4)

  apply-test-3 =
    apply-test(!"apply-test-3",apply(inc,inc2),!2,!5)

  apply-test-4 =
    apply-test(!"apply-test-4",not(apply(fail,fail)),!2,!2)

rules

  inc2: x -> <add>(x,2)

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
