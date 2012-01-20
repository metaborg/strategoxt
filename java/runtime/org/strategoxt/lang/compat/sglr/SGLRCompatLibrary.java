package org.strategoxt.lang.compat.sglr;

import java.util.concurrent.atomic.AtomicBoolean;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;
import org.spoofax.interpreter.library.jsglr.JSGLR_open_parsetable;
import org.spoofax.jsglr.client.Disambiguator;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SGLRCompatLibrary extends AbstractStrategoOperatorRegistry {

	public static final String REGISTRY_NAME = "sglrcompat";

	private final Disambiguator filterSettings = new Disambiguator();

	private final AtomicBoolean recoveryEnabled = new AtomicBoolean(); // silly placeholder

	public Disambiguator getFilterSettings() {
		return filterSettings;
	}

	public AtomicBoolean getRecoveryEnabledSetting() {
		return recoveryEnabled;
	}

	public SGLRCompatLibrary() {
		initPrimitives();
	}

	protected void initPrimitives() {
		initFilterSettings();
		add(new JSGLR_parse_string_pt_compat(filterSettings, recoveryEnabled));
		add(new JSGLR_parse_string_compat(filterSettings, recoveryEnabled));
		add(new JSGLR_open_parsetable());
		add(new STRSGLR_get_parse_error());
		add(new STRSGLR_clear_parse_error());
		add(new STRSGLR_anno_location());
	}

	private void initFilterSettings() {
		filterSettings.setFilterAny(true);

		add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_filter_direct_eagernes_on") { // (sic)
			@Override
			public void set() {
				filterSettings.setFilterDirectPreference(true);
			}
		});
		add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_filter_direct_eagernes_off") { // (sic)
			@Override
			public void set() {
				filterSettings.setFilterDirectPreference(false);
			}
		});
		add(new AbstractFilterSetting(filterSettings, "STRSGLR_get_filter_direct_eagernes") { // (sic)
			@Override
			public boolean get() {
				return filterSettings.getFilterDirectPreference();
			}
		});

		add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_filter_eagernes_on") { // (sic)
			@Override
			public void set() {
				filterSettings.setFilterPreferenceCount(true);
			}
		});
		add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_filter_eagernes_off") { // (sic)
			@Override
			public void set() {
				filterSettings.setFilterPreferenceCount(false);
			}
		});
		add(new AbstractFilterSetting(filterSettings, "STRSGLR_get_filter_eagernes") { // (sic)
			@Override
			public boolean get() {
				return filterSettings.getFilterPreferenceCount();
			}
		});

		add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_filter_injection_count_on") {
			@Override
			public void set() {
				filterSettings.setFilterInjectionCount(true);
			}
		});
		add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_filter_injection_count_off") {
			@Override
			public void set() {
				filterSettings.setFilterInjectionCount(false);
			}
		});
		add(new AbstractFilterSetting(filterSettings, "STRSGLR_get_filter_injection_count") {
			@Override
			public boolean get() {
				return filterSettings.getFilterInjectionCount();
			}
		});

		add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_filter_priority_on") {
			@Override
			public void set() {
				filterSettings.setFilterPriorities(true);
			}
		});
		add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_filter_priority_off") {
			@Override
			public void set() {
				filterSettings.setFilterPriorities(false);
			}
		});
		add(new AbstractFilterSetting(filterSettings, "STRSGLR_get_filter_priority") {
			@Override
			public boolean get() {
				return filterSettings.getFilterPriorities();
			}
		});

		add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_filter_reject_on") {
			@Override
			public void set() {
				filterSettings.setFilterReject(true);
			}
		});
		add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_filter_reject_off") {
			@Override
			public void set() {
				filterSettings.setFilterReject(false);
			}
		});
		add(new AbstractFilterSetting(filterSettings, "STRSGLR_get_filter_reject") {
			@Override
			public boolean get() {
				return filterSettings.getFilterReject();
			}
		});

		add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_default_filters") {
			@Override
			public void set() {
				filterSettings.setDefaultFilters();
			}
		});

		add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_recovery_on") {
			@Override
			public void set() {
				recoveryEnabled.set(true);
			}
		});

		add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_recovery_off") {
			@Override
			public void set() {
				recoveryEnabled.set(false);
			}
		});

		add(new AbstractFilterSetting(filterSettings, "STRSGLR_get_recovery") {
			@Override
			public boolean get() {
				return recoveryEnabled.get();
			}
		});

        add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_default_config") {
            @Override
            public void set() {
                filterSettings.setDefaultFilters();
            }
        });

        add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_ambiguity_error_on") {
            @Override
            public void set() {
                filterSettings.setAmbiguityIsError(true);
            }
        });

        add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_ambiguity_error_off") {
            @Override
            public void set() {
                filterSettings.setAmbiguityIsError(false);
            }
        });

        add(new AbstractFilterSetting(filterSettings, "STRSGLR_get_ambiguity_error") {
            @Override
            public boolean get() {
                return filterSettings.getAmbiguityIsError();
            }
        });

        add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_filtering_on") {
            @Override
            public void set() {
                filterSettings.setFilterAny(true);
            }
        });

        add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_filtering_off") {
            @Override
            public void set() {
                filterSettings.setFilterAny(false);
            }
        });

        add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_log_statistics_on") {
            @Override
            public void set() {
            	filterSettings.setLogStatistics(true);
            }
        });

        add(new AbstractFilterSetting(filterSettings, "STRSGLR_set_log_statistics_off") {
            @Override
            public void set() {
            	filterSettings.setLogStatistics(false);
            }
        });

        add(new AbstractFilterSetting(filterSettings, "STRSGLR_get_log_statistics") {
            @Override
            public boolean get() {
                return filterSettings.getLogStatistics();
            }
        });

	}

	public String getOperatorRegistryName() {
		return REGISTRY_NAME;
	}
}
