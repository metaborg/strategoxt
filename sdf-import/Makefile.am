
EXTRA_DIST = bootstrap

install-data-local: install-xtc

install-xtc: 
	mkdir -p `dirname $(DESTDIR)$(REPOSITORY)`
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t sglr -l $(SGLR)/bin -V 3.11
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t sdf2table -l $(PGEN)/bin -V 2.1
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t Sdf2.baf -l $(PGEN)/share/pgen -V 2.1
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t implodePT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t unparsePT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t baffle -l $(ATERM)/bin -V X
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t ATERM -l $(ATERM) -V X
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t SRTS -l $(SRTS) -V X
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t liblib.rtree -l $(SRTS)/share/srts -V $(VERSION)
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t libliblib.la -l $(SRTS)/lib/srts -V $(VERSION)

bootclean:

