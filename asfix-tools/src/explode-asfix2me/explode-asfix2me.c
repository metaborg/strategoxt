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
ATerm term_t_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_g_16;
ATerm term_j_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_y_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_q_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_h_9;
ATerm term_a_9;
ATerm term_m_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_v_5;
ATerm term_s_5;
ATerm term_f_5;
ATerm term_a_5;
ATerm term_y_4;
ATerm term_w_4;
ATerm term_v_4;
ATerm term_u_4;
ATerm term_z_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_2));
  term_z_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeInt(255);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_range_2, term_f_5, term_s_5);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_lex_1, term_n_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_cf_1, term_n_7);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_left_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_assoc_1, term_e_8);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_opt_1, term_n_7);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_cf_1, term_g_8);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_y_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_f_5);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_5);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_z_2);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_m_12);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_k_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_b_12, term_c_12);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("This tool explodes an AsFix2ME term to a valid AsFix2 term. Explosion involes\n", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattening of lists, layout, literals, and lexicals.\n\n", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Observe that the structure of lexicals cannot be restored. Lexicals are\n", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattened into left linear binary trees.", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym__2, term_h_14, term_z_2);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_k_14, term_z_2);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_z_2);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_h_14);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_z_2);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm c_5 (ATerm j_21, ATerm k_21, ATerm l_21, ATerm t);
ATerm unflatten_lexical_0_0 (ATerm t);
ATerm MkLayoutCharacter_0_0 (ATerm t);
ATerm MkLayoutConsList_0_0 (ATerm t);
static ATerm d_5 (ATerm z_20, ATerm t);
ATerm MkCfConsList_1_0 (ATerm x_78 (ATerm), ATerm t);
ATerm MkCfConsList_2_0 (ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm t);
ATerm MkLexConsList_1_0 (ATerm c_79 (ATerm), ATerm t);
ATerm unflatten_list_0_0 (ATerm t);
ATerm list_some_1_0 (ATerm p_87 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm e_5 (ATerm x_18, ATerm y_18, ATerm t);
ATerm bottomup_1_0 (ATerm z_80 (ATerm), ATerm t);
static ATerm g_5 (ATerm f_38, ATerm g_38, ATerm t);
static ATerm h_5 (ATerm a_23, ATerm b_23, ATerm t);
static ATerm j_5 (ATerm b_87 (ATerm), ATerm r_171, ATerm g_23, ATerm t);
static ATerm i_5 (ATerm w_22, ATerm x_22, ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm k_104 (ATerm), ATerm t);
static ATerm i_23 (ATerm t_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm k_5 (ATerm c_23, ATerm t);
static ATerm l_5 (ATerm y_36, ATerm z_36, ATerm t);
static ATerm m_5 (ATerm h_38, ATerm i_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_24 (ATerm v_23, ATerm t);
static ATerm z_24 (ATerm z_23, ATerm a_24, ATerm b_24, ATerm t);
static ATerm a_25 (ATerm l_24, ATerm m_24, ATerm n_24, ATerm t);
static ATerm n_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_87 (ATerm), ATerm t);
static ATerm q_5 (ATerm k_54, ATerm l_54, ATerm t);
ATerm if_verbose2_1_0 (ATerm t_102 (ATerm), ATerm t);
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
static ATerm t_5 (ATerm y_47, ATerm z_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_5 (ATerm t_52, ATerm u_52, ATerm s_52, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm o_5 (ATerm b_41, ATerm c_41, ATerm t);
ATerm foldr_2_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm s_102 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm need_help_1_0 (ATerm i_105 (ATerm), ATerm t);
ATerm map_1_0 (ATerm k_87 (ATerm), ATerm t);
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
ATerm Cons_2_0 (ATerm p_58 (ATerm), ATerm q_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_107 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm parse_options_1_0 (ATerm k_107 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm iowrap_3_0 (ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
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
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,q_0 = NULL,r_0 = NULL;
  a_0 = t;
  t = term_z_2;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_u_4;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_4), b_0), term_v_4);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_y_4;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
static ATerm c_5 (ATerm j_21, ATerm k_21, ATerm l_21, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, j_21)), (ATerm)ATmakeAppl(sym_cf_1, j_21), term_a_5), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_v_5))))), (ATerm)ATmakeAppl(sym_lex_1, j_21), term_a_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, k_21, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_v_5)))), term_a_5), l_21))));
  return(t);
}
ATerm unflatten_lexical_0_0 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm w_5 = ATgetArgument(t, 0);
      if(match_cons(w_5, sym_prod_3))
        {
          ATerm a_6 = ATgetArgument(w_5, 0);
          if(((ATgetType(a_6) == AT_LIST) && !(ATisEmpty(a_6))))
            {
              ATerm g_6 = ATgetFirst((ATermList) a_6);
              if(match_cons(g_6, sym_lex_1))
                {
                  s_0 = ATgetArgument(g_6, 0);
                }
              else
                _fail(t);
              {
                ATerm k_6 = (ATerm) ATgetNext((ATermList) a_6);
                if(((ATgetType(k_6) != AT_LIST) || !(ATisEmpty(k_6))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm e_6 = ATgetArgument(w_5, 1);
            if(match_cons(e_6, sym_cf_1))
              {
                if((s_0 != ATgetArgument(e_6, 0)))
                  {
                    _fail(ATgetArgument(e_6, 0));
                  }
              }
            else
              _fail(t);
          }
          {
            ATerm f_6 = ATgetArgument(w_5, 2);
            if(!(match_cons(f_6, sym_no_attrs_0)))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm x_5 = ATgetArgument(t, 1);
        if(((ATgetType(x_5) == AT_LIST) && !(ATisEmpty(x_5))))
          {
            ATerm p_6 = ATgetFirst((ATermList) x_5);
            if(match_cons(p_6, sym_appl_2))
              {
                ATerm r_6 = ATgetArgument(p_6, 0);
                if(match_cons(r_6, sym_prod_3))
                  {
                    t_0 = ATgetArgument(r_6, 0);
                    {
                      ATerm s_6 = ATgetArgument(r_6, 1);
                      if(match_cons(s_6, sym_iter_star_1))
                        {
                          ATerm x_6 = ATgetArgument(s_6, 0);
                          if(match_cons(x_6, sym_char_class_1))
                            {
                              ATerm y_6 = ATgetArgument(x_6, 0);
                              if(((ATgetType(y_6) == AT_LIST) && !(ATisEmpty(y_6))))
                                {
                                  ATerm b_7 = ATgetFirst((ATermList) y_6);
                                  if(match_cons(b_7, sym_range_2))
                                    {
                                      ATerm h_7 = ATgetArgument(b_7, 0);
                                      if(((ATgetType(h_7) != AT_INT) || (ATgetInt((ATermInt) h_7) != 0)))
                                        _fail(t);
                                      {
                                        ATerm j_7 = ATgetArgument(b_7, 1);
                                        if(((ATgetType(j_7) != AT_INT) || (ATgetInt((ATermInt) j_7) != 255)))
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm c_7 = (ATerm) ATgetNext((ATermList) y_6);
                                    if(((ATgetType(c_7) != AT_LIST) || !(ATisEmpty(c_7))))
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
                      ATerm t_6 = ATgetArgument(r_6, 2);
                      if(!(match_cons(t_6, sym_no_attrs_0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                u_0 = ATgetArgument(p_6, 1);
              }
            else
              _fail(t);
            {
              ATerm q_6 = (ATerm) ATgetNext((ATermList) x_5);
              if(((ATgetType(q_6) != AT_LIST) || !(ATisEmpty(q_6))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_5(s_0, t_0, u_0, t);
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
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_7), term_p_7, term_a_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_v_5))), term_o_7, term_a_5), (ATerm) ATinsert(ATempty, b_1))));
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        {
          ATerm c_1 = NULL,e_1 = NULL,f_1 = NULL;
          ATerm r_7 = t;
          int s_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_appl_2))
                {
                  c_1 = ATgetArgument(t, 0);
                  {
                    ATerm t_7 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(s_7);
              t = c_1;
              {
                ATerm u_7 = t;
                int v_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_prod_3))
                      {
                        ATerm y_7 = ATgetArgument(t, 0);
                        e_1 = ATgetArgument(t, 1);
                        {
                          ATerm z_7 = ATgetArgument(t, 2);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(v_7);
                    t = e_1;
                    if(match_cons(t, sym_lex_1))
                      {
                        f_1 = ATgetArgument(t, 0);
                        {
                          ATerm a_8 = t;
                          int b_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_7), term_p_7, term_a_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, f_1)), term_o_7, term_a_5), (ATerm) ATinsert(ATempty, b_1))));
                              LocalPopChoice(b_8);
                            }
                          else
                            {
                              t = a_8;
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
                              ATerm c_8 = t;
                              int d_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_7), term_p_7, term_a_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, f_1)), term_o_7, term_a_5), (ATerm) ATinsert(ATempty, b_1))));
                                  LocalPopChoice(d_8);
                                }
                              else
                                {
                                  t = c_8;
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
                    t = u_7;
                    t = b_1;
                  }
              }
            }
          else
            {
              t = r_7;
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
      t = (ATerm) ATinsert(CheckATermList(u_1), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_p_7), term_p_7), term_p_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_8))), (ATerm) ATinsert(ATinsert(ATempty, y_2), w_2)));
      t = MkLayoutConsList_0_0(t);
    }
  return(t);
}
static ATerm d_5 (ATerm z_20, ATerm t)
{
  ATerm b_3 = NULL;
  t = z_20;
  t = MkLayoutConsList_0_0(t);
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_p_7), term_h_8, term_a_5), (ATerm) ATinsert(ATempty, b_3));
  return(t);
}
ATerm MkCfConsList_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,i_3 = NULL,j_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL,g_0 = NULL;
  static ATerm u_5 (ATerm t)
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
        ATerm p_4 = NULL,q_4 = NULL,s_4 = NULL,x_4 = NULL,b_5 = NULL;
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
        t = x_78(t);
        p_4 = t;
        t = term_z_2;
        t = x_78(t);
        q_4 = t;
        t = term_z_2;
        t = x_78(t);
        s_4 = t;
        t = term_z_2;
        t = x_78(t);
        x_4 = t;
        t = term_z_2;
        t = x_78(t);
        b_5 = t;
        t = (ATerm) ATinsert(CheckATermList(y_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, q_4))), term_h_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, p_4))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, s_4)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, x_4)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, b_5)), term_a_5), (ATerm) ATinsert(ATempty, u_3))), s_3), q_3)));
        t = u_5(t);
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
  t = x_78(t);
  l_3 = t;
  t = term_z_2;
  t = x_78(t);
  m_3 = t;
  t = (ATerm) ATinsert(CheckATermList(j_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, l_3)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, m_3)), term_a_5), (ATerm) ATinsert(ATempty, i_3)));
  g_0 = t;
  t = SSLsetAnnotations(g_0, g_3);
  t = u_5(t);
  return(t);
}
ATerm MkCfConsList_2_0 (ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,b_6 = NULL;
  static ATerm q_9 (ATerm t)
  {
    ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL,z_6 = NULL,a_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,i_7 = NULL,k_7 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_6 = ATgetFirst((ATermList) t);
        v_6 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = v_6;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_6;
      }
    else
      {
        ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,w_8 = NULL,x_8 = NULL,d_9 = NULL,j_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_6 = ATgetFirst((ATermList) t);
            z_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_6;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_7 = ATgetFirst((ATermList) t);
            d_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_7;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_7 = ATgetFirst((ATermList) t);
            f_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_7;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_7 = ATgetFirst((ATermList) t);
            k_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_z_2;
        t = z_78(t);
        n_8 = t;
        t = term_z_2;
        t = a_79(t);
        o_8 = t;
        t = term_z_2;
        t = a_79(t);
        p_8 = t;
        t = term_z_2;
        t = z_78(t);
        q_8 = t;
        t = term_z_2;
        t = a_79(t);
        r_8 = t;
        t = term_z_2;
        t = z_78(t);
        s_8 = t;
        t = term_z_2;
        t = a_79(t);
        w_8 = t;
        t = term_z_2;
        t = z_78(t);
        x_8 = t;
        t = term_z_2;
        t = z_78(t);
        d_9 = t;
        t = term_z_2;
        t = a_79(t);
        j_9 = t;
        t = (ATerm) ATinsert(CheckATermList(k_7), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, q_8, r_8))), term_h_8), p_8), term_h_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, n_8, o_8))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, s_8, w_8)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, x_8)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, d_9, j_9)), term_a_5), (ATerm) ATinsert(ATempty, i_7))), e_7), a_7), w_6), u_6)));
        t = q_9(t);
      }
    return(t);
  }
  o_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_6 = ATgetFirst((ATermList) t);
      j_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_6);
  h_6 = t;
  t = term_z_2;
  t = z_78(t);
  l_6 = t;
  t = term_z_2;
  t = z_78(t);
  m_6 = t;
  t = term_z_2;
  t = a_79(t);
  n_6 = t;
  t = (ATerm) ATinsert(CheckATermList(j_6), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, l_6)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, m_6, n_6)), term_a_5), (ATerm) ATinsert(ATempty, i_6)));
  b_6 = t;
  t = SSLsetAnnotations(b_6, h_6);
  t = q_9(t);
  return(t);
}
ATerm MkLexConsList_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  static ATerm v_11 (ATerm t)
  {
    ATerm x_9 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_9 = ATgetFirst((ATermList) t);
        b_10 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = b_10;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        ATerm r_10 = NULL,t_10 = NULL;
        t = term_z_2;
        t = c_79(t);
        r_10 = t;
        t = term_z_2;
        t = c_79(t);
        t_10 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, r_10)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, t_10)), term_a_5), (ATerm) ATinsert(ATempty, x_9));
      }
    else
      {
        ATerm g_11 = NULL,k_11 = NULL,m_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,u_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_10 = ATgetFirst((ATermList) t);
            d_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_z_2;
        t = c_79(t);
        g_11 = t;
        t = term_z_2;
        t = c_79(t);
        k_11 = t;
        t = term_z_2;
        t = c_79(t);
        m_11 = t;
        t = term_z_2;
        t = c_79(t);
        p_11 = t;
        t = term_z_2;
        t = c_79(t);
        q_11 = t;
        t = term_z_2;
        t = c_79(t);
        r_11 = t;
        t = term_z_2;
        t = c_79(t);
        u_11 = t;
        t = (ATerm) ATinsert(CheckATermList(d_10), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, k_11))), (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, g_11))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, m_11)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_8))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, r_11)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, u_11)), term_a_5), (ATerm) ATinsert(ATempty, c_10))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, p_11)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, q_11)), term_a_5), (ATerm) ATinsert(ATempty, x_9)))));
        t = v_11(t);
      }
    return(t);
  }
  t = v_11(t);
  return(t);
}
ATerm unflatten_list_0_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,r_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      r_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_12;
  if(match_cons(t, sym_list_1))
    {
      u_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_12;
  if(match_cons(t, sym_iter_1))
    {
      v_12 = ATgetArgument(t, 0);
      {
        static ATerm h_0 (ATerm t)
        {
          t = v_12;
          return(t);
        }
        t = z_12;
        t = MkLexConsList_1_0(h_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          v_12 = ATgetArgument(t, 0);
          t = z_12;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_12 = ATgetFirst((ATermList) t);
              p_12 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm i_13 = NULL;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_iter_1, v_12)), (ATerm) ATinsert(CheckATermList(p_12), o_12));
                t = unflatten_list_0_0(t);
                i_13 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, v_12))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, v_12)), term_a_5), (ATerm) ATinsert(ATempty, i_13));
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, v_12)), term_a_5), (ATerm) ATempty);
            }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              v_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_12;
          if(match_cons(t, sym_iter_sep_2))
            {
              w_12 = ATgetArgument(t, 0);
              n_12 = ATgetArgument(t, 1);
              {
                static ATerm j_0 (ATerm t)
                {
                  t = w_12;
                  return(t);
                }
                static ATerm m_0 (ATerm t)
                {
                  t = n_12;
                  return(t);
                }
                t = z_12;
                t = MkCfConsList_2_0(j_0, m_0, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  w_12 = ATgetArgument(t, 0);
                  n_12 = ATgetArgument(t, 1);
                  t = z_12;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_12 = ATgetFirst((ATermList) t);
                      p_12 = (ATerm) ATgetNext((ATermList) t);
                      {
                        ATerm y_13 = NULL;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, w_12, n_12))), (ATerm) ATinsert(CheckATermList(p_12), o_12));
                        t = unflatten_list_0_0(t);
                        y_13 = t;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, w_12, n_12))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, w_12, n_12)), term_a_5), (ATerm) ATinsert(ATempty, y_13));
                      }
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, w_12, n_12)), term_a_5), (ATerm) ATempty);
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      w_12 = ATgetArgument(t, 0);
                      {
                        static ATerm v_0 (ATerm t)
                        {
                          t = w_12;
                          return(t);
                        }
                        t = z_12;
                        t = MkCfConsList_1_0(v_0, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          w_12 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = z_12;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          o_12 = ATgetFirst((ATermList) t);
                          p_12 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm o_14 = NULL;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, w_12))), (ATerm) ATinsert(CheckATermList(p_12), o_12));
                            t = unflatten_list_0_0(t);
                            o_14 = t;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, w_12))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, w_12)), term_a_5), (ATerm) ATinsert(ATempty, o_14));
                          }
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, w_12)), term_a_5), (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm list_some_1_0 (ATerm p_87 (ATerm), ATerm t)
{
  static ATerm y_15 (ATerm t)
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,k_9 = NULL;
        w_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_14 = ATgetFirst((ATermList) t);
            u_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_14);
        s_14 = t;
        t = t_14;
        t = p_87(t);
        v_14 = t;
        t = (ATerm) ATinsert(CheckATermList(u_14), v_14);
        k_9 = t;
        t = SSLsetAnnotations(k_9, s_14);
        LocalPopChoice(j_8);
        {
          ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,k_15 = NULL,l_9 = NULL;
          k_15 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_15 = ATgetFirst((ATermList) t);
              h_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_15);
          f_15 = t;
          t = h_15;
          {
            static ATerm a_1 (ATerm t)
            {
              ATerm k_8 = t;
              int l_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_87(t);
                  LocalPopChoice(l_8);
                }
              else
                {
                  t = k_8;
                }
              return(t);
            }
            t = map_1_0(a_1, t);
          }
          i_15 = t;
          t = (ATerm) ATinsert(CheckATermList(i_15), g_15);
          l_9 = t;
          t = SSLsetAnnotations(l_9, f_15);
        }
      }
    else
      {
        t = i_8;
        {
          ATerm n_15 = NULL,p_15 = NULL,q_15 = NULL,t_15 = NULL,w_15 = NULL,m_9 = NULL;
          w_15 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_15 = ATgetFirst((ATermList) t);
              q_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_15);
          n_15 = t;
          t = q_15;
          t = y_15(t);
          t_15 = t;
          t = (ATerm) ATinsert(CheckATermList(t_15), p_15);
          m_9 = t;
          t = SSLsetAnnotations(m_9, n_15);
        }
      }
    return(t);
  }
  t = y_15(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      d_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_explode_string(d_16);
  c_16 = t;
  t = map_1_0(g_1, t);
  b_16 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, b_16, (ATerm)ATmakeAppl(sym_lit_1, d_16), term_a_5), c_16);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm e_16 = NULL;
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, e_16));
  return(t);
}
static ATerm e_5 (ATerm x_18, ATerm y_18, ATerm t)
{
  ATerm z_15 = NULL;
  t = y_18;
  t = list_some_1_0(d_1, t);
  z_15 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, x_18, z_15);
  return(t);
}
ATerm bottomup_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  static ATerm h_1 (ATerm t)
  {
    t = bottomup_1_0(z_80, t);
    return(t);
  }
  t = SRTS_all(h_1, t);
  t = z_80(t);
  return(t);
}
static ATerm g_5 (ATerm f_38, ATerm g_38, ATerm t)
{
  ATerm h_16 = NULL;
  t = SSL_fputc(f_38, g_38);
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_16);
  return(t);
}
static ATerm h_5 (ATerm a_23, ATerm b_23, ATerm t)
{
  ATerm i_16 = NULL;
  t = SSL_write_term_to_stream_text(a_23, b_23);
  i_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_16);
  return(t);
}
static ATerm j_5 (ATerm b_87 (ATerm), ATerm r_171, ATerm g_23, ATerm t)
{
  ATerm j_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_171, term_m_8);
  t = n_5(t);
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_16, g_23);
  t = b_87(t);
  t = fclose_0_0(t);
  t = g_23;
  return(t);
}
static ATerm i_5 (ATerm w_22, ATerm x_22, ATerm t)
{
  ATerm k_16 = NULL;
  t = SSL_write_term_to_stream_baf(w_22, x_22);
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_16);
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
  t = i_5(o_1, p_1, t);
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
  t = h_5(q_2, r_2, t);
  n_2 = t;
  t = term_a_9;
  o_2 = t;
  t = n_2;
  if(match_cons(t, sym_Stream_1))
    {
      p_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_9, n_2);
  t = g_5(o_2, p_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,y_16 = NULL,e_17 = NULL,k_17 = NULL,l_17 = NULL,r_17 = NULL,s_17 = NULL,v_17 = NULL,q_21 = NULL,r_21 = NULL,s_9 = NULL,r_9 = NULL;
  t_16 = t;
  if(match_cons(t, sym__2))
    {
      r_17 = ATgetArgument(t, 0);
      s_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_16);
  l_17 = t;
  t = r_17;
  {
    ATerm b_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm i_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((s_16 != NULL) && (s_16 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(i_1, t);
        LocalPopChoice(c_9);
      }
    else
      {
        t = b_9;
        t = term_h_9;
        s_16 = t;
      }
  }
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_17, s_17);
  r_9 = t;
  t = SSLsetAnnotations(r_9, l_17);
  t = t_16;
  if(match_cons(t, sym__2))
    {
      y_16 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_16);
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_16, (ATerm) ATmakeAppl(sym__2, not_null(s_16), e_17));
  s_9 = t;
  t = SSLsetAnnotations(s_9, u_16);
  k_17 = t;
  if(match_cons(t, sym__2))
    {
      q_21 = ATgetArgument(t, 0);
      r_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,t_9 = NULL;
        t = SSLgetAnnotations(k_17);
        l_0 = t;
        t = q_21;
        t = fetch_1_0(j_1, t);
        w_0 = t;
        t = r_21;
        if(match_cons(t, sym__2))
          {
            y_0 = ATgetArgument(t, 0);
            z_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_5(k_1, y_0, z_0, t);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_0, x_0);
        t_9 = t;
        t = SSLsetAnnotations(t_9, l_0);
        LocalPopChoice(n_9);
      }
    else
      {
        t = i_9;
        {
          ATerm g_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,u_9 = NULL;
          t = SSLgetAnnotations(k_17);
          g_2 = t;
          t = r_21;
          if(match_cons(t, sym__2))
            {
              l_2 = ATgetArgument(t, 0);
              m_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_5(l_1, l_2, m_2, t);
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_21, k_2);
          u_9 = t;
          t = SSLsetAnnotations(u_9, g_2);
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
ATerm apply_strategy_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
  e_22 = t;
  t = dtime_0_0(t);
  t = e_22;
  t = k_104(t);
  d_22 = t;
  t = dtime_0_0(t);
  y_21 = t;
  t = d_22;
  if(match_cons(t, sym__2))
    {
      z_21 = ATgetArgument(t, 0);
      c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_21), (ATerm) ATmakeAppl(sym_Runtime_1, y_21)), c_22);
  return(t);
}
static ATerm i_23 (ATerm t_22, ATerm t)
{
  t = SSL_fclose(t_22);
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
            t = i_23(e_23, t);
          }
      }
    }
  else
    {
      t = i_23(e_23, t);
    }
  return(t);
}
static ATerm k_5 (ATerm c_23, ATerm t)
{
  t = SSL_read_term_from_stream(c_23);
  return(t);
}
static ATerm l_5 (ATerm y_36, ATerm z_36, ATerm t)
{
  t = SSL_strcat(y_36, z_36);
  return(t);
}
static ATerm m_5 (ATerm h_38, ATerm i_38, ATerm t)
{
  ATerm j_23 = NULL;
  t = SSL_fopen(h_38, i_38);
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_23);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_23 = NULL;
  t = SSL_stdin_stream();
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_23 = NULL;
  t = SSL_stdout_stream();
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_23 = NULL;
  t = SSL_stderr_stream();
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_23);
  return(t);
}
static ATerm y_24 (ATerm v_23, ATerm t)
{
  ATerm w_23 = NULL;
  t = SSL_explode_term(v_23);
  if(match_cons(t, sym__2))
    {
      ATerm v_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_9 = ATgetArgument(t, 1);
        if(((ATgetType(w_9) == AT_LIST) && !(ATisEmpty(w_9))))
          {
            w_23 = ATgetFirst((ATermList) w_9);
            {
              ATerm y_9 = (ATerm) ATgetNext((ATermList) w_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_24 (ATerm z_23, ATerm a_24, ATerm b_24, ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,h_24 = NULL,e_10 = NULL;
  t = SSLgetAnnotations(b_24);
  e_24 = t;
  t = z_23;
  if(match_cons(t, sym_Path_1))
    {
      h_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_24, a_24);
  e_10 = t;
  t = SSLsetAnnotations(e_10, e_24);
  if(match_cons(t, sym__2))
    {
      c_24 = ATgetArgument(t, 0);
      d_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(c_24, d_24, t);
  return(t);
}
static ATerm a_25 (ATerm l_24, ATerm m_24, ATerm n_24, ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,t_24 = NULL,f_10 = NULL;
  t = SSLgetAnnotations(n_24);
  q_24 = t;
  t = SSL_is_string(l_24);
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_24, m_24);
  f_10 = t;
  t = SSLsetAnnotations(f_10, q_24);
  if(match_cons(t, sym__2))
    {
      o_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(o_24, p_24, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
  v_24 = t;
  if(match_cons(t, sym__2))
    {
      w_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
      {
        ATerm z_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_24(v_24, t);
            LocalPopChoice(a_10);
          }
        else
          {
            t = z_9;
            {
              ATerm g_10 = t;
              int h_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_24(w_24, x_24, v_24, t);
                  LocalPopChoice(h_10);
                }
              else
                {
                  t = g_10;
                  t = a_25(w_24, x_24, v_24, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_24(v_24, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,j_25 = NULL;
  j_25 = t;
  {
    ATerm i_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_25, term_l_10);
        t = n_5(t);
        LocalPopChoice(k_10);
      }
    else
      {
        t = i_10;
        {
          ATerm h_3 = NULL,n_3 = NULL;
          t = term_n_10;
          n_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_10, j_25);
          t = l_5(n_3, j_25, t);
          h_3 = t;
          t = SSL_perror(h_3);
          _fail(t);
        }
      }
  }
  d_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_5(e_25, t);
  c_25 = t;
  t = d_25;
  t = fclose_0_0(t);
  t = c_25;
  return(t);
}
ATerm fetch_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  static ATerm i_26 (ATerm t)
  {
    ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
    f_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_26 = ATgetFirst((ATermList) t);
        h_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_10 = t;
      int q_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_4 = NULL,n_4 = NULL,j_10 = NULL;
          t = SSLgetAnnotations(f_26);
          f_4 = t;
          t = g_26;
          t = u_87(t);
          n_4 = t;
          t = (ATerm) ATinsert(CheckATermList(h_26), n_4);
          j_10 = t;
          t = SSLsetAnnotations(j_10, f_4);
          LocalPopChoice(q_10);
        }
      else
        {
          t = o_10;
          {
            ATerm z_4 = NULL,p_5 = NULL,m_10 = NULL;
            t = SSLgetAnnotations(f_26);
            z_4 = t;
            t = h_26;
            t = i_26(t);
            p_5 = t;
            t = (ATerm) ATinsert(CheckATermList(p_5), g_26);
            m_10 = t;
            t = SSLsetAnnotations(m_10, z_4);
          }
        }
    }
    return(t);
  }
  t = i_26(t);
  return(t);
}
static ATerm q_5 (ATerm k_54, ATerm l_54, ATerm t)
{
  t = SSL_table_get(k_54, l_54);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm m_26 = NULL;
  m_26 = t;
  {
    ATerm s_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
        t = term_w_10;
        p_26 = t;
        t = term_y_10;
        q_26 = t;
        t = term_z_10;
        t = q_5(p_26, q_26, t);
        o_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_26, term_b_11);
        t = geq_0_0(t);
        t = m_26;
        t = t_102(t);
        LocalPopChoice(v_10);
      }
    else
      {
        t = s_10;
        t = m_26;
      }
  }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm t_26 = NULL;
  t_26 = t;
  if(match_string(t, "-k"))
    {
      t = t_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_26;
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
  u_26 = t;
  t = SSL_string_to_int(u_26);
  v_26 = t;
  t = term_c_11;
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, v_26);
  t = t_5(w_26, v_26, t);
  t = u_26;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_1, n_1, q_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm y_26 = NULL;
  y_26 = t;
  if(match_string(t, "-S"))
    {
      t = y_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_26;
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL;
  t = term_y_10;
  z_26 = t;
  t = term_f_5;
  a_27 = t;
  t = term_f_11;
  t = t_5(z_26, a_27, t);
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
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
  b_27 = t;
  t = SSL_string_to_int(b_27);
  c_27 = t;
  t = term_y_10;
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_10, c_27);
  t = t_5(d_27, c_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_27);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_n_11;
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
  ATerm e_27 = NULL,f_27 = NULL;
  t = term_o_11;
  e_27 = t;
  t = term_z_2;
  f_27 = t;
  t = term_s_11;
  t = t_5(e_27, f_27, t);
  t = term_t_11;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_1, w_1, x_1, t);
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
            t = ArgOption_3_0(y_1, z_1, a_2, t);
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            t = Option_3_0(b_2, c_2, d_2, t);
          }
      }
    }
  return(t);
}
static ATerm t_5 (ATerm y_47, ATerm z_47, ATerm t)
{
  ATerm g_27 = NULL;
  t = term_w_10;
  g_27 = t;
  t = SSL_table_put(g_27, y_47, z_47);
  t = (ATerm) ATmakeAppl(sym__3, term_w_10, y_47, z_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
      t = term_z_2;
      t = e_0(t);
      l_27 = t;
      t = term_b_12;
      m_27 = t;
      t = term_c_12;
      n_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_12, term_c_12, l_27);
      t = r_5(m_27, n_27, l_27, t);
      _fail(t);
    }
  else
    {
      ATerm q_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_27 = ATgetFirst((ATermList) t);
          k_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_27;
      t = c_0(t);
      t = term_z_2;
      t = d_0(t);
      q_27 = t;
      t = (ATerm) ATinsert(CheckATermList(k_27), q_27);
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm s_27 = NULL;
  s_27 = t;
  if(match_string(t, "-o"))
    {
      t = s_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_27;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL;
  t_27 = t;
  t = term_d_12;
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_12, t_27);
  t = t_5(u_27, t_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_27);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_e_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_2, f_2, h_2, t);
  return(t);
}
static ATerm r_5 (ATerm t_52, ATerm u_52, ATerm s_52, ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_52, u_52);
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_12 = ATgetArgument(t, 0);
            ATerm i_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_52, u_52);
        t = q_5(t_52, u_52, t);
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = (ATerm) ATempty;
      }
  }
  x_27 = t;
  t = (ATerm) ATinsert(CheckATermList(x_27), s_52);
  y_27 = t;
  t = SSL_table_put(t_52, u_52, y_27);
  t = w_27;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
      t = term_z_2;
      t = p_0(t);
      j_28 = t;
      t = term_b_12;
      k_28 = t;
      t = term_c_12;
      l_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_12, term_c_12, j_28);
      t = r_5(k_28, l_28, j_28, t);
      _fail(t);
    }
  else
    {
      ATerm p_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_28 = ATgetFirst((ATermList) t);
          g_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_28 = ATgetFirst((ATermList) t);
          i_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_28;
      t = n_0(t);
      t = h_28;
      t = o_0(t);
      p_28 = t;
      t = (ATerm) ATinsert(CheckATermList(i_28), p_28);
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  if(match_string(t, "-i"))
    {
      t = r_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_28;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL;
  s_28 = t;
  t = term_j_12;
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_12, s_28);
  t = t_5(t_28, s_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_28);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_k_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_2, j_2, s_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_2;
  t = whoami_0_0(t);
  u_28 = t;
  t = term_u_4;
  w_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_12), u_28);
  x_28 = t;
  t = SSL_printnl(w_28, x_28);
  t = term_y_4;
  v_28 = t;
  t = SSL_exit(v_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  t = term_w_10;
  y_28 = t;
  t = term_m_12;
  z_28 = t;
  t = term_q_12;
  t = q_5(y_28, z_28, t);
  return(t);
}
static ATerm o_5 (ATerm b_41, ATerm c_41, ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_41, c_41);
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      t = SSL_addr(b_41, c_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
  b_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_29;
      t = b_94(t);
    }
  else
    {
      ATerm g_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_29 = ATgetFirst((ATermList) t);
          d_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_29;
      t = foldr_2_0(b_94, c_94, t);
      g_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_29, g_29);
      t = c_94(t);
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
  t = term_f_5;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL;
  if(match_cons(t, sym__2))
    {
      c_6 = ATgetArgument(t, 0);
      d_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(c_6, d_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_29 = NULL,y_5 = NULL,z_5 = NULL;
  t = times_0_0(t);
  z_5 = t;
  t = SSL_explode_term(z_5);
  if(match_cons(t, sym__2))
    {
      ATerm x_12 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5;
  t = foldr_2_0(t_2, u_2, t);
  j_29 = t;
  t = SSL_TicksToSeconds(j_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
  u_29 = t;
  if(match_cons(t, sym__2))
    {
      v_29 = ATgetArgument(t, 0);
      w_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_29;
        if((v_29 != t))
          {
            _fail(t);
          }
        t = u_29;
        LocalPopChoice(a_13);
      }
    else
      {
        t = y_12;
        t = (ATerm) ATmakeAppl(sym__2, v_29, w_29);
        {
          ATerm b_13 = t;
          int c_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_29, w_29);
              LocalPopChoice(c_13);
            }
          else
            {
              t = b_13;
              t = SSL_gtr(v_29, w_29);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_29, w_29);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_30 = NULL,d_30 = NULL,g_30 = NULL;
        t = term_w_10;
        d_30 = t;
        t = term_y_10;
        g_30 = t;
        t = term_z_10;
        t = q_5(d_30, g_30, t);
        c_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_30, term_y_4);
        t = geq_0_0(t);
        t = a_30;
        t = s_102(t);
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        t = a_30;
      }
  }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,l_30 = NULL,m_30 = NULL;
  t = run_time_0_0(t);
  i_30 = t;
  t = term_z_2;
  t = whoami_0_0(t);
  j_30 = t;
  t = term_u_4;
  l_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_13), i_30), term_f_13), j_30);
  m_30 = t;
  t = SSL_printnl(l_30, m_30);
  t = (ATerm) ATmakeAppl(sym__2, term_u_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_13), i_30), term_f_13), j_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_5;
  n_30 = t;
  t = SSL_exit(n_30);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  y_30 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_30;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_30 = ATgetArgument(t, 0);
          {
            ATerm g_7 = NULL,p_10 = NULL;
            t = SSLgetAnnotations(y_30);
            g_7 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_30);
            p_10 = t;
            t = SSLsetAnnotations(p_10, g_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_30;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm h_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_30 = NULL,r_30 = NULL;
      t = term_w_10;
      q_30 = t;
      t = term_k_13;
      r_30 = t;
      t = term_l_13;
      t = q_5(q_30, r_30, t);
      LocalPopChoice(j_13);
    }
  else
    {
      t = h_13;
      t = fetch_1_0(x_2, t);
    }
  t = i_105(t);
  return(t);
}
ATerm map_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  static ATerm o_31 (ATerm t)
  {
    ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
    l_31 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_31;
      }
    else
      {
        ATerm q_7 = NULL,w_7 = NULL,x_7 = NULL,u_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_31 = ATgetFirst((ATermList) t);
            n_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_31);
        q_7 = t;
        t = m_31;
        t = k_87(t);
        w_7 = t;
        t = n_31;
        t = o_31(t);
        x_7 = t;
        t = (ATerm) ATinsert(CheckATermList(x_7), w_7);
        u_10 = t;
        t = SSLsetAnnotations(u_10, q_7);
      }
    return(t);
  }
  t = o_31(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_31 = ATgetFirst((ATermList) t);
      s_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_31 = NULL,x_31 = NULL;
        static ATerm a_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_31)), not_null(x_31));
          return(t);
        }
        t = s_31;
        t = k_0(t);
        if(((w_31 != NULL) && (w_31 != t)))
          _fail(t);
        else
          w_31 = t;
        t = r_31;
        t = i_0(t);
        if(((x_31 != NULL) && (x_31 != t)))
          _fail(t);
        else
          x_31 = t;
        t = s_31;
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
  ATerm m_32 = NULL;
  m_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_32), term_m_13);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_32 = NULL,f_32 = NULL;
      t = term_w_10;
      e_32 = t;
      t = term_m_12;
      f_32 = t;
      t = term_q_12;
      t = q_5(e_32, f_32, t);
      b_32 = t;
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
        static ATerm c_3 (ATerm t)
        {
          ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL,x_10 = NULL;
          i_32 = t;
          if(match_cons(t, sym_Program_1))
            {
              h_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_32);
          g_32 = t;
          t = h_32;
          if(((b_32 != NULL) && (b_32 != t)))
            _fail(t);
          else
            b_32 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, h_32);
          x_10 = t;
          t = SSLsetAnnotations(x_10, g_32);
          return(t);
        }
        t = fetch_1_0(c_3, t);
      }
    }
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_13), not_null(b_32)), term_r_13);
        t = echo_0_0(t);
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
      }
  }
  t = term_t_13;
  t = echo_0_0(t);
  t = term_b_12;
  c_32 = t;
  t = term_c_12;
  d_32 = t;
  t = term_u_13;
  t = q_5(c_32, d_32, t);
  t = reverse_acc_2_0(_id, d_3, t);
  t = map_1_0(e_3, t);
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_14), term_b_14), term_a_14), term_z_13), term_x_13);
        t = echo_0_0(t);
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  q_32 = t;
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_14 = ATgetFirst((ATermList) t);
                ATerm g_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_32;
          }
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        t = (ATerm) ATinsert(ATempty, q_32);
      }
  }
  r_32 = t;
  t = term_h_9;
  s_32 = t;
  t = SSL_printnl(s_32, r_32);
  t = q_32;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL;
  t = term_w_10;
  w_32 = t;
  t = term_m_12;
  x_32 = t;
  t = term_q_12;
  t = q_5(w_32, x_32, t);
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
  ATerm y_32 = NULL,z_32 = NULL;
  t = term_h_14;
  y_32 = t;
  t = term_z_2;
  z_32 = t;
  t = term_i_14;
  t = t_5(y_32, z_32, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_j_14;
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
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
  t = term_h_14;
  c_33 = t;
  t = term_z_2;
  d_33 = t;
  t = term_i_14;
  t = t_5(c_33, d_33, t);
  t = term_k_14;
  a_33 = t;
  t = term_z_2;
  b_33 = t;
  t = term_l_14;
  t = t_5(a_33, b_33, t);
  t = term_m_14;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_n_14;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_3, k_3, p_3, t);
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      t = Option_3_0(v_3, w_3, x_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_58 (ATerm), ATerm q_58 (ATerm), ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,a_11 = NULL;
  j_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_33 = ATgetFirst((ATermList) t);
      g_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_33);
  e_33 = t;
  t = f_33;
  t = p_58(t);
  h_33 = t;
  t = g_33;
  t = q_58(t);
  i_33 = t;
  t = (ATerm) ATinsert(CheckATermList(i_33), h_33);
  a_11 = t;
  t = SSLsetAnnotations(a_11, e_33);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,t_33 = NULL,u_33 = NULL,d_11 = NULL;
  o_33 = t;
  {
    ATerm r_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_14;
        t = l_107(t);
        LocalPopChoice(x_14);
      }
    else
      {
        t = r_14;
      }
  }
  t = o_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_33 = ATgetFirst((ATermList) t);
      r_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_33);
  p_33 = t;
  t = term_m_12;
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, q_33);
  t = t_5(u_33, q_33, t);
  t = r_33;
  {
    static ATerm e_34 (ATerm t)
    {
      ATerm z_14 = t;
      int a_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_15 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_33 = NULL;
              x_33 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_33;
              LocalPopChoice(c_15);
            }
          else
            {
              t = b_15;
              t = l_107(t);
              t = Cons_2_0(_id, e_34, t);
            }
          LocalPopChoice(a_15);
        }
      else
        {
          t = z_14;
          {
            ATerm a_34 = NULL,b_34 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_34 = ATgetFirst((ATermList) t);
                b_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_34), (ATerm) ATmakeAppl(sym_Undefined_1, a_34));
          }
        }
      return(t);
    }
    t = e_34(t);
  }
  t_33 = t;
  t = (ATerm) ATinsert(CheckATermList(t_33), (ATerm) ATmakeAppl(sym_Program_1, q_33));
  d_11 = t;
  t = SSLsetAnnotations(d_11, p_33);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  if(match_string(t, "--help"))
    {
      t = q_34;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_34;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_34;
        }
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL;
  t = term_k_13;
  r_34 = t;
  t = term_z_2;
  s_34 = t;
  t = term_d_15;
  t = t_5(r_34, s_34, t);
  t = term_e_15;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_j_15;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_107 (ATerm), ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL;
  l_34 = t;
  t = term_b_12;
  n_34 = t;
  t = term_c_12;
  o_34 = t;
  t = (ATerm) ATempty;
  p_34 = t;
  t = SSL_table_put(n_34, o_34, p_34);
  t = l_34;
  {
    static ATerm z_3 (ATerm t)
    {
      ATerm l_15 = t;
      int m_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_107(t);
          LocalPopChoice(m_15);
        }
      else
        {
          t = l_15;
          {
            ATerm o_15 = t;
            int r_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_4, b_4, c_4, t);
                LocalPopChoice(r_15);
              }
            else
              {
                t = o_15;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_3, t);
  }
  {
    ATerm s_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_35 = NULL;
        d_35 = t;
        {
          ATerm v_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_8 = NULL;
              t = d_35;
              {
                ATerm a_16 = t;
                int f_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_8 = NULL,z_8 = NULL;
                    t = term_w_10;
                    y_8 = t;
                    t = term_k_13;
                    z_8 = t;
                    t = term_l_13;
                    t = q_5(y_8, z_8, t);
                    LocalPopChoice(f_16);
                  }
                else
                  {
                    t = a_16;
                    t = fetch_1_0(d_4, t);
                  }
              }
              t = d_35;
              t = default_system_usage_0_0(t);
              t = term_f_5;
              v_8 = t;
              t = SSL_exit(v_8);
              LocalPopChoice(x_15);
            }
          else
            {
              t = v_15;
              {
                ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
                t = term_w_10;
                f_9 = t;
                t = term_h_14;
                g_9 = t;
                t = term_g_16;
                t = q_5(f_9, g_9, t);
                t = d_35;
                t = default_system_about_0_0(t);
                t = term_f_5;
                e_9 = t;
                t = SSL_exit(e_9);
              }
            }
        }
        LocalPopChoice(u_15);
      }
    else
      {
        t = s_15;
        {
          ATerm l_16 = t;
          int m_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
              static ATerm e_4 (ATerm t)
              {
                ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,h_11 = NULL;
                j_35 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_35 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_35);
                h_35 = t;
                t = i_35;
                if(((j_34 != NULL) && (j_34 != t)))
                  _fail(t);
                else
                  j_34 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_35);
                h_11 = t;
                t = SSLsetAnnotations(h_11, h_35);
                return(t);
              }
              t = fetch_1_0(e_4, t);
              t = term_u_4;
              f_35 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_34)), term_n_16);
              g_35 = t;
              t = SSL_printnl(f_35, g_35);
              t = (ATerm) ATmakeAppl(sym__2, term_u_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_34)), term_n_16));
              t = default_system_usage_0_0(t);
              t = term_y_4;
              e_35 = t;
              t = SSL_exit(e_35);
              LocalPopChoice(m_16);
            }
          else
            {
              t = l_16;
            }
        }
      }
  }
  k_34 = t;
  t = term_b_12;
  m_34 = t;
  t = SSL_table_destroy(m_34);
  t = k_34;
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
  t = parse_options_1_0(k_105, t);
  o_35 = t;
  t = term_o_16;
  r_35 = t;
  t = SSL_table_create(r_35);
  t = term_o_16;
  p_35 = t;
  t = term_p_16;
  q_35 = t;
  t = SSL_table_put(p_35, q_35, o_35);
  t = o_35;
  t = m_105(t);
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_105, t);
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
        {
          ATerm v_16 = t;
          int w_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_105(t);
              t = report_success_0_0(t);
              LocalPopChoice(w_16);
            }
          else
            {
              t = v_16;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = if_verbose2_1_0(m_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL;
  t = term_x_16;
  s_35 = t;
  t = term_z_2;
  t_35 = t;
  t = term_z_16;
  t = t_5(s_35, t_35, t);
  t = term_a_17;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_b_17;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
  u_35 = t;
  t = term_w_10;
  y_35 = t;
  t = term_m_12;
  z_35 = t;
  t = term_q_12;
  t = q_5(y_35, z_35, t);
  v_35 = t;
  t = term_u_4;
  w_35 = t;
  t = (ATerm) ATinsert(ATempty, v_35);
  x_35 = t;
  t = SSL_printnl(w_35, x_35);
  t = u_35;
  return(t);
}
ATerm iowrap_3_0 (ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm t)
{
  static ATerm g_4 (ATerm t)
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_104(t);
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        {
          ATerm f_17 = t;
          int g_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(g_17);
            }
          else
            {
              t = f_17;
              {
                ATerm h_17 = t;
                int i_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(i_17);
                  }
                else
                  {
                    t = h_17;
                    {
                      ATerm j_17 = t;
                      int m_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(j_4, k_4, l_4, t);
                          LocalPopChoice(m_17);
                        }
                      else
                        {
                          t = j_17;
                          {
                            ATerm n_17 = t;
                            int o_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(o_17);
                              }
                            else
                              {
                                t = n_17;
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
    ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
    b_36 = t;
    {
      ATerm p_17 = t;
      int q_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm o_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_36 != NULL) && (a_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_36 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_4, t);
          LocalPopChoice(q_17);
        }
      else
        {
          t = p_17;
          t = term_t_17;
          a_36 = t;
        }
    }
    t = not_null(a_36);
    t = ReadFromFile_0_0(t);
    c_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_36, c_36);
    t = apply_strategy_1_0(t_104, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(g_4, v_104, h_4, i_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,j_11 = NULL;
  e_37 = t;
  if(match_cons(t, sym__2))
    {
      b_37 = ATgetArgument(t, 0);
      c_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_37);
  a_37 = t;
  t = c_37;
  t = bottomup_1_0(t_4, t);
  d_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_37, d_37);
  j_11 = t;
  t = SSLsetAnnotations(j_11, a_37);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  h_37 = t;
  if(match_cons(t, sym_appl_2))
    {
      f_37 = ATgetArgument(t, 0);
      g_37 = ATgetArgument(t, 1);
      {
        ATerm u_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_37;
            t = e_5(f_37, g_37, t);
            LocalPopChoice(w_17);
          }
        else
          {
            t = u_17;
            t = h_37;
          }
      }
    }
  else
    {
      t = h_37;
    }
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = unflatten_list_0_0(t);
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
      }
  }
  y_37 = t;
  if(match_cons(t, sym_appl_2))
    {
      o_37 = ATgetArgument(t, 0);
      x_37 = ATgetArgument(t, 1);
      t = o_37;
      if(match_cons(t, sym_prod_3))
        {
          p_37 = ATgetArgument(t, 0);
          t_37 = ATgetArgument(t, 1);
          w_37 = ATgetArgument(t, 2);
          t = w_37;
          if(match_cons(t, sym_no_attrs_0))
            {
              t = t_37;
              if(match_cons(t, sym_cf_1))
                {
                  u_37 = ATgetArgument(t, 0);
                  t = u_37;
                  if(match_cons(t, sym_opt_1))
                    {
                      v_37 = ATgetArgument(t, 0);
                      t = v_37;
                      if(match_cons(t, sym_layout_0))
                        {
                          t = p_37;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              q_37 = ATgetFirst((ATermList) t);
                              s_37 = (ATerm) ATgetNext((ATermList) t);
                              t = s_37;
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = q_37;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      r_37 = ATgetArgument(t, 0);
                                      t = r_37;
                                      if(match_cons(t, sym_layout_0))
                                        {
                                          ATerm z_17 = t;
                                          int a_18 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = y_37;
                                              t = d_5(x_37, t);
                                              LocalPopChoice(a_18);
                                            }
                                          else
                                            {
                                              t = z_17;
                                              t = y_37;
                                            }
                                        }
                                      else
                                        {
                                          t = y_37;
                                        }
                                    }
                                  else
                                    {
                                      t = y_37;
                                    }
                                }
                              else
                                {
                                  t = y_37;
                                }
                            }
                          else
                            {
                              t = y_37;
                            }
                        }
                      else
                        {
                          t = y_37;
                        }
                    }
                  else
                    {
                      t = y_37;
                    }
                }
              else
                {
                  t = y_37;
                }
            }
          else
            {
              t = y_37;
            }
        }
      else
        {
          t = y_37;
        }
    }
  else
    {
      t = y_37;
    }
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = unflatten_lexical_0_0(t);
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_4, _fail, default_usage_0_0, t);
  return(t);
}
