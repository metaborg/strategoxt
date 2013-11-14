#! /bin/sh

ANT_OPTS="-Xss8m -Xmx1024m" ant -Dsdf2bundle=$STRJ_BASELINE -Dnativepath=$STRJ_BASELINE_BINS -lib $STRJ_BASELINE_BASE -lib $STRJ_BASELINE_DEPS $1 || exit 1
