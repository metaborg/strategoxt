#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Verbose_0;
Symbol sym_iter_sep_n_2;
Symbol sym_iter_n_1;
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
Symbol sym_VS_0;
Symbol sym_SOpt_2;
Symbol sym_prod_3;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_n_2;
Symbol sym_iter_sep_n_3;
Symbol sym_alt_2;
Symbol sym_char_class_1;
Symbol sym_sort_1;
Symbol sym_prod_fun_4;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
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
Symbol sym_context_free_syntax_1;
Symbol sym_bracket_symbol_1;
Symbol sym_Strict_0;
static void init_module_constructors (void)
{
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_iter_sep_n_2 = ATmakeSymbol("iter-sep-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_2);
  sym_iter_n_1 = ATmakeSymbol("iter-n", 1, ATfalse);
  ATprotectSymbol(sym_iter_n_1);
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
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_context_free_syntax_1 = ATmakeSymbol("context-free-syntax", 1, ATfalse);
  ATprotectSymbol(sym_context_free_syntax_1);
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
}
ATerm term_z_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_p_25;
ATerm term_k_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_c_24;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_h_23;
ATerm term_c_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_o_19;
ATerm term_y_18;
ATerm term_q_18;
ATerm term_m_18;
ATerm term_r_17;
ATerm term_l_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_p_15;
ATerm term_s_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_s_12;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_v_10;
ATerm term_x_9;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_o_7;
ATerm term_v_6;
ATerm term_e_3;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_3));
  term_e_3 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_Arg_1, term_r_8);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_SOpt_2, term_a_11, term_b_11);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_lit_1, term_e_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_lit_1, term_i_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__2, term_c_16, term_d_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym__2, term_h_20, term_m_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym__2, term_r_20, term_e_3);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_v_6, term_o_7);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym__2, term_o_22, term_e_3);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_e_3);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__2, term_a_22, term_e_3);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym__2, term_h_24, term_e_3);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm Option_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm l_1 (ATerm c_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm o_83 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm q_90 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm h_97 (ATerm), ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm e_0 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm symbol2abox_1_0 (ATerm p_81 (ATerm), ATerm t);
ATerm _2_0 (ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
static ATerm a_27 (ATerm x_24, ATerm y_24, ATerm z_24, ATerm t);
ATerm number_node_1_0 (ATerm s_81 (ATerm), ATerm t);
static ATerm n_1 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm o_81 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm b_91 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm unquote_chars_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
ATerm collect_p__1_0 (ATerm i_113 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm ppgenerate_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm s_84 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm q_5 (ATerm c_41, ATerm d_41, ATerm t);
static ATerm r_5 (ATerm u_113 (ATerm), ATerm i_60, ATerm t);
ATerm InOutId_2_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm w_5 (ATerm q_40, ATerm r_40, ATerm t);
static ATerm x_5 (ATerm w_25, ATerm x_25, ATerm t);
static ATerm z_5 (ATerm r_89 (ATerm), ATerm z_170, ATerm a_26, ATerm t);
static ATerm y_5 (ATerm s_25, ATerm t_25, ATerm t);
static ATerm z_2 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm m_106 (ATerm), ATerm t);
static ATerm h_42 (ATerm b_42, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm a_6 (ATerm y_25, ATerm t);
static ATerm b_6 (ATerm s_40, ATerm t_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_43 (ATerm r_42, ATerm t);
static ATerm v_43 (ATerm v_42, ATerm w_42, ATerm x_42, ATerm t);
static ATerm w_43 (ATerm f_43, ATerm g_43, ATerm h_43, ATerm t);
static ATerm c_6 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_90 (ATerm), ATerm t);
static ATerm v_5 (ATerm j_39, ATerm k_39, ATerm t);
ATerm debug_1_0 (ATerm p_89 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm v_104 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_6 (ATerm j_50, ATerm k_50, ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_6 (ATerm j_55, ATerm k_55, ATerm i_55, ATerm t);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_6 (ATerm m_43, ATerm n_43, ATerm t);
ATerm foldr_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm u_104 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm need_help_1_0 (ATerm k_107 (ATerm), ATerm t);
ATerm map_1_0 (ATerm a_90 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm g_6 (ATerm a_57, ATerm b_57, ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm v_67 (ATerm), ATerm w_67 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_109 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm parse_options_1_0 (ATerm m_109 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm iowrap_3_0 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm io_idwrap_3_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm Option_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm f_0 = NULL,j_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_0 = NULL,u_0 = NULL,v_0 = NULL;
      t = term_e_3;
      t = t_0(t);
      q_0 = t;
      t = term_v_6;
      u_0 = t;
      t = term_o_7;
      v_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_6, term_o_7, q_0);
      t = d_6(u_0, v_0, q_0, t);
      _fail(t);
    }
  else
    {
      ATerm y_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_0 = ATgetFirst((ATermList) t);
          j_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_0;
      t = p_0(t);
      t = term_e_3;
      t = r_0(t);
      y_0 = t;
      t = (ATerm) ATinsert(CheckATermList(j_0), y_0);
    }
  return(t);
}
static ATerm l_1 (ATerm c_1, ATerm t)
{
  ATerm d_1 = NULL;
  t = SSL_explode_term(c_1);
  if(match_cons(t, sym__2))
    {
      ATerm p_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_7) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm f_1 = NULL,h_1 = NULL,i_1 = NULL;
  i_1 = t;
  if(match_cons(t, sym__2))
    {
      f_1 = ATgetArgument(t, 0);
      h_1 = ATgetArgument(t, 1);
      {
        ATerm q_7 = t;
        int r_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_0 (ATerm t)
            {
              t = h_1;
              return(t);
            }
            t = f_1;
            t = at_end_1_0(a_0, t);
            LocalPopChoice(r_7);
          }
        else
          {
            t = q_7;
            t = l_1(i_1, t);
          }
      }
    }
  else
    {
      t = l_1(i_1, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm o_83 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = topdown_1_0(o_83, t);
    return(t);
  }
  t = o_83(t);
  t = SRTS_all(b_0, t);
  return(t);
}
ATerm at_end_1_0 (ATerm q_90 (ATerm), ATerm t)
{
  static ATerm h_2 (ATerm t)
  {
    ATerm a_2 = NULL,d_2 = NULL,g_2 = NULL;
    g_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_2 = ATgetFirst((ATermList) t);
        d_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_0 = NULL,z_0 = NULL,o_1 = NULL;
          t = SSLgetAnnotations(g_2);
          h_0 = t;
          t = d_2;
          t = h_2(t);
          z_0 = t;
          t = (ATerm) ATinsert(CheckATermList(z_0), a_2);
          o_1 = t;
          t = SSLsetAnnotations(o_1, h_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_2;
        t = q_90(t);
      }
    return(t);
  }
  t = h_2(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_2 = NULL,q_2 = NULL,s_2 = NULL;
  n_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_2;
    }
  else
    {
      static ATerm c_0 (ATerm t)
      {
        t = not_null(s_2);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_2 = ATgetFirst((ATermList) t);
          if(((s_2 != NULL) && (s_2 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_2;
      t = at_end_1_0(c_0, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm h_97 (ATerm), ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL;
  y_3 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_3;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_3 = ATgetFirst((ATermList) t);
          a_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 = NULL,c_2 = NULL,e_2 = NULL,r_1 = NULL;
            t = SSLgetAnnotations(y_3);
            t_1 = t;
            t = z_3;
            t = h_97(t);
            c_2 = t;
            t = a_4;
            t = filter_1_0(h_97, t);
            e_2 = t;
            t = (ATerm) ATinsert(CheckATermList(e_2), c_2);
            r_1 = t;
            t = SSLsetAnnotations(r_1, t_1);
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            t = a_4;
            t = filter_1_0(h_97, t);
          }
      }
    }
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm w_4 = NULL,y_4 = NULL,f_5 = NULL,k_5 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      f_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5;
  if(match_cons(t, sym_alt_2))
    {
      w_4 = ATgetArgument(t, 0);
      y_4 = ATgetArgument(t, 1);
      {
        ATerm v_7 = t;
        int w_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, w_4, y_4);
            t = flat_alt_0_0(t);
            t_5 = t;
            t = (ATerm) ATinsert(CheckATermList(t_5), f_5);
            LocalPopChoice(w_7);
          }
        else
          {
            t = v_7;
            t = (ATerm) ATinsert(ATinsert(ATempty, k_5), f_5);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, k_5), f_5);
    }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  ATerm p_4 = NULL;
  p_4 = t;
  {
    ATerm x_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_4;
        {
          ATerm a_8 = t;
          if((PushChoice() == 0))
            {
              ATerm p_2 = NULL;
              p_2 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = p_2;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm g_8 = ATgetFirst((ATermList) t);
                      ATerm h_8 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = p_2;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_8;
            }
        }
        t = (ATerm) ATinsert(ATempty, p_4);
        LocalPopChoice(y_7);
      }
    else
      {
        t = x_7;
        t = p_4;
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
static ATerm m_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL;
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          h_11 = ATgetArgument(t, 0);
          i_11 = ATgetArgument(t, 1);
          {
            ATerm l_8 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_8);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, h_11, i_11);
    }
  else
    {
      t = i_8;
      if(match_cons(t, sym_iter_n_2))
        {
          h_11 = ATgetArgument(t, 0);
          {
            ATerm m_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, h_11);
    }
  return(t);
}
static ATerm w_0 (ATerm t)
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
            ATerm m_6 = NULL,w_1 = NULL;
            t = SSLgetAnnotations(a_5);
            m_6 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, z_4);
            w_1 = t;
            t = SSLsetAnnotations(w_1, m_6);
            t = term_t_8;
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
ATerm symbol2abox_1_0 (ATerm p_81 (ATerm), ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL;
  static ATerm g_13 (ATerm t)
  {
    static ATerm j_13 (ATerm q_10, ATerm r_10, ATerm s_10, ATerm t)
    {
      ATerm t_10 = NULL,z_10 = NULL,v_1 = NULL;
      t = SSLgetAnnotations(q_10);
      t_10 = t;
      t = s_10;
      t = _2_0(_id, m_0, t);
      z_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_10, z_10);
      v_1 = t;
      t = SSLsetAnnotations(v_1, t_10);
      t = g_13(t);
      return(t);
    }
    static ATerm k_13 (ATerm q_11, ATerm s_11, ATerm t_11, ATerm v_11, ATerm t)
    {
      ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,g_12 = NULL,i_12 = NULL,j_12 = NULL;
      t = SSL_explode_term(v_11);
      if(match_cons(t, sym__2))
        {
          g_12 = ATgetArgument(t, 0);
          i_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, s_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, t_11, g_12)));
      t = conc_0_0(t);
      z_11 = t;
      t = i_12;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      j_12 = t;
      t = make_0_0(t);
      a_12 = t;
      t = j_12;
      {
        static ATerm s_0 (ATerm t)
        {
          ATerm m_12 = NULL;
          m_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_11, z_11), m_12);
          t = g_13(t);
          return(t);
        }
        t = map_1_0(s_0, t);
      }
      t = concat_0_0(t);
      b_12 = t;
      t = (ATerm) ATinsert(CheckATermList(b_12), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, q_11, z_11), a_12));
      return(t);
    }
    ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,t_12 = NULL,u_12 = NULL,w_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
    r_12 = t;
    if(match_cons(t, sym__2))
      {
        t_12 = ATgetArgument(t, 0);
        y_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = y_12;
    {
      ATerm u_8 = t;
      int v_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm w_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(v_8);
          t = (ATerm) ATempty;
        }
      else
        {
          t = u_8;
          if(match_cons(t, sym__2))
            {
              z_12 = ATgetArgument(t, 0);
              a_13 = ATgetArgument(t, 1);
              t = a_13;
              {
                ATerm x_8 = t;
                int y_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm z_8 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(y_8);
                    t = t_12;
                    {
                      ATerm a_9 = t;
                      int c_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym__2))
                            {
                              ATerm d_9 = ATgetArgument(t, 0);
                              ATerm i_9 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(c_9);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = a_9;
                          t = (ATerm) ATempty;
                        }
                    }
                  }
                else
                  {
                    t = x_8;
                    {
                      ATerm k_9 = t;
                      int m_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm n_9 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(m_9);
                          t = t_12;
                          {
                            ATerm o_9 = t;
                            int p_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm r_9 = ATgetArgument(t, 0);
                                    ATerm s_9 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(p_9);
                                t = (ATerm) ATempty;
                              }
                            else
                              {
                                t = o_9;
                                t = (ATerm) ATempty;
                              }
                          }
                        }
                      else
                        {
                          t = k_9;
                          if(match_cons(t, sym_alt_2))
                            {
                              q_12 = ATgetArgument(t, 0);
                              n_12 = ATgetArgument(t, 1);
                              t = n_12;
                              if(match_cons(t, sym_alt_2))
                                {
                                  o_12 = ATgetArgument(t, 0);
                                  p_12 = ATgetArgument(t, 1);
                                  t = t_12;
                                  if(match_cons(t, sym__2))
                                    {
                                      u_12 = ATgetArgument(t, 0);
                                      w_12 = ATgetArgument(t, 1);
                                      {
                                        ATerm u_9 = t;
                                        int w_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm x_3 = NULL,b_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,j_4 = NULL,l_4 = NULL,n_4 = NULL,y_1 = NULL;
                                            t = u_12;
                                            if(((b_8 != NULL) && (b_8 != t)))
                                              _fail(t);
                                            else
                                              b_8 = t;
                                            t = w_12;
                                            if(((c_8 != NULL) && (c_8 != t)))
                                              _fail(t);
                                            else
                                              c_8 = t;
                                            t = z_12;
                                            if(((d_8 != NULL) && (d_8 != t)))
                                              _fail(t);
                                            else
                                              d_8 = t;
                                            t = (ATerm) ATmakeAppl(sym_alt_2, q_12, (ATerm) ATmakeAppl(sym_alt_2, o_12, p_12));
                                            t = flat_alt_0_0(t);
                                            x_3 = t;
                                            t = term_x_9;
                                            e_4 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_x_9, x_3);
                                            t = q_5(e_4, x_3, t);
                                            b_4 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_12, w_12), (ATerm) ATmakeAppl(sym__2, z_12, b_4));
                                            t = g_13(t);
                                            n_4 = t;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                g_4 = ATgetFirst((ATermList) t);
                                                j_4 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(n_4);
                                            f_4 = t;
                                            t = g_4;
                                            t = topdown_1_0(w_0, t);
                                            l_4 = t;
                                            t = (ATerm) ATinsert(CheckATermList(j_4), l_4);
                                            y_1 = t;
                                            t = SSLsetAnnotations(y_1, f_4);
                                            LocalPopChoice(w_9);
                                          }
                                        else
                                          {
                                            t = u_9;
                                            {
                                              ATerm y_9 = t;
                                              int b_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = j_13(r_12, t_12, y_12, t);
                                                  LocalPopChoice(b_10);
                                                }
                                              else
                                                {
                                                  t = y_9;
                                                  t = k_13(u_12, w_12, z_12, a_13, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = j_13(r_12, t_12, y_12, t);
                                    }
                                }
                              else
                                {
                                  t = t_12;
                                  if(match_cons(t, sym__2))
                                    {
                                      u_12 = ATgetArgument(t, 0);
                                      w_12 = ATgetArgument(t, 1);
                                      {
                                        ATerm c_10 = t;
                                        int d_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = j_13(r_12, t_12, y_12, t);
                                            LocalPopChoice(d_10);
                                          }
                                        else
                                          {
                                            t = c_10;
                                            t = k_13(u_12, w_12, z_12, a_13, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = j_13(r_12, t_12, y_12, t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_bracket_symbol_1))
                                {
                                  q_12 = ATgetArgument(t, 0);
                                  t = t_12;
                                  if(match_cons(t, sym__2))
                                    {
                                      u_12 = ATgetArgument(t, 0);
                                      w_12 = ATgetArgument(t, 1);
                                      {
                                        ATerm f_10 = t;
                                        int i_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = j_13(r_12, t_12, y_12, t);
                                            LocalPopChoice(i_10);
                                          }
                                        else
                                          {
                                            t = f_10;
                                            {
                                              ATerm j_10 = t;
                                              int o_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_12, w_12), (ATerm) ATmakeAppl(sym__2, z_12, q_12));
                                                  t = g_13(t);
                                                  LocalPopChoice(o_10);
                                                }
                                              else
                                                {
                                                  t = j_10;
                                                  t = k_13(u_12, w_12, z_12, a_13, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = j_13(r_12, t_12, y_12, t);
                                    }
                                }
                              else
                                {
                                  t = t_12;
                                  if(match_cons(t, sym__2))
                                    {
                                      u_12 = ATgetArgument(t, 0);
                                      w_12 = ATgetArgument(t, 1);
                                      {
                                        ATerm p_10 = t;
                                        int u_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = j_13(r_12, t_12, y_12, t);
                                            LocalPopChoice(u_10);
                                          }
                                        else
                                          {
                                            t = p_10;
                                            t = k_13(u_12, w_12, z_12, a_13, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = j_13(r_12, t_12, y_12, t);
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
              t = t_12;
              t = j_13(r_12, t_12, y_12, t);
            }
        }
    }
    return(t);
  }
  f_8 = t;
  t = term_e_3;
  t = p_81(t);
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_8, f_8);
  t = g_13(t);
  return(t);
}
ATerm _2_0 (ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm t)
{
  ATerm o_13 = NULL,q_13 = NULL,u_13 = NULL,v_13 = NULL,x_13 = NULL,y_13 = NULL,w_2 = NULL;
  y_13 = t;
  if(match_cons(t, sym__2))
    {
      q_13 = ATgetArgument(t, 0);
      u_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_13);
  o_13 = t;
  t = q_13;
  t = y_67(t);
  v_13 = t;
  t = u_13;
  t = z_67(t);
  x_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_13, x_13);
  w_2 = t;
  t = SSLsetAnnotations(w_2, o_13);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
  b_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_14;
    }
  else
    {
      ATerm l_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_14 = ATgetFirst((ATermList) t);
          f_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_14 = ATgetFirst((ATermList) t);
          h_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_14;
      t = pair_0_0(t);
      l_14 = t;
      t = (ATerm) ATinsert(CheckATermList(l_14), (ATerm) ATmakeAppl(sym__2, c_14, g_14));
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,t_17 = NULL,k_3 = NULL;
  q_17 = t;
  if(match_cons(t, sym_lit_1))
    {
      p_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_17);
  o_17 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, p_17);
  k_3 = t;
  t = SSLsetAnnotations(k_3, o_17);
  if(match_cons(t, sym_lit_1))
    {
      t_17 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_v_10, (ATerm) ATmakeAppl(sym_S_1, t_17));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          t_17 = ATgetArgument(t, 0);
          {
            ATerm w_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, t_17);
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,h_19 = NULL,q_19 = NULL,w_19 = NULL,c_20 = NULL,d_20 = NULL,g_20 = NULL,v_3 = NULL,p_23 = NULL,i_20 = NULL,q_3 = NULL;
  g_20 = t;
  if(match_cons(t, sym__2))
    {
      q_19 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_20);
  h_19 = t;
  t = q_19;
  if(match_cons(t, sym_lit_1))
    {
      d_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_19);
  c_20 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, d_20);
  q_3 = t;
  t = SSLsetAnnotations(q_3, c_20);
  if(match_cons(t, sym_lit_1))
    {
      i_20 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_v_10, (ATerm) ATmakeAppl(sym_S_1, i_20));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          i_20 = ATgetArgument(t, 0);
          {
            ATerm x_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, i_20);
    }
  e_19 = t;
  t = w_19;
  t = _2_0(_id, k_1, t);
  if(match_cons(t, sym_lit_1))
    {
      p_23 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_v_10, (ATerm) ATmakeAppl(sym_S_1, p_23));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          p_23 = ATgetArgument(t, 0);
          {
            ATerm y_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, p_23);
    }
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_19, f_19);
  v_3 = t;
  t = SSLsetAnnotations(v_3, h_19);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_c_11), (ATerm) ATinsert(ATinsert(ATempty, f_19), e_19));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm w_22 = NULL,y_22 = NULL;
  w_22 = t;
  if(match_cons(t, sym_iter_1))
    {
      y_22 = ATgetArgument(t, 0);
      {
        ATerm s_7 = NULL,r_3 = NULL;
        t = SSLgetAnnotations(w_22);
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, y_22);
        r_3 = t;
        t = SSLsetAnnotations(r_3, s_7);
      }
    }
  else
    {
      ATerm z_7 = NULL,t_3 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          y_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_22);
      z_7 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, y_22);
      t_3 = t;
      t = SSLsetAnnotations(t_3, z_7);
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm b_24 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      b_24 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_v_10, (ATerm) ATmakeAppl(sym_S_1, b_24));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          b_24 = ATgetArgument(t, 0);
          {
            ATerm e_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, b_24);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_15 = NULL,n_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,b_16 = NULL,m_3 = NULL,i_17 = NULL,j_3 = NULL,d_17 = NULL,g_17 = NULL;
      t = reverse_acc_2_0(_id, x_0, t);
      b_16 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_15 = ATgetFirst((ATermList) t);
          r_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_16);
      n_15 = t;
      t = q_15;
      if(match_cons(t, sym__2))
        {
          w_15 = ATgetArgument(t, 0);
          x_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_15);
      v_15 = t;
      t = x_15;
      if(match_cons(t, sym_iter_1))
        {
          d_17 = ATgetArgument(t, 0);
          {
            ATerm t_6 = NULL,a_3 = NULL;
            t = SSLgetAnnotations(x_15);
            t_6 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, d_17);
            a_3 = t;
            t = SSLsetAnnotations(a_3, t_6);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              d_17 = ATgetArgument(t, 0);
              {
                ATerm z_6 = NULL,b_3 = NULL;
                t = SSLgetAnnotations(x_15);
                z_6 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, d_17);
                b_3 = t;
                t = SSLsetAnnotations(b_3, z_6);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  d_17 = ATgetArgument(t, 0);
                  g_17 = ATgetArgument(t, 1);
                  {
                    ATerm e_7 = NULL,c_3 = NULL;
                    t = SSLgetAnnotations(x_15);
                    e_7 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, d_17, g_17);
                    c_3 = t;
                    t = SSLsetAnnotations(c_3, e_7);
                  }
                }
              else
                {
                  ATerm l_7 = NULL,d_3 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      d_17 = ATgetArgument(t, 0);
                      g_17 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_15);
                  l_7 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, d_17, g_17);
                  d_3 = t;
                  t = SSLsetAnnotations(d_3, l_7);
                }
            }
        }
      y_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_15, y_15);
      j_3 = t;
      t = SSLsetAnnotations(j_3, v_15);
      if(match_cons(t, sym_lit_1))
        {
          i_17 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_v_10, (ATerm) ATmakeAppl(sym_S_1, i_17));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              i_17 = ATgetArgument(t, 0);
              {
                ATerm l_11 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, i_17);
        }
      s_15 = t;
      t = r_15;
      t = map_1_0(a_1, t);
      u_15 = t;
      t = (ATerm) ATinsert(CheckATermList(u_15), s_15);
      m_3 = t;
      t = SSLsetAnnotations(m_3, n_15);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_15 = ATgetFirst((ATermList) t);
          h_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_11 = t;
        if((PushChoice() == 0))
          {
            ATerm a_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,n_3 = NULL;
            e_18 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_18 = ATgetFirst((ATermList) t);
                d_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_18);
            a_18 = t;
            t = d_18;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_18), c_18);
            n_3 = t;
            t = SSLsetAnnotations(n_3, a_18);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_11;
          }
      }
      t = h_15;
      t = reverse_acc_2_0(_id, b_1, t);
      m_15 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_15), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, m_15)));
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_18 = NULL,l_18 = NULL,n_18 = NULL,r_18 = NULL,p_3 = NULL,w_18 = NULL;
            t = reverse_acc_2_0(_id, e_1, t);
            r_18 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_18 = ATgetFirst((ATermList) t);
                n_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_18);
            k_18 = t;
            t = l_18;
            if(match_cons(t, sym_lit_1))
              {
                w_18 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_v_10, (ATerm) ATmakeAppl(sym_S_1, w_18));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    w_18 = ATgetArgument(t, 0);
                    {
                      ATerm p_11 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, w_18);
              }
            l_15 = t;
            t = n_18;
            {
              ATerm r_11 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = r_11;
                }
            }
            t = reverse_acc_2_0(_id, g_1, t);
            j_15 = t;
            t = (ATerm) ATinsert(CheckATermList(j_15), l_15);
            p_3 = t;
            t = SSLsetAnnotations(p_3, k_18);
            t = j_15;
            t = pair_0_0(t);
            t = map_1_0(j_1, t);
            k_15 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, l_15), k_15));
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            t = map_1_0(m_1, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm u_11 = t;
  if((PushChoice() == 0))
    {
      ATerm m_24 = NULL,o_24 = NULL,p_24 = NULL,p_5 = NULL;
      p_24 = t;
      if(match_cons(t, sym_lit_1))
        {
          o_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_24);
      m_24 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, o_24);
      p_5 = t;
      t = SSLsetAnnotations(p_5, m_24);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_11;
    }
  return(t);
}
static ATerm a_27 (ATerm x_24, ATerm y_24, ATerm z_24, ATerm t)
{
  ATerm f_25 = NULL,k_8 = NULL;
  t = SSLgetAnnotations(x_24);
  f_25 = t;
  t = z_24;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_24, z_24);
  k_8 = t;
  t = SSLsetAnnotations(k_8, f_25);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm s_81 (ATerm), ATerm t)
{
  ATerm w_24 = NULL;
  static ATerm z_26 (ATerm t)
  {
    ATerm n_25 = NULL,o_25 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
    n_25 = t;
    if(match_cons(t, sym__2))
      {
        o_25 = ATgetArgument(t, 0);
        b_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = b_26;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_26 = ATgetFirst((ATermList) t);
        d_26 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_11 = t;
          int x_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_27(n_25, o_25, b_26, t);
              LocalPopChoice(x_11);
            }
          else
            {
              t = w_11;
              {
                ATerm y_11 = t;
                int d_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
                    t = c_26;
                    t = s_81(t);
                    t = term_r_8;
                    q_26 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_25, term_r_8);
                    t = e_6(o_25, q_26, t);
                    p_26 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_26, d_26);
                    t = z_26(t);
                    o_26 = t;
                    t = (ATerm) ATinsert(CheckATermList(o_26), (ATerm) ATmakeAppl(sym__2, o_25, c_26));
                    LocalPopChoice(d_12);
                  }
                else
                  {
                    t = y_11;
                    {
                      ATerm x_26 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, o_25, d_26);
                      t = z_26(t);
                      x_26 = t;
                      t = (ATerm) ATinsert(CheckATermList(x_26), c_26);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = a_27(n_25, o_25, b_26, t);
      }
    return(t);
  }
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_8, w_24);
  t = z_26(t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  k_27 = t;
  {
    ATerm f_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm l_12 = ATgetArgument(t, 0);
            j_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(k_12);
        t = j_27;
      }
    else
      {
        t = f_12;
        t = k_27;
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
ATerm symbols2pp_entries_1_0 (ATerm o_81 (ATerm), ATerm t)
{
  ATerm p_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL;
  t = number_nonterminals_0_0(t);
  u_27 = t;
  t = make_0_0(t);
  p_27 = t;
  t = u_27;
  {
    static ATerm p_1 (ATerm t)
    {
      static ATerm q_1 (ATerm t)
      {
        ATerm z_27 = NULL;
        t = term_e_3;
        t = o_81(t);
        z_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_27, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(q_1, t);
      return(t);
    }
    t = map_1_0(p_1, t);
  }
  t = concat_0_0(t);
  s_27 = t;
  t = term_e_3;
  t = o_81(t);
  t_27 = t;
  t = (ATerm) ATinsert(CheckATermList(s_27), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, t_27), p_27));
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm d_28 = NULL;
  ATerm v_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
      ATerm b_13 = t;
      int c_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              s_28 = ATgetArgument(t, 0);
              {
                ATerm d_13 = ATgetArgument(t, 1);
              }
              v_28 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(c_13);
          {
            static ATerm u_1 (ATerm t)
            {
              t = not_null(d_28);
              return(t);
            }
            t = v_28;
            {
              static ATerm s_1 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((d_28 != NULL) && (d_28 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      d_28 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(s_1, t);
            }
            t = s_28;
            t = symbols2pp_entries_1_0(u_1, t);
          }
        }
      else
        {
          t = b_13;
          {
            ATerm y_28 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                s_28 = ATgetArgument(t, 0);
                u_28 = ATgetArgument(t, 1);
                v_28 = ATgetArgument(t, 2);
                w_28 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_13)), u_28), (ATerm) ATinsert(ATinsert(ATempty, term_f_13), (ATerm) ATmakeAppl(sym_lit_1, s_28)));
            t = concat_0_0(t);
            y_28 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, y_28, v_28, w_28);
            t = generate_pp_entries_0_0(t);
          }
        }
      LocalPopChoice(x_12);
    }
  else
    {
      t = v_12;
      {
        ATerm m_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_13 = t;
            if((PushChoice() == 0))
              {
                ATerm a_29 = NULL;
                a_29 = t;
                t = term_s_13;
                t = get_options_0_0(t);
                t = oncetd_1_0(x_1, t);
                t = a_29;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_13;
              }
            t = debug_1_0(z_1, t);
            LocalPopChoice(p_13);
          }
        else
          {
            t = m_13;
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm at_last_1_0 (ATerm b_91 (ATerm), ATerm t)
{
  static ATerm c_31 (ATerm t)
  {
    ATerm y_30 = NULL,a_31 = NULL,b_31 = NULL;
    y_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_31 = ATgetFirst((ATermList) t);
        b_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_8 = NULL,p_8 = NULL;
          t = SSLgetAnnotations(y_30);
          s_8 = t;
          t = b_31;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(b_31), a_31);
          p_8 = t;
          t = SSLsetAnnotations(p_8, s_8);
          t = b_91(t);
          LocalPopChoice(w_13);
        }
      else
        {
          t = t_13;
          {
            ATerm h_9 = NULL,l_9 = NULL,q_8 = NULL;
            t = SSLgetAnnotations(y_30);
            h_9 = t;
            t = b_31;
            t = c_31(t);
            l_9 = t;
            t = (ATerm) ATinsert(CheckATermList(l_9), a_31);
            q_8 = t;
            t = SSLsetAnnotations(q_8, h_9);
          }
        }
    }
    return(t);
  }
  t = c_31(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_31 = ATgetFirst((ATermList) t);
      l_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_31;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_31;
    }
  else
    {
      t = l_31;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm a_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_13 = ATgetFirst((ATermList) t);
      a_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_32;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm u_31 = NULL,x_31 = NULL,y_31 = NULL;
  u_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_31 = ATgetFirst((ATermList) t);
      {
        ATerm d_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_31;
  t = e_99(t);
  t = u_31;
  t = last_0_0(t);
  t = f_99(t);
  t = u_31;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_14 = ATgetFirst((ATermList) t);
      x_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_31;
  t = at_last_1_0(b_2, t);
  return(t);
}
ATerm foldr_3_0 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm t)
{
  ATerm c_32 = NULL,g_32 = NULL,j_32 = NULL;
  c_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_32;
      t = f_96(t);
    }
  else
    {
      ATerm n_32 = NULL,t_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_32 = ATgetFirst((ATermList) t);
          j_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_32;
      t = h_96(t);
      n_32 = t;
      t = j_32;
      t = foldr_3_0(f_96, g_96, h_96, t);
      t_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_32, t_32);
      t = g_96(t);
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm i_113 (ATerm), ATerm t)
{
  static ATerm a_33 (ATerm t)
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_32 = NULL;
        t = i_113(t);
        z_32 = t;
        t = (ATerm) ATinsert(ATempty, z_32);
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        {
          ATerm t_9 = NULL,v_9 = NULL;
          v_9 = t;
          t = SSL_explode_term(v_9);
          if(match_cons(t, sym__2))
            {
              ATerm k_14 = ATgetArgument(t, 0);
              t_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_9;
          t = foldr_3_0(f_2, conc_0_0, a_33, t);
        }
      }
    return(t);
  }
  t = a_33(t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm z_33 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      z_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_33;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm j_35 = NULL,q_35 = NULL;
  q_35 = t;
  if(match_cons(t, sym_cons_1))
    {
      j_35 = ATgetArgument(t, 0);
      {
        ATerm m_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_10 = NULL,g_10 = NULL,h_10 = NULL,b_9 = NULL;
            t = SSLgetAnnotations(q_35);
            e_10 = t;
            t = SSL_explode_string(j_35);
            t = unquote_chars_2_0(k_2, l_2, t);
            h_10 = t;
            t = SSL_implode_string(h_10);
            g_10 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, g_10);
            b_9 = t;
            t = SSLsetAnnotations(b_9, e_10);
            LocalPopChoice(o_14);
          }
        else
          {
            t = m_14;
            t = q_35;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          j_35 = ATgetArgument(t, 0);
          {
            ATerm p_14 = t;
            int q_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_11 = NULL,j_11 = NULL,k_11 = NULL,e_9 = NULL;
                t = SSLgetAnnotations(q_35);
                d_11 = t;
                t = SSL_explode_string(j_35);
                t = unquote_chars_2_0(m_2, o_2, t);
                k_11 = t;
                t = SSL_implode_string(k_11);
                j_11 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, j_11);
                e_9 = t;
                t = SSLsetAnnotations(e_9, d_11);
                LocalPopChoice(q_14);
              }
            else
              {
                t = p_14;
                t = q_35;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_sort_1))
            {
              j_35 = ATgetArgument(t, 0);
              {
                ATerm r_14 = t;
                int s_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_12 = NULL,e_12 = NULL,h_12 = NULL,f_9 = NULL;
                    t = SSLgetAnnotations(q_35);
                    c_12 = t;
                    t = SSL_explode_string(j_35);
                    t = unquote_chars_2_0(r_2, t_2, t);
                    h_12 = t;
                    t = SSL_implode_string(h_12);
                    e_12 = t;
                    t = (ATerm) ATmakeAppl(sym_sort_1, e_12);
                    f_9 = t;
                    t = SSLsetAnnotations(f_9, c_12);
                    LocalPopChoice(s_14);
                  }
                else
                  {
                    t = r_14;
                    t = q_35;
                  }
              }
            }
          else
            {
              t = q_35;
            }
        }
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm t_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_14;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
  g_37 = t;
  if(match_cons(t, sym_Arg_1))
    {
      f_37 = ATgetArgument(t, 0);
      {
        ATerm v_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_13 = NULL,n_13 = NULL,g_9 = NULL;
            t = SSLgetAnnotations(g_37);
            h_13 = t;
            t = SSL_int_to_string(f_37);
            n_13 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, n_13);
            g_9 = t;
            t = SSLsetAnnotations(g_9, h_13);
            LocalPopChoice(z_14);
          }
        else
          {
            t = v_14;
            t = g_37;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_selector_2))
        {
          f_37 = ATgetArgument(t, 0);
          e_37 = ATgetArgument(t, 1);
          {
            ATerm a_15 = t;
            int b_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_14 = NULL,n_14 = NULL,j_9 = NULL;
                t = SSLgetAnnotations(g_37);
                a_14 = t;
                t = SSL_int_to_string(f_37);
                n_14 = t;
                t = (ATerm) ATmakeAppl(sym_selector_2, n_14, e_37);
                j_9 = t;
                t = SSLsetAnnotations(j_9, a_14);
                LocalPopChoice(b_15);
              }
            else
              {
                t = a_15;
                t = g_37;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_S_1))
            {
              f_37 = ATgetArgument(t, 0);
              {
                ATerm e_15 = t;
                int f_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,q_9 = NULL;
                    t = SSLgetAnnotations(g_37);
                    u_14 = t;
                    t = SSL_explode_string(f_37);
                    x_14 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_14), term_p_15), (ATerm) ATinsert(ATempty, term_p_15));
                    t = conc_0_0(t);
                    y_14 = t;
                    t = SSL_implode_string(y_14);
                    w_14 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, w_14);
                    q_9 = t;
                    t = SSLsetAnnotations(q_9, u_14);
                    LocalPopChoice(f_15);
                  }
                else
                  {
                    t = e_15;
                    t = g_37;
                  }
              }
            }
          else
            {
              t = g_37;
            }
        }
    }
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm v_33 = NULL;
  t = collect_p__1_0(i_2, t);
  t = concat_0_0(t);
  t = topdown_1_0(j_2, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(u_2, t);
  t = concat_0_0(t);
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, v_33);
  t = topdown_1_0(v_2, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm s_84 (ATerm), ATerm t)
{
  static ATerm r_37 (ATerm t)
  {
    ATerm t_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_84(t);
        LocalPopChoice(z_15);
      }
    else
      {
        t = t_15;
        t = SRTS_one(r_37, t);
      }
    return(t);
  }
  t = r_37(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL;
  t = term_c_16;
  s_37 = t;
  t = term_d_16;
  t_37 = t;
  t = term_e_16;
  t = g_6(s_37, t_37, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
      t = term_k_16;
      t = get_options_0_0(t);
      t = oncetd_1_0(x_2, t);
      t = term_m_16;
      v_37 = t;
      t = (ATerm) ATinsert(ATempty, term_n_16);
      w_37 = t;
      t = SSL_printnl(v_37, w_37);
      t = term_r_8;
      u_37 = t;
      t = SSL_exit(u_37);
      t = (ATerm) ATinsert(ATempty, term_n_16);
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      {
        ATerm y_37 = NULL,z_37 = NULL;
        t = term_m_16;
        y_37 = t;
        t = (ATerm) ATinsert(ATempty, term_o_16);
        z_37 = t;
        t = SSL_printnl(y_37, z_37);
        t = (ATerm) ATinsert(ATempty, term_o_16);
      }
    }
  return(t);
}
static ATerm q_5 (ATerm c_41, ATerm d_41, ATerm t)
{
  t = SSL_mkterm(c_41, d_41);
  return(t);
}
static ATerm r_5 (ATerm u_113 (ATerm), ATerm i_60, ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL;
  t = term_e_3;
  t = u_113(t);
  d_38 = t;
  t = (ATerm) ATinsert(ATempty, i_60);
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_38, (ATerm) ATinsert(ATempty, i_60));
  t = q_5(d_38, e_38, t);
  return(t);
}
ATerm InOutId_2_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
  y_38 = t;
  if(match_cons(t, sym__2))
    {
      z_38 = ATgetArgument(t, 0);
      a_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_16 = NULL,f_16 = NULL,z_9 = NULL;
        t = SSLgetAnnotations(y_38);
        f_16 = t;
        t = z_38;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("out-type", 0, ATtrue)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_38, a_39);
        z_9 = t;
        t = SSLsetAnnotations(z_9, f_16);
        if(match_cons(t, sym__2))
          {
            ATerm s_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_16) != ATmakeSymbol("out-type", 0, ATtrue)))
              _fail(t);
            a_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_5(o_0, a_16, t);
        LocalPopChoice(r_16);
      }
    else
      {
        t = p_16;
        {
          ATerm f_17 = NULL,j_17 = NULL,g_18 = NULL,h_18 = NULL,a_10 = NULL;
          t = SSLgetAnnotations(y_38);
          j_17 = t;
          t = z_38;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("in-type", 0, ATtrue)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, z_38, a_39);
          a_10 = t;
          t = SSLsetAnnotations(a_10, j_17);
          if(match_cons(t, sym__2))
            {
              ATerm u_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) u_16) != ATmakeSymbol("in-type", 0, ATtrue)))
                _fail(t);
              f_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSL_explode_term(f_17);
          if(match_cons(t, sym__2))
            {
              h_18 = ATgetArgument(t, 0);
              {
                ATerm w_16 = ATgetArgument(t, 1);
                if(((ATgetType(w_16) == AT_LIST) && !(ATisEmpty(w_16))))
                  {
                    g_18 = ATgetFirst((ATermList) w_16);
                    {
                      ATerm y_16 = (ATerm) ATgetNext((ATermList) w_16);
                      if(((ATgetType(y_16) != AT_LIST) || !(ATisEmpty(y_16))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = h_18;
          {
            ATerm z_16 = t;
            int a_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = n_0(t);
                LocalPopChoice(a_17);
              }
            else
              {
                t = z_16;
                t = type_failure_0_0(t);
              }
          }
          t = g_18;
        }
      }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
  d_39 = t;
  t = term_e_3;
  t = whoami_0_0(t);
  e_39 = t;
  t = term_m_16;
  g_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_17), e_39), term_b_17);
  h_39 = t;
  t = SSL_printnl(g_39, h_39);
  t = term_r_8;
  f_39 = t;
  t = SSL_exit(f_39);
  t = d_39;
  return(t);
}
static ATerm w_5 (ATerm q_40, ATerm r_40, ATerm t)
{
  ATerm i_39 = NULL;
  t = SSL_fputc(q_40, r_40);
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_39);
  return(t);
}
static ATerm x_5 (ATerm w_25, ATerm x_25, ATerm t)
{
  ATerm l_39 = NULL;
  t = SSL_write_term_to_stream_text(w_25, x_25);
  l_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_39);
  return(t);
}
static ATerm z_5 (ATerm r_89 (ATerm), ATerm z_170, ATerm a_26, ATerm t)
{
  ATerm m_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_170, term_e_17);
  t = c_6(t);
  m_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_39, a_26);
  t = r_89(t);
  t = fclose_0_0(t);
  t = a_26;
  return(t);
}
static ATerm y_5 (ATerm s_25, ATerm t_25, ATerm t)
{
  ATerm n_39 = NULL;
  t = SSL_write_term_to_stream_baf(s_25, t_25);
  n_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_39);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_17 = ATgetArgument(t, 0);
      if(match_cons(h_17, sym_Stream_1))
        {
          j_19 = ATgetArgument(h_17, 0);
        }
      else
        _fail(t);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(j_19, k_19, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_17 = ATgetArgument(t, 0);
      if(match_cons(k_17, sym_Stream_1))
        {
          a_20 = ATgetArgument(k_17, 0);
        }
      else
        _fail(t);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(a_20, b_20, t);
  x_19 = t;
  t = term_l_17;
  y_19 = t;
  t = x_19;
  if(match_cons(t, sym_Stream_1))
    {
      z_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_17, x_19);
  t = w_5(y_19, z_19, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,l_41 = NULL,m_41 = NULL,l_10 = NULL,k_10 = NULL;
  s_39 = t;
  if(match_cons(t, sym__2))
    {
      z_39 = ATgetArgument(t, 0);
      a_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_39);
  y_39 = t;
  t = z_39;
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm y_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((r_39 != NULL) && (r_39 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(y_2, t);
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        t = term_r_17;
        r_39 = t;
      }
  }
  b_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_40, a_40);
  k_10 = t;
  t = SSLsetAnnotations(k_10, y_39);
  t = s_39;
  if(match_cons(t, sym__2))
    {
      u_39 = ATgetArgument(t, 0);
      v_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_39);
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_39, (ATerm) ATmakeAppl(sym__2, not_null(r_39), v_39));
  l_10 = t;
  t = SSLsetAnnotations(l_10, t_39);
  x_39 = t;
  if(match_cons(t, sym__2))
    {
      l_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_18 = NULL,a_19 = NULL,b_19 = NULL,g_19 = NULL,i_19 = NULL,m_10 = NULL;
        t = SSLgetAnnotations(x_39);
        s_18 = t;
        t = l_41;
        t = fetch_1_0(z_2, t);
        a_19 = t;
        t = m_41;
        if(match_cons(t, sym__2))
          {
            g_19 = ATgetArgument(t, 0);
            i_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_5(f_3, g_19, i_19, t);
        b_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_19, b_19);
        m_10 = t;
        t = SSLsetAnnotations(m_10, s_18);
        LocalPopChoice(u_17);
      }
    else
      {
        t = s_17;
        {
          ATerm p_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,n_10 = NULL;
          t = SSLgetAnnotations(x_39);
          p_19 = t;
          t = m_41;
          if(match_cons(t, sym__2))
            {
              u_19 = ATgetArgument(t, 0);
              v_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_5(g_3, u_19, v_19, t);
          t_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_41, t_19);
          n_10 = t;
          t = SSLsetAnnotations(n_10, p_19);
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
ATerm apply_strategy_1_0 (ATerm m_106 (ATerm), ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
  t_41 = t;
  t = dtime_0_0(t);
  t = t_41;
  t = m_106(t);
  s_41 = t;
  t = dtime_0_0(t);
  p_41 = t;
  t = s_41;
  if(match_cons(t, sym__2))
    {
      q_41 = ATgetArgument(t, 0);
      r_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_41), (ATerm) ATmakeAppl(sym_Runtime_1, p_41)), r_41);
  return(t);
}
static ATerm h_42 (ATerm b_42, ATerm t)
{
  t = SSL_fclose(b_42);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL;
  f_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_42 = ATgetArgument(t, 0);
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_42);
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            t = h_42(f_42, t);
          }
      }
    }
  else
    {
      t = h_42(f_42, t);
    }
  return(t);
}
static ATerm a_6 (ATerm y_25, ATerm t)
{
  t = SSL_read_term_from_stream(y_25);
  return(t);
}
static ATerm b_6 (ATerm s_40, ATerm t_40, ATerm t)
{
  ATerm i_42 = NULL;
  t = SSL_fopen(s_40, t_40);
  i_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_42);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_42 = NULL;
  t = SSL_stdin_stream();
  j_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_42);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_42 = NULL;
  t = SSL_stdout_stream();
  k_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_42);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_42 = NULL;
  t = SSL_stderr_stream();
  l_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_42);
  return(t);
}
static ATerm u_43 (ATerm r_42, ATerm t)
{
  ATerm s_42 = NULL;
  t = SSL_explode_term(r_42);
  if(match_cons(t, sym__2))
    {
      ATerm x_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_17 = ATgetArgument(t, 1);
        if(((ATgetType(y_17) == AT_LIST) && !(ATisEmpty(y_17))))
          {
            s_42 = ATgetFirst((ATermList) y_17);
            {
              ATerm z_17 = (ATerm) ATgetNext((ATermList) y_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_42;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_42;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_42;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_42;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_43 (ATerm v_42, ATerm w_42, ATerm x_42, ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,d_43 = NULL,c_15 = NULL;
  t = SSLgetAnnotations(x_42);
  a_43 = t;
  t = v_42;
  if(match_cons(t, sym_Path_1))
    {
      d_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_43, w_42);
  c_15 = t;
  t = SSLsetAnnotations(c_15, a_43);
  if(match_cons(t, sym__2))
    {
      y_42 = ATgetArgument(t, 0);
      z_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(y_42, z_42, t);
  return(t);
}
static ATerm w_43 (ATerm f_43, ATerm g_43, ATerm h_43, ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,p_43 = NULL,d_15 = NULL;
  t = SSLgetAnnotations(h_43);
  k_43 = t;
  t = SSL_is_string(f_43);
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_43, g_43);
  d_15 = t;
  t = SSLsetAnnotations(d_15, k_43);
  if(match_cons(t, sym__2))
    {
      i_43 = ATgetArgument(t, 0);
      j_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(i_43, j_43, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
  r_43 = t;
  if(match_cons(t, sym__2))
    {
      s_43 = ATgetArgument(t, 0);
      t_43 = ATgetArgument(t, 1);
      {
        ATerm b_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_43(r_43, t);
            LocalPopChoice(f_18);
          }
        else
          {
            t = b_18;
            {
              ATerm i_18 = t;
              int j_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_43(s_43, t_43, r_43, t);
                  LocalPopChoice(j_18);
                }
              else
                {
                  t = i_18;
                  t = w_43(s_43, t_43, r_43, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_43(r_43, t);
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_m_18;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_44 = NULL;
      a_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_44, term_q_18);
      t = c_6(t);
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      t = debug_1_0(h_3, t);
      _fail(t);
    }
  y_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(z_43, t);
  x_43 = t;
  t = y_43;
  t = fclose_0_0(t);
  t = x_43;
  return(t);
}
ATerm fetch_1_0 (ATerm k_90 (ATerm), ATerm t)
{
  static ATerm z_44 (ATerm t)
  {
    ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL;
    w_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_44 = ATgetFirst((ATermList) t);
        y_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_18 = t;
      int u_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_20 = NULL,a_21 = NULL,g_15 = NULL;
          t = SSLgetAnnotations(w_44);
          x_20 = t;
          t = x_44;
          t = k_90(t);
          a_21 = t;
          t = (ATerm) ATinsert(CheckATermList(y_44), a_21);
          g_15 = t;
          t = SSLsetAnnotations(g_15, x_20);
          LocalPopChoice(u_18);
        }
      else
        {
          t = t_18;
          {
            ATerm j_21 = NULL,m_21 = NULL,o_15 = NULL;
            t = SSLgetAnnotations(w_44);
            j_21 = t;
            t = y_44;
            t = z_44(t);
            m_21 = t;
            t = (ATerm) ATinsert(CheckATermList(m_21), x_44);
            o_15 = t;
            t = SSLsetAnnotations(o_15, j_21);
          }
        }
    }
    return(t);
  }
  t = z_44(t);
  return(t);
}
static ATerm v_5 (ATerm j_39, ATerm k_39, ATerm t)
{
  t = SSL_strcat(j_39, k_39);
  return(t);
}
ATerm debug_1_0 (ATerm p_89 (ATerm), ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL;
  c_45 = t;
  t = p_89(t);
  d_45 = t;
  t = term_m_16;
  e_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_45), d_45);
  f_45 = t;
  t = SSL_printnl(e_45, f_45);
  t = c_45;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm v_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(x_18);
    }
  else
    {
      t = v_18;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_y_18;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_18 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_45 = NULL;
      m_45 = t;
      t = SSL_is_string(m_45);
      LocalPopChoice(c_19);
    }
  else
    {
      t = z_18;
      {
        ATerm d_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_3, t);
            LocalPopChoice(l_19);
          }
        else
          {
            t = d_19;
            {
              ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
              s_45 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_45 = ATgetArgument(t, 0);
                  t = t_45;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_45 = ATgetArgument(t, 0);
                      t = t_45;
                      {
                        ATerm m_19 = t;
                        int n_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(n_19);
                          }
                        else
                          {
                            t = m_19;
                            t = debug_1_0(l_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_45 = NULL,z_45 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_45 = ATgetArgument(t, 0);
                          u_45 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_45;
                      t = eval_config_0_0(t);
                      y_45 = t;
                      t = u_45;
                      t = eval_config_0_0(t);
                      z_45 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_45, z_45);
                      t = v_5(y_45, z_45, t);
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
  ATerm d_46 = NULL,e_46 = NULL;
  d_46 = t;
  t = term_o_19;
  e_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_19, d_46);
  t = g_6(e_46, d_46, t);
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_46 = NULL,g_46 = NULL;
        t = eval_config_0_0(t);
        f_46 = t;
        t = term_o_19;
        g_46 = t;
        t = SSL_table_put(g_46, d_46, f_46);
        t = f_46;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_104 (ATerm), ATerm t)
{
  ATerm k_46 = NULL;
  k_46 = t;
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_46 = NULL;
        t = term_h_20;
        t = get_config_0_0(t);
        m_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_46, term_j_20);
        t = geq_0_0(t);
        t = k_46;
        t = v_104(t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
        t = k_46;
      }
  }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm p_46 = NULL;
  p_46 = t;
  if(match_string(t, "-k"))
    {
      t = p_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_46;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL;
  q_46 = t;
  t = SSL_string_to_int(q_46);
  r_46 = t;
  t = term_k_20;
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_20, r_46);
  t = i_6(s_46, r_46, t);
  t = q_46;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_3, s_3, u_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm u_46 = NULL;
  u_46 = t;
  if(match_string(t, "-S"))
    {
      t = u_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_46;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL;
  t = term_h_20;
  v_46 = t;
  t = term_m_20;
  w_46 = t;
  t = term_n_20;
  t = i_6(v_46, w_46, t);
  t = term_o_20;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_p_20;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
  x_46 = t;
  t = SSL_string_to_int(x_46);
  y_46 = t;
  t = term_h_20;
  z_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_20, y_46);
  t = i_6(z_46, y_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_46);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_q_20;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL;
  t = term_r_20;
  a_47 = t;
  t = term_e_3;
  b_47 = t;
  t = term_s_20;
  t = i_6(a_47, b_47, t);
  t = term_t_20;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_3, c_4, d_4, t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_4, i_4, k_4, t);
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            t = Option_3_0(m_4, o_4, q_4, t);
          }
      }
    }
  return(t);
}
static ATerm i_6 (ATerm j_50, ATerm k_50, ATerm t)
{
  ATerm c_47 = NULL;
  t = term_o_19;
  c_47 = t;
  t = SSL_table_put(c_47, j_50, k_50);
  t = (ATerm) ATmakeAppl(sym__3, term_o_19, j_50, k_50);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm e_47 = NULL;
  e_47 = t;
  if(match_string(t, "-o"))
    {
      t = e_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_47;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL;
  f_47 = t;
  t = term_b_21;
  g_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_21, f_47);
  t = i_6(g_47, f_47, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_47);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
static ATerm d_6 (ATerm j_55, ATerm k_55, ATerm i_55, ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
  i_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_55, k_55);
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_21 = ATgetArgument(t, 0);
            ATerm g_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_55, k_55);
        t = g_6(j_55, k_55, t);
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = (ATerm) ATempty;
      }
  }
  j_47 = t;
  t = (ATerm) ATinsert(CheckATermList(j_47), i_55);
  k_47 = t;
  t = SSL_table_put(j_55, k_55, k_47);
  t = i_47;
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL;
      t = term_e_3;
      t = l_0(t);
      v_47 = t;
      t = term_v_6;
      w_47 = t;
      t = term_o_7;
      x_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_6, term_o_7, v_47);
      t = d_6(w_47, x_47, v_47, t);
      _fail(t);
    }
  else
    {
      ATerm b_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_47 = ATgetFirst((ATermList) t);
          s_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_47 = ATgetFirst((ATermList) t);
          u_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_47;
      t = i_0(t);
      t = t_47;
      t = k_0(t);
      b_48 = t;
      t = (ATerm) ATinsert(CheckATermList(u_47), b_48);
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm d_48 = NULL;
  d_48 = t;
  if(match_string(t, "-i"))
    {
      t = d_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_48;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL;
  e_48 = t;
  t = term_h_21;
  f_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_21, e_48);
  t = i_6(f_48, e_48, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_48);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_i_21;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, v_4, x_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_3;
  t = whoami_0_0(t);
  g_48 = t;
  t = term_m_16;
  i_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_21), g_48);
  j_48 = t;
  t = SSL_printnl(i_48, j_48);
  t = term_r_8;
  h_48 = t;
  t = SSL_exit(h_48);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_21;
  t = get_config_0_0(t);
  return(t);
}
static ATerm e_6 (ATerm m_43, ATerm n_43, ATerm t)
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_43, n_43);
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      t = SSL_addr(m_43, n_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL;
  l_48 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_48;
      t = d_96(t);
    }
  else
    {
      ATerm q_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_48 = ATgetFirst((ATermList) t);
          n_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_48;
      t = foldr_2_0(d_96, e_96, t);
      q_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_48, q_48);
      t = e_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_m_20;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL;
  if(match_cons(t, sym__2))
    {
      i_22 = ATgetArgument(t, 0);
      j_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(i_22, j_22, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_48 = NULL,e_22 = NULL,f_22 = NULL;
  t = times_0_0(t);
  f_22 = t;
  t = SSL_explode_term(f_22);
  if(match_cons(t, sym__2))
    {
      ATerm p_21 = ATgetArgument(t, 0);
      e_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_22;
  t = foldr_2_0(b_5, c_5, t);
  t_48 = t;
  t = SSL_TicksToSeconds(t_48);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
  e_49 = t;
  if(match_cons(t, sym__2))
    {
      f_49 = ATgetArgument(t, 0);
      g_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_49;
        if((f_49 != t))
          {
            _fail(t);
          }
        t = e_49;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = (ATerm) ATmakeAppl(sym__2, f_49, g_49);
        {
          ATerm s_21 = t;
          int t_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_49, g_49);
              LocalPopChoice(t_21);
            }
          else
            {
              t = s_21;
              t = SSL_gtr(f_49, g_49);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_49, g_49);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm k_49 = NULL;
  k_49 = t;
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_49 = NULL;
        t = term_h_20;
        t = get_config_0_0(t);
        m_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_49, term_r_8);
        t = geq_0_0(t);
        t = k_49;
        t = u_104(t);
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = k_49;
      }
  }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,r_49 = NULL,s_49 = NULL;
  t = run_time_0_0(t);
  o_49 = t;
  t = term_e_3;
  t = whoami_0_0(t);
  p_49 = t;
  t = term_m_16;
  r_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_21), o_49), term_w_21), p_49);
  s_49 = t;
  t = SSL_printnl(r_49, s_49);
  t = (ATerm) ATmakeAppl(sym__2, term_m_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_21), o_49), term_w_21), p_49));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_20;
  t_49 = t;
  t = SSL_exit(t_49);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL;
  c_50 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_50;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_50 = ATgetArgument(t, 0);
          {
            ATerm a_23 = NULL,g_16 = NULL;
            t = SSLgetAnnotations(c_50);
            a_23 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_50);
            g_16 = t;
            t = SSLsetAnnotations(g_16, a_23);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_50;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_107 (ATerm), ATerm t)
{
  ATerm y_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_22;
      t = get_config_0_0(t);
      LocalPopChoice(z_21);
    }
  else
    {
      t = y_21;
      t = fetch_1_0(e_5, t);
    }
  t = k_107(t);
  return(t);
}
ATerm map_1_0 (ATerm a_90 (ATerm), ATerm t)
{
  static ATerm z_50 (ATerm t)
  {
    ATerm r_50 = NULL,x_50 = NULL,y_50 = NULL;
    r_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_50;
      }
    else
      {
        ATerm i_23 = NULL,m_23 = NULL,n_23 = NULL,j_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_50 = ATgetFirst((ATermList) t);
            y_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_50);
        i_23 = t;
        t = x_50;
        t = a_90(t);
        m_23 = t;
        t = y_50;
        t = z_50(t);
        n_23 = t;
        t = (ATerm) ATinsert(CheckATermList(n_23), m_23);
        j_16 = t;
        t = SSLsetAnnotations(j_16, i_23);
      }
    return(t);
  }
  t = z_50(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_51 = ATgetFirst((ATermList) t);
      d_51 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_51 = NULL,i_51 = NULL;
        static ATerm g_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_51)), not_null(i_51));
          return(t);
        }
        t = d_51;
        t = g_0(t);
        if(((h_51 != NULL) && (h_51 != t)))
          _fail(t);
        else
          h_51 = t;
        t = c_51;
        t = d_0(t);
        if(((i_51 != NULL) && (i_51 != t)))
          _fail(t);
        else
          i_51 = t;
        t = d_51;
        t = reverse_acc_2_0(d_0, g_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_3;
      t = g_0(t);
    }
  return(t);
}
static ATerm g_6 (ATerm a_57, ATerm b_57, ATerm t)
{
  t = SSL_table_get(a_57, b_57);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,l_16 = NULL;
  o_51 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_51);
  m_51 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_51);
  l_16 = t;
  t = SSLsetAnnotations(l_16, m_51);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm q_51 = NULL;
  q_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_51), term_b_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL;
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_21;
      t = get_config_0_0(t);
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      t = fetch_1_0(h_5, t);
    }
  t = term_g_22;
  t = echo_0_0(t);
  t = term_v_6;
  k_51 = t;
  t = term_o_7;
  l_51 = t;
  t = term_h_22;
  t = g_6(k_51, l_51, t);
  t = reverse_acc_2_0(_id, i_5, t);
  t = map_1_0(j_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
  s_51 = t;
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_51;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_22 = ATgetFirst((ATermList) t);
                ATerm n_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_51;
          }
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        t = (ATerm) ATinsert(ATempty, s_51);
      }
  }
  t_51 = t;
  t = term_r_17;
  u_51 = t;
  t = SSL_printnl(u_51, t_51);
  t = s_51;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_21;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL;
  t = term_o_22;
  y_51 = t;
  t = term_e_3;
  z_51 = t;
  t = term_p_22;
  t = i_6(y_51, z_51, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_q_22;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,g_52 = NULL,h_52 = NULL;
  t = term_o_22;
  g_52 = t;
  t = term_e_3;
  h_52 = t;
  t = term_p_22;
  t = i_6(g_52, h_52, t);
  t = term_r_22;
  a_52 = t;
  t = term_e_3;
  b_52 = t;
  t = term_s_22;
  t = i_6(a_52, b_52, t);
  t = term_t_22;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_u_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_5, m_5, n_5, t);
      LocalPopChoice(x_22);
    }
  else
    {
      t = v_22;
      t = Option_3_0(o_5, s_5, u_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_67 (ATerm), ATerm w_67 (ATerm), ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,q_16 = NULL;
  n_52 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_52 = ATgetFirst((ATermList) t);
      k_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_52);
  i_52 = t;
  t = j_52;
  t = v_67(t);
  l_52 = t;
  t = k_52;
  t = w_67(t);
  m_52 = t;
  t = (ATerm) ATinsert(CheckATermList(m_52), l_52);
  q_16 = t;
  t = SSLsetAnnotations(q_16, i_52);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_109 (ATerm), ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,x_52 = NULL,y_52 = NULL,t_16 = NULL;
  s_52 = t;
  {
    ATerm z_22 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_23;
        t = n_109(t);
        LocalPopChoice(b_23);
      }
    else
      {
        t = z_22;
      }
  }
  t = s_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_52 = ATgetFirst((ATermList) t);
      v_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_52);
  t_52 = t;
  t = term_l_21;
  y_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_21, u_52);
  t = i_6(y_52, u_52, t);
  t = v_52;
  {
    static ATerm i_53 (ATerm t)
    {
      ATerm d_23 = t;
      int e_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_53 = NULL;
              b_53 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_53;
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              t = n_109(t);
              t = Cons_2_0(_id, i_53, t);
            }
          LocalPopChoice(e_23);
        }
      else
        {
          t = d_23;
          {
            ATerm e_53 = NULL,f_53 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_53 = ATgetFirst((ATermList) t);
                f_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_53), (ATerm) ATmakeAppl(sym_Undefined_1, e_53));
          }
        }
      return(t);
    }
    t = i_53(t);
  }
  x_52 = t;
  t = (ATerm) ATinsert(CheckATermList(x_52), (ATerm) ATmakeAppl(sym_Program_1, u_52));
  t_16 = t;
  t = SSLsetAnnotations(t_16, t_52);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm u_53 = NULL;
  u_53 = t;
  if(match_string(t, "--help"))
    {
      t = u_53;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_53;
        }
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL;
  t = term_a_22;
  v_53 = t;
  t = term_e_3;
  w_53 = t;
  t = term_h_23;
  t = i_6(v_53, w_53, t);
  t = term_j_23;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_k_23;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_109 (ATerm), ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL;
  p_53 = t;
  t = term_v_6;
  r_53 = t;
  t = term_o_7;
  s_53 = t;
  t = (ATerm) ATempty;
  t_53 = t;
  t = SSL_table_put(r_53, s_53, t_53);
  t = p_53;
  {
    static ATerm f_6 (ATerm t)
    {
      ATerm l_23 = t;
      int o_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_109(t);
          LocalPopChoice(o_23);
        }
      else
        {
          t = l_23;
          {
            ATerm q_23 = t;
            int r_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_6, j_6, k_6, t);
                LocalPopChoice(r_23);
              }
            else
              {
                t = q_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_6, t);
  }
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_54 = NULL;
        d_54 = t;
        {
          ATerm u_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_23 = NULL;
              t = d_54;
              {
                ATerm w_23 = t;
                int x_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_a_22;
                    t = get_config_0_0(t);
                    LocalPopChoice(x_23);
                  }
                else
                  {
                    t = w_23;
                    t = fetch_1_0(l_6, t);
                  }
              }
              t = d_54;
              t = default_system_usage_0_0(t);
              t = term_m_20;
              z_23 = t;
              t = SSL_exit(z_23);
              LocalPopChoice(v_23);
            }
          else
            {
              t = u_23;
              {
                ATerm q_24 = NULL;
                t = term_o_22;
                t = get_config_0_0(t);
                t = d_54;
                t = default_system_about_0_0(t);
                t = term_m_20;
                q_24 = t;
                t = SSL_exit(q_24);
              }
            }
        }
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        {
          ATerm y_23 = t;
          int a_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
              static ATerm n_6 (ATerm t)
              {
                ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,v_16 = NULL;
                j_54 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_54 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_54);
                h_54 = t;
                t = i_54;
                if(((n_53 != NULL) && (n_53 != t)))
                  _fail(t);
                else
                  n_53 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_54);
                v_16 = t;
                t = SSLsetAnnotations(v_16, h_54);
                return(t);
              }
              t = fetch_1_0(n_6, t);
              t = term_m_16;
              f_54 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_53)), term_c_24);
              g_54 = t;
              t = SSL_printnl(f_54, g_54);
              t = (ATerm) ATmakeAppl(sym__2, term_m_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_53)), term_c_24));
              t = default_system_usage_0_0(t);
              t = term_r_8;
              e_54 = t;
              t = SSL_exit(e_54);
              LocalPopChoice(a_24);
            }
          else
            {
              t = y_23;
            }
        }
      }
  }
  o_53 = t;
  t = term_v_6;
  q_53 = t;
  t = SSL_table_destroy(q_53);
  t = o_53;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL,w_54 = NULL;
  t = parse_options_1_0(m_107, t);
  o_54 = t;
  t = term_c_16;
  w_54 = t;
  t = SSL_table_create(w_54);
  t = term_c_16;
  p_54 = t;
  t = term_d_16;
  q_54 = t;
  t = SSL_table_put(p_54, q_54, o_54);
  t = o_54;
  t = o_107(t);
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_107, t);
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        {
          ATerm f_24 = t;
          int g_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_107(t);
              t = report_success_0_0(t);
              LocalPopChoice(g_24);
            }
          else
            {
              t = f_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = if_verbose2_1_0(w_6, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL;
  t = term_h_24;
  x_54 = t;
  t = term_e_3;
  y_54 = t;
  t = term_i_24;
  t = i_6(x_54, y_54, t);
  t = term_j_24;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_k_24;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL;
  z_54 = t;
  t = term_l_21;
  t = get_config_0_0(t);
  a_55 = t;
  t = term_m_16;
  b_55 = t;
  t = (ATerm) ATinsert(ATempty, a_55);
  c_55 = t;
  t = SSL_printnl(b_55, c_55);
  t = z_54;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm t)
{
  static ATerm o_6 (ATerm t)
  {
    ATerm l_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_106(t);
        LocalPopChoice(n_24);
      }
    else
      {
        t = l_24;
        {
          ATerm r_24 = t;
          int s_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(s_24);
            }
          else
            {
              t = r_24;
              {
                ATerm t_24 = t;
                int u_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(u_24);
                  }
                else
                  {
                    t = t_24;
                    {
                      ATerm v_24 = t;
                      int a_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(r_6, s_6, u_6, t);
                          LocalPopChoice(a_25);
                        }
                      else
                        {
                          t = v_24;
                          {
                            ATerm b_25 = t;
                            int c_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(c_25);
                              }
                            else
                              {
                                t = b_25;
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
  static ATerm q_6 (ATerm t)
  {
    ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL;
    e_55 = t;
    {
      ATerm d_25 = t;
      int e_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm x_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((d_55 != NULL) && (d_55 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_55 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(x_6, t);
          LocalPopChoice(e_25);
        }
      else
        {
          t = d_25;
          t = term_g_25;
          d_55 = t;
        }
    }
    t = not_null(d_55);
    t = ReadFromFile_0_0(t);
    f_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_55, f_55);
    t = apply_strategy_1_0(v_106, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(o_6, x_106, p_6, q_6, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--strict", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_k_16;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_h_25;
  return(t);
}
ATerm io_idwrap_3_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t)
{
  static ATerm y_6 (ATerm t)
  {
    ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL;
    q_55 = t;
    if(match_cons(t, sym__2))
      {
        o_55 = ATgetArgument(t, 0);
        p_55 = ATgetArgument(t, 1);
        {
          ATerm i_25 = t;
          int j_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_55 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, term_k_25, p_55);
              t = q_113(t);
              t_55 = t;
              t = (ATerm) ATmakeAppl(sym__2, o_55, t_55);
              LocalPopChoice(j_25);
            }
          else
            {
              t = i_25;
              t = q_55;
            }
        }
      }
    else
      {
        t = q_55;
      }
    t = r_113(t);
    y_55 = t;
    if(match_cons(t, sym__2))
      {
        w_55 = ATgetArgument(t, 0);
        x_55 = ATgetArgument(t, 1);
        {
          ATerm l_25 = t;
          int m_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_56 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, term_p_25, x_55);
              t = q_113(t);
              b_56 = t;
              t = (ATerm) ATmakeAppl(sym__2, w_55, b_56);
              LocalPopChoice(m_25);
            }
          else
            {
              t = l_25;
              t = y_55;
            }
        }
      }
    else
      {
        t = y_55;
      }
    return(t);
  }
  static ATerm a_7 (ATerm t)
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_113(t);
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = Option_3_0(b_7, c_7, d_7, t);
      }
    return(t);
  }
  t = iowrap_3_0(y_6, a_7, default_usage_0_0, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = InOutId_2_0(i_7, j_7, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,x_16 = NULL;
  i_56 = t;
  if(match_cons(t, sym__2))
    {
      f_56 = ATgetArgument(t, 0);
      g_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_56);
  e_56 = t;
  t = g_56;
  t = ppgenerate_0_0(t);
  h_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_56, h_56);
  x_16 = t;
  t = SSLsetAnnotations(x_16, e_56);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = Option_3_0(k_7, m_7, n_7, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"sdf-2.1\"", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_u_25;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-v", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_v_25;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_idwrap_3_0(f_7, g_7, h_7, t);
  return(t);
}
