#!/bin/sh

java -jar ${STRJ} -i test17.str -la stratego-lib || exit 1 

rm -f test17.str.actual

javac -cp ${STRJ} test17.java || exit 1

java -cp .:${STRJ} -Xmx1024m test17 > test17.str.actual 2>&1

diff test17.str.expected test17.str.actual || (echo "Result not expected; test failed"; exit 1)
