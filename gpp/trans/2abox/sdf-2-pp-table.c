#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_VS_0;
Symbol sym_SOpt_2;
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
Symbol sym_prod_3;
Symbol sym_prod_fun_4;
Symbol sym_context_free_syntax_1;
Symbol sym_bracket_symbol_1;
Symbol sym_Strict_0;
static void init_module_constructors (void)
{
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
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
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
}
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_d_25;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_o_24;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_h_23;
ATerm term_u_22;
ATerm term_s_22;
ATerm term_q_22;
ATerm term_f_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_m_18;
ATerm term_d_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_y_16;
ATerm term_o_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_c_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_v_11;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_s_9;
ATerm term_m_9;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_m_7;
ATerm term_q_6;
ATerm term_d_3;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_3));
  term_d_3 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_Arg_1, term_q_8);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_SOpt_2, term_a_10, term_b_10);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_lit_1, term_q_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_lit_1, term_v_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__2, term_a_15, term_c_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_f_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_t_19, term_d_3);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_m_7);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__2, term_s_21, term_d_3);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym__2, term_v_21, term_d_3);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_d_3);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_d_3);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm Option_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm k_1 (ATerm b_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm m_77 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm p_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm j_91 (ATerm), ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm symbol2abox_1_0 (ATerm n_75 (ATerm), ATerm t);
ATerm _2_0 (ATerm j_61 (ATerm), ATerm k_61 (ATerm), ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
static ATerm p_25 (ATerm y_23, ATerm z_23, ATerm a_24, ATerm t);
ATerm number_node_1_0 (ATerm q_75 (ATerm), ATerm t);
static ATerm m_1 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm m_75 (ATerm), ATerm t);
static ATerm t_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm a_85 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm unquote_chars_2_0 (ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
ATerm collect_p__1_0 (ATerm r_107 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm ppgenerate_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm q_78 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm q_5 (ATerm r_37, ATerm s_37, ATerm t);
static ATerm r_5 (ATerm d_108 (ATerm), ATerm n_57, ATerm t);
ATerm InOutId_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm v_5 (ATerm f_37, ATerm g_37, ATerm t);
static ATerm w_5 (ATerm h_22, ATerm i_22, ATerm t);
static ATerm y_5 (ATerm p_83 (ATerm), ATerm k_168, ATerm n_22, ATerm t);
static ATerm x_5 (ATerm d_22, ATerm e_22, ATerm t);
static ATerm x_2 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm o_100 (ATerm), ATerm t);
static ATerm j_41 (ATerm c_41, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_5 (ATerm j_22, ATerm t);
static ATerm b_6 (ATerm h_37, ATerm i_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_42 (ATerm t_41, ATerm t);
static ATerm v_42 (ATerm x_41, ATerm y_41, ATerm z_41, ATerm t);
static ATerm w_42 (ATerm h_42, ATerm i_42, ATerm j_42, ATerm t);
static ATerm c_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_84 (ATerm), ATerm t);
static ATerm a_6 (ATerm y_35, ATerm z_35, ATerm t);
ATerm debug_1_0 (ATerm n_83 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm x_98 (ATerm), ATerm t);
static ATerm l_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_6 (ATerm y_46, ATerm z_46, ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_6 (ATerm y_51, ATerm z_51, ATerm x_51, ATerm t);
ATerm ArgOption_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_6 (ATerm b_40, ATerm c_40, ATerm t);
ATerm foldr_2_0 (ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_98 (ATerm), ATerm t);
static ATerm b_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm need_help_1_0 (ATerm m_101 (ATerm), ATerm t);
ATerm map_1_0 (ATerm y_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t);
static ATerm g_6 (ATerm p_53, ATerm q_53, ATerm t);
static ATerm e_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_61 (ATerm), ATerm h_61 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_103 (ATerm), ATerm t);
static ATerm t_5 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm parse_options_1_0 (ATerm o_103 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm iowrap_3_0 (ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm io_idwrap_3_0 (ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm Option_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm j_0 = NULL,q_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_0 = NULL,t_0 = NULL,u_0 = NULL;
      t = term_d_3;
      t = p_0(t);
      r_0 = t;
      t = term_q_6;
      t_0 = t;
      t = term_m_7;
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_6, term_m_7, r_0);
      t = d_6(t_0, u_0, r_0, t);
      _fail(t);
    }
  else
    {
      ATerm x_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_0 = ATgetFirst((ATermList) t);
          q_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_0;
      t = n_0(t);
      t = term_d_3;
      t = o_0(t);
      x_0 = t;
      t = (ATerm) ATinsert(CheckATermList(q_0), x_0);
    }
  return(t);
}
static ATerm k_1 (ATerm b_1, ATerm t)
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
        ATerm s_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_0 (ATerm t)
            {
              t = g_1;
              return(t);
            }
            t = e_1;
            t = at_end_1_0(a_0, t);
            LocalPopChoice(u_7);
          }
        else
          {
            t = s_7;
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
ATerm topdown_1_0 (ATerm m_77 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = topdown_1_0(m_77, t);
    return(t);
  }
  t = m_77(t);
  t = SRTS_all(b_0, t);
  return(t);
}
ATerm at_end_1_0 (ATerm p_84 (ATerm), ATerm t)
{
  static ATerm g_2 (ATerm t)
  {
    ATerm z_1 = NULL,c_2 = NULL,f_2 = NULL;
    f_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_1 = ATgetFirst((ATermList) t);
        c_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_0 = NULL,z_0 = NULL,n_1 = NULL;
          t = SSLgetAnnotations(f_2);
          m_0 = t;
          t = c_2;
          t = g_2(t);
          z_0 = t;
          t = (ATerm) ATinsert(CheckATermList(z_0), z_1);
          n_1 = t;
          t = SSLsetAnnotations(n_1, m_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_2;
        t = p_84(t);
      }
    return(t);
  }
  t = g_2(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL,p_2 = NULL;
  k_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_2;
    }
  else
    {
      static ATerm f_0 (ATerm t)
      {
        t = not_null(p_2);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_2 = ATgetFirst((ATermList) t);
          if(((p_2 != NULL) && (p_2 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_2;
      t = at_end_1_0(f_0, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm j_91 (ATerm), ATerm t)
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
        ATerm v_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 = NULL,d_2 = NULL,e_2 = NULL,q_1 = NULL;
            t = SSLgetAnnotations(y_3);
            w_1 = t;
            t = z_3;
            t = j_91(t);
            d_2 = t;
            t = a_4;
            t = filter_1_0(j_91, t);
            e_2 = t;
            t = (ATerm) ATinsert(CheckATermList(e_2), d_2);
            q_1 = t;
            t = SSLsetAnnotations(q_1, w_1);
            LocalPopChoice(x_7);
          }
        else
          {
            t = v_7;
            t = a_4;
            t = filter_1_0(j_91, t);
          }
      }
    }
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm w_4 = NULL,y_4 = NULL,f_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      f_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5;
  if(match_cons(t, sym_alt_2))
    {
      w_4 = ATgetArgument(t, 0);
      y_4 = ATgetArgument(t, 1);
      {
        ATerm y_7 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_5 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, w_4, y_4);
            t = flat_alt_0_0(t);
            u_5 = t;
            t = (ATerm) ATinsert(CheckATermList(u_5), f_5);
            LocalPopChoice(b_8);
          }
        else
          {
            t = y_7;
            t = (ATerm) ATinsert(ATinsert(ATempty, g_5), f_5);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, g_5), f_5);
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm p_4 = NULL;
  p_4 = t;
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_4;
        {
          ATerm g_8 = t;
          if((PushChoice() == 0))
            {
              ATerm r_2 = NULL;
              r_2 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = r_2;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm h_8 = ATgetFirst((ATermList) t);
                      ATerm i_8 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = r_2;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_8;
            }
        }
        t = (ATerm) ATinsert(ATempty, p_4);
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
        t = p_4;
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
static ATerm v_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL;
  a_5 = t;
  if(match_cons(t, sym_Arg_1))
    {
      z_4 = ATgetArgument(t, 0);
      {
        ATerm k_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_6 = NULL,u_1 = NULL;
            t = SSLgetAnnotations(a_5);
            m_6 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, z_4);
            u_1 = t;
            t = SSLsetAnnotations(u_1, m_6);
            t = term_r_8;
            LocalPopChoice(o_8);
          }
        else
          {
            t = k_8;
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
ATerm symbol2abox_1_0 (ATerm n_75 (ATerm), ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,r_7 = NULL,t_7 = NULL;
  static ATerm w_11 (ATerm t)
  {
    static ATerm a_12 (ATerm g_10, ATerm h_10, ATerm i_10, ATerm j_10, ATerm t)
    {
      ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL,u_10 = NULL,v_10 = NULL,x_10 = NULL;
      t = SSL_explode_term(j_10);
      if(match_cons(t, sym__2))
        {
          u_10 = ATgetArgument(t, 0);
          v_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, h_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, i_10, u_10)));
      t = conc_0_0(t);
      m_10 = t;
      t = v_10;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      x_10 = t;
      t = make_0_0(t);
      n_10 = t;
      t = x_10;
      {
        static ATerm s_0 (ATerm t)
        {
          ATerm a_11 = NULL;
          a_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_10, m_10), a_11);
          t = w_11(t);
          return(t);
        }
        t = map_1_0(s_0, t);
      }
      t = concat_0_0(t);
      o_10 = t;
      t = (ATerm) ATinsert(CheckATermList(o_10), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, g_10, m_10), n_10));
      return(t);
    }
    ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,i_11 = NULL,k_11 = NULL,l_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL;
    if(match_cons(t, sym__2))
      {
        i_11 = ATgetArgument(t, 0);
        n_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = n_11;
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
              o_11 = ATgetArgument(t, 0);
              p_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_11;
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
                t = i_11;
                {
                  ATerm y_8 = t;
                  int z_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym__2))
                        {
                          ATerm a_9 = ATgetArgument(t, 0);
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
                      t = i_11;
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
                          f_11 = ATgetArgument(t, 0);
                          c_11 = ATgetArgument(t, 1);
                          t = i_11;
                          if(match_cons(t, sym__2))
                            {
                              k_11 = ATgetArgument(t, 0);
                              l_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = c_11;
                          if(match_cons(t, sym_alt_2))
                            {
                              d_11 = ATgetArgument(t, 0);
                              e_11 = ATgetArgument(t, 1);
                              {
                                ATerm k_9 = t;
                                int l_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm x_3 = NULL,b_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,j_4 = NULL,l_4 = NULL,n_4 = NULL,v_1 = NULL;
                                    t = k_11;
                                    if(((n_7 != NULL) && (n_7 != t)))
                                      _fail(t);
                                    else
                                      n_7 = t;
                                    t = l_11;
                                    if(((o_7 != NULL) && (o_7 != t)))
                                      _fail(t);
                                    else
                                      o_7 = t;
                                    t = o_11;
                                    if(((p_7 != NULL) && (p_7 != t)))
                                      _fail(t);
                                    else
                                      p_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_alt_2, f_11, (ATerm) ATmakeAppl(sym_alt_2, d_11, e_11));
                                    t = flat_alt_0_0(t);
                                    x_3 = t;
                                    t = term_m_9;
                                    e_4 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, term_m_9, x_3);
                                    t = q_5(e_4, x_3, t);
                                    b_4 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_11, l_11), (ATerm) ATmakeAppl(sym__2, o_11, b_4));
                                    t = w_11(t);
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
                                    t = topdown_1_0(v_0, t);
                                    l_4 = t;
                                    t = (ATerm) ATinsert(CheckATermList(j_4), l_4);
                                    v_1 = t;
                                    t = SSLsetAnnotations(v_1, f_4);
                                    LocalPopChoice(l_9);
                                  }
                                else
                                  {
                                    t = k_9;
                                    t = a_12(k_11, l_11, o_11, p_11, t);
                                  }
                              }
                            }
                          else
                            {
                              t = a_12(k_11, l_11, o_11, p_11, t);
                            }
                        }
                      else
                        {
                          if(match_cons(t, sym_bracket_symbol_1))
                            {
                              f_11 = ATgetArgument(t, 0);
                              t = i_11;
                              if(match_cons(t, sym__2))
                                {
                                  k_11 = ATgetArgument(t, 0);
                                  l_11 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              {
                                ATerm p_9 = t;
                                int q_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_11, l_11), (ATerm) ATmakeAppl(sym__2, o_11, f_11));
                                    t = w_11(t);
                                    LocalPopChoice(q_9);
                                  }
                                else
                                  {
                                    t = p_9;
                                    t = a_12(k_11, l_11, o_11, p_11, t);
                                  }
                              }
                            }
                          else
                            {
                              t = i_11;
                              if(match_cons(t, sym__2))
                                {
                                  k_11 = ATgetArgument(t, 0);
                                  l_11 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = a_12(k_11, l_11, o_11, p_11, t);
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
  t_7 = t;
  t = term_d_3;
  t = n_75(t);
  r_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_7, t_7);
  t = w_11(t);
  return(t);
}
ATerm _2_0 (ATerm j_61 (ATerm), ATerm k_61 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,g_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,i_2 = NULL;
  l_12 = t;
  if(match_cons(t, sym__2))
    {
      g_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_12);
  e_12 = t;
  t = g_12;
  t = j_61(t);
  j_12 = t;
  t = i_12;
  t = k_61(t);
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_12, k_12);
  i_2 = t;
  t = SSLsetAnnotations(i_2, e_12);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,r_12 = NULL,t_12 = NULL,u_12 = NULL;
  o_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_12;
    }
  else
    {
      ATerm z_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_12 = ATgetFirst((ATermList) t);
          r_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_12 = ATgetFirst((ATermList) t);
          u_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_12;
      t = pair_0_0(t);
      z_12 = t;
      t = (ATerm) ATinsert(CheckATermList(z_12), (ATerm) ATmakeAppl(sym__2, p_12, t_12));
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,c_16 = NULL,g_16 = NULL,e_3 = NULL;
  c_16 = t;
  if(match_cons(t, sym_lit_1))
    {
      z_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_16);
  y_15 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, z_15);
  e_3 = t;
  t = SSLsetAnnotations(e_3, y_15);
  if(match_cons(t, sym_lit_1))
    {
      g_16 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_9, (ATerm) ATmakeAppl(sym_S_1, g_16));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          g_16 = ATgetArgument(t, 0);
          {
            ATerm t_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, g_16);
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm l_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,t_17 = NULL,a_18 = NULL,y_18 = NULL,z_18 = NULL,r_3 = NULL,g_21 = NULL,j_19 = NULL,n_3 = NULL;
  z_18 = t;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_18);
  p_17 = t;
  t = q_17;
  if(match_cons(t, sym_lit_1))
    {
      y_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_17);
  a_18 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, y_18);
  n_3 = t;
  t = SSLsetAnnotations(n_3, a_18);
  if(match_cons(t, sym_lit_1))
    {
      j_19 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_9, (ATerm) ATmakeAppl(sym_S_1, j_19));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          j_19 = ATgetArgument(t, 0);
          {
            ATerm x_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, j_19);
    }
  l_17 = t;
  t = t_17;
  t = _2_0(_id, j_1, t);
  if(match_cons(t, sym_lit_1))
    {
      g_21 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_9, (ATerm) ATmakeAppl(sym_S_1, g_21));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          g_21 = ATgetArgument(t, 0);
          {
            ATerm z_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, g_21);
    }
  o_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_17, o_17);
  r_3 = t;
  t = SSLsetAnnotations(r_3, p_17);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_f_10), (ATerm) ATinsert(ATinsert(ATempty, o_17), l_17));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm r_20 = NULL,w_20 = NULL;
  r_20 = t;
  if(match_cons(t, sym_iter_1))
    {
      w_20 = ATgetArgument(t, 0);
      {
        ATerm a_8 = NULL,p_3 = NULL;
        t = SSLgetAnnotations(r_20);
        a_8 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, w_20);
        p_3 = t;
        t = SSLsetAnnotations(p_3, a_8);
      }
    }
  else
    {
      ATerm p_8 = NULL,q_3 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          w_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_20);
      p_8 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, w_20);
      q_3 = t;
      t = SSLsetAnnotations(q_3, p_8);
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm p_21 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      p_21 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_9, (ATerm) ATmakeAppl(sym_S_1, p_21));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          p_21 = ATgetArgument(t, 0);
          {
            ATerm k_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, p_21);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  ATerm l_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,j_3 = NULL,s_15 = NULL,c_3 = NULL,p_15 = NULL,q_15 = NULL;
      t = reverse_acc_2_0(_id, w_0, t);
      r_14 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_14 = ATgetFirst((ATermList) t);
          k_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_14);
      i_14 = t;
      t = j_14;
      if(match_cons(t, sym__2))
        {
          o_14 = ATgetArgument(t, 0);
          p_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_14);
      n_14 = t;
      t = p_14;
      if(match_cons(t, sym_iter_1))
        {
          p_15 = ATgetArgument(t, 0);
          {
            ATerm v_6 = NULL,y_2 = NULL;
            t = SSLgetAnnotations(p_14);
            v_6 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, p_15);
            y_2 = t;
            t = SSLsetAnnotations(y_2, v_6);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              p_15 = ATgetArgument(t, 0);
              {
                ATerm z_6 = NULL,z_2 = NULL;
                t = SSLgetAnnotations(p_14);
                z_6 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, p_15);
                z_2 = t;
                t = SSLsetAnnotations(z_2, z_6);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  p_15 = ATgetArgument(t, 0);
                  q_15 = ATgetArgument(t, 1);
                  {
                    ATerm e_7 = NULL,a_3 = NULL;
                    t = SSLgetAnnotations(p_14);
                    e_7 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, p_15, q_15);
                    a_3 = t;
                    t = SSLsetAnnotations(a_3, e_7);
                  }
                }
              else
                {
                  ATerm l_7 = NULL,b_3 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      p_15 = ATgetArgument(t, 0);
                      q_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_14);
                  l_7 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, p_15, q_15);
                  b_3 = t;
                  t = SSLsetAnnotations(b_3, l_7);
                }
            }
        }
      q_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_14, q_14);
      c_3 = t;
      t = SSLsetAnnotations(c_3, n_14);
      if(match_cons(t, sym_lit_1))
        {
          s_15 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_9, (ATerm) ATmakeAppl(sym_S_1, s_15));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              s_15 = ATgetArgument(t, 0);
              {
                ATerm q_10 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, s_15);
        }
      l_14 = t;
      t = k_14;
      t = map_1_0(y_0, t);
      m_14 = t;
      t = (ATerm) ATinsert(CheckATermList(m_14), l_14);
      j_3 = t;
      t = SSLsetAnnotations(j_3, i_14);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_14 = ATgetFirst((ATermList) t);
          c_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_10 = t;
        if((PushChoice() == 0))
          {
            ATerm l_16 = NULL,p_16 = NULL,q_16 = NULL,s_16 = NULL,k_3 = NULL;
            s_16 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_16 = ATgetFirst((ATermList) t);
                q_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_16);
            l_16 = t;
            t = q_16;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_16), p_16);
            k_3 = t;
            t = SSLsetAnnotations(k_3, l_16);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_10;
          }
      }
      t = c_14;
      t = reverse_acc_2_0(_id, a_1, t);
      h_14 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, d_14), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, h_14)));
      LocalPopChoice(p_10);
    }
  else
    {
      t = l_10;
      {
        ATerm s_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,m_3 = NULL,c_17 = NULL;
            t = reverse_acc_2_0(_id, d_1, t);
            x_16 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_16 = ATgetFirst((ATermList) t);
                w_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_16);
            u_16 = t;
            t = v_16;
            if(match_cons(t, sym_lit_1))
              {
                c_17 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_s_9, (ATerm) ATmakeAppl(sym_S_1, c_17));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    c_17 = ATgetArgument(t, 0);
                    {
                      ATerm w_10 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, c_17);
              }
            g_14 = t;
            t = w_16;
            {
              ATerm z_10 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = z_10;
                }
            }
            t = reverse_acc_2_0(_id, f_1, t);
            e_14 = t;
            t = (ATerm) ATinsert(CheckATermList(e_14), g_14);
            m_3 = t;
            t = SSLsetAnnotations(m_3, u_16);
            t = e_14;
            t = pair_0_0(t);
            t = map_1_0(i_1, t);
            f_14 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, g_14), f_14));
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
            t = map_1_0(l_1, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm b_11 = t;
  if((PushChoice() == 0))
    {
      ATerm n_23 = NULL,s_23 = NULL,t_23 = NULL,x_4 = NULL;
      t_23 = t;
      if(match_cons(t, sym_lit_1))
        {
          s_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_23);
      n_23 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, s_23);
      x_4 = t;
      t = SSLsetAnnotations(x_4, n_23);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_11;
    }
  return(t);
}
static ATerm p_25 (ATerm y_23, ATerm z_23, ATerm a_24, ATerm t)
{
  ATerm f_24 = NULL,p_5 = NULL;
  t = SSLgetAnnotations(y_23);
  f_24 = t;
  t = a_24;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_23, a_24);
  p_5 = t;
  t = SSLsetAnnotations(p_5, f_24);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm q_75 (ATerm), ATerm t)
{
  ATerm x_23 = NULL;
  static ATerm m_25 (ATerm t)
  {
    ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
    p_24 = t;
    if(match_cons(t, sym__2))
      {
        q_24 = ATgetArgument(t, 0);
        r_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_24;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_24 = ATgetFirst((ATermList) t);
        t_24 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_11 = t;
          int m_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_25(p_24, q_24, r_24, t);
              LocalPopChoice(m_11);
            }
          else
            {
              t = h_11;
              {
                ATerm q_11 = t;
                int r_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_24 = NULL,b_25 = NULL,f_25 = NULL;
                    t = s_24;
                    t = q_75(t);
                    t = term_q_8;
                    f_25 = t;
                    t = (ATerm) ATmakeAppl(sym__2, q_24, term_q_8);
                    t = e_6(q_24, f_25, t);
                    b_25 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_25, t_24);
                    t = m_25(t);
                    y_24 = t;
                    t = (ATerm) ATinsert(CheckATermList(y_24), (ATerm) ATmakeAppl(sym__2, q_24, s_24));
                    LocalPopChoice(r_11);
                  }
                else
                  {
                    t = q_11;
                    {
                      ATerm l_25 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, q_24, t_24);
                      t = m_25(t);
                      l_25 = t;
                      t = (ATerm) ATinsert(CheckATermList(l_25), s_24);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = p_25(p_24, q_24, r_24, t);
      }
    return(t);
  }
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, x_23);
  t = m_25(t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  z_25 = t;
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm u_11 = ATgetArgument(t, 0);
            y_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(t_11);
        t = y_25;
      }
    else
      {
        t = s_11;
        t = z_25;
      }
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(m_1, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm m_75 (ATerm), ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,l_26 = NULL;
  t = number_nonterminals_0_0(t);
  l_26 = t;
  t = make_0_0(t);
  f_26 = t;
  t = l_26;
  {
    static ATerm o_1 (ATerm t)
    {
      static ATerm p_1 (ATerm t)
      {
        ATerm m_26 = NULL;
        t = term_d_3;
        t = m_75(t);
        m_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_26, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(p_1, t);
      return(t);
    }
    t = map_1_0(o_1, t);
  }
  t = concat_0_0(t);
  g_26 = t;
  t = term_d_3;
  t = m_75(t);
  h_26 = t;
  t = (ATerm) ATinsert(CheckATermList(g_26), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, h_26), f_26));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_v_11;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm r_26 = NULL;
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,k_27 = NULL;
      ATerm c_12 = t;
      int m_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              b_27 = ATgetArgument(t, 0);
              {
                ATerm n_12 = ATgetArgument(t, 1);
              }
              d_27 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(m_12);
          {
            static ATerm s_1 (ATerm t)
            {
              t = not_null(r_26);
              return(t);
            }
            t = d_27;
            {
              static ATerm r_1 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((r_26 != NULL) && (r_26 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      r_26 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(r_1, t);
            }
            t = b_27;
            t = symbols2pp_entries_1_0(s_1, t);
          }
        }
      else
        {
          t = c_12;
          {
            ATerm l_27 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                b_27 = ATgetArgument(t, 0);
                c_27 = ATgetArgument(t, 1);
                d_27 = ATgetArgument(t, 2);
                k_27 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_12)), c_27), (ATerm) ATinsert(ATinsert(ATempty, term_s_12), (ATerm) ATmakeAppl(sym_lit_1, b_27)));
            t = concat_0_0(t);
            l_27 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, l_27, d_27, k_27);
            t = generate_pp_entries_0_0(t);
          }
        }
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_13 = t;
            if((PushChoice() == 0))
              {
                ATerm m_27 = NULL;
                m_27 = t;
                t = term_c_13;
                t = get_options_0_0(t);
                t = oncetd_1_0(t_1, t);
                t = m_27;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_13;
              }
            t = debug_1_0(x_1, t);
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm at_last_1_0 (ATerm a_85 (ATerm), ATerm t)
{
  static ATerm m_29 (ATerm t)
  {
    ATerm c_29 = NULL,d_29 = NULL,i_29 = NULL;
    c_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_29 = ATgetFirst((ATermList) t);
        i_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_13 = t;
      int g_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_9 = NULL,w_7 = NULL;
          t = SSLgetAnnotations(c_29);
          b_9 = t;
          t = i_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(i_29), d_29);
          w_7 = t;
          t = SSLsetAnnotations(w_7, b_9);
          t = a_85(t);
          LocalPopChoice(g_13);
        }
      else
        {
          t = f_13;
          {
            ATerm o_9 = NULL,u_9 = NULL,z_7 = NULL;
            t = SSLgetAnnotations(c_29);
            o_9 = t;
            t = i_29;
            t = m_29(t);
            u_9 = t;
            t = (ATerm) ATinsert(CheckATermList(u_9), d_29);
            z_7 = t;
            t = SSLsetAnnotations(z_7, o_9);
          }
        }
    }
    return(t);
  }
  t = m_29(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_30 = ATgetFirst((ATermList) t);
      d_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_30;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_30;
    }
  else
    {
      t = d_30;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm u_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_13 = ATgetFirst((ATermList) t);
      u_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_30;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_30 = ATgetFirst((ATermList) t);
      {
        ATerm i_13 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_30;
  t = g_93(t);
  t = r_30;
  t = last_0_0(t);
  t = h_93(t);
  t = r_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_13 = ATgetFirst((ATermList) t);
      s_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_30;
  t = at_last_1_0(y_1, t);
  return(t);
}
ATerm foldr_3_0 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  w_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_30;
      t = h_90(t);
    }
  else
    {
      ATerm e_31 = NULL,h_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_30 = ATgetFirst((ATermList) t);
          y_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_30;
      t = j_90(t);
      e_31 = t;
      t = y_30;
      t = foldr_3_0(h_90, i_90, j_90, t);
      h_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_31, h_31);
      t = i_90(t);
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm r_107 (ATerm), ATerm t)
{
  static ATerm p_31 (ATerm t)
  {
    ATerm l_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_31 = NULL;
        t = r_107(t);
        m_31 = t;
        t = (ATerm) ATinsert(ATempty, m_31);
        LocalPopChoice(n_13);
      }
    else
      {
        t = l_13;
        {
          ATerm c_10 = NULL,e_10 = NULL;
          e_10 = t;
          t = SSL_explode_term(e_10);
          if(match_cons(t, sym__2))
            {
              ATerm o_13 = ATgetArgument(t, 0);
              c_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_10;
          t = foldr_3_0(a_2, conc_0_0, p_31, t);
        }
      }
    return(t);
  }
  t = p_31(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm m_32 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      m_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_32;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm w_33 = NULL,z_33 = NULL;
  z_33 = t;
  if(match_cons(t, sym_cons_1))
    {
      w_33 = ATgetArgument(t, 0);
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_10 = NULL,g_11 = NULL,j_11 = NULL,e_8 = NULL;
            t = SSLgetAnnotations(z_33);
            y_10 = t;
            t = SSL_explode_string(w_33);
            t = unquote_chars_2_0(j_2, m_2, t);
            j_11 = t;
            t = SSL_implode_string(j_11);
            g_11 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, g_11);
            e_8 = t;
            t = SSLsetAnnotations(e_8, y_10);
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            t = z_33;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          w_33 = ATgetArgument(t, 0);
          {
            ATerm r_13 = t;
            int s_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_12 = NULL,f_12 = NULL,h_12 = NULL,f_8 = NULL;
                t = SSLgetAnnotations(z_33);
                b_12 = t;
                t = SSL_explode_string(w_33);
                t = unquote_chars_2_0(n_2, o_2, t);
                h_12 = t;
                t = SSL_implode_string(h_12);
                f_12 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, f_12);
                f_8 = t;
                t = SSLsetAnnotations(f_8, b_12);
                LocalPopChoice(s_13);
              }
            else
              {
                t = r_13;
                t = z_33;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_sort_1))
            {
              w_33 = ATgetArgument(t, 0);
              {
                ATerm u_13 = t;
                int v_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_13 = NULL,d_13 = NULL,e_13 = NULL,j_8 = NULL;
                    t = SSLgetAnnotations(z_33);
                    b_13 = t;
                    t = SSL_explode_string(w_33);
                    t = unquote_chars_2_0(q_2, s_2, t);
                    e_13 = t;
                    t = SSL_implode_string(e_13);
                    d_13 = t;
                    t = (ATerm) ATmakeAppl(sym_sort_1, d_13);
                    j_8 = t;
                    t = SSLsetAnnotations(j_8, b_13);
                    LocalPopChoice(v_13);
                  }
                else
                  {
                    t = u_13;
                    t = z_33;
                  }
              }
            }
          else
            {
              t = z_33;
            }
        }
    }
  return(t);
}
static ATerm j_2 (ATerm t)
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
static ATerm o_2 (ATerm t)
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
static ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm x_13 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_13;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm a_36 = NULL,e_36 = NULL,h_36 = NULL;
  h_36 = t;
  if(match_cons(t, sym_Arg_1))
    {
      e_36 = ATgetArgument(t, 0);
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_13 = NULL,m_13 = NULL,l_8 = NULL;
            t = SSLgetAnnotations(h_36);
            k_13 = t;
            t = SSL_int_to_string(e_36);
            m_13 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, m_13);
            l_8 = t;
            t = SSLsetAnnotations(l_8, k_13);
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
            t = h_36;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_selector_2))
        {
          e_36 = ATgetArgument(t, 0);
          a_36 = ATgetArgument(t, 1);
          {
            ATerm a_14 = t;
            int b_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_13 = NULL,w_13 = NULL,m_8 = NULL;
                t = SSLgetAnnotations(h_36);
                t_13 = t;
                t = SSL_int_to_string(e_36);
                w_13 = t;
                t = (ATerm) ATmakeAppl(sym_selector_2, w_13, a_36);
                m_8 = t;
                t = SSLsetAnnotations(m_8, t_13);
                LocalPopChoice(b_14);
              }
            else
              {
                t = a_14;
                t = h_36;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_S_1))
            {
              e_36 = ATgetArgument(t, 0);
              {
                ATerm s_14 = t;
                int t_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_14 = NULL,k_15 = NULL,o_15 = NULL,u_15 = NULL,n_8 = NULL;
                    t = SSLgetAnnotations(h_36);
                    u_14 = t;
                    t = SSL_explode_string(e_36);
                    o_15 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_15), term_v_14), (ATerm) ATinsert(ATempty, term_v_14));
                    t = conc_0_0(t);
                    u_15 = t;
                    t = SSL_implode_string(u_15);
                    k_15 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, k_15);
                    n_8 = t;
                    t = SSLsetAnnotations(n_8, u_14);
                    LocalPopChoice(t_14);
                  }
                else
                  {
                    t = s_14;
                    t = h_36;
                  }
              }
            }
          else
            {
              t = h_36;
            }
        }
    }
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm l_32 = NULL;
  t = collect_p__1_0(b_2, t);
  t = concat_0_0(t);
  t = topdown_1_0(h_2, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(t_2, t);
  t = concat_0_0(t);
  l_32 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, l_32);
  t = topdown_1_0(u_2, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  static ATerm s_36 (ATerm t)
  {
    ATerm w_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_78(t);
        LocalPopChoice(z_14);
      }
    else
      {
        t = w_14;
        t = SRTS_one(s_36, t);
      }
    return(t);
  }
  t = s_36(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL;
  t = term_a_15;
  t_36 = t;
  t = term_c_15;
  u_36 = t;
  t = term_e_15;
  t = g_6(t_36, u_36, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm g_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
      t = term_j_15;
      t = get_options_0_0(t);
      t = oncetd_1_0(v_2, t);
      t = term_m_15;
      w_36 = t;
      t = (ATerm) ATinsert(ATempty, term_n_15);
      x_36 = t;
      t = SSL_printnl(w_36, x_36);
      t = term_q_8;
      v_36 = t;
      t = SSL_exit(v_36);
      t = (ATerm) ATinsert(ATempty, term_n_15);
      LocalPopChoice(i_15);
    }
  else
    {
      t = g_15;
      {
        ATerm z_36 = NULL,a_37 = NULL;
        t = term_m_15;
        z_36 = t;
        t = (ATerm) ATinsert(ATempty, term_r_15);
        a_37 = t;
        t = SSL_printnl(z_36, a_37);
        t = (ATerm) ATinsert(ATempty, term_r_15);
      }
    }
  return(t);
}
static ATerm q_5 (ATerm r_37, ATerm s_37, ATerm t)
{
  t = SSL_mkterm(r_37, s_37);
  return(t);
}
static ATerm r_5 (ATerm d_108 (ATerm), ATerm n_57, ATerm t)
{
  ATerm e_37 = NULL,l_37 = NULL;
  t = term_d_3;
  t = d_108(t);
  e_37 = t;
  t = (ATerm) ATinsert(ATempty, n_57);
  l_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_37, (ATerm) ATinsert(ATempty, n_57));
  t = q_5(e_37, l_37, t);
  return(t);
}
ATerm InOutId_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL;
  j_38 = t;
  if(match_cons(t, sym__2))
    {
      k_38 = ATgetArgument(t, 0);
      l_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_17 = NULL,g_17 = NULL,n_9 = NULL;
        t = SSLgetAnnotations(j_38);
        g_17 = t;
        t = k_38;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("out-type", 0, ATtrue)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_38, l_38);
        n_9 = t;
        t = SSLsetAnnotations(n_9, g_17);
        if(match_cons(t, sym__2))
          {
            ATerm w_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_15) != ATmakeSymbol("out-type", 0, ATtrue)))
              _fail(t);
            e_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_5(l_0, e_17, t);
        LocalPopChoice(v_15);
      }
    else
      {
        t = t_15;
        {
          ATerm x_17 = NULL,y_17 = NULL,h_18 = NULL,i_18 = NULL,r_9 = NULL;
          t = SSLgetAnnotations(j_38);
          y_17 = t;
          t = k_38;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("in-type", 0, ATtrue)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, k_38, l_38);
          r_9 = t;
          t = SSLsetAnnotations(r_9, y_17);
          if(match_cons(t, sym__2))
            {
              ATerm x_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_15) != ATmakeSymbol("in-type", 0, ATtrue)))
                _fail(t);
              x_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSL_explode_term(x_17);
          if(match_cons(t, sym__2))
            {
              i_18 = ATgetArgument(t, 0);
              {
                ATerm a_16 = ATgetArgument(t, 1);
                if(((ATgetType(a_16) == AT_LIST) && !(ATisEmpty(a_16))))
                  {
                    h_18 = ATgetFirst((ATermList) a_16);
                    {
                      ATerm b_16 = (ATerm) ATgetNext((ATermList) a_16);
                      if(((ATgetType(b_16) != AT_LIST) || !(ATisEmpty(b_16))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = i_18;
          {
            ATerm e_16 = t;
            int f_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = k_0(t);
                LocalPopChoice(f_16);
              }
            else
              {
                t = e_16;
                t = type_failure_0_0(t);
              }
          }
          t = h_18;
        }
      }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
  o_38 = t;
  t = term_d_3;
  t = whoami_0_0(t);
  p_38 = t;
  t = term_m_15;
  r_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_16), p_38), term_i_16);
  s_38 = t;
  t = SSL_printnl(r_38, s_38);
  t = term_q_8;
  q_38 = t;
  t = SSL_exit(q_38);
  t = o_38;
  return(t);
}
static ATerm v_5 (ATerm f_37, ATerm g_37, ATerm t)
{
  ATerm t_38 = NULL;
  t = SSL_fputc(f_37, g_37);
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_38);
  return(t);
}
static ATerm w_5 (ATerm h_22, ATerm i_22, ATerm t)
{
  ATerm u_38 = NULL;
  t = SSL_write_term_to_stream_text(h_22, i_22);
  u_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_38);
  return(t);
}
static ATerm y_5 (ATerm p_83 (ATerm), ATerm k_168, ATerm n_22, ATerm t)
{
  ATerm v_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_168, term_k_16);
  t = c_6(t);
  v_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_38, n_22);
  t = p_83(t);
  t = fclose_0_0(t);
  t = n_22;
  return(t);
}
static ATerm x_5 (ATerm d_22, ATerm e_22, ATerm t)
{
  ATerm w_38 = NULL;
  t = SSL_write_term_to_stream_baf(d_22, e_22);
  w_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_38);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_16 = ATgetArgument(t, 0);
      if(match_cons(m_16, sym_Stream_1))
        {
          v_18 = ATgetArgument(m_16, 0);
        }
      else
        _fail(t);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(v_18, w_18, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_16 = ATgetArgument(t, 0);
      if(match_cons(n_16, sym_Stream_1))
        {
          o_19 = ATgetArgument(n_16, 0);
        }
      else
        _fail(t);
      p_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(o_19, p_19, t);
  l_19 = t;
  t = term_o_16;
  m_19 = t;
  t = l_19;
  if(match_cons(t, sym_Stream_1))
    {
      n_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_16, l_19);
  t = v_5(m_19, n_19, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,m_40 = NULL,n_40 = NULL,w_9 = NULL,v_9 = NULL;
  b_39 = t;
  if(match_cons(t, sym__2))
    {
      i_39 = ATgetArgument(t, 0);
      j_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_39);
  h_39 = t;
  t = i_39;
  {
    ATerm r_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm w_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((a_39 != NULL) && (a_39 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(w_2, t);
        LocalPopChoice(t_16);
      }
    else
      {
        t = r_16;
        t = term_y_16;
        a_39 = t;
      }
  }
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_39, j_39);
  v_9 = t;
  t = SSLsetAnnotations(v_9, h_39);
  t = b_39;
  if(match_cons(t, sym__2))
    {
      d_39 = ATgetArgument(t, 0);
      e_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_39);
  c_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_39, (ATerm) ATmakeAppl(sym__2, not_null(a_39), e_39));
  w_9 = t;
  t = SSLsetAnnotations(w_9, c_39);
  g_39 = t;
  if(match_cons(t, sym__2))
    {
      m_40 = ATgetArgument(t, 0);
      n_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,y_9 = NULL;
        t = SSLgetAnnotations(g_39);
        o_18 = t;
        t = m_40;
        t = fetch_1_0(x_2, t);
        r_18 = t;
        t = n_40;
        if(match_cons(t, sym__2))
          {
            t_18 = ATgetArgument(t, 0);
            u_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_5(f_3, t_18, u_18, t);
        s_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_18, s_18);
        y_9 = t;
        t = SSLsetAnnotations(y_9, o_18);
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        {
          ATerm d_19 = NULL,g_19 = NULL,i_19 = NULL,k_19 = NULL,d_10 = NULL;
          t = SSLgetAnnotations(g_39);
          d_19 = t;
          t = n_40;
          if(match_cons(t, sym__2))
            {
              i_19 = ATgetArgument(t, 0);
              k_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_5(g_3, i_19, k_19, t);
          g_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_40, g_19);
          d_10 = t;
          t = SSLsetAnnotations(d_10, d_19);
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
ATerm apply_strategy_1_0 (ATerm o_100 (ATerm), ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
  u_40 = t;
  t = dtime_0_0(t);
  t = u_40;
  t = o_100(t);
  t_40 = t;
  t = dtime_0_0(t);
  q_40 = t;
  t = t_40;
  if(match_cons(t, sym__2))
    {
      r_40 = ATgetArgument(t, 0);
      s_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_40), (ATerm) ATmakeAppl(sym_Runtime_1, q_40)), s_40);
  return(t);
}
static ATerm j_41 (ATerm c_41, ATerm t)
{
  t = SSL_fclose(c_41);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL;
  g_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_41 = ATgetArgument(t, 0);
      {
        ATerm b_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_41);
            LocalPopChoice(d_17);
          }
        else
          {
            t = b_17;
            t = j_41(g_41, t);
          }
      }
    }
  else
    {
      t = j_41(g_41, t);
    }
  return(t);
}
static ATerm z_5 (ATerm j_22, ATerm t)
{
  t = SSL_read_term_from_stream(j_22);
  return(t);
}
static ATerm b_6 (ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm k_41 = NULL;
  t = SSL_fopen(h_37, i_37);
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_41);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_41 = NULL;
  t = SSL_stdin_stream();
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_41);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_41 = NULL;
  t = SSL_stdout_stream();
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_41);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_41 = NULL;
  t = SSL_stderr_stream();
  n_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_41);
  return(t);
}
static ATerm u_42 (ATerm t_41, ATerm t)
{
  ATerm u_41 = NULL;
  t = SSL_explode_term(t_41);
  if(match_cons(t, sym__2))
    {
      ATerm f_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_17 = ATgetArgument(t, 1);
        if(((ATgetType(h_17) == AT_LIST) && !(ATisEmpty(h_17))))
          {
            u_41 = ATgetFirst((ATermList) h_17);
            {
              ATerm i_17 = (ATerm) ATgetNext((ATermList) h_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_41;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_41;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_41;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_41;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_42 (ATerm x_41, ATerm y_41, ATerm z_41, ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,f_42 = NULL,x_11 = NULL;
  t = SSLgetAnnotations(z_41);
  c_42 = t;
  t = x_41;
  if(match_cons(t, sym_Path_1))
    {
      f_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_42, y_41);
  x_11 = t;
  t = SSLsetAnnotations(x_11, c_42);
  if(match_cons(t, sym__2))
    {
      a_42 = ATgetArgument(t, 0);
      b_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(a_42, b_42, t);
  return(t);
}
static ATerm w_42 (ATerm h_42, ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,p_42 = NULL,d_12 = NULL;
  t = SSLgetAnnotations(j_42);
  m_42 = t;
  t = SSL_is_string(h_42);
  p_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_42, i_42);
  d_12 = t;
  t = SSLsetAnnotations(d_12, m_42);
  if(match_cons(t, sym__2))
    {
      k_42 = ATgetArgument(t, 0);
      l_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(k_42, l_42, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
  r_42 = t;
  if(match_cons(t, sym__2))
    {
      s_42 = ATgetArgument(t, 0);
      t_42 = ATgetArgument(t, 1);
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_42(r_42, t);
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            {
              ATerm m_17 = t;
              int n_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_42(s_42, t_42, r_42, t);
                  LocalPopChoice(n_17);
                }
              else
                {
                  t = m_17;
                  t = w_42(s_42, t_42, r_42, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_42(r_42, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,f_43 = NULL;
  f_43 = t;
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_43, term_u_17);
        t = c_6(t);
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        {
          ATerm j_20 = NULL,k_20 = NULL;
          t = term_v_17;
          k_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_17, f_43);
          t = a_6(k_20, f_43, t);
          j_20 = t;
          t = SSL_perror(j_20);
          _fail(t);
        }
      }
  }
  z_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(a_43, t);
  y_42 = t;
  t = z_42;
  t = fclose_0_0(t);
  t = y_42;
  return(t);
}
ATerm fetch_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  static ATerm e_44 (ATerm t)
  {
    ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
    b_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_44 = ATgetFirst((ATermList) t);
        d_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_17 = t;
      int z_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_20 = NULL,z_20 = NULL,x_14 = NULL;
          t = SSLgetAnnotations(b_44);
          v_20 = t;
          t = c_44;
          t = i_84(t);
          z_20 = t;
          t = (ATerm) ATinsert(CheckATermList(d_44), z_20);
          x_14 = t;
          t = SSLsetAnnotations(x_14, v_20);
          LocalPopChoice(z_17);
        }
      else
        {
          t = w_17;
          {
            ATerm n_21 = NULL,r_21 = NULL,y_14 = NULL;
            t = SSLgetAnnotations(b_44);
            n_21 = t;
            t = d_44;
            t = e_44(t);
            r_21 = t;
            t = (ATerm) ATinsert(CheckATermList(r_21), c_44);
            y_14 = t;
            t = SSLsetAnnotations(y_14, n_21);
          }
        }
    }
    return(t);
  }
  t = e_44(t);
  return(t);
}
static ATerm a_6 (ATerm y_35, ATerm z_35, ATerm t)
{
  t = SSL_strcat(y_35, z_35);
  return(t);
}
ATerm debug_1_0 (ATerm n_83 (ATerm), ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL;
  h_44 = t;
  t = n_83(t);
  i_44 = t;
  t = term_m_15;
  j_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_44), i_44);
  k_44 = t;
  t = SSL_printnl(j_44, k_44);
  t = h_44;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_44 = NULL;
      r_44 = t;
      t = SSL_is_string(r_44);
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      {
        ATerm g_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_3, t);
            LocalPopChoice(j_18);
          }
        else
          {
            t = g_18;
            {
              ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
              x_44 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_44 = ATgetArgument(t, 0);
                  t = y_44;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_44 = ATgetArgument(t, 0);
                      t = y_44;
                      {
                        ATerm k_18 = t;
                        int l_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(l_18);
                          }
                        else
                          {
                            t = k_18;
                            t = debug_1_0(i_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_45 = NULL,e_45 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_44 = ATgetArgument(t, 0);
                          z_44 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_44;
                      t = eval_config_0_0(t);
                      d_45 = t;
                      t = z_44;
                      t = eval_config_0_0(t);
                      e_45 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_45, e_45);
                      t = a_6(d_45, e_45, t);
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
  ATerm i_45 = NULL,j_45 = NULL;
  i_45 = t;
  t = term_m_18;
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_18, i_45);
  t = g_6(j_45, i_45, t);
  {
    ATerm n_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_45 = NULL,l_45 = NULL;
        t = eval_config_0_0(t);
        k_45 = t;
        t = term_m_18;
        l_45 = t;
        t = SSL_table_put(l_45, i_45, k_45);
        t = k_45;
        LocalPopChoice(p_18);
      }
    else
      {
        t = n_18;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_98 (ATerm), ATerm t)
{
  ATerm p_45 = NULL;
  p_45 = t;
  {
    ATerm q_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_45 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        r_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_45, term_b_19);
        t = geq_0_0(t);
        t = p_45;
        t = x_98(t);
        LocalPopChoice(x_18);
      }
    else
      {
        t = q_18;
        t = p_45;
      }
  }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm u_45 = NULL;
  u_45 = t;
  if(match_string(t, "-k"))
    {
      t = u_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_45;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL;
  v_45 = t;
  t = SSL_string_to_int(v_45);
  w_45 = t;
  t = term_c_19;
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_19, w_45);
  t = i_6(x_45, w_45, t);
  t = v_45;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_3, o_3, s_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm z_45 = NULL;
  z_45 = t;
  if(match_string(t, "-S"))
    {
      t = z_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_45;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL;
  t = term_a_19;
  a_46 = t;
  t = term_f_19;
  b_46 = t;
  t = term_h_19;
  t = i_6(a_46, b_46, t);
  t = term_q_19;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_r_19;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
  c_46 = t;
  t = SSL_string_to_int(c_46);
  d_46 = t;
  t = term_a_19;
  e_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, d_46);
  t = i_6(e_46, d_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_46);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_s_19;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL;
  t = term_t_19;
  f_46 = t;
  t = term_d_3;
  g_46 = t;
  t = term_u_19;
  t = i_6(f_46, g_46, t);
  t = term_v_19;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_3, u_3, v_3, t);
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
      {
        ATerm z_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_3, c_4, d_4, t);
            LocalPopChoice(a_20);
          }
        else
          {
            t = z_19;
            t = Option_3_0(h_4, i_4, k_4, t);
          }
      }
    }
  return(t);
}
static ATerm i_6 (ATerm y_46, ATerm z_46, ATerm t)
{
  ATerm h_46 = NULL;
  t = term_m_18;
  h_46 = t;
  t = SSL_table_put(h_46, y_46, z_46);
  t = (ATerm) ATmakeAppl(sym__3, term_m_18, y_46, z_46);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm j_46 = NULL;
  j_46 = t;
  if(match_string(t, "-o"))
    {
      t = j_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_46;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL;
  k_46 = t;
  t = term_b_20;
  l_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_20, k_46);
  t = i_6(l_46, k_46, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_46);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_4, o_4, q_4, t);
  return(t);
}
static ATerm d_6 (ATerm y_51, ATerm z_51, ATerm x_51, ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL;
  n_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_51, z_51);
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_20 = ATgetArgument(t, 0);
            ATerm g_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_51, z_51);
        t = g_6(y_51, z_51, t);
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = (ATerm) ATempty;
      }
  }
  o_46 = t;
  t = (ATerm) ATinsert(CheckATermList(o_46), x_51);
  p_46 = t;
  t = SSL_table_put(y_51, z_51, p_46);
  t = n_46;
  return(t);
}
ATerm ArgOption_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,a_47 = NULL,b_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
      t = term_d_3;
      t = i_0(t);
      c_47 = t;
      t = term_q_6;
      d_47 = t;
      t = term_m_7;
      e_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_6, term_m_7, c_47);
      t = d_6(d_47, e_47, c_47, t);
      _fail(t);
    }
  else
    {
      ATerm n_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_46 = ATgetFirst((ATermList) t);
          x_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_46;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_47 = ATgetFirst((ATermList) t);
          b_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_46;
      t = e_0(t);
      t = a_47;
      t = g_0(t);
      n_47 = t;
      t = (ATerm) ATinsert(CheckATermList(b_47), n_47);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm p_47 = NULL;
  p_47 = t;
  if(match_string(t, "-i"))
    {
      t = p_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_47;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL;
  q_47 = t;
  t = term_h_20;
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_20, q_47);
  t = i_6(r_47, q_47, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_47);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_3;
  t = whoami_0_0(t);
  s_47 = t;
  t = term_m_15;
  u_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_20), s_47);
  v_47 = t;
  t = SSL_printnl(u_47, v_47);
  t = term_q_8;
  t_47 = t;
  t = SSL_exit(t_47);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_20;
  t = get_config_0_0(t);
  return(t);
}
static ATerm e_6 (ATerm b_40, ATerm c_40, ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_40, c_40);
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      t = SSL_addr(b_40, c_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
  x_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_47;
      t = f_90(t);
    }
  else
    {
      ATerm c_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_47 = ATgetFirst((ATermList) t);
          z_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_47;
      t = foldr_2_0(f_90, g_90, t);
      c_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_47, c_48);
      t = g_90(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_f_19;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm r_22 = NULL,t_22 = NULL;
  if(match_cons(t, sym__2))
    {
      r_22 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(r_22, t_22, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_48 = NULL,m_22 = NULL,o_22 = NULL;
  t = times_0_0(t);
  o_22 = t;
  t = SSL_explode_term(o_22);
  if(match_cons(t, sym__2))
    {
      ATerm p_20 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_22;
  t = foldr_2_0(u_4, v_4, t);
  f_48 = t;
  t = SSL_TicksToSeconds(f_48);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_48 = NULL,v_48 = NULL,w_48 = NULL;
  q_48 = t;
  if(match_cons(t, sym__2))
    {
      v_48 = ATgetArgument(t, 0);
      w_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_48;
        if((v_48 != t))
          {
            _fail(t);
          }
        t = q_48;
        LocalPopChoice(s_20);
      }
    else
      {
        t = q_20;
        t = (ATerm) ATmakeAppl(sym__2, v_48, w_48);
        {
          ATerm t_20 = t;
          int u_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_48, w_48);
              LocalPopChoice(u_20);
            }
          else
            {
              t = t_20;
              t = SSL_gtr(v_48, w_48);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_48, w_48);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm a_49 = NULL;
  a_49 = t;
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_49 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        c_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_49, term_q_8);
        t = geq_0_0(t);
        t = a_49;
        t = w_98(t);
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        t = a_49;
      }
  }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,h_49 = NULL,i_49 = NULL;
  t = run_time_0_0(t);
  e_49 = t;
  t = term_d_3;
  t = whoami_0_0(t);
  f_49 = t;
  t = term_m_15;
  h_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_21), e_49), term_a_21), f_49);
  i_49 = t;
  t = SSL_printnl(h_49, i_49);
  t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_21), e_49), term_a_21), f_49));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_19;
  j_49 = t;
  t = SSL_exit(j_49);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL;
  s_49 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_49;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_49 = ATgetArgument(t, 0);
          {
            ATerm k_23 = NULL,b_15 = NULL;
            t = SSLgetAnnotations(s_49);
            k_23 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_49);
            b_15 = t;
            t = SSLsetAnnotations(b_15, k_23);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_49;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_21;
      t = get_config_0_0(t);
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      t = fetch_1_0(c_5, t);
    }
  t = m_101(t);
  return(t);
}
ATerm map_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  static ATerm i_50 (ATerm t)
  {
    ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL;
    f_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_50;
      }
    else
      {
        ATerm v_23 = NULL,g_24 = NULL,h_24 = NULL,d_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_50 = ATgetFirst((ATermList) t);
            h_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_50);
        v_23 = t;
        t = g_50;
        t = y_83(t);
        g_24 = t;
        t = h_50;
        t = i_50(t);
        h_24 = t;
        t = (ATerm) ATinsert(CheckATermList(h_24), g_24);
        d_15 = t;
        t = SSLsetAnnotations(d_15, v_23);
      }
    return(t);
  }
  t = i_50(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_50 = ATgetFirst((ATermList) t);
      m_50 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_50 = NULL,r_50 = NULL;
        static ATerm d_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_50)), not_null(r_50));
          return(t);
        }
        t = m_50;
        t = d_0(t);
        if(((q_50 != NULL) && (q_50 != t)))
          _fail(t);
        else
          q_50 = t;
        t = l_50;
        t = c_0(t);
        if(((r_50 != NULL) && (r_50 != t)))
          _fail(t);
        else
          r_50 = t;
        t = m_50;
        t = reverse_acc_2_0(c_0, d_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_3;
      t = d_0(t);
    }
  return(t);
}
static ATerm g_6 (ATerm p_53, ATerm q_53, ATerm t)
{
  t = SSL_table_get(p_53, q_53);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,f_15 = NULL;
  x_50 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_50);
  v_50 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_50);
  f_15 = t;
  t = SSLsetAnnotations(f_15, v_50);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm z_50 = NULL;
  z_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_50), term_f_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL;
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_20;
      t = get_config_0_0(t);
      LocalPopChoice(i_21);
    }
  else
    {
      t = h_21;
      t = fetch_1_0(e_5, t);
    }
  t = term_j_21;
  t = echo_0_0(t);
  t = term_q_6;
  t_50 = t;
  t = term_m_7;
  u_50 = t;
  t = term_k_21;
  t = g_6(t_50, u_50, t);
  t = reverse_acc_2_0(_id, h_5, t);
  t = map_1_0(i_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
  b_51 = t;
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_51;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_21 = ATgetFirst((ATermList) t);
                ATerm q_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_51;
          }
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = (ATerm) ATinsert(ATempty, b_51);
      }
  }
  c_51 = t;
  t = term_y_16;
  d_51 = t;
  t = SSL_printnl(d_51, c_51);
  t = b_51;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL;
  t = term_s_21;
  m_51 = t;
  t = term_d_3;
  n_51 = t;
  t = term_t_21;
  t = i_6(m_51, n_51, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_u_21;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL;
  t = term_s_21;
  q_51 = t;
  t = term_d_3;
  r_51 = t;
  t = term_t_21;
  t = i_6(q_51, r_51, t);
  t = term_v_21;
  o_51 = t;
  t = term_d_3;
  p_51 = t;
  t = term_w_21;
  t = i_6(o_51, p_51, t);
  t = term_x_21;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_5, k_5, l_5, t);
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      t = Option_3_0(m_5, n_5, o_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_61 (ATerm), ATerm h_61 (ATerm), ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,w_51 = NULL,a_52 = NULL,b_52 = NULL,h_15 = NULL;
  b_52 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_51 = ATgetFirst((ATermList) t);
      u_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_52);
  s_51 = t;
  t = t_51;
  t = g_61(t);
  w_51 = t;
  t = u_51;
  t = h_61(t);
  a_52 = t;
  t = (ATerm) ATinsert(CheckATermList(a_52), w_51);
  h_15 = t;
  t = SSLsetAnnotations(h_15, s_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_103 (ATerm), ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,l_52 = NULL,m_52 = NULL,l_15 = NULL;
  g_52 = t;
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_22;
        t = p_103(t);
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
      }
  }
  t = g_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_52 = ATgetFirst((ATermList) t);
      j_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_52);
  h_52 = t;
  t = term_m_20;
  m_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_20, i_52);
  t = i_6(m_52, i_52, t);
  t = j_52;
  {
    static ATerm w_52 (ATerm t)
    {
      ATerm g_22 = t;
      int k_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_22 = t;
          int p_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_52 = NULL;
              p_52 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_52;
              LocalPopChoice(p_22);
            }
          else
            {
              t = l_22;
              t = p_103(t);
              t = Cons_2_0(_id, w_52, t);
            }
          LocalPopChoice(k_22);
        }
      else
        {
          t = g_22;
          {
            ATerm s_52 = NULL,t_52 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_52 = ATgetFirst((ATermList) t);
                t_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_52), (ATerm) ATmakeAppl(sym_Undefined_1, s_52));
          }
        }
      return(t);
    }
    t = w_52(t);
  }
  l_52 = t;
  t = (ATerm) ATinsert(CheckATermList(l_52), (ATerm) ATmakeAppl(sym_Program_1, i_52));
  l_15 = t;
  t = SSLsetAnnotations(l_15, h_52);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm i_53 = NULL;
  i_53 = t;
  if(match_string(t, "--help"))
    {
      t = i_53;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_53;
        }
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL;
  t = term_e_21;
  j_53 = t;
  t = term_d_3;
  k_53 = t;
  t = term_q_22;
  t = i_6(j_53, k_53, t);
  t = term_s_22;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_u_22;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_103 (ATerm), ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL;
  d_53 = t;
  t = term_q_6;
  f_53 = t;
  t = term_m_7;
  g_53 = t;
  t = (ATerm) ATempty;
  h_53 = t;
  t = SSL_table_put(f_53, g_53, h_53);
  t = d_53;
  {
    static ATerm s_5 (ATerm t)
    {
      ATerm v_22 = t;
      int w_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_103(t);
          LocalPopChoice(w_22);
        }
      else
        {
          t = v_22;
          {
            ATerm x_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_5, f_6, h_6, t);
                LocalPopChoice(y_22);
              }
            else
              {
                t = x_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_5, t);
  }
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_53 = NULL;
        t_53 = t;
        {
          ATerm b_23 = t;
          int c_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_25 = NULL;
              t = t_53;
              {
                ATerm d_23 = t;
                int e_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_e_21;
                    t = get_config_0_0(t);
                    LocalPopChoice(e_23);
                  }
                else
                  {
                    t = d_23;
                    t = fetch_1_0(j_6, t);
                  }
              }
              t = t_53;
              t = default_system_usage_0_0(t);
              t = term_f_19;
              a_25 = t;
              t = SSL_exit(a_25);
              LocalPopChoice(c_23);
            }
          else
            {
              t = b_23;
              {
                ATerm g_25 = NULL;
                t = term_s_21;
                t = get_config_0_0(t);
                t = t_53;
                t = default_system_about_0_0(t);
                t = term_f_19;
                g_25 = t;
                t = SSL_exit(g_25);
              }
            }
        }
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL;
              static ATerm k_6 (ATerm t)
              {
                ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL,d_16 = NULL;
                z_53 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_53 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_53);
                x_53 = t;
                t = y_53;
                if(((b_53 != NULL) && (b_53 != t)))
                  _fail(t);
                else
                  b_53 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_53);
                d_16 = t;
                t = SSLsetAnnotations(d_16, x_53);
                return(t);
              }
              t = fetch_1_0(k_6, t);
              t = term_m_15;
              v_53 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_53)), term_h_23);
              w_53 = t;
              t = SSL_printnl(v_53, w_53);
              t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_53)), term_h_23));
              t = default_system_usage_0_0(t);
              t = term_q_8;
              u_53 = t;
              t = SSL_exit(u_53);
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
            }
        }
      }
  }
  c_53 = t;
  t = term_q_6;
  e_53 = t;
  t = SSL_table_destroy(e_53);
  t = c_53;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL;
  t = parse_options_1_0(o_101, t);
  e_54 = t;
  t = term_a_15;
  h_54 = t;
  t = SSL_table_create(h_54);
  t = term_a_15;
  f_54 = t;
  t = term_c_15;
  g_54 = t;
  t = SSL_table_put(f_54, g_54, e_54);
  t = e_54;
  t = q_101(t);
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_101, t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        {
          ATerm l_23 = t;
          int m_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_101(t);
              t = report_success_0_0(t);
              LocalPopChoice(m_23);
            }
          else
            {
              t = l_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = if_verbose2_1_0(t_6, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL;
  t = term_o_23;
  i_54 = t;
  t = term_d_3;
  j_54 = t;
  t = term_p_23;
  t = i_6(i_54, j_54, t);
  t = term_q_23;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_r_23;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL;
  k_54 = t;
  t = term_m_20;
  t = get_config_0_0(t);
  l_54 = t;
  t = term_m_15;
  m_54 = t;
  t = (ATerm) ATinsert(ATempty, l_54);
  n_54 = t;
  t = SSL_printnl(m_54, n_54);
  t = k_54;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t)
{
  static ATerm l_6 (ATerm t)
  {
    ATerm u_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_100(t);
        LocalPopChoice(w_23);
      }
    else
      {
        t = u_23;
        {
          ATerm b_24 = t;
          int c_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(c_24);
            }
          else
            {
              t = b_24;
              {
                ATerm d_24 = t;
                int e_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(e_24);
                  }
                else
                  {
                    t = d_24;
                    {
                      ATerm i_24 = t;
                      int j_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(p_6, r_6, s_6, t);
                          LocalPopChoice(j_24);
                        }
                      else
                        {
                          t = i_24;
                          {
                            ATerm k_24 = t;
                            int l_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(l_24);
                              }
                            else
                              {
                                t = k_24;
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
  static ATerm o_6 (ATerm t)
  {
    ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
    p_54 = t;
    {
      ATerm m_24 = t;
      int n_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm u_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_54 != NULL) && (o_54 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_54 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_6, t);
          LocalPopChoice(n_24);
        }
      else
        {
          t = m_24;
          t = term_o_24;
          o_54 = t;
        }
    }
    t = not_null(o_54);
    t = ReadFromFile_0_0(t);
    q_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_54, q_54);
    t = apply_strategy_1_0(x_100, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(l_6, z_100, n_6, o_6, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--strict", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_j_15;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm io_idwrap_3_0 (ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm t)
{
  static ATerm w_6 (ATerm t)
  {
    ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL;
    x_54 = t;
    if(match_cons(t, sym__2))
      {
        v_54 = ATgetArgument(t, 0);
        w_54 = ATgetArgument(t, 1);
        {
          ATerm v_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_55 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, term_x_24, w_54);
              t = z_107(t);
              a_55 = t;
              t = (ATerm) ATmakeAppl(sym__2, v_54, a_55);
              LocalPopChoice(w_24);
            }
          else
            {
              t = v_24;
              t = x_54;
            }
        }
      }
    else
      {
        t = x_54;
      }
    t = a_108(t);
    f_55 = t;
    if(match_cons(t, sym__2))
      {
        d_55 = ATgetArgument(t, 0);
        e_55 = ATgetArgument(t, 1);
        {
          ATerm z_24 = t;
          int c_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_55 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, term_d_25, e_55);
              t = z_107(t);
              i_55 = t;
              t = (ATerm) ATmakeAppl(sym__2, d_55, i_55);
              LocalPopChoice(c_25);
            }
          else
            {
              t = z_24;
              t = f_55;
            }
        }
      }
    else
      {
        t = f_55;
      }
    return(t);
  }
  static ATerm x_6 (ATerm t)
  {
    ATerm e_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_108(t);
        LocalPopChoice(h_25);
      }
    else
      {
        t = e_25;
        t = Option_3_0(y_6, a_7, b_7, t);
      }
    return(t);
  }
  t = iowrap_3_0(w_6, x_6, default_usage_0_0, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = InOutId_2_0(g_7, h_7, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,h_16 = NULL;
  p_55 = t;
  if(match_cons(t, sym__2))
    {
      m_55 = ATgetArgument(t, 0);
      n_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_55);
  l_55 = t;
  t = n_55;
  t = ppgenerate_0_0(t);
  o_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_55, o_55);
  h_16 = t;
  t = SSLsetAnnotations(h_16, l_55);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = Option_3_0(i_7, j_7, k_7, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"sdf-2.1\"", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_i_25;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-v", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_j_25;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_idwrap_3_0(c_7, d_7, f_7, t);
  return(t);
}
