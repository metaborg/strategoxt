[
   Document -- V vs=1 [ _1 _2 _3 ],

   Prologue -- V vs=1 [ _1 _2 _3 ],
   Prologue.1:opt -- _1,
   Prologue.2:iter-star -- _1,
   Prologue.3:opt -- _1,
   Epilogue -- _1,
   Epilogue.1:iter-star -- _1,

   XMLDecl -- H hs=1 [ KW["<?xml"] _1 _2 _3 KW["?>"]],
   XMLDecl.2:opt -- _1,
   XMLDecl.3:opt -- _1,
   StandaloneDecl -- H hs=0 [KW["standalone"] KW["="] KW["\""] _1 KW["\""]],
   VersionDecl    -- H hs=0 [KW["version"]    KW["="] KW["\""] _1 KW["\""]],
   EncodingDecl   -- H hs=0 [KW["encoding"]   KW["="] KW["\""] _1 KW["\""]],
   Standalone -- _1,
   Encoding   -- _1,
   Version    -- _1,

   DocTypePrologue -- V vs=1 [ _1 _2 ],
   DocTypePrologue.2:iter-star -- _1,
   DocTypeDecl -- H hs=1 [KW["<!DOCTYPE"] _1 _2 KW[">"]],

   PublicExternalID -- H hs=1 [ KW["SYSTEM"] KW["\""] _1 KW["\""]],
   SystemExternalID -- H hs=1 [ KW["PUBLIC"] KW["\""] _1 KW["\""] KW["\""] _2 KW["\""]],

   System -- _1,
   Public -- _1,

   PI -- H hs=0[ KW["<?"] _1 ] _2 KW["?>"],
   Comment -- _1,
   CDataSection -- _1,

   Text -- _1,
   Text.1:iter-star -- _1,

   EntityRef -- H hs=0 [ "&" _1 ";"],
   Literal   -- _1,

   EmptyElement -- H hs=0 [KW["<"] H hs=1 [ _1 _2 ] KW["/>"]],
   EmptyElement.2:iter-star -- _1,
   Element -- V vs=0 [V is=2 vs=0 [H hs=0 [KW["<"] H hs=1 [ _1 _2 ] KW[">"]] _3] H hs=0 [KW["</"] _4 KW[">"]]],
   Element.2:iter-star -- _1,
   Element.3:iter-star -- _1,
   Attribute -- H hs=0 [_1 KW["="] _2],

   DoubleQuoted -- H hs=0 ["\"" _1 "\""],
   SingleQuoted -- H hs=0 ["\'" _1 "\'"],
   DoubleQuoted.1:iter-star -- _1,
   SingleQuoted.1:iter-star -- _1,

   QName -- _1 _2,
   QName.1:opt -- _1,
   Prefix -- _1 KW[":"]
]