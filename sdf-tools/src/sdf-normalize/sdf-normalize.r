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


module sdf-normalize
imports 
  lib
  Sdf-Syntax

strategies

  sdf-normalize
    = iowrap(resolve-aliases;remove-aliases)

  resolve-aliases
    = \grammar -> <substitute(sort(id))>(subst,grammar)
       where <get-substitution>grammar => subst
      \

  get-substitution
    = collect(
        get-substitution-item
      , skip-substitution-item
      )

  get-substitution-item
    = // aliases are turned into substitutions
      \alias(symbol,s) -> (s,symbol)\
      // injections without cons(..) attribute are turned into substitutions
    + \prod([symbol],s,as) -> (s,symbol)
       where <not(oncetd(cons(id)+reject))>as
      \

  skip-substitution-item(collect,empty)
    = lexical-syntax(id)
    + lexical-priorities(id)

  remove-aliases
    = alltd(
        \aliases(_) -> empty-grammar\
      + context-free-syntax(filter-injections)
      + syntax(filter-injections)
      )

  filter-injections
    = filter(not(
        prod([id],id,not(oncetd(cons(id)+reject)))
      ))


