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
Symbol sym_Path_1;
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
ATerm term_r_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_i_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_x_23;
ATerm term_t_23;
ATerm term_h_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_w_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_u_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_c_19;
ATerm term_y_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_o_17;
ATerm term_j_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_c_16;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_i_15;
ATerm term_q_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_j_12;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_t_10;
ATerm term_z_9;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_v_7;
ATerm term_o_7;
ATerm term_b_7;
ATerm term_h_3;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_3));
  term_h_3 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Arg_1, term_q_8);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_SOpt_2, term_a_11, term_d_11);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_lit_1, term_h_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_lit_1, term_j_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_r_15);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_c_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym__2, term_c_19, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_h_3);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_x_20);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_u_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_o_7);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__2, term_h_22, term_h_3);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_m_22, term_h_3);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym__2, term_u_21, term_h_3);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_h_22);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym__2, term_h_24, term_h_3);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm Option_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm l_1 (ATerm b_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm s_84 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm v_91 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm z_98 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm t_90 (ATerm), ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm symbol2abox_1_0 (ATerm t_82 (ATerm), ATerm t);
ATerm _2_0 (ATerm b_69 (ATerm), ATerm c_69 (ATerm), ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
static ATerm v_27 (ATerm q_25, ATerm z_25, ATerm a_26, ATerm t);
ATerm number_node_1_0 (ATerm w_82 (ATerm), ATerm t);
static ATerm n_1 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm s_82 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm g_92 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm unquote_chars_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
ATerm collect_p__1_0 (ATerm h_115 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm ppgenerate_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm w_85 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm l_5 (ATerm j_41, ATerm k_41, ATerm t);
static ATerm m_5 (ATerm t_115 (ATerm), ATerm l_61, ATerm t);
ATerm InOutId_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm q_5 (ATerm x_40, ATerm y_40, ATerm t);
static ATerm r_5 (ATerm s_25, ATerm t_25, ATerm t);
static ATerm t_5 (ATerm v_90 (ATerm), ATerm k_173, ATerm y_25, ATerm t);
static ATerm s_5 (ATerm o_25, ATerm p_25, ATerm t);
static ATerm b_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm e_108 (ATerm), ATerm t);
static ATerm c_43 (ATerm w_42, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_5 (ATerm u_25, ATerm t);
static ATerm v_5 (ATerm q_39, ATerm r_39, ATerm t);
static ATerm w_5 (ATerm z_40, ATerm a_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_44 (ATerm m_43, ATerm t);
static ATerm q_44 (ATerm q_43, ATerm r_43, ATerm s_43, ATerm t);
static ATerm r_44 (ATerm c_44, ATerm d_44, ATerm e_44, ATerm t);
static ATerm x_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_91 (ATerm), ATerm t);
static ATerm b_6 (ATerm c_57, ATerm d_57, ATerm t);
ATerm if_verbose2_1_0 (ATerm n_106 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_6 (ATerm q_50, ATerm r_50, ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm y_5 (ATerm l_55, ATerm m_55, ATerm k_55, ATerm t);
ATerm ArgOption_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_5 (ATerm t_43, ATerm u_43, ATerm t);
ATerm foldr_2_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_106 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm need_help_1_0 (ATerm c_109 (ATerm), ATerm t);
ATerm map_1_0 (ATerm e_91 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_111 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm parse_options_1_0 (ATerm e_111 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm iowrap_3_0 (ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm io_idwrap_3_0 (ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm Option_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm j_0 = NULL,m_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_0 = NULL,t_0 = NULL,u_0 = NULL;
      t = term_h_3;
      t = p_0(t);
      q_0 = t;
      t = term_b_7;
      t_0 = t;
      t = term_o_7;
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_7, term_o_7, q_0);
      t = y_5(t_0, u_0, q_0, t);
      _fail(t);
    }
  else
    {
      ATerm y_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_0 = ATgetFirst((ATermList) t);
          m_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_0;
      t = n_0(t);
      t = term_h_3;
      t = o_0(t);
      y_0 = t;
      t = (ATerm) ATinsert(CheckATermList(m_0), y_0);
    }
  return(t);
}
static ATerm l_1 (ATerm b_1, ATerm t)
{
  ATerm d_1 = NULL;
  t = SSL_explode_term(b_1);
  if(match_cons(t, sym__2))
    {
      ATerm q_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_7) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm f_1 = NULL,g_1 = NULL,h_1 = NULL;
  h_1 = t;
  if(match_cons(t, sym__2))
    {
      f_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
      {
        ATerm r_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_0 (ATerm t)
            {
              t = g_1;
              return(t);
            }
            t = f_1;
            t = at_end_1_0(a_0, t);
            LocalPopChoice(s_7);
          }
        else
          {
            t = r_7;
            t = l_1(h_1, t);
          }
      }
    }
  else
    {
      t = l_1(h_1, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm s_84 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = topdown_1_0(s_84, t);
    return(t);
  }
  t = s_84(t);
  t = SRTS_all(b_0, t);
  return(t);
}
ATerm at_end_1_0 (ATerm v_91 (ATerm), ATerm t)
{
  static ATerm f_2 (ATerm t)
  {
    ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL;
    c_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_2 = ATgetFirst((ATermList) t);
        b_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_0 = NULL,z_0 = NULL,o_1 = NULL;
          t = SSLgetAnnotations(c_2);
          r_0 = t;
          t = b_2;
          t = f_2(t);
          z_0 = t;
          t = (ATerm) ATinsert(CheckATermList(z_0), a_2);
          o_1 = t;
          t = SSLsetAnnotations(o_1, r_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_2;
        t = v_91(t);
      }
    return(t);
  }
  t = f_2(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_2 = NULL,c_3 = NULL,d_3 = NULL;
  y_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_2;
    }
  else
    {
      static ATerm f_0 (ATerm t)
      {
        t = not_null(d_3);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_3 = ATgetFirst((ATermList) t);
          if(((d_3 != NULL) && (d_3 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_3 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_3;
      t = at_end_1_0(f_0, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm z_98 (ATerm), ATerm t)
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
            ATerm v_1 = NULL,e_2 = NULL,g_2 = NULL,q_1 = NULL;
            t = SSLgetAnnotations(y_3);
            v_1 = t;
            t = z_3;
            t = z_98(t);
            e_2 = t;
            t = a_4;
            t = filter_1_0(z_98, t);
            g_2 = t;
            t = (ATerm) ATinsert(CheckATermList(g_2), e_2);
            q_1 = t;
            t = SSLsetAnnotations(q_1, v_1);
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            t = a_4;
            t = filter_1_0(z_98, t);
          }
      }
    }
  return(t);
}
ATerm debug_1_0 (ATerm t_90 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
  e_4 = t;
  t = t_90(t);
  h_4 = t;
  t = term_v_7;
  i_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_4), h_4);
  j_4 = t;
  t = SSL_printnl(i_4, j_4);
  t = e_4;
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm p_5 = NULL,a_6 = NULL,f_6 = NULL,g_6 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      f_6 = ATgetArgument(t, 0);
      g_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6;
  if(match_cons(t, sym_alt_2))
    {
      p_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
      {
        ATerm x_7 = t;
        int y_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_6 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, p_5, a_6);
            t = flat_alt_0_0(t);
            s_6 = t;
            t = (ATerm) ATinsert(CheckATermList(s_6), f_6);
            LocalPopChoice(y_7);
          }
        else
          {
            t = x_7;
            t = (ATerm) ATinsert(ATinsert(ATempty, g_6), f_6);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, g_6), f_6);
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm b_5 = NULL;
  b_5 = t;
  {
    ATerm z_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_5;
        {
          ATerm b_8 = t;
          if((PushChoice() == 0))
            {
              ATerm o_2 = NULL;
              o_2 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = o_2;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm c_8 = ATgetFirst((ATermList) t);
                      ATerm e_8 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = o_2;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_8;
            }
        }
        t = (ATerm) ATinsert(ATempty, b_5);
        LocalPopChoice(a_8);
      }
    else
      {
        t = z_7;
        t = b_5;
      }
  }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(h_0, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm p_11 = NULL,r_11 = NULL;
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          p_11 = ATgetArgument(t, 0);
          r_11 = ATgetArgument(t, 1);
          {
            ATerm i_8 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_8);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, p_11, r_11);
    }
  else
    {
      t = f_8;
      if(match_cons(t, sym_iter_n_2))
        {
          p_11 = ATgetArgument(t, 0);
          {
            ATerm j_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, p_11);
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm x_4 = NULL,z_4 = NULL;
  z_4 = t;
  if(match_cons(t, sym_Arg_1))
    {
      x_4 = ATgetArgument(t, 0);
      {
        ATerm k_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_6 = NULL,w_1 = NULL;
            t = SSLgetAnnotations(z_4);
            i_6 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, x_4);
            w_1 = t;
            t = SSLsetAnnotations(w_1, i_6);
            t = term_s_8;
            LocalPopChoice(o_8);
          }
        else
          {
            t = k_8;
            t = z_4;
          }
      }
    }
  else
    {
      t = z_4;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  ATerm h_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,r_8 = NULL;
  static ATerm n_13 (ATerm t)
  {
    static ATerm r_13 (ATerm w_10, ATerm x_10, ATerm y_10, ATerm t)
    {
      ATerm c_11 = NULL,h_11 = NULL,t_1 = NULL;
      t = SSLgetAnnotations(w_10);
      c_11 = t;
      t = y_10;
      t = _2_0(_id, s_0, t);
      h_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_10, h_11);
      t_1 = t;
      t = SSLsetAnnotations(t_1, c_11);
      t = n_13(t);
      return(t);
    }
    static ATerm t_13 (ATerm y_11, ATerm z_11, ATerm b_12, ATerm c_12, ATerm t)
    {
      ATerm h_12 = NULL,k_12 = NULL,l_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
      t = SSL_explode_term(c_12);
      if(match_cons(t, sym__2))
        {
          o_12 = ATgetArgument(t, 0);
          p_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, z_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, b_12, o_12)));
      t = conc_0_0(t);
      h_12 = t;
      t = p_12;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      q_12 = t;
      t = make_0_0(t);
      k_12 = t;
      t = q_12;
      {
        static ATerm v_0 (ATerm t)
        {
          ATerm s_12 = NULL;
          s_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_11, h_12), s_12);
          t = n_13(t);
          return(t);
        }
        t = map_1_0(v_0, t);
      }
      t = concat_0_0(t);
      l_12 = t;
      t = (ATerm) ATinsert(CheckATermList(l_12), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, y_11, h_12), k_12));
      return(t);
    }
    ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,y_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,f_13 = NULL,g_13 = NULL;
    y_12 = t;
    if(match_cons(t, sym__2))
      {
        a_13 = ATgetArgument(t, 0);
        d_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = d_13;
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
              f_13 = ATgetArgument(t, 0);
              g_13 = ATgetArgument(t, 1);
              t = g_13;
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
                    t = a_13;
                    {
                      ATerm a_9 = t;
                      int b_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym__2))
                            {
                              ATerm d_9 = ATgetArgument(t, 0);
                              ATerm f_9 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(b_9);
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
                      ATerm h_9 = t;
                      int i_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm j_9 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(i_9);
                          t = a_13;
                          {
                            ATerm n_9 = t;
                            int o_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm p_9 = ATgetArgument(t, 0);
                                    ATerm q_9 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(o_9);
                                t = (ATerm) ATempty;
                              }
                            else
                              {
                                t = n_9;
                                t = (ATerm) ATempty;
                              }
                          }
                        }
                      else
                        {
                          t = h_9;
                          if(match_cons(t, sym_alt_2))
                            {
                              w_12 = ATgetArgument(t, 0);
                              t_12 = ATgetArgument(t, 1);
                              t = t_12;
                              if(match_cons(t, sym_alt_2))
                                {
                                  u_12 = ATgetArgument(t, 0);
                                  v_12 = ATgetArgument(t, 1);
                                  t = a_13;
                                  if(match_cons(t, sym__2))
                                    {
                                      b_13 = ATgetArgument(t, 0);
                                      c_13 = ATgetArgument(t, 1);
                                      {
                                        ATerm x_9 = t;
                                        int y_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm w_3 = NULL,d_4 = NULL,f_4 = NULL,g_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,o_4 = NULL,x_1 = NULL;
                                            t = b_13;
                                            if(((h_8 != NULL) && (h_8 != t)))
                                              _fail(t);
                                            else
                                              h_8 = t;
                                            t = c_13;
                                            if(((l_8 != NULL) && (l_8 != t)))
                                              _fail(t);
                                            else
                                              l_8 = t;
                                            t = f_13;
                                            if(((m_8 != NULL) && (m_8 != t)))
                                              _fail(t);
                                            else
                                              m_8 = t;
                                            t = (ATerm) ATmakeAppl(sym_alt_2, w_12, (ATerm) ATmakeAppl(sym_alt_2, u_12, v_12));
                                            t = flat_alt_0_0(t);
                                            w_3 = t;
                                            t = term_z_9;
                                            f_4 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_z_9, w_3);
                                            t = l_5(f_4, w_3, t);
                                            d_4 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_13, c_13), (ATerm) ATmakeAppl(sym__2, f_13, d_4));
                                            t = n_13(t);
                                            o_4 = t;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                k_4 = ATgetFirst((ATermList) t);
                                                l_4 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(o_4);
                                            g_4 = t;
                                            t = k_4;
                                            t = topdown_1_0(w_0, t);
                                            m_4 = t;
                                            t = (ATerm) ATinsert(CheckATermList(l_4), m_4);
                                            x_1 = t;
                                            t = SSLsetAnnotations(x_1, g_4);
                                            LocalPopChoice(y_9);
                                          }
                                        else
                                          {
                                            t = x_9;
                                            {
                                              ATerm a_10 = t;
                                              int b_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = r_13(y_12, a_13, d_13, t);
                                                  LocalPopChoice(b_10);
                                                }
                                              else
                                                {
                                                  t = a_10;
                                                  t = t_13(b_13, c_13, f_13, g_13, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = r_13(y_12, a_13, d_13, t);
                                    }
                                }
                              else
                                {
                                  t = a_13;
                                  if(match_cons(t, sym__2))
                                    {
                                      b_13 = ATgetArgument(t, 0);
                                      c_13 = ATgetArgument(t, 1);
                                      {
                                        ATerm c_10 = t;
                                        int d_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = r_13(y_12, a_13, d_13, t);
                                            LocalPopChoice(d_10);
                                          }
                                        else
                                          {
                                            t = c_10;
                                            t = t_13(b_13, c_13, f_13, g_13, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = r_13(y_12, a_13, d_13, t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_bracket_symbol_1))
                                {
                                  w_12 = ATgetArgument(t, 0);
                                  t = a_13;
                                  if(match_cons(t, sym__2))
                                    {
                                      b_13 = ATgetArgument(t, 0);
                                      c_13 = ATgetArgument(t, 1);
                                      {
                                        ATerm f_10 = t;
                                        int g_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = r_13(y_12, a_13, d_13, t);
                                            LocalPopChoice(g_10);
                                          }
                                        else
                                          {
                                            t = f_10;
                                            {
                                              ATerm j_10 = t;
                                              int l_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_13, c_13), (ATerm) ATmakeAppl(sym__2, f_13, w_12));
                                                  t = n_13(t);
                                                  LocalPopChoice(l_10);
                                                }
                                              else
                                                {
                                                  t = j_10;
                                                  t = t_13(b_13, c_13, f_13, g_13, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = r_13(y_12, a_13, d_13, t);
                                    }
                                }
                              else
                                {
                                  t = a_13;
                                  if(match_cons(t, sym__2))
                                    {
                                      b_13 = ATgetArgument(t, 0);
                                      c_13 = ATgetArgument(t, 1);
                                      {
                                        ATerm n_10 = t;
                                        int o_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = r_13(y_12, a_13, d_13, t);
                                            LocalPopChoice(o_10);
                                          }
                                        else
                                          {
                                            t = n_10;
                                            t = t_13(b_13, c_13, f_13, g_13, t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = r_13(y_12, a_13, d_13, t);
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
              t = a_13;
              t = r_13(y_12, a_13, d_13, t);
            }
        }
    }
    return(t);
  }
  r_8 = t;
  t = term_h_3;
  t = t_82(t);
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_8, r_8);
  t = n_13(t);
  return(t);
}
ATerm _2_0 (ATerm b_69 (ATerm), ATerm c_69 (ATerm), ATerm t)
{
  ATerm y_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,t_2 = NULL;
  e_14 = t;
  if(match_cons(t, sym__2))
    {
      a_14 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_14);
  y_13 = t;
  t = a_14;
  t = b_69(t);
  c_14 = t;
  t = b_14;
  t = c_69(t);
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_14, d_14);
  t_2 = t;
  t = SSLsetAnnotations(t_2, y_13);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
  j_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_14;
    }
  else
    {
      ATerm r_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_14 = ATgetFirst((ATermList) t);
          l_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_14 = ATgetFirst((ATermList) t);
          n_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_14;
      t = pair_0_0(t);
      r_14 = t;
      t = (ATerm) ATinsert(CheckATermList(r_14), (ATerm) ATmakeAppl(sym__2, k_14, m_14));
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
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,f_18 = NULL,m_3 = NULL;
  y_17 = t;
  if(match_cons(t, sym_lit_1))
    {
      x_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_17);
  w_17 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, x_17);
  m_3 = t;
  t = SSLsetAnnotations(m_3, w_17);
  if(match_cons(t, sym_lit_1))
    {
      f_18 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_10, (ATerm) ATmakeAppl(sym_S_1, f_18));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          f_18 = ATgetArgument(t, 0);
          {
            ATerm u_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, f_18);
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm i_20 = NULL,m_20 = NULL,s_20 = NULL,w_20 = NULL,y_20 = NULL,c_21 = NULL,j_21 = NULL,j_22 = NULL,x_3 = NULL,g_24 = NULL,s_22 = NULL,t_3 = NULL;
  j_22 = t;
  if(match_cons(t, sym__2))
    {
      w_20 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_22);
  s_20 = t;
  t = w_20;
  if(match_cons(t, sym_lit_1))
    {
      j_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_20);
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, j_21);
  t_3 = t;
  t = SSLsetAnnotations(t_3, c_21);
  if(match_cons(t, sym_lit_1))
    {
      s_22 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_10, (ATerm) ATmakeAppl(sym_S_1, s_22));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          s_22 = ATgetArgument(t, 0);
          {
            ATerm v_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, s_22);
    }
  i_20 = t;
  t = y_20;
  t = _2_0(_id, k_1, t);
  if(match_cons(t, sym_lit_1))
    {
      g_24 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_10, (ATerm) ATmakeAppl(sym_S_1, g_24));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          g_24 = ATgetArgument(t, 0);
          {
            ATerm z_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, g_24);
    }
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_20, m_20);
  x_3 = t;
  t = SSLsetAnnotations(x_3, s_20);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_e_11), (ATerm) ATinsert(ATinsert(ATempty, m_20), i_20));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL;
  a_24 = t;
  if(match_cons(t, sym_iter_1))
    {
      b_24 = ATgetArgument(t, 0);
      {
        ATerm w_7 = NULL,u_3 = NULL;
        t = SSLgetAnnotations(a_24);
        w_7 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, b_24);
        u_3 = t;
        t = SSLsetAnnotations(u_3, w_7);
      }
    }
  else
    {
      ATerm d_8 = NULL,v_3 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          b_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_24);
      d_8 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, b_24);
      v_3 = t;
      t = SSLsetAnnotations(v_3, d_8);
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm l_24 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      l_24 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_10, (ATerm) ATmakeAppl(sym_S_1, l_24));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          l_24 = ATgetArgument(t, 0);
          {
            ATerm g_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, l_24);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,s_15 = NULL,t_15 = NULL;
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,i_16 = NULL,o_3 = NULL,q_17 = NULL,l_3 = NULL,m_17 = NULL,n_17 = NULL;
      t = reverse_acc_2_0(_id, x_0, t);
      i_16 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_15 = ATgetFirst((ATermList) t);
          y_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_16);
      w_15 = t;
      t = x_15;
      if(match_cons(t, sym__2))
        {
          e_16 = ATgetArgument(t, 0);
          f_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_15);
      d_16 = t;
      t = f_16;
      if(match_cons(t, sym_iter_1))
        {
          m_17 = ATgetArgument(t, 0);
          {
            ATerm p_6 = NULL,v_2 = NULL;
            t = SSLgetAnnotations(f_16);
            p_6 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, m_17);
            v_2 = t;
            t = SSLsetAnnotations(v_2, p_6);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              m_17 = ATgetArgument(t, 0);
              {
                ATerm d_7 = NULL,w_2 = NULL;
                t = SSLgetAnnotations(f_16);
                d_7 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, m_17);
                w_2 = t;
                t = SSLsetAnnotations(w_2, d_7);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  m_17 = ATgetArgument(t, 0);
                  n_17 = ATgetArgument(t, 1);
                  {
                    ATerm i_7 = NULL,x_2 = NULL;
                    t = SSLgetAnnotations(f_16);
                    i_7 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, m_17, n_17);
                    x_2 = t;
                    t = SSLsetAnnotations(x_2, i_7);
                  }
                }
              else
                {
                  ATerm p_7 = NULL,z_2 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      m_17 = ATgetArgument(t, 0);
                      n_17 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_16);
                  p_7 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, m_17, n_17);
                  z_2 = t;
                  t = SSLsetAnnotations(z_2, p_7);
                }
            }
        }
      g_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_16, g_16);
      l_3 = t;
      t = SSLsetAnnotations(l_3, d_16);
      if(match_cons(t, sym_lit_1))
        {
          q_17 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_10, (ATerm) ATmakeAppl(sym_S_1, q_17));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              q_17 = ATgetArgument(t, 0);
              {
                ATerm l_11 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, q_17);
        }
      z_15 = t;
      t = y_15;
      t = map_1_0(a_1, t);
      a_16 = t;
      t = (ATerm) ATinsert(CheckATermList(a_16), z_15);
      o_3 = t;
      t = SSLsetAnnotations(o_3, w_15);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_15 = ATgetFirst((ATermList) t);
          n_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_11 = t;
        if((PushChoice() == 0))
          {
            ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,p_3 = NULL;
            s_18 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_18 = ATgetFirst((ATermList) t);
                r_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_18);
            p_18 = t;
            t = r_18;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_18), q_18);
            p_3 = t;
            t = SSLsetAnnotations(p_3, p_18);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_11;
          }
      }
      t = n_15;
      t = reverse_acc_2_0(_id, c_1, t);
      u_15 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, o_15), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, u_15)));
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,q_3 = NULL,o_19 = NULL;
            t = reverse_acc_2_0(_id, e_1, t);
            x_18 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_18 = ATgetFirst((ATermList) t);
                w_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_18);
            u_18 = t;
            t = v_18;
            if(match_cons(t, sym_lit_1))
              {
                o_19 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_t_10, (ATerm) ATmakeAppl(sym_S_1, o_19));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    o_19 = ATgetArgument(t, 0);
                    {
                      ATerm q_11 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, o_19);
              }
            t_15 = t;
            t = w_18;
            {
              ATerm s_11 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = s_11;
                }
            }
            t = reverse_acc_2_0(_id, i_1, t);
            p_15 = t;
            t = (ATerm) ATinsert(CheckATermList(p_15), t_15);
            q_3 = t;
            t = SSLsetAnnotations(q_3, u_18);
            t = p_15;
            t = pair_0_0(t);
            t = map_1_0(j_1, t);
            s_15 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, t_15), s_15));
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
  ATerm t_11 = t;
  if((PushChoice() == 0))
    {
      ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,k_5 = NULL;
      f_25 = t;
      if(match_cons(t, sym_lit_1))
        {
          e_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_25);
      d_25 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, e_25);
      k_5 = t;
      t = SSLsetAnnotations(k_5, d_25);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_11;
    }
  return(t);
}
static ATerm v_27 (ATerm q_25, ATerm z_25, ATerm a_26, ATerm t)
{
  ATerm n_26 = NULL,t_8 = NULL;
  t = SSLgetAnnotations(q_25);
  n_26 = t;
  t = a_26;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_25, a_26);
  t_8 = t;
  t = SSLsetAnnotations(t_8, n_26);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm l_25 = NULL;
  static ATerm u_27 (ATerm t)
  {
    ATerm s_26 = NULL,v_26 = NULL,w_26 = NULL,y_26 = NULL,z_26 = NULL;
    s_26 = t;
    if(match_cons(t, sym__2))
      {
        v_26 = ATgetArgument(t, 0);
        w_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = w_26;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_26 = ATgetFirst((ATermList) t);
        z_26 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_11 = t;
          int v_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_27(s_26, v_26, w_26, t);
              LocalPopChoice(v_11);
            }
          else
            {
              t = u_11;
              {
                ATerm w_11 = t;
                int a_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
                    t = y_26;
                    t = w_82(t);
                    t = term_q_8;
                    k_27 = t;
                    t = (ATerm) ATmakeAppl(sym__2, v_26, term_q_8);
                    t = z_5(v_26, k_27, t);
                    j_27 = t;
                    t = (ATerm) ATmakeAppl(sym__2, j_27, z_26);
                    t = u_27(t);
                    i_27 = t;
                    t = (ATerm) ATinsert(CheckATermList(i_27), (ATerm) ATmakeAppl(sym__2, v_26, y_26));
                    LocalPopChoice(a_12);
                  }
                else
                  {
                    t = w_11;
                    {
                      ATerm r_27 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, v_26, z_26);
                      t = u_27(t);
                      r_27 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_27), y_26);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = v_27(s_26, v_26, w_26, t);
      }
    return(t);
  }
  l_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, l_25);
  t = u_27(t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm d_28 = NULL,f_28 = NULL;
  f_28 = t;
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm i_12 = ATgetArgument(t, 0);
            d_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(e_12);
        t = d_28;
      }
    else
      {
        t = d_12;
        t = f_28;
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
ATerm symbols2pp_entries_1_0 (ATerm s_82 (ATerm), ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,t_28 = NULL,u_28 = NULL;
  t = number_nonterminals_0_0(t);
  u_28 = t;
  t = make_0_0(t);
  j_28 = t;
  t = u_28;
  {
    static ATerm p_1 (ATerm t)
    {
      static ATerm r_1 (ATerm t)
      {
        ATerm v_28 = NULL;
        t = term_h_3;
        t = s_82(t);
        v_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_28, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(r_1, t);
      return(t);
    }
    t = map_1_0(p_1, t);
  }
  t = concat_0_0(t);
  k_28 = t;
  t = term_h_3;
  t = s_82(t);
  t_28 = t;
  t = (ATerm) ATinsert(CheckATermList(k_28), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, t_28), j_28));
  return(t);
}
static ATerm y_1 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_j_12;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm c_29 = NULL;
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_29 = NULL,k_29 = NULL,n_29 = NULL,q_29 = NULL;
      ATerm r_12 = t;
      int x_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              j_29 = ATgetArgument(t, 0);
              {
                ATerm z_12 = ATgetArgument(t, 1);
              }
              n_29 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(x_12);
          {
            static ATerm u_1 (ATerm t)
            {
              t = not_null(c_29);
              return(t);
            }
            t = n_29;
            {
              static ATerm s_1 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((c_29 != NULL) && (c_29 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      c_29 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(s_1, t);
            }
            t = j_29;
            t = symbols2pp_entries_1_0(u_1, t);
          }
        }
      else
        {
          t = r_12;
          {
            ATerm r_29 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                j_29 = ATgetArgument(t, 0);
                k_29 = ATgetArgument(t, 1);
                n_29 = ATgetArgument(t, 2);
                q_29 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_13)), k_29), (ATerm) ATinsert(ATinsert(ATempty, term_i_13), (ATerm) ATmakeAppl(sym_lit_1, j_29)));
            t = concat_0_0(t);
            r_29 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, r_29, n_29, q_29);
            t = generate_pp_entries_0_0(t);
          }
        }
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm m_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_13 = t;
            if((PushChoice() == 0))
              {
                ATerm s_29 = NULL;
                s_29 = t;
                t = term_q_13;
                t = get_options_0_0(t);
                t = oncetd_1_0(y_1, t);
                t = s_29;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_13;
              }
            t = debug_1_0(z_1, t);
            LocalPopChoice(o_13);
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
ATerm at_last_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  static ATerm v_31 (ATerm t)
  {
    ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
    s_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_31 = ATgetFirst((ATermList) t);
        u_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_8 = NULL,c_9 = NULL;
          t = SSLgetAnnotations(s_31);
          p_8 = t;
          t = u_31;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(u_31), t_31);
          c_9 = t;
          t = SSLsetAnnotations(c_9, p_8);
          t = g_92(t);
          LocalPopChoice(u_13);
        }
      else
        {
          t = s_13;
          {
            ATerm e_9 = NULL,k_9 = NULL,g_9 = NULL;
            t = SSLgetAnnotations(s_31);
            e_9 = t;
            t = u_31;
            t = v_31(t);
            k_9 = t;
            t = (ATerm) ATinsert(CheckATermList(k_9), t_31);
            g_9 = t;
            t = SSLsetAnnotations(g_9, e_9);
          }
        }
    }
    return(t);
  }
  t = v_31(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm h_32 = NULL,k_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_32 = ATgetFirst((ATermList) t);
      k_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_32;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_32;
    }
  else
    {
      t = k_32;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm v_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_13 = ATgetFirst((ATermList) t);
      v_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_32;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
  s_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_32 = ATgetFirst((ATermList) t);
      {
        ATerm w_13 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_32;
  t = w_100(t);
  t = s_32;
  t = last_0_0(t);
  t = x_100(t);
  t = s_32;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_13 = ATgetFirst((ATermList) t);
      t_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_32;
  t = at_last_1_0(d_2, t);
  return(t);
}
ATerm foldr_3_0 (ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,j_33 = NULL;
  g_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_33;
      t = x_97(t);
    }
  else
    {
      ATerm m_33 = NULL,q_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_33 = ATgetFirst((ATermList) t);
          j_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_33;
      t = z_97(t);
      m_33 = t;
      t = j_33;
      t = foldr_3_0(x_97, y_97, z_97, t);
      q_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_33, q_33);
      t = y_97(t);
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm h_115 (ATerm), ATerm t)
{
  static ATerm w_33 (ATerm t)
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_33 = NULL;
        t = h_115(t);
        u_33 = t;
        t = (ATerm) ATinsert(ATempty, u_33);
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        {
          ATerm r_9 = NULL,v_9 = NULL;
          v_9 = t;
          t = SSL_explode_term(v_9);
          if(match_cons(t, sym__2))
            {
              ATerm i_14 = ATgetArgument(t, 0);
              r_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_9;
          t = foldr_3_0(h_2, conc_0_0, w_33, t);
        }
      }
    return(t);
  }
  t = w_33(t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm w_34 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      w_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_34;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL;
  l_36 = t;
  if(match_cons(t, sym_cons_1))
    {
      k_36 = ATgetArgument(t, 0);
      {
        ATerm o_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_10 = NULL,h_10 = NULL,i_10 = NULL,l_9 = NULL;
            t = SSLgetAnnotations(l_36);
            e_10 = t;
            t = SSL_explode_string(k_36);
            t = unquote_chars_2_0(k_2, l_2, t);
            i_10 = t;
            t = SSL_implode_string(i_10);
            h_10 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, h_10);
            l_9 = t;
            t = SSLsetAnnotations(l_9, e_10);
            LocalPopChoice(p_14);
          }
        else
          {
            t = o_14;
            t = l_36;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          k_36 = ATgetArgument(t, 0);
          {
            ATerm q_14 = t;
            int s_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_11 = NULL,f_11 = NULL,i_11 = NULL,m_9 = NULL;
                t = SSLgetAnnotations(l_36);
                b_11 = t;
                t = SSL_explode_string(k_36);
                t = unquote_chars_2_0(m_2, n_2, t);
                i_11 = t;
                t = SSL_implode_string(i_11);
                f_11 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, f_11);
                m_9 = t;
                t = SSLsetAnnotations(m_9, b_11);
                LocalPopChoice(s_14);
              }
            else
              {
                t = q_14;
                t = l_36;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_sort_1))
            {
              k_36 = ATgetArgument(t, 0);
              {
                ATerm t_14 = t;
                int u_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_11 = NULL,f_12 = NULL,g_12 = NULL,s_9 = NULL;
                    t = SSLgetAnnotations(l_36);
                    x_11 = t;
                    t = SSL_explode_string(k_36);
                    t = unquote_chars_2_0(p_2, q_2, t);
                    g_12 = t;
                    t = SSL_implode_string(g_12);
                    f_12 = t;
                    t = (ATerm) ATmakeAppl(sym_sort_1, f_12);
                    s_9 = t;
                    t = SSLsetAnnotations(s_9, x_11);
                    LocalPopChoice(u_14);
                  }
                else
                  {
                    t = t_14;
                    t = l_36;
                  }
              }
            }
          else
            {
              t = l_36;
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
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm v_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_14;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  b_38 = t;
  if(match_cons(t, sym_Arg_1))
    {
      a_38 = ATgetArgument(t, 0);
      {
        ATerm w_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_13 = NULL,k_13 = NULL,t_9 = NULL;
            t = SSLgetAnnotations(b_38);
            e_13 = t;
            t = SSL_int_to_string(a_38);
            k_13 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, k_13);
            t_9 = t;
            t = SSLsetAnnotations(t_9, e_13);
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
            t = b_38;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_selector_2))
        {
          a_38 = ATgetArgument(t, 0);
          z_37 = ATgetArgument(t, 1);
          {
            ATerm z_14 = t;
            int d_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_13 = NULL,h_14 = NULL,u_9 = NULL;
                t = SSLgetAnnotations(b_38);
                z_13 = t;
                t = SSL_int_to_string(a_38);
                h_14 = t;
                t = (ATerm) ATmakeAppl(sym_selector_2, h_14, z_37);
                u_9 = t;
                t = SSLsetAnnotations(u_9, z_13);
                LocalPopChoice(d_15);
              }
            else
              {
                t = z_14;
                t = b_38;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_S_1))
            {
              a_38 = ATgetArgument(t, 0);
              {
                ATerm e_15 = t;
                int f_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,w_9 = NULL;
                    t = SSLgetAnnotations(b_38);
                    y_14 = t;
                    t = SSL_explode_string(a_38);
                    b_15 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_15), term_i_15), (ATerm) ATinsert(ATempty, term_i_15));
                    t = conc_0_0(t);
                    c_15 = t;
                    t = SSL_implode_string(c_15);
                    a_15 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, a_15);
                    w_9 = t;
                    t = SSLsetAnnotations(w_9, y_14);
                    LocalPopChoice(f_15);
                  }
                else
                  {
                    t = e_15;
                    t = b_38;
                  }
              }
            }
          else
            {
              t = b_38;
            }
        }
    }
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm v_34 = NULL;
  t = collect_p__1_0(i_2, t);
  t = concat_0_0(t);
  t = topdown_1_0(j_2, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(r_2, t);
  t = concat_0_0(t);
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, v_34);
  t = topdown_1_0(s_2, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  static ATerm m_38 (ATerm t)
  {
    ATerm j_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_85(t);
        LocalPopChoice(m_15);
      }
    else
      {
        t = j_15;
        t = SRTS_one(m_38, t);
      }
    return(t);
  }
  t = m_38(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL;
  t = term_q_15;
  n_38 = t;
  t = term_r_15;
  o_38 = t;
  t = term_c_16;
  t = b_6(n_38, o_38, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm h_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
      t = term_k_16;
      t = get_options_0_0(t);
      t = oncetd_1_0(u_2, t);
      t = term_v_7;
      q_38 = t;
      t = (ATerm) ATinsert(ATempty, term_l_16);
      r_38 = t;
      t = SSL_printnl(q_38, r_38);
      t = term_q_8;
      p_38 = t;
      t = SSL_exit(p_38);
      t = (ATerm) ATinsert(ATempty, term_l_16);
      LocalPopChoice(j_16);
    }
  else
    {
      t = h_16;
      {
        ATerm t_38 = NULL,u_38 = NULL;
        t = term_v_7;
        t_38 = t;
        t = (ATerm) ATinsert(ATempty, term_m_16);
        u_38 = t;
        t = SSL_printnl(t_38, u_38);
        t = (ATerm) ATinsert(ATempty, term_m_16);
      }
    }
  return(t);
}
static ATerm l_5 (ATerm j_41, ATerm k_41, ATerm t)
{
  t = SSL_mkterm(j_41, k_41);
  return(t);
}
static ATerm m_5 (ATerm t_115 (ATerm), ATerm l_61, ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL;
  t = term_h_3;
  t = t_115(t);
  y_38 = t;
  t = (ATerm) ATinsert(ATempty, l_61);
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_38, (ATerm) ATinsert(ATempty, l_61));
  t = l_5(y_38, z_38, t);
  return(t);
}
ATerm InOutId_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
  v_39 = t;
  if(match_cons(t, sym__2))
    {
      w_39 = ATgetArgument(t, 0);
      x_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_15 = NULL,b_16 = NULL,k_10 = NULL;
        t = SSLgetAnnotations(v_39);
        b_16 = t;
        t = w_39;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("out-type", 0, ATtrue)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_39, x_39);
        k_10 = t;
        t = SSLsetAnnotations(k_10, b_16);
        if(match_cons(t, sym__2))
          {
            ATerm r_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_16) != ATmakeSymbol("out-type", 0, ATtrue)))
              _fail(t);
            v_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_5(l_0, v_15, t);
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        {
          ATerm d_17 = NULL,g_17 = NULL,c_18 = NULL,d_18 = NULL,m_10 = NULL;
          t = SSLgetAnnotations(v_39);
          g_17 = t;
          t = w_39;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("in-type", 0, ATtrue)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, w_39, x_39);
          m_10 = t;
          t = SSLsetAnnotations(m_10, g_17);
          if(match_cons(t, sym__2))
            {
              ATerm s_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_16) != ATmakeSymbol("in-type", 0, ATtrue)))
                _fail(t);
              d_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSL_explode_term(d_17);
          if(match_cons(t, sym__2))
            {
              d_18 = ATgetArgument(t, 0);
              {
                ATerm t_16 = ATgetArgument(t, 1);
                if(((ATgetType(t_16) == AT_LIST) && !(ATisEmpty(t_16))))
                  {
                    c_18 = ATgetFirst((ATermList) t_16);
                    {
                      ATerm u_16 = (ATerm) ATgetNext((ATermList) t_16);
                      if(((ATgetType(u_16) != AT_LIST) || !(ATisEmpty(u_16))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = d_18;
          {
            ATerm w_16 = t;
            int y_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = k_0(t);
                LocalPopChoice(y_16);
              }
            else
              {
                t = w_16;
                t = type_failure_0_0(t);
              }
          }
          t = c_18;
        }
      }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
  a_40 = t;
  t = term_h_3;
  t = whoami_0_0(t);
  b_40 = t;
  t = term_v_7;
  d_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_17), b_40), term_a_17);
  e_40 = t;
  t = SSL_printnl(d_40, e_40);
  t = term_q_8;
  c_40 = t;
  t = SSL_exit(c_40);
  t = a_40;
  return(t);
}
static ATerm q_5 (ATerm x_40, ATerm y_40, ATerm t)
{
  ATerm f_40 = NULL;
  t = SSL_fputc(x_40, y_40);
  f_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_40);
  return(t);
}
static ATerm r_5 (ATerm s_25, ATerm t_25, ATerm t)
{
  ATerm g_40 = NULL;
  t = SSL_write_term_to_stream_text(s_25, t_25);
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_40);
  return(t);
}
static ATerm t_5 (ATerm v_90 (ATerm), ATerm k_173, ATerm y_25, ATerm t)
{
  ATerm h_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_173, term_c_17);
  t = x_5(t);
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_40, y_25);
  t = v_90(t);
  t = fclose_0_0(t);
  t = y_25;
  return(t);
}
static ATerm s_5 (ATerm o_25, ATerm p_25, ATerm t)
{
  ATerm i_40 = NULL;
  t = SSL_write_term_to_stream_baf(o_25, p_25);
  i_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_40);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_17 = ATgetArgument(t, 0);
      if(match_cons(f_17, sym_Stream_1))
        {
          e_19 = ATgetArgument(f_17, 0);
        }
      else
        _fail(t);
      f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(e_19, f_19, t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,x_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_17 = ATgetArgument(t, 0);
      if(match_cons(h_17, sym_Stream_1))
        {
          v_19 = ATgetArgument(h_17, 0);
        }
      else
        _fail(t);
      x_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(v_19, x_19, t);
  s_19 = t;
  t = term_j_17;
  t_19 = t;
  t = s_19;
  if(match_cons(t, sym_Stream_1))
    {
      u_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_17, s_19);
  t = q_5(t_19, u_19, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,g_42 = NULL,h_42 = NULL,q_10 = NULL,p_10 = NULL;
  n_40 = t;
  if(match_cons(t, sym__2))
    {
      u_40 = ATgetArgument(t, 0);
      v_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_40);
  t_40 = t;
  t = u_40;
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm a_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((m_40 != NULL) && (m_40 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                m_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(a_3, t);
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        t = term_o_17;
        m_40 = t;
      }
  }
  w_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_40, v_40);
  p_10 = t;
  t = SSLsetAnnotations(p_10, t_40);
  t = n_40;
  if(match_cons(t, sym__2))
    {
      p_40 = ATgetArgument(t, 0);
      q_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_40);
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_40, (ATerm) ATmakeAppl(sym__2, not_null(m_40), q_40));
  q_10 = t;
  t = SSLsetAnnotations(q_10, o_40);
  s_40 = t;
  if(match_cons(t, sym__2))
    {
      g_42 = ATgetArgument(t, 0);
      h_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,d_19 = NULL,r_10 = NULL;
        t = SSLgetAnnotations(s_40);
        n_18 = t;
        t = g_42;
        t = fetch_1_0(b_3, t);
        z_18 = t;
        t = h_42;
        if(match_cons(t, sym__2))
          {
            b_19 = ATgetArgument(t, 0);
            d_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_5(e_3, b_19, d_19, t);
        a_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_18, a_19);
        r_10 = t;
        t = SSLsetAnnotations(r_10, n_18);
        LocalPopChoice(r_17);
      }
    else
      {
        t = p_17;
        {
          ATerm k_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_10 = NULL;
          t = SSLgetAnnotations(s_40);
          k_19 = t;
          t = h_42;
          if(match_cons(t, sym__2))
            {
              q_19 = ATgetArgument(t, 0);
              r_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_5(f_3, q_19, r_19, t);
          p_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_42, p_19);
          s_10 = t;
          t = SSLsetAnnotations(s_10, k_19);
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
ATerm apply_strategy_1_0 (ATerm e_108 (ATerm), ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
  o_42 = t;
  t = dtime_0_0(t);
  t = o_42;
  t = e_108(t);
  n_42 = t;
  t = dtime_0_0(t);
  k_42 = t;
  t = n_42;
  if(match_cons(t, sym__2))
    {
      l_42 = ATgetArgument(t, 0);
      m_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_42), (ATerm) ATmakeAppl(sym_Runtime_1, k_42)), m_42);
  return(t);
}
static ATerm c_43 (ATerm w_42, ATerm t)
{
  t = SSL_fclose(w_42);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  a_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_42 = ATgetArgument(t, 0);
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_42);
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            t = c_43(a_43, t);
          }
      }
    }
  else
    {
      t = c_43(a_43, t);
    }
  return(t);
}
static ATerm u_5 (ATerm u_25, ATerm t)
{
  t = SSL_read_term_from_stream(u_25);
  return(t);
}
static ATerm v_5 (ATerm q_39, ATerm r_39, ATerm t)
{
  t = SSL_strcat(q_39, r_39);
  return(t);
}
static ATerm w_5 (ATerm z_40, ATerm a_41, ATerm t)
{
  ATerm d_43 = NULL;
  t = SSL_fopen(z_40, a_41);
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_43);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_43 = NULL;
  t = SSL_stdin_stream();
  e_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_43);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_43 = NULL;
  t = SSL_stdout_stream();
  f_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_43);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_43 = NULL;
  t = SSL_stderr_stream();
  g_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_43);
  return(t);
}
static ATerm p_44 (ATerm m_43, ATerm t)
{
  ATerm n_43 = NULL;
  t = SSL_explode_term(m_43);
  if(match_cons(t, sym__2))
    {
      ATerm u_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_17 = ATgetArgument(t, 1);
        if(((ATgetType(v_17) == AT_LIST) && !(ATisEmpty(v_17))))
          {
            n_43 = ATgetFirst((ATermList) v_17);
            {
              ATerm z_17 = (ATerm) ATgetNext((ATermList) v_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_43;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_43;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_43;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_43;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm q_44 (ATerm q_43, ATerm r_43, ATerm s_43, ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,a_44 = NULL,g_15 = NULL;
  t = SSLgetAnnotations(s_43);
  x_43 = t;
  t = q_43;
  if(match_cons(t, sym_Path_1))
    {
      a_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_44, r_43);
  g_15 = t;
  t = SSLsetAnnotations(g_15, x_43);
  if(match_cons(t, sym__2))
    {
      v_43 = ATgetArgument(t, 0);
      w_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(v_43, w_43, t);
  return(t);
}
static ATerm r_44 (ATerm c_44, ATerm d_44, ATerm e_44, ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,k_44 = NULL,h_15 = NULL;
  t = SSLgetAnnotations(e_44);
  h_44 = t;
  t = SSL_is_string(c_44);
  k_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_44, d_44);
  h_15 = t;
  t = SSLsetAnnotations(h_15, h_44);
  if(match_cons(t, sym__2))
    {
      f_44 = ATgetArgument(t, 0);
      g_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(f_44, g_44, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
  m_44 = t;
  if(match_cons(t, sym__2))
    {
      n_44 = ATgetArgument(t, 0);
      o_44 = ATgetArgument(t, 1);
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_44(m_44, t);
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            {
              ATerm e_18 = t;
              int g_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_44(n_44, o_44, m_44, t);
                  LocalPopChoice(g_18);
                }
              else
                {
                  t = e_18;
                  t = r_44(n_44, o_44, m_44, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_44(m_44, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,b_45 = NULL;
  b_45 = t;
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_45, term_j_18);
        t = x_5(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        {
          ATerm n_20 = NULL,o_20 = NULL;
          t = term_k_18;
          o_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_18, b_45);
          t = v_5(o_20, b_45, t);
          n_20 = t;
          t = SSL_perror(n_20);
          _fail(t);
        }
      }
  }
  u_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_5(v_44, t);
  t_44 = t;
  t = u_44;
  t = fclose_0_0(t);
  t = t_44;
  return(t);
}
ATerm fetch_1_0 (ATerm o_91 (ATerm), ATerm t)
{
  static ATerm a_46 (ATerm t)
  {
    ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
    x_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_45 = ATgetFirst((ATermList) t);
        z_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_18 = t;
      int m_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_20 = NULL,z_20 = NULL,k_15 = NULL;
          t = SSLgetAnnotations(x_45);
          u_20 = t;
          t = y_45;
          t = o_91(t);
          z_20 = t;
          t = (ATerm) ATinsert(CheckATermList(z_45), z_20);
          k_15 = t;
          t = SSLsetAnnotations(k_15, u_20);
          LocalPopChoice(m_18);
        }
      else
        {
          t = l_18;
          {
            ATerm i_21 = NULL,m_21 = NULL,l_15 = NULL;
            t = SSLgetAnnotations(x_45);
            i_21 = t;
            t = z_45;
            t = a_46(t);
            m_21 = t;
            t = (ATerm) ATinsert(CheckATermList(m_21), y_45);
            l_15 = t;
            t = SSLsetAnnotations(l_15, i_21);
          }
        }
    }
    return(t);
  }
  t = a_46(t);
  return(t);
}
static ATerm b_6 (ATerm c_57, ATerm d_57, ATerm t)
{
  t = SSL_table_get(c_57, d_57);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_106 (ATerm), ATerm t)
{
  ATerm e_46 = NULL;
  e_46 = t;
  {
    ATerm o_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
        t = term_y_18;
        h_46 = t;
        t = term_c_19;
        i_46 = t;
        t = term_g_19;
        t = b_6(h_46, i_46, t);
        g_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_46, term_h_19);
        t = geq_0_0(t);
        t = e_46;
        t = n_106(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = o_18;
        t = e_46;
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm l_46 = NULL;
  l_46 = t;
  if(match_string(t, "-k"))
    {
      t = l_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_46;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL;
  m_46 = t;
  t = SSL_string_to_int(m_46);
  n_46 = t;
  t = term_i_19;
  o_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_19, n_46);
  t = d_6(o_46, n_46, t);
  t = m_46;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_j_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_3, i_3, j_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm q_46 = NULL;
  q_46 = t;
  if(match_string(t, "-S"))
    {
      t = q_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_46;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL;
  t = term_c_19;
  r_46 = t;
  t = term_l_19;
  s_46 = t;
  t = term_m_19;
  t = d_6(r_46, s_46, t);
  t = term_n_19;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
  t_46 = t;
  t = SSL_string_to_int(t_46);
  u_46 = t;
  t = term_c_19;
  v_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_19, u_46);
  t = d_6(v_46, u_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_46);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_y_19;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL;
  t = term_z_19;
  w_46 = t;
  t = term_h_3;
  x_46 = t;
  t = term_a_20;
  t = d_6(w_46, x_46, t);
  t = term_b_20;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_3, n_3, r_3, t);
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_3, b_4, c_4, t);
            LocalPopChoice(g_20);
          }
        else
          {
            t = f_20;
            t = Option_3_0(n_4, p_4, q_4, t);
          }
      }
    }
  return(t);
}
static ATerm d_6 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm y_46 = NULL;
  t = term_y_18;
  y_46 = t;
  t = SSL_table_put(y_46, q_50, r_50);
  t = (ATerm) ATmakeAppl(sym__3, term_y_18, q_50, r_50);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm a_47 = NULL;
  a_47 = t;
  if(match_string(t, "-o"))
    {
      t = a_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_47;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL;
  b_47 = t;
  t = term_h_20;
  c_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_20, b_47);
  t = d_6(c_47, b_47, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_47);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
static ATerm y_5 (ATerm l_55, ATerm m_55, ATerm k_55, ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
  e_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_55, m_55);
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_20 = ATgetArgument(t, 0);
            ATerm q_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_55, m_55);
        t = b_6(l_55, m_55, t);
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
        t = (ATerm) ATempty;
      }
  }
  f_47 = t;
  t = (ATerm) ATinsert(CheckATermList(f_47), k_55);
  g_47 = t;
  t = SSL_table_put(l_55, m_55, g_47);
  t = e_47;
  return(t);
}
ATerm ArgOption_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
      t = term_h_3;
      t = i_0(t);
      r_47 = t;
      t = term_b_7;
      s_47 = t;
      t = term_o_7;
      t_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_7, term_o_7, r_47);
      t = y_5(s_47, t_47, r_47, t);
      _fail(t);
    }
  else
    {
      ATerm x_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_47 = ATgetFirst((ATermList) t);
          o_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_47 = ATgetFirst((ATermList) t);
          q_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_47;
      t = e_0(t);
      t = p_47;
      t = g_0(t);
      x_47 = t;
      t = (ATerm) ATinsert(CheckATermList(q_47), x_47);
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  if(match_string(t, "-i"))
    {
      t = z_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_47;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL;
  a_48 = t;
  t = term_r_20;
  b_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_20, a_48);
  t = d_6(b_48, a_48, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_48);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_t_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, v_4, w_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_3;
  t = whoami_0_0(t);
  c_48 = t;
  t = term_v_7;
  e_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_20), c_48);
  f_48 = t;
  t = SSL_printnl(e_48, f_48);
  t = term_q_8;
  d_48 = t;
  t = SSL_exit(d_48);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL;
  t = term_y_18;
  g_48 = t;
  t = term_x_20;
  h_48 = t;
  t = term_a_21;
  t = b_6(g_48, h_48, t);
  return(t);
}
static ATerm z_5 (ATerm t_43, ATerm u_43, ATerm t)
{
  ATerm b_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_43, u_43);
      LocalPopChoice(d_21);
    }
  else
    {
      t = b_21;
      t = SSL_addr(t_43, u_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
  j_48 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_48;
      t = v_97(t);
    }
  else
    {
      ATerm o_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_48 = ATgetFirst((ATermList) t);
          l_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_48;
      t = foldr_2_0(v_97, w_97, t);
      o_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_48, o_48);
      t = w_97(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_l_19;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  if(match_cons(t, sym__2))
    {
      v_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(v_21, w_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_48 = NULL,r_21 = NULL,s_21 = NULL;
  t = times_0_0(t);
  s_21 = t;
  t = SSL_explode_term(s_21);
  if(match_cons(t, sym__2))
    {
      ATerm e_21 = ATgetArgument(t, 0);
      r_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_21;
  t = foldr_2_0(y_4, a_5, t);
  r_48 = t;
  t = SSL_TicksToSeconds(r_48);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
  c_49 = t;
  if(match_cons(t, sym__2))
    {
      d_49 = ATgetArgument(t, 0);
      e_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_49;
        if((d_49 != t))
          {
            _fail(t);
          }
        t = c_49;
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = (ATerm) ATmakeAppl(sym__2, d_49, e_49);
        {
          ATerm h_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_49, e_49);
              LocalPopChoice(k_21);
            }
          else
            {
              t = h_21;
              t = SSL_gtr(d_49, e_49);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_49, e_49);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_106 (ATerm), ATerm t)
{
  ATerm i_49 = NULL;
  i_49 = t;
  {
    ATerm l_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL;
        t = term_y_18;
        l_49 = t;
        t = term_c_19;
        m_49 = t;
        t = term_g_19;
        t = b_6(l_49, m_49, t);
        k_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_49, term_q_8);
        t = geq_0_0(t);
        t = i_49;
        t = m_106(t);
        LocalPopChoice(n_21);
      }
    else
      {
        t = l_21;
        t = i_49;
      }
  }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,r_49 = NULL,s_49 = NULL;
  t = run_time_0_0(t);
  o_49 = t;
  t = term_h_3;
  t = whoami_0_0(t);
  p_49 = t;
  t = term_v_7;
  r_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_21), o_49), term_o_21), p_49);
  s_49 = t;
  t = SSL_printnl(r_49, s_49);
  t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_21), o_49), term_o_21), p_49));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_19;
  t_49 = t;
  t = SSL_exit(t_49);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL;
  e_50 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_50;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_50 = ATgetArgument(t, 0);
          {
            ATerm i_22 = NULL,n_16 = NULL;
            t = SSLgetAnnotations(e_50);
            i_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_50);
            n_16 = t;
            t = SSLsetAnnotations(n_16, i_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_50;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_109 (ATerm), ATerm t)
{
  ATerm q_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_49 = NULL,x_49 = NULL;
      t = term_y_18;
      w_49 = t;
      t = term_u_21;
      x_49 = t;
      t = term_x_21;
      t = b_6(w_49, x_49, t);
      LocalPopChoice(t_21);
    }
  else
    {
      t = q_21;
      t = fetch_1_0(d_5, t);
    }
  t = c_109(t);
  return(t);
}
ATerm map_1_0 (ATerm e_91 (ATerm), ATerm t)
{
  static ATerm w_50 (ATerm t)
  {
    ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
    t_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_50;
      }
    else
      {
        ATerm t_22 = NULL,x_22 = NULL,y_22 = NULL,q_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_50 = ATgetFirst((ATermList) t);
            v_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_50);
        t_22 = t;
        t = u_50;
        t = e_91(t);
        x_22 = t;
        t = v_50;
        t = w_50(t);
        y_22 = t;
        t = (ATerm) ATinsert(CheckATermList(y_22), x_22);
        q_16 = t;
        t = SSLsetAnnotations(q_16, t_22);
      }
    return(t);
  }
  t = w_50(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_50 = ATgetFirst((ATermList) t);
      a_51 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_51 = NULL,f_51 = NULL;
        static ATerm e_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_51)), not_null(f_51));
          return(t);
        }
        t = a_51;
        t = d_0(t);
        if(((e_51 != NULL) && (e_51 != t)))
          _fail(t);
        else
          e_51 = t;
        t = z_50;
        t = c_0(t);
        if(((f_51 != NULL) && (f_51 != t)))
          _fail(t);
        else
          f_51 = t;
        t = a_51;
        t = reverse_acc_2_0(c_0, e_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_3;
      t = d_0(t);
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,v_16 = NULL;
  n_51 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_51);
  l_51 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_51);
  v_16 = t;
  t = SSLsetAnnotations(v_16, l_51);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm p_51 = NULL;
  p_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_51), term_y_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL;
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_51 = NULL,k_51 = NULL;
      t = term_y_18;
      j_51 = t;
      t = term_x_20;
      k_51 = t;
      t = term_a_21;
      t = b_6(j_51, k_51, t);
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      t = fetch_1_0(f_5, t);
    }
  t = term_b_22;
  t = echo_0_0(t);
  t = term_b_7;
  h_51 = t;
  t = term_o_7;
  i_51 = t;
  t = term_c_22;
  t = b_6(h_51, i_51, t);
  t = reverse_acc_2_0(_id, g_5, t);
  t = map_1_0(h_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL;
  r_51 = t;
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_51;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_22 = ATgetFirst((ATermList) t);
                ATerm g_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_51;
          }
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = (ATerm) ATinsert(ATempty, r_51);
      }
  }
  s_51 = t;
  t = term_o_17;
  t_51 = t;
  t = SSL_printnl(t_51, s_51);
  t = r_51;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL;
  t = term_y_18;
  x_51 = t;
  t = term_x_20;
  y_51 = t;
  t = term_a_21;
  t = b_6(x_51, y_51, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL;
  t = term_h_22;
  z_51 = t;
  t = term_h_3;
  a_52 = t;
  t = term_k_22;
  t = d_6(z_51, a_52, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_l_22;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,i_52 = NULL;
  t = term_h_22;
  d_52 = t;
  t = term_h_3;
  i_52 = t;
  t = term_k_22;
  t = d_6(d_52, i_52, t);
  t = term_m_22;
  b_52 = t;
  t = term_h_3;
  c_52 = t;
  t = term_n_22;
  t = d_6(b_52, c_52, t);
  t = term_o_22;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_p_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_5, j_5, n_5, t);
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      t = Option_3_0(o_5, c_6, e_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,x_16 = NULL;
  o_52 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_52 = ATgetFirst((ATermList) t);
      l_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_52);
  j_52 = t;
  t = k_52;
  t = y_68(t);
  m_52 = t;
  t = l_52;
  t = z_68(t);
  n_52 = t;
  t = (ATerm) ATinsert(CheckATermList(n_52), m_52);
  x_16 = t;
  t = SSLsetAnnotations(x_16, j_52);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_111 (ATerm), ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,y_52 = NULL,z_52 = NULL,z_16 = NULL;
  t_52 = t;
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_22;
        t = f_111(t);
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
      }
  }
  t = t_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_52 = ATgetFirst((ATermList) t);
      w_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_52);
  u_52 = t;
  t = term_x_20;
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_20, v_52);
  t = d_6(z_52, v_52, t);
  t = w_52;
  {
    static ATerm j_53 (ATerm t)
    {
      ATerm z_22 = t;
      int a_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_23 = t;
          int c_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_53 = NULL;
              c_53 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_53;
              LocalPopChoice(c_23);
            }
          else
            {
              t = b_23;
              t = f_111(t);
              t = Cons_2_0(_id, j_53, t);
            }
          LocalPopChoice(a_23);
        }
      else
        {
          t = z_22;
          {
            ATerm f_53 = NULL,g_53 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_53 = ATgetFirst((ATermList) t);
                g_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_53), (ATerm) ATmakeAppl(sym_Undefined_1, f_53));
          }
        }
      return(t);
    }
    t = j_53(t);
  }
  y_52 = t;
  t = (ATerm) ATinsert(CheckATermList(y_52), (ATerm) ATmakeAppl(sym_Program_1, v_52));
  z_16 = t;
  t = SSLsetAnnotations(z_16, u_52);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm v_53 = NULL;
  v_53 = t;
  if(match_string(t, "--help"))
    {
      t = v_53;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_53;
        }
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL;
  t = term_u_21;
  w_53 = t;
  t = term_h_3;
  x_53 = t;
  t = term_d_23;
  t = d_6(w_53, x_53, t);
  t = term_e_23;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_h_23;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_111 (ATerm), ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL;
  q_53 = t;
  t = term_b_7;
  s_53 = t;
  t = term_o_7;
  t_53 = t;
  t = (ATerm) ATempty;
  u_53 = t;
  t = SSL_table_put(s_53, t_53, u_53);
  t = q_53;
  {
    static ATerm h_6 (ATerm t)
    {
      ATerm j_23 = t;
      int k_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_111(t);
          LocalPopChoice(k_23);
        }
      else
        {
          t = j_23;
          {
            ATerm l_23 = t;
            int m_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_6, k_6, l_6, t);
                LocalPopChoice(m_23);
              }
            else
              {
                t = l_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_6, t);
  }
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_54 = NULL;
        i_54 = t;
        {
          ATerm p_23 = t;
          int q_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_23 = NULL;
              t = i_54;
              {
                ATerm r_23 = t;
                int s_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_23 = NULL,i_23 = NULL;
                    t = term_y_18;
                    g_23 = t;
                    t = term_u_21;
                    i_23 = t;
                    t = term_x_21;
                    t = b_6(g_23, i_23, t);
                    LocalPopChoice(s_23);
                  }
                else
                  {
                    t = r_23;
                    t = fetch_1_0(m_6, t);
                  }
              }
              t = i_54;
              t = default_system_usage_0_0(t);
              t = term_l_19;
              f_23 = t;
              t = SSL_exit(f_23);
              LocalPopChoice(q_23);
            }
          else
            {
              t = p_23;
              {
                ATerm u_23 = NULL,z_23 = NULL,c_24 = NULL;
                t = term_y_18;
                z_23 = t;
                t = term_h_22;
                c_24 = t;
                t = term_t_23;
                t = b_6(z_23, c_24, t);
                t = i_54;
                t = default_system_about_0_0(t);
                t = term_l_19;
                u_23 = t;
                t = SSL_exit(u_23);
              }
            }
        }
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        {
          ATerm v_23 = t;
          int w_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL;
              static ATerm n_6 (ATerm t)
              {
                ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,e_17 = NULL;
                o_54 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_54 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_54);
                m_54 = t;
                t = n_54;
                if(((o_53 != NULL) && (o_53 != t)))
                  _fail(t);
                else
                  o_53 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_54);
                e_17 = t;
                t = SSLsetAnnotations(e_17, m_54);
                return(t);
              }
              t = fetch_1_0(n_6, t);
              t = term_v_7;
              k_54 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_53)), term_x_23);
              l_54 = t;
              t = SSL_printnl(k_54, l_54);
              t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_53)), term_x_23));
              t = default_system_usage_0_0(t);
              t = term_q_8;
              j_54 = t;
              t = SSL_exit(j_54);
              LocalPopChoice(w_23);
            }
          else
            {
              t = v_23;
            }
        }
      }
  }
  p_53 = t;
  t = term_b_7;
  r_53 = t;
  t = SSL_table_destroy(r_53);
  t = p_53;
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL;
  t = parse_options_1_0(e_109, t);
  y_54 = t;
  t = term_q_15;
  b_55 = t;
  t = SSL_table_create(b_55);
  t = term_q_15;
  z_54 = t;
  t = term_r_15;
  a_55 = t;
  t = SSL_table_put(z_54, a_55, y_54);
  t = y_54;
  t = g_109(t);
  {
    ATerm y_23 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_109, t);
        LocalPopChoice(d_24);
      }
    else
      {
        t = y_23;
        {
          ATerm e_24 = t;
          int f_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_109(t);
              t = report_success_0_0(t);
              LocalPopChoice(f_24);
            }
          else
            {
              t = e_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = if_verbose2_1_0(w_6, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL;
  t = term_h_24;
  c_55 = t;
  t = term_h_3;
  d_55 = t;
  t = term_i_24;
  t = d_6(c_55, d_55, t);
  t = term_j_24;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_k_24;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,j_55 = NULL,n_55 = NULL;
  e_55 = t;
  t = term_y_18;
  j_55 = t;
  t = term_x_20;
  n_55 = t;
  t = term_a_21;
  t = b_6(j_55, n_55, t);
  f_55 = t;
  t = term_v_7;
  g_55 = t;
  t = (ATerm) ATinsert(ATempty, f_55);
  h_55 = t;
  t = SSL_printnl(g_55, h_55);
  t = e_55;
  return(t);
}
ATerm iowrap_3_0 (ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm t)
{
  static ATerm o_6 (ATerm t)
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_108(t);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        {
          ATerm o_24 = t;
          int p_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(p_24);
            }
          else
            {
              t = o_24;
              {
                ATerm q_24 = t;
                int r_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(r_24);
                  }
                else
                  {
                    t = q_24;
                    {
                      ATerm s_24 = t;
                      int t_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_6, u_6, v_6, t);
                          LocalPopChoice(t_24);
                        }
                      else
                        {
                          t = s_24;
                          {
                            ATerm u_24 = t;
                            int v_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(v_24);
                              }
                            else
                              {
                                t = u_24;
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
  static ATerm r_6 (ATerm t)
  {
    ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL;
    p_55 = t;
    {
      ATerm w_24 = t;
      int x_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm x_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_55 != NULL) && (o_55 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_55 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(x_6, t);
          LocalPopChoice(x_24);
        }
      else
        {
          t = w_24;
          t = term_y_24;
          o_55 = t;
        }
    }
    t = not_null(o_55);
    t = ReadFromFile_0_0(t);
    q_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_55, q_55);
    t = apply_strategy_1_0(n_108, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(o_6, p_108, q_6, r_6, t);
  return(t);
}
static ATerm a_7 (ATerm t)
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
static ATerm e_7 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm io_idwrap_3_0 (ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t)
{
  static ATerm y_6 (ATerm t)
  {
    ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
    x_55 = t;
    if(match_cons(t, sym__2))
      {
        v_55 = ATgetArgument(t, 0);
        w_55 = ATgetArgument(t, 1);
        {
          ATerm a_25 = t;
          int b_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_56 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, term_c_25, w_55);
              t = p_115(t);
              a_56 = t;
              t = (ATerm) ATmakeAppl(sym__2, v_55, a_56);
              LocalPopChoice(b_25);
            }
          else
            {
              t = a_25;
              t = x_55;
            }
        }
      }
    else
      {
        t = x_55;
      }
    t = q_115(t);
    f_56 = t;
    if(match_cons(t, sym__2))
      {
        d_56 = ATgetArgument(t, 0);
        e_56 = ATgetArgument(t, 1);
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_56 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, term_i_25, e_56);
              t = p_115(t);
              i_56 = t;
              t = (ATerm) ATmakeAppl(sym__2, d_56, i_56);
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              t = f_56;
            }
        }
      }
    else
      {
        t = f_56;
      }
    return(t);
  }
  static ATerm z_6 (ATerm t)
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_115(t);
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = Option_3_0(a_7, c_7, e_7, t);
      }
    return(t);
  }
  t = iowrap_3_0(y_6, z_6, default_usage_0_0, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = InOutId_2_0(j_7, k_7, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,i_17 = NULL;
  p_56 = t;
  if(match_cons(t, sym__2))
    {
      m_56 = ATgetArgument(t, 0);
      n_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_56);
  l_56 = t;
  t = n_56;
  t = ppgenerate_0_0(t);
  o_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_56, o_56);
  i_17 = t;
  t = SSLsetAnnotations(i_17, l_56);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = Option_3_0(l_7, m_7, n_7, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"sdf-2.1\"", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_m_25;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-v", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_n_25;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_r_25;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_idwrap_3_0(f_7, g_7, h_7, t);
  return(t);
}
