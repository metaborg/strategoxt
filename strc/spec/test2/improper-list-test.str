module improper-list-test
imports io

signature
  constructors
    Bla : List(a) -> List(a)

strategies 

  main = 
    (!["a" | ["b" | Bla(["c" | ["d" | []]])]] <+ !"a");
    ?"a"
