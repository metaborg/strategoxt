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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_g_18;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_v_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_l_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_f_9;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_s_7;
ATerm term_h_5;
ATerm term_g_5;
ATerm term_e_5;
ATerm term_c_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_y_4;
ATerm term_w_4;
ATerm term_z_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_2));
  term_z_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeInt(255);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(sym_range_2, term_e_5, term_g_5);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_lex_1, term_s_7);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_cf_1, term_s_7);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_left_0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_assoc_1, term_j_8);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_opt_1, term_s_7);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_cf_1, term_l_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_a_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, term_a_11, term_e_5);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_5);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_r_11, term_z_2);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_t_12);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_r_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_j_12);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("This tool explodes an AsFix2ME term to a valid AsFix2 term. Explosion involes\n", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattening of lists, layout, literals, and lexicals.\n\n", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Observe that the structure of lexicals cannot be restored. Lexicals are\n", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattened into left linear binary trees.", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_z_2);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_z_2);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_z_2);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__3, term_i_12, term_j_12, (ATerm) ATempty);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_s_14);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym__2, term_g_17, term_z_2);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm p_5 (ATerm t_20, ATerm u_20, ATerm v_20, ATerm t);
ATerm unflatten_lexical_0_0 (ATerm t);
ATerm MkLayoutCharacter_0_0 (ATerm t);
ATerm MkLayoutConsList_0_0 (ATerm t);
static ATerm q_5 (ATerm j_20, ATerm t);
ATerm MkCfConsList_1_0 (ATerm w_88 (ATerm), ATerm t);
ATerm MkCfConsList_2_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm t);
ATerm MkLexConsList_1_0 (ATerm b_89 (ATerm), ATerm t);
ATerm unflatten_list_0_0 (ATerm t);
ATerm list_some_1_0 (ATerm s_97 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm r_5 (ATerm n_0, ATerm i_18, ATerm t);
ATerm bottomup_1_0 (ATerm c_91 (ATerm), ATerm t);
static ATerm t_5 (ATerm p_37, ATerm q_37, ATerm t);
static ATerm u_5 (ATerm k_22, ATerm l_22, ATerm t);
static ATerm w_5 (ATerm e_97 (ATerm), ATerm a_184, ATerm q_22, ATerm t);
static ATerm v_5 (ATerm g_22, ATerm h_22, ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm c_116 (ATerm), ATerm t);
static ATerm n_23 (ATerm e_23, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_5 (ATerm m_22, ATerm t);
static ATerm y_5 (ATerm i_36, ATerm j_36, ATerm t);
static ATerm z_5 (ATerm r_37, ATerm s_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_25 (ATerm i_24, ATerm t);
static ATerm x_25 (ATerm s_24, ATerm t_24, ATerm w_24, ATerm t);
static ATerm y_25 (ATerm j_25, ATerm k_25, ATerm l_25, ATerm t);
static ATerm a_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_97 (ATerm), ATerm t);
static ATerm f_6 (ATerm h_62, ATerm i_62, ATerm t);
ATerm if_verbose2_1_0 (ATerm l_114 (ATerm), ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_6 (ATerm w_55, ATerm x_55, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_6 (ATerm o_60, ATerm p_60, ATerm n_60, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm b_6 (ATerm k_40, ATerm l_40, ATerm t);
ATerm foldr_2_0 (ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm k_114 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm need_help_1_0 (ATerm a_117 (ATerm), ATerm t);
static ATerm j_6 (ATerm g_65, ATerm h_65, ATerm i_65, ATerm t);
static ATerm k_6 (ATerm j_65, ATerm k_65, ATerm t);
ATerm lookup_table_0_1 (ATerm a_62, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_65, ATerm p_65, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm d_6 (ATerm l_65, ATerm m_65, ATerm t);
static ATerm e_6 (ATerm q_65, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm n_97 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm e_69 (ATerm), ATerm f_69 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_119 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm parse_options_1_0 (ATerm c_119 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm iowrap_3_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,k_0 = NULL;
  a_0 = t;
  t = term_z_2;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_w_4;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_4), b_0), term_y_4);
  k_0 = t;
  t = SSL_printnl(e_0, k_0);
  t = term_a_5;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
static ATerm p_5 (ATerm t_20, ATerm u_20, ATerm v_20, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, t_20)), (ATerm)ATmakeAppl(sym_cf_1, t_20), term_c_5), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_h_5))))), (ATerm)ATmakeAppl(sym_lex_1, t_20), term_c_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, u_20, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_h_5)))), term_c_5), v_20))));
  return(t);
}
ATerm unflatten_lexical_0_0 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm i_5 = ATgetArgument(t, 0);
      if(match_cons(i_5, sym_prod_3))
        {
          ATerm m_5 = ATgetArgument(i_5, 0);
          if(((ATgetType(m_5) == AT_LIST) && !(ATisEmpty(m_5))))
            {
              ATerm l_6 = ATgetFirst((ATermList) m_5);
              if(match_cons(l_6, sym_lex_1))
                {
                  s_0 = ATgetArgument(l_6, 0);
                }
              else
                _fail(t);
              {
                ATerm m_6 = (ATerm) ATgetNext((ATermList) m_5);
                if(((ATgetType(m_6) != AT_LIST) || !(ATisEmpty(m_6))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm c_6 = ATgetArgument(i_5, 1);
            if(match_cons(c_6, sym_cf_1))
              {
                if((s_0 != ATgetArgument(c_6, 0)))
                  {
                    _fail(ATgetArgument(c_6, 0));
                  }
              }
            else
              _fail(t);
          }
          {
            ATerm h_6 = ATgetArgument(i_5, 2);
            if(!(match_cons(h_6, sym_no_attrs_0)))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm j_5 = ATgetArgument(t, 1);
        if(((ATgetType(j_5) == AT_LIST) && !(ATisEmpty(j_5))))
          {
            ATerm o_6 = ATgetFirst((ATermList) j_5);
            if(match_cons(o_6, sym_appl_2))
              {
                ATerm s_6 = ATgetArgument(o_6, 0);
                if(match_cons(s_6, sym_prod_3))
                  {
                    t_0 = ATgetArgument(s_6, 0);
                    {
                      ATerm u_6 = ATgetArgument(s_6, 1);
                      if(match_cons(u_6, sym_iter_star_1))
                        {
                          ATerm w_6 = ATgetArgument(u_6, 0);
                          if(match_cons(w_6, sym_char_class_1))
                            {
                              ATerm a_7 = ATgetArgument(w_6, 0);
                              if(((ATgetType(a_7) == AT_LIST) && !(ATisEmpty(a_7))))
                                {
                                  ATerm e_7 = ATgetFirst((ATermList) a_7);
                                  if(match_cons(e_7, sym_range_2))
                                    {
                                      ATerm h_7 = ATgetArgument(e_7, 0);
                                      if(((ATgetType(h_7) != AT_INT) || (ATgetInt((ATermInt) h_7) != 0)))
                                        _fail(t);
                                      {
                                        ATerm m_7 = ATgetArgument(e_7, 1);
                                        if(((ATgetType(m_7) != AT_INT) || (ATgetInt((ATermInt) m_7) != 255)))
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm f_7 = (ATerm) ATgetNext((ATermList) a_7);
                                    if(((ATgetType(f_7) != AT_LIST) || !(ATisEmpty(f_7))))
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
                      ATerm v_6 = ATgetArgument(s_6, 2);
                      if(!(match_cons(v_6, sym_no_attrs_0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                u_0 = ATgetArgument(o_6, 1);
              }
            else
              _fail(t);
            {
              ATerm p_6 = (ATerm) ATgetNext((ATermList) j_5);
              if(((ATgetType(p_6) != AT_LIST) || !(ATisEmpty(p_6))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_5(s_0, t_0, u_0, t);
  return(t);
}
ATerm MkLayoutCharacter_0_0 (ATerm t)
{
  ATerm b_1 = NULL;
  b_1 = t;
  {
    ATerm n_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_is_int(b_1);
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_u_7), term_v_7, term_c_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_h_5))), term_u_7, term_c_5), (ATerm) ATinsert(ATempty, b_1))));
        LocalPopChoice(o_7);
      }
    else
      {
        t = n_7;
        {
          ATerm c_1 = NULL,e_1 = NULL,f_1 = NULL;
          ATerm w_7 = t;
          int x_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_appl_2))
                {
                  c_1 = ATgetArgument(t, 0);
                  {
                    ATerm y_7 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(x_7);
              t = c_1;
              {
                ATerm z_7 = t;
                int a_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_prod_3))
                      {
                        ATerm b_8 = ATgetArgument(t, 0);
                        e_1 = ATgetArgument(t, 1);
                        {
                          ATerm d_8 = ATgetArgument(t, 2);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(a_8);
                    t = e_1;
                    if(match_cons(t, sym_lex_1))
                      {
                        f_1 = ATgetArgument(t, 0);
                        {
                          ATerm e_8 = t;
                          int f_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_u_7), term_v_7, term_c_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, f_1)), term_u_7, term_c_5), (ATerm) ATinsert(ATempty, b_1))));
                              LocalPopChoice(f_8);
                            }
                          else
                            {
                              t = e_8;
                              t = b_1;
                            }
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_lit_1))
                          {
                            f_1 = ATgetArgument(t, 0);
                            {
                              ATerm g_8 = t;
                              int i_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_u_7), term_v_7, term_c_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, f_1)), term_u_7, term_c_5), (ATerm) ATinsert(ATempty, b_1))));
                                  LocalPopChoice(i_8);
                                }
                              else
                                {
                                  t = g_8;
                                  t = b_1;
                                }
                            }
                          }
                        else
                          {
                            t = b_1;
                          }
                      }
                  }
                else
                  {
                    t = z_7;
                    t = b_1;
                  }
              }
            }
          else
            {
              t = w_7;
              t = b_1;
            }
        }
      }
  }
  return(t);
}
ATerm MkLayoutConsList_0_0 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_1 = ATgetFirst((ATermList) t);
      s_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_1;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_1;
      t = MkLayoutCharacter_0_0(t);
    }
  else
    {
      ATerm k_2 = NULL,x_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_1 = ATgetFirst((ATermList) t);
          u_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_1;
      t = MkLayoutCharacter_0_0(t);
      k_2 = t;
      t = t_1;
      t = MkLayoutCharacter_0_0(t);
      x_2 = t;
      t = (ATerm) ATinsert(CheckATermList(u_1), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_v_7), term_v_7), term_v_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_k_8))), (ATerm) ATinsert(ATinsert(ATempty, x_2), k_2)));
      t = MkLayoutConsList_0_0(t);
    }
  return(t);
}
static ATerm q_5 (ATerm j_20, ATerm t)
{
  ATerm a_3 = NULL;
  t = j_20;
  t = MkLayoutConsList_0_0(t);
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_v_7), term_m_8, term_c_5), (ATerm) ATinsert(ATempty, a_3));
  return(t);
}
ATerm MkCfConsList_1_0 (ATerm w_88 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,j_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_0 = NULL;
  static ATerm d_5 (ATerm t)
  {
    ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_3 = ATgetFirst((ATermList) t);
        r_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = r_3;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_3;
      }
    else
      {
        ATerm q_4 = NULL,r_4 = NULL,u_4 = NULL,v_4 = NULL,x_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_3 = ATgetFirst((ATermList) t);
            t_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_3;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_3 = ATgetFirst((ATermList) t);
            v_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_z_2;
        t = w_88(t);
        q_4 = t;
        t = term_z_2;
        t = w_88(t);
        r_4 = t;
        t = term_z_2;
        t = w_88(t);
        u_4 = t;
        t = term_z_2;
        t = w_88(t);
        v_4 = t;
        t = term_z_2;
        t = w_88(t);
        x_4 = t;
        t = (ATerm) ATinsert(CheckATermList(v_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, r_4))), term_m_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, q_4))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, u_4)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_k_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, v_4)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, x_4)), term_c_5), (ATerm) ATinsert(ATempty, u_3))), s_3), q_3)));
        t = d_5(t);
      }
    return(t);
  }
  n_3 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_3 = ATgetFirst((ATermList) t);
      j_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_3);
  g_3 = t;
  t = term_z_2;
  t = w_88(t);
  l_3 = t;
  t = term_z_2;
  t = w_88(t);
  m_3 = t;
  t = (ATerm) ATinsert(CheckATermList(j_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, l_3)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, m_3)), term_c_5), (ATerm) ATinsert(ATempty, h_3)));
  o_0 = t;
  t = SSLsetAnnotations(o_0, g_3);
  t = d_5(t);
  return(t);
}
ATerm MkCfConsList_2_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm t)
{
  ATerm n_6 = NULL,q_6 = NULL,r_6 = NULL,t_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,n_5 = NULL;
  static ATerm l_9 (ATerm t)
  {
    ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_7 = ATgetFirst((ATermList) t);
        c_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = c_7;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_7;
      }
    else
      {
        ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_7 = ATgetFirst((ATermList) t);
            i_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_7;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_7 = ATgetFirst((ATermList) t);
            k_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_7;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_7 = ATgetFirst((ATermList) t);
            p_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_7;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_7 = ATgetFirst((ATermList) t);
            r_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_z_2;
        t = y_88(t);
        y_8 = t;
        t = term_z_2;
        t = z_88(t);
        z_8 = t;
        t = term_z_2;
        t = z_88(t);
        a_9 = t;
        t = term_z_2;
        t = y_88(t);
        b_9 = t;
        t = term_z_2;
        t = z_88(t);
        c_9 = t;
        t = term_z_2;
        t = y_88(t);
        d_9 = t;
        t = term_z_2;
        t = z_88(t);
        g_9 = t;
        t = term_z_2;
        t = y_88(t);
        h_9 = t;
        t = term_z_2;
        t = y_88(t);
        i_9 = t;
        t = term_z_2;
        t = z_88(t);
        j_9 = t;
        t = (ATerm) ATinsert(CheckATermList(r_7), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, b_9, c_9))), term_m_8), a_9), term_m_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, y_8, z_8))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, d_9, g_9)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_k_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, h_9)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, i_9, j_9)), term_c_5), (ATerm) ATinsert(ATempty, q_7))), l_7), j_7), d_7), b_7)));
        t = l_9(t);
      }
    return(t);
  }
  z_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_6 = ATgetFirst((ATermList) t);
      r_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_6);
  n_6 = t;
  t = term_z_2;
  t = y_88(t);
  t_6 = t;
  t = term_z_2;
  t = y_88(t);
  x_6 = t;
  t = term_z_2;
  t = z_88(t);
  y_6 = t;
  t = (ATerm) ATinsert(CheckATermList(r_6), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, t_6)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, x_6, y_6)), term_c_5), (ATerm) ATinsert(ATempty, q_6)));
  n_5 = t;
  t = SSLsetAnnotations(n_5, n_6);
  t = l_9(t);
  return(t);
}
ATerm MkLexConsList_1_0 (ATerm b_89 (ATerm), ATerm t)
{
  static ATerm e_12 (ATerm t)
  {
    ATerm a_10 = NULL,h_10 = NULL,i_10 = NULL,l_10 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_10 = ATgetFirst((ATermList) t);
        h_10 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = h_10;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        ATerm t_10 = NULL,u_10 = NULL;
        t = term_z_2;
        t = b_89(t);
        t_10 = t;
        t = term_z_2;
        t = b_89(t);
        u_10 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, t_10)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, u_10)), term_c_5), (ATerm) ATinsert(ATempty, a_10));
      }
    else
      {
        ATerm k_11 = NULL,n_11 = NULL,p_11 = NULL,t_11 = NULL,x_11 = NULL,b_12 = NULL,d_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_10 = ATgetFirst((ATermList) t);
            l_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_z_2;
        t = b_89(t);
        k_11 = t;
        t = term_z_2;
        t = b_89(t);
        n_11 = t;
        t = term_z_2;
        t = b_89(t);
        p_11 = t;
        t = term_z_2;
        t = b_89(t);
        t_11 = t;
        t = term_z_2;
        t = b_89(t);
        x_11 = t;
        t = term_z_2;
        t = b_89(t);
        b_12 = t;
        t = term_z_2;
        t = b_89(t);
        d_12 = t;
        t = (ATerm) ATinsert(CheckATermList(l_10), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, n_11))), (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, k_11))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, p_11)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_k_8))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, b_12)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, d_12)), term_c_5), (ATerm) ATinsert(ATempty, i_10))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, t_11)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, x_11)), term_c_5), (ATerm) ATinsert(ATempty, a_10)))));
        t = e_12(t);
      }
    return(t);
  }
  t = e_12(t);
  return(t);
}
ATerm unflatten_list_0_0 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,a_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      a_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_13;
  if(match_cons(t, sym_list_1))
    {
      d_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_13;
  if(match_cons(t, sym_iter_1))
    {
      e_13 = ATgetArgument(t, 0);
      {
        static ATerm f_0 (ATerm t)
        {
          t = e_13;
          return(t);
        }
        t = g_13;
        t = MkLexConsList_1_0(f_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          e_13 = ATgetArgument(t, 0);
          t = g_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_12 = ATgetFirst((ATermList) t);
              y_12 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm q_13 = NULL;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_iter_1, e_13)), (ATerm) ATinsert(CheckATermList(y_12), x_12));
                t = unflatten_list_0_0(t);
                q_13 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, e_13))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, e_13)), term_c_5), (ATerm) ATinsert(ATempty, q_13));
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, e_13)), term_c_5), (ATerm) ATempty);
            }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              e_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_13;
          if(match_cons(t, sym_iter_sep_2))
            {
              f_13 = ATgetArgument(t, 0);
              w_12 = ATgetArgument(t, 1);
              {
                static ATerm i_0 (ATerm t)
                {
                  t = f_13;
                  return(t);
                }
                static ATerm v_0 (ATerm t)
                {
                  t = w_12;
                  return(t);
                }
                t = g_13;
                t = MkCfConsList_2_0(i_0, v_0, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  f_13 = ATgetArgument(t, 0);
                  w_12 = ATgetArgument(t, 1);
                  t = g_13;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_12 = ATgetFirst((ATermList) t);
                      y_12 = (ATerm) ATgetNext((ATermList) t);
                      {
                        ATerm g_14 = NULL;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, f_13, w_12))), (ATerm) ATinsert(CheckATermList(y_12), x_12));
                        t = unflatten_list_0_0(t);
                        g_14 = t;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, f_13, w_12))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, f_13, w_12)), term_c_5), (ATerm) ATinsert(ATempty, g_14));
                      }
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, f_13, w_12)), term_c_5), (ATerm) ATempty);
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      f_13 = ATgetArgument(t, 0);
                      {
                        static ATerm w_0 (ATerm t)
                        {
                          t = f_13;
                          return(t);
                        }
                        t = g_13;
                        t = MkCfConsList_1_0(w_0, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          f_13 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = g_13;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          x_12 = ATgetFirst((ATermList) t);
                          y_12 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm z_14 = NULL;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, f_13))), (ATerm) ATinsert(CheckATermList(y_12), x_12));
                            t = unflatten_list_0_0(t);
                            z_14 = t;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, f_13))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, f_13)), term_c_5), (ATerm) ATinsert(ATempty, z_14));
                          }
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, f_13)), term_c_5), (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm list_some_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  static ATerm i_16 (ATerm t)
  {
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,y_9 = NULL;
        i_15 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_15 = ATgetFirst((ATermList) t);
            g_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_15);
        c_15 = t;
        t = f_15;
        t = s_97(t);
        h_15 = t;
        t = (ATerm) ATinsert(CheckATermList(g_15), h_15);
        y_9 = t;
        t = SSLsetAnnotations(y_9, c_15);
        LocalPopChoice(o_8);
        {
          ATerm j_15 = NULL,k_15 = NULL,n_15 = NULL,o_15 = NULL,q_15 = NULL,b_10 = NULL;
          q_15 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_15 = ATgetFirst((ATermList) t);
              n_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_15);
          j_15 = t;
          t = n_15;
          {
            static ATerm a_1 (ATerm t)
            {
              ATerm r_8 = t;
              int s_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_97(t);
                  LocalPopChoice(s_8);
                }
              else
                {
                  t = r_8;
                }
              return(t);
            }
            t = map_1_0(a_1, t);
          }
          o_15 = t;
          t = (ATerm) ATinsert(CheckATermList(o_15), k_15);
          b_10 = t;
          t = SSLsetAnnotations(b_10, j_15);
        }
      }
    else
      {
        t = n_8;
        {
          ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,e_16 = NULL,h_16 = NULL,c_10 = NULL;
          h_16 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_15 = ATgetFirst((ATermList) t);
              v_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_16);
          t_15 = t;
          t = v_15;
          t = i_16(t);
          e_16 = t;
          t = (ATerm) ATinsert(CheckATermList(e_16), u_15);
          c_10 = t;
          t = SSLsetAnnotations(c_10, t_15);
        }
      }
    return(t);
  }
  t = i_16(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      m_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_explode_string(m_16);
  l_16 = t;
  t = map_1_0(g_1, t);
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, k_16, (ATerm)ATmakeAppl(sym_lit_1, m_16), term_c_5), l_16);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm n_16 = NULL;
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, n_16));
  return(t);
}
static ATerm r_5 (ATerm n_0, ATerm i_18, ATerm t)
{
  ATerm j_16 = NULL;
  t = i_18;
  t = list_some_1_0(d_1, t);
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, n_0, j_16);
  return(t);
}
ATerm bottomup_1_0 (ATerm c_91 (ATerm), ATerm t)
{
  static ATerm h_1 (ATerm t)
  {
    t = bottomup_1_0(c_91, t);
    return(t);
  }
  t = SRTS_all(h_1, t);
  t = c_91(t);
  return(t);
}
static ATerm t_5 (ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm r_16 = NULL;
  t = SSL_fputc(p_37, q_37);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_16);
  return(t);
}
static ATerm u_5 (ATerm k_22, ATerm l_22, ATerm t)
{
  ATerm s_16 = NULL;
  t = SSL_write_term_to_stream_text(k_22, l_22);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_16);
  return(t);
}
static ATerm w_5 (ATerm e_97 (ATerm), ATerm a_184, ATerm q_22, ATerm t)
{
  ATerm u_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_184, term_t_8);
  t = a_6(t);
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_16, q_22);
  t = e_97(t);
  t = fclose_0_0(t);
  t = q_22;
  return(t);
}
static ATerm v_5 (ATerm g_22, ATerm h_22, ATerm t)
{
  ATerm w_16 = NULL;
  t = SSL_write_term_to_stream_baf(g_22, h_22);
  w_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_16);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm p_1 = NULL,b_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_8 = ATgetArgument(t, 0);
      if(match_cons(u_8, sym_Stream_1))
        {
          p_1 = ATgetArgument(u_8, 0);
        }
      else
        _fail(t);
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(p_1, b_2, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_8 = ATgetArgument(t, 0);
      if(match_cons(v_8, sym_Stream_1))
        {
          s_2 = ATgetArgument(v_8, 0);
        }
      else
        _fail(t);
      t_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(s_2, t_2, t);
  p_2 = t;
  t = term_w_8;
  q_2 = t;
  t = p_2;
  if(match_cons(t, sym_Stream_1))
    {
      r_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_8, p_2);
  t = t_5(q_2, r_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,l_21 = NULL,r_21 = NULL,j_10 = NULL,g_10 = NULL;
  j_17 = t;
  if(match_cons(t, sym__2))
    {
      t_17 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_17);
  s_17 = t;
  t = t_17;
  {
    ATerm x_8 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm i_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((i_17 != NULL) && (i_17 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(i_1, t);
        LocalPopChoice(e_9);
      }
    else
      {
        t = x_8;
        t = term_f_9;
        i_17 = t;
      }
  }
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_17, u_17);
  g_10 = t;
  t = SSLsetAnnotations(g_10, s_17);
  t = j_17;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_17);
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_17, (ATerm) ATmakeAppl(sym__2, not_null(i_17), m_17));
  j_10 = t;
  t = SSLsetAnnotations(j_10, k_17);
  r_17 = t;
  if(match_cons(t, sym__2))
    {
      l_21 = ATgetArgument(t, 0);
      r_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,o_1 = NULL,k_10 = NULL;
        t = SSLgetAnnotations(r_17);
        j_0 = t;
        t = l_21;
        t = fetch_1_0(j_1, t);
        x_0 = t;
        t = r_21;
        if(match_cons(t, sym__2))
          {
            z_0 = ATgetArgument(t, 0);
            o_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_5(k_1, z_0, o_1, t);
        y_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_0, y_0);
        k_10 = t;
        t = SSLsetAnnotations(k_10, j_0);
        LocalPopChoice(m_9);
      }
    else
      {
        t = k_9;
        {
          ATerm i_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_10 = NULL;
          t = SSLgetAnnotations(r_17);
          i_2 = t;
          t = r_21;
          if(match_cons(t, sym__2))
            {
              n_2 = ATgetArgument(t, 0);
              o_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_5(l_1, n_2, o_2, t);
          m_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_21, m_2);
          p_10 = t;
          t = SSLsetAnnotations(p_10, i_2);
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
ATerm apply_strategy_1_0 (ATerm c_116 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,e_22 = NULL,f_22 = NULL,i_22 = NULL,j_22 = NULL;
  j_22 = t;
  t = dtime_0_0(t);
  t = j_22;
  t = c_116(t);
  i_22 = t;
  t = dtime_0_0(t);
  y_21 = t;
  t = i_22;
  if(match_cons(t, sym__2))
    {
      e_22 = ATgetArgument(t, 0);
      f_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_22), (ATerm) ATmakeAppl(sym_Runtime_1, y_21)), f_22);
  return(t);
}
static ATerm n_23 (ATerm e_23, ATerm t)
{
  t = SSL_fclose(e_23);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_23 = NULL,l_23 = NULL;
  l_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_23 = ATgetArgument(t, 0);
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_23);
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            t = n_23(l_23, t);
          }
      }
    }
  else
    {
      t = n_23(l_23, t);
    }
  return(t);
}
static ATerm x_5 (ATerm m_22, ATerm t)
{
  t = SSL_read_term_from_stream(m_22);
  return(t);
}
static ATerm y_5 (ATerm i_36, ATerm j_36, ATerm t)
{
  t = SSL_strcat(i_36, j_36);
  return(t);
}
static ATerm z_5 (ATerm r_37, ATerm s_37, ATerm t)
{
  ATerm p_23 = NULL;
  t = SSL_fopen(r_37, s_37);
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_23);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_23 = NULL;
  t = SSL_stdin_stream();
  s_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_23 = NULL;
  t = SSL_stdout_stream();
  v_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_23 = NULL;
  t = SSL_stderr_stream();
  w_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_23);
  return(t);
}
static ATerm w_25 (ATerm i_24, ATerm t)
{
  ATerm l_24 = NULL;
  t = SSL_explode_term(i_24);
  if(match_cons(t, sym__2))
    {
      ATerm s_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_9 = ATgetArgument(t, 1);
        if(((ATgetType(w_9) == AT_LIST) && !(ATisEmpty(w_9))))
          {
            l_24 = ATgetFirst((ATermList) w_9);
            {
              ATerm x_9 = (ATerm) ATgetNext((ATermList) w_9);
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
static ATerm x_25 (ATerm s_24, ATerm t_24, ATerm w_24, ATerm t)
{
  ATerm x_24 = NULL,a_25 = NULL,b_25 = NULL,g_25 = NULL,x_10 = NULL;
  t = SSLgetAnnotations(w_24);
  b_25 = t;
  t = s_24;
  if(match_cons(t, sym_Path_1))
    {
      g_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_25, t_24);
  x_10 = t;
  t = SSLsetAnnotations(x_10, b_25);
  if(match_cons(t, sym__2))
    {
      x_24 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(x_24, a_25, t);
  return(t);
}
static ATerm y_25 (ATerm j_25, ATerm k_25, ATerm l_25, ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,r_25 = NULL,z_10 = NULL;
  t = SSLgetAnnotations(l_25);
  o_25 = t;
  t = SSL_is_string(j_25);
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_25, k_25);
  z_10 = t;
  t = SSLsetAnnotations(z_10, o_25);
  if(match_cons(t, sym__2))
    {
      m_25 = ATgetArgument(t, 0);
      n_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(m_25, n_25, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t_25 = t;
  if(match_cons(t, sym__2))
    {
      u_25 = ATgetArgument(t, 0);
      v_25 = ATgetArgument(t, 1);
      {
        ATerm z_9 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_25(t_25, t);
            LocalPopChoice(d_10);
          }
        else
          {
            t = z_9;
            {
              ATerm e_10 = t;
              int f_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_25(u_25, v_25, t_25, t);
                  LocalPopChoice(f_10);
                }
              else
                {
                  t = e_10;
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
  ATerm c_26 = NULL,d_26 = NULL,f_26 = NULL,k_26 = NULL;
  k_26 = t;
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_26, term_o_10);
        t = a_6(t);
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        {
          ATerm o_3 = NULL,w_3 = NULL;
          t = term_q_10;
          w_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_10, k_26);
          t = y_5(w_3, k_26, t);
          o_3 = t;
          t = SSL_perror(o_3);
          _fail(t);
        }
      }
  }
  d_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(f_26, t);
  c_26 = t;
  t = d_26;
  t = fclose_0_0(t);
  t = c_26;
  return(t);
}
ATerm fetch_1_0 (ATerm x_97 (ATerm), ATerm t)
{
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
      ATerm r_10 = t;
      int s_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_4 = NULL,l_4 = NULL,c_11 = NULL;
          t = SSLgetAnnotations(g_27);
          c_4 = t;
          t = h_27;
          t = x_97(t);
          l_4 = t;
          t = (ATerm) ATinsert(CheckATermList(i_27), l_4);
          c_11 = t;
          t = SSLsetAnnotations(c_11, c_4);
          LocalPopChoice(s_10);
        }
      else
        {
          t = r_10;
          {
            ATerm b_5 = NULL,f_5 = NULL,d_11 = NULL;
            t = SSLgetAnnotations(g_27);
            b_5 = t;
            t = i_27;
            t = j_27(t);
            f_5 = t;
            t = (ATerm) ATinsert(CheckATermList(f_5), h_27);
            d_11 = t;
            t = SSLsetAnnotations(d_11, b_5);
          }
        }
    }
    return(t);
  }
  t = j_27(t);
  return(t);
}
static ATerm f_6 (ATerm h_62, ATerm i_62, ATerm t)
{
  ATerm m_27 = NULL;
  t = lookup_table_0_1(h_62, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(i_62, m_27, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_114 (ATerm), ATerm t)
{
  ATerm p_27 = NULL;
  p_27 = t;
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
        t = term_y_10;
        s_27 = t;
        t = term_a_11;
        t_27 = t;
        t = term_b_11;
        t = f_6(s_27, t_27, t);
        r_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_27, term_e_11);
        t = geq_0_0(t);
        t = p_27;
        t = l_114(t);
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = p_27;
      }
  }
  return(t);
}
static ATerm m_1 (ATerm t)
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
static ATerm n_1 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
  x_27 = t;
  t = SSL_string_to_int(x_27);
  y_27 = t;
  t = term_f_11;
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, y_27);
  t = i_6(z_27, y_27, t);
  t = x_27;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_1, n_1, q_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
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
static ATerm w_1 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL;
  t = term_a_11;
  c_28 = t;
  t = term_e_5;
  d_28 = t;
  t = term_h_11;
  t = i_6(c_28, d_28, t);
  t = term_i_11;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_l_11;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
  e_28 = t;
  t = SSL_string_to_int(e_28);
  f_28 = t;
  t = term_a_11;
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_11, f_28);
  t = i_6(g_28, f_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_28);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_o_11;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL;
  t = term_r_11;
  h_28 = t;
  t = term_z_2;
  i_28 = t;
  t = term_u_11;
  t = i_6(h_28, i_28, t);
  t = term_w_11;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_z_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_1, w_1, x_1, t);
      LocalPopChoice(f_12);
    }
  else
    {
      t = c_12;
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_1, z_1, a_2, t);
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            t = Option_3_0(c_2, d_2, e_2, t);
          }
      }
    }
  return(t);
}
static ATerm i_6 (ATerm w_55, ATerm x_55, ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL;
  t = term_y_10;
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_10, w_55, x_55);
  t = lookup_table_0_1(j_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(w_55, x_55, k_28, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_10, w_55, x_55);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
      t = term_z_2;
      t = h_0(t);
      q_28 = t;
      t = term_i_12;
      r_28 = t;
      t = term_j_12;
      s_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_12, term_j_12, q_28);
      t = g_6(r_28, s_28, q_28, t);
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
      t = term_z_2;
      t = g_0(t);
      v_28 = t;
      t = (ATerm) ATinsert(CheckATermList(p_28), v_28);
    }
  return(t);
}
static ATerm f_2 (ATerm t)
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
static ATerm g_2 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  y_28 = t;
  t = term_k_12;
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_12, y_28);
  t = i_6(z_28, y_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_28);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_l_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_2, g_2, h_2, t);
  return(t);
}
static ATerm g_6 (ATerm o_60, ATerm p_60, ATerm n_60, ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_60, p_60);
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_12 = ATgetArgument(t, 0);
            ATerm p_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_60, p_60);
        t = f_6(o_60, p_60, t);
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        t = (ATerm) ATempty;
      }
  }
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_60, p_60, (ATerm) ATinsert(CheckATermList(c_29), n_60));
  t = lookup_table_0_1(o_60, t);
  f_29 = t;
  t = (ATerm) ATinsert(CheckATermList(c_29), n_60);
  d_29 = t;
  t = f_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(p_60, d_29, e_29, t);
  t = b_29;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,q_29 = NULL,r_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
      t = term_z_2;
      t = r_0(t);
      s_29 = t;
      t = term_i_12;
      t_29 = t;
      t = term_j_12;
      u_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_12, term_j_12, s_29);
      t = g_6(t_29, u_29, s_29, t);
      _fail(t);
    }
  else
    {
      ATerm y_29 = NULL;
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
          q_29 = ATgetFirst((ATermList) t);
          r_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_29;
      t = p_0(t);
      t = q_29;
      t = q_0(t);
      y_29 = t;
      t = (ATerm) ATinsert(CheckATermList(r_29), y_29);
    }
  return(t);
}
static ATerm j_2 (ATerm t)
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
static ATerm l_2 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  b_30 = t;
  t = term_q_12;
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_12, b_30);
  t = i_6(c_30, b_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_30);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_2, l_2, u_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_2;
  t = whoami_0_0(t);
  d_30 = t;
  t = term_w_4;
  f_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_12), d_30);
  g_30 = t;
  t = SSL_printnl(f_30, g_30);
  t = term_a_5;
  e_30 = t;
  t = SSL_exit(e_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
  t = term_y_10;
  h_30 = t;
  t = term_t_12;
  i_30 = t;
  t = term_u_12;
  t = f_6(h_30, i_30, t);
  return(t);
}
static ATerm b_6 (ATerm k_40, ATerm l_40, ATerm t)
{
  ATerm v_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_40, l_40);
      LocalPopChoice(z_12);
    }
  else
    {
      t = v_12;
      t = SSL_addr(k_40, l_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  k_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_30;
      t = m_104(t);
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
      t = foldr_2_0(m_104, n_104, t);
      p_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_30, p_30);
      t = n_104(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_e_5;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm o_5 = NULL,s_5 = NULL;
  if(match_cons(t, sym__2))
    {
      o_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(o_5, s_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_30 = NULL,k_5 = NULL,l_5 = NULL;
  t = times_0_0(t);
  l_5 = t;
  t = SSL_explode_term(l_5);
  if(match_cons(t, sym__2))
    {
      ATerm b_13 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5;
  t = foldr_2_0(v_2, w_2, t);
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
    ATerm c_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_31;
        if((e_31 != t))
          {
            _fail(t);
          }
        t = d_31;
        LocalPopChoice(h_13);
      }
    else
      {
        t = c_13;
        t = (ATerm) ATmakeAppl(sym__2, e_31, f_31);
        {
          ATerm i_13 = t;
          int j_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_31, f_31);
              LocalPopChoice(j_13);
            }
          else
            {
              t = i_13;
              t = SSL_gtr(e_31, f_31);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_31, f_31);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_114 (ATerm), ATerm t)
{
  ATerm j_31 = NULL;
  j_31 = t;
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
        t = term_y_10;
        m_31 = t;
        t = term_a_11;
        n_31 = t;
        t = term_b_11;
        t = f_6(m_31, n_31, t);
        l_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_31, term_a_5);
        t = geq_0_0(t);
        t = j_31;
        t = k_114(t);
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        t = j_31;
      }
  }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,s_31 = NULL,t_31 = NULL;
  t = run_time_0_0(t);
  p_31 = t;
  t = term_z_2;
  t = whoami_0_0(t);
  q_31 = t;
  t = term_w_4;
  s_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_13), p_31), term_m_13), q_31);
  t_31 = t;
  t = SSL_printnl(s_31, t_31);
  t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_13), p_31), term_m_13), q_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_5;
  u_31 = t;
  t = SSL_exit(u_31);
  return(t);
}
static ATerm b_3 (ATerm t)
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
            ATerm g_7 = NULL,j_11 = NULL;
            t = SSLgetAnnotations(f_32);
            g_7 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_32);
            j_11 = t;
            t = SSLsetAnnotations(j_11, g_7);
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
ATerm need_help_1_0 (ATerm a_117 (ATerm), ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_31 = NULL,y_31 = NULL;
      t = term_y_10;
      x_31 = t;
      t = term_r_13;
      y_31 = t;
      t = term_s_13;
      t = f_6(x_31, y_31, t);
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      t = fetch_1_0(b_3, t);
    }
  t = a_117(t);
  return(t);
}
static ATerm j_6 (ATerm g_65, ATerm h_65, ATerm i_65, ATerm t)
{
  ATerm h_32 = NULL;
  t = SSL_hashtable_put(i_65, g_65, h_65);
  h_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_32);
  return(t);
}
static ATerm k_6 (ATerm j_65, ATerm k_65, ATerm t)
{
  t = SSL_hashtable_get(k_65, j_65);
  return(t);
}
ATerm lookup_table_0_1 (ATerm a_62, ATerm t)
{
  ATerm q_32 = NULL;
  t = table_hashtable_0_0(t);
  q_32 = t;
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_7 = NULL;
        t = q_32;
        if(match_cons(t, sym_Hashtable_1))
          {
            t_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_6(a_62, t_7, t);
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        {
          ATerm c_8 = NULL;
          t = a_62;
          t = table_create_0_0(t);
          t = q_32;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_6(a_62, c_8, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_65, ATerm p_65, ATerm t)
{
  ATerm t_32 = NULL;
  t = SSL_hashtable_create(o_65, p_65);
  t_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_32);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL,y_32 = NULL,z_32 = NULL;
  u_32 = t;
  t = term_v_13;
  y_32 = t;
  t = term_w_13;
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
  t = j_6(u_32, v_32, w_32, t);
  t = u_32;
  return(t);
}
static ATerm d_6 (ATerm l_65, ATerm m_65, ATerm t)
{
  ATerm a_33 = NULL;
  t = SSL_hashtable_remove(m_65, l_65);
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_33);
  return(t);
}
static ATerm e_6 (ATerm q_65, ATerm t)
{
  ATerm b_33 = NULL;
  t = SSL_hashtable_destroy(q_65);
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
  t = e_6(g_33, t);
  t = e_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(d_33, f_33, t);
  t = d_33;
  return(t);
}
ATerm map_1_0 (ATerm n_97 (ATerm), ATerm t)
{
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
        ATerm h_8 = NULL,p_8 = NULL,q_8 = NULL,m_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_33 = ATgetFirst((ATermList) t);
            u_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_33);
        h_8 = t;
        t = t_33;
        t = n_97(t);
        p_8 = t;
        t = u_33;
        t = v_33(t);
        q_8 = t;
        t = (ATerm) ATinsert(CheckATermList(q_8), p_8);
        m_11 = t;
        t = SSLsetAnnotations(m_11, h_8);
      }
    return(t);
  }
  t = v_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_33 = ATgetFirst((ATermList) t);
      z_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_34 = NULL,e_34 = NULL;
        static ATerm c_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_34)), not_null(e_34));
          return(t);
        }
        t = z_33;
        t = m_0(t);
        if(((d_34 != NULL) && (d_34 != t)))
          _fail(t);
        else
          d_34 = t;
        t = y_33;
        t = l_0(t);
        if(((e_34 != NULL) && (e_34 != t)))
          _fail(t);
        else
          e_34 = t;
        t = z_33;
        t = reverse_acc_2_0(l_0, c_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_2;
      t = m_0(t);
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm t_34 = NULL;
  t_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_34), term_x_13);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL;
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_34 = NULL,m_34 = NULL;
      t = term_y_10;
      l_34 = t;
      t = term_t_12;
      m_34 = t;
      t = term_u_12;
      t = f_6(l_34, m_34, t);
      i_34 = t;
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
        static ATerm d_3 (ATerm t)
        {
          ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_11 = NULL;
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
          q_11 = t;
          t = SSLsetAnnotations(q_11, n_34);
          return(t);
        }
        t = fetch_1_0(d_3, t);
      }
    }
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_14), not_null(i_34)), term_c_14);
        t = echo_0_0(t);
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
      }
  }
  t = term_e_14;
  t = echo_0_0(t);
  t = term_i_12;
  j_34 = t;
  t = term_j_12;
  k_34 = t;
  t = term_f_14;
  t = f_6(j_34, k_34, t);
  t = reverse_acc_2_0(_id, e_3, t);
  t = map_1_0(f_3, t);
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_14), term_m_14), term_l_14), term_k_14), term_j_14);
        t = echo_0_0(t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
  x_34 = t;
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
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
                ATerm q_14 = ATgetFirst((ATermList) t);
                ATerm r_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_34;
          }
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        t = (ATerm) ATinsert(ATempty, x_34);
      }
  }
  y_34 = t;
  t = term_f_9;
  z_34 = t;
  t = SSL_printnl(z_34, y_34);
  t = x_34;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL;
  t = term_y_10;
  d_35 = t;
  t = term_t_12;
  e_35 = t;
  t = term_u_12;
  t = f_6(d_35, e_35, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL;
  t = term_s_14;
  f_35 = t;
  t = term_z_2;
  g_35 = t;
  t = term_t_14;
  t = i_6(f_35, g_35, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_u_14;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL;
  t = term_s_14;
  j_35 = t;
  t = term_z_2;
  k_35 = t;
  t = term_t_14;
  t = i_6(j_35, k_35, t);
  t = term_v_14;
  h_35 = t;
  t = term_z_2;
  i_35 = t;
  t = term_w_14;
  t = i_6(h_35, i_35, t);
  t = term_x_14;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_y_14;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_3, k_3, p_3, t);
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      t = Option_3_0(x_3, y_3, z_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_69 (ATerm), ATerm f_69 (ATerm), ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,s_11 = NULL;
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
  t = e_69(t);
  o_35 = t;
  t = n_35;
  t = f_69(t);
  p_35 = t;
  t = (ATerm) ATinsert(CheckATermList(p_35), o_35);
  s_11 = t;
  t = SSLsetAnnotations(s_11, l_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_119 (ATerm), ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,a_36 = NULL,b_36 = NULL,v_11 = NULL;
  v_35 = t;
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_15;
        t = d_119(t);
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
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
  t = term_t_12;
  b_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_12, x_35);
  t = i_6(b_36, x_35, t);
  t = y_35;
  {
    static ATerm n_36 (ATerm t)
    {
      ATerm m_15 = t;
      int p_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_15 = t;
          int s_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_36 = NULL;
              e_36 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_36;
              LocalPopChoice(s_15);
            }
          else
            {
              t = r_15;
              t = d_119(t);
              t = Cons_2_0(_id, n_36, t);
            }
          LocalPopChoice(p_15);
        }
      else
        {
          t = m_15;
          {
            ATerm h_36 = NULL,k_36 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_36 = ATgetFirst((ATermList) t);
                k_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_36), (ATerm) ATmakeAppl(sym_Undefined_1, h_36));
          }
        }
      return(t);
    }
    t = n_36(t);
  }
  a_36 = t;
  t = (ATerm) ATinsert(CheckATermList(a_36), (ATerm) ATmakeAppl(sym_Program_1, x_35));
  v_11 = t;
  t = SSLsetAnnotations(v_11, w_35);
  return(t);
}
static ATerm b_4 (ATerm t)
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
static ATerm d_4 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  t = term_r_13;
  b_37 = t;
  t = term_z_2;
  c_37 = t;
  t = term_w_15;
  t = i_6(b_37, c_37, t);
  t = term_x_15;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_y_15;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_119 (ATerm), ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
  u_36 = t;
  t = term_i_12;
  v_36 = t;
  t = term_z_15;
  t = lookup_table_0_1(v_36, t);
  z_36 = t;
  t = term_j_12;
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
  t = j_6(w_36, x_36, y_36, t);
  t = u_36;
  {
    static ATerm a_4 (ATerm t)
    {
      ATerm a_16 = t;
      int b_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_119(t);
          LocalPopChoice(b_16);
        }
      else
        {
          t = a_16;
          {
            ATerm c_16 = t;
            int d_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_4, d_4, e_4, t);
                LocalPopChoice(d_16);
              }
            else
              {
                t = c_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_4, t);
  }
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_37 = NULL;
        n_37 = t;
        {
          ATerm o_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_9 = NULL;
              t = n_37;
              {
                ATerm q_16 = t;
                int t_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_9 = NULL,p_9 = NULL;
                    t = term_y_10;
                    o_9 = t;
                    t = term_r_13;
                    p_9 = t;
                    t = term_s_13;
                    t = f_6(o_9, p_9, t);
                    LocalPopChoice(t_16);
                  }
                else
                  {
                    t = q_16;
                    t = fetch_1_0(f_4, t);
                  }
              }
              t = n_37;
              t = default_system_usage_0_0(t);
              t = term_e_5;
              n_9 = t;
              t = SSL_exit(n_9);
              LocalPopChoice(p_16);
            }
          else
            {
              t = o_16;
              {
                ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
                t = term_y_10;
                u_9 = t;
                t = term_s_14;
                v_9 = t;
                t = term_v_16;
                t = f_6(u_9, v_9, t);
                t = n_37;
                t = default_system_about_0_0(t);
                t = term_e_5;
                t_9 = t;
                t = SSL_exit(t_9);
              }
            }
        }
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        {
          ATerm x_16 = t;
          int y_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_37 = NULL,v_37 = NULL,w_37 = NULL;
              static ATerm g_4 (ATerm t)
              {
                ATerm x_37 = NULL,y_37 = NULL,a_38 = NULL,y_11 = NULL;
                a_38 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_37 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_38);
                x_37 = t;
                t = y_37;
                if(((s_36 != NULL) && (s_36 != t)))
                  _fail(t);
                else
                  s_36 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_37);
                y_11 = t;
                t = SSLsetAnnotations(y_11, x_37);
                return(t);
              }
              t = fetch_1_0(g_4, t);
              t = term_w_4;
              v_37 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_36)), term_z_16);
              w_37 = t;
              t = SSL_printnl(v_37, w_37);
              t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_36)), term_z_16));
              t = default_system_usage_0_0(t);
              t = term_a_5;
              o_37 = t;
              t = SSL_exit(o_37);
              LocalPopChoice(y_16);
            }
          else
            {
              t = x_16;
            }
        }
      }
  }
  t_36 = t;
  t = term_i_12;
  t = table_destroy_0_0(t);
  t = t_36;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL;
  t = parse_options_1_0(c_117, t);
  f_38 = t;
  t = term_a_17;
  t = table_create_0_0(t);
  t = term_a_17;
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_17, term_b_17, f_38);
  t = lookup_table_0_1(g_38, t);
  j_38 = t;
  t = term_b_17;
  h_38 = t;
  t = j_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(h_38, f_38, i_38, t);
  t = f_38;
  t = e_117(t);
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_117, t);
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        {
          ATerm e_17 = t;
          int f_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_117(t);
              t = report_success_0_0(t);
              LocalPopChoice(f_17);
            }
          else
            {
              t = e_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = if_verbose2_1_0(o_4, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL;
  t = term_g_17;
  k_38 = t;
  t = term_z_2;
  l_38 = t;
  t = term_h_17;
  t = i_6(k_38, l_38, t);
  t = term_n_17;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_o_17;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
  m_38 = t;
  t = term_y_10;
  q_38 = t;
  t = term_t_12;
  r_38 = t;
  t = term_u_12;
  t = f_6(q_38, r_38, t);
  n_38 = t;
  t = term_w_4;
  o_38 = t;
  t = (ATerm) ATinsert(ATempty, n_38);
  p_38 = t;
  t = SSL_printnl(o_38, p_38);
  t = m_38;
  return(t);
}
ATerm iowrap_3_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm t)
{
  static ATerm h_4 (ATerm t)
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_116(t);
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        {
          ATerm w_17 = t;
          int x_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(x_17);
            }
          else
            {
              t = w_17;
              {
                ATerm y_17 = t;
                int z_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(z_17);
                  }
                else
                  {
                    t = y_17;
                    {
                      ATerm a_18 = t;
                      int b_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(k_4, m_4, n_4, t);
                          LocalPopChoice(b_18);
                        }
                      else
                        {
                          t = a_18;
                          {
                            ATerm c_18 = t;
                            int d_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(d_18);
                              }
                            else
                              {
                                t = c_18;
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
  static ATerm j_4 (ATerm t)
  {
    ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
    t_38 = t;
    {
      ATerm e_18 = t;
      int f_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm p_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((s_38 != NULL) && (s_38 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_38 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_4, t);
          LocalPopChoice(f_18);
        }
      else
        {
          t = e_18;
          t = term_g_18;
          s_38 = t;
        }
    }
    t = not_null(s_38);
    t = ReadFromFile_0_0(t);
    u_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_38, u_38);
    t = apply_strategy_1_0(l_116, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(h_4, n_116, i_4, j_4, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,a_12 = NULL;
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
  t = bottomup_1_0(t_4, t);
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_39, t_39);
  a_12 = t;
  t = SSLsetAnnotations(a_12, q_39);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
  x_39 = t;
  if(match_cons(t, sym_appl_2))
    {
      v_39 = ATgetArgument(t, 0);
      w_39 = ATgetArgument(t, 1);
      {
        ATerm h_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_39;
            t = r_5(v_39, w_39, t);
            LocalPopChoice(j_18);
          }
        else
          {
            t = h_18;
            t = x_39;
          }
      }
    }
  else
    {
      t = x_39;
    }
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = unflatten_list_0_0(t);
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
      }
  }
  q_40 = t;
  if(match_cons(t, sym_appl_2))
    {
      e_40 = ATgetArgument(t, 0);
      p_40 = ATgetArgument(t, 1);
      t = e_40;
      if(match_cons(t, sym_prod_3))
        {
          f_40 = ATgetArgument(t, 0);
          j_40 = ATgetArgument(t, 1);
          o_40 = ATgetArgument(t, 2);
          t = o_40;
          if(match_cons(t, sym_no_attrs_0))
            {
              t = j_40;
              if(match_cons(t, sym_cf_1))
                {
                  m_40 = ATgetArgument(t, 0);
                  t = m_40;
                  if(match_cons(t, sym_opt_1))
                    {
                      n_40 = ATgetArgument(t, 0);
                      t = n_40;
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
                                          ATerm m_18 = t;
                                          int n_18 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = q_40;
                                              t = q_5(p_40, t);
                                              LocalPopChoice(n_18);
                                            }
                                          else
                                            {
                                              t = m_18;
                                              t = q_40;
                                            }
                                        }
                                      else
                                        {
                                          t = q_40;
                                        }
                                    }
                                  else
                                    {
                                      t = q_40;
                                    }
                                }
                              else
                                {
                                  t = q_40;
                                }
                            }
                          else
                            {
                              t = q_40;
                            }
                        }
                      else
                        {
                          t = q_40;
                        }
                    }
                  else
                    {
                      t = q_40;
                    }
                }
              else
                {
                  t = q_40;
                }
            }
          else
            {
              t = q_40;
            }
        }
      else
        {
          t = q_40;
        }
    }
  else
    {
      t = q_40;
    }
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = unflatten_lexical_0_0(t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(s_4, _fail, default_usage_0_0, t);
  return(t);
}
