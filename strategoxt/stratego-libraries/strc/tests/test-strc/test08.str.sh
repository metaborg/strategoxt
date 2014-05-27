#!/bin/sh

java -jar ${STRJ} -i test08.str --library -o libtest08.rtree -p "test08" || exit 1
