module cpl
strategies

  cpl-loaded = 
    ?t; prim("_cpl_loaded", t)

  if-cpl-loaded(s1, s2) =
     not(cpl-loaded); s2 <+ s1

  if-cpl-loaded(s) =
    if-cpl-loaded(s, <debug> "Choice Point Library CPL required"; <exit> 0)
