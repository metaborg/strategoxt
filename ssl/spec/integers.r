\literate[integers]

	\begin{abstract}
	Primitives for integer arithmetic and comparison.
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
module integers
strategies

  is-int = ?i; prim("SSL_is_int", i)

  minus = obsolete(!"minus; use subt"); subt
  plus 	= obsolete(!"plus; use add"); add

  add	= ?(x,y); (prim("SSL_addi",x,y) <+ prim("SSL_addr",x,y))
  addi	= ?(x,y); prim("SSL_addi",x,y)
  addr	= ?(x,y); prim("SSL_addr",x,y)

  subt	= ?(x,y); (prim("SSL_subti",x,y) <+ prim("SSL_subtr",x,y))
  subti	= ?(x,y); prim("SSL_subti",x,y)
  subtr	= ?(x,y); prim("SSL_subtr",x,y)

  mul	= ?(x,y); (prim("SSL_muli",x,y) <+ prim("SSL_mulr",x,y))
  muli	= ?(x,y); prim("SSL_muli",x,y)
  mulr	= ?(x,y); prim("SSL_mulr",x,y)

  div	= ?(x,y); (prim("SSL_divi",x,y) <+ prim("SSL_divr",x,y))
  divi	= ?(x,y); prim("SSL_divi",x,y)
  divr	= ?(x,y); prim("SSL_divr",x,y)

  mod	= ?(x,y); prim("SSL_mod",x,y)

  gt	= ?(x,y); test(prim("SSL_gti",x,y) <+ prim("SSL_gtr",x,y))
  gti	= ?(x,y); test(prim("SSL_gti",x,y))
  gtr	= ?(x,y); test(prim("SSL_gtr",x,y))

  geq   = ?(x,x) <+ gt
  lt    = not(geq)
  leq   = not(gt)

  max   = gt; Fst <+ Snd
  min	= gt; Snd <+ Fst

  int   = ?x; prim("SSL_int",x)

  int-to-string = ?x; prim("SSL_int_to_string",x)
  string-to-int = ?x; prim("SSL_string_to_int",x)

rules

  inc: a -> <add>(a,1)
  dec: a -> <subt>(a,1)
\end{code}
