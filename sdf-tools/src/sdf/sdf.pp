%%% GB -- Grammar Base
%%% Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
%%%
%%% This program is free software; you can redistribute it and/or modify
%%% it under the terms of the GNU General Public License as published by
%%% the Free Software Foundation; either version 2, or (at your option)
%%% any later version.
%%%
%%% This program is distributed in the hope that it will be useful,
%%% but WITHOUT ANY WARRANTY; without even the implied warranty of
%%% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
%%% GNU General Public License for more details.
%%%
%%% You should have received a copy of the GNU General Public License
%%% along with this program; if not, write to the Free Software
%%% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
%%% 02111-1307, USA.

%%% $Id: sdf.pp,v 1.1 2001/05/31 14:20:51 mdejonge Exp $

[
%% module Sdf2-Syntax
  "<START>"                                   -> Symbol	 -- 
     KW["<START>"],

  "<Start>"                                   -> Symbol	 -- 
     KW["<Start>"],
     
  "lexical"      "priorities" Priorities      -> Grammar	 -- 
     V is=3[ H[KW["lexical"] KW["priorities"]] _1],
     
  "context-free" "priorities" Priorities      -> Grammar	 -- 
     V is=3 [ H[KW["context-free"] KW["priorities"]] _1],
     
  "lexical"      "restrictions" Restrictions  -> Grammar	 -- 
      V is=3 [ H[KW["lexical"] KW["restrictions"]] A(l,l,l)[_1]],

  "context-free" "restrictions" Restrictions  -> Grammar	 -- 
      V is=3[ H[KW["context-free"] KW["restrictions"]] A(l,l,l)[_1]],

  "definition" Definition                     -> SDF		 -- 
      V is=3[ KW["definition"] V vs=1[_1]],

%% module Kernel-Sdf-Syntax
  "{" {Attribute ","}* "}"       -> Attributes		 -- 
      Hhs=0[ "{" H[_1] "}"],

   {Attribute ","}* -- 
      H hs=0 [_1 ","],

                                 -> Attributes		 -- 
      ,

  Symbols "->" Symbol Attributes -> Production		 -- 
      R[ H[_1] "->" H hs=0[_2] _3],

  Production*                    -> Productions --
      _1,

  "syntax" Productions           -> Grammar			 -- 
      V is=3 [KW["syntax"] A(l,l,l,l)[ _1 ]],

%% module Basic-Sdf-Syntax
  "lexical" "syntax"      Productions -> Grammar		 -- 
      V is=3[ H[ KW["lexical"] KW["syntax"]] A(l,l,l,l)[_1]],

  "context-free" "syntax" Productions -> Grammar		 -- 
      V is=3[ H[KW["context-free"] KW["syntax"]] A(l,l,l,l)[_1]],

  "variables"             Productions -> Grammar		 -- 
      V is=3[ KW["variables"] A(l,l,l,l)[_1]],

  "lexical" "variables"   Productions -> Grammar		 -- 
      V is=3[ H[KW["lexical"] KW["variables"]] A(l,l,l,l)[_1]],

  "<" Symbol "-CF"  ">"               -> Symbol		 -- 
      H hs=0[KW["<"] _1 KW["-CF"] KW[">"]],

  "<" Symbol "-LEX" ">"               -> Symbol		 -- 
      H hs=0[KW["<"] _1 KW["-LEX"] KW[">"]],

  "<" Symbol "-VAR" ">"               -> Symbol		 -- 
      H hs=0[KW["<"] _1 KW["-VAR"] KW[">"]],

  "LAYOUT"                            -> Symbol		 -- 
      KW["LAYOUT"],

%% module Modular-Sdf-Syntax
  Module*                                  -> Definition	--
      _1,

  "module" ModuleName ImpSection* Sections -> Module		 -- 
      V is=3 [ H [KW["module"] _1] V vs=1[_2 _3]],

  "exports" Grammar            -> Section			 -- 
      V is=3 [KW["exports"] V vs=1[_1]],

  "hiddens" Grammar            -> Section			 -- 
     V is=3[KW["hiddens"] V vs=1[_1]],

  Section*                     -> Sections --
     _1,

  ModuleId                     -> ModuleName		--
     VAR[_1],

  ModuleId "[" Symbols "]"     -> ModuleName --
     _1 KW["["] _2 KW["]"],

  "id" "(" ModuleName ")"      -> Attribute			 -- 
     KW["id"] H hs=0["(" _1 ")"],

  "imports" Imports            -> ImpSection			 -- 
     H[ KW["imports"] HV[_1]],

  ImpSection                   -> Grammar --
     _1,

  Import*                      -> Imports --
     _1,

  ModuleName                   -> Import --
    _1,

  ModuleName Renamings         -> Import --
    _1 _2,

  "(" Import ")"               -> Import {bracket} -- 
    H hs=0["(" _1 ")"],

%% module Regular-Sdf-Syntax
  "(" ")"                          -> Symbol			 -- 
    "(" ")",

  "(" Symbol Symbol+ ")"           -> Symbol			 -- 
    "(" _1 _2 ")",

  Symbol "?"                       -> Symbol			 -- 
    H hs=0[ H[_1] KW["?"]],

  Symbol "+"                       -> Symbol			 -- 
    H hs=0[ H[_1] KW["+"]],

  Symbol "*"                       -> Symbol			 -- 
    H hs=0[ H[_1] KW["*"]],

  "{" Symbol Symbol "}" "+"        -> Symbol			 -- 
    H hs=0["{" H [_1 _2] "}" KW["+"]],

  "{" Symbol Symbol "}" "*"        -> Symbol			 -- 
    H hs=0["{" H[_1 _2] "}" KW["*"]],

  Symbol  NatCon "+"               -> Symbol			 -- 
    H hs=0["{" _1 "}" _2 KW["+"]],

  "{" Symbol Symbol "}" NatCon "+" -> Symbol			 -- 
    H hs=0 ["{" H[_1_2] "}" _3 KW["+"]],

  "Set" "[" Symbol "]"             -> Symbol			 -- 
    KW["Set"] H hs=0["[" _1 "]"],

  Symbol "#" Symbol                -> Symbol 			{right} -- 
    _1 KW["#"] _2,

  "(" Symbols "=>" Symbol ")"      -> Symbol			 -- 
    "(" _1 KW["=>"] _2 ")",

  Symbol "|" Symbol                -> Symbol 			{right} -- 
    _1 KW["|"] _2,

  "<<" Symbols ">>"                -> Symbol			 -- 
   KW["<<"] _1 KW[">>"],

%% module Priority-Sdf-Syntax
  "left"                                -> Associativity	 -- 
    KW["left"],

  "right"                               -> Associativity	 -- 
    KW["right"],

  "non-assoc"                           -> Associativity	 -- 
    KW["non-assoc"],

  "assoc"                               -> Associativity	 -- 
    KW["assoc"],

  "bracket"                             -> Attribute		 -- 
    KW["bracket"],

  Associativity                         -> Attribute		 -- 
    _1,

  Production                            -> Group               -- 
    _1,

  "{" Productions "}"                   -> Group               -- 
    H[KW["{"] V[_1] KW["}"]],

  "{" Associativity ":" Productions "}" -> Group               -- 
    HV[KW["{"] _1 KW[":"] _2 KW["}"]],

  {Group ">"}+                          -> Priority		 -- 
    V[_1],

  {Group ">"}+ --
    HV[_1 KW[">"]],

  {Group ">"}* --
    HV[_1 KW[">"]],

  Group Associativity Group             -> Priority		 -- 
    HV[ _1 _2 _3 ],

  {Priority  ","}*                      -> Priorities --
    V[_1],
  
  {Priority ","}* --
    H hs=0[_1 ","],

  "priorities"  Priorities              -> Grammar --
    V is=3[ KW["priorities"] _1],

%% module CC-Sdf-Syntax
  CharClass -> Symbol						 -- 
    _1,

%% module Sorts-Sdf-Syntax
  Sort             -> Symbol					 -- 
    _1,
    
  "sorts" Symbols  -> Grammar					 -- 
    H [ KW["sorts"] HV[_1]],

%% module Literals-Sdf-Syntax
  UQLiteral                                            -> Literal --
    _1,
    
  Literal                                              -> Symbol	 -- 
    _1,
    
  Literal "(" {Symbol ","}* ")" "->" Symbol Attributes -> Production	 -- 
    R[H[_1 "(" _2 ")"] "->" Hhs=0[_3] _4],
  
  {Symbol ","}* --
    H hs=0[_1 ","],

%% module Label-Sdf-Syntax
  Literal ":" Symbol   -> Symbol				 -- 
    H hs=0[_1 ":" _2],

  "cons" "(" ATerm ")" -> Attribute				 -- 
    H hs=0[ KW["cons"] "(" _1 ")"],

  "constructor"        -> Attribute				 -- 
    KW["constructor"],

  "memo"               -> Attribute				 -- 
    KW["memo"],

%% module Restrictions-Sdf-Syntax
  CharClass                    -> Lookahead --
    _1,

  CharClass "." Lookaheads     -> Lookahead --
    H hs=0[_1 KW["."] _2],

  Lookahead                    -> Lookaheads --
    _1,

  Lookaheads "|" Lookaheads    -> Lookaheads {right} -- 
    H[ _1 KW["|"] _2],

  "(" Lookaheads ")"           -> Lookaheads {bracket} -- 
    H hs=0[ "(" _1 ")"],

  "[[" {Lookahead ","}* "]]"   -> Lookaheads --
    H hs=0 ["[[" _1 "]]"],
  
  {Lookahead ","}* -- 
    H hs=0[_1 ","],

  Symbols "-/-" Lookaheads     -> Restriction		 -- 
    H hs=6[ HV[_1] H[KW["-/-"] _2]],

  Restriction*                 -> Restrictions --
    _1,

  "restrictions" Restrictions  -> Grammar		 -- 
    V is=3[ KW["restrictions"] _1],

  "reject"                     -> Attribute		 -- 
    KW["reject"],

  "prefer"                     -> Attribute              --
    KW["prefer"],

  "avoid"                      -> Attribute              --
    KW["avoid"],

%% module Alias-Sdf-Syntax
  "aliases" Aliases  -> Grammar                        -- 
    V is=3 [ KW[ "aliases"] A(l,l,l)[_1]],
    
  Symbol "->" Symbol -> Alias                      	 -- 
    R[ H[_1] KW["->"] H[_2]],
    
  Alias*             -> Aliases --
    _1,

%% module Symbols
  "(" Symbol ")"       -> Symbol {bracket} -- 
    H ["(" _1 ")"],
    
  Symbol*              -> Symbols --
    _1,

%% module Grammar-Syntax
  "(/)"                 -> Grammar				 -- 
    KW["(/)"],
     
  Grammar Grammar       -> Grammar 				{assoc} -- 
    _1 _2,
    
  "(" Grammar ")"       -> Grammar {bracket} -- 
    H hs=0["(" _1 ")"],

%% module Renaming-Sdf-Syntax
  "[" Renaming* "]"     -> Renamings --
    ALT[ H hs=0[ KW["["] _1 KW["]"]] V[V is=3 ["[" _1 ] "]"]],
                   
  Symbol     "=>" Symbol      -> Renaming --
     H[_1 KW["=>"] _2],
     
  Production "=>" Production  -> Renaming --
     H[_1 KW["=>"] _2],

%% module IntCon
  NatCon     -> IntCon -- _1,
  
  "+" NatCon -> IntCon -- H hs=0[_1], 
  "-" NatCon -> IntCon -- H hs=0[_1],

%% module Character-Class-Syntax
  Character                 -> CharRange --
    _1,
    
  Character "-" Character   -> CharRange           		 -- 
    H hs=0[_1 KW["-"] _2],

  CharRange                 -> CharRanges --
    _1,
    
  CharRanges CharRanges     -> CharRanges			{right,memo} -- 
    _1 _2,
    
  "(" CharRanges ")"        -> CharRanges {bracket} -- 
    H hs=0["(" _1 ")"],
                            -> OptCharRanges			 -- 
    ,
    
  CharRanges                -> OptCharRanges --
    _1,
    
  "[" OptCharRanges "]"     -> CharClass			 --
    H hs=0[KW["["] _1 KW["]"]],
    
  "~" CharClass             -> CharClass          		 -- 
    H hs=0[KW["~"] _1],
    
  CharClass "/" CharClass   -> CharClass			{left,memo} -- 
    _1 KW["/"] _2,
    
  CharClass "/\\" CharClass -> CharClass			{left,memo} --
    _1 KW["/\\"] _2,
    
  CharClass "\\/" CharClass -> CharClass			{left} --
    _1 KW["\\/"] _2,
    
 "(" CharClass ")"          -> CharClass {bracket} -- 
   H hs=0["(" _1 ")"]

%%%% module ATerms
%%  ATerm                     -> ATerms
%%  ATerm "," ATerms          -> ATerms
%%  "[" "]"                   -> ATermList
%%  "[" ATerms "]"            -> ATermList
%%  IntCon                    -> ACon
%%  RealCon                   -> ACon
%%  Literal                   -> AFun
%%  ACon                      -> ATerm
%%  ATermList                 -> ATerm
%%  AFun                      -> ATerm
%%  AFun "(" ATerms ")"       -> ATerm
%%  "{" ATerms "}"            -> Ann
%%  ACon                 Ann  -> ATerm
%%  ATermList            Ann  -> ATerm
%%  AFun                 Ann  -> ATerm
%%  AFun "(" ATerms ")"  Ann  -> ATerm
%%
%%%% module Layout
%%                     -> TagId
%%
%%%% module Character-Syntax
%%  NumChar   -> Character
%%  ShortChar -> Character
%%  "\\TOP"   -> Character
%%  "\\EOF"   -> Character
%%
%%%% module RealCon
%%  "e" IntCon                -> OptExp
%%                            -> OptExp
%%  IntCon "." NatCon OptExp  -> RealCon
]
