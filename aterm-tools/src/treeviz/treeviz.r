module treeviz

imports GraphXML lib

strategies
main = iowrap( treeviz )


rules
treeviz:
   f#(args) -> GraphXML( [], [graph([], edges )] )
   where
     <NodeName;NewNodeName>f  => f';
     <TreeViz>(f', f, args)   => edges

MkEdges( parent, x) :
   f#(args) -> [edge|edges]
   where
     <NodeName;NewNodeName>f           => new-name;
     <BuildEdge>(new-name, <parent>()) => edge;
     <x>(new-name, f, args)            => edges

NewNodeName :
   f -> <concat-strings>[<new>(),  <explode-string;map( try(\10
->32\));implode-string>f]


NodeName :
   f -> f'
   where
   (
     try(is-int; int-to-string)
   ) => f'

   
BuildNode :
   (nm, lbl) -> node([name(nm')],[label([], lbl')])
   where
     <NodeName;escape;double-quote>nm  => nm';
     <NodeName;escape;double-quote>lbl => lbl'

BuildEdge :
   (s, t) -> edge1([source(s'), target(t')])
   where
     <NodeName;escape;double-quote>s => s';
     <NodeName;escape;double-quote>t => t'
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

