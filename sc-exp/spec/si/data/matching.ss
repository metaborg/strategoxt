#!/bin/sh stratego

stratego script
:load "lib.sim"

> !("-i", A())

> {x: ("-s", ?x); !G(x)} //<+ {y: ("-i", ?y); !F(y)}

> echo