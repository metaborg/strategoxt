#!/bin/sh stratego

stratego script

imports io

> !F(F(A()))

strategies
  A = {x: ?F(x); !x}

> A 

:dump "bla.sim"

rules
  A : F(x) -> x

> A