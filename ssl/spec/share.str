\literate[share]

	\begin{abstract}

	The ATerm library preserves maximal sharing of subterms
	through hash-consing. This sharing is not directly available
	to the user of an ATerm. For some applications it is necessary
	to make the implicit sharing in terms explicit in the form of
	a let construct in which all occurences of a shared subterm
	are replaced by a symbolic pointer (variable).

	\end{abstract}

% Copyright (C) 2000 Eelco Visser <visser@acm.org>
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
module share
imports list-set unification term
\end{code}

	The strategy \verb|share| defined in this module achieves such
	an explicit sharing for arbitrary terms. The approach used by
	the strategy is to first turn the term into its underlying
	graph and then inlining those subterms that are not shared
	(only occur once) or that cannot be shared in this way (upto
	the needs of an application).

\begin{code}
strategies

  share(mkvar, always, mklet) = 
	graph(mkvar); 
	inline-graph(always, mklet)
\end{code}

	The graph of a term is obtained by turning each node
	\verb|F(t1,...,tn)| into an edge \verb|(a, F(a1,...,an))|,
	where \verb|a| is the address of the node and the \verb|ai|
	are the addresses of its direct subterms. The \verb|mkvar|
	parameter is used to embed the address in some constructor.
	(If \verb|mkvar| is \verb|id|, nothing is done.)

\begin{code}
strategies

  edge(mkvar)      = split(address; mkvar, all(address; mkvar))
  list-edge(mkvar) = split(address; mkvar, map(address; mkvar))

  graph(mkvar) = 
    rec x(is-list; split(list-edge(mkvar), map(x); unions); MkCons
                <+ split(edge(mkvar), \ _#(xs) -> xs\ ; map(x); unions); 
                   MkCons)
\end{code}

	The first edge in the graph is the root of the tree. By
	definition it is never shared. The graph can be turned into
	one big let-expression with the root as its body. That is what
	the first line of the definition of \verb|inline-graph|
	accomplishes. 

	Subsequently, nodes that are not shared, i.e., a pointer to
	which only occurs once, can be inlined. Some nodes may always
	have to be inlined (for application specific reasons). The
	shape of such nodes is specified by the parameter
	\verb|always|.  Edges that cannot be inlined are turned into a
	let-binding the form of which is determined by the parameter
	\verb|mklet|.

	After all graph edges have either been inlined or turned into
	let-bindings the, now empty, \verb|GraphLet| is discarded and
	replaced by its body.
	
\begin{code}
signature
  constructors
    GraphLet : List(Product([Int, Term])) * Term -> Term

strategies

  inline-graph(always, mklet) = 
	\ [(a, t) | graph] -> GraphLet(graph, t) \ ;
	repeat(
          inline; (GraphLet([(id,always) | id], id) + dead) <+ 
          dead <+
          dont-inline(mklet));
	\ GraphLet([], t) -> t \
\end{code}


\begin{code}
rules

  inline : 
	GraphLet([(a, skel) | graph], t[a]) ->
	GraphLet([(a, skel) | graph], t[skel])

  dead : 
	GraphLet([(a, skel) | graph], t) -> 
	GraphLet(graph, t)
	where <not(is-subterm)> (a, t)

  dont-inline(mklet) : 
	GraphLet([(a, skel) | graph], t) -> 
	GraphLet(graph, <mklet>(a, skel, t))
\end{code}
