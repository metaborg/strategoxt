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
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_prod_3;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_layout_0;
Symbol sym_opt_1;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_left_0;
Symbol sym_assoc_0;
Symbol sym_char_class_1;
Symbol sym_range_2;
Symbol sym_lit_1;
Symbol sym_list_1;
Symbol sym_lit_1;
Symbol sym_assoc_1;
Symbol sym_layout_0;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_opt_1;
Symbol sym_lit_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_char_class_1;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
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
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_left_0 = ATmakeSymbol("left", 0, ATfalse);
  ATprotectSymbol(sym_left_0);
  sym_assoc_0 = ATmakeSymbol("assoc", 0, ATfalse);
  ATprotectSymbol(sym_assoc_0);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_range_2 = ATmakeSymbol("range", 2, ATfalse);
  ATprotectSymbol(sym_range_2);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_list_1 = ATmakeSymbol("list", 1, ATfalse);
  ATprotectSymbol(sym_list_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_assoc_1 = ATmakeSymbol("assoc", 1, ATfalse);
  ATprotectSymbol(sym_assoc_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
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
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
}
ATerm term_f_18;
ATerm term_m_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_s_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_d_15;
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
ATerm term_p_13;
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
ATerm term_x_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_d_9;
ATerm term_v_8;
ATerm term_s_8;
ATerm term_m_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_u_7;
ATerm term_s_7;
ATerm term_n_7;
ATerm term_g_5;
ATerm term_f_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_y_4;
ATerm term_x_4;
ATerm term_v_4;
ATerm term_s_4;
ATerm term_z_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_2));
  term_z_2 = (ATerm) ATmakeAppl(sym__0);
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
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeInt(255);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(sym_range_2, term_b_5, term_f_5);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_lex_1, term_n_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_cf_1, term_n_7);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_left_0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_assoc_1, term_i_8);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_opt_1, term_n_7);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_cf_1, term_k_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_z_10);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_b_5);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_5);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym__2, term_p_11, term_z_2);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
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
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_s_12);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_p_13);
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
  term_s_14 = (ATerm) ATmakeAppl(sym__2, term_r_14, term_z_2);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_z_2);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_z_2);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym__3, term_h_12, term_i_12, (ATerm) ATempty);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_r_14);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__2, term_f_17, term_z_2);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm o_5 (ATerm j_21, ATerm k_21, ATerm l_21, ATerm t);
ATerm unflatten_lexical_0_0 (ATerm t);
ATerm MkLayoutCharacter_0_0 (ATerm t);
ATerm MkLayoutConsList_0_0 (ATerm t);
static ATerm p_5 (ATerm z_20, ATerm t);
ATerm MkCfConsList_1_0 (ATerm r_80 (ATerm), ATerm t);
ATerm MkCfConsList_2_0 (ATerm t_80 (ATerm), ATerm u_80 (ATerm), ATerm t);
ATerm MkLexConsList_1_0 (ATerm w_80 (ATerm), ATerm t);
ATerm unflatten_list_0_0 (ATerm t);
ATerm list_some_1_0 (ATerm j_89 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm q_5 (ATerm x_18, ATerm y_18, ATerm t);
ATerm bottomup_1_0 (ATerm t_82 (ATerm), ATerm t);
static ATerm s_5 (ATerm f_38, ATerm g_38, ATerm t);
static ATerm t_5 (ATerm a_23, ATerm b_23, ATerm t);
static ATerm v_5 (ATerm v_88 (ATerm), ATerm u_173, ATerm g_23, ATerm t);
static ATerm u_5 (ATerm w_22, ATerm x_22, ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm m_106 (ATerm), ATerm t);
static ATerm o_23 (ATerm d_23, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_5 (ATerm c_23, ATerm t);
static ATerm x_5 (ATerm y_36, ATerm z_36, ATerm t);
static ATerm y_5 (ATerm h_38, ATerm i_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_25 (ATerm l_24, ATerm t);
static ATerm y_25 (ATerm t_24, ATerm u_24, ATerm x_24, ATerm t);
static ATerm z_25 (ATerm k_25, ATerm l_25, ATerm m_25, ATerm t);
static ATerm z_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_89 (ATerm), ATerm t);
static ATerm e_6 (ATerm m_54, ATerm n_54, ATerm t);
ATerm if_verbose2_1_0 (ATerm v_104 (ATerm), ATerm t);
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
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_6 (ATerm y_47, ATerm z_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_6 (ATerm t_52, ATerm u_52, ATerm s_52, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_6 (ATerm b_41, ATerm c_41, ATerm t);
ATerm foldr_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm u_104 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm need_help_1_0 (ATerm k_107 (ATerm), ATerm t);
static ATerm i_6 (ATerm l_56, ATerm m_56, ATerm n_56, ATerm t);
static ATerm j_6 (ATerm o_56, ATerm p_56, ATerm t);
ATerm lookup_table_0_1 (ATerm f_54, ATerm t);
ATerm new_hashtable_0_2 (ATerm t_56, ATerm u_56, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm c_6 (ATerm q_56, ATerm r_56, ATerm t);
static ATerm d_6 (ATerm v_56, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm e_89 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm j_60 (ATerm), ATerm k_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_109 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm parse_options_1_0 (ATerm m_109 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm iowrap_3_0 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
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
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,q_0 = NULL,r_0 = NULL;
  a_0 = t;
  t = term_z_2;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_s_4;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_4), b_0), term_v_4);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_y_4;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
static ATerm o_5 (ATerm j_21, ATerm k_21, ATerm l_21, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, j_21)), (ATerm)ATmakeAppl(sym_cf_1, j_21), term_a_5), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_g_5))))), (ATerm)ATmakeAppl(sym_lex_1, j_21), term_a_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, k_21, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_g_5)))), term_a_5), l_21))));
  return(t);
}
ATerm unflatten_lexical_0_0 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm h_5 = ATgetArgument(t, 0);
      if(match_cons(h_5, sym_prod_3))
        {
          ATerm l_5 = ATgetArgument(h_5, 0);
          if(((ATgetType(l_5) == AT_LIST) && !(ATisEmpty(l_5))))
            {
              ATerm k_6 = ATgetFirst((ATermList) l_5);
              if(match_cons(k_6, sym_lex_1))
                {
                  s_0 = ATgetArgument(k_6, 0);
                }
              else
                _fail(t);
              {
                ATerm l_6 = (ATerm) ATgetNext((ATermList) l_5);
                if(((ATgetType(l_6) != AT_LIST) || !(ATisEmpty(l_6))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm b_6 = ATgetArgument(h_5, 1);
            if(match_cons(b_6, sym_cf_1))
              {
                if((s_0 != ATgetArgument(b_6, 0)))
                  {
                    _fail(ATgetArgument(b_6, 0));
                  }
              }
            else
              _fail(t);
          }
          {
            ATerm g_6 = ATgetArgument(h_5, 2);
            if(!(match_cons(g_6, sym_no_attrs_0)))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm i_5 = ATgetArgument(t, 1);
        if(((ATgetType(i_5) == AT_LIST) && !(ATisEmpty(i_5))))
          {
            ATerm m_6 = ATgetFirst((ATermList) i_5);
            if(match_cons(m_6, sym_appl_2))
              {
                ATerm o_6 = ATgetArgument(m_6, 0);
                if(match_cons(o_6, sym_prod_3))
                  {
                    t_0 = ATgetArgument(o_6, 0);
                    {
                      ATerm s_6 = ATgetArgument(o_6, 1);
                      if(match_cons(s_6, sym_iter_star_1))
                        {
                          ATerm u_6 = ATgetArgument(s_6, 0);
                          if(match_cons(u_6, sym_char_class_1))
                            {
                              ATerm v_6 = ATgetArgument(u_6, 0);
                              if(((ATgetType(v_6) == AT_LIST) && !(ATisEmpty(v_6))))
                                {
                                  ATerm a_7 = ATgetFirst((ATermList) v_6);
                                  if(match_cons(a_7, sym_range_2))
                                    {
                                      ATerm f_7 = ATgetArgument(a_7, 0);
                                      if(((ATgetType(f_7) != AT_INT) || (ATgetInt((ATermInt) f_7) != 0)))
                                        _fail(t);
                                      {
                                        ATerm g_7 = ATgetArgument(a_7, 1);
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
                u_0 = ATgetArgument(m_6, 1);
              }
            else
              _fail(t);
            {
              ATerm n_6 = (ATerm) ATgetNext((ATermList) i_5);
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
  t = o_5(s_0, t_0, u_0, t);
  return(t);
}
ATerm MkLayoutCharacter_0_0 (ATerm t)
{
  ATerm b_1 = NULL;
  b_1 = t;
  {
    ATerm l_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_is_int(b_1);
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_s_7), term_u_7, term_a_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_g_5))), term_s_7, term_a_5), (ATerm) ATinsert(ATempty, b_1))));
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        {
          ATerm c_1 = NULL,e_1 = NULL,f_1 = NULL;
          ATerm v_7 = t;
          int w_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_appl_2))
                {
                  c_1 = ATgetArgument(t, 0);
                  {
                    ATerm x_7 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(w_7);
              t = c_1;
              {
                ATerm y_7 = t;
                int z_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_prod_3))
                      {
                        ATerm b_8 = ATgetArgument(t, 0);
                        e_1 = ATgetArgument(t, 1);
                        {
                          ATerm c_8 = ATgetArgument(t, 2);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(z_7);
                    t = e_1;
                    if(match_cons(t, sym_lex_1))
                      {
                        f_1 = ATgetArgument(t, 0);
                        {
                          ATerm d_8 = t;
                          int e_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_s_7), term_u_7, term_a_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, f_1)), term_s_7, term_a_5), (ATerm) ATinsert(ATempty, b_1))));
                              LocalPopChoice(e_8);
                            }
                          else
                            {
                              t = d_8;
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
                              int h_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_s_7), term_u_7, term_a_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, f_1)), term_s_7, term_a_5), (ATerm) ATinsert(ATempty, b_1))));
                                  LocalPopChoice(h_8);
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
                    t = y_7;
                    t = b_1;
                  }
              }
            }
          else
            {
              t = v_7;
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
      ATerm w_2 = NULL,y_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_1 = ATgetFirst((ATermList) t);
          u_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_1;
      t = MkLayoutCharacter_0_0(t);
      w_2 = t;
      t = t_1;
      t = MkLayoutCharacter_0_0(t);
      y_2 = t;
      t = (ATerm) ATinsert(CheckATermList(u_1), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_u_7), term_u_7), term_u_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_j_8))), (ATerm) ATinsert(ATinsert(ATempty, y_2), w_2)));
      t = MkLayoutConsList_0_0(t);
    }
  return(t);
}
static ATerm p_5 (ATerm z_20, ATerm t)
{
  ATerm b_3 = NULL;
  t = z_20;
  t = MkLayoutConsList_0_0(t);
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_u_7), term_m_8, term_a_5), (ATerm) ATinsert(ATempty, b_3));
  return(t);
}
ATerm MkCfConsList_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,i_3 = NULL,j_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL,g_0 = NULL;
  static ATerm d_5 (ATerm t)
  {
    ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,y_3 = NULL;
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
        ATerm q_4 = NULL,t_4 = NULL,u_4 = NULL,w_4 = NULL,c_5 = NULL;
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
            y_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_z_2;
        t = r_80(t);
        q_4 = t;
        t = term_z_2;
        t = r_80(t);
        t_4 = t;
        t = term_z_2;
        t = r_80(t);
        u_4 = t;
        t = term_z_2;
        t = r_80(t);
        w_4 = t;
        t = term_z_2;
        t = r_80(t);
        c_5 = t;
        t = (ATerm) ATinsert(CheckATermList(y_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, t_4))), term_m_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, q_4))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, u_4)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_j_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, w_4)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, c_5)), term_a_5), (ATerm) ATinsert(ATempty, u_3))), s_3), q_3)));
        t = d_5(t);
      }
    return(t);
  }
  o_3 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_3 = ATgetFirst((ATermList) t);
      j_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_3);
  g_3 = t;
  t = term_z_2;
  t = r_80(t);
  l_3 = t;
  t = term_z_2;
  t = r_80(t);
  m_3 = t;
  t = (ATerm) ATinsert(CheckATermList(j_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, l_3)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, m_3)), term_a_5), (ATerm) ATinsert(ATempty, i_3)));
  g_0 = t;
  t = SSLsetAnnotations(g_0, g_3);
  t = d_5(t);
  return(t);
}
ATerm MkCfConsList_2_0 (ATerm t_80 (ATerm), ATerm u_80 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,m_5 = NULL;
  static ATerm l_9 (ATerm t)
  {
    ATerm b_7 = NULL,c_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,t_7 = NULL;
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
        ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,k_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_7 = ATgetFirst((ATermList) t);
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
            o_7 = ATgetFirst((ATermList) t);
            p_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_7;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_7 = ATgetFirst((ATermList) t);
            t_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_z_2;
        t = t_80(t);
        y_8 = t;
        t = term_z_2;
        t = u_80(t);
        z_8 = t;
        t = term_z_2;
        t = u_80(t);
        a_9 = t;
        t = term_z_2;
        t = t_80(t);
        b_9 = t;
        t = term_z_2;
        t = u_80(t);
        c_9 = t;
        t = term_z_2;
        t = t_80(t);
        f_9 = t;
        t = term_z_2;
        t = u_80(t);
        g_9 = t;
        t = term_z_2;
        t = t_80(t);
        h_9 = t;
        t = term_z_2;
        t = t_80(t);
        i_9 = t;
        t = term_z_2;
        t = u_80(t);
        k_9 = t;
        t = (ATerm) ATinsert(CheckATermList(t_7), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, b_9, c_9))), term_m_8), a_9), term_m_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, y_8, z_8))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, f_9, g_9)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_j_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, h_9)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, i_9, k_9)), term_a_5), (ATerm) ATinsert(ATempty, q_7))), o_7), j_7), h_7), b_7)));
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
  p_6 = t;
  t = term_z_2;
  t = t_80(t);
  w_6 = t;
  t = term_z_2;
  t = t_80(t);
  x_6 = t;
  t = term_z_2;
  t = u_80(t);
  y_6 = t;
  t = (ATerm) ATinsert(CheckATermList(r_6), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, w_6)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, x_6, y_6)), term_a_5), (ATerm) ATinsert(ATempty, q_6)));
  m_5 = t;
  t = SSLsetAnnotations(m_5, p_6);
  t = l_9(t);
  return(t);
}
ATerm MkLexConsList_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  static ATerm g_12 (ATerm t)
  {
    ATerm g_10 = NULL,h_10 = NULL,k_10 = NULL,l_10 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_10 = ATgetFirst((ATermList) t);
        h_10 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = h_10;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        ATerm t_10 = NULL,x_10 = NULL;
        t = term_z_2;
        t = w_80(t);
        t_10 = t;
        t = term_z_2;
        t = w_80(t);
        x_10 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, t_10)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, x_10)), term_a_5), (ATerm) ATinsert(ATempty, g_10));
      }
    else
      {
        ATerm m_11 = NULL,o_11 = NULL,s_11 = NULL,w_11 = NULL,a_12 = NULL,c_12 = NULL,d_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_10 = ATgetFirst((ATermList) t);
            l_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_z_2;
        t = w_80(t);
        m_11 = t;
        t = term_z_2;
        t = w_80(t);
        o_11 = t;
        t = term_z_2;
        t = w_80(t);
        s_11 = t;
        t = term_z_2;
        t = w_80(t);
        w_11 = t;
        t = term_z_2;
        t = w_80(t);
        a_12 = t;
        t = term_z_2;
        t = w_80(t);
        c_12 = t;
        t = term_z_2;
        t = w_80(t);
        d_12 = t;
        t = (ATerm) ATinsert(CheckATermList(l_10), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, o_11))), (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, m_11))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, s_11)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_j_8))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, c_12)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, d_12)), term_a_5), (ATerm) ATinsert(ATempty, k_10))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, w_11)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, a_12)), term_a_5), (ATerm) ATinsert(ATempty, g_10)))));
        t = g_12(t);
      }
    return(t);
  }
  t = g_12(t);
  return(t);
}
ATerm unflatten_list_0_0 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      c_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_13;
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
        static ATerm h_0 (ATerm t)
        {
          t = e_13;
          return(t);
        }
        t = g_13;
        t = MkLexConsList_1_0(h_0, t);
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
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, e_13))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, e_13)), term_a_5), (ATerm) ATinsert(ATempty, q_13));
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, e_13)), term_a_5), (ATerm) ATempty);
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
                static ATerm j_0 (ATerm t)
                {
                  t = f_13;
                  return(t);
                }
                static ATerm m_0 (ATerm t)
                {
                  t = w_12;
                  return(t);
                }
                t = g_13;
                t = MkCfConsList_2_0(j_0, m_0, t);
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
                        ATerm h_14 = NULL;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, f_13, w_12))), (ATerm) ATinsert(CheckATermList(y_12), x_12));
                        t = unflatten_list_0_0(t);
                        h_14 = t;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, f_13, w_12))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, f_13, w_12)), term_a_5), (ATerm) ATinsert(ATempty, h_14));
                      }
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, f_13, w_12)), term_a_5), (ATerm) ATempty);
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      f_13 = ATgetArgument(t, 0);
                      {
                        static ATerm v_0 (ATerm t)
                        {
                          t = f_13;
                          return(t);
                        }
                        t = g_13;
                        t = MkCfConsList_1_0(v_0, t);
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
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, f_13))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, f_13)), term_a_5), (ATerm) ATinsert(ATempty, z_14));
                          }
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, f_13)), term_a_5), (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm list_some_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  static ATerm i_16 (ATerm t)
  {
    ATerm n_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,x_9 = NULL;
        i_15 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_15 = ATgetFirst((ATermList) t);
            g_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_15);
        e_15 = t;
        t = f_15;
        t = j_89(t);
        h_15 = t;
        t = (ATerm) ATinsert(CheckATermList(g_15), h_15);
        x_9 = t;
        t = SSLsetAnnotations(x_9, e_15);
        LocalPopChoice(p_8);
        {
          ATerm j_15 = NULL,m_15 = NULL,n_15 = NULL,p_15 = NULL,q_15 = NULL,y_9 = NULL;
          q_15 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_15 = ATgetFirst((ATermList) t);
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
              ATerm q_8 = t;
              int r_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_89(t);
                  LocalPopChoice(r_8);
                }
              else
                {
                  t = q_8;
                }
              return(t);
            }
            t = map_1_0(a_1, t);
          }
          p_15 = t;
          t = (ATerm) ATinsert(CheckATermList(p_15), m_15);
          y_9 = t;
          t = SSLsetAnnotations(y_9, j_15);
        }
      }
    else
      {
        t = n_8;
        {
          ATerm t_15 = NULL,u_15 = NULL,d_16 = NULL,g_16 = NULL,h_16 = NULL,a_10 = NULL;
          h_16 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_15 = ATgetFirst((ATermList) t);
              d_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_16);
          t_15 = t;
          t = d_16;
          t = i_16(t);
          g_16 = t;
          t = (ATerm) ATinsert(CheckATermList(g_16), u_15);
          a_10 = t;
          t = SSLsetAnnotations(a_10, t_15);
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
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, k_16, (ATerm)ATmakeAppl(sym_lit_1, m_16), term_a_5), l_16);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm q_16 = NULL;
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, q_16));
  return(t);
}
static ATerm q_5 (ATerm x_18, ATerm y_18, ATerm t)
{
  ATerm j_16 = NULL;
  t = y_18;
  t = list_some_1_0(d_1, t);
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, x_18, j_16);
  return(t);
}
ATerm bottomup_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  static ATerm h_1 (ATerm t)
  {
    t = bottomup_1_0(t_82, t);
    return(t);
  }
  t = SRTS_all(h_1, t);
  t = t_82(t);
  return(t);
}
static ATerm s_5 (ATerm f_38, ATerm g_38, ATerm t)
{
  ATerm r_16 = NULL;
  t = SSL_fputc(f_38, g_38);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_16);
  return(t);
}
static ATerm t_5 (ATerm a_23, ATerm b_23, ATerm t)
{
  ATerm t_16 = NULL;
  t = SSL_write_term_to_stream_text(a_23, b_23);
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_16);
  return(t);
}
static ATerm v_5 (ATerm v_88 (ATerm), ATerm u_173, ATerm g_23, ATerm t)
{
  ATerm v_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_173, term_s_8);
  t = z_5(t);
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_16, g_23);
  t = v_88(t);
  t = fclose_0_0(t);
  t = g_23;
  return(t);
}
static ATerm u_5 (ATerm w_22, ATerm x_22, ATerm t)
{
  ATerm w_16 = NULL;
  t = SSL_write_term_to_stream_baf(w_22, x_22);
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
  ATerm o_1 = NULL,p_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_8 = ATgetArgument(t, 0);
      if(match_cons(t_8, sym_Stream_1))
        {
          o_1 = ATgetArgument(t_8, 0);
        }
      else
        _fail(t);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(o_1, p_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_8 = ATgetArgument(t, 0);
      if(match_cons(u_8, sym_Stream_1))
        {
          q_2 = ATgetArgument(u_8, 0);
        }
      else
        _fail(t);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(q_2, r_2, t);
  n_2 = t;
  t = term_v_8;
  o_2 = t;
  t = n_2;
  if(match_cons(t, sym_Stream_1))
    {
      p_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_8, n_2);
  t = s_5(o_2, p_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,o_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,s_21 = NULL,t_21 = NULL,f_10 = NULL,e_10 = NULL;
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
    ATerm w_8 = t;
    int x_8 = stack_ptr;
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
        LocalPopChoice(x_8);
      }
    else
      {
        t = w_8;
        t = term_d_9;
        i_17 = t;
      }
  }
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_17, u_17);
  e_10 = t;
  t = SSLsetAnnotations(e_10, s_17);
  t = j_17;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_17);
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_17, (ATerm) ATmakeAppl(sym__2, not_null(i_17), o_17));
  f_10 = t;
  t = SSLsetAnnotations(f_10, k_17);
  r_17 = t;
  if(match_cons(t, sym__2))
    {
      s_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,i_10 = NULL;
        t = SSLgetAnnotations(r_17);
        l_0 = t;
        t = s_21;
        t = fetch_1_0(j_1, t);
        w_0 = t;
        t = t_21;
        if(match_cons(t, sym__2))
          {
            y_0 = ATgetArgument(t, 0);
            z_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_5(k_1, y_0, z_0, t);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_0, x_0);
        i_10 = t;
        t = SSLsetAnnotations(i_10, l_0);
        LocalPopChoice(j_9);
      }
    else
      {
        t = e_9;
        {
          ATerm g_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,j_10 = NULL;
          t = SSLgetAnnotations(r_17);
          g_2 = t;
          t = t_21;
          if(match_cons(t, sym__2))
            {
              l_2 = ATgetArgument(t, 0);
              m_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_5(l_1, l_2, m_2, t);
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_21, k_2);
          j_10 = t;
          t = SSLsetAnnotations(j_10, g_2);
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
  ATerm c_22 = NULL,f_22 = NULL,g_22 = NULL,j_22 = NULL,l_22 = NULL;
  l_22 = t;
  t = dtime_0_0(t);
  t = l_22;
  t = m_106(t);
  j_22 = t;
  t = dtime_0_0(t);
  c_22 = t;
  t = j_22;
  if(match_cons(t, sym__2))
    {
      f_22 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_22), (ATerm) ATmakeAppl(sym_Runtime_1, c_22)), g_22);
  return(t);
}
static ATerm o_23 (ATerm d_23, ATerm t)
{
  t = SSL_fclose(d_23);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_23 = NULL,m_23 = NULL;
  m_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_23 = ATgetArgument(t, 0);
      {
        ATerm p_9 = t;
        int q_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_23);
            LocalPopChoice(q_9);
          }
        else
          {
            t = p_9;
            t = o_23(m_23, t);
          }
      }
    }
  else
    {
      t = o_23(m_23, t);
    }
  return(t);
}
static ATerm w_5 (ATerm c_23, ATerm t)
{
  t = SSL_read_term_from_stream(c_23);
  return(t);
}
static ATerm x_5 (ATerm y_36, ATerm z_36, ATerm t)
{
  t = SSL_strcat(y_36, z_36);
  return(t);
}
static ATerm y_5 (ATerm h_38, ATerm i_38, ATerm t)
{
  ATerm q_23 = NULL;
  t = SSL_fopen(h_38, i_38);
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_23);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_23 = NULL;
  t = SSL_stdin_stream();
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_23 = NULL;
  t = SSL_stdout_stream();
  u_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_23 = NULL;
  t = SSL_stderr_stream();
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_23);
  return(t);
}
static ATerm x_25 (ATerm l_24, ATerm t)
{
  ATerm m_24 = NULL;
  t = SSL_explode_term(l_24);
  if(match_cons(t, sym__2))
    {
      ATerm r_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_9 = ATgetArgument(t, 1);
        if(((ATgetType(v_9) == AT_LIST) && !(ATisEmpty(v_9))))
          {
            m_24 = ATgetFirst((ATermList) v_9);
            {
              ATerm w_9 = (ATerm) ATgetNext((ATermList) v_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_24;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_24;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_24;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_24;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_25 (ATerm t_24, ATerm u_24, ATerm x_24, ATerm t)
{
  ATerm y_24 = NULL,b_25 = NULL,c_25 = NULL,h_25 = NULL,v_10 = NULL;
  t = SSLgetAnnotations(x_24);
  c_25 = t;
  t = t_24;
  if(match_cons(t, sym_Path_1))
    {
      h_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_25, u_24);
  v_10 = t;
  t = SSLsetAnnotations(v_10, c_25);
  if(match_cons(t, sym__2))
    {
      y_24 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(y_24, b_25, t);
  return(t);
}
static ATerm z_25 (ATerm k_25, ATerm l_25, ATerm m_25, ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,s_25 = NULL,w_10 = NULL;
  t = SSLgetAnnotations(m_25);
  p_25 = t;
  t = SSL_is_string(k_25);
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_25, l_25);
  w_10 = t;
  t = SSLsetAnnotations(w_10, p_25);
  if(match_cons(t, sym__2))
    {
      n_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(n_25, o_25, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  if(match_cons(t, sym__2))
    {
      v_25 = ATgetArgument(t, 0);
      w_25 = ATgetArgument(t, 1);
      {
        ATerm z_9 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_25(u_25, t);
            LocalPopChoice(b_10);
          }
        else
          {
            t = z_9;
            {
              ATerm c_10 = t;
              int d_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_25(v_25, w_25, u_25, t);
                  LocalPopChoice(d_10);
                }
              else
                {
                  t = c_10;
                  t = z_25(v_25, w_25, u_25, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_25(u_25, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,g_26 = NULL,l_26 = NULL;
  l_26 = t;
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_26, term_o_10);
        t = z_5(t);
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        {
          ATerm h_3 = NULL,n_3 = NULL;
          t = term_p_10;
          n_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_10, l_26);
          t = x_5(n_3, l_26, t);
          h_3 = t;
          t = SSL_perror(h_3);
          _fail(t);
        }
      }
  }
  e_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_5(g_26, t);
  d_26 = t;
  t = e_26;
  t = fclose_0_0(t);
  t = d_26;
  return(t);
}
ATerm fetch_1_0 (ATerm o_89 (ATerm), ATerm t)
{
  static ATerm k_27 (ATerm t)
  {
    ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
    h_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_27 = ATgetFirst((ATermList) t);
        j_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_10 = t;
      int r_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_4 = NULL,j_4 = NULL,a_11 = NULL;
          t = SSLgetAnnotations(h_27);
          a_4 = t;
          t = i_27;
          t = o_89(t);
          j_4 = t;
          t = (ATerm) ATinsert(CheckATermList(j_27), j_4);
          a_11 = t;
          t = SSLsetAnnotations(a_11, a_4);
          LocalPopChoice(r_10);
        }
      else
        {
          t = q_10;
          {
            ATerm z_4 = NULL,e_5 = NULL,b_11 = NULL;
            t = SSLgetAnnotations(h_27);
            z_4 = t;
            t = j_27;
            t = k_27(t);
            e_5 = t;
            t = (ATerm) ATinsert(CheckATermList(e_5), i_27);
            b_11 = t;
            t = SSLsetAnnotations(b_11, z_4);
          }
        }
    }
    return(t);
  }
  t = k_27(t);
  return(t);
}
static ATerm e_6 (ATerm m_54, ATerm n_54, ATerm t)
{
  ATerm n_27 = NULL;
  t = lookup_table_0_1(m_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(n_54, n_27, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_104 (ATerm), ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  {
    ATerm s_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
        t = term_y_10;
        t_27 = t;
        t = term_z_10;
        u_27 = t;
        t = term_c_11;
        t = e_6(t_27, u_27, t);
        s_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_27, term_d_11);
        t = geq_0_0(t);
        t = q_27;
        t = v_104(t);
        LocalPopChoice(u_10);
      }
    else
      {
        t = s_10;
        t = q_27;
      }
  }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm x_27 = NULL;
  x_27 = t;
  if(match_string(t, "-k"))
    {
      t = x_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_27;
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL;
  y_27 = t;
  t = SSL_string_to_int(y_27);
  z_27 = t;
  t = term_e_11;
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, z_27);
  t = h_6(a_28, z_27, t);
  t = y_27;
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
  ATerm c_28 = NULL;
  c_28 = t;
  if(match_string(t, "-S"))
    {
      t = c_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_28;
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL;
  t = term_z_10;
  d_28 = t;
  t = term_b_5;
  e_28 = t;
  t = term_h_11;
  t = h_6(d_28, e_28, t);
  t = term_i_11;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_j_11;
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
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
  f_28 = t;
  t = SSL_string_to_int(f_28);
  g_28 = t;
  t = term_z_10;
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_10, g_28);
  t = h_6(h_28, g_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_28);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_l_11;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL;
  t = term_p_11;
  i_28 = t;
  t = term_z_2;
  j_28 = t;
  t = term_r_11;
  t = h_6(i_28, j_28, t);
  t = term_u_11;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_11 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_1, w_1, x_1, t);
      LocalPopChoice(b_12);
    }
  else
    {
      t = z_11;
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_1, z_1, a_2, t);
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = Option_3_0(b_2, c_2, d_2, t);
          }
      }
    }
  return(t);
}
static ATerm h_6 (ATerm y_47, ATerm z_47, ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL;
  t = term_y_10;
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_10, y_47, z_47);
  t = lookup_table_0_1(k_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(y_47, z_47, l_28, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_10, y_47, z_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
      t = term_z_2;
      t = e_0(t);
      r_28 = t;
      t = term_h_12;
      s_28 = t;
      t = term_i_12;
      t_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_12, term_i_12, r_28);
      t = f_6(s_28, t_28, r_28, t);
      _fail(t);
    }
  else
    {
      ATerm w_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_28 = ATgetFirst((ATermList) t);
          q_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_28;
      t = c_0(t);
      t = term_z_2;
      t = d_0(t);
      w_28 = t;
      t = (ATerm) ATinsert(CheckATermList(q_28), w_28);
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm y_28 = NULL;
  y_28 = t;
  if(match_string(t, "-o"))
    {
      t = y_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_28;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL;
  z_28 = t;
  t = term_j_12;
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_12, z_28);
  t = h_6(a_29, z_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_28);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_k_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_2, f_2, h_2, t);
  return(t);
}
static ATerm f_6 (ATerm t_52, ATerm u_52, ATerm s_52, ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL;
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_52, u_52);
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
        t = (ATerm) ATmakeAppl(sym__2, t_52, u_52);
        t = e_6(t_52, u_52, t);
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        t = (ATerm) ATempty;
      }
  }
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_52, u_52, (ATerm) ATinsert(CheckATermList(d_29), s_52));
  t = lookup_table_0_1(t_52, t);
  g_29 = t;
  t = (ATerm) ATinsert(CheckATermList(d_29), s_52);
  e_29 = t;
  t = g_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(u_52, e_29, f_29, t);
  t = c_29;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
      t = term_z_2;
      t = p_0(t);
      r_29 = t;
      t = term_h_12;
      s_29 = t;
      t = term_i_12;
      t_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_12, term_i_12, r_29);
      t = f_6(s_29, t_29, r_29, t);
      _fail(t);
    }
  else
    {
      ATerm x_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_29 = ATgetFirst((ATermList) t);
          o_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_29 = ATgetFirst((ATermList) t);
          q_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_29;
      t = n_0(t);
      t = p_29;
      t = o_0(t);
      x_29 = t;
      t = (ATerm) ATinsert(CheckATermList(q_29), x_29);
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  if(match_string(t, "-i"))
    {
      t = z_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_29;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  a_30 = t;
  t = term_p_12;
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_12, a_30);
  t = h_6(b_30, a_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_30);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_q_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_2, j_2, s_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,g_30 = NULL,h_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_2;
  t = whoami_0_0(t);
  c_30 = t;
  t = term_s_4;
  g_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_12), c_30);
  h_30 = t;
  t = SSL_printnl(g_30, h_30);
  t = term_y_4;
  d_30 = t;
  t = SSL_exit(d_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  t = term_y_10;
  i_30 = t;
  t = term_s_12;
  j_30 = t;
  t = term_t_12;
  t = e_6(i_30, j_30, t);
  return(t);
}
static ATerm a_6 (ATerm b_41, ATerm c_41, ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_41, c_41);
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      t = SSL_addr(b_41, c_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL;
  l_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_30;
      t = d_96(t);
    }
  else
    {
      ATerm q_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_30 = ATgetFirst((ATermList) t);
          n_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_30;
      t = foldr_2_0(d_96, e_96, t);
      q_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_30, q_30);
      t = e_96(t);
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
  ATerm n_5 = NULL,r_5 = NULL;
  if(match_cons(t, sym__2))
    {
      n_5 = ATgetArgument(t, 0);
      r_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(n_5, r_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_30 = NULL,j_5 = NULL,k_5 = NULL;
  t = times_0_0(t);
  k_5 = t;
  t = SSL_explode_term(k_5);
  if(match_cons(t, sym__2))
    {
      ATerm z_12 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5;
  t = foldr_2_0(t_2, u_2, t);
  t_30 = t;
  t = SSL_TicksToSeconds(t_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  e_31 = t;
  if(match_cons(t, sym__2))
    {
      f_31 = ATgetArgument(t, 0);
      g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_31;
        if((f_31 != t))
          {
            _fail(t);
          }
        t = e_31;
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        t = (ATerm) ATmakeAppl(sym__2, f_31, g_31);
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_31, g_31);
              LocalPopChoice(i_13);
            }
          else
            {
              t = h_13;
              t = SSL_gtr(f_31, g_31);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_31, g_31);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm k_31 = NULL;
  k_31 = t;
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
        t = term_y_10;
        n_31 = t;
        t = term_z_10;
        o_31 = t;
        t = term_c_11;
        t = e_6(n_31, o_31, t);
        m_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_31, term_y_4);
        t = geq_0_0(t);
        t = k_31;
        t = u_104(t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        t = k_31;
      }
  }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,t_31 = NULL,u_31 = NULL;
  t = run_time_0_0(t);
  q_31 = t;
  t = term_z_2;
  t = whoami_0_0(t);
  r_31 = t;
  t = term_s_4;
  t_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_13), q_31), term_l_13), r_31);
  u_31 = t;
  t = SSL_printnl(t_31, u_31);
  t = (ATerm) ATmakeAppl(sym__2, term_s_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_13), q_31), term_l_13), r_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_5;
  v_31 = t;
  t = SSL_exit(v_31);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  g_32 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = g_32;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_32 = ATgetArgument(t, 0);
          {
            ATerm e_7 = NULL,f_11 = NULL;
            t = SSLgetAnnotations(g_32);
            e_7 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_32);
            f_11 = t;
            t = SSLsetAnnotations(f_11, e_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = g_32;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_107 (ATerm), ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_31 = NULL,z_31 = NULL;
      t = term_y_10;
      y_31 = t;
      t = term_p_13;
      z_31 = t;
      t = term_r_13;
      t = e_6(y_31, z_31, t);
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      t = fetch_1_0(x_2, t);
    }
  t = k_107(t);
  return(t);
}
static ATerm i_6 (ATerm l_56, ATerm m_56, ATerm n_56, ATerm t)
{
  ATerm i_32 = NULL;
  t = SSL_hashtable_put(n_56, l_56, m_56);
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_32);
  return(t);
}
static ATerm j_6 (ATerm o_56, ATerm p_56, ATerm t)
{
  t = SSL_hashtable_get(p_56, o_56);
  return(t);
}
ATerm lookup_table_0_1 (ATerm f_54, ATerm t)
{
  ATerm r_32 = NULL;
  t = table_hashtable_0_0(t);
  r_32 = t;
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_7 = NULL;
        t = r_32;
        if(match_cons(t, sym_Hashtable_1))
          {
            r_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_6(f_54, r_7, t);
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        {
          ATerm a_8 = NULL;
          t = f_54;
          t = table_create_0_0(t);
          t = r_32;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_6(f_54, a_8, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm t_56, ATerm u_56, ATerm t)
{
  ATerm u_32 = NULL;
  t = SSL_hashtable_create(t_56, u_56);
  u_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_32);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,z_32 = NULL,a_33 = NULL;
  v_32 = t;
  t = term_u_13;
  z_32 = t;
  t = term_v_13;
  a_33 = t;
  t = v_32;
  t = new_hashtable_0_2(z_32, a_33, t);
  w_32 = t;
  t = v_32;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(v_32, w_32, x_32, t);
  t = v_32;
  return(t);
}
static ATerm c_6 (ATerm q_56, ATerm r_56, ATerm t)
{
  ATerm b_33 = NULL;
  t = SSL_hashtable_remove(r_56, q_56);
  b_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_33);
  return(t);
}
static ATerm d_6 (ATerm v_56, ATerm t)
{
  ATerm c_33 = NULL;
  t = SSL_hashtable_destroy(v_56);
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_33);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm d_33 = NULL;
  t = SSL_table_hashtable();
  d_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_33);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
  e_33 = t;
  t = table_hashtable_0_0(t);
  f_33 = t;
  t = lookup_table_0_1(e_33, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(h_33, t);
  t = f_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(e_33, g_33, t);
  t = e_33;
  return(t);
}
ATerm map_1_0 (ATerm e_89 (ATerm), ATerm t)
{
  static ATerm w_33 (ATerm t)
  {
    ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
    t_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_33;
      }
    else
      {
        ATerm f_8 = NULL,l_8 = NULL,o_8 = NULL,k_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_33 = ATgetFirst((ATermList) t);
            v_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_33);
        f_8 = t;
        t = u_33;
        t = e_89(t);
        l_8 = t;
        t = v_33;
        t = w_33(t);
        o_8 = t;
        t = (ATerm) ATinsert(CheckATermList(o_8), l_8);
        k_11 = t;
        t = SSLsetAnnotations(k_11, f_8);
      }
    return(t);
  }
  t = w_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_33 = ATgetFirst((ATermList) t);
      a_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_34 = NULL,f_34 = NULL;
        static ATerm a_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_34)), not_null(f_34));
          return(t);
        }
        t = a_34;
        t = k_0(t);
        if(((e_34 != NULL) && (e_34 != t)))
          _fail(t);
        else
          e_34 = t;
        t = z_33;
        t = i_0(t);
        if(((f_34 != NULL) && (f_34 != t)))
          _fail(t);
        else
          f_34 = t;
        t = a_34;
        t = reverse_acc_2_0(i_0, a_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_2;
      t = k_0(t);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_34), term_w_13);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_34 = NULL,n_34 = NULL;
      t = term_y_10;
      m_34 = t;
      t = term_s_12;
      n_34 = t;
      t = term_t_12;
      t = e_6(m_34, n_34, t);
      j_34 = t;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        static ATerm c_3 (ATerm t)
        {
          ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL,n_11 = NULL;
          q_34 = t;
          if(match_cons(t, sym_Program_1))
            {
              p_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_34);
          o_34 = t;
          t = p_34;
          if(((j_34 != NULL) && (j_34 != t)))
            _fail(t);
          else
            j_34 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, p_34);
          n_11 = t;
          t = SSLsetAnnotations(n_11, o_34);
          return(t);
        }
        t = fetch_1_0(c_3, t);
      }
    }
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_14), not_null(j_34)), term_b_14);
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
  k_34 = t;
  t = term_i_12;
  l_34 = t;
  t = term_e_14;
  t = e_6(k_34, l_34, t);
  t = reverse_acc_2_0(_id, d_3, t);
  t = map_1_0(e_3, t);
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_14), term_l_14), term_k_14), term_j_14), term_i_14);
        t = echo_0_0(t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  y_34 = t;
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_34;
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
            t = y_34;
          }
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        t = (ATerm) ATinsert(ATempty, y_34);
      }
  }
  z_34 = t;
  t = term_d_9;
  a_35 = t;
  t = SSL_printnl(a_35, z_34);
  t = y_34;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL;
  t = term_y_10;
  e_35 = t;
  t = term_s_12;
  f_35 = t;
  t = term_t_12;
  t = e_6(e_35, f_35, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL;
  t = term_r_14;
  g_35 = t;
  t = term_z_2;
  h_35 = t;
  t = term_s_14;
  t = h_6(g_35, h_35, t);
  return(t);
}
static ATerm p_3 (ATerm t)
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
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL;
  t = term_r_14;
  k_35 = t;
  t = term_z_2;
  l_35 = t;
  t = term_s_14;
  t = h_6(k_35, l_35, t);
  t = term_u_14;
  i_35 = t;
  t = term_z_2;
  j_35 = t;
  t = term_v_14;
  t = h_6(i_35, j_35, t);
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
  ATerm y_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_3, k_3, p_3, t);
      LocalPopChoice(a_15);
    }
  else
    {
      t = y_14;
      t = Option_3_0(v_3, w_3, x_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_60 (ATerm), ATerm k_60 (ATerm), ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,q_11 = NULL;
  r_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_35 = ATgetFirst((ATermList) t);
      o_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_35);
  m_35 = t;
  t = n_35;
  t = j_60(t);
  p_35 = t;
  t = o_35;
  t = k_60(t);
  q_35 = t;
  t = (ATerm) ATinsert(CheckATermList(q_35), p_35);
  q_11 = t;
  t = SSLsetAnnotations(q_11, m_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_109 (ATerm), ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,b_36 = NULL,c_36 = NULL,t_11 = NULL;
  w_35 = t;
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_15;
        t = n_109(t);
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
      }
  }
  t = w_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_35 = ATgetFirst((ATermList) t);
      z_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_35);
  x_35 = t;
  t = term_s_12;
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_12, y_35);
  t = h_6(c_36, y_35, t);
  t = z_35;
  {
    static ATerm m_36 (ATerm t)
    {
      ATerm k_15 = t;
      int l_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_15 = t;
          int r_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_36 = NULL;
              f_36 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_36;
              LocalPopChoice(r_15);
            }
          else
            {
              t = o_15;
              t = n_109(t);
              t = Cons_2_0(_id, m_36, t);
            }
          LocalPopChoice(l_15);
        }
      else
        {
          t = k_15;
          {
            ATerm i_36 = NULL,j_36 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_36 = ATgetFirst((ATermList) t);
                j_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_36), (ATerm) ATmakeAppl(sym_Undefined_1, i_36));
          }
        }
      return(t);
    }
    t = m_36(t);
  }
  b_36 = t;
  t = (ATerm) ATinsert(CheckATermList(b_36), (ATerm) ATmakeAppl(sym_Program_1, y_35));
  t_11 = t;
  t = SSLsetAnnotations(t_11, x_35);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm b_37 = NULL;
  b_37 = t;
  if(match_string(t, "--help"))
    {
      t = b_37;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_37;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_37;
        }
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL;
  t = term_p_13;
  c_37 = t;
  t = term_z_2;
  d_37 = t;
  t = term_s_15;
  t = h_6(c_37, d_37, t);
  t = term_v_15;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_w_15;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_109 (ATerm), ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,a_37 = NULL;
  t_36 = t;
  t = term_h_12;
  u_36 = t;
  t = term_x_15;
  t = lookup_table_0_1(u_36, t);
  a_37 = t;
  t = term_i_12;
  v_36 = t;
  t = (ATerm) ATempty;
  w_36 = t;
  t = a_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(v_36, w_36, x_36, t);
  t = t_36;
  {
    static ATerm z_3 (ATerm t)
    {
      ATerm y_15 = t;
      int z_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_109(t);
          LocalPopChoice(z_15);
        }
      else
        {
          t = y_15;
          {
            ATerm a_16 = t;
            int b_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_4, c_4, d_4, t);
                LocalPopChoice(b_16);
              }
            else
              {
                t = a_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_3, t);
  }
  {
    ATerm c_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_37 = NULL;
        o_37 = t;
        {
          ATerm f_16 = t;
          int n_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_9 = NULL;
              t = o_37;
              {
                ATerm o_16 = t;
                int p_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_9 = NULL,o_9 = NULL;
                    t = term_y_10;
                    n_9 = t;
                    t = term_p_13;
                    o_9 = t;
                    t = term_r_13;
                    t = e_6(n_9, o_9, t);
                    LocalPopChoice(p_16);
                  }
                else
                  {
                    t = o_16;
                    t = fetch_1_0(e_4, t);
                  }
              }
              t = o_37;
              t = default_system_usage_0_0(t);
              t = term_b_5;
              m_9 = t;
              t = SSL_exit(m_9);
              LocalPopChoice(n_16);
            }
          else
            {
              t = f_16;
              {
                ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
                t = term_y_10;
                t_9 = t;
                t = term_r_14;
                u_9 = t;
                t = term_s_16;
                t = e_6(t_9, u_9, t);
                t = o_37;
                t = default_system_about_0_0(t);
                t = term_b_5;
                s_9 = t;
                t = SSL_exit(s_9);
              }
            }
        }
        LocalPopChoice(e_16);
      }
    else
      {
        t = c_16;
        {
          ATerm u_16 = t;
          int x_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
              static ATerm f_4 (ATerm t)
              {
                ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,v_11 = NULL;
                u_37 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_37 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_37);
                s_37 = t;
                t = t_37;
                if(((r_36 != NULL) && (r_36 != t)))
                  _fail(t);
                else
                  r_36 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_37);
                v_11 = t;
                t = SSLsetAnnotations(v_11, s_37);
                return(t);
              }
              t = fetch_1_0(f_4, t);
              t = term_s_4;
              q_37 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_36)), term_y_16);
              r_37 = t;
              t = SSL_printnl(q_37, r_37);
              t = (ATerm) ATmakeAppl(sym__2, term_s_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_36)), term_y_16));
              t = default_system_usage_0_0(t);
              t = term_y_4;
              p_37 = t;
              t = SSL_exit(p_37);
              LocalPopChoice(x_16);
            }
          else
            {
              t = u_16;
            }
        }
      }
  }
  s_36 = t;
  t = term_h_12;
  t = table_destroy_0_0(t);
  t = s_36;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL;
  t = parse_options_1_0(m_107, t);
  z_37 = t;
  t = term_z_16;
  t = table_create_0_0(t);
  t = term_z_16;
  a_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_16, term_a_17, z_37);
  t = lookup_table_0_1(a_38, t);
  d_38 = t;
  t = term_a_17;
  b_38 = t;
  t = d_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(b_38, z_37, c_38, t);
  t = z_37;
  t = o_107(t);
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_107, t);
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
              t = p_107(t);
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
static ATerm h_4 (ATerm t)
{
  t = if_verbose2_1_0(n_4, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm e_38 = NULL,l_38 = NULL;
  t = term_f_17;
  e_38 = t;
  t = term_z_2;
  l_38 = t;
  t = term_g_17;
  t = h_6(e_38, l_38, t);
  t = term_h_17;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_m_17;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
  m_38 = t;
  t = term_y_10;
  r_38 = t;
  t = term_s_12;
  s_38 = t;
  t = term_t_12;
  t = e_6(r_38, s_38, t);
  n_38 = t;
  t = term_s_4;
  o_38 = t;
  t = (ATerm) ATinsert(ATempty, n_38);
  q_38 = t;
  t = SSL_printnl(o_38, q_38);
  t = m_38;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm t)
{
  static ATerm g_4 (ATerm t)
  {
    ATerm n_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_106(t);
        LocalPopChoice(p_17);
      }
    else
      {
        t = n_17;
        {
          ATerm q_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(w_17);
            }
          else
            {
              t = q_17;
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
                          t = Option_3_0(k_4, l_4, m_4, t);
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
  static ATerm i_4 (ATerm t)
  {
    ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
    u_38 = t;
    {
      ATerm d_18 = t;
      int e_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm o_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((t_38 != NULL) && (t_38 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_38 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_4, t);
          LocalPopChoice(e_18);
        }
      else
        {
          t = d_18;
          t = term_f_18;
          t_38 = t;
        }
    }
    t = not_null(t_38);
    t = ReadFromFile_0_0(t);
    v_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_38, v_38);
    t = apply_strategy_1_0(v_106, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(g_4, x_106, h_4, i_4, t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,y_11 = NULL;
  v_39 = t;
  if(match_cons(t, sym__2))
    {
      s_39 = ATgetArgument(t, 0);
      t_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_39);
  r_39 = t;
  t = t_39;
  t = bottomup_1_0(r_4, t);
  u_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_39, u_39);
  y_11 = t;
  t = SSLsetAnnotations(y_11, r_39);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL;
  y_39 = t;
  if(match_cons(t, sym_appl_2))
    {
      w_39 = ATgetArgument(t, 0);
      x_39 = ATgetArgument(t, 1);
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_39;
            t = q_5(w_39, x_39, t);
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            t = y_39;
          }
      }
    }
  else
    {
      t = y_39;
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
  p_40 = t;
  if(match_cons(t, sym_appl_2))
    {
      f_40 = ATgetArgument(t, 0);
      o_40 = ATgetArgument(t, 1);
      t = f_40;
      if(match_cons(t, sym_prod_3))
        {
          g_40 = ATgetArgument(t, 0);
          k_40 = ATgetArgument(t, 1);
          n_40 = ATgetArgument(t, 2);
          t = n_40;
          if(match_cons(t, sym_no_attrs_0))
            {
              t = k_40;
              if(match_cons(t, sym_cf_1))
                {
                  l_40 = ATgetArgument(t, 0);
                  t = l_40;
                  if(match_cons(t, sym_opt_1))
                    {
                      m_40 = ATgetArgument(t, 0);
                      t = m_40;
                      if(match_cons(t, sym_layout_0))
                        {
                          t = g_40;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              h_40 = ATgetFirst((ATermList) t);
                              j_40 = (ATerm) ATgetNext((ATermList) t);
                              t = j_40;
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = h_40;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      i_40 = ATgetArgument(t, 0);
                                      t = i_40;
                                      if(match_cons(t, sym_layout_0))
                                        {
                                          ATerm k_18 = t;
                                          int l_18 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = p_40;
                                              t = p_5(o_40, t);
                                              LocalPopChoice(l_18);
                                            }
                                          else
                                            {
                                              t = k_18;
                                              t = p_40;
                                            }
                                        }
                                      else
                                        {
                                          t = p_40;
                                        }
                                    }
                                  else
                                    {
                                      t = p_40;
                                    }
                                }
                              else
                                {
                                  t = p_40;
                                }
                            }
                          else
                            {
                              t = p_40;
                            }
                        }
                      else
                        {
                          t = p_40;
                        }
                    }
                  else
                    {
                      t = p_40;
                    }
                }
              else
                {
                  t = p_40;
                }
            }
          else
            {
              t = p_40;
            }
        }
      else
        {
          t = p_40;
        }
    }
  else
    {
      t = p_40;
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
  t = iowrap_3_0(p_4, _fail, default_usage_0_0, t);
  return(t);
}
