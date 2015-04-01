package org.strategoxt.lang;

import java.util.Arrays;
import java.util.List;

public class SRTS_EXT_LibraryInitializer extends LibraryInitializer{

	@Override
	protected List<RegisteringStrategy> getLibraryStrategies() {
		return Arrays.asList(
				new SRTS_EXT_at_end_1_0(), 
				new SRTS_EXT_concat_0_0(), 
				new SRTS_EXT_crush_3_0(), 
				new SRTS_EXT_eq_ignore_annos_0_1(),
				new SRTS_EXT_fatal_err_0_3(),
				new SRTS_EXT_filter_1_0(),
				new SRTS_EXT_flatten_list_0_0(),
				new SRTS_EXT_newint_0_0(),
				new SRTS_EXT_repeat_1_0(),
				new SRTS_EXT_string_replace_0_2());
	}

	@Override
	protected void initializeLibrary(Context context) {
	}

}
