#! /bin/bash

if [ -d "baseline" ]; then
	echo "A baseline exists already, would you like to update it?"
	select yn in "Yes" "No"; do
	    case $yn in
	        Yes ) ./update-baseline.sh; break;;
	        No ) break;;
	    esac
	done
else
	./update-baseline.sh
fi

source init-env.sh $1