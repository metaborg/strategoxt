#!/bin/sh stratego

stratego script
:load "sunit.sim"
> <set-config>("-d", 1)
imports peano

strategies

  test1 = 
    apply-test(!"test1"
	, eval-peano
	, !Mul(Succ(Succ(Zero())), Succ(Succ(Zero())))
	, !Succ(Succ(Succ(Succ(Zero))))
	)

  test2 = 
    apply-test(!"test2"
	, eval-peano
	, !Plus(Succ(Succ(Zero())), Succ(Succ(Zero())))
	, !Succ(Succ(Succ(Succ(Zero))))
	)

  test3 = 
    apply-test(!"test2"
	, eval-peano
	, !Sub(Succ(Succ(Succ(Zero()))), Succ(Succ(Zero())))
	, !Succ(Zero)
	)

> test-suite(!"peano-test", 
	test1;
	test2;
	test3
  )
