#! /bin/sh
BASE_COMPILER=base/strategoxt.jar

cp $BASE_COMPILER .
echo "Build 1/3" && ./build.sh && 
echo "Building 2/3" && ant clean && ./build.sh && 
echo "Building 3/3" && ant clean && ./build.sh 
