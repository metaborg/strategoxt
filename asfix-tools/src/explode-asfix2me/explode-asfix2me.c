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
ATerm term_z_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_u_15;
ATerm term_j_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_l_11;
ATerm term_w_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_k_9;
ATerm term_c_9;
ATerm term_t_8;
ATerm term_h_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_j_5;
ATerm term_h_5;
ATerm term_g_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_g_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_2));
  term_g_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeInt(255);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(sym_range_2, term_g_5, term_h_5);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_lex_1, term_o_7);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_cf_1, term_o_7);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_left_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_assoc_1, term_d_8);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_opt_1, term_o_7);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_cf_1, term_f_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_g_5);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_5);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_e_12, term_g_2);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym__2, term_r_12, term_s_12);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("This tool explodes an AsFix2ME term to a valid AsFix2 term. Explosion involes\n", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattening of lists, layout, literals, and lexicals.\n\n", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Observe that the structure of lexicals cannot be restored. Lexicals are\n", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattened into left linear binary trees.", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_g_2);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_g_2);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__2, term_s_13, term_g_2);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_g_2);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm k_5 (ATerm i_21, ATerm j_21, ATerm k_21, ATerm t);
ATerm unflatten_lexical_0_0 (ATerm t);
ATerm MkLayoutCharacter_0_0 (ATerm t);
ATerm MkLayoutConsList_0_0 (ATerm t);
static ATerm l_5 (ATerm y_20, ATerm t);
ATerm MkCfConsList_1_0 (ATerm m_77 (ATerm), ATerm t);
ATerm MkCfConsList_2_0 (ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm t);
ATerm MkLexConsList_1_0 (ATerm r_77 (ATerm), ATerm t);
ATerm unflatten_list_0_0 (ATerm t);
ATerm list_some_1_0 (ATerm e_86 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm m_5 (ATerm m_0, ATerm x_18, ATerm t);
ATerm bottomup_1_0 (ATerm o_79 (ATerm), ATerm t);
static ATerm p_5 (ATerm s_37, ATerm t_37, ATerm t);
static ATerm q_5 (ATerm z_22, ATerm a_23, ATerm t);
static ATerm s_5 (ATerm q_85 (ATerm), ATerm z_168, ATerm d_23, ATerm t);
static ATerm r_5 (ATerm v_22, ATerm w_22, ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm l_102 (ATerm), ATerm t);
static ATerm m_22 (ATerm b_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm t_5 (ATerm b_23, ATerm t);
static ATerm u_5 (ATerm u_37, ATerm v_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_24 (ATerm g_23, ATerm t);
static ATerm k_24 (ATerm k_23, ATerm l_23, ATerm m_23, ATerm t);
static ATerm l_24 (ATerm u_23, ATerm v_23, ATerm w_23, ATerm t);
static ATerm v_5 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_86 (ATerm), ATerm t);
static ATerm o_5 (ATerm m_36, ATerm n_36, ATerm t);
ATerm debug_1_0 (ATerm o_85 (ATerm), ATerm t);
static ATerm n_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm u_100 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_6 (ATerm k_47, ATerm l_47, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_5 (ATerm k_52, ATerm l_52, ATerm j_52, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_5 (ATerm n_40, ATerm o_40, ATerm t);
ATerm foldr_2_0 (ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_100 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm need_help_1_0 (ATerm j_103 (ATerm), ATerm t);
ATerm map_1_0 (ATerm z_85 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm y_5 (ATerm b_54, ATerm c_54, ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm f_57 (ATerm), ATerm g_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_105 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm parse_options_1_0 (ATerm l_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_103 (ATerm), ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm iowrap_3_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,j_0 = NULL;
  a_0 = t;
  t = term_g_2;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_b_5;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_5), b_0), term_c_5);
  j_0 = t;
  t = SSL_printnl(e_0, j_0);
  t = term_e_5;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
static ATerm k_5 (ATerm i_21, ATerm j_21, ATerm k_21, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, i_21)), (ATerm)ATmakeAppl(sym_cf_1, i_21), term_f_5), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_j_5))))), (ATerm)ATmakeAppl(sym_lex_1, i_21), term_f_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, j_21, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_j_5)))), term_f_5), k_21))));
  return(t);
}
ATerm unflatten_lexical_0_0 (ATerm t)
{
  ATerm q_0 = NULL,s_0 = NULL,u_0 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm n_5 = ATgetArgument(t, 0);
      if(match_cons(n_5, sym_prod_3))
        {
          ATerm d_6 = ATgetArgument(n_5, 0);
          if(((ATgetType(d_6) == AT_LIST) && !(ATisEmpty(d_6))))
            {
              ATerm l_6 = ATgetFirst((ATermList) d_6);
              if(match_cons(l_6, sym_lex_1))
                {
                  q_0 = ATgetArgument(l_6, 0);
                }
              else
                _fail(t);
              {
                ATerm p_6 = (ATerm) ATgetNext((ATermList) d_6);
                if(((ATgetType(p_6) != AT_LIST) || !(ATisEmpty(p_6))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm e_6 = ATgetArgument(n_5, 1);
            if(match_cons(e_6, sym_cf_1))
              {
                if((q_0 != ATgetArgument(e_6, 0)))
                  {
                    _fail(ATgetArgument(e_6, 0));
                  }
              }
            else
              _fail(t);
          }
          {
            ATerm h_6 = ATgetArgument(n_5, 2);
            if(!(match_cons(h_6, sym_no_attrs_0)))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm x_5 = ATgetArgument(t, 1);
        if(((ATgetType(x_5) == AT_LIST) && !(ATisEmpty(x_5))))
          {
            ATerm x_6 = ATgetFirst((ATermList) x_5);
            if(match_cons(x_6, sym_appl_2))
              {
                ATerm a_7 = ATgetArgument(x_6, 0);
                if(match_cons(a_7, sym_prod_3))
                  {
                    s_0 = ATgetArgument(a_7, 0);
                    {
                      ATerm e_7 = ATgetArgument(a_7, 1);
                      if(match_cons(e_7, sym_iter_star_1))
                        {
                          ATerm g_7 = ATgetArgument(e_7, 0);
                          if(match_cons(g_7, sym_char_class_1))
                            {
                              ATerm h_7 = ATgetArgument(g_7, 0);
                              if(((ATgetType(h_7) == AT_LIST) && !(ATisEmpty(h_7))))
                                {
                                  ATerm i_7 = ATgetFirst((ATermList) h_7);
                                  if(match_cons(i_7, sym_range_2))
                                    {
                                      ATerm k_7 = ATgetArgument(i_7, 0);
                                      if(((ATgetType(k_7) != AT_INT) || (ATgetInt((ATermInt) k_7) != 0)))
                                        _fail(t);
                                      {
                                        ATerm l_7 = ATgetArgument(i_7, 1);
                                        if(((ATgetType(l_7) != AT_INT) || (ATgetInt((ATermInt) l_7) != 255)))
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm j_7 = (ATerm) ATgetNext((ATermList) h_7);
                                    if(((ATgetType(j_7) != AT_LIST) || !(ATisEmpty(j_7))))
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
                      ATerm f_7 = ATgetArgument(a_7, 2);
                      if(!(match_cons(f_7, sym_no_attrs_0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                u_0 = ATgetArgument(x_6, 1);
              }
            else
              _fail(t);
            {
              ATerm y_6 = (ATerm) ATgetNext((ATermList) x_5);
              if(((ATgetType(y_6) != AT_LIST) || !(ATisEmpty(y_6))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_5(q_0, s_0, u_0, t);
  return(t);
}
ATerm MkLayoutCharacter_0_0 (ATerm t)
{
  ATerm b_1 = NULL;
  b_1 = t;
  {
    ATerm m_7 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_is_int(b_1);
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_p_7), term_q_7, term_f_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_j_5))), term_p_7, term_f_5), (ATerm) ATinsert(ATempty, b_1))));
        LocalPopChoice(n_7);
      }
    else
      {
        t = m_7;
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
                    ATerm u_7 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(s_7);
              t = c_1;
              {
                ATerm v_7 = t;
                int w_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_prod_3))
                      {
                        ATerm x_7 = ATgetArgument(t, 0);
                        e_1 = ATgetArgument(t, 1);
                        {
                          ATerm y_7 = ATgetArgument(t, 2);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_7);
                    t = e_1;
                    if(match_cons(t, sym_lex_1))
                      {
                        f_1 = ATgetArgument(t, 0);
                        {
                          ATerm z_7 = t;
                          int a_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_p_7), term_q_7, term_f_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, f_1)), term_p_7, term_f_5), (ATerm) ATinsert(ATempty, b_1))));
                              LocalPopChoice(a_8);
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
                        if(match_cons(t, sym_lit_1))
                          {
                            f_1 = ATgetArgument(t, 0);
                            {
                              ATerm b_8 = t;
                              int c_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_p_7), term_q_7, term_f_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, f_1)), term_p_7, term_f_5), (ATerm) ATinsert(ATempty, b_1))));
                                  LocalPopChoice(c_8);
                                }
                              else
                                {
                                  t = b_8;
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
                    t = v_7;
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
      t = (ATerm) ATinsert(CheckATermList(u_1), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_q_7), term_q_7), term_q_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_e_8))), (ATerm) ATinsert(ATinsert(ATempty, f_2), e_2)));
      t = MkLayoutConsList_0_0(t);
    }
  return(t);
}
static ATerm l_5 (ATerm y_20, ATerm t)
{
  ATerm h_2 = NULL;
  t = y_20;
  t = MkLayoutConsList_0_0(t);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_q_7), term_h_8, term_f_5), (ATerm) ATinsert(ATempty, h_2));
  return(t);
}
ATerm MkCfConsList_1_0 (ATerm m_77 (ATerm), ATerm t)
{
  ATerm b_3 = NULL,f_3 = NULL,g_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL,k_0 = NULL;
  static ATerm t_4 (ATerm t)
  {
    ATerm o_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_3 = ATgetFirst((ATermList) t);
        q_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = q_3;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_3;
      }
    else
      {
        ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,q_4 = NULL,r_4 = NULL;
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
        t = term_g_2;
        t = m_77(t);
        l_4 = t;
        t = term_g_2;
        t = m_77(t);
        m_4 = t;
        t = term_g_2;
        t = m_77(t);
        n_4 = t;
        t = term_g_2;
        t = m_77(t);
        q_4 = t;
        t = term_g_2;
        t = m_77(t);
        r_4 = t;
        t = (ATerm) ATinsert(CheckATermList(u_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, m_4))), term_h_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, l_4))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, n_4)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_e_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, q_4)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, r_4)), term_f_5), (ATerm) ATinsert(ATempty, t_3))), r_3), o_3)));
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
  b_3 = t;
  t = term_g_2;
  t = m_77(t);
  j_3 = t;
  t = term_g_2;
  t = m_77(t);
  k_3 = t;
  t = (ATerm) ATinsert(CheckATermList(g_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, j_3)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, k_3)), term_f_5), (ATerm) ATinsert(ATempty, f_3)));
  k_0 = t;
  t = SSLsetAnnotations(k_0, b_3);
  t = t_4(t);
  return(t);
}
ATerm MkCfConsList_2_0 (ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm t)
{
  ATerm i_5 = NULL,a_6 = NULL,c_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,o_6 = NULL,m_6 = NULL;
  static ATerm z_8 (ATerm t)
  {
    ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,z_6 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL;
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
        ATerm j_8 = NULL,k_8 = NULL,n_8 = NULL,o_8 = NULL,s_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
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
            v_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_6;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_6 = ATgetFirst((ATermList) t);
            b_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_7;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_7 = ATgetFirst((ATermList) t);
            d_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_g_2;
        t = o_77(t);
        j_8 = t;
        t = term_g_2;
        t = p_77(t);
        k_8 = t;
        t = term_g_2;
        t = p_77(t);
        n_8 = t;
        t = term_g_2;
        t = o_77(t);
        o_8 = t;
        t = term_g_2;
        t = p_77(t);
        s_8 = t;
        t = term_g_2;
        t = o_77(t);
        u_8 = t;
        t = term_g_2;
        t = p_77(t);
        v_8 = t;
        t = term_g_2;
        t = o_77(t);
        w_8 = t;
        t = term_g_2;
        t = o_77(t);
        x_8 = t;
        t = term_g_2;
        t = p_77(t);
        y_8 = t;
        t = (ATerm) ATinsert(CheckATermList(d_7), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, o_8, s_8))), term_h_8), n_8), term_h_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, j_8, k_8))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, u_8, v_8)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_e_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, w_8)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, x_8, y_8)), term_f_5), (ATerm) ATinsert(ATempty, c_7))), z_6), u_6), s_6), q_6)));
        t = z_8(t);
      }
    return(t);
  }
  o_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_6 = ATgetFirst((ATermList) t);
      c_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_6);
  i_5 = t;
  t = term_g_2;
  t = o_77(t);
  i_6 = t;
  t = term_g_2;
  t = o_77(t);
  j_6 = t;
  t = term_g_2;
  t = p_77(t);
  k_6 = t;
  t = (ATerm) ATinsert(CheckATermList(c_6), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, i_6)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, j_6, k_6)), term_f_5), (ATerm) ATinsert(ATempty, a_6)));
  m_6 = t;
  t = SSLsetAnnotations(m_6, i_5);
  t = z_8(t);
  return(t);
}
ATerm MkLexConsList_1_0 (ATerm r_77 (ATerm), ATerm t)
{
  static ATerm z_10 (ATerm t)
  {
    ATerm d_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_9 = ATgetFirst((ATermList) t);
        h_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = h_9;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        ATerm x_9 = NULL,b_10 = NULL;
        t = term_g_2;
        t = r_77(t);
        x_9 = t;
        t = term_g_2;
        t = r_77(t);
        b_10 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, x_9)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, b_10)), term_f_5), (ATerm) ATinsert(ATempty, d_9));
      }
    else
      {
        ATerm n_10 = NULL,o_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,y_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_9 = ATgetFirst((ATermList) t);
            j_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_g_2;
        t = r_77(t);
        n_10 = t;
        t = term_g_2;
        t = r_77(t);
        o_10 = t;
        t = term_g_2;
        t = r_77(t);
        r_10 = t;
        t = term_g_2;
        t = r_77(t);
        s_10 = t;
        t = term_g_2;
        t = r_77(t);
        t_10 = t;
        t = term_g_2;
        t = r_77(t);
        u_10 = t;
        t = term_g_2;
        t = r_77(t);
        y_10 = t;
        t = (ATerm) ATinsert(CheckATermList(j_9), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, o_10))), (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, n_10))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, r_10)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_e_8))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, u_10)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, y_10)), term_f_5), (ATerm) ATinsert(ATempty, i_9))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, s_10)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, t_10)), term_f_5), (ATerm) ATinsert(ATempty, d_9)))));
        t = z_10(t);
      }
    return(t);
  }
  t = z_10(t);
  return(t);
}
ATerm unflatten_list_0_0 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,a_12 = NULL,g_12 = NULL,i_12 = NULL,k_12 = NULL,l_12 = NULL,o_12 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      g_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12;
  if(match_cons(t, sym_list_1))
    {
      i_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_12;
  if(match_cons(t, sym_iter_1))
    {
      k_12 = ATgetArgument(t, 0);
      {
        static ATerm f_0 (ATerm t)
        {
          t = k_12;
          return(t);
        }
        t = o_12;
        t = MkLexConsList_1_0(f_0, t);
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
              x_11 = ATgetFirst((ATermList) t);
              a_12 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm z_12 = NULL;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_iter_1, k_12)), (ATerm) ATinsert(CheckATermList(a_12), x_11));
                t = unflatten_list_0_0(t);
                z_12 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, k_12))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, k_12)), term_f_5), (ATerm) ATinsert(ATempty, z_12));
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, k_12)), term_f_5), (ATerm) ATempty);
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
              l_12 = ATgetArgument(t, 0);
              w_11 = ATgetArgument(t, 1);
              {
                static ATerm h_0 (ATerm t)
                {
                  t = l_12;
                  return(t);
                }
                static ATerm v_0 (ATerm t)
                {
                  t = w_11;
                  return(t);
                }
                t = o_12;
                t = MkCfConsList_2_0(h_0, v_0, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  l_12 = ATgetArgument(t, 0);
                  w_11 = ATgetArgument(t, 1);
                  t = o_12;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_11 = ATgetFirst((ATermList) t);
                      a_12 = (ATerm) ATgetNext((ATermList) t);
                      {
                        ATerm m_13 = NULL;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, l_12, w_11))), (ATerm) ATinsert(CheckATermList(a_12), x_11));
                        t = unflatten_list_0_0(t);
                        m_13 = t;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, l_12, w_11))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, l_12, w_11)), term_f_5), (ATerm) ATinsert(ATempty, m_13));
                      }
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, l_12, w_11)), term_f_5), (ATerm) ATempty);
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      l_12 = ATgetArgument(t, 0);
                      {
                        static ATerm w_0 (ATerm t)
                        {
                          t = l_12;
                          return(t);
                        }
                        t = o_12;
                        t = MkCfConsList_1_0(w_0, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          l_12 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = o_12;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          x_11 = ATgetFirst((ATermList) t);
                          a_12 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm a_14 = NULL;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, l_12))), (ATerm) ATinsert(CheckATermList(a_12), x_11));
                            t = unflatten_list_0_0(t);
                            a_14 = t;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, l_12))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, l_12)), term_f_5), (ATerm) ATinsert(ATempty, a_14));
                          }
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, l_12)), term_f_5), (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm list_some_1_0 (ATerm e_86 (ATerm), ATerm t)
{
  static ATerm k_15 (ATerm t)
  {
    ATerm i_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_14 = NULL,g_14 = NULL,l_14 = NULL,m_14 = NULL,p_14 = NULL,u_9 = NULL;
        p_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_14 = ATgetFirst((ATermList) t);
            l_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_14);
        f_14 = t;
        t = g_14;
        t = e_86(t);
        m_14 = t;
        t = (ATerm) ATinsert(CheckATermList(l_14), m_14);
        u_9 = t;
        t = SSLsetAnnotations(u_9, f_14);
        LocalPopChoice(l_8);
        {
          ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,v_14 = NULL,v_9 = NULL;
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
              ATerm m_8 = t;
              int r_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_86(t);
                  LocalPopChoice(r_8);
                }
              else
                {
                  t = m_8;
                }
              return(t);
            }
            t = map_1_0(a_1, t);
          }
          t_14 = t;
          t = (ATerm) ATinsert(CheckATermList(t_14), r_14);
          v_9 = t;
          t = SSLsetAnnotations(v_9, q_14);
        }
      }
    else
      {
        t = i_8;
        {
          ATerm y_14 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,w_9 = NULL;
          i_15 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_15 = ATgetFirst((ATermList) t);
              g_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_15);
          y_14 = t;
          t = g_15;
          t = k_15(t);
          h_15 = t;
          t = (ATerm) ATinsert(CheckATermList(h_15), f_15);
          w_9 = t;
          t = SSLsetAnnotations(w_9, y_14);
        }
      }
    return(t);
  }
  t = k_15(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,p_15 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      p_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_explode_string(p_15);
  n_15 = t;
  t = map_1_0(g_1, t);
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, m_15, (ATerm)ATmakeAppl(sym_lit_1, p_15), term_f_5), n_15);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm t_15 = NULL;
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, t_15));
  return(t);
}
static ATerm m_5 (ATerm m_0, ATerm x_18, ATerm t)
{
  ATerm l_15 = NULL;
  t = x_18;
  t = list_some_1_0(d_1, t);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, m_0, l_15);
  return(t);
}
ATerm bottomup_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  static ATerm h_1 (ATerm t)
  {
    t = bottomup_1_0(o_79, t);
    return(t);
  }
  t = SRTS_all(h_1, t);
  t = o_79(t);
  return(t);
}
static ATerm p_5 (ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm v_15 = NULL;
  t = SSL_fputc(s_37, t_37);
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_15);
  return(t);
}
static ATerm q_5 (ATerm z_22, ATerm a_23, ATerm t)
{
  ATerm x_15 = NULL;
  t = SSL_write_term_to_stream_text(z_22, a_23);
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_15);
  return(t);
}
static ATerm s_5 (ATerm q_85 (ATerm), ATerm z_168, ATerm d_23, ATerm t)
{
  ATerm y_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_168, term_t_8);
  t = v_5(t);
  y_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_15, d_23);
  t = q_85(t);
  t = fclose_0_0(t);
  t = d_23;
  return(t);
}
static ATerm r_5 (ATerm v_22, ATerm w_22, ATerm t)
{
  ATerm z_15 = NULL;
  t = SSL_write_term_to_stream_baf(v_22, w_22);
  z_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_15);
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
      ATerm a_9 = ATgetArgument(t, 0);
      if(match_cons(a_9, sym_Stream_1))
        {
          p_1 = ATgetArgument(a_9, 0);
        }
      else
        _fail(t);
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(p_1, b_2, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_9 = ATgetArgument(t, 0);
      if(match_cons(b_9, sym_Stream_1))
        {
          v_2 = ATgetArgument(b_9, 0);
        }
      else
        _fail(t);
      w_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(v_2, w_2, t);
  s_2 = t;
  t = term_c_9;
  t_2 = t;
  t = s_2;
  if(match_cons(t, sym_Stream_1))
    {
      u_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_9, s_2);
  t = p_5(t_2, u_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,y_16 = NULL,x_19 = NULL,c_20 = NULL,d_10 = NULL,c_10 = NULL;
  i_16 = t;
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_16);
  s_16 = t;
  t = t_16;
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
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
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        t = term_k_9;
        h_16 = t;
      }
  }
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_16, u_16);
  c_10 = t;
  t = SSLsetAnnotations(c_10, s_16);
  t = i_16;
  if(match_cons(t, sym__2))
    {
      k_16 = ATgetArgument(t, 0);
      l_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_16);
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_16, (ATerm) ATmakeAppl(sym__2, not_null(h_16), l_16));
  d_10 = t;
  t = SSLsetAnnotations(d_10, j_16);
  r_16 = t;
  if(match_cons(t, sym__2))
    {
      x_19 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,o_1 = NULL,e_10 = NULL;
        t = SSLgetAnnotations(r_16);
        o_0 = t;
        t = x_19;
        t = fetch_1_0(j_1, t);
        x_0 = t;
        t = c_20;
        if(match_cons(t, sym__2))
          {
            z_0 = ATgetArgument(t, 0);
            o_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_5(k_1, z_0, o_1, t);
        y_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_0, y_0);
        e_10 = t;
        t = SSLsetAnnotations(e_10, o_0);
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        {
          ATerm m_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,f_10 = NULL;
          t = SSLgetAnnotations(r_16);
          m_2 = t;
          t = c_20;
          if(match_cons(t, sym__2))
            {
              q_2 = ATgetArgument(t, 0);
              r_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_5(l_1, q_2, r_2, t);
          p_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_19, p_2);
          f_10 = t;
          t = SSLsetAnnotations(f_10, m_2);
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
ATerm apply_strategy_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,l_21 = NULL,m_21 = NULL,p_21 = NULL;
  p_21 = t;
  t = dtime_0_0(t);
  t = p_21;
  t = l_102(t);
  m_21 = t;
  t = dtime_0_0(t);
  e_21 = t;
  t = m_21;
  if(match_cons(t, sym__2))
    {
      f_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_21), (ATerm) ATmakeAppl(sym_Runtime_1, e_21)), l_21);
  return(t);
}
static ATerm m_22 (ATerm b_22, ATerm t)
{
  t = SSL_fclose(b_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL;
  k_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_22 = ATgetArgument(t, 0);
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_22);
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            t = m_22(k_22, t);
          }
      }
    }
  else
    {
      t = m_22(k_22, t);
    }
  return(t);
}
static ATerm t_5 (ATerm b_23, ATerm t)
{
  t = SSL_read_term_from_stream(b_23);
  return(t);
}
static ATerm u_5 (ATerm u_37, ATerm v_37, ATerm t)
{
  ATerm n_22 = NULL;
  t = SSL_fopen(u_37, v_37);
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_22 = NULL;
  t = SSL_stdin_stream();
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_22 = NULL;
  t = SSL_stdout_stream();
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_22 = NULL;
  t = SSL_stderr_stream();
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_22);
  return(t);
}
static ATerm j_24 (ATerm g_23, ATerm t)
{
  ATerm h_23 = NULL;
  t = SSL_explode_term(g_23);
  if(match_cons(t, sym__2))
    {
      ATerm p_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_9 = ATgetArgument(t, 1);
        if(((ATgetType(q_9) == AT_LIST) && !(ATisEmpty(q_9))))
          {
            h_23 = ATgetFirst((ATermList) q_9);
            {
              ATerm s_9 = (ATerm) ATgetNext((ATermList) q_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_24 (ATerm k_23, ATerm l_23, ATerm m_23, ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,s_23 = NULL,q_10 = NULL;
  t = SSLgetAnnotations(m_23);
  p_23 = t;
  t = k_23;
  if(match_cons(t, sym_Path_1))
    {
      s_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_23, l_23);
  q_10 = t;
  t = SSLsetAnnotations(q_10, p_23);
  if(match_cons(t, sym__2))
    {
      n_23 = ATgetArgument(t, 0);
      o_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(n_23, o_23, t);
  return(t);
}
static ATerm l_24 (ATerm u_23, ATerm v_23, ATerm w_23, ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,c_24 = NULL,v_10 = NULL;
  t = SSLgetAnnotations(w_23);
  z_23 = t;
  t = SSL_is_string(u_23);
  c_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_24, v_23);
  v_10 = t;
  t = SSLsetAnnotations(v_10, z_23);
  if(match_cons(t, sym__2))
    {
      x_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(x_23, y_23, t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  g_24 = t;
  if(match_cons(t, sym__2))
    {
      h_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
      {
        ATerm t_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_24(g_24, t);
            LocalPopChoice(y_9);
          }
        else
          {
            t = t_9;
            {
              ATerm z_9 = t;
              int a_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_24(h_24, i_24, g_24, t);
                  LocalPopChoice(a_10);
                }
              else
                {
                  t = z_9;
                  t = l_24(h_24, i_24, g_24, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_24(g_24, t);
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_24 = NULL;
      p_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_24, term_j_10);
      t = v_5(t);
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      t = debug_1_0(m_1, t);
      _fail(t);
    }
  n_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(o_24, t);
  m_24 = t;
  t = n_24;
  t = fclose_0_0(t);
  t = m_24;
  return(t);
}
ATerm fetch_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  static ATerm n_25 (ATerm t)
  {
    ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
    k_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_25 = ATgetFirst((ATermList) t);
        m_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_10 = t;
      int l_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_4 = NULL,f_4 = NULL,a_11 = NULL;
          t = SSLgetAnnotations(k_25);
          c_4 = t;
          t = l_25;
          t = j_86(t);
          f_4 = t;
          t = (ATerm) ATinsert(CheckATermList(m_25), f_4);
          a_11 = t;
          t = SSLsetAnnotations(a_11, c_4);
          LocalPopChoice(l_10);
        }
      else
        {
          t = k_10;
          {
            ATerm x_4 = NULL,a_5 = NULL,b_11 = NULL;
            t = SSLgetAnnotations(k_25);
            x_4 = t;
            t = m_25;
            t = n_25(t);
            a_5 = t;
            t = (ATerm) ATinsert(CheckATermList(a_5), l_25);
            b_11 = t;
            t = SSLsetAnnotations(b_11, x_4);
          }
        }
    }
    return(t);
  }
  t = n_25(t);
  return(t);
}
static ATerm o_5 (ATerm m_36, ATerm n_36, ATerm t)
{
  t = SSL_strcat(m_36, n_36);
  return(t);
}
ATerm debug_1_0 (ATerm o_85 (ATerm), ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  q_25 = t;
  t = o_85(t);
  r_25 = t;
  t = term_b_5;
  s_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_25), r_25);
  t_25 = t;
  t = SSL_printnl(s_25, t_25);
  t = q_25;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm m_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(p_10);
    }
  else
    {
      t = m_10;
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_10 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_26 = NULL;
      a_26 = t;
      t = SSL_is_string(a_26);
      LocalPopChoice(c_11);
    }
  else
    {
      t = x_10;
      {
        ATerm d_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(n_1, t);
            LocalPopChoice(f_11);
          }
        else
          {
            t = d_11;
            {
              ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
              g_26 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_26 = ATgetArgument(t, 0);
                  t = h_26;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_26 = ATgetArgument(t, 0);
                      t = h_26;
                      {
                        ATerm h_11 = t;
                        int j_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(j_11);
                          }
                        else
                          {
                            t = h_11;
                            t = debug_1_0(q_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_26 = NULL,n_26 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_26 = ATgetArgument(t, 0);
                          i_26 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_26;
                      t = eval_config_0_0(t);
                      m_26 = t;
                      t = i_26;
                      t = eval_config_0_0(t);
                      n_26 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_26, n_26);
                      t = o_5(m_26, n_26, t);
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
  ATerm r_26 = NULL,s_26 = NULL;
  r_26 = t;
  t = term_l_11;
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_11, r_26);
  t = y_5(s_26, r_26, t);
  {
    ATerm n_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_26 = NULL,u_26 = NULL;
        t = eval_config_0_0(t);
        t_26 = t;
        t = term_l_11;
        u_26 = t;
        t = SSL_table_put(u_26, r_26, t_26);
        t = t_26;
        LocalPopChoice(p_11);
      }
    else
      {
        t = n_11;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_100 (ATerm), ATerm t)
{
  ATerm y_26 = NULL;
  y_26 = t;
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL;
        t = term_t_11;
        t = get_config_0_0(t);
        a_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_27, term_u_11);
        t = geq_0_0(t);
        t = y_26;
        t = u_100(t);
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = y_26;
      }
  }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm d_27 = NULL;
  d_27 = t;
  if(match_string(t, "-k"))
    {
      t = d_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_27;
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  e_27 = t;
  t = SSL_string_to_int(e_27);
  f_27 = t;
  t = term_v_11;
  g_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, f_27);
  t = b_6(g_27, f_27, t);
  t = e_27;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_1, w_1, x_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  if(match_string(t, "-S"))
    {
      t = i_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_27;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  t = term_t_11;
  j_27 = t;
  t = term_g_5;
  k_27 = t;
  t = term_z_11;
  t = b_6(j_27, k_27, t);
  t = term_b_12;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_c_12;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  l_27 = t;
  t = SSL_string_to_int(l_27);
  m_27 = t;
  t = term_t_11;
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_11, m_27);
  t = b_6(n_27, m_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_27);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_d_12;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL;
  t = term_e_12;
  o_27 = t;
  t = term_g_2;
  p_27 = t;
  t = term_f_12;
  t = b_6(o_27, p_27, t);
  t = term_h_12;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_j_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_1, z_1, a_2, t);
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_2, d_2, i_2, t);
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            t = Option_3_0(j_2, k_2, l_2, t);
          }
      }
    }
  return(t);
}
static ATerm b_6 (ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm q_27 = NULL;
  t = term_l_11;
  q_27 = t;
  t = SSL_table_put(q_27, k_47, l_47);
  t = (ATerm) ATmakeAppl(sym__3, term_l_11, k_47, l_47);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
      t = term_g_2;
      t = i_0(t);
      v_27 = t;
      t = term_r_12;
      w_27 = t;
      t = term_s_12;
      x_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_12, term_s_12, v_27);
      t = z_5(w_27, x_27, v_27, t);
      _fail(t);
    }
  else
    {
      ATerm a_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_27 = ATgetFirst((ATermList) t);
          u_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_27;
      t = d_0(t);
      t = term_g_2;
      t = g_0(t);
      a_28 = t;
      t = (ATerm) ATinsert(CheckATermList(u_27), a_28);
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm c_28 = NULL;
  c_28 = t;
  if(match_string(t, "-o"))
    {
      t = c_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_28;
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL;
  d_28 = t;
  t = term_t_12;
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_12, d_28);
  t = b_6(e_28, d_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_28);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_u_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_2, o_2, x_2, t);
  return(t);
}
static ATerm z_5 (ATerm k_52, ATerm l_52, ATerm j_52, ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_52, l_52);
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_12 = ATgetArgument(t, 0);
            ATerm y_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_52, l_52);
        t = y_5(k_52, l_52, t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        t = (ATerm) ATempty;
      }
  }
  h_28 = t;
  t = (ATerm) ATinsert(CheckATermList(h_28), j_52);
  i_28 = t;
  t = SSL_table_put(k_52, l_52, i_28);
  t = g_28;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
      t = term_g_2;
      t = t_0(t);
      t_28 = t;
      t = term_r_12;
      u_28 = t;
      t = term_s_12;
      v_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_12, term_s_12, t_28);
      t = z_5(u_28, v_28, t_28, t);
      _fail(t);
    }
  else
    {
      ATerm z_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_28 = ATgetFirst((ATermList) t);
          q_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_28 = ATgetFirst((ATermList) t);
          s_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_28;
      t = p_0(t);
      t = r_28;
      t = r_0(t);
      z_28 = t;
      t = (ATerm) ATinsert(CheckATermList(s_28), z_28);
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm b_29 = NULL;
  b_29 = t;
  if(match_string(t, "-i"))
    {
      t = b_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_29;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL;
  c_29 = t;
  t = term_a_13;
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_13, c_29);
  t = b_6(d_29, c_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_29);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_b_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, z_2, a_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_2;
  t = whoami_0_0(t);
  e_29 = t;
  t = term_b_5;
  g_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_13), e_29);
  h_29 = t;
  t = SSL_printnl(g_29, h_29);
  t = term_e_5;
  f_29 = t;
  t = SSL_exit(f_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_13;
  t = get_config_0_0(t);
  return(t);
}
static ATerm w_5 (ATerm n_40, ATerm o_40, ATerm t)
{
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_40, o_40);
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      t = SSL_addr(n_40, o_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
  j_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_29;
      t = c_92(t);
    }
  else
    {
      ATerm o_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_29 = ATgetFirst((ATermList) t);
          l_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_29;
      t = foldr_2_0(c_92, d_92, t);
      o_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_29, o_29);
      t = d_92(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_g_5;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm n_6 = NULL,w_6 = NULL;
  if(match_cons(t, sym__2))
    {
      n_6 = ATgetArgument(t, 0);
      w_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(n_6, w_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_29 = NULL,f_6 = NULL,g_6 = NULL;
  t = times_0_0(t);
  g_6 = t;
  t = SSL_explode_term(g_6);
  if(match_cons(t, sym__2))
    {
      ATerm g_13 = ATgetArgument(t, 0);
      f_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6;
  t = foldr_2_0(c_3, d_3, t);
  r_29 = t;
  t = SSL_TicksToSeconds(r_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
  e_30 = t;
  if(match_cons(t, sym__2))
    {
      f_30 = ATgetArgument(t, 0);
      g_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_30;
        if((f_30 != t))
          {
            _fail(t);
          }
        t = e_30;
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        t = (ATerm) ATmakeAppl(sym__2, f_30, g_30);
        {
          ATerm j_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_30, g_30);
              LocalPopChoice(k_13);
            }
          else
            {
              t = j_13;
              t = SSL_gtr(f_30, g_30);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_30, g_30);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm k_30 = NULL;
  k_30 = t;
  {
    ATerm l_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_30 = NULL;
        t = term_t_11;
        t = get_config_0_0(t);
        m_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_30, term_e_5);
        t = geq_0_0(t);
        t = k_30;
        t = t_100(t);
        LocalPopChoice(n_13);
      }
    else
      {
        t = l_13;
        t = k_30;
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,r_30 = NULL,s_30 = NULL;
  t = run_time_0_0(t);
  o_30 = t;
  t = term_g_2;
  t = whoami_0_0(t);
  p_30 = t;
  t = term_b_5;
  r_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_13), o_30), term_o_13), p_30);
  s_30 = t;
  t = SSL_printnl(r_30, s_30);
  t = (ATerm) ATmakeAppl(sym__2, term_b_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_13), o_30), term_o_13), p_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_5;
  t_30 = t;
  t = SSL_exit(t_30);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL;
  c_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_31 = ATgetArgument(t, 0);
          {
            ATerm t_7 = NULL,e_11 = NULL;
            t = SSLgetAnnotations(c_31);
            t_7 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_31);
            e_11 = t;
            t = SSLsetAnnotations(e_11, t_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_13;
      t = get_config_0_0(t);
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      t = fetch_1_0(h_3, t);
    }
  t = j_103(t);
  return(t);
}
ATerm map_1_0 (ATerm z_85 (ATerm), ATerm t)
{
  static ATerm s_31 (ATerm t)
  {
    ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
    p_31 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_31;
      }
    else
      {
        ATerm g_8 = NULL,p_8 = NULL,q_8 = NULL,g_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_31 = ATgetFirst((ATermList) t);
            r_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_31);
        g_8 = t;
        t = q_31;
        t = z_85(t);
        p_8 = t;
        t = r_31;
        t = s_31(t);
        q_8 = t;
        t = (ATerm) ATinsert(CheckATermList(q_8), p_8);
        g_11 = t;
        t = SSLsetAnnotations(g_11, g_8);
      }
    return(t);
  }
  t = s_31(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_31 = ATgetFirst((ATermList) t);
      w_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_32 = NULL,b_32 = NULL;
        static ATerm i_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_32)), not_null(b_32));
          return(t);
        }
        t = w_31;
        t = n_0(t);
        if(((a_32 != NULL) && (a_32 != t)))
          _fail(t);
        else
          a_32 = t;
        t = v_31;
        t = l_0(t);
        if(((b_32 != NULL) && (b_32 != t)))
          _fail(t);
        else
          b_32 = t;
        t = w_31;
        t = reverse_acc_2_0(l_0, i_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_2;
      t = n_0(t);
    }
  return(t);
}
static ATerm y_5 (ATerm b_54, ATerm c_54, ATerm t)
{
  t = SSL_table_get(b_54, c_54);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm o_32 = NULL;
  o_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_32), term_t_13);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_13;
      t = get_config_0_0(t);
      f_32 = t;
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      {
        static ATerm l_3 (ATerm t)
        {
          ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,i_11 = NULL;
          k_32 = t;
          if(match_cons(t, sym_Program_1))
            {
              j_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_32);
          i_32 = t;
          t = j_32;
          if(((f_32 != NULL) && (f_32 != t)))
            _fail(t);
          else
            f_32 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, j_32);
          i_11 = t;
          t = SSLsetAnnotations(i_11, i_32);
          return(t);
        }
        t = fetch_1_0(l_3, t);
      }
    }
  {
    ATerm w_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_13), not_null(f_32)), term_y_13);
        t = echo_0_0(t);
        LocalPopChoice(x_13);
      }
    else
      {
        t = w_13;
      }
  }
  t = term_b_14;
  t = echo_0_0(t);
  t = term_r_12;
  g_32 = t;
  t = term_s_12;
  h_32 = t;
  t = term_c_14;
  t = y_5(g_32, h_32, t);
  t = reverse_acc_2_0(_id, n_3, t);
  t = map_1_0(p_3, t);
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_14), term_k_14), term_j_14), term_i_14), term_h_14);
        t = echo_0_0(t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
  s_32 = t;
  {
    ATerm o_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_14 = ATgetFirst((ATermList) t);
                ATerm x_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_32;
          }
        LocalPopChoice(u_14);
      }
    else
      {
        t = o_14;
        t = (ATerm) ATinsert(ATempty, s_32);
      }
  }
  t_32 = t;
  t = term_k_9;
  u_32 = t;
  t = SSL_printnl(u_32, t_32);
  t = s_32;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL;
  t = term_z_14;
  y_32 = t;
  t = term_g_2;
  z_32 = t;
  t = term_a_15;
  t = b_6(y_32, z_32, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_b_15;
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
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
  t = term_z_14;
  c_33 = t;
  t = term_g_2;
  d_33 = t;
  t = term_a_15;
  t = b_6(c_33, d_33, t);
  t = term_c_15;
  a_33 = t;
  t = term_g_2;
  b_33 = t;
  t = term_d_15;
  t = b_6(a_33, b_33, t);
  t = term_e_15;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_3, w_3, x_3, t);
      LocalPopChoice(q_15);
    }
  else
    {
      t = o_15;
      t = Option_3_0(y_3, z_3, a_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_57 (ATerm), ATerm g_57 (ATerm), ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_11 = NULL;
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
  t = f_57(t);
  h_33 = t;
  t = g_33;
  t = g_57(t);
  i_33 = t;
  t = (ATerm) ATinsert(CheckATermList(i_33), h_33);
  k_11 = t;
  t = SSLsetAnnotations(k_11, e_33);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_105 (ATerm), ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,t_33 = NULL,u_33 = NULL,m_11 = NULL;
  o_33 = t;
  {
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_15;
        t = m_105(t);
        LocalPopChoice(s_15);
      }
    else
      {
        t = r_15;
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
  t = term_d_13;
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, q_33);
  t = b_6(u_33, q_33, t);
  t = r_33;
  {
    static ATerm e_34 (ATerm t)
    {
      ATerm w_15 = t;
      int a_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_16 = t;
          int c_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_33 = NULL;
              x_33 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_33;
              LocalPopChoice(c_16);
            }
          else
            {
              t = b_16;
              t = m_105(t);
              t = Cons_2_0(_id, e_34, t);
            }
          LocalPopChoice(a_16);
        }
      else
        {
          t = w_15;
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
  m_11 = t;
  t = SSLsetAnnotations(m_11, p_33);
  return(t);
}
static ATerm d_4 (ATerm t)
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
static ATerm e_4 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL;
  t = term_s_13;
  r_34 = t;
  t = term_g_2;
  s_34 = t;
  t = term_d_16;
  t = b_6(r_34, s_34, t);
  t = term_e_16;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_f_16;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL;
  l_34 = t;
  t = term_r_12;
  n_34 = t;
  t = term_s_12;
  o_34 = t;
  t = (ATerm) ATempty;
  p_34 = t;
  t = SSL_table_put(n_34, o_34, p_34);
  t = l_34;
  {
    static ATerm b_4 (ATerm t)
    {
      ATerm g_16 = t;
      int m_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_105(t);
          LocalPopChoice(m_16);
        }
      else
        {
          t = g_16;
          {
            ATerm n_16 = t;
            int o_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_4, e_4, g_4, t);
                LocalPopChoice(o_16);
              }
            else
              {
                t = n_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_4, t);
  }
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_34 = NULL;
        z_34 = t;
        {
          ATerm v_16 = t;
          int w_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_9 = NULL;
              t = z_34;
              {
                ATerm x_16 = t;
                int z_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_s_13;
                    t = get_config_0_0(t);
                    LocalPopChoice(z_16);
                  }
                else
                  {
                    t = x_16;
                    t = fetch_1_0(h_4, t);
                  }
              }
              t = z_34;
              t = default_system_usage_0_0(t);
              t = term_g_5;
              g_9 = t;
              t = SSL_exit(g_9);
              LocalPopChoice(w_16);
            }
          else
            {
              t = v_16;
              {
                ATerm r_9 = NULL;
                t = term_z_14;
                t = get_config_0_0(t);
                t = z_34;
                t = default_system_about_0_0(t);
                t = term_g_5;
                r_9 = t;
                t = SSL_exit(r_9);
              }
            }
        }
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
        {
          ATerm a_17 = t;
          int b_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
              static ATerm i_4 (ATerm t)
              {
                ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,o_11 = NULL;
                f_35 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_35 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_35);
                d_35 = t;
                t = e_35;
                if(((j_34 != NULL) && (j_34 != t)))
                  _fail(t);
                else
                  j_34 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_35);
                o_11 = t;
                t = SSLsetAnnotations(o_11, d_35);
                return(t);
              }
              t = fetch_1_0(i_4, t);
              t = term_b_5;
              b_35 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_34)), term_c_17);
              c_35 = t;
              t = SSL_printnl(b_35, c_35);
              t = (ATerm) ATmakeAppl(sym__2, term_b_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_34)), term_c_17));
              t = default_system_usage_0_0(t);
              t = term_e_5;
              a_35 = t;
              t = SSL_exit(a_35);
              LocalPopChoice(b_17);
            }
          else
            {
              t = a_17;
            }
        }
      }
  }
  k_34 = t;
  t = term_r_12;
  m_34 = t;
  t = SSL_table_destroy(m_34);
  t = k_34;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_103 (ATerm), ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
  t = parse_options_1_0(l_103, t);
  k_35 = t;
  t = term_d_17;
  n_35 = t;
  t = SSL_table_create(n_35);
  t = term_d_17;
  l_35 = t;
  t = term_e_17;
  m_35 = t;
  t = SSL_table_put(l_35, m_35, k_35);
  t = k_35;
  t = n_103(t);
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_103, t);
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
              t = o_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(i_17);
            }
          else
            {
              t = h_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = if_verbose2_1_0(v_4, t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL;
  t = term_j_17;
  o_35 = t;
  t = term_g_2;
  p_35 = t;
  t = term_k_17;
  t = b_6(o_35, p_35, t);
  t = term_l_17;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_m_17;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
  q_35 = t;
  t = term_d_13;
  t = get_config_0_0(t);
  r_35 = t;
  t = term_b_5;
  s_35 = t;
  t = (ATerm) ATinsert(ATempty, r_35);
  t_35 = t;
  t = SSL_printnl(s_35, t_35);
  t = q_35;
  return(t);
}
ATerm iowrap_3_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm t)
{
  static ATerm j_4 (ATerm t)
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_102(t);
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
              t = input_option_0_0(t);
              LocalPopChoice(q_17);
            }
          else
            {
              t = p_17;
              {
                ATerm r_17 = t;
                int s_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(s_17);
                  }
                else
                  {
                    t = r_17;
                    {
                      ATerm t_17 = t;
                      int u_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(p_4, s_4, u_4, t);
                          LocalPopChoice(u_17);
                        }
                      else
                        {
                          t = t_17;
                          {
                            ATerm v_17 = t;
                            int w_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(w_17);
                              }
                            else
                              {
                                t = v_17;
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
  static ATerm o_4 (ATerm t)
  {
    ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
    v_35 = t;
    {
      ATerm x_17 = t;
      int y_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm w_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_35 != NULL) && (u_35 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_35 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_4, t);
          LocalPopChoice(y_17);
        }
      else
        {
          t = x_17;
          t = term_z_17;
          u_35 = t;
        }
    }
    t = not_null(u_35);
    t = ReadFromFile_0_0(t);
    w_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_35, w_35);
    t = apply_strategy_1_0(u_102, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(j_4, w_102, k_4, o_4, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,q_11 = NULL;
  y_36 = t;
  if(match_cons(t, sym__2))
    {
      v_36 = ATgetArgument(t, 0);
      w_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_36);
  u_36 = t;
  t = w_36;
  t = bottomup_1_0(z_4, t);
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_36, x_36);
  q_11 = t;
  t = SSLsetAnnotations(q_11, u_36);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,y_37 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
  b_37 = t;
  if(match_cons(t, sym_appl_2))
    {
      z_36 = ATgetArgument(t, 0);
      a_37 = ATgetArgument(t, 1);
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_37;
            t = m_5(z_36, a_37, t);
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            t = b_37;
          }
      }
    }
  else
    {
      t = b_37;
    }
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = unflatten_list_0_0(t);
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
      }
  }
  y_37 = t;
  if(match_cons(t, sym_appl_2))
    {
      i_37 = ATgetArgument(t, 0);
      r_37 = ATgetArgument(t, 1);
      t = i_37;
      if(match_cons(t, sym_prod_3))
        {
          j_37 = ATgetArgument(t, 0);
          n_37 = ATgetArgument(t, 1);
          q_37 = ATgetArgument(t, 2);
          t = q_37;
          if(match_cons(t, sym_no_attrs_0))
            {
              t = n_37;
              if(match_cons(t, sym_cf_1))
                {
                  o_37 = ATgetArgument(t, 0);
                  t = o_37;
                  if(match_cons(t, sym_opt_1))
                    {
                      p_37 = ATgetArgument(t, 0);
                      t = p_37;
                      if(match_cons(t, sym_layout_0))
                        {
                          t = j_37;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              k_37 = ATgetFirst((ATermList) t);
                              m_37 = (ATerm) ATgetNext((ATermList) t);
                              t = m_37;
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = k_37;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      l_37 = ATgetArgument(t, 0);
                                      t = l_37;
                                      if(match_cons(t, sym_layout_0))
                                        {
                                          ATerm e_18 = t;
                                          int f_18 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = y_37;
                                              t = l_5(r_37, t);
                                              LocalPopChoice(f_18);
                                            }
                                          else
                                            {
                                              t = e_18;
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
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = unflatten_lexical_0_0(t);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(y_4, _fail, default_usage_0_0, t);
  return(t);
}
