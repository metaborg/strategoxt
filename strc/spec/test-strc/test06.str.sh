#!/bin/sh

${STRC} -i test06.str --xtc-repo foo || exit 1

./test06 || exit 1 
 