module test20
strategies

  main =
    test1; test2; test3; test4

  test1 =
    !"a";
    !(<id>, <id>);
    ?("a","a");
 
  test2 =
    !"b";
    !(<id>, <!(<id>,<id>)>);
    ?("b",("b","b"));

  test3 =
    !"c";
    !(<id>, (<id>,<id>));
    ?("c",("c","c"))
