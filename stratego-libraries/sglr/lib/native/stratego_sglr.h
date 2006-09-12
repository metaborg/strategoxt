#include <aterm2.h>
#include <sglr.h>
#include <parse-table.h>
#include <srts/stratego.h>

/**
 * Open and close tables
 */
ATerm STRSGLR_open_parse_table(ATerm tbl_term);
ATerm STRSGLR_close_parse_table(ATerm tbl_term);

/**
 * Parsing
 */
ATerm STRSGLR_parse_string_pt(StrCL onfail, ATerm string_term, ATerm tbl_term, ATerm start_symbol, ATerm path_term);
ATerm STRSGLR_parse_stream_pt(StrCL onfail, ATerm stream_term, ATerm tbl_term, ATerm start_symbol, ATerm path_term);

ATerm STRSGLR_get_parse_error(void);
ATerm STRSGLR_clear_parse_error(void);

ATerm STRSGLR_is_parse_tree(ATerm t);

ATerm STRSGLR_anno_position_info(ATerm pt_term, ATerm path_term);

/**
 * Configuration
 */
ATerm STRSGLR_set_default_config(void);

ATerm STRSGLR_set_ambiguity_error_on(void);
ATerm STRSGLR_set_ambiguity_error_off(void);
ATerm STRSGLR_get_ambiguity_error(void);

ATerm STRSGLR_set_log_statistics_on(void);
ATerm STRSGLR_set_log_statistics_off(void);
ATerm STRSGLR_get_log_statistics(void);
ATerm STRSGLR_set_log_stream(ATerm tstream);

ATerm STRSGLR_set_asfix2_format(void);
ATerm STRSGLR_set_asfix2me_format(void);

ATerm STRSGLR_set_cycle_detection_on(void);
ATerm STRSGLR_set_cycle_detection_off(void);

/**
 * Filters
 */
ATerm STRSGLR_set_default_filters(void);

ATerm STRSGLR_set_filtering_on(void);
ATerm STRSGLR_set_filtering_off(void);

ATerm STRSGLR_set_filter_eagernes_on(void);
ATerm STRSGLR_set_filter_eagernes_off(void);
ATerm STRSGLR_get_filter_eagernes(void);

ATerm STRSGLR_set_filter_direct_eagernes_on(void);
ATerm STRSGLR_set_filter_direct_eagernes_off(void);
ATerm STRSGLR_get_filter_direct_eagernes(void);

ATerm STRSGLR_set_filter_injection_count_on(void);
ATerm STRSGLR_set_filter_injection_count_off(void);
ATerm STRSGLR_get_filter_injection_count(void);

ATerm STRSGLR_set_filter_priority_on(void);
ATerm STRSGLR_set_filter_priority_off(void);
ATerm STRSGLR_get_filter_priority(void);

ATerm STRSGLR_set_filter_associativity_on(void);
ATerm STRSGLR_set_filter_associativity_off(void);
ATerm STRSGLR_get_filter_associativity(void);

ATerm STRSGLR_set_filter_reject_on(void);
ATerm STRSGLR_set_filter_reject_off(void);
ATerm STRSGLR_get_filter_reject(void);
