package org.strategoxt.lang.compat.sglr;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;
import org.spoofax.jsglr.Disambiguator;

import aterm.ATermFactory;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SGLRCompatLibrary extends AbstractStrategoOperatorRegistry {
	
	public static final String REGISTRY_NAME = "sglrcompat";
	
	private final Disambiguator filterSettings = new Disambiguator();
	
	public Disambiguator getFilterSettings() {
		return filterSettings;
	}
	
	public SGLRCompatLibrary(ATermFactory atermFactory) {
		initPrimitives(atermFactory);
	}
	
	protected void initPrimitives(ATermFactory atermFactory) {
		initFilterSettings();
		
		add(new JSGLR_parse_string_pt_compat(atermFactory, filterSettings));
		add(new JSGLR_open_parsetable_compat(atermFactory));
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
	}

	public String getOperatorRegistryName() {
		return REGISTRY_NAME;
	}
}
