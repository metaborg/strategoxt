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

(* $Id: pack-sdf.r,v 1.3 2001/10/09 09:13:07 mdejonge Exp $

	Pack-sdf creates an SDF definition file containing all modules
	imported from the given top module.

	Pack-sdf is an instantiation of pack-modules implemented with
	graph-nodes. 	
*)

module pack-sdf
imports lib Sdf-ParseTree-Syntax Kernel-Sdf-Syntax
	asfix-abstractions sglr pack-modules gt-paths

signature
constructors
'id: Arg -> ID
overlays 

// Module -> <START>
Module_START(w1, t, w2) =
   appl(prod([sort("<START>")],sort("SURROGATE-START"),attrs([cons("\"sdf-2.1\""),'id("GB-Main")])),[
   appl(prod([cf(opt(layout)),cf(sort("Module")),cf(opt(layout))],sort("<START>"),no-attrs)
   ,[w1,t,w2])])

// SDF -> <START>
SDF_START(w1, t, w2) =
   appl(prod([sort("<START>")],sort("SURROGATE-START"),attrs([cons("\"sdf-2.1\""),'id("GB-Main")])),[
   appl(prod([cf(opt(layout)),cf(sort("SDF")),cf(opt(layout))],sort("<START>"),no-attrs)
   ,[w1,t,w2])])

//   -> M*
EmptyModuleIterStar =
   appl(
   prod([],cf(iter-star(sort("Module"))),no-attrs),[])

// M+ -> M*
NonEmptyModuleIterStar(m) = 
   appl(
prod([cf(iter(sort("Module")))],cf(iter-star(sort("Module"))),no-attrs),[m])

// M+ M+ -> M+ {left}
MM-iter(m1, w, m2) =
appl(prod([cf(iter(sort("Module"))),cf(opt(layout)),cf(iter(sort("Module")))],cf(iter(sort("Module"))),attrs([atr("left")])),[
m1, w, m2])

// M -> M+
M-iter( m ) = 
appl(prod([cf(sort("Module"))],cf(iter(sort("Module"))),no-attrs),[m])

//  Module* -> Definition
Module-s-overlay ( g_6 ) = appl ( prod ( [ cf ( iter-star ( sort ( "Module" ) ) ) ] , cf ( sort ( "Definition" ) ) , attrs ( [ 'id ( "Modular-Sdf-Syntax" ) ] ) ) , [ g_6 ] )

// definition Definition -> SDF
Definition-overlay(b_1,c_1) = 
appl(prod([lit("definition"),cf(opt(layout())),cf(sort("Definition"))],cf(sort("SDF")),attrs([cons("Definition"),'id("Sdf2-Syntax")])),[appl(prod([

char-class([100]),
char-class([101]),
char-class([102]),
char-class([105]),
char-class([110]),
char-class([105]),
char-class([116]),
char-class([105]),
char-class([111]),
char-class([110])],lit("definition"),no-attrs()),[100,101,102,105,110,105,116,105,111,110]),b_1,c_1])

strategies

// Parsing SDF files and chasing imports

  main = pack-modules(pack-sdf)

  pack-sdf(mkpt) =
    \ root -> (root, ["." | <mkpt>()], []) \;
    graph-nodes(parse-sdf, get-sdf-imports,\ (n,x,xs) -> [x|xs] \ );
    unzip;
    (id, ConcatModules)

  parse-sdf =
    (guarantee-extension(!"sdf"), id);
    find-in-path;
    debug(!"  including ");
    split(id, \'in -> <sglr> (<concat-strings>[SDFTOOLS, "/share/sdf-tools/sdf.cons.tbl"], 'in)\ )

  get-sdf-imports = 
    collect(?appl(prod(_,cf(sort("Import")),_),_); get-module-name, 
            skip-non-imports)


  skip-non-imports(search, ignore) =  
    parsetree(search,id)
    //<+ appl(prod(id, cf(sort("Module")),id),[id,id,id,search,id,search])
    <+ appl(prod(id, cf(opt(layout) <+ 
                        sort("Productions" <+ "Symbols" <+ 
                             "Priorities" <+ "Restrictions" <+
                             "Aliases")), id); ignore, ignore)
    <+ appl(ignore,search)


strategies


// Obtain module name from Import construct by removing optional parameters
get-module-name =
   oncetd(?appl(prod(_,cf(sort("ModuleId")),_),_);yield=>y);
   !y

// Composing AsFix; The parser produces an AsFix term for each module. These
// have to be merged into a list of modules. This entails merging the layout
// at the end and start of subsequent trees. Note that the prefer longets
// match of laout is not considered here. This means that the layout nodes may not be
// equavalent to the layout nodes when parsing the resulting definition file:
// 
//   parse( unparse(pack(m))) != pack(m) 
//


ConcatModules =
   rec x({w1, w2, m, m1, m2, xs:
      []; !(NoCfLayout, EmptyModuleIterStar, NoCfLayout)
   <+
      ?[Module_START(w1, m, w2)];
      !(NoCfLayout, M-iter(m), NoCfLayout)
   <+
      ?[m1,m2|xs];
      <concat-modules>( <x>[m1], <x>[m2|xs])
   }) => (w1, modules, w2);
   !parsetree(SDF_START(NoCfLayout, 
      Definition-overlay(
         <concat-layout>[OptNewLine, w1], 
         Module-s-overlay(NonEmptyModuleIterStar(modules))),w2),0)


concat-modules =
   ?( (w1, m1, w2), (w3, m2, w4) );
   !(w1, MM-iter( 
            m1, 
            <concat-layout>[w2, OptNewLine, OptNewLine, w3], 
            m2), w4)

