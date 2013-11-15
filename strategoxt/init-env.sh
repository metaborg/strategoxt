#! /bin/sh

cd baseline &&

export STRJ_BASELINE=`pwd` &&
export STRJ_BASELINE_DEPS=`pwd`/build-lib &&
export STRJ_BASELINE_BINS=`pwd`/$1/ &&
export STRJ_BASELINE_BASE=`pwd`/strategoxt &&

cd ..