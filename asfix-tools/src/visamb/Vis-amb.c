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
Symbol sym_Pipe_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_W__OK_0;
Symbol sym_X__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
  sym_X__OK_0 = ATmakeSymbol("X_OK", 0, ATfalse);
  ATprotectSymbol(sym_X__OK_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
ATerm term_m_17;
ATerm term_w_16;
ATerm term_l_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_i_15;
ATerm term_d_15;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_c_12;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_q_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_p_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_v_4;
ATerm term_h_4;
ATerm term_w_3;
ATerm term_v_3;
ATerm term_u_3;
ATerm term_t_3;
ATerm term_s_3;
void init_constant_terms (void)
{
  ATprotect(&(term_s_3));
  term_s_3 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_3));
  term_t_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_s_3);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym__2, term_v_4, term_h_4);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_4);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__2, term_k_10, term_s_3);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym__2, term_f_11, term_s_3);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("The SDF2 implementation caters for arbitrary context-free grammars. That is,\n", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("even for ambiguous grammars the parser will produce a parse trees containing\n", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("a concise encoding of allpossible parses. Ambiguities are represented by\n", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("means of amb nodes that contain a list of possible parse trees at that\n", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("point. For most applications, however, it is desirable to develop\n", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("unambiguous grammars. To aid the grammar writer in detecting and solving the\n", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ambiguities, the visamb tool extracts the ambiguities from a parse tree and\n", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("displays them in a readable format.\n", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__2, term_h_13, term_i_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_y_15, term_s_3);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__3, term_h_13, term_i_13, (ATerm) ATempty);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm e_77 (ATerm), ATerm f_77 (ATerm));
ATerm crush_2 (ATerm, ATerm x_80 (ATerm), ATerm y_80 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm s_84 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm p_83 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm get_args_0 (ATerm);
ATerm lit_1 (ATerm, ATerm h_62 (ATerm));
ATerm prod_3 (ATerm, ATerm x_62 (ATerm), ATerm y_62 (ATerm), ATerm z_62 (ATerm));
ATerm MkLex_0 (ATerm);
ATerm cf_1 (ATerm, ATerm d_62 (ATerm));
ATerm lex_1 (ATerm, ATerm e_62 (ATerm));
ATerm Lexical_0 (ATerm);
ATerm get_sort_0 (ATerm);
ATerm Nsplit_2 (ATerm, ATerm o_63 (ATerm), ATerm p_63 (ATerm));
ATerm ProjectAmb_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm abbrev_term_0 (ATerm);
ATerm F_p__0 (ATerm);
ATerm F_0 (ATerm);
ATerm appl_2 (ATerm, ATerm a_63 (ATerm), ATerm b_63 (ATerm));
ATerm yield_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm abbrev_amb_0 (ATerm);
ATerm abbrev_ambs_0 (ATerm);
ATerm amb_1 (ATerm, ATerm c_63 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm k_75 (ATerm), ATerm l_75 (ATerm));
ATerm union_1 (ATerm, ATerm g_75 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm i_77 (ATerm));
ATerm crush_3 (ATerm, ATerm z_80 (ATerm), ATerm a_81 (ATerm), ATerm b_81 (ATerm));
ATerm bu_collect_1 (ATerm, ATerm k_76 (ATerm));
ATerm parsetree_2 (ATerm, ATerm h_63 (ATerm), ATerm i_63 (ATerm));
ATerm collect_ambs_0 (ATerm);
ATerm visamb_0 (ATerm);
ATerm _2 (ATerm, ATerm v_54 (ATerm), ATerm w_54 (ATerm));
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm r_86 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm fopen_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm t_78 (ATerm), ATerm u_78 (ATerm));
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
ATerm short_description_1 (ATerm, ATerm g_0 (ATerm));
ATerm Program_1 (ATerm, ATerm b_62 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm c_62 (ATerm));
ATerm fetch_1 (ATerm, ATerm o_71 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_88 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm u_71 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm b_83 (ATerm));
ATerm map_1 (ATerm, ATerm f_71 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_89 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_56 (ATerm), ATerm f_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_89 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_89 (ATerm));
ATerm Vis_amb_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  ATerm t_2 = NULL;
  t = report_run_time_0(t);
  {
    ATerm u_2 = NULL;
    t = term_s_3;
    {
      t = whoami_0(t);
      {
        u_2 = t;
        if(((t_2 != NULL) && (t_2 != u_2)))
          _fail(u_2);
        else
          t_2 = u_2;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATinsert(ATempty, term_u_3), not_null(t_2)));
      {
        t = printnl_0(t);
        {
          t = term_v_3;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_w_3;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm h_3 = NULL;
  h_3 = t;
  t = SSL_TicksToSeconds(not_null(h_3));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL;
  p_3 = t;
  o_3 :
  if(match_cons(p_3, sym__2))
    {
      q_3 = ATgetArgument(p_3, 0);
      r_3 = ATgetArgument(p_3, 1);
      {
        ATerm b_4 = t;
        int c_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_3), not_null(r_3));
            ;
            LocalPopChoice(c_4);
          }
        else
          {
            t = b_4;
            t = SSL_addr(not_null(q_3), not_null(r_3));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm e_77 (ATerm), ATerm f_77 (ATerm))
{
  ATerm f_4 = t;
  int g_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_77(t);
      ;
      LocalPopChoice(g_4);
    }
  else
    {
      t = f_4;
      {
        ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL;
        y_3 = t;
        x_3 :
        if(((ATgetType(y_3) == AT_LIST) && !(ATisEmpty(y_3))))
          {
            z_3 = ATgetFirst((ATermList) y_3);
            a_4 = (ATerm) ATgetNext((ATermList) y_3);
            {
              ATerm d_4 = NULL;
              ATerm e_4 = NULL;
              t = not_null(a_4);
              {
                t = foldr_2(t, e_77, f_77);
                {
                  e_4 = t;
                  if(((d_4 != NULL) && (d_4 != e_4)))
                    _fail(e_4);
                  else
                    d_4 = e_4;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_3), not_null(d_4));
                t = f_77(t);
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
ATerm crush_2 (ATerm t, ATerm x_80 (ATerm), ATerm y_80 (ATerm))
{
  ATerm l_4 = NULL;
  ATerm n_4 = NULL;
  l_4 = t;
  {
    ATerm o_4 = NULL;
    ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
    t = not_null(l_4);
    {
      o_4 = t;
      {
        t = SSL_explode_term(not_null(o_4));
        {
          q_4 = t;
          k_4 :
          if(match_cons(q_4, sym__2))
            {
              r_4 = ATgetArgument(q_4, 0);
              s_4 = ATgetArgument(q_4, 1);
              if(((n_4 != NULL) && (n_4 != s_4)))
                _fail(s_4);
              else
                n_4 = s_4;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_4);
      t = foldr_2(t, x_80, y_80);
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
    ATerm c_0 (ATerm t)
    {
      t = term_h_4;
      return(t);
    }
    t = crush_2(t, c_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym__2))
    {
      z_4 = ATgetArgument(y_4, 0);
      a_5 = ATgetArgument(y_4, 1);
      {
        ATerm i_4;
        i_4 = t;
        {
          ATerm j_4 = t;
          int m_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_4), not_null(a_5));
              ;
              LocalPopChoice(m_4);
            }
          else
            {
              t = j_4;
              t = SSL_gtr(not_null(z_4), not_null(a_5));
            }
        }
        t = i_4;
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
  ATerm g_5 = NULL;
  ATerm p_4 = t;
  int t_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
      h_5 = t;
      f_5 :
      if(match_cons(h_5, sym__2))
        {
          i_5 = ATgetArgument(h_5, 0);
          j_5 = ATgetArgument(h_5, 1);
          {
            if(((g_5 != NULL) && (g_5 != i_5)))
              _fail(i_5);
            else
              g_5 = i_5;
            if(((g_5 != NULL) && (g_5 != j_5)))
              _fail(j_5);
            else
              g_5 = j_5;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(t_4);
    }
  else
    {
      t = p_4;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_84 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    ATerm u_4;
    u_4 = t;
    {
      ATerm m_5 = NULL;
      ATerm n_5 = NULL;
      t = term_v_4;
      {
        t = get_config_0(t);
        {
          n_5 = t;
          if(((m_5 != NULL) && (m_5 != n_5)))
            _fail(n_5);
          else
            m_5 = n_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_5), term_v_3);
        t = geq_0(t);
      }
    }
    t = u_4;
    t = s_84(t);
    return(t);
  }
  t = try_1(t, e_0);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    ATerm r_5 = NULL,t_5 = NULL;
    ATerm w_4;
    w_4 = t;
    {
      ATerm s_5 = NULL;
      t = run_time_0(t);
      {
        s_5 = t;
        if(((r_5 != NULL) && (r_5 != s_5)))
          _fail(s_5);
        else
          r_5 = s_5;
      }
    }
    t = w_4;
    {
      ATerm u_5 = NULL;
      t = term_s_3;
      {
        t = whoami_0(t);
        {
          u_5 = t;
          if(((t_5 != NULL) && (t_5 != u_5)))
            _fail(u_5);
          else
            t_5 = u_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_5), not_null(r_5)), term_b_5), not_null(t_5)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, f_0);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_h_4;
    t = exit_0(t);
  }
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
  b_6 = t;
  z_5 :
  if(match_cons(b_6, sym__2))
    {
      c_6 = ATgetArgument(b_6, 0);
      d_6 = ATgetArgument(b_6, 1);
      a_6 :
      if(match_cons(d_6, sym_Stream_1))
        {
          e_6 = ATgetArgument(d_6, 0);
          {
            ATerm h_6 = NULL;
            t = SSL_fputc(not_null(c_6), not_null(e_6));
            {
              ATerm i_6 = NULL;
              i_6 = t;
              if(((h_6 != NULL) && (h_6 != i_6)))
                _fail(i_6);
              else
                h_6 = i_6;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_6));
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
  return(t);
}
ATerm write_in_text_to_stream_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL;
  p_6 = t;
  n_6 :
  if(match_cons(p_6, sym__2))
    {
      q_6 = ATgetArgument(p_6, 0);
      s_6 = ATgetArgument(p_6, 1);
      o_6 :
      if(match_cons(q_6, sym_Stream_1))
        {
          r_6 = ATgetArgument(q_6, 0);
          {
            ATerm v_6 = NULL;
            t = SSL_write_term_to_stream_text(not_null(r_6), not_null(s_6));
            {
              ATerm w_6 = NULL;
              w_6 = t;
              if(((v_6 != NULL) && (v_6 != w_6)))
                _fail(w_6);
              else
                v_6 = w_6;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_6));
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
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    ATerm a_7 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm b_7 = NULL;
      b_7 = t;
      if(((a_7 != NULL) && (a_7 != b_7)))
        _fail(b_7);
      else
        a_7 = b_7;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_5, not_null(a_7));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, h_0);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL;
  h_7 = t;
  f_7 :
  if(match_cons(h_7, sym__2))
    {
      i_7 = ATgetArgument(h_7, 0);
      k_7 = ATgetArgument(h_7, 1);
      g_7 :
      if(match_cons(i_7, sym_Stream_1))
        {
          j_7 = ATgetArgument(i_7, 0);
          {
            ATerm n_7 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(j_7), not_null(k_7));
            {
              ATerm o_7 = NULL;
              o_7 = t;
              if(((n_7 != NULL) && (n_7 != o_7)))
                _fail(o_7);
              else
                n_7 = o_7;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_7));
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
  return(t);
}
ATerm WriteToFile_1 (ATerm t, ATerm p_83 (ATerm))
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  u_7 :
  if(match_cons(v_7, sym__2))
    {
      w_7 = ATgetArgument(v_7, 0);
      x_7 = ATgetArgument(v_7, 1);
      {
        ATerm a_8 = NULL,c_8 = NULL;
        t = not_null(w_7);
        {
          ATerm b_8 = NULL;
          b_8 = t;
          if(((a_8 != NULL) && (a_8 != b_8)))
            _fail(b_8);
          else
            a_8 = b_8;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), term_e_5);
            {
              t = open_stream_0(t);
              {
                ATerm d_8 = NULL;
                d_8 = t;
                if(((c_8 != NULL) && (c_8 != d_8)))
                  _fail(d_8);
                else
                  c_8 = d_8;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_8), not_null(x_7));
                  {
                    t = p_83(t);
                    {
                      t = fclose_0(t);
                      t = not_null(x_7);
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  t = WriteToFile_1(t, write_in_baf_to_stream_0);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm l_8 = NULL;
  ATerm k_5;
  k_5 = t;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm l_5 = t;
      int o_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_0 (ATerm t)
          {
            ATerm m_8 = NULL,n_8 = NULL;
            m_8 = t;
            i_8 :
            if(match_cons(m_8, sym_Output_1))
              {
                n_8 = ATgetArgument(m_8, 0);
                if(((l_8 != NULL) && (l_8 != n_8)))
                  _fail(n_8);
                else
                  l_8 = n_8;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_0);
          ;
          LocalPopChoice(o_5);
        }
      else
        {
          t = l_5;
          {
            ATerm o_8 = NULL;
            t = term_p_5;
            {
              o_8 = t;
              if(((l_8 != NULL) && (l_8 != o_8)))
                _fail(o_8);
              else
                l_8 = o_8;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_0, _id);
  }
  t = k_5;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm r_0 (ATerm t)
      {
        t = not_null(l_8);
        return(t);
      }
      t = split_2(t, r_0, _id);
      return(t);
    }
    t = _2(t, _id, q_0);
    {
      ATerm q_5 = t;
      int v_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_0 (ATerm t)
          {
            ATerm t_0 (ATerm t)
            {
              ATerm p_8 = NULL;
              p_8 = t;
              k_8 :
              if(!(match_cons(p_8, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, t_0);
            return(t);
          }
          t = _2(t, s_0, WriteToBinaryFile_0);
          ;
          LocalPopChoice(v_5);
        }
      else
        {
          t = q_5;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm t_8 = NULL;
  t_8 = t;
  t = SSL_int_to_string(not_null(t_8));
  return(t);
}
ATerm get_args_0 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
  y_8 = t;
  x_8 :
  if(match_cons(y_8, sym_appl_2))
    {
      z_8 = ATgetArgument(y_8, 0);
      a_9 = ATgetArgument(y_8, 1);
      t = not_null(a_9);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm h_62 (ATerm))
{
  ATerm j_9 = NULL,k_9 = NULL;
  j_9 = t;
  i_9 :
  if(match_cons(j_9, sym_lit_1))
    {
      k_9 = ATgetArgument(j_9, 0);
      {
        ATerm n_9 = NULL,p_9 = NULL;
        ATerm o_9 = NULL;
        t = SSLgetAnnotations(not_null(j_9));
        {
          o_9 = t;
          if(((n_9 != NULL) && (n_9 != o_9)))
            _fail(o_9);
          else
            n_9 = o_9;
        }
        {
          t = not_null(k_9);
          {
            ATerm r_9 = NULL;
            t = h_62(t);
            {
              p_9 = t;
              {
                ATerm s_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(p_9)), not_null(n_9));
                {
                  s_9 = t;
                  if(((r_9 != NULL) && (r_9 != s_9)))
                    _fail(s_9);
                  else
                    r_9 = s_9;
                }
                t = not_null(r_9);
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
ATerm prod_3 (ATerm t, ATerm x_62 (ATerm), ATerm y_62 (ATerm), ATerm z_62 (ATerm))
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym_prod_3))
    {
      f_10 = ATgetArgument(e_10, 0);
      g_10 = ATgetArgument(e_10, 1);
      h_10 = ATgetArgument(e_10, 2);
      {
        ATerm m_10 = NULL,o_10 = NULL;
        ATerm n_10 = NULL;
        t = SSLgetAnnotations(not_null(e_10));
        {
          n_10 = t;
          if(((m_10 != NULL) && (m_10 != n_10)))
            _fail(n_10);
          else
            m_10 = n_10;
        }
        {
          t = not_null(f_10);
          {
            ATerm q_10 = NULL;
            t = x_62(t);
            {
              o_10 = t;
              {
                t = not_null(g_10);
                {
                  ATerm s_10 = NULL;
                  t = y_62(t);
                  {
                    q_10 = t;
                    {
                      t = not_null(h_10);
                      {
                        ATerm u_10 = NULL;
                        t = z_62(t);
                        {
                          s_10 = t;
                          {
                            ATerm v_10 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(o_10), not_null(q_10), not_null(s_10)), not_null(m_10));
                            {
                              v_10 = t;
                              if(((u_10 != NULL) && (u_10 != v_10)))
                                _fail(v_10);
                              else
                                u_10 = v_10;
                            }
                            t = not_null(u_10);
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
  ATerm d_11 = NULL;
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym_lexical_1, not_null(d_11));
  return(t);
}
ATerm cf_1 (ATerm t, ATerm d_62 (ATerm))
{
  ATerm l_11 = NULL,m_11 = NULL;
  l_11 = t;
  k_11 :
  if(match_cons(l_11, sym_cf_1))
    {
      m_11 = ATgetArgument(l_11, 0);
      {
        ATerm p_11 = NULL,r_11 = NULL;
        ATerm q_11 = NULL;
        t = SSLgetAnnotations(not_null(l_11));
        {
          q_11 = t;
          if(((p_11 != NULL) && (p_11 != q_11)))
            _fail(q_11);
          else
            p_11 = q_11;
        }
        {
          t = not_null(m_11);
          {
            ATerm t_11 = NULL;
            t = d_62(t);
            {
              r_11 = t;
              {
                ATerm u_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, not_null(r_11)), not_null(p_11));
                {
                  u_11 = t;
                  if(((t_11 != NULL) && (t_11 != u_11)))
                    _fail(u_11);
                  else
                    t_11 = u_11;
                }
                t = not_null(t_11);
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
ATerm lex_1 (ATerm t, ATerm e_62 (ATerm))
{
  ATerm e_12 = NULL,f_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym_lex_1))
    {
      f_12 = ATgetArgument(e_12, 0);
      {
        ATerm i_12 = NULL,k_12 = NULL;
        ATerm j_12 = NULL;
        t = SSLgetAnnotations(not_null(e_12));
        {
          j_12 = t;
          if(((i_12 != NULL) && (i_12 != j_12)))
            _fail(j_12);
          else
            i_12 = j_12;
        }
        {
          t = not_null(f_12);
          {
            ATerm m_12 = NULL;
            t = e_62(t);
            {
              k_12 = t;
              {
                ATerm n_12 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(k_12)), not_null(i_12));
                {
                  n_12 = t;
                  if(((m_12 != NULL) && (m_12 != n_12)))
                    _fail(n_12);
                  else
                    m_12 = n_12;
                }
                t = not_null(m_12);
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
  ATerm w_5 = t;
  int x_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_0 (ATerm t)
      {
        ATerm v_0 (ATerm t)
        {
          ATerm x_0 (ATerm t)
          {
            t = lex_1(t, _id);
            return(t);
          }
          t = Cons_2(t, x_0, Nil_0);
          return(t);
        }
        ATerm w_0 (ATerm t)
        {
          t = cf_1(t, _id);
          return(t);
        }
        t = prod_3(t, v_0, w_0, _id);
        return(t);
      }
      t = appl_2(t, u_0, _id);
      {
        t = yield_0(t);
        {
          t = MkLex_0(t);
          t = F_p__0(t);
        }
      }
      ;
      LocalPopChoice(x_5);
    }
  else
    {
      t = w_5;
      {
        ATerm y_0 (ATerm t)
        {
          ATerm z_0 (ATerm t)
          {
            t = lit_1(t, _id);
            return(t);
          }
          t = prod_3(t, _id, z_0, _id);
          return(t);
        }
        t = appl_2(t, y_0, _id);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm get_sort_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
  v_12 = t;
  t_12 :
  if(match_cons(v_12, sym_appl_2))
    {
      w_12 = ATgetArgument(v_12, 0);
      a_13 = ATgetArgument(v_12, 1);
      u_12 :
      if(match_cons(w_12, sym_prod_3))
        {
          x_12 = ATgetArgument(w_12, 0);
          y_12 = ATgetArgument(w_12, 1);
          z_12 = ATgetArgument(w_12, 2);
          t = not_null(y_12);
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
ATerm Nsplit_2 (ATerm t, ATerm o_63 (ATerm), ATerm p_63 (ATerm))
{
  ATerm j_13 = NULL;
  ATerm l_13 = NULL,n_13 = NULL;
  j_13 = t;
  {
    ATerm y_5;
    y_5 = t;
    {
      ATerm m_13 = NULL;
      t = not_null(j_13);
      {
        t = o_63(t);
        {
          m_13 = t;
          if(((l_13 != NULL) && (l_13 != m_13)))
            _fail(m_13);
          else
            l_13 = m_13;
        }
      }
    }
    t = y_5;
    {
      ATerm o_13 = NULL;
      t = not_null(j_13);
      {
        t = p_63(t);
        {
          o_13 = t;
          if(((n_13 != NULL) && (n_13 != o_13)))
            _fail(o_13);
          else
            n_13 = o_13;
        }
      }
      t = (ATerm) ATmakeAppl(sym_N_2, not_null(l_13), not_null(n_13));
    }
  }
  return(t);
}
ATerm ProjectAmb_0 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
  v_13 = t;
  t_13 :
  if(match_cons(v_13, sym_amb_1))
    {
      w_13 = ATgetArgument(v_13, 0);
      u_13 :
      if(((ATgetType(w_13) == AT_LIST) && !(ATisEmpty(w_13))))
        {
          x_13 = ATgetFirst((ATermList) w_13);
          y_13 = (ATerm) ATgetNext((ATermList) w_13);
          t = not_null(x_13);
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
  ATerm d_14 = NULL;
  d_14 = t;
  t = SSL_is_int(not_null(d_14));
  return(t);
}
ATerm abbrev_term_0 (ATerm t)
{
  ATerm f_6 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_6 = t;
      int k_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_int_0(t);
          ;
          LocalPopChoice(k_6);
        }
      else
        {
          t = j_6;
          t = ProjectAmb_0(t);
        }
      ;
      LocalPopChoice(g_6);
    }
  else
    {
      t = f_6;
      {
        ATerm a_1 (ATerm t)
        {
          ATerm l_6 = t;
          int m_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Lexical_0(t);
              ;
              LocalPopChoice(m_6);
            }
          else
            {
              t = l_6;
              {
                t = get_args_0(t);
                t = map_1(t, abbrev_term_0);
              }
            }
          return(t);
        }
        t = Nsplit_2(t, get_sort_0, a_1);
      }
    }
  return(t);
}
ATerm F_p__0 (ATerm t)
{
  ATerm i_14 = NULL;
  i_14 = t;
  t = (ATerm) ATinsert(ATempty, not_null(i_14));
  return(t);
}
ATerm F_0 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_appl_2))
    {
      o_14 = ATgetArgument(n_14, 0);
      p_14 = ATgetArgument(n_14, 1);
      {
        t = not_null(p_14);
        t = concat_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm appl_2 (ATerm t, ATerm a_63 (ATerm), ATerm b_63 (ATerm))
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
  z_14 = t;
  y_14 :
  if(match_cons(z_14, sym_appl_2))
    {
      a_15 = ATgetArgument(z_14, 0);
      b_15 = ATgetArgument(z_14, 1);
      {
        ATerm f_15 = NULL,h_15 = NULL;
        ATerm g_15 = NULL;
        t = SSLgetAnnotations(not_null(z_14));
        {
          g_15 = t;
          if(((f_15 != NULL) && (f_15 != g_15)))
            _fail(g_15);
          else
            f_15 = g_15;
        }
        {
          t = not_null(a_15);
          {
            ATerm j_15 = NULL;
            t = a_63(t);
            {
              h_15 = t;
              {
                t = not_null(b_15);
                {
                  ATerm l_15 = NULL;
                  t = b_63(t);
                  {
                    j_15 = t;
                    {
                      ATerm m_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, not_null(h_15), not_null(j_15)), not_null(f_15));
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
  ATerm s_15 (ATerm t)
  {
    ATerm t_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 (ATerm t)
        {
          t = map_1(t, s_15);
          return(t);
        }
        t = appl_2(t, _id, b_1);
        t = F_0(t);
        ;
        LocalPopChoice(u_6);
      }
    else
      {
        t = t_6;
        t = F_p__0(t);
      }
    return(t);
  }
  t = s_15(t);
  t = implode_string_0(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  u_15 :
  if(((ATgetType(v_15) == AT_LIST) && !(ATisEmpty(v_15))))
    {
      w_15 = ATgetFirst((ATermList) v_15);
      x_15 = (ATerm) ATgetNext((ATermList) v_15);
      t = not_null(w_15);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm abbrev_amb_0 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym_amb_1))
    {
      f_16 = ATgetArgument(e_16, 0);
      {
        ATerm h_16 = NULL,j_16 = NULL;
        ATerm x_6;
        x_6 = t;
        {
          ATerm i_16 = NULL;
          t = not_null(f_16);
          {
            t = Hd_0(t);
            {
              t = yield_0(t);
              {
                i_16 = t;
                if(((h_16 != NULL) && (h_16 != i_16)))
                  _fail(i_16);
                else
                  h_16 = i_16;
              }
            }
          }
        }
        t = x_6;
        {
          ATerm k_16 = NULL;
          t = not_null(f_16);
          {
            t = map_1(t, abbrev_term_0);
            {
              k_16 = t;
              if(((j_16 != NULL) && (j_16 != k_16)))
                _fail(k_16);
              else
                j_16 = k_16;
            }
          }
          t = (ATerm) ATmakeAppl(sym_amb_abbr_2, not_null(h_16), not_null(j_16));
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
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      ATerm q_16 = NULL;
      ATerm s_16 = NULL;
      q_16 = t;
      {
        ATerm t_16 = NULL;
        t = not_null(q_16);
        {
          t = abbrev_amb_0(t);
          {
            t_16 = t;
            if(((s_16 != NULL) && (s_16 != t_16)))
              _fail(t_16);
            else
              s_16 = t_16;
          }
        }
        t = (ATerm) ATmakeAppl(sym_root_1, not_null(s_16));
      }
      return(t);
    }
    t = map_1(t, d_1);
    return(t);
  }
  t = parsetree_2(t, c_1, int_to_string_0);
  return(t);
}
ATerm amb_1 (ATerm t, ATerm c_63 (ATerm))
{
  ATerm b_17 = NULL,c_17 = NULL;
  b_17 = t;
  a_17 :
  if(match_cons(b_17, sym_amb_1))
    {
      c_17 = ATgetArgument(b_17, 0);
      {
        ATerm f_17 = NULL,h_17 = NULL;
        ATerm g_17 = NULL;
        t = SSLgetAnnotations(not_null(b_17));
        {
          g_17 = t;
          if(((f_17 != NULL) && (f_17 != g_17)))
            _fail(g_17);
          else
            f_17 = g_17;
        }
        {
          t = not_null(c_17);
          {
            ATerm j_17 = NULL;
            t = c_63(t);
            {
              h_17 = t;
              {
                ATerm k_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, not_null(h_17)), not_null(f_17));
                {
                  k_17 = t;
                  if(((j_17 != NULL) && (j_17 != k_17)))
                    _fail(k_17);
                  else
                    j_17 = k_17;
                }
                t = not_null(j_17);
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
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym__2))
    {
      s_17 = ATgetArgument(r_17, 0);
      t_17 = ATgetArgument(r_17, 1);
      if(((s_17 != NULL) && (s_17 != t_17)))
        _fail(t_17);
      else
        s_17 = t_17;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm k_75 (ATerm), ATerm l_75 (ATerm))
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  y_17 :
  if(((ATgetType(z_17) == AT_LIST) && !(ATisEmpty(z_17))))
    {
      a_18 = ATgetFirst((ATermList) z_17);
      b_18 = (ATerm) ATgetNext((ATermList) z_17);
      {
        t = l_75(t);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm e_18 = NULL;
            e_18 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_18), not_null(e_18));
              t = k_75(t);
            }
            return(t);
          }
          t = fetch_1(t, e_1);
        }
        t = not_null(b_18);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
  k_18 = t;
  j_18 :
  if(match_cons(k_18, sym__2))
    {
      l_18 = ATgetArgument(k_18, 0);
      m_18 = ATgetArgument(k_18, 1);
      {
        t = not_null(l_18);
        {
          ATerm q_18 (ATerm t)
          {
            ATerm y_6 = t;
            int z_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(m_18);
                ;
                LocalPopChoice(z_6);
              }
            else
              {
                t = y_6;
                {
                  ATerm c_7 = t;
                  int d_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_1 (ATerm t)
                      {
                        t = not_null(m_18);
                        return(t);
                      }
                      t = HdMember_p__2(t, g_75, f_1);
                      t = q_18(t);
                      ;
                      LocalPopChoice(d_7);
                    }
                  else
                    {
                      t = c_7;
                      t = Cons_2(t, _id, q_18);
                    }
                }
              }
            return(t);
          }
          t = q_18(t);
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
ATerm foldr_3 (ATerm t, ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm i_77 (ATerm))
{
  ATerm e_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_77(t);
      ;
      LocalPopChoice(l_7);
    }
  else
    {
      t = e_7;
      {
        ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
        v_18 = t;
        u_18 :
        if(((ATgetType(v_18) == AT_LIST) && !(ATisEmpty(v_18))))
          {
            w_18 = ATgetFirst((ATermList) v_18);
            x_18 = (ATerm) ATgetNext((ATermList) v_18);
            {
              ATerm a_19 = NULL,c_19 = NULL;
              ATerm m_7;
              m_7 = t;
              {
                ATerm b_19 = NULL;
                t = not_null(w_18);
                {
                  t = i_77(t);
                  {
                    b_19 = t;
                    if(((a_19 != NULL) && (a_19 != b_19)))
                      _fail(b_19);
                    else
                      a_19 = b_19;
                  }
                }
              }
              t = m_7;
              {
                ATerm d_19 = NULL;
                t = not_null(x_18);
                {
                  t = foldr_3(t, g_77, h_77, i_77);
                  {
                    d_19 = t;
                    if(((c_19 != NULL) && (c_19 != d_19)))
                      _fail(d_19);
                    else
                      c_19 = d_19;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_19), not_null(c_19));
                  t = h_77(t);
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
ATerm crush_3 (ATerm t, ATerm z_80 (ATerm), ATerm a_81 (ATerm), ATerm b_81 (ATerm))
{
  ATerm l_19 = NULL;
  ATerm n_19 = NULL;
  l_19 = t;
  {
    ATerm o_19 = NULL;
    ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
    t = not_null(l_19);
    {
      o_19 = t;
      {
        t = SSL_explode_term(not_null(o_19));
        {
          q_19 = t;
          k_19 :
          if(match_cons(q_19, sym__2))
            {
              r_19 = ATgetArgument(q_19, 0);
              s_19 = ATgetArgument(q_19, 1);
              if(((n_19 != NULL) && (n_19 != s_19)))
                _fail(s_19);
              else
                n_19 = s_19;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_19);
      t = foldr_3(t, z_80, a_81, b_81);
    }
  }
  return(t);
}
ATerm bu_collect_1 (ATerm t, ATerm k_76 (ATerm))
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_19 (ATerm t)
      {
        ATerm r_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _some(t, z_19);
            {
              ATerm g_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              ATerm h_1 (ATerm t)
              {
                ATerm t_7 = t;
                int y_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2(t, k_76, _id);
                    ;
                    LocalPopChoice(y_7);
                  }
                else
                  {
                    t = t_7;
                    t = (ATerm) ATempty;
                  }
                return(t);
              }
              t = crush_3(t, g_1, union_0, h_1);
            }
            ;
            LocalPopChoice(s_7);
          }
        else
          {
            t = r_7;
            {
              ATerm x_19 = NULL;
              ATerm y_19 = NULL;
              t = k_76(t);
              {
                y_19 = t;
                if(((x_19 != NULL) && (x_19 != y_19)))
                  _fail(y_19);
                else
                  x_19 = y_19;
              }
              t = (ATerm) ATinsert(ATempty, not_null(x_19));
            }
          }
        return(t);
      }
      t = z_19(t);
      ;
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm parsetree_2 (ATerm t, ATerm h_63 (ATerm), ATerm i_63 (ATerm))
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  h_20 = t;
  g_20 :
  if(match_cons(h_20, sym_parsetree_2))
    {
      i_20 = ATgetArgument(h_20, 0);
      j_20 = ATgetArgument(h_20, 1);
      {
        ATerm n_20 = NULL,f_21 = NULL;
        ATerm d_21 = NULL;
        t = SSLgetAnnotations(not_null(h_20));
        {
          d_21 = t;
          if(((n_20 != NULL) && (n_20 != d_21)))
            _fail(d_21);
          else
            n_20 = d_21;
        }
        {
          t = not_null(i_20);
          {
            ATerm h_21 = NULL;
            t = h_63(t);
            {
              f_21 = t;
              {
                t = not_null(j_20);
                {
                  ATerm j_21 = NULL;
                  t = i_63(t);
                  {
                    h_21 = t;
                    {
                      ATerm k_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, not_null(f_21), not_null(h_21)), not_null(n_20));
                      {
                        k_21 = t;
                        if(((j_21 != NULL) && (j_21 != k_21)))
                          _fail(k_21);
                        else
                          j_21 = k_21;
                      }
                      t = not_null(j_21);
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
  ATerm i_1 (ATerm t)
  {
    ATerm j_1 (ATerm t)
    {
      t = amb_1(t, _id);
      return(t);
    }
    t = bu_collect_1(t, j_1);
    return(t);
  }
  t = parsetree_2(t, i_1, _id);
  return(t);
}
ATerm visamb_0 (ATerm t)
{
  t = collect_ambs_0(t);
  t = abbrev_ambs_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm v_54 (ATerm), ATerm w_54 (ATerm))
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  v_21 :
  if(match_cons(w_21, sym__2))
    {
      x_21 = ATgetArgument(w_21, 0);
      y_21 = ATgetArgument(w_21, 1);
      {
        ATerm c_22 = NULL,e_22 = NULL;
        ATerm d_22 = NULL;
        t = SSLgetAnnotations(not_null(w_21));
        {
          d_22 = t;
          if(((c_22 != NULL) && (c_22 != d_22)))
            _fail(d_22);
          else
            c_22 = d_22;
        }
        {
          t = not_null(x_21);
          {
            ATerm g_22 = NULL;
            t = v_54(t);
            {
              e_22 = t;
              {
                t = not_null(y_21);
                {
                  ATerm i_22 = NULL;
                  t = w_54(t);
                  {
                    g_22 = t;
                    {
                      ATerm j_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_22), not_null(g_22)), not_null(c_22));
                      {
                        j_22 = t;
                        if(((i_22 != NULL) && (i_22 != j_22)))
                          _fail(j_22);
                        else
                          i_22 = j_22;
                      }
                      t = not_null(i_22);
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
ATerm apply_strategy_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm x_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  ATerm z_7;
  z_7 = t;
  t = dtime_0(t);
  t = z_7;
  {
    t = r_86(t);
    {
      ATerm e_8;
      e_8 = t;
      {
        ATerm y_22 = NULL;
        t = dtime_0(t);
        {
          y_22 = t;
          if(((x_22 != NULL) && (x_22 != y_22)))
            _fail(y_22);
          else
            x_22 = y_22;
        }
      }
      t = e_8;
      {
        z_22 = t;
        w_22 :
        if(match_cons(z_22, sym__2))
          {
            a_23 = ATgetArgument(z_22, 0);
            b_23 = ATgetArgument(z_22, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_23)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_22))), not_null(b_23));
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
ATerm fclose_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  ATerm u_23 (ATerm t)
  {
    t = SSL_fclose(not_null(o_23));
    return(t);
  }
  o_23 = t;
  m_23 :
  if(match_cons(o_23, sym_Stream_1))
    {
      n_23 = ATgetArgument(o_23, 0);
      {
        ATerm f_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(n_23));
            ;
            LocalPopChoice(g_8);
          }
        else
          {
            t = f_8;
            t = u_23(t);
          }
      }
    }
  else
    {
      t = u_23(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  x_23 = t;
  w_23 :
  if(match_cons(x_23, sym_Stream_1))
    {
      y_23 = ATgetArgument(x_23, 0);
      t = SSL_read_term_from_stream(not_null(y_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
  e_24 = t;
  d_24 :
  if(match_cons(e_24, sym__2))
    {
      f_24 = ATgetArgument(e_24, 0);
      g_24 = ATgetArgument(e_24, 1);
      {
        ATerm j_24 = NULL;
        t = SSL_fopen(not_null(f_24), not_null(g_24));
        {
          ATerm k_24 = NULL;
          k_24 = t;
          if(((j_24 != NULL) && (j_24 != k_24)))
            _fail(k_24);
          else
            j_24 = k_24;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_24));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm o_24 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm p_24 = NULL;
    p_24 = t;
    if(((o_24 != NULL) && (o_24 != p_24)))
      _fail(p_24);
    else
      o_24 = p_24;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_24));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm s_24 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm t_24 = NULL;
    t_24 = t;
    if(((s_24 != NULL) && (s_24 != t_24)))
      _fail(t_24);
    else
      s_24 = t_24;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_24));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm w_24 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm x_24 = NULL;
    x_24 = t;
    if(((w_24 != NULL) && (w_24 != x_24)))
      _fail(x_24);
    else
      w_24 = x_24;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_24));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  c_25 :
  if(match_cons(d_25, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(d_25, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(d_25, sym_stdin_0))
            {
              t = stdin_stream_0(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm n_25 = NULL;
  ATerm p_25 = NULL,q_25 = NULL;
  n_25 = t;
  {
    ATerm r_25 = NULL;
    ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
    t = not_null(n_25);
    {
      r_25 = t;
      {
        t = SSL_explode_term(not_null(r_25));
        {
          t_25 = t;
          k_25 :
          if(match_cons(t_25, sym__2))
            {
              u_25 = ATgetArgument(t_25, 0);
              v_25 = ATgetArgument(t_25, 1);
              l_25 :
              if(match_string(u_25, ""))
                {
                  m_25 :
                  if(((ATgetType(v_25) == AT_LIST) && !(ATisEmpty(v_25))))
                    {
                      w_25 = ATgetFirst((ATermList) v_25);
                      x_25 = (ATerm) ATgetNext((ATermList) v_25);
                      {
                        if(((q_25 != NULL) && (q_25 != w_25)))
                          _fail(w_25);
                        else
                          q_25 = w_25;
                        if(((p_25 != NULL) && (p_25 != x_25)))
                          _fail(x_25);
                        else
                          p_25 = x_25;
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
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(q_25);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym__2))
    {
      g_26 = ATgetArgument(f_26, 0);
      h_26 = ATgetArgument(f_26, 1);
      {
        ATerm h_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(j_8);
          }
        else
          {
            t = h_8;
            {
              ATerm q_8 = t;
              int r_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_1 (ATerm t)
                  {
                    ATerm i_26 = NULL,j_26 = NULL;
                    i_26 = t;
                    d_26 :
                    if(match_cons(i_26, sym_Path_1))
                      {
                        j_26 = ATgetArgument(i_26, 0);
                        t = not_null(j_26);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, k_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(r_8);
                }
              else
                {
                  t = q_8;
                  {
                    t = _2(t, is_string_0, _id);
                    t = fopen_0(t);
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm r_26 = NULL;
  ATerm s_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_26 = NULL;
      ATerm q_26 = NULL;
      q_26 = t;
      if(((p_26 != NULL) && (p_26 != q_26)))
        _fail(q_26);
      else
        p_26 = q_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), term_v_8);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(u_8);
    }
  else
    {
      t = s_8;
      {
        ATerm l_1 (ATerm t)
        {
          t = term_w_8;
          return(t);
        }
        t = debug_1(t, l_1);
        _fail(t);
      }
    }
  {
    ATerm b_9;
    b_9 = t;
    {
      ATerm s_26 = NULL;
      t = read_from_stream_0(t);
      {
        s_26 = t;
        if(((r_26 != NULL) && (r_26 != s_26)))
          _fail(s_26);
        else
          r_26 = s_26;
      }
    }
    t = b_9;
    {
      t = fclose_0(t);
      t = not_null(r_26);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_78 (ATerm), ATerm u_78 (ATerm))
{
  ATerm x_26 = NULL,z_26 = NULL;
  ATerm c_9;
  c_9 = t;
  {
    ATerm y_26 = NULL;
    t = t_78(t);
    {
      y_26 = t;
      if(((x_26 != NULL) && (x_26 != y_26)))
        _fail(y_26);
      else
        x_26 = y_26;
    }
  }
  t = c_9;
  {
    ATerm a_27 = NULL;
    t = u_78(t);
    {
      a_27 = t;
      if(((z_26 != NULL) && (z_26 != a_27)))
        _fail(a_27);
      else
        z_26 = a_27;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_26), not_null(z_26));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_27 = NULL;
  ATerm d_9;
  d_9 = t;
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_1 (ATerm t)
        {
          ATerm h_27 = NULL,i_27 = NULL;
          h_27 = t;
          e_27 :
          if(match_cons(h_27, sym_Input_1))
            {
              i_27 = ATgetArgument(h_27, 0);
              if(((g_27 != NULL) && (g_27 != i_27)))
                _fail(i_27);
              else
                g_27 = i_27;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, m_1);
        ;
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        {
          ATerm j_27 = NULL;
          t = term_g_9;
          {
            j_27 = t;
            if(((g_27 != NULL) && (g_27 != j_27)))
              _fail(j_27);
            else
              g_27 = j_27;
          }
        }
      }
  }
  t = d_9;
  {
    ATerm n_1 (ATerm t)
    {
      t = not_null(g_27);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, n_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm n_27 = NULL;
    n_27 = t;
    m_27 :
    if(!(match_string(n_27, "-v")))
      {
        if(!(match_string(n_27, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = term_l_9;
    t = set_config_0(t);
    t = term_m_9;
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    t = term_q_9;
    return(t);
  }
  t = Option_3(t, o_1, p_1, q_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm q_27 = NULL;
    q_27 = t;
    o_27 :
    if(!(match_string(q_27, "-k")))
      {
        if(!(match_string(q_27, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    ATerm t_9;
    t_9 = t;
    {
      ATerm r_27 = NULL;
      ATerm s_27 = NULL;
      t = string_to_int_0(t);
      {
        s_27 = t;
        if(((r_27 != NULL) && (r_27 != s_27)))
          _fail(s_27);
        else
          r_27 = s_27;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_9, not_null(r_27));
        t = set_config_0(t);
      }
    }
    t = t_9;
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    t = term_v_9;
    return(t);
  }
  t = ArgOption_3(t, r_1, s_1, t_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_27 = NULL;
  x_27 = t;
  t = SSL_string_to_int(not_null(x_27));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        ATerm i_28 = NULL;
        i_28 = t;
        d_28 :
        if(!(match_string(i_28, "-S")))
          {
            if(!(match_string(i_28, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm v_1 (ATerm t)
      {
        t = term_y_9;
        t = set_config_0(t);
        t = term_z_9;
        return(t);
      }
      ATerm w_1 (ATerm t)
      {
        t = term_a_10;
        return(t);
      }
      t = Option_3(t, u_1, v_1, w_1);
      ;
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              ATerm j_28 = NULL;
              j_28 = t;
              e_28 :
              if(!(match_string(j_28, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              ATerm m_28 = NULL;
              ATerm i_10;
              i_10 = t;
              {
                ATerm k_28 = NULL;
                ATerm l_28 = NULL;
                t = string_to_int_0(t);
                {
                  l_28 = t;
                  if(((k_28 != NULL) && (k_28 != l_28)))
                    _fail(l_28);
                  else
                    k_28 = l_28;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_4, not_null(k_28));
                  t = set_config_0(t);
                }
              }
              t = i_10;
              {
                ATerm n_28 = NULL;
                n_28 = t;
                if(((m_28 != NULL) && (m_28 != n_28)))
                  _fail(n_28);
                else
                  m_28 = n_28;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(m_28));
              }
              return(t);
            }
            ATerm z_1 (ATerm t)
            {
              t = term_j_10;
              return(t);
            }
            t = ArgOption_3(t, x_1, y_1, z_1);
            ;
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            {
              ATerm a_2 (ATerm t)
              {
                ATerm o_28 = NULL;
                o_28 = t;
                h_28 :
                if(!(match_string(o_28, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm b_2 (ATerm t)
              {
                t = term_l_10;
                t = set_config_0(t);
                t = term_p_10;
                return(t);
              }
              ATerm c_2 (ATerm t)
              {
                t = term_r_10;
                return(t);
              }
              t = Option_3(t, a_2, b_2, c_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm t_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = t_10;
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm u_28 = NULL;
    u_28 = t;
    r_28 :
    if(!(match_string(u_28, "-o")))
      {
        if(!(match_string(u_28, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm b_29 = NULL;
    ATerm z_10;
    z_10 = t;
    {
      ATerm z_28 = NULL;
      ATerm a_29 = NULL;
      a_29 = t;
      if(((z_28 != NULL) && (z_28 != a_29)))
        _fail(a_29);
      else
        z_28 = a_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_11, not_null(z_28));
        t = set_config_0(t);
      }
    }
    t = z_10;
    {
      ATerm c_29 = NULL;
      c_29 = t;
      if(((b_29 != NULL) && (b_29 != c_29)))
        _fail(c_29);
      else
        b_29 = c_29;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_29));
    }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_b_11;
    return(t);
  }
  t = ArgOption_3(t, d_2, e_2, f_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm c_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = c_11;
      {
        ATerm g_2 (ATerm t)
        {
          ATerm g_29 = NULL;
          g_29 = t;
          f_29 :
          if(!(match_string(g_29, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          t = term_g_11;
          t = set_config_0(t);
          t = term_h_11;
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          t = term_i_11;
          return(t);
        }
        t = Option_3(t, g_2, h_2, i_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  m_29 = t;
  k_29 :
  if(match_string(m_29, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(m_29) == AT_LIST) && !(ATisEmpty(m_29))))
        {
          n_29 = ATgetFirst((ATermList) m_29);
          o_29 = (ATerm) ATgetNext((ATermList) m_29);
          l_29 :
          if(((ATgetType(o_29) == AT_LIST) && !(ATisEmpty(o_29))))
            {
              p_29 = ATgetFirst((ATermList) o_29);
              q_29 = (ATerm) ATgetNext((ATermList) o_29);
              {
                ATerm u_29 = NULL;
                ATerm j_11;
                j_11 = t;
                {
                  t = not_null(n_29);
                  t = l_0(t);
                }
                t = j_11;
                {
                  ATerm v_29 = NULL;
                  t = not_null(p_29);
                  {
                    t = m_0(t);
                    {
                      v_29 = t;
                      if(((u_29 != NULL) && (u_29 != v_29)))
                        _fail(v_29);
                      else
                        u_29 = v_29;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_29)), not_null(u_29));
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
  ATerm j_2 (ATerm t)
  {
    ATerm c_30 = NULL;
    c_30 = t;
    z_29 :
    if(!(match_string(c_30, "-i")))
      {
        if(!(match_string(c_30, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm f_30 = NULL;
    ATerm n_11;
    n_11 = t;
    {
      ATerm d_30 = NULL;
      ATerm e_30 = NULL;
      e_30 = t;
      if(((d_30 != NULL) && (d_30 != e_30)))
        _fail(e_30);
      else
        d_30 = e_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_11, not_null(d_30));
        t = set_config_0(t);
      }
    }
    t = n_11;
    {
      ATerm g_30 = NULL;
      g_30 = t;
      if(((f_30 != NULL) && (f_30 != g_30)))
        _fail(g_30);
      else
        f_30 = g_30;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_30));
    }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_s_11;
    return(t);
  }
  t = ArgOption_3(t, j_2, k_2, l_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  t = SSL_table_destroy(not_null(m_30));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  t = SSL_exit(not_null(q_30));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
  u_30 = t;
  t_30 :
  if(((ATgetType(u_30) == AT_LIST) && ATisEmpty(u_30)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(u_30) == AT_LIST) && !(ATisEmpty(u_30))))
        {
          v_30 = ATgetFirst((ATermList) u_30);
          w_30 = (ATerm) ATgetNext((ATermList) u_30);
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
  ATerm z_11;
  z_11 = t;
  {
    ATerm z_30 = NULL;
    ATerm c_31 = NULL;
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        {
          ATerm a_31 = NULL;
          ATerm b_31 = NULL;
          b_31 = t;
          if(((a_31 != NULL) && (a_31 != b_31)))
            _fail(b_31);
          else
            a_31 = b_31;
          t = (ATerm) ATinsert(ATempty, not_null(a_31));
        }
      }
    {
      c_31 = t;
      if(((z_30 != NULL) && (z_30 != c_31)))
        _fail(c_31);
      else
        z_30 = c_31;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_5, not_null(z_30));
      t = printnl_0(t);
    }
  }
  t = z_11;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_12), term_q_12), term_p_12), term_o_12), term_l_12), term_h_12), term_g_12), term_c_12);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  n_31 = t;
  k_31 :
  if(((ATgetType(n_31) == AT_LIST) && !(ATisEmpty(n_31))))
    {
      l_31 = ATgetFirst((ATermList) n_31);
      m_31 = (ATerm) ATgetNext((ATermList) n_31);
      {
        ATerm q_31 = NULL;
        t = not_null(m_31);
        {
          ATerm s_12;
          s_12 = t;
          {
            ATerm r_31 = NULL,t_31 = NULL,v_31 = NULL;
            ATerm b_13;
            b_13 = t;
            {
              ATerm s_31 = NULL;
              t = j_0(t);
              {
                s_31 = t;
                if(((r_31 != NULL) && (r_31 != s_31)))
                  _fail(s_31);
                else
                  r_31 = s_31;
              }
            }
            t = b_13;
            {
              ATerm u_31 = NULL;
              t = not_null(l_31);
              {
                t = i_0(t);
                {
                  u_31 = t;
                  if(((t_31 != NULL) && (t_31 != u_31)))
                    _fail(u_31);
                  else
                    t_31 = u_31;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_31)), not_null(t_31));
                {
                  v_31 = t;
                  if(((q_31 != NULL) && (q_31 != v_31)))
                    _fail(v_31);
                  else
                    q_31 = v_31;
                }
              }
            }
          }
          t = s_12;
          {
            ATerm m_2 (ATerm t)
            {
              t = not_null(q_31);
              return(t);
            }
            t = reverse_acc_2(t, i_0, m_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_31) == AT_LIST) && ATisEmpty(n_31)))
        {
          {
            t = term_s_3;
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
  ATerm n_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, n_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm c_32 = NULL;
  ATerm d_32 = NULL;
  t = term_s_3;
  {
    t = g_0(t);
    {
      d_32 = t;
      if(((c_32 != NULL) && (c_32 != d_32)))
        _fail(d_32);
      else
        c_32 = d_32;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_13), not_null(c_32)), term_c_13);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_62 (ATerm))
{
  ATerm k_32 = NULL,l_32 = NULL;
  k_32 = t;
  j_32 :
  if(match_cons(k_32, sym_Program_1))
    {
      l_32 = ATgetArgument(k_32, 0);
      {
        ATerm o_32 = NULL,q_32 = NULL;
        ATerm p_32 = NULL;
        t = SSLgetAnnotations(not_null(k_32));
        {
          p_32 = t;
          if(((o_32 != NULL) && (o_32 != p_32)))
            _fail(p_32);
          else
            o_32 = p_32;
        }
        {
          t = not_null(l_32);
          {
            ATerm s_32 = NULL;
            t = b_62(t);
            {
              q_32 = t;
              {
                ATerm t_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(q_32)), not_null(o_32));
                {
                  t_32 = t;
                  if(((s_32 != NULL) && (s_32 != t_32)))
                    _fail(t_32);
                  else
                    s_32 = t_32;
                }
                t = not_null(s_32);
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
ATerm default_system_usage_0 (ATerm t)
{
  ATerm c_33 = NULL;
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_33 = NULL;
      t = term_w_3;
      {
        t = get_config_0(t);
        {
          d_33 = t;
          if(((c_33 != NULL) && (c_33 != d_33)))
            _fail(d_33);
          else
            c_33 = d_33;
        }
      }
      ;
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm p_2 (ATerm t)
          {
            ATerm e_33 = NULL;
            e_33 = t;
            if(((c_33 != NULL) && (c_33 != e_33)))
              _fail(e_33);
            else
              c_33 = e_33;
            return(t);
          }
          t = Program_1(t, p_2);
          return(t);
        }
        t = option_defined_1(t, o_2);
      }
    }
  {
    ATerm q_2 (ATerm t)
    {
      ATerm r_2 (ATerm t)
      {
        t = not_null(c_33);
        return(t);
      }
      t = short_description_1(t, r_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, q_2);
    {
      t = term_g_13;
      {
        t = echo_0(t);
        {
          t = term_k_13;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_2 (ATerm t)
                {
                  ATerm f_33 = NULL;
                  ATerm g_33 = NULL;
                  g_33 = t;
                  if(((f_33 != NULL) && (f_33 != g_33)))
                    _fail(g_33);
                  else
                    f_33 = g_33;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_33)), term_p_13);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_2);
                {
                  ATerm v_2 (ATerm t)
                  {
                    ATerm h_33 = NULL;
                    ATerm i_33 = NULL;
                    ATerm w_2 (ATerm t)
                    {
                      t = not_null(c_33);
                      return(t);
                    }
                    t = long_description_1(t, w_2);
                    {
                      i_33 = t;
                      if(((h_33 != NULL) && (h_33 != i_33)))
                        _fail(i_33);
                      else
                        h_33 = i_33;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(h_33)), term_q_13);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, v_2);
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
ATerm override_system_usage_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  p_33 = t;
  o_33 :
  if(match_cons(p_33, sym__2))
    {
      q_33 = ATgetArgument(p_33, 0);
      r_33 = ATgetArgument(p_33, 1);
      {
        ATerm z_13;
        z_13 = t;
        t = SSL_printnl(not_null(q_33), not_null(r_33));
        t = z_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_62 (ATerm))
{
  ATerm a_34 = NULL,b_34 = NULL;
  a_34 = t;
  z_33 :
  if(match_cons(a_34, sym_Undefined_1))
    {
      b_34 = ATgetArgument(a_34, 0);
      {
        ATerm e_34 = NULL,g_34 = NULL;
        ATerm f_34 = NULL;
        t = SSLgetAnnotations(not_null(a_34));
        {
          f_34 = t;
          if(((e_34 != NULL) && (e_34 != f_34)))
            _fail(f_34);
          else
            e_34 = f_34;
        }
        {
          t = not_null(b_34);
          {
            ATerm i_34 = NULL;
            t = c_62(t);
            {
              g_34 = t;
              {
                ATerm j_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_34)), not_null(e_34));
                {
                  j_34 = t;
                  if(((i_34 != NULL) && (i_34 != j_34)))
                    _fail(j_34);
                  else
                    i_34 = j_34;
                }
                t = not_null(i_34);
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
ATerm fetch_1 (ATerm t, ATerm o_71 (ATerm))
{
  ATerm o_34 (ATerm t)
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, o_71, _id);
        ;
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        t = Cons_2(t, _id, o_34);
      }
    return(t);
  }
  t = o_34(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_88 (ATerm))
{
  t = fetch_1(t, p_88);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_34 = NULL;
  t_34 = t;
  s_34 :
  if(match_cons(t_34, sym_Help_0))
    {
      ATerm v_34 = NULL,x_34 = NULL;
      ATerm c_14;
      c_14 = t;
      {
        ATerm w_34 = NULL;
        t = SSLgetAnnotations(not_null(t_34));
        {
          w_34 = t;
          if(((v_34 != NULL) && (v_34 != w_34)))
            _fail(w_34);
          else
            v_34 = w_34;
        }
      }
      t = c_14;
      {
        ATerm y_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_34));
        {
          y_34 = t;
          if(((x_34 != NULL) && (x_34 != y_34)))
            _fail(y_34);
          else
            x_34 = y_34;
        }
        t = not_null(x_34);
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
  ATerm d_35 = NULL;
  d_35 = t;
  t = SSL_implode_string(not_null(d_35));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        ATerm i_35 = NULL,j_35 = NULL,n_35 = NULL;
        i_35 = t;
        h_35 :
        if(((ATgetType(i_35) == AT_LIST) && !(ATisEmpty(i_35))))
          {
            j_35 = ATgetFirst((ATermList) i_35);
            n_35 = (ATerm) ATgetNext((ATermList) i_35);
            {
              t = not_null(j_35);
              {
                ATerm x_2 (ATerm t)
                {
                  t = not_null(n_35);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_2);
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
  ATerm z_35 = NULL;
  ATerm b_36 = NULL;
  z_35 = t;
  {
    ATerm c_36 = NULL;
    ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
    t = not_null(z_35);
    {
      c_36 = t;
      {
        t = SSL_explode_term(not_null(c_36));
        {
          e_36 = t;
          x_35 :
          if(match_cons(e_36, sym__2))
            {
              f_36 = ATgetArgument(e_36, 0);
              g_36 = ATgetArgument(e_36, 1);
              y_35 :
              if(match_string(f_36, ""))
                {
                  if(((b_36 != NULL) && (b_36 != g_36)))
                    _fail(g_36);
                  else
                    b_36 = g_36;
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
      t = not_null(b_36);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm u_71 (ATerm))
{
  ATerm k_36 (ATerm t)
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_36);
        ;
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        {
          t = Nil_0(t);
          t = u_71(t);
        }
      }
    return(t);
  }
  t = k_36(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  m_36 :
  if(match_cons(n_36, sym__2))
    {
      o_36 = ATgetArgument(n_36, 0);
      p_36 = ATgetArgument(n_36, 1);
      {
        t = not_null(o_36);
        {
          ATerm y_2 (ATerm t)
          {
            t = not_null(p_36);
            return(t);
          }
          t = at_end_1(t, y_2);
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
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_36 = NULL;
  u_36 = t;
  t = SSL_explode_string(not_null(u_36));
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
ATerm debug_1 (ATerm t, ATerm b_83 (ATerm))
{
  ATerm l_14;
  l_14 = t;
  {
    ATerm z_36 = NULL,b_37 = NULL;
    ATerm q_14;
    q_14 = t;
    {
      ATerm a_37 = NULL;
      t = b_83(t);
      {
        a_37 = t;
        if(((z_36 != NULL) && (z_36 != a_37)))
          _fail(a_37);
        else
          z_36 = a_37;
      }
    }
    t = q_14;
    {
      ATerm c_37 = NULL;
      c_37 = t;
      if(((b_37 != NULL) && (b_37 != c_37)))
        _fail(c_37);
      else
        b_37 = c_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_37)), not_null(z_36)));
        t = printnl_0(t);
      }
    }
  }
  t = l_14;
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_71 (ATerm))
{
  ATerm h_37 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        t = Cons_2(t, f_71, h_37);
      }
    return(t);
  }
  t = h_37(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_37 = NULL;
  j_37 = t;
  t = SSL_is_string(not_null(j_37));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
      {
        ATerm v_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, z_2);
            ;
            LocalPopChoice(w_14);
          }
        else
          {
            t = v_14;
            {
              ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
              v_37 = t;
              u_37 :
              if(match_cons(v_37, sym_Path_1))
                {
                  w_37 = ATgetArgument(v_37, 0);
                  t = not_null(w_37);
                }
              else
                {
                  if(match_cons(v_37, sym_Var_1))
                    {
                      w_37 = ATgetArgument(v_37, 0);
                      {
                        t = not_null(w_37);
                        {
                          ATerm x_14 = t;
                          int c_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(c_15);
                            }
                          else
                            {
                              t = x_14;
                              {
                                ATerm a_3 (ATerm t)
                                {
                                  t = term_d_15;
                                  return(t);
                                }
                                t = debug_1(t, a_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_37, sym_Prefix_2))
                        {
                          w_37 = ATgetArgument(v_37, 0);
                          x_37 = ATgetArgument(v_37, 1);
                          {
                            ATerm c_38 = NULL,e_38 = NULL;
                            ATerm e_15;
                            e_15 = t;
                            {
                              ATerm d_38 = NULL;
                              t = not_null(w_37);
                              {
                                t = eval_config_0(t);
                                {
                                  d_38 = t;
                                  if(((c_38 != NULL) && (c_38 != d_38)))
                                    _fail(d_38);
                                  else
                                    c_38 = d_38;
                                }
                              }
                            }
                            t = e_15;
                            {
                              ATerm f_38 = NULL;
                              t = not_null(x_37);
                              {
                                t = eval_config_0(t);
                                {
                                  f_38 = t;
                                  if(((e_38 != NULL) && (e_38 != f_38)))
                                    _fail(f_38);
                                  else
                                    e_38 = f_38;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_38), not_null(e_38));
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
  ATerm p_38 = NULL;
  p_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_15, not_null(p_38));
    {
      t = table_get_0(t);
      {
        ATerm b_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm k_15;
            k_15 = t;
            {
              ATerm s_38 = NULL;
              ATerm t_38 = NULL;
              t_38 = t;
              if(((s_38 != NULL) && (s_38 != t_38)))
                _fail(t_38);
              else
                s_38 = t_38;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_i_15, not_null(p_38), not_null(s_38));
                t = table_put_0(t);
              }
            }
            t = k_15;
          }
          return(t);
        }
        t = try_1(t, b_3);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm u_63 (ATerm))
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_63(t);
      ;
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
  y_38 = t;
  x_38 :
  if(match_cons(y_38, sym__2))
    {
      z_38 = ATgetArgument(y_38, 0);
      a_39 = ATgetArgument(y_38, 1);
      t = SSL_table_get(not_null(z_38), not_null(a_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
  h_39 = t;
  g_39 :
  if(match_cons(h_39, sym__3))
    {
      i_39 = ATgetArgument(h_39, 0);
      j_39 = ATgetArgument(h_39, 1);
      k_39 = ATgetArgument(h_39, 2);
      {
        ATerm p_15;
        p_15 = t;
        {
          ATerm o_39 = NULL;
          ATerm p_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_39), not_null(j_39));
          {
            ATerm q_15 = t;
            int r_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(r_15);
              }
            else
              {
                t = q_15;
                t = (ATerm) ATempty;
              }
            {
              p_39 = t;
              if(((o_39 != NULL) && (o_39 != p_39)))
                _fail(p_39);
              else
                o_39 = p_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_39), not_null(j_39), (ATerm) ATinsert(CheckATermList(not_null(o_39)), not_null(k_39)));
            t = table_put_0(t);
          }
        }
        t = p_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_89 (ATerm))
{
  ATerm t_39 = NULL;
  ATerm u_39 = NULL;
  t = term_s_3;
  {
    t = u_89(t);
    {
      u_39 = t;
      if(((t_39 != NULL) && (t_39 != u_39)))
        _fail(u_39);
      else
        t_39 = u_39;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_13, term_i_13, not_null(t_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  a_40 = t;
  z_39 :
  if(match_string(a_40, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(a_40) == AT_LIST) && !(ATisEmpty(a_40))))
        {
          b_40 = ATgetFirst((ATermList) a_40);
          c_40 = (ATerm) ATgetNext((ATermList) a_40);
          {
            ATerm f_40 = NULL;
            ATerm t_15;
            t_15 = t;
            {
              t = not_null(b_40);
              t = a_0(t);
            }
            t = t_15;
            {
              ATerm g_40 = NULL;
              t = term_s_3;
              {
                t = b_0(t);
                {
                  g_40 = t;
                  if(((f_40 != NULL) && (f_40 != g_40)))
                    _fail(g_40);
                  else
                    f_40 = g_40;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_40)), not_null(f_40));
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
  ATerm c_3 (ATerm t)
  {
    ATerm l_40 = NULL;
    l_40 = t;
    k_40 :
    if(!(match_string(l_40, "--help")))
      {
        if(!(match_string(l_40, "-h")))
          {
            if(!(match_string(l_40, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_z_15;
    {
      t = set_config_0(t);
      t = term_a_16;
    }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_b_16;
    return(t);
  }
  t = Option_3(t, c_3, d_3, e_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_40 = NULL,v_40 = NULL,w_40 = NULL;
  o_40 = t;
  n_40 :
  if(((ATgetType(o_40) == AT_LIST) && !(ATisEmpty(o_40))))
    {
      v_40 = ATgetFirst((ATermList) o_40);
      w_40 = (ATerm) ATgetNext((ATermList) o_40);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_40)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_40)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_56 (ATerm), ATerm f_56 (ATerm))
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
  g_41 = t;
  f_41 :
  if(((ATgetType(g_41) == AT_LIST) && !(ATisEmpty(g_41))))
    {
      h_41 = ATgetFirst((ATermList) g_41);
      i_41 = (ATerm) ATgetNext((ATermList) g_41);
      {
        ATerm m_41 = NULL,o_41 = NULL;
        ATerm n_41 = NULL;
        t = SSLgetAnnotations(not_null(g_41));
        {
          n_41 = t;
          if(((m_41 != NULL) && (m_41 != n_41)))
            _fail(n_41);
          else
            m_41 = n_41;
        }
        {
          t = not_null(h_41);
          {
            ATerm q_41 = NULL;
            t = e_56(t);
            {
              o_41 = t;
              {
                t = not_null(i_41);
                {
                  ATerm s_41 = NULL;
                  t = f_56(t);
                  {
                    q_41 = t;
                    {
                      ATerm t_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(q_41)), not_null(o_41)), not_null(m_41));
                      {
                        t_41 = t;
                        if(((s_41 != NULL) && (s_41 != t_41)))
                          _fail(t_41);
                        else
                          s_41 = t_41;
                      }
                      t = not_null(s_41);
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
  ATerm d_42 = NULL;
  d_42 = t;
  c_42 :
  if(((ATgetType(d_42) == AT_LIST) && ATisEmpty(d_42)))
    {
      {
        ATerm f_42 = NULL,h_42 = NULL;
        ATerm c_16;
        c_16 = t;
        {
          ATerm g_42 = NULL;
          t = SSLgetAnnotations(not_null(d_42));
          {
            g_42 = t;
            if(((f_42 != NULL) && (f_42 != g_42)))
              _fail(g_42);
            else
              f_42 = g_42;
          }
        }
        t = c_16;
        {
          ATerm i_42 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_42));
          {
            i_42 = t;
            if(((h_42 != NULL) && (h_42 != i_42)))
              _fail(i_42);
            else
              h_42 = i_42;
          }
          t = not_null(h_42);
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
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
  o_42 = t;
  n_42 :
  if(match_cons(o_42, sym__2))
    {
      p_42 = ATgetArgument(o_42, 0);
      q_42 = ATgetArgument(o_42, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_15, not_null(p_42), not_null(q_42));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_89 (ATerm))
{
  ATerm g_16;
  g_16 = t;
  {
    ATerm f_3 (ATerm t)
    {
      t = term_l_16;
      t = s_89(t);
      return(t);
    }
    t = try_1(t, f_3);
  }
  t = g_16;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm y_42 = NULL;
      ATerm m_16;
      m_16 = t;
      {
        ATerm w_42 = NULL;
        ATerm x_42 = NULL;
        x_42 = t;
        if(((w_42 != NULL) && (w_42 != x_42)))
          _fail(x_42);
        else
          w_42 = x_42;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_3, not_null(w_42));
          t = set_config_0(t);
        }
      }
      t = m_16;
      {
        ATerm z_42 = NULL;
        z_42 = t;
        if(((y_42 != NULL) && (y_42 != z_42)))
          _fail(z_42);
        else
          y_42 = z_42;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_42));
      }
      return(t);
    }
    ATerm i_3 (ATerm t)
    {
      ATerm n_16 = t;
      int o_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_16 = t;
          int r_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(r_16);
            }
          else
            {
              t = p_16;
              {
                t = s_89(t);
                t = Cons_2(t, _id, i_3);
              }
            }
          ;
          LocalPopChoice(o_16);
        }
      else
        {
          t = n_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_3, i_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
  ATerm u_16;
  u_16 = t;
  {
    ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL;
    i_43 = t;
    e_43 :
    if(match_cons(i_43, sym__3))
      {
        j_43 = ATgetArgument(i_43, 0);
        k_43 = ATgetArgument(i_43, 1);
        l_43 = ATgetArgument(i_43, 2);
        {
          if(((f_43 != NULL) && (f_43 != j_43)))
            _fail(j_43);
          else
            f_43 = j_43;
          {
            if(((g_43 != NULL) && (g_43 != k_43)))
              _fail(k_43);
            else
              g_43 = k_43;
            {
              if(((h_43 != NULL) && (h_43 != l_43)))
                _fail(l_43);
              else
                h_43 = l_43;
              t = SSL_table_put(not_null(f_43), not_null(g_43), not_null(h_43));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_89 (ATerm))
{
  ATerm o_43 = NULL;
  ATerm v_16;
  v_16 = t;
  {
    t = term_w_16;
    t = table_put_0(t);
  }
  t = v_16;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm x_16 = t;
      int y_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_89(t);
          ;
          LocalPopChoice(y_16);
        }
      else
        {
          t = x_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_3);
    {
      ATerm k_3 (ATerm t)
      {
        ATerm z_16 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_17;
            e_17 = t;
            {
              ATerm i_17 = t;
              int l_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_y_15;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(l_17);
                }
              else
                {
                  t = i_17;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = e_17;
            {
              t = system_usage_0(t);
              {
                t = term_h_4;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(d_17);
          }
        else
          {
            t = z_16;
            {
              ATerm l_3 (ATerm t)
              {
                ATerm m_3 (ATerm t)
                {
                  ATerm p_43 = NULL;
                  p_43 = t;
                  if(((o_43 != NULL) && (o_43 != p_43)))
                    _fail(p_43);
                  else
                    o_43 = p_43;
                  return(t);
                }
                t = Undefined_1(t, m_3);
                return(t);
              }
              t = option_defined_1(t, l_3);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_43)), term_m_17));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_v_3;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_3);
      {
        ATerm n_17;
        n_17 = t;
        {
          t = term_h_13;
          t = table_destroy_0(t);
        }
        t = n_17;
      }
    }
  }
  return(t);
}
ATerm Vis_amb_0 (ATerm t)
{
  t = parse_options_1(t, io_options_0);
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_file_0(t);
        {
          ATerm n_3 (ATerm t)
          {
            t = _2(t, _id, visamb_0);
            return(t);
          }
          t = apply_strategy_1(t, n_3);
          {
            t = output_file_0(t);
            t = report_success_0(t);
          }
        }
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
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
