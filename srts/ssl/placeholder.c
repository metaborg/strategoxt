#include <srts/stratego.h>

ATerm SSL_isPlaceholder(ATerm t) {
    int type = AtgetType(t);

    if(type == AT_PLACEHOLDER) {
	return t;
    } else {
      _fail(t);
    }
}

ATerm SSL_getPlaceholder(ATerm t) {
    int type = AtgetType(t);
    if(type != AT_PLACEHOLDER) {
      ATfprintf(stderr, "[error] SSL_getPlaceholder: not a placeholder: %t \n", t);
      _fail(t);
    } else {
	ATermPlaceholder ph = (ATermPlaceholder) t;
	ATerm result = ATgetPlaceholder(ph);
	return result;
    }
}

ATerm SSL_makePlaceholder(ATerm t) {
    ATermPlaceholder ph = ATmakePlaceholder(t);
    return (ATerm) ph;
}
