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


module sdf-wf
imports
  lib sdf-analysis termid

strategies

  sdf-wf
    = io-idwrap( "\"sdf-2.1\"", (id,sdf-wf-main), sdf-wf-options, sdf-wf-usage  )

  sdf-wf-main
    = where (
        obtain-wf-analyses
      ; where ( sdf-wf-main-short <+ sdf-wf-main-long )
      ; maybe-exit-with-error
    )

  sdf-wf-main-short
    = has-option(!ShortForm)
    ; ?(alldecs,decs,defs,uses,tops,doubledecs,srts,nondecs,bots,nd-tops,uk-decs)
    ; try-debug(!"Well-formedness report (short form)")
    ; ![" Top sorts:               ",tops]   ;print-report-line
    ; ![" Bottom sorts:            ",bots]   ;print-report-line
    ; ![" Non-declared top sorts:  ",nd-tops];print-report-line
    ; ![" Unknown declared sorts:  ",uk-decs];print-report-line

  sdf-wf-main-long
    = ?(alldecs,decs,defs,uses,tops,doubledecs,srts,nondecs,bots,nd-tops,uk-decs)
    ; !["ANALYSES:"]                              ;print-report-line
    ; ![" Declared sorts:          ",decs]        ;print-report-line
    ; ![" Defined sorts:           ",defs]        ;print-report-line
    ; ![" Used sorts:              ",uses]        ;print-report-line
    ; ![" Top sorts:               ",tops]        ;print-report-line
    ; ![" Multiply declared sorts: ",doubledecs]  ;print-report-line
    ; ![" Non-declared sorts:      ",nondecs]     ;print-report-line
    ; !["NUMBERS:"]                               ;print-report-line
    ; ![" Sorts:                   ",<length>srts];print-report-line
    ; !["WARNINGS:"]                              ;print-report-line
    ; ![" Bottom sorts:            ",bots]        ;print-report-line
    ; ![" Non-declared top sorts:  ",nd-tops]     ;print-report-line
    ; ![" Unknown declared sorts:  ",uk-decs]     ;print-report-line

  maybe-exit-with-error
    = try(
        has-option(!WarningsAreErrors)
      ; ?(alldecs,decs,defs,uses,tops,doubledecs,srts,nondecs,bots,nd-tops,uk-decs)
      ; try( !bots;    not(?[]); <fatal-error>["Error: Grammar contains bottom sorts"] )
      ; try( !nd-tops; not(?[]); <fatal-error>["Error: Grammar contains non-declared top sorts"] )
      ; try( !uk-decs; not(?[]); <fatal-error>["Error: Grammar contains unknown declared sorts"] )
      )

  print-report-line
    = try( 
        not(has-option(!Silent);has-option(!WarningsAreErrors))
      ; ?ts; !(stderr,ts); printnl
      )

  obtain-wf-analyses
    = where( declared-sorts        => alldecs )
    ; where( <uniq>alldecs         => decs )
    ; where( defined-sorts         => defs )
    ; where( used-sorts            => uses )
    ; where( !(defs,uses);diff     => tops )
    ; where( !alldecs; doubles     => doubledecs )
    ; where( !(defs,uses);union    => srts )
    ; where( !(srts,decs);diff     => nondecs )
    ; where( !srts;length          => srts-count )
    ; where( !(uses,defs);diff     => bots )
    ; where( !(tops,decs);diff     => nd-tops )
    ; where( !(decs,srts);diff     => uk-decs )
    ; !(alldecs,decs,defs,uses,tops,doubledecs,srts,nondecs,bots,nd-tops,uk-decs)
  
  sdf-wf-options
    = Option("--short",!ShortForm)
    + Option("-e",!WarningsAreErrors)

  sdf-wf-usage
    = where( option-defined(?Program(_));
             !"sdf-wf" => prog;
             <printnl>
             ( stderr,
               [ prog, " -- check the well-formedness of an SDF grammar\n",
                 "\n",
                 "usage : \n",
                 "   ", prog, " [-S] [-i file] [-o file] [-b]\n",
                 "   ", prog, " {--help|-h|-?}\n",
                 "\n",
                 "where\n",
                 "   --short     print short form of well-formedness report\n",
                 "   -e          exit with error if grammar is ill-formed\n",
                 "   -S          run silently\n",
                 "   -i file     read input from file (default: stdin)\n",
                 "   -o file     write output to file (default: stdout)\n",
                 "   -b          emit Binary ATerm (BAF) as output\n",
                 "   -h          print help message\n",
                 "\n",
                 "   Input is an SDF grammar (in AST form).\n",
                 "\n",
                 "   Output is an SDF grammar (in AST form).\n",
                 "\n",
                 "   The well-formedness report is writen to stderr.\n",
                 "   If both -e and -S are supplied, no report is emitted."
               ] 
             );
             <exit> 1
           )

  try-debug(s) = try(not(has-option(!Silent));where(s;debug))

signature
  constructors
    ShortForm		: Option
    WarningsAreErrors	: Option

strategies

  doubles
    = {xs: ?xs ; filter(not(once(!xs))) ; uniq}

  once(xs) 
    = {x : ?x
       ; where(
          xs; filter(?x) => [_]
        )
       ;!x }

