[
   RHG              -- V vs=0 is=2 [H hs=1 [KW["regular"] KW["hedge"] KW["grammar"]] _1 _2],

   Start            -- H hs=1 [KW["start"] _1],
   Start.1:iter     -- _1,

   ProdRules        -- V vs=0 is =2 [KW["productions"] A (l hs=1, l hs=1, l hs=1) [_1]],
   ProdRules.1:iter -- _1,

   ProdRule         -- R [_1 "->" H hs=1 [_2]],
   ProdRule.2:iter-star-sep -- _1 KW["|"],
   RHG              -- H hs=1 [_1 _2],
   Content          -- H hs=0 ["(" _1 ")"],
   Ref              -- _1,

   Nonterm          -- _1,
   String           -- KW["<string>"],
   Int              -- KW["<int>"],
   Term             -- _1,
   Empty            -- KW["/"],
   Sym              -- _1,

   Bracket          -- H hs=0 ["(" _1 ")"],

   Star             -- H hs=0 [_1 "*"],
   Plus             -- H hs=0 [_1 "+"],
   Opt              -- H hs=0 [_1 "?"],
   Choice           -- H hs=1 [_1 "|" _2],
   Seq              -- H hs=1 [_1 _2]
]