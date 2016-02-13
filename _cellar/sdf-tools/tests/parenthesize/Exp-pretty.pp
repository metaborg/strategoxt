[
   Mul    -- H hs=1 [_1 "*" _2],
   Div    -- H hs=1 [_1 "/" _2],
   Plus   -- H hs=1 [_1 "+" _2],
   Minus  -- H hs=1 [_1 "-" _2],
   Lt     -- H hs=1 [_1 "<" _2],
   Gt     -- H hs=1 [_1 ">" _2],
   Eq     -- H hs=1 [_1 "==" _2],
   NotEq  -- H hs=1 [_1 "!=" _2],
   And    -- H hs=1 [_1 "&&" _2],
   Or     -- H hs=1 [_1 "||" _2],
   Cond   -- H hs=1 [_1 "?" _2 ":" _3],

   InstanceOf -- H hs=1 [_1 "instanceof" _2],

   PreIncr  -- H hs=1 ["++" _1],
   PreDecr  -- H hs=1 ["--" _1],
   PostIncr -- H hs=1 [_1 "++"],
   PostDecr -- H hs=1 [_1 "--"],

   Var  -- _1,
   Parenthetical -- H hs=0 ["(" _1 ")"]
]
