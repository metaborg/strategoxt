[
   "sdf-2.1" -- _1,
   START -- KW["<START>"],
   Start -- KW["<Start>"],

   lexical-priorities -- 
      V is=2[ H[KW["lexical"] KW["priorities"]] _1],

   context-free-priorities -- 
      V is=2 [ H[KW["context-free"] KW["priorities"]] _1],

   lexical-restrictions -- 
      V is=2 [ H[KW["lexical"] KW["restrictions"]] _1],
      
   context-free-restrictions -- 
      V is=2[ H[KW["context-free"] KW["restrictions"]] _1],
      
   Definition -- 
      V vs=1 [KW["definition"] _1],

   Definition.1:iter-star -- _1,

   definition -- 
      V vs=1 [KW["definition"] _1],

   definition.1:iter-star -- _1,


   attrs -- 
      H hs=0[ "{" H[_1] "}"],
      
   attrs.1:iter-star-sep -- 
      H hs=0 [_1 KW[","]],

   no-attrs --,

   prod -- 
      R[ H[_1] "->" H hs=0[_2] _3],
      
   syntax -- 
      V is=2 [KW["syntax"] A(l,l,l,l)[ _1 ]],
      
   lexical-syntax -- 
      V is=2[ H[ KW["lexical"] KW["syntax"]] A(l,l,l,l)[_1]],
      
   context-free-syntax -- 
      V is=2[ H[KW["context-free"] KW["syntax"]] A(l,l,l,l)[_1]],
      
   variables -- 
      V is=2[ KW["variables"] A(l,l,l,l)[_1]],
      
   lexical-variables -- 
      V is=2[ H[KW["lexical"] KW["variables"]] A(l,l,l,l)[_1]],
      
   cf -- 
      H hs=0[KW["<"] _1 KW["-CF"] KW[">"]],
      
   lex -- 
            H hs=0[KW["<"] _1 KW["-LEX"] KW[">"]],
            
   varsym -- 
      H hs=0[KW["<"] _1 KW["-VAR"] KW[">"]],
      
   layout -- 
      KW["LAYOUT"],
      
   Module -- V [ H [KW["module"] _1] V vs=1[_2 _3]],
   module -- V [ H [KW["module"] _1] V vs=1[_2 _3]],
      
   Module.2:iter-star -- _1,
   Module.3:iter-star -- _1,
   module.2:iter-star -- _1,
   module.3:iter-star -- _1,
   
   Exports --  V is=2 [KW["exports"] V vs=1[_1]],
   Hiddens --  V is=2 [KW["hiddens"] V vs=1[_1]],
   exports --  V is=2 [KW["exports"] V vs=1[_1]],
   hiddens --  V is=2 [KW["hiddens"] V vs=1[_1]],

   RenamedModuleName -- H hs=0 [ _1 KW["["] H[_2] KW["]"]],
   RenamedModule  -- V vs=0 is=2 [ _1 _2 ],
   renamed-module -- V vs=0 is=2 [ _1 _2 ],

   renamings -- H hs=1 [KW["["] V vs=0 [A(l,l,l) [_1]] KW["]"]],
   renamings.1:iter-star -- _1,

   renaming --  R [ _1 "=>" _2],
   symbol   --  R [ _1 "=>" _2],  
    
   Id -- KW["id"] H hs=0["(" _1 ")"],
      
   Imports -- H[ KW["imports"] HV[_1]],
   imports -- H[ KW["imports"] HV[_1]],

   empty -- H hs=0 [KW["("] KW[")"]],
      
   seq -- "(" _1 _2 ")",
   seq.2:iter -- _1,
   
   opt           -- H hs=0 [H[_1] KW["?"]],
   iter          -- H hs=0 [H[_1] KW["+"]],
   iter-star     -- H hs=0 [H[_1] KW["*"]],

   iter-sep      -- H hs=0 ["{" H [_1 _2] "}" KW["+"]],
   iter-star-sep -- H hs=0 ["{" H[_1 _2]  "}" KW["*"]],
   iter-n        -- H hs=0 ["{" _1        "}" _2 KW["+"]],
   iter-sep-n    -- H hs=0 ["{" H[_1_2]   "}" _3 KW["+"]],
          
   set -- KW["Set"] H hs=0["[" _1 "]"],
   pair -- _1 KW["#"] _2,
      
   func -- 
      "(" _1 KW["=>"] _2 ")",
      
   alt -- 
      _1 KW["|"] _2,
      
   perm -- 
      KW["<<"] _1 KW[">>"],
      
   left -- KW["left"],

   right -- KW["right"],

   non-assoc -- KW["non-assoc"],

   assoc -- KW["assoc"],

   bracket -- KW["bracket"],

   atr -- _1,

   simple-group -- _1,

   prods-group -- 
      H[KW["{"] V[_1] KW["}"]],
      
   assoc-group -- V vs=0 is=2 [ H hs=0 [KW["{"] _1 KW[":"]] H hs=0 [_2 KW["}"]]],
      
   priority-chain -- _1,

   priority-chain.1:iter-sep -- 
      H [_1 KW[">"]],
      
   priority-assoc --
      HV[_1 _2 _3],

   priority-list --
      _1,

   priority-list.1:iter-star-sep --
      H hs=0[_1 KW[","]],
      
   priorities -- 
      V is=2[ KW["priorities"] _1],
      
   char-class -- _1,

   sort -- _1,

   Sorts -- 
          H [ KW["sorts"] HV[_1]],
          
   lit -- _1,
   
   prod-fun -- 
      R[H[_1 "(" _2 ")"] "->" Hhs=0[_3] _4],
      
   prod-fun.2:iter-star-sep -- 
      H hs=0[ _1 KW[","]],
      
   label --
      H hs=0[_1 ":" _2],
      
   cons -- 
      H hs=0[ KW["cons"] "(" _1 ")"],
      
   constructor -- 
      KW["constructor"],

   memo -- KW["memo"],

   lookahead-seq -- 
      H hs=0[_1 KW["."] _2],
      
   lookaheads-alt -- 
      H[ _1 KW["|"] _2],
      
   lookaheads-list -- 
      H hs=0 ["[[" _1 "]]"],
      
   lookaheads-list.1:iter-star-sep -- 
      H hs=0[_1 ","],
      
   follow-restriction -- 
      R[HV[_1] H[KW["-/-"] H[_2]]],
      
   restrictions -- 
      V is=2[ KW["restrictions"] _1],
      
   reject -- KW["reject"],

   prefer -- KW["prefer"],

   avoid -- KW["avoid"],

   aliases -- 
      V is=2 [ KW[ "aliases"] A(l,l,l)[_1]],
      
   alias -- 
      R[ H[_1] KW["->"] H[_2]],
      
   empty-grammar -- KW["(/)"],

   conc-grammars -- V vs=1 [_1 _2],

   range -- _1 KW["-"] _2,

   conc-ranges -- _1 _2,

   no-charranges --,

   simple-charclass -- 
      H hs=0[KW["["] _1 KW["]"]],
      
   not-charclass -- 
      H hs=0[KW["~"] _1],
      
   diff-charclass -- 
      _1 KW["/"] _2,
      
   and-charclass -- 
      _1 KW["/\\"] _2,

   or-charclass -- 
      _1 KW["\\/"] _2,

   bracket-symbol --
      KW["("] _1 KW[")"]
]