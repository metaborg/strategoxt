\literate[{\tt ASFIX}]

	Abstract syntax for parse tree representation of SDF2 parsers.

\begin{code}
module asfix
signature
  sorts Sort
  constructors
    layout        : Sort
    cf            : Sort -> Sort
    lex           : Sort -> Sort
    opt           : Sort -> Sort
    seq           : Sort -> Sort
    lit           : String -> Sort
    iter-sep      : Sort * Sort -> Sort
    iter-star-sep : Sort * Sort -> Sort
    iter          : Sort -> Sort
    iter-star     : Sort -> Sort
    alt           : Sort * Sort -> Sort
\end{code}

\begin{code}
  sorts Attribute 
  constructors
    atr      : String -> Attribute
    cons     : String -> Attribute
    no-attrs : List(Attribute)
\end{code}

\begin{code}
  sorts Prod AsFixTerm
  constructors
    prod   : List(Sort) * Sort * List(Attribute) -> Prod
    appl   : Prod * List(AsFixTerm) -> AsFixTerm
    amb    : List(AsFixTerm) -> AsFixTerm
\end{code}

	Note: integers are also AsFixTerms

\begin{code}
  sorts ParseTree
  constructors
    parsetree : AsFixTerm * Int -> ParseTree
\end{code}
