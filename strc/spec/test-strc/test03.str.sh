#!/bin/sh

${STRC} -i test03.str -la liblib || exit 1

./test03 || exit 1 
