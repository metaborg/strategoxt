#!/bin/sh stratego

stratego script

:load "lib.sim"

> echo
> <ReadFromFile> "script9.trm"
> echo
> ?F(x)
> echo
> !x
> echo
> split(!"bla.trm", id)
> WriteToTextFile