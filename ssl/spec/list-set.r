\literate[list-set]

	\begin{abstract}

	Lists can be used to represent sets of terms.  Using the
	notion of sets we can define the collection of a set of
	subterms corresponding to some criterion.

	\end{abstract}

\begin{code}
module list-set
imports list-basic term

rules
 
  HdMember(mklst) : 
    [x | xs] -> xs where mklst; fetch(?x)

  HdMember'(eq, mklst) : 
     [x | xs] -> xs 
     where mklst; fetch(\y -> <eq> (x, y)\)

  // :: List(a) -> List(a)
  make-set =
    foldr(![], union, ![<id>])

\end{code}

	Union: Concatenation of two lists, only those elements in the
	first list are added that are not already in the second list.

\begin{code}
strategies

  // :: List(a) * List(a) -> List(a)
  union = union(eq)

  // a * a -> fail? :: List(a) * List(a) -> List(a)
  union(eq) : 
    (l1, l2) -> <rec x(
                   ([]; !l2)
                <+ (HdMember'(eq, !l2); x)
                <+ [id | x]
                )> l1

  // :: List(List(a)) -> List(a)
  unions = unions(eq)

  // a * a -> fail? :: List(List(a)) -> List(a)
  unions(eq) = foldr(![], union(eq))

\end{code}

	Diff: Difference of two lists

\begin{code}
rules

  // :: List(a) * List(a) -> List(a)
  diff = diff(eq) 

  // a * a -> fail? :: List(a) * List(a) -> List(a)
  diff(eq) :
    (l1, l2) -> <rec x(
                   []
                <+ (HdMember'(eq, !l2); x)
                <+ [id | x]
                )> l1

  diff'(eq) = 
      obsolete(!"diff'/1; use diff/1")
    ; diff(eq)

  // :: List(a) * List(a) -> List(a)
  sym-diff = sym-diff(eq)

  // a * a -> fail? :: List(a) * List(a) -> List(a)
  sym-diff(eq) =
    <union> (<diff(eq)>, <Swap; diff(eq)>)

\end{code}

	Intersection: Concatenation of two lists, only those elements in the
	first list are added that are also in the second list.

\begin{code}
strategies

  // :: List(a) * List(a) -> List(a)
  isect = isect(eq)

  // a * a -> fail? :: List(a) * List(a) -> List(a)
  isect(eq) : 
    (l1, l2) -> <rec x(
                   [] 
                <+ ( where(HdMember'(eq, !l2)); [id | x] )
                <+ ?[_ | <x>]
                )> l1

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

  crush(nul, sum) : 
    _#(xs) -> <foldr(nul,sum)> xs

  crush(nul, sum, s) : 
    _#(xs) -> <foldr(nul,sum, s)> xs

strategies

  foldr-kids(nul,sum) =
    obsolete(!"foldr-kids/2; use crush/2");
    crush(nul, sum)

  foldr-kids(nul,sum,s) =
    obsolete(!"foldr-kids/3; use crush/3");
    crush(nul, sum, s)

  node-size =
    crush(!0, add, !1)

  term-size =
    crush(!1, add, term-size)

strategies

  collect-kids(s) = 
    obsolete(!"collect-kids(s); use crush(![],union,s)");
    crush(![],union,s)

  // collect all subtrees for which s succeeds

  collect-all(s) =
    rec x(![<s> | <crush(![],union,x)>]
          <+ crush(![],union,x))

  // collect with user-defined union operator

  collect-all(s,un) =
    rec x(![<s> | <crush(![],un,x)>]
          <+ crush(![],un,x))

/* bug in Let?
  postorder-collect-new(s) =
  let f(acc) =
        where(![<s> | <acc>] <+ acc => acc');
        crush(!acc', \ (x, xs) -> <f(!xs)> x \ )
   in f(![])
*/

  postorder-collect(s) =
    postorder-collect(s, ![])

  postorder-collect(s, acc) =
    where((![<s> | <acc>] <+ acc) => ys);
    crush(!ys, \ (x, xs) -> <postorder-collect(s, !xs)> x \ )

  collect-om(s) =
    rec x(![<s>] 
          <+ crush(![],union,x))

  collect(s) = 
    collect-om(s)

  collect-set(s) =
    rec x(![<s>] 
          <+ crush(![],conc,x))

  collect(s, skip: a * (a -> a) * (a -> a) -> a) =
    rec x(![<s>]
          <+ skip(x,![]); crush(![],union,id)
          <+ crush(![],union,x))

  collect-exc(base, special : a * (a -> b) -> b) = 
    rec coll(
      (base 
      <+ special(coll))
      <+ crush(![], union, coll)
    )

  bu-collect(s) =
    rec x(some(x); crush(![],union,[s|id] <+ ![])
          <+ ![<s>] )
    <+ ![]

  collect-split(splitter) = 
    rec x(CollectSplit(x, splitter <+ !(<id>,[])))

  collect-split'(splitter) = 
    rec x((is-string + is-int); splitter
          <+ CollectSplit(x, splitter))

  collect-split(f, g) = 
    rec x(CollectSplit(x, !(<try(f)>, <g <+ ![]>)))

rules

  CollectSplit(s, splitter) :
    c#(as) -> (t, <union> (ys, <unions> xs))
    where <unzip(s)> as => (bs, xs);
          <splitter> c#(bs) => (t, ys)

  CollectSplit(s, f, g) = 
    CollectSplit(s, !(<try(f)>, <g <+ ![]>))
\end{code}

	\paragraph{Occurence Counting}

\begin{code}
strategies

  nrofoccs(s) = 
    obsolete(!"nrofoccs/1; use occurrences/1");
    occurrences(s)

  om-occurrences(s) = 
    s; !1 <+ crush(!0, add, occurrences(s))

  occurrences(s) = 
    split(s; !1 <+ !0, crush(!0, add, occurrences(s))); add

  twicetd(s) = oncetd(explode-term; 
                      (id, at-suffix(Cons(oncetd(s), oncetd(s))));
                      mkterm)

  atmostonce(s) = not(twicetd(s))

  atmostonce'(s) = {n : nrofoccs(s) => n; <leq> (n, 1)}
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
