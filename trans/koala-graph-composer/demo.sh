#! /bin/sh

  pack-koala \
     -I ./data \
     -i c.cd \
| implode-asfix \
| koala-wire \
| koala-compiler \
| koala-tred \
| ./koala-graph-composer \
| GraphXML2dot \
| pp-dot \
| dot -Tps \
| gv -
