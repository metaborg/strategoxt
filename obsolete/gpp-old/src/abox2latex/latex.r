\literate[latex]
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

% $Id: latex.r,v 1.3 2002/06/05 22:03:26 mdejonge Exp $

% Author: Merijn de Jonge (mdjonge@cwi.nl)

\begin{code}
module latex

imports lib misc

signature
constructors

   BOXENV   : Width    * Boxes                 -> BOXENV
   HBOX     : HS       * Boxes                 -> Hbox
   VBOX     : VS       * IS    * Boxes         -> Vbox
   HVBOX    : HS       * VS    * IS    * Boxes -> HVbox
   ABOX     : TableDef * Boxes                 ->  Abox
   ALTBOX   : Box1     * Box2                  -> ALTBOX
   CBOX     : Boxes                            -> Cbox
   LBOX     : Fmt      * Box                   -> LBOX
   LBLBOX   : String   * Box                   -> LBLBOX
   REFBOX   : String   * Box                   -> REFBOX
   C        : Alignment
   R        : Alignment
   L        : Alignment
   EOR      : Endofrow
   CSEP     : Colsep
   BOXFONT  : Font * Box -> BoxFont
   BOXCOLOR : Color -> Bpxfont


strategies
latex2text =
   bottomup(try(Latex2text ) )

Latex2text =
      ?BOXENV( [], boxes );
      !["\\begin{boxenv}%\n", boxes , "%\n\\end{boxenv}\n"]
   <+
      ?BOXENV( [width], boxes );
      !["\\begin{boxenv}{", width, "}%\n", boxes , "%\n\\end{boxenv}\n"]
   <+
      ?HBOX( hs, boxes );
      !["\\begin{HBOX}{", hs, "}%\n", boxes, "%\n\\end{HBOX}%\n"]
   <+
      ?VBOX( vs, is, boxes );
      !["\\begin{VBOX}{", vs, "}{", is, "}%\n", boxes, "%\n\\end{VBOX}%\n"]
   <+
      ?HVBOX( hs, vs, is, boxes );
      !["\\begin{HVBOX}{", hs, "}{", vs, "}{", is, "}%\n", boxes,
        "%\n\\end{HVBOX}%\n"]
   <+
      ?ABOX( tdef, boxes );
      !["\\begin{ABOX}{", tdef, "}%\n", boxes, "\\crcr%\n\\end{ABOX}%\n"]
   <+
      ?ALTBOX( b1, b2 );
      !["\\begin{ALTBOX}{%\n", b1, "%\n}", b2, "%\n}%\n\\end{ALTBOX}%\n"]
   <+
      ?CBOX( b );
      !["%\n\\begin{latextext}%\n", b, "%\n\\end{latextext}%\n"]
   <+
      ?LBOX( s, b );
      <is-int>s;
      !["\\\ncopies{", <int-to-string>s, "}{", b, "}%"]
   <+
      ?LBOX("=", b );
      !["\\begin{LBOX}{=}%\n", b, "%\n\\end{LBOX}%\n"]
   <+
      ?LBOX( s, b );
      !["\\begin{LBOX}{", s, "}%\n", b, "%\n\\end{LBOX}%\n"]
   <+ 
      ?LBLBOX( l, b );
      !["\\boxlabel{", l, "}", b]
   <+
      ?REFBOX( l, b );
      !["\\boxref{", l, "}{", b, "}" ]
   <+
      ?BOXFONT(KW, b );
      !["\\KWf{", b, "}"]
   <+
      ?BOXFONT(VAR, b );
      !["\\VARf{", b, "}"]
   <+
      ?BOXFONT(NUM, b );
      !["\\NUMf{", b, "}"]
   <+
      ?BOXFONT(MATH, b );
      !["\\MATHf{", b, "}"]
   <+
      ?BOXFONT("sf", b );!["\\textsf{", b, "}"]
   <+
      ?BOXFONT("rm", b );!["\\textrm{", b, "}"]
   <+
      ?BOXFONT("tt", b );!["\\texttt{", b, "}"]
   <+
      ?BOXFONT("md", b );!["\\textmd{", b, "}"]
   <+
      ?BOXFONT("bf", b );!["\\textbf{", b, "}"]
   <+
      ?BOXFONT("up", b );!["\\textup{", b, "}"]
   <+
      ?BOXFONT("it", b );!["\\textit{", b, "}"]
   <+
      ?BOXFONT("sc", b );!["\\textsc{", b, "}"]
   <+
      ?BOXFONT("sl", b );!["\\textsl{", b, "}"]
   <+
      ?BOXFONT("em", b );!["\\emph{", b, "}"]
   <+
      ?BOXFONT("tiny", b );!["\\tiny{", b, "}"]
   <+
      ?BOXFONT("scriptsize", b );!["\\scriptsize{", b, "}"]
   <+
      ?BOXFONT("footnotesize", b );!["\\footnotesize{", b, "}"]
   <+
      ?BOXFONT("small", b );!["\\small{", b, "}"]
   <+
      ?BOXFONT("normalsize", b );!["\\normalsize{", b, "}"]
   <+
      ?BOXFONT("large", b );!["\\large{", b, "}"]
   <+
      ?BOXFONT("Large", b );!["\\Large{", b, "}"]
   <+
      ?BOXFONT("LARGE", b );!["\\LARGE{", b, "}"]
   <+
      ?BOXFONT("huge", b );!["\\huge{", b, "}"]
   <+
      ?BOXFONT("Huge", b );!["\\Huge{", b, "}"]
   <+
      ?BOXFONT(BOXCOLOR(c),b); !["\\textcolor{", c, "}{", b, "}"]
   <+
      C;
      !"\\hfill#\\hfill"
   <+
      R;
      !"\\hfill#"
   <+
      L;
      !"#\\hfill"
   <+
      EOR;
      !"\\cr"
   <+
      CSEP;
      !"&"

latex-string =
   (
      ?s;
      <table-get>("latex-abbrevs", s )
   <+
   
   explode-string;
   listtd( try( replace-quotes ) );
   map(try(
      \32 -> <explode-string>"\\boxspace{}" \ (* space *)
   +
      \35 -> <explode-string>"\\#" \ (* # *)
   +
      \36 -> <explode-string>"\\$" \ (* $ *)
   +
      \37 -> <explode-string>"\\%" \ (* % *)
   +
      \38 -> <explode-string>"\\&" \ (* & *)
   +
      \45 -> <explode-string>"\\mbox{-}" \ (* - *)
   +
      \60 -> <explode-string>"\\ensuremath{<}" \ (* < *)
   +
      \62 -> <explode-string>"\\ensuremath{>}" \ (* > *)
   +
      \92 -> <explode-string>"\\ensuremath{\\backslash}" \ (* \ *)
   +
      \94 -> <explode-string>"\\^{}" \ (* ^ *)
   +
      \95 -> <explode-string>"\\_" \ (* _ *)
   +
      \123 -> <explode-string>"\\{" \ (* { *)
   +
      \124 -> <explode-string>"\\ensuremath{\\vert}" \ (* | *)
   +
      \125 -> <explode-string>"\\}" \ (* } *)
   +
      \126 -> <explode-string>"\\~{}" \ (* ~ *)
   ));
   flat-list;
   implode-string
)
// replaces "abcd\"efg\"hij" to "abcd``efg''hij"
replace-quotes =
   [34|?xs]; 
   ![96,96| <at-suffix( \ [34| xs'] -> [39,39|xs'] \ ) >xs]

//
load-tables =
   where( <table-create>"latex-abbrevs" );
   reverse;
   map( ReadFromFile; StoreEntries )

StoreEntries =
   map(
     \ [s, s'] -> <table-put>("latex-abbrevs", s, s') \
      )
\end{code}
