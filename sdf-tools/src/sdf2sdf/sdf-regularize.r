// SDF Tools
// Copyright (C) 2001 Merijn de Jonge <mdejonge@cwi.nl>
//                    Eelco Visser <visser@acm.org>
//                    Joost Visser <jvisser@cwi.nl>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2, or (at your option)
// any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
// 02111-1307, USA.

// Author: Eelco Visser

\literate[sdf-regularize]

	\begin{absract}
	Recognize groups of productions that can be expressed by means of
	a regular expression. Assumptions: (1) all productions for a sort are
	in one context-free syntax section (2) all productions are available.
	Sorts representing regular expressions are replaced by these expressions
	to improve the abstract syntax of the language (no superfluous injections).
	\end{abstract}

\begin{code}
module sdf-regularize
imports lib Sdf-Syntax dynamic-rules termid

strategies

  sdf-regularize =
    io-idwrap(InOutId("\"sdf-2.1\"", !"\"sdf-2.1\""), regularize)

  regularize = 
    alltd(context-free-syntax(order-productions));          
    alltd(RegularizeList <+ RegularizeOptional);
    inline-lists-and-optionals

strategies

  order-productions = 
    sort-list(SortL(ProdGT))

  ProdGT =
    ?(prod(as, a, _), prod(as', a, _));
    where(<gt>(<length> as, <length>as'))

  ProdGT =
    ?(prod(as, a, _), prod(bs, b, _));
    where(<not(eq); string-gt>(a, b))

rules

  // Lists

  RegularizeList : // a* -> b
     [prod([],   b,no-attrs),
      prod([b,a],b,no-attrs)]
  -> [prod([iter-star(a)],b,no-attrs)]

  RegularizeList : // a* -> b
    [prod([],   b,no-attrs),
     prod([a,b],b,no-attrs)]
  ->
    [prod([iter-star(a)],b,no-attrs)]

  RegularizeList : // a* -> b
    [prod([],   b,no-attrs),
     prod([a],  b,no-attrs),
     prod([b,a],b,no-attrs)]
  ->
    [prod([iter-star(a)],b,no-attrs)]

  RegularizeList : // a+ -> b
    [prod([a],  b,no-attrs),
     prod([b,a],b,no-attrs)]
  ->
    [prod([iter(a)],b,no-attrs)]

  RegularizeList : // (a|c)* -> b
    [prod([],   b,no-attrs),
     prod([b,a],b,no-attrs),
     prod([b,c],b,no-attrs)]
  ->
    [prod([iter-star(alt(a,c))],b,no-attrs)]

  // Lists of seqences

  RegularizeList : // (a as)* -> b
    [prod([],          b,no-attrs),
     prod([b, a | as], b,no-attrs)]
  -> 
    [prod([iter-star(seq(a, as))],b,no-attrs)]
    where <not([])> as

  // Lists with separators

  RegularizeList : // {A B}+
    [prod([],       b,no-attrs),
     prod([a],      b,no-attrs),
     prod([a,sep,b],b,no-attrs)]
  ->
    [prod([iter-star-sep(a, sep)],b,no-attrs)]

  RegularizeList : // {A B}*
    [prod([a],      b,no-attrs),
     prod([a,sep,b],b,no-attrs)]
  ->
    [prod([iter-sep(a, sep)],b,no-attrs)]

  RegularizeList : // {A B}*
    [prod([a],      b,no-attrs),
     prod([b,sep,a],b,no-attrs)]
  ->
    [prod([iter-sep(a, sep)],b,no-attrs)]

  // Optionals

  RegularizeOptional : // a?
    [prod([], b,no-attrs),
     prod([a],b,no-attrs)]
  -> 
    [prod([opt(a)],b,no-attrs)]

  RegularizeOptional : // (a1 a2 ..)?
    [prod([],           b,no-attrs),
     prod([a1, a2 | as],b,no-attrs)]
  -> 
    [prod([opt(seq(a1, [a2 | as]))],b,no-attrs)]

strategies

  inline-lists-and-optionals =
    alltd(find-inlineables);
    alltd(prod(alltd(ReplaceSymbol),id,id))

  find-inlineables : 
    context-free-syntax([prod([a],b,no-attrs)]) -> context-free-syntax([])
    where <inlineable> a
        ; rules(ReplaceSymbol : b -> a)

  find-inlineables : 
    context-free-syntax([prod([opt(seq(a,as))],b,no-attrs)]) -> 
    context-free-syntax([prod([a | as],b,no-attrs)])
    where rules(ReplaceSymbol : b -> opt(b))

  inlineable = 
    opt(not(seq(id,id))) + iter(id) + iter-star(id) + iter-sep(id,id) + iter-star-sep(id,id)
\end{code}
