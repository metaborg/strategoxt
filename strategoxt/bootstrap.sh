#! /bin/sh
COMPILER0="base/strategoxt.jar.base"
COMPILER1="base/strategoxt.jar.1"
COMPILER2="base/strategoxt.jar.2"
COMPILER3="base/strategoxt.jar.3"

BASE_PATH=`pwd`

echo -e "Build 1/3\n" &&
ant clean &&
git clean -Xdf &&
cd syntax/java-front &&
svn st | grep '^?' | awk '{print $2}' | xargs rm -rf &&
cd $BASE_PATH &&
rm -f strategoxt-base.jar &&
ln -s $COMPILER0 strategoxt-base.jar &&
./build.sh &&
cp strategoxt.jar $COMPILER1 &&

echo -e "Build 2/3\n" &&
ant clean &&
git clean -Xdf &&
cd syntax/java-front &&
svn st | grep '^?' | awk '{print $2}' | xargs rm -rf &&
cd $BASE_PATH &&
rm -f strategoxt-base.jar &&
ln -s $COMPILER1 strategoxt-base.jar &&
./build.sh &&
cp strategoxt.jar $COMPILER2 &&

echo -e "Build 3/3\n" &&
ant clean &&
git clean -Xdf &&
cd syntax/java-front &&
svn st | grep '^?' | awk '{print $2}' | xargs rm -rf &&
cd $BASE_PATH &&
rm -f strategoxt-base.jar &&
ln -s $COMPILER2 strategoxt-base.jar &&
./build.sh &&
cp strategoxt.jar $COMPILER3