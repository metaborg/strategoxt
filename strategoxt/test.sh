#! /bin/sh

ANT_OPTS="-Xss8m -Xmx1024m" ant -lib dist/share/strategoxt/strategoxt.jar test
