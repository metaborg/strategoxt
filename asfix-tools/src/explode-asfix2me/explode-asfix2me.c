#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
ATerm MkCfConsList_1_0 (ATerm v_92 (ATerm), ATerm t);
ATerm MkCfConsList_2_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm t);
ATerm MkLexConsList_1_0 (ATerm a_93 (ATerm), ATerm t);
ATerm unflatten_list_0_0 (ATerm t);
ATerm list_some_1_0 (ATerm r_101 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm q_5 (ATerm p_18, ATerm q_18, ATerm t);
ATerm bottomup_1_0 (ATerm b_95 (ATerm), ATerm t);
static ATerm s_5 (ATerm n_38, ATerm o_38, ATerm t);
static ATerm t_5 (ATerm s_22, ATerm t_22, ATerm t);
static ATerm v_5 (ATerm d_101 (ATerm), ATerm v_187, ATerm y_22, ATerm t);
static ATerm u_5 (ATerm o_22, ATerm p_22, ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm h_120 (ATerm), ATerm t);
static ATerm n_23 (ATerm c_23, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_5 (ATerm u_22, ATerm t);
static ATerm x_5 (ATerm r_36, ATerm s_36, ATerm t);
static ATerm y_5 (ATerm p_38, ATerm q_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_25 (ATerm i_24, ATerm t);
static ATerm x_25 (ATerm q_24, ATerm t_24, ATerm u_24, ATerm t);
static ATerm y_25 (ATerm j_25, ATerm k_25, ATerm l_25, ATerm t);
static ATerm z_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_101 (ATerm), ATerm t);
static ATerm e_6 (ATerm a_56, ATerm b_56, ATerm t);
ATerm if_verbose2_1_0 (ATerm q_118 (ATerm), ATerm t);
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
static ATerm h_6 (ATerm r_64, ATerm s_64, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_6 (ATerm h_54, ATerm i_54, ATerm g_54, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_6 (ATerm i_41, ATerm j_41, ATerm t);
ATerm foldr_2_0 (ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_118 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm need_help_1_0 (ATerm f_121 (ATerm), ATerm t);
static ATerm i_6 (ATerm z_58, ATerm a_59, ATerm b_59, ATerm t);
static ATerm j_6 (ATerm c_59, ATerm d_59, ATerm t);
ATerm lookup_table_0_1 (ATerm t_55, ATerm t);
ATerm new_hashtable_0_2 (ATerm h_59, ATerm i_59, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm c_6 (ATerm e_59, ATerm f_59, ATerm t);
static ATerm d_6 (ATerm j_59, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm m_101 (ATerm), ATerm t);
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
ATerm Cons_2_0 (ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_123 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm parse_options_1_0 (ATerm h_123 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_121 (ATerm), ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm iowrap_3_0 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t);
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
ATerm MkCfConsList_1_0 (ATerm v_92 (ATerm), ATerm t)
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
        t = v_92(t);
        p_4 = t;
        t = term_y_2;
        t = v_92(t);
        q_4 = t;
        t = term_y_2;
        t = v_92(t);
        t_4 = t;
        t = term_y_2;
        t = v_92(t);
        u_4 = t;
        t = term_y_2;
        t = v_92(t);
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
  t = v_92(t);
  k_3 = t;
  t = term_y_2;
  t = v_92(t);
  l_3 = t;
  t = (ATerm) ATinsert(CheckATermList(i_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, k_3)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, l_3)), term_a_5), (ATerm) ATinsert(ATempty, g_3)));
  k_5 = t;
  t = SSLsetAnnotations(k_5, f_3);
  t = c_5(t);
  return(t);
}
ATerm MkCfConsList_2_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm t)
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
        t = x_92(t);
        x_8 = t;
        t = term_y_2;
        t = y_92(t);
        y_8 = t;
        t = term_y_2;
        t = y_92(t);
        z_8 = t;
        t = term_y_2;
        t = x_92(t);
        a_9 = t;
        t = term_y_2;
        t = y_92(t);
        b_9 = t;
        t = term_y_2;
        t = x_92(t);
        c_9 = t;
        t = term_y_2;
        t = y_92(t);
        f_9 = t;
        t = term_y_2;
        t = x_92(t);
        g_9 = t;
        t = term_y_2;
        t = x_92(t);
        h_9 = t;
        t = term_y_2;
        t = y_92(t);
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
  t = x_92(t);
  s_6 = t;
  t = term_y_2;
  t = x_92(t);
  w_6 = t;
  t = term_y_2;
  t = y_92(t);
  x_6 = t;
  t = (ATerm) ATinsert(CheckATermList(q_6), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, s_6)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, w_6, x_6)), term_a_5), (ATerm) ATinsert(ATempty, p_6)));
  v_9 = t;
  t = SSLsetAnnotations(v_9, m_6);
  t = k_9(t);
  return(t);
}
ATerm MkLexConsList_1_0 (ATerm a_93 (ATerm), ATerm t)
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
        t = a_93(t);
        s_10 = t;
        t = term_y_2;
        t = a_93(t);
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
        t = a_93(t);
        j_11 = t;
        t = term_y_2;
        t = a_93(t);
        m_11 = t;
        t = term_y_2;
        t = a_93(t);
        o_11 = t;
        t = term_y_2;
        t = a_93(t);
        s_11 = t;
        t = term_y_2;
        t = a_93(t);
        w_11 = t;
        t = term_y_2;
        t = a_93(t);
        a_12 = t;
        t = term_y_2;
        t = a_93(t);
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
ATerm list_some_1_0 (ATerm r_101 (ATerm), ATerm t)
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
        t = r_101(t);
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
                  t = r_101(t);
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
ATerm bottomup_1_0 (ATerm b_95 (ATerm), ATerm t)
{
  static ATerm g_1 (ATerm t);
  static ATerm g_1 (ATerm t)
  {
    t = bottomup_1_0(b_95, t);
    return(t);
  }
  t = SRTS_all(g_1, t);
  t = b_95(t);
  return(t);
}
static ATerm s_5 (ATerm n_38, ATerm o_38, ATerm t)
{
  ATerm q_16 = NULL;
  t = SSL_fputc(n_38, o_38);
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_16);
  return(t);
}
static ATerm t_5 (ATerm s_22, ATerm t_22, ATerm t)
{
  ATerm r_16 = NULL;
  t = SSL_write_term_to_stream_text(s_22, t_22);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_16);
  return(t);
}
static ATerm v_5 (ATerm d_101 (ATerm), ATerm v_187, ATerm y_22, ATerm t)
{
  ATerm t_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_187, term_r_8);
  t = z_5(t);
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_16, y_22);
  t = d_101(t);
  t = fclose_0_0(t);
  t = y_22;
  return(t);
}
static ATerm u_5 (ATerm o_22, ATerm p_22, ATerm t)
{
  ATerm v_16 = NULL;
  t = SSL_write_term_to_stream_baf(o_22, p_22);
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
ATerm apply_strategy_1_0 (ATerm h_120 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,c_22 = NULL,f_22 = NULL,g_22 = NULL,j_22 = NULL;
  j_22 = t;
  t = dtime_0_0(t);
  t = j_22;
  t = h_120(t);
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
static ATerm n_23 (ATerm c_23, ATerm t)
{
  t = SSL_fclose(c_23);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_23 = NULL,k_23 = NULL;
  k_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_23 = ATgetArgument(t, 0);
      {
        ATerm o_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_23);
            LocalPopChoice(p_9);
          }
        else
          {
            t = o_9;
            t = n_23(k_23, t);
          }
      }
    }
  else
    {
      t = n_23(k_23, t);
    }
  return(t);
}
static ATerm w_5 (ATerm u_22, ATerm t)
{
  t = SSL_read_term_from_stream(u_22);
  return(t);
}
static ATerm x_5 (ATerm r_36, ATerm s_36, ATerm t)
{
  t = SSL_strcat(r_36, s_36);
  return(t);
}
static ATerm y_5 (ATerm p_38, ATerm q_38, ATerm t)
{
  ATerm o_23 = NULL;
  t = SSL_fopen(p_38, q_38);
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_23);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_23 = NULL;
  t = SSL_stdin_stream();
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_23 = NULL;
  t = SSL_stdout_stream();
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_23 = NULL;
  t = SSL_stderr_stream();
  u_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_23);
  return(t);
}
static ATerm w_25 (ATerm i_24, ATerm t)
{
  ATerm l_24 = NULL;
  t = SSL_explode_term(i_24);
  if(match_cons(t, sym__2))
    {
      ATerm q_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_9 = ATgetArgument(t, 1);
        if(((ATgetType(u_9) == AT_LIST) && !(ATisEmpty(u_9))))
          {
            l_24 = ATgetFirst((ATermList) u_9);
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
  t = l_24;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_24;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_24;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_24;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_25 (ATerm q_24, ATerm t_24, ATerm u_24, ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,b_25 = NULL,g_25 = NULL,w_10 = NULL;
  t = SSLgetAnnotations(u_24);
  b_25 = t;
  t = q_24;
  if(match_cons(t, sym_Path_1))
    {
      g_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_25, t_24);
  w_10 = t;
  t = SSLsetAnnotations(w_10, b_25);
  if(match_cons(t, sym__2))
    {
      x_24 = ATgetArgument(t, 0);
      y_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(x_24, y_24, t);
  return(t);
}
static ATerm y_25 (ATerm j_25, ATerm k_25, ATerm l_25, ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,r_25 = NULL,y_10 = NULL;
  t = SSLgetAnnotations(l_25);
  o_25 = t;
  t = SSL_is_string(j_25);
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_25, k_25);
  y_10 = t;
  t = SSLsetAnnotations(y_10, o_25);
  if(match_cons(t, sym__2))
    {
      m_25 = ATgetArgument(t, 0);
      n_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(m_25, n_25, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t_25 = t;
  if(match_cons(t, sym__2))
    {
      u_25 = ATgetArgument(t, 0);
      v_25 = ATgetArgument(t, 1);
      {
        ATerm y_9 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_25(t_25, t);
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
                  t = x_25(u_25, v_25, t_25, t);
                  LocalPopChoice(e_10);
                }
              else
                {
                  t = d_10;
                  t = y_25(u_25, v_25, t_25, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_25(t_25, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_26 = NULL,d_26 = NULL,e_26 = NULL,k_26 = NULL;
  k_26 = t;
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_26, term_n_10);
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
          t = (ATerm) ATmakeAppl(sym__2, term_p_10, k_26);
          t = x_5(n_3, k_26, t);
          h_3 = t;
          t = SSL_perror(h_3);
          _fail(t);
        }
      }
  }
  d_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_5(e_26, t);
  a_26 = t;
  t = d_26;
  t = fclose_0_0(t);
  t = a_26;
  return(t);
}
ATerm fetch_1_0 (ATerm w_101 (ATerm), ATerm t)
{
  static ATerm j_27 (ATerm t);
  static ATerm j_27 (ATerm t)
  {
    ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
    g_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_27 = ATgetFirst((ATermList) t);
        i_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_10 = t;
      int r_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_4 = NULL,j_4 = NULL,b_11 = NULL;
          t = SSLgetAnnotations(g_27);
          a_4 = t;
          t = h_27;
          t = w_101(t);
          j_4 = t;
          t = (ATerm) ATinsert(CheckATermList(i_27), j_4);
          b_11 = t;
          t = SSLsetAnnotations(b_11, a_4);
          LocalPopChoice(r_10);
        }
      else
        {
          t = q_10;
          {
            ATerm z_4 = NULL,d_5 = NULL,c_11 = NULL;
            t = SSLgetAnnotations(g_27);
            z_4 = t;
            t = i_27;
            t = j_27(t);
            d_5 = t;
            t = (ATerm) ATinsert(CheckATermList(d_5), h_27);
            c_11 = t;
            t = SSLsetAnnotations(c_11, z_4);
          }
        }
    }
    return(t);
  }
  t = j_27(t);
  return(t);
}
static ATerm e_6 (ATerm a_56, ATerm b_56, ATerm t)
{
  ATerm m_27 = NULL;
  t = lookup_table_0_1(a_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(b_56, m_27, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm q_118 (ATerm), ATerm t)
{
  ATerm p_27 = NULL;
  p_27 = t;
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
        t = term_x_10;
        s_27 = t;
        t = term_z_10;
        t_27 = t;
        t = term_a_11;
        t = e_6(s_27, t_27, t);
        r_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_27, term_d_11);
        t = geq_0_0(t);
        t = p_27;
        t = q_118(t);
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        t = p_27;
      }
  }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  if(match_string(t, "-k"))
    {
      t = w_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_27;
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
  x_27 = t;
  t = SSL_string_to_int(x_27);
  y_27 = t;
  t = term_e_11;
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, y_27);
  t = h_6(z_27, y_27, t);
  t = x_27;
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
  ATerm b_28 = NULL;
  b_28 = t;
  if(match_string(t, "-S"))
    {
      t = b_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_28;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL;
  t = term_z_10;
  c_28 = t;
  t = term_b_5;
  d_28 = t;
  t = term_g_11;
  t = h_6(c_28, d_28, t);
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
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
  e_28 = t;
  t = SSL_string_to_int(e_28);
  f_28 = t;
  t = term_z_10;
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_10, f_28);
  t = h_6(g_28, f_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_28);
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
  ATerm h_28 = NULL,i_28 = NULL;
  t = term_q_11;
  h_28 = t;
  t = term_y_2;
  i_28 = t;
  t = term_t_11;
  t = h_6(h_28, i_28, t);
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
static ATerm h_6 (ATerm r_64, ATerm s_64, ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL;
  t = term_x_10;
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_10, r_64, s_64);
  t = lookup_table_0_1(j_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(r_64, s_64, k_28, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_10, r_64, s_64);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
      t = term_y_2;
      t = g_0(t);
      q_28 = t;
      t = term_h_12;
      r_28 = t;
      t = term_i_12;
      s_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_12, term_i_12, q_28);
      t = f_6(r_28, s_28, q_28, t);
      _fail(t);
    }
  else
    {
      ATerm v_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_28 = ATgetFirst((ATermList) t);
          p_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_28;
      t = d_0(t);
      t = term_y_2;
      t = f_0(t);
      v_28 = t;
      t = (ATerm) ATinsert(CheckATermList(p_28), v_28);
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm x_28 = NULL;
  x_28 = t;
  if(match_string(t, "-o"))
    {
      t = x_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_28;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  y_28 = t;
  t = term_j_12;
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_12, y_28);
  t = h_6(z_28, y_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_28);
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
static ATerm f_6 (ATerm h_54, ATerm i_54, ATerm g_54, ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_54, i_54);
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
        t = (ATerm) ATmakeAppl(sym__2, h_54, i_54);
        t = e_6(h_54, i_54, t);
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        t = (ATerm) ATempty;
      }
  }
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_54, i_54, (ATerm) ATinsert(CheckATermList(c_29), g_54));
  t = lookup_table_0_1(h_54, t);
  f_29 = t;
  t = (ATerm) ATinsert(CheckATermList(c_29), g_54);
  d_29 = t;
  t = f_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(i_54, d_29, e_29, t);
  t = b_29;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
      t = term_y_2;
      t = q_0(t);
      q_29 = t;
      t = term_h_12;
      r_29 = t;
      t = term_i_12;
      s_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_12, term_i_12, q_29);
      t = f_6(r_29, s_29, q_29, t);
      _fail(t);
    }
  else
    {
      ATerm w_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_29 = ATgetFirst((ATermList) t);
          n_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_29 = ATgetFirst((ATermList) t);
          p_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_29;
      t = o_0(t);
      t = o_29;
      t = p_0(t);
      w_29 = t;
      t = (ATerm) ATinsert(CheckATermList(p_29), w_29);
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  if(match_string(t, "-i"))
    {
      t = a_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_30;
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  b_30 = t;
  t = term_p_12;
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_12, b_30);
  t = h_6(c_30, b_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_30);
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
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_2;
  t = whoami_0_0(t);
  d_30 = t;
  t = term_s_4;
  f_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_12), d_30);
  g_30 = t;
  t = SSL_printnl(f_30, g_30);
  t = term_y_4;
  e_30 = t;
  t = SSL_exit(e_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
  t = term_x_10;
  h_30 = t;
  t = term_s_12;
  i_30 = t;
  t = term_t_12;
  t = e_6(h_30, i_30, t);
  return(t);
}
static ATerm a_6 (ATerm i_41, ATerm j_41, ATerm t)
{
  ATerm u_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_41, j_41);
      LocalPopChoice(y_12);
    }
  else
    {
      t = u_12;
      t = SSL_addr(i_41, j_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  k_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_30;
      t = l_108(t);
    }
  else
    {
      ATerm p_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_30 = ATgetFirst((ATermList) t);
          m_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_30;
      t = foldr_2_0(l_108, m_108, t);
      p_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_30, p_30);
      t = m_108(t);
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
  ATerm s_30 = NULL,i_5 = NULL,j_5 = NULL;
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
  s_30 = t;
  t = SSL_TicksToSeconds(s_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
  d_31 = t;
  if(match_cons(t, sym__2))
    {
      e_31 = ATgetArgument(t, 0);
      f_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_31;
        if((e_31 != t))
          {
            _fail(t);
          }
        t = d_31;
        LocalPopChoice(g_13);
      }
    else
      {
        t = b_13;
        t = (ATerm) ATmakeAppl(sym__2, e_31, f_31);
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_31, f_31);
              LocalPopChoice(i_13);
            }
          else
            {
              t = h_13;
              t = SSL_gtr(e_31, f_31);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_31, f_31);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_118 (ATerm), ATerm t)
{
  ATerm j_31 = NULL;
  j_31 = t;
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
        t = term_x_10;
        m_31 = t;
        t = term_z_10;
        n_31 = t;
        t = term_a_11;
        t = e_6(m_31, n_31, t);
        l_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_31, term_y_4);
        t = geq_0_0(t);
        t = j_31;
        t = p_118(t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        t = j_31;
      }
  }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,s_31 = NULL,t_31 = NULL;
  t = run_time_0_0(t);
  p_31 = t;
  t = term_y_2;
  t = whoami_0_0(t);
  q_31 = t;
  t = term_s_4;
  s_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_13), p_31), term_l_13), q_31);
  t_31 = t;
  t = SSL_printnl(s_31, t_31);
  t = (ATerm) ATmakeAppl(sym__2, term_s_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_13), p_31), term_l_13), q_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_5;
  u_31 = t;
  t = SSL_exit(u_31);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL;
  f_32 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_32;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_32 = ATgetArgument(t, 0);
          {
            ATerm e_7 = NULL,i_11 = NULL;
            t = SSLgetAnnotations(f_32);
            e_7 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_32);
            i_11 = t;
            t = SSLsetAnnotations(i_11, e_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_32;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_121 (ATerm), ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_31 = NULL,y_31 = NULL;
      t = term_x_10;
      x_31 = t;
      t = term_q_13;
      y_31 = t;
      t = term_r_13;
      t = e_6(x_31, y_31, t);
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      t = fetch_1_0(x_2, t);
    }
  t = f_121(t);
  return(t);
}
static ATerm i_6 (ATerm z_58, ATerm a_59, ATerm b_59, ATerm t)
{
  ATerm h_32 = NULL;
  t = SSL_hashtable_put(b_59, z_58, a_59);
  h_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_32);
  return(t);
}
static ATerm j_6 (ATerm c_59, ATerm d_59, ATerm t)
{
  t = SSL_hashtable_get(d_59, c_59);
  return(t);
}
ATerm lookup_table_0_1 (ATerm t_55, ATerm t)
{
  ATerm q_32 = NULL;
  t = table_hashtable_0_0(t);
  q_32 = t;
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_7 = NULL;
        t = q_32;
        if(match_cons(t, sym_Hashtable_1))
          {
            r_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_6(t_55, r_7, t);
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        {
          ATerm a_8 = NULL;
          t = t_55;
          t = table_create_0_0(t);
          t = q_32;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_6(t_55, a_8, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm h_59, ATerm i_59, ATerm t)
{
  ATerm t_32 = NULL;
  t = SSL_hashtable_create(h_59, i_59);
  t_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_32);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL,y_32 = NULL,z_32 = NULL;
  u_32 = t;
  t = term_u_13;
  y_32 = t;
  t = term_v_13;
  z_32 = t;
  t = u_32;
  t = new_hashtable_0_2(y_32, z_32, t);
  v_32 = t;
  t = u_32;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(u_32, v_32, w_32, t);
  t = u_32;
  return(t);
}
static ATerm c_6 (ATerm e_59, ATerm f_59, ATerm t)
{
  ATerm a_33 = NULL;
  t = SSL_hashtable_remove(f_59, e_59);
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_33);
  return(t);
}
static ATerm d_6 (ATerm j_59, ATerm t)
{
  ATerm b_33 = NULL;
  t = SSL_hashtable_destroy(j_59);
  b_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_33);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm c_33 = NULL;
  t = SSL_table_hashtable();
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_33);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
  d_33 = t;
  t = table_hashtable_0_0(t);
  e_33 = t;
  t = lookup_table_0_1(d_33, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(g_33, t);
  t = e_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(d_33, f_33, t);
  t = d_33;
  return(t);
}
ATerm map_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  static ATerm v_33 (ATerm t);
  static ATerm v_33 (ATerm t)
  {
    ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
    s_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_33;
      }
    else
      {
        ATerm f_8 = NULL,l_8 = NULL,o_8 = NULL,l_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_33 = ATgetFirst((ATermList) t);
            u_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_33);
        f_8 = t;
        t = t_33;
        t = m_101(t);
        l_8 = t;
        t = u_33;
        t = v_33(t);
        o_8 = t;
        t = (ATerm) ATinsert(CheckATermList(o_8), l_8);
        l_11 = t;
        t = SSLsetAnnotations(l_11, f_8);
      }
    return(t);
  }
  t = v_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_33 = ATgetFirst((ATermList) t);
      z_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_34 = NULL,e_34 = NULL;
        static ATerm a_3 (ATerm t);
        static ATerm a_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_34)), not_null(e_34));
          return(t);
        }
        t = z_33;
        t = l_0(t);
        if(((d_34 != NULL) && (d_34 != t)))
          _fail(t);
        else
          d_34 = t;
        t = y_33;
        t = j_0(t);
        if(((e_34 != NULL) && (e_34 != t)))
          _fail(t);
        else
          e_34 = t;
        t = z_33;
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
  ATerm t_34 = NULL;
  t_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_34), term_w_13);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL;
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_34 = NULL,m_34 = NULL;
      t = term_x_10;
      l_34 = t;
      t = term_s_12;
      m_34 = t;
      t = term_t_12;
      t = e_6(l_34, m_34, t);
      i_34 = t;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        static ATerm b_3 (ATerm t);
        static ATerm b_3 (ATerm t)
        {
          ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,p_11 = NULL;
          p_34 = t;
          if(match_cons(t, sym_Program_1))
            {
              o_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_34);
          n_34 = t;
          t = o_34;
          if(((i_34 != NULL) && (i_34 != t)))
            _fail(t);
          else
            i_34 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, o_34);
          p_11 = t;
          t = SSLsetAnnotations(p_11, n_34);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_14), not_null(i_34)), term_b_14);
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
  j_34 = t;
  t = term_i_12;
  k_34 = t;
  t = term_e_14;
  t = e_6(j_34, k_34, t);
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
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
  x_34 = t;
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_34;
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
            t = x_34;
          }
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        t = (ATerm) ATinsert(ATempty, x_34);
      }
  }
  y_34 = t;
  t = term_d_9;
  z_34 = t;
  t = SSL_printnl(z_34, y_34);
  t = x_34;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL;
  t = term_x_10;
  d_35 = t;
  t = term_s_12;
  e_35 = t;
  t = term_t_12;
  t = e_6(d_35, e_35, t);
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
  ATerm f_35 = NULL,g_35 = NULL;
  t = term_r_14;
  f_35 = t;
  t = term_y_2;
  g_35 = t;
  t = term_s_14;
  t = h_6(f_35, g_35, t);
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
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL;
  t = term_r_14;
  j_35 = t;
  t = term_y_2;
  k_35 = t;
  t = term_s_14;
  t = h_6(j_35, k_35, t);
  t = term_u_14;
  h_35 = t;
  t = term_y_2;
  i_35 = t;
  t = term_v_14;
  t = h_6(h_35, i_35, t);
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
ATerm Cons_2_0 (ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_11 = NULL;
  q_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_35 = ATgetFirst((ATermList) t);
      n_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_35);
  l_35 = t;
  t = m_35;
  t = v_72(t);
  o_35 = t;
  t = n_35;
  t = w_72(t);
  p_35 = t;
  t = (ATerm) ATinsert(CheckATermList(p_35), o_35);
  r_11 = t;
  t = SSLsetAnnotations(r_11, l_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_123 (ATerm), ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,a_36 = NULL,b_36 = NULL,u_11 = NULL;
  v_35 = t;
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_15;
        t = i_123(t);
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
      }
  }
  t = v_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_35 = ATgetFirst((ATermList) t);
      y_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_35);
  w_35 = t;
  t = term_s_12;
  b_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_12, x_35);
  t = h_6(b_36, x_35, t);
  t = y_35;
  {
    static ATerm l_36 (ATerm t);
    static ATerm l_36 (ATerm t)
    {
      ATerm l_15 = t;
      int o_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_15 = t;
          int r_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_36 = NULL;
              e_36 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_36;
              LocalPopChoice(r_15);
            }
          else
            {
              t = q_15;
              t = i_123(t);
              t = Cons_2_0(_id, l_36, t);
            }
          LocalPopChoice(o_15);
        }
      else
        {
          t = l_15;
          {
            ATerm h_36 = NULL,i_36 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_36 = ATgetFirst((ATermList) t);
                i_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_36), (ATerm) ATmakeAppl(sym_Undefined_1, h_36));
          }
        }
      return(t);
    }
    t = l_36(t);
  }
  a_36 = t;
  t = (ATerm) ATinsert(CheckATermList(a_36), (ATerm) ATmakeAppl(sym_Program_1, x_35));
  u_11 = t;
  t = SSLsetAnnotations(u_11, w_35);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm a_37 = NULL;
  a_37 = t;
  if(match_string(t, "--help"))
    {
      t = a_37;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_37;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_37;
        }
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  t = term_q_13;
  b_37 = t;
  t = term_y_2;
  c_37 = t;
  t = term_v_15;
  t = h_6(b_37, c_37, t);
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
ATerm parse_options_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  ATerm q_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
  u_36 = t;
  t = term_h_12;
  v_36 = t;
  t = term_y_15;
  t = lookup_table_0_1(v_36, t);
  z_36 = t;
  t = term_i_12;
  w_36 = t;
  t = (ATerm) ATempty;
  x_36 = t;
  t = z_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(w_36, x_36, y_36, t);
  t = u_36;
  {
    static ATerm y_3 (ATerm t);
    static ATerm y_3 (ATerm t)
    {
      ATerm z_15 = t;
      int a_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_123(t);
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
        ATerm n_37 = NULL;
        n_37 = t;
        {
          ATerm n_16 = t;
          int o_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_9 = NULL;
              t = n_37;
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
              t = n_37;
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
                t = n_37;
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
              ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
              static ATerm e_4 (ATerm t);
              static ATerm e_4 (ATerm t)
              {
                ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,x_11 = NULL;
                t_37 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_37 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_37);
                r_37 = t;
                t = s_37;
                if(((q_36 != NULL) && (q_36 != t)))
                  _fail(t);
                else
                  q_36 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_37);
                x_11 = t;
                t = SSLsetAnnotations(x_11, r_37);
                return(t);
              }
              t = fetch_1_0(e_4, t);
              t = term_s_4;
              p_37 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_36)), term_y_16);
              q_37 = t;
              t = SSL_printnl(p_37, q_37);
              t = (ATerm) ATmakeAppl(sym__2, term_s_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_36)), term_y_16));
              t = default_system_usage_0_0(t);
              t = term_y_4;
              o_37 = t;
              t = SSL_exit(o_37);
              LocalPopChoice(x_16);
            }
          else
            {
              t = w_16;
            }
        }
      }
  }
  t_36 = t;
  t = term_h_12;
  t = table_destroy_0_0(t);
  t = t_36;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_121 (ATerm), ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL;
  t = parse_options_1_0(h_121, t);
  y_37 = t;
  t = term_z_16;
  t = table_create_0_0(t);
  t = term_z_16;
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_16, term_a_17, y_37);
  t = lookup_table_0_1(z_37, t);
  c_38 = t;
  t = term_a_17;
  a_38 = t;
  t = c_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(a_38, y_37, b_38, t);
  t = y_37;
  t = j_121(t);
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_121, t);
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
              t = k_121(t);
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
  ATerm d_38 = NULL,e_38 = NULL;
  t = term_f_17;
  d_38 = t;
  t = term_y_2;
  e_38 = t;
  t = term_g_17;
  t = h_6(d_38, e_38, t);
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
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
  f_38 = t;
  t = term_x_10;
  j_38 = t;
  t = term_s_12;
  k_38 = t;
  t = term_t_12;
  t = e_6(j_38, k_38, t);
  g_38 = t;
  t = term_s_4;
  h_38 = t;
  t = (ATerm) ATinsert(ATempty, g_38);
  i_38 = t;
  t = SSL_printnl(h_38, i_38);
  t = f_38;
  return(t);
}
ATerm iowrap_3_0 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t)
{
  static ATerm f_4 (ATerm t);
  static ATerm h_4 (ATerm t);
  static ATerm f_4 (ATerm t)
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_120(t);
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
    ATerm l_38 = NULL,m_38 = NULL,t_38 = NULL;
    m_38 = t;
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
                if(((l_38 != NULL) && (l_38 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_38 = ATgetArgument(t, 0);
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
          l_38 = t;
        }
    }
    t = not_null(l_38);
    t = ReadFromFile_0_0(t);
    t_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_38, t_38);
    t = apply_strategy_1_0(q_120, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(f_4, s_120, g_4, h_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,z_11 = NULL;
  u_39 = t;
  if(match_cons(t, sym__2))
    {
      r_39 = ATgetArgument(t, 0);
      s_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_39);
  q_39 = t;
  t = s_39;
  t = bottomup_1_0(r_4, t);
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_39, t_39);
  z_11 = t;
  t = SSLsetAnnotations(z_11, q_39);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
  x_39 = t;
  if(match_cons(t, sym_appl_2))
    {
      v_39 = ATgetArgument(t, 0);
      w_39 = ATgetArgument(t, 1);
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_39;
            t = q_5(v_39, w_39, t);
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            t = x_39;
          }
      }
    }
  else
    {
      t = x_39;
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
  o_40 = t;
  if(match_cons(t, sym_appl_2))
    {
      e_40 = ATgetArgument(t, 0);
      n_40 = ATgetArgument(t, 1);
      t = e_40;
      if(match_cons(t, sym_prod_3))
        {
          f_40 = ATgetArgument(t, 0);
          j_40 = ATgetArgument(t, 1);
          m_40 = ATgetArgument(t, 2);
          t = m_40;
          if(match_cons(t, sym_no_attrs_0))
            {
              t = j_40;
              if(match_cons(t, sym_cf_1))
                {
                  k_40 = ATgetArgument(t, 0);
                  t = k_40;
                  if(match_cons(t, sym_opt_1))
                    {
                      l_40 = ATgetArgument(t, 0);
                      t = l_40;
                      if(match_cons(t, sym_layout_0))
                        {
                          t = f_40;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              g_40 = ATgetFirst((ATermList) t);
                              i_40 = (ATerm) ATgetNext((ATermList) t);
                              t = i_40;
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = g_40;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      h_40 = ATgetArgument(t, 0);
                                      t = h_40;
                                      if(match_cons(t, sym_layout_0))
                                        {
                                          ATerm k_18 = t;
                                          int l_18 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_40;
                                              t = p_5(n_40, t);
                                              LocalPopChoice(l_18);
                                            }
                                          else
                                            {
                                              t = k_18;
                                              t = o_40;
                                            }
                                        }
                                      else
                                        {
                                          t = o_40;
                                        }
                                    }
                                  else
                                    {
                                      t = o_40;
                                    }
                                }
                              else
                                {
                                  t = o_40;
                                }
                            }
                          else
                            {
                              t = o_40;
                            }
                        }
                      else
                        {
                          t = o_40;
                        }
                    }
                  else
                    {
                      t = o_40;
                    }
                }
              else
                {
                  t = o_40;
                }
            }
          else
            {
              t = o_40;
            }
        }
      else
        {
          t = o_40;
        }
    }
  else
    {
      t = o_40;
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
