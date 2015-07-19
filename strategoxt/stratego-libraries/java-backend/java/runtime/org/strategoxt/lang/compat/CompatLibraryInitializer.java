package org.strategoxt.lang.compat;

import java.util.Arrays;
import java.util.List;

import org.strategoxt.lang.Context;
import org.strategoxt.lang.LibraryInitializer;
import org.strategoxt.lang.RegisteringStrategy;
import org.strategoxt.lang.compat.stratego_rtg_compat.strrtg_list_loop1_1_0;
import org.strategoxt.lang.compat.stratego_rtg_compat.strrtg_repeat_1_0;
import org.strategoxt.lang.compat.strc_compat.pp_c_0_0;
import org.strategoxt.lang.compat.strc_compat.pp_c_pretty_0_0;
import org.strategoxt.lang.compat.strc_compat.strc_cgen_aterm_0_0;

public class CompatLibraryInitializer extends LibraryInitializer {

	@Override
	protected List<RegisteringStrategy> getLibraryStrategies() {
		return Arrays.asList(
				$Read$From$File_cached_0_0.instance, 
				report_failure_compat_1_0.instance, 
				strrtg_list_loop1_1_0.instance, 
				strrtg_repeat_1_0.instance,
				pp_c_0_0.instance,
				pp_c_pretty_0_0.instance,
				strc_cgen_aterm_0_0.instance);
	}

	@Override
	protected void initializeLibrary(Context context) {
	}

}
