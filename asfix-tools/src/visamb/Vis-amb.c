#include <srts/stratego.h>
#include <srts/stratego-lib.h>
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
ATerm term_i_16;
ATerm term_r_15;
ATerm term_b_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_n_10;
ATerm term_j_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_v_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_k_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_v_7;
ATerm term_h_5;
ATerm term_y_4;
ATerm term_x_4;
ATerm term_s_4;
ATerm term_q_4;
ATerm term_c_4;
ATerm term_r_3;
ATerm term_q_3;
ATerm term_p_3;
void init_constant_terms (void)
{
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_c_8);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym__2, term_q_4, term_c_4);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_4);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_c_8);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_c_8);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("The SDF2 implementation caters for arbitrary context-free grammars. That is,\n", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("even for ambiguous grammars the parser will produce a parse trees containing\n", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("a concise encoding of allpossible parses. Ambiguities are represented by\n", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("means of amb nodes that contain a list of possible parse trees at that\n", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("point. For most applications, however, it is desirable to develop\n", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("unambiguous grammars. To aid the grammar writer in detecting and solving the\n", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ambiguities, the visamb tool extracts the ambiguities from a parse tree and\n", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("displays them in a readable format.\n", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_g_12, term_h_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym__2, term_t_14, term_c_8);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym__3, term_g_12, term_h_12, (ATerm) ATempty);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_73 (ATerm), ATerm o_73 (ATerm));
ATerm crush_2 (ATerm, ATerm l_72 (ATerm), ATerm m_72 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm t_80 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm get_args_0 (ATerm);
ATerm lit_1 (ATerm, ATerm o_57 (ATerm));
ATerm prod_3 (ATerm, ATerm e_58 (ATerm), ATerm f_58 (ATerm), ATerm g_58 (ATerm));
ATerm MkLex_0 (ATerm);
ATerm cf_1 (ATerm, ATerm k_57 (ATerm));
ATerm lex_1 (ATerm, ATerm l_57 (ATerm));
ATerm Lexical_0 (ATerm);
ATerm get_sort_0 (ATerm);
ATerm Nsplit_2 (ATerm, ATerm v_58 (ATerm), ATerm w_58 (ATerm));
ATerm ProjectAmb_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm abbrev_term_0 (ATerm);
ATerm F_p__0 (ATerm);
ATerm F_0 (ATerm);
ATerm appl_2 (ATerm, ATerm h_58 (ATerm), ATerm i_58 (ATerm));
ATerm yield_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm abbrev_amb_0 (ATerm);
ATerm abbrev_ambs_0 (ATerm);
ATerm amb_1 (ATerm, ATerm j_58 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm));
ATerm union_1 (ATerm, ATerm w_72 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm r_73 (ATerm));
ATerm crush_3 (ATerm, ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm p_72 (ATerm));
ATerm bu_collect_1 (ATerm, ATerm x_71 (ATerm));
ATerm parsetree_2 (ATerm, ATerm o_58 (ATerm), ATerm p_58 (ATerm));
ATerm collect_ambs_0 (ATerm);
ATerm visamb_0 (ATerm);
ATerm _2 (ATerm, ATerm i_50 (ATerm), ATerm j_50 (ATerm));
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm b_79 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_75 (ATerm), ATerm d_75 (ATerm));
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
ATerm Program_1 (ATerm, ATerm d_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm y_77 (ATerm));
ATerm Undefined_1 (ATerm, ATerm e_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_67 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_81 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_67 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm x_77 (ATerm));
ATerm map_1 (ATerm, ATerm z_66 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm b_59 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_83 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_51 (ATerm), ATerm s_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_82 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_82 (ATerm));
ATerm Vis_amb_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_p_3, (ATerm) ATinsert(ATempty, term_q_3));
  {
    t = printnl_0(t);
    {
      t = term_r_3;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm t_2 = NULL;
  t_2 = t;
  t = SSL_TicksToSeconds(not_null(t_2));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL;
  l_3 = t;
  h_3 :
  if(match_cons(l_3, sym__2))
    {
      m_3 = ATgetArgument(l_3, 0);
      n_3 = ATgetArgument(l_3, 1);
      {
        ATerm s_3 = t;
        int x_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(m_3), not_null(n_3));
            LocalPopChoice(x_3);
          }
        else
          {
            t = s_3;
            t = SSL_addr(not_null(m_3), not_null(n_3));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_73 (ATerm), ATerm o_73 (ATerm))
{
  ATerm y_3 = t;
  int b_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_73(t);
      LocalPopChoice(b_4);
    }
  else
    {
      t = y_3;
      {
        ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL;
        u_3 = t;
        t_3 :
        if(((ATgetType(u_3) == AT_LIST) && !(ATisEmpty(u_3))))
          {
            v_3 = ATgetFirst((ATermList) u_3);
            w_3 = (ATerm) ATgetNext((ATermList) u_3);
            {
              ATerm z_3 = NULL;
              ATerm a_4 = NULL;
              t = not_null(w_3);
              {
                t = foldr_2(t, n_73, o_73);
                {
                  a_4 = t;
                  if(((z_3 != NULL) && (z_3 != a_4)))
                    _fail(a_4);
                  else
                    z_3 = a_4;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_3), not_null(z_3));
                t = o_73(t);
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
ATerm crush_2 (ATerm t, ATerm l_72 (ATerm), ATerm m_72 (ATerm))
{
  ATerm h_4 = NULL;
  ATerm j_4 = NULL;
  h_4 = t;
  {
    ATerm k_4 = NULL;
    ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
    t = not_null(h_4);
    {
      k_4 = t;
      {
        t = SSL_explode_term(not_null(k_4));
        {
          m_4 = t;
          g_4 :
          if(match_cons(m_4, sym__2))
            {
              n_4 = ATgetArgument(m_4, 0);
              o_4 = ATgetArgument(m_4, 1);
              if(((j_4 != NULL) && (j_4 != o_4)))
                _fail(o_4);
              else
                j_4 = o_4;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_4);
      t = foldr_2(t, l_72, m_72);
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
      t = term_c_4;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
  u_4 = t;
  t_4 :
  if(match_cons(u_4, sym__2))
    {
      v_4 = ATgetArgument(u_4, 0);
      w_4 = ATgetArgument(u_4, 1);
      {
        ATerm d_4;
        d_4 = t;
        {
          ATerm e_4 = t;
          int f_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_4), not_null(w_4));
              LocalPopChoice(f_4);
            }
          else
            {
              t = e_4;
              t = SSL_gtr(not_null(v_4), not_null(w_4));
            }
        }
        t = d_4;
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
  ATerm c_5 = NULL;
  ATerm i_4 = t;
  int l_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
      d_5 = t;
      b_5 :
      if(match_cons(d_5, sym__2))
        {
          e_5 = ATgetArgument(d_5, 0);
          f_5 = ATgetArgument(d_5, 1);
          {
            if(((c_5 != NULL) && (c_5 != e_5)))
              _fail(e_5);
            else
              c_5 = e_5;
            if(((c_5 != NULL) && (c_5 != f_5)))
              _fail(f_5);
            else
              c_5 = f_5;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(l_4);
    }
  else
    {
      t = i_4;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm t_80 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    ATerm p_4;
    p_4 = t;
    {
      ATerm i_5 = NULL;
      ATerm j_5 = NULL;
      t = term_q_4;
      {
        t = get_config_0(t);
        {
          j_5 = t;
          if(((i_5 != NULL) && (i_5 != j_5)))
            _fail(j_5);
          else
            i_5 = j_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_5), term_r_3);
        t = geq_0(t);
      }
    }
    t = p_4;
    t = t_80(t);
    return(t);
  }
  t = try_1(t, c_0);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm n_5 = NULL,p_5 = NULL;
    ATerm r_4;
    r_4 = t;
    {
      ATerm o_5 = NULL;
      t = run_time_0(t);
      {
        o_5 = t;
        if(((n_5 != NULL) && (n_5 != o_5)))
          _fail(o_5);
        else
          n_5 = o_5;
      }
    }
    t = r_4;
    {
      ATerm q_5 = NULL;
      t = term_s_4;
      {
        t = get_config_0(t);
        {
          q_5 = t;
          if(((p_5 != NULL) && (p_5 != q_5)))
            _fail(q_5);
          else
            p_5 = q_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_4), not_null(n_5)), term_x_4), not_null(p_5)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, e_0);
  {
    t = term_c_4;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  u_5 :
  if(match_cons(v_5, sym__2))
    {
      w_5 = ATgetArgument(v_5, 0);
      x_5 = ATgetArgument(v_5, 1);
      t = SSL_WriteToTextFile(not_null(w_5), not_null(x_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
  d_6 = t;
  c_6 :
  if(match_cons(d_6, sym__2))
    {
      e_6 = ATgetArgument(d_6, 0);
      f_6 = ATgetArgument(d_6, 1);
      t = SSL_WriteToBinaryFile(not_null(e_6), not_null(f_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm n_6 = NULL;
  ATerm z_4;
  z_4 = t;
  {
    ATerm f_0 (ATerm t)
    {
      ATerm a_5 = t;
      int g_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_0 (ATerm t)
          {
            ATerm o_6 = NULL,p_6 = NULL;
            o_6 = t;
            k_6 :
            if(match_cons(o_6, sym_Output_1))
              {
                p_6 = ATgetArgument(o_6, 0);
                if(((n_6 != NULL) && (n_6 != p_6)))
                  _fail(p_6);
                else
                  n_6 = p_6;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, o_0);
          LocalPopChoice(g_5);
        }
      else
        {
          t = a_5;
          {
            ATerm q_6 = NULL;
            t = term_h_5;
            {
              q_6 = t;
              if(((n_6 != NULL) && (n_6 != q_6)))
                _fail(q_6);
              else
                n_6 = q_6;
            }
          }
        }
      return(t);
    }
    t = _2(t, f_0, _id);
  }
  t = z_4;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm q_0 (ATerm t)
      {
        t = not_null(n_6);
        return(t);
      }
      t = split_2(t, q_0, _id);
      return(t);
    }
    t = _2(t, _id, p_0);
    {
      ATerm k_5 = t;
      int l_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_0 (ATerm t)
          {
            ATerm s_0 (ATerm t)
            {
              ATerm r_6 = NULL;
              r_6 = t;
              m_6 :
              if(!(match_cons(r_6, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, s_0);
            return(t);
          }
          t = _2(t, r_0, WriteToBinaryFile_0);
          LocalPopChoice(l_5);
        }
      else
        {
          t = k_5;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm v_6 = NULL;
  v_6 = t;
  t = SSL_int_to_string(not_null(v_6));
  return(t);
}
ATerm get_args_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
  a_7 = t;
  z_6 :
  if(match_cons(a_7, sym_appl_2))
    {
      b_7 = ATgetArgument(a_7, 0);
      c_7 = ATgetArgument(a_7, 1);
      t = not_null(c_7);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm o_57 (ATerm))
{
  ATerm l_7 = NULL,m_7 = NULL;
  l_7 = t;
  k_7 :
  if(match_cons(l_7, sym_lit_1))
    {
      m_7 = ATgetArgument(l_7, 0);
      {
        ATerm p_7 = NULL,r_7 = NULL;
        ATerm q_7 = NULL;
        t = SSLgetAnnotations(not_null(l_7));
        {
          q_7 = t;
          if(((p_7 != NULL) && (p_7 != q_7)))
            _fail(q_7);
          else
            p_7 = q_7;
        }
        {
          t = not_null(m_7);
          {
            ATerm t_7 = NULL;
            t = o_57(t);
            {
              r_7 = t;
              {
                ATerm u_7 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(r_7)), not_null(p_7));
                {
                  u_7 = t;
                  if(((t_7 != NULL) && (t_7 != u_7)))
                    _fail(u_7);
                  else
                    t_7 = u_7;
                }
                t = not_null(t_7);
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
ATerm prod_3 (ATerm t, ATerm e_58 (ATerm), ATerm f_58 (ATerm), ATerm g_58 (ATerm))
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL;
  g_8 = t;
  f_8 :
  if(match_cons(g_8, sym_prod_3))
    {
      h_8 = ATgetArgument(g_8, 0);
      i_8 = ATgetArgument(g_8, 1);
      j_8 = ATgetArgument(g_8, 2);
      {
        ATerm o_8 = NULL,q_8 = NULL;
        ATerm p_8 = NULL;
        t = SSLgetAnnotations(not_null(g_8));
        {
          p_8 = t;
          if(((o_8 != NULL) && (o_8 != p_8)))
            _fail(p_8);
          else
            o_8 = p_8;
        }
        {
          t = not_null(h_8);
          {
            ATerm s_8 = NULL;
            t = e_58(t);
            {
              q_8 = t;
              {
                t = not_null(i_8);
                {
                  ATerm u_8 = NULL;
                  t = f_58(t);
                  {
                    s_8 = t;
                    {
                      t = not_null(j_8);
                      {
                        ATerm w_8 = NULL;
                        t = g_58(t);
                        {
                          u_8 = t;
                          {
                            ATerm x_8 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(q_8), not_null(s_8), not_null(u_8)), not_null(o_8));
                            {
                              x_8 = t;
                              if(((w_8 != NULL) && (w_8 != x_8)))
                                _fail(x_8);
                              else
                                w_8 = x_8;
                            }
                            t = not_null(w_8);
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
  ATerm f_9 = NULL;
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym_lexical_1, not_null(f_9));
  return(t);
}
ATerm cf_1 (ATerm t, ATerm k_57 (ATerm))
{
  ATerm n_9 = NULL,o_9 = NULL;
  n_9 = t;
  m_9 :
  if(match_cons(n_9, sym_cf_1))
    {
      o_9 = ATgetArgument(n_9, 0);
      {
        ATerm r_9 = NULL,t_9 = NULL;
        ATerm s_9 = NULL;
        t = SSLgetAnnotations(not_null(n_9));
        {
          s_9 = t;
          if(((r_9 != NULL) && (r_9 != s_9)))
            _fail(s_9);
          else
            r_9 = s_9;
        }
        {
          t = not_null(o_9);
          {
            ATerm v_9 = NULL;
            t = k_57(t);
            {
              t_9 = t;
              {
                ATerm w_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, not_null(t_9)), not_null(r_9));
                {
                  w_9 = t;
                  if(((v_9 != NULL) && (v_9 != w_9)))
                    _fail(w_9);
                  else
                    v_9 = w_9;
                }
                t = not_null(v_9);
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
ATerm lex_1 (ATerm t, ATerm l_57 (ATerm))
{
  ATerm g_10 = NULL,h_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym_lex_1))
    {
      h_10 = ATgetArgument(g_10, 0);
      {
        ATerm k_10 = NULL,m_10 = NULL;
        ATerm l_10 = NULL;
        t = SSLgetAnnotations(not_null(g_10));
        {
          l_10 = t;
          if(((k_10 != NULL) && (k_10 != l_10)))
            _fail(l_10);
          else
            k_10 = l_10;
        }
        {
          t = not_null(h_10);
          {
            ATerm o_10 = NULL;
            t = l_57(t);
            {
              m_10 = t;
              {
                ATerm p_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(m_10)), not_null(k_10));
                {
                  p_10 = t;
                  if(((o_10 != NULL) && (o_10 != p_10)))
                    _fail(p_10);
                  else
                    o_10 = p_10;
                }
                t = not_null(o_10);
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
  ATerm m_5 = t;
  int r_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_0 (ATerm t)
      {
        ATerm u_0 (ATerm t)
        {
          ATerm w_0 (ATerm t)
          {
            t = lex_1(t, _id);
            return(t);
          }
          t = Cons_2(t, w_0, Nil_0);
          return(t);
        }
        ATerm v_0 (ATerm t)
        {
          t = cf_1(t, _id);
          return(t);
        }
        t = prod_3(t, u_0, v_0, _id);
        return(t);
      }
      t = appl_2(t, t_0, _id);
      {
        t = yield_0(t);
        {
          t = MkLex_0(t);
          t = F_p__0(t);
        }
      }
      LocalPopChoice(r_5);
    }
  else
    {
      t = m_5;
      {
        ATerm x_0 (ATerm t)
        {
          ATerm y_0 (ATerm t)
          {
            t = lit_1(t, _id);
            return(t);
          }
          t = prod_3(t, _id, y_0, _id);
          return(t);
        }
        t = appl_2(t, x_0, _id);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm get_sort_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
  x_10 = t;
  v_10 :
  if(match_cons(x_10, sym_appl_2))
    {
      y_10 = ATgetArgument(x_10, 0);
      c_11 = ATgetArgument(x_10, 1);
      w_10 :
      if(match_cons(y_10, sym_prod_3))
        {
          z_10 = ATgetArgument(y_10, 0);
          a_11 = ATgetArgument(y_10, 1);
          b_11 = ATgetArgument(y_10, 2);
          t = not_null(a_11);
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
ATerm Nsplit_2 (ATerm t, ATerm v_58 (ATerm), ATerm w_58 (ATerm))
{
  ATerm l_11 = NULL;
  ATerm n_11 = NULL,p_11 = NULL;
  l_11 = t;
  {
    ATerm s_5;
    s_5 = t;
    {
      ATerm o_11 = NULL;
      t = not_null(l_11);
      {
        t = v_58(t);
        {
          o_11 = t;
          if(((n_11 != NULL) && (n_11 != o_11)))
            _fail(o_11);
          else
            n_11 = o_11;
        }
      }
    }
    t = s_5;
    {
      ATerm q_11 = NULL;
      t = not_null(l_11);
      {
        t = w_58(t);
        {
          q_11 = t;
          if(((p_11 != NULL) && (p_11 != q_11)))
            _fail(q_11);
          else
            p_11 = q_11;
        }
      }
      t = (ATerm) ATmakeAppl(sym_N_2, not_null(n_11), not_null(p_11));
    }
  }
  return(t);
}
ATerm ProjectAmb_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
  x_11 = t;
  v_11 :
  if(match_cons(x_11, sym_amb_1))
    {
      y_11 = ATgetArgument(x_11, 0);
      w_11 :
      if(((ATgetType(y_11) == AT_LIST) && !(ATisEmpty(y_11))))
        {
          z_11 = ATgetFirst((ATermList) y_11);
          a_12 = (ATerm) ATgetNext((ATermList) y_11);
          t = not_null(z_11);
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
  ATerm f_12 = NULL;
  f_12 = t;
  t = SSL_is_int(not_null(f_12));
  return(t);
}
ATerm abbrev_term_0 (ATerm t)
{
  ATerm t_5 = t;
  int y_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_5 = t;
      int a_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_int_0(t);
          LocalPopChoice(a_6);
        }
      else
        {
          t = z_5;
          t = ProjectAmb_0(t);
        }
      LocalPopChoice(y_5);
    }
  else
    {
      t = t_5;
      {
        ATerm z_0 (ATerm t)
        {
          ATerm b_6 = t;
          int g_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Lexical_0(t);
              LocalPopChoice(g_6);
            }
          else
            {
              t = b_6;
              {
                t = get_args_0(t);
                t = map_1(t, abbrev_term_0);
              }
            }
          return(t);
        }
        t = Nsplit_2(t, get_sort_0, z_0);
      }
    }
  return(t);
}
ATerm F_p__0 (ATerm t)
{
  ATerm k_12 = NULL;
  k_12 = t;
  t = (ATerm) ATinsert(ATempty, not_null(k_12));
  return(t);
}
ATerm F_0 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
  p_12 = t;
  o_12 :
  if(match_cons(p_12, sym_appl_2))
    {
      q_12 = ATgetArgument(p_12, 0);
      r_12 = ATgetArgument(p_12, 1);
      {
        t = not_null(r_12);
        t = concat_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm appl_2 (ATerm t, ATerm h_58 (ATerm), ATerm i_58 (ATerm))
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
  b_13 = t;
  a_13 :
  if(match_cons(b_13, sym_appl_2))
    {
      c_13 = ATgetArgument(b_13, 0);
      d_13 = ATgetArgument(b_13, 1);
      {
        ATerm h_13 = NULL,j_13 = NULL;
        ATerm i_13 = NULL;
        t = SSLgetAnnotations(not_null(b_13));
        {
          i_13 = t;
          if(((h_13 != NULL) && (h_13 != i_13)))
            _fail(i_13);
          else
            h_13 = i_13;
        }
        {
          t = not_null(c_13);
          {
            ATerm l_13 = NULL;
            t = h_58(t);
            {
              j_13 = t;
              {
                t = not_null(d_13);
                {
                  ATerm n_13 = NULL;
                  t = i_58(t);
                  {
                    l_13 = t;
                    {
                      ATerm o_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, not_null(j_13), not_null(l_13)), not_null(h_13));
                      {
                        o_13 = t;
                        if(((n_13 != NULL) && (n_13 != o_13)))
                          _fail(o_13);
                        else
                          n_13 = o_13;
                      }
                      t = not_null(n_13);
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
  ATerm u_13 (ATerm t)
  {
    ATerm h_6 = t;
    int i_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_1 (ATerm t)
        {
          t = map_1(t, u_13);
          return(t);
        }
        t = appl_2(t, _id, a_1);
        t = F_0(t);
        LocalPopChoice(i_6);
      }
    else
      {
        t = h_6;
        t = F_p__0(t);
      }
    return(t);
  }
  t = u_13(t);
  t = implode_string_0(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
  x_13 = t;
  w_13 :
  if(((ATgetType(x_13) == AT_LIST) && !(ATisEmpty(x_13))))
    {
      y_13 = ATgetFirst((ATermList) x_13);
      z_13 = (ATerm) ATgetNext((ATermList) x_13);
      t = not_null(y_13);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm abbrev_amb_0 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_cons(g_14, sym_amb_1))
    {
      h_14 = ATgetArgument(g_14, 0);
      {
        ATerm j_14 = NULL,l_14 = NULL;
        ATerm j_6;
        j_6 = t;
        {
          ATerm k_14 = NULL;
          t = not_null(h_14);
          {
            t = Hd_0(t);
            {
              t = yield_0(t);
              {
                k_14 = t;
                if(((j_14 != NULL) && (j_14 != k_14)))
                  _fail(k_14);
                else
                  j_14 = k_14;
              }
            }
          }
        }
        t = j_6;
        {
          ATerm m_14 = NULL;
          t = not_null(h_14);
          {
            t = map_1(t, abbrev_term_0);
            {
              m_14 = t;
              if(((l_14 != NULL) && (l_14 != m_14)))
                _fail(m_14);
              else
                l_14 = m_14;
            }
          }
          t = (ATerm) ATmakeAppl(sym_amb_abbr_2, not_null(j_14), not_null(l_14));
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
  ATerm b_1 (ATerm t)
  {
    ATerm c_1 (ATerm t)
    {
      ATerm s_14 = NULL;
      ATerm u_14 = NULL;
      s_14 = t;
      {
        ATerm v_14 = NULL;
        t = not_null(s_14);
        {
          t = abbrev_amb_0(t);
          {
            v_14 = t;
            if(((u_14 != NULL) && (u_14 != v_14)))
              _fail(v_14);
            else
              u_14 = v_14;
          }
        }
        t = (ATerm) ATmakeAppl(sym_root_1, not_null(u_14));
      }
      return(t);
    }
    t = map_1(t, c_1);
    return(t);
  }
  t = parsetree_2(t, b_1, int_to_string_0);
  return(t);
}
ATerm amb_1 (ATerm t, ATerm j_58 (ATerm))
{
  ATerm d_15 = NULL,e_15 = NULL;
  d_15 = t;
  c_15 :
  if(match_cons(d_15, sym_amb_1))
    {
      e_15 = ATgetArgument(d_15, 0);
      {
        ATerm h_15 = NULL,j_15 = NULL;
        ATerm i_15 = NULL;
        t = SSLgetAnnotations(not_null(d_15));
        {
          i_15 = t;
          if(((h_15 != NULL) && (h_15 != i_15)))
            _fail(i_15);
          else
            h_15 = i_15;
        }
        {
          t = not_null(e_15);
          {
            ATerm l_15 = NULL;
            t = j_58(t);
            {
              j_15 = t;
              {
                ATerm m_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, not_null(j_15)), not_null(h_15));
                {
                  m_15 = t;
                  if(((l_15 != NULL) && (l_15 != m_15)))
                    _fail(m_15);
                  else
                    l_15 = m_15;
                }
                t = not_null(l_15);
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
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
  t_15 = t;
  s_15 :
  if(match_cons(t_15, sym__2))
    {
      u_15 = ATgetArgument(t_15, 0);
      v_15 = ATgetArgument(t_15, 1);
      if(((u_15 != NULL) && (u_15 != v_15)))
        _fail(v_15);
      else
        u_15 = v_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm))
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
  b_16 = t;
  a_16 :
  if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
    {
      c_16 = ATgetFirst((ATermList) b_16);
      d_16 = (ATerm) ATgetNext((ATermList) b_16);
      {
        t = b_73(t);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm g_16 = NULL;
            g_16 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_16), not_null(g_16));
              t = a_73(t);
            }
            return(t);
          }
          t = fetch_1(t, d_1);
        }
        t = not_null(d_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm w_72 (ATerm))
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
  m_16 = t;
  l_16 :
  if(match_cons(m_16, sym__2))
    {
      n_16 = ATgetArgument(m_16, 0);
      o_16 = ATgetArgument(m_16, 1);
      {
        t = not_null(n_16);
        {
          ATerm s_16 (ATerm t)
          {
            ATerm l_6 = t;
            int s_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(o_16);
                LocalPopChoice(s_6);
              }
            else
              {
                t = l_6;
                {
                  ATerm t_6 = t;
                  int u_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_1 (ATerm t)
                      {
                        t = not_null(o_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, w_72, e_1);
                      t = s_16(t);
                      LocalPopChoice(u_6);
                    }
                  else
                    {
                      t = t_6;
                      t = Cons_2(t, _id, s_16);
                    }
                }
              }
            return(t);
          }
          t = s_16(t);
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
ATerm foldr_3 (ATerm t, ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm r_73 (ATerm))
{
  ATerm w_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_73(t);
      LocalPopChoice(x_6);
    }
  else
    {
      t = w_6;
      {
        ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
        x_16 = t;
        w_16 :
        if(((ATgetType(x_16) == AT_LIST) && !(ATisEmpty(x_16))))
          {
            y_16 = ATgetFirst((ATermList) x_16);
            z_16 = (ATerm) ATgetNext((ATermList) x_16);
            {
              ATerm c_17 = NULL,e_17 = NULL;
              ATerm y_6;
              y_6 = t;
              {
                ATerm d_17 = NULL;
                t = not_null(y_16);
                {
                  t = r_73(t);
                  {
                    d_17 = t;
                    if(((c_17 != NULL) && (c_17 != d_17)))
                      _fail(d_17);
                    else
                      c_17 = d_17;
                  }
                }
              }
              t = y_6;
              {
                ATerm f_17 = NULL;
                t = not_null(z_16);
                {
                  t = foldr_3(t, p_73, q_73, r_73);
                  {
                    f_17 = t;
                    if(((e_17 != NULL) && (e_17 != f_17)))
                      _fail(f_17);
                    else
                      e_17 = f_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), not_null(e_17));
                  t = q_73(t);
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
ATerm crush_3 (ATerm t, ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm p_72 (ATerm))
{
  ATerm n_17 = NULL;
  ATerm p_17 = NULL;
  n_17 = t;
  {
    ATerm q_17 = NULL;
    ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
    t = not_null(n_17);
    {
      q_17 = t;
      {
        t = SSL_explode_term(not_null(q_17));
        {
          s_17 = t;
          m_17 :
          if(match_cons(s_17, sym__2))
            {
              t_17 = ATgetArgument(s_17, 0);
              u_17 = ATgetArgument(s_17, 1);
              if(((p_17 != NULL) && (p_17 != u_17)))
                _fail(u_17);
              else
                p_17 = u_17;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_17);
      t = foldr_3(t, n_72, o_72, p_72);
    }
  }
  return(t);
}
ATerm bu_collect_1 (ATerm t, ATerm x_71 (ATerm))
{
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_18 (ATerm t)
      {
        ATerm f_7 = t;
        int g_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _some(t, b_18);
            {
              ATerm f_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              ATerm g_1 (ATerm t)
              {
                ATerm h_7 = t;
                int i_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2(t, x_71, _id);
                    LocalPopChoice(i_7);
                  }
                else
                  {
                    t = h_7;
                    t = (ATerm) ATempty;
                  }
                return(t);
              }
              t = crush_3(t, f_1, union_0, g_1);
            }
            LocalPopChoice(g_7);
          }
        else
          {
            t = f_7;
            {
              ATerm z_17 = NULL;
              ATerm a_18 = NULL;
              t = x_71(t);
              {
                a_18 = t;
                if(((z_17 != NULL) && (z_17 != a_18)))
                  _fail(a_18);
                else
                  z_17 = a_18;
              }
              t = (ATerm) ATinsert(ATempty, not_null(z_17));
            }
          }
        return(t);
      }
      t = b_18(t);
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm parsetree_2 (ATerm t, ATerm o_58 (ATerm), ATerm p_58 (ATerm))
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  j_18 = t;
  i_18 :
  if(match_cons(j_18, sym_parsetree_2))
    {
      k_18 = ATgetArgument(j_18, 0);
      l_18 = ATgetArgument(j_18, 1);
      {
        ATerm p_18 = NULL,r_18 = NULL;
        ATerm q_18 = NULL;
        t = SSLgetAnnotations(not_null(j_18));
        {
          q_18 = t;
          if(((p_18 != NULL) && (p_18 != q_18)))
            _fail(q_18);
          else
            p_18 = q_18;
        }
        {
          t = not_null(k_18);
          {
            ATerm t_18 = NULL;
            t = o_58(t);
            {
              r_18 = t;
              {
                t = not_null(l_18);
                {
                  ATerm v_18 = NULL;
                  t = p_58(t);
                  {
                    t_18 = t;
                    {
                      ATerm w_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, not_null(r_18), not_null(t_18)), not_null(p_18));
                      {
                        w_18 = t;
                        if(((v_18 != NULL) && (v_18 != w_18)))
                          _fail(w_18);
                        else
                          v_18 = w_18;
                      }
                      t = not_null(v_18);
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
ATerm _2 (ATerm t, ATerm i_50 (ATerm), ATerm j_50 (ATerm))
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
  i_19 = t;
  h_19 :
  if(match_cons(i_19, sym__2))
    {
      j_19 = ATgetArgument(i_19, 0);
      k_19 = ATgetArgument(i_19, 1);
      {
        ATerm o_19 = NULL,q_19 = NULL;
        ATerm p_19 = NULL;
        t = SSLgetAnnotations(not_null(i_19));
        {
          p_19 = t;
          if(((o_19 != NULL) && (o_19 != p_19)))
            _fail(p_19);
          else
            o_19 = p_19;
        }
        {
          t = not_null(j_19);
          {
            ATerm s_19 = NULL;
            t = i_50(t);
            {
              q_19 = t;
              {
                t = not_null(k_19);
                {
                  ATerm k_20 = NULL;
                  t = j_50(t);
                  {
                    s_19 = t;
                    {
                      ATerm l_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_19), not_null(s_19)), not_null(o_19));
                      {
                        l_20 = t;
                        if(((k_20 != NULL) && (k_20 != l_20)))
                          _fail(l_20);
                        else
                          k_20 = l_20;
                      }
                      t = not_null(k_20);
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
ATerm apply_strategy_1 (ATerm t, ATerm b_79 (ATerm))
{
  ATerm u_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL;
  ATerm j_7;
  j_7 = t;
  t = dtime_0(t);
  t = j_7;
  {
    t = b_79(t);
    {
      ATerm n_7;
      n_7 = t;
      {
        ATerm v_20 = NULL;
        t = dtime_0(t);
        {
          v_20 = t;
          if(((u_20 != NULL) && (u_20 != v_20)))
            _fail(v_20);
          else
            u_20 = v_20;
        }
      }
      t = n_7;
      {
        w_20 = t;
        t_20 :
        if(match_cons(w_20, sym__2))
          {
            x_20 = ATgetArgument(w_20, 0);
            y_20 = ATgetArgument(w_20, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_20)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(u_20))), not_null(y_20));
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
  ATerm e_21 = NULL;
  ATerm o_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_21 = NULL;
      f_21 = t;
      {
        if(((e_21 != NULL) && (e_21 != f_21)))
          _fail(f_21);
        else
          e_21 = f_21;
        t = SSL_ReadFromFile(not_null(e_21));
      }
      LocalPopChoice(s_7);
    }
  else
    {
      t = o_7;
      {
        ATerm j_1 (ATerm t)
        {
          t = term_v_7;
          return(t);
        }
        t = debug_1(t, j_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_75 (ATerm), ATerm d_75 (ATerm))
{
  ATerm j_21 = NULL,l_21 = NULL;
  ATerm w_7;
  w_7 = t;
  {
    ATerm k_21 = NULL;
    t = c_75(t);
    {
      k_21 = t;
      if(((j_21 != NULL) && (j_21 != k_21)))
        _fail(k_21);
      else
        j_21 = k_21;
    }
  }
  t = w_7;
  {
    ATerm m_21 = NULL;
    t = d_75(t);
    {
      m_21 = t;
      if(((l_21 != NULL) && (l_21 != m_21)))
        _fail(m_21);
      else
        l_21 = m_21;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_21), not_null(l_21));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm s_21 = NULL;
  ATerm x_7;
  x_7 = t;
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_1 (ATerm t)
        {
          ATerm y_21 = NULL,z_21 = NULL;
          y_21 = t;
          q_21 :
          if(match_cons(y_21, sym_Input_1))
            {
              z_21 = ATgetArgument(y_21, 0);
              if(((s_21 != NULL) && (s_21 != z_21)))
                _fail(z_21);
              else
                s_21 = z_21;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, k_1);
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        {
          ATerm a_22 = NULL;
          t = term_a_8;
          {
            a_22 = t;
            if(((s_21 != NULL) && (s_21 != a_22)))
              _fail(a_22);
            else
              s_21 = a_22;
          }
        }
      }
  }
  t = x_7;
  {
    ATerm l_1 (ATerm t)
    {
      t = not_null(s_21);
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
    ATerm e_22 = NULL;
    e_22 = t;
    d_22 :
    if(!(match_string(e_22, "-v")))
      {
        if(!(match_string(e_22, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    t = term_d_8;
    t = set_config_0(t);
    t = term_e_8;
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_k_8;
    return(t);
  }
  t = Option_3(t, m_1, n_1, o_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm h_22 = NULL;
    h_22 = t;
    f_22 :
    if(!(match_string(h_22, "-k")))
      {
        if(!(match_string(h_22, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    ATerm l_8;
    l_8 = t;
    {
      ATerm i_22 = NULL;
      ATerm j_22 = NULL;
      t = string_to_int_0(t);
      {
        j_22 = t;
        if(((i_22 != NULL) && (i_22 != j_22)))
          _fail(j_22);
        else
          i_22 = j_22;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, not_null(i_22));
        t = set_config_0(t);
      }
    }
    t = l_8;
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    t = term_n_8;
    return(t);
  }
  t = ArgOption_3(t, p_1, q_1, r_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  t = SSL_string_to_int(not_null(q_22));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm r_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_1 (ATerm t)
      {
        ATerm y_22 = NULL;
        y_22 = t;
        t_22 :
        if(!(match_string(y_22, "-S")))
          {
            if(!(match_string(y_22, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        t = term_v_8;
        t = set_config_0(t);
        t = term_y_8;
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        t = term_z_8;
        return(t);
      }
      t = Option_3(t, s_1, t_1, u_1);
      LocalPopChoice(t_8);
    }
  else
    {
      t = r_8;
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_1 (ATerm t)
            {
              ATerm z_22 = NULL;
              z_22 = t;
              u_22 :
              if(!(match_string(z_22, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm w_1 (ATerm t)
            {
              ATerm c_23 = NULL;
              ATerm c_9;
              c_9 = t;
              {
                ATerm a_23 = NULL;
                ATerm b_23 = NULL;
                t = string_to_int_0(t);
                {
                  b_23 = t;
                  if(((a_23 != NULL) && (a_23 != b_23)))
                    _fail(b_23);
                  else
                    a_23 = b_23;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_4, not_null(a_23));
                  t = set_config_0(t);
                }
              }
              t = c_9;
              {
                ATerm d_23 = NULL;
                d_23 = t;
                if(((c_23 != NULL) && (c_23 != d_23)))
                  _fail(d_23);
                else
                  c_23 = d_23;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_23));
              }
              return(t);
            }
            ATerm x_1 (ATerm t)
            {
              t = term_d_9;
              return(t);
            }
            t = ArgOption_3(t, v_1, w_1, x_1);
            LocalPopChoice(b_9);
          }
        else
          {
            t = a_9;
            {
              ATerm y_1 (ATerm t)
              {
                ATerm e_23 = NULL;
                e_23 = t;
                x_22 :
                if(!(match_string(e_23, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm z_1 (ATerm t)
              {
                t = term_g_9;
                t = set_config_0(t);
                t = term_h_9;
                return(t);
              }
              ATerm a_2 (ATerm t)
              {
                t = term_i_9;
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
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        ATerm l_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(p_9);
          }
        else
          {
            t = l_9;
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
    ATerm k_23 = NULL;
    k_23 = t;
    h_23 :
    if(!(match_string(k_23, "-o")))
      {
        if(!(match_string(k_23, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm n_23 = NULL;
    ATerm q_9;
    q_9 = t;
    {
      ATerm l_23 = NULL;
      ATerm m_23 = NULL;
      m_23 = t;
      if(((l_23 != NULL) && (l_23 != m_23)))
        _fail(m_23);
      else
        l_23 = m_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_9, not_null(l_23));
        t = set_config_0(t);
      }
    }
    t = q_9;
    {
      ATerm o_23 = NULL;
      o_23 = t;
      if(((n_23 != NULL) && (n_23 != o_23)))
        _fail(o_23);
      else
        n_23 = o_23;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_23));
    }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_x_9;
    return(t);
  }
  t = ArgOption_3(t, b_2, c_2, d_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
        ATerm e_2 (ATerm t)
        {
          ATerm s_23 = NULL;
          s_23 = t;
          r_23 :
          if(!(match_string(s_23, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm f_2 (ATerm t)
        {
          t = term_b_10;
          t = set_config_0(t);
          t = term_c_10;
          return(t);
        }
        ATerm g_2 (ATerm t)
        {
          t = term_d_10;
          return(t);
        }
        t = Option_3(t, e_2, f_2, g_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  y_23 = t;
  w_23 :
  if(match_string(y_23, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(y_23) == AT_LIST) && !(ATisEmpty(y_23))))
        {
          z_23 = ATgetFirst((ATermList) y_23);
          a_24 = (ATerm) ATgetNext((ATermList) y_23);
          x_23 :
          if(((ATgetType(a_24) == AT_LIST) && !(ATisEmpty(a_24))))
            {
              b_24 = ATgetFirst((ATermList) a_24);
              c_24 = (ATerm) ATgetNext((ATermList) a_24);
              {
                ATerm g_24 = NULL;
                ATerm e_10;
                e_10 = t;
                {
                  t = not_null(z_23);
                  t = l_0(t);
                }
                t = e_10;
                {
                  ATerm h_24 = NULL;
                  t = not_null(b_24);
                  {
                    t = m_0(t);
                    {
                      h_24 = t;
                      if(((g_24 != NULL) && (g_24 != h_24)))
                        _fail(h_24);
                      else
                        g_24 = h_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_24)), not_null(g_24));
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
    ATerm o_24 = NULL;
    o_24 = t;
    l_24 :
    if(!(match_string(o_24, "-i")))
      {
        if(!(match_string(o_24, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm r_24 = NULL;
    ATerm i_10;
    i_10 = t;
    {
      ATerm p_24 = NULL;
      ATerm q_24 = NULL;
      q_24 = t;
      if(((p_24 != NULL) && (p_24 != q_24)))
        _fail(q_24);
      else
        p_24 = q_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_10, not_null(p_24));
        t = set_config_0(t);
      }
    }
    t = i_10;
    {
      ATerm s_24 = NULL;
      s_24 = t;
      if(((r_24 != NULL) && (r_24 != s_24)))
        _fail(s_24);
      else
        r_24 = s_24;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_24));
    }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_n_10;
    return(t);
  }
  t = ArgOption_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm s_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  t = SSL_table_destroy(not_null(w_24));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  t = SSL_exit(not_null(a_25));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  d_25 :
  if(((ATgetType(e_25) == AT_LIST) && ATisEmpty(e_25)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(e_25) == AT_LIST) && !(ATisEmpty(e_25))))
        {
          f_25 = ATgetFirst((ATermList) e_25);
          g_25 = (ATerm) ATgetNext((ATermList) e_25);
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
  ATerm u_10;
  u_10 = t;
  {
    ATerm j_25 = NULL;
    ATerm m_25 = NULL;
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        {
          ATerm k_25 = NULL;
          ATerm l_25 = NULL;
          l_25 = t;
          if(((k_25 != NULL) && (k_25 != l_25)))
            _fail(l_25);
          else
            k_25 = l_25;
          t = (ATerm) ATinsert(ATempty, not_null(k_25));
        }
      }
    {
      m_25 = t;
      if(((j_25 != NULL) && (j_25 != m_25)))
        _fail(m_25);
      else
        j_25 = m_25;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_5, not_null(j_25));
      t = printnl_0(t);
    }
  }
  t = u_10;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_11), term_m_11), term_k_11), term_j_11), term_i_11), term_h_11), term_g_11), term_f_11);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  x_25 = t;
  u_25 :
  if(((ATgetType(x_25) == AT_LIST) && !(ATisEmpty(x_25))))
    {
      v_25 = ATgetFirst((ATermList) x_25);
      w_25 = (ATerm) ATgetNext((ATermList) x_25);
      {
        ATerm a_26 = NULL;
        t = not_null(w_25);
        {
          ATerm s_11;
          s_11 = t;
          {
            ATerm b_26 = NULL,d_26 = NULL,f_26 = NULL;
            ATerm t_11;
            t_11 = t;
            {
              ATerm c_26 = NULL;
              t = j_0(t);
              {
                c_26 = t;
                if(((b_26 != NULL) && (b_26 != c_26)))
                  _fail(c_26);
                else
                  b_26 = c_26;
              }
            }
            t = t_11;
            {
              ATerm e_26 = NULL;
              t = not_null(v_25);
              {
                t = i_0(t);
                {
                  e_26 = t;
                  if(((d_26 != NULL) && (d_26 != e_26)))
                    _fail(e_26);
                  else
                    d_26 = e_26;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(b_26)), not_null(d_26));
                {
                  f_26 = t;
                  if(((a_26 != NULL) && (a_26 != f_26)))
                    _fail(f_26);
                  else
                    a_26 = f_26;
                }
              }
            }
          }
          t = s_11;
          {
            ATerm k_2 (ATerm t)
            {
              t = not_null(a_26);
              return(t);
            }
            t = reverse_acc_2(t, i_0, k_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(x_25) == AT_LIST) && ATisEmpty(x_25)))
        {
          {
            t = term_c_8;
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
  ATerm m_26 = NULL;
  ATerm n_26 = NULL;
  t = term_c_8;
  {
    t = h_0(t);
    {
      n_26 = t;
      if(((m_26 != NULL) && (m_26 != n_26)))
        _fail(n_26);
      else
        m_26 = n_26;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_12), not_null(m_26)), term_u_11);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_57 (ATerm))
{
  ATerm u_26 = NULL,v_26 = NULL;
  u_26 = t;
  t_26 :
  if(match_cons(u_26, sym_Program_1))
    {
      v_26 = ATgetArgument(u_26, 0);
      {
        ATerm y_26 = NULL,a_27 = NULL;
        ATerm z_26 = NULL;
        t = SSLgetAnnotations(not_null(u_26));
        {
          z_26 = t;
          if(((y_26 != NULL) && (y_26 != z_26)))
            _fail(z_26);
          else
            y_26 = z_26;
        }
        {
          t = not_null(v_26);
          {
            ATerm e_27 = NULL;
            t = d_57(t);
            {
              a_27 = t;
              {
                ATerm f_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_27)), not_null(y_26));
                {
                  f_27 = t;
                  if(((e_27 != NULL) && (e_27 != f_27)))
                    _fail(f_27);
                  else
                    e_27 = f_27;
                }
                t = not_null(e_27);
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
  ATerm t_27 = NULL;
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_27 = NULL;
      t = term_s_4;
      {
        t = get_config_0(t);
        {
          u_27 = t;
          if(((t_27 != NULL) && (t_27 != u_27)))
            _fail(u_27);
          else
            t_27 = u_27;
        }
      }
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm m_2 (ATerm t)
        {
          ATerm n_2 (ATerm t)
          {
            ATerm v_27 = NULL;
            v_27 = t;
            if(((t_27 != NULL) && (t_27 != v_27)))
              _fail(v_27);
            else
              t_27 = v_27;
            return(t);
          }
          t = Program_1(t, n_2);
          return(t);
        }
        t = option_defined_1(t, m_2);
      }
    }
  {
    ATerm o_2 (ATerm t)
    {
      ATerm p_2 (ATerm t)
      {
        t = not_null(t_27);
        return(t);
      }
      t = short_description_1(t, p_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, o_2);
    {
      t = term_e_12;
      {
        t = echo_0(t);
        {
          t = term_i_12;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm q_2 (ATerm t)
                {
                  ATerm w_27 = NULL;
                  ATerm x_27 = NULL;
                  x_27 = t;
                  if(((w_27 != NULL) && (w_27 != x_27)))
                    _fail(x_27);
                  else
                    w_27 = x_27;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_27)), term_j_12);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, q_2);
                {
                  ATerm r_2 (ATerm t)
                  {
                    ATerm c_28 = NULL;
                    ATerm d_28 = NULL;
                    ATerm s_2 (ATerm t)
                    {
                      t = not_null(t_27);
                      return(t);
                    }
                    t = long_description_1(t, s_2);
                    {
                      d_28 = t;
                      if(((c_28 != NULL) && (c_28 != d_28)))
                        _fail(d_28);
                      else
                        c_28 = d_28;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(c_28)), term_l_12);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, r_2);
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
  ATerm m_12;
  m_12 = t;
  {
    ATerm j_28 = NULL;
    ATerm k_28 = NULL;
    k_28 = t;
    if(((j_28 != NULL) && (j_28 != k_28)))
      _fail(k_28);
    else
      j_28 = k_28;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_3, (ATerm) ATinsert(ATempty, not_null(j_28)));
      t = printnl_0(t);
    }
  }
  t = m_12;
  return(t);
}
ATerm say_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm n_12;
  n_12 = t;
  {
    t = y_77(t);
    t = debug_0(t);
  }
  t = n_12;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_57 (ATerm))
{
  ATerm r_28 = NULL,s_28 = NULL;
  r_28 = t;
  q_28 :
  if(match_cons(r_28, sym_Undefined_1))
    {
      s_28 = ATgetArgument(r_28, 0);
      {
        ATerm v_28 = NULL,x_28 = NULL;
        ATerm w_28 = NULL;
        t = SSLgetAnnotations(not_null(r_28));
        {
          w_28 = t;
          if(((v_28 != NULL) && (v_28 != w_28)))
            _fail(w_28);
          else
            v_28 = w_28;
        }
        {
          t = not_null(s_28);
          {
            ATerm z_28 = NULL;
            t = e_57(t);
            {
              x_28 = t;
              {
                ATerm a_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(x_28)), not_null(v_28));
                {
                  a_29 = t;
                  if(((z_28 != NULL) && (z_28 != a_29)))
                    _fail(a_29);
                  else
                    z_28 = a_29;
                }
                t = not_null(z_28);
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
ATerm fetch_1 (ATerm t, ATerm i_67 (ATerm))
{
  ATerm f_29 (ATerm t)
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_67, _id);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        t = Cons_2(t, _id, f_29);
      }
    return(t);
  }
  t = f_29(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_81 (ATerm))
{
  t = fetch_1(t, w_81);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  j_29 :
  if(match_cons(k_29, sym_Help_0))
    {
      ATerm m_29 = NULL,o_29 = NULL;
      ATerm u_12;
      u_12 = t;
      {
        ATerm n_29 = NULL;
        t = SSLgetAnnotations(not_null(k_29));
        {
          n_29 = t;
          if(((m_29 != NULL) && (m_29 != n_29)))
            _fail(n_29);
          else
            m_29 = n_29;
        }
      }
      t = u_12;
      {
        ATerm p_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(m_29));
        {
          p_29 = t;
          if(((o_29 != NULL) && (o_29 != p_29)))
            _fail(p_29);
          else
            o_29 = p_29;
        }
        t = not_null(o_29);
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
  ATerm u_29 = NULL;
  u_29 = t;
  t = SSL_implode_string(not_null(u_29));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
        z_29 = t;
        y_29 :
        if(((ATgetType(z_29) == AT_LIST) && !(ATisEmpty(z_29))))
          {
            a_30 = ATgetFirst((ATermList) z_29);
            b_30 = (ATerm) ATgetNext((ATermList) z_29);
            {
              t = not_null(a_30);
              {
                ATerm u_2 (ATerm t)
                {
                  t = not_null(b_30);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_2);
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
  ATerm l_30 = NULL;
  ATerm n_30 = NULL;
  l_30 = t;
  {
    ATerm o_30 = NULL;
    ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
    t = not_null(l_30);
    {
      o_30 = t;
      {
        t = SSL_explode_term(not_null(o_30));
        {
          q_30 = t;
          j_30 :
          if(match_cons(q_30, sym__2))
            {
              r_30 = ATgetArgument(q_30, 0);
              s_30 = ATgetArgument(q_30, 1);
              k_30 :
              if(match_string(r_30, ""))
                {
                  if(((n_30 != NULL) && (n_30 != s_30)))
                    _fail(s_30);
                  else
                    n_30 = s_30;
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
      t = not_null(n_30);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_67 (ATerm))
{
  ATerm w_30 (ATerm t)
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_30);
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        {
          t = Nil_0(t);
          t = o_67(t);
        }
      }
    return(t);
  }
  t = w_30(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  y_30 :
  if(match_cons(z_30, sym__2))
    {
      a_31 = ATgetArgument(z_30, 0);
      b_31 = ATgetArgument(z_30, 1);
      {
        t = not_null(a_31);
        {
          ATerm v_2 (ATerm t)
          {
            t = not_null(b_31);
            return(t);
          }
          t = at_end_1(t, v_2);
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
  ATerm z_12 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(e_13);
    }
  else
    {
      t = z_12;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm g_31 = NULL;
  g_31 = t;
  t = SSL_explode_string(not_null(g_31));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  l_31 = t;
  k_31 :
  if(match_cons(l_31, sym__2))
    {
      m_31 = ATgetArgument(l_31, 0);
      n_31 = ATgetArgument(l_31, 1);
      {
        ATerm f_13;
        f_13 = t;
        t = SSL_printnl(not_null(m_31), not_null(n_31));
        t = f_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm x_77 (ATerm))
{
  ATerm g_13;
  g_13 = t;
  {
    ATerm t_31 = NULL,v_31 = NULL;
    ATerm k_13;
    k_13 = t;
    {
      ATerm u_31 = NULL;
      t = x_77(t);
      {
        u_31 = t;
        if(((t_31 != NULL) && (t_31 != u_31)))
          _fail(u_31);
        else
          t_31 = u_31;
      }
    }
    t = k_13;
    {
      ATerm w_31 = NULL;
      w_31 = t;
      if(((v_31 != NULL) && (v_31 != w_31)))
        _fail(w_31);
      else
        v_31 = w_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_31)), not_null(t_31)));
        t = printnl_0(t);
      }
    }
  }
  t = g_13;
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_66 (ATerm))
{
  ATerm z_31 (ATerm t)
  {
    ATerm m_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = m_13;
        t = Cons_2(t, z_66, z_31);
      }
    return(t);
  }
  t = z_31(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm b_32 = NULL;
  b_32 = t;
  t = SSL_is_string(not_null(b_32));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, w_2);
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            {
              ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
              k_32 = t;
              j_32 :
              if(match_cons(k_32, sym_Path_1))
                {
                  l_32 = ATgetArgument(k_32, 0);
                  t = not_null(l_32);
                }
              else
                {
                  if(match_cons(k_32, sym_Var_1))
                    {
                      l_32 = ATgetArgument(k_32, 0);
                      {
                        t = not_null(l_32);
                        {
                          ATerm v_13 = t;
                          int a_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_14);
                            }
                          else
                            {
                              t = v_13;
                              {
                                ATerm x_2 (ATerm t)
                                {
                                  t = term_b_14;
                                  return(t);
                                }
                                t = debug_1(t, x_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(k_32, sym_Prefix_2))
                        {
                          l_32 = ATgetArgument(k_32, 0);
                          m_32 = ATgetArgument(k_32, 1);
                          {
                            ATerm r_32 = NULL,t_32 = NULL;
                            ATerm c_14;
                            c_14 = t;
                            {
                              ATerm s_32 = NULL;
                              t = not_null(l_32);
                              {
                                t = eval_config_0(t);
                                {
                                  s_32 = t;
                                  if(((r_32 != NULL) && (r_32 != s_32)))
                                    _fail(s_32);
                                  else
                                    r_32 = s_32;
                                }
                              }
                            }
                            t = c_14;
                            {
                              ATerm u_32 = NULL;
                              t = not_null(m_32);
                              {
                                t = eval_config_0(t);
                                {
                                  u_32 = t;
                                  if(((t_32 != NULL) && (t_32 != u_32)))
                                    _fail(u_32);
                                  else
                                    t_32 = u_32;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_32), not_null(t_32));
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
  ATerm c_33 = NULL;
  c_33 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_14, not_null(c_33));
    {
      t = table_get_0(t);
      {
        ATerm y_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_14;
            e_14 = t;
            {
              ATerm e_33 = NULL;
              ATerm f_33 = NULL;
              f_33 = t;
              if(((e_33 != NULL) && (e_33 != f_33)))
                _fail(f_33);
              else
                e_33 = f_33;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_d_14, not_null(c_33), not_null(e_33));
                t = table_put_0(t);
              }
            }
            t = e_14;
          }
          return(t);
        }
        t = try_1(t, y_2);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm i_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_59(t);
      LocalPopChoice(n_14);
    }
  else
    {
      t = i_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
  k_33 = t;
  j_33 :
  if(match_cons(k_33, sym__2))
    {
      l_33 = ATgetArgument(k_33, 0);
      m_33 = ATgetArgument(k_33, 1);
      t = SSL_table_get(not_null(l_33), not_null(m_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL;
  t_33 = t;
  s_33 :
  if(match_cons(t_33, sym__3))
    {
      u_33 = ATgetArgument(t_33, 0);
      v_33 = ATgetArgument(t_33, 1);
      w_33 = ATgetArgument(t_33, 2);
      {
        ATerm o_14;
        o_14 = t;
        {
          ATerm a_34 = NULL;
          ATerm b_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_33), not_null(v_33));
          {
            ATerm p_14 = t;
            int q_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_14);
              }
            else
              {
                t = p_14;
                t = (ATerm) ATempty;
              }
            {
              b_34 = t;
              if(((a_34 != NULL) && (a_34 != b_34)))
                _fail(b_34);
              else
                a_34 = b_34;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_33), not_null(v_33), (ATerm) ATinsert(CheckATermList(not_null(a_34)), not_null(w_33)));
            t = table_put_0(t);
          }
        }
        t = o_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_83 (ATerm))
{
  ATerm f_34 = NULL;
  ATerm g_34 = NULL;
  t = term_c_8;
  {
    t = b_83(t);
    {
      g_34 = t;
      if(((f_34 != NULL) && (f_34 != g_34)))
        _fail(g_34);
      else
        f_34 = g_34;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_12, term_h_12, not_null(f_34));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm m_34 = NULL,q_34 = NULL,r_34 = NULL;
  m_34 = t;
  l_34 :
  if(match_string(m_34, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(m_34) == AT_LIST) && !(ATisEmpty(m_34))))
        {
          q_34 = ATgetFirst((ATermList) m_34);
          r_34 = (ATerm) ATgetNext((ATermList) m_34);
          {
            ATerm u_34 = NULL;
            ATerm r_14;
            r_14 = t;
            {
              t = not_null(q_34);
              t = a_0(t);
            }
            t = r_14;
            {
              ATerm v_34 = NULL;
              t = term_c_8;
              {
                t = d_0(t);
                {
                  v_34 = t;
                  if(((u_34 != NULL) && (u_34 != v_34)))
                    _fail(v_34);
                  else
                    u_34 = v_34;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_34)), not_null(u_34));
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
  ATerm z_2 (ATerm t)
  {
    ATerm a_35 = NULL;
    a_35 = t;
    z_34 :
    if(!(match_string(a_35, "--help")))
      {
        if(!(match_string(a_35, "-h")))
          {
            if(!(match_string(a_35, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_w_14;
    {
      t = set_config_0(t);
      t = term_x_14;
    }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_y_14;
    return(t);
  }
  t = Option_3(t, z_2, a_3, b_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
  d_35 = t;
  c_35 :
  if(((ATgetType(d_35) == AT_LIST) && !(ATisEmpty(d_35))))
    {
      e_35 = ATgetFirst((ATermList) d_35);
      f_35 = (ATerm) ATgetNext((ATermList) d_35);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_35)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_35)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_51 (ATerm), ATerm s_51 (ATerm))
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
  p_35 = t;
  o_35 :
  if(((ATgetType(p_35) == AT_LIST) && !(ATisEmpty(p_35))))
    {
      q_35 = ATgetFirst((ATermList) p_35);
      r_35 = (ATerm) ATgetNext((ATermList) p_35);
      {
        ATerm v_35 = NULL,x_35 = NULL;
        ATerm w_35 = NULL;
        t = SSLgetAnnotations(not_null(p_35));
        {
          w_35 = t;
          if(((v_35 != NULL) && (v_35 != w_35)))
            _fail(w_35);
          else
            v_35 = w_35;
        }
        {
          t = not_null(q_35);
          {
            ATerm z_35 = NULL;
            t = r_51(t);
            {
              x_35 = t;
              {
                t = not_null(r_35);
                {
                  ATerm b_36 = NULL;
                  t = s_51(t);
                  {
                    z_35 = t;
                    {
                      ATerm c_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_35)), not_null(x_35)), not_null(v_35));
                      {
                        c_36 = t;
                        if(((b_36 != NULL) && (b_36 != c_36)))
                          _fail(c_36);
                        else
                          b_36 = c_36;
                      }
                      t = not_null(b_36);
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
  ATerm r_36 = NULL;
  r_36 = t;
  q_36 :
  if(((ATgetType(r_36) == AT_LIST) && ATisEmpty(r_36)))
    {
      {
        ATerm t_36 = NULL,v_36 = NULL;
        ATerm z_14;
        z_14 = t;
        {
          ATerm u_36 = NULL;
          t = SSLgetAnnotations(not_null(r_36));
          {
            u_36 = t;
            if(((t_36 != NULL) && (t_36 != u_36)))
              _fail(u_36);
            else
              t_36 = u_36;
          }
        }
        t = z_14;
        {
          ATerm w_36 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_36));
          {
            w_36 = t;
            if(((v_36 != NULL) && (v_36 != w_36)))
              _fail(w_36);
            else
              v_36 = w_36;
          }
          t = not_null(v_36);
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
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
  c_37 = t;
  b_37 :
  if(match_cons(c_37, sym__2))
    {
      d_37 = ATgetArgument(c_37, 0);
      e_37 = ATgetArgument(c_37, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_14, not_null(d_37), not_null(e_37));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_82 (ATerm))
{
  ATerm a_15;
  a_15 = t;
  {
    ATerm c_3 (ATerm t)
    {
      t = term_b_15;
      t = z_82(t);
      return(t);
    }
    t = try_1(t, c_3);
  }
  t = a_15;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm o_37 = NULL;
      ATerm f_15;
      f_15 = t;
      {
        ATerm k_37 = NULL;
        ATerm n_37 = NULL;
        n_37 = t;
        if(((k_37 != NULL) && (k_37 != n_37)))
          _fail(n_37);
        else
          k_37 = n_37;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_4, not_null(k_37));
          t = set_config_0(t);
        }
      }
      t = f_15;
      {
        ATerm p_37 = NULL;
        p_37 = t;
        if(((o_37 != NULL) && (o_37 != p_37)))
          _fail(p_37);
        else
          o_37 = p_37;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_37));
      }
      return(t);
    }
    ATerm e_3 (ATerm t)
    {
      ATerm g_15 = t;
      int k_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_15 = t;
          int o_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_15);
            }
          else
            {
              t = n_15;
              {
                t = z_82(t);
                t = Cons_2(t, _id, e_3);
              }
            }
          LocalPopChoice(k_15);
        }
      else
        {
          t = g_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_3, e_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
  ATerm p_15;
  p_15 = t;
  {
    ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL;
    z_37 = t;
    v_37 :
    if(match_cons(z_37, sym__3))
      {
        a_38 = ATgetArgument(z_37, 0);
        b_38 = ATgetArgument(z_37, 1);
        c_38 = ATgetArgument(z_37, 2);
        {
          if(((w_37 != NULL) && (w_37 != a_38)))
            _fail(a_38);
          else
            w_37 = a_38;
          {
            if(((x_37 != NULL) && (x_37 != b_38)))
              _fail(b_38);
            else
              x_37 = b_38;
            {
              if(((y_37 != NULL) && (y_37 != c_38)))
                _fail(c_38);
              else
                y_37 = c_38;
              t = SSL_table_put(not_null(w_37), not_null(x_37), not_null(y_37));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_82 (ATerm))
{
  ATerm f_38 = NULL;
  ATerm q_15;
  q_15 = t;
  {
    t = term_r_15;
    t = table_put_0(t);
  }
  t = q_15;
  {
    ATerm f_3 (ATerm t)
    {
      ATerm w_15 = t;
      int x_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_82(t);
          LocalPopChoice(x_15);
        }
      else
        {
          t = w_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_3);
    {
      ATerm g_3 (ATerm t)
      {
        ATerm y_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_16;
            e_16 = t;
            {
              ATerm f_16 = t;
              int h_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_t_14;
                  t = get_config_0(t);
                  LocalPopChoice(h_16);
                }
              else
                {
                  t = f_16;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = e_16;
            {
              t = system_usage_0(t);
              {
                t = term_c_4;
                t = exit_0(t);
              }
            }
            LocalPopChoice(z_15);
          }
        else
          {
            t = y_15;
            {
              ATerm i_3 (ATerm t)
              {
                ATerm j_3 (ATerm t)
                {
                  ATerm g_38 = NULL;
                  g_38 = t;
                  if(((f_38 != NULL) && (f_38 != g_38)))
                    _fail(g_38);
                  else
                    f_38 = g_38;
                  return(t);
                }
                t = Undefined_1(t, j_3);
                return(t);
              }
              t = option_defined_1(t, i_3);
              {
                ATerm k_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_38)), term_i_16);
                  return(t);
                }
                t = say_1(t, k_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_r_3;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, g_3);
      {
        ATerm j_16;
        j_16 = t;
        {
          t = term_g_12;
          t = table_destroy_0(t);
        }
        t = j_16;
      }
    }
  }
  return(t);
}
ATerm Vis_amb_0 (ATerm t)
{
  t = parse_options_1(t, io_options_0);
  {
    ATerm k_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_file_0(t);
        {
          ATerm o_3 (ATerm t)
          {
            t = _2(t, _id, visamb_0);
            return(t);
          }
          t = apply_strategy_1(t, o_3);
          {
            t = output_file_0(t);
            t = report_success_0(t);
          }
        }
        LocalPopChoice(p_16);
      }
    else
      {
        t = k_16;
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
