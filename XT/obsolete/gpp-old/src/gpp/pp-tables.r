\literate[pp-tables]
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

% $Id: pp-tables.r,v 1.1.1.1 2001/06/05 09:11:48 mdejonge Exp $

% Author: Merijn de Jonge (mdjonge@cwi.nl)

\begin{code}
module pp-tables
  signature
    constructors
      SOpt : SPACE-SYMBOL * NatCon -> S-OPTION
      SOptB : SPACE-SYMBOL * BOX -> S-OPTION
      VS : SPACE-SYMBOL
      HS : SPACE-SYMBOL
      IS : SPACE-SYMBOL

      H : S-OPTIONS * BOX-LIST -> BOX
      V : S-OPTIONS * BOX-LIST -> BOX
      HV : S-OPTIONS * BOX-LIST -> BOX

      ALT : BOX * BOX -> BOX

      A : A-OPTIONS * S-OPTIONS * BOX-LIST -> BOX
      R : S-OPTIONS * BOX-LIST -> BOX
      AL : S-OPTIONS -> A-OPTION
      AC : S-OPTIONS -> A-OPTION
      AR : S-OPTIONS -> A-OPTION
      AOPTIONS : List(A-OPTION) -> A-OPTIONS

      FNAT : FONT-PARAM * NatCon -> F-OPTION
      FFID : FONT-PARAM * FID -> F-OPTION
      F : F-OPTIONS -> FONT-OPERATOR
      FBOX : FONT-OPERATOR * BOX -> BOX
      FN : FONT-PARAM
      FM : FONT-PARAM
      SE : FONT-PARAM
      SH : FONT-PARAM
      SZ : FONT-PARAM
      CL : FONT-PARAM

      KW : FONT-OPERATOR
      VAR : FONT-OPERATOR
      NUM : FONT-OPERATOR
      MATH : FONT-OPERATOR

      LBL : BoxLiteral * BOX -> BOX
      REF : BoxLiteral * BOX -> BOX

      C : S-OPTIONS * BOX-LIST -> BOX

      L : BOX * BOX -> BOX
      LNAT : NatCon * BOX -> BOX

      S : BoxLiteral -> BOX

      Arg : NatCon -> BOX
      Arg2 : NatCon * NatCon -> BOX

      PP-Table : List(PP-Entry) -> PP-Table
      selector : NatCon * UQLiteral -> Selector
      Path1 : UQLiteral -> Path
      Path : UQLiteral * List(Selector) -> Path
      PP-Entry : Path * BOX-LIST -> PP-Entry

\end{code}
