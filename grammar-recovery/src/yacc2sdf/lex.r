module lex
signature
  constructors
    Goal	: List(Define) * List(a) * List(Rule) -> Goal
    Define	: String * List(List(RegExp)) -> Define
    Rule	: Option(AtLineStart) * FlexRule * String -> Rule
    FlexRule	: Option(a) * Rule1 -> FlexRule
    Rule1	: Option(a) * List(List(RegExp)) * Option(b) -> Rule1

    List	: RegExp -> RegExp
    NeList	: RegExp -> RegExp
    Opt		: RegExp -> RegExp


    Sort	: String -> RegExp
    Char	: String -> RegExp
    Lit		: String -> RegExp
    AnyChar	: RegExp

    Ccl		: List(CclItem) -> RegExp
    NotCcl	: List(CclItem) -> RegExp
    CclRange	: String * String -> CclItem
    CclChar	: String -> CclItem
