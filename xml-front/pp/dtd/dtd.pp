[
   ExternalDTD                -- V vs=0 [_1],
   ExternalDTD.1:iter-star    -- _1,
   Comment                    -- _1,

   Attribute                  -- _1 KW["="] _2,
   AttListDecl                -- H hs=1 [H hs=0["<!" KW["ATTLIST"]] _1 _2 ">"],
   AttListDecl.2:iter-star    -- _1,                                   
   AttDef                     -- _1 _2 _3,  
                           
   StringType                 -- KW["CDATA"],
   ID                         -- KW["ID"],
   IDREF                      -- KW["IDREF"],
   IDREFS                     -- KW["IDREFS"],
   ENTITY                     -- KW["ENTITY"],
   ENTITIES                   -- KW["ENTITIES"],
   NMTOKEN                    -- KW["NMTOKEN"],
   NMTOKENS                   -- KW["NMTOKENS"],

   NotationType               -- KW["NOTATION"] KW["("] _1 KW[")"],    
   NotationType.1:iter-sep    -- _1 KW["|"],                           
   EnumerationType            -- H hs=0 ["(" _1 ")"],
   EnumerationType.1:iter-sep -- _1 KW["|"],
                  
   Required                   -- KW["#REQUIRED"],                      
   Implied                    -- KW["#IMPLIED"],
   Fixed                      -- KW["#FIXED"] _1,
   Fixed                      -- _1,
   QName                      -- _1 _2,                                
   QName.1:opt                -- _1,                                   
   Prefix                     -- _1 KW[":"],                           
   EntityDef                  -- KW["<!ENTITY"] _1 _2 KW[">"],         
   PEDef                      -- H hs=1 [H hs=0 ["<!" KW["ENTITY"]] KW["%"] _1 _2 ">"],
   PERef                      -- H hs=0 ["%" _1 ";"],

   ElementDecl                -- H hs=1 [H hs=0 ["<!" KW["ELEMENT"]] _1 _2 ">"], 

   Empty                      -- KW["EMPTY"],
   Any                        -- KW["ANY"],
   CharData                   -- H hs=0 ["(" KW["#PCDATA"] ")"],
   Mixed                      -- H hs=0 ["(" KW["#PCDATA"] _1 ")*"],
   Mixed.1:iter-star-sep      -- _1 "|",
   Children                   -- H hs=0 ["(" _1 ")"],                   

   ElementRef                 -- _1,                                   
   Optional                   -- H hs=0 [_1 "?"],
   ZeroOrMore                 -- H hs=0 [_1 "*"],
   OneOrMore                  -- H hs=0 [_1 "+"],
   Choice                     -- H hs=1 [_1 "|" _2],
   Seq                        -- H hs=1 [_1 "," _2]
]
