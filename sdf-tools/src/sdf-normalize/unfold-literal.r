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


\literate[unfold-literal]

	\begin{abstract}
	Replace sorts that represent a literal, i.e., are defined by a 
	single production of the form \verb|"ccc" -> s|, by that
	literal.
	\end{abstract}

\begin{code}
module unfold-literal
imports Sdf-Syntax lib sdf-bracket asfix dynamic-rules termid
strategies

  unfold-literal = 
    iowrap(InId("\"sdf-2.1\""), UnfoldLiterals; SdfBracket)

  UnfoldLiterals =
    alltd(RemoveLiteralDef);
    alltd(ReplaceLiteral)

  RemoveLiteralDef :
    [prod([lit(l)],sort(s),attrs) | ps] -> ps
    where <not(oncetd(reject))> attrs
        ; rules( ReplaceLiteral : sort(s) -> lit(l) )
\end{code}
