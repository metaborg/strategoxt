\literate[list-zip-test]
\begin{code}
module list-zip-test
imports list-zip sunit
strategies

  main = 
    test-suite(!"list-zip-test",
        nzip0-test
     )

  nzip0-test =
    apply-test(!"nzip0-test"
	      ,nzip0(id)
	      ,!["a","b","c"]
	      ,![(0, "a"), (1, "b"), (2, "c")]
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
