module treeviz

imports GraphXML lib

strategies
main = iowrap( treeviz )

treeviz = 
   collect( NodeToEdges );concat; ?edges;
   !GraphXML( [], [graph([], edges )] )
   

NodeToEdges =
   ?f#( args );
   !args;
   map(NodeToEdge(!target(<quote>f)))

NodeToEdge(target) =
   ?f#(_); 
   !edge([source(<quote>f), <target>()] )

quote =
   explode-string
   ; Quote
   ; implode-string

rules
Quote:
   chars       -> <concat>[[34],chars,[34]]
