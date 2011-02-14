[
   definition -- 
      V vs=1 [KW["definition"] _1],

   module -- V [ H [KW["module"] _1] V vs=1[_2 _3]],

   module -- V [ H [KW["module"] _1] V vs=1[_2 _3]],
   module.2:iter-star -- _1,

   imports -- H[ KW["imports"] HV[_1]],
   exports -- V is=2 [KW["exports"] V vs=1[_1]],
   hiddens -- V is=2 [KW["hiddens"] V vs=1[_1]],

   module         -- _1,
   renamed-module -- V vs=0 is=2 [ _1 _2 ],
    
   syntax   -- V is=2 [KW["syntax"] A(l,l,l,l)[ _1 ]],

   prod     -- R[ H[_1] "->" H hs=0[_2] _3],
   no-attrs --,
   attrs    -- H hs=0 ["{" H[_1] "}"],
   attrs.1:iter-star-sep --  H hs=0 [_1 KW[","]],

   lexical-syntax -- 
      V is=2 [H[ KW["lexical"] KW["syntax"]] A(l,l,l,l)[_1]],
      
   context-free-syntax -- 
      V is=2 [H[KW["context-free"] KW["syntax"]] A(l,l,l,l)[_1]],
      
   variables -- 
      V is=2 [KW["variables"] A(l,l,l,l)[_1]],
      
   lexical-variables -- 
      V is=2 [H[KW["lexical"] KW["variables"]] A(l,l,l,l)[_1]],

   lexical-priorities -- 
      V is=2 [H[KW["lexical"] KW["priorities"]] _1],

   priorities --
      V is=2 [KW["priorities"] _1],
   priorities.1:iter-star-sep -- V vs=0 [_1 KW[","]],

   context-free-priorities -- 
      V is=2 [H[KW["context-free"] KW["priorities"]] _1],
   context-free-priorities.1:iter-star-sep -- V vs=0 [_1 KW[","]],

   restrictions -- 
      V is=2[ KW["restrictions"] _1],

   lexical-restrictions -- 
      V is=2 [H[KW["lexical"] KW["restrictions"]] _1],
      
   context-free-restrictions -- 
      V is=2[ H[KW["context-free"] KW["restrictions"]] _1],

   follow -- R[HV[_1] H[KW["-/-"] H[_2]]],
      
   aliases --
      V is=2 [ KW[ "aliases"] A(l,l,l)[_1]],

   alias --
      R[ H[_1] KW["->"] H[_2]],

   empty-grammar -- KW["(/)"], 
   conc-grammars -- V vs=1 [_1 _2],

   reject     -- KW["reject"],
   prefer     -- KW["prefer"],
   avoid      -- KW["avoid"],

   assoc      -- _1,
   left       -- KW["left"],
   right      -- KW["right"],
   non-assoc  -- KW["non-assoc"],
   assoc      -- KW["assoc"],
   bracket    -- KW["bracket"],

   char-class                    -- _1,
   seq-lookahead                 -- _1 KW["."] _2,
   single                        -- _1,
   alt                           -- _1 KW["|"] _2,
   list                          -- KW["[["] _1 KW["]]"],
   list.1:iter-star-sep          -- _1 KW[","],



   prod-fun -- R[H[_1 "(" _2 ")"] "->" H hs=0 [_3] _4],
   prod-fun.2:iter-star-sep -- H hs=0[ _1 KW[","]],

   label -- H hs=0[_1 ":" _2],
   lit    -- _1,
   ci-lit -- _1,

   sorts -- H [ KW["sorts"] HV[_1]],
   sort  -- _1,
   parameterized-sort            -- H hs=0 [_1 KW["[["] _2 KW["]]"]],
   parameterized-sort.2:iter-sep -- _1 KW[","],

   unparameterized      -- _1,
   parameterized        -- H hs=0 [_1 KW["["] H hs=1[_2] KW["]"]],
   parameterized.2:iter -- _1,

   opt           -- H hs=0 [H[_1] KW["?"]],
   iter          -- H hs=0 [H[_1] KW["+"]],
   iter-star     -- H hs=0 [H[_1] KW["*"]],

   iter-sep      -- H hs=0 ["{" H [_1 _2] "}" KW["+"]],
   iter-star-sep -- H hs=0 ["{" H[_1 _2]  "}" KW["*"]],
   iter-n        -- H hs=0 ["{" _1        "}" _2 KW["+"]],
   iter-sep-n    -- H hs=0 ["{" H[_1_2]   "}" _3 KW["+"]],

   tuple                         -- KW["<"] _1 KW[","] _2 KW[">"],
   tuple.2:iter-sep              -- _1 KW[","],
   pair                          -- _1 KW["#"] _2,
   func                          -- KW["("] _1 KW["=>"] _2 KW[")"],
   alt                           -- _1 KW["|"] _2,
   strategy                      -- KW["("] _1 KW["->"] _2 KW[")"],

   numeric                       -- _1,
   short                         -- _1,
   range                         -- _1 KW["-"] _2,
   conc                          -- _1 _2,
   absent                        -- ,
   present                       -- _1,
   simple-charclass              -- H hs=0 [KW["["] _1 KW["]"]],
   comp                          -- H hs=0 [KW["~"] _1],
   diff                          -- _1 KW["/"] _2,
   isect                         -- _1 KW["/\\"] _2,
   union                         -- _1 KW["\\/"] _2,
   char-class                    -- _1,

   simple-group -- _1,
   prods-group  -- H[KW["{"] V[_1] KW["}"]],
   assoc-group  --
     V vs=0 [
       V vs=0 is=2 [
         H hs=0 [KW["{"] _1 KW[":"]]
         V vs=0 [_2]
       ]
       KW["}"]
     ],

   assoc-group.2:iter-star -- _1,

   chain                         -- _1,
   chain.1:iter-sep              -- H [_1 KW[">"]],
   assoc                         -- HV [_1 _2 _3],
   lifting                       -- KW["`"] _1 KW["`"],
   empty                         -- KW["("] KW[")"],
   seq                           -- KW["("] _1 _2 KW[")"],
   seq.2:iter                    -- _1,

   seq                           -- KW["("] _1 KW[")"],
   seq.1:iter                    -- _1,

   with-arguments      -- V vs=0 [_1 _2],
   non-transitive      -- H hs=1 [_1 "."],
   default             -- H hs=0 ["<" _1 ">"],
   default.1:iter-sep  -- H hs=0 [_1 ","],


   seq-symbol                    -- KW["("] _1 _2 KW[")"],
   seq-symbol.2:iter             -- _1,

   renamings -- H hs=1 [KW["["] V vs=0 [A(l,l,l) [_1]] KW["]"]],
   renamings.1:iter-star -- _1,
   production --  R [ _1 "=>" _2],
   symbol     --  R [ _1 "=>" _2],

   id             -- KW["id"] KW["("] _1 KW[")"],
   imp-section    -- _1,

   cf     -- H hs=0[KW["<"] _1 KW["-CF"] KW[">"]],
   lex    -- H hs=0[KW["<"] _1 KW["-LEX"] KW[">"]],
   varsym -- H hs=0[KW["<"] _1 KW["-VAR"] KW[">"]],

   layout      -- KW["LAYOUT"],
   start       -- KW["<START>"],
   file-start  -- KW["<Start>"],
   top         -- KW["\\TOP"],
   eof         -- KW["\\EOF"],
   bot         -- KW["\\BOT"],
   label_start -- KW["\\LABEL_START"],


   present    -- KW["e"] _1,
   absent     -- ,
   real-con   -- _1 KW["."] _2 _3,
   natural    -- _1,
   positive   -- KW["+"] _1,
   negative   -- KW["-"] _1,
   qlit       -- _1,
   quoted     -- _1,
   uqlit      -- _1,
   unquoted   -- _1,
   not-empty  -- KW["["] _1 KW["]"],
   not-empty.1:iter-star-sep  -- _1 KW[","],
   int      -- _1,
   real     -- _1,
   constant -- _1,
   list     -- _1,
   fun      -- _1,
   appl     -- H hs=0 [_1 KW["("] _2 KW[")"]],
   appl.2:iter-sep        -- _1 KW[","],
   annotation             -- KW["{"] _1 KW["}"],
   annotation.1:iter-sep  -- _1 KW[","],
   annotated-constant     -- _1 _2,
   annotated-list         -- _1 _2,
   annotated-fun          -- _1 _2,
   annotated-appl             -- _1 KW["("] _2 KW[")"] _3,
   annotated-appl.2:iter-sep  -- _1 KW[","],
   term                       -- _1,

   placeholder                   -- KW["<"] _1 KW[">"],
   annotated-placeholder         -- KW["<"] _1 KW[">"] _2,

   context-free-start-symbols --
        V is=2 [H[KW["context-free"] KW["start-symbols"]] HV[_1]],
   kernel-start-symbols       -- V is=2 [KW["start-symbols"] HV[_1]],
   lexical-start-symbols      --
        V is=2 [H[KW["lexical"] KW["start-symbols"]] HV[_1]],

   bracket-symbol -- KW["("] _1 KW[")"],
   Parenthetical  -- KW["("] _1 KW[")"]
]
