
install-data-local: install-xtc

install-xtc: 
	mkdir -p `dirname $(DESTDIR)$(REPOSITORY)`
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t sglr -l $(SGLR)/bin -V 3.8
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t sdf2table -l $(PGEN)/bin -V 1.5
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t ATERM -l $(ATERM) -V X
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t SRTS -l $(SRTS) -V X

bootclean:

