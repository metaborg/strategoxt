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
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Verbose_0;
Symbol sym_PP_Table_1;
Symbol sym_PP_Entry_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_selector_2;
Symbol sym_Arg_1;
Symbol sym_S_1;
Symbol sym_KW_0;
Symbol sym_FBOX_2;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_SOpt_2;
Symbol sym_VS_0;
Symbol sym_lit_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_alt_2;
Symbol sym_char_class_1;
Symbol sym_sort_1;
Symbol sym_cons_1;
Symbol sym_prod_3;
Symbol sym_Undefined_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_label_2;
Symbol sym_cons_1;
Symbol sym_prod_3;
Symbol sym_prod_fun_4;
Symbol sym_context_free_syntax_1;
Symbol sym_bracket_symbol_1;
Symbol sym_Strict_0;
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
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
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_context_free_syntax_1 = ATmakeSymbol("context-free-syntax", 1, ATfalse);
  ATprotectSymbol(sym_context_free_syntax_1);
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_i_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_u_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_h_23;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_d_22;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_i_18;
ATerm term_u_17;
ATerm term_k_17;
ATerm term_f_17;
ATerm term_h_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_a_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_n_12;
ATerm term_g_12;
ATerm term_v_11;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_p_9;
ATerm term_j_9;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_k_7;
ATerm term_s_6;
ATerm term_h_3;
void init_constant_terms (void)
{
  ATprotect(&(term_h_3));
  term_h_3 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_Arg_1, term_m_8);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_SOpt_2, term_x_9, term_z_9);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_lit_1, term_g_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_lit_1, term_s_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_a_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_r_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_h_3);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym__2, term_s_6, term_k_7);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_d_21, term_h_3);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_h_3);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym__2, term_m_20, term_h_3);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__2, term_q_23, term_h_3);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
ATerm Option_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm k_1 (ATerm b_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm topdown_1_0 (ATerm x_82 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm e_89 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm filter_1_0 (ATerm u_95 (ATerm), ATerm);
ATerm flat_alt_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm argument_list_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm symbol2abox_1_0 (ATerm x_80 (ATerm), ATerm);
ATerm _2_0 (ATerm k_65 (ATerm), ATerm l_65 (ATerm), ATerm);
ATerm pair_0_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm d_1 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm make_0_0 (ATerm);
ATerm NonTerminal_0_0 (ATerm);
ATerm o_23 (ATerm y_21, ATerm z_21, ATerm c_22, ATerm);
ATerm number_node_1_0 (ATerm a_81 (ATerm), ATerm);
ATerm o_1 (ATerm);
ATerm number_nonterminals_0_0 (ATerm);
ATerm symbols2pp_entries_1_0 (ATerm w_80 (ATerm), ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm generate_pp_entries_0_0 (ATerm);
ATerm at_last_1_0 (ATerm p_89 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm unquote_chars_1_0 (ATerm s_97 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm collect_p__1_0 (ATerm c_110 (ATerm), ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm ppgenerate_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm p_5 (ATerm m_45, ATerm n_45, ATerm);
ATerm q_5 (ATerm o_110 (ATerm), ATerm x_64, ATerm);
ATerm InOutId_2_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm v_5 (ATerm n_50, ATerm o_50, ATerm);
ATerm w_5 (ATerm b_54, ATerm c_54, ATerm);
ATerm y_5 (ATerm f_101 (ATerm), ATerm a_452, ATerm f_54, ATerm);
ATerm x_5 (ATerm x_53, ATerm y_53, ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm d_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm h_104 (ATerm), ATerm);
ATerm f_40 (ATerm z_39, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm z_5 (ATerm d_54, ATerm);
ATerm a_6 (ATerm p_50, ATerm q_50, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_41 (ATerm p_40, ATerm);
ATerm r_41 (ATerm t_40, ATerm u_40, ATerm v_40, ATerm);
ATerm s_41 (ATerm d_41, ATerm e_41, ATerm f_41, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm y_88 (ATerm), ATerm);
ATerm u_5 (ATerm d_45, ATerm e_45, ATerm);
ATerm debug_1_0 (ATerm d_101 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm q_102 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm n_3 (ATerm);
ATerm q_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm g_6 (ATerm e_55, ATerm f_55, ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm j_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm b_6 (ATerm c_60, ATerm d_60, ATerm b_60, ATerm);
ATerm ArgOption_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_6 (ATerm n_47, ATerm o_47, ATerm);
ATerm foldr_2_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm p_102 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm need_help_1_0 (ATerm f_105 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_88 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm e_6 (ATerm t_61, ATerm u_61, ATerm);
ATerm z_4 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm j_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm r_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm i_107 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm d_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm parse_options_1_0 (ATerm h_107 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm);
ATerm l_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm iowrap_3_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm io_idwrap_3_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Option_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm o_0 = NULL,q_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_0 = NULL,t_0 = NULL,u_0 = NULL;
      t = term_h_3;
      t = l_0(t);
      r_0 = t;
      t = term_s_6;
      t_0 = t;
      t = term_k_7;
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_6, term_k_7, r_0);
      t = b_6(t_0, u_0, r_0, t);
      _fail(t);
    }
  else
    {
      ATerm x_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_0 = ATgetFirst((ATermList) t);
          q_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_0;
      t = j_0(t);
      t = term_h_3;
      t = k_0(t);
      x_0 = t;
      t = (ATerm) ATinsert(CheckATermList(q_0), x_0);
    }
  return(t);
}
ATerm k_1 (ATerm b_1, ATerm t)
{
  ATerm c_1 = NULL;
  t = SSL_explode_term(b_1);
  if(match_cons(t, sym__2))
    {
      ATerm l_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_1 = NULL,g_1 = NULL,h_1 = NULL;
  if(((h_1 != NULL) && (h_1 != t)))
    _fail(t);
  else
    h_1 = t;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
      {
        ATerm m_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 (ATerm t)
            {
              t = not_null(g_1);
              return(t);
            }
            t = not_null(e_1);
            t = at_end_1_0(b_0, t);
            ;
            LocalPopChoice(q_7);
          }
        else
          {
            t = m_7;
            t = k_1(not_null(h_1), t);
          }
      }
    }
  else
    {
      t = k_1(not_null(h_1), t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    t = topdown_1_0(x_82, t);
    return(t);
  }
  t = x_82(t);
  t = SRTS_all(f_0, t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_89 (ATerm), ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL;
    h_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_2 = ATgetFirst((ATermList) t);
        g_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_0 = NULL,a_1 = NULL,n_0 = NULL;
          t = SSLgetAnnotations(h_2);
          s_0 = t;
          t = g_2;
          t = i_2(t);
          a_1 = t;
          t = (ATerm) ATinsert(CheckATermList(a_1), f_2);
          n_0 = t;
          t = SSLsetAnnotations(n_0, s_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_2;
        t = e_89(t);
      }
    return(t);
  }
  t = i_2(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_2 = NULL,w_2 = NULL,x_2 = NULL;
  r_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_2;
    }
  else
    {
      ATerm m_0 (ATerm t)
      {
        t = not_null(x_2);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_2 != NULL) && (w_2 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_2 = ATgetFirst((ATermList) t);
          if(((x_2 != NULL) && (x_2 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(w_2);
      t = at_end_1_0(m_0, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm u_95 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,b_4 = NULL,c_4 = NULL;
  z_3 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_3;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_4 = ATgetFirst((ATermList) t);
          c_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_2 = NULL,e_2 = NULL,j_2 = NULL,m_1 = NULL;
            t = SSLgetAnnotations(z_3);
            a_2 = t;
            t = b_4;
            t = u_95(t);
            e_2 = t;
            t = c_4;
            t = filter_1_0(u_95, t);
            j_2 = t;
            t = (ATerm) ATinsert(CheckATermList(j_2), e_2);
            m_1 = t;
            t = SSLsetAnnotations(m_1, a_2);
            ;
            LocalPopChoice(v_7);
          }
        else
          {
            t = t_7;
            t = c_4;
            t = filter_1_0(u_95, t);
          }
      }
    }
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm b_5 = NULL,e_5 = NULL,h_5 = NULL,i_5 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      h_5 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5;
  if(match_cons(t, sym_alt_2))
    {
      b_5 = ATgetArgument(t, 0);
      e_5 = ATgetArgument(t, 1);
      {
        ATerm w_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_6 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, b_5, e_5);
            t = flat_alt_0_0(t);
            f_6 = t;
            t = (ATerm) ATinsert(CheckATermList(f_6), h_5);
            ;
            LocalPopChoice(x_7);
          }
        else
          {
            t = w_7;
            t = (ATerm) ATinsert(ATinsert(ATempty, i_5), h_5);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, i_5), h_5);
    }
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm q_4 = NULL;
  q_4 = t;
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_4;
        {
          ATerm a_8 = t;
          if((PushChoice() == 0))
            {
              ATerm s_2 = NULL;
              s_2 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = s_2;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm f_8 = ATgetFirst((ATermList) t);
                      ATerm g_8 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = s_2;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_8;
            }
          t = (ATerm) ATinsert(ATempty, q_4);
        }
        ;
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        t = q_4;
      }
  }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(p_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm a_5 = NULL,c_5 = NULL;
  c_5 = t;
  if(match_cons(t, sym_Arg_1))
    {
      a_5 = ATgetArgument(t, 0);
      {
        ATerm i_8 = t;
        int l_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_6 = NULL,t_1 = NULL;
            t = SSLgetAnnotations(c_5);
            p_6 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, a_5);
            t_1 = t;
            t = SSLsetAnnotations(t_1, p_6);
            t = term_n_8;
            ;
            LocalPopChoice(l_8);
          }
        else
          {
            t = i_8;
            t = c_5;
          }
      }
    }
  else
    {
      t = c_5;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm n_7 = NULL,p_7 = NULL,r_7 = NULL,s_7 = NULL,u_7 = NULL;
  ATerm a_12 (ATerm t)
  {
    ATerm d_12 (ATerm h_10, ATerm i_10, ATerm j_10, ATerm k_10, ATerm t)
    {
      ATerm n_10 = NULL,o_10 = NULL,s_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
      t = SSL_explode_term(not_null(k_10));
      if(match_cons(t, sym__2))
        {
          if(((v_10 != NULL) && (v_10 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_10 = ATgetArgument(t, 0);
          if(((w_10 != NULL) && (w_10 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            w_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_10), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, not_null(j_10), not_null(v_10))));
      t = conc_0_0(t);
      if(((n_10 != NULL) && (n_10 != t)))
        _fail(t);
      else
        n_10 = t;
      t = not_null(w_10);
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      if(((x_10 != NULL) && (x_10 != t)))
        _fail(t);
      else
        x_10 = t;
      t = make_0_0(t);
      if(((o_10 != NULL) && (o_10 != t)))
        _fail(t);
      else
        o_10 = t;
      t = not_null(x_10);
      {
        ATerm v_0 (ATerm t)
        {
          ATerm a_11 = NULL;
          a_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(h_10), not_null(n_10)), a_11);
          t = a_12(t);
          return(t);
        }
        t = map_1_0(v_0, t);
        t = concat_0_0(t);
        if(((s_10 != NULL) && (s_10 != t)))
          _fail(t);
        else
          s_10 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(s_10)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(h_10), not_null(n_10)), not_null(o_10)));
      }
      return(t);
    }
    ATerm b_11 = NULL,d_11 = NULL,e_11 = NULL,i_11 = NULL,l_11 = NULL,m_11 = NULL,o_11 = NULL,p_11 = NULL,s_11 = NULL,t_11 = NULL;
    if(match_cons(t, sym__2))
      {
        l_11 = ATgetArgument(t, 0);
        p_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = p_11;
    {
      ATerm o_8 = t;
      int p_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm r_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(p_8);
          t = (ATerm) ATempty;
        }
      else
        {
          t = o_8;
          if(match_cons(t, sym__2))
            {
              s_11 = ATgetArgument(t, 0);
              t_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_11;
          {
            ATerm s_8 = t;
            int t_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_sort_1))
                  {
                    ATerm u_8 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                LocalPopChoice(t_8);
                t = l_11;
                {
                  ATerm v_8 = t;
                  int w_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym__2))
                        {
                          ATerm x_8 = ATgetArgument(t, 0);
                          ATerm y_8 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(w_8);
                      t = (ATerm) ATempty;
                    }
                  else
                    {
                      t = v_8;
                      t = (ATerm) ATempty;
                    }
                }
              }
            else
              {
                t = s_8;
                {
                  ATerm z_8 = t;
                  int a_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_char_class_1))
                        {
                          ATerm c_9 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(a_9);
                      t = l_11;
                      {
                        ATerm d_9 = t;
                        int e_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym__2))
                              {
                                ATerm f_9 = ATgetArgument(t, 0);
                                ATerm g_9 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(e_9);
                            t = (ATerm) ATempty;
                          }
                        else
                          {
                            t = d_9;
                            t = (ATerm) ATempty;
                          }
                      }
                    }
                  else
                    {
                      t = z_8;
                      if(match_cons(t, sym_alt_2))
                        {
                          i_11 = ATgetArgument(t, 0);
                          b_11 = ATgetArgument(t, 1);
                          t = l_11;
                          if(match_cons(t, sym__2))
                            {
                              m_11 = ATgetArgument(t, 0);
                              o_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = b_11;
                          if(match_cons(t, sym_alt_2))
                            {
                              d_11 = ATgetArgument(t, 0);
                              e_11 = ATgetArgument(t, 1);
                              {
                                ATerm h_9 = t;
                                int i_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL,m_4 = NULL,s_4 = NULL,t_4 = NULL,u_1 = NULL;
                                    t = m_11;
                                    if(((n_7 != NULL) && (n_7 != t)))
                                      _fail(t);
                                    else
                                      n_7 = t;
                                    t = o_11;
                                    if(((p_7 != NULL) && (p_7 != t)))
                                      _fail(t);
                                    else
                                      p_7 = t;
                                    t = s_11;
                                    if(((r_7 != NULL) && (r_7 != t)))
                                      _fail(t);
                                    else
                                      r_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_alt_2, i_11, (ATerm) ATmakeAppl(sym_alt_2, d_11, e_11));
                                    t = flat_alt_0_0(t);
                                    f_4 = t;
                                    t = term_j_9;
                                    h_4 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, term_j_9, f_4);
                                    t = p_5(h_4, f_4, t);
                                    g_4 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_11, o_11), (ATerm) ATmakeAppl(sym__2, s_11, g_4));
                                    t = a_12(t);
                                    t_4 = t;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        k_4 = ATgetFirst((ATermList) t);
                                        m_4 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(t_4);
                                    i_4 = t;
                                    t = k_4;
                                    t = topdown_1_0(w_0, t);
                                    s_4 = t;
                                    t = (ATerm) ATinsert(CheckATermList(m_4), s_4);
                                    u_1 = t;
                                    t = SSLsetAnnotations(u_1, i_4);
                                    ;
                                    LocalPopChoice(i_9);
                                  }
                                else
                                  {
                                    t = h_9;
                                    t = d_12(m_11, o_11, s_11, t_11, t);
                                  }
                              }
                            }
                          else
                            {
                              t = d_12(m_11, o_11, s_11, t_11, t);
                            }
                        }
                      else
                        {
                          if(match_cons(t, sym_bracket_symbol_1))
                            {
                              i_11 = ATgetArgument(t, 0);
                              t = l_11;
                              if(match_cons(t, sym__2))
                                {
                                  m_11 = ATgetArgument(t, 0);
                                  o_11 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              {
                                ATerm m_9 = t;
                                int n_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_11, o_11), (ATerm) ATmakeAppl(sym__2, s_11, i_11));
                                    t = a_12(t);
                                    ;
                                    LocalPopChoice(n_9);
                                  }
                                else
                                  {
                                    t = m_9;
                                    t = d_12(m_11, o_11, s_11, t_11, t);
                                  }
                              }
                            }
                          else
                            {
                              t = l_11;
                              if(match_cons(t, sym__2))
                                {
                                  m_11 = ATgetArgument(t, 0);
                                  o_11 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = d_12(m_11, o_11, s_11, t_11, t);
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
  if(((u_7 != NULL) && (u_7 != t)))
    _fail(t);
  else
    u_7 = t;
  t = term_h_3;
  t = x_80(t);
  if(((s_7 != NULL) && (s_7 != t)))
    _fail(t);
  else
    s_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_7), not_null(u_7));
  t = a_12(t);
  return(t);
}
ATerm _2_0 (ATerm k_65 (ATerm), ATerm l_65 (ATerm), ATerm t)
{
  ATerm f_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,y_1 = NULL;
  l_12 = t;
  if(match_cons(t, sym__2))
    {
      h_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_12);
  f_12 = t;
  t = h_12;
  t = k_65(t);
  j_12 = t;
  t = i_12;
  t = l_65(t);
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_12, k_12);
  y_1 = t;
  t = SSLsetAnnotations(y_1, f_12);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,u_12 = NULL;
  o_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_12;
    }
  else
    {
      ATerm d_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_12 = ATgetFirst((ATermList) t);
          q_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_12 = ATgetFirst((ATermList) t);
          u_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_12;
      t = pair_0_0(t);
      d_13 = t;
      t = (ATerm) ATinsert(CheckATermList(d_13), (ATerm) ATmakeAppl(sym__2, p_12, r_12));
    }
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,i_16 = NULL,b_3 = NULL;
  d_16 = t;
  if(match_cons(t, sym_lit_1))
    {
      c_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_16);
  b_16 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, c_16);
  b_3 = t;
  t = SSLsetAnnotations(b_3, b_16);
  if(match_cons(t, sym_lit_1))
    {
      i_16 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_9, (ATerm) ATmakeAppl(sym_S_1, i_16));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          i_16 = ATgetArgument(t, 0);
          {
            ATerm q_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, i_16);
    }
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,r_17 = NULL,t_17 = NULL,x_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,p_3 = NULL,f_20 = NULL,e_18 = NULL,l_3 = NULL;
  c_18 = t;
  if(match_cons(t, sym__2))
    {
      t_17 = ATgetArgument(t, 0);
      x_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_18);
  r_17 = t;
  t = t_17;
  if(match_cons(t, sym_lit_1))
    {
      b_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_17);
  a_18 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, b_18);
  l_3 = t;
  t = SSLsetAnnotations(l_3, a_18);
  if(match_cons(t, sym_lit_1))
    {
      e_18 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_9, (ATerm) ATmakeAppl(sym_S_1, e_18));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          e_18 = ATgetArgument(t, 0);
          {
            ATerm s_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, e_18);
    }
  n_17 = t;
  t = x_17;
  t = _2_0(_id, l_1, t);
  if(match_cons(t, sym_lit_1))
    {
      f_20 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_9, (ATerm) ATmakeAppl(sym_S_1, f_20));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          f_20 = ATgetArgument(t, 0);
          {
            ATerm v_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, f_20);
    }
  o_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_17, o_17);
  p_3 = t;
  t = SSLsetAnnotations(p_3, r_17);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_a_10), (ATerm) ATinsert(ATinsert(ATempty, o_17), n_17));
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL;
  w_19 = t;
  if(match_cons(t, sym_iter_1))
    {
      x_19 = ATgetArgument(t, 0);
      {
        ATerm e_8 = NULL,m_3 = NULL;
        t = SSLgetAnnotations(w_19);
        e_8 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, x_19);
        m_3 = t;
        t = SSLsetAnnotations(m_3, e_8);
      }
    }
  else
    {
      ATerm q_8 = NULL,o_3 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          x_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_19);
      q_8 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, x_19);
      o_3 = t;
      t = SSLsetAnnotations(o_3, q_8);
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm v_20 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      v_20 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_9, (ATerm) ATmakeAppl(sym_S_1, v_20));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          v_20 = ATgetArgument(t, 0);
          {
            ATerm b_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, v_20);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,c_3 = NULL,w_15 = NULL,a_3 = NULL,p_15 = NULL,q_15 = NULL;
      t = reverse_acc_2_0(_id, y_0, t);
      q_14 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_14 = ATgetFirst((ATermList) t);
          j_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_14);
      g_14 = t;
      t = h_14;
      if(match_cons(t, sym__2))
        {
          n_14 = ATgetArgument(t, 0);
          o_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_14);
      m_14 = t;
      t = o_14;
      if(match_cons(t, sym_iter_1))
        {
          p_15 = ATgetArgument(t, 0);
          {
            ATerm x_6 = NULL,c_2 = NULL;
            t = SSLgetAnnotations(o_14);
            x_6 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, p_15);
            c_2 = t;
            t = SSLsetAnnotations(c_2, x_6);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              p_15 = ATgetArgument(t, 0);
              {
                ATerm b_7 = NULL,m_2 = NULL;
                t = SSLgetAnnotations(o_14);
                b_7 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, p_15);
                m_2 = t;
                t = SSLsetAnnotations(m_2, b_7);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  p_15 = ATgetArgument(t, 0);
                  q_15 = ATgetArgument(t, 1);
                  {
                    ATerm g_7 = NULL,y_2 = NULL;
                    t = SSLgetAnnotations(o_14);
                    g_7 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, p_15, q_15);
                    y_2 = t;
                    t = SSLsetAnnotations(y_2, g_7);
                  }
                }
              else
                {
                  ATerm o_7 = NULL,z_2 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      p_15 = ATgetArgument(t, 0);
                      q_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_14);
                  o_7 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, p_15, q_15);
                  z_2 = t;
                  t = SSLsetAnnotations(z_2, o_7);
                }
            }
        }
      p_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_14, p_14);
      a_3 = t;
      t = SSLsetAnnotations(a_3, m_14);
      if(match_cons(t, sym_lit_1))
        {
          w_15 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_9, (ATerm) ATmakeAppl(sym_S_1, w_15));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              w_15 = ATgetArgument(t, 0);
              {
                ATerm e_10 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, w_15);
        }
      k_14 = t;
      t = j_14;
      t = map_1_0(z_0, t);
      l_14 = t;
      t = (ATerm) ATinsert(CheckATermList(l_14), k_14);
      c_3 = t;
      t = SSLsetAnnotations(c_3, g_14);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_14 = ATgetFirst((ATermList) t);
          a_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_10 = t;
        if((PushChoice() == 0))
          {
            ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,t_16 = NULL,e_3 = NULL;
            t_16 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_16 = ATgetFirst((ATermList) t);
                r_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_16);
            p_16 = t;
            t = r_16;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_16), q_16);
            e_3 = t;
            t = SSLsetAnnotations(e_3, p_16);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_10;
          }
        t = a_14;
        t = reverse_acc_2_0(_id, d_1, t);
        f_14 = t;
        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, b_14), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, f_14)));
      }
      ;
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      {
        ATerm l_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,c_17 = NULL,f_3 = NULL,g_17 = NULL;
            t = reverse_acc_2_0(_id, f_1, t);
            c_17 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_16 = ATgetFirst((ATermList) t);
                x_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_17);
            v_16 = t;
            t = w_16;
            if(match_cons(t, sym_lit_1))
              {
                g_17 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_9, (ATerm) ATmakeAppl(sym_S_1, g_17));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    g_17 = ATgetArgument(t, 0);
                    {
                      ATerm t_10 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, g_17);
              }
            e_14 = t;
            t = x_16;
            {
              ATerm u_10 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = u_10;
                }
              t = reverse_acc_2_0(_id, i_1, t);
              c_14 = t;
              t = (ATerm) ATinsert(CheckATermList(c_14), e_14);
              f_3 = t;
              t = SSLsetAnnotations(f_3, v_16);
              t = c_14;
              t = pair_0_0(t);
              t = map_1_0(j_1, t);
              d_14 = t;
              t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_14), d_14));
            }
            ;
            LocalPopChoice(m_10);
          }
        else
          {
            t = l_10;
            t = map_1_0(n_1, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm y_10 = t;
  if((PushChoice() == 0))
    {
      ATerm o_21 = NULL,p_21 = NULL,s_21 = NULL,w_4 = NULL;
      s_21 = t;
      if(match_cons(t, sym_lit_1))
        {
          p_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_21);
      o_21 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, p_21);
      w_4 = t;
      t = SSLsetAnnotations(w_4, o_21);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_10;
    }
  return(t);
}
ATerm o_23 (ATerm y_21, ATerm z_21, ATerm c_22, ATerm t)
{
  ATerm k_22 = NULL,y_4 = NULL;
  t = SSLgetAnnotations(y_21);
  k_22 = t;
  t = c_22;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_21, c_22);
  y_4 = t;
  t = SSLsetAnnotations(y_4, k_22);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm a_81 (ATerm), ATerm t)
{
  ATerm x_21 = NULL;
  ATerm k_23 (ATerm t)
  {
    ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
    q_22 = t;
    if(match_cons(t, sym__2))
      {
        r_22 = ATgetArgument(t, 0);
        s_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = s_22;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_22 = ATgetFirst((ATermList) t);
        u_22 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_10 = t;
          int g_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_23(q_22, r_22, s_22, t);
              ;
              LocalPopChoice(g_11);
            }
          else
            {
              t = z_10;
              {
                ATerm h_11 = t;
                int j_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_23 = NULL,d_23 = NULL,e_23 = NULL;
                    t = t_22;
                    t = a_81(t);
                    t = term_m_8;
                    e_23 = t;
                    t = (ATerm) ATmakeAppl(sym__2, r_22, term_m_8);
                    t = c_6(r_22, e_23, t);
                    d_23 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_23, u_22);
                    t = k_23(t);
                    a_23 = t;
                    t = (ATerm) ATinsert(CheckATermList(a_23), (ATerm) ATmakeAppl(sym__2, r_22, t_22));
                    ;
                    LocalPopChoice(j_11);
                  }
                else
                  {
                    t = h_11;
                    {
                      ATerm j_23 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, r_22, u_22);
                      t = k_23(t);
                      j_23 = t;
                      t = (ATerm) ATinsert(CheckATermList(j_23), t_22);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = o_23(q_22, r_22, s_22, t);
      }
    return(t);
  }
  if(((x_21 != NULL) && (x_21 != t)))
    _fail(t);
  else
    x_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, not_null(x_21));
  t = k_23(t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm t_23 = NULL,w_23 = NULL;
  w_23 = t;
  {
    ATerm n_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm u_11 = ATgetArgument(t, 0);
            t_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(r_11);
        t = t_23;
      }
    else
      {
        t = n_11;
        t = w_23;
      }
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(o_1, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,h_24 = NULL;
  t = number_nonterminals_0_0(t);
  if(((h_24 != NULL) && (h_24 != t)))
    _fail(t);
  else
    h_24 = t;
  t = make_0_0(t);
  if(((d_24 != NULL) && (d_24 != t)))
    _fail(t);
  else
    d_24 = t;
  t = not_null(h_24);
  {
    ATerm p_1 (ATerm t)
    {
      ATerm q_1 (ATerm t)
      {
        ATerm i_24 = NULL;
        t = term_h_3;
        t = w_80(t);
        i_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_24, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(q_1, t);
      return(t);
    }
    t = map_1_0(p_1, t);
    t = concat_0_0(t);
    if(((e_24 != NULL) && (e_24 != t)))
      _fail(t);
    else
      e_24 = t;
    t = term_h_3;
    t = w_80(t);
    if(((f_24 != NULL) && (f_24 != t)))
      _fail(t);
    else
      f_24 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(e_24)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(f_24)), not_null(d_24)));
  }
  return(t);
}
ATerm v_1 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_v_11;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm s_24 = NULL;
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_24 = NULL,a_25 = NULL,e_25 = NULL,f_25 = NULL;
      ATerm y_11 = t;
      int z_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              if(((z_24 != NULL) && (z_24 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_24 = ATgetArgument(t, 0);
              {
                ATerm e_12 = ATgetArgument(t, 1);
              }
              if(((e_25 != NULL) && (e_25 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                e_25 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(z_11);
          {
            ATerm s_1 (ATerm t)
            {
              t = not_null(s_24);
              return(t);
            }
            t = not_null(e_25);
            {
              ATerm r_1 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((s_24 != NULL) && (s_24 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      s_24 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(r_1, t);
              t = not_null(z_24);
              t = symbols2pp_entries_1_0(s_1, t);
            }
          }
        }
      else
        {
          t = y_11;
          {
            ATerm g_25 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                if(((z_24 != NULL) && (z_24 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_24 = ATgetArgument(t, 0);
                if(((a_25 != NULL) && (a_25 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  a_25 = ATgetArgument(t, 1);
                if(((e_25 != NULL) && (e_25 != ATgetArgument(t, 2))))
                  _fail(ATgetArgument(t, 2));
                else
                  e_25 = ATgetArgument(t, 2);
                if(((f_25 != NULL) && (f_25 != ATgetArgument(t, 3))))
                  _fail(ATgetArgument(t, 3));
                else
                  f_25 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_12)), not_null(a_25)), (ATerm) ATinsert(ATinsert(ATempty, term_n_12), (ATerm) ATmakeAppl(sym_lit_1, not_null(z_24))));
            t = concat_0_0(t);
            g_25 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, g_25, not_null(e_25), not_null(f_25));
            t = generate_pp_entries_0_0(t);
          }
        }
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      {
        ATerm w_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_12 = t;
            if((PushChoice() == 0))
              {
                ATerm h_25 = NULL;
                h_25 = t;
                t = term_a_13;
                t = get_options_0_0(t);
                t = oncetd_1_0(v_1, t);
                t = h_25;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = z_12;
              }
            t = debug_1_0(w_1, t);
            ;
            LocalPopChoice(x_12);
          }
        else
          {
            t = w_12;
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm at_last_1_0 (ATerm p_89 (ATerm), ATerm t)
{
  ATerm p_27 (ATerm t)
  {
    ATerm i_27 = NULL,j_27 = NULL,o_27 = NULL;
    i_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_27 = ATgetFirst((ATermList) t);
        o_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_13 = t;
      int c_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_9 = NULL,k_5 = NULL;
          t = SSLgetAnnotations(i_27);
          b_9 = t;
          t = o_27;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(o_27), j_27);
          k_5 = t;
          t = SSLsetAnnotations(k_5, b_9);
          t = p_89(t);
          ;
          LocalPopChoice(c_13);
        }
      else
        {
          t = b_13;
          {
            ATerm o_9 = NULL,w_9 = NULL,o_5 = NULL;
            t = SSLgetAnnotations(i_27);
            o_9 = t;
            t = o_27;
            t = p_27(t);
            w_9 = t;
            t = (ATerm) ATinsert(CheckATermList(w_9), j_27);
            o_5 = t;
            t = SSLsetAnnotations(o_5, o_9);
          }
        }
    }
    return(t);
  }
  t = p_27(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm g_29 = NULL,j_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_29 = ATgetFirst((ATermList) t);
      j_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_29;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_29;
    }
  else
    {
      t = j_29;
      t = last_0_0(t);
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm h_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_13 = ATgetFirst((ATermList) t);
      h_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_30;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm b_30 = NULL,e_30 = NULL,f_30 = NULL;
  b_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_30 = ATgetFirst((ATermList) t);
      {
        ATerm g_13 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_30;
  t = s_97(t);
  t = b_30;
  t = last_0_0(t);
  t = s_97(t);
  t = b_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_13 = ATgetFirst((ATermList) t);
      e_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_30;
  t = at_last_1_0(x_1, t);
  return(t);
}
ATerm foldr_3_0 (ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_30;
      t = t_94(t);
    }
  else
    {
      ATerm q_30 = NULL,r_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_30 = ATgetFirst((ATermList) t);
          l_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_30;
      t = v_94(t);
      q_30 = t;
      t = l_30;
      t = foldr_3_0(t_94, u_94, v_94, t);
      r_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_30, r_30);
      t = u_94(t);
    }
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm c_110 (ATerm), ATerm t)
{
  ATerm w_30 (ATerm t)
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_30 = NULL;
        t = c_110(t);
        v_30 = t;
        t = (ATerm) ATinsert(ATempty, v_30);
        ;
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        {
          ATerm f_10 = NULL,p_10 = NULL;
          p_10 = t;
          t = SSL_explode_term(p_10);
          if(match_cons(t, sym__2))
            {
              ATerm m_13 = ATgetArgument(t, 0);
              f_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_10;
          t = foldr_3_0(z_1, conc_0_0, w_30, t);
        }
      }
    return(t);
  }
  t = w_30(t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm u_31 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      u_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_31;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm h_33 = NULL,o_33 = NULL;
  o_33 = t;
  if(match_cons(t, sym_cons_1))
    {
      h_33 = ATgetArgument(t, 0);
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_12 = NULL,m_12 = NULL,b_8 = NULL,v_12 = NULL;
            t = SSLgetAnnotations(o_33);
            c_12 = t;
            t = SSL_explode_string(h_33);
            t = unquote_chars_1_0(k_2, t);
            v_12 = t;
            t = SSL_implode_string(v_12);
            m_12 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, m_12);
            b_8 = t;
            t = SSLsetAnnotations(b_8, c_12);
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            t = o_33;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          h_33 = ATgetArgument(t, 0);
          {
            ATerm p_13 = t;
            int r_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_13 = NULL,h_13 = NULL,c_8 = NULL,l_13 = NULL;
                t = SSLgetAnnotations(o_33);
                f_13 = t;
                t = SSL_explode_string(h_33);
                t = unquote_chars_1_0(l_2, t);
                l_13 = t;
                t = SSL_implode_string(l_13);
                h_13 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, h_13);
                c_8 = t;
                t = SSLsetAnnotations(c_8, f_13);
                ;
                LocalPopChoice(r_13);
              }
            else
              {
                t = p_13;
                t = o_33;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_sort_1))
            {
              h_33 = ATgetArgument(t, 0);
              {
                ATerm t_13 = t;
                int u_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_13 = NULL,s_13 = NULL,d_8 = NULL,w_13 = NULL;
                    t = SSLgetAnnotations(o_33);
                    q_13 = t;
                    t = SSL_explode_string(h_33);
                    t = unquote_chars_1_0(n_2, t);
                    w_13 = t;
                    t = SSL_implode_string(w_13);
                    s_13 = t;
                    t = (ATerm) ATmakeAppl(sym_sort_1, s_13);
                    d_8 = t;
                    t = SSLsetAnnotations(d_8, q_13);
                    ;
                    LocalPopChoice(u_13);
                  }
                else
                  {
                    t = t_13;
                    t = o_33;
                  }
              }
            }
          else
            {
              t = o_33;
            }
        }
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm v_13 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_13;
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
  m_35 = t;
  if(match_cons(t, sym_Arg_1))
    {
      l_35 = ATgetArgument(t, 0);
      {
        ATerm x_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_15 = NULL,r_15 = NULL,h_8 = NULL;
            t = SSLgetAnnotations(m_35);
            j_15 = t;
            t = SSL_int_to_string(l_35);
            r_15 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, r_15);
            h_8 = t;
            t = SSLsetAnnotations(h_8, j_15);
            ;
            LocalPopChoice(z_13);
          }
        else
          {
            t = x_13;
            t = m_35;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_selector_2))
        {
          l_35 = ATgetArgument(t, 0);
          k_35 = ATgetArgument(t, 1);
          {
            ATerm r_14 = t;
            int s_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_16 = NULL,o_16 = NULL,j_8 = NULL;
                t = SSLgetAnnotations(m_35);
                g_16 = t;
                t = SSL_int_to_string(l_35);
                o_16 = t;
                t = (ATerm) ATmakeAppl(sym_selector_2, o_16, k_35);
                j_8 = t;
                t = SSLsetAnnotations(j_8, g_16);
                ;
                LocalPopChoice(s_14);
              }
            else
              {
                t = r_14;
                t = m_35;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_S_1))
            {
              l_35 = ATgetArgument(t, 0);
              {
                ATerm u_14 = t;
                int v_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_17 = NULL,p_17 = NULL,k_8 = NULL,w_17 = NULL,f_18 = NULL;
                    t = SSLgetAnnotations(m_35);
                    h_17 = t;
                    t = SSL_explode_string(l_35);
                    f_18 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_18), term_w_14), (ATerm) ATinsert(ATempty, term_w_14));
                    t = conc_0_0(t);
                    w_17 = t;
                    t = SSL_implode_string(w_17);
                    p_17 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, p_17);
                    k_8 = t;
                    t = SSLsetAnnotations(k_8, h_17);
                    ;
                    LocalPopChoice(v_14);
                  }
                else
                  {
                    t = u_14;
                    t = m_35;
                  }
              }
            }
          else
            {
              t = m_35;
            }
        }
    }
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm t_31 = NULL;
  t = collect_p__1_0(b_2, t);
  t = concat_0_0(t);
  t = topdown_1_0(d_2, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(o_2, t);
  t = concat_0_0(t);
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, t_31);
  t = topdown_1_0(p_2, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm x_35 (ATerm t)
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_84(t);
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = SRTS_one(x_35, t);
      }
    return(t);
  }
  t = x_35(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL;
  t = term_z_14;
  y_35 = t;
  t = term_a_15;
  z_35 = t;
  t = term_b_15;
  t = e_6(y_35, z_35, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
      t = term_e_15;
      t = get_options_0_0(t);
      t = oncetd_1_0(q_2, t);
      t = term_f_15;
      b_36 = t;
      t = (ATerm) ATinsert(ATempty, term_g_15);
      c_36 = t;
      t = SSL_printnl(b_36, c_36);
      t = term_m_8;
      a_36 = t;
      t = SSL_exit(a_36);
      t = (ATerm) ATinsert(ATempty, term_g_15);
      ;
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      {
        ATerm e_36 = NULL,f_36 = NULL;
        t = term_f_15;
        e_36 = t;
        t = (ATerm) ATinsert(ATempty, term_h_15);
        f_36 = t;
        t = SSL_printnl(e_36, f_36);
        t = (ATerm) ATinsert(ATempty, term_h_15);
      }
    }
  return(t);
}
ATerm p_5 (ATerm m_45, ATerm n_45, ATerm t)
{
  t = SSL_mkterm(m_45, n_45);
  return(t);
}
ATerm q_5 (ATerm o_110 (ATerm), ATerm x_64, ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL;
  t = term_h_3;
  t = o_110(t);
  j_36 = t;
  t = (ATerm) ATinsert(ATempty, x_64);
  k_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_36, (ATerm) ATinsert(ATempty, x_64));
  t = p_5(j_36, k_36, t);
  return(t);
}
ATerm InOutId_2_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
  e_37 = t;
  if(match_cons(t, sym__2))
    {
      f_37 = ATgetArgument(t, 0);
      g_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_18 = NULL,w_18 = NULL,k_9 = NULL;
        t = SSLgetAnnotations(e_37);
        w_18 = t;
        t = f_37;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("out-type", 0, ATtrue)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_37, g_37);
        k_9 = t;
        t = SSLsetAnnotations(k_9, w_18);
        if(match_cons(t, sym__2))
          {
            ATerm l_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_15) != ATmakeSymbol("out-type", 0, ATtrue)))
              _fail(t);
            v_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_5(i_0, v_18, t);
        ;
        LocalPopChoice(k_15);
      }
    else
      {
        t = i_15;
        {
          ATerm i_19 = NULL,j_19 = NULL,z_19 = NULL,a_20 = NULL,l_9 = NULL;
          t = SSLgetAnnotations(e_37);
          j_19 = t;
          t = f_37;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("in-type", 0, ATtrue)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, f_37, g_37);
          l_9 = t;
          t = SSLsetAnnotations(l_9, j_19);
          if(match_cons(t, sym__2))
            {
              ATerm m_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) m_15) != ATmakeSymbol("in-type", 0, ATtrue)))
                _fail(t);
              i_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSL_explode_term(i_19);
          if(match_cons(t, sym__2))
            {
              a_20 = ATgetArgument(t, 0);
              {
                ATerm n_15 = ATgetArgument(t, 1);
                if(((ATgetType(n_15) == AT_LIST) && !(ATisEmpty(n_15))))
                  {
                    z_19 = ATgetFirst((ATermList) n_15);
                    {
                      ATerm o_15 = (ATerm) ATgetNext((ATermList) n_15);
                      if(((ATgetType(o_15) != AT_LIST) || !(ATisEmpty(o_15))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = a_20;
          {
            ATerm s_15 = t;
            int t_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = h_0(t);
                ;
                LocalPopChoice(t_15);
              }
            else
              {
                t = s_15;
                t = type_failure_0_0(t);
              }
            t = z_19;
          }
        }
      }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
  j_37 = t;
  t = term_h_3;
  t = whoami_0_0(t);
  k_37 = t;
  t = term_f_15;
  m_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_15), k_37), term_u_15);
  n_37 = t;
  t = SSL_printnl(m_37, n_37);
  t = term_m_8;
  l_37 = t;
  t = SSL_exit(l_37);
  t = j_37;
  return(t);
}
ATerm v_5 (ATerm n_50, ATerm o_50, ATerm t)
{
  ATerm o_37 = NULL;
  t = SSL_fputc(n_50, o_50);
  o_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_37);
  return(t);
}
ATerm w_5 (ATerm b_54, ATerm c_54, ATerm t)
{
  ATerm p_37 = NULL;
  t = SSL_write_term_to_stream_text(b_54, c_54);
  p_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_37);
  return(t);
}
ATerm y_5 (ATerm f_101 (ATerm), ATerm a_452, ATerm f_54, ATerm t)
{
  ATerm q_37 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_452, term_x_15);
  t = open_stream_0_0(t);
  q_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_37, f_54);
  t = f_101(t);
  t = fclose_0_0(t);
  t = f_54;
  return(t);
}
ATerm x_5 (ATerm x_53, ATerm y_53, ATerm t)
{
  ATerm r_37 = NULL;
  t = SSL_write_term_to_stream_baf(x_53, y_53);
  r_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_37);
  return(t);
}
ATerm u_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_15 = ATgetArgument(t, 0);
      if(match_cons(y_15, sym_Stream_1))
        {
          t_20 = ATgetArgument(y_15, 0);
        }
      else
        _fail(t);
      u_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(t_20, u_20, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm r_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_15 = ATgetArgument(t, 0);
      if(match_cons(z_15, sym_Stream_1))
        {
          v_21 = ATgetArgument(z_15, 0);
        }
      else
        _fail(t);
      w_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(v_21, w_21, t);
  r_21 = t;
  t = term_a_16;
  t_21 = t;
  t = r_21;
  if(match_cons(t, sym_Stream_1))
    {
      u_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_16, r_21);
  t = v_5(t_21, u_21, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,j_39 = NULL,k_39 = NULL,t_9 = NULL,r_9 = NULL;
  if(((w_37 != NULL) && (w_37 != t)))
    _fail(t);
  else
    w_37 = t;
  if(match_cons(t, sym__2))
    {
      if(((d_38 != NULL) && (d_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_38 = ATgetArgument(t, 0);
      if(((e_38 != NULL) && (e_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(w_37));
  if(((c_38 != NULL) && (c_38 != t)))
    _fail(t);
  else
    c_38 = t;
  t = not_null(d_38);
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((v_37 != NULL) && (v_37 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(t_2, t);
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        t = term_h_16;
        if(((v_37 != NULL) && (v_37 != t)))
          _fail(t);
        else
          v_37 = t;
      }
    if(((f_38 != NULL) && (f_38 != t)))
      _fail(t);
    else
      f_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_38), not_null(e_38));
    if(((r_9 != NULL) && (r_9 != t)))
      _fail(t);
    else
      r_9 = t;
    t = SSLsetAnnotations(not_null(r_9), not_null(c_38));
    t = not_null(w_37);
    if(match_cons(t, sym__2))
      {
        if(((y_37 != NULL) && (y_37 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          y_37 = ATgetArgument(t, 0);
        if(((z_37 != NULL) && (z_37 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          z_37 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(w_37));
    if(((x_37 != NULL) && (x_37 != t)))
      _fail(t);
    else
      x_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_37), (ATerm) ATmakeAppl(sym__2, not_null(v_37), not_null(z_37)));
    if(((t_9 != NULL) && (t_9 != t)))
      _fail(t);
    else
      t_9 = t;
    t = SSLsetAnnotations(not_null(t_9), not_null(x_37));
    if(((b_38 != NULL) && (b_38 != t)))
      _fail(t);
    else
      b_38 = t;
    if(match_cons(t, sym__2))
      {
        if(((j_39 != NULL) && (j_39 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          j_39 = ATgetArgument(t, 0);
        if(((k_39 != NULL) && (k_39 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          k_39 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm j_16 = t;
      int k_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_20 = NULL,l_20 = NULL,n_20 = NULL,p_20 = NULL,r_20 = NULL,u_9 = NULL;
          t = SSLgetAnnotations(not_null(b_38));
          i_20 = t;
          t = not_null(j_39);
          t = fetch_1_0(u_2, t);
          l_20 = t;
          t = not_null(k_39);
          if(match_cons(t, sym__2))
            {
              p_20 = ATgetArgument(t, 0);
              r_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_5(v_2, p_20, r_20, t);
          n_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_20, n_20);
          u_9 = t;
          t = SSLsetAnnotations(u_9, i_20);
          ;
          LocalPopChoice(k_16);
        }
      else
        {
          t = j_16;
          {
            ATerm c_21 = NULL,k_21 = NULL,n_21 = NULL,q_21 = NULL,y_9 = NULL;
            t = SSLgetAnnotations(not_null(b_38));
            c_21 = t;
            t = not_null(k_39);
            if(match_cons(t, sym__2))
              {
                n_21 = ATgetArgument(t, 0);
                q_21 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_5(d_3, n_21, q_21, t);
            k_21 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_39), k_21);
            y_9 = t;
            t = SSLsetAnnotations(y_9, c_21);
          }
        }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm h_104 (ATerm), ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL;
  r_39 = t;
  t = dtime_0_0(t);
  t = r_39;
  t = h_104(t);
  q_39 = t;
  t = dtime_0_0(t);
  n_39 = t;
  t = q_39;
  if(match_cons(t, sym__2))
    {
      o_39 = ATgetArgument(t, 0);
      p_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_39), (ATerm) ATmakeAppl(sym_Runtime_1, n_39)), p_39);
  return(t);
}
ATerm f_40 (ATerm z_39, ATerm t)
{
  t = SSL_fclose(z_39);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL;
  d_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_40 = ATgetArgument(t, 0);
      {
        ATerm l_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_40);
            ;
            LocalPopChoice(m_16);
          }
        else
          {
            t = l_16;
            t = f_40(d_40, t);
          }
      }
    }
  else
    {
      t = f_40(d_40, t);
    }
  return(t);
}
ATerm z_5 (ATerm d_54, ATerm t)
{
  t = SSL_read_term_from_stream(d_54);
  return(t);
}
ATerm a_6 (ATerm p_50, ATerm q_50, ATerm t)
{
  ATerm g_40 = NULL;
  t = SSL_fopen(p_50, q_50);
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_40);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_40 = NULL;
  t = SSL_stdin_stream();
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_40);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_40 = NULL;
  t = SSL_stdout_stream();
  i_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_40);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_40 = NULL;
  t = SSL_stderr_stream();
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_40);
  return(t);
}
ATerm q_41 (ATerm p_40, ATerm t)
{
  ATerm q_40 = NULL;
  t = SSL_explode_term(p_40);
  if(match_cons(t, sym__2))
    {
      ATerm n_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_16 = ATgetArgument(t, 1);
        if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
          {
            q_40 = ATgetFirst((ATermList) s_16);
            {
              ATerm u_16 = (ATerm) ATgetNext((ATermList) s_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_40;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_40;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_40;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_40;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm r_41 (ATerm t_40, ATerm u_40, ATerm v_40, ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,b_41 = NULL,q_10 = NULL;
  t = SSLgetAnnotations(v_40);
  y_40 = t;
  t = t_40;
  if(match_cons(t, sym_Path_1))
    {
      b_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_41, u_40);
  q_10 = t;
  t = SSLsetAnnotations(q_10, y_40);
  if(match_cons(t, sym__2))
    {
      w_40 = ATgetArgument(t, 0);
      x_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(w_40, x_40, t);
  return(t);
}
ATerm s_41 (ATerm d_41, ATerm e_41, ATerm f_41, ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,l_41 = NULL,r_10 = NULL;
  t = SSLgetAnnotations(f_41);
  i_41 = t;
  t = SSL_is_string(d_41);
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_41, e_41);
  r_10 = t;
  t = SSLsetAnnotations(r_10, i_41);
  if(match_cons(t, sym__2))
    {
      g_41 = ATgetArgument(t, 0);
      h_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(g_41, h_41, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_16 = ATgetArgument(t, 0);
      ATerm z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  n_41 = t;
  if(match_cons(t, sym__2))
    {
      o_41 = ATgetArgument(t, 0);
      p_41 = ATgetArgument(t, 1);
      {
        ATerm a_17 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_41(n_41, t);
            ;
            LocalPopChoice(b_17);
          }
        else
          {
            t = a_17;
            {
              ATerm d_17 = t;
              int e_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_41(o_41, p_41, n_41, t);
                  ;
                  LocalPopChoice(e_17);
                }
              else
                {
                  t = d_17;
                  t = s_41(o_41, p_41, n_41, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_41(n_41, t);
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL;
  ATerm i_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_41 = NULL;
      w_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_41, term_k_17);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      t = debug_1_0(g_3, t);
      _fail(t);
    }
  u_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(v_41, t);
  t_41 = t;
  t = u_41;
  t = fclose_0_0(t);
  t = t_41;
  return(t);
}
ATerm fetch_1_0 (ATerm y_88 (ATerm), ATerm t)
{
  ATerm u_42 (ATerm t)
  {
    ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
    r_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_42 = ATgetFirst((ATermList) t);
        t_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_17 = t;
      int m_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_23 = NULL,m_23 = NULL,c_11 = NULL;
          t = SSLgetAnnotations(r_42);
          c_23 = t;
          t = s_42;
          t = y_88(t);
          m_23 = t;
          t = (ATerm) ATinsert(CheckATermList(t_42), m_23);
          c_11 = t;
          t = SSLsetAnnotations(c_11, c_23);
          ;
          LocalPopChoice(m_17);
        }
      else
        {
          t = l_17;
          {
            ATerm a_24 = NULL,j_24 = NULL,f_11 = NULL;
            t = SSLgetAnnotations(r_42);
            a_24 = t;
            t = t_42;
            t = u_42(t);
            j_24 = t;
            t = (ATerm) ATinsert(CheckATermList(j_24), s_42);
            f_11 = t;
            t = SSLsetAnnotations(f_11, a_24);
          }
        }
    }
    return(t);
  }
  t = u_42(t);
  return(t);
}
ATerm u_5 (ATerm d_45, ATerm e_45, ATerm t)
{
  t = SSL_strcat(d_45, e_45);
  return(t);
}
ATerm debug_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
  x_42 = t;
  t = d_101(t);
  y_42 = t;
  t = term_f_15;
  z_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_42), y_42);
  a_43 = t;
  t = SSL_printnl(z_42, a_43);
  t = x_42;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm q_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = q_17;
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_u_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_43 = NULL;
      h_43 = t;
      t = SSL_is_string(h_43);
      ;
      LocalPopChoice(y_17);
    }
  else
    {
      t = v_17;
      {
        ATerm z_17 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_3, t);
            ;
            LocalPopChoice(d_18);
          }
        else
          {
            t = z_17;
            {
              ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
              n_43 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_43 = ATgetArgument(t, 0);
                  t = o_43;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_43 = ATgetArgument(t, 0);
                      t = o_43;
                      {
                        ATerm g_18 = t;
                        int h_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(h_18);
                          }
                        else
                          {
                            t = g_18;
                            t = debug_1_0(j_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_43 = NULL,u_43 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_43 = ATgetArgument(t, 0);
                          p_43 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_43;
                      t = eval_config_0_0(t);
                      t_43 = t;
                      t = p_43;
                      t = eval_config_0_0(t);
                      u_43 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_43, u_43);
                      t = u_5(t_43, u_43, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL;
  y_43 = t;
  t = term_i_18;
  z_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_18, y_43);
  t = e_6(z_43, y_43, t);
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_44 = NULL,b_44 = NULL;
        t = eval_config_0_0(t);
        a_44 = t;
        t = term_i_18;
        b_44 = t;
        t = SSL_table_put(b_44, y_43, a_44);
        t = a_44;
        ;
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm q_102 (ATerm), ATerm t)
{
  ATerm f_44 = NULL;
  f_44 = t;
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_44 = NULL;
        t = term_n_18;
        t = get_config_0_0(t);
        h_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_44, term_o_18);
        t = geq_0_0(t);
        t = f_44;
        t = q_102(t);
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        t = f_44;
      }
  }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm k_44 = NULL;
  k_44 = t;
  if(match_string(t, "-k"))
    {
      t = k_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_44;
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
  l_44 = t;
  t = SSL_string_to_int(l_44);
  m_44 = t;
  t = term_p_18;
  n_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_18, m_44);
  t = g_6(n_44, m_44, t);
  t = l_44;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_3, n_3, q_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm p_44 = NULL;
  p_44 = t;
  if(match_string(t, "-S"))
    {
      t = p_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_44;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL;
  t = term_n_18;
  q_44 = t;
  t = term_r_18;
  r_44 = t;
  t = term_s_18;
  t = g_6(q_44, r_44, t);
  t = term_t_18;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_u_18;
  return(t);
}
ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
  s_44 = t;
  t = SSL_string_to_int(s_44);
  t_44 = t;
  t = term_n_18;
  u_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_18, t_44);
  t = g_6(u_44, t_44, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_44);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_x_18;
  return(t);
}
ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL;
  t = term_y_18;
  v_44 = t;
  t = term_h_3;
  w_44 = t;
  t = term_z_18;
  t = g_6(v_44, w_44, t);
  t = term_a_19;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_3, s_3, t_3, t);
      ;
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_3, v_3, w_3, t);
            ;
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            t = Option_3_0(x_3, y_3, a_4, t);
          }
      }
    }
  return(t);
}
ATerm g_6 (ATerm e_55, ATerm f_55, ATerm t)
{
  ATerm x_44 = NULL;
  t = term_i_18;
  x_44 = t;
  t = SSL_table_put(x_44, e_55, f_55);
  t = (ATerm) ATmakeAppl(sym__3, term_i_18, e_55, f_55);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm z_44 = NULL;
  z_44 = t;
  if(match_string(t, "-o"))
    {
      t = z_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_44;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL;
  a_45 = t;
  t = term_g_19;
  b_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_19, a_45);
  t = g_6(b_45, a_45, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_45);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_h_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_4, e_4, j_4, t);
  return(t);
}
ATerm b_6 (ATerm c_60, ATerm d_60, ATerm b_60, ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL;
  f_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_60, d_60);
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_19 = ATgetArgument(t, 0);
            ATerm n_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_60, d_60);
        t = e_6(c_60, d_60, t);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = (ATerm) ATempty;
      }
    g_45 = t;
    t = (ATerm) ATinsert(CheckATermList(g_45), b_60);
    h_45 = t;
    t = SSL_table_put(c_60, d_60, h_45);
    t = f_45;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
      t = term_h_3;
      t = g_0(t);
      w_45 = t;
      t = term_s_6;
      x_45 = t;
      t = term_k_7;
      y_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_6, term_k_7, w_45);
      t = b_6(x_45, y_45, w_45, t);
      _fail(t);
    }
  else
    {
      ATerm c_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_45 = ATgetFirst((ATermList) t);
          t_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_45 = ATgetFirst((ATermList) t);
          v_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_45;
      t = d_0(t);
      t = u_45;
      t = e_0(t);
      c_46 = t;
      t = (ATerm) ATinsert(CheckATermList(v_45), c_46);
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm e_46 = NULL;
  e_46 = t;
  if(match_string(t, "-i"))
    {
      t = e_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_46;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL;
  f_46 = t;
  t = term_o_19;
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_19, f_46);
  t = g_6(g_46, f_46, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_46);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, n_4, o_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_3;
  t = whoami_0_0(t);
  h_46 = t;
  t = term_f_15;
  j_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_19), h_46);
  k_46 = t;
  t = SSL_printnl(j_46, k_46);
  t = term_m_8;
  i_46 = t;
  t = SSL_exit(i_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_19;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_6 (ATerm n_47, ATerm o_47, ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_47, o_47);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      t = SSL_addr(n_47, o_47);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL;
  m_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_46;
      t = r_94(t);
    }
  else
    {
      ATerm r_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_46 = ATgetFirst((ATermList) t);
          o_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_46;
      t = foldr_2_0(r_94, s_94, t);
      r_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_46, r_46);
      t = s_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_r_18;
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL;
  if(match_cons(t, sym__2))
    {
      o_25 = ATgetArgument(t, 0);
      p_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(o_25, p_25, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_46 = NULL,j_25 = NULL,k_25 = NULL;
  t = times_0_0(t);
  k_25 = t;
  t = SSL_explode_term(k_25);
  if(match_cons(t, sym__2))
    {
      ATerm u_19 = ATgetArgument(t, 0);
      j_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_25;
  t = foldr_2_0(p_4, r_4, t);
  u_46 = t;
  t = SSL_TicksToSeconds(u_46);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL;
  f_47 = t;
  if(match_cons(t, sym__2))
    {
      g_47 = ATgetArgument(t, 0);
      h_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_47;
        if((g_47 != t))
          {
            _fail(t);
          }
        t = f_47;
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = v_19;
        t = (ATerm) ATmakeAppl(sym__2, g_47, h_47);
        {
          ATerm b_20 = t;
          int c_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_47, h_47);
              ;
              LocalPopChoice(c_20);
            }
          else
            {
              t = b_20;
              t = SSL_gtr(g_47, h_47);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_47, h_47);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm l_47 = NULL;
  l_47 = t;
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_47 = NULL;
        t = term_n_18;
        t = get_config_0_0(t);
        p_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_47, term_m_8);
        t = geq_0_0(t);
        t = l_47;
        t = p_102(t);
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = l_47;
      }
  }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,u_47 = NULL,v_47 = NULL;
  t = run_time_0_0(t);
  r_47 = t;
  t = term_h_3;
  t = whoami_0_0(t);
  s_47 = t;
  t = term_f_15;
  u_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_20), r_47), term_g_20), s_47);
  v_47 = t;
  t = SSL_printnl(u_47, v_47);
  t = (ATerm) ATmakeAppl(sym__2, term_f_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_20), r_47), term_g_20), s_47));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_18;
  w_47 = t;
  t = SSL_exit(w_47);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL;
  f_48 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_48;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_48 = ATgetArgument(t, 0);
          {
            ATerm i_26 = NULL,k_11 = NULL;
            t = SSLgetAnnotations(f_48);
            i_26 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_48);
            k_11 = t;
            t = SSLsetAnnotations(k_11, i_26);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_48;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_105 (ATerm), ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      t = fetch_1_0(v_4, t);
    }
  t = f_105(t);
  return(t);
}
ATerm map_1_0 (ATerm o_88 (ATerm), ATerm t)
{
  ATerm w_48 (ATerm t)
  {
    ATerm s_48 = NULL,u_48 = NULL,v_48 = NULL;
    s_48 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_48;
      }
    else
      {
        ATerm w_26 = NULL,a_27 = NULL,c_27 = NULL,q_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_48 = ATgetFirst((ATermList) t);
            v_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_48);
        w_26 = t;
        t = u_48;
        t = o_88(t);
        a_27 = t;
        t = v_48;
        t = w_48(t);
        c_27 = t;
        t = (ATerm) ATinsert(CheckATermList(c_27), a_27);
        q_11 = t;
        t = SSLsetAnnotations(q_11, w_26);
      }
    return(t);
  }
  t = w_48(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_48 = ATgetFirst((ATermList) t);
      a_49 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_49 = NULL,f_49 = NULL;
        ATerm x_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_49)), not_null(f_49));
          return(t);
        }
        t = not_null(a_49);
        t = c_0(t);
        if(((e_49 != NULL) && (e_49 != t)))
          _fail(t);
        else
          e_49 = t;
        t = not_null(z_48);
        t = a_0(t);
        if(((f_49 != NULL) && (f_49 != t)))
          _fail(t);
        else
          f_49 = t;
        t = not_null(a_49);
        t = reverse_acc_2_0(a_0, x_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_3;
      t = c_0(t);
    }
  return(t);
}
ATerm e_6 (ATerm t_61, ATerm u_61, ATerm t)
{
  t = SSL_table_get(t_61, u_61);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL,b_12 = NULL;
  l_49 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_49);
  j_49 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_49);
  b_12 = t;
  t = SSLsetAnnotations(b_12, j_49);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm n_49 = NULL;
  n_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_49), term_o_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL;
  ATerm q_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = q_20;
      t = fetch_1_0(z_4, t);
    }
  t = term_w_20;
  t = echo_0_0(t);
  t = term_s_6;
  h_49 = t;
  t = term_k_7;
  i_49 = t;
  t = term_x_20;
  t = e_6(h_49, i_49, t);
  t = reverse_acc_2_0(_id, d_5, t);
  t = map_1_0(f_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  p_49 = t;
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_49;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_21 = ATgetFirst((ATermList) t);
                ATerm b_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_49;
          }
        ;
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        t = (ATerm) ATinsert(ATempty, p_49);
      }
    q_49 = t;
    t = term_h_16;
    r_49 = t;
    t = SSL_printnl(r_49, q_49);
    t = p_49;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_19;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL;
  t = term_d_21;
  v_49 = t;
  t = term_h_3;
  w_49 = t;
  t = term_e_21;
  t = g_6(v_49, w_49, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL;
  t = term_d_21;
  z_49 = t;
  t = term_h_3;
  a_50 = t;
  t = term_e_21;
  t = g_6(z_49, a_50, t);
  t = term_g_21;
  x_49 = t;
  t = term_h_3;
  y_49 = t;
  t = term_h_21;
  t = g_6(x_49, y_49, t);
  t = term_i_21;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_5, j_5, l_5, t);
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      t = Option_3_0(m_5, n_5, r_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,y_12 = NULL;
  g_50 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_50 = ATgetFirst((ATermList) t);
      d_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_50);
  b_50 = t;
  t = c_50;
  t = z_69(t);
  e_50 = t;
  t = d_50;
  t = a_70(t);
  f_50 = t;
  t = (ATerm) ATinsert(CheckATermList(f_50), e_50);
  y_12 = t;
  t = SSLsetAnnotations(y_12, b_50);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,t_50 = NULL,u_50 = NULL,w_50 = NULL,x_50 = NULL,y_13 = NULL;
  if(((l_50 != NULL) && (l_50 != t)))
    _fail(t);
  else
    l_50 = t;
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_22;
        t = i_107(t);
        ;
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
      }
    t = not_null(l_50);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_50 != NULL) && (t_50 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_50 = ATgetFirst((ATermList) t);
        if(((u_50 != NULL) && (u_50 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          u_50 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(l_50));
    if(((m_50 != NULL) && (m_50 != t)))
      _fail(t);
    else
      m_50 = t;
    t = term_r_19;
    if(((x_50 != NULL) && (x_50 != t)))
      _fail(t);
    else
      x_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_19, not_null(t_50));
    t = g_6(not_null(x_50), not_null(t_50), t);
    t = not_null(u_50);
    {
      ATerm h_51 (ATerm t)
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_22 = t;
            int h_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_51 = NULL;
                a_51 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_51;
                ;
                LocalPopChoice(h_22);
              }
            else
              {
                t = g_22;
                t = i_107(t);
                t = Cons_2_0(_id, h_51, t);
              }
            ;
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
            {
              ATerm d_51 = NULL,e_51 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_51 = ATgetFirst((ATermList) t);
                  e_51 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_51), (ATerm) ATmakeAppl(sym_Undefined_1, d_51));
            }
          }
        return(t);
      }
      t = h_51(t);
      if(((w_50 != NULL) && (w_50 != t)))
        _fail(t);
      else
        w_50 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(w_50)), (ATerm) ATmakeAppl(sym_Program_1, not_null(t_50)));
      if(((y_13 != NULL) && (y_13 != t)))
        _fail(t);
      else
        y_13 = t;
      t = SSLsetAnnotations(not_null(y_13), not_null(m_50));
    }
  }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm t_51 = NULL;
  t_51 = t;
  if(match_string(t, "--help"))
    {
      t = t_51;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_51;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_51;
        }
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL;
  t = term_m_20;
  u_51 = t;
  t = term_h_3;
  v_51 = t;
  t = term_i_22;
  t = g_6(u_51, v_51, t);
  t = term_j_22;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm i_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL;
  if(((o_51 != NULL) && (o_51 != t)))
    _fail(t);
  else
    o_51 = t;
  t = term_s_6;
  if(((q_51 != NULL) && (q_51 != t)))
    _fail(t);
  else
    q_51 = t;
  t = term_k_7;
  if(((r_51 != NULL) && (r_51 != t)))
    _fail(t);
  else
    r_51 = t;
  t = (ATerm) ATempty;
  if(((s_51 != NULL) && (s_51 != t)))
    _fail(t);
  else
    s_51 = t;
  t = SSL_table_put(not_null(q_51), not_null(r_51), not_null(s_51));
  t = not_null(o_51);
  {
    ATerm s_5 (ATerm t)
    {
      ATerm m_22 = t;
      int n_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_107(t);
          ;
          LocalPopChoice(n_22);
        }
      else
        {
          t = m_22;
          {
            ATerm o_22 = t;
            int p_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_5, d_6, h_6, t);
                ;
                LocalPopChoice(p_22);
              }
            else
              {
                t = o_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_5, t);
    {
      ATerm v_22 = t;
      int w_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_52 = NULL;
          c_52 = t;
          {
            ATerm x_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_27 = NULL;
                t = c_52;
                {
                  ATerm z_22 = t;
                  int b_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_m_20;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(b_23);
                    }
                  else
                    {
                      t = z_22;
                      t = fetch_1_0(i_6, t);
                    }
                  t = c_52;
                  t = default_system_usage_0_0(t);
                  t = term_r_18;
                  l_27 = t;
                  t = SSL_exit(l_27);
                }
                ;
                LocalPopChoice(y_22);
              }
            else
              {
                t = x_22;
                {
                  ATerm r_27 = NULL;
                  t = term_d_21;
                  t = get_config_0_0(t);
                  t = c_52;
                  t = default_system_about_0_0(t);
                  t = term_r_18;
                  r_27 = t;
                  t = SSL_exit(r_27);
                }
              }
          }
          ;
          LocalPopChoice(w_22);
        }
      else
        {
          t = v_22;
          {
            ATerm f_23 = t;
            int g_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
                ATerm j_6 (ATerm t)
                {
                  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL,i_14 = NULL;
                  i_52 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      h_52 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_52);
                  g_52 = t;
                  t = h_52;
                  if(((m_51 != NULL) && (m_51 != t)))
                    _fail(t);
                  else
                    m_51 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, h_52);
                  i_14 = t;
                  t = SSLsetAnnotations(i_14, g_52);
                  return(t);
                }
                t = fetch_1_0(j_6, t);
                t = term_f_15;
                if(((e_52 != NULL) && (e_52 != t)))
                  _fail(t);
                else
                  e_52 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_51)), term_h_23);
                if(((f_52 != NULL) && (f_52 != t)))
                  _fail(t);
                else
                  f_52 = t;
                t = SSL_printnl(not_null(e_52), not_null(f_52));
                t = (ATerm) ATmakeAppl(sym__2, term_f_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_51)), term_h_23));
                t = default_system_usage_0_0(t);
                t = term_m_8;
                if(((d_52 != NULL) && (d_52 != t)))
                  _fail(t);
                else
                  d_52 = t;
                t = SSL_exit(not_null(d_52));
                ;
                LocalPopChoice(g_23);
              }
            else
              {
                t = f_23;
              }
          }
        }
      if(((n_51 != NULL) && (n_51 != t)))
        _fail(t);
      else
        n_51 = t;
      t = term_s_6;
      if(((p_51 != NULL) && (p_51 != t)))
        _fail(t);
      else
        p_51 = t;
      t = SSL_table_destroy(not_null(p_51));
      t = not_null(n_51);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL;
  t = parse_options_1_0(h_105, t);
  n_52 = t;
  t = term_z_14;
  q_52 = t;
  t = SSL_table_create(q_52);
  t = term_z_14;
  o_52 = t;
  t = term_a_15;
  p_52 = t;
  t = SSL_table_put(o_52, p_52, n_52);
  t = n_52;
  t = j_105(t);
  {
    ATerm i_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_105, t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = i_23;
        {
          ATerm n_23 = t;
          int p_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_105(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_23);
            }
          else
            {
              t = n_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = if_verbose2_1_0(r_6, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL;
  t = term_q_23;
  r_52 = t;
  t = term_h_3;
  s_52 = t;
  t = term_r_23;
  t = g_6(r_52, s_52, t);
  t = term_s_23;
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_u_23;
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
  t_52 = t;
  t = term_r_19;
  t = get_config_0_0(t);
  u_52 = t;
  t = term_f_15;
  v_52 = t;
  t = (ATerm) ATinsert(ATempty, u_52);
  w_52 = t;
  t = SSL_printnl(v_52, w_52);
  t = t_52;
  return(t);
}
ATerm iowrap_3_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    ATerm v_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_104(t);
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = v_23;
        {
          ATerm y_23 = t;
          int z_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(z_23);
            }
          else
            {
              t = y_23;
              {
                ATerm b_24 = t;
                int c_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(c_24);
                  }
                else
                  {
                    t = b_24;
                    {
                      ATerm g_24 = t;
                      int k_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_6, o_6, q_6, t);
                          ;
                          LocalPopChoice(k_24);
                        }
                      else
                        {
                          t = g_24;
                          {
                            ATerm l_24 = t;
                            int m_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(m_24);
                              }
                            else
                              {
                                t = l_24;
                                t = keep_option_0_0(t);
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
  ATerm m_6 (ATerm t)
  {
    ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
    if(((y_52 != NULL) && (y_52 != t)))
      _fail(t);
    else
      y_52 = t;
    {
      ATerm n_24 = t;
      int o_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_52 != NULL) && (x_52 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_52 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_6, t);
          ;
          LocalPopChoice(o_24);
        }
      else
        {
          t = n_24;
          t = term_p_24;
          if(((x_52 != NULL) && (x_52 != t)))
            _fail(t);
          else
            x_52 = t;
        }
      t = not_null(x_52);
      t = ReadFromFile_0_0(t);
      if(((z_52 != NULL) && (z_52 != t)))
        _fail(t);
      else
        z_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_52), not_null(z_52));
      t = apply_strategy_1_0(q_104, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(k_6, s_104, l_6, m_6, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--strict", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_e_15;
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_q_24;
  return(t);
}
ATerm io_idwrap_3_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL;
    g_53 = t;
    if(match_cons(t, sym__2))
      {
        e_53 = ATgetArgument(t, 0);
        f_53 = ATgetArgument(t, 1);
        {
          ATerm r_24 = t;
          int t_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_53 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, term_u_24, f_53);
              t = k_110(t);
              j_53 = t;
              t = (ATerm) ATmakeAppl(sym__2, e_53, j_53);
              ;
              LocalPopChoice(t_24);
            }
          else
            {
              t = r_24;
              t = g_53;
            }
        }
      }
    else
      {
        t = g_53;
      }
    t = l_110(t);
    o_53 = t;
    if(match_cons(t, sym__2))
      {
        m_53 = ATgetArgument(t, 0);
        n_53 = ATgetArgument(t, 1);
        {
          ATerm v_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_53 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, term_x_24, n_53);
              t = k_110(t);
              r_53 = t;
              t = (ATerm) ATmakeAppl(sym__2, m_53, r_53);
              ;
              LocalPopChoice(w_24);
            }
          else
            {
              t = v_24;
              t = o_53;
            }
        }
      }
    else
      {
        t = o_53;
      }
    return(t);
  }
  ATerm v_6 (ATerm t)
  {
    ATerm y_24 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_110(t);
        ;
        LocalPopChoice(b_25);
      }
    else
      {
        t = y_24;
        t = Option_3_0(w_6, y_6, z_6, t);
      }
    return(t);
  }
  t = iowrap_3_0(u_6, v_6, default_usage_0_0, t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = InOutId_2_0(e_7, f_7, t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,z_53 = NULL,a_54 = NULL,t_14 = NULL;
  a_54 = t;
  if(match_cons(t, sym__2))
    {
      v_53 = ATgetArgument(t, 0);
      w_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_54);
  u_53 = t;
  t = w_53;
  t = ppgenerate_0_0(t);
  z_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_53, z_53);
  t_14 = t;
  t = SSLsetAnnotations(t_14, u_53);
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = Option_3_0(h_7, i_7, j_7, t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"sdf-2.1\"", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-v", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_idwrap_3_0(a_7, c_7, d_7, t);
  return(t);
}
