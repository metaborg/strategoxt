\literate[list-zip-test]
\begin{code}
module list-zip-test
imports list-zip sunit
strategies

  main = 
    test-suite(!"list-zip-test",
        nzip0-test;
	zip-test
     )

  nzip0-test =
    apply-test(!"nzip0-test"
	      ,nzip0(id)
	      ,!["a","b","c"]
	      ,![(0, "a"), (1, "b"), (2, "c")]
              )

  zip-test =
    apply-test(!"zip-test1"
	      ,zip(Merge)
	      ,!([ ("foo", 1), ("bar", 2) ], 
		 [ ("foo", 11), ("bar", 12) ])
	      ,![ ("foo", 1, 11), ("bar", 2, 12) ]
              );
    apply-test(!"zip-test2"
	      ,zipPad(Merge, !("Unknown", "Unknown") )
	      ,!([ ("foo", 1), ("bar", 2) ], 
		 [ ("foo", 11), ("bar", 12), ("baz", 13) ])
	      ,![ ("foo", 1, 11), ("bar", 2, 12), ("baz", "Unknown", 13) ]
              )

  Merge : (("Unknown", b), (c, d)) -> (c, b, d)
  Merge : ((a, b), ("Unknown", d)) -> (a, b, d)
  Merge : ((a, b),(c, d)) -> (a, b, d) where <not("Unknown")> a

  combinatory-test =
    apply-test(!"zip-test3"
	      ,join'(Merge2)
	      ,!([ ("foo", 1), ("bar", 2) ], 
		 [ ("foo", 11), ("bar", 12), ("baz", 13) ])
	      ,![ ("foo", 1, 11), ("baz", "Unknown", 13), ("bar", 2, 12)  ]
              )

  join'(merge1 : (a, b) -> c, merge2 : a -> c, merge3 : b -> c) : // List(a) * List(b) -> List(c)
    (xs, ys) -> 
    <filter(\ x -> <filter(<merge1>(x, <id>)); try([]; <merge2> x)> ys\ )> xs

  Merge2 : ((a, b),(a, d)) -> (a, b, d)
  Merge2 : ((a, b), (c, d)) -> (c, b, "Unknown") where <not(eq)> (a, c)

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
