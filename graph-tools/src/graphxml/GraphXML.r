module ExternalDTD
  signature
    constructors
      GraphXML : List(GraphXML-Attribute) * (List(Either(Label,Either(Data,Either(Dataref,Either(Properties,Style))))),List(Graph),List(Either(Edit,Edit-bundle))) -> GraphXML
      graph : List(Graph-Attribute) * (List(Either(Label,Either(Data,Either(Dataref,Either(Properties,Either(Style,Either(Icon,Size))))))),List(Either(Node,Edge))) -> Graph
      vendor : AttValue -> Graph-Attribute
      version : AttValue -> Graph-Attribute
      Id : AttValue -> Graph-Attribute
      class : AttValue -> Graph-Attribute
      preferredlayout : AttValue -> Graph-Attribute
      icon : List(Icon-Attribute) * EMPTY -> Icon
      edit : List(Edit-Attribute) * (List(Either(Label,Either(Data,Either(Dataref,Properties)))),List(Either(Node,Edge))) -> Edit
      action : AttValue -> Edit-Attribute
      class : AttValue -> Edit-Attribute
      edit-bundle : List(Edit-bundle-Attribute) * List(Edit) -> Edit-bundle
      class : AttValue -> Edit-bundle-Attribute
      node : List(Node-Attribute) * List(Either(Label,Either(Data,Either(Dataref,Either(Properties,Either(Style,Either(Position,Either(Size,Either(Transform,Subgraph-style))))))))) -> Node
      node1 : List(Node-Attribute) -> Node
      name : AttValue -> Node-Attribute
      isMetanode : AttValue -> Node-Attribute
      class : AttValue -> Node-Attribute
      edge : List(Edge-Attribute) * List(Either(Label,Either(Data,Either(Dataref,Either(Properties,Either(Style,Path)))))) -> Edge
      edge1 : List(Edge-Attribute) -> Edge
      name : AttValue -> Edge-Attribute
      source : AttValue -> Edge-Attribute
      target : AttValue -> Edge-Attribute
      class : AttValue -> Edge-Attribute
      isDirected : AttValue -> Edge-Attribute
      properties : List(Properties-Attribute) * EMPTY -> Properties
      class : AttValue -> Properties-Attribute
      label : List(Label-Attribute) * PCDATA -> Label
      class : AttValue -> Label-Attribute
      data : List(Data-Attribute) * PCDATA -> Data
      class : AttValue -> Data-Attribute
      dataref : List(Dataref-Attribute) * List(Ref) -> Dataref
      class : AttValue -> Dataref-Attribute
      ref : List(Ref-Attribute) * EMPTY -> Ref
      class : AttValue -> Ref-Attribute
      position : List(Position-Attribute) * EMPTY -> Position
      x : AttValue -> Position-Attribute
      y : AttValue -> Position-Attribute
      z : AttValue -> Position-Attribute
      class : AttValue -> Position-Attribute
      size : List(Size-Attribute) * EMPTY -> Size
      width : AttValue -> Size-Attribute
      height : AttValue -> Size-Attribute
      depth : AttValue -> Size-Attribute
      class : AttValue -> Size-Attribute
      path : List(Path-Attribute) * List(Position) -> Path
      type : AttValue -> Path-Attribute
      class : AttValue -> Path-Attribute
      transform : List(Transform-Attribute) * EMPTY -> Transform
      matrix : AttValue -> Transform-Attribute
      class : AttValue -> Transform-Attribute
      style : List(Style-Attribute) * List(Either(Line,Either(Fill,Implementation))) -> Style
      subgraph-style : List(Subgraph-style-Attribute) * List(Either(Line,Either(Fill,Implementation))) -> Subgraph-style
      line : List(Line-Attribute) * EMPTY -> Line
      tag : AttValue -> Line-Attribute
      class : AttValue -> Line-Attribute
      color : AttValue -> Line-Attribute
      colour : AttValue -> Line-Attribute
      colour_start : AttValue -> Line-Attribute
      colour_end : AttValue -> Line-Attribute
      color_start : AttValue -> Line-Attribute
      color_end : AttValue -> Line-Attribute
      linestyle : AttValue -> Line-Attribute
      linewidth : AttValue -> Line-Attribute
      fill : List(Fill-Attribute) * EMPTY -> Fill
      tag : AttValue -> Fill-Attribute
      class : AttValue -> Fill-Attribute
      color : AttValue -> Fill-Attribute
      colour : AttValue -> Fill-Attribute
      fillstyle : AttValue -> Fill-Attribute
      imagefill : AttValue -> Fill-Attribute
      implementation : List(Implementation-Attribute) * EMPTY -> Implementation
      tag : AttValue -> Implementation-Attribute
      class : AttValue -> Implementation-Attribute
      scriptname : AttValue -> Implementation-Attribute
