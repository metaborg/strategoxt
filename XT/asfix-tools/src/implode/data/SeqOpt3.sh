set -e
gmake tests.tbl SeqOpt3.in
../implode-asfix  -i SeqOpt3.in -o SeqOpt3.tested
diff SeqOpt3.tested SeqOpt3.out
