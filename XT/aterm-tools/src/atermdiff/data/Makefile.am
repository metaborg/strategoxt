atermdiff = $(srcdir)/../atermdiff

EXTRA_DIST = term1 term2 term3 term4 \
	diff12.topmost \
	diff12.path \
	diff12.nopath \
	diff12.squash \
	diff34.topmost \
	diff34.path \
	diff34.nopath \
	diff34.squash

check:	check12 check34

check12: term1 term2 \
	diff12.nopath \
	diff12.path \
	diff12.squash \
	diff12.topmost
	$(atermdiff) -i term1 -i2 term2 --nopath > check12.nopath || true
	$(atermdiff) -i term1 -i2 term2 --squashedpath > check12.squash || true
	$(atermdiff) -i term1 -i2 term2 --path > check12.path || true
	$(atermdiff) -i term1 -i2 term2 --topmost > check12.topmost || true
	diff check12.topmost diff12.topmost
	diff check12.path diff12.path
	diff check12.nopath diff12.nopath
	diff check12.squash diff12.squash

check34: term3 term4 \
	diff34.nopath \
	diff34.path \
	diff34.squash \
	diff34.topmost
	$(atermdiff) -i term3 -i2 term4 --nopath > check34.nopath || true
	$(atermdiff) -i term3 -i2 term4 --squashedpath > check34.squash || true
	$(atermdiff) -i term3 -i2 term4 --path > check34.path || true
	$(atermdiff) -i term3 -i2 term4 --topmost > check34.topmost || true
	diff check34.topmost diff34.topmost
	diff check34.path diff34.path
	diff check34.nopath diff34.nopath
	diff check34.squash diff34.squash


