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
ATerm term_z_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_r_24;
ATerm term_l_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_k_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_c_23;
ATerm term_x_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_z_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_o_18;
ATerm term_l_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_v_17;
ATerm term_m_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_z_14;
ATerm term_e_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_y_11;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_s_9;
ATerm term_o_9;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_o_7;
ATerm term_s_6;
ATerm term_h_3;
void init_constant_terms (void)
{
  ATprotect(&(term_h_3));
  term_h_3 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_Arg_1, term_q_8);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_SOpt_2, term_b_10, term_c_10);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_lit_1, term_v_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_lit_1, term_x_12);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_e_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_h_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym__2, term_v_18, term_h_3);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__2, term_s_6, term_o_7);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_h_3);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_o_21, term_h_3);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_h_3);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_c_23, term_h_3);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
ATerm Option_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm k_1 (ATerm b_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm topdown_1_0 (ATerm x_70 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm e_77 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm flat_alt_0_0 (ATerm);
ATerm e_0 (ATerm);
ATerm argument_list_0_0 (ATerm);
ATerm v_0 (ATerm);
ATerm symbol2abox_1_0 (ATerm x_68 (ATerm), ATerm);
ATerm _2_0 (ATerm k_53 (ATerm), ATerm l_53 (ATerm), ATerm);
ATerm pair_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm a_1 (ATerm);
ATerm d_1 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm m_1 (ATerm);
ATerm make_0_0 (ATerm);
ATerm NonTerminal_0_0 (ATerm);
ATerm l_25 (ATerm q_23, ATerm s_23, ATerm w_23, ATerm);
ATerm number_node_1_0 (ATerm a_69 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm number_nonterminals_0_0 (ATerm);
ATerm symbols2pp_entries_1_0 (ATerm w_68 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm x_1 (ATerm);
ATerm generate_pp_entries_0_0 (ATerm);
ATerm at_last_1_0 (ATerm p_77 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm unquote_chars_2_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm);
ATerm a_2 (ATerm);
ATerm collect_p__1_0 (ATerm i_98 (ATerm), ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm ppgenerate_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm b_72 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm p_5 (ATerm m_33, ATerm n_33, ATerm);
ATerm q_5 (ATerm u_98 (ATerm), ATerm x_52, ATerm);
ATerm InOutId_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm v_5 (ATerm n_38, ATerm o_38, ATerm);
ATerm w_5 (ATerm b_42, ATerm c_42, ATerm);
ATerm y_5 (ATerm l_89 (ATerm), ATerm e_425, ATerm f_42, ATerm);
ATerm x_5 (ATerm x_41, ATerm y_41, ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm i_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm n_92 (ATerm), ATerm);
ATerm u_40 (ATerm o_40, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm z_5 (ATerm d_42, ATerm);
ATerm a_6 (ATerm p_38, ATerm q_38, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm m_42 (ATerm e_41, ATerm);
ATerm n_42 (ATerm i_41, ATerm j_41, ATerm k_41, ATerm);
ATerm o_42 (ATerm s_41, ATerm t_41, ATerm u_41, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm y_76 (ATerm), ATerm);
ATerm u_5 (ATerm d_33, ATerm e_33, ATerm);
ATerm debug_1_0 (ATerm j_89 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm n_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm w_90 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm g_6 (ATerm e_43, ATerm f_43, ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm b_6 (ATerm c_48, ATerm d_48, ATerm b_48, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_6 (ATerm n_35, ATerm o_35, ATerm);
ATerm foldr_2_0 (ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_90 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm need_help_1_0 (ATerm l_93 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_76 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm e_6 (ATerm t_49, ATerm u_49, ATerm);
ATerm g_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_57 (ATerm), ATerm a_58 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm o_95 (ATerm), ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm parse_options_1_0 (ATerm n_95 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_93 (ATerm), ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm iowrap_3_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm);
ATerm z_6 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm io_idwrap_3_0 (ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Option_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm f_0 = NULL,q_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_0 = NULL,t_0 = NULL,u_0 = NULL;
      t = term_h_3;
      t = p_0(t);
      r_0 = t;
      t = term_s_6;
      t_0 = t;
      t = term_o_7;
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_6, term_o_7, r_0);
      t = b_6(t_0, u_0, r_0, t);
      _fail(t);
    }
  else
    {
      ATerm x_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_0 = ATgetFirst((ATermList) t);
          q_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_0;
      t = m_0(t);
      t = term_h_3;
      t = n_0(t);
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
      ATerm q_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_7) != ATmakeSymbol("", 0, ATtrue)))
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
  h_1 = t;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
      {
        ATerm t_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_0 (ATerm t)
            {
              t = g_1;
              return(t);
            }
            t = e_1;
            t = at_end_1_0(a_0, t);
            ;
            LocalPopChoice(v_7);
          }
        else
          {
            t = t_7;
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
ATerm topdown_1_0 (ATerm x_70 (ATerm), ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = topdown_1_0(x_70, t);
    return(t);
  }
  t = x_70(t);
  t = SRTS_all(b_0, t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_77 (ATerm), ATerm t)
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
          ATerm o_0 = NULL,z_0 = NULL,l_1 = NULL;
          t = SSLgetAnnotations(h_2);
          o_0 = t;
          t = g_2;
          t = i_2(t);
          z_0 = t;
          t = (ATerm) ATinsert(CheckATermList(z_0), f_2);
          l_1 = t;
          t = SSLsetAnnotations(l_1, o_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_2;
        t = e_77(t);
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
      ATerm c_0 (ATerm t)
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
      t = w_2;
      t = at_end_1_0(c_0, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm t)
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
        ATerm w_7 = t;
        int y_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 = NULL,d_2 = NULL,e_2 = NULL,q_1 = NULL;
            t = SSLgetAnnotations(z_3);
            w_1 = t;
            t = b_4;
            t = v_83(t);
            d_2 = t;
            t = c_4;
            t = filter_1_0(v_83, t);
            e_2 = t;
            t = (ATerm) ATinsert(CheckATermList(e_2), d_2);
            q_1 = t;
            t = SSLsetAnnotations(q_1, w_1);
            ;
            LocalPopChoice(y_7);
          }
        else
          {
            t = w_7;
            t = c_4;
            t = filter_1_0(v_83, t);
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
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_6 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, b_5, e_5);
            t = flat_alt_0_0(t);
            f_6 = t;
            t = (ATerm) ATinsert(CheckATermList(f_6), h_5);
            ;
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
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
ATerm e_0 (ATerm t)
{
  ATerm q_4 = NULL;
  q_4 = t;
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_4;
        {
          ATerm g_8 = t;
          if((PushChoice() == 0))
            {
              ATerm q_2 = NULL;
              q_2 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = q_2;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm i_8 = ATgetFirst((ATermList) t);
                      ATerm m_8 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = q_2;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_8;
            }
          t = (ATerm) ATinsert(ATempty, q_4);
        }
        ;
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        t = q_4;
      }
  }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(e_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL;
  a_5 = t;
  if(match_cons(t, sym_Arg_1))
    {
      z_4 = ATgetArgument(t, 0);
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_6 = NULL,u_1 = NULL;
            t = SSLgetAnnotations(a_5);
            l_6 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, z_4);
            u_1 = t;
            t = SSLsetAnnotations(u_1, l_6);
            t = term_r_8;
            ;
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            t = a_5;
          }
      }
    }
  else
    {
      t = a_5;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm x_68 (ATerm), ATerm t)
{
  ATerm n_7 = NULL,p_7 = NULL,r_7 = NULL,s_7 = NULL,u_7 = NULL;
  ATerm a_12 (ATerm t)
  {
    ATerm d_12 (ATerm h_10, ATerm i_10, ATerm j_10, ATerm k_10, ATerm t)
    {
      ATerm n_10 = NULL,o_10 = NULL,s_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
      t = SSL_explode_term(k_10);
      if(match_cons(t, sym__2))
        {
          v_10 = ATgetArgument(t, 0);
          w_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, i_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, j_10, v_10)));
      t = conc_0_0(t);
      n_10 = t;
      t = w_10;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      x_10 = t;
      t = make_0_0(t);
      o_10 = t;
      t = x_10;
      {
        ATerm s_0 (ATerm t)
        {
          ATerm a_11 = NULL;
          a_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_10, n_10), a_11);
          t = a_12(t);
          return(t);
        }
        t = map_1_0(s_0, t);
        t = concat_0_0(t);
        if(((s_10 != NULL) && (s_10 != t)))
          _fail(t);
        else
          s_10 = t;
        t = (ATerm) ATinsert(CheckATermList(s_10), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, h_10, n_10), o_10));
      }
      return(t);
    }
    ATerm b_11 = NULL,d_11 = NULL,e_11 = NULL,i_11 = NULL,l_11 = NULL,m_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,t_11 = NULL;
    if(match_cons(t, sym__2))
      {
        l_11 = ATgetArgument(t, 0);
        p_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = p_11;
    {
      ATerm s_8 = t;
      int t_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm u_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(t_8);
          t = (ATerm) ATempty;
        }
      else
        {
          t = s_8;
          if(match_cons(t, sym__2))
            {
              q_11 = ATgetArgument(t, 0);
              t_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_11;
          {
            ATerm v_8 = t;
            int w_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_sort_1))
                  {
                    ATerm x_8 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                LocalPopChoice(w_8);
                t = l_11;
                {
                  ATerm y_8 = t;
                  int z_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym__2))
                        {
                          ATerm b_9 = ATgetArgument(t, 0);
                          ATerm c_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(z_8);
                      t = (ATerm) ATempty;
                    }
                  else
                    {
                      t = y_8;
                      t = (ATerm) ATempty;
                    }
                }
              }
            else
              {
                t = v_8;
                {
                  ATerm d_9 = t;
                  int e_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_char_class_1))
                        {
                          ATerm f_9 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(e_9);
                      t = l_11;
                      {
                        ATerm g_9 = t;
                        int h_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym__2))
                              {
                                ATerm i_9 = ATgetArgument(t, 0);
                                ATerm j_9 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(h_9);
                            t = (ATerm) ATempty;
                          }
                        else
                          {
                            t = g_9;
                            t = (ATerm) ATempty;
                          }
                      }
                    }
                  else
                    {
                      t = d_9;
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
                                ATerm k_9 = t;
                                int m_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL,m_4 = NULL,s_4 = NULL,v_1 = NULL;
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
                                    t = q_11;
                                    if(((r_7 != NULL) && (r_7 != t)))
                                      _fail(t);
                                    else
                                      r_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_alt_2, i_11, (ATerm) ATmakeAppl(sym_alt_2, d_11, e_11));
                                    t = flat_alt_0_0(t);
                                    a_4 = t;
                                    t = term_o_9;
                                    g_4 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, term_o_9, a_4);
                                    t = p_5(g_4, a_4, t);
                                    f_4 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_11, o_11), (ATerm) ATmakeAppl(sym__2, q_11, f_4));
                                    t = a_12(t);
                                    s_4 = t;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        i_4 = ATgetFirst((ATermList) t);
                                        k_4 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(s_4);
                                    h_4 = t;
                                    t = i_4;
                                    t = topdown_1_0(v_0, t);
                                    m_4 = t;
                                    t = (ATerm) ATinsert(CheckATermList(k_4), m_4);
                                    v_1 = t;
                                    t = SSLsetAnnotations(v_1, h_4);
                                    ;
                                    LocalPopChoice(m_9);
                                  }
                                else
                                  {
                                    t = k_9;
                                    t = d_12(m_11, o_11, q_11, t_11, t);
                                  }
                              }
                            }
                          else
                            {
                              t = d_12(m_11, o_11, q_11, t_11, t);
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
                                ATerm q_9 = t;
                                int r_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_11, o_11), (ATerm) ATmakeAppl(sym__2, q_11, i_11));
                                    t = a_12(t);
                                    ;
                                    LocalPopChoice(r_9);
                                  }
                                else
                                  {
                                    t = q_9;
                                    t = d_12(m_11, o_11, q_11, t_11, t);
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
                              t = d_12(m_11, o_11, q_11, t_11, t);
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
  t = x_68(t);
  if(((s_7 != NULL) && (s_7 != t)))
    _fail(t);
  else
    s_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_7, u_7);
  t = a_12(t);
  return(t);
}
ATerm _2_0 (ATerm k_53 (ATerm), ATerm l_53 (ATerm), ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,i_12 = NULL,k_12 = NULL,m_12 = NULL,n_12 = NULL,z_1 = NULL;
  n_12 = t;
  if(match_cons(t, sym__2))
    {
      g_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_12);
  f_12 = t;
  t = g_12;
  t = k_53(t);
  k_12 = t;
  t = i_12;
  t = l_53(t);
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_12, m_12);
  z_1 = t;
  t = SSLsetAnnotations(z_1, f_12);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL;
  q_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_12;
    }
  else
    {
      ATerm d_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_12 = ATgetFirst((ATermList) t);
          s_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_12 = ATgetFirst((ATermList) t);
          u_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_12;
      t = pair_0_0(t);
      d_13 = t;
      t = (ATerm) ATinsert(CheckATermList(d_13), (ATerm) ATmakeAppl(sym__2, r_12, t_12));
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm h_17 = NULL,j_17 = NULL,u_17 = NULL,x_17 = NULL,b_3 = NULL;
  u_17 = t;
  if(match_cons(t, sym_lit_1))
    {
      j_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_17);
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, j_17);
  b_3 = t;
  t = SSLsetAnnotations(b_3, h_17);
  if(match_cons(t, sym_lit_1))
    {
      x_17 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_9, (ATerm) ATmakeAppl(sym_S_1, x_17));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          x_17 = ATgetArgument(t, 0);
          {
            ATerm w_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, x_17);
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
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
  ATerm j_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,p_19 = NULL,q_19 = NULL,s_19 = NULL,t_19 = NULL,q_3 = NULL,h_22 = NULL,w_19 = NULL,m_3 = NULL;
  t_19 = t;
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      p_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_19);
  m_19 = t;
  t = n_19;
  if(match_cons(t, sym_lit_1))
    {
      s_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_19);
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, s_19);
  m_3 = t;
  t = SSLsetAnnotations(m_3, q_19);
  if(match_cons(t, sym_lit_1))
    {
      w_19 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_9, (ATerm) ATmakeAppl(sym_S_1, w_19));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          w_19 = ATgetArgument(t, 0);
          {
            ATerm x_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, w_19);
    }
  j_19 = t;
  t = p_19;
  t = _2_0(_id, j_1, t);
  if(match_cons(t, sym_lit_1))
    {
      h_22 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_9, (ATerm) ATmakeAppl(sym_S_1, h_22));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          h_22 = ATgetArgument(t, 0);
          {
            ATerm a_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, h_22);
    }
  l_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_19, l_19);
  q_3 = t;
  t = SSLsetAnnotations(q_3, m_19);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_e_10), (ATerm) ATinsert(ATinsert(ATempty, l_19), j_19));
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm r_21 = NULL,a_22 = NULL;
  r_21 = t;
  if(match_cons(t, sym_iter_1))
    {
      a_22 = ATgetArgument(t, 0);
      {
        ATerm z_7 = NULL,o_3 = NULL;
        t = SSLgetAnnotations(r_21);
        z_7 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, a_22);
        o_3 = t;
        t = SSLsetAnnotations(o_3, z_7);
      }
    }
  else
    {
      ATerm p_8 = NULL,p_3 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          a_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_21);
      p_8 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, a_22);
      p_3 = t;
      t = SSLsetAnnotations(p_3, p_8);
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm o_22 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      o_22 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_9, (ATerm) ATmakeAppl(sym_S_1, o_22));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          o_22 = ATgetArgument(t, 0);
          {
            ATerm g_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, o_22);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,k_14 = NULL,m_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,c_3 = NULL,b_16 = NULL,a_3 = NULL,q_15 = NULL,t_15 = NULL;
      t = reverse_acc_2_0(_id, w_0, t);
      s_14 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_14 = ATgetFirst((ATermList) t);
          i_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_14);
      g_14 = t;
      t = h_14;
      if(match_cons(t, sym__2))
        {
          p_14 = ATgetArgument(t, 0);
          q_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_14);
      o_14 = t;
      t = q_14;
      if(match_cons(t, sym_iter_1))
        {
          q_15 = ATgetArgument(t, 0);
          {
            ATerm w_6 = NULL,m_2 = NULL;
            t = SSLgetAnnotations(q_14);
            w_6 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, q_15);
            m_2 = t;
            t = SSLsetAnnotations(m_2, w_6);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              q_15 = ATgetArgument(t, 0);
              {
                ATerm a_7 = NULL,v_2 = NULL;
                t = SSLgetAnnotations(q_14);
                a_7 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, q_15);
                v_2 = t;
                t = SSLsetAnnotations(v_2, a_7);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  q_15 = ATgetArgument(t, 0);
                  t_15 = ATgetArgument(t, 1);
                  {
                    ATerm f_7 = NULL,y_2 = NULL;
                    t = SSLgetAnnotations(q_14);
                    f_7 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, q_15, t_15);
                    y_2 = t;
                    t = SSLsetAnnotations(y_2, f_7);
                  }
                }
              else
                {
                  ATerm m_7 = NULL,z_2 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      q_15 = ATgetArgument(t, 0);
                      t_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_14);
                  m_7 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, q_15, t_15);
                  z_2 = t;
                  t = SSLsetAnnotations(z_2, m_7);
                }
            }
        }
      r_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_14, r_14);
      a_3 = t;
      t = SSLsetAnnotations(a_3, o_14);
      if(match_cons(t, sym_lit_1))
        {
          b_16 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_9, (ATerm) ATmakeAppl(sym_S_1, b_16));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              b_16 = ATgetArgument(t, 0);
              {
                ATerm p_10 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, b_16);
        }
      k_14 = t;
      t = i_14;
      t = map_1_0(y_0, t);
      m_14 = t;
      t = (ATerm) ATinsert(CheckATermList(m_14), k_14);
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
        ATerm t_10 = t;
        if((PushChoice() == 0))
          {
            ATerm g_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,e_3 = NULL;
            k_18 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_18 = ATgetFirst((ATermList) t);
                j_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_18);
            g_18 = t;
            t = j_18;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_18), i_18);
            e_3 = t;
            t = SSLsetAnnotations(e_3, g_18);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_10;
          }
        t = a_14;
        t = reverse_acc_2_0(_id, a_1, t);
        f_14 = t;
        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, b_14), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, f_14)));
      }
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm u_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_18 = NULL,n_18 = NULL,r_18 = NULL,s_18 = NULL,l_3 = NULL,y_18 = NULL;
            t = reverse_acc_2_0(_id, d_1, t);
            s_18 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_18 = ATgetFirst((ATermList) t);
                r_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_18);
            m_18 = t;
            t = n_18;
            if(match_cons(t, sym_lit_1))
              {
                y_18 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_9, (ATerm) ATmakeAppl(sym_S_1, y_18));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    y_18 = ATgetArgument(t, 0);
                    {
                      ATerm z_10 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, y_18);
              }
            e_14 = t;
            t = r_18;
            {
              ATerm g_11 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = g_11;
                }
              t = reverse_acc_2_0(_id, f_1, t);
              c_14 = t;
              t = (ATerm) ATinsert(CheckATermList(c_14), e_14);
              l_3 = t;
              t = SSLsetAnnotations(l_3, m_18);
              t = c_14;
              t = pair_0_0(t);
              t = map_1_0(i_1, t);
              d_14 = t;
              t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_14), d_14));
            }
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = u_10;
            t = map_1_0(m_1, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm h_11 = t;
  if((PushChoice() == 0))
    {
      ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,w_4 = NULL;
      i_23 = t;
      if(match_cons(t, sym_lit_1))
        {
          h_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_23);
      g_23 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, h_23);
      w_4 = t;
      t = SSLsetAnnotations(w_4, g_23);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_11;
    }
  return(t);
}
ATerm l_25 (ATerm q_23, ATerm s_23, ATerm w_23, ATerm t)
{
  ATerm a_24 = NULL,y_4 = NULL;
  t = SSLgetAnnotations(q_23);
  a_24 = t;
  t = w_23;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_23, w_23);
  y_4 = t;
  t = SSLsetAnnotations(y_4, a_24);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm a_69 (ATerm), ATerm t)
{
  ATerm n_23 = NULL;
  ATerm i_25 (ATerm t)
  {
    ATerm f_24 = NULL,g_24 = NULL,j_24 = NULL,n_24 = NULL,p_24 = NULL;
    f_24 = t;
    if(match_cons(t, sym__2))
      {
        g_24 = ATgetArgument(t, 0);
        j_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = j_24;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_24 = ATgetFirst((ATermList) t);
        p_24 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_11 = t;
          int n_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_25(f_24, g_24, j_24, t);
              ;
              LocalPopChoice(n_11);
            }
          else
            {
              t = j_11;
              {
                ATerm s_11 = t;
                int u_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_24 = NULL,x_24 = NULL,y_24 = NULL;
                    t = n_24;
                    t = a_69(t);
                    t = term_q_8;
                    y_24 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_24, term_q_8);
                    t = c_6(g_24, y_24, t);
                    x_24 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_24, p_24);
                    t = i_25(t);
                    u_24 = t;
                    t = (ATerm) ATinsert(CheckATermList(u_24), (ATerm) ATmakeAppl(sym__2, g_24, n_24));
                    ;
                    LocalPopChoice(u_11);
                  }
                else
                  {
                    t = s_11;
                    {
                      ATerm h_25 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, g_24, p_24);
                      t = i_25(t);
                      h_25 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_25), n_24);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = l_25(f_24, g_24, j_24, t);
      }
    return(t);
  }
  if(((n_23 != NULL) && (n_23 != t)))
    _fail(t);
  else
    n_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, n_23);
  t = i_25(t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm p_25 = NULL,t_25 = NULL;
  t_25 = t;
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm x_11 = ATgetArgument(t, 0);
            p_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(w_11);
        t = p_25;
      }
    else
      {
        t = v_11;
        t = t_25;
      }
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(n_1, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm w_68 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,e_26 = NULL,f_26 = NULL;
  t = number_nonterminals_0_0(t);
  f_26 = t;
  t = make_0_0(t);
  z_25 = t;
  t = f_26;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm p_1 (ATerm t)
      {
        ATerm h_26 = NULL;
        t = term_h_3;
        t = w_68(t);
        h_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_26, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(p_1, t);
      return(t);
    }
    t = map_1_0(o_1, t);
    t = concat_0_0(t);
    if(((a_26 != NULL) && (a_26 != t)))
      _fail(t);
    else
      a_26 = t;
    t = term_h_3;
    t = w_68(t);
    if(((e_26 != NULL) && (e_26 != t)))
      _fail(t);
    else
      e_26 = t;
    t = (ATerm) ATinsert(CheckATermList(a_26), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, e_26), z_25));
  }
  return(t);
}
ATerm t_1 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm k_26 = NULL;
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_27 = NULL,d_27 = NULL,e_27 = NULL,g_27 = NULL;
      ATerm j_12 = t;
      int l_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              a_27 = ATgetArgument(t, 0);
              {
                ATerm o_12 = ATgetArgument(t, 1);
              }
              e_27 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(l_12);
          {
            ATerm s_1 (ATerm t)
            {
              t = not_null(k_26);
              return(t);
            }
            t = e_27;
            {
              ATerm r_1 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((k_26 != NULL) && (k_26 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      k_26 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(r_1, t);
              t = a_27;
              t = symbols2pp_entries_1_0(s_1, t);
            }
          }
        }
      else
        {
          t = j_12;
          {
            ATerm h_27 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                a_27 = ATgetArgument(t, 0);
                d_27 = ATgetArgument(t, 1);
                e_27 = ATgetArgument(t, 2);
                g_27 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_12)), d_27), (ATerm) ATinsert(ATinsert(ATempty, term_w_12), (ATerm) ATmakeAppl(sym_lit_1, a_27)));
            t = concat_0_0(t);
            h_27 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, h_27, e_27, g_27);
            t = generate_pp_entries_0_0(t);
          }
        }
      ;
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_13 = t;
            if((PushChoice() == 0))
              {
                ATerm i_27 = NULL;
                i_27 = t;
                t = term_e_13;
                t = get_options_0_0(t);
                t = oncetd_1_0(t_1, t);
                t = i_27;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_13;
              }
            t = debug_1_0(x_1, t);
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm at_last_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm n_29 (ATerm t)
  {
    ATerm i_29 = NULL,l_29 = NULL,m_29 = NULL;
    i_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_29 = ATgetFirst((ATermList) t);
        m_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_13 = t;
      int h_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_9 = NULL,o_5 = NULL;
          t = SSLgetAnnotations(i_29);
          a_9 = t;
          t = m_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(m_29), l_29);
          o_5 = t;
          t = SSLsetAnnotations(o_5, a_9);
          t = p_77(t);
          ;
          LocalPopChoice(h_13);
        }
      else
        {
          t = f_13;
          {
            ATerm n_9 = NULL,v_9 = NULL,x_7 = NULL;
            t = SSLgetAnnotations(i_29);
            n_9 = t;
            t = m_29;
            t = n_29(t);
            v_9 = t;
            t = (ATerm) ATinsert(CheckATermList(v_9), l_29);
            x_7 = t;
            t = SSLsetAnnotations(x_7, n_9);
          }
        }
    }
    return(t);
  }
  t = n_29(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_30 = ATgetFirst((ATermList) t);
      b_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_30;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_30;
    }
  else
    {
      t = b_30;
      t = last_0_0(t);
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm m_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_13 = ATgetFirst((ATermList) t);
      m_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_30;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
  g_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_30 = ATgetFirst((ATermList) t);
      {
        ATerm j_13 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_30;
  t = x_85(t);
  t = g_30;
  t = last_0_0(t);
  t = y_85(t);
  t = g_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_13 = ATgetFirst((ATermList) t);
      h_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_30;
  t = at_last_1_0(y_1, t);
  return(t);
}
ATerm foldr_3_0 (ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,t_30 = NULL,u_30 = NULL;
  q_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_30;
      t = t_82(t);
    }
  else
    {
      ATerm z_30 = NULL,c_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_30 = ATgetFirst((ATermList) t);
          u_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_30;
      t = v_82(t);
      z_30 = t;
      t = u_30;
      t = foldr_3_0(t_82, u_82, v_82, t);
      c_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_30, c_31);
      t = u_82(t);
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm i_98 (ATerm), ATerm t)
{
  ATerm i_31 (ATerm t)
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_31 = NULL;
        t = i_98(t);
        g_31 = t;
        t = (ATerm) ATinsert(ATempty, g_31);
        ;
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        {
          ATerm d_10 = NULL,f_10 = NULL;
          f_10 = t;
          t = SSL_explode_term(f_10);
          if(match_cons(t, sym__2))
            {
              ATerm q_13 = ATgetArgument(t, 0);
              d_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_10;
          t = foldr_3_0(a_2, conc_0_0, i_31, t);
        }
      }
    return(t);
  }
  t = i_31(t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm f_32 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      f_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_32;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm r_33 = NULL,y_33 = NULL;
  y_33 = t;
  if(match_cons(t, sym_cons_1))
    {
      r_33 = ATgetArgument(t, 0);
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_11 = NULL,h_12 = NULL,c_8 = NULL,p_12 = NULL;
            t = SSLgetAnnotations(y_33);
            z_11 = t;
            t = SSL_explode_string(r_33);
            t = unquote_chars_2_0(j_2, k_2, t);
            p_12 = t;
            t = SSL_implode_string(p_12);
            h_12 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, h_12);
            c_8 = t;
            t = SSLsetAnnotations(c_8, z_11);
            ;
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            t = y_33;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          r_33 = ATgetArgument(t, 0);
          {
            ATerm u_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_13 = NULL,g_13 = NULL,d_8 = NULL,k_13 = NULL;
                t = SSLgetAnnotations(y_33);
                c_13 = t;
                t = SSL_explode_string(r_33);
                t = unquote_chars_2_0(l_2, n_2, t);
                k_13 = t;
                t = SSL_implode_string(k_13);
                g_13 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, g_13);
                d_8 = t;
                t = SSLsetAnnotations(d_8, c_13);
                ;
                LocalPopChoice(w_13);
              }
            else
              {
                t = u_13;
                t = y_33;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_sort_1))
            {
              r_33 = ATgetArgument(t, 0);
              {
                ATerm x_13 = t;
                int z_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_13 = NULL,r_13 = NULL,h_8 = NULL,v_13 = NULL;
                    t = SSLgetAnnotations(y_33);
                    p_13 = t;
                    t = SSL_explode_string(r_33);
                    t = unquote_chars_2_0(o_2, p_2, t);
                    v_13 = t;
                    t = SSL_implode_string(v_13);
                    r_13 = t;
                    t = (ATerm) ATmakeAppl(sym_sort_1, r_13);
                    h_8 = t;
                    t = SSLsetAnnotations(h_8, p_13);
                    ;
                    LocalPopChoice(z_13);
                  }
                else
                  {
                    t = x_13;
                    t = y_33;
                  }
              }
            }
          else
            {
              t = y_33;
            }
        }
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
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
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm l_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_14;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
  y_35 = t;
  if(match_cons(t, sym_Arg_1))
    {
      x_35 = ATgetArgument(t, 0);
      {
        ATerm n_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_15 = NULL,n_15 = NULL,j_8 = NULL;
            t = SSLgetAnnotations(y_35);
            d_15 = t;
            t = SSL_int_to_string(x_35);
            n_15 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, n_15);
            j_8 = t;
            t = SSLsetAnnotations(j_8, d_15);
            ;
            LocalPopChoice(t_14);
          }
        else
          {
            t = n_14;
            t = y_35;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_selector_2))
        {
          x_35 = ATgetArgument(t, 0);
          w_35 = ATgetArgument(t, 1);
          {
            ATerm v_14 = t;
            int w_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_15 = NULL,c_16 = NULL,k_8 = NULL;
                t = SSLgetAnnotations(y_35);
                x_15 = t;
                t = SSL_int_to_string(x_35);
                c_16 = t;
                t = (ATerm) ATmakeAppl(sym_selector_2, c_16, w_35);
                k_8 = t;
                t = SSLsetAnnotations(k_8, x_15);
                ;
                LocalPopChoice(w_14);
              }
            else
              {
                t = v_14;
                t = y_35;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_S_1))
            {
              x_35 = ATgetArgument(t, 0);
              {
                ATerm x_14 = t;
                int y_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_16 = NULL,l_16 = NULL,l_8 = NULL,q_16 = NULL,t_16 = NULL;
                    t = SSLgetAnnotations(y_35);
                    j_16 = t;
                    t = SSL_explode_string(x_35);
                    t_16 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_16), term_z_14), (ATerm) ATinsert(ATempty, term_z_14));
                    t = conc_0_0(t);
                    q_16 = t;
                    t = SSL_implode_string(q_16);
                    l_16 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, l_16);
                    l_8 = t;
                    t = SSLsetAnnotations(l_8, j_16);
                    ;
                    LocalPopChoice(y_14);
                  }
                else
                  {
                    t = x_14;
                    t = y_35;
                  }
              }
            }
          else
            {
              t = y_35;
            }
        }
    }
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm e_32 = NULL;
  t = collect_p__1_0(b_2, t);
  t = concat_0_0(t);
  t = topdown_1_0(c_2, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(s_2, t);
  t = concat_0_0(t);
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, e_32);
  t = topdown_1_0(t_2, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm b_72 (ATerm), ATerm t)
{
  ATerm j_36 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_72(t);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = SRTS_one(j_36, t);
      }
    return(t);
  }
  t = j_36(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL;
  t = term_c_15;
  k_36 = t;
  t = term_e_15;
  l_36 = t;
  t = term_f_15;
  t = e_6(k_36, l_36, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
      t = term_i_15;
      t = get_options_0_0(t);
      t = oncetd_1_0(u_2, t);
      t = term_j_15;
      n_36 = t;
      t = (ATerm) ATinsert(ATempty, term_k_15);
      o_36 = t;
      t = SSL_printnl(n_36, o_36);
      t = term_q_8;
      m_36 = t;
      t = SSL_exit(m_36);
      t = (ATerm) ATinsert(ATempty, term_k_15);
      ;
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      {
        ATerm q_36 = NULL,r_36 = NULL;
        t = term_j_15;
        q_36 = t;
        t = (ATerm) ATinsert(ATempty, term_l_15);
        r_36 = t;
        t = SSL_printnl(q_36, r_36);
        t = (ATerm) ATinsert(ATempty, term_l_15);
      }
    }
  return(t);
}
ATerm p_5 (ATerm m_33, ATerm n_33, ATerm t)
{
  t = SSL_mkterm(m_33, n_33);
  return(t);
}
ATerm q_5 (ATerm u_98 (ATerm), ATerm x_52, ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  t = term_h_3;
  t = u_98(t);
  w_36 = t;
  t = (ATerm) ATinsert(ATempty, x_52);
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_36, (ATerm) ATinsert(ATempty, x_52));
  t = p_5(w_36, x_36, t);
  return(t);
}
ATerm InOutId_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
  r_37 = t;
  if(match_cons(t, sym__2))
    {
      s_37 = ATgetArgument(t, 0);
      t_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_17 = NULL,i_17 = NULL,l_9 = NULL;
        t = SSLgetAnnotations(r_37);
        i_17 = t;
        t = s_37;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("out-type", 0, ATtrue)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_37, t_37);
        l_9 = t;
        t = SSLsetAnnotations(l_9, i_17);
        if(match_cons(t, sym__2))
          {
            ATerm p_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_15) != ATmakeSymbol("out-type", 0, ATtrue)))
              _fail(t);
            g_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_5(l_0, g_17, t);
        ;
        LocalPopChoice(o_15);
      }
    else
      {
        t = m_15;
        {
          ATerm t_17 = NULL,w_17 = NULL,p_18 = NULL,q_18 = NULL,p_9 = NULL;
          t = SSLgetAnnotations(r_37);
          w_17 = t;
          t = s_37;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("in-type", 0, ATtrue)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, s_37, t_37);
          p_9 = t;
          t = SSLsetAnnotations(p_9, w_17);
          if(match_cons(t, sym__2))
            {
              ATerm r_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_15) != ATmakeSymbol("in-type", 0, ATtrue)))
                _fail(t);
              t_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSL_explode_term(t_17);
          if(match_cons(t, sym__2))
            {
              q_18 = ATgetArgument(t, 0);
              {
                ATerm s_15 = ATgetArgument(t, 1);
                if(((ATgetType(s_15) == AT_LIST) && !(ATisEmpty(s_15))))
                  {
                    p_18 = ATgetFirst((ATermList) s_15);
                    {
                      ATerm u_15 = (ATerm) ATgetNext((ATermList) s_15);
                      if(((ATgetType(u_15) != AT_LIST) || !(ATisEmpty(u_15))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = q_18;
          {
            ATerm v_15 = t;
            int w_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = k_0(t);
                ;
                LocalPopChoice(w_15);
              }
            else
              {
                t = v_15;
                t = type_failure_0_0(t);
              }
            t = p_18;
          }
        }
      }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL;
  w_37 = t;
  t = term_h_3;
  t = whoami_0_0(t);
  x_37 = t;
  t = term_j_15;
  z_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_15), x_37), term_y_15);
  a_38 = t;
  t = SSL_printnl(z_37, a_38);
  t = term_q_8;
  y_37 = t;
  t = SSL_exit(y_37);
  t = w_37;
  return(t);
}
ATerm v_5 (ATerm n_38, ATerm o_38, ATerm t)
{
  ATerm b_38 = NULL;
  t = SSL_fputc(n_38, o_38);
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_38);
  return(t);
}
ATerm w_5 (ATerm b_42, ATerm c_42, ATerm t)
{
  ATerm c_38 = NULL;
  t = SSL_write_term_to_stream_text(b_42, c_42);
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_38);
  return(t);
}
ATerm y_5 (ATerm l_89 (ATerm), ATerm e_425, ATerm f_42, ATerm t)
{
  ATerm d_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_425, term_a_16);
  t = open_stream_0_0(t);
  d_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_38, f_42);
  t = l_89(t);
  t = fclose_0_0(t);
  t = f_42;
  return(t);
}
ATerm x_5 (ATerm x_41, ATerm y_41, ATerm t)
{
  ATerm e_38 = NULL;
  t = SSL_write_term_to_stream_baf(x_41, y_41);
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_38);
  return(t);
}
ATerm f_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm u_19 = NULL,z_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_16 = ATgetArgument(t, 0);
      if(match_cons(d_16, sym_Stream_1))
        {
          u_19 = ATgetArgument(d_16, 0);
        }
      else
        _fail(t);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(u_19, z_19, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,s_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_16 = ATgetArgument(t, 0);
      if(match_cons(e_16, sym_Stream_1))
        {
          q_20 = ATgetArgument(e_16, 0);
        }
      else
        _fail(t);
      s_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(q_20, s_20, t);
  n_20 = t;
  t = term_f_16;
  o_20 = t;
  t = n_20;
  if(match_cons(t, sym_Stream_1))
    {
      p_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_f_16, n_20);
  t = v_5(o_20, p_20, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,y_39 = NULL,z_39 = NULL,u_9 = NULL,t_9 = NULL;
  j_38 = t;
  if(match_cons(t, sym__2))
    {
      w_38 = ATgetArgument(t, 0);
      x_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_38);
  v_38 = t;
  t = w_38;
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((i_38 != NULL) && (i_38 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(d_3, t);
        ;
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        t = term_i_16;
        i_38 = t;
      }
    if(((y_38 != NULL) && (y_38 != t)))
      _fail(t);
    else
      y_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_38, x_38);
    if(((t_9 != NULL) && (t_9 != t)))
      _fail(t);
    else
      t_9 = t;
    t = SSLsetAnnotations(t_9, v_38);
    t = j_38;
    if(match_cons(t, sym__2))
      {
        if(((l_38 != NULL) && (l_38 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          l_38 = ATgetArgument(t, 0);
        if(((m_38 != NULL) && (m_38 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          m_38 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_38);
    if(((k_38 != NULL) && (k_38 != t)))
      _fail(t);
    else
      k_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_38, (ATerm) ATmakeAppl(sym__2, not_null(i_38), m_38));
    if(((u_9 != NULL) && (u_9 != t)))
      _fail(t);
    else
      u_9 = t;
    t = SSLsetAnnotations(u_9, k_38);
    if(((u_38 != NULL) && (u_38 != t)))
      _fail(t);
    else
      u_38 = t;
    if(match_cons(t, sym__2))
      {
        if(((y_39 != NULL) && (y_39 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          y_39 = ATgetArgument(t, 0);
        if(((z_39 != NULL) && (z_39 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          z_39 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm k_16 = t;
      int m_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_19 = NULL,i_19 = NULL,k_19 = NULL,o_19 = NULL,r_19 = NULL,y_9 = NULL;
          t = SSLgetAnnotations(u_38);
          e_19 = t;
          t = y_39;
          t = fetch_1_0(f_3, t);
          i_19 = t;
          t = z_39;
          if(match_cons(t, sym__2))
            {
              o_19 = ATgetArgument(t, 0);
              r_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_5(g_3, o_19, r_19, t);
          k_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_19, k_19);
          y_9 = t;
          t = SSLsetAnnotations(y_9, e_19);
          ;
          LocalPopChoice(m_16);
        }
      else
        {
          t = k_16;
          {
            ATerm g_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,z_9 = NULL;
            t = SSLgetAnnotations(u_38);
            g_20 = t;
            t = z_39;
            if(match_cons(t, sym__2))
              {
                k_20 = ATgetArgument(t, 0);
                l_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_5(i_3, k_20, l_20, t);
            j_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_39, j_20);
            z_9 = t;
            t = SSLsetAnnotations(z_9, g_20);
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
ATerm apply_strategy_1_0 (ATerm n_92 (ATerm), ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL;
  g_40 = t;
  t = dtime_0_0(t);
  t = g_40;
  t = n_92(t);
  f_40 = t;
  t = dtime_0_0(t);
  c_40 = t;
  t = f_40;
  if(match_cons(t, sym__2))
    {
      d_40 = ATgetArgument(t, 0);
      e_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_40), (ATerm) ATmakeAppl(sym_Runtime_1, c_40)), e_40);
  return(t);
}
ATerm u_40 (ATerm o_40, ATerm t)
{
  t = SSL_fclose(o_40);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL;
  s_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_40 = ATgetArgument(t, 0);
      {
        ATerm n_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_40);
            ;
            LocalPopChoice(o_16);
          }
        else
          {
            t = n_16;
            t = u_40(s_40, t);
          }
      }
    }
  else
    {
      t = u_40(s_40, t);
    }
  return(t);
}
ATerm z_5 (ATerm d_42, ATerm t)
{
  t = SSL_read_term_from_stream(d_42);
  return(t);
}
ATerm a_6 (ATerm p_38, ATerm q_38, ATerm t)
{
  ATerm v_40 = NULL;
  t = SSL_fopen(p_38, q_38);
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_40);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_40 = NULL;
  t = SSL_stdin_stream();
  w_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_40);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_40 = NULL;
  t = SSL_stdout_stream();
  x_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_40);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_40 = NULL;
  t = SSL_stderr_stream();
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_40);
  return(t);
}
ATerm m_42 (ATerm e_41, ATerm t)
{
  ATerm f_41 = NULL;
  t = SSL_explode_term(e_41);
  if(match_cons(t, sym__2))
    {
      ATerm p_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_16 = ATgetArgument(t, 1);
        if(((ATgetType(r_16) == AT_LIST) && !(ATisEmpty(r_16))))
          {
            f_41 = ATgetFirst((ATermList) r_16);
            {
              ATerm s_16 = (ATerm) ATgetNext((ATermList) r_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_41;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_41;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_41;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_41;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm n_42 (ATerm i_41, ATerm j_41, ATerm k_41, ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,q_41 = NULL,q_10 = NULL;
  t = SSLgetAnnotations(k_41);
  n_41 = t;
  t = i_41;
  if(match_cons(t, sym_Path_1))
    {
      q_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_41, j_41);
  q_10 = t;
  t = SSLsetAnnotations(q_10, n_41);
  if(match_cons(t, sym__2))
    {
      l_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(l_41, m_41, t);
  return(t);
}
ATerm o_42 (ATerm s_41, ATerm t_41, ATerm u_41, ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,z_41 = NULL,h_42 = NULL,r_10 = NULL;
  t = SSLgetAnnotations(u_41);
  z_41 = t;
  t = SSL_is_string(s_41);
  h_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_42, t_41);
  r_10 = t;
  t = SSLsetAnnotations(r_10, z_41);
  if(match_cons(t, sym__2))
    {
      v_41 = ATgetArgument(t, 0);
      w_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(v_41, w_41, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      ATerm v_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  j_42 = t;
  if(match_cons(t, sym__2))
    {
      k_42 = ATgetArgument(t, 0);
      l_42 = ATgetArgument(t, 1);
      {
        ATerm w_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_42(j_42, t);
            ;
            LocalPopChoice(x_16);
          }
        else
          {
            t = w_16;
            {
              ATerm y_16 = t;
              int z_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_42(k_42, l_42, j_42, t);
                  ;
                  LocalPopChoice(z_16);
                }
              else
                {
                  t = y_16;
                  t = o_42(k_42, l_42, j_42, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_42(j_42, t);
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_a_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_42 = NULL;
      s_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_42, term_d_17);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      t = debug_1_0(j_3, t);
      _fail(t);
    }
  q_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(r_42, t);
  p_42 = t;
  t = q_42;
  t = fclose_0_0(t);
  t = p_42;
  return(t);
}
ATerm fetch_1_0 (ATerm y_76 (ATerm), ATerm t)
{
  ATerm x_43 (ATerm t)
  {
    ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
    u_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_43 = ATgetFirst((ATermList) t);
        w_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_17 = t;
      int f_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_21 = NULL,p_21 = NULL,c_11 = NULL;
          t = SSLgetAnnotations(u_43);
          l_21 = t;
          t = v_43;
          t = y_76(t);
          p_21 = t;
          t = (ATerm) ATinsert(CheckATermList(w_43), p_21);
          c_11 = t;
          t = SSLsetAnnotations(c_11, l_21);
          ;
          LocalPopChoice(f_17);
        }
      else
        {
          t = e_17;
          {
            ATerm y_21 = NULL,d_22 = NULL,f_11 = NULL;
            t = SSLgetAnnotations(u_43);
            y_21 = t;
            t = w_43;
            t = x_43(t);
            d_22 = t;
            t = (ATerm) ATinsert(CheckATermList(d_22), v_43);
            f_11 = t;
            t = SSLsetAnnotations(f_11, y_21);
          }
        }
    }
    return(t);
  }
  t = x_43(t);
  return(t);
}
ATerm u_5 (ATerm d_33, ATerm e_33, ATerm t)
{
  t = SSL_strcat(d_33, e_33);
  return(t);
}
ATerm debug_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
  a_44 = t;
  t = j_89(t);
  b_44 = t;
  t = term_j_15;
  c_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_44), b_44);
  d_44 = t;
  t = SSL_printnl(c_44, d_44);
  t = a_44;
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_m_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_44 = NULL;
      k_44 = t;
      t = SSL_is_string(k_44);
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      {
        ATerm p_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_3, t);
            ;
            LocalPopChoice(q_17);
          }
        else
          {
            t = p_17;
            {
              ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
              q_44 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_44 = ATgetArgument(t, 0);
                  t = r_44;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_44 = ATgetArgument(t, 0);
                      t = r_44;
                      {
                        ATerm r_17 = t;
                        int s_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(s_17);
                          }
                        else
                          {
                            t = r_17;
                            t = debug_1_0(n_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_45 = NULL,b_45 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_44 = ATgetArgument(t, 0);
                          s_44 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_44;
                      t = eval_config_0_0(t);
                      a_45 = t;
                      t = s_44;
                      t = eval_config_0_0(t);
                      b_45 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_45, b_45);
                      t = u_5(a_45, b_45, t);
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
  ATerm f_45 = NULL,g_45 = NULL;
  f_45 = t;
  t = term_v_17;
  g_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, f_45);
  t = e_6(g_45, f_45, t);
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_45 = NULL,i_45 = NULL;
        t = eval_config_0_0(t);
        h_45 = t;
        t = term_v_17;
        i_45 = t;
        t = SSL_table_put(i_45, f_45, h_45);
        t = h_45;
        ;
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_90 (ATerm), ATerm t)
{
  ATerm m_45 = NULL;
  m_45 = t;
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_45 = NULL;
        t = term_c_18;
        t = get_config_0_0(t);
        o_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_45, term_d_18);
        t = geq_0_0(t);
        t = m_45;
        t = w_90(t);
        ;
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        t = m_45;
      }
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm r_45 = NULL;
  r_45 = t;
  if(match_string(t, "-k"))
    {
      t = r_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_45;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
  s_45 = t;
  t = SSL_string_to_int(s_45);
  t_45 = t;
  t = term_e_18;
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_18, t_45);
  t = g_6(u_45, t_45, t);
  t = s_45;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_f_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, s_3, t_3, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm w_45 = NULL;
  w_45 = t;
  if(match_string(t, "-S"))
    {
      t = w_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_45;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL;
  t = term_c_18;
  x_45 = t;
  t = term_h_18;
  y_45 = t;
  t = term_l_18;
  t = g_6(x_45, y_45, t);
  t = term_o_18;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_t_18;
  return(t);
}
ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL;
  z_45 = t;
  t = SSL_string_to_int(z_45);
  a_46 = t;
  t = term_c_18;
  b_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_18, a_46);
  t = g_6(b_46, a_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_45);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_u_18;
  return(t);
}
ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL;
  t = term_v_18;
  c_46 = t;
  t = term_h_3;
  d_46 = t;
  t = term_w_18;
  t = g_6(c_46, d_46, t);
  t = term_x_18;
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_z_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_3, v_3, w_3, t);
      ;
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_3, y_3, d_4, t);
            ;
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            t = Option_3_0(e_4, j_4, l_4, t);
          }
      }
    }
  return(t);
}
ATerm g_6 (ATerm e_43, ATerm f_43, ATerm t)
{
  ATerm e_46 = NULL;
  t = term_v_17;
  e_46 = t;
  t = SSL_table_put(e_46, e_43, f_43);
  t = (ATerm) ATmakeAppl(sym__3, term_v_17, e_43, f_43);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm g_46 = NULL;
  g_46 = t;
  if(match_string(t, "-o"))
    {
      t = g_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_46;
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL;
  h_46 = t;
  t = term_f_19;
  i_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_19, h_46);
  t = g_6(i_46, h_46, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_46);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, o_4, p_4, t);
  return(t);
}
ATerm b_6 (ATerm c_48, ATerm d_48, ATerm b_48, ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
  k_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_48, d_48);
  {
    ATerm h_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_19 = ATgetArgument(t, 0);
            ATerm y_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_48, d_48);
        t = e_6(c_48, d_48, t);
        ;
        LocalPopChoice(v_19);
      }
    else
      {
        t = h_19;
        t = (ATerm) ATempty;
      }
    l_46 = t;
    t = (ATerm) ATinsert(CheckATermList(l_46), b_48);
    m_46 = t;
    t = SSL_table_put(c_48, d_48, m_46);
    t = k_46;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
      t = term_h_3;
      t = j_0(t);
      x_46 = t;
      t = term_s_6;
      y_46 = t;
      t = term_o_7;
      z_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_6, term_o_7, x_46);
      t = b_6(y_46, z_46, x_46, t);
      _fail(t);
    }
  else
    {
      ATerm d_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_46 = ATgetFirst((ATermList) t);
          u_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_46;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_46 = ATgetFirst((ATermList) t);
          w_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_46;
      t = h_0(t);
      t = v_46;
      t = i_0(t);
      d_47 = t;
      t = (ATerm) ATinsert(CheckATermList(w_46), d_47);
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm f_47 = NULL;
  f_47 = t;
  if(match_string(t, "-i"))
    {
      t = f_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_47;
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL;
  g_47 = t;
  t = term_a_20;
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_20, g_47);
  t = g_6(h_47, g_47, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_47);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, t_4, u_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,p_47 = NULL,q_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_3;
  t = whoami_0_0(t);
  i_47 = t;
  t = term_j_15;
  p_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_20), i_47);
  q_47 = t;
  t = SSL_printnl(p_47, q_47);
  t = term_q_8;
  j_47 = t;
  t = SSL_exit(j_47);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_6 (ATerm n_35, ATerm o_35, ATerm t)
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_35, o_35);
      ;
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      t = SSL_addr(n_35, o_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
  s_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_47;
      t = r_82(t);
    }
  else
    {
      ATerm x_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_47 = ATgetFirst((ATermList) t);
          u_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_47;
      t = foldr_2_0(r_82, s_82, t);
      x_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_47, x_47);
      t = s_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_h_18;
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm m_23 = NULL,o_23 = NULL;
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      o_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(m_23, o_23, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_48 = NULL,d_23 = NULL,j_23 = NULL;
  t = times_0_0(t);
  j_23 = t;
  t = SSL_explode_term(j_23);
  if(match_cons(t, sym__2))
    {
      ATerm h_20 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_23;
  t = foldr_2_0(v_4, x_4, t);
  e_48 = t;
  t = SSL_TicksToSeconds(e_48);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL;
  p_48 = t;
  if(match_cons(t, sym__2))
    {
      q_48 = ATgetArgument(t, 0);
      r_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_48;
        if((q_48 != t))
          {
            _fail(t);
          }
        t = p_48;
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = i_20;
        t = (ATerm) ATmakeAppl(sym__2, q_48, r_48);
        {
          ATerm r_20 = t;
          int t_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_48, r_48);
              ;
              LocalPopChoice(t_20);
            }
          else
            {
              t = r_20;
              t = SSL_gtr(q_48, r_48);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_48, r_48);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_90 (ATerm), ATerm t)
{
  ATerm v_48 = NULL;
  v_48 = t;
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_48 = NULL;
        t = term_c_18;
        t = get_config_0_0(t);
        x_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_48, term_q_8);
        t = geq_0_0(t);
        t = v_48;
        t = v_90(t);
        ;
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        t = v_48;
      }
  }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,c_49 = NULL,d_49 = NULL;
  t = run_time_0_0(t);
  z_48 = t;
  t = term_h_3;
  t = whoami_0_0(t);
  a_49 = t;
  t = term_j_15;
  c_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_20), z_48), term_w_20), a_49);
  d_49 = t;
  t = SSL_printnl(c_49, d_49);
  t = (ATerm) ATmakeAppl(sym__2, term_j_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_20), z_48), term_w_20), a_49));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_18;
  e_49 = t;
  t = SSL_exit(e_49);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL;
  n_49 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_49;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_49 = ATgetArgument(t, 0);
          {
            ATerm o_24 = NULL,k_11 = NULL;
            t = SSLgetAnnotations(n_49);
            o_24 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_49);
            k_11 = t;
            t = SSLsetAnnotations(k_11, o_24);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_49;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_93 (ATerm), ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      t = fetch_1_0(d_5, t);
    }
  t = l_93(t);
  return(t);
}
ATerm map_1_0 (ATerm o_76 (ATerm), ATerm t)
{
  ATerm f_50 (ATerm t)
  {
    ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
    c_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_50;
      }
    else
      {
        ATerm e_25 = NULL,m_25 = NULL,n_25 = NULL,r_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_50 = ATgetFirst((ATermList) t);
            e_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_50);
        e_25 = t;
        t = d_50;
        t = o_76(t);
        m_25 = t;
        t = e_50;
        t = f_50(t);
        n_25 = t;
        t = (ATerm) ATinsert(CheckATermList(n_25), m_25);
        r_11 = t;
        t = SSLsetAnnotations(r_11, e_25);
      }
    return(t);
  }
  t = f_50(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_50 = ATgetFirst((ATermList) t);
      j_50 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_50 = NULL,o_50 = NULL;
        ATerm f_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_50)), not_null(o_50));
          return(t);
        }
        t = j_50;
        t = g_0(t);
        if(((n_50 != NULL) && (n_50 != t)))
          _fail(t);
        else
          n_50 = t;
        t = i_50;
        t = d_0(t);
        if(((o_50 != NULL) && (o_50 != t)))
          _fail(t);
        else
          o_50 = t;
        t = j_50;
        t = reverse_acc_2_0(d_0, f_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_3;
      t = g_0(t);
    }
  return(t);
}
ATerm e_6 (ATerm t_49, ATerm u_49, ATerm t)
{
  t = SSL_table_get(t_49, u_49);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,e_12 = NULL;
  u_50 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_50);
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_50);
  e_12 = t;
  t = SSLsetAnnotations(e_12, s_50);
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm w_50 = NULL;
  w_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_50), term_b_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL;
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      t = fetch_1_0(g_5, t);
    }
  t = term_e_21;
  t = echo_0_0(t);
  t = term_s_6;
  q_50 = t;
  t = term_o_7;
  r_50 = t;
  t = term_f_21;
  t = e_6(q_50, r_50, t);
  t = reverse_acc_2_0(_id, j_5, t);
  t = map_1_0(k_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL;
  y_50 = t;
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_50;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_21 = ATgetFirst((ATermList) t);
                ATerm j_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_50;
          }
        ;
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = (ATerm) ATinsert(ATempty, y_50);
      }
    z_50 = t;
    t = term_i_16;
    a_51 = t;
    t = SSL_printnl(a_51, z_50);
    t = y_50;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL;
  t = term_k_21;
  e_51 = t;
  t = term_h_3;
  f_51 = t;
  t = term_m_21;
  t = g_6(e_51, f_51, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_n_21;
  return(t);
}
ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL;
  t = term_k_21;
  i_51 = t;
  t = term_h_3;
  j_51 = t;
  t = term_m_21;
  t = g_6(i_51, j_51, t);
  t = term_o_21;
  g_51 = t;
  t = term_h_3;
  h_51 = t;
  t = term_q_21;
  t = g_6(g_51, h_51, t);
  t = term_s_21;
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_t_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_5, m_5, n_5, t);
      ;
      LocalPopChoice(v_21);
    }
  else
    {
      t = u_21;
      t = Option_3_0(r_5, s_5, t_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_57 (ATerm), ATerm a_58 (ATerm), ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,m_13 = NULL;
  p_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_51 = ATgetFirst((ATermList) t);
      m_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_51);
  k_51 = t;
  t = l_51;
  t = z_57(t);
  n_51 = t;
  t = m_51;
  t = a_58(t);
  o_51 = t;
  t = (ATerm) ATinsert(CheckATermList(o_51), n_51);
  m_13 = t;
  t = SSLsetAnnotations(m_13, k_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_95 (ATerm), ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,z_51 = NULL,a_52 = NULL,y_13 = NULL;
  u_51 = t;
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_21;
        t = o_95(t);
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
      }
    t = u_51;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_51 = ATgetFirst((ATermList) t);
        x_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_51);
    v_51 = t;
    t = term_d_20;
    a_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_20, w_51);
    t = g_6(a_52, w_51, t);
    t = x_51;
    {
      ATerm k_52 (ATerm t)
      {
        ATerm b_22 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_22 = t;
            int f_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_52 = NULL;
                d_52 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_52;
                ;
                LocalPopChoice(f_22);
              }
            else
              {
                t = e_22;
                t = o_95(t);
                t = Cons_2_0(_id, k_52, t);
              }
            ;
            LocalPopChoice(c_22);
          }
        else
          {
            t = b_22;
            {
              ATerm g_52 = NULL,h_52 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_52 = ATgetFirst((ATermList) t);
                  h_52 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_52), (ATerm) ATmakeAppl(sym_Undefined_1, g_52));
            }
          }
        return(t);
      }
      t = k_52(t);
      if(((z_51 != NULL) && (z_51 != t)))
        _fail(t);
      else
        z_51 = t;
      t = (ATerm) ATinsert(CheckATermList(z_51), (ATerm) ATmakeAppl(sym_Program_1, w_51));
      if(((y_13 != NULL) && (y_13 != t)))
        _fail(t);
      else
        y_13 = t;
      t = SSLsetAnnotations(y_13, v_51);
    }
  }
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm z_52 = NULL;
  z_52 = t;
  if(match_string(t, "--help"))
    {
      t = z_52;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_52;
        }
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL;
  t = term_a_21;
  a_53 = t;
  t = term_h_3;
  b_53 = t;
  t = term_g_22;
  t = g_6(a_53, b_53, t);
  t = term_i_22;
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm k_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_95 (ATerm), ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,y_52 = NULL;
  r_52 = t;
  t = term_s_6;
  t_52 = t;
  t = term_o_7;
  u_52 = t;
  t = (ATerm) ATempty;
  y_52 = t;
  t = SSL_table_put(t_52, u_52, y_52);
  t = r_52;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm k_22 = t;
      int l_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_95(t);
          ;
          LocalPopChoice(l_22);
        }
      else
        {
          t = k_22;
          {
            ATerm m_22 = t;
            int n_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_6, i_6, j_6, t);
                ;
                LocalPopChoice(n_22);
              }
            else
              {
                t = m_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_6, t);
    {
      ATerm p_22 = t;
      int q_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_53 = NULL;
          i_53 = t;
          {
            ATerm r_22 = t;
            int s_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_26 = NULL;
                t = i_53;
                {
                  ATerm t_22 = t;
                  int u_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_a_21;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(u_22);
                    }
                  else
                    {
                      t = t_22;
                      t = fetch_1_0(k_6, t);
                    }
                  t = i_53;
                  t = default_system_usage_0_0(t);
                  t = term_h_18;
                  c_26 = t;
                  t = SSL_exit(c_26);
                }
                ;
                LocalPopChoice(s_22);
              }
            else
              {
                t = r_22;
                {
                  ATerm j_26 = NULL;
                  t = term_k_21;
                  t = get_config_0_0(t);
                  t = i_53;
                  t = default_system_about_0_0(t);
                  t = term_h_18;
                  j_26 = t;
                  t = SSL_exit(j_26);
                }
              }
          }
          ;
          LocalPopChoice(q_22);
        }
      else
        {
          t = p_22;
          {
            ATerm v_22 = t;
            int w_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_53 = NULL,m_53 = NULL,n_53 = NULL;
                ATerm m_6 (ATerm t)
                {
                  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,j_14 = NULL;
                  q_53 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      p_53 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_53);
                  o_53 = t;
                  t = p_53;
                  if(((p_52 != NULL) && (p_52 != t)))
                    _fail(t);
                  else
                    p_52 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, p_53);
                  j_14 = t;
                  t = SSLsetAnnotations(j_14, o_53);
                  return(t);
                }
                t = fetch_1_0(m_6, t);
                t = term_j_15;
                if(((m_53 != NULL) && (m_53 != t)))
                  _fail(t);
                else
                  m_53 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_52)), term_x_22);
                if(((n_53 != NULL) && (n_53 != t)))
                  _fail(t);
                else
                  n_53 = t;
                t = SSL_printnl(m_53, n_53);
                t = (ATerm) ATmakeAppl(sym__2, term_j_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_52)), term_x_22));
                t = default_system_usage_0_0(t);
                t = term_q_8;
                if(((j_53 != NULL) && (j_53 != t)))
                  _fail(t);
                else
                  j_53 = t;
                t = SSL_exit(j_53);
                ;
                LocalPopChoice(w_22);
              }
            else
              {
                t = v_22;
              }
          }
        }
      if(((q_52 != NULL) && (q_52 != t)))
        _fail(t);
      else
        q_52 = t;
      t = term_s_6;
      if(((s_52 != NULL) && (s_52 != t)))
        _fail(t);
      else
        s_52 = t;
      t = SSL_table_destroy(s_52);
      t = q_52;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_93 (ATerm), ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL;
  t = parse_options_1_0(n_93, t);
  v_53 = t;
  t = term_c_15;
  y_53 = t;
  t = SSL_table_create(y_53);
  t = term_c_15;
  w_53 = t;
  t = term_e_15;
  x_53 = t;
  t = SSL_table_put(w_53, x_53, v_53);
  t = v_53;
  t = p_93(t);
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_93, t);
        ;
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        {
          ATerm a_23 = t;
          int b_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_93(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_23);
            }
          else
            {
              t = a_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = if_verbose2_1_0(u_6, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL;
  t = term_c_23;
  z_53 = t;
  t = term_h_3;
  a_54 = t;
  t = term_e_23;
  t = g_6(z_53, a_54, t);
  t = term_f_23;
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_k_23;
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL;
  b_54 = t;
  t = term_d_20;
  t = get_config_0_0(t);
  c_54 = t;
  t = term_j_15;
  d_54 = t;
  t = (ATerm) ATinsert(ATempty, c_54);
  e_54 = t;
  t = SSL_printnl(d_54, e_54);
  t = b_54;
  return(t);
}
ATerm iowrap_3_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    ATerm l_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_92(t);
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = l_23;
        {
          ATerm r_23 = t;
          int t_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(t_23);
            }
          else
            {
              t = r_23;
              {
                ATerm u_23 = t;
                int v_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(v_23);
                  }
                else
                  {
                    t = u_23;
                    {
                      ATerm x_23 = t;
                      int y_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(q_6, r_6, t_6, t);
                          ;
                          LocalPopChoice(y_23);
                        }
                      else
                        {
                          t = x_23;
                          {
                            ATerm z_23 = t;
                            int b_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_24);
                              }
                            else
                              {
                                t = z_23;
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
  ATerm p_6 (ATerm t)
  {
    ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
    g_54 = t;
    {
      ATerm c_24 = t;
      int d_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((f_54 != NULL) && (f_54 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_54 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_6, t);
          ;
          LocalPopChoice(d_24);
        }
      else
        {
          t = c_24;
          t = term_e_24;
          f_54 = t;
        }
      t = not_null(f_54);
      t = ReadFromFile_0_0(t);
      if(((h_54 != NULL) && (h_54 != t)))
        _fail(t);
      else
        h_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_54, h_54);
      t = apply_strategy_1_0(w_92, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(n_6, y_92, o_6, p_6, t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--strict", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_i_15;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_h_24;
  return(t);
}
ATerm io_idwrap_3_0 (ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL;
    o_54 = t;
    if(match_cons(t, sym__2))
      {
        m_54 = ATgetArgument(t, 0);
        n_54 = ATgetArgument(t, 1);
        {
          ATerm i_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_54 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, term_l_24, n_54);
              t = q_98(t);
              r_54 = t;
              t = (ATerm) ATmakeAppl(sym__2, m_54, r_54);
              ;
              LocalPopChoice(k_24);
            }
          else
            {
              t = i_24;
              t = o_54;
            }
        }
      }
    else
      {
        t = o_54;
      }
    t = r_98(t);
    w_54 = t;
    if(match_cons(t, sym__2))
      {
        u_54 = ATgetArgument(t, 0);
        v_54 = ATgetArgument(t, 1);
        {
          ATerm m_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_54 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, term_r_24, v_54);
              t = q_98(t);
              z_54 = t;
              t = (ATerm) ATmakeAppl(sym__2, u_54, z_54);
              ;
              LocalPopChoice(q_24);
            }
          else
            {
              t = m_24;
              t = w_54;
            }
        }
      }
    else
      {
        t = w_54;
      }
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_98(t);
        ;
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        t = Option_3_0(z_6, b_7, c_7, t);
      }
    return(t);
  }
  t = iowrap_3_0(x_6, y_6, default_usage_0_0, t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = InOutId_2_0(h_7, i_7, t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,u_14 = NULL;
  g_55 = t;
  if(match_cons(t, sym__2))
    {
      d_55 = ATgetArgument(t, 0);
      e_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_55);
  c_55 = t;
  t = e_55;
  t = ppgenerate_0_0(t);
  f_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_55, f_55);
  u_14 = t;
  t = SSLsetAnnotations(u_14, c_55);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = Option_3_0(j_7, k_7, l_7, t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"sdf-2.1\"", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-v", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_w_24;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_idwrap_3_0(d_7, e_7, g_7, t);
  return(t);
}
