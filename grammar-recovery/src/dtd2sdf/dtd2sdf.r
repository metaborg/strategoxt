module dtd2sdf
(* $Id: dtd2sdf.r,v 1.4 2001/10/09 15:49:31 mdejonge Exp $ *)
(*
	Conversion of an XML-DTD to an Sdf grammar.

	Author: Joost Visser (Joost.Visser@cwi.nl)

	TODO:
	  * Factor out strategies that can be imported from lib.
	  * Adapt to layout and lexical implosion as performed
		by xml-implode-asfix.
	  * Support more XML constructs.
*)

imports
  lib
  Literal-lib
  Sdf-Syntax
  XML termid

strategies
 
  dtd2sdf
    = io-idwrap("\"xml_1_0.0\"", xml2sdf)

  warn
    = debug(!"Warning!! Can't handle: ")

  xml2sdf
    = (dtd2sdf + document2sdf);
      termid(!"\"sdf-2.1\"")

rules

  dtd2sdf:
    external-dtd(decls) -> Definition([m])
    where !Module("ExternalDTD",
                  [],
                  [Exports(context-free-syntax(<map(decl2prods<+warn);concat>decls))])
          => m

  document2sdf:
    Document(prolog,element)
	-> Definition(<prolog2modules>prolog)

  prolog2modules:
    Prolog(_,None)
	-> []

  prolog2modules:
    Prolog(_,Some(doctypedecl))
	-> [<doctypedecl2module>doctypedecl]

  doctypedecl2module:
    DocType(name,_,None)
	-> Module(<name2string>name,[],[])
  doctypedecl2module:
    DocType(name,_,Some(decls))
	-> Module(<name2string>name,
                  [],
                  [Exports(context-free-syntax(<map(decl2prods<+warn);concat>decls))])

  name2string:  Name(str) -> str
  name2symbol:  name      -> <name2string;mk-sort>name
  name2literal: name      -> lit(<name2string;quote>name)

  decl2prods:
    ElementDecl(name,contentspec)
(*
	-> [prod(<concat>
                  [[lit(<conc-strings;quote>("<",<name2string>name)),
                    iter-star(<conc-strings;mk-sort>(<name2string>name,"-Attribute")),
                   lit(<quote>">")],
                   <contentspec2symbols>contentspec,
                   [lit(<conc-strings;quote>("</",<name2string>name)),
                    lit(<quote>">")]
                  ],
                 <name2symbol>name,
                 attrs([cons(<name2string;quote>name)]))]
*)
//(*
	-> [prod([lit(<conc-strings;quote>("<",<name2string>name)),
                  iter-star(<conc-strings;mk-sort>(<name2string>name,"-Attribute")),
                  alt(seq(lit(<quote>">"),
                          <concat>[<contentspec2symbols>contentspec,
                                   [lit(<conc-strings;quote>("</",<name2string>name)),
                                    lit(<quote>">")
                                   ]
                                  ]
                         ),
                      lit(<quote>"/>")
                     )
                 ],
                 <name2symbol>name,
                 attrs([cons(<name2string;quote>name)]))]
//*)

  decl2prods:
    AttlistDecl(name,attdefs)
	-> <map(attdef2prod(!name)<+warn)> attdefs
  decl2prods:
    Comment(_) -> []

  attdef2prod(buildname):
    attdef
	-> prod(<attdef2symbols>attdef,
                <conc-strings;mk-sort>(<name2string>name,"-Attribute"),
                attrs([cons(<attdef2constr>attdef)]) )
	where <buildname>() => name

  contentspec2symbols:
    EMPTY()
        -> []
  contentspec2symbols:
    Mixed2()
	-> [sort("PCDATA")]
  contentspec2symbols:
    Children(choiceORseq,None)
	-> [<choiceORseq2symbol>choiceORseq]
  contentspec2symbols:
    Children(choiceORseq,Some(questionmarkAlternative))
	-> [opt(<choiceORseq2symbol>choiceORseq)]
  contentspec2symbols:
    Children(choiceORseq,Some(starAlternative))
	-> [iter-star(<choiceORseq2symbol>choiceORseq)]
  contentspec2symbols:
    Children(choiceORseq,Some(plusAlternative))
	-> [iter(<choiceORseq2symbol>choiceORseq)]

  choiceORseq2symbol:
    Choice(cp,Nil)
	-> <cp2symbol>cp
  choiceORseq2symbol:
    Choice(cp,cps)
	-> alt(<cp2symbol>cp,<cps2symbol>cps)
  choiceORseq2symbol:
    Seq(cp,Nil)
	-> <cp2symbol>cp
  choiceORseq2symbol:
    Seq(cp,cps)
	-> seq(<cp2symbol>cp,<cps2symbols>cps) 

  cp2symbol:
    CP(nameORchoiceORseq,None)
	-> <nameORchoiceORseq2symbol>nameORchoiceORseq
  cp2symbol:
    CP(nameORchoiceORseq,Some(questionmarkAlternative))
	-> opt(<nameORchoiceORseq2symbol>nameORchoiceORseq)
  cp2symbol:
    CP(nameORchoiceORseq,Some(starAlternative))
	-> iter-star(<nameORchoiceORseq2symbol>nameORchoiceORseq)
  cp2symbol:
    CP(nameORchoiceORseq,Some(plusAlternative))
	-> iter(<nameORchoiceORseq2symbol>nameORchoiceORseq)

  cps2symbol:
    Cons(cp,Nil)
	-> <cp2symbol>cp
  cps2symbol:
    Cons(cp,cps)
	-> alt(<cp2symbol>cp,<cps2symbol>cps)

  cps2symbols:
    Cons(cp,Nil)
	-> [<cp2symbol>cp]
  cps2symbols:
    Cons(cp,cps)
	-> Cons(<cp2symbol>cp,<cps2symbols>cps)

  attdef2symbols:
    AttDef(name,atttype,defaultdecl)
	-> [<name2literal>name,
            lit(<quote>"="),
            <atttype2symbol>atttype
           ]

  atttype2symbol:
    CDATA
	-> sort("AttValue")
  atttype2symbol:
    ID
	-> sort("ID")

  attdef2constr:
    AttDef(name,_,_)
	-> <name2string;quote>name


  defaultdecl2symbol: REQUIRED()      -> sort("REQUIRED")
  defaultdecl2symbol: IMPLIED()       -> sort("IMPLIED")
  defaultdecl2symbol: FIXED(_,attval) -> lit(attval)
  defaultdecl2symbol: t               -> <warn;!lit("\"fixed\"")>t

  nameORchoiceORseq2symbol:
    Name(n)
	-> <name2symbol>Name(n)
  nameORchoiceORseq2symbol:
    choiceORseq
	-> <choiceORseq2symbol>choiceORseq  

rules

  symbols2alt:
    Nil
	-> empty()
  symbols2alt:
    Cons(s,Nil)
	-> s
  symbols2alt:
    Cons(s,ss)
	-> alt(s,<symbols2alt>ss)

(* Implosion does not work for alternatives yet.
 * Therefore, we define some overlays for terms
 * that fail to implode
 *)
overlays
  plusAlternative
    = appl(prod([lit("+")],alt(lit("?"),alt(lit("*"),lit("+"))),no-attrs),
           [appl(prod([char-class([43])],lit("+"),no-attrs),
                 [43])])
  starAlternative
    = appl(prod([lit("*")],alt(lit("?"),alt(lit("*"),lit("+"))),no-attrs),
           [appl(prod([char-class([42])],lit("*"),no-attrs),
                 [42])])
  questionmarkAlternative
    = appl(prod([lit("?")],alt(lit("?"),alt(lit("*"),lit("+"))),no-attrs),
           [appl(prod([char-class([63])],lit("?"),no-attrs),
                 [63])])

strategies

   mk-sort
     = \str -> sort(<try(upper_no_underscore)>str)\

   // Make first characther and replace underscores ('_') by hyphens ('-')
   upper_no_underscore = 
           explode-string;
           Cons(try(Upper), rec x(Nil <+
                             Cons(95, Cons(try(Upper), x)); Tl <+
                             Cons(id, x)));
           implode-string

rules
   Upper : c -> <subt> (c, 32)
           where <geq> (c, 97); <leq> (c, 122)



