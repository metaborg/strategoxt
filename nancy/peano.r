module peano
imports rho

overlays

  Zero = Con("Zero")

  Succ(t) = App(Con("Succ"), t)

  Plus(t1, t2) = App(App(Con("Plus"), t1), t2)
