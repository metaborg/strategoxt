#! /bin/sh

for i in {0..8}
do
	echo "Build $i/7\n" &&
	if [ $i -eq 0 ]
	then
		mv strategoxt-base.jar strategoxt-base-$i.jar
	else
		cp dist/share/strategoxt/strategoxt.jar strategoxt-base-$i.jar
	fi
	ant clean &&
	ANT_OPTS="-Xss8m -Xmx1024m" ant -lib strategoxt-base-$i.jar install || exit 1
done
