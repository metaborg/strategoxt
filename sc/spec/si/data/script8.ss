#!/bin/sh stratego

stratego script
:load "lib.sim"
> parse-options(io-options)
> open(!"abc.trm")
> B
> echo(!"after first reduction: ")
> A <+ echo(!"A does not apply here: ")
> Succ(A)
> save(!"def.trm")
> echo
