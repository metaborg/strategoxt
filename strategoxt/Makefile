all :
	source osx-init.sh ; ./build.sh install
	
check :
	source osx-init.sh ; ./build.sh test-compiler
	
clean :
	./build.sh clean-libraries
	
veryclean :
	./build.sh clean
	
veryveryclean :
	git clean -f -f -X -d 
	# remove files covered by .gitignore
	
	