\literate[LList]

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

\begin{code}
module LList
imports lib apply
  signature
    constructors
      LCons : a * Layout * LList(a) -> LList(a)
    overlays
      LCons(hd,tl) = LCons(hd,_ UL,tl)
      lsingle(s) = LCons(s,_ UL,Nil)

rules

  ll2singleton: LCons(x,_,[]) -> [x] 

  lRev     : (LCons(x,xs), ys) -> (xs, LCons(x,ys))

strategies
 
  layuniq = layuniq(id)
  layuniq(s) =   
          ?(x,xs)
        ; !xs
        ; lfilter(where(split(id,!x);not(layeq;s)))

  lunzip(s) = rec r( {a,b,as,bs:
                       \LCons(x,l,xs)
                     ->
                       (LCons(a,l,as),LCons(b,l,bs))   
                       where <s>x => (a,b)
                           ; <r>xs => (as,bs)\}
                   + \Nil -> (Nil,Nil)\) 
  
  lzip(s) = rec r( \(LCons(a,l,as),LCons(b,l,bs))   
                     ->
                   LCons(<s>(a,b),l,<r>(as,bs))\
                 + \(Nil,Nil) -> Nil\) 
  
  extract-common-head =
          rec r(  \([],g) -> ([],g,[])\
               <+ \(f,[]) -> (f,[],[])\
               <+ {fs',gs',hs:
                  \(LCons(h,fs),LCons(h,gs)) -> (fs',gs',LCons(h,hs))
                   where <r>(fs,gs) => (fs',gs',hs)\}
               <+ \(fs,gs) -> (fs,gs,[])\
               )  

  extract-common-heads =
          rec r(\a -> (a,[]) where <lfetch([])>a\
               <+ {x:LCons(LCons(?x,id),id)
		  ;  lmap(\LCons(y,xs) -> xs
                           where <layeq>(x,y)\)
                  ;  r
                  ;  \(xs',x's) -> (xs',LCons(x,x's))\}
               <+ \xs -> (xs,[])\
               )  
    
  extract-common =
          extract-common-head
        ; \(a,b,c) -> (<lreverse>a,<lreverse>b) where !c => hd\
        ; extract-common-head
        ; \(a,b,c) -> (<lreverse>a,<lreverse>b,hd,<lreverse>c)\

  extract-commons =
          extract-common-heads
        ; \(a,b) -> <lmap(lreverse)>a where !b => hd\
        ; extract-common-heads
        ; \(a,b) -> (<lmap(lreverse)>a,hd,<lreverse>b)\
 
  lreverse = RevInit; repeat(lRev); RevExit

  set-last-layout(s) = rec r(LCons(id,s,[]) <+ LCons(id,r))

  lmap(s) = rec r(LCons(s,r) + Nil) 
  lmap''(s) = rec r(Nil <+ apply(s,LCons(id,r)))
  lmap'(s) = rec r(
   {x',l': \ LCons(x,l,xs) -> LCons(x',l',<r>xs) 
        where <s>(x,l) => (x',l') \}
    + Nil) 

  lthread-map(s) = rec x((LCons^T(s,id,x) + Nil^T))

  lfilter(s) = rec x([] + (LCons(s,x) <+ lTl;x))

  // filters at least one element
  lfilter-many(s) = rec r(LCons(s,r) <+ LCons(not(s),lfilter(s)=>f);!f)

  lfetch(s) = rec x(LCons(s,id) <+ LCons(id,x))

  llength = rec x([]; !0 + lTl; x; \n -> <add> (n, 1)\ )
  
(* LList(List(a)) -> List(a) *)
  lconcat = rec x([] + \ LCons(l,ls) -> <at-end(<x>ls)>l \ )

(* List(LList(a)) -> LList(a) *)
  lconcat' = rec x([] + \ [l|ls] -> <at-l-end(<x>ls)>l \ )
  at-l-end(s) = rec x(LCons(id,x) + [];s)
  at-l-last(s) = rec x(LCons(s,[]) <+ LCons(id,x))

(* LList(LList(a)) -> LList(a) *)
  lconcat'' = rec x([] + \LCons(l,l1,ls) -> <at-l-end'(<x>ls)>(l,l1)\)
 
  at-l-end'(s) = ?(l,l1);!l;rec x(   LCons(id, 
                                           \ l2 -> <layconc>(l2,l1) \,
	                                   ?[];s) 
                                  <+ LCons(id,x) 
//                                  <+ (?[];s=>ls;!LCons(ls,l1,[]))
)

  ConstoLCons = rec x([]+\[l|ls]->LCons(l,<x>ls)\)
  LConstoCons = rec x([]+\LCons(y,ys)->[y|<x>ys]\)

  lLast = rec r(\LCons(x,Nil) -> x\ + \LCons(_,xs) -> <r>xs\)
  lInit = rec r(\LCons(x,Nil) -> Nil\ + LCons(id,r))
 
rules

  lTl: LCons(x,xs) -> xs
  lHd: LCons(x,xs) -> x

  lconc: (l1,l2) -> <at-l-end(!l2)> l1
\end{code}
