#!/bin/sh

${STRC} -i test03.str -la libstrategolib || exit 1

./test03 || exit 1 
