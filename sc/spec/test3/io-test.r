module io-test
imports io exec
strategies

  main = stdio(Main)

  Main = <ReadFromFile> "a";
	 debug(!"aaa :");
	 split(!"b", id); WriteToTextFile;
	 // <close-file> "b";
	 debug(!"bbb :");
	 <ReadFromFile> "b";
	 debug(!"ccc :")