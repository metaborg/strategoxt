\literate[{\tt TEXT}]
% GT -- Grammar Tools
% Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
%                    Eelco Visser <visser@acm.org>
%                    Joost Visser <jvisser@cwi.nl>
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

% $Id: text.r,v 1.1 2001/05/31 14:20:51 mdejonge Exp $


	In this module we define a simple algebra of texts. Texts
	are composed of a vertical composition of lines, which are
	lists of integers representing the (ASCII) code of characters.

\begin{code}
module text
imports lib
signature
  sorts Text
  constructors
    Cs : List(Int)   -> Line
    L  : Line        -> Text
    V  : Text * Text -> Text
    E  : Text
rules

  PP-V  : V(V(x, y), z) -> V(x, V(y, z))
 
  PP-V  : V(E, x) -> x
  PP-V  : V(x, E) -> x

  MkV : (x, y) -> V(x, y)
\end{code}

	Simple operations on texts

	\verb|Wd(i)| creates blank text with width \verb|i|


\begin{code}
signature
  constructors
    Wd  : Int         -> Line
    Lwd : Line        -> Line
    LC  : Line * Line -> Line
    LP  : Line * Text -> Text
    LI  : Line * Text -> Text
\end{code}

\begin{code}
rules

  PP-Wd : Wd(i) -> Cs(xs)
          where <upto; map(!32)> i => xs

  PP-LP : LP(x, E) -> E

  PP-LP : LP(x, L(y)) -> L(LC(x, y))

  PP-LP : LP(x, V(y, z)) -> V(LP(x, y), LP(x, z))

  PP-LI : LI(x, E) -> L(x)

  PP-LI : LI(x, L(y)) -> L(LC(x, y))

  PP-LI : LI(x, V(L(y), z)) -> 
          V(L(LC(x, y)), LP(Lwd(x), z))

  PP-Lw : Lwd(Cs(xs)) -> Cs(<map(!32)> xs)

  PP-LC : LC(Cs(xs), Cs(ys)) -> Cs(<conc> (xs, ys))

  PP-LC : LC(L(x), y) -> LC(x, y)
	
	(* NOTE: this should not be necessary *)
\end{code}

	Rules for operators: strings, horizontal composition and
	indentation

\begin{code}
signature
  constructors
    S  : String      -> Text
    H  : Text * Text -> Text
    I  : Text        -> Text
rules

  PP-S : S(s) -> L(Cs(<explode-string> s))

  PP-S' : L(Cs(cs)) -> S(<implode-string> cs)

  PP-I : I(x) -> LP(Wd(2), x)

  PP-H : H(L(x), y) -> LI(x, y)

  PP-H : H(V(x, y), z) -> V(x, H(y, z))

  PP-H : H(E, x) -> x

  PP-H : H(x, E) -> x
\end{code}

\begin{code}
signature
  constructors
    Hs : List(Text) -> Text
    Vs : List(Text) -> Text
rules

  PP-Hs : Hs([]) -> E
  
  PP-Hs : Hs(Cons(x, y)) -> H(x, Hs(y))

  PP-Vs : Vs([]) -> E
  
  PP-Vs : Vs(Cons(x, y)) -> V(x, Vs(y))
\end{code}

\begin{code}
strategies
 
  normalize-text = 
	pseudo-innermost3(
		PP-V + PP-LP + PP-LI + PP-S + PP-I + PP-H + 
                PP-Lw + PP-LC + PP-Wd + PP-Hs + PP-Vs)

  text-nf = rec txt(V(txt, txt) + 
                    rec ln(H(ln, ln) + L(Cs(id)) + Wd(id)))

  text-nf = rec txt(V(L(Cs(id)), txt) + L(Cs(id)))
\end{code}
