module asfix2sdf
imports
  lib Sdf-Syntax
  sdf-de-normalize

signature
  constructors
     empty-prod: a
     'id: a -> a
strategies

  reconstruct-grammar
    = collect-prods
    ; prods2grammar
    ; id2Id // Needed to keep pretty-printer happy

  minimize-grammar
    = ( ?tree
      ; option-value(\GrammarName(str) -> str\,fail) => str
      ; <file-exists>str  => file
      ; <ReadFromFile>file => grammar
      ; try-debug(<concat-strings>["Minimizing grammar ",str])
      ; <collect-prods;de-normalize-productions>tree => prods
      ; try-debug-list(!["Productions found in parse tree:" | prods])
      ; try-debug(!"Productions found in grammar:")
      ; <topdown(try(mk-unused-prod-empty(!prods)))>grammar
      ; eliminate-empty-prods
      ; try-debug(!"Minimized grammar")
      )

  maybe-de-normalize-grammar
    = try( 
        has-option(!DeNormalizeGrammar)
      ; de-normalize-grammar 
      ) 

  de-normalize-productions
    = id2Id // Needed to keep de-normalizer happy
    ; remove-generated-prods;?prods
    ; where (<filter(mk-prod-lex)>prods => lex-prods)
    ; where (<filter(mk-prod-cf)>prods => cf-prods)
    ; !(lex-prods,cf-prods) ; conc

  de-normalize-grammar
    = try-debug(!"De-normalizing grammar")
    ; alltd(de-normalize-syntax)

  de-normalize-grammar'
    =  try-debug(!"De-normalizing grammar")
    ; topdown( try( de-norm-char-class ) )
    ; topdown( try( lit(enquote) ) )

  mk-unused-prod-empty(prods)
    = prod(id,id,id) => p 
    ; try-debug(!p)
    ; prods          => ps
    ; not(<getfirst(match-prod(!p))>ps)
    ; !empty-prod()

  match-prod(p)
    = ?p2 
    ; p => p1
    ; ( <eq>(<remove-attrs>p1,<remove-attrs>p2) 
     <+ <eq>(<get-constr>p1,<get-constr>p2)
     // Since character-classes may be non-normal we keep any 
     //   production that contains a character-class
     <+ <prod(oncetd(char-class(id)),id,id);debug(!"CC ")>p1
      )
  
  remove-attrs
    = prod(id,id,!no-attrs)

  get-constr
    = \prod(_,_,atrs) -> c
       where <oncetd(cons(?c))>atrs
      \

  eliminate-empty-prods
    = innermost(
       filter1(not(?empty-prod()))
    <+ \simple-group(empty-prod())->prods-group([])\
    )

  filter1(s)
    = ?xs;filter(s);not(?xs)



strategies

  asfix2sdf
    = iowrap((id,asfix2sdf-main),asfix2sdf-options,asfix2sdf-usage)

  asfix2sdf-main
    = ( minimize-grammar )
   <+ ( reconstruct-grammar
      ; maybe-de-normalize-grammar 
      )

  asfix2sdf-options
    = ArgOption("-g",\str -> GrammarName(str)\)
    + Option("-d",!DeNormalizeGrammar)

  asfix2sdf-usage
    = where( option-defined(?Program(prog));
             <printnl>
             ( stderr,
               [ prog, " -- reconstruct a minimal grammar from a parse tree\n",
                 "\n",
                 "usage : \n",
                 "   ", prog, " [-S] [-i file] [-o file] [-b]\n",
                 "   ", prog, " {--help|-h|-?}\n",
                 "\n",
                 "where\n",
                 "   -d          de-normalize output grammar\n",
                 "   -g grammar  minimize grammar\n",
                 "   -S          run silently\n",
                 "   -i file     read input from file (default: stdin)\n",
                 "   -o file     write output to file (default: stdout)\n",
                 "   -b          emit Binary ATerm (BAF) as output\n",
                 "   -h          print help message\n",
                 "\n",
                 "   Input is a parse tree in AsFix format.\n",
                 "\n",
                 "   Output is an Sdf grammar (in AST form).\n",
                 "\n",
                 "   If an initial grammar (in AST form) is supplied with\n",
                 "   the -g switch, then this grammar is minimized on the\n",
                 "   basis of the input parse tree, i.e. layout, production\n",
                 "   order, priorities, sort declarations, restrictions, etc.\n",
                 "   are inherited from this grammar."
               ] 
             );
             <exit> 1
           )

  try-debug(s)
    = try(not(has-option(!Silent));where(s;debug))
  try-debug-list(s)
    = try(not(has-option(!Silent));where(s;map(debug)))

signature
  constructors
    GrammarName		: String -> Option
    DeNormalizeGrammar	:           Option

strategies

  collect-prods
    = collect(is-prod) => prods
    //; try-debug-list(!["Productions found in parse tree:" | prods])

  is-prod
    = ?prod(_,_,_)
    // + ?prod-fun(_,_,_,_) // These do not occur in AsFix.

  prods2grammar
    = \prods ->
       Definition([Module("M",[],[Exports(syntax(prods))])])
      \

  id2Id
    = alltd(\'id(m) -> Id(m)\)


