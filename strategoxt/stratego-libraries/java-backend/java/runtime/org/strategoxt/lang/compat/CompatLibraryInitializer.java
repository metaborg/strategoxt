package org.strategoxt.lang.compat;

import java.util.Arrays;
import java.util.List;

import org.strategoxt.lang.Context;
import org.strategoxt.lang.LibraryInitializer;
import org.strategoxt.lang.RegisteringStrategy;
import org.strategoxt.lang.compat.stratego_rtg_compat.strrtg_list_loop1_1_0;
import org.strategoxt.lang.compat.stratego_rtg_compat.strrtg_repeat_1_0;

public class CompatLibraryInitializer extends LibraryInitializer{

	@Override
	protected List<RegisteringStrategy> getLibraryStrategies() {
		return Arrays.asList(new $Read$From$File_cached_0_0(), new report_failure_compat_1_0(), new strrtg_list_loop1_1_0(), new strrtg_repeat_1_0());
	}

	@Override
	protected void initializeLibrary(Context context) {
	}
	
	

}
