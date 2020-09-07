#!/bin/sh

java -jar ${STRJ} -i test14.str -la stratego-lib || exit 1 

rm -f test14.str.actual

javac -cp ${STRJ} test14.java || exit 1

java -cp .:${STRJ} -Xmx1024m test14 > test14.str.actual 2>&1

diff test14.str.expected test14.str.actual || (echo "Result not expected; test failed"; exit 1)
