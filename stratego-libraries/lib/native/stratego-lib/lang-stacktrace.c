#include "srts/stratego.h"
#include "lang-stacktrace.h"

extern const char *__tracing_table[];
extern unsigned short __tracing_table_counter;

ATerm SSL_stacktrace_get_all_frame_names() {
	int i;
	ATermList ret = ATmakeList0();
	for(i = 0; __tracing_table[i] && i < TRACING_TABLE_SIZE; i++) {
		ret = ATinsert(ret, ATmakeString(__tracing_table[i]));
	}
	return (ATerm)ret;
}

ATerm SSL_stacktrace_get_current_frame_name() {
	if(__tracing_table_counter < 2)
		return NULL;
	if(__tracing_table[__tracing_table_counter - 2] == NULL)
		return NULL;
	return ATmakeString(__tracing_table[__tracing_table_counter - 2]);
}

ATerm SSL_stacktrace_get_current_frame_index() {
	return ATmakeInt(__tracing_table_counter);
}
