#! /bin/sh


cd baseline &&

export STRJ_BASELINE=`pwd` &&
export STRJ_BASELINE_DEPS=`pwd`/share/strategoxt/build-lib &&
export STRJ_BASELINE_BINS=`pwd`/share/strategoxt/macosx/ &&
export STRJ_BASELINE_BASE=`pwd`/share/strategoxt/strategoxt &&

cd ..




: ${STRJ_BASELINE:?"Environment not initialized. Run source PLATFORM-init.sh"}
: ${STRJ_BASELINE_DEPS:?"Environment not initialized. Run source PLATFORM-init.sh"}
: ${STRJ_BASELINE_BINS:?"Environment not initialized. Run source PLATFORM-init.sh"}
: ${STRJ_BASELINE_BASE:?"Environment not initialized. Run source PLATFORM-init.sh"}

ANT_OPTS="-Xss8m -Xmx2048m" ant -Dbaseline=$STRJ_BASELINE -Dsdf2bundle=$STRJ_BASELINE -Dnativepath=$STRJ_BASELINE_BINS -lib $STRJ_BASELINE_BASE -lib $STRJ_BASELINE_DEPS $@ || exit 1
