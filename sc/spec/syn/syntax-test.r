\literate[{\btt SYNTAX-TEST}]

\begin{code}
module syntax-test
imports stratego

rules

  A   : F(x, a[G(x)], b) -> F(x, a[H(b)], b)

(*
 * Comment with nested *s
 *)

  StringsWithQuotes : "\"quoted\"" -> "unquoted"

\end{code}
