module Latexify
imports lib abox-ext

signature
  sorts Module Token
  constructors
    Module: List(Token) -> Module
    Hide: String -> Token
    Show: String -> Token
    LComment: String -> Token
    NewLine: String -> Token
    Space: String -> Token
    Code: List(Token) -> Extent   
    Lit: String -> Extent   
    

strategies

  latexify = iowrap(
    ?Module(tokens);
    !tokens;
    rec r(remove-hidden(r));
    rec g(group-tokens(g));
    map(Code(try(simplify-newlines); concat-tokens) + Lit(fix-comment));
    map(to-latex); ?ts; !V0(ts)
  )

  simplify-newlines =
    drop-while(NewLine(id));
    reverse;
    drop-while(Space(id) + NewLine(id));
    reverse

  fix-comment =
    explode-string;
    \[a, b, c | xs] -> xs\;
    reverse;
    \[a, b | xs] -> xs\;
    reverse;
    implode-string

rules

  remove-hidden(r): [] -> []
  remove-hidden(r): [Hide(_) | ts] -> <r> ts'
    where <drop-until(?Show(_)); Tl <+ ![]> ts => ts'
  remove-hidden(r): [t | ts] -> [t | <r> ts]

  group-tokens(g): [] -> []
  group-tokens(g):
    [LComment(x) | ts] -> [Lit(x) | <g> ts]
  group-tokens(g):
    [t | ts] -> [Code([t | ts']) | <g> ts'']
    where
      <take-while(not(?LComment(_)))> ts => ts';
      <drop-until(?LComment(_)) <+ ![]> ts => ts''

  to-latex: Lit(s) -> S(s)
  to-latex: Code(s) -> 
    V0([ S("\\begin{cverbatim}")
       , S(s)
       , S("\\end{cverbatim}")
       ])

strategies

  concat-tokens =
    map(\_#([x]) -> x\); concat-strings

