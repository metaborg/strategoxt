\literate[reals-test]

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
module reals-test
imports reals sunit

strategies 

  main = 
    test-suite(!"reals-test",
	id-test;
	cos-test;
	sin-test;
	sqrt-test;
	real-to-string-test;
	string-to-real-test//;
	//real-test
    )

  id-test = 
	apply-and-show(!"id-test", id, !10.8)
  
  cos-test =  
	apply-and-show(!"cos-test", cos, !10.8)

  sin-test = 
	apply-and-show(!"sin-test", sin, !1.6)

  sqrt-test = 
	apply-and-show(!"sqrt-test", sqrt, !1.6)

  real-to-string-test =
    apply-and-show(!"real-to-string-test", real-to-string, !12345678901234567.0)
    //apply-and-show(!"real-to-string-test", real-to-string, !1.5e20);
    //apply-and-show(!"real-to-string-test", real-to-string, !-1.5e-20)

  string-to-real-test =
    apply-and-show(!"string-to-real-test", string-to-real, !"12345678901234567");
    apply-and-show(!"string-to-real-test", string-to-real, !"1.2345678901234567e307")

  real-test =
    apply-and-show(!"real-test", real, !1)

\end{code}