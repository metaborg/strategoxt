#! /bin/sh

BASE_PATH=`pwd`

echo "Build 1/8\n" &&
mv strategoxt.jar strategoxt-base.jar &&
ant clean &&
find . -name \*.[cr]tree\* | xargs rm
cd syntax/java-front &&
git clean -f -f -d &&
cd $BASE_PATH &&
git checkout stratego-libraries/strc/tests/testneg/wrongformat.rtree &&
./build.sh &&

echo "Build 2/8\n" &&
mv strategoxt.jar strategoxt-base.jar &&
ant clean &&
find . -name \*.[cr]tree\* | xargs rm
cd syntax/java-front &&
git clean -f -f -d &&
cd $BASE_PATH &&
git checkout stratego-libraries/strc/tests/testneg/wrongformat.rtree &&
./build.sh &&

echo "Build 3/8\n" &&
mv strategoxt.jar strategoxt-base.jar &&
ant clean &&
find . -name \*.[cr]tree\* | xargs rm
cd syntax/java-front &&
git clean -f -f -d &&
cd $BASE_PATH &&
git checkout stratego-libraries/strc/tests/testneg/wrongformat.rtree &&
./build.sh &&

echo "Build 4/8\n" &&
mv strategoxt.jar strategoxt-base.jar &&
ant clean &&
find . -name \*.[cr]tree\* | xargs rm
cd syntax/java-front &&
git clean -f -f -d &&
cd $BASE_PATH &&
git checkout stratego-libraries/strc/tests/testneg/wrongformat.rtree &&
./build.sh &&

echo "Build 5/8\n" &&
mv strategoxt.jar strategoxt-base.jar &&
ant clean &&
find . -name \*.[cr]tree\* | xargs rm
cd syntax/java-front &&
git clean -f -f -d &&
cd $BASE_PATH &&
git checkout stratego-libraries/strc/tests/testneg/wrongformat.rtree &&
./build.sh &&

echo "Build 6/8\n" &&
mv strategoxt.jar strategoxt-base.jar &&
ant clean &&
find . -name \*.[cr]tree\* | xargs rm
cd syntax/java-front &&
git clean -f -f -d &&
cd $BASE_PATH &&
git checkout stratego-libraries/strc/tests/testneg/wrongformat.rtree &&
./build.sh &&

echo "Build 7/8\n" &&
mv strategoxt.jar strategoxt-base.jar &&
ant clean &&
find . -name \*.[cr]tree\* | xargs rm
cd syntax/java-front &&
git clean -f -f -d &&
cd $BASE_PATH &&
git checkout stratego-libraries/strc/tests/testneg/wrongformat.rtree &&
./build.sh &&

echo "Build 8/8\n" &&
mv strategoxt.jar strategoxt-base.jar &&
ant clean &&
find . -name \*.[cr]tree\* | xargs rm
cd syntax/java-front &&
git clean -f -f -d &&
cd $BASE_PATH &&
git checkout stratego-libraries/strc/tests/testneg/wrongformat.rtree &&
./build.sh
