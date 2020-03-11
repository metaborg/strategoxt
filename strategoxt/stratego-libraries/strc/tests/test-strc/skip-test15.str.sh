#!/bin/sh

java -jar ${STRJ} -i test15.str -la stratego-lib || exit 1 

rm -f test15.str.actual

javac -cp ${STRJ} test15.java || exit 1

java -cp .:${STRJ} -Xmx1024m test15 > test15.str.actual 2>&1

diff test15.str.expected test15.str.actual || (echo "Result not expected; test failed"; exit 1)
