module parser
imports lib

strategies

  main = stdio(split(parse1, parse2))

signature 
  constructors
    IF      : Int -> Instruction
    LOOP    : Int -> Instruction
    ENDIF   : Int -> Instruction
    ENDLOOP : Int -> Instruction
    A	    : Int -> Instruction

rules

  Trans : (Cons(LOOP(ln), as), bs) -> (as, Cons(LOOP(ln), bs))

  Trans : (Cons(ENDLOOP(ln), as), Cons(body, Cons(LOOP(ln'), bs))) ->
          (as, Cons(Loop(ln', ln, body), bs))

  Trans : (Cons(IF(ln), as), bs) -> (as, Cons(IF(ln), bs))

  Trans : (Cons(ENDIF(ln), as), Cons(body, Cons(IF(ln'), bs))) ->
          (as, Cons(If(ln', ln, body), bs))

  Trans : (Cons(A(ln), as), bs) -> (as, Cons(A(ln), bs))

  (* similarly for other tokens *)

strategies

  parse1 = 
	split(id, ![]); 
	repeat(Trans); 
	Snd

rules

  Shift(shape) : 
	(Cons(x, as), bs) -> (as, Cons(x, bs))
	where <shape> x

  Reduce(p) :
	(as, Cons(end, Cons(bod, Cons(beg, bs)))) -> 
	(as, Cons(t, bs))
	where <p> (beg, bod, end) => t

strategies

  parse-if = 
	Reduce(\ (IF(ln1),body,ENDIF(ln2)) -> 
		 If(ln1,ln2,body) \ )

  parse-loop = 
	Reduce(\ (LOOP(ln1),body,ENDLOOP(ln2)) -> 
		 Loop(ln1,ln2,body) \ )

  parse2 = 
	split(id, ![]);
	repeat((parse-if + parse-loop + 
		       Shift(A(id) + IF(id) + ENDIF(id) + 
			     LOOP(id) + ENDLOOP(id))));
	Snd
