\literate[pack-graph]

	\begin{abstract}

	The strategy 'graph-nodes' is a generic
 	algorithm for mapping a graph to a collection of nodes reachable
 	from a given root node. The algorithm is parameterized with the
 	following notions: 'get-node' maps a node name and a graph to the
 	node itself, 'out-edges' maps a node to the names of its out
 	edges, 'add-node' that adds a name and its corresponding node to a
 	collection of nodes.

	\end{abstract}

% Copyright (C) 2000-2001 Eelco Visser <visser@acm.org>
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
module pack-graph
imports string list
\end{code}
	
	Basic idea: configuration of the form \verb|(todo, done, files)|

	keep adding files corresponding to the names in \verb|todo| until
	empty

	\verb|<worklist(get, next, add)> (root, source, target)| 
	produces a target to which all things reachable from \verb|root|
	via the \verb|next| relation are \verb|add|ed. The things
	are obtained via \verb|<get>(name,source)|.
  
\begin{verbatim}
     get-node  :: name * graph -> node 
     out-edges :: node -> List(name)
     add-node  :: name * node * nodes -> nodes
\end{verbatim}
	
\begin{code}
rules

  GnInit : 
    (root, graph, nodes) -> ([root], [root], graph, nodes, [])

  GnInitRoots : 
    (roots, graph, nodes) -> (roots, roots, graph, nodes, [])

  GnNext(get-node, out-edges, add-node) : 
    ([name | todo], done, graph, nodes, undef) ->
    (<conc> (todo', todo), <conc> (todo', done), 
     graph, <add-node> (name, node, nodes), undef)
    where <get-node> (name, graph) => node;
          <out-edges> node => names;
	  <diff> (names, done) => todo'

  GnNextChangeGraph(get-node, out-edges, add-node) : 
    ([name | todo], done, graph, nodes, undef) ->
    (<conc> (todo', todo), <conc> (todo', done), 
     graph', <add-node> (name, node, nodes), undef)
    where <get-node> (name, graph) => (node,graph');
          <out-edges> node => names;
	  <diff> (names, done) => todo'

  GnUndefined :
    ([name | todo], done, graph, nodes, undef) ->
    (todo, done, graph, nodes, [name | undef])

  GnExit : 
    ([], done, graph, nodes, undef) -> (nodes, undef)

strategies

  graph-nodes-undef-roots(get-node, out-edges, add-node) =
    for(GnInitRoots, GnExit, GnNext(get-node, out-edges, add-node)
                             <+ GnUndefined)

  graph-nodes-undef(get-node, out-edges, add-node) =
    for(GnInit, GnExit, GnNext(get-node, out-edges, add-node)
                        <+ GnUndefined)

  graph-nodes-undef-roots-chgr(get-node, out-edges, add-node) =
    for(GnInitRoots, GnExit, GnNextChangeGraph(get-node, out-edges, add-node)
                        <+ GnUndefined)

  graph-nodes-undef-chgr(get-node, out-edges, add-node) =
    for(GnInit, GnExit, GnNextChangeGraph(get-node, out-edges, add-node)
                        <+ GnUndefined)

  graph-nodes(get-node, out-edges, add-node) =
    graph-nodes-undef(get-node, out-edges, add-node);
    \ (nodes, undef) -> nodes \

  graph-nodes-roots(get-node, out-edges, add-node) =
    graph-nodes-undef-roots(get-node, out-edges, add-node);
    \ (nodes, undef) -> nodes \
\end{code}
