module test40
imports list-misc string
strategies

  main = foldr(id, conc, explode-string)

