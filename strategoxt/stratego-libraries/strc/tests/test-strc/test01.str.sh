#!/bin/sh

java -jar ${STRJ} -i test01.str || exit 1 

javac -cp ${STRJ} test01.java || exit 1

java -cp .:${STRJ} test01 || exit 1 

