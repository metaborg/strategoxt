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


module sdf-analysis
imports
  lib Sdf-Syntax

strategies

  declared-sorts
    = collect(\Sorts(ss) -> <map(\sort(s)->s\)>ss\)
    ; concat

  defined-sorts
    = collect( \prod    (  _,sort(s),_) -> s\
            <+ \prod-fun(_,_,sort(s),_) -> s\
            <+ \alias(_,sort(s)) -> s\
             )

  used-sorts
    = collect( \prod    (  ss,_,_) -> <map(collect-sorts);concat>ss\
            <+ \prod-fun(_,ss,_,_) -> <map(collect-sorts);concat>ss\
             , skip-appl // skip the production child of non-imploded application node
             )
    ; concat
    ; uniq

  skip-appl(x,t)
    = \appl(_,ts) -> <x>ts\

  collect-sorts
    = collect(\sort(s)->s\)

signature
  constructors
    appl : Production * List(AsFixTerm) -> AsFixTerm
