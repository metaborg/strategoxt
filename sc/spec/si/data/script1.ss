#!/bin/sh stratego

stratego script

rules
  split(f,g) : x -> (<f>x, <g>x)

> split(id, id)

strategies
  printnl    = ?(file, t); prim("SSL_printnl", file, t)
  debug      = where(split(!stderr(), \x -> [x]\); printnl)
  debug(msg) = where(split(!stderr(), \x -> [<msg>(),x]\ ); printnl)

> !F(F(A())); debug
> split(!B(), !C())
> debug(!"The first term: ")


