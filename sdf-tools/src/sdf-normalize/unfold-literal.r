\literate[unfold-literal]

	\begin{abstract}
	Replace sorts that represent a literal, i.e., are defined by a 
	single production of the form \verb|"ccc" -> s|, by that
	literal.
	\end{abstract}

\begin{code}
module unfold-literal
imports Sdf-Syntax lib sdf-bracket gt-paths
strategies

(*  unfold-literal = 
    pppwrap(!["-l", "sdf", "-v", "2.1"]
           ,!["-p", <concat-strings>[SDFTOOLS, "/share/gt/sdf.cons.pp"]]
           ,UnfoldLiterals; SdfBracket)
*)

    unfold-literal = iowrap(UnfoldLiterals; SdfBracket)


  UnfoldLiterals =
  where(find-literals => subst)
  ; topdown(repeat(replace-literal(!subst)))

  find-literals =
  where(<table-create> "literals")
  ; alltd(add-production)
  ; <table-getlist> "literals"
  ; where(<table-destroy> "literals")
  ; filter((id,[[lit(id)]]; Hd; Hd)
  )

  add-production = 
  where(prod(?syms,?s,not(oncetd(reject)))
  ; <table-push>("literals", s, syms)
  )

  replace-literal(subst) =
    \ sort(s) -> lit(<lookup> (sort(s), <subst>())) \

  replace-literal(subst) =
    \ [prod([lit(_)],sort(s),_) | x] -> x
      where <lookup> (sort(s), <subst>()) \
\end{code}