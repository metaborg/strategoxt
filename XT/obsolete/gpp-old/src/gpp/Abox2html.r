\literate[Abox2html]
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

% $Id: Abox2html.r,v 1.1.1.1 2001/06/05 09:11:46 mdejonge Exp $

% Author: Merijn de Jonge (mdjonge@cwi.nl)

\begin{code}
module Abox2html

imports html pp-tables

strategies
Abox2html = parse-options(  ArgOption("-i",       \x -> Input(x) \ )
                     + ArgOption("--input",  \x -> Input(x) \ )
                     + ArgOption("-o",       \x -> Output(x)\ )
                     + ArgOption("--output", \x -> Output(x)\ )
                     + Option("--help",      !Help())
                     + Option("-h",          !Help())
                     + Option("-?",          !Help())) => options;
       (
          need-help( usage )
       <+
          where(option-defined(?Output(outfile));<open-file>outfile <+ !stdout => outfile);
          input-file;
          (id, abox2html => b);!b;
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
               " [-i abox] [-o html] [--help|-h|-?]"]);
             <exit> 0)

abox2html = 
   // First perform some normalizations
   normalize;
   // Then translate abstract box to abstract html....
   topdown( try(Abox2html) ) => s;
   !TABLE( [], [TR([],[TD([],s)])]);

   // ... hten translate abstract html to plain text
   html2text


strategies
   
rules
// Below are the rules which translate each abstract box construct to
// asbstract html

// Box strings
Abox2html:
   S(s) -> <html-string>s


// Box comments
Abox2html:
   C([], bs) -> s
   where
     <map(\ S(x) -> <make-html-comment>x \)>bs => bs';
     !TDTR( TR([], [TD(["colspan=\"100\" class=\"comment\""], [bs'])])) => s

// Box fonts
// Box dynamic fonts are translated to special HTML classes.
// Static Box font are discarded in the HTML transformation.
Abox2html:
   FBOX(FO, b) -> s
   where
      !FO;
      (
         KW; !SPAN( ["class=\"keyword\""], [b] )
      <+
         VAR; !SPAN( ["class=\"variable\""], [b] )
      <+
         NUM; !SPAN( ["class=\"number\""], [b] )
      <+
         MATH; !SPAN( ["class=\"math\""], [b] )
      <+
         !b
      ) => s

//  Box H operator
Abox2html:
   H(so, b ) -> s
   where
      <Hspace> so => hs;
      <sep-by(!hs)>b => s

// Box V operator
Abox2html:
   V(so, b ) -> [TDTD, TABLE([],s)]
   where
      <Vspace>so => vs;
      <Ispace>so => is;
      !b;
      [tov(!"")|map(tov(!is))];
      separate-by(!vs) => s

// Box HV operator
Abox2html:
   HV(so, b ) -> s
   where
      <Hspace>so => hs;
      (
         ?[];!b
      <+
         at-last(![" "]) => sep;
         ![TDTD, <separate-by( !sep )>b]
      ) => s

// Box A operator
Abox2html:
   A(aos, so, b ) -> TD'(TD([], [TABLE([],[s])]))
   where
      <construct-rows>b => bs;
      <Vspace>so => vs;
      <map( toa( !aos )  )>bs;
      separate-by( !vs ) => s

// Box ALT operator
Abox2html:
   ALT( b1, b2 ) -> b1

// Box L operator
Abox2html:
   L( b1, b2 ) -> HR

// Box L operator
Abox2html:
   LNAT( i, b ) -> HR

// Box LBL operator
Abox2html:
   LBL( url, text ) -> [ANCHOR( url ), text]

// Box REF operator
Abox2html:
   REF( url, text ) -> HREF( url, text )
   
toa(aoptions) : 
   R( [], bs ) -> TR(["valign=\"top\""], [s])
   where
   <aoptions>() => AOPTIONS( aos );
   !(bs, aos);
   rec x ({a,b,a',as,ao,aos':
      ?([], _ ); ![]
   <+
      ?([C(a,b)|as],aos');
      ![TD([],[C(a,b)])|<x>(as, aos')]

   <+
      ?([a,a'|as],[ao|aos']);
      ![TD([<aopt>ao],a), <make-hs>ao|<x>([a'|as], aos')] 
   <+
      ?([a|as],[ao|aos']);
      ![TD([<aopt>ao],a)|<x>(as, aos')]
}   ) => s

strategies

aopt =
   AL(id) ; !"align=\"left\""
   <+
   AR(id) ; !"align=\"right\""
   <+
   AC(id); !"align=\"center\""

make-hs =
   (
   ?AL(so)
   <+
   ?AR(so)
   <+
   ?AC(so)
   );
   <Hspace>so;
   (
      ?[]
   <+
      ?s;!TD([],s)
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
   
   

tov(is) =
   (
   L(id,id)
   <+
   LNAT(id,id)
   <+
   ?b;
   !TABLE([],[TR(["valign=\"top\""],[<is>(), TD([],[b])])])
   ) => s;
   !TR(["valign=\"top\""],[TD([],[s])])


Hspace =
   (fetch( SOpt(HS,?value));!value;string-to-int
   <+
   !1);
   (
      ?0;![]
   <+
      ?n;
      <copy>(n, NBSP)
   )
   
Vspace =
   (fetch( SOpt(VS,?value));!value;string-to-int
   <+
   !0);
   (
      ?0 ;!""
   <+
      ?n;
      !TR([],[TD([],<copy>(n,BR))])
   )

Ispace =
   (fetch( SOpt(IS,?value));!value;string-to-int
   <+
   !0);
   (
      ?0;!""
   <+
      ? n;
      !TD([], <copy>(n, NBSP))
   )

sep-by(s) =
   map( \ x -> [x] \ );
   separate-by(s);
   concat

normalize =
   topdown( try(     \ H(_,[b]) -> b \ 
                   + \ V(_,[b]) -> b \ 
                   + Distribute ) )

Flat-list = 
   is-list;
   map( \[x] -> x \ ); filter( not([]))
   
// The next strategy rewrites terms like H[a V[b c] d] to H[a V[b H[c d]]]
Distribute =
   ?H( so, xs );
   <split-fetch( ?V( so', [a|as] ) )>xs;
   ?(l1, l2);
   <not(?[])>l2;
   <at-last( [?b]; ![H( so, [b | l2] )] )>[a|as] => l1';
   !H( so, <conc>(l1, [V(so', l1')]) )


// This strategy removes initial; and trailing new lines, and append a break
// (BR) to each remaining line of comment
make-html-comment =
  explode-string;
   reverse;
   split(id,![]);
   rec x ({xs,ys,a:
      ?([],ys);![<remove-trailing(9+32);implode-string>ys]
      <+
      ?([10|xs], ys);
      ![<remove-trailing(9+32);implode-string>ys| <x>(xs, [])]
      <+
      ?([a|xs],ys);
      <x>(xs, [a|ys])
   }   );
   remove-trailing(?"");
   reverse;
   remove-trailing(?"");
   map( \x -> [x,BR] \ )
\end{code}
