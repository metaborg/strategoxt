module test34
imports option dynamic-rules io

strategies

   main =
     test1
     ; test2
     //; test3
     //; test4
     ; say(!"success")
     ; <exit> 0

   test1 =
     say(!"test1")
     ; rules(DynRule1 : None() -> Some("Blaat"))
     ; <DynRule1> None()
     ; say(!"test1 yes")

   test2 =
     say(!"test2")
     ; rules(DynRule2 : None(){t*} -> Some("Blaat"))
     ; <DynRule2> None(){"whatever"}
     ; say(!"test2a yes")
     ; <DynRule2> None()
     ; say(!"test2b yes")

   test3 =
     say(!"test3")
     ; rules(DynRule3 : Some("aap"){t*} -> Some("Blaat"))
     ; <DynRule3> Some("aap"){"whatever"}
     ; say(!"test3a yes")
     ; <DynRule3> None()
     ; say(!"test3b yes")

   test4 =
     say(!"test4")
     ; rules(DynRule4 : None() -> Some("Blaat"))
     ; <DynRule4> None(){"whatever"}
     ; say(!"test4 yes")