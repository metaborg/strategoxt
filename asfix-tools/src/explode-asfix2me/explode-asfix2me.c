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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_y_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_r_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_k_11;
ATerm term_u_10;
ATerm term_i_10;
ATerm term_e_10;
ATerm term_f_9;
ATerm term_b_9;
ATerm term_q_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_h_5;
ATerm term_g_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_g_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_2));
  term_g_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeInt(255);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(sym_range_2, term_f_5, term_g_5);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_lex_1, term_n_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_cf_1, term_n_7);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_left_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_assoc_1, term_d_8);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_opt_1, term_n_7);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_cf_1, term_f_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym__2, term_s_11, term_f_5);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_5);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_g_2);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_r_12);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("This tool explodes an AsFix2ME term to a valid AsFix2 term. Explosion involes\n", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattening of lists, layout, literals, and lexicals.\n\n", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Observe that the structure of lexicals cannot be restored. Lexicals are\n", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattened into left linear binary trees.", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym__2, term_x_14, term_g_2);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym__2, term_a_15, term_g_2);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_g_2);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym__2, term_i_17, term_g_2);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm j_5 (ATerm i_21, ATerm j_21, ATerm k_21, ATerm t);
ATerm unflatten_lexical_0_0 (ATerm t);
ATerm MkLayoutCharacter_0_0 (ATerm t);
ATerm MkLayoutConsList_0_0 (ATerm t);
static ATerm k_5 (ATerm y_20, ATerm t);
ATerm MkCfConsList_1_0 (ATerm p_76 (ATerm), ATerm t);
ATerm MkCfConsList_2_0 (ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t);
ATerm MkLexConsList_1_0 (ATerm u_76 (ATerm), ATerm t);
ATerm unflatten_list_0_0 (ATerm t);
ATerm list_some_1_0 (ATerm h_85 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm l_5 (ATerm w_18, ATerm x_18, ATerm t);
ATerm bottomup_1_0 (ATerm r_78 (ATerm), ATerm t);
static ATerm o_5 (ATerm r_37, ATerm s_37, ATerm t);
static ATerm p_5 (ATerm z_22, ATerm a_23, ATerm t);
static ATerm r_5 (ATerm t_84 (ATerm), ATerm x_167, ATerm d_23, ATerm t);
static ATerm q_5 (ATerm v_22, ATerm w_22, ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm j_101 (ATerm), ATerm t);
static ATerm n_22 (ATerm f_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_5 (ATerm b_23, ATerm t);
static ATerm t_5 (ATerm t_37, ATerm u_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_24 (ATerm h_23, ATerm t);
static ATerm l_24 (ATerm l_23, ATerm m_23, ATerm n_23, ATerm t);
static ATerm m_24 (ATerm v_23, ATerm w_23, ATerm x_23, ATerm t);
static ATerm u_5 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm m_85 (ATerm), ATerm t);
static ATerm n_5 (ATerm k_36, ATerm l_36, ATerm t);
ATerm debug_1_0 (ATerm r_84 (ATerm), ATerm t);
static ATerm n_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm s_99 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm a_6 (ATerm n_46, ATerm o_46, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm y_5 (ATerm n_51, ATerm o_51, ATerm m_51, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm v_5 (ATerm m_40, ATerm n_40, ATerm t);
ATerm foldr_2_0 (ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_99 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm need_help_1_0 (ATerm h_102 (ATerm), ATerm t);
ATerm map_1_0 (ATerm c_85 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm x_5 (ATerm e_53, ATerm f_53, ATerm t);
static ATerm k_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_56 (ATerm), ATerm j_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_104 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm parse_options_1_0 (ATerm j_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm iowrap_3_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
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
  t = term_g_2;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_a_5;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_5), b_0), term_b_5);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_d_5;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
static ATerm j_5 (ATerm i_21, ATerm j_21, ATerm k_21, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, i_21)), (ATerm)ATmakeAppl(sym_cf_1, i_21), term_e_5), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_h_5))))), (ATerm)ATmakeAppl(sym_lex_1, i_21), term_e_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, j_21, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_h_5)))), term_e_5), k_21))));
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
          ATerm w_5 = ATgetArgument(i_5, 0);
          if(((ATgetType(w_5) == AT_LIST) && !(ATisEmpty(w_5))))
            {
              ATerm h_6 = ATgetFirst((ATermList) w_5);
              if(match_cons(h_6, sym_lex_1))
                {
                  s_0 = ATgetArgument(h_6, 0);
                }
              else
                _fail(t);
              {
                ATerm p_6 = (ATerm) ATgetNext((ATermList) w_5);
                if(((ATgetType(p_6) != AT_LIST) || !(ATisEmpty(p_6))))
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
            ATerm f_6 = ATgetArgument(i_5, 2);
            if(!(match_cons(f_6, sym_no_attrs_0)))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm m_5 = ATgetArgument(t, 1);
        if(((ATgetType(m_5) == AT_LIST) && !(ATisEmpty(m_5))))
          {
            ATerm v_6 = ATgetFirst((ATermList) m_5);
            if(match_cons(v_6, sym_appl_2))
              {
                ATerm x_6 = ATgetArgument(v_6, 0);
                if(match_cons(x_6, sym_prod_3))
                  {
                    t_0 = ATgetArgument(x_6, 0);
                    {
                      ATerm z_6 = ATgetArgument(x_6, 1);
                      if(match_cons(z_6, sym_iter_star_1))
                        {
                          ATerm e_7 = ATgetArgument(z_6, 0);
                          if(match_cons(e_7, sym_char_class_1))
                            {
                              ATerm f_7 = ATgetArgument(e_7, 0);
                              if(((ATgetType(f_7) == AT_LIST) && !(ATisEmpty(f_7))))
                                {
                                  ATerm h_7 = ATgetFirst((ATermList) f_7);
                                  if(match_cons(h_7, sym_range_2))
                                    {
                                      ATerm j_7 = ATgetArgument(h_7, 0);
                                      if(((ATgetType(j_7) != AT_INT) || (ATgetInt((ATermInt) j_7) != 0)))
                                        _fail(t);
                                      {
                                        ATerm k_7 = ATgetArgument(h_7, 1);
                                        if(((ATgetType(k_7) != AT_INT) || (ATgetInt((ATermInt) k_7) != 255)))
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm i_7 = (ATerm) ATgetNext((ATermList) f_7);
                                    if(((ATgetType(i_7) != AT_LIST) || !(ATisEmpty(i_7))))
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
                      ATerm d_7 = ATgetArgument(x_6, 2);
                      if(!(match_cons(d_7, sym_no_attrs_0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                u_0 = ATgetArgument(v_6, 1);
              }
            else
              _fail(t);
            {
              ATerm w_6 = (ATerm) ATgetNext((ATermList) m_5);
              if(((ATgetType(w_6) != AT_LIST) || !(ATisEmpty(w_6))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_5(s_0, t_0, u_0, t);
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
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_7), term_p_7, term_e_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_h_5))), term_o_7, term_e_5), (ATerm) ATinsert(ATempty, b_1))));
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        {
          ATerm c_1 = NULL,e_1 = NULL,f_1 = NULL;
          ATerm q_7 = t;
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
                        ATerm w_7 = ATgetArgument(t, 0);
                        e_1 = ATgetArgument(t, 1);
                        {
                          ATerm x_7 = ATgetArgument(t, 2);
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
                          ATerm y_7 = t;
                          int z_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_7), term_p_7, term_e_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, f_1)), term_o_7, term_e_5), (ATerm) ATinsert(ATempty, b_1))));
                              LocalPopChoice(z_7);
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
                        if(match_cons(t, sym_lit_1))
                          {
                            f_1 = ATgetArgument(t, 0);
                            {
                              ATerm a_8 = t;
                              int b_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_7), term_p_7, term_e_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, f_1)), term_o_7, term_e_5), (ATerm) ATinsert(ATempty, b_1))));
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
              t = q_7;
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
      ATerm e_2 = NULL,f_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_1 = ATgetFirst((ATermList) t);
          u_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_1;
      t = MkLayoutCharacter_0_0(t);
      e_2 = t;
      t = t_1;
      t = MkLayoutCharacter_0_0(t);
      f_2 = t;
      t = (ATerm) ATinsert(CheckATermList(u_1), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_p_7), term_p_7), term_p_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_e_8))), (ATerm) ATinsert(ATinsert(ATempty, f_2), e_2)));
      t = MkLayoutConsList_0_0(t);
    }
  return(t);
}
static ATerm k_5 (ATerm y_20, ATerm t)
{
  ATerm o_2 = NULL;
  t = y_20;
  t = MkLayoutConsList_0_0(t);
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_p_7), term_g_8, term_e_5), (ATerm) ATinsert(ATempty, o_2));
  return(t);
}
ATerm MkCfConsList_1_0 (ATerm p_76 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,j_3 = NULL,l_3 = NULL,m_3 = NULL,g_0 = NULL;
  static ATerm t_4 (ATerm t)
  {
    ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,v_3 = NULL;
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
        ATerm l_4 = NULL,m_4 = NULL,p_4 = NULL,q_4 = NULL,s_4 = NULL;
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
            v_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_g_2;
        t = p_76(t);
        l_4 = t;
        t = term_g_2;
        t = p_76(t);
        m_4 = t;
        t = term_g_2;
        t = p_76(t);
        p_4 = t;
        t = term_g_2;
        t = p_76(t);
        q_4 = t;
        t = term_g_2;
        t = p_76(t);
        s_4 = t;
        t = (ATerm) ATinsert(CheckATermList(v_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, m_4))), term_g_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, l_4))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, p_4)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_e_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, q_4)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, s_4)), term_e_5), (ATerm) ATinsert(ATempty, t_3))), r_3), p_3)));
        t = t_4(t);
      }
    return(t);
  }
  m_3 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_3 = ATgetFirst((ATermList) t);
      g_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_3);
  e_3 = t;
  t = term_g_2;
  t = p_76(t);
  j_3 = t;
  t = term_g_2;
  t = p_76(t);
  l_3 = t;
  t = (ATerm) ATinsert(CheckATermList(g_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, j_3)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, l_3)), term_e_5), (ATerm) ATinsert(ATempty, f_3)));
  g_0 = t;
  t = SSLsetAnnotations(g_0, e_3);
  t = t_4(t);
  return(t);
}
ATerm MkCfConsList_2_0 (ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t)
{
  ATerm z_5 = NULL,b_6 = NULL,g_6 = NULL,i_6 = NULL,j_6 = NULL,n_6 = NULL,o_6 = NULL,k_6 = NULL;
  static ATerm z_8 (ATerm t)
  {
    ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,y_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,g_7 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_6 = ATgetFirst((ATermList) t);
        r_6 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = r_6;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_6;
      }
    else
      {
        ATerm j_8 = NULL,m_8 = NULL,n_8 = NULL,r_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_6 = ATgetFirst((ATermList) t);
            t_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_6;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_6 = ATgetFirst((ATermList) t);
            y_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_6;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_7 = ATgetFirst((ATermList) t);
            b_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_7;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_7 = ATgetFirst((ATermList) t);
            g_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_g_2;
        t = r_76(t);
        j_8 = t;
        t = term_g_2;
        t = s_76(t);
        m_8 = t;
        t = term_g_2;
        t = s_76(t);
        n_8 = t;
        t = term_g_2;
        t = r_76(t);
        r_8 = t;
        t = term_g_2;
        t = s_76(t);
        t_8 = t;
        t = term_g_2;
        t = r_76(t);
        u_8 = t;
        t = term_g_2;
        t = s_76(t);
        v_8 = t;
        t = term_g_2;
        t = r_76(t);
        w_8 = t;
        t = term_g_2;
        t = r_76(t);
        x_8 = t;
        t = term_g_2;
        t = s_76(t);
        y_8 = t;
        t = (ATerm) ATinsert(CheckATermList(g_7), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, r_8, t_8))), term_g_8), n_8), term_g_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, j_8, m_8))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, u_8, v_8)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_e_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, w_8)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, x_8, y_8)), term_e_5), (ATerm) ATinsert(ATempty, c_7))), a_7), u_6), s_6), q_6)));
        t = z_8(t);
      }
    return(t);
  }
  o_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_6 = ATgetFirst((ATermList) t);
      g_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_6);
  z_5 = t;
  t = term_g_2;
  t = r_76(t);
  i_6 = t;
  t = term_g_2;
  t = r_76(t);
  j_6 = t;
  t = term_g_2;
  t = s_76(t);
  n_6 = t;
  t = (ATerm) ATinsert(CheckATermList(g_6), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, i_6)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, j_6, n_6)), term_e_5), (ATerm) ATinsert(ATempty, b_6)));
  k_6 = t;
  t = SSLsetAnnotations(k_6, z_5);
  t = z_8(t);
  return(t);
}
ATerm MkLexConsList_1_0 (ATerm u_76 (ATerm), ATerm t)
{
  static ATerm z_10 (ATerm t)
  {
    ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_9 = ATgetFirst((ATermList) t);
        h_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = h_9;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        ATerm a_10 = NULL,g_10 = NULL;
        t = term_g_2;
        t = u_76(t);
        a_10 = t;
        t = term_g_2;
        t = u_76(t);
        g_10 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, a_10)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, g_10)), term_e_5), (ATerm) ATinsert(ATempty, g_9));
      }
    else
      {
        ATerm n_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,x_10 = NULL,y_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_9 = ATgetFirst((ATermList) t);
            j_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_g_2;
        t = u_76(t);
        n_10 = t;
        t = term_g_2;
        t = u_76(t);
        q_10 = t;
        t = term_g_2;
        t = u_76(t);
        r_10 = t;
        t = term_g_2;
        t = u_76(t);
        s_10 = t;
        t = term_g_2;
        t = u_76(t);
        t_10 = t;
        t = term_g_2;
        t = u_76(t);
        x_10 = t;
        t = term_g_2;
        t = u_76(t);
        y_10 = t;
        t = (ATerm) ATinsert(CheckATermList(j_9), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, q_10))), (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, n_10))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, r_10)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_e_8))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, x_10)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, y_10)), term_e_5), (ATerm) ATinsert(ATempty, i_9))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, s_10)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, t_10)), term_e_5), (ATerm) ATinsert(ATempty, g_9)))));
        t = z_10(t);
      }
    return(t);
  }
  t = z_10(t);
  return(t);
}
ATerm unflatten_list_0_0 (ATerm t)
{
  ATerm w_11 = NULL,z_11 = NULL,d_12 = NULL,h_12 = NULL,j_12 = NULL,k_12 = NULL,n_12 = NULL,o_12 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      h_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12;
  if(match_cons(t, sym_list_1))
    {
      j_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_12;
  if(match_cons(t, sym_iter_1))
    {
      k_12 = ATgetArgument(t, 0);
      {
        static ATerm h_0 (ATerm t)
        {
          t = k_12;
          return(t);
        }
        t = o_12;
        t = MkLexConsList_1_0(h_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          k_12 = ATgetArgument(t, 0);
          t = o_12;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_11 = ATgetFirst((ATermList) t);
              d_12 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm b_13 = NULL;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_iter_1, k_12)), (ATerm) ATinsert(CheckATermList(d_12), z_11));
                t = unflatten_list_0_0(t);
                b_13 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, k_12))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, k_12)), term_e_5), (ATerm) ATinsert(ATempty, b_13));
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, k_12)), term_e_5), (ATerm) ATempty);
            }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              k_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_12;
          if(match_cons(t, sym_iter_sep_2))
            {
              n_12 = ATgetArgument(t, 0);
              w_11 = ATgetArgument(t, 1);
              {
                static ATerm j_0 (ATerm t)
                {
                  t = n_12;
                  return(t);
                }
                static ATerm m_0 (ATerm t)
                {
                  t = w_11;
                  return(t);
                }
                t = o_12;
                t = MkCfConsList_2_0(j_0, m_0, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  n_12 = ATgetArgument(t, 0);
                  w_11 = ATgetArgument(t, 1);
                  t = o_12;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_11 = ATgetFirst((ATermList) t);
                      d_12 = (ATerm) ATgetNext((ATermList) t);
                      {
                        ATerm o_13 = NULL;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, n_12, w_11))), (ATerm) ATinsert(CheckATermList(d_12), z_11));
                        t = unflatten_list_0_0(t);
                        o_13 = t;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, n_12, w_11))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, n_12, w_11)), term_e_5), (ATerm) ATinsert(ATempty, o_13));
                      }
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, n_12, w_11)), term_e_5), (ATerm) ATempty);
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      n_12 = ATgetArgument(t, 0);
                      {
                        static ATerm v_0 (ATerm t)
                        {
                          t = n_12;
                          return(t);
                        }
                        t = o_12;
                        t = MkCfConsList_1_0(v_0, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          n_12 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = o_12;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          z_11 = ATgetFirst((ATermList) t);
                          d_12 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm a_14 = NULL;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, n_12))), (ATerm) ATinsert(CheckATermList(d_12), z_11));
                            t = unflatten_list_0_0(t);
                            a_14 = t;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, n_12))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, n_12)), term_e_5), (ATerm) ATinsert(ATempty, a_14));
                          }
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, n_12)), term_e_5), (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm list_some_1_0 (ATerm h_85 (ATerm), ATerm t)
{
  static ATerm k_15 (ATerm t)
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_14 = NULL,k_14 = NULL,l_14 = NULL,o_14 = NULL,p_14 = NULL,s_9 = NULL;
        p_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_14 = ATgetFirst((ATermList) t);
            l_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_14);
        f_14 = t;
        t = k_14;
        t = h_85(t);
        o_14 = t;
        t = (ATerm) ATinsert(CheckATermList(l_14), o_14);
        s_9 = t;
        t = SSLsetAnnotations(s_9, f_14);
        LocalPopChoice(i_8);
        {
          ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,u_14 = NULL,v_14 = NULL,t_9 = NULL;
          v_14 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_14 = ATgetFirst((ATermList) t);
              s_14 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_14);
          q_14 = t;
          t = s_14;
          {
            static ATerm a_1 (ATerm t)
            {
              ATerm k_8 = t;
              int p_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_85(t);
                  LocalPopChoice(p_8);
                }
              else
                {
                  t = k_8;
                }
              return(t);
            }
            t = map_1_0(a_1, t);
          }
          u_14 = t;
          t = (ATerm) ATinsert(CheckATermList(u_14), r_14);
          t_9 = t;
          t = SSLsetAnnotations(t_9, q_14);
        }
      }
    else
      {
        t = h_8;
        {
          ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,j_15 = NULL,u_9 = NULL;
          j_15 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_15 = ATgetFirst((ATermList) t);
              g_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_15);
          e_15 = t;
          t = g_15;
          t = k_15(t);
          h_15 = t;
          t = (ATerm) ATinsert(CheckATermList(h_15), f_15);
          u_9 = t;
          t = SSLsetAnnotations(u_9, e_15);
        }
      }
    return(t);
  }
  t = k_15(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm m_15 = NULL,o_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      s_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_explode_string(s_15);
  o_15 = t;
  t = map_1_0(g_1, t);
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, m_15, (ATerm)ATmakeAppl(sym_lit_1, s_15), term_e_5), o_15);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm u_15 = NULL;
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, u_15));
  return(t);
}
static ATerm l_5 (ATerm w_18, ATerm x_18, ATerm t)
{
  ATerm l_15 = NULL;
  t = x_18;
  t = list_some_1_0(d_1, t);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, w_18, l_15);
  return(t);
}
ATerm bottomup_1_0 (ATerm r_78 (ATerm), ATerm t)
{
  static ATerm h_1 (ATerm t)
  {
    t = bottomup_1_0(r_78, t);
    return(t);
  }
  t = SRTS_all(h_1, t);
  t = r_78(t);
  return(t);
}
static ATerm o_5 (ATerm r_37, ATerm s_37, ATerm t)
{
  ATerm w_15 = NULL;
  t = SSL_fputc(r_37, s_37);
  w_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_15);
  return(t);
}
static ATerm p_5 (ATerm z_22, ATerm a_23, ATerm t)
{
  ATerm x_15 = NULL;
  t = SSL_write_term_to_stream_text(z_22, a_23);
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_15);
  return(t);
}
static ATerm r_5 (ATerm t_84 (ATerm), ATerm x_167, ATerm d_23, ATerm t)
{
  ATerm y_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_167, term_q_8);
  t = u_5(t);
  y_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_15, d_23);
  t = t_84(t);
  t = fclose_0_0(t);
  t = d_23;
  return(t);
}
static ATerm q_5 (ATerm v_22, ATerm w_22, ATerm t)
{
  ATerm a_16 = NULL;
  t = SSL_write_term_to_stream_baf(v_22, w_22);
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_16);
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
      ATerm s_8 = ATgetArgument(t, 0);
      if(match_cons(s_8, sym_Stream_1))
        {
          o_1 = ATgetArgument(s_8, 0);
        }
      else
        _fail(t);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(o_1, p_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_9 = ATgetArgument(t, 0);
      if(match_cons(a_9, sym_Stream_1))
        {
          u_2 = ATgetArgument(a_9, 0);
        }
      else
        _fail(t);
      v_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(u_2, v_2, t);
  r_2 = t;
  t = term_b_9;
  s_2 = t;
  t = r_2;
  if(match_cons(t, sym_Stream_1))
    {
      t_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_9, r_2);
  t = o_5(s_2, t_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,n_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,x_16 = NULL,h_17 = NULL,c_20 = NULL,e_20 = NULL,b_10 = NULL,z_9 = NULL;
  i_16 = t;
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_16);
  s_16 = t;
  t = t_16;
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm i_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((h_16 != NULL) && (h_16 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(i_1, t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        t = term_f_9;
        h_16 = t;
      }
  }
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_17, x_16);
  z_9 = t;
  t = SSLsetAnnotations(z_9, s_16);
  t = i_16;
  if(match_cons(t, sym__2))
    {
      k_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_16);
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_16, (ATerm) ATmakeAppl(sym__2, not_null(h_16), n_16));
  b_10 = t;
  t = SSLsetAnnotations(b_10, j_16);
  r_16 = t;
  if(match_cons(t, sym__2))
    {
      c_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,c_10 = NULL;
        t = SSLgetAnnotations(r_16);
        l_0 = t;
        t = c_20;
        t = fetch_1_0(j_1, t);
        w_0 = t;
        t = e_20;
        if(match_cons(t, sym__2))
          {
            y_0 = ATgetArgument(t, 0);
            z_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_5(k_1, y_0, z_0, t);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_0, x_0);
        c_10 = t;
        t = SSLsetAnnotations(c_10, l_0);
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
        {
          ATerm k_2 = NULL,n_2 = NULL,p_2 = NULL,q_2 = NULL,d_10 = NULL;
          t = SSLgetAnnotations(r_16);
          k_2 = t;
          t = e_20;
          if(match_cons(t, sym__2))
            {
              p_2 = ATgetArgument(t, 0);
              q_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_5(l_1, p_2, q_2, t);
          n_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_20, n_2);
          d_10 = t;
          t = SSLsetAnnotations(d_10, k_2);
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
ATerm apply_strategy_1_0 (ATerm j_101 (ATerm), ATerm t)
{
  ATerm f_21 = NULL,l_21 = NULL,m_21 = NULL,p_21 = NULL,q_21 = NULL;
  q_21 = t;
  t = dtime_0_0(t);
  t = q_21;
  t = j_101(t);
  p_21 = t;
  t = dtime_0_0(t);
  f_21 = t;
  t = p_21;
  if(match_cons(t, sym__2))
    {
      l_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_21), (ATerm) ATmakeAppl(sym_Runtime_1, f_21)), m_21);
  return(t);
}
static ATerm n_22 (ATerm f_22, ATerm t)
{
  t = SSL_fclose(f_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL;
  l_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_22 = ATgetArgument(t, 0);
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_22);
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            t = n_22(l_22, t);
          }
      }
    }
  else
    {
      t = n_22(l_22, t);
    }
  return(t);
}
static ATerm s_5 (ATerm b_23, ATerm t)
{
  t = SSL_read_term_from_stream(b_23);
  return(t);
}
static ATerm t_5 (ATerm t_37, ATerm u_37, ATerm t)
{
  ATerm o_22 = NULL;
  t = SSL_fopen(t_37, u_37);
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_22 = NULL;
  t = SSL_stdin_stream();
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_22 = NULL;
  t = SSL_stdout_stream();
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_22 = NULL;
  t = SSL_stderr_stream();
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_22);
  return(t);
}
static ATerm k_24 (ATerm h_23, ATerm t)
{
  ATerm i_23 = NULL;
  t = SSL_explode_term(h_23);
  if(match_cons(t, sym__2))
    {
      ATerm o_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_9 = ATgetArgument(t, 1);
        if(((ATgetType(q_9) == AT_LIST) && !(ATisEmpty(q_9))))
          {
            i_23 = ATgetFirst((ATermList) q_9);
            {
              ATerm r_9 = (ATerm) ATgetNext((ATermList) q_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_24 (ATerm l_23, ATerm m_23, ATerm n_23, ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,t_23 = NULL,o_10 = NULL;
  t = SSLgetAnnotations(n_23);
  q_23 = t;
  t = l_23;
  if(match_cons(t, sym_Path_1))
    {
      t_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_23, m_23);
  o_10 = t;
  t = SSLsetAnnotations(o_10, q_23);
  if(match_cons(t, sym__2))
    {
      o_23 = ATgetArgument(t, 0);
      p_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(o_23, p_23, t);
  return(t);
}
static ATerm m_24 (ATerm v_23, ATerm w_23, ATerm x_23, ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,d_24 = NULL,p_10 = NULL;
  t = SSLgetAnnotations(x_23);
  a_24 = t;
  t = SSL_is_string(v_23);
  d_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_24, w_23);
  p_10 = t;
  t = SSLsetAnnotations(p_10, a_24);
  if(match_cons(t, sym__2))
    {
      y_23 = ATgetArgument(t, 0);
      z_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(y_23, z_23, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  h_24 = t;
  if(match_cons(t, sym__2))
    {
      i_24 = ATgetArgument(t, 0);
      j_24 = ATgetArgument(t, 1);
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_24(h_24, t);
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
            {
              ATerm x_9 = t;
              int y_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_24(i_24, j_24, h_24, t);
                  LocalPopChoice(y_9);
                }
              else
                {
                  t = x_9;
                  t = m_24(i_24, j_24, h_24, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_24(h_24, t);
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_e_10;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
  ATerm f_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_24 = NULL;
      q_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, term_i_10);
      t = u_5(t);
      LocalPopChoice(h_10);
    }
  else
    {
      t = f_10;
      t = debug_1_0(m_1, t);
      _fail(t);
    }
  o_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_5(p_24, t);
  n_24 = t;
  t = o_24;
  t = fclose_0_0(t);
  t = n_24;
  return(t);
}
ATerm fetch_1_0 (ATerm m_85 (ATerm), ATerm t)
{
  static ATerm o_25 (ATerm t)
  {
    ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
    l_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_25 = ATgetFirst((ATermList) t);
        n_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_10 = t;
      int k_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_3 = NULL,d_4 = NULL,w_10 = NULL;
          t = SSLgetAnnotations(l_25);
          u_3 = t;
          t = m_25;
          t = m_85(t);
          d_4 = t;
          t = (ATerm) ATinsert(CheckATermList(n_25), d_4);
          w_10 = t;
          t = SSLsetAnnotations(w_10, u_3);
          LocalPopChoice(k_10);
        }
      else
        {
          t = j_10;
          {
            ATerm w_4 = NULL,z_4 = NULL,a_11 = NULL;
            t = SSLgetAnnotations(l_25);
            w_4 = t;
            t = n_25;
            t = o_25(t);
            z_4 = t;
            t = (ATerm) ATinsert(CheckATermList(z_4), m_25);
            a_11 = t;
            t = SSLsetAnnotations(a_11, w_4);
          }
        }
    }
    return(t);
  }
  t = o_25(t);
  return(t);
}
static ATerm n_5 (ATerm k_36, ATerm l_36, ATerm t)
{
  t = SSL_strcat(k_36, l_36);
  return(t);
}
ATerm debug_1_0 (ATerm r_84 (ATerm), ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  r_25 = t;
  t = r_84(t);
  s_25 = t;
  t = term_a_5;
  t_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_25), s_25);
  u_25 = t;
  t = SSL_printnl(t_25, u_25);
  t = r_25;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_10 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_26 = NULL;
      b_26 = t;
      t = SSL_is_string(b_26);
      LocalPopChoice(b_11);
    }
  else
    {
      t = v_10;
      {
        ATerm c_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(n_1, t);
            LocalPopChoice(e_11);
          }
        else
          {
            t = c_11;
            {
              ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
              h_26 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_26 = ATgetArgument(t, 0);
                  t = i_26;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_26 = ATgetArgument(t, 0);
                      t = i_26;
                      {
                        ATerm g_11 = t;
                        int i_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(i_11);
                          }
                        else
                          {
                            t = g_11;
                            t = debug_1_0(q_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_26 = NULL,o_26 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_26 = ATgetArgument(t, 0);
                          j_26 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_26;
                      t = eval_config_0_0(t);
                      n_26 = t;
                      t = j_26;
                      t = eval_config_0_0(t);
                      o_26 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_26, o_26);
                      t = n_5(n_26, o_26, t);
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
  ATerm s_26 = NULL,t_26 = NULL;
  s_26 = t;
  t = term_k_11;
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_11, s_26);
  t = x_5(t_26, s_26, t);
  {
    ATerm m_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL,v_26 = NULL;
        t = eval_config_0_0(t);
        u_26 = t;
        t = term_k_11;
        v_26 = t;
        t = SSL_table_put(v_26, s_26, u_26);
        t = u_26;
        LocalPopChoice(o_11);
      }
    else
      {
        t = m_11;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_99 (ATerm), ATerm t)
{
  ATerm z_26 = NULL;
  z_26 = t;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_27 = NULL;
        t = term_s_11;
        t = get_config_0_0(t);
        b_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_27, term_t_11);
        t = geq_0_0(t);
        t = z_26;
        t = s_99(t);
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = z_26;
      }
  }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm e_27 = NULL;
  e_27 = t;
  if(match_string(t, "-k"))
    {
      t = e_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_27;
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
  f_27 = t;
  t = SSL_string_to_int(f_27);
  g_27 = t;
  t = term_u_11;
  h_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_11, g_27);
  t = a_6(h_27, g_27, t);
  t = f_27;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_v_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_1, w_1, x_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm j_27 = NULL;
  j_27 = t;
  if(match_string(t, "-S"))
    {
      t = j_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_27;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL;
  t = term_s_11;
  k_27 = t;
  t = term_f_5;
  l_27 = t;
  t = term_x_11;
  t = a_6(k_27, l_27, t);
  t = term_y_11;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_a_12;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
  m_27 = t;
  t = SSL_string_to_int(m_27);
  n_27 = t;
  t = term_s_11;
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_11, n_27);
  t = a_6(o_27, n_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_27);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_b_12;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL;
  t = term_c_12;
  p_27 = t;
  t = term_g_2;
  q_27 = t;
  t = term_e_12;
  t = a_6(p_27, q_27, t);
  t = term_f_12;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_g_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_1, z_1, a_2, t);
      LocalPopChoice(l_12);
    }
  else
    {
      t = i_12;
      {
        ATerm m_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_2, c_2, d_2, t);
            LocalPopChoice(p_12);
          }
        else
          {
            t = m_12;
            t = Option_3_0(h_2, i_2, j_2, t);
          }
      }
    }
  return(t);
}
static ATerm a_6 (ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm r_27 = NULL;
  t = term_k_11;
  r_27 = t;
  t = SSL_table_put(r_27, n_46, o_46);
  t = (ATerm) ATmakeAppl(sym__3, term_k_11, n_46, o_46);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
      t = term_g_2;
      t = e_0(t);
      w_27 = t;
      t = term_q_12;
      x_27 = t;
      t = term_r_12;
      y_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_12, term_r_12, w_27);
      t = y_5(x_27, y_27, w_27, t);
      _fail(t);
    }
  else
    {
      ATerm b_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_27 = ATgetFirst((ATermList) t);
          v_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_27;
      t = c_0(t);
      t = term_g_2;
      t = d_0(t);
      b_28 = t;
      t = (ATerm) ATinsert(CheckATermList(v_27), b_28);
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm d_28 = NULL;
  d_28 = t;
  if(match_string(t, "-o"))
    {
      t = d_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_28;
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL;
  e_28 = t;
  t = term_s_12;
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_12, e_28);
  t = a_6(f_28, e_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_28);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_t_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_2, m_2, w_2, t);
  return(t);
}
static ATerm y_5 (ATerm n_51, ATerm o_51, ATerm m_51, ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_51, o_51);
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_12 = ATgetArgument(t, 0);
            ATerm x_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_51, o_51);
        t = x_5(n_51, o_51, t);
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        t = (ATerm) ATempty;
      }
  }
  i_28 = t;
  t = (ATerm) ATinsert(CheckATermList(i_28), m_51);
  j_28 = t;
  t = SSL_table_put(n_51, o_51, j_28);
  t = h_28;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
      t = term_g_2;
      t = p_0(t);
      u_28 = t;
      t = term_q_12;
      v_28 = t;
      t = term_r_12;
      w_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_12, term_r_12, u_28);
      t = y_5(v_28, w_28, u_28, t);
      _fail(t);
    }
  else
    {
      ATerm a_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_28 = ATgetFirst((ATermList) t);
          r_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_28 = ATgetFirst((ATermList) t);
          t_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_28;
      t = n_0(t);
      t = s_28;
      t = o_0(t);
      a_29 = t;
      t = (ATerm) ATinsert(CheckATermList(t_28), a_29);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm c_29 = NULL;
  c_29 = t;
  if(match_string(t, "-i"))
    {
      t = c_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_29;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL;
  d_29 = t;
  t = term_y_12;
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_12, d_29);
  t = a_6(e_29, d_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_29);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_z_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_2, y_2, z_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_2;
  t = whoami_0_0(t);
  f_29 = t;
  t = term_a_5;
  h_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_13), f_29);
  i_29 = t;
  t = SSL_printnl(h_29, i_29);
  t = term_d_5;
  g_29 = t;
  t = SSL_exit(g_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_13;
  t = get_config_0_0(t);
  return(t);
}
static ATerm v_5 (ATerm m_40, ATerm n_40, ATerm t)
{
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_40, n_40);
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      t = SSL_addr(m_40, n_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
  k_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_29;
      t = f_91(t);
    }
  else
    {
      ATerm p_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_29 = ATgetFirst((ATermList) t);
          m_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_29;
      t = foldr_2_0(f_91, g_91, t);
      p_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_29, p_29);
      t = g_91(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_f_5;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL;
  if(match_cons(t, sym__2))
    {
      l_6 = ATgetArgument(t, 0);
      m_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(l_6, m_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_29 = NULL,d_6 = NULL,e_6 = NULL;
  t = times_0_0(t);
  e_6 = t;
  t = SSL_explode_term(e_6);
  if(match_cons(t, sym__2))
    {
      ATerm f_13 = ATgetArgument(t, 0);
      d_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6;
  t = foldr_2_0(a_3, b_3, t);
  u_29 = t;
  t = SSL_TicksToSeconds(u_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
  f_30 = t;
  if(match_cons(t, sym__2))
    {
      g_30 = ATgetArgument(t, 0);
      h_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_30;
        if((g_30 != t))
          {
            _fail(t);
          }
        t = f_30;
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        t = (ATerm) ATmakeAppl(sym__2, g_30, h_30);
        {
          ATerm i_13 = t;
          int j_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_30, h_30);
              LocalPopChoice(j_13);
            }
          else
            {
              t = i_13;
              t = SSL_gtr(g_30, h_30);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_30, h_30);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_99 (ATerm), ATerm t)
{
  ATerm l_30 = NULL;
  l_30 = t;
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_30 = NULL;
        t = term_s_11;
        t = get_config_0_0(t);
        n_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_30, term_d_5);
        t = geq_0_0(t);
        t = l_30;
        t = r_99(t);
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        t = l_30;
      }
  }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,s_30 = NULL,t_30 = NULL;
  t = run_time_0_0(t);
  p_30 = t;
  t = term_g_2;
  t = whoami_0_0(t);
  q_30 = t;
  t = term_a_5;
  s_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_13), p_30), term_m_13), q_30);
  t_30 = t;
  t = SSL_printnl(s_30, t_30);
  t = (ATerm) ATmakeAppl(sym__2, term_a_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_13), p_30), term_m_13), q_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_5;
  u_30 = t;
  t = SSL_exit(u_30);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL;
  d_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_31 = ATgetArgument(t, 0);
          {
            ATerm r_7 = NULL,d_11 = NULL;
            t = SSLgetAnnotations(d_31);
            r_7 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_31);
            d_11 = t;
            t = SSLsetAnnotations(d_11, r_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_102 (ATerm), ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_13;
      t = get_config_0_0(t);
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      t = fetch_1_0(d_3, t);
    }
  t = h_102(t);
  return(t);
}
ATerm map_1_0 (ATerm c_85 (ATerm), ATerm t)
{
  static ATerm t_31 (ATerm t)
  {
    ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
    q_31 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_31;
      }
    else
      {
        ATerm c_8 = NULL,l_8 = NULL,o_8 = NULL,f_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_31 = ATgetFirst((ATermList) t);
            s_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_31);
        c_8 = t;
        t = r_31;
        t = c_85(t);
        l_8 = t;
        t = s_31;
        t = t_31(t);
        o_8 = t;
        t = (ATerm) ATinsert(CheckATermList(o_8), l_8);
        f_11 = t;
        t = SSLsetAnnotations(f_11, c_8);
      }
    return(t);
  }
  t = t_31(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_31 = ATgetFirst((ATermList) t);
      x_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_32 = NULL,c_32 = NULL;
        static ATerm h_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_32)), not_null(c_32));
          return(t);
        }
        t = x_31;
        t = k_0(t);
        if(((b_32 != NULL) && (b_32 != t)))
          _fail(t);
        else
          b_32 = t;
        t = w_31;
        t = i_0(t);
        if(((c_32 != NULL) && (c_32 != t)))
          _fail(t);
        else
          c_32 = t;
        t = x_31;
        t = reverse_acc_2_0(i_0, h_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_2;
      t = k_0(t);
    }
  return(t);
}
static ATerm x_5 (ATerm e_53, ATerm f_53, ATerm t)
{
  t = SSL_table_get(e_53, f_53);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_32), term_s_13);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_13;
      t = get_config_0_0(t);
      g_32 = t;
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        static ATerm i_3 (ATerm t)
        {
          ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,h_11 = NULL;
          l_32 = t;
          if(match_cons(t, sym_Program_1))
            {
              k_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_32);
          j_32 = t;
          t = k_32;
          if(((g_32 != NULL) && (g_32 != t)))
            _fail(t);
          else
            g_32 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, k_32);
          h_11 = t;
          t = SSLsetAnnotations(h_11, j_32);
          return(t);
        }
        t = fetch_1_0(i_3, t);
      }
    }
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_13), not_null(g_32)), term_x_13);
        t = echo_0_0(t);
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
      }
  }
  t = term_z_13;
  t = echo_0_0(t);
  t = term_q_12;
  h_32 = t;
  t = term_r_12;
  i_32 = t;
  t = term_b_14;
  t = x_5(h_32, i_32, t);
  t = reverse_acc_2_0(_id, k_3, t);
  t = map_1_0(n_3, t);
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_14), term_i_14), term_h_14), term_g_14), term_e_14);
        t = echo_0_0(t);
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
  t_32 = t;
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_14 = ATgetFirst((ATermList) t);
                ATerm w_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_32;
          }
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = (ATerm) ATinsert(ATempty, t_32);
      }
  }
  u_32 = t;
  t = term_f_9;
  v_32 = t;
  t = SSL_printnl(v_32, u_32);
  t = t_32;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL;
  t = term_x_14;
  z_32 = t;
  t = term_g_2;
  a_33 = t;
  t = term_y_14;
  t = a_6(z_32, a_33, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_z_14;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL;
  t = term_x_14;
  d_33 = t;
  t = term_g_2;
  e_33 = t;
  t = term_y_14;
  t = a_6(d_33, e_33, t);
  t = term_a_15;
  b_33 = t;
  t = term_g_2;
  c_33 = t;
  t = term_b_15;
  t = a_6(b_33, c_33, t);
  t = term_c_15;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_d_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_3, w_3, x_3, t);
      LocalPopChoice(n_15);
    }
  else
    {
      t = i_15;
      t = Option_3_0(y_3, z_3, a_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_56 (ATerm), ATerm j_56 (ATerm), ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,j_11 = NULL;
  k_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_33 = ATgetFirst((ATermList) t);
      h_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_33);
  f_33 = t;
  t = g_33;
  t = i_56(t);
  i_33 = t;
  t = h_33;
  t = j_56(t);
  j_33 = t;
  t = (ATerm) ATinsert(CheckATermList(j_33), i_33);
  j_11 = t;
  t = SSLsetAnnotations(j_11, f_33);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,u_33 = NULL,v_33 = NULL,l_11 = NULL;
  p_33 = t;
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_15;
        t = k_104(t);
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
      }
  }
  t = p_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_33 = ATgetFirst((ATermList) t);
      s_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_33);
  q_33 = t;
  t = term_c_13;
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_13, r_33);
  t = a_6(v_33, r_33, t);
  t = s_33;
  {
    static ATerm f_34 (ATerm t)
    {
      ATerm t_15 = t;
      int v_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_15 = t;
          int b_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_33 = NULL;
              y_33 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_33;
              LocalPopChoice(b_16);
            }
          else
            {
              t = z_15;
              t = k_104(t);
              t = Cons_2_0(_id, f_34, t);
            }
          LocalPopChoice(v_15);
        }
      else
        {
          t = t_15;
          {
            ATerm b_34 = NULL,c_34 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_34 = ATgetFirst((ATermList) t);
                c_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_34), (ATerm) ATmakeAppl(sym_Undefined_1, b_34));
          }
        }
      return(t);
    }
    t = f_34(t);
  }
  u_33 = t;
  t = (ATerm) ATinsert(CheckATermList(u_33), (ATerm) ATmakeAppl(sym_Program_1, r_33));
  l_11 = t;
  t = SSLsetAnnotations(l_11, q_33);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm r_34 = NULL;
  r_34 = t;
  if(match_string(t, "--help"))
    {
      t = r_34;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_34;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_34;
        }
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL;
  t = term_r_13;
  s_34 = t;
  t = term_g_2;
  t_34 = t;
  t = term_c_16;
  t = a_6(s_34, t_34, t);
  t = term_d_16;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_e_16;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_104 (ATerm), ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  m_34 = t;
  t = term_q_12;
  o_34 = t;
  t = term_r_12;
  p_34 = t;
  t = (ATerm) ATempty;
  q_34 = t;
  t = SSL_table_put(o_34, p_34, q_34);
  t = m_34;
  {
    static ATerm b_4 (ATerm t)
    {
      ATerm f_16 = t;
      int g_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_104(t);
          LocalPopChoice(g_16);
        }
      else
        {
          t = f_16;
          {
            ATerm l_16 = t;
            int m_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_4, e_4, f_4, t);
                LocalPopChoice(m_16);
              }
            else
              {
                t = l_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_4, t);
  }
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_35 = NULL;
        a_35 = t;
        {
          ATerm q_16 = t;
          int u_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_9 = NULL;
              t = a_35;
              {
                ATerm v_16 = t;
                int w_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_13;
                    t = get_config_0_0(t);
                    LocalPopChoice(w_16);
                  }
                else
                  {
                    t = v_16;
                    t = fetch_1_0(g_4, t);
                  }
              }
              t = a_35;
              t = default_system_usage_0_0(t);
              t = term_f_5;
              e_9 = t;
              t = SSL_exit(e_9);
              LocalPopChoice(u_16);
            }
          else
            {
              t = q_16;
              {
                ATerm p_9 = NULL;
                t = term_x_14;
                t = get_config_0_0(t);
                t = a_35;
                t = default_system_about_0_0(t);
                t = term_f_5;
                p_9 = t;
                t = SSL_exit(p_9);
              }
            }
        }
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        {
          ATerm y_16 = t;
          int z_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
              static ATerm h_4 (ATerm t)
              {
                ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL,n_11 = NULL;
                g_35 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_35 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_35);
                e_35 = t;
                t = f_35;
                if(((k_34 != NULL) && (k_34 != t)))
                  _fail(t);
                else
                  k_34 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_35);
                n_11 = t;
                t = SSLsetAnnotations(n_11, e_35);
                return(t);
              }
              t = fetch_1_0(h_4, t);
              t = term_a_5;
              c_35 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_34)), term_a_17);
              d_35 = t;
              t = SSL_printnl(c_35, d_35);
              t = (ATerm) ATmakeAppl(sym__2, term_a_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_34)), term_a_17));
              t = default_system_usage_0_0(t);
              t = term_d_5;
              b_35 = t;
              t = SSL_exit(b_35);
              LocalPopChoice(z_16);
            }
          else
            {
              t = y_16;
            }
        }
      }
  }
  l_34 = t;
  t = term_q_12;
  n_34 = t;
  t = SSL_table_destroy(n_34);
  t = l_34;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  t = parse_options_1_0(j_102, t);
  l_35 = t;
  t = term_b_17;
  o_35 = t;
  t = SSL_table_create(o_35);
  t = term_b_17;
  m_35 = t;
  t = term_c_17;
  n_35 = t;
  t = SSL_table_put(m_35, n_35, l_35);
  t = l_35;
  t = l_102(t);
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_102, t);
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        {
          ATerm f_17 = t;
          int g_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_102(t);
              t = report_success_0_0(t);
              LocalPopChoice(g_17);
            }
          else
            {
              t = f_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = if_verbose2_1_0(u_4, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  t = term_i_17;
  p_35 = t;
  t = term_g_2;
  q_35 = t;
  t = term_j_17;
  t = a_6(p_35, q_35, t);
  t = term_k_17;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_l_17;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
  r_35 = t;
  t = term_c_13;
  t = get_config_0_0(t);
  s_35 = t;
  t = term_a_5;
  t_35 = t;
  t = (ATerm) ATinsert(ATempty, s_35);
  u_35 = t;
  t = SSL_printnl(t_35, u_35);
  t = r_35;
  return(t);
}
ATerm iowrap_3_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm t)
{
  static ATerm i_4 (ATerm t)
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_101(t);
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        {
          ATerm o_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(p_17);
            }
          else
            {
              t = o_17;
              {
                ATerm q_17 = t;
                int r_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(r_17);
                  }
                else
                  {
                    t = q_17;
                    {
                      ATerm s_17 = t;
                      int t_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_4, o_4, r_4, t);
                          LocalPopChoice(t_17);
                        }
                      else
                        {
                          t = s_17;
                          {
                            ATerm u_17 = t;
                            int v_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(v_17);
                              }
                            else
                              {
                                t = u_17;
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
  static ATerm k_4 (ATerm t)
  {
    ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
    w_35 = t;
    {
      ATerm w_17 = t;
      int x_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm v_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((v_35 != NULL) && (v_35 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_35 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_4, t);
          LocalPopChoice(x_17);
        }
      else
        {
          t = w_17;
          t = term_y_17;
          v_35 = t;
        }
    }
    t = not_null(v_35);
    t = ReadFromFile_0_0(t);
    x_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_35, x_35);
    t = apply_strategy_1_0(s_101, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(i_4, u_101, j_4, k_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,p_11 = NULL;
  z_36 = t;
  if(match_cons(t, sym__2))
    {
      w_36 = ATgetArgument(t, 0);
      x_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_36);
  v_36 = t;
  t = x_36;
  t = bottomup_1_0(y_4, t);
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_36, y_36);
  p_11 = t;
  t = SSLsetAnnotations(p_11, v_36);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
  c_37 = t;
  if(match_cons(t, sym_appl_2))
    {
      a_37 = ATgetArgument(t, 0);
      b_37 = ATgetArgument(t, 1);
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_37;
            t = l_5(a_37, b_37, t);
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
            t = c_37;
          }
      }
    }
  else
    {
      t = c_37;
    }
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = unflatten_list_0_0(t);
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
      }
  }
  z_37 = t;
  if(match_cons(t, sym_appl_2))
    {
      j_37 = ATgetArgument(t, 0);
      y_37 = ATgetArgument(t, 1);
      t = j_37;
      if(match_cons(t, sym_prod_3))
        {
          k_37 = ATgetArgument(t, 0);
          o_37 = ATgetArgument(t, 1);
          x_37 = ATgetArgument(t, 2);
          t = x_37;
          if(match_cons(t, sym_no_attrs_0))
            {
              t = o_37;
              if(match_cons(t, sym_cf_1))
                {
                  p_37 = ATgetArgument(t, 0);
                  t = p_37;
                  if(match_cons(t, sym_opt_1))
                    {
                      q_37 = ATgetArgument(t, 0);
                      t = q_37;
                      if(match_cons(t, sym_layout_0))
                        {
                          t = k_37;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              l_37 = ATgetFirst((ATermList) t);
                              n_37 = (ATerm) ATgetNext((ATermList) t);
                              t = n_37;
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = l_37;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      m_37 = ATgetArgument(t, 0);
                                      t = m_37;
                                      if(match_cons(t, sym_layout_0))
                                        {
                                          ATerm d_18 = t;
                                          int e_18 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = z_37;
                                              t = k_5(y_37, t);
                                              LocalPopChoice(e_18);
                                            }
                                          else
                                            {
                                              t = d_18;
                                              t = z_37;
                                            }
                                        }
                                      else
                                        {
                                          t = z_37;
                                        }
                                    }
                                  else
                                    {
                                      t = z_37;
                                    }
                                }
                              else
                                {
                                  t = z_37;
                                }
                            }
                          else
                            {
                              t = z_37;
                            }
                        }
                      else
                        {
                          t = z_37;
                        }
                    }
                  else
                    {
                      t = z_37;
                    }
                }
              else
                {
                  t = z_37;
                }
            }
          else
            {
              t = z_37;
            }
        }
      else
        {
          t = z_37;
        }
    }
  else
    {
      t = z_37;
    }
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = unflatten_lexical_0_0(t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(x_4, _fail, default_usage_0_0, t);
  return(t);
}
