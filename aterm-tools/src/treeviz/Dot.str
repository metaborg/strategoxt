module Dot
imports Layout QuotedLiterals
signature
  constructors
    dot-graph	: Option ( a ) * Id * List ( Stmt ) -> Graph
    dot-digraph : Option ( a ) * Id * List ( Stmt ) -> Graph
    alias	: Id * Id -> Stmt
    graph-attrs : List ( Attr ) -> Stmt
    node-attrs	: List ( Attr ) -> Stmt
    edge-attrs	: List ( Attr ) -> Stmt
    attr-id	: Id * Id -> Attr
    attr-num-con : Id * Num-Con -> Attr
    node	: Node-Id * Option ( Attrs ) -> Stmt
    Id		: Id -> Node-Id
    QualId	: Id * Either ( Id , Num-Con ) -> Node-Id
    attrs	: List ( Attr ) -> Attrs
    edge	: Either ( Node-Id , SubGraph ) * EdgeOp * List(Either(Node-Id,SubGraph)) * Option ( Attrs ) -> Stmt
    sub-graph	: Id * List ( Stmt ) -> SubGraph
    arrow	: EdgeOp
    line	: EdgeOp
