#!/bin/sh stratego

stratego script
:load "lib.sim"
#> <set-config> ("-d", 1)
imports script6

> id
#> parse-options(io-options)
> open(!"abc.trm")
> B
> A <+ echo(!"A does not apply here: ")
> Succ(A)
> save(!"def.trm")
> echo
