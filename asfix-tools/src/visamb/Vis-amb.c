#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_lexical_1;
Symbol sym_root_1;
Symbol sym_N_2;
Symbol sym_amb_abbr_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_layout_0;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_opt_1;
Symbol sym_seq_1;
Symbol sym_lit_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_alt_2;
Symbol sym_char_class_1;
Symbol sym_sort_1;
Symbol sym_varsym_1;
Symbol sym_atr_1;
Symbol sym_term_1;
Symbol sym_cons_1;
Symbol sym_bracket_0;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_amb_1;
Symbol sym_flatlex_2;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_parsetree_2;
void init_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_lexical_1 = ATmakeSymbol("lexical", 1, ATfalse);
  ATprotectSymbol(sym_lexical_1);
  sym_root_1 = ATmakeSymbol("root", 1, ATfalse);
  ATprotectSymbol(sym_root_1);
  sym_N_2 = ATmakeSymbol("N", 2, ATfalse);
  ATprotectSymbol(sym_N_2);
  sym_amb_abbr_2 = ATmakeSymbol("amb-abbr", 2, ATfalse);
  ATprotectSymbol(sym_amb_abbr_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_seq_1 = ATmakeSymbol("seq", 1, ATfalse);
  ATprotectSymbol(sym_seq_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_varsym_1 = ATmakeSymbol("varsym", 1, ATfalse);
  ATprotectSymbol(sym_varsym_1);
  sym_atr_1 = ATmakeSymbol("atr", 1, ATfalse);
  ATprotectSymbol(sym_atr_1);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_flatlex_2 = ATmakeSymbol("flatlex", 2, ATfalse);
  ATprotectSymbol(sym_flatlex_2);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  init_constant_terms();
}
ATerm term_d_17;
ATerm term_k_16;
ATerm term_t_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_q_14;
ATerm term_h_14;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_l_7;
ATerm term_a_5;
ATerm term_s_4;
ATerm term_o_4;
ATerm term_l_4;
ATerm term_h_4;
ATerm term_s_3;
ATerm term_j_3;
ATerm term_i_3;
ATerm term_h_3;
void init_constant_terms (void)
{
  ATprotect(&(term_h_3));
  term_h_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_3));
  term_i_3 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_3));
  term_j_3 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_3));
  term_s_3 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym__2, term_z_7, term_a_8);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__2, term_h_4, term_s_3);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_3);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym__2, term_c_9, term_a_8);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_t_9, term_a_8);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("The SDF2 implementation caters for arbitrary context-free grammars. That is,\n", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("even for ambiguous grammars the parser will produce a parse trees containing\n", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("a concise encoding of allpossible parses. Ambiguities are represented by\n", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("means of amb nodes that contain a list of possible parse trees at that\n", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("point. For most applications, however, it is desirable to develop\n", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("unambiguous grammars. To aid the grammar writer in detecting and solving the\n", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ambiguities, the visamb tool extracts the ambiguities from a parse tree and\n", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("displays them in a readable format.\n", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym__2, term_f_12, term_g_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__2, term_d_15, term_a_8);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym__3, term_f_12, term_g_12, (ATerm) ATempty);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm z_72 (ATerm), ATerm a_73 (ATerm));
ATerm crush_2 (ATerm, ATerm x_71 (ATerm), ATerm y_71 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm f_80 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm get_args_0 (ATerm);
ATerm lit_1 (ATerm, ATerm h_57 (ATerm));
ATerm prod_3 (ATerm, ATerm x_57 (ATerm), ATerm y_57 (ATerm), ATerm z_57 (ATerm));
ATerm MkLex_0 (ATerm);
ATerm cf_1 (ATerm, ATerm d_57 (ATerm));
ATerm lex_1 (ATerm, ATerm e_57 (ATerm));
ATerm Lexical_0 (ATerm);
ATerm get_sort_0 (ATerm);
ATerm Nsplit_2 (ATerm, ATerm o_58 (ATerm), ATerm p_58 (ATerm));
ATerm ProjectAmb_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm abbrev_term_0 (ATerm);
ATerm F_p__0 (ATerm);
ATerm F_0 (ATerm);
ATerm appl_2 (ATerm, ATerm a_58 (ATerm), ATerm b_58 (ATerm));
ATerm yield_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm abbrev_amb_0 (ATerm);
ATerm abbrev_ambs_0 (ATerm);
ATerm amb_1 (ATerm, ATerm c_58 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm m_72 (ATerm), ATerm n_72 (ATerm));
ATerm union_1 (ATerm, ATerm i_72 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm d_73 (ATerm));
ATerm crush_3 (ATerm, ATerm z_71 (ATerm), ATerm a_72 (ATerm), ATerm b_72 (ATerm));
ATerm bu_collect_1 (ATerm, ATerm j_71 (ATerm));
ATerm parsetree_2 (ATerm, ATerm h_58 (ATerm), ATerm i_58 (ATerm));
ATerm collect_ambs_0 (ATerm);
ATerm visamb_0 (ATerm);
ATerm _2 (ATerm, ATerm b_50 (ATerm), ATerm c_50 (ATerm));
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm n_78 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm o_74 (ATerm), ATerm p_74 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm w_56 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm k_77 (ATerm));
ATerm Undefined_1 (ATerm, ATerm x_56 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_66 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_81 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_67 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_77 (ATerm));
ATerm map_1 (ATerm, ATerm l_66 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_58 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm n_82 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_51 (ATerm), ATerm l_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm l_82 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm k_82 (ATerm));
ATerm Vis_amb_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_h_3, (ATerm) ATinsert(ATempty, term_i_3));
  {
    t = printnl_0(t);
    {
      t = term_j_3;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_2 = NULL;
  u_2 = t;
  t = SSL_TicksToSeconds(not_null(u_2));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm m_3 = NULL,o_3 = NULL,p_3 = NULL;
  m_3 = t;
  l_3 :
  if(match_cons(m_3, sym__2))
    {
      o_3 = ATgetArgument(m_3, 0);
      p_3 = ATgetArgument(m_3, 1);
      {
        ATerm k_3 = t;
        int n_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_3), not_null(p_3));
            LocalPopChoice(n_3);
          }
        else
          {
            t = k_3;
            t = SSL_addr(not_null(o_3), not_null(p_3));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm z_72 (ATerm), ATerm a_73 (ATerm))
{
  ATerm q_3 = t;
  int r_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_72(t);
      LocalPopChoice(r_3);
    }
  else
    {
      t = q_3;
      {
        ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
        x_3 = t;
        w_3 :
        if(((ATgetType(x_3) == AT_LIST) && !(ATisEmpty(x_3))))
          {
            y_3 = ATgetFirst((ATermList) x_3);
            z_3 = (ATerm) ATgetNext((ATermList) x_3);
            {
              ATerm c_4 = NULL;
              ATerm d_4 = NULL;
              t = not_null(z_3);
              {
                t = foldr_2(t, z_72, a_73);
                {
                  d_4 = t;
                  if(((c_4 != NULL) && (c_4 != d_4)))
                    _fail(d_4);
                  else
                    c_4 = d_4;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_3), not_null(c_4));
                t = a_73(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm x_71 (ATerm), ATerm y_71 (ATerm))
{
  ATerm k_4 = NULL;
  ATerm m_4 = NULL;
  k_4 = t;
  {
    ATerm n_4 = NULL;
    ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
    t = not_null(k_4);
    {
      n_4 = t;
      {
        t = SSL_explode_term(not_null(n_4));
        {
          p_4 = t;
          j_4 :
          if(match_cons(p_4, sym__2))
            {
              q_4 = ATgetArgument(p_4, 0);
              r_4 = ATgetArgument(p_4, 1);
              if(((m_4 != NULL) && (m_4 != r_4)))
                _fail(r_4);
              else
                m_4 = r_4;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(m_4);
      t = foldr_2(t, x_71, y_71);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = term_s_3;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  w_4 :
  if(match_cons(x_4, sym__2))
    {
      y_4 = ATgetArgument(x_4, 0);
      z_4 = ATgetArgument(x_4, 1);
      {
        ATerm t_3;
        t_3 = t;
        {
          ATerm u_3 = t;
          int v_3 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(y_4), not_null(z_4));
              LocalPopChoice(v_3);
            }
          else
            {
              t = u_3;
              t = SSL_gtr(not_null(y_4), not_null(z_4));
            }
        }
        t = t_3;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm f_5 = NULL;
  ATerm a_4 = t;
  int b_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
      g_5 = t;
      e_5 :
      if(match_cons(g_5, sym__2))
        {
          h_5 = ATgetArgument(g_5, 0);
          i_5 = ATgetArgument(g_5, 1);
          {
            if(((f_5 != NULL) && (f_5 != h_5)))
              _fail(h_5);
            else
              f_5 = h_5;
            if(((f_5 != NULL) && (f_5 != i_5)))
              _fail(i_5);
            else
              f_5 = i_5;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(b_4);
    }
  else
    {
      t = a_4;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_80 (ATerm))
{
  ATerm e_4 = t;
  int f_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_4;
      g_4 = t;
      {
        ATerm l_5 = NULL;
        ATerm m_5 = NULL;
        t = term_h_4;
        {
          t = get_config_0(t);
          {
            m_5 = t;
            if(((l_5 != NULL) && (l_5 != m_5)))
              _fail(m_5);
            else
              l_5 = m_5;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), term_j_3);
          t = geq_0(t);
        }
      }
      t = g_4;
      t = f_80(t);
      LocalPopChoice(f_4);
    }
  else
    {
      t = e_4;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm q_5 = NULL,s_5 = NULL;
    ATerm i_4;
    i_4 = t;
    {
      ATerm r_5 = NULL;
      t = run_time_0(t);
      {
        r_5 = t;
        if(((q_5 != NULL) && (q_5 != r_5)))
          _fail(r_5);
        else
          q_5 = r_5;
      }
    }
    t = i_4;
    {
      ATerm t_5 = NULL;
      t = term_l_4;
      {
        t = get_config_0(t);
        {
          t_5 = t;
          if(((s_5 != NULL) && (s_5 != t_5)))
            _fail(t_5);
          else
            s_5 = t_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_4), not_null(q_5)), term_o_4), not_null(s_5)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_0);
  {
    t = term_s_3;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  x_5 :
  if(match_cons(y_5, sym__2))
    {
      z_5 = ATgetArgument(y_5, 0);
      a_6 = ATgetArgument(y_5, 1);
      t = SSL_WriteToTextFile(not_null(z_5), not_null(a_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  g_6 = t;
  f_6 :
  if(match_cons(g_6, sym__2))
    {
      h_6 = ATgetArgument(g_6, 0);
      i_6 = ATgetArgument(g_6, 1);
      t = SSL_WriteToBinaryFile(not_null(h_6), not_null(i_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm q_6 = NULL;
  ATerm t_4;
  t_4 = t;
  {
    ATerm e_0 (ATerm t)
    {
      ATerm u_4 = t;
      int v_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_0 (ATerm t)
          {
            ATerm r_6 = NULL,s_6 = NULL;
            r_6 = t;
            n_6 :
            if(match_cons(r_6, sym_Output_1))
              {
                s_6 = ATgetArgument(r_6, 0);
                if(((q_6 != NULL) && (q_6 != s_6)))
                  _fail(s_6);
                else
                  q_6 = s_6;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, f_0);
          LocalPopChoice(v_4);
        }
      else
        {
          t = u_4;
          {
            ATerm t_6 = NULL;
            t = term_a_5;
            {
              t_6 = t;
              if(((q_6 != NULL) && (q_6 != t_6)))
                _fail(t_6);
              else
                q_6 = t_6;
            }
          }
        }
      return(t);
    }
    t = _2(t, e_0, _id);
  }
  t = t_4;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm p_0 (ATerm t)
      {
        t = not_null(q_6);
        return(t);
      }
      t = split_2(t, p_0, _id);
      return(t);
    }
    t = _2(t, _id, o_0);
    {
      ATerm b_5 = t;
      int c_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_0 (ATerm t)
          {
            ATerm r_0 (ATerm t)
            {
              ATerm u_6 = NULL;
              u_6 = t;
              p_6 :
              if(!(match_cons(u_6, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, r_0);
            return(t);
          }
          t = _2(t, q_0, WriteToBinaryFile_0);
          LocalPopChoice(c_5);
        }
      else
        {
          t = b_5;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm y_6 = NULL;
  y_6 = t;
  t = SSL_int_to_string(not_null(y_6));
  return(t);
}
ATerm get_args_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL;
  d_7 = t;
  c_7 :
  if(match_cons(d_7, sym_appl_2))
    {
      e_7 = ATgetArgument(d_7, 0);
      f_7 = ATgetArgument(d_7, 1);
      t = not_null(f_7);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm h_57 (ATerm))
{
  ATerm o_7 = NULL,p_7 = NULL;
  o_7 = t;
  n_7 :
  if(match_cons(o_7, sym_lit_1))
    {
      p_7 = ATgetArgument(o_7, 0);
      {
        ATerm s_7 = NULL,u_7 = NULL;
        ATerm t_7 = NULL;
        t = SSLgetAnnotations(not_null(o_7));
        {
          t_7 = t;
          if(((s_7 != NULL) && (s_7 != t_7)))
            _fail(t_7);
          else
            s_7 = t_7;
        }
        {
          t = not_null(p_7);
          {
            ATerm w_7 = NULL;
            t = h_57(t);
            {
              u_7 = t;
              {
                ATerm x_7 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(u_7)), not_null(s_7));
                {
                  x_7 = t;
                  if(((w_7 != NULL) && (w_7 != x_7)))
                    _fail(x_7);
                  else
                    w_7 = x_7;
                }
                t = not_null(w_7);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm prod_3 (ATerm t, ATerm x_57 (ATerm), ATerm y_57 (ATerm), ATerm z_57 (ATerm))
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL;
  j_8 = t;
  i_8 :
  if(match_cons(j_8, sym_prod_3))
    {
      k_8 = ATgetArgument(j_8, 0);
      l_8 = ATgetArgument(j_8, 1);
      m_8 = ATgetArgument(j_8, 2);
      {
        ATerm r_8 = NULL,t_8 = NULL;
        ATerm s_8 = NULL;
        t = SSLgetAnnotations(not_null(j_8));
        {
          s_8 = t;
          if(((r_8 != NULL) && (r_8 != s_8)))
            _fail(s_8);
          else
            r_8 = s_8;
        }
        {
          t = not_null(k_8);
          {
            ATerm v_8 = NULL;
            t = x_57(t);
            {
              t_8 = t;
              {
                t = not_null(l_8);
                {
                  ATerm x_8 = NULL;
                  t = y_57(t);
                  {
                    v_8 = t;
                    {
                      t = not_null(m_8);
                      {
                        ATerm z_8 = NULL;
                        t = z_57(t);
                        {
                          x_8 = t;
                          {
                            ATerm a_9 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(t_8), not_null(v_8), not_null(x_8)), not_null(r_8));
                            {
                              a_9 = t;
                              if(((z_8 != NULL) && (z_8 != a_9)))
                                _fail(a_9);
                              else
                                z_8 = a_9;
                            }
                            t = not_null(z_8);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkLex_0 (ATerm t)
{
  ATerm i_9 = NULL;
  i_9 = t;
  t = (ATerm) ATmakeAppl(sym_lexical_1, not_null(i_9));
  return(t);
}
ATerm cf_1 (ATerm t, ATerm d_57 (ATerm))
{
  ATerm q_9 = NULL,r_9 = NULL;
  q_9 = t;
  p_9 :
  if(match_cons(q_9, sym_cf_1))
    {
      r_9 = ATgetArgument(q_9, 0);
      {
        ATerm u_9 = NULL,w_9 = NULL;
        ATerm v_9 = NULL;
        t = SSLgetAnnotations(not_null(q_9));
        {
          v_9 = t;
          if(((u_9 != NULL) && (u_9 != v_9)))
            _fail(v_9);
          else
            u_9 = v_9;
        }
        {
          t = not_null(r_9);
          {
            ATerm y_9 = NULL;
            t = d_57(t);
            {
              w_9 = t;
              {
                ATerm z_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, not_null(w_9)), not_null(u_9));
                {
                  z_9 = t;
                  if(((y_9 != NULL) && (y_9 != z_9)))
                    _fail(z_9);
                  else
                    y_9 = z_9;
                }
                t = not_null(y_9);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm lex_1 (ATerm t, ATerm e_57 (ATerm))
{
  ATerm j_10 = NULL,k_10 = NULL;
  j_10 = t;
  i_10 :
  if(match_cons(j_10, sym_lex_1))
    {
      k_10 = ATgetArgument(j_10, 0);
      {
        ATerm n_10 = NULL,p_10 = NULL;
        ATerm o_10 = NULL;
        t = SSLgetAnnotations(not_null(j_10));
        {
          o_10 = t;
          if(((n_10 != NULL) && (n_10 != o_10)))
            _fail(o_10);
          else
            n_10 = o_10;
        }
        {
          t = not_null(k_10);
          {
            ATerm r_10 = NULL;
            t = e_57(t);
            {
              p_10 = t;
              {
                ATerm s_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(p_10)), not_null(n_10));
                {
                  s_10 = t;
                  if(((r_10 != NULL) && (r_10 != s_10)))
                    _fail(s_10);
                  else
                    r_10 = s_10;
                }
                t = not_null(r_10);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Lexical_0 (ATerm t)
{
  ATerm d_5 = t;
  int j_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_0 (ATerm t)
      {
        ATerm t_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = lex_1(t, _id);
            return(t);
          }
          t = Cons_2(t, v_0, Nil_0);
          return(t);
        }
        ATerm u_0 (ATerm t)
        {
          t = cf_1(t, _id);
          return(t);
        }
        t = prod_3(t, t_0, u_0, _id);
        return(t);
      }
      t = appl_2(t, s_0, _id);
      {
        t = yield_0(t);
        {
          t = MkLex_0(t);
          t = F_p__0(t);
        }
      }
      LocalPopChoice(j_5);
    }
  else
    {
      t = d_5;
      {
        ATerm w_0 (ATerm t)
        {
          ATerm x_0 (ATerm t)
          {
            t = lit_1(t, _id);
            return(t);
          }
          t = prod_3(t, _id, x_0, _id);
          return(t);
        }
        t = appl_2(t, w_0, _id);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm get_sort_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
  a_11 = t;
  y_10 :
  if(match_cons(a_11, sym_appl_2))
    {
      b_11 = ATgetArgument(a_11, 0);
      f_11 = ATgetArgument(a_11, 1);
      z_10 :
      if(match_cons(b_11, sym_prod_3))
        {
          c_11 = ATgetArgument(b_11, 0);
          d_11 = ATgetArgument(b_11, 1);
          e_11 = ATgetArgument(b_11, 2);
          t = not_null(d_11);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nsplit_2 (ATerm t, ATerm o_58 (ATerm), ATerm p_58 (ATerm))
{
  ATerm o_11 = NULL;
  ATerm q_11 = NULL,s_11 = NULL;
  o_11 = t;
  {
    ATerm k_5;
    k_5 = t;
    {
      ATerm r_11 = NULL;
      t = not_null(o_11);
      {
        t = o_58(t);
        {
          r_11 = t;
          if(((q_11 != NULL) && (q_11 != r_11)))
            _fail(r_11);
          else
            q_11 = r_11;
        }
      }
    }
    t = k_5;
    {
      ATerm t_11 = NULL;
      t = not_null(o_11);
      {
        t = p_58(t);
        {
          t_11 = t;
          if(((s_11 != NULL) && (s_11 != t_11)))
            _fail(t_11);
          else
            s_11 = t_11;
        }
      }
      t = (ATerm) ATmakeAppl(sym_N_2, not_null(q_11), not_null(s_11));
    }
  }
  return(t);
}
ATerm ProjectAmb_0 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
  a_12 = t;
  y_11 :
  if(match_cons(a_12, sym_amb_1))
    {
      b_12 = ATgetArgument(a_12, 0);
      z_11 :
      if(((ATgetType(b_12) == AT_LIST) && !(ATisEmpty(b_12))))
        {
          c_12 = ATgetFirst((ATermList) b_12);
          d_12 = (ATerm) ATgetNext((ATermList) b_12);
          t = not_null(c_12);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm i_12 = NULL;
  i_12 = t;
  t = SSL_is_int(not_null(i_12));
  return(t);
}
ATerm abbrev_term_0 (ATerm t)
{
  ATerm n_5 = t;
  int o_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_5 = t;
      int u_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_int_0(t);
          LocalPopChoice(u_5);
        }
      else
        {
          t = p_5;
          t = ProjectAmb_0(t);
        }
      LocalPopChoice(o_5);
    }
  else
    {
      t = n_5;
      {
        ATerm y_0 (ATerm t)
        {
          ATerm v_5 = t;
          int w_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Lexical_0(t);
              LocalPopChoice(w_5);
            }
          else
            {
              t = v_5;
              {
                t = get_args_0(t);
                t = map_1(t, abbrev_term_0);
              }
            }
          return(t);
        }
        t = Nsplit_2(t, get_sort_0, y_0);
      }
    }
  return(t);
}
ATerm F_p__0 (ATerm t)
{
  ATerm n_12 = NULL;
  n_12 = t;
  t = (ATerm) ATinsert(ATempty, not_null(n_12));
  return(t);
}
ATerm F_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  r_12 :
  if(match_cons(s_12, sym_appl_2))
    {
      t_12 = ATgetArgument(s_12, 0);
      u_12 = ATgetArgument(s_12, 1);
      {
        t = not_null(u_12);
        t = concat_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm appl_2 (ATerm t, ATerm a_58 (ATerm), ATerm b_58 (ATerm))
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
  e_13 = t;
  d_13 :
  if(match_cons(e_13, sym_appl_2))
    {
      f_13 = ATgetArgument(e_13, 0);
      g_13 = ATgetArgument(e_13, 1);
      {
        ATerm k_13 = NULL,m_13 = NULL;
        ATerm l_13 = NULL;
        t = SSLgetAnnotations(not_null(e_13));
        {
          l_13 = t;
          if(((k_13 != NULL) && (k_13 != l_13)))
            _fail(l_13);
          else
            k_13 = l_13;
        }
        {
          t = not_null(f_13);
          {
            ATerm o_13 = NULL;
            t = a_58(t);
            {
              m_13 = t;
              {
                t = not_null(g_13);
                {
                  ATerm q_13 = NULL;
                  t = b_58(t);
                  {
                    o_13 = t;
                    {
                      ATerm r_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, not_null(m_13), not_null(o_13)), not_null(k_13));
                      {
                        r_13 = t;
                        if(((q_13 != NULL) && (q_13 != r_13)))
                          _fail(r_13);
                        else
                          q_13 = r_13;
                      }
                      t = not_null(q_13);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm yield_0 (ATerm t)
{
  ATerm x_13 (ATerm t)
  {
    ATerm b_6 = t;
    int c_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 (ATerm t)
        {
          t = map_1(t, x_13);
          return(t);
        }
        t = appl_2(t, _id, z_0);
        t = F_0(t);
        LocalPopChoice(c_6);
      }
    else
      {
        t = b_6;
        t = F_p__0(t);
      }
    return(t);
  }
  t = x_13(t);
  t = implode_string_0(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
  a_14 = t;
  z_13 :
  if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
    {
      b_14 = ATgetFirst((ATermList) a_14);
      c_14 = (ATerm) ATgetNext((ATermList) a_14);
      t = not_null(b_14);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm abbrev_amb_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL;
  j_14 = t;
  i_14 :
  if(match_cons(j_14, sym_amb_1))
    {
      k_14 = ATgetArgument(j_14, 0);
      {
        ATerm m_14 = NULL,o_14 = NULL;
        ATerm d_6;
        d_6 = t;
        {
          ATerm n_14 = NULL;
          t = not_null(k_14);
          {
            t = Hd_0(t);
            {
              t = yield_0(t);
              {
                n_14 = t;
                if(((m_14 != NULL) && (m_14 != n_14)))
                  _fail(n_14);
                else
                  m_14 = n_14;
              }
            }
          }
        }
        t = d_6;
        {
          ATerm p_14 = NULL;
          t = not_null(k_14);
          {
            t = map_1(t, abbrev_term_0);
            {
              p_14 = t;
              if(((o_14 != NULL) && (o_14 != p_14)))
                _fail(p_14);
              else
                o_14 = p_14;
            }
          }
          t = (ATerm) ATmakeAppl(sym_amb_abbr_2, not_null(m_14), not_null(o_14));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm abbrev_ambs_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm b_1 (ATerm t)
    {
      ATerm v_14 = NULL;
      ATerm x_14 = NULL;
      v_14 = t;
      {
        ATerm y_14 = NULL;
        t = not_null(v_14);
        {
          t = abbrev_amb_0(t);
          {
            y_14 = t;
            if(((x_14 != NULL) && (x_14 != y_14)))
              _fail(y_14);
            else
              x_14 = y_14;
          }
        }
        t = (ATerm) ATmakeAppl(sym_root_1, not_null(x_14));
      }
      return(t);
    }
    t = map_1(t, b_1);
    return(t);
  }
  t = parsetree_2(t, a_1, int_to_string_0);
  return(t);
}
ATerm amb_1 (ATerm t, ATerm c_58 (ATerm))
{
  ATerm g_15 = NULL,h_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym_amb_1))
    {
      h_15 = ATgetArgument(g_15, 0);
      {
        ATerm k_15 = NULL,m_15 = NULL;
        ATerm l_15 = NULL;
        t = SSLgetAnnotations(not_null(g_15));
        {
          l_15 = t;
          if(((k_15 != NULL) && (k_15 != l_15)))
            _fail(l_15);
          else
            k_15 = l_15;
        }
        {
          t = not_null(h_15);
          {
            ATerm o_15 = NULL;
            t = c_58(t);
            {
              m_15 = t;
              {
                ATerm p_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, not_null(m_15)), not_null(k_15));
                {
                  p_15 = t;
                  if(((o_15 != NULL) && (o_15 != p_15)))
                    _fail(p_15);
                  else
                    o_15 = p_15;
                }
                t = not_null(o_15);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  w_15 = t;
  v_15 :
  if(match_cons(w_15, sym__2))
    {
      x_15 = ATgetArgument(w_15, 0);
      y_15 = ATgetArgument(w_15, 1);
      if(((x_15 != NULL) && (x_15 != y_15)))
        _fail(y_15);
      else
        x_15 = y_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm m_72 (ATerm), ATerm n_72 (ATerm))
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  d_16 :
  if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
    {
      f_16 = ATgetFirst((ATermList) e_16);
      g_16 = (ATerm) ATgetNext((ATermList) e_16);
      {
        t = n_72(t);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm j_16 = NULL;
            j_16 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_16), not_null(j_16));
              t = m_72(t);
            }
            return(t);
          }
          t = fetch_1(t, c_1);
        }
        t = not_null(g_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm i_72 (ATerm))
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  p_16 = t;
  o_16 :
  if(match_cons(p_16, sym__2))
    {
      q_16 = ATgetArgument(p_16, 0);
      r_16 = ATgetArgument(p_16, 1);
      {
        t = not_null(q_16);
        {
          ATerm v_16 (ATerm t)
          {
            ATerm e_6 = t;
            int j_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_16);
                LocalPopChoice(j_6);
              }
            else
              {
                t = e_6;
                {
                  ATerm k_6 = t;
                  int l_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_1 (ATerm t)
                      {
                        t = not_null(r_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, i_72, d_1);
                      t = v_16(t);
                      LocalPopChoice(l_6);
                    }
                  else
                    {
                      t = k_6;
                      t = Cons_2(t, _id, v_16);
                    }
                }
              }
            return(t);
          }
          t = v_16(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm d_73 (ATerm))
{
  ATerm m_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_73(t);
      LocalPopChoice(o_6);
    }
  else
    {
      t = m_6;
      {
        ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
        a_17 = t;
        z_16 :
        if(((ATgetType(a_17) == AT_LIST) && !(ATisEmpty(a_17))))
          {
            b_17 = ATgetFirst((ATermList) a_17);
            c_17 = (ATerm) ATgetNext((ATermList) a_17);
            {
              ATerm f_17 = NULL,h_17 = NULL;
              ATerm v_6;
              v_6 = t;
              {
                ATerm g_17 = NULL;
                t = not_null(b_17);
                {
                  t = d_73(t);
                  {
                    g_17 = t;
                    if(((f_17 != NULL) && (f_17 != g_17)))
                      _fail(g_17);
                    else
                      f_17 = g_17;
                  }
                }
              }
              t = v_6;
              {
                ATerm i_17 = NULL;
                t = not_null(c_17);
                {
                  t = foldr_3(t, b_73, c_73, d_73);
                  {
                    i_17 = t;
                    if(((h_17 != NULL) && (h_17 != i_17)))
                      _fail(i_17);
                    else
                      h_17 = i_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), not_null(h_17));
                  t = c_73(t);
                }
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm z_71 (ATerm), ATerm a_72 (ATerm), ATerm b_72 (ATerm))
{
  ATerm q_17 = NULL;
  ATerm s_17 = NULL;
  q_17 = t;
  {
    ATerm t_17 = NULL;
    ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
    t = not_null(q_17);
    {
      t_17 = t;
      {
        t = SSL_explode_term(not_null(t_17));
        {
          v_17 = t;
          p_17 :
          if(match_cons(v_17, sym__2))
            {
              w_17 = ATgetArgument(v_17, 0);
              x_17 = ATgetArgument(v_17, 1);
              if(((s_17 != NULL) && (s_17 != x_17)))
                _fail(x_17);
              else
                s_17 = x_17;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_17);
      t = foldr_3(t, z_71, a_72, b_72);
    }
  }
  return(t);
}
ATerm bu_collect_1 (ATerm t, ATerm j_71 (ATerm))
{
  ATerm w_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_18 (ATerm t)
      {
        ATerm z_6 = t;
        int a_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _some(t, e_18);
            {
              ATerm e_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              ATerm f_1 (ATerm t)
              {
                t = union_1(t, eq_0);
                return(t);
              }
              ATerm g_1 (ATerm t)
              {
                ATerm b_7 = t;
                int g_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2(t, j_71, _id);
                    LocalPopChoice(g_7);
                  }
                else
                  {
                    t = b_7;
                    t = (ATerm) ATempty;
                  }
                return(t);
              }
              t = crush_3(t, e_1, f_1, g_1);
            }
            LocalPopChoice(a_7);
          }
        else
          {
            t = z_6;
            {
              ATerm c_18 = NULL;
              ATerm d_18 = NULL;
              t = j_71(t);
              {
                d_18 = t;
                if(((c_18 != NULL) && (c_18 != d_18)))
                  _fail(d_18);
                else
                  c_18 = d_18;
              }
              t = (ATerm) ATinsert(ATempty, not_null(c_18));
            }
          }
        return(t);
      }
      t = e_18(t);
      LocalPopChoice(x_6);
    }
  else
    {
      t = w_6;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm parsetree_2 (ATerm t, ATerm h_58 (ATerm), ATerm i_58 (ATerm))
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym_parsetree_2))
    {
      n_18 = ATgetArgument(m_18, 0);
      o_18 = ATgetArgument(m_18, 1);
      {
        ATerm s_18 = NULL,u_18 = NULL;
        ATerm t_18 = NULL;
        t = SSLgetAnnotations(not_null(m_18));
        {
          t_18 = t;
          if(((s_18 != NULL) && (s_18 != t_18)))
            _fail(t_18);
          else
            s_18 = t_18;
        }
        {
          t = not_null(n_18);
          {
            ATerm w_18 = NULL;
            t = h_58(t);
            {
              u_18 = t;
              {
                t = not_null(o_18);
                {
                  ATerm y_18 = NULL;
                  t = i_58(t);
                  {
                    w_18 = t;
                    {
                      ATerm z_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, not_null(u_18), not_null(w_18)), not_null(s_18));
                      {
                        z_18 = t;
                        if(((y_18 != NULL) && (y_18 != z_18)))
                          _fail(z_18);
                        else
                          y_18 = z_18;
                      }
                      t = not_null(y_18);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm collect_ambs_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm i_1 (ATerm t)
    {
      t = amb_1(t, _id);
      return(t);
    }
    t = bu_collect_1(t, i_1);
    return(t);
  }
  t = parsetree_2(t, h_1, _id);
  return(t);
}
ATerm visamb_0 (ATerm t)
{
  t = collect_ambs_0(t);
  t = abbrev_ambs_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm b_50 (ATerm), ATerm c_50 (ATerm))
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym__2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      {
        ATerm h_20 = NULL,j_20 = NULL;
        ATerm i_20 = NULL;
        t = SSLgetAnnotations(not_null(l_19));
        {
          i_20 = t;
          if(((h_20 != NULL) && (h_20 != i_20)))
            _fail(i_20);
          else
            h_20 = i_20;
        }
        {
          t = not_null(m_19);
          {
            ATerm l_20 = NULL;
            t = b_50(t);
            {
              j_20 = t;
              {
                t = not_null(n_19);
                {
                  ATerm n_20 = NULL;
                  t = c_50(t);
                  {
                    l_20 = t;
                    {
                      ATerm o_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_20), not_null(l_20)), not_null(h_20));
                      {
                        o_20 = t;
                        if(((n_20 != NULL) && (n_20 != o_20)))
                          _fail(o_20);
                        else
                          n_20 = o_20;
                      }
                      t = not_null(n_20);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm n_78 (ATerm))
{
  ATerm x_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
  ATerm h_7;
  h_7 = t;
  t = dtime_0(t);
  t = h_7;
  {
    t = n_78(t);
    {
      ATerm i_7;
      i_7 = t;
      {
        ATerm y_20 = NULL;
        t = dtime_0(t);
        {
          y_20 = t;
          if(((x_20 != NULL) && (x_20 != y_20)))
            _fail(y_20);
          else
            x_20 = y_20;
        }
      }
      t = i_7;
      {
        z_20 = t;
        w_20 :
        if(match_cons(z_20, sym__2))
          {
            a_21 = ATgetArgument(z_20, 0);
            b_21 = ATgetArgument(z_20, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_21)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_20))), not_null(b_21));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm h_21 = NULL;
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL;
      i_21 = t;
      {
        if(((h_21 != NULL) && (h_21 != i_21)))
          _fail(i_21);
        else
          h_21 = i_21;
        t = SSL_ReadFromFile(not_null(h_21));
      }
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm j_1 (ATerm t)
        {
          t = term_l_7;
          return(t);
        }
        t = debug_1(t, j_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm o_74 (ATerm), ATerm p_74 (ATerm))
{
  ATerm r_21 = NULL,t_21 = NULL;
  ATerm m_7;
  m_7 = t;
  {
    ATerm s_21 = NULL;
    t = o_74(t);
    {
      s_21 = t;
      if(((r_21 != NULL) && (r_21 != s_21)))
        _fail(s_21);
      else
        r_21 = s_21;
    }
  }
  t = m_7;
  {
    ATerm u_21 = NULL;
    t = p_74(t);
    {
      u_21 = t;
      if(((t_21 != NULL) && (t_21 != u_21)))
        _fail(u_21);
      else
        t_21 = u_21;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_21), not_null(t_21));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_22 = NULL;
  ATerm q_7;
  q_7 = t;
  {
    ATerm r_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_1 (ATerm t)
        {
          ATerm b_22 = NULL,c_22 = NULL;
          b_22 = t;
          y_21 :
          if(match_cons(b_22, sym_Input_1))
            {
              c_22 = ATgetArgument(b_22, 0);
              if(((a_22 != NULL) && (a_22 != c_22)))
                _fail(c_22);
              else
                a_22 = c_22;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, k_1);
        LocalPopChoice(v_7);
      }
    else
      {
        t = r_7;
        {
          ATerm d_22 = NULL;
          t = term_y_7;
          {
            d_22 = t;
            if(((a_22 != NULL) && (a_22 != d_22)))
              _fail(d_22);
            else
              a_22 = d_22;
          }
        }
      }
  }
  t = q_7;
  {
    ATerm l_1 (ATerm t)
    {
      t = not_null(a_22);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm l_22 = NULL;
    l_22 = t;
    k_22 :
    if(!(match_string(l_22, "-v")))
      {
        if(!(match_string(l_22, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    t = term_b_8;
    t = set_config_0(t);
    t = term_c_8;
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_d_8;
    return(t);
  }
  t = Option_3(t, m_1, n_1, o_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm o_22 = NULL;
    o_22 = t;
    m_22 :
    if(!(match_string(o_22, "-k")))
      {
        if(!(match_string(o_22, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    ATerm e_8;
    e_8 = t;
    {
      ATerm p_22 = NULL;
      ATerm q_22 = NULL;
      t = string_to_int_0(t);
      {
        q_22 = t;
        if(((p_22 != NULL) && (p_22 != q_22)))
          _fail(q_22);
        else
          p_22 = q_22;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_8, not_null(p_22));
        t = set_config_0(t);
      }
    }
    t = e_8;
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    t = term_g_8;
    return(t);
  }
  t = ArgOption_3(t, p_1, q_1, r_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm t_22 = NULL;
  t_22 = t;
  t = SSL_string_to_int(not_null(t_22));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_1 (ATerm t)
      {
        ATerm b_23 = NULL;
        b_23 = t;
        w_22 :
        if(!(match_string(b_23, "-S")))
          {
            if(!(match_string(b_23, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        t = term_o_8;
        t = set_config_0(t);
        t = term_p_8;
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        t = term_q_8;
        return(t);
      }
      t = Option_3(t, s_1, t_1, u_1);
      LocalPopChoice(n_8);
    }
  else
    {
      t = h_8;
      {
        ATerm u_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_1 (ATerm t)
            {
              ATerm c_23 = NULL;
              c_23 = t;
              x_22 :
              if(!(match_string(c_23, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm w_1 (ATerm t)
            {
              ATerm f_23 = NULL;
              ATerm y_8;
              y_8 = t;
              {
                ATerm d_23 = NULL;
                ATerm e_23 = NULL;
                t = string_to_int_0(t);
                {
                  e_23 = t;
                  if(((d_23 != NULL) && (d_23 != e_23)))
                    _fail(e_23);
                  else
                    d_23 = e_23;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_4, not_null(d_23));
                  t = set_config_0(t);
                }
              }
              t = y_8;
              {
                ATerm g_23 = NULL;
                g_23 = t;
                if(((f_23 != NULL) && (f_23 != g_23)))
                  _fail(g_23);
                else
                  f_23 = g_23;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(f_23));
              }
              return(t);
            }
            ATerm x_1 (ATerm t)
            {
              t = term_b_9;
              return(t);
            }
            t = ArgOption_3(t, v_1, w_1, x_1);
            LocalPopChoice(w_8);
          }
        else
          {
            t = u_8;
            {
              ATerm y_1 (ATerm t)
              {
                ATerm h_23 = NULL;
                h_23 = t;
                a_23 :
                if(!(match_string(h_23, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm z_1 (ATerm t)
              {
                t = term_d_9;
                t = set_config_0(t);
                t = term_e_9;
                return(t);
              }
              ATerm a_2 (ATerm t)
              {
                t = term_f_9;
                return(t);
              }
              t = Option_3(t, y_1, z_1, a_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm n_23 = NULL;
    n_23 = t;
    k_23 :
    if(!(match_string(n_23, "-o")))
      {
        if(!(match_string(n_23, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm q_23 = NULL;
    ATerm l_9;
    l_9 = t;
    {
      ATerm o_23 = NULL;
      ATerm p_23 = NULL;
      p_23 = t;
      if(((o_23 != NULL) && (o_23 != p_23)))
        _fail(p_23);
      else
        o_23 = p_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_9, not_null(o_23));
        t = set_config_0(t);
      }
    }
    t = l_9;
    {
      ATerm r_23 = NULL;
      r_23 = t;
      if(((q_23 != NULL) && (q_23 != r_23)))
        _fail(r_23);
      else
        q_23 = r_23;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_23));
    }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_n_9;
    return(t);
  }
  t = ArgOption_3(t, b_2, c_2, d_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm o_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(s_9);
    }
  else
    {
      t = o_9;
      {
        ATerm e_2 (ATerm t)
        {
          ATerm v_23 = NULL;
          v_23 = t;
          u_23 :
          if(!(match_string(v_23, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm f_2 (ATerm t)
        {
          t = term_x_9;
          t = set_config_0(t);
          t = term_a_10;
          return(t);
        }
        ATerm g_2 (ATerm t)
        {
          t = term_b_10;
          return(t);
        }
        t = Option_3(t, e_2, f_2, g_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL;
  b_24 = t;
  z_23 :
  if(match_string(b_24, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(b_24) == AT_LIST) && !(ATisEmpty(b_24))))
        {
          c_24 = ATgetFirst((ATermList) b_24);
          d_24 = (ATerm) ATgetNext((ATermList) b_24);
          a_24 :
          if(((ATgetType(d_24) == AT_LIST) && !(ATisEmpty(d_24))))
            {
              e_24 = ATgetFirst((ATermList) d_24);
              f_24 = (ATerm) ATgetNext((ATermList) d_24);
              {
                ATerm j_24 = NULL;
                ATerm c_10;
                c_10 = t;
                {
                  t = not_null(c_24);
                  t = l_0(t);
                }
                t = c_10;
                {
                  ATerm k_24 = NULL;
                  t = not_null(e_24);
                  {
                    t = m_0(t);
                    {
                      k_24 = t;
                      if(((j_24 != NULL) && (j_24 != k_24)))
                        _fail(k_24);
                      else
                        j_24 = k_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_24)), not_null(j_24));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm r_24 = NULL;
    r_24 = t;
    o_24 :
    if(!(match_string(r_24, "-i")))
      {
        if(!(match_string(r_24, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm u_24 = NULL;
    ATerm d_10;
    d_10 = t;
    {
      ATerm s_24 = NULL;
      ATerm t_24 = NULL;
      t_24 = t;
      if(((s_24 != NULL) && (s_24 != t_24)))
        _fail(t_24);
      else
        s_24 = t_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_10, not_null(s_24));
        t = set_config_0(t);
      }
    }
    t = d_10;
    {
      ATerm v_24 = NULL;
      v_24 = t;
      if(((u_24 != NULL) && (u_24 != v_24)))
        _fail(v_24);
      else
        u_24 = v_24;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_24));
    }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_f_10;
    return(t);
  }
  t = ArgOption_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm l_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(m_10);
          }
        else
          {
            t = l_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  t = SSL_table_destroy(not_null(z_24));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  t = SSL_exit(not_null(d_25));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
  h_25 = t;
  g_25 :
  if(((ATgetType(h_25) == AT_LIST) && ATisEmpty(h_25)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(h_25) == AT_LIST) && !(ATisEmpty(h_25))))
        {
          i_25 = ATgetFirst((ATermList) h_25);
          j_25 = (ATerm) ATgetNext((ATermList) h_25);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm q_10;
  q_10 = t;
  {
    ATerm m_25 = NULL;
    ATerm p_25 = NULL;
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        {
          ATerm n_25 = NULL;
          ATerm o_25 = NULL;
          o_25 = t;
          if(((n_25 != NULL) && (n_25 != o_25)))
            _fail(o_25);
          else
            n_25 = o_25;
          t = (ATerm) ATinsert(ATempty, not_null(n_25));
        }
      }
    {
      p_25 = t;
      if(((m_25 != NULL) && (m_25 != p_25)))
        _fail(p_25);
      else
        m_25 = p_25;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_5, not_null(m_25));
      t = printnl_0(t);
    }
  }
  t = q_10;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_11), term_j_11), term_i_11), term_h_11), term_g_11), term_x_10), term_w_10), term_v_10);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  a_26 = t;
  x_25 :
  if(((ATgetType(a_26) == AT_LIST) && !(ATisEmpty(a_26))))
    {
      y_25 = ATgetFirst((ATermList) a_26);
      z_25 = (ATerm) ATgetNext((ATermList) a_26);
      {
        ATerm d_26 = NULL;
        t = not_null(z_25);
        {
          ATerm l_11;
          l_11 = t;
          {
            ATerm e_26 = NULL,g_26 = NULL,i_26 = NULL;
            ATerm m_11;
            m_11 = t;
            {
              ATerm f_26 = NULL;
              t = j_0(t);
              {
                f_26 = t;
                if(((e_26 != NULL) && (e_26 != f_26)))
                  _fail(f_26);
                else
                  e_26 = f_26;
              }
            }
            t = m_11;
            {
              ATerm h_26 = NULL;
              t = not_null(y_25);
              {
                t = i_0(t);
                {
                  h_26 = t;
                  if(((g_26 != NULL) && (g_26 != h_26)))
                    _fail(h_26);
                  else
                    g_26 = h_26;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_26)), not_null(g_26));
                {
                  i_26 = t;
                  if(((d_26 != NULL) && (d_26 != i_26)))
                    _fail(i_26);
                  else
                    d_26 = i_26;
                }
              }
            }
          }
          t = l_11;
          {
            ATerm k_2 (ATerm t)
            {
              t = not_null(d_26);
              return(t);
            }
            t = reverse_acc_2(t, i_0, k_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_26) == AT_LIST) && ATisEmpty(a_26)))
        {
          {
            t = term_a_8;
            t = j_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, l_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm p_26 = NULL;
  ATerm q_26 = NULL;
  t = term_a_8;
  {
    t = h_0(t);
    {
      q_26 = t;
      if(((p_26 != NULL) && (p_26 != q_26)))
        _fail(q_26);
      else
        p_26 = q_26;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_11), not_null(p_26)), term_n_11);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_56 (ATerm))
{
  ATerm z_26 = NULL,a_27 = NULL;
  z_26 = t;
  y_26 :
  if(match_cons(z_26, sym_Program_1))
    {
      a_27 = ATgetArgument(z_26, 0);
      {
        ATerm i_27 = NULL,k_27 = NULL;
        ATerm j_27 = NULL;
        t = SSLgetAnnotations(not_null(z_26));
        {
          j_27 = t;
          if(((i_27 != NULL) && (i_27 != j_27)))
            _fail(j_27);
          else
            i_27 = j_27;
        }
        {
          t = not_null(a_27);
          {
            ATerm m_27 = NULL;
            t = w_56(t);
            {
              k_27 = t;
              {
                ATerm n_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_27)), not_null(i_27));
                {
                  n_27 = t;
                  if(((m_27 != NULL) && (m_27 != n_27)))
                    _fail(n_27);
                  else
                    m_27 = n_27;
                }
                t = not_null(m_27);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm a_28 = NULL;
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_28 = NULL;
      t = term_l_4;
      {
        t = get_config_0(t);
        {
          b_28 = t;
          if(((a_28 != NULL) && (a_28 != b_28)))
            _fail(b_28);
          else
            a_28 = b_28;
        }
      }
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      {
        ATerm m_2 (ATerm t)
        {
          ATerm n_2 (ATerm t)
          {
            ATerm c_28 = NULL;
            c_28 = t;
            if(((a_28 != NULL) && (a_28 != c_28)))
              _fail(c_28);
            else
              a_28 = c_28;
            return(t);
          }
          t = Program_1(t, n_2);
          return(t);
        }
        t = fetch_1(t, m_2);
      }
    }
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_2 (ATerm t)
        {
          t = not_null(a_28);
          return(t);
        }
        t = short_description_1(t, o_2);
        t = echo_0(t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        {
        }
      }
    {
      t = term_e_12;
      {
        t = echo_0(t);
        {
          t = term_h_12;
          {
            t = table_get_0(t);
            {
              ATerm p_2 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, p_2);
              {
                ATerm q_2 (ATerm t)
                {
                  ATerm d_28 = NULL;
                  ATerm e_28 = NULL;
                  e_28 = t;
                  if(((d_28 != NULL) && (d_28 != e_28)))
                    _fail(e_28);
                  else
                    d_28 = e_28;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_28)), term_j_12);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, q_2);
                {
                  ATerm k_12 = t;
                  int l_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_28 = NULL;
                      ATerm g_28 = NULL;
                      ATerm r_2 (ATerm t)
                      {
                        t = not_null(a_28);
                        return(t);
                      }
                      t = long_description_1(t, r_2);
                      {
                        g_28 = t;
                        if(((f_28 != NULL) && (f_28 != g_28)))
                          _fail(g_28);
                        else
                          f_28 = g_28;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(f_28)), term_m_12);
                        t = echo_0(t);
                      }
                      LocalPopChoice(l_12);
                    }
                  else
                    {
                      t = k_12;
                      {
                      }
                    }
                }
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm o_12;
  o_12 = t;
  {
    ATerm m_28 = NULL;
    ATerm n_28 = NULL;
    n_28 = t;
    if(((m_28 != NULL) && (m_28 != n_28)))
      _fail(n_28);
    else
      m_28 = n_28;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_3, (ATerm) ATinsert(ATempty, not_null(m_28)));
      t = printnl_0(t);
    }
  }
  t = o_12;
  return(t);
}
ATerm say_1 (ATerm t, ATerm k_77 (ATerm))
{
  ATerm p_12;
  p_12 = t;
  {
    t = k_77(t);
    t = debug_0(t);
  }
  t = p_12;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_56 (ATerm))
{
  ATerm u_28 = NULL,v_28 = NULL;
  u_28 = t;
  t_28 :
  if(match_cons(u_28, sym_Undefined_1))
    {
      v_28 = ATgetArgument(u_28, 0);
      {
        ATerm y_28 = NULL,a_29 = NULL;
        ATerm z_28 = NULL;
        t = SSLgetAnnotations(not_null(u_28));
        {
          z_28 = t;
          if(((y_28 != NULL) && (y_28 != z_28)))
            _fail(z_28);
          else
            y_28 = z_28;
        }
        {
          t = not_null(v_28);
          {
            ATerm c_29 = NULL;
            t = x_56(t);
            {
              a_29 = t;
              {
                ATerm d_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_29)), not_null(y_28));
                {
                  d_29 = t;
                  if(((c_29 != NULL) && (c_29 != d_29)))
                    _fail(d_29);
                  else
                    c_29 = d_29;
                }
                t = not_null(c_29);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm u_66 (ATerm))
{
  ATerm i_29 (ATerm t)
  {
    ATerm q_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_66, _id);
        LocalPopChoice(v_12);
      }
    else
      {
        t = q_12;
        t = Cons_2(t, _id, i_29);
      }
    return(t);
  }
  t = i_29(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_81 (ATerm))
{
  t = fetch_1(t, i_81);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_29 = NULL;
  n_29 = t;
  m_29 :
  if(match_cons(n_29, sym_Help_0))
    {
      ATerm p_29 = NULL,r_29 = NULL;
      ATerm w_12;
      w_12 = t;
      {
        ATerm q_29 = NULL;
        t = SSLgetAnnotations(not_null(n_29));
        {
          q_29 = t;
          if(((p_29 != NULL) && (p_29 != q_29)))
            _fail(q_29);
          else
            p_29 = q_29;
        }
      }
      t = w_12;
      {
        ATerm s_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_29));
        {
          s_29 = t;
          if(((r_29 != NULL) && (r_29 != s_29)))
            _fail(s_29);
          else
            r_29 = s_29;
        }
        t = not_null(r_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm x_29 = NULL;
  x_29 = t;
  t = SSL_implode_string(not_null(x_29));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      {
        ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
        c_30 = t;
        b_30 :
        if(((ATgetType(c_30) == AT_LIST) && !(ATisEmpty(c_30))))
          {
            d_30 = ATgetFirst((ATermList) c_30);
            e_30 = (ATerm) ATgetNext((ATermList) c_30);
            {
              t = not_null(d_30);
              {
                ATerm s_2 (ATerm t)
                {
                  t = not_null(e_30);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, s_2);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm o_30 = NULL;
  ATerm q_30 = NULL;
  o_30 = t;
  {
    ATerm r_30 = NULL;
    ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
    t = not_null(o_30);
    {
      r_30 = t;
      {
        t = SSL_explode_term(not_null(r_30));
        {
          t_30 = t;
          m_30 :
          if(match_cons(t_30, sym__2))
            {
              u_30 = ATgetArgument(t_30, 0);
              v_30 = ATgetArgument(t_30, 1);
              n_30 :
              if(match_string(u_30, ""))
                {
                  if(((q_30 != NULL) && (q_30 != v_30)))
                    _fail(v_30);
                  else
                    q_30 = v_30;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_30);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_67 (ATerm))
{
  ATerm z_30 (ATerm t)
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_30);
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        {
          t = Nil_0(t);
          t = a_67(t);
        }
      }
    return(t);
  }
  t = z_30(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
  c_31 = t;
  b_31 :
  if(match_cons(c_31, sym__2))
    {
      d_31 = ATgetArgument(c_31, 0);
      e_31 = ATgetArgument(c_31, 1);
      {
        t = not_null(d_31);
        {
          ATerm t_2 (ATerm t)
          {
            t = not_null(e_31);
            return(t);
          }
          t = at_end_1(t, t_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_31 = NULL;
  j_31 = t;
  t = SSL_explode_string(not_null(j_31));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  n_31 :
  if(match_cons(o_31, sym__2))
    {
      p_31 = ATgetArgument(o_31, 0);
      q_31 = ATgetArgument(o_31, 1);
      {
        ATerm j_13;
        j_13 = t;
        t = SSL_printnl(not_null(p_31), not_null(q_31));
        t = j_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm j_77 (ATerm))
{
  ATerm n_13;
  n_13 = t;
  {
    ATerm w_31 = NULL,y_31 = NULL;
    ATerm p_13;
    p_13 = t;
    {
      ATerm x_31 = NULL;
      t = j_77(t);
      {
        x_31 = t;
        if(((w_31 != NULL) && (w_31 != x_31)))
          _fail(x_31);
        else
          w_31 = x_31;
      }
    }
    t = p_13;
    {
      ATerm z_31 = NULL;
      z_31 = t;
      if(((y_31 != NULL) && (y_31 != z_31)))
        _fail(z_31);
      else
        y_31 = z_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_31)), not_null(w_31)));
        t = printnl_0(t);
      }
    }
  }
  t = n_13;
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_66 (ATerm))
{
  ATerm c_32 (ATerm t)
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        t = Cons_2(t, l_66, c_32);
      }
    return(t);
  }
  t = c_32(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  t = SSL_is_string(not_null(e_32));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      {
        ATerm w_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_2 (ATerm t)
            {
              ATerm d_14 = t;
              int e_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(e_14);
                }
              else
                {
                  t = d_14;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, v_2);
            LocalPopChoice(y_13);
          }
        else
          {
            t = w_13;
            {
              ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
              n_32 = t;
              m_32 :
              if(match_cons(n_32, sym_Path_1))
                {
                  o_32 = ATgetArgument(n_32, 0);
                  t = not_null(o_32);
                }
              else
                {
                  if(match_cons(n_32, sym_Var_1))
                    {
                      o_32 = ATgetArgument(n_32, 0);
                      {
                        t = not_null(o_32);
                        {
                          ATerm f_14 = t;
                          int g_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(g_14);
                            }
                          else
                            {
                              t = f_14;
                              {
                                ATerm w_2 (ATerm t)
                                {
                                  t = term_h_14;
                                  return(t);
                                }
                                t = debug_1(t, w_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(n_32, sym_Prefix_2))
                        {
                          o_32 = ATgetArgument(n_32, 0);
                          p_32 = ATgetArgument(n_32, 1);
                          {
                            ATerm u_32 = NULL,w_32 = NULL;
                            ATerm l_14;
                            l_14 = t;
                            {
                              ATerm v_32 = NULL;
                              t = not_null(o_32);
                              {
                                t = eval_config_0(t);
                                {
                                  v_32 = t;
                                  if(((u_32 != NULL) && (u_32 != v_32)))
                                    _fail(v_32);
                                  else
                                    u_32 = v_32;
                                }
                              }
                            }
                            t = l_14;
                            {
                              ATerm x_32 = NULL;
                              t = not_null(p_32);
                              {
                                t = eval_config_0(t);
                                {
                                  x_32 = t;
                                  if(((w_32 != NULL) && (w_32 != x_32)))
                                    _fail(x_32);
                                  else
                                    w_32 = x_32;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_32), not_null(w_32));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm f_33 = NULL;
  f_33 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_14, not_null(f_33));
    {
      t = table_get_0(t);
      {
        ATerm r_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm t_14;
              t_14 = t;
              {
                ATerm h_33 = NULL;
                ATerm i_33 = NULL;
                i_33 = t;
                if(((h_33 != NULL) && (h_33 != i_33)))
                  _fail(i_33);
                else
                  h_33 = i_33;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_q_14, not_null(f_33), not_null(h_33));
                  t = table_put_0(t);
                }
              }
              t = t_14;
            }
            LocalPopChoice(s_14);
          }
        else
          {
            t = r_14;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm u_58 (ATerm))
{
  ATerm u_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_58(t);
      LocalPopChoice(w_14);
    }
  else
    {
      t = u_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
  n_33 = t;
  m_33 :
  if(match_cons(n_33, sym__2))
    {
      o_33 = ATgetArgument(n_33, 0);
      p_33 = ATgetArgument(n_33, 1);
      t = SSL_table_get(not_null(o_33), not_null(p_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL;
  w_33 = t;
  v_33 :
  if(match_cons(w_33, sym__3))
    {
      x_33 = ATgetArgument(w_33, 0);
      y_33 = ATgetArgument(w_33, 1);
      z_33 = ATgetArgument(w_33, 2);
      {
        ATerm z_14;
        z_14 = t;
        {
          ATerm d_34 = NULL;
          ATerm e_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_33), not_null(y_33));
          {
            ATerm a_15 = t;
            int b_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(b_15);
              }
            else
              {
                t = a_15;
                t = (ATerm) ATempty;
              }
            {
              e_34 = t;
              if(((d_34 != NULL) && (d_34 != e_34)))
                _fail(e_34);
              else
                d_34 = e_34;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_33), not_null(y_33), (ATerm) ATinsert(CheckATermList(not_null(d_34)), not_null(z_33)));
            t = table_put_0(t);
          }
        }
        t = z_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm n_82 (ATerm))
{
  ATerm l_34 = NULL;
  ATerm m_34 = NULL;
  t = term_a_8;
  {
    t = n_82(t);
    {
      m_34 = t;
      if(((l_34 != NULL) && (l_34 != m_34)))
        _fail(m_34);
      else
        l_34 = m_34;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_12, term_g_12, not_null(l_34));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
  s_34 = t;
  r_34 :
  if(match_string(s_34, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_34) == AT_LIST) && !(ATisEmpty(s_34))))
        {
          t_34 = ATgetFirst((ATermList) s_34);
          u_34 = (ATerm) ATgetNext((ATermList) s_34);
          {
            ATerm x_34 = NULL;
            ATerm c_15;
            c_15 = t;
            {
              t = not_null(t_34);
              t = a_0(t);
            }
            t = c_15;
            {
              ATerm y_34 = NULL;
              t = term_a_8;
              {
                t = d_0(t);
                {
                  y_34 = t;
                  if(((x_34 != NULL) && (x_34 != y_34)))
                    _fail(y_34);
                  else
                    x_34 = y_34;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_34)), not_null(x_34));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm d_35 = NULL;
    d_35 = t;
    c_35 :
    if(!(match_string(d_35, "--help")))
      {
        if(!(match_string(d_35, "-h")))
          {
            if(!(match_string(d_35, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_e_15;
    {
      t = set_config_0(t);
      t = term_i_15;
    }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_j_15;
    return(t);
  }
  t = Option_3(t, x_2, y_2, z_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
  g_35 = t;
  f_35 :
  if(((ATgetType(g_35) == AT_LIST) && !(ATisEmpty(g_35))))
    {
      h_35 = ATgetFirst((ATermList) g_35);
      i_35 = (ATerm) ATgetNext((ATermList) g_35);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_35)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_35)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_51 (ATerm), ATerm l_51 (ATerm))
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL;
  s_35 = t;
  r_35 :
  if(((ATgetType(s_35) == AT_LIST) && !(ATisEmpty(s_35))))
    {
      t_35 = ATgetFirst((ATermList) s_35);
      u_35 = (ATerm) ATgetNext((ATermList) s_35);
      {
        ATerm a_36 = NULL,c_36 = NULL;
        ATerm b_36 = NULL;
        t = SSLgetAnnotations(not_null(s_35));
        {
          b_36 = t;
          if(((a_36 != NULL) && (a_36 != b_36)))
            _fail(b_36);
          else
            a_36 = b_36;
        }
        {
          t = not_null(t_35);
          {
            ATerm h_36 = NULL;
            t = k_51(t);
            {
              c_36 = t;
              {
                t = not_null(u_35);
                {
                  ATerm j_36 = NULL;
                  t = l_51(t);
                  {
                    h_36 = t;
                    {
                      ATerm k_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_36)), not_null(c_36)), not_null(a_36));
                      {
                        k_36 = t;
                        if(((j_36 != NULL) && (j_36 != k_36)))
                          _fail(k_36);
                        else
                          j_36 = k_36;
                      }
                      t = not_null(j_36);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm u_36 = NULL;
  u_36 = t;
  t_36 :
  if(((ATgetType(u_36) == AT_LIST) && ATisEmpty(u_36)))
    {
      {
        ATerm w_36 = NULL,y_36 = NULL;
        ATerm n_15;
        n_15 = t;
        {
          ATerm x_36 = NULL;
          t = SSLgetAnnotations(not_null(u_36));
          {
            x_36 = t;
            if(((w_36 != NULL) && (w_36 != x_36)))
              _fail(x_36);
            else
              w_36 = x_36;
          }
        }
        t = n_15;
        {
          ATerm z_36 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_36));
          {
            z_36 = t;
            if(((y_36 != NULL) && (y_36 != z_36)))
              _fail(z_36);
            else
              y_36 = z_36;
          }
          t = not_null(y_36);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
  h_37 = t;
  g_37 :
  if(match_cons(h_37, sym__2))
    {
      i_37 = ATgetArgument(h_37, 0);
      j_37 = ATgetArgument(h_37, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_14, not_null(i_37), not_null(j_37));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm l_82 (ATerm))
{
  ATerm q_15;
  q_15 = t;
  {
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_15;
        t = l_82(t);
        LocalPopChoice(s_15);
      }
    else
      {
        t = r_15;
        {
        }
      }
  }
  t = q_15;
  {
    ATerm a_3 (ATerm t)
    {
      ATerm s_37 = NULL;
      ATerm u_15;
      u_15 = t;
      {
        ATerm q_37 = NULL;
        ATerm r_37 = NULL;
        r_37 = t;
        if(((q_37 != NULL) && (q_37 != r_37)))
          _fail(r_37);
        else
          q_37 = r_37;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_4, not_null(q_37));
          t = set_config_0(t);
        }
      }
      t = u_15;
      {
        ATerm t_37 = NULL;
        t_37 = t;
        if(((s_37 != NULL) && (s_37 != t_37)))
          _fail(t_37);
        else
          s_37 = t_37;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_37));
      }
      return(t);
    }
    ATerm b_3 (ATerm t)
    {
      ATerm z_15 = t;
      int a_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_16 = t;
          int c_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_16);
            }
          else
            {
              t = b_16;
              {
                t = l_82(t);
                t = Cons_2(t, _id, b_3);
              }
            }
          LocalPopChoice(a_16);
        }
      else
        {
          t = z_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_3, b_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  ATerm h_16;
  h_16 = t;
  {
    ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL;
    c_38 = t;
    y_37 :
    if(match_cons(c_38, sym__3))
      {
        d_38 = ATgetArgument(c_38, 0);
        e_38 = ATgetArgument(c_38, 1);
        f_38 = ATgetArgument(c_38, 2);
        {
          if(((z_37 != NULL) && (z_37 != d_38)))
            _fail(d_38);
          else
            z_37 = d_38;
          {
            if(((a_38 != NULL) && (a_38 != e_38)))
              _fail(e_38);
            else
              a_38 = e_38;
            {
              if(((b_38 != NULL) && (b_38 != f_38)))
                _fail(f_38);
              else
                b_38 = f_38;
              t = SSL_table_put(not_null(z_37), not_null(a_38), not_null(b_38));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_82 (ATerm))
{
  ATerm i_38 = NULL;
  ATerm i_16;
  i_16 = t;
  {
    t = term_k_16;
    t = table_put_0(t);
  }
  t = i_16;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm l_16 = t;
      int m_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_82(t);
          LocalPopChoice(m_16);
        }
      else
        {
          t = l_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_3);
    {
      ATerm n_16 = t;
      int s_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_16;
          t_16 = t;
          {
            ATerm u_16 = t;
            int w_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_d_15;
                t = get_config_0(t);
                LocalPopChoice(w_16);
              }
            else
              {
                t = u_16;
                t = fetch_1(t, Help_0);
              }
          }
          t = t_16;
          {
            t = system_usage_0(t);
            {
              t = term_s_3;
              t = exit_0(t);
            }
          }
          LocalPopChoice(s_16);
        }
      else
        {
          t = n_16;
          {
            ATerm x_16 = t;
            int y_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_3 (ATerm t)
                {
                  ATerm e_3 (ATerm t)
                  {
                    ATerm j_38 = NULL;
                    j_38 = t;
                    if(((i_38 != NULL) && (i_38 != j_38)))
                      _fail(j_38);
                    else
                      i_38 = j_38;
                    return(t);
                  }
                  t = Undefined_1(t, e_3);
                  return(t);
                }
                t = fetch_1(t, d_3);
                {
                  ATerm f_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_38)), term_d_17);
                    return(t);
                  }
                  t = say_1(t, f_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_j_3;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(y_16);
              }
            else
              {
                t = x_16;
                {
                }
              }
          }
        }
      {
        ATerm e_17;
        e_17 = t;
        {
          t = term_f_12;
          t = table_destroy_0(t);
        }
        t = e_17;
      }
    }
  }
  return(t);
}
ATerm Vis_amb_0 (ATerm t)
{
  t = parse_options_1(t, io_options_0);
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_file_0(t);
        {
          ATerm g_3 (ATerm t)
          {
            t = _2(t, _id, visamb_0);
            return(t);
          }
          t = apply_strategy_1(t, g_3);
          {
            t = output_file_0(t);
            t = report_success_0(t);
          }
        }
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        t = report_failure_0(t);
      }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Vis_amb_0(t);
  return(t);
}
