#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Undefined_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_h_18;
ATerm term_p_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_j_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_q_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_u_11;
ATerm term_f_11;
ATerm term_q_10;
ATerm term_j_10;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_c_9;
ATerm term_g_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_g_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_g_2;
void init_constant_terms (void)
{
  ATprotect(&(term_g_2));
  term_g_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeInt(255);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(sym_range_2, term_g_5, term_h_5);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_lex_1, term_n_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_cf_1, term_n_7);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_left_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_assoc_1, term_b_8);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_opt_1, term_n_7);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_cf_1, term_e_8);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_e_12, term_g_5);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_5);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_g_2);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_z_12);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("This tool explodes an AsFix2ME term to a valid AsFix2 term. Explosion involes\n", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattening of lists, layout, literals, and lexicals.\n\n", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Observe that the structure of lexicals cannot be restored. Lexicals are\n", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattened into left linear binary trees.", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_g_2);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_i_15, term_g_2);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_a_14, term_g_2);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_g_2);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm k_5 (ATerm k_31, ATerm l_31, ATerm m_31, ATerm);
ATerm unflatten_lexical_0_0 (ATerm);
ATerm MkLayoutCharacter_0_0 (ATerm);
ATerm MkLayoutConsList_0_0 (ATerm);
ATerm l_5 (ATerm a_31, ATerm);
ATerm MkCfConsList_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm MkCfConsList_2_0 (ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm);
ATerm MkLexConsList_1_0 (ATerm y_83 (ATerm), ATerm);
ATerm unflatten_list_0_0 (ATerm);
ATerm list_some_1_0 (ATerm r_91 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm m_5 (ATerm y_28, ATerm z_28, ATerm);
ATerm bottomup_1_0 (ATerm w_85 (ATerm), ATerm);
ATerm p_5 (ATerm f_51, ATerm g_51, ATerm);
ATerm q_5 (ATerm t_54, ATerm u_54, ATerm);
ATerm s_5 (ATerm d_104 (ATerm), ATerm p_455, ATerm x_54, ATerm);
ATerm r_5 (ATerm p_54, ATerm q_54, ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_107 (ATerm), ATerm);
ATerm y_20 (ATerm s_20, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm t_5 (ATerm v_54, ATerm);
ATerm u_5 (ATerm h_51, ATerm i_51, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm j_22 (ATerm i_21, ATerm);
ATerm k_22 (ATerm m_21, ATerm n_21, ATerm o_21, ATerm);
ATerm l_22 (ATerm w_21, ATerm x_21, ATerm y_21, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm o_5 (ATerm v_45, ATerm w_45, ATerm);
ATerm debug_1_0 (ATerm b_104 (ATerm), ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_105 (ATerm), ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm c_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm a_6 (ATerm w_55, ATerm x_55, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm y_5 (ATerm u_60, ATerm v_60, ATerm t_60, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_5 (ATerm f_48, ATerm g_48, ATerm);
ATerm foldr_2_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm c_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_105 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm need_help_1_0 (ATerm d_108 (ATerm), ATerm);
ATerm map_1_0 (ATerm m_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm x_5 (ATerm l_62, ATerm m_62, ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm v_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm g_110 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm parse_options_1_0 (ATerm f_110 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm o_4 (ATerm);
ATerm s_4 (ATerm);
ATerm v_4 (ATerm);
ATerm iowrap_3_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,n_0 = NULL,o_0 = NULL,q_0 = NULL;
  b_0 = t;
  t = term_g_2;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_z_4;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_5), f_0), term_a_5);
  q_0 = t;
  t = SSL_printnl(o_0, q_0);
  t = term_d_5;
  n_0 = t;
  t = SSL_exit(n_0);
  t = b_0;
  return(t);
}
ATerm k_5 (ATerm k_31, ATerm l_31, ATerm m_31, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, k_31)), (ATerm)ATmakeAppl(sym_cf_1, k_31), term_e_5), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_i_5))))), (ATerm)ATmakeAppl(sym_lex_1, k_31), term_e_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, l_31, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_i_5)))), term_e_5), m_31))));
  return(t);
}
ATerm unflatten_lexical_0_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm n_5 = ATgetArgument(t, 0);
      if(match_cons(n_5, sym_prod_3))
        {
          ATerm c_6 = ATgetArgument(n_5, 0);
          if(((ATgetType(c_6) == AT_LIST) && !(ATisEmpty(c_6))))
            {
              ATerm f_6 = ATgetFirst((ATermList) c_6);
              if(match_cons(f_6, sym_lex_1))
                {
                  r_0 = ATgetArgument(f_6, 0);
                }
              else
                _fail(t);
              {
                ATerm g_6 = (ATerm) ATgetNext((ATermList) c_6);
                if(((ATgetType(g_6) != AT_LIST) || !(ATisEmpty(g_6))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm d_6 = ATgetArgument(n_5, 1);
            if(match_cons(d_6, sym_cf_1))
              {
                if((r_0 != ATgetArgument(d_6, 0)))
                  {
                    _fail(ATgetArgument(d_6, 0));
                  }
              }
            else
              _fail(t);
          }
          {
            ATerm e_6 = ATgetArgument(n_5, 2);
            if(!(match_cons(e_6, sym_no_attrs_0)))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm w_5 = ATgetArgument(t, 1);
        if(((ATgetType(w_5) == AT_LIST) && !(ATisEmpty(w_5))))
          {
            ATerm i_6 = ATgetFirst((ATermList) w_5);
            if(match_cons(i_6, sym_appl_2))
              {
                ATerm l_6 = ATgetArgument(i_6, 0);
                if(match_cons(l_6, sym_prod_3))
                  {
                    s_0 = ATgetArgument(l_6, 0);
                    {
                      ATerm p_6 = ATgetArgument(l_6, 1);
                      if(match_cons(p_6, sym_iter_star_1))
                        {
                          ATerm f_7 = ATgetArgument(p_6, 0);
                          if(match_cons(f_7, sym_char_class_1))
                            {
                              ATerm g_7 = ATgetArgument(f_7, 0);
                              if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
                                {
                                  ATerm h_7 = ATgetFirst((ATermList) g_7);
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
                                    ATerm i_7 = (ATerm) ATgetNext((ATermList) g_7);
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
                      ATerm c_7 = ATgetArgument(l_6, 2);
                      if(!(match_cons(c_7, sym_no_attrs_0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t_0 = ATgetArgument(i_6, 1);
              }
            else
              _fail(t);
            {
              ATerm k_6 = (ATerm) ATgetNext((ATermList) w_5);
              if(((ATgetType(k_6) != AT_LIST) || !(ATisEmpty(k_6))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_5(r_0, s_0, t_0, t);
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
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_7), term_p_7, term_e_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_i_5))), term_o_7, term_e_5), (ATerm) ATinsert(ATempty, a_1))));
        ;
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        {
          ATerm b_1 = NULL,d_1 = NULL,e_1 = NULL;
          ATerm q_7 = t;
          int r_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_appl_2))
                {
                  b_1 = ATgetArgument(t, 0);
                  {
                    ATerm s_7 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(r_7);
              t = b_1;
              {
                ATerm t_7 = t;
                int u_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_prod_3))
                      {
                        ATerm v_7 = ATgetArgument(t, 0);
                        d_1 = ATgetArgument(t, 1);
                        {
                          ATerm w_7 = ATgetArgument(t, 2);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(u_7);
                    t = d_1;
                    if(match_cons(t, sym_lex_1))
                      {
                        e_1 = ATgetArgument(t, 0);
                        {
                          ATerm x_7 = t;
                          int y_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_7), term_p_7, term_e_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, e_1)), term_o_7, term_e_5), (ATerm) ATinsert(ATempty, a_1))));
                              ;
                              LocalPopChoice(y_7);
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
                        if(match_cons(t, sym_lit_1))
                          {
                            e_1 = ATgetArgument(t, 0);
                            {
                              ATerm z_7 = t;
                              int a_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_7), term_p_7, term_e_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, e_1)), term_o_7, term_e_5), (ATerm) ATinsert(ATempty, a_1))));
                                  ;
                                  LocalPopChoice(a_8);
                                }
                              else
                                {
                                  t = z_7;
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
                    t = t_7;
                    t = a_1;
                  }
              }
            }
          else
            {
              t = q_7;
              t = a_1;
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
      t = (ATerm) ATinsert(CheckATermList(u_1), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_p_7), term_p_7), term_p_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_c_8))), (ATerm) ATinsert(ATinsert(ATempty, f_2), e_2)));
      t = MkLayoutConsList_0_0(t);
    }
  return(t);
}
ATerm l_5 (ATerm a_31, ATerm t)
{
  ATerm n_2 = NULL;
  t = a_31;
  t = MkLayoutConsList_0_0(t);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_p_7), term_g_8, term_e_5), (ATerm) ATinsert(ATempty, n_2));
  return(t);
}
ATerm MkCfConsList_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL,r_6 = NULL;
  ATerm t_4 (ATerm t)
  {
    ATerm o_3 = NULL,q_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,w_3 = NULL;
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
        ATerm l_4 = NULL,m_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
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
            w_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_g_2;
        t = t_83(t);
        l_4 = t;
        t = term_g_2;
        t = t_83(t);
        m_4 = t;
        t = term_g_2;
        t = t_83(t);
        p_4 = t;
        t = term_g_2;
        t = t_83(t);
        q_4 = t;
        t = term_g_2;
        t = t_83(t);
        r_4 = t;
        t = (ATerm) ATinsert(CheckATermList(w_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, m_4))), term_g_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, l_4))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, p_4)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_c_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, q_4)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, r_4)), term_e_5), (ATerm) ATinsert(ATempty, u_3))), s_3), o_3)));
        t = t_4(t);
      }
    return(t);
  }
  if(((m_3 != NULL) && (m_3 != t)))
    _fail(t);
  else
    m_3 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((f_3 != NULL) && (f_3 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        f_3 = ATgetFirst((ATermList) t);
      if(((g_3 != NULL) && (g_3 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        g_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(m_3));
  if(((e_3 != NULL) && (e_3 != t)))
    _fail(t);
  else
    e_3 = t;
  t = term_g_2;
  t = t_83(t);
  if(((j_3 != NULL) && (j_3 != t)))
    _fail(t);
  else
    j_3 = t;
  t = term_g_2;
  t = t_83(t);
  if(((k_3 != NULL) && (k_3 != t)))
    _fail(t);
  else
    k_3 = t;
  t = (ATerm) ATinsert(CheckATermList(not_null(g_3)), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, not_null(j_3))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(k_3))), term_e_5), (ATerm) ATinsert(ATempty, not_null(f_3))));
  if(((r_6 != NULL) && (r_6 != t)))
    _fail(t);
  else
    r_6 = t;
  t = SSLsetAnnotations(not_null(r_6), not_null(e_3));
  t = t_4(t);
  return(t);
}
ATerm MkCfConsList_2_0 (ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm t)
{
  ATerm j_5 = NULL,z_5 = NULL,b_6 = NULL,h_6 = NULL,j_6 = NULL,n_6 = NULL,o_6 = NULL,a_10 = NULL;
  ATerm b_9 (ATerm t)
  {
    ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_6 = ATgetFirst((ATermList) t);
        t_6 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = t_6;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_6;
      }
    else
      {
        ATerm f_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,n_8 = NULL,s_8 = NULL,t_8 = NULL,x_8 = NULL,z_8 = NULL,a_9 = NULL;
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
            w_6 = ATgetFirst((ATermList) t);
            x_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_6;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_6 = ATgetFirst((ATermList) t);
            z_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_6;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_7 = ATgetFirst((ATermList) t);
            b_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_g_2;
        t = v_83(t);
        f_8 = t;
        t = term_g_2;
        t = w_83(t);
        h_8 = t;
        t = term_g_2;
        t = w_83(t);
        i_8 = t;
        t = term_g_2;
        t = v_83(t);
        j_8 = t;
        t = term_g_2;
        t = w_83(t);
        n_8 = t;
        t = term_g_2;
        t = v_83(t);
        s_8 = t;
        t = term_g_2;
        t = w_83(t);
        t_8 = t;
        t = term_g_2;
        t = v_83(t);
        x_8 = t;
        t = term_g_2;
        t = v_83(t);
        z_8 = t;
        t = term_g_2;
        t = w_83(t);
        a_9 = t;
        t = (ATerm) ATinsert(CheckATermList(b_7), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, j_8, n_8))), term_g_8), i_8), term_g_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, f_8, h_8))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, s_8, t_8)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_c_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, x_8)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, z_8, a_9)), term_e_5), (ATerm) ATinsert(ATempty, a_7))), y_6), w_6), u_6), s_6)));
        t = b_9(t);
      }
    return(t);
  }
  if(((o_6 != NULL) && (o_6 != t)))
    _fail(t);
  else
    o_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((z_5 != NULL) && (z_5 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        z_5 = ATgetFirst((ATermList) t);
      if(((b_6 != NULL) && (b_6 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        b_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(o_6));
  if(((j_5 != NULL) && (j_5 != t)))
    _fail(t);
  else
    j_5 = t;
  t = term_g_2;
  t = v_83(t);
  if(((h_6 != NULL) && (h_6 != t)))
    _fail(t);
  else
    h_6 = t;
  t = term_g_2;
  t = v_83(t);
  if(((j_6 != NULL) && (j_6 != t)))
    _fail(t);
  else
    j_6 = t;
  t = term_g_2;
  t = w_83(t);
  if(((n_6 != NULL) && (n_6 != t)))
    _fail(t);
  else
    n_6 = t;
  t = (ATerm) ATinsert(CheckATermList(not_null(b_6)), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, not_null(h_6))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(j_6), not_null(n_6))), term_e_5), (ATerm) ATinsert(ATempty, not_null(z_5))));
  if(((a_10 != NULL) && (a_10 != t)))
    _fail(t);
  else
    a_10 = t;
  t = SSLsetAnnotations(not_null(a_10), not_null(j_5));
  t = b_9(t);
  return(t);
}
ATerm MkLexConsList_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm b_11 (ATerm t)
  {
    ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_9 = ATgetFirst((ATermList) t);
        g_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = g_9;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        ATerm s_9 = NULL,v_9 = NULL;
        t = term_g_2;
        t = y_83(t);
        s_9 = t;
        t = term_g_2;
        t = y_83(t);
        v_9 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, s_9)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, v_9)), term_e_5), (ATerm) ATinsert(ATempty, f_9));
      }
    else
      {
        ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,s_10 = NULL,t_10 = NULL,z_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_9 = ATgetFirst((ATermList) t);
            i_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_g_2;
        t = y_83(t);
        m_10 = t;
        t = term_g_2;
        t = y_83(t);
        n_10 = t;
        t = term_g_2;
        t = y_83(t);
        o_10 = t;
        t = term_g_2;
        t = y_83(t);
        p_10 = t;
        t = term_g_2;
        t = y_83(t);
        s_10 = t;
        t = term_g_2;
        t = y_83(t);
        t_10 = t;
        t = term_g_2;
        t = y_83(t);
        z_10 = t;
        t = (ATerm) ATinsert(CheckATermList(i_9), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, n_10))), (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, m_10))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, o_10)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_c_8))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, t_10)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, z_10)), term_e_5), (ATerm) ATinsert(ATempty, h_9))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, p_10)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, s_10)), term_e_5), (ATerm) ATinsert(ATempty, f_9)))));
        t = b_11(t);
      }
    return(t);
  }
  t = b_11(t);
  return(t);
}
ATerm unflatten_list_0_0 (ATerm t)
{
  ATerm r_11 = NULL,t_11 = NULL,x_11 = NULL,c_12 = NULL,f_12 = NULL,h_12 = NULL,j_12 = NULL,l_12 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      if(((c_12 != NULL) && (c_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_12 = ATgetArgument(t, 0);
      if(((l_12 != NULL) && (l_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(c_12);
  if(match_cons(t, sym_list_1))
    {
      if(((f_12 != NULL) && (f_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(f_12);
  if(match_cons(t, sym_iter_1))
    {
      h_12 = ATgetArgument(t, 0);
      {
        ATerm e_0 (ATerm t)
        {
          t = not_null(h_12);
          return(t);
        }
        t = not_null(l_12);
        t = MkLexConsList_1_0(e_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          h_12 = ATgetArgument(t, 0);
          t = not_null(l_12);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_11 = ATgetFirst((ATermList) t);
              x_11 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm d_13 = NULL;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(h_12))), (ATerm) ATinsert(CheckATermList(not_null(x_11)), not_null(t_11)));
                t = unflatten_list_0_0(t);
                d_13 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(h_12)))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(h_12))), term_e_5), (ATerm) ATinsert(ATempty, d_13));
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(h_12))), term_e_5), (ATerm) ATempty);
            }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              if(((h_12 != NULL) && (h_12 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(h_12);
          if(match_cons(t, sym_iter_sep_2))
            {
              j_12 = ATgetArgument(t, 0);
              r_11 = ATgetArgument(t, 1);
              {
                ATerm m_0 (ATerm t)
                {
                  t = not_null(j_12);
                  return(t);
                }
                ATerm u_0 (ATerm t)
                {
                  t = not_null(r_11);
                  return(t);
                }
                t = not_null(l_12);
                t = MkCfConsList_2_0(m_0, u_0, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  j_12 = ATgetArgument(t, 0);
                  r_11 = ATgetArgument(t, 1);
                  t = not_null(l_12);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_11 = ATgetFirst((ATermList) t);
                      x_11 = (ATerm) ATgetNext((ATermList) t);
                      {
                        ATerm q_13 = NULL;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(j_12), not_null(r_11)))), (ATerm) ATinsert(CheckATermList(not_null(x_11)), not_null(t_11)));
                        t = unflatten_list_0_0(t);
                        q_13 = t;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(j_12), not_null(r_11)))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(j_12), not_null(r_11))), term_e_5), (ATerm) ATinsert(ATempty, q_13));
                      }
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(j_12), not_null(r_11))), term_e_5), (ATerm) ATempty);
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      j_12 = ATgetArgument(t, 0);
                      {
                        ATerm v_0 (ATerm t)
                        {
                          t = not_null(j_12);
                          return(t);
                        }
                        t = not_null(l_12);
                        t = MkCfConsList_1_0(v_0, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          if(((j_12 != NULL) && (j_12 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            j_12 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = not_null(l_12);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          t_11 = ATgetFirst((ATermList) t);
                          x_11 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm z_13 = NULL;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(j_12)))), (ATerm) ATinsert(CheckATermList(not_null(x_11)), not_null(t_11)));
                            t = unflatten_list_0_0(t);
                            z_13 = t;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(j_12)))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(j_12))), term_e_5), (ATerm) ATinsert(ATempty, z_13));
                          }
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(j_12))), term_e_5), (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm list_some_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm d_16 (ATerm t)
  {
    ATerm k_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,t_14 = NULL,d_10 = NULL;
        t_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_14 = ATgetFirst((ATermList) t);
            m_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_14);
        i_14 = t;
        t = l_14;
        t = r_91(t);
        n_14 = t;
        t = (ATerm) ATinsert(CheckATermList(m_14), n_14);
        d_10 = t;
        t = SSLsetAnnotations(d_10, i_14);
        LocalPopChoice(l_8);
        {
          ATerm u_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,f_10 = NULL;
          if(((z_14 != NULL) && (z_14 != t)))
            _fail(t);
          else
            z_14 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((w_14 != NULL) && (w_14 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                w_14 = ATgetFirst((ATermList) t);
              if(((x_14 != NULL) && (x_14 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                x_14 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(not_null(z_14));
          if(((u_14 != NULL) && (u_14 != t)))
            _fail(t);
          else
            u_14 = t;
          t = not_null(x_14);
          {
            ATerm m_8 = t;
            int o_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_0 (ATerm t)
                {
                  ATerm p_8 = t;
                  int q_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = r_91(t);
                      ;
                      LocalPopChoice(q_8);
                    }
                  else
                    {
                      t = p_8;
                    }
                  return(t);
                }
                t = map_1_0(w_0, t);
                ;
                LocalPopChoice(o_8);
              }
            else
              {
                t = m_8;
                {
                  ATerm u_15 = NULL,i_0 = NULL,p_0 = NULL,e_10 = NULL;
                  if(match_cons(t, sym_list_1))
                    {
                      u_15 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(not_null(x_14));
                  i_0 = t;
                  t = u_15;
                  {
                    ATerm u_8 = t;
                    int v_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = r_91(t);
                        ;
                        LocalPopChoice(v_8);
                      }
                    else
                      {
                        t = u_8;
                      }
                    p_0 = t;
                    t = (ATerm) ATmakeAppl(sym_list_1, p_0);
                    e_10 = t;
                    t = SSLsetAnnotations(e_10, i_0);
                  }
                }
              }
            if(((y_14 != NULL) && (y_14 != t)))
              _fail(t);
            else
              y_14 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(y_14)), not_null(w_14));
            if(((f_10 != NULL) && (f_10 != t)))
              _fail(t);
            else
              f_10 = t;
            t = SSLsetAnnotations(not_null(f_10), not_null(u_14));
          }
        }
      }
    else
      {
        t = k_8;
        {
          ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,a_16 = NULL,c_16 = NULL,g_10 = NULL;
          c_16 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_15 = ATgetFirst((ATermList) t);
              x_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_16);
          v_15 = t;
          t = x_15;
          t = d_16(t);
          a_16 = t;
          t = (ATerm) ATinsert(CheckATermList(a_16), w_15);
          g_10 = t;
          t = SSLsetAnnotations(g_10, v_15);
        }
      }
    return(t);
  }
  t = d_16(t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      j_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_explode_string(j_16);
  i_16 = t;
  t = map_1_0(y_0, t);
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, h_16, (ATerm)ATmakeAppl(sym_lit_1, j_16), term_e_5), i_16);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm k_16 = NULL;
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, k_16));
  return(t);
}
ATerm m_5 (ATerm y_28, ATerm z_28, ATerm t)
{
  ATerm g_16 = NULL;
  t = z_28;
  t = list_some_1_0(x_0, t);
  g_16 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, y_28, g_16);
  return(t);
}
ATerm bottomup_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = bottomup_1_0(w_85, t);
    return(t);
  }
  t = SRTS_all(z_0, t);
  t = w_85(t);
  return(t);
}
ATerm p_5 (ATerm f_51, ATerm g_51, ATerm t)
{
  ATerm l_16 = NULL;
  t = SSL_fputc(f_51, g_51);
  l_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_16);
  return(t);
}
ATerm q_5 (ATerm t_54, ATerm u_54, ATerm t)
{
  ATerm m_16 = NULL;
  t = SSL_write_term_to_stream_text(t_54, u_54);
  m_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_16);
  return(t);
}
ATerm s_5 (ATerm d_104 (ATerm), ATerm p_455, ATerm x_54, ATerm t)
{
  ATerm p_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_455, term_c_9);
  t = open_stream_0_0(t);
  p_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_16, x_54);
  t = d_104(t);
  t = fclose_0_0(t);
  t = x_54;
  return(t);
}
ATerm r_5 (ATerm p_54, ATerm q_54, ATerm t)
{
  ATerm s_16 = NULL;
  t = SSL_write_term_to_stream_baf(p_54, q_54);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_16);
  return(t);
}
ATerm g_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_9 = ATgetArgument(t, 0);
      if(match_cons(d_9, sym_Stream_1))
        {
          k_2 = ATgetArgument(d_9, 0);
        }
      else
        _fail(t);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(k_2, l_2, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_9 = ATgetArgument(t, 0);
      if(match_cons(e_9, sym_Stream_1))
        {
          a_3 = ATgetArgument(e_9, 0);
        }
      else
        _fail(t);
      b_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(a_3, b_3, t);
  x_2 = t;
  t = term_j_9;
  y_2 = t;
  t = x_2;
  if(match_cons(t, sym_Stream_1))
    {
      z_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_9, x_2);
  t = p_5(y_2, z_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_16 = NULL,c_17 = NULL,k_17 = NULL,l_17 = NULL,o_17 = NULL,q_17 = NULL,u_17 = NULL,y_17 = NULL,z_17 = NULL,d_18 = NULL,z_19 = NULL,a_20 = NULL,u_10 = NULL,r_10 = NULL;
  if(((c_17 != NULL) && (c_17 != t)))
    _fail(t);
  else
    c_17 = t;
  if(match_cons(t, sym__2))
    {
      if(((y_17 != NULL) && (y_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_17 = ATgetArgument(t, 0);
      if(((z_17 != NULL) && (z_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(c_17));
  if(((u_17 != NULL) && (u_17 != t)))
    _fail(t);
  else
    u_17 = t;
  t = not_null(y_17);
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((z_16 != NULL) && (z_16 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(c_1, t);
        ;
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
        t = term_m_9;
        if(((z_16 != NULL) && (z_16 != t)))
          _fail(t);
        else
          z_16 = t;
      }
    if(((d_18 != NULL) && (d_18 != t)))
      _fail(t);
    else
      d_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_18), not_null(z_17));
    if(((r_10 != NULL) && (r_10 != t)))
      _fail(t);
    else
      r_10 = t;
    t = SSLsetAnnotations(not_null(r_10), not_null(u_17));
    t = not_null(c_17);
    if(match_cons(t, sym__2))
      {
        if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          l_17 = ATgetArgument(t, 0);
        if(((o_17 != NULL) && (o_17 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          o_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(c_17));
    if(((k_17 != NULL) && (k_17 != t)))
      _fail(t);
    else
      k_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_17), (ATerm) ATmakeAppl(sym__2, not_null(z_16), not_null(o_17)));
    if(((u_10 != NULL) && (u_10 != t)))
      _fail(t);
    else
      u_10 = t;
    t = SSLsetAnnotations(not_null(u_10), not_null(k_17));
    if(((q_17 != NULL) && (q_17 != t)))
      _fail(t);
    else
      q_17 = t;
    if(match_cons(t, sym__2))
      {
        if(((z_19 != NULL) && (z_19 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          z_19 = ATgetArgument(t, 0);
        if(((a_20 != NULL) && (a_20 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          a_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm n_9 = t;
      int o_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_1 = NULL,b_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,v_10 = NULL;
          t = SSLgetAnnotations(not_null(q_17));
          f_1 = t;
          t = not_null(z_19);
          t = fetch_1_0(g_1, t);
          b_2 = t;
          t = not_null(a_20);
          if(match_cons(t, sym__2))
            {
              i_2 = ATgetArgument(t, 0);
              j_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_5(h_1, i_2, j_2, t);
          h_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_2, h_2);
          v_10 = t;
          t = SSLsetAnnotations(v_10, f_1);
          ;
          LocalPopChoice(o_9);
        }
      else
        {
          t = n_9;
          {
            ATerm r_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,w_10 = NULL;
            t = SSLgetAnnotations(not_null(q_17));
            r_2 = t;
            t = not_null(a_20);
            if(match_cons(t, sym__2))
              {
                v_2 = ATgetArgument(t, 0);
                w_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_5(i_1, v_2, w_2, t);
            u_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_19), u_2);
            w_10 = t;
            t = SSLsetAnnotations(w_10, r_2);
          }
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
ATerm apply_strategy_1_0 (ATerm f_107 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  h_20 = t;
  t = dtime_0_0(t);
  t = h_20;
  t = f_107(t);
  g_20 = t;
  t = dtime_0_0(t);
  d_20 = t;
  t = g_20;
  if(match_cons(t, sym__2))
    {
      e_20 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_20), (ATerm) ATmakeAppl(sym_Runtime_1, d_20)), f_20);
  return(t);
}
ATerm y_20 (ATerm s_20, ATerm t)
{
  t = SSL_fclose(s_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL;
  w_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_20 = ATgetArgument(t, 0);
      {
        ATerm p_9 = t;
        int q_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_20);
            ;
            LocalPopChoice(q_9);
          }
        else
          {
            t = p_9;
            t = y_20(w_20, t);
          }
      }
    }
  else
    {
      t = y_20(w_20, t);
    }
  return(t);
}
ATerm t_5 (ATerm v_54, ATerm t)
{
  t = SSL_read_term_from_stream(v_54);
  return(t);
}
ATerm u_5 (ATerm h_51, ATerm i_51, ATerm t)
{
  ATerm z_20 = NULL;
  t = SSL_fopen(h_51, i_51);
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_20);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_21 = NULL;
  t = SSL_stdin_stream();
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_21 = NULL;
  t = SSL_stdout_stream();
  b_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_21 = NULL;
  t = SSL_stderr_stream();
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_21);
  return(t);
}
ATerm j_22 (ATerm i_21, ATerm t)
{
  ATerm j_21 = NULL;
  t = SSL_explode_term(i_21);
  if(match_cons(t, sym__2))
    {
      ATerm t_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_9 = ATgetArgument(t, 1);
        if(((ATgetType(u_9) == AT_LIST) && !(ATisEmpty(u_9))))
          {
            j_21 = ATgetFirst((ATermList) u_9);
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
  t = j_21;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_21;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_21;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_21;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm k_22 (ATerm m_21, ATerm n_21, ATerm o_21, ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL,u_21 = NULL,d_11 = NULL;
  t = SSLgetAnnotations(o_21);
  r_21 = t;
  t = m_21;
  if(match_cons(t, sym_Path_1))
    {
      u_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_21, n_21);
  d_11 = t;
  t = SSLsetAnnotations(d_11, r_21);
  if(match_cons(t, sym__2))
    {
      p_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(p_21, q_21, t);
  return(t);
}
ATerm l_22 (ATerm w_21, ATerm x_21, ATerm y_21, ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,e_22 = NULL,e_11 = NULL;
  t = SSLgetAnnotations(y_21);
  b_22 = t;
  t = SSL_is_string(w_21);
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_22, x_21);
  e_11 = t;
  t = SSLsetAnnotations(e_11, b_22);
  if(match_cons(t, sym__2))
    {
      z_21 = ATgetArgument(t, 0);
      a_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(z_21, a_22, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      ATerm z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  g_22 = t;
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_22(g_22, t);
            ;
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            {
              ATerm h_10 = t;
              int i_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_22(h_22, i_22, g_22, t);
                  ;
                  LocalPopChoice(i_10);
                }
              else
                {
                  t = h_10;
                  t = l_22(h_22, i_22, g_22, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_22(g_22, t);
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_22 = NULL;
      p_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_22, term_q_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      t = debug_1_0(j_1, t);
      _fail(t);
    }
  n_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(o_22, t);
  m_22 = t;
  t = n_22;
  t = fclose_0_0(t);
  t = m_22;
  return(t);
}
ATerm fetch_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm n_23 (ATerm t)
  {
    ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
    k_23 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_23 = ATgetFirst((ATermList) t);
        m_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_10 = t;
      int y_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_4 = NULL,u_4 = NULL,h_11 = NULL;
          t = SSLgetAnnotations(k_23);
          n_4 = t;
          t = l_23;
          t = w_91(t);
          u_4 = t;
          t = (ATerm) ATinsert(CheckATermList(m_23), u_4);
          h_11 = t;
          t = SSLsetAnnotations(h_11, n_4);
          ;
          LocalPopChoice(y_10);
        }
      else
        {
          t = x_10;
          {
            ATerm c_5 = NULL,f_5 = NULL,i_11 = NULL;
            t = SSLgetAnnotations(k_23);
            c_5 = t;
            t = m_23;
            t = n_23(t);
            f_5 = t;
            t = (ATerm) ATinsert(CheckATermList(f_5), l_23);
            i_11 = t;
            t = SSLsetAnnotations(i_11, c_5);
          }
        }
    }
    return(t);
  }
  t = n_23(t);
  return(t);
}
ATerm o_5 (ATerm v_45, ATerm w_45, ATerm t)
{
  t = SSL_strcat(v_45, w_45);
  return(t);
}
ATerm debug_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  q_23 = t;
  t = b_104(t);
  r_23 = t;
  t = term_z_4;
  s_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_23), r_23);
  t_23 = t;
  t = SSL_printnl(s_23, t_23);
  t = q_23;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm a_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = a_11;
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_24 = NULL;
      a_24 = t;
      t = SSL_is_string(a_24);
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = g_11;
      {
        ATerm k_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_1, t);
            ;
            LocalPopChoice(m_11);
          }
        else
          {
            t = k_11;
            {
              ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
              g_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_24 = ATgetArgument(t, 0);
                  t = h_24;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_24 = ATgetArgument(t, 0);
                      t = h_24;
                      {
                        ATerm o_11 = t;
                        int q_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_11);
                          }
                        else
                          {
                            t = o_11;
                            t = debug_1_0(l_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_24 = NULL,n_24 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_24 = ATgetArgument(t, 0);
                          i_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_24;
                      t = eval_config_0_0(t);
                      m_24 = t;
                      t = i_24;
                      t = eval_config_0_0(t);
                      n_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_24, n_24);
                      t = o_5(m_24, n_24, t);
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
  ATerm r_24 = NULL,s_24 = NULL;
  r_24 = t;
  t = term_u_11;
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_11, r_24);
  t = x_5(s_24, r_24, t);
  {
    ATerm w_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_24 = NULL,u_24 = NULL;
        t = eval_config_0_0(t);
        t_24 = t;
        t = term_u_11;
        u_24 = t;
        t = SSL_table_put(u_24, r_24, t_24);
        t = t_24;
        ;
        LocalPopChoice(z_11);
      }
    else
      {
        t = w_11;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm y_24 = NULL;
  y_24 = t;
  {
    ATerm b_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_25 = NULL;
        t = term_e_12;
        t = get_config_0_0(t);
        a_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_25, term_g_12);
        t = geq_0_0(t);
        t = y_24;
        t = o_105(t);
        ;
        LocalPopChoice(d_12);
      }
    else
      {
        t = b_12;
        t = y_24;
      }
  }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  if(match_string(t, "-k"))
    {
      t = d_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_25;
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  t = SSL_string_to_int(e_25);
  f_25 = t;
  t = term_i_12;
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_12, f_25);
  t = a_6(g_25, f_25, t);
  t = e_25;
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_k_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_1, n_1, o_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm i_25 = NULL;
  i_25 = t;
  if(match_string(t, "-S"))
    {
      t = i_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_25;
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL;
  t = term_e_12;
  j_25 = t;
  t = term_g_5;
  k_25 = t;
  t = term_m_12;
  t = a_6(j_25, k_25, t);
  t = term_n_12;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm w_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  l_25 = t;
  t = SSL_string_to_int(l_25);
  m_25 = t;
  t = term_e_12;
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_12, m_25);
  t = a_6(n_25, m_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_25);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_p_12;
  return(t);
}
ATerm z_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL;
  t = term_q_12;
  o_25 = t;
  t = term_g_2;
  p_25 = t;
  t = term_r_12;
  t = a_6(o_25, p_25, t);
  t = term_s_12;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_t_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_1, q_1, v_1, t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        ATerm w_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_1, x_1, y_1, t);
            ;
            LocalPopChoice(x_12);
          }
        else
          {
            t = w_12;
            t = Option_3_0(z_1, a_2, c_2, t);
          }
      }
    }
  return(t);
}
ATerm a_6 (ATerm w_55, ATerm x_55, ATerm t)
{
  ATerm q_25 = NULL;
  t = term_u_11;
  q_25 = t;
  t = SSL_table_put(q_25, w_55, x_55);
  t = (ATerm) ATmakeAppl(sym__3, term_u_11, w_55, x_55);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
      t = term_g_2;
      t = d_0(t);
      v_25 = t;
      t = term_y_12;
      w_25 = t;
      t = term_z_12;
      x_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_12, term_z_12, v_25);
      t = y_5(w_25, x_25, v_25, t);
      _fail(t);
    }
  else
    {
      ATerm a_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_25 = ATgetFirst((ATermList) t);
          u_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_25;
      t = a_0(t);
      t = term_g_2;
      t = c_0(t);
      a_26 = t;
      t = (ATerm) ATinsert(CheckATermList(u_25), a_26);
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm c_26 = NULL;
  c_26 = t;
  if(match_string(t, "-o"))
    {
      t = c_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_26;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL;
  d_26 = t;
  t = term_a_13;
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_13, d_26);
  t = a_6(e_26, d_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_26);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_b_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_2, m_2, o_2, t);
  return(t);
}
ATerm y_5 (ATerm u_60, ATerm v_60, ATerm t_60, ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_60, v_60);
  {
    ATerm c_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_13 = ATgetArgument(t, 0);
            ATerm g_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_60, v_60);
        t = x_5(u_60, v_60, t);
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = c_13;
        t = (ATerm) ATempty;
      }
    h_26 = t;
    t = (ATerm) ATinsert(CheckATermList(h_26), t_60);
    i_26 = t;
    t = SSL_table_put(u_60, v_60, i_26);
    t = g_26;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
      t = term_g_2;
      t = l_0(t);
      t_26 = t;
      t = term_y_12;
      u_26 = t;
      t = term_z_12;
      v_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_12, term_z_12, t_26);
      t = y_5(u_26, v_26, t_26, t);
      _fail(t);
    }
  else
    {
      ATerm z_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_26 = ATgetFirst((ATermList) t);
          q_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_26 = ATgetFirst((ATermList) t);
          s_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_26;
      t = j_0(t);
      t = r_26;
      t = k_0(t);
      z_26 = t;
      t = (ATerm) ATinsert(CheckATermList(s_26), z_26);
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm b_27 = NULL;
  b_27 = t;
  if(match_string(t, "-i"))
    {
      t = b_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_27;
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  c_27 = t;
  t = term_h_13;
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_13, c_27);
  t = a_6(d_27, c_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_27);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_i_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, q_2, s_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_2;
  t = whoami_0_0(t);
  e_27 = t;
  t = term_z_4;
  g_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_13), e_27);
  h_27 = t;
  t = SSL_printnl(g_27, h_27);
  t = term_d_5;
  f_27 = t;
  t = SSL_exit(f_27);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_5 (ATerm f_48, ATerm g_48, ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_48, g_48);
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      t = SSL_addr(f_48, g_48);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
  j_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_27;
      t = p_97(t);
    }
  else
    {
      ATerm o_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_27 = ATgetFirst((ATermList) t);
          l_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_27;
      t = foldr_2_0(p_97, q_97, t);
      o_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_27, o_27);
      t = q_97(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_g_5;
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL;
  if(match_cons(t, sym__2))
    {
      d_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(d_7, e_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_27 = NULL,m_6 = NULL,q_6 = NULL;
  t = times_0_0(t);
  q_6 = t;
  t = SSL_explode_term(q_6);
  if(match_cons(t, sym__2))
    {
      ATerm n_13 = ATgetArgument(t, 0);
      m_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6;
  t = foldr_2_0(t_2, c_3, t);
  r_27 = t;
  t = SSL_TicksToSeconds(r_27);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
  c_28 = t;
  if(match_cons(t, sym__2))
    {
      d_28 = ATgetArgument(t, 0);
      e_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_28;
        if((d_28 != t))
          {
            _fail(t);
          }
        t = c_28;
        ;
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        t = (ATerm) ATmakeAppl(sym__2, d_28, e_28);
        {
          ATerm r_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_28, e_28);
              ;
              LocalPopChoice(s_13);
            }
          else
            {
              t = r_13;
              t = SSL_gtr(d_28, e_28);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_28, e_28);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_105 (ATerm), ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_28 = NULL;
        t = term_e_12;
        t = get_config_0_0(t);
        k_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_28, term_d_5);
        t = geq_0_0(t);
        t = i_28;
        t = n_105(t);
        ;
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        t = i_28;
      }
  }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,p_28 = NULL,q_28 = NULL;
  t = run_time_0_0(t);
  m_28 = t;
  t = term_g_2;
  t = whoami_0_0(t);
  n_28 = t;
  t = term_z_4;
  p_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_13), m_28), term_v_13), n_28);
  q_28 = t;
  t = SSL_printnl(p_28, q_28);
  t = (ATerm) ATmakeAppl(sym__2, term_z_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_13), m_28), term_v_13), n_28));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_5;
  r_28 = t;
  t = SSL_exit(r_28);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm n_29 = NULL,y_29 = NULL;
  y_29 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_29;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_29 = ATgetArgument(t, 0);
          {
            ATerm d_8 = NULL,l_11 = NULL;
            t = SSLgetAnnotations(y_29);
            d_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_29);
            l_11 = t;
            t = SSLsetAnnotations(l_11, d_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_29;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_108 (ATerm), ATerm t)
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      t = fetch_1_0(h_3, t);
    }
  t = d_108(t);
  return(t);
}
ATerm map_1_0 (ATerm m_91 (ATerm), ATerm t)
{
  ATerm w_31 (ATerm t)
  {
    ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
    t_31 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_31;
      }
    else
      {
        ATerm r_8 = NULL,w_8 = NULL,y_8 = NULL,n_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_31 = ATgetFirst((ATermList) t);
            v_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_31);
        r_8 = t;
        t = u_31;
        t = m_91(t);
        w_8 = t;
        t = v_31;
        t = w_31(t);
        y_8 = t;
        t = (ATerm) ATinsert(CheckATermList(y_8), w_8);
        n_11 = t;
        t = SSLsetAnnotations(n_11, r_8);
      }
    return(t);
  }
  t = w_31(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_31 = ATgetFirst((ATermList) t);
      a_32 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_32 = NULL,f_32 = NULL;
        ATerm i_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_32)), not_null(f_32));
          return(t);
        }
        t = not_null(a_32);
        t = h_0(t);
        if(((e_32 != NULL) && (e_32 != t)))
          _fail(t);
        else
          e_32 = t;
        t = not_null(z_31);
        t = g_0(t);
        if(((f_32 != NULL) && (f_32 != t)))
          _fail(t);
        else
          f_32 = t;
        t = not_null(a_32);
        t = reverse_acc_2_0(g_0, i_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_2;
      t = h_0(t);
    }
  return(t);
}
ATerm x_5 (ATerm l_62, ATerm m_62, ATerm t)
{
  t = SSL_table_get(l_62, m_62);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm s_32 = NULL;
  s_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_32), term_b_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_13;
      t = get_config_0_0(t);
      j_32 = t;
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm l_3 (ATerm t)
        {
          ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL,p_11 = NULL;
          o_32 = t;
          if(match_cons(t, sym_Program_1))
            {
              n_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_32);
          m_32 = t;
          t = n_32;
          if(((j_32 != NULL) && (j_32 != t)))
            _fail(t);
          else
            j_32 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, n_32);
          p_11 = t;
          t = SSLsetAnnotations(p_11, m_32);
          return(t);
        }
        t = fetch_1_0(l_3, t);
      }
    }
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_14), not_null(j_32)), term_g_14);
        t = echo_0_0(t);
        ;
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
      }
    t = term_j_14;
    t = echo_0_0(t);
    t = term_y_12;
    if(((k_32 != NULL) && (k_32 != t)))
      _fail(t);
    else
      k_32 = t;
    t = term_z_12;
    if(((l_32 != NULL) && (l_32 != t)))
      _fail(t);
    else
      l_32 = t;
    t = term_k_14;
    t = x_5(not_null(k_32), not_null(l_32), t);
    t = reverse_acc_2_0(_id, n_3, t);
    t = map_1_0(p_3, t);
    {
      ATerm o_14 = t;
      int p_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_15), term_v_14), term_s_14), term_r_14), term_q_14);
          t = echo_0_0(t);
          ;
          LocalPopChoice(p_14);
        }
      else
        {
          t = o_14;
        }
    }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  w_32 = t;
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_15 = ATgetFirst((ATermList) t);
                ATerm e_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_32;
          }
        ;
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        t = (ATerm) ATinsert(ATempty, w_32);
      }
    x_32 = t;
    t = term_m_9;
    y_32 = t;
    t = SSL_printnl(y_32, x_32);
    t = w_32;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL;
  t = term_f_15;
  c_33 = t;
  t = term_g_2;
  d_33 = t;
  t = term_g_15;
  t = a_6(c_33, d_33, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_h_15;
  return(t);
}
ATerm y_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
  t = term_f_15;
  g_33 = t;
  t = term_g_2;
  h_33 = t;
  t = term_g_15;
  t = a_6(g_33, h_33, t);
  t = term_i_15;
  e_33 = t;
  t = term_g_2;
  f_33 = t;
  t = term_j_15;
  t = a_6(e_33, f_33, t);
  t = term_k_15;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_l_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_3, v_3, x_3, t);
      ;
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      t = Option_3_0(y_3, z_3, a_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,s_11 = NULL;
  n_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_33 = ATgetFirst((ATermList) t);
      k_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_33);
  i_33 = t;
  t = j_33;
  t = b_70(t);
  l_33 = t;
  t = k_33;
  t = c_70(t);
  m_33 = t;
  t = (ATerm) ATinsert(CheckATermList(m_33), l_33);
  s_11 = t;
  t = SSLsetAnnotations(s_11, i_33);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_110 (ATerm), ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,z_33 = NULL,a_34 = NULL,v_11 = NULL;
  if(((u_33 != NULL) && (u_33 != t)))
    _fail(t);
  else
    u_33 = t;
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_15;
        t = g_110(t);
        ;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
      }
    t = not_null(u_33);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((w_33 != NULL) && (w_33 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          w_33 = ATgetFirst((ATermList) t);
        if(((x_33 != NULL) && (x_33 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          x_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(u_33));
    if(((v_33 != NULL) && (v_33 != t)))
      _fail(t);
    else
      v_33 = t;
    t = term_k_13;
    if(((a_34 != NULL) && (a_34 != t)))
      _fail(t);
    else
      a_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_13, not_null(w_33));
    t = a_6(not_null(a_34), not_null(w_33), t);
    t = not_null(x_33);
    {
      ATerm k_34 (ATerm t)
      {
        ATerm r_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_15 = t;
            int y_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_34 = NULL;
                d_34 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_34;
                ;
                LocalPopChoice(y_15);
              }
            else
              {
                t = t_15;
                t = g_110(t);
                t = Cons_2_0(_id, k_34, t);
              }
            ;
            LocalPopChoice(s_15);
          }
        else
          {
            t = r_15;
            {
              ATerm g_34 = NULL,h_34 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_34 = ATgetFirst((ATermList) t);
                  h_34 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_34), (ATerm) ATmakeAppl(sym_Undefined_1, g_34));
            }
          }
        return(t);
      }
      t = k_34(t);
      if(((z_33 != NULL) && (z_33 != t)))
        _fail(t);
      else
        z_33 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(z_33)), (ATerm) ATmakeAppl(sym_Program_1, not_null(w_33)));
      if(((v_11 != NULL) && (v_11 != t)))
        _fail(t);
      else
        v_11 = t;
      t = SSLsetAnnotations(not_null(v_11), not_null(v_33));
    }
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm w_34 = NULL;
  w_34 = t;
  if(match_string(t, "--help"))
    {
      t = w_34;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_34;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_34;
        }
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  t = term_a_14;
  x_34 = t;
  t = term_g_2;
  y_34 = t;
  t = term_z_15;
  t = a_6(x_34, y_34, t);
  t = term_b_16;
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm f_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_110 (ATerm), ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  if(((r_34 != NULL) && (r_34 != t)))
    _fail(t);
  else
    r_34 = t;
  t = term_y_12;
  if(((t_34 != NULL) && (t_34 != t)))
    _fail(t);
  else
    t_34 = t;
  t = term_z_12;
  if(((u_34 != NULL) && (u_34 != t)))
    _fail(t);
  else
    u_34 = t;
  t = (ATerm) ATempty;
  if(((v_34 != NULL) && (v_34 != t)))
    _fail(t);
  else
    v_34 = t;
  t = SSL_table_put(not_null(t_34), not_null(u_34), not_null(v_34));
  t = not_null(r_34);
  {
    ATerm b_4 (ATerm t)
    {
      ATerm f_16 = t;
      int n_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_110(t);
          ;
          LocalPopChoice(n_16);
        }
      else
        {
          t = f_16;
          {
            ATerm o_16 = t;
            int q_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_4, d_4, e_4, t);
                ;
                LocalPopChoice(q_16);
              }
            else
              {
                t = o_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_4, t);
    {
      ATerm r_16 = t;
      int t_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_35 = NULL;
          f_35 = t;
          {
            ATerm u_16 = t;
            int v_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_9 = NULL;
                t = f_35;
                {
                  ATerm w_16 = t;
                  int x_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_a_14;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_16);
                    }
                  else
                    {
                      t = w_16;
                      t = fetch_1_0(f_4, t);
                    }
                  t = f_35;
                  t = default_system_usage_0_0(t);
                  t = term_g_5;
                  r_9 = t;
                  t = SSL_exit(r_9);
                }
                ;
                LocalPopChoice(v_16);
              }
            else
              {
                t = u_16;
                {
                  ATerm y_9 = NULL;
                  t = term_f_15;
                  t = get_config_0_0(t);
                  t = f_35;
                  t = default_system_about_0_0(t);
                  t = term_g_5;
                  y_9 = t;
                  t = SSL_exit(y_9);
                }
              }
          }
          ;
          LocalPopChoice(t_16);
        }
      else
        {
          t = r_16;
          {
            ATerm y_16 = t;
            int a_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
                ATerm g_4 (ATerm t)
                {
                  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,y_11 = NULL;
                  l_35 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      k_35 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_35);
                  j_35 = t;
                  t = k_35;
                  if(((p_34 != NULL) && (p_34 != t)))
                    _fail(t);
                  else
                    p_34 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_35);
                  y_11 = t;
                  t = SSLsetAnnotations(y_11, j_35);
                  return(t);
                }
                t = fetch_1_0(g_4, t);
                t = term_z_4;
                if(((h_35 != NULL) && (h_35 != t)))
                  _fail(t);
                else
                  h_35 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_34)), term_b_17);
                if(((i_35 != NULL) && (i_35 != t)))
                  _fail(t);
                else
                  i_35 = t;
                t = SSL_printnl(not_null(h_35), not_null(i_35));
                t = (ATerm) ATmakeAppl(sym__2, term_z_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_34)), term_b_17));
                t = default_system_usage_0_0(t);
                t = term_d_5;
                if(((g_35 != NULL) && (g_35 != t)))
                  _fail(t);
                else
                  g_35 = t;
                t = SSL_exit(not_null(g_35));
                ;
                LocalPopChoice(a_17);
              }
            else
              {
                t = y_16;
              }
          }
        }
      if(((q_34 != NULL) && (q_34 != t)))
        _fail(t);
      else
        q_34 = t;
      t = term_y_12;
      if(((s_34 != NULL) && (s_34 != t)))
        _fail(t);
      else
        s_34 = t;
      t = SSL_table_destroy(not_null(s_34));
      t = not_null(q_34);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
  t = parse_options_1_0(f_108, t);
  q_35 = t;
  t = term_d_17;
  t_35 = t;
  t = SSL_table_create(t_35);
  t = term_d_17;
  r_35 = t;
  t = term_e_17;
  s_35 = t;
  t = SSL_table_put(r_35, s_35, q_35);
  t = q_35;
  t = h_108(t);
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_108, t);
        ;
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
              t = i_108(t);
              t = report_success_0_0(t);
              ;
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
ATerm i_4 (ATerm t)
{
  t = if_verbose2_1_0(v_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL;
  t = term_j_17;
  u_35 = t;
  t = term_g_2;
  v_35 = t;
  t = term_m_17;
  t = a_6(u_35, v_35, t);
  t = term_n_17;
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
  w_35 = t;
  t = term_k_13;
  t = get_config_0_0(t);
  x_35 = t;
  t = term_z_4;
  y_35 = t;
  t = (ATerm) ATinsert(ATempty, x_35);
  z_35 = t;
  t = SSL_printnl(y_35, z_35);
  t = w_35;
  return(t);
}
ATerm iowrap_3_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_107(t);
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        {
          ATerm t_17 = t;
          int v_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(v_17);
            }
          else
            {
              t = t_17;
              {
                ATerm w_17 = t;
                int x_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(x_17);
                  }
                else
                  {
                    t = w_17;
                    {
                      ATerm a_18 = t;
                      int b_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(k_4, o_4, s_4, t);
                          ;
                          LocalPopChoice(b_18);
                        }
                      else
                        {
                          t = a_18;
                          {
                            ATerm c_18 = t;
                            int e_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(e_18);
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
  ATerm j_4 (ATerm t)
  {
    ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
    if(((b_36 != NULL) && (b_36 != t)))
      _fail(t);
    else
      b_36 = t;
    {
      ATerm f_18 = t;
      int g_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_4 (ATerm t)
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
          t = fetch_1_0(w_4, t);
          ;
          LocalPopChoice(g_18);
        }
      else
        {
          t = f_18;
          t = term_h_18;
          if(((a_36 != NULL) && (a_36 != t)))
            _fail(t);
          else
            a_36 = t;
        }
      t = not_null(a_36);
      t = ReadFromFile_0_0(t);
      if(((c_36 != NULL) && (c_36 != t)))
        _fail(t);
      else
        c_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_36), not_null(c_36));
      t = apply_strategy_1_0(o_107, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(h_4, q_107, i_4, j_4, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,a_12 = NULL;
  c_37 = t;
  if(match_cons(t, sym__2))
    {
      z_36 = ATgetArgument(t, 0);
      a_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_37);
  y_36 = t;
  t = a_37;
  t = bottomup_1_0(y_4, t);
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_36, b_37);
  a_12 = t;
  t = SSLsetAnnotations(a_12, y_36);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL;
  f_37 = t;
  if(match_cons(t, sym_appl_2))
    {
      d_37 = ATgetArgument(t, 0);
      e_37 = ATgetArgument(t, 1);
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_37;
            t = m_5(d_37, e_37, t);
            ;
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
            t = f_37;
          }
      }
    }
  else
    {
      t = f_37;
    }
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = unflatten_list_0_0(t);
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
      }
    w_37 = t;
    if(match_cons(t, sym_appl_2))
      {
        m_37 = ATgetArgument(t, 0);
        v_37 = ATgetArgument(t, 1);
        t = m_37;
        if(match_cons(t, sym_prod_3))
          {
            n_37 = ATgetArgument(t, 0);
            r_37 = ATgetArgument(t, 1);
            u_37 = ATgetArgument(t, 2);
            t = u_37;
            if(match_cons(t, sym_no_attrs_0))
              {
                t = r_37;
                if(match_cons(t, sym_cf_1))
                  {
                    s_37 = ATgetArgument(t, 0);
                    t = s_37;
                    if(match_cons(t, sym_opt_1))
                      {
                        t_37 = ATgetArgument(t, 0);
                        t = t_37;
                        if(match_cons(t, sym_layout_0))
                          {
                            t = n_37;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                o_37 = ATgetFirst((ATermList) t);
                                q_37 = (ATerm) ATgetNext((ATermList) t);
                                t = q_37;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    t = o_37;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        p_37 = ATgetArgument(t, 0);
                                        t = p_37;
                                        if(match_cons(t, sym_layout_0))
                                          {
                                            ATerm m_18 = t;
                                            int n_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = w_37;
                                                t = l_5(v_37, t);
                                                ;
                                                LocalPopChoice(n_18);
                                              }
                                            else
                                              {
                                                t = m_18;
                                                t = w_37;
                                              }
                                          }
                                        else
                                          {
                                            t = w_37;
                                          }
                                      }
                                    else
                                      {
                                        t = w_37;
                                      }
                                  }
                                else
                                  {
                                    t = w_37;
                                  }
                              }
                            else
                              {
                                t = w_37;
                              }
                          }
                        else
                          {
                            t = w_37;
                          }
                      }
                    else
                      {
                        t = w_37;
                      }
                  }
                else
                  {
                    t = w_37;
                  }
              }
            else
              {
                t = w_37;
              }
          }
        else
          {
            t = w_37;
          }
      }
    else
      {
        t = w_37;
      }
    {
      ATerm o_18 = t;
      int p_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = unflatten_lexical_0_0(t);
          ;
          LocalPopChoice(p_18);
        }
      else
        {
          t = o_18;
        }
    }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(x_4, _fail, default_usage_0_0, t);
  return(t);
}
