#!/bin/sh stratego

stratego script

rules
  split(f,g) : x -> (<f>x, <g>x)

strategies
  printnl    = prim("_ST_printnl")
  debug      = where(split(!stderr(), \x -> [x]\); printnl)
  debug(msg) = where(split(!stderr(), \x -> [<msg>(),x]\); printnl)

> !F(F(A())); debug
> split(!B(), !C())
> debug(!"The first term: ")


