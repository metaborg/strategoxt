
install-am: install-xtc

install-xtc: 
	$(XTC)/bin/xtc register -r $(REPOSITORY) -t sglr -l $(SGLR)/bin -V 3.8
	$(XTC)/bin/xtc register -r $(REPOSITORY) -t sdf2table -l $(PGEN)/bin -V 1.5
	$(XTC)/bin/xtc register -r $(REPOSITORY) -t ATERM -l $(ATERM) -V X
	$(XTC)/bin/xtc register -r $(REPOSITORY) -t SRTS -l $(SRTS) -V X

bootclean:

