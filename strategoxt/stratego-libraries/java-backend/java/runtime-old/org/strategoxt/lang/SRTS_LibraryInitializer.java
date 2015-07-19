package org.strategoxt.lang;

import java.util.Arrays;
import java.util.List;

public class SRTS_LibraryInitializer extends LibraryInitializer {

	@Override
	protected List<RegisteringStrategy> getLibraryStrategies() {
		return Arrays.<RegisteringStrategy>asList(new SRTS_all(), new SRTS_one(), new SRTS_some());
	}

	@Override
	protected void initializeLibrary(Context context) {
		
	}

}
