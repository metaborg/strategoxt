#!/bin/sh stratego

stratego script
:load "lib.sim"
imports script6

> id
> parse-options(io-options)
> open(!"abc.trm")
> B
> A <+ echo(!"A does not apply here: ")
> Succ(A)
> save(!"def.trm")