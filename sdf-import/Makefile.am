
install-data-local: install-xtc

install-xtc: 
	mkdir -p `dirname $(DESTDIR)$(REPOSITORY)`
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t sglr -l $(SGLR)/bin -V 3.10.2
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t sdf2table -l $(PGEN)/bin -V 2.0
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t implodePT -l $(PT_SUPPORT)/bin -V 1.0
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t ATERM -l $(ATERM) -V X
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t SRTS -l $(SRTS) -V X

bootclean:
