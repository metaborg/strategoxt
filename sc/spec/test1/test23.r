// testing tuples

module test23
strategies

  Swap : (x, y) -> (y, x)

  Fst : (x, y) -> x

  Snd : (x, y) -> y

  Split(f, g) = !(<f>, <g>)

  Swap2 = Split(Snd,Fst)

  is-pair = (id,id)

  main = 
    !("a", "b");
    Swap;
    is-pair;
    Swap2;
    ?("a", "b")

