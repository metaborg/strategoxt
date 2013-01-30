#! /bin/sh
COMPILER0="base/strategoxt.jar.base"
COMPILER1="base/strategoxt.jar.1"
COMPILER2="base/strategoxt.jar.2"
COMPILER3="base/strategoxt.jar.3"
COMPILER4="base/strategoxt.jar.4"

BASE_PATH=`pwd`

echo "Build 1/4\n" &&
ant clean &&
git clean -Xdf &&
cd syntax/java-front &&
svn st | grep '^?' | awk '{print $2}' | xargs rm -rf &&
cd $BASE_PATH &&
rm -f strategoxt-base.jar &&
ln -s $COMPILER0 strategoxt-base.jar &&
./build.sh &&
cp strategoxt.jar $COMPILER1 &&

echo "Build 2/4\n" &&
ant clean &&
git clean -Xdf &&
cd syntax/java-front &&
svn st | grep '^?' | awk '{print $2}' | xargs rm -rf &&
cd $BASE_PATH &&
rm -f strategoxt-base.jar &&
ln -s $COMPILER1 strategoxt-base.jar &&
./build.sh &&
cp strategoxt.jar $COMPILER2 &&

echo "Build 3/4\n" &&
ant clean &&
git clean -Xdf &&
cd syntax/java-front &&
svn st | grep '^?' | awk '{print $2}' | xargs rm -rf &&
cd $BASE_PATH &&
rm -f strategoxt-base.jar &&
ln -s $COMPILER2 strategoxt-base.jar &&
./build.sh &&
cp strategoxt.jar $COMPILER3 &&

echo "Build 4/4\n" &&
ant clean &&
git clean -Xdf &&
cd syntax/java-front &&
svn st | grep '^?' | awk '{print $2}' | xargs rm -rf &&
cd $BASE_PATH &&
rm -f strategoxt-base.jar &&
ln -s $COMPILER3 strategoxt-base.jar &&
./build.sh &&
cp strategoxt.jar $COMPILER4 &&

echo "Linking the result\n" &&
rm -f strategoxt-base.jar strategoxt.jar &&
ln -s $COMPILER4 strategoxt.jar

