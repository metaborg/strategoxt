module improper-list-test
imports io

signature
  constructors
    Bla : List(a) -> List(a)

strategies 

  main = <WriteToTextFile> 
            (stdout, Cons("a", Cons("b", Bla(Cons("c", Cons("d", Nil))))))