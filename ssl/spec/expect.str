\literate[expect]

	\begin{abstract}
	Catch failure for strategies that are expected to succeed and
	report this event.
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
module expect

signature
  constructors
    General:    Error

strategies

  expect(s,err) = s <+ error(err);fail
  expect(s) = expect(s,!General)

  error(code) = 
          where(code;errmsg;debug)
        ; debug(!" error: expected success on ")

  errmsg: General -> "general"
\end{code}

Here's an example:

\begin{code}
(*
module test-expect
imports expect lib
signature
  constructors
    MyError:    Error

strategies 

  main = iowrap(try(test1);try(test2))

  test1 = expect(fail)
  test2 = expect(fail,!MyError)

  errmsg: MyError -> "my very own"
*)
\end{code}

