#! /bin/sh

ANT_OPTS="-Xss8m -Xmx1024m -server -XX:+UseParallelGC -XX:MaxPermSize=256m" ant -lib build-lib
