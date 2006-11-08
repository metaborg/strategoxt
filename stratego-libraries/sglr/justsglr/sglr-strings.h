#ifndef _SGLR_STRINGS_H_
#define _SGLR_STRINGS_H_  1

/*  AFuns  */

#define SG_APPL_AFUN         "appl"
#define SG_REGULAR_AFUN      "regular"
#define SG_REJECT_AFUN       "reject"
#define SG_PREFER_AFUN       "prefer"
#define SG_AVOID_AFUN        "avoid"
#define SG_APROD_AFUN        "aprod"
#define SG_AMB_AFUN          "amb"
#define SG_CYCLE_AFUN        "cycle"
#define SG_ARG_GTRPRIO_AFUN  "arg-gtr-prio"
#define SG_GTRPRIO_AFUN      "gtr-prio"
#define SG_SHIFT_AFUN        "shift"
#define SG_REDUCE_AFUN       "reduce"
#define SG_ACCEPT_AFUN       "accept"
#define SG_RANGE_AFUN        "range"
#define SG_CHARCLASS_AFUN    "char-classs"
#define SG_ACTION_AFUN       "action"
#define SG_GOTO_AFUN         "goto"
#define SG_PARSETABLE_AFUN   "parse-table"
#define SG_STATEREC_AFUN     "state-rec"
#define SG_LABEL_AFUN        "label"
#define SG_PARSETREE_AFUN    "parsetree"
#define SG_TERM_AFUN         "term"
#define SG_AMBIGUOUS_TREE_AFUN "ambiguous-tree"
#define SG_PARSEERROR_AFUN   "error"
#define SG_EOF_AFUN          "eof"
#define SG_CYCLE_AFUN        "cycle"
#define SG_AMBIGUITY_AFUN    "ambiguity"
#define SG_TOO_MANY_AMBS_AFUN    "too_many_ambiguities"
#define SG_POSITION_AFUN     "position"
#define SG_PRODUCTIONS_AFUN  "productions"
#define SG_AMBIGUITIES_AFUN  "ambiguities"
#define SG_SNDVALUE_AFUN     "snd-value"
#define SG_CHARACTER_AFUN    "character"
#define SG_LINE_AFUN         "line"
#define SG_COL_AFUN          "col"
#define SG_OFFSET_AFUN       "char"

/*  Attributes  */

#define SG_POSITION_ATTR    "position"
#define SG_INJECTIONS_ATTR  "injections"
#define SG_REJECT_ATTR      "reject"
#define SG_PREFER_ATTR      "prefer"
#define SG_AVOID_ATTR       "avoid"

#define SG_COND_STRING(s)   (s?s:"")
#define SG_SAFE_STRING(s)   (s?s:"[undefined]")

#define SG_SAFE_LANGUAGE(l)   (l?l:ATparse("[undefined]"))

#endif  /*  _SGLR_STRINGS_H_  */
