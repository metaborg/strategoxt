#!/bin/sh stratego

stratego script
:load "sunit.sim"
imports peano

> !Mul(Succ(Succ(Zero())), Succ(Succ(Zero())))
> eval-peano

> echo
