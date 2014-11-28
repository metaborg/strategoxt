#! /bin/sh

: ${STRJ_BASELINE:?"Environment not initialized. Run source PLATFORM-init.sh"}
: ${STRJ_BASELINE_DEPS:?"Environment not initialized. Run source PLATFORM-init.sh"}
: ${STRJ_BASELINE_BINS:?"Environment not initialized. Run source PLATFORM-init.sh"}
: ${STRJ_BASELINE_BASE:?"Environment not initialized. Run source PLATFORM-init.sh"}

ant -Dbaseline=$STRJ_BASELINE -Dsdf2bundle=$STRJ_BASELINE -Dnativepath=$STRJ_BASELINE_BINS -Dstrjbaseline-base=$STRJ_BASELINE_BASE -Dstrjbaseline-deps=$STRJ_BASELINE_DEPS -Dbuild-target=install -f build-wrapper.xml
