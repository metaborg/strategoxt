(*

Copyright (C) 1998, 1999 Eelco Visser <visser@acm.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.

*)

module sieve
imports list-cons lib sunit
signature
  constructors
    primes : list(Int)
    from   : Int -> list(Int)
    sieve  : list(Int) -> list(Int)
    filter : Int * list(Int) -> list(Int)
    take   : Int * list(a) -> list(a)
 
    nil    : list(a)
    cons   : a * list(a) -> list(a)

rules

  A1  : primes -> sieve(from(2))

  A2  : from(x) -> cons(x, from(<add>(x, 1)))

  A5  : sieve(cons(x, y)) -> cons(x, sieve(filter(x, y)))

  A6A : filter(x, cons(y, z)) -> filter(x,z)
	where <divides>(x,y) 
  A6B : filter(x, cons (y,z)) -> cons(y,filter(x,z))
	where <not(divides)> (x,y) 
  (* is there any clean way to define divides?? *)

  A7  : take(0, cons(x, y)) -> nil
  A8  : take(n, cons(x, y)) -> cons(x, take(<minus>(n,1), y))
        where <gt>(n, 0)

(*
  divides: (x,y) -> ()   
     where <mod>(y,x) => 0
*)
  swap : (x,y) -> (y,x)

strategies

  divides = (swap; mod) => 0

(* works: *)
  down(s) = cons(id,s)

(*
Fails in frontend:
  down(s) = filter(id,s)
Fails compiling c code:
  down(s) = primes(s)
*)

  context-sensitive(f : Term * (Term -> Term) -> Term, s) =  
    rec x((f(x) <+ all(x)); try(s; x))

  eval = 
    context-sensitive(down,A1 + A2 + A5 + A6A + A6B + A7 + A8)

  main = 
    test-suite(!"sieve",
      test1
    )

  test1 =
    apply-test(!"test1"
	, eval
	, !take(5,primes)
	, ![]
	)








