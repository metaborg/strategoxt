#!/bin/sh stratego

stratego script

:load "lib.sim"

strategies
  f = rec h(g; h <+ id)
  g = h
  h = ?F(x); !x

> !F(F(F(A())))

> f
> echo


