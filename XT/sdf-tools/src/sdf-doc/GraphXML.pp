[
%% module GraphXML
    "<" "GraphXML" GraphXML-Attribute* ">" 
       Graph*
    "</" "GraphXML" ">"				-> GraphXML  {cons("GraphXML")}
	-- V[ Vis=2[ H[ KW["<GraphXML"] _1 KW[">"] ] _2 ]
              H[ KW["</GraphXML>"] ] 
            ],

    "<" "graph" Graph-Attribute* ">" 
       (Node | Edge)* 
    "</" "graph" ">"				-> Graph     {cons("graph")}
	-- V[ Vis=2[ H[ KW["<graph"] _1 KW[">"] ] _2 ]
              H[ KW["</graph>"] ] 
            ],

    "<" "node" Node-Attribute* "/>" 		-> Node      {cons("node")}
	-- H[ KW["<node"] _1 KW["/>"] ],

%%    Name-Attribute -> Node-Attribute

    "<" "edge" Edge-Attribute* "/>" 		-> Edge      {cons("edge")}
	-- H[ KW["<edge"] _1 KW["/>"] ],

%%    Source-Attribute -> Edge-Attribute
%%    Target-Attribute -> Edge-Attribute

    "name"   "=" CDATA	-> Name-Attribute	{cons("name")}
	-- Hhs=0[ KW["name"] KW["="] _1 ],
    "source" "=" CDATA	-> Source-Attribute	{cons("source")}
	-- Hhs=0[ KW["source"] KW["="] _1 ],
    "target" "=" CDATA	-> Target-Attribute	{cons("target")}
	-- Hhs=0[ KW["target"] KW["="] _1 ],
    "class"  "=" CDATA	-> Class-Attribute	{cons("class")}
	-- Hhs=0[ KW["class"] KW["="] _1 ]

]
