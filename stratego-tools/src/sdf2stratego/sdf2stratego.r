\literate[sdf2stratego]

% Author: Joost Visser (Joost.Visser@cwi.nl)
% Refactorings: Eelco Visser (visser@acm.org)

	Usage:
	  sdf2stratego -i <Sdf-ADT> -o <Stratego-AST>

	Sdf-ADT		The imploded AsFix representation of
			an Sdf definition.
	Stratego-ADT	The imploded AsFix representation of
			a list of Stratego modules.

	For each production that has a cons(..) attribute, an
	operation signature is generated, an overlay, a match
	strategy and a build strategy. The module structure
	for the generated Stratego modules is the same as the
	modules structure of the input grammar.	

\begin{code}
module sdf2stratego
imports Sdf2Stratego  termid
strategies

  sdf2stratego = io-idwrap( InOutId("\"sdf-2.1\"",!"\"stratego-0\""), sdf-to-stratego )
(*
  sdf2stratego with pppwarp

  sdf2stratego = 
    pppwrap(!["-l", "sdf", "-v", "2.1"]
           ,!["-p", <concat-strings>[GB, "share/gb/stratego.0/stratego.pp"]]
	   ,sdf-to-stratego)
*)

  sdf-to-stratego =
    Definition(filter(module2stratego))

signature
  constructors
    Definition : List(Module) -> Definition

rules

  module2stratego : 
    Module(n,is,sections) -> Module(n,<concat>[[prelude],moditems,moditems'])
    where <filter(imports2moditems);concat> is => moditems
        ; <filter(section2moditems(!n));concat> sections => moditems'
        ; !Imports(["Prelude"]) => prelude

  gram2moditems(n) :
    context-free-syntax(prods)
      -> [Signature(<filter(not(?Constructors([])))>[Constructors(opdecls)]),
           (* The above filter avoids generation of empty operation
              sections, which the current Stratego implementations
              (0.4.7 and before) do not parse correctly. *)
           Overlays(overls),
           Strategies(ms),
           Strategies(bs)] 
    where <filter(prod2oper)>prods => opdecls
        ; <filter(prod2overlay(n))>prods => overls 
        ; <filter(prod2match(n))>prods => ms
        ; <filter(prod2build(n))>prods => bs
\end{code}
