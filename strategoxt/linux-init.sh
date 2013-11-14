#! /bin/sh

rm -rf baseline &&

wget https://github.com/metaborg/strategoxt/releases/download/baseline/strategoxt-baseline.zip &&

unzip strategoxt-baseline.zip &&

rm strategoxt-baseline.zip &&

cd baseline &&

git clone https://github.com/metaborg/java-front.git -b java-bootstrap java-front &&

export STRJ_BASELINE=`pwd` &&
export STRJ_BASELINE_DEPS=`pwd`/build-lib &&
export STRJ_BASELINE_BINS=`pwd`/linux/ &&
export STRJ_BASELINE_BASE=`pwd`/strategoxt &&

cd ../syntax  &&

rm -f java-front &&

ln -s ../baseline/java-front java-front &&

cd ..
