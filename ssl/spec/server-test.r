module server-test
imports lib communication
strategies

  main = server(add,!"localhost",!6667,!0)

