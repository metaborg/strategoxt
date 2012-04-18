package org.strategoxt.lang.parallel.stratego_parallel;

import java.util.HashSet;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class PureOperatorSet {

	// TODO: PureOperatorSet should be a field in Context, not static
	//       (also, any "pure" operators should add themselves)

	/**
	 * Primitives that are always thread safe.
	 */
	@SuppressWarnings("serial")
	private static final HashSet<String> whiteList = new HashSet<String>() {{
		// General
		add("SSL_new");
		add("SSL_newname");
		add("SSL_is_string");
		add("SSL_is_real");
		add("SSL_is_int");
		add("SSL_get_list_length");
		add("SSL_get_constructor");
		add("SSL_get_arguments");
		add("SSL_get_appl_arguments_map");
		add("SSL_mkterm");
		add("SSL_concat_strings");
		add("SSL_strcat");
		add("SSL_gti");
		add("SSL_lti");
		add("SSL_gtr");
		add("SSL_ltr");
		add("SSL_addr");
		add("SSL_subtr");
		add("SSL_divr");
		add("SSL_addi");
		add("SSL_subti");
		add("SSL_divi");
		add("SSL_explode_string");
		add("SSL_implode_string");
		add("SSL_string_to_int");
		add("SSL_int_to_string");
		add("SSL_getenv");
		add("JSGLR_parse_string_pt_compat");
		add("JSGLR_parse_string_pt");
		add("JSGLR_open_parsetable");
		add("SSL_dynamic_rules_hashtable");
		add("SSL_table_hashtable");
		
		// Index
		add("LANG_index_add");
		add("LANG_index_clear_all");
		add("LANG_index_clear_file");
		//add("LANG_index_commit");
		add("LANG_index_end_transaction");
		add("LANG_index_get_all_files");
		add("LANG_index_get_all_in_file");
		add("LANG_index_get_children");
		add("LANG_index_current_file");
		add("LANG_index_descendants");
		add("LANG_index_get_file_revision");
		add("LANG_index_get_files_newer_than");
		add("LANG_index_get_files_of");
		add("LANG_index_get");
		add("LANG_index_remove");
		add("LANG_index_setup");
		add("LANG_index_start_transaction");

		// Collection "read" primitives
		add("SSL_hashtable_get");
		add("SSL_indexedSet_get");
		add("SSL_hashtable_elements");
		add("SSL_indexedSet_elements");
		add("SSL_table_fold");
		add("SSL_keys_fold");
		add("SSL_values_fold");

		// Collection "write" primitives
		add("SSL_hashtable_put");
		add("SSL_indexedSet_put");
		add("SSL_hashtable_remove");
		add("SSL_indexedSet_remove");
		add("SSL_hashtable_reset");
		add("SSL_indexedSet_reset");
		add("SSL_hashtable_create");
		add("SSL_indexedSet_create");

		// TODO: More "pure" operators
	}};
	
	/* UNDONE: operator graylist
	 * Primitives that are only thread safe when just
	 * when black listed operations are never used,
	 * not even from the focus thread.
	 *
	@SuppressWarnings("serial")
	private static final HashSet<String> grayList = new HashSet<String>() {{
		add("SSL_hashtable_get");
		add("SSL_indexedSet_get");
		add("SSL_hashtable_elements");
		add("SSL_indexedSet_elements");
		add("SSL_table_fold");
		add("SSL_keys_fold");
		add("SSL_values_fold");
	}};
	
	/* UNDONE: operator blacklist
	 * Primitives that are generally not thread safe.
	 * If explicitly indicated, they may be used with synchronization locks,
	 * together with the gray-listed opertors, which must then also
	 * be locked.
	 *
	@SuppressWarnings("serial")
	private static final HashSet<String> blackList = new HashSet<String>() {{
		add("SSL_hashtable_put");
		add("SSL_indexedSet_put");
		add("SSL_hashtable_remove");
		add("SSL_indexedSet_remove");
		add("SSL_hashtable_reset");
		add("SSL_indexedSet_reset");
		add("SSL_hashtable_create");
		add("SSL_indexedSet_create");
		add("SSL_fputs");
	}};
	*/
	
	private PureOperatorSet() {}
	
	public static boolean isWhiteListed(String name) {
		return whiteList.contains(name);
	}
	
	public static void addWhiteListed(String name) {
		whiteList.add(name);
	}

}
