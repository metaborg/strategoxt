\literate
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

% $Id: flatten-lex.r,v 1.1.1.1 2001/05/30 15:19:02 mdejonge Exp $

\begin{code}
module flatten-lex
(*
	Author: Joost Visser (Joost.Visser@cwi.nl)

	Usage:
	  flatten-lex -i <AsFix> -o <AsFix>

	  Replaces all subtrees below context-free occurences
	  of lexical terms by a "flatlex" node containing
	  the yield of that subtree.
*)

imports
  lib
  AsFix2-Syntax

strategies

  main
    = iowrap(flatten-lex)

strategies

  implode-lexical
    = is-LEX-CF-injection
    ; yield
    ; insert-flatlex

  flatten-lex
    = sometd(implode-lexical)

rules

  Kids  : appl(p, ts) -> <concat> ts
  Kids' : x -> [x]

strategies

  is-LEX-CF-injection
    = appl(prod([lex(id)],cf(id),id), id)

  yield
     = rec x( (appl(id, map(x)); Kids) 
           <+ Kids'
           )
     ; implode-string

rules

  insert-flatlex:
    str -> flatlex(str)

\end{code}
