module nonterminal-tree
imports lib asfix verbalize-sdf
strategies

  nonterminal-tree =
    iowrap(topdown(try(ApplToSort)))

  ApplToSort :
    appl(prod(as, a, _), ts) -> c#(ts)
    where <![["\""],<Sym2Strs>,["\""]];concat; debug(!"symbol: "); concat-strings <+ debug(!"not a symbol: ")> a => c
