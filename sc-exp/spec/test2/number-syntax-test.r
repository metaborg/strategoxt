module number-syntax-test
rules

  bla : 1 -> 2

  blabla : 0.2 -> 0.1

strategies

  main = 
   <bla> 1 => 2;
   <blabla> 0.2 => 0.1

