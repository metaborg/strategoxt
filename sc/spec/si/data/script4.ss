#!/bin/sh stratego

stratego script

:load "lib.sim"

> !F(F(A()))

strategies
  A = {x: ?F(x); !x}

> A 

:dump "bla.sim" 

rules
  A : F(x) -> x

> A

:load "bla.sim"
> echo
