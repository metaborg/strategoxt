module client-test
imports lib communication
strategies

  main = id

  bla = <client(?3,id,!"localhost",!6667)>(1,2)
