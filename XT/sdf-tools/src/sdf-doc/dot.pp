[
   dot-graph -- V [ Vis=2 [H[  _1 _2 _3 ] 
                           KW["{"] _4] KW["}"]],
   dot-graph.1:opt -- KW["strict"],

   dot-graph.2:alt -- KW["graph"] KW["digraph"],

   alias -- H[ _1 KW["="] _2],
   attr-id -- H[_1 KW["="] _2],
   attr-num-con -- H[_1 KW["="] _2],
   node-stmt -- H[_1 KW["["] _2 KW["]"]],
   node-stmt.2:opt -- _1,
   edge-stmt -- H[ _1 _2 _3 KW["["] _4 KW["]"]],
   edge-stmt.1:alt -- _1 _2,
   edge-stmt.3:iter-sep -- _1 _2,
   edge-stmt.3:iter-sep.1:alt -- _1 _2,
   edge-stmt.4:opt -- _1,
   sub-graph -- KW["subgraph"] _1 _2,
   sub-graph.2:opt -- _1,
   sub-graph.2:opt.1:seq -- KW["{"] _1 KW["}"],
   arrow -- KW["->"],
   line -- KW["--"]
]
