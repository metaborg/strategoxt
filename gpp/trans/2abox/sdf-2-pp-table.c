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
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_g_28;
ATerm term_d_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_d_26;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_b_25;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_u_23;
ATerm term_l_23;
ATerm term_h_23;
ATerm term_d_23;
ATerm term_z_22;
ATerm term_q_22;
ATerm term_o_22;
ATerm term_q_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_v_19;
ATerm term_l_19;
ATerm term_c_19;
ATerm term_s_18;
ATerm term_n_18;
ATerm term_w_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_z_14;
ATerm term_u_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_c_14;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_d_9;
ATerm term_p_8;
ATerm term_b_4;
void init_constant_terms (void)
{
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Arg_1, term_i_10);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_SOpt_2, term_p_12, term_q_12);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_lit_1, term_l_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_lit_1, term_n_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym__2, term_j_16, term_k_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_c_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym__2, term_l_20, term_b_4);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_d_9);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_u_23, term_b_4);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_p_24, term_b_4);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_z_22, term_b_4);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym__2, term_y_26, term_b_4);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
ATerm Option_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm k_1 (ATerm b_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm S_1_0 (ATerm m_70 (ATerm), ATerm);
ATerm selector_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm);
ATerm Arg_1_0 (ATerm j_70 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm x_82 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm e_89 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm filter_1_0 (ATerm u_95 (ATerm), ATerm);
ATerm flat_alt_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm argument_list_0_0 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm symbol2abox_1_0 (ATerm x_80 (ATerm), ATerm);
ATerm iter_star_1_0 (ATerm m_72 (ATerm), ATerm);
ATerm iter_1_0 (ATerm l_72 (ATerm), ATerm);
ATerm pair_0_0 (ATerm);
ATerm iter_star_sep_2_0 (ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm);
ATerm iter_sep_2_0 (ATerm h_72 (ATerm), ATerm i_72 (ATerm), ATerm);
ATerm f_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm make_0_0 (ATerm);
ATerm NonTerminal_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm number_node_1_0 (ATerm a_81 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm number_nonterminals_0_0 (ATerm);
ATerm symbols2pp_entries_1_0 (ATerm w_80 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm generate_pp_entries_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm at_last_1_0 (ATerm p_89 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm r_4 (ATerm);
ATerm unquote_chars_1_0 (ATerm s_97 (ATerm), ATerm);
ATerm sort_1_0 (ATerm q_72 (ATerm), ATerm);
ATerm lit_1_0 (ATerm g_72 (ATerm), ATerm);
ATerm cons_1_0 (ATerm u_72 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm collect_p__1_0 (ATerm c_110 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm ppgenerate_0_0 (ATerm);
ATerm _2_0 (ATerm k_65 (ATerm), ATerm l_65 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm p_5 (ATerm m_45, ATerm n_45, ATerm);
ATerm q_5 (ATerm o_110 (ATerm), ATerm x_64, ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm InOutId_2_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm v_5 (ATerm n_50, ATerm o_50, ATerm);
ATerm w_5 (ATerm b_54, ATerm c_54, ATerm);
ATerm y_5 (ATerm f_101 (ATerm), ATerm a_452, ATerm f_54, ATerm);
ATerm x_5 (ATerm x_53, ATerm y_53, ATerm);
ATerm t_5 (ATerm);
ATerm d_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm h_104 (ATerm), ATerm);
ATerm r_25 (ATerm j_25, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm z_5 (ATerm d_54, ATerm);
ATerm a_6 (ATerm p_50, ATerm q_50, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm y_88 (ATerm), ATerm);
ATerm u_5 (ATerm d_45, ATerm e_45, ATerm);
ATerm debug_1_0 (ATerm d_101 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm q_102 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm g_6 (ATerm e_55, ATerm f_55, ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm b_6 (ATerm c_60, ATerm d_60, ATerm b_60, ATerm);
ATerm ArgOption_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_6 (ATerm n_47, ATerm o_47, ATerm);
ATerm foldr_2_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm p_102 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm m_7 (ATerm);
ATerm need_help_1_0 (ATerm f_105 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_88 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm e_6 (ATerm t_61, ATerm u_61, ATerm);
ATerm Program_1_0 (ATerm w_78 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm x_78 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm);
ATerm y_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm i_107 (ATerm), ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm parse_options_1_0 (ATerm h_107 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm);
ATerm i_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm iowrap_3_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm io_idwrap_3_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
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
      t = term_b_4;
      t = l_0(t);
      r_0 = t;
      t = term_p_8;
      t_0 = t;
      t = term_d_9;
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_8, term_d_9, r_0);
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
      t = term_b_4;
      t = k_0(t);
      x_0 = t;
      t = (ATerm) ATinsert(CheckATermList(q_0), x_0);
    }
  return(t);
}
ATerm k_1 (ATerm b_1, ATerm t)
{
  ATerm d_1 = NULL;
  t = SSL_explode_term(b_1);
  if(match_cons(t, sym__2))
    {
      ATerm e_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_1 = NULL,g_1 = NULL,h_1 = NULL;
  h_1 = t;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_2 (ATerm t)
            {
              t = g_1;
              return(t);
            }
            t = e_1;
            t = at_end_1_0(w_2, t);
            ;
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            t = k_1(h_1, t);
          }
      }
    }
  else
    {
      t = k_1(h_1, t);
    }
  return(t);
}
ATerm S_1_0 (ATerm m_70 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,t_1 = NULL,x_1 = NULL,b_0 = NULL,f_0 = NULL;
  x_1 = t;
  if(match_cons(t, sym_S_1))
    {
      o_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_1);
  n_1 = t;
  t = o_1;
  t = m_70(t);
  t_1 = t;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, t_1);
  b_0 = t;
  t = SSLsetAnnotations(b_0, n_1);
  return(t);
}
ATerm selector_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm t)
{
  ATerm d_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,m_2 = NULL,m_0 = NULL,n_0 = NULL;
  m_2 = t;
  if(match_cons(t, sym_selector_2))
    {
      f_2 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_2);
  d_2 = t;
  t = f_2;
  t = h_70(t);
  h_2 = t;
  t = g_2;
  t = i_70(t);
  i_2 = t;
  n_0 = t;
  t = (ATerm) ATmakeAppl(sym_selector_2, h_2, i_2);
  m_0 = t;
  t = SSLsetAnnotations(m_0, d_2);
  return(t);
}
ATerm Arg_1_0 (ATerm j_70 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,k_3 = NULL,l_3 = NULL,n_3 = NULL,s_0 = NULL,v_0 = NULL;
  n_3 = t;
  if(match_cons(t, sym_Arg_1))
    {
      k_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_3);
  y_2 = t;
  t = k_3;
  t = j_70(t);
  l_3 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Arg_1, l_3);
  s_0 = t;
  t = SSLsetAnnotations(s_0, y_2);
  return(t);
}
ATerm topdown_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  t = x_82(t);
  {
    ATerm x_2 (ATerm t)
    {
      t = topdown_1_0(x_82, t);
      return(t);
    }
    t = SRTS_all(x_2, t);
  }
  return(t);
}
ATerm at_end_1_0 (ATerm e_89 (ATerm), ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_3, t);
        ;
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_89(t);
      }
    return(t);
  }
  t = r_3(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        ATerm w_3 = NULL,x_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_3 = ATgetFirst((ATermList) t);
            x_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_3;
        {
          ATerm z_2 (ATerm t)
          {
            t = x_3;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(z_2, t);
        }
      }
    }
  return(t);
}
ATerm filter_1_0 (ATerm u_95 (ATerm), ATerm t)
{
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      {
        ATerm n_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              t = filter_1_0(u_95, t);
              return(t);
            }
            t = Cons_2_0(u_95, a_3, t);
            ;
            LocalPopChoice(p_9);
          }
        else
          {
            t = n_9;
            {
              ATerm f_4 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_9 = ATgetFirst((ATermList) t);
                  f_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = f_4;
              t = filter_1_0(u_95, t);
            }
          }
      }
    }
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm e_5 = NULL,m_5 = NULL,m_6 = NULL,o_6 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      m_6 = ATgetArgument(t, 0);
      o_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6;
  if(match_cons(t, sym_alt_2))
    {
      e_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_7 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, e_5, m_5);
            t = flat_alt_0_0(t);
            n_7 = t;
            t = (ATerm) ATinsert(CheckATermList(n_7), m_6);
            ;
            LocalPopChoice(s_9);
          }
        else
          {
            t = r_9;
            t = (ATerm) ATinsert(ATinsert(ATempty, o_6), m_6);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, o_6), m_6);
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm t_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_4 = NULL;
      w_4 = t;
      {
        ATerm z_9 = t;
        if((PushChoice() == 0))
          {
            ATerm p_0 = NULL;
            p_0 = t;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = p_0;
              }
            else
              {
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm a_10 = ATgetFirst((ATermList) t);
                    ATerm b_10 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = p_0;
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_9;
          }
        t = (ATerm) ATinsert(ATempty, w_4);
      }
      ;
      LocalPopChoice(w_9);
    }
  else
    {
      t = t_9;
    }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(b_3, t);
  t = concat_0_0(t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = topdown_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm e_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Arg_1_0(_id, t);
      t = term_j_10;
      ;
      LocalPopChoice(h_10);
    }
  else
    {
      t = e_10;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm o_9 = NULL,u_9 = NULL,v_9 = NULL,x_9 = NULL,y_9 = NULL;
  x_9 = t;
  t = term_b_4;
  t = x_80(t);
  y_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_9, x_9);
  {
    ATerm j_12 (ATerm t)
    {
      ATerm k_12 (ATerm c_10, ATerm d_10, ATerm f_10, ATerm g_10, ATerm t)
      {
        ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
        t = SSL_explode_term(g_10);
        if(match_cons(t, sym__2))
          {
            s_10 = ATgetArgument(t, 0);
            t_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, f_10, s_10)));
        t = conc_0_0(t);
        u_10 = t;
        t = t_10;
        t = argument_list_0_0(t);
        t = number_nonterminals_0_0(t);
        v_10 = t;
        t = make_0_0(t);
        w_10 = t;
        t = v_10;
        {
          ATerm c_3 (ATerm t)
          {
            ATerm y_10 = NULL;
            y_10 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_10, u_10), y_10);
            t = j_12(t);
            return(t);
          }
          t = map_1_0(c_3, t);
          t = concat_0_0(t);
          x_10 = t;
          t = (ATerm) ATinsert(CheckATermList(x_10), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, c_10, u_10), w_10));
        }
        return(t);
      }
      ATerm z_10 = NULL,f_11 = NULL,o_11 = NULL,p_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
      if(match_cons(t, sym__2))
        {
          r_11 = ATgetArgument(t, 0);
          u_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_11;
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm m_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(l_10);
            t = (ATerm) ATempty;
          }
        else
          {
            t = k_10;
            if(match_cons(t, sym__2))
              {
                v_11 = ATgetArgument(t, 0);
                w_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_11;
            {
              ATerm n_10 = t;
              int o_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_sort_1))
                    {
                      ATerm p_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(o_10);
                  t = r_11;
                  if(match_cons(t, sym__2))
                    {
                      s_11 = ATgetArgument(t, 0);
                      t_11 = ATgetArgument(t, 1);
                      {
                        ATerm q_10 = t;
                        int r_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = (ATerm) ATempty;
                            ;
                            LocalPopChoice(r_10);
                          }
                        else
                          {
                            t = q_10;
                            t = k_12(s_11, t_11, v_11, w_11, t);
                          }
                      }
                    }
                  else
                    {
                      t = (ATerm) ATempty;
                    }
                }
              else
                {
                  t = n_10;
                  {
                    ATerm a_11 = t;
                    int b_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_char_class_1))
                          {
                            ATerm c_11 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(b_11);
                        t = r_11;
                        if(match_cons(t, sym__2))
                          {
                            s_11 = ATgetArgument(t, 0);
                            t_11 = ATgetArgument(t, 1);
                            {
                              ATerm d_11 = t;
                              int e_11 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATempty;
                                  ;
                                  LocalPopChoice(e_11);
                                }
                              else
                                {
                                  t = d_11;
                                  t = k_12(s_11, t_11, v_11, w_11, t);
                                }
                            }
                          }
                        else
                          {
                            t = (ATerm) ATempty;
                          }
                      }
                    else
                      {
                        t = a_11;
                        if(match_cons(t, sym_alt_2))
                          {
                            p_11 = ATgetArgument(t, 0);
                            z_10 = ATgetArgument(t, 1);
                            t = r_11;
                            if(match_cons(t, sym__2))
                              {
                                s_11 = ATgetArgument(t, 0);
                                t_11 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = z_10;
                            if(match_cons(t, sym_alt_2))
                              {
                                f_11 = ATgetArgument(t, 0);
                                o_11 = ATgetArgument(t, 1);
                                {
                                  ATerm g_11 = t;
                                  int h_11 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
                                      t = s_11;
                                      if(((o_9 != NULL) && (o_9 != t)))
                                        _fail(t);
                                      else
                                        o_9 = t;
                                      t = t_11;
                                      if(((u_9 != NULL) && (u_9 != t)))
                                        _fail(t);
                                      else
                                        u_9 = t;
                                      t = v_11;
                                      if(((v_9 != NULL) && (v_9 != t)))
                                        _fail(t);
                                      else
                                        v_9 = t;
                                      t = (ATerm) ATmakeAppl(sym_alt_2, p_11, (ATerm) ATmakeAppl(sym_alt_2, f_11, o_11));
                                      t = flat_alt_0_0(t);
                                      c_12 = t;
                                      t = term_i_11;
                                      e_12 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, term_i_11, c_12);
                                      t = p_5(e_12, c_12, t);
                                      d_12 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_11, t_11), (ATerm) ATmakeAppl(sym__2, v_11, d_12));
                                      t = j_12(t);
                                      t = Cons_2_0(d_3, _id, t);
                                      ;
                                      LocalPopChoice(h_11);
                                    }
                                  else
                                    {
                                      t = g_11;
                                      t = k_12(s_11, t_11, v_11, w_11, t);
                                    }
                                }
                              }
                            else
                              {
                                t = k_12(s_11, t_11, v_11, w_11, t);
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_bracket_symbol_1))
                              {
                                p_11 = ATgetArgument(t, 0);
                                t = r_11;
                                if(match_cons(t, sym__2))
                                  {
                                    s_11 = ATgetArgument(t, 0);
                                    t_11 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm j_11 = t;
                                  int k_11 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_11, t_11), (ATerm) ATmakeAppl(sym__2, v_11, p_11));
                                      t = j_12(t);
                                      ;
                                      LocalPopChoice(k_11);
                                    }
                                  else
                                    {
                                      t = j_11;
                                      t = k_12(s_11, t_11, v_11, w_11, t);
                                    }
                                }
                              }
                            else
                              {
                                t = r_11;
                                if(match_cons(t, sym__2))
                                  {
                                    s_11 = ATgetArgument(t, 0);
                                    t_11 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = k_12(s_11, t_11, v_11, w_11, t);
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
    t = j_12(t);
  }
  return(t);
}
ATerm iter_star_1_0 (ATerm m_72 (ATerm), ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,w_0 = NULL,y_0 = NULL;
  o_12 = t;
  if(match_cons(t, sym_iter_star_1))
    {
      m_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_12);
  l_12 = t;
  t = m_12;
  t = m_72(t);
  n_12 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_iter_star_1, n_12);
  w_0 = t;
  t = SSLsetAnnotations(w_0, l_12);
  return(t);
}
ATerm iter_1_0 (ATerm l_72 (ATerm), ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,v_12 = NULL,z_0 = NULL,c_1 = NULL;
  v_12 = t;
  if(match_cons(t, sym_iter_1))
    {
      s_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_12);
  r_12 = t;
  t = s_12;
  t = l_72(t);
  t_12 = t;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym_iter_1, t_12);
  z_0 = t;
  t = SSLsetAnnotations(z_0, r_12);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,k_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_13 = ATgetFirst((ATermList) t);
            c_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_13;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_13 = ATgetFirst((ATermList) t);
            e_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_13;
        t = pair_0_0(t);
        k_13 = t;
        t = (ATerm) ATinsert(CheckATermList(k_13), (ATerm) ATmakeAppl(sym__2, b_13, d_13));
      }
    }
  return(t);
}
ATerm iter_star_sep_2_0 (ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,i_1 = NULL,j_1 = NULL;
  s_13 = t;
  if(match_cons(t, sym_iter_star_sep_2))
    {
      o_13 = ATgetArgument(t, 0);
      p_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_13);
  m_13 = t;
  t = o_13;
  t = j_72(t);
  q_13 = t;
  t = p_13;
  t = k_72(t);
  r_13 = t;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, q_13, r_13);
  i_1 = t;
  t = SSLsetAnnotations(i_1, m_13);
  return(t);
}
ATerm iter_sep_2_0 (ATerm h_72 (ATerm), ATerm i_72 (ATerm), ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,b_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,l_1 = NULL,m_1 = NULL;
  f_14 = t;
  if(match_cons(t, sym_iter_sep_2))
    {
      y_13 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_14);
  x_13 = t;
  t = y_13;
  t = h_72(t);
  d_14 = t;
  t = b_14;
  t = i_72(t);
  e_14 = t;
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym_iter_sep_2, d_14, e_14);
  l_1 = t;
  t = SSLsetAnnotations(l_1, x_13);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm x_14 = NULL;
  t = _2_0(_id, j_3, t);
  if(match_cons(t, sym_lit_1))
    {
      x_14 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_n_11, (ATerm) ATmakeAppl(sym_S_1, x_14));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          x_14 = ATgetArgument(t, 0);
          {
            ATerm q_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, x_14);
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = map_1_0(m_3, t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iter_1_0(_id, t);
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = iter_star_1_0(_id, t);
            ;
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            {
              ATerm b_12 = t;
              int f_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = iter_sep_2_0(_id, _id, t);
                  ;
                  LocalPopChoice(f_12);
                }
              else
                {
                  t = b_12;
                  t = iter_star_sep_2_0(_id, _id, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm d_15 = NULL;
  t = lit_1_0(_id, t);
  if(match_cons(t, sym_lit_1))
    {
      d_15 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_n_11, (ATerm) ATmakeAppl(sym_S_1, d_15));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          d_15 = ATgetArgument(t, 0);
          {
            ATerm g_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, d_15);
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL;
  ATerm y_3 (ATerm t)
  {
    ATerm t_15 = NULL;
    t = lit_1_0(_id, t);
    if(match_cons(t, sym_lit_1))
      {
        t_15 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_n_11, (ATerm) ATmakeAppl(sym_S_1, t_15));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            t_15 = ATgetArgument(t, 0);
            {
              ATerm h_12 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, t_15);
      }
    if(((p_15 != NULL) && (p_15 != t)))
      _fail(t);
    else
      p_15 = t;
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    ATerm a_16 = NULL;
    t = _2_0(_id, a_4, t);
    if(match_cons(t, sym_lit_1))
      {
        a_16 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_n_11, (ATerm) ATmakeAppl(sym_S_1, a_16));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            a_16 = ATgetArgument(t, 0);
            {
              ATerm i_12 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, a_16);
      }
    if(((q_15 != NULL) && (q_15 != t)))
      _fail(t);
    else
      q_15 = t;
    return(t);
  }
  t = _2_0(y_3, z_3, t);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_u_12), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_15)), not_null(p_15)));
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iter_1_0(_id, t);
      ;
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      t = iter_star_1_0(_id, t);
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm f_16 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      f_16 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_n_11, (ATerm) ATmakeAppl(sym_S_1, f_16));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          f_16 = ATgetArgument(t, 0);
          {
            ATerm y_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, f_16);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_14 = NULL;
      t = reverse_acc_2_0(_id, f_3, t);
      t = Cons_2_0(h_3, i_3, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_14 = ATgetFirst((ATermList) t);
          o_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_13 = t;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, o_3, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_13;
          }
        t = o_14;
        t = reverse_acc_2_0(_id, p_3, t);
        t_14 = t;
        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, p_14), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, t_14)));
      }
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = reverse_acc_2_0(_id, q_3, t);
            {
              ATerm s_3 (ATerm t)
              {
                ATerm j_15 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    j_15 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_n_11, (ATerm) ATmakeAppl(sym_S_1, j_15));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        j_15 = ATgetArgument(t, 0);
                        {
                          ATerm i_13 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, j_15);
                  }
                if(((s_14 != NULL) && (s_14 != t)))
                  _fail(t);
                else
                  s_14 = t;
                return(t);
              }
              ATerm t_3 (ATerm t)
              {
                ATerm j_13 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_13;
                  }
                t = reverse_acc_2_0(_id, u_3, t);
                if(((q_14 != NULL) && (q_14 != t)))
                  _fail(t);
                else
                  q_14 = t;
                return(t);
              }
              t = Cons_2_0(s_3, t_3, t);
              t = not_null(q_14);
              t = pair_0_0(t);
              t = map_1_0(v_3, t);
              r_14 = t;
              t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_14)), r_14));
            }
            ;
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            t = map_1_0(c_4, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm l_13 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_13;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm number_node_1_0 (ATerm a_81 (ATerm), ATerm t)
{
  ATerm l_16 = NULL;
  l_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, l_16);
  {
    ATerm g_17 (ATerm t)
    {
      ATerm n_13 = t;
      int t_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2_0(_id, d_4, t);
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(t_13);
        }
      else
        {
          t = n_13;
          {
            ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
            if(match_cons(t, sym__2))
              {
                r_16 = ATgetArgument(t, 0);
                s_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_16;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_16 = ATgetFirst((ATermList) t);
                u_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            {
              ATerm u_13 = t;
              int v_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_16 = NULL,a_17 = NULL,b_17 = NULL;
                  t = t_16;
                  t = a_81(t);
                  t = term_i_10;
                  b_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, r_16, term_i_10);
                  t = c_6(r_16, b_17, t);
                  x_16 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_16, u_16);
                  t = g_17(t);
                  a_17 = t;
                  t = (ATerm) ATinsert(CheckATermList(a_17), (ATerm) ATmakeAppl(sym__2, r_16, t_16));
                  ;
                  LocalPopChoice(v_13);
                }
              else
                {
                  t = u_13;
                  {
                    ATerm e_17 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, r_16, u_16);
                    t = g_17(t);
                    e_17 = t;
                    t = (ATerm) ATinsert(CheckATermList(e_17), t_16);
                  }
                }
            }
          }
        }
      return(t);
    }
    t = g_17(t);
  }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm w_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_17 = NULL;
      if(match_cons(t, sym_label_2))
        {
          ATerm a_14 = ATgetArgument(t, 0);
          q_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_17;
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = w_13;
    }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(e_4, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,d_18 = NULL;
  t = number_nonterminals_0_0(t);
  t_17 = t;
  t = make_0_0(t);
  u_17 = t;
  t = t_17;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm j_4 (ATerm t)
      {
        ATerm e_18 = NULL;
        t = term_b_4;
        t = w_80(t);
        e_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_18, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(j_4, t);
      return(t);
    }
    t = map_1_0(g_4, t);
    t = concat_0_0(t);
    v_17 = t;
    t = term_b_4;
    t = w_80(t);
    d_18 = t;
    t = (ATerm) ATinsert(CheckATermList(v_17), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, d_18), u_17));
  }
  return(t);
}
ATerm o_4 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm g_18 = NULL;
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_18 = NULL,r_18 = NULL,v_18 = NULL,w_18 = NULL;
      ATerm i_14 = t;
      int j_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              p_18 = ATgetArgument(t, 0);
              {
                ATerm k_14 = ATgetArgument(t, 1);
              }
              v_18 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(j_14);
          t = v_18;
          {
            ATerm k_4 (ATerm t)
            {
              if(match_cons(t, sym_cons_1))
                {
                  if(((g_18 != NULL) && (g_18 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    g_18 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(k_4, t);
            t = p_18;
            {
              ATerm n_4 (ATerm t)
              {
                t = not_null(g_18);
                return(t);
              }
              t = symbols2pp_entries_1_0(n_4, t);
            }
          }
        }
      else
        {
          t = i_14;
          {
            ATerm x_18 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                p_18 = ATgetArgument(t, 0);
                r_18 = ATgetArgument(t, 1);
                v_18 = ATgetArgument(t, 2);
                w_18 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_14)), r_18), (ATerm) ATinsert(ATinsert(ATempty, term_m_14), (ATerm) ATmakeAppl(sym_lit_1, p_18)));
            t = concat_0_0(t);
            x_18 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, x_18, v_18, w_18);
            t = generate_pp_entries_0_0(t);
          }
        }
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
      {
        ATerm v_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_14 = t;
            if((PushChoice() == 0))
              {
                ATerm y_18 = NULL;
                y_18 = t;
                t = term_z_14;
                t = get_options_0_0(t);
                t = oncetd_1_0(o_4, t);
                t = y_18;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_14;
              }
            t = debug_1_0(p_4, t);
            ;
            LocalPopChoice(w_14);
          }
        else
          {
            t = v_14;
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm p_89 (ATerm), ATerm t)
{
  ATerm a_19 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, q_4, t);
        t = p_89(t);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = Cons_2_0(_id, a_19, t);
      }
    return(t);
  }
  t = a_19(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_19 = ATgetFirst((ATermList) t);
      g_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_19;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm c_15 = t;
      int e_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_19;
          ;
          LocalPopChoice(e_15);
        }
      else
        {
          t = c_15;
          t = g_19;
          t = last_0_0(t);
        }
    }
  else
    {
      t = g_19;
      t = last_0_0(t);
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm s_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_15 = ATgetFirst((ATermList) t);
      s_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_19;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  p_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_19 = ATgetFirst((ATermList) t);
      {
        ATerm g_15 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_19;
  t = s_97(t);
  t = p_19;
  t = last_0_0(t);
  t = s_97(t);
  t = p_19;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_15 = ATgetFirst((ATermList) t);
      r_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_19;
  t = at_last_1_0(r_4, t);
  return(t);
}
ATerm sort_1_0 (ATerm q_72 (ATerm), ATerm t)
{
  ATerm t_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,p_1 = NULL,q_1 = NULL;
  y_19 = t;
  if(match_cons(t, sym_sort_1))
    {
      w_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_19);
  t_19 = t;
  t = w_19;
  t = q_72(t);
  x_19 = t;
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, x_19);
  p_1 = t;
  t = SSLsetAnnotations(p_1, t_19);
  return(t);
}
ATerm lit_1_0 (ATerm g_72 (ATerm), ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,k_20 = NULL,r_1 = NULL,v_1 = NULL;
  k_20 = t;
  if(match_cons(t, sym_lit_1))
    {
      g_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_20);
  f_20 = t;
  t = g_20;
  t = g_72(t);
  h_20 = t;
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, h_20);
  r_1 = t;
  t = SSLsetAnnotations(r_1, f_20);
  return(t);
}
ATerm cons_1_0 (ATerm u_72 (ATerm), ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,r_20 = NULL,y_1 = NULL,z_1 = NULL;
  r_20 = t;
  if(match_cons(t, sym_cons_1))
    {
      o_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_20);
  n_20 = t;
  t = o_20;
  t = u_72(t);
  p_20 = t;
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, p_20);
  y_1 = t;
  t = SSLsetAnnotations(y_1, n_20);
  return(t);
}
ATerm foldr_3_0 (ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm t)
{
  ATerm i_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_94(t);
      ;
      LocalPopChoice(k_15);
    }
  else
    {
      t = i_15;
      {
        ATerm z_20 = NULL,b_21 = NULL,e_21 = NULL,f_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_20 = ATgetFirst((ATermList) t);
            b_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_20;
        t = v_94(t);
        e_21 = t;
        t = b_21;
        t = foldr_3_0(t_94, u_94, v_94, t);
        f_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_21, f_21);
        t = u_94(t);
      }
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm c_110 (ATerm), ATerm t)
{
  ATerm j_21 (ATerm t)
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_21 = NULL;
        t = c_110(t);
        i_21 = t;
        t = (ATerm) ATinsert(ATempty, i_21);
        ;
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
        {
          ATerm a_1 = NULL,f_1 = NULL;
          a_1 = t;
          t = SSL_explode_term(a_1);
          if(match_cons(t, sym__2))
            {
              ATerm n_15 = ATgetArgument(t, 0);
              f_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_1;
          t = foldr_3_0(s_4, conc_0_0, j_21, t);
        }
      }
    return(t);
  }
  t = j_21(t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm n_21 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      n_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_21;
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm o_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_15 = t;
      int u_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = cons_1_0(v_4, t);
          ;
          LocalPopChoice(u_15);
        }
      else
        {
          t = s_15;
          {
            ATerm v_15 = t;
            int w_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = lit_1_0(y_4, t);
                ;
                LocalPopChoice(w_15);
              }
            else
              {
                t = v_15;
                t = sort_1_0(a_5, t);
              }
          }
        }
      ;
      LocalPopChoice(r_15);
    }
  else
    {
      t = o_15;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm s_1 = NULL,u_1 = NULL;
  s_1 = t;
  t = SSL_explode_string(s_1);
  t = unquote_chars_1_0(x_4, t);
  u_1 = t;
  t = SSL_implode_string(u_1);
  return(t);
}
ATerm x_4 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm w_1 = NULL,a_2 = NULL;
  w_1 = t;
  t = SSL_explode_string(w_1);
  t = unquote_chars_1_0(z_4, t);
  a_2 = t;
  t = SSL_implode_string(a_2);
  return(t);
}
ATerm z_4 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm c_2 = NULL,e_2 = NULL;
  c_2 = t;
  t = SSL_explode_string(c_2);
  t = unquote_chars_1_0(b_5, t);
  e_2 = t;
  t = SSL_implode_string(e_2);
  return(t);
}
ATerm b_5 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm x_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_15;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_16 = t;
      int c_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arg_1_0(f_5, t);
          ;
          LocalPopChoice(c_16);
        }
      else
        {
          t = b_16;
          {
            ATerm d_16 = t;
            int e_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = selector_2_0(h_5, _id, t);
                ;
                LocalPopChoice(e_16);
              }
            else
              {
                t = d_16;
                t = S_1_0(i_5, t);
              }
          }
        }
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm o_21 = NULL;
  o_21 = t;
  t = SSL_int_to_string(o_21);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm p_21 = NULL;
  p_21 = t;
  t = SSL_int_to_string(p_21);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL,o_2 = NULL;
  k_2 = t;
  t = SSL_explode_string(k_2);
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_2), term_g_16), (ATerm) ATinsert(ATempty, term_g_16));
  t = conc_0_0(t);
  l_2 = t;
  t = SSL_implode_string(l_2);
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm m_21 = NULL;
  t = collect_p__1_0(t_4, t);
  t = concat_0_0(t);
  t = topdown_1_0(u_4, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(c_5, t);
  t = concat_0_0(t);
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, m_21);
  t = topdown_1_0(d_5, t);
  return(t);
}
ATerm _2_0 (ATerm k_65 (ATerm), ATerm l_65 (ATerm), ATerm t)
{
  ATerm r_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,d_22 = NULL,b_2 = NULL,j_2 = NULL;
  d_22 = t;
  if(match_cons(t, sym__2))
    {
      t_21 = ATgetArgument(t, 0);
      u_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_22);
  r_21 = t;
  t = t_21;
  t = k_65(t);
  v_21 = t;
  t = u_21;
  t = l_65(t);
  w_21 = t;
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_21, w_21);
  b_2 = t;
  t = SSLsetAnnotations(b_2, r_21);
  return(t);
}
ATerm oncetd_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm g_22 (ATerm t)
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_84(t);
        ;
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
        t = SRTS_one(g_22, t);
      }
    return(t);
  }
  t = g_22(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  t = term_j_16;
  h_22 = t;
  t = term_k_16;
  i_22 = t;
  t = term_m_16;
  t = e_6(h_22, i_22, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
      t = term_p_16;
      t = get_options_0_0(t);
      t = oncetd_1_0(j_5, t);
      t = term_q_16;
      l_22 = t;
      t = (ATerm) ATinsert(ATempty, term_v_16);
      m_22 = t;
      t = SSL_printnl(l_22, m_22);
      t = term_i_10;
      n_22 = t;
      t = SSL_exit(n_22);
      t = (ATerm) ATinsert(ATempty, term_v_16);
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
      {
        ATerm p_22 = NULL,s_22 = NULL;
        t = term_q_16;
        p_22 = t;
        t = (ATerm) ATinsert(ATempty, term_w_16);
        s_22 = t;
        t = SSL_printnl(p_22, s_22);
        t = (ATerm) ATinsert(ATempty, term_w_16);
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
  ATerm w_22 = NULL,c_23 = NULL;
  t = term_b_4;
  t = o_110(t);
  w_22 = t;
  t = (ATerm) ATinsert(ATempty, x_64);
  c_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_22, (ATerm) ATinsert(ATempty, x_64));
  t = p_5(w_22, c_23, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("out-type", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("in-type", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm InOutId_2_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_23 = NULL;
      t = _2_0(l_5, _id, t);
      if(match_cons(t, sym__2))
        {
          ATerm c_17 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) c_17) != ATmakeSymbol("out-type", 0, ATtrue)))
            _fail(t);
          f_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_5(i_0, f_23, t);
      ;
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      {
        ATerm i_23 = NULL,s_2 = NULL,t_2 = NULL;
        t = _2_0(n_5, _id, t);
        if(match_cons(t, sym__2))
          {
            ATerm d_17 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_17) != ATmakeSymbol("in-type", 0, ATtrue)))
              _fail(t);
            i_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_explode_term(i_23);
        if(match_cons(t, sym__2))
          {
            s_2 = ATgetArgument(t, 0);
            {
              ATerm f_17 = ATgetArgument(t, 1);
              if(((ATgetType(f_17) == AT_LIST) && !(ATisEmpty(f_17))))
                {
                  t_2 = ATgetFirst((ATermList) f_17);
                  {
                    ATerm h_17 = (ATerm) ATgetNext((ATermList) f_17);
                    if(((ATgetType(h_17) != AT_LIST) || !(ATisEmpty(h_17))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = s_2;
        {
          ATerm i_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_0(t);
              ;
              LocalPopChoice(j_17);
            }
          else
            {
              t = i_17;
              t = type_failure_0_0(t);
            }
          t = t_2;
        }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
  j_23 = t;
  t = term_b_4;
  t = whoami_0_0(t);
  k_23 = t;
  t = term_q_16;
  n_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_17), k_23), term_k_17);
  o_23 = t;
  t = SSL_printnl(n_23, o_23);
  t = term_i_10;
  p_23 = t;
  t = SSL_exit(p_23);
  t = j_23;
  return(t);
}
ATerm v_5 (ATerm n_50, ATerm o_50, ATerm t)
{
  ATerm t_23 = NULL;
  t = SSL_fputc(n_50, o_50);
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_23);
  return(t);
}
ATerm w_5 (ATerm b_54, ATerm c_54, ATerm t)
{
  ATerm v_23 = NULL;
  t = SSL_write_term_to_stream_text(b_54, c_54);
  v_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_23);
  return(t);
}
ATerm y_5 (ATerm f_101 (ATerm), ATerm a_452, ATerm f_54, ATerm t)
{
  ATerm y_23 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_452, term_m_17);
  t = open_stream_0_0(t);
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_23, f_54);
  t = f_101(t);
  t = fclose_0_0(t);
  t = f_54;
  return(t);
}
ATerm x_5 (ATerm x_53, ATerm y_53, ATerm t)
{
  ATerm z_23 = NULL;
  t = SSL_write_term_to_stream_baf(x_53, y_53);
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_23);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = fetch_1_0(f_6, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL;
  if(match_cons(t, sym__2))
    {
      d_24 = ATgetArgument(t, 0);
      e_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(h_6, d_24, e_24, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      if(match_cons(n_17, sym_Stream_1))
        {
          f_24 = ATgetArgument(n_17, 0);
        }
      else
        _fail(t);
      g_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(f_24, g_24, t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL;
  if(match_cons(t, sym__2))
    {
      h_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(j_6, h_24, i_24, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_17 = ATgetArgument(t, 0);
      if(match_cons(o_17, sym_Stream_1))
        {
          k_24 = ATgetArgument(o_17, 0);
        }
      else
        _fail(t);
      l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(k_24, l_24, t);
  j_24 = t;
  t = term_p_17;
  m_24 = t;
  t = j_24;
  if(match_cons(t, sym_Stream_1))
    {
      n_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_17, j_24);
  t = v_5(m_24, n_24, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL;
  a_24 = t;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm r_17 = t;
      int s_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_5 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((b_24 != NULL) && (b_24 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_5, t);
          ;
          LocalPopChoice(s_17);
        }
      else
        {
          t = r_17;
          t = term_w_17;
          if(((b_24 != NULL) && (b_24 != t)))
            _fail(t);
          else
            b_24 = t;
        }
      return(t);
    }
    t = _2_0(o_5, _id, t);
    t = a_24;
    {
      ATerm s_5 (ATerm t)
      {
        ATerm c_24 = NULL;
        c_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_24), c_24);
        return(t);
      }
      t = _2_0(_id, s_5, t);
      {
        ATerm x_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(t_5, d_6, t);
            ;
            LocalPopChoice(y_17);
          }
        else
          {
            t = x_17;
            t = _2_0(_id, i_6, t);
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
  ATerm o_24 = NULL,q_24 = NULL,s_24 = NULL,v_24 = NULL,w_24 = NULL;
  o_24 = t;
  t = dtime_0_0(t);
  t = o_24;
  t = h_104(t);
  q_24 = t;
  t = dtime_0_0(t);
  s_24 = t;
  t = q_24;
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_24), (ATerm) ATmakeAppl(sym_Runtime_1, s_24)), w_24);
  return(t);
}
ATerm r_25 (ATerm j_25, ATerm t)
{
  t = SSL_fclose(j_25);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL;
  n_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_25 = ATgetArgument(t, 0);
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_25);
            ;
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
            t = r_25(n_25, t);
          }
      }
    }
  else
    {
      t = r_25(n_25, t);
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
  ATerm s_25 = NULL;
  t = SSL_fopen(p_50, q_50);
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_25);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_25 = NULL;
  t = SSL_stdin_stream();
  t_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_25);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_25 = NULL;
  t = SSL_stdout_stream();
  v_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_25);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_25 = NULL;
  t = SSL_stderr_stream();
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_25);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm j_26 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      j_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_26;
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm m_26 = NULL;
  m_26 = t;
  t = SSL_is_string(m_26);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_18 = ATgetArgument(t, 0);
      ATerm c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_26 = NULL,g_3 = NULL;
        g_26 = t;
        t = SSL_explode_term(g_26);
        if(match_cons(t, sym__2))
          {
            ATerm i_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_18) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_18 = ATgetArgument(t, 1);
              if(((ATgetType(j_18) == AT_LIST) && !(ATisEmpty(j_18))))
                {
                  g_3 = ATgetFirst((ATermList) j_18);
                  {
                    ATerm k_18 = (ATerm) ATgetNext((ATermList) j_18);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = g_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = g_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = g_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = f_18;
        {
          ATerm l_18 = t;
          int m_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_26 = NULL,i_26 = NULL;
              t = _2_0(k_6, _id, t);
              if(match_cons(t, sym__2))
                {
                  h_26 = ATgetArgument(t, 0);
                  i_26 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_6(h_26, i_26, t);
              ;
              LocalPopChoice(m_18);
            }
          else
            {
              t = l_18;
              {
                ATerm k_26 = NULL,l_26 = NULL;
                t = _2_0(l_6, _id, t);
                if(match_cons(t, sym__2))
                  {
                    k_26 = ATgetArgument(t, 0);
                    l_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_6(k_26, l_26, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_n_18;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  ATerm o_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_26 = NULL;
      r_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_26, term_s_18);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = o_18;
      t = debug_1_0(n_6, t);
      _fail(t);
    }
  o_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(q_26, t);
  p_26 = t;
  t = o_26;
  t = fclose_0_0(t);
  t = p_26;
  return(t);
}
ATerm fetch_1_0 (ATerm y_88 (ATerm), ATerm t)
{
  ATerm t_26 (ATerm t)
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_88, _id, t);
        ;
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        t = Cons_2_0(_id, t_26, t);
      }
    return(t);
  }
  t = t_26(t);
  return(t);
}
ATerm u_5 (ATerm d_45, ATerm e_45, ATerm t)
{
  t = SSL_strcat(d_45, e_45);
  return(t);
}
ATerm debug_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  u_26 = t;
  t = d_101(t);
  v_26 = t;
  t = term_q_16;
  w_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_26), v_26);
  x_26 = t;
  t = SSL_printnl(w_26, x_26);
  t = u_26;
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm z_18 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_19);
    }
  else
    {
      t = z_18;
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_c_19;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_27 = NULL;
      d_27 = t;
      t = SSL_is_string(d_27);
      ;
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_6, t);
            ;
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            {
              ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
              h_27 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_27 = ATgetArgument(t, 0);
                  t = i_27;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_27 = ATgetArgument(t, 0);
                      t = i_27;
                      {
                        ATerm j_19 = t;
                        int k_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_19);
                          }
                        else
                          {
                            t = j_19;
                            t = debug_1_0(q_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_27 = NULL,o_27 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_27 = ATgetArgument(t, 0);
                          j_27 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_27;
                      t = eval_config_0_0(t);
                      n_27 = t;
                      t = j_27;
                      t = eval_config_0_0(t);
                      o_27 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_27, o_27);
                      t = u_5(n_27, o_27, t);
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
  ATerm r_27 = NULL,s_27 = NULL;
  r_27 = t;
  t = term_l_19;
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_19, r_27);
  t = e_6(s_27, r_27, t);
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_27 = NULL,w_27 = NULL;
        t = eval_config_0_0(t);
        v_27 = t;
        t = term_l_19;
        w_27 = t;
        t = SSL_table_put(w_27, r_27, v_27);
        t = v_27;
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm q_102 (ATerm), ATerm t)
{
  ATerm o_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_28 = NULL,a_29 = NULL;
      c_28 = t;
      t = term_v_19;
      t = get_config_0_0(t);
      a_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_29, term_z_19);
      t = geq_0_0(t);
      t = c_28;
      t = q_102(t);
      ;
      LocalPopChoice(u_19);
    }
  else
    {
      t = o_19;
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm g_29 = NULL;
  g_29 = t;
  if(match_string(t, "-k"))
    {
      t = g_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_29;
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm j_29 = NULL,l_29 = NULL,w_29 = NULL;
  j_29 = t;
  t = SSL_string_to_int(j_29);
  l_29 = t;
  t = term_a_20;
  w_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_20, l_29);
  t = g_6(w_29, l_29, t);
  t = j_29;
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_6, s_6, t_6, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  if(match_string(t, "-S"))
    {
      t = y_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_29;
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  t = term_v_19;
  z_29 = t;
  t = term_c_20;
  a_30 = t;
  t = term_d_20;
  t = g_6(z_29, a_30, t);
  t = term_e_20;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  b_30 = t;
  t = SSL_string_to_int(b_30);
  c_30 = t;
  t = term_v_19;
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_19, c_30);
  t = g_6(d_30, c_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_30);
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL;
  t = term_l_20;
  e_30 = t;
  t = term_b_4;
  f_30 = t;
  t = term_m_20;
  t = g_6(e_30, f_30, t);
  t = term_q_20;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_s_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_6, v_6, w_6, t);
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_6, y_6, z_6, t);
            ;
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            t = Option_3_0(a_7, b_7, c_7, t);
          }
      }
    }
  return(t);
}
ATerm g_6 (ATerm e_55, ATerm f_55, ATerm t)
{
  ATerm g_30 = NULL;
  t = term_l_19;
  g_30 = t;
  t = SSL_table_put(g_30, e_55, f_55);
  t = (ATerm) ATmakeAppl(sym__3, term_l_19, e_55, f_55);
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  if(match_string(t, "-o"))
    {
      t = i_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_30;
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  j_30 = t;
  t = term_x_20;
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_20, j_30);
  t = g_6(k_30, j_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_30);
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_y_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_7, e_7, f_7, t);
  return(t);
}
ATerm b_6 (ATerm c_60, ATerm d_60, ATerm b_60, ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_60, d_60);
  {
    ATerm a_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_21 = ATgetArgument(t, 0);
            ATerm g_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_60, d_60);
        t = e_6(c_60, d_60, t);
        ;
        LocalPopChoice(c_21);
      }
    else
      {
        t = a_21;
        t = (ATerm) ATempty;
      }
    n_30 = t;
    t = (ATerm) ATinsert(CheckATermList(n_30), b_60);
    o_30 = t;
    t = SSL_table_put(c_60, d_60, o_30);
    t = m_30;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
      t = term_b_4;
      t = g_0(t);
      z_30 = t;
      t = term_p_8;
      a_31 = t;
      t = term_d_9;
      b_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_8, term_d_9, z_30);
      t = b_6(a_31, b_31, z_30, t);
      _fail(t);
    }
  else
    {
      ATerm f_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_30 = ATgetFirst((ATermList) t);
          w_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_30 = ATgetFirst((ATermList) t);
          y_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_30;
      t = d_0(t);
      t = x_30;
      t = e_0(t);
      f_31 = t;
      t = (ATerm) ATinsert(CheckATermList(y_30), f_31);
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm h_31 = NULL;
  h_31 = t;
  if(match_string(t, "-i"))
    {
      t = h_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_31;
    }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL;
  i_31 = t;
  t = term_h_21;
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_21, i_31);
  t = g_6(j_31, i_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_31);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_k_21;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_7, h_7, i_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_4;
  t = whoami_0_0(t);
  k_31 = t;
  t = term_q_16;
  l_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_21), k_31);
  m_31 = t;
  t = SSL_printnl(l_31, m_31);
  t = term_i_10;
  n_31 = t;
  t = SSL_exit(n_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_21;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_6 (ATerm n_47, ATerm o_47, ATerm t)
{
  ATerm s_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_47, o_47);
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = s_21;
      t = SSL_addr(n_47, o_47);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t)
{
  ATerm y_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_94(t);
      ;
      LocalPopChoice(z_21);
    }
  else
    {
      t = y_21;
      {
        ATerm q_31 = NULL,r_31 = NULL,u_31 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_31 = ATgetFirst((ATermList) t);
            r_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_31;
        t = foldr_2_0(r_94, s_94, t);
        u_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_31, u_31);
        t = s_94(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL;
  if(match_cons(t, sym__2))
    {
      l_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(l_4, m_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_31 = NULL,h_4 = NULL,i_4 = NULL;
  t = times_0_0(t);
  h_4 = t;
  t = SSL_explode_term(h_4);
  if(match_cons(t, sym__2))
    {
      ATerm a_22 = ATgetArgument(t, 0);
      i_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4;
  t = foldr_2_0(j_7, k_7, t);
  x_31 = t;
  t = SSL_TicksToSeconds(x_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  if(match_cons(t, sym__2))
    {
      o_32 = ATgetArgument(t, 0);
      p_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_32;
        if((o_32 != t))
          {
            _fail(t);
          }
        t = n_32;
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        t = (ATerm) ATmakeAppl(sym__2, o_32, p_32);
        {
          ATerm e_22 = t;
          int f_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_32, p_32);
              ;
              LocalPopChoice(f_22);
            }
          else
            {
              t = e_22;
              t = SSL_gtr(o_32, p_32);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_32, p_32);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_32 = NULL,u_32 = NULL;
      s_32 = t;
      t = term_v_19;
      t = get_config_0_0(t);
      u_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_32, term_i_10);
      t = geq_0_0(t);
      t = s_32;
      t = p_102(t);
      ;
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  t = run_time_0_0(t);
  w_32 = t;
  t = term_b_4;
  t = whoami_0_0(t);
  x_32 = t;
  t = term_q_16;
  y_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_22), w_32), term_o_22), x_32);
  z_32 = t;
  t = SSL_printnl(y_32, z_32);
  t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_22), w_32), term_o_22), x_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_20;
  c_33 = t;
  t = SSL_exit(c_33);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm r_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(t_22);
    }
  else
    {
      t = r_22;
      {
        ATerm u_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(v_22);
          }
        else
          {
            t = u_22;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_105 (ATerm), ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      t = fetch_1_0(m_7, t);
    }
  t = f_105(t);
  return(t);
}
ATerm map_1_0 (ATerm o_88 (ATerm), ATerm t)
{
  ATerm d_33 (ATerm t)
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        t = Cons_2_0(o_88, d_33, t);
      }
    return(t);
  }
  t = d_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_33 = ATgetFirst((ATermList) t);
      g_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_33 = NULL,l_33 = NULL;
        t = g_33;
        t = c_0(t);
        k_33 = t;
        t = f_33;
        t = a_0(t);
        l_33 = t;
        t = g_33;
        {
          ATerm o_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(k_33), l_33);
            return(t);
          }
          t = reverse_acc_2_0(a_0, o_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_4;
      t = c_0(t);
    }
  return(t);
}
ATerm e_6 (ATerm t_61, ATerm u_61, ATerm t)
{
  t = SSL_table_get(t_61, u_61);
  return(t);
}
ATerm Program_1_0 (ATerm w_78 (ATerm), ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,n_2 = NULL,p_2 = NULL;
  p_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_33);
  m_33 = t;
  t = n_33;
  t = w_78(t);
  o_33 = t;
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_33);
  n_2 = t;
  t = SSLsetAnnotations(n_2, m_33);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm u_33 = NULL;
  u_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_33), term_d_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL;
  ATerm e_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_23);
    }
  else
    {
      t = e_23;
      t = fetch_1_0(p_7, t);
    }
  t = term_h_23;
  t = echo_0_0(t);
  t = term_p_8;
  s_33 = t;
  t = term_d_9;
  t_33 = t;
  t = term_l_23;
  t = e_6(s_33, t_33, t);
  t = reverse_acc_2_0(_id, q_7, t);
  t = map_1_0(r_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,q_2 = NULL,r_2 = NULL;
  y_33 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      w_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_33);
  v_33 = t;
  t = w_33;
  t = x_78(t);
  x_33 = t;
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, x_33);
  q_2 = t;
  t = SSLsetAnnotations(q_2, v_33);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
  c_34 = t;
  {
    ATerm m_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_23 = ATgetFirst((ATermList) t);
                ATerm s_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_34;
          }
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = m_23;
        t = (ATerm) ATinsert(ATempty, c_34);
      }
    d_34 = t;
    t = term_w_17;
    e_34 = t;
    t = SSL_printnl(e_34, d_34);
    t = c_34;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_21;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL;
  t = term_u_23;
  i_34 = t;
  t = term_b_4;
  j_34 = t;
  t = term_w_23;
  t = g_6(i_34, j_34, t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm v_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  t = term_u_23;
  k_34 = t;
  t = term_b_4;
  l_34 = t;
  t = term_w_23;
  t = g_6(k_34, l_34, t);
  t = term_p_24;
  m_34 = t;
  t = term_b_4;
  n_34 = t;
  t = term_r_24;
  t = g_6(m_34, n_34, t);
  t = term_t_24;
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_7, t_7, u_7, t);
      ;
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
      t = Option_3_0(v_7, w_7, x_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_2 = NULL,v_2 = NULL;
  t_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_34 = ATgetFirst((ATermList) t);
      q_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_34);
  o_34 = t;
  t = p_34;
  t = z_69(t);
  r_34 = t;
  t = q_34;
  t = a_70(t);
  s_34 = t;
  v_2 = t;
  t = (ATerm) ATinsert(CheckATermList(s_34), r_34);
  u_2 = t;
  t = SSLsetAnnotations(u_2, o_34);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL;
  y_34 = t;
  t = term_q_21;
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_21, y_34);
  t = g_6(z_34, y_34, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, y_34);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_25;
        t = i_107(t);
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
      }
    t = x_34;
    {
      ATerm z_7 (ATerm t)
      {
        ATerm c_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_25 = t;
            int f_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(f_25);
              }
            else
              {
                t = e_25;
                t = i_107(t);
                t = Cons_2_0(_id, z_7, t);
              }
            ;
            LocalPopChoice(d_25);
          }
        else
          {
            t = c_25;
            {
              ATerm b_35 = NULL,c_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_35 = ATgetFirst((ATermList) t);
                  c_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_35), (ATerm) ATmakeAppl(sym_Undefined_1, b_35));
            }
          }
        return(t);
      }
      t = Cons_2_0(y_7, z_7, t);
    }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm q_35 = NULL;
  q_35 = t;
  if(match_string(t, "--help"))
    {
      t = q_35;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_35;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_35;
        }
    }
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL;
  t = term_z_22;
  r_35 = t;
  t = term_b_4;
  s_35 = t;
  t = term_g_25;
  t = g_6(r_35, s_35, t);
  t = term_h_25;
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm e_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL;
  j_35 = t;
  t = term_p_8;
  m_35 = t;
  t = term_d_9;
  n_35 = t;
  t = (ATerm) ATempty;
  o_35 = t;
  t = SSL_table_put(m_35, n_35, o_35);
  t = j_35;
  {
    ATerm a_8 (ATerm t)
    {
      ATerm k_25 = t;
      int l_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_107(t);
          ;
          LocalPopChoice(l_25);
        }
      else
        {
          t = k_25;
          {
            ATerm o_25 = t;
            int p_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_8, c_8, d_8, t);
                ;
                LocalPopChoice(p_25);
              }
            else
              {
                t = o_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_8, t);
    {
      ATerm q_25 = t;
      int u_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_35 = NULL;
          z_35 = t;
          {
            ATerm x_25 = t;
            int y_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_5 = NULL;
                t = z_35;
                {
                  ATerm z_25 = t;
                  int a_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_z_22;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(a_26);
                    }
                  else
                    {
                      t = z_25;
                      t = fetch_1_0(e_8, t);
                    }
                  t = z_35;
                  t = default_system_usage_0_0(t);
                  t = term_c_20;
                  g_5 = t;
                  t = SSL_exit(g_5);
                }
                ;
                LocalPopChoice(y_25);
              }
            else
              {
                t = x_25;
                {
                  ATerm k_5 = NULL;
                  t = term_u_23;
                  t = get_config_0_0(t);
                  t = z_35;
                  t = default_system_about_0_0(t);
                  t = term_c_20;
                  k_5 = t;
                  t = SSL_exit(k_5);
                }
              }
          }
          ;
          LocalPopChoice(u_25);
        }
      else
        {
          t = q_25;
          {
            ATerm b_26 = t;
            int c_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
                ATerm f_8 (ATerm t)
                {
                  ATerm g_8 (ATerm t)
                  {
                    if(((k_35 != NULL) && (k_35 != t)))
                      _fail(t);
                    else
                      k_35 = t;
                    return(t);
                  }
                  t = Undefined_1_0(g_8, t);
                  return(t);
                }
                t = fetch_1_0(f_8, t);
                t = term_q_16;
                a_36 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_35)), term_d_26);
                b_36 = t;
                t = SSL_printnl(a_36, b_36);
                t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_35)), term_d_26));
                t = default_system_usage_0_0(t);
                t = term_i_10;
                c_36 = t;
                t = SSL_exit(c_36);
                ;
                LocalPopChoice(c_26);
              }
            else
              {
                t = b_26;
              }
          }
        }
      l_35 = t;
      t = term_p_8;
      p_35 = t;
      t = SSL_table_destroy(p_35);
      t = l_35;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  t = parse_options_1_0(h_105, t);
  f_36 = t;
  t = term_j_16;
  g_36 = t;
  t = SSL_table_create(g_36);
  t = term_j_16;
  h_36 = t;
  t = term_k_16;
  i_36 = t;
  t = SSL_table_put(h_36, i_36, f_36);
  t = f_36;
  t = j_105(t);
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_105, t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        {
          ATerm n_26 = t;
          int s_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_105(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_26);
            }
          else
            {
              t = n_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = if_verbose2_1_0(n_8, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL;
  t = term_y_26;
  j_36 = t;
  t = term_b_4;
  k_36 = t;
  t = term_z_26;
  t = g_6(j_36, k_36, t);
  t = term_a_27;
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_b_27;
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL;
  l_36 = t;
  t = term_q_21;
  t = get_config_0_0(t);
  m_36 = t;
  t = term_q_16;
  n_36 = t;
  t = (ATerm) ATinsert(ATempty, m_36);
  o_36 = t;
  t = SSL_printnl(n_36, o_36);
  t = l_36;
  return(t);
}
ATerm iowrap_3_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm t)
{
  ATerm h_8 (ATerm t)
  {
    ATerm c_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_104(t);
        ;
        LocalPopChoice(e_27);
      }
    else
      {
        t = c_27;
        {
          ATerm f_27 = t;
          int g_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(g_27);
            }
          else
            {
              t = f_27;
              {
                ATerm k_27 = t;
                int l_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(l_27);
                  }
                else
                  {
                    t = k_27;
                    {
                      ATerm m_27 = t;
                      int p_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(k_8, l_8, m_8, t);
                          ;
                          LocalPopChoice(p_27);
                        }
                      else
                        {
                          t = m_27;
                          {
                            ATerm q_27 = t;
                            int t_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(t_27);
                              }
                            else
                              {
                                t = q_27;
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
  ATerm j_8 (ATerm t)
  {
    ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
    p_36 = t;
    {
      ATerm u_27 = t;
      int x_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((q_36 != NULL) && (q_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_36 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_8, t);
          ;
          LocalPopChoice(x_27);
        }
      else
        {
          t = u_27;
          t = term_y_27;
          q_36 = t;
        }
      t = not_null(q_36);
      t = ReadFromFile_0_0(t);
      r_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_36, r_36);
      t = apply_strategy_1_0(q_104, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(h_8, s_104, i_8, j_8, t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--strict", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_z_27;
  return(t);
}
ATerm io_idwrap_3_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm t)
{
  ATerm q_8 (ATerm t)
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_36 = NULL,w_36 = NULL,z_36 = NULL;
        if(match_cons(t, sym__2))
          {
            v_36 = ATgetArgument(t, 0);
            w_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, term_d_28, w_36);
        t = k_110(t);
        z_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_36, z_36);
        ;
        LocalPopChoice(b_28);
      }
    else
      {
        t = a_28;
      }
    t = l_110(t);
    {
      ATerm e_28 = t;
      int f_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_37 = NULL,c_37 = NULL,f_37 = NULL;
          if(match_cons(t, sym__2))
            {
              b_37 = ATgetArgument(t, 0);
              c_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, term_g_28, c_37);
          t = k_110(t);
          f_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_37, f_37);
          ;
          LocalPopChoice(f_28);
        }
      else
        {
          t = e_28;
        }
    }
    return(t);
  }
  ATerm r_8 (ATerm t)
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_110(t);
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = Option_3_0(s_8, t_8, u_8, t);
      }
    return(t);
  }
  t = iowrap_3_0(q_8, r_8, default_usage_0_0, t);
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = InOutId_2_0(y_8, z_8, t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = _2_0(_id, ppgenerate_0_0, t);
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = Option_3_0(a_9, b_9, c_9, t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"sdf-2.1\"", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = term_j_28;
  return(t);
}
ATerm a_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-v", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = term_k_28;
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_idwrap_3_0(v_8, w_8, x_8, t);
  return(t);
}
