\literate[Abox2text]
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

% $Id: Abox2text.r,v 1.1.1.1 2001/06/05 09:11:46 mdejonge Exp $

% Author: Merijn de Jonge (mdjonge@cwi.nl)

% Eelco Visser (April 5, 2001)
% - repaired bug in handling of H boxes
% - refactored handling of H case using thread-map

This is a simple abox to text converter. It only formats H and V boxes. For
the remaining box operators the following transformations are applied:

A          -> V
R          -> H
HV         -> H
ALT(a1,a2) -> a1

\begin{code}
module Abox2text

imports pp-tables lib Literal-lib

strategies

Abox2text = parse-options(  ArgOption("-i",       \x -> Input(x) \ )
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
          (id, abox2text => b);!b; 
          topdown( try(is-string;
                   where(split(!outfile, \x -> [x] \); print )));
          <print>(outfile, ["\n"]);
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

abox2text = 
   split(id,!0);
   Abox2text

(*
Abox2text =
   ?(H(sopt, xs), xpos)
   ; <Hspace>sopt => hs
   ; <string-length>hs => hsl
   ; !(<filter(not([] + H([],[])))> xs, xpos)
   ; rec x(([],id)
        <+ {s, xpos2: 
            \ ([b], xpos1) -> ([s], xpos2)
              where <Abox2text>(b, xpos1) => (s, xpos2) \ }
        <+ {s, ss, xpos2,xpos3 : 
            \ ([b|bs], xpos1) -> ([s|ss], xpos3)
             where <Abox2text>(b, xpos1) => (s, xpos2);
                   <x>(bs, <add>(hsl, xpos2)) => (ss, xpos3) \ } 
        )
   ; (separate-by(!hs), id)
*)

  Abox2text =
   ?(H(sopt, xs), xpos) 
   ; <Hspace> sopt => hs
   ; <string-length> hs => hsl
   ; !Pair(<filter(not([] + H([],[])))> xs, xpos)
   ; thread-map({s, xpos': 
                 \ Pair(b, xpos) -> Pair(s, <add>(hsl, xpos'))
                   where <Abox2text> (b, xpos) => (s, xpos')\ })
   ; ?Pair(zs, xpos2)
   ; !(<separate-by(!hs)> zs, xpos2)
   ; try((not([]), \ xpos -> <subt> (xpos, hsl)\ ))

  //Abox2text =
  //   ?HV(_, xs );
  //   <separate-by(!" ")>xs

  Abox2text =
    ?(V(sopt, xs ), xpos)
  ; <Vspace>sopt => vs
  ; <Ispace>sopt => is
  ; <string-length>is => isl
  ; <concat-strings>[vs, is, <copy-char>(xpos, 32)] => vsep
  ; !xs
  ; filter(not([]));
    ( [];!([], xpos)
    + [\ x -> <Abox2text>(x, xpos) \ 
       | map( \ x -> <Abox2text>(x, <add>(xpos, isl)) \ )]
      ; at-last( [?(_,xpos')] )
      ; map(Fst)
      ; separate-by(!vsep)
      ; split(id, !xpos')
    )

  Abox2text =
    \ (S(s), xpos) -> (s, <add>(xpos, <string-length>s)) \

  Abox2text =
    \ (FBOX(_,b), xpos) -> <Abox2text>(b, xpos) \

  Abox2text =
    \ (HV(sopt, bs), xpos) -> <Abox2text> (H(sopt, bs), xpos) \

  Abox2text =
    \ (R(sopt, bs), xpos) -> <Abox2text> (H(sopt, bs), xpos) \

  Abox2text =
    \ (A(_,sopt, bs), xpos) -> <Abox2text> (V(sopt, bs), xpos) \
      
  Abox2text =
    \ (ALT( a1, a2), xpos) -> <Abox2text> (a1, xpos) \

  Abox2text =
    \ ([x], xpos) -> <Abox2text> (x, xpos) \

  Abox2text =
    \ ([], xpos) -> ("", xpos) \

strategies

  // analysing space options

  Hspace =
    (fetch(SOpt(HS,?value));!value; string-to-int <+ !1)
  ; \ n -> <copy-char>(n, 32) \
   
  Vspace =
    (fetch(SOpt(VS,?value));!value; string-to-int <+ !0)
  ; \ n -> <copy-char>(<add>(n,1), 10) \

  Ispace =
    (fetch(SOpt(IS,?value)); !value; string-to-int <+ !0)
  ; \ n -> <copy-char>(n, 32) \
\end{code}
