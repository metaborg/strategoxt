[ 
  "stratego-0", _1,
  BuildDefault -- H ["_" _1]
  ,
  Module -- V is=2 [ H [ KW [ "module" ] _1 ] _2 ]
  ,
  Imports -- H [ KW [ "imports" ] HV [ _1 ] ]
  ,
  Signature -- V is=2 [ KW [ "signature" ] _1 ]
  ,
  Overlays -- V is=2 [ KW [ "overlays" ] _1 ]
  ,
  Rules -- V is=2 [ KW [ "rules" ] _1 ]
  ,
  Strategies -- V is=2 [ KW [ "strategies" ] _1 ]
  ,
  Specification -- V is=2 [ KW [ "specification" ] _1 ]
  ,
  Signature -- V is=2 [ KW [ "signature" ] _1 ]
  ,
  Sorts -- H [ KW [ "sorts" ] HV [ _1 ] ]
  ,
  Operations -- V is=2 [ KW [ "operations" ] _1 ]
  ,
  Constructors -- V is=2 [ KW [ "constructors" ] _1 ]
  ,
  Sort -- H hs=0 [ _1 _2 ]
  ,
  Sort.2:iter-star-sep -- _1 ","
  ,
  OpDecl -- H hs=1 [ _1 KW [ ":" ] _2 ]
  ,
  ConstType -- _1
  ,
  FunType -- H hs=1 [ _1 KW [ "->" ] _2 ]
  ,
  FunType.1:iter-star-sep -- _1 "*"
  ,
  Wld -- KW [ "_" ]
  ,
  Var -- _1
  ,
  Str -- _1
  ,
  Int -- _1
  ,
  Op -- H hs=0 [ _1 KW [ "(" ] _2 KW [ ")" ] ]
  ,
  Op.2:iter-star-sep -- _1 ","
  ,
  Rule -- H hs=1 [ _1 KW [ "->" ] _2 _3 ]
  ,
  StratRule -- H hs=1 [ _1 KW [ "-->" ] _2 _3 ]
  ,
  RDef -- H hs=1 [ _1 KW [ "(" ] _2 KW [ ")" ] KW [ ":" ] _3 ]
  ,
  RDef.2:iter-star-sep -- _1 ","
  ,
%% deze is dubbel==ambigu!!
  RDef -- H hs=1 [ _1 _2 KW [ "::" ] _3 ]
  ,
  List -- H hs=0 [ KW [ "[" ] _1 KW [ "]" ] ]
  ,
  List.1:iter-star-sep -- _1 ","
  ,
  Tuple -- H hs=0 [ KW [ "(" ] _1 KW [ ")" ] ]
  ,
  Tuple.1:iter-star-sep -- _1 ","
  ,
  Con -- H hs=0 [ _1 KW [ "[" ] _2 KW [ "]" ] _3 ]
  ,
  App -- H hs=0 [ KW [ "<" ] _1 KW [ ">" ] _2 ]
  ,
  AM -- H hs=1 [ _1 KW [ "=>" ] _2 ]
  ,
  BA -- H hs=0 [ KW [ "<" ] _1 KW [ ">" ] _2 ]
  ,
  SRule -- H hs=1 [ KW [ "<<" ] _1 KW [ ">>" ] ]
  ,
  Id -- KW [ "id" ]
  ,
  Fail -- KW [ "fail" ]
  ,
  Test -- H hs=0 [ KW [ "test" ] KW [ "(" ] _1 KW [ ")" ] ]
  ,
  Not -- H hs=0 [ KW [ "not" ] KW [ "(" ] _1 KW [ ")" ] ]
  ,
  Seq -- HV hs=1 [ _1 KW [ ";" ] _2 ]
  ,
  Choice -- HV hs=1 [ _1 KW [ "+" ] _2 ]
  ,
  LChoice -- HV hs=1 [ _1 KW [ "<+" ] _2 ]
  ,
  Rec -- H hs=1 [ KW [ "rec" ] _1 KW [ "(" ] _2 KW [ ")" ] ]
  ,
  StrCong -- _1
  ,
  IntCong -- _1
  ,
  TupleCong -- H hs=0 [ KW [ "(" ] _1 KW [ "," ] _2 KW [ ")" ] ]
  ,
  TupleCong.2:iter-sep -- _1 ","
  ,
  ListCong -- H hs=0 [ KW [ "[" ] _1 KW [ "]" ] ]
  ,
  ListCong.1:iter-star-sep -- _1 ","
  ,
  Path -- H hs=0 [ _1 KW [ "(" ] _1 KW [ ")" ] ]
  ,
  One -- H hs=0 [ KW [ "one" ] KW [ "(" ] _1 KW [ ")" ] ]
  ,
  Some -- H hs=0 [ KW [ "some" ] KW [ "(" ] _1 KW [ ")" ] ]
  ,
  All -- H hs=0 [ KW [ "all" ] KW [ "(" ] _1 KW [ ")" ] ]
  ,
  Thread -- H hs=0 [ KW [ "thread" ] KW [ "(" ] _1 KW [ ")" ] ]
  ,
  Kids -- KW [ "kids" ]
  ,
  Match -- H hs=0 [ KW [ "?" ] _1 ]
  ,
  Build -- H hs=0 [ KW [ "!" ] _1 ]
  ,
  Scope -- H hs=1 [ KW [ "{" ] _1 KW [ ":" ] _2 KW [ "}" ] ]
  ,
  Scope.1:iter-sep -- _1 ","
  ,
  Where -- H hs=0 [ KW [ "where" ] KW [ "(" ] _1 KW [ ")" ] ]
  ,
  Let -- V [ H [ KW [ "let" ] _1 ] H [ KW [ "in" ] _2 ] ]
  ,
  Call -- H hs=0 [ _1 KW [ "(" ] _2 KW [ ")" ] ]
  ,
%% nodig??
  Call.2:opt -- _1
  ,
  Call.2:opt.1:iter-star-sep -- _1 ","
  ,
  SVar -- _1
  ,
  SDef -- V is=2 [ H hs=0 [ _1 KW [ "(" ] _2 KW [ ")" ] ] H hs=1 [ KW [ "=" ]
                                                          _3 ] ]
  ,
  SDef.2:opt -- _1
  ,
  SDef.2:opt.1:iter-star-sep -- _1 ","
  ,
  Overlay -- V is=2 [ H hs=0 [ _1 KW [ "(" ] _2 KW [ ")" ] ] H hs=1 [ KW [ "="
                                                                      ]
                                                             _3 ]
             ]
  ,
  Overlay.2:iter-star-sep -- _1 ","
  ,
%% niet meet nodig (toch?)
%%  None --
%%  ,
%%  Some -- _1
%%  ,
  Definition -- V vs=1 [ KW [ "definition" ] _1 ]
]
