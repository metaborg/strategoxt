#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Undefined_0;
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
Symbol sym_Hashtable_1;
Symbol sym_Path_1;
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
Symbol sym_list_1;
Symbol sym_char_class_1;
Symbol sym_range_2;
Symbol sym_assoc_3;
Symbol sym_assoc_0;
Symbol sym_left_0;
Symbol sym_lit_1;
Symbol sym_char_class_1;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_1;
Symbol sym_iter_1;
Symbol sym_opt_1;
Symbol sym_layout_0;
Symbol sym_lex_1;
Symbol sym_cf_1;
Symbol sym_prod_3;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_assoc_1;
Symbol sym_appl_2;
Symbol sym_list_1;
Symbol sym_list_1;
Symbol sym_lit_1;
Symbol sym_assoc_1;
Symbol sym_lit_1;
Symbol sym_appl_2;
Symbol sym_list_1;
Symbol sym_prod_3;
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_assoc_1;
Symbol sym_assoc_0;
Symbol sym_left_0;
Symbol sym_range_2;
Symbol sym_char_class_1;
Symbol sym_layout_0;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_1;
Symbol sym_iter_1;
Symbol sym_opt_1;
Symbol sym_lex_1;
Symbol sym_cf_1;
Symbol sym_lit_1;
static void init_module_constructors (void)
{
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_list_1 = ATmakeSymbol("list", 1, ATfalse);
  ATprotectSymbol(sym_list_1);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_range_2 = ATmakeSymbol("range", 2, ATfalse);
  ATprotectSymbol(sym_range_2);
  sym_assoc_3 = ATmakeSymbol("assoc", 3, ATfalse);
  ATprotectSymbol(sym_assoc_3);
  sym_assoc_0 = ATmakeSymbol("assoc", 0, ATfalse);
  ATprotectSymbol(sym_assoc_0);
  sym_left_0 = ATmakeSymbol("left", 0, ATfalse);
  ATprotectSymbol(sym_left_0);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_assoc_1 = ATmakeSymbol("assoc", 1, ATfalse);
  ATprotectSymbol(sym_assoc_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_list_1 = ATmakeSymbol("list", 1, ATfalse);
  ATprotectSymbol(sym_list_1);
  sym_list_1 = ATmakeSymbol("list", 1, ATfalse);
  ATprotectSymbol(sym_list_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_assoc_1 = ATmakeSymbol("assoc", 1, ATfalse);
  ATprotectSymbol(sym_assoc_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_list_1 = ATmakeSymbol("list", 1, ATfalse);
  ATprotectSymbol(sym_list_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_assoc_1 = ATmakeSymbol("assoc", 1, ATfalse);
  ATprotectSymbol(sym_assoc_1);
  sym_assoc_0 = ATmakeSymbol("assoc", 0, ATfalse);
  ATprotectSymbol(sym_assoc_0);
  sym_left_0 = ATmakeSymbol("left", 0, ATfalse);
  ATprotectSymbol(sym_left_0);
  sym_range_2 = ATmakeSymbol("range", 2, ATfalse);
  ATprotectSymbol(sym_range_2);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
}
ATerm term_f_18;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_u_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_k_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_d_9;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_n_7;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_y_4;
ATerm term_x_4;
ATerm term_v_4;
ATerm term_s_4;
ATerm term_y_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_y_2));
  term_y_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeInt(255);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(sym_range_2, term_b_5, term_e_5);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_lex_1, term_n_7);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_cf_1, term_n_7);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_left_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_assoc_1, term_h_8);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_opt_1, term_n_7);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_cf_1, term_j_8);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_z_10);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_b_5);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_5);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_y_2);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_s_12);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_q_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_i_12);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("This tool explodes an AsFix2ME term to a valid AsFix2 term. Explosion involes\n", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattening of lists, layout, literals, and lexicals.\n\n", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Observe that the structure of lexicals cannot be restored. Lexicals are\n", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattened into left linear binary trees.", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym__2, term_r_14, term_y_2);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_y_2);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_y_2);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__3, term_h_12, term_i_12, (ATerm) ATempty);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_r_14);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__2, term_f_17, term_y_2);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm o_5 (ATerm b_21, ATerm c_21, ATerm d_21, ATerm t);
ATerm unflatten_lexical_0_0 (ATerm t);
ATerm MkLayoutCharacter_0_0 (ATerm t);
ATerm MkLayoutConsList_0_0 (ATerm t);
static ATerm p_5 (ATerm r_20, ATerm t);
ATerm MkCfConsList_1_0 (ATerm o_94 (ATerm), ATerm t);
ATerm MkCfConsList_2_0 (ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm t);
ATerm MkLexConsList_1_0 (ATerm t_94 (ATerm), ATerm t);
ATerm unflatten_list_0_0 (ATerm t);
ATerm list_some_1_0 (ATerm c_105 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm q_5 (ATerm p_18, ATerm q_18, ATerm t);
ATerm bottomup_1_0 (ATerm m_98 (ATerm), ATerm t);
static ATerm s_5 (ATerm v_49, ATerm w_49, ATerm t);
static ATerm t_5 (ATerm a_34, ATerm b_34, ATerm t);
static ATerm v_5 (ATerm o_104 (ATerm), ATerm o_258, ATerm g_34, ATerm t);
static ATerm u_5 (ATerm w_33, ATerm x_33, ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm m_122 (ATerm), ATerm t);
static ATerm h_23 (ATerm x_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_5 (ATerm c_34, ATerm t);
static ATerm x_5 (ATerm z_47, ATerm a_48, ATerm t);
static ATerm y_5 (ATerm x_49, ATerm y_49, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_25 (ATerm d_24, ATerm t);
static ATerm o_25 (ATerm l_24, ATerm m_24, ATerm p_24, ATerm t);
static ATerm r_25 (ATerm a_25, ATerm b_25, ATerm c_25, ATerm t);
static ATerm z_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_105 (ATerm), ATerm t);
static ATerm e_6 (ATerm u_56, ATerm v_56, ATerm t);
ATerm if_verbose2_1_0 (ATerm v_120 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_6 (ATerm p_68, ATerm q_68, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_6 (ATerm b_55, ATerm c_55, ATerm a_55, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_6 (ATerm k_53, ATerm l_53, ATerm t);
ATerm foldr_2_0 (ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm u_120 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm need_help_1_0 (ATerm k_123 (ATerm), ATerm t);
static ATerm i_6 (ATerm t_59, ATerm u_59, ATerm v_59, ATerm t);
static ATerm j_6 (ATerm w_59, ATerm x_59, ATerm t);
ATerm lookup_table_0_1 (ATerm n_56, ATerm t);
ATerm new_hashtable_0_2 (ATerm b_60, ATerm c_60, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm c_6 (ATerm y_59, ATerm z_59, ATerm t);
static ATerm d_6 (ATerm d_60, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm x_104 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_125 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm parse_options_1_0 (ATerm h_125 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm p_123 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm iowrap_3_0 (ATerm v_122 (ATerm), ATerm w_122 (ATerm), ATerm x_122 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,n_0 = NULL;
  a_0 = t;
  t = term_y_2;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_s_4;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_4), b_0), term_v_4);
  n_0 = t;
  t = SSL_printnl(e_0, n_0);
  t = term_y_4;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
static ATerm o_5 (ATerm b_21, ATerm c_21, ATerm d_21, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, b_21)), (ATerm)ATmakeAppl(sym_cf_1, b_21), term_a_5), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_f_5))))), (ATerm)ATmakeAppl(sym_lex_1, b_21), term_a_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, c_21, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_f_5)))), term_a_5), d_21))));
  return(t);
}
ATerm unflatten_lexical_0_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm g_5 = ATgetArgument(t, 0);
      if(match_cons(g_5, sym_prod_3))
        {
          ATerm l_5 = ATgetArgument(g_5, 0);
          if(((ATgetType(l_5) == AT_LIST) && !(ATisEmpty(l_5))))
            {
              ATerm g_6 = ATgetFirst((ATermList) l_5);
              if(match_cons(g_6, sym_lex_1))
                {
                  r_0 = ATgetArgument(g_6, 0);
                }
              else
                _fail(t);
              {
                ATerm k_6 = (ATerm) ATgetNext((ATermList) l_5);
                if(((ATgetType(k_6) != AT_LIST) || !(ATisEmpty(k_6))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm r_5 = ATgetArgument(g_5, 1);
            if(match_cons(r_5, sym_cf_1))
              {
                if((r_0 != ATgetArgument(r_5, 0)))
                  {
                    _fail(ATgetArgument(r_5, 0));
                  }
              }
            else
              _fail(t);
          }
          {
            ATerm b_6 = ATgetArgument(g_5, 2);
            if(!(match_cons(b_6, sym_no_attrs_0)))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm h_5 = ATgetArgument(t, 1);
        if(((ATgetType(h_5) == AT_LIST) && !(ATisEmpty(h_5))))
          {
            ATerm l_6 = ATgetFirst((ATermList) h_5);
            if(match_cons(l_6, sym_appl_2))
              {
                ATerm o_6 = ATgetArgument(l_6, 0);
                if(match_cons(o_6, sym_prod_3))
                  {
                    s_0 = ATgetArgument(o_6, 0);
                    {
                      ATerm r_6 = ATgetArgument(o_6, 1);
                      if(match_cons(r_6, sym_iter_star_1))
                        {
                          ATerm u_6 = ATgetArgument(r_6, 0);
                          if(match_cons(u_6, sym_char_class_1))
                            {
                              ATerm v_6 = ATgetArgument(u_6, 0);
                              if(((ATgetType(v_6) == AT_LIST) && !(ATisEmpty(v_6))))
                                {
                                  ATerm z_6 = ATgetFirst((ATermList) v_6);
                                  if(match_cons(z_6, sym_range_2))
                                    {
                                      ATerm f_7 = ATgetArgument(z_6, 0);
                                      if(((ATgetType(f_7) != AT_INT) || (ATgetInt((ATermInt) f_7) != 0)))
                                        _fail(t);
                                      {
                                        ATerm g_7 = ATgetArgument(z_6, 1);
                                        if(((ATgetType(g_7) != AT_INT) || (ATgetInt((ATermInt) g_7) != 255)))
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm d_7 = (ATerm) ATgetNext((ATermList) v_6);
                                    if(((ATgetType(d_7) != AT_LIST) || !(ATisEmpty(d_7))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                    {
                      ATerm t_6 = ATgetArgument(o_6, 2);
                      if(!(match_cons(t_6, sym_no_attrs_0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t_0 = ATgetArgument(l_6, 1);
              }
            else
              _fail(t);
            {
              ATerm n_6 = (ATerm) ATgetNext((ATermList) h_5);
              if(((ATgetType(n_6) != AT_LIST) || !(ATisEmpty(n_6))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_5(r_0, s_0, t_0, t);
  return(t);
}
ATerm MkLayoutCharacter_0_0 (ATerm t)
{
  ATerm a_1 = NULL;
  a_1 = t;
  {
    ATerm l_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_is_int(a_1);
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_s_7), term_t_7, term_a_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_f_5))), term_s_7, term_a_5), (ATerm) ATinsert(ATempty, a_1))));
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        {
          ATerm b_1 = NULL,d_1 = NULL,e_1 = NULL;
          ATerm u_7 = t;
          int v_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_appl_2))
                {
                  b_1 = ATgetArgument(t, 0);
                  {
                    ATerm w_7 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(v_7);
              t = b_1;
              {
                ATerm x_7 = t;
                int y_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_prod_3))
                      {
                        ATerm z_7 = ATgetArgument(t, 0);
                        d_1 = ATgetArgument(t, 1);
                        {
                          ATerm b_8 = ATgetArgument(t, 2);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(y_7);
                    t = d_1;
                    if(match_cons(t, sym_lex_1))
                      {
                        e_1 = ATgetArgument(t, 0);
                        {
                          ATerm c_8 = t;
                          int d_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_s_7), term_t_7, term_a_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, e_1)), term_s_7, term_a_5), (ATerm) ATinsert(ATempty, a_1))));
                              LocalPopChoice(d_8);
                            }
                          else
                            {
                              t = c_8;
                              t = a_1;
                            }
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_lit_1))
                          {
                            e_1 = ATgetArgument(t, 0);
                            {
                              ATerm e_8 = t;
                              int g_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_s_7), term_t_7, term_a_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, e_1)), term_s_7, term_a_5), (ATerm) ATinsert(ATempty, a_1))));
                                  LocalPopChoice(g_8);
                                }
                              else
                                {
                                  t = e_8;
                                  t = a_1;
                                }
                            }
                          }
                        else
                          {
                            t = a_1;
                          }
                      }
                  }
                else
                  {
                    t = x_7;
                    t = a_1;
                  }
              }
            }
          else
            {
              t = u_7;
              t = a_1;
            }
        }
      }
  }
  return(t);
}
ATerm MkLayoutConsList_0_0 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_1 = ATgetFirst((ATermList) t);
      r_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_1;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_1;
      t = MkLayoutCharacter_0_0(t);
    }
  else
    {
      ATerm j_2 = NULL,w_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_1 = ATgetFirst((ATermList) t);
          t_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_1;
      t = MkLayoutCharacter_0_0(t);
      j_2 = t;
      t = s_1;
      t = MkLayoutCharacter_0_0(t);
      w_2 = t;
      t = (ATerm) ATinsert(CheckATermList(t_1), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_t_7), term_t_7), term_t_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_i_8))), (ATerm) ATinsert(ATinsert(ATempty, w_2), j_2)));
      t = MkLayoutConsList_0_0(t);
    }
  return(t);
}
static ATerm p_5 (ATerm r_20, ATerm t)
{
  ATerm z_2 = NULL;
  t = r_20;
  t = MkLayoutConsList_0_0(t);
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_t_7), term_k_8, term_a_5), (ATerm) ATinsert(ATempty, z_2));
  return(t);
}
ATerm MkCfConsList_1_0 (ATerm o_94 (ATerm), ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,i_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,k_5 = NULL;
  static ATerm c_5 (ATerm t);
  static ATerm c_5 (ATerm t)
  {
    ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_3 = ATgetFirst((ATermList) t);
        q_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = q_3;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_3;
      }
    else
      {
        ATerm p_4 = NULL,q_4 = NULL,t_4 = NULL,u_4 = NULL,w_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_3 = ATgetFirst((ATermList) t);
            s_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_3;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_3 = ATgetFirst((ATermList) t);
            u_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_y_2;
        t = o_94(t);
        p_4 = t;
        t = term_y_2;
        t = o_94(t);
        q_4 = t;
        t = term_y_2;
        t = o_94(t);
        t_4 = t;
        t = term_y_2;
        t = o_94(t);
        u_4 = t;
        t = term_y_2;
        t = o_94(t);
        w_4 = t;
        t = (ATerm) ATinsert(CheckATermList(u_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, q_4))), term_k_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, p_4))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, t_4)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_i_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, u_4)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, w_4)), term_a_5), (ATerm) ATinsert(ATempty, t_3))), r_3), p_3)));
        t = c_5(t);
      }
    return(t);
  }
  m_3 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_3 = ATgetFirst((ATermList) t);
      i_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_3);
  f_3 = t;
  t = term_y_2;
  t = o_94(t);
  k_3 = t;
  t = term_y_2;
  t = o_94(t);
  l_3 = t;
  t = (ATerm) ATinsert(CheckATermList(i_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, k_3)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, l_3)), term_a_5), (ATerm) ATinsert(ATempty, g_3)));
  k_5 = t;
  t = SSLsetAnnotations(k_5, f_3);
  t = c_5(t);
  return(t);
}
ATerm MkCfConsList_2_0 (ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm t)
{
  ATerm m_6 = NULL,p_6 = NULL,q_6 = NULL,s_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,v_9 = NULL;
  static ATerm k_9 (ATerm t);
  static ATerm k_9 (ATerm t)
  {
    ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_7 = ATgetFirst((ATermList) t);
        b_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = b_7;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_7;
      }
    else
      {
        ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_7 = ATgetFirst((ATermList) t);
            h_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_7;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_7 = ATgetFirst((ATermList) t);
            j_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_7;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_7 = ATgetFirst((ATermList) t);
            o_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_7;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_7 = ATgetFirst((ATermList) t);
            q_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_y_2;
        t = q_94(t);
        x_8 = t;
        t = term_y_2;
        t = r_94(t);
        y_8 = t;
        t = term_y_2;
        t = r_94(t);
        z_8 = t;
        t = term_y_2;
        t = q_94(t);
        a_9 = t;
        t = term_y_2;
        t = r_94(t);
        b_9 = t;
        t = term_y_2;
        t = q_94(t);
        c_9 = t;
        t = term_y_2;
        t = r_94(t);
        f_9 = t;
        t = term_y_2;
        t = q_94(t);
        g_9 = t;
        t = term_y_2;
        t = q_94(t);
        h_9 = t;
        t = term_y_2;
        t = r_94(t);
        i_9 = t;
        t = (ATerm) ATinsert(CheckATermList(q_7), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, a_9, b_9))), term_k_8), z_8), term_k_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, x_8, y_8))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, c_9, f_9)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_i_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, g_9)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, h_9, i_9)), term_a_5), (ATerm) ATinsert(ATempty, p_7))), k_7), i_7), c_7), a_7)));
        t = k_9(t);
      }
    return(t);
  }
  y_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_6 = ATgetFirst((ATermList) t);
      q_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_6);
  m_6 = t;
  t = term_y_2;
  t = q_94(t);
  s_6 = t;
  t = term_y_2;
  t = q_94(t);
  w_6 = t;
  t = term_y_2;
  t = r_94(t);
  x_6 = t;
  t = (ATerm) ATinsert(CheckATermList(q_6), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, s_6)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, w_6, x_6)), term_a_5), (ATerm) ATinsert(ATempty, p_6)));
  v_9 = t;
  t = SSLsetAnnotations(v_9, m_6);
  t = k_9(t);
  return(t);
}
ATerm MkLexConsList_1_0 (ATerm t_94 (ATerm), ATerm t)
{
  static ATerm d_12 (ATerm t);
  static ATerm d_12 (ATerm t)
  {
    ATerm z_9 = NULL,g_10 = NULL,h_10 = NULL,k_10 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_9 = ATgetFirst((ATermList) t);
        g_10 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = g_10;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        ATerm s_10 = NULL,t_10 = NULL;
        t = term_y_2;
        t = t_94(t);
        s_10 = t;
        t = term_y_2;
        t = t_94(t);
        t_10 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, s_10)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, t_10)), term_a_5), (ATerm) ATinsert(ATempty, z_9));
      }
    else
      {
        ATerm j_11 = NULL,m_11 = NULL,o_11 = NULL,s_11 = NULL,w_11 = NULL,a_12 = NULL,c_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_10 = ATgetFirst((ATermList) t);
            k_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_y_2;
        t = t_94(t);
        j_11 = t;
        t = term_y_2;
        t = t_94(t);
        m_11 = t;
        t = term_y_2;
        t = t_94(t);
        o_11 = t;
        t = term_y_2;
        t = t_94(t);
        s_11 = t;
        t = term_y_2;
        t = t_94(t);
        w_11 = t;
        t = term_y_2;
        t = t_94(t);
        a_12 = t;
        t = term_y_2;
        t = t_94(t);
        c_12 = t;
        t = (ATerm) ATinsert(CheckATermList(k_10), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, m_11))), (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, j_11))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, o_11)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_i_8))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, a_12)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, c_12)), term_a_5), (ATerm) ATinsert(ATempty, h_10))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, s_11)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, w_11)), term_a_5), (ATerm) ATinsert(ATempty, z_9)))));
        t = d_12(t);
      }
    return(t);
  }
  t = d_12(t);
  return(t);
}
ATerm unflatten_list_0_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,z_12 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      z_12 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_12;
  if(match_cons(t, sym_list_1))
    {
      c_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13;
  if(match_cons(t, sym_iter_1))
    {
      d_13 = ATgetArgument(t, 0);
      {
        static ATerm h_0 (ATerm t);
        static ATerm h_0 (ATerm t)
        {
          t = d_13;
          return(t);
        }
        t = f_13;
        t = MkLexConsList_1_0(h_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          d_13 = ATgetArgument(t, 0);
          t = f_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_12 = ATgetFirst((ATermList) t);
              x_12 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm p_13 = NULL;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_iter_1, d_13)), (ATerm) ATinsert(CheckATermList(x_12), w_12));
                t = unflatten_list_0_0(t);
                p_13 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, d_13))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, d_13)), term_a_5), (ATerm) ATinsert(ATempty, p_13));
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, d_13)), term_a_5), (ATerm) ATempty);
            }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              d_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_13;
          if(match_cons(t, sym_iter_sep_2))
            {
              e_13 = ATgetArgument(t, 0);
              v_12 = ATgetArgument(t, 1);
              {
                static ATerm i_0 (ATerm t);
                static ATerm m_0 (ATerm t);
                static ATerm i_0 (ATerm t)
                {
                  t = e_13;
                  return(t);
                }
                static ATerm m_0 (ATerm t)
                {
                  t = v_12;
                  return(t);
                }
                t = f_13;
                t = MkCfConsList_2_0(i_0, m_0, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  e_13 = ATgetArgument(t, 0);
                  v_12 = ATgetArgument(t, 1);
                  t = f_13;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_12 = ATgetFirst((ATermList) t);
                      x_12 = (ATerm) ATgetNext((ATermList) t);
                      {
                        ATerm f_14 = NULL;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, e_13, v_12))), (ATerm) ATinsert(CheckATermList(x_12), w_12));
                        t = unflatten_list_0_0(t);
                        f_14 = t;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, e_13, v_12))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, e_13, v_12)), term_a_5), (ATerm) ATinsert(ATempty, f_14));
                      }
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, e_13, v_12)), term_a_5), (ATerm) ATempty);
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      e_13 = ATgetArgument(t, 0);
                      {
                        static ATerm u_0 (ATerm t);
                        static ATerm u_0 (ATerm t)
                        {
                          t = e_13;
                          return(t);
                        }
                        t = f_13;
                        t = MkCfConsList_1_0(u_0, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          e_13 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = f_13;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          w_12 = ATgetFirst((ATermList) t);
                          x_12 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm y_14 = NULL;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, e_13))), (ATerm) ATinsert(CheckATermList(x_12), w_12));
                            t = unflatten_list_0_0(t);
                            y_14 = t;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, e_13))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, e_13)), term_a_5), (ATerm) ATinsert(ATempty, y_14));
                          }
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, e_13)), term_a_5), (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm list_some_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  static ATerm h_16 (ATerm t);
  static ATerm h_16 (ATerm t)
  {
    ATerm m_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,x_9 = NULL;
        h_15 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_15 = ATgetFirst((ATermList) t);
            f_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_15);
        b_15 = t;
        t = e_15;
        t = c_105(t);
        g_15 = t;
        t = (ATerm) ATinsert(CheckATermList(f_15), g_15);
        x_9 = t;
        t = SSLsetAnnotations(x_9, b_15);
        LocalPopChoice(n_8);
        {
          ATerm i_15 = NULL,j_15 = NULL,m_15 = NULL,n_15 = NULL,p_15 = NULL,a_10 = NULL;
          p_15 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_15 = ATgetFirst((ATermList) t);
              m_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_15);
          i_15 = t;
          t = m_15;
          {
            static ATerm z_0 (ATerm t);
            static ATerm z_0 (ATerm t)
            {
              ATerm p_8 = t;
              int q_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_105(t);
                  LocalPopChoice(q_8);
                }
              else
                {
                  t = p_8;
                }
              return(t);
            }
            t = map_1_0(z_0, t);
          }
          n_15 = t;
          t = (ATerm) ATinsert(CheckATermList(n_15), j_15);
          a_10 = t;
          t = SSLsetAnnotations(a_10, i_15);
        }
      }
    else
      {
        t = m_8;
        {
          ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,d_16 = NULL,g_16 = NULL,b_10 = NULL;
          g_16 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_15 = ATgetFirst((ATermList) t);
              u_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_16);
          s_15 = t;
          t = u_15;
          t = h_16(t);
          d_16 = t;
          t = (ATerm) ATinsert(CheckATermList(d_16), t_15);
          b_10 = t;
          t = SSLsetAnnotations(b_10, s_15);
        }
      }
    return(t);
  }
  t = h_16(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      l_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_explode_string(l_16);
  k_16 = t;
  t = map_1_0(f_1, t);
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, j_16, (ATerm)ATmakeAppl(sym_lit_1, l_16), term_a_5), k_16);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm m_16 = NULL;
  m_16 = t;
  t = (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, m_16));
  return(t);
}
static ATerm q_5 (ATerm p_18, ATerm q_18, ATerm t)
{
  ATerm i_16 = NULL;
  t = q_18;
  t = list_some_1_0(c_1, t);
  i_16 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, p_18, i_16);
  return(t);
}
ATerm bottomup_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  static ATerm g_1 (ATerm t);
  static ATerm g_1 (ATerm t)
  {
    t = bottomup_1_0(m_98, t);
    return(t);
  }
  t = SRTS_all(g_1, t);
  t = m_98(t);
  return(t);
}
static ATerm s_5 (ATerm v_49, ATerm w_49, ATerm t)
{
  ATerm q_16 = NULL;
  t = SSL_fputc(v_49, w_49);
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_16);
  return(t);
}
static ATerm t_5 (ATerm a_34, ATerm b_34, ATerm t)
{
  ATerm r_16 = NULL;
  t = SSL_write_term_to_stream_text(a_34, b_34);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_16);
  return(t);
}
static ATerm v_5 (ATerm o_104 (ATerm), ATerm o_258, ATerm g_34, ATerm t)
{
  ATerm t_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_258, term_r_8);
  t = z_5(t);
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_16, g_34);
  t = o_104(t);
  t = fclose_0_0(t);
  t = g_34;
  return(t);
}
static ATerm u_5 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm v_16 = NULL;
  t = SSL_write_term_to_stream_baf(w_33, x_33);
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_16);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_8 = ATgetArgument(t, 0);
      if(match_cons(s_8, sym_Stream_1))
        {
          n_1 = ATgetArgument(s_8, 0);
        }
      else
        _fail(t);
      o_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(n_1, o_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_8 = ATgetArgument(t, 0);
      if(match_cons(t_8, sym_Stream_1))
        {
          q_2 = ATgetArgument(t_8, 0);
        }
      else
        _fail(t);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(q_2, r_2, t);
  n_2 = t;
  t = term_u_8;
  o_2 = t;
  t = n_2;
  if(match_cons(t, sym_Stream_1))
    {
      p_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, n_2);
  t = s_5(o_2, p_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,l_21 = NULL,s_21 = NULL,i_10 = NULL,f_10 = NULL;
  i_17 = t;
  if(match_cons(t, sym__2))
    {
      s_17 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_17);
  r_17 = t;
  t = s_17;
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_1 (ATerm t);
        static ATerm h_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((h_17 != NULL) && (h_17 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(h_1, t);
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        t = term_d_9;
        h_17 = t;
      }
  }
  u_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_17, t_17);
  f_10 = t;
  t = SSLsetAnnotations(f_10, r_17);
  t = i_17;
  if(match_cons(t, sym__2))
    {
      k_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_17);
  j_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_17, (ATerm) ATmakeAppl(sym__2, not_null(h_17), l_17));
  i_10 = t;
  t = SSLsetAnnotations(i_10, j_17);
  q_17 = t;
  if(match_cons(t, sym__2))
    {
      l_21 = ATgetArgument(t, 0);
      s_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,j_10 = NULL;
        t = SSLgetAnnotations(q_17);
        k_0 = t;
        t = l_21;
        t = fetch_1_0(i_1, t);
        v_0 = t;
        t = s_21;
        if(match_cons(t, sym__2))
          {
            x_0 = ATgetArgument(t, 0);
            y_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_5(j_1, x_0, y_0, t);
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_0, w_0);
        j_10 = t;
        t = SSLsetAnnotations(j_10, k_0);
        LocalPopChoice(j_9);
      }
    else
      {
        t = e_9;
        {
          ATerm g_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,o_10 = NULL;
          t = SSLgetAnnotations(q_17);
          g_2 = t;
          t = s_21;
          if(match_cons(t, sym__2))
            {
              l_2 = ATgetArgument(t, 0);
              m_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_5(k_1, l_2, m_2, t);
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_21, k_2);
          o_10 = t;
          t = SSLsetAnnotations(o_10, g_2);
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
ATerm apply_strategy_1_0 (ATerm m_122 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,c_22 = NULL,f_22 = NULL,g_22 = NULL,j_22 = NULL;
  j_22 = t;
  t = dtime_0_0(t);
  t = j_22;
  t = m_122(t);
  g_22 = t;
  t = dtime_0_0(t);
  z_21 = t;
  t = g_22;
  if(match_cons(t, sym__2))
    {
      c_22 = ATgetArgument(t, 0);
      f_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_22), (ATerm) ATmakeAppl(sym_Runtime_1, z_21)), f_22);
  return(t);
}
static ATerm h_23 (ATerm x_22, ATerm t)
{
  t = SSL_fclose(x_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL;
  e_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_23 = ATgetArgument(t, 0);
      {
        ATerm o_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_23);
            LocalPopChoice(p_9);
          }
        else
          {
            t = o_9;
            t = h_23(e_23, t);
          }
      }
    }
  else
    {
      t = h_23(e_23, t);
    }
  return(t);
}
static ATerm w_5 (ATerm c_34, ATerm t)
{
  t = SSL_read_term_from_stream(c_34);
  return(t);
}
static ATerm x_5 (ATerm z_47, ATerm a_48, ATerm t)
{
  t = SSL_strcat(z_47, a_48);
  return(t);
}
static ATerm y_5 (ATerm x_49, ATerm y_49, ATerm t)
{
  ATerm k_23 = NULL;
  t = SSL_fopen(x_49, y_49);
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_23);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_23 = NULL;
  t = SSL_stdin_stream();
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_23 = NULL;
  t = SSL_stdout_stream();
  m_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_23 = NULL;
  t = SSL_stderr_stream();
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_23);
  return(t);
}
static ATerm n_25 (ATerm d_24, ATerm t)
{
  ATerm e_24 = NULL;
  t = SSL_explode_term(d_24);
  if(match_cons(t, sym__2))
    {
      ATerm q_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_9 = ATgetArgument(t, 1);
        if(((ATgetType(u_9) == AT_LIST) && !(ATisEmpty(u_9))))
          {
            e_24 = ATgetFirst((ATermList) u_9);
            {
              ATerm w_9 = (ATerm) ATgetNext((ATermList) u_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_24;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_24;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_24;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_24;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_25 (ATerm l_24, ATerm m_24, ATerm p_24, ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,u_24 = NULL,y_24 = NULL,w_10 = NULL;
  t = SSLgetAnnotations(p_24);
  u_24 = t;
  t = l_24;
  if(match_cons(t, sym_Path_1))
    {
      y_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_24, m_24);
  w_10 = t;
  t = SSLsetAnnotations(w_10, u_24);
  if(match_cons(t, sym__2))
    {
      q_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(q_24, r_24, t);
  return(t);
}
static ATerm r_25 (ATerm a_25, ATerm b_25, ATerm c_25, ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,i_25 = NULL,y_10 = NULL;
  t = SSLgetAnnotations(c_25);
  f_25 = t;
  t = SSL_is_string(a_25);
  i_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_25, b_25);
  y_10 = t;
  t = SSLsetAnnotations(y_10, f_25);
  if(match_cons(t, sym__2))
    {
      d_25 = ATgetArgument(t, 0);
      e_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(d_25, e_25, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
  k_25 = t;
  if(match_cons(t, sym__2))
    {
      l_25 = ATgetArgument(t, 0);
      m_25 = ATgetArgument(t, 1);
      {
        ATerm y_9 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_25(k_25, t);
            LocalPopChoice(c_10);
          }
        else
          {
            t = y_9;
            {
              ATerm d_10 = t;
              int e_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_25(l_25, m_25, k_25, t);
                  LocalPopChoice(e_10);
                }
              else
                {
                  t = d_10;
                  t = r_25(l_25, m_25, k_25, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_25(k_25, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,b_26 = NULL;
  b_26 = t;
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_26, term_n_10);
        t = z_5(t);
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        {
          ATerm h_3 = NULL,n_3 = NULL;
          t = term_p_10;
          n_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_10, b_26);
          t = x_5(n_3, b_26, t);
          h_3 = t;
          t = SSL_perror(h_3);
          _fail(t);
        }
      }
  }
  v_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_5(w_25, t);
  u_25 = t;
  t = v_25;
  t = fclose_0_0(t);
  t = u_25;
  return(t);
}
ATerm fetch_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  static ATerm a_27 (ATerm t);
  static ATerm a_27 (ATerm t)
  {
    ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
    x_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_26 = ATgetFirst((ATermList) t);
        z_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_10 = t;
      int r_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_4 = NULL,j_4 = NULL,b_11 = NULL;
          t = SSLgetAnnotations(x_26);
          a_4 = t;
          t = y_26;
          t = h_105(t);
          j_4 = t;
          t = (ATerm) ATinsert(CheckATermList(z_26), j_4);
          b_11 = t;
          t = SSLsetAnnotations(b_11, a_4);
          LocalPopChoice(r_10);
        }
      else
        {
          t = q_10;
          {
            ATerm z_4 = NULL,d_5 = NULL,c_11 = NULL;
            t = SSLgetAnnotations(x_26);
            z_4 = t;
            t = z_26;
            t = a_27(t);
            d_5 = t;
            t = (ATerm) ATinsert(CheckATermList(d_5), y_26);
            c_11 = t;
            t = SSLsetAnnotations(c_11, z_4);
          }
        }
    }
    return(t);
  }
  t = a_27(t);
  return(t);
}
static ATerm e_6 (ATerm u_56, ATerm v_56, ATerm t)
{
  ATerm d_27 = NULL;
  t = lookup_table_0_1(u_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(v_56, d_27, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_120 (ATerm), ATerm t)
{
  ATerm g_27 = NULL;
  g_27 = t;
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
        t = term_x_10;
        j_27 = t;
        t = term_z_10;
        k_27 = t;
        t = term_a_11;
        t = e_6(j_27, k_27, t);
        i_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_27, term_d_11);
        t = geq_0_0(t);
        t = g_27;
        t = v_120(t);
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        t = g_27;
      }
  }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm n_27 = NULL;
  n_27 = t;
  if(match_string(t, "-k"))
    {
      t = n_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_27;
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
  o_27 = t;
  t = SSL_string_to_int(o_27);
  p_27 = t;
  t = term_e_11;
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, p_27);
  t = h_6(q_27, p_27, t);
  t = o_27;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_1, m_1, p_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm s_27 = NULL;
  s_27 = t;
  if(match_string(t, "-S"))
    {
      t = s_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_27;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL;
  t = term_z_10;
  t_27 = t;
  t = term_b_5;
  u_27 = t;
  t = term_g_11;
  t = h_6(t_27, u_27, t);
  t = term_h_11;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_k_11;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
  v_27 = t;
  t = SSL_string_to_int(v_27);
  w_27 = t;
  t = term_z_10;
  x_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_10, w_27);
  t = h_6(x_27, w_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_27);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_n_11;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL;
  t = term_q_11;
  y_27 = t;
  t = term_y_2;
  z_27 = t;
  t = term_t_11;
  t = h_6(y_27, z_27, t);
  t = term_v_11;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_1, v_1, w_1, t);
      LocalPopChoice(e_12);
    }
  else
    {
      t = b_12;
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_1, y_1, z_1, t);
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            t = Option_3_0(a_2, b_2, c_2, t);
          }
      }
    }
  return(t);
}
static ATerm h_6 (ATerm p_68, ATerm q_68, ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL;
  t = term_x_10;
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_10, p_68, q_68);
  t = lookup_table_0_1(a_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(p_68, q_68, b_28, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_10, p_68, q_68);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
      t = term_y_2;
      t = g_0(t);
      h_28 = t;
      t = term_h_12;
      i_28 = t;
      t = term_i_12;
      j_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_12, term_i_12, h_28);
      t = f_6(i_28, j_28, h_28, t);
      _fail(t);
    }
  else
    {
      ATerm m_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_28 = ATgetFirst((ATermList) t);
          g_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_28;
      t = d_0(t);
      t = term_y_2;
      t = f_0(t);
      m_28 = t;
      t = (ATerm) ATinsert(CheckATermList(g_28), m_28);
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  if(match_string(t, "-o"))
    {
      t = o_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_28;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL;
  p_28 = t;
  t = term_j_12;
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_12, p_28);
  t = h_6(q_28, p_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_28);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_k_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_2, e_2, f_2, t);
  return(t);
}
static ATerm f_6 (ATerm b_55, ATerm c_55, ATerm a_55, ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_55, c_55);
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_12 = ATgetArgument(t, 0);
            ATerm o_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_55, c_55);
        t = e_6(b_55, c_55, t);
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        t = (ATerm) ATempty;
      }
  }
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_55, c_55, (ATerm) ATinsert(CheckATermList(t_28), a_55));
  t = lookup_table_0_1(b_55, t);
  w_28 = t;
  t = (ATerm) ATinsert(CheckATermList(t_28), a_55);
  u_28 = t;
  t = w_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(c_55, u_28, v_28, t);
  t = s_28;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
      t = term_y_2;
      t = q_0(t);
      h_29 = t;
      t = term_h_12;
      i_29 = t;
      t = term_i_12;
      j_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_12, term_i_12, h_29);
      t = f_6(i_29, j_29, h_29, t);
      _fail(t);
    }
  else
    {
      ATerm n_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_29 = ATgetFirst((ATermList) t);
          e_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_29 = ATgetFirst((ATermList) t);
          g_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_29;
      t = o_0(t);
      t = f_29;
      t = p_0(t);
      n_29 = t;
      t = (ATerm) ATinsert(CheckATermList(g_29), n_29);
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm p_29 = NULL;
  p_29 = t;
  if(match_string(t, "-i"))
    {
      t = p_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_29;
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL;
  q_29 = t;
  t = term_p_12;
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_12, q_29);
  t = h_6(r_29, q_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_29);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_q_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_2, i_2, s_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_2;
  t = whoami_0_0(t);
  s_29 = t;
  t = term_s_4;
  u_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_12), s_29);
  v_29 = t;
  t = SSL_printnl(u_29, v_29);
  t = term_y_4;
  t_29 = t;
  t = SSL_exit(t_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL;
  t = term_x_10;
  w_29 = t;
  t = term_s_12;
  x_29 = t;
  t = term_t_12;
  t = e_6(w_29, x_29, t);
  return(t);
}
static ATerm a_6 (ATerm k_53, ATerm l_53, ATerm t)
{
  ATerm u_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_53, l_53);
      LocalPopChoice(y_12);
    }
  else
    {
      t = u_12;
      t = SSL_addr(k_53, l_53);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
  z_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_29;
      t = w_111(t);
    }
  else
    {
      ATerm e_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_30 = ATgetFirst((ATermList) t);
          b_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_30;
      t = foldr_2_0(w_111, x_111, t);
      e_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_30, e_30);
      t = x_111(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_b_5;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL;
  if(match_cons(t, sym__2))
    {
      m_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(m_5, n_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_30 = NULL,i_5 = NULL,j_5 = NULL;
  t = times_0_0(t);
  j_5 = t;
  t = SSL_explode_term(j_5);
  if(match_cons(t, sym__2))
    {
      ATerm a_13 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5;
  t = foldr_2_0(t_2, u_2, t);
  h_30 = t;
  t = SSL_TicksToSeconds(h_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
  s_30 = t;
  if(match_cons(t, sym__2))
    {
      t_30 = ATgetArgument(t, 0);
      u_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_30;
        if((t_30 != t))
          {
            _fail(t);
          }
        t = s_30;
        LocalPopChoice(g_13);
      }
    else
      {
        t = b_13;
        t = (ATerm) ATmakeAppl(sym__2, t_30, u_30);
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_30, u_30);
              LocalPopChoice(i_13);
            }
          else
            {
              t = h_13;
              t = SSL_gtr(t_30, u_30);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_30, u_30);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_120 (ATerm), ATerm t)
{
  ATerm y_30 = NULL;
  y_30 = t;
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
        t = term_x_10;
        b_31 = t;
        t = term_z_10;
        c_31 = t;
        t = term_a_11;
        t = e_6(b_31, c_31, t);
        a_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_31, term_y_4);
        t = geq_0_0(t);
        t = y_30;
        t = u_120(t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        t = y_30;
      }
  }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,h_31 = NULL,i_31 = NULL;
  t = run_time_0_0(t);
  e_31 = t;
  t = term_y_2;
  t = whoami_0_0(t);
  f_31 = t;
  t = term_s_4;
  h_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_13), e_31), term_l_13), f_31);
  i_31 = t;
  t = SSL_printnl(h_31, i_31);
  t = (ATerm) ATmakeAppl(sym__2, term_s_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_13), e_31), term_l_13), f_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_5;
  j_31 = t;
  t = SSL_exit(j_31);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL;
  u_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_31 = ATgetArgument(t, 0);
          {
            ATerm e_7 = NULL,i_11 = NULL;
            t = SSLgetAnnotations(u_31);
            e_7 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_31);
            i_11 = t;
            t = SSLsetAnnotations(i_11, e_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_123 (ATerm), ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_31 = NULL,n_31 = NULL;
      t = term_x_10;
      m_31 = t;
      t = term_q_13;
      n_31 = t;
      t = term_r_13;
      t = e_6(m_31, n_31, t);
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      t = fetch_1_0(x_2, t);
    }
  t = k_123(t);
  return(t);
}
static ATerm i_6 (ATerm t_59, ATerm u_59, ATerm v_59, ATerm t)
{
  ATerm w_31 = NULL;
  t = SSL_hashtable_put(v_59, t_59, u_59);
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_31);
  return(t);
}
static ATerm j_6 (ATerm w_59, ATerm x_59, ATerm t)
{
  t = SSL_hashtable_get(x_59, w_59);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_56, ATerm t)
{
  ATerm f_32 = NULL;
  t = table_hashtable_0_0(t);
  f_32 = t;
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_7 = NULL;
        t = f_32;
        if(match_cons(t, sym_Hashtable_1))
          {
            r_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_6(n_56, r_7, t);
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        {
          ATerm a_8 = NULL;
          t = n_56;
          t = table_create_0_0(t);
          t = f_32;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_6(n_56, a_8, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm b_60, ATerm c_60, ATerm t)
{
  ATerm i_32 = NULL;
  t = SSL_hashtable_create(b_60, c_60);
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_32);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,n_32 = NULL,o_32 = NULL;
  j_32 = t;
  t = term_u_13;
  n_32 = t;
  t = term_v_13;
  o_32 = t;
  t = j_32;
  t = new_hashtable_0_2(n_32, o_32, t);
  k_32 = t;
  t = j_32;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(j_32, k_32, l_32, t);
  t = j_32;
  return(t);
}
static ATerm c_6 (ATerm y_59, ATerm z_59, ATerm t)
{
  ATerm p_32 = NULL;
  t = SSL_hashtable_remove(z_59, y_59);
  p_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_32);
  return(t);
}
static ATerm d_6 (ATerm d_60, ATerm t)
{
  ATerm q_32 = NULL;
  t = SSL_hashtable_destroy(d_60);
  q_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_32);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm r_32 = NULL;
  t = SSL_table_hashtable();
  r_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_32);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL;
  s_32 = t;
  t = table_hashtable_0_0(t);
  t_32 = t;
  t = lookup_table_0_1(s_32, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(v_32, t);
  t = t_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(s_32, u_32, t);
  t = s_32;
  return(t);
}
ATerm map_1_0 (ATerm x_104 (ATerm), ATerm t)
{
  static ATerm k_33 (ATerm t);
  static ATerm k_33 (ATerm t)
  {
    ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
    h_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_33;
      }
    else
      {
        ATerm f_8 = NULL,l_8 = NULL,o_8 = NULL,l_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_33 = ATgetFirst((ATermList) t);
            j_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_33);
        f_8 = t;
        t = i_33;
        t = x_104(t);
        l_8 = t;
        t = j_33;
        t = k_33(t);
        o_8 = t;
        t = (ATerm) ATinsert(CheckATermList(o_8), l_8);
        l_11 = t;
        t = SSLsetAnnotations(l_11, f_8);
      }
    return(t);
  }
  t = k_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_33 = ATgetFirst((ATermList) t);
      o_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_33 = NULL,t_33 = NULL;
        static ATerm a_3 (ATerm t);
        static ATerm a_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_33)), not_null(t_33));
          return(t);
        }
        t = o_33;
        t = l_0(t);
        if(((s_33 != NULL) && (s_33 != t)))
          _fail(t);
        else
          s_33 = t;
        t = n_33;
        t = j_0(t);
        if(((t_33 != NULL) && (t_33 != t)))
          _fail(t);
        else
          t_33 = t;
        t = o_33;
        t = reverse_acc_2_0(j_0, a_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_2;
      t = l_0(t);
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm p_34 = NULL;
  p_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_34), term_w_13);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_33 = NULL,d_34 = NULL,e_34 = NULL;
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_34 = NULL,i_34 = NULL;
      t = term_x_10;
      h_34 = t;
      t = term_s_12;
      i_34 = t;
      t = term_t_12;
      t = e_6(h_34, i_34, t);
      z_33 = t;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        static ATerm b_3 (ATerm t);
        static ATerm b_3 (ATerm t)
        {
          ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,p_11 = NULL;
          l_34 = t;
          if(match_cons(t, sym_Program_1))
            {
              k_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_34);
          j_34 = t;
          t = k_34;
          if(((z_33 != NULL) && (z_33 != t)))
            _fail(t);
          else
            z_33 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, k_34);
          p_11 = t;
          t = SSLsetAnnotations(p_11, j_34);
          return(t);
        }
        t = fetch_1_0(b_3, t);
      }
    }
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_14), not_null(z_33)), term_b_14);
        t = echo_0_0(t);
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
      }
  }
  t = term_d_14;
  t = echo_0_0(t);
  t = term_h_12;
  d_34 = t;
  t = term_i_12;
  e_34 = t;
  t = term_e_14;
  t = e_6(d_34, e_34, t);
  t = reverse_acc_2_0(_id, c_3, t);
  t = map_1_0(d_3, t);
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_14), term_l_14), term_k_14), term_j_14), term_i_14);
        t = echo_0_0(t);
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_14 = ATgetFirst((ATermList) t);
                ATerm q_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_34;
          }
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        t = (ATerm) ATinsert(ATempty, t_34);
      }
  }
  u_34 = t;
  t = term_d_9;
  v_34 = t;
  t = SSL_printnl(v_34, u_34);
  t = t_34;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL;
  t = term_x_10;
  z_34 = t;
  t = term_s_12;
  a_35 = t;
  t = term_t_12;
  t = e_6(z_34, a_35, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL;
  t = term_r_14;
  b_35 = t;
  t = term_y_2;
  c_35 = t;
  t = term_s_14;
  t = h_6(b_35, c_35, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_t_14;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
  t = term_r_14;
  f_35 = t;
  t = term_y_2;
  g_35 = t;
  t = term_s_14;
  t = h_6(f_35, g_35, t);
  t = term_u_14;
  d_35 = t;
  t = term_y_2;
  e_35 = t;
  t = term_v_14;
  t = h_6(d_35, e_35, t);
  t = term_w_14;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_3, j_3, o_3, t);
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      t = Option_3_0(v_3, w_3, x_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,r_11 = NULL;
  o_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_35 = ATgetFirst((ATermList) t);
      j_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_35);
  h_35 = t;
  t = i_35;
  t = y_78(t);
  m_35 = t;
  t = j_35;
  t = z_78(t);
  n_35 = t;
  t = (ATerm) ATinsert(CheckATermList(n_35), m_35);
  r_11 = t;
  t = SSLsetAnnotations(r_11, h_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_125 (ATerm), ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,y_35 = NULL,z_35 = NULL,u_11 = NULL;
  t_35 = t;
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_15;
        t = i_125(t);
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
      }
  }
  t = t_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_35 = ATgetFirst((ATermList) t);
      w_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_35);
  u_35 = t;
  t = term_s_12;
  z_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_12, v_35);
  t = h_6(z_35, v_35, t);
  t = w_35;
  {
    static ATerm j_36 (ATerm t);
    static ATerm j_36 (ATerm t)
    {
      ATerm l_15 = t;
      int o_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_15 = t;
          int r_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_36 = NULL;
              c_36 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_36;
              LocalPopChoice(r_15);
            }
          else
            {
              t = q_15;
              t = i_125(t);
              t = Cons_2_0(_id, j_36, t);
            }
          LocalPopChoice(o_15);
        }
      else
        {
          t = l_15;
          {
            ATerm f_36 = NULL,g_36 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_36 = ATgetFirst((ATermList) t);
                g_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_36), (ATerm) ATmakeAppl(sym_Undefined_1, f_36));
          }
        }
      return(t);
    }
    t = j_36(t);
  }
  y_35 = t;
  t = (ATerm) ATinsert(CheckATermList(y_35), (ATerm) ATmakeAppl(sym_Program_1, v_35));
  u_11 = t;
  t = SSLsetAnnotations(u_11, u_35);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  if(match_string(t, "--help"))
    {
      t = w_36;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_36;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_36;
        }
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  t = term_q_13;
  x_36 = t;
  t = term_y_2;
  y_36 = t;
  t = term_v_15;
  t = h_6(x_36, y_36, t);
  t = term_w_15;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_x_15;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_125 (ATerm), ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL;
  q_36 = t;
  t = term_h_12;
  r_36 = t;
  t = term_y_15;
  t = lookup_table_0_1(r_36, t);
  v_36 = t;
  t = term_i_12;
  s_36 = t;
  t = (ATerm) ATempty;
  t_36 = t;
  t = v_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(s_36, t_36, u_36, t);
  t = q_36;
  {
    static ATerm y_3 (ATerm t);
    static ATerm y_3 (ATerm t)
    {
      ATerm z_15 = t;
      int a_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_125(t);
          LocalPopChoice(a_16);
        }
      else
        {
          t = z_15;
          {
            ATerm b_16 = t;
            int c_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_3, b_4, c_4, t);
                LocalPopChoice(c_16);
              }
            else
              {
                t = b_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_3, t);
  }
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_37 = NULL;
        j_37 = t;
        {
          ATerm n_16 = t;
          int o_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_9 = NULL;
              t = j_37;
              {
                ATerm p_16 = t;
                int s_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_9 = NULL,n_9 = NULL;
                    t = term_x_10;
                    m_9 = t;
                    t = term_q_13;
                    n_9 = t;
                    t = term_r_13;
                    t = e_6(m_9, n_9, t);
                    LocalPopChoice(s_16);
                  }
                else
                  {
                    t = p_16;
                    t = fetch_1_0(d_4, t);
                  }
              }
              t = j_37;
              t = default_system_usage_0_0(t);
              t = term_b_5;
              l_9 = t;
              t = SSL_exit(l_9);
              LocalPopChoice(o_16);
            }
          else
            {
              t = n_16;
              {
                ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
                t = term_x_10;
                s_9 = t;
                t = term_r_14;
                t_9 = t;
                t = term_u_16;
                t = e_6(s_9, t_9, t);
                t = j_37;
                t = default_system_about_0_0(t);
                t = term_b_5;
                r_9 = t;
                t = SSL_exit(r_9);
              }
            }
        }
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        {
          ATerm w_16 = t;
          int x_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
              static ATerm e_4 (ATerm t);
              static ATerm e_4 (ATerm t)
              {
                ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,x_11 = NULL;
                p_37 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_37 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_37);
                n_37 = t;
                t = o_37;
                if(((o_36 != NULL) && (o_36 != t)))
                  _fail(t);
                else
                  o_36 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_37);
                x_11 = t;
                t = SSLsetAnnotations(x_11, n_37);
                return(t);
              }
              t = fetch_1_0(e_4, t);
              t = term_s_4;
              l_37 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_36)), term_y_16);
              m_37 = t;
              t = SSL_printnl(l_37, m_37);
              t = (ATerm) ATmakeAppl(sym__2, term_s_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_36)), term_y_16));
              t = default_system_usage_0_0(t);
              t = term_y_4;
              k_37 = t;
              t = SSL_exit(k_37);
              LocalPopChoice(x_16);
            }
          else
            {
              t = w_16;
            }
        }
      }
  }
  p_36 = t;
  t = term_h_12;
  t = table_destroy_0_0(t);
  t = p_36;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm p_123 (ATerm), ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
  t = parse_options_1_0(m_123, t);
  u_37 = t;
  t = term_z_16;
  t = table_create_0_0(t);
  t = term_z_16;
  v_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_16, term_a_17, u_37);
  t = lookup_table_0_1(v_37, t);
  y_37 = t;
  t = term_a_17;
  w_37 = t;
  t = y_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(w_37, u_37, x_37, t);
  t = u_37;
  t = o_123(t);
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_123, t);
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        {
          ATerm d_17 = t;
          int e_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_123(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_17);
            }
          else
            {
              t = d_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = if_verbose2_1_0(m_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL;
  t = term_f_17;
  z_37 = t;
  t = term_y_2;
  a_38 = t;
  t = term_g_17;
  t = h_6(z_37, a_38, t);
  t = term_m_17;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_n_17;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
  b_38 = t;
  t = term_x_10;
  f_38 = t;
  t = term_s_12;
  g_38 = t;
  t = term_t_12;
  t = e_6(f_38, g_38, t);
  c_38 = t;
  t = term_s_4;
  d_38 = t;
  t = (ATerm) ATinsert(ATempty, c_38);
  e_38 = t;
  t = SSL_printnl(d_38, e_38);
  t = b_38;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_122 (ATerm), ATerm w_122 (ATerm), ATerm x_122 (ATerm), ATerm t)
{
  static ATerm f_4 (ATerm t);
  static ATerm h_4 (ATerm t);
  static ATerm f_4 (ATerm t)
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_122(t);
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        {
          ATerm v_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(w_17);
            }
          else
            {
              t = v_17;
              {
                ATerm x_17 = t;
                int y_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(y_17);
                  }
                else
                  {
                    t = x_17;
                    {
                      ATerm z_17 = t;
                      int a_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(i_4, k_4, l_4, t);
                          LocalPopChoice(a_18);
                        }
                      else
                        {
                          t = z_17;
                          {
                            ATerm b_18 = t;
                            int c_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(c_18);
                              }
                            else
                              {
                                t = b_18;
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
  static ATerm h_4 (ATerm t)
  {
    ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
    i_38 = t;
    {
      ATerm d_18 = t;
      int e_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm n_4 (ATerm t);
          static ATerm n_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((h_38 != NULL) && (h_38 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_38 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_4, t);
          LocalPopChoice(e_18);
        }
      else
        {
          t = d_18;
          t = term_f_18;
          h_38 = t;
        }
    }
    t = not_null(h_38);
    t = ReadFromFile_0_0(t);
    j_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_38, j_38);
    t = apply_strategy_1_0(v_122, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(f_4, x_122, g_4, h_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,z_11 = NULL;
  j_39 = t;
  if(match_cons(t, sym__2))
    {
      g_39 = ATgetArgument(t, 0);
      h_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_39);
  f_39 = t;
  t = h_39;
  t = bottomup_1_0(r_4, t);
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_39, i_39);
  z_11 = t;
  t = SSLsetAnnotations(z_11, f_39);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL;
  m_39 = t;
  if(match_cons(t, sym_appl_2))
    {
      k_39 = ATgetArgument(t, 0);
      l_39 = ATgetArgument(t, 1);
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_39;
            t = q_5(k_39, l_39, t);
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            t = m_39;
          }
      }
    }
  else
    {
      t = m_39;
    }
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = unflatten_list_0_0(t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
      }
  }
  d_40 = t;
  if(match_cons(t, sym_appl_2))
    {
      t_39 = ATgetArgument(t, 0);
      c_40 = ATgetArgument(t, 1);
      t = t_39;
      if(match_cons(t, sym_prod_3))
        {
          u_39 = ATgetArgument(t, 0);
          y_39 = ATgetArgument(t, 1);
          b_40 = ATgetArgument(t, 2);
          t = b_40;
          if(match_cons(t, sym_no_attrs_0))
            {
              t = y_39;
              if(match_cons(t, sym_cf_1))
                {
                  z_39 = ATgetArgument(t, 0);
                  t = z_39;
                  if(match_cons(t, sym_opt_1))
                    {
                      a_40 = ATgetArgument(t, 0);
                      t = a_40;
                      if(match_cons(t, sym_layout_0))
                        {
                          t = u_39;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              v_39 = ATgetFirst((ATermList) t);
                              x_39 = (ATerm) ATgetNext((ATermList) t);
                              t = x_39;
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = v_39;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      w_39 = ATgetArgument(t, 0);
                                      t = w_39;
                                      if(match_cons(t, sym_layout_0))
                                        {
                                          ATerm k_18 = t;
                                          int l_18 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = d_40;
                                              t = p_5(c_40, t);
                                              LocalPopChoice(l_18);
                                            }
                                          else
                                            {
                                              t = k_18;
                                              t = d_40;
                                            }
                                        }
                                      else
                                        {
                                          t = d_40;
                                        }
                                    }
                                  else
                                    {
                                      t = d_40;
                                    }
                                }
                              else
                                {
                                  t = d_40;
                                }
                            }
                          else
                            {
                              t = d_40;
                            }
                        }
                      else
                        {
                          t = d_40;
                        }
                    }
                  else
                    {
                      t = d_40;
                    }
                }
              else
                {
                  t = d_40;
                }
            }
          else
            {
              t = d_40;
            }
        }
      else
        {
          t = d_40;
        }
    }
  else
    {
      t = d_40;
    }
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = unflatten_lexical_0_0(t);
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(o_4, _fail, default_usage_0_0, t);
  return(t);
}
