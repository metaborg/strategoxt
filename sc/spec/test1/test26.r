module test26
imports cpl
strategies

  main =
    cpl-loaded < test1 + id

  test1 =
    (!1 ++ !2 ++ !3); !(<id>, 4); ?(2,4)

