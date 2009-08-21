package org.strategoxt.lang.parallel;

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
		// TODO: More "pure" operators
	}};
	
	/**
	 * Primitives that are only thread safe when only
	 * combined with other white/gray-listed primitives.
	 */
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
		
	}
	
	public static boolean isGrayListed(String name) {
		return grayList.contains(name);
	}
}
