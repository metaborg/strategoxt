\literate[integers]

	\begin{abstract}
	Primitives for integer arithmetic and comparison.
	\end{abstract}

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

  addS  = (string-to-int, string-to-int); add; int-to-string
  subtS = (string-to-int, string-to-int); subt; int-to-string
  mulS  = (string-to-int, string-to-int); mul; int-to-string
  divS  = (string-to-int, string-to-int); div; int-to-string
  modS  = (string-to-int, string-to-int); mod; int-to-string
  gtS   = (string-to-int, string-to-int); gt; int-to-string
  geqS  = (string-to-int, string-to-int); geq; int-to-string
  ltS   = (string-to-int, string-to-int); lt; int-to-string
  leqS  = (string-to-int, string-to-int); leq; int-to-string
  maxS  = (string-to-int, string-to-int); max; int-to-string
  minS  = (string-to-int, string-to-int); min; int-to-string

  inc = !(<id>, 1); add

  log2 = 
    !(<id>, 0);
    repeat((!(<divi>(<id>, 2), <mod; ?0>(<id>, 2)); Fst, inc));
    ?(1, <id>)

signature
  sorts IntI
  // subsorts Int < IntI
  constructors
    Infinite: IntI

rules

  add-inf1: (Infinite, _) -> Infinite
  add-inf2: (_, Infinite) -> Infinite
  add-inf = (add-inf1 + add-inf2) <+ add

  lt-inf = ?(<is-int>, Infinite) <+ (is-int, is-int); lt

rules

  inc: a -> <add>(a,1)
  dec: a -> <subt>(a,1)

imports dynamic-rules
strategies

  new-counter =
    new; reset-counter

  reset-counter = ?c;
    where(<set-counter> (c, 0))

  set-counter = 
    ?(c,n); rules( Counter : c -> n )

  get-counter =
    Counter <+ <set-counter> (<id>,0)

  next-counter =
    ?c; get-counter; inc; where(<set-counter> (c, <id>))
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
