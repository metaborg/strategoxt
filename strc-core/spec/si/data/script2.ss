#!/bin/sh stratego

stratego script

:load "lib.sim"

> !F(F(A()))

strategies
  A = {x: ?F(x); !G(x)} 

> A
> ?t
> !Pair(t, "a", 1, 1.2)
> ?Pair(_, a, 1, _)
> echo


