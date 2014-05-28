#! /bin/sh

rm -rf baseline &&

mkdir baseline &&

cd baseline &&

wget https://github.com/metaborg/strategoxt/releases/download/baseline-2/strategoxt-distrib.tar &&

tar -xpf strategoxt-distrib.tar &&

chmod a+x share/strategoxt/linux/* share/strategoxt/macosx/* &&

git clone https://github.com/metaborg/java-front.git -b java-bootstrap java-front &&

cd ../syntax  &&

rm -f java-front &&

ln -s ../baseline/java-front java-front &&

cd ..