\literate[{\tt USE-DEF}]

% Copyright (C) 1998, 1999, 2000 Eelco Visser <visser@acm.org>
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
module use-def
imports sugar list-set stratlib
\end{code}

	In the triple \verb|(u, d, e)| \verb|u| represents the
	variables used in a build and \verb|d| the variables bound
	(defined) in a match. \verb|e| represents the variables that
	are used but never defined. The following strategies define
	for each construct involved with term variables how it uses or
	defines variables.

\begin{code}
strategies

  use-term     = {t: ?t; ![(<tvars> t, [], [])]}
  def-term     = {t: ?t; ![([], <tvars> t, [])]}

  constructs(x) =
	 Build(use-term) + Match(def-term) + MA(def-term, x) + 
         AM(x, def-term) + BA(x, use-term) + BAM(x, use-term, def-term) +
         Scope(id, x) + Rule(def-term, use-term, x) + 
         Overlay(id, id, use-term) + Cong(id, map(x))
\end{code}

	The parallell union of two use-def triples simply takes the
	point-wise union of each of the sets. In the sequential union
	the uses of the second triple are are accounted for by the
	defines in the first triple.

\begin{code}
rules

  Union : ((u1, d1, e1), (u2, d2, e2)) -> 
          (<union> (u1, u2), <union> (d1, d2), <union> (e1, e2))

  SeqUnion : ((u1, d1, e1), (u2, d2, e2)) -> 
             (<union> (u1, <diff> (u2, d1)), 
              <union> (d1, d2), <union> (e1, e2))
\end{code}

	Because System~S expressions can contain choice operators, the
	use-def information of an expression is represented as a set
	of use-def triples, one for each path. The strategy
	\verb|seq-join| joins two sets of triples, where for each pair
	of triples (\verb|cart| stands for Cartesian product) the
	sequential union is taken.

\begin{code}
strategies

  seq-join = cart(SeqUnion)
  seqs-join = foldr(![([], [], [])], cart(SeqUnion))

\end{code}

	The \verb|UDjoin| rules define for each construct involved
	with variables how use-def information is propagated.

\begin{code}
rules

  UDjoin : Seqs(xs)           -> <seqs-join> xs
  UDjoin : Seq(xs, ys)        -> <seqs-join> [xs, ys]
  UDjoin : Rule(l, r, c)      -> <seqs-join> [l, c, r]
  UDjoin : StratRule(l, r, c) -> <seqs-join> [l, c, r]
  UDjoin : MA(t, s)           -> <seqs-join> [t, s]
  UDjoin : AM(s, t)           -> <seqs-join> [s, t]
  UDjoin : BA(s, t)           -> <seqs-join> [t, s]
  UDjoin : BAM(s, t1, t2)     -> <seqs-join> [t1, s, t2]
  UDjoin : Cong(f, ss)        -> <seqs-join> ss
  UDjoin : Scope(xs, uds)     -> <map(JoinScope(!xs))> uds
  UDjoin : Overlay(f, xs, t)  -> Overlay(f, xs, <seqs-join> [([],xs,[]),t])

  JoinScope(xs) : (u, d, e) -> 
                  (u, <diff> (d, <xs>()), 
                      <conc> (<isect> (u, <xs>()), e))
\end{code}

	For all other constructs the use-def information is combined
	with \verb|Union|. Finally, the use-def information for an
	expression is computed by \verb|use-def|.

\begin{code}
strategies

  default-join = 
	explode-term; Snd; 
	foldr(![([], [], [])], cart(Union))

  use-def = 
	rec x((constructs(x) <+ all(x)); (UDjoin <+ default-join))
\end{code}

	Each definition of the the specification is checked for valid
	use of variables. That is, variables should be declared and
	defined before they are used.

\begin{code}
strategies

  spec-use-defIO = iowrap(where(spec-use-def))

  spec-use-def = Specification([Signature(id),
                                Overlays(defs-use-def),
			        Strategies(defs-use-def)])

  defs-use-def = filter(check); ?[]

  check = SDef(id, id, use-def; not([([], id, [])])); err-msg + 
          RDef(id, id, use-def; not([([], id, [])])); err-msg +
	  Overlay(id, id, id); use-def; 
            not(Overlay(id,id,[([],[],[])])); err-msg
\end{code}

	The following rules transform definitions with use-def
	information that indicates an error to a readable error
	message.

\begin{code}
rules

  MsgU : [] -> []
  MsgU : [x] -> 
         ["variable ", x, ": used, but not bound"]
  MsgU : [x, y | ys] -> 
         ["variables ", Cons(x, Cons(y, ys)), ": used, but not bound"]

  MsgD : [] -> []
  MsgD : [x] -> 
         ["variable ", x, ": matched, but not declared"]
  MsgD : [x, y | ys] -> 
         ["variables ", Cons(x, Cons(y, ys)), ": matched, but not declared"]

  MsgE : [] -> []

  MsgE : [x] -> 
         ["variable ", x, ": declared, but not bound"]

  MsgE : [x, y | ys] -> 
         ["variables ", [x, y | ys], ": declared, but not bound"]

  MsgS : (u, d, e) -> <concat> [<MsgU> u, <MsgE> e]
  MsgR : (u, d, e) -> <concat> [<MsgU> u, <MsgE> e]
                    
  MkMsg : RDef(l, xs, uds) -> ["error in rule ", l, " : "
                              | <map(MsgR); concat> uds]

  MkMsg : SDef(f, xs, uds) -> ["error in definition ", f, " : "
                              | <map(MsgS); concat> uds]

  MkMsg : Overlay(f, xs, uds) -> ["error in overlay ", f, " : "
                                 | <map(MsgR); concat> uds]

strategies 

  err-msg = MkMsg; fatal-error
\end{code}

