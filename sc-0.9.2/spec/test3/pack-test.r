module pack-test
imports lib pack

signature
  constructors
    Imports : List(String) -> Section

strategies

  main = stdio(pack-terms)

  pack-terms = 
	pack(read-trm, \Imports(xs) -> xs\ )

  read-trm =
	split(id, !"trm");
	add-extension;
	ReadFromFile