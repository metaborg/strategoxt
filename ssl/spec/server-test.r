module server-test
imports lib communication
strategies

  main = id

  bla = server(add,!"localhost",!6667,!0)

