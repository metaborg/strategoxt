module treeviz

imports GraphXML lib

strategies
main = iowrap( treeviz )


rules
treeviz:
   f#(args) -> GraphXML( [], [graph([], edges )] )
   where
     <NewNodeName>f         => f';
     <TreeViz>(f', f, args) => edges

MkEdges( parent, x) :
   f#(args) -> [edge|edges]
   where
     <NewNodeName>f                    => new-name;
     <BuildEdge>(new-name, <parent>()) => edge;
     <x>(new-name, f, args)            => edges

NewNodeName :
   f -> <concat-strings>[<new>(),  f]
   
BuildNode :
   (nm, lbl) -> node([name(<double-quote>nm)],[label([], <double-quote>lbl)])

BuildEdge :
   (s, t) -> edge1([source(s), target(t)])

strategies
TreeViz =
   rec x ({name, label, args, node, edges:
      (
         ?(name,label,[]);![]
      <+
         ?(name, label, args);
         <map(MkEdges(!name,x));concat>args
      )                        => edges;
      <BuildNode>(name, label) => node; 
      ![node|edges]
   })

