[
   RTG              -- V vs=0 is=2 [H hs=1 [KW["regular"] KW["tree"] KW["grammar"]] _1 _2],

   Start            -- H hs=1 [KW["start"] _1],
   Start.1:iter     -- _1,

   ProdRules        -- V vs=0 is =2 [KW["productions"] A (l hs=1, l hs=1, l hs=1) [_1]],
   ProdRules.1:iter -- _1,

   ProdRule         -- R [_1 "->" H hs=1 [_2]],
   ProdRule.2:iter-star-sep -- _1 KW["|"],

   Ref  -- _1,
   Appl         -- H hs=0 [_1 "(" _2 ")"],
   Appl.2:iter-star-sep -- _1 KW[","],

   Nonterm  -- _1,
   Plain    -- _1,
   Quoted   -- H hs=0 ["[" _1 "]"],
   Quoted.1:iter -- _1,
   Chars    -- _1,
   EscapeSeq -- H hs=0 ["\\" _1],

   TupleTerm -- H hs=0 ["<(" _1 ")>"],
   String    -- KW["<string>"],
   Int       -- KW["<int>"],
   NilTerm   -- KW["<nil>"],
   ConsTerm  -- KW["<cons>"],
   ConcTerm  -- KW["<conc>"],
   SomeTerm  -- KW["<some>"],
   NoneTerm  -- KW["<none>"],
   Term      -- _1,

   Bracket          -- H hs=0 ["(" _1 ")"]
]
