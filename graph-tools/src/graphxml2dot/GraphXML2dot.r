(*
 GT -- Grammar Tools
 Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
                    Eelco Visser <visser@acm.org>
                    Joost Visser <jvisser@cwi.nl>

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2, or (at your option)
 any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 02111-1307, USA.

 $Id: GraphXML2dot.r,v 1.6 2001/08/29 14:37:37 mdejonge Exp $
*)

module GraphXML2dot
imports
  lib Dot GraphXML Literal-lib

signature
  constructors
     UrlPrefix : X -> Option
     UrlExt :    X -> Option
strategies

  main
      = iowrap( (id, GraphXML2dot), options, usage )

  options 
      = ArgOption( "-p",           \x -> UrlPrefix(x) \ )
      + ArgOption( "-e",           \x -> UrlExt(x) \ )
      + ArgOption( "--url-prefix", \x -> UrlPrefix(x) \ )
      + ArgOption( "--url-ext",    \x -> UrlExt(x) \ )

  usage =
      where( option-defined(?Program(prog));
             <printnl>
             ( stderr,
               [ prog, " -- Converts a GraphXML term to DOT.\n",
                 "\n",
                 "usage : \n",
                 "   ", prog, " [-S] [-i file] [-o file]",
                              " [-p|--url-prefix <prefix>]\n",
                              " [-e|--url-ext <ext>]\n",
                 "   ", prog, " {--help|-h|-?}\n",
                 "\n",
                 "where\n",
                 "   -S          run silently\n",
                 "   -i file     read input from file (default: stdin)\n",
                 "   -o file     write output to file (default: stdout)\n",
                 "   -p prefix   generate url's with given prefix\n",
                 "   -e ext      give url extension 'ext' (default .html)",
                 "   -h          print help message\n",
                 "\n",
                 "   Input is a GraphXML term (in AST form).\n",
                 "\n",
                 "   Output is a DOT term (in AST form).\n"
               ]
             );
             <exit>0
            )

  GraphXML2dot
    = \GraphXML(_,[graph(_,xs)]) -> dot-graph("",alt(2,[]),"GraphXML",semicolon([url|ss]))
       where 
          option-value(UrlPrefix(?p), !"" => p) ;
          option-value(UrlExt(?e),    !".html" => e);
          <concat-strings>[p, "\\N", e] => url-string;
          !TCons(Attr-Stmt(node(comma([attr-id("URL",url-string)]))),TCons(None,TNil)) => url;
          <filter(node2dot<+edge2dot)>xs => ss
      \

  node2dot
    = \node1(as) -> node-stmt(n,Attr-List(<concat>[shapes,styles]))
       where !as;oncetd(?name(n))
           ; <filter(attribute2shape)>as => shapes
           ; <filter(attribute2style)>as => styles
      \

  node2dot
    = \node(as, da) -> node-stmt(n,Attr-List(<concat>[shapes,styles, labels]))
       where !as;oncetd(?name(n))
           ; <filter(attribute2shape)>as => shapes
           ; <filter(attribute2style)>as => styles
           ; <filter(data2label)>da => labels
      \


  edge2dot
    = \edge1(as) -> edge-stmt(t,arrow(),[s],[])
       where !as;oncetd(?source(s));oncetd(?target(t))
      \

  edge2dot
    = \edge(as,data) -> edge-stmt(t,arrow(),[s],[])
       where !as;oncetd(?source(s));oncetd(?target(t))
      \

  attribute2style
    = \class(c) -> attr-id("style","dotted")
       where <de-quote>c => "bottom"
      \
   <+ \class(c) -> attr-id("style","dashed")
       where <de-quote>c => "nondeclared-top"
      \ 
   <+ \class(c) -> attr-id("style","bold")
       where <de-quote>c => "declared-top"
      \ 

  attribute2shape
    = \class(c) -> attr-id("shape","record")
       where <de-quote>c => "declared"
      \ 
  data2label
    = \label(attrs, data) -> attr-id("label", data) 
      \
