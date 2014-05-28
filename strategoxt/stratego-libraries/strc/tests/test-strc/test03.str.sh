#!/bin/sh

java -jar ${STRJ} -i test03.str -la stratego-lib || exit 1

javac -cp ${STRJ} test03.java || exit 1

java -cp .:${STRJ} -Xmx1024m test03 || exit 1