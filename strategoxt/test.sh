#! /bin/sh

ANT_OPTS="-Xss8m -Xmx1024m" ant -Dbuild.compiler=modern -lib dist/share/strategoxt/strategoxt/strategoxt.jar test
