module xml-implode-asfix
imports 
  implode-asfix

strategies


(* XML-specific layout *)

  (* The following are additional definitions for the strategies
   * is-layout and is-layout' from implode-asfix 
   *)
  is-layout
     = is-xml-layout
  is-layout'
     = is-xml-layout

  (* In XML the sorts S, S?, and Miscs represent layout
   *)
  is-xml-layout
     = appl(prod(id,is-xml-layout-sort,id),id)
     + is-xml-layout-sort

  is-xml-layout-sort
     = ?sort("S") + ?opt(sort("S")) + sort("Miscs")


(* XML-specific lexicals *)

  implode-lexical
    = appl(prod(id,is-xml-lexical-sort,id),id)
    ; yield

  is-xml-lexical-sort
    = ?sort("NameChars") + ?sort("NmChars") + ?sort("CDChars")
    + ?sort("CommentChars") + ?sort("VersionNum") +?sort("AttValue")

xml-implode-asfix = implode-asfix
