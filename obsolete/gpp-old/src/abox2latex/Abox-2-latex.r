\literate[Abox-2-latex]
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

% $Id: Abox-2-latex.r,v 1.3 2002/05/19 14:07:50 mdejonge Exp $

% Author: Merijn de Jonge (mdjonge@cwi.nl)

\begin{code}
module Abox-2-latex

imports pp-tables latex lib Literal-lib

signature
constructors
   LatexTable : String -> Option
   Width :      String -> option
strategies
Abox-2-latex = parse-options(  io-options 
                     + ArgOption("-t",       \x -> LatexTable(x) \ )
                     + ArgOption("-w",       \x -> Width(x) \ ) ) => options;
       (
          need-help( usage )
       <+
          where(option-defined(?Output(outfile);<open-file>outfile) <+ !stdout => outfile);
          where( collect( \LatexTable(x) -> x \); load-tables);

          input-file; Snd;
          (
             where(!options;option-defined(?Width(w)));
             abox2latex(!w)
          <+
             abox2latex
          );
          topdown( try(is-string;
                   where(split(!outfile, \x -> [x] \);print )));
          report-success
       <+
          report-failure
       )

usage =
       where(option-defined(?Program(prog));
             <printnl>
             (stderr,
              ["usage : ", prog, 
               " [-i abox] [-o latex] [-t table ... ] [-w width] [--help|-h|-?]"]);
             <exit> 0)


abox2latex(width) = 
   ?abox;
   !BOXENV( [<width>()], <topdown( try( Abox2latex ) )>abox );
   latex2text

abox2latex = 
   ?abox;
   !BOXENV( [], <topdown( try( Abox2latex ) )>abox );
   latex2text

rules
Abox2latex :
   S(s) -> <latex-string>s

Abox2latex :
   C( [], s ) -> CBOX( s' )
   where
      <map( \ S(x) -> <make-latex-comment>x \ )>s => s'

Abox2latex:
   FBOX(FO, b) -> BOXFONT( FO, b )
   where
   !FO;
   (KW + VAR + NUM + MATH)

Abox2latex:
   FBOX(F([]), b) -> b

Abox2latex:
   FBOX(F([foption|xs]), b) -> BOXFONT( FO, FBOX(F(xs), b))
   where
   !foption;
   (
      FFID( FM, ?FO )
   <+
      FFID( SE, ?FO )
   <+
      FFID( SH, ?FO )
   <+
      FFID( SZ, ?FO )
   <+
      FFID( CL, ?i ); !BOXCOLOR(i) => FO
   )

Abox2latex:
   H(so, b ) -> HBOX(hs, b' )
   where
      <Hspace>so => hs;
      <toh>b => b'

Abox2latex:
   V(so, b ) -> VBOX( vs,  is, b' )
   where
      <Vspace>so => vs;
      <Ispace>so => is;
      <filter(not([]));separate-by(!"\n\n")>b => b'

Abox2latex:
   HV(so, b ) -> HVBOX( hs, vs, is, b' )
   where
      <Hspace>so => hs;
      <Vspace>so => vs;
      <Ispace>so => is;
      <filter(not([]));separate-by(!"\\ ")>b => b'

Abox2latex:
   A(aos, so, b ) -> ABOX( tdef, bs' )
   where
      <construct-rows>b => bs;
      <Vspace;string-to-int>so        => vs;
      <conc>(<copy>(vs, EOR ),[EOR, "\n"])  => row-end;
      <table-def>aos    => tdef;
      <map(MkRows); separate-by(!row-end)>bs => bs'

Abox2latex:
   ALT( b1, b2 ) -> ALTBOX( b1, b2 )

Abox2latex:
   L( f, b ) -> LBOX( f', b )
   where
      (  // Sequence of exactly f copies of b
         <string-to-int>f => f'
      <+
         // Horizontal line (because b1 equals '=' character)
         <explode-string>f;
         [61|id]; ![61]; 
         implode-string => f'
      <+
         // Sequence of copies of ordinary string b
         !f => f'
      )

Abox2latex:
   LBL( s, b ) -> LBLBOX( s, b)

Abox2latex:
   REF( s, b ) -> REFBOX( s, b )
   
strategies
// This is a simplified implementation. The originalused a space as
// separator between horzontal boxes whenever the rightmost or left most box
// contains comments. 
toh =
   filter(not([]));separate-by( !"~" )

Hspace =
   (
      fetch( SOpt(HS,?value));!value
   <+
      !"1"
   )
   
Vspace =
   (   
      fetch( SOpt(VS,?value));!value
   <+
      !"0"
   )

Ispace =
   (
      fetch( SOpt(IS,?value));!value
   <+
      !"0"
   )

// Make sure that every element in the list occurs within a R box
// For instance:
//    [R([],[1,2,3]), a,b,c, R([],[4,5,6])]
// is tranformed to
//    [R([],[1,2,3]), R([],[a,b,c]), R([],[4,5,6])]
construct-rows =
   split(id, ![]);
   rec x ({a,b,xs,ys:
      ?([],xs);![R([],<reverse>xs)]
   <+
      ?([R(a,b)|xs], ys);
      ![R([],<reverse>ys), R(a,b)|<x>(xs, [] )]
   <+
     ?( [a|xs],ys);
     <x>( xs, [a|ys])
   }); 
   filter( not( R(id,[]) ) )

table-def =
   ?AOPTIONS( aos ); !aos;
   map(  \ AL(so) -> [L,<copy>(<Hspace;string-to-int>so, "~")] \
        +
         \ AC(so) -> [C,<copy>(<Hspace;string-to-int>so, "~")] \
        +
         \ AR(so) -> [R,<copy>(<Hspace;string-to-int>so, "~")] \
      );
      separate-by(![CSEP]);concat;at-last(![EOR])

table-row =
   ?R(_,bs );!bs;
   rec x ({e1, e2, xs:
      []
   <+
      [id]
   <+
      [C(id,id),id|x]
   <+
      [id,C(id,id)|x]
   <+
      ?[e1,e2|xs];![e1,CSEP|<x>[e2|xs]]
   })
   
MkRows =
   (
      ?LBL(s, b );
      <table-row>b;
      !LBLBOX(s, <table-row>b)
   <+
      table-row
   )

copy = (0, id);![]

make-latex-comment =
   explode-string;
   reverse;
   split(id,![]);
   rec x ({xs,ys,a:
      ?([],ys);![<LatexComment>ys]
      <+
      ?([10|xs], ys);
      ![<LatexComment>ys| <x>(xs, [])]
      <+
      ?([a|xs],ys);
      <x>(xs, [a|ys])
   }   );
   remove-trailing(?"");
   reverse;
   remove-trailing(?"");
   map( \x -> [x,"\n"] \ )

// Remove trailing layout (tabs and spaces) and comment characters (%%)
LatexComment = 
   remove-trailing(9+32);
   try(at-suffix([37,37|?xs];!xs));
   implode-string
\end{code}
