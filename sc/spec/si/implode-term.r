module implode-term
imports term

strategies

  // imploding terms in abstract syntax format

  implode-term = 
    bottomup(try(
	ImplodeOp 
	+ ImplodeVar	
	+ ImplodeInt
	+ ImplodeString
    ))

rules

   ImplodeOp :
     Op(f, ts) -> f#(ts)

   ImplodeVar :
     Var(x) -> x#([])

   ImplodeInt :
     Int(n) -> n

   ImplodeString :
     String(s) -> s