  share' = rec x(explode-term;
		(id, list(x); unzip);
		Share);
          \(x, y) -> x\

rules

  Share : 
	(f, (ts, es)) -> t''
	where <mkterm> (f, ts) => t;
	      <common-union> es => (cs, zs); 
	      (not(!cs => []); (<map(new)> cs => xs;
	                        <subs(id)> (cs, xs, (t, zs)) => (t', zs');
 	                        !(Let(<zip(id)>(xs, cs), t'), Cons(t', zs'))) => t''
	       <+ !(t, Cons(t, zs)) => t'')


  SubTerms : (f, ts) -> (t, sts)
	where <unzip; \(_,xs) -> <concat> xs\> ts => sts;
	      <mkterm> (f, ts) => t

strategies

  subterms = rec x(explode-term; (id, list(x)); SubTerms)

strategies

  common-union = debug; split([] <+ foldr1(isect), foldr(![],union)); debug

(* equality modulo alpha renaming *)