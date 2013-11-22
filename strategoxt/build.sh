#! /bin/sh

: ${STRJ_BASELINE:?"Environment not initialized. Run source PLATFORM-init.sh"}
: ${STRJ_BASELINE_DEPS:?"Environment not initialized. Run source PLATFORM-init.sh"}
: ${STRJ_BASELINE_BINS:?"Environment not initialized. Run source PLATFORM-init.sh"}
: ${STRJ_BASELINE_BASE:?"Environment not initialized. Run source PLATFORM-init.sh"}

ANT_OPTS="-Xss8m -Xmx1024m" ant -Dsdf2bundle=$STRJ_BASELINE -Dnativepath=$STRJ_BASELINE_BINS -lib $STRJ_BASELINE_BASE -lib $STRJ_BASELINE_DEPS $@ || exit 1
