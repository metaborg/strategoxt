#!/bin/sh

${STRC} -i test04.str -la ${SRTS}/lib/srts/libliblib.la || exit 1

./test04 || exit 1 
