\literate[{\tt VISAMB}: Visualize Ambiguities]

	Usage: visamb.comp -pp -i parsetree.asfix -o parsetree.ambs

	This module defines a strategy to extract and display the
	ambiguities in a parse tree represented in AsFix.  Ambiguities
	are displayed by printing the non-terminals of the nodes of
	the parse trees in the ambiguities. For instance, consider
	the syntax definition

\begin{verbatim}
definition
module Main
exports
  sorts Exp
  lexical syntax
    [\ \t\n] -> LAYOUT
  context-free syntax
    "id"    -> Exp
    Exp Exp -> Exp
\end{verbatim}

	The following displays the ambiguity caused by the phrase
	\verb|id id id|:

\begin{verbatim}
# ambiguities = 1
* id id id
+ <Exp-CF>
    <Exp-CF>
      "id"
    <LAYOUT?-CF>
      <LAYOUT-CF>
        " "
    <Exp-CF>
      <Exp-CF>
        "id"
      <LAYOUT?-CF>
        <LAYOUT-CF>
          " "
      <Exp-CF>
        "id"
+ <Exp-CF>
    <Exp-CF>
      <Exp-CF>
        "id"
      <LAYOUT?-CF>
        <LAYOUT-CF>
          " "
      <Exp-CF>
        "id"
    <LAYOUT?-CF>
      <LAYOUT-CF>
        " "
    <Exp-CF>
      "id"
\end{verbatim}
	
	Note: Only the inner ambiguities are displayed, i.e., if a
	phrase \emph{and} one of its sub-phrases are ambiguous, only
	the ambiguities of the sub-phrase is displayed.

	\paragraph{Main}

	The strategy first collects the ambiguities, then abbreviates
	them to the tree format shown above, and finally pretty-prints
	the tree using the text module.

\begin{code}
module visamb
imports lib asfix ppp-wrap gt-paths
signature
  constructors
    amb-abbr : String * AbbrTree -> AmbAbbr
strategies

  main = 
    parse-options(io-options); 
    store-options;
    (
       need-help(default-usage)
    <+ 
       input-file;
       apply-strategy((id,Visamb));
       ppp-output-file( !["-p", "./visamb.pp", "-p", 
                        <concat-strings>[GT,"/share/gt/sdf.cons.pp"]]);
       report-success
    <+ 
       report-failure
    )


  Visamb = 
	collect-ambs;
        abbrev-ambs
\end{code}

	\paragraph{Collection}

	Ambiguity nodes are collected bottom-up.

\begin{code}
strategies

  collect-ambs = parsetree(bu-collect(amb(id)), id)
\end{code}

	\paragraph{Term Format}

\begin{code}
strategies

  parse-tree = rec x(is-int + 
                     amb(list(x)) + 
                     appl(prod(id,id,id), list(x)))

  format = parsetree(list(amb(list(parse-tree))), is-int)

\end{code}

	\paragraph{Abbreviation}

	An ambiguity consists of a list of parse trees. It is abbreviated
	as \verb|amb-abbr(s, tas)|, where \verb|s| is the yield of the
	tree, i.e., the string underlying the parse tree, and \verb|tas|
	is the list of abbreviated trees.

\begin{code}
strategies

  abbrev-ambs = parsetree(map(\x -> root(<abbrev-amb>x)\ ), int-to-string)
  
rules

  abbrev-amb : amb(ts) -> amb-abbr(<Hd; yield> ts, <map(abbrev-term)> ts)

strategies

  abbrev-term = rec x((is-int + ProjectAmb) <+
                      Nsplit(get-sort, Lexical <+ get-args; map(x)))

rules

  get-sort : appl(prod(args, res, attrs), targs) -> res

  get-args : appl(p, as) -> as

  Nsplit(f, g) : x -> N(<f> x, <g> x)

  ProjectAmb : amb([x|xs]) -> x
\end{code}

	\paragraph{Implode lexicals}

\begin{code}
rules
  F  : appl(p, ts) -> <concat> ts
  F' : x -> [x]
 
  MkLex : x -> lexical(x)
strategies

  yield = rec x((appl(id, map(x)); F) <+ F'); implode-string

  Lexical =
	appl(prod([lex(id)],cf(id),id), id); yield; MkLex; F' 
        + appl(prod(id,lit(id),id), id); ![]
\end{code}


