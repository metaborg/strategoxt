#!/bin/sh stratego

stratego script
:load "lib.sim"

> echo
> !"abc"
> echo
> "def"; !A() <+ "abc"; !B()
> echo

rules

  MkInput : x -> Input(x)

> <ArgOption("-s", !Ignore()) + 
   ArgOption("-i", MkInput)> ["-i", "bla"] 
  <+ echo
> echo
