\literate[LayoutPreserve]

	\begin{abstract}
	Representation of layout information
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
module LayoutPreserve
imports LList
  signature
    constructors
      NL :           Layout
      L  : String -> Layout
      UL :           Layout
      US :           Layout
      Label: String * s -> Label
      Bracket: String * Layout * s * Layout * String -> Bracket
      amb: Amb(a) * Amb(a) -> Diff(a) 
      amb1: a -> Amb(a)
      amb2: a -> Amb(a)

    overlays
      Bracket(s) = Bracket(_ "(",_ UL,s,_ UL,_ ")")

rules

  layconc: (NL,NL)       -> NL
  layconc: (l@L(_),NL)   -> l
  layconc: (NL,l@L(_))   -> l
  layconc: (L(l1),L(l2)) -> L(<concat-strings>[l1,l2])

  layconc: (UL,NL)       -> UL
  layconc: (NL,UL)       -> UL
  layconc: (UL,UL)       -> UL

// is this the behaviour we want??
  layconc: (l@L(_),UL)   -> l
  layconc: (UL,l@L(_))   -> l

strategies

  ensure-bracket = Bracket(id) <+ \t -> Bracket(t)\

  layeq = layeq(fail,fail)
  layeq(s) = layeq(s,fail)
  layeq(s,l) = rec r({f,g,fs,gs,a:
	   eq
	<+ (is-layout,is-layout)
        <+ \a@(f#(fs),f#(gs)) -> a where 
		<eq>(<length>fs,<length>gs);<zip(r)>(fs,gs)\
	<+ l;\(Label(_,f),g) -> <r>(f,g)\
	<+ l;\(f,Label(_,g)) -> <r>(f,g)\
        <+ s
        })

  laydiff(s) = laydiff(s,fail)
  laydiff(s,l) = rec r({f,g,fs,gs,a,b:
	   eq;Fst
	<+ (is-layout,is-layout);Fst
        <+ \(f#(fs),f#(gs)) -> f#(a) where 
		<eq>(<length>fs,<length>gs);<zip(r)>(fs,gs) => a\
	<+ l;\(Label(_,f),g) -> <r>(f,g)\
	<+ l;\(f,Label(_,g)) -> <r>(f,g)\
        <+ \(a,b) -> amb(amb1(a),amb2(b)) where s\
        <+ \(a,b) -> amb(a,b)\
        })

  laydiff-squash(s) = laydiff-squash(s,fail)
  laydiff-squash(s,l) = rec r({f,g,fs,gs,a,hs,b,fhs:
	  try((LConstoCons,LConstoCons))
	;
	(  eq;Fst;try(not([]);!"..")
	<+ (is-layout,is-layout);!".."
        <+ \(f#(fs),f#(gs)) -> fhs where 
		  <eq>(<length>fs,<length>gs)
		; <zip(r)>(fs,gs)
		; (   <eq>(f,"Cons")		// wrong!
		    ; [id]
		   <+ foldr (id,
  			{xs:(is-diff,[is-diff|?xs])
				  ; ![".."|xs]}
			   <+ \(a,[]) -> a where <is-list>a\
			   <+ \(a,b) -> [a|b]\
			)) => hs
		; (   <eq>(f,"Cons")
		    ; <Cons(id,try(not(is-list);\a -> [a]\))>hs
		  <+  [is-diff]
		    ; !".."
		  <+ !f#(hs)) => fhs\
	<+ l;\(Label(_,f),g) -> <r>(f,g)\
	<+ l;\(f,Label(_,g)) -> <r>(f,g)\
        <+ \(a,b) -> amb(amb1(a),amb2(b)) where s\
        <+ \(a,b) -> amb(a,b)\
        )})

  is-diff = ?".."
  is-layout = NL + UL + L(id)

\end{code}

