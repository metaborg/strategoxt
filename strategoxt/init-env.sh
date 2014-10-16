#! /bin/sh

cd baseline &&

export STRJ_BASELINE=`pwd` &&
export STRJ_BASELINE_DEPS=`pwd`/share/strategoxt/build-lib &&
export STRJ_BASELINE_BINS=`pwd`/share/strategoxt/$1/ &&
export STRJ_BASELINE_BASE=`pwd`/share/strategoxt/strategoxt &&

cd ..