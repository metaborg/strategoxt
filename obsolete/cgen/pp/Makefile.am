pkgdata_DATA = C.pp C.pp.af      

EXTRA_DIST = C.pp C.pp.af 

C.pp.af: C.pp
	echo "[]" > bla.ac
	$(GPP)/bin/ast2abox -p C.pp -i bla.ac -o /dev/null


