module module1
imports module2

strategies

  f(s) = C(s <+ id)

  h(s) = id

  h(s) = fail

  h = ?C(_)

  main = f(id)

