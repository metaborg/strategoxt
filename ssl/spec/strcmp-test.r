module strbla
imports lib sunit string
strategies

main = a
b=
iowrap(
   <strncmp>(<explode-string>"baj", <explode-string>"bae",2)
;   debug(!"grr: ")
;   <strncmp>(<explode-string>"baj", <explode-string>"bee",2)
;   debug(!"grr2: ")
)

a=
 test-suite(!"strcmp-test",
	  strcmp-test1
	; strcmp-test2
	; strcmp-test3
	; strcmp-test4
	; strcmp-test5
	; strcmp-test6
	; strcmp-test7
	; strcmp-test8

	; strncmp-test1
	; strncmp-test2

	; strcasecmp-test1
	; strcasecmp-test2
	; strcasecmp-test3

	; string-sort-test1
	; string-sort-test2
	)

strcmp-test1 =
   apply-test( !"strcmp1",
   strcmp,
   !(<explode-string>"",<explode-string>"a"),
   !-1)

strcmp-test2 =
   apply-test( !"strcmp2",
   strcmp,
   !(<explode-string>"a", <explode-string>""),
   !1)

strcmp-test3 =
   apply-test( !"strcmp3",
   strcmp,
   !(<explode-string>"a", <explode-string>"a"),
   !0)

strcmp-test4 =
   apply-test( !"strcmp4",
   strcmp,
   !(<explode-string>"a", <explode-string>"b"),
   !-1)

strcmp-test5 =
   apply-test( !"strcmp5",
   strcmp,
   !(<explode-string>"b", <explode-string>"a"),
   !1)

strcmp-test6 =
   apply-test( !"strcmp6",
   strcmp,
   !(<explode-string>"ab", <explode-string>"a"),
   !1)

strcmp-test7 =
   apply-test( !"strcmp7",
   strcmp,
   !(<explode-string>"a", <explode-string>"ab"),
   !-1)

strcmp-test8 =
   apply-test( !"strcmp8",
   strcmp,
   !(<explode-string>"ab", <explode-string>"ab"),
   !0)


strncmp-test1 =
   apply-test( !"strncmp1",
   strncmp,
   !(<explode-string>"baj", <explode-string>"bae",2),
   !0)

strncmp-test2 =
   apply-test( !"strncmp2",
   strncmp,
   !(<explode-string>"baj", <explode-string>"bee",2),
   !-1)


strcasecmp-test1 =
   apply-test( !"strcasecmp1",
   strcasecmp,
   !(<explode-string>"bAj", <explode-string>"baJ"),
   !0)

strcasecmp-test2 =
   apply-test( !"strcasecmp2",
   strcasecmp,
   !(<explode-string>"bAjq", <explode-string>"baJ"),
   !1)

strcasecmp-test3 =
   apply-test( !"strcasecmp3",
   strcasecmp,
   !(<explode-string>"bA", <explode-string>"baJ"),
   !-1)


string-sort-test1 = 
	  apply-test( !"string-sort-test1",
		string-sort,
		!["aap","noot","mies","wim","zus","jet"],
		!["aap","jet","mies","noot","wim","zus"])

string-sort-test2 = 
	  apply-test( !"string-sort-test2",
		string-sort,
		!["aap","jet","mies","noot","wim","zus"],
		!["aap","jet","mies","noot","wim","zus"])

