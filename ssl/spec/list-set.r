\literate[list-set]

	\begin{abstract}

	Lists can be used to represent sets of terms.  Using the
	notion of sets we can define the collection of a set of
	subterms corresponding to some criterion.

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
module list-set
imports list-basic term

rules
 
  HdMember(mklst) : Cons(x, xs) -> xs where mklst; fetch(?x)

  HdMember'(eq, mklst) : 
     Cons(x, xs) -> xs 
     where mklst; fetch(\y -> <eq> (x, y)\)
\end{code}

	Union: Concatenation of two lists, only those elements in the
	first list are added that are not already in the second list.

\begin{code}
rules

  union : (l1, l2) -> 
	  <rec x([]; !l2 <+ HdMember(!l2); x <+ [id | x])> l1
\end{code}

\begin{code}
strategies

  unions = foldr(![], union)

\end{code}

	Diff: Difference of two lists

\begin{code}
rules

  diff : (l1, l2) ->
   	 <rec x([] <+ HdMember(!l2); x <+ [id | x])> l1 
\end{code}

\begin{code}
rules

  diff'(eq) :
  	(l1, l2) -> 
   	<rec x([] <+ HdMember'(eq, !l2); x <+ [id | x])> l1

strategies

  diff(eq) = diff'(eq)
\end{code}

	Intersection is defined in terms of difference.

\begin{code}
rules

  isect : (l1, l2) -> <diff> (l1, <diff> (l1, l2))

\end{code}

	\paragraph{Collection}

	Strategy \verb|collect(s)| produces a collection of all
	\emph{outermost} subterms for which \verb|s| succeeds.

	Strategy \verb|collect-split(f, g)| reduces terms with
	\verb|f| and extracts information with \verb|g| resulting in a
	pair \verb|(t, xs)| of a reduced term and the list of
	extracted subterms.

\begin{code}
imports tuple

rules

  crush(nul, sum) : _#(xs) -> <foldr(nul,sum)> xs

  crush(nul, sum, s) : _#(xs) -> <foldr(nul,sum, s)> xs

strategies

  foldr-kids(nul,sum) =
    obsolete(!"foldr-kids/2; use crush/2");
    crush(nul, sum)

  foldr-kids(nul,sum,s) =
    obsolete(!"foldr-kids/3; use crush/3");
    crush(nul, sum, s)

strategies

  collect-kids(s) = crush(![],union,s)

  collect(s) =
    rec x(s; \y -> [y]\ 
          <+ crush(![],union,x))

  collect-set(s) =
    rec x(s; \y -> [y]\
          <+ crush(![],conc,x))

  collect(s, skip) =
    rec x(s; \y -> [y]\
          <+ skip(x,![]); collect-kids(id)
          <+ collect-kids(x))

  bu-collect(s) =
    rec x(some(x); collect-kids([s|id] <+ ![])
          <+ s; \y -> [y]\ )
    <+ ![]

  collect-split(splitter) = 
    rec x((is-string + is-int); splitter
          <+ CollectSplit(x, splitter))

  collect-split(f, g) = 
    collect-split(split(try(f), g <+ ![]))

rules

  CollectSplit(s, splitter) :
    c#(as) -> (t, <union> (ys, <unions> xs))
    where <list(s); unzip> as => (bs, xs);
          <splitter> c#(bs) => (t, ys)

  CollectSplit(s, f, g) = 
    CollectSplit(s, split(try(f), g <+ ![]))
\end{code}

	\paragraph{Occurence Counting}

\begin{code}
strategies

  nrofoccs(s) = rec count(s; !1 <+ crush(!0,add,count))

  twicetd(s) = oncetd(explode-term; 
                      (id, at-suffix(Cons(oncetd(s), oncetd(s))));
                      mkterm)

  atmostonce(s) = not(twicetd(s))

  atmostonce'(s) = {n : nrofoccs(s) => n; <leq> (n, 1)}
\end{code}
	
