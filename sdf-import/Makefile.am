
install-am: install-xtc

install-xtc: 
	$(XTC)/bin/xtc-register -r $(REPOSITORY) -t sglr -l $(SGLR)/bin -V 3.8 --verbose 3
	$(XTC)/bin/xtc-register -r $(REPOSITORY) -t sdf2table -l $(PGEN)/bin -V 1.5 --verbose 3
