\literate[{\tt ASFIX}]
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

% $Id: Literal-lib.r,v 1.1.1.1 2001/05/30 15:18:59 mdejonge Exp $

\begin{code}
module Literal-lib
(*
	Author: Joost Visser (Joost.Visser@cwi.nl)

	This library module contains some auxiliary strategies
	for manipulating Literals.

	de-quote : QLiteral -> String
	  Removes outer quotes from a Literal.
	de-escape : String -> String
	  Undoes escaping of double quotes and backslashes.
	quote : String -> QLiteral
	  Places double quotes around a String
	escape : String -> String
	  Escapes all double quotes and backslashes in a String.

	isUQLiteral : String -> String
	  Tests whether a given string is an UQLiteral.

        uq2q : String -> String
          Tests whether a given string has quotes. Adds
	  quotes if they are not present.
*)

imports
  lib
  Char-lib

strategies
    
  de-quote
    = explode-string
    ; test(Hd;?34)       (* first char is double-quote *)
    ; Tl
    ; at-last(?[34];![]) (* last char is double-quote *)
    ; implode-string
    
  de-escape
    = explode-string
    ; De-Escape
    ; implode-string
  
rules
    
  De-Escape:    Cons(92,Cons(34,xs))    -> Cons(34,<De-Escape>xs)
  De-Escape:    Cons(92,Cons(92,xs))    -> Cons(92,<De-Escape>xs)
  De-Escape:    Cons(x,xs)              -> Cons(x,<De-Escape>xs)
  De-Escape:    Nil                     -> Nil
  
strategies
        
  quote
    = explode-string
    ; Quote
    ; implode-string
    
  escape
    = explode-string;
      map(Escape);
      concat;
      implode-string

rules

  Quote:
    chars       -> <concat>[[34],chars,[34]]

  Escape: (* double-quote *)
    34   -> [92,34]
  Escape: (* back-slash *)
    92   -> [92,92]
  Escape:
    char -> [char]

strategies

  is-UQLiteral
    = test( explode-string
          ; Cons(isLower,map(isAlphaNumHyphen))
          ; at-last([isAlphaNum])
          )

  uq2q
    = explode-string
    ; test(not(Hd;?34))         (* first char is NOT double-quote *)
    ; test(not(at-last(?[34]))) (* last char is NOT double-quote *)
    ; Quote
    ; implode-string
\end{code}
