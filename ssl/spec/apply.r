\literate[apply]

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

reverse-Monad like strategies. apply2(a,b) applies a;b <+ a <+ b, apply3
applies a;b;c <+ a;b <+ a;c <+ b;c <+ b <+ c, et cetera. The idea is that
every strategy is tried in order. At least one must succeed. The 'monads'
are used to prevent having to execute each strategy more than once.

Because Stratego doesn't support first-order strategies (yet), a
strategy must be defined for each number of strategies to apply. At the
moment there are definitions for up to four strategies. Support for higher
numbers can easily be added.

\begin{code}
module apply
imports lib
signature
  constructors
    Fail:    ApplyResult
    Success: ApplyResult

strategies

  apply-start = split(id,!Fail)
  apply(s) = try((s,!Success))

  apply(a,b) = 
	  apply-start
	; apply(a)
	; apply(b)
	; apply-end

  apply(a,b,c) = 
	  apply-start
	; apply(a)
	; apply(b)
	; apply(c)
	; apply-end

  apply(a,b,c,d) =
	  apply-start
	; apply(a)
	; apply(b)
	; apply(c)
	; apply(d)
	; apply-end

rules
  apply-end:
    (trm,Success)
  ->
    trm
\end{code}

