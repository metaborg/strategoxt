module sdf2sig
(*
	Author: Joost Visser (Joost.Visser@cwi.nl)

	Usage:f
	  sdf2sig -i <Sdf-ADT> -o <Stratego-AST>

	Sdf-ADT		The imploded AsFix representation of
			an Sdf definition.
	Stratego-ADT	The imploded AsFix representation of
			a list of Stratego modules.

	For each production that has a cons(..) attribute, an
	operation signature is generated. The module structure
	for the generated Stratego modules is the same as the
	modules structure of the input grammar.	
*)
imports Sdf2Stratego termid

strategies

  main = io-idwrap("\"sdf-2.1\"", sdf2sig)  

strategies

  sdf2sig
//    = {ms : << Definition(ms) -> ms >> }
//    ; filter(module2sig)
    = ?Definition(d);
      <mkterm>("\"stratego-0\"", [Definition(<filter(module2sig)>d)])

signature
  constructors
    Definition : List(Module) -> Definition

rules

  module2sig : 
    Module(n,is,sections) -> Module(n,<conc>(moditems,moditems'))
    where <filter(imports2moditems);concat> is => moditems
        ; <filter(section2moditems(!n));concat> sections => moditems'

  gram2moditems(n) :
    context-free-syntax(prods)
      -> [Signature(<filter(not(?Constructors([])))>[Constructors(opdecls)])]
           (* The above filter avoids generation of empty operation
              sections, which the current Stratego implementations
              (0.4.7 and before) so not parse correctly. *)
    where <filter(prod2oper)>prods => opdecls

