module test27
imports lib
strategies

  main =
    !(); try(test1); ?()

  try(s) = 
    s <+ id

  test1 =
    ?() < fail + !("a")
