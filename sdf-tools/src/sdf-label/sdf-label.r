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

module sdf-label
imports
  Sdf-Syntax list Literal-lib 
  verbalize-sdf termid

signature
   constructors
      'id: a -> a
      empty-layout : a

strategies

  sdf-label
    = io-idwrap("\"sdf-2.1\"", Sdf-label)

  Sdf-label
    = alltd(don't-label <+ label-production);
      termid(!"\"sdf-2.1\"")

  label-production
    = ( prod(map(try(label-symbol)),id,id)
     <+ prod-fun(id,map(try(label-symbol)),id,id)
      )
    ; warn-if-labels-not-unique

  don't-label
    = priorities(id)
    + context-free-priorities(id)
    + lexical-priorities(id)
    + variables(id)
    + lexical-variables(id)
//    + context-free-variables(id)
//    + Imports(id)
//    + Sorts(id)


  warn-if-labels-not-unique
    = if( where ( get-argument-symbols  
                ; filter(\label(l,_)->l\)
                ; contains-doubles
                )
        , debug(!"Labels not unique in production: ")
        )

  contains-doubles
    = not(?l;uniq;?l)

  get-argument-symbols
    = \prod      (ss,_,_) -> ss\
    + \prod-fun(_,ss,_,_) -> ss\
     
  label-symbol
    = label(id,id)
   <+ \sort(n) -> label(<sortname2label>n,sort(n))\
   <+ \sym     -> label(<symbol2label>sym,sym)\
//   <+ \sym     -> label(<lit2str>sym,sym)\

  sortname2label
    //= quote
    = lcHd;quote-sdf-keyword

  symbol2label
    = sym2str';lcHd;quote-sdf-keyword
  
  lcHd
    = explode-string;[lc|id];implode-string

  quote-sdf-keyword
    = not(is-sdf-keyword) <+ quote

  is-sdf-keyword
    = "aliases" + "lexical" + "priorities" + "context-free" 
    + "definition" + "syntax" + "variables" + "module" + "exports" 
    + "hiddens" + "left" + "right" + "assoc" + "non-assoc" + "bracket"
    + "sorts" + "restrictions" + "constructor" + "memo"
