module sglr
imports exec 

rules

  sglr : (tbl, 'in, out) -> out
	 where
           <call> ("sglr", ["-p", tbl, "-i", 'in, "-o", out])


  sglr : (tbl, 'in) -> tree
 	 where
	  <conc-strings> ("/tmp/sglr", <get-pid; int-to-string>()) => out; 
	  <sglr> (tbl, 'in, out);
	  <ReadFromFile> out => parsetree(tree,_);
	  <rm-files> [out]
