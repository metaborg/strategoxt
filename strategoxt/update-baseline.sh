#! /bin/sh

rm -rf baseline &&

wget --no-check-certificate -O strategoxt-baseline.zip https://github.com/metaborg/strategoxt/releases/download/baseline/strategoxt-baseline.zip &&

unzip strategoxt-baseline.zip &&

rm strategoxt-baseline.zip &&

cd baseline &&

git clone https://github.com/metaborg/java-front.git -b java-bootstrap java-front &&

cd ../syntax  &&

rm -f java-front &&

ln -s ../baseline/java-front java-front &&

cd ..