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
ATerm term_e_18;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_q_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_g_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_v_11;
ATerm term_f_11;
ATerm term_r_10;
ATerm term_k_10;
ATerm term_n_9;
ATerm term_j_9;
ATerm term_c_9;
ATerm term_k_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_n_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_f_2;
void init_constant_terms (void)
{
  ATprotect(&(term_f_2));
  term_f_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeInt(255);
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(sym_range_2, term_h_5, term_i_5);
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
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_opt_1, term_n_7);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_cf_1, term_d_8);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_g_12, term_h_5);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_5);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_f_2);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
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
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_a_13);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("This tool explodes an AsFix2ME term to a valid AsFix2 term. Explosion involes\n", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattening of lists, layout, literals, and lexicals.\n\n", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Observe that the structure of lexicals cannot be restored. Lexicals are\n", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattened into left linear binary trees.", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_f_2);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_i_15, term_f_2);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym__2, term_a_14, term_f_2);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym__2, term_l_17, term_f_2);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm k_5 (ATerm j_19, ATerm k_19, ATerm l_19, ATerm);
ATerm unflatten_lexical_0_0 (ATerm);
ATerm MkLayoutCharacter_0_0 (ATerm);
ATerm MkLayoutConsList_0_0 (ATerm);
ATerm l_5 (ATerm z_18, ATerm);
ATerm MkCfConsList_1_0 (ATerm u_71 (ATerm), ATerm);
ATerm MkCfConsList_2_0 (ATerm w_71 (ATerm), ATerm x_71 (ATerm), ATerm);
ATerm MkLexConsList_1_0 (ATerm z_71 (ATerm), ATerm);
ATerm unflatten_list_0_0 (ATerm);
ATerm list_some_1_0 (ATerm s_79 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm m_5 (ATerm x_16, ATerm y_16, ATerm);
ATerm bottomup_1_0 (ATerm x_73 (ATerm), ATerm);
ATerm p_5 (ATerm g_39, ATerm h_39, ATerm);
ATerm q_5 (ATerm u_42, ATerm v_42, ATerm);
ATerm s_5 (ATerm k_92 (ATerm), ATerm o_427, ATerm y_42, ATerm);
ATerm r_5 (ATerm q_42, ATerm r_42, ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_95 (ATerm), ATerm);
ATerm e_23 (ATerm w_22, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm t_5 (ATerm w_42, ATerm);
ATerm u_5 (ATerm i_39, ATerm j_39, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_24 (ATerm p_23, ATerm);
ATerm r_24 (ATerm t_23, ATerm u_23, ATerm v_23, ATerm);
ATerm s_24 (ATerm d_24, ATerm e_24, ATerm f_24, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm x_79 (ATerm), ATerm);
ATerm o_5 (ATerm w_33, ATerm x_33, ATerm);
ATerm debug_1_0 (ATerm i_92 (ATerm), ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm v_93 (ATerm), ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm o_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm a_6 (ATerm x_43, ATerm y_43, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm y_5 (ATerm v_48, ATerm w_48, ATerm u_48, ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_5 (ATerm g_36, ATerm h_36, ATerm);
ATerm foldr_2_0 (ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm d_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm g_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm need_help_1_0 (ATerm k_96 (ATerm), ATerm);
ATerm map_1_0 (ATerm n_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm x_5 (ATerm m_50, ATerm n_50, ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_58 (ATerm), ATerm d_58 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm n_98 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm parse_options_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm n_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm iowrap_3_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm);
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
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,q_0 = NULL;
  a_0 = t;
  t = term_f_2;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_z_4;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_5), b_0), term_a_5);
  q_0 = t;
  t = SSL_printnl(e_0, q_0);
  t = term_e_5;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm k_5 (ATerm j_19, ATerm k_19, ATerm l_19, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, j_19)), (ATerm)ATmakeAppl(sym_cf_1, j_19), term_f_5), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_n_5))))), (ATerm)ATmakeAppl(sym_lex_1, j_19), term_f_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, k_19, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_n_5)))), term_f_5), l_19))));
  return(t);
}
ATerm unflatten_lexical_0_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm w_5 = ATgetArgument(t, 0);
      if(match_cons(w_5, sym_prod_3))
        {
          ATerm c_6 = ATgetArgument(w_5, 0);
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
                ATerm i_6 = (ATerm) ATgetNext((ATermList) c_6);
                if(((ATgetType(i_6) != AT_LIST) || !(ATisEmpty(i_6))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm d_6 = ATgetArgument(w_5, 1);
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
            ATerm e_6 = ATgetArgument(w_5, 2);
            if(!(match_cons(e_6, sym_no_attrs_0)))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm b_6 = ATgetArgument(t, 1);
        if(((ATgetType(b_6) == AT_LIST) && !(ATisEmpty(b_6))))
          {
            ATerm k_6 = ATgetFirst((ATermList) b_6);
            if(match_cons(k_6, sym_appl_2))
              {
                ATerm m_6 = ATgetArgument(k_6, 0);
                if(match_cons(m_6, sym_prod_3))
                  {
                    s_0 = ATgetArgument(m_6, 0);
                    {
                      ATerm o_6 = ATgetArgument(m_6, 1);
                      if(match_cons(o_6, sym_iter_star_1))
                        {
                          ATerm d_7 = ATgetArgument(o_6, 0);
                          if(match_cons(d_7, sym_char_class_1))
                            {
                              ATerm g_7 = ATgetArgument(d_7, 0);
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
                      ATerm b_7 = ATgetArgument(m_6, 2);
                      if(!(match_cons(b_7, sym_no_attrs_0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t_0 = ATgetArgument(k_6, 1);
              }
            else
              _fail(t);
            {
              ATerm l_6 = (ATerm) ATgetNext((ATermList) b_6);
              if(((ATgetType(l_6) != AT_LIST) || !(ATisEmpty(l_6))))
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
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_7), term_p_7, term_f_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_n_5))), term_o_7, term_f_5), (ATerm) ATinsert(ATempty, a_1))));
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
                              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_7), term_p_7, term_f_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, e_1)), term_o_7, term_f_5), (ATerm) ATinsert(ATempty, a_1))));
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
                                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_o_7), term_p_7, term_f_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, e_1)), term_o_7, term_f_5), (ATerm) ATinsert(ATempty, a_1))));
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
      ATerm d_2 = NULL,e_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_1 = ATgetFirst((ATermList) t);
          t_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_1;
      t = MkLayoutCharacter_0_0(t);
      d_2 = t;
      t = s_1;
      t = MkLayoutCharacter_0_0(t);
      e_2 = t;
      t = (ATerm) ATinsert(CheckATermList(t_1), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_p_7), term_p_7), term_p_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_c_8))), (ATerm) ATinsert(ATinsert(ATempty, e_2), d_2)));
      t = MkLayoutConsList_0_0(t);
    }
  return(t);
}
ATerm l_5 (ATerm z_18, ATerm t)
{
  ATerm g_2 = NULL;
  t = z_18;
  t = MkLayoutConsList_0_0(t);
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_p_7), term_k_8, term_f_5), (ATerm) ATinsert(ATempty, g_2));
  return(t);
}
ATerm MkCfConsList_1_0 (ATerm u_71 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,e_3 = NULL,f_3 = NULL,h_3 = NULL,j_3 = NULL,k_3 = NULL,c_7 = NULL;
  ATerm r_4 (ATerm t)
  {
    ATerm n_3 = NULL,o_3 = NULL,q_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_3 = ATgetFirst((ATermList) t);
        o_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = o_3;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_3;
      }
    else
      {
        ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL,p_4 = NULL,q_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_3 = ATgetFirst((ATermList) t);
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
        t = term_f_2;
        t = u_71(t);
        k_4 = t;
        t = term_f_2;
        t = u_71(t);
        l_4 = t;
        t = term_f_2;
        t = u_71(t);
        m_4 = t;
        t = term_f_2;
        t = u_71(t);
        p_4 = t;
        t = term_f_2;
        t = u_71(t);
        q_4 = t;
        t = (ATerm) ATinsert(CheckATermList(u_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, l_4))), term_k_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, k_4))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, m_4)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_c_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, p_4)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, q_4)), term_f_5), (ATerm) ATinsert(ATempty, t_3))), q_3), n_3)));
        t = r_4(t);
      }
    return(t);
  }
  if(((k_3 != NULL) && (k_3 != t)))
    _fail(t);
  else
    k_3 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((e_3 != NULL) && (e_3 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        e_3 = ATgetFirst((ATermList) t);
      if(((f_3 != NULL) && (f_3 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        f_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_3);
  if(((v_2 != NULL) && (v_2 != t)))
    _fail(t);
  else
    v_2 = t;
  t = term_f_2;
  t = u_71(t);
  if(((h_3 != NULL) && (h_3 != t)))
    _fail(t);
  else
    h_3 = t;
  t = term_f_2;
  t = u_71(t);
  if(((j_3 != NULL) && (j_3 != t)))
    _fail(t);
  else
    j_3 = t;
  t = (ATerm) ATinsert(CheckATermList(f_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, h_3)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, j_3)), term_f_5), (ATerm) ATinsert(ATempty, e_3)));
  if(((c_7 != NULL) && (c_7 != t)))
    _fail(t);
  else
    c_7 = t;
  t = SSLsetAnnotations(c_7, v_2);
  t = r_4(t);
  return(t);
}
ATerm MkCfConsList_2_0 (ATerm w_71 (ATerm), ATerm x_71 (ATerm), ATerm t)
{
  ATerm d_5 = NULL,j_5 = NULL,z_5 = NULL,g_6 = NULL,h_6 = NULL,j_6 = NULL,n_6 = NULL,b_10 = NULL;
  ATerm a_9 (ATerm t)
  {
    ATerm p_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_6 = ATgetFirst((ATermList) t);
        s_6 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = s_6;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_6;
      }
    else
      {
        ATerm e_8 = NULL,f_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,n_8 = NULL,s_8 = NULL,t_8 = NULL,x_8 = NULL,z_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_6 = ATgetFirst((ATermList) t);
            u_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_6;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_6 = ATgetFirst((ATermList) t);
            w_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_6;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_6 = ATgetFirst((ATermList) t);
            y_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_6;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_6 = ATgetFirst((ATermList) t);
            a_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_f_2;
        t = w_71(t);
        e_8 = t;
        t = term_f_2;
        t = x_71(t);
        f_8 = t;
        t = term_f_2;
        t = x_71(t);
        h_8 = t;
        t = term_f_2;
        t = w_71(t);
        i_8 = t;
        t = term_f_2;
        t = x_71(t);
        j_8 = t;
        t = term_f_2;
        t = w_71(t);
        n_8 = t;
        t = term_f_2;
        t = x_71(t);
        s_8 = t;
        t = term_f_2;
        t = w_71(t);
        t_8 = t;
        t = term_f_2;
        t = w_71(t);
        x_8 = t;
        t = term_f_2;
        t = x_71(t);
        z_8 = t;
        t = (ATerm) ATinsert(CheckATermList(a_7), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, i_8, j_8))), term_k_8), h_8), term_k_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, e_8, f_8))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, n_8, s_8)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_c_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, t_8)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, x_8, z_8)), term_f_5), (ATerm) ATinsert(ATempty, z_6))), x_6), v_6), t_6), p_6)));
        t = a_9(t);
      }
    return(t);
  }
  if(((n_6 != NULL) && (n_6 != t)))
    _fail(t);
  else
    n_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((j_5 != NULL) && (j_5 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        j_5 = ATgetFirst((ATermList) t);
      if(((z_5 != NULL) && (z_5 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        z_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_6);
  if(((d_5 != NULL) && (d_5 != t)))
    _fail(t);
  else
    d_5 = t;
  t = term_f_2;
  t = w_71(t);
  if(((g_6 != NULL) && (g_6 != t)))
    _fail(t);
  else
    g_6 = t;
  t = term_f_2;
  t = w_71(t);
  if(((h_6 != NULL) && (h_6 != t)))
    _fail(t);
  else
    h_6 = t;
  t = term_f_2;
  t = x_71(t);
  if(((j_6 != NULL) && (j_6 != t)))
    _fail(t);
  else
    j_6 = t;
  t = (ATerm) ATinsert(CheckATermList(z_5), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, g_6)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, h_6, j_6)), term_f_5), (ATerm) ATinsert(ATempty, j_5)));
  if(((b_10 != NULL) && (b_10 != t)))
    _fail(t);
  else
    b_10 = t;
  t = SSLsetAnnotations(b_10, d_5);
  t = a_9(t);
  return(t);
}
ATerm MkLexConsList_1_0 (ATerm z_71 (ATerm), ATerm t)
{
  ATerm z_10 (ATerm t)
  {
    ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_9 = ATgetFirst((ATermList) t);
        f_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = f_9;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        ATerm m_9 = NULL,s_9 = NULL;
        t = term_f_2;
        t = z_71(t);
        m_9 = t;
        t = term_f_2;
        t = z_71(t);
        s_9 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, m_9)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, s_9)), term_f_5), (ATerm) ATinsert(ATempty, e_9));
      }
    else
      {
        ATerm j_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,s_10 = NULL,t_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_9 = ATgetFirst((ATermList) t);
            h_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_f_2;
        t = z_71(t);
        j_10 = t;
        t = term_f_2;
        t = z_71(t);
        m_10 = t;
        t = term_f_2;
        t = z_71(t);
        n_10 = t;
        t = term_f_2;
        t = z_71(t);
        o_10 = t;
        t = term_f_2;
        t = z_71(t);
        p_10 = t;
        t = term_f_2;
        t = z_71(t);
        s_10 = t;
        t = term_f_2;
        t = z_71(t);
        t_10 = t;
        t = (ATerm) ATinsert(CheckATermList(h_9), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, m_10))), (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, j_10))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, n_10)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_c_8))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, s_10)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, t_10)), term_f_5), (ATerm) ATinsert(ATempty, g_9))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, o_10)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, p_10)), term_f_5), (ATerm) ATinsert(ATempty, e_9)))));
        t = z_10(t);
      }
    return(t);
  }
  t = z_10(t);
  return(t);
}
ATerm unflatten_list_0_0 (ATerm t)
{
  ATerm o_11 = NULL,r_11 = NULL,t_11 = NULL,b_12 = NULL,c_12 = NULL,f_12 = NULL,h_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      b_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_12;
  if(match_cons(t, sym_list_1))
    {
      c_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_12;
  if(match_cons(t, sym_iter_1))
    {
      f_12 = ATgetArgument(t, 0);
      {
        ATerm f_0 (ATerm t)
        {
          t = f_12;
          return(t);
        }
        t = j_12;
        t = MkLexConsList_1_0(f_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          f_12 = ATgetArgument(t, 0);
          t = j_12;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_11 = ATgetFirst((ATermList) t);
              t_11 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm y_12 = NULL;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_iter_1, f_12)), (ATerm) ATinsert(CheckATermList(t_11), r_11));
                t = unflatten_list_0_0(t);
                y_12 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, f_12))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, f_12)), term_f_5), (ATerm) ATinsert(ATempty, y_12));
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, f_12)), term_f_5), (ATerm) ATempty);
            }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              f_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_12;
          if(match_cons(t, sym_iter_sep_2))
            {
              h_12 = ATgetArgument(t, 0);
              o_11 = ATgetArgument(t, 1);
              {
                ATerm l_0 (ATerm t)
                {
                  t = h_12;
                  return(t);
                }
                ATerm u_0 (ATerm t)
                {
                  t = o_11;
                  return(t);
                }
                t = j_12;
                t = MkCfConsList_2_0(l_0, u_0, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  h_12 = ATgetArgument(t, 0);
                  o_11 = ATgetArgument(t, 1);
                  t = j_12;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_11 = ATgetFirst((ATermList) t);
                      t_11 = (ATerm) ATgetNext((ATermList) t);
                      {
                        ATerm n_13 = NULL;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, h_12, o_11))), (ATerm) ATinsert(CheckATermList(t_11), r_11));
                        t = unflatten_list_0_0(t);
                        n_13 = t;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, h_12, o_11))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, h_12, o_11)), term_f_5), (ATerm) ATinsert(ATempty, n_13));
                      }
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, h_12, o_11)), term_f_5), (ATerm) ATempty);
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      h_12 = ATgetArgument(t, 0);
                      {
                        ATerm v_0 (ATerm t)
                        {
                          t = h_12;
                          return(t);
                        }
                        t = j_12;
                        t = MkCfConsList_1_0(v_0, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          h_12 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = j_12;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          r_11 = ATgetFirst((ATermList) t);
                          t_11 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm y_13 = NULL;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, h_12))), (ATerm) ATinsert(CheckATermList(t_11), r_11));
                            t = unflatten_list_0_0(t);
                            y_13 = t;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, h_12))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, h_12)), term_f_5), (ATerm) ATinsert(ATempty, y_13));
                          }
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, h_12)), term_f_5), (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm list_some_1_0 (ATerm s_79 (ATerm), ATerm t)
{
  ATerm c_16 (ATerm t)
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_14 = NULL,i_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,e_10 = NULL;
        n_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_14 = ATgetFirst((ATermList) t);
            l_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_14);
        h_14 = t;
        t = i_14;
        t = s_79(t);
        m_14 = t;
        t = (ATerm) ATinsert(CheckATermList(l_14), m_14);
        e_10 = t;
        t = SSLsetAnnotations(e_10, h_14);
        LocalPopChoice(m_8);
        {
          ATerm t_14 = NULL,u_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,g_10 = NULL;
          y_14 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_14 = ATgetFirst((ATermList) t);
              w_14 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_14);
          t_14 = t;
          t = w_14;
          {
            ATerm o_8 = t;
            int p_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_0 (ATerm t)
                {
                  ATerm q_8 = t;
                  int r_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = s_79(t);
                      ;
                      LocalPopChoice(r_8);
                    }
                  else
                    {
                      t = q_8;
                    }
                  return(t);
                }
                t = map_1_0(w_0, t);
                ;
                LocalPopChoice(p_8);
              }
            else
              {
                t = o_8;
                {
                  ATerm r_15 = NULL,i_0 = NULL,o_0 = NULL,f_10 = NULL;
                  if(match_cons(t, sym_list_1))
                    {
                      r_15 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_14);
                  i_0 = t;
                  t = r_15;
                  {
                    ATerm v_8 = t;
                    int w_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = s_79(t);
                        ;
                        LocalPopChoice(w_8);
                      }
                    else
                      {
                        t = v_8;
                      }
                    o_0 = t;
                    t = (ATerm) ATmakeAppl(sym_list_1, o_0);
                    f_10 = t;
                    t = SSLsetAnnotations(f_10, i_0);
                  }
                }
              }
            if(((x_14 != NULL) && (x_14 != t)))
              _fail(t);
            else
              x_14 = t;
            t = (ATerm) ATinsert(CheckATermList(x_14), u_14);
            if(((g_10 != NULL) && (g_10 != t)))
              _fail(t);
            else
              g_10 = t;
            t = SSLsetAnnotations(g_10, t_14);
          }
        }
      }
    else
      {
        t = l_8;
        {
          ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,a_16 = NULL,h_10 = NULL;
          a_16 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_15 = ATgetFirst((ATermList) t);
              w_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_16);
          u_15 = t;
          t = w_15;
          t = c_16(t);
          x_15 = t;
          t = (ATerm) ATinsert(CheckATermList(x_15), v_15);
          h_10 = t;
          t = SSLsetAnnotations(h_10, u_15);
        }
      }
    return(t);
  }
  t = c_16(t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      i_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_explode_string(i_16);
  h_16 = t;
  t = map_1_0(y_0, t);
  g_16 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, g_16, (ATerm)ATmakeAppl(sym_lit_1, i_16), term_f_5), h_16);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm j_16 = NULL;
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, j_16));
  return(t);
}
ATerm m_5 (ATerm x_16, ATerm y_16, ATerm t)
{
  ATerm e_16 = NULL;
  t = y_16;
  t = list_some_1_0(x_0, t);
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, x_16, e_16);
  return(t);
}
ATerm bottomup_1_0 (ATerm x_73 (ATerm), ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = bottomup_1_0(x_73, t);
    return(t);
  }
  t = SRTS_all(z_0, t);
  t = x_73(t);
  return(t);
}
ATerm p_5 (ATerm g_39, ATerm h_39, ATerm t)
{
  ATerm k_16 = NULL;
  t = SSL_fputc(g_39, h_39);
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_16);
  return(t);
}
ATerm q_5 (ATerm u_42, ATerm v_42, ATerm t)
{
  ATerm l_16 = NULL;
  t = SSL_write_term_to_stream_text(u_42, v_42);
  l_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_16);
  return(t);
}
ATerm s_5 (ATerm k_92 (ATerm), ATerm o_427, ATerm y_42, ATerm t)
{
  ATerm m_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_427, term_c_9);
  t = open_stream_0_0(t);
  m_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_16, y_42);
  t = k_92(t);
  t = fclose_0_0(t);
  t = y_42;
  return(t);
}
ATerm r_5 (ATerm q_42, ATerm r_42, ATerm t)
{
  ATerm p_16 = NULL;
  t = SSL_write_term_to_stream_baf(q_42, r_42);
  p_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_16);
  return(t);
}
ATerm f_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_9 = ATgetArgument(t, 0);
      if(match_cons(d_9, sym_Stream_1))
        {
          l_2 = ATgetArgument(d_9, 0);
        }
      else
        _fail(t);
      m_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(l_2, m_2, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_9 = ATgetArgument(t, 0);
      if(match_cons(i_9, sym_Stream_1))
        {
          b_3 = ATgetArgument(i_9, 0);
        }
      else
        _fail(t);
      c_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(b_3, c_3, t);
  y_2 = t;
  t = term_j_9;
  z_2 = t;
  t = y_2;
  if(match_cons(t, sym_Stream_1))
    {
      a_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_9, y_2);
  t = p_5(z_2, a_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_16 = NULL,a_17 = NULL,m_17 = NULL,x_17 = NULL,y_17 = NULL,f_18 = NULL,u_18 = NULL,f_19 = NULL,g_19 = NULL,m_19 = NULL,v_21 = NULL,y_21 = NULL,v_10 = NULL,u_10 = NULL;
  a_17 = t;
  if(match_cons(t, sym__2))
    {
      f_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_17);
  u_18 = t;
  t = f_19;
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((v_16 != NULL) && (v_16 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_16 = ATgetArgument(t, 0);
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
        t = term_n_9;
        v_16 = t;
      }
    if(((m_19 != NULL) && (m_19 != t)))
      _fail(t);
    else
      m_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_19, g_19);
    if(((u_10 != NULL) && (u_10 != t)))
      _fail(t);
    else
      u_10 = t;
    t = SSLsetAnnotations(u_10, u_18);
    t = a_17;
    if(match_cons(t, sym__2))
      {
        if(((x_17 != NULL) && (x_17 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          x_17 = ATgetArgument(t, 0);
        if(((y_17 != NULL) && (y_17 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          y_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_17);
    if(((m_17 != NULL) && (m_17 != t)))
      _fail(t);
    else
      m_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_17, (ATerm) ATmakeAppl(sym__2, not_null(v_16), y_17));
    if(((v_10 != NULL) && (v_10 != t)))
      _fail(t);
    else
      v_10 = t;
    t = SSLsetAnnotations(v_10, m_17);
    if(((f_18 != NULL) && (f_18 != t)))
      _fail(t);
    else
      f_18 = t;
    if(match_cons(t, sym__2))
      {
        if(((v_21 != NULL) && (v_21 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          v_21 = ATgetArgument(t, 0);
        if(((y_21 != NULL) && (y_21 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          y_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm o_9 = t;
      int p_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_1 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,w_10 = NULL;
          t = SSLgetAnnotations(f_18);
          n_1 = t;
          t = v_21;
          t = fetch_1_0(f_1, t);
          h_2 = t;
          t = y_21;
          if(match_cons(t, sym__2))
            {
              j_2 = ATgetArgument(t, 0);
              k_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_5(g_1, j_2, k_2, t);
          i_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_2, i_2);
          w_10 = t;
          t = SSLsetAnnotations(w_10, n_1);
          ;
          LocalPopChoice(p_9);
        }
      else
        {
          t = o_9;
          {
            ATerm r_2 = NULL,u_2 = NULL,w_2 = NULL,x_2 = NULL,x_10 = NULL;
            t = SSLgetAnnotations(f_18);
            r_2 = t;
            t = y_21;
            if(match_cons(t, sym__2))
              {
                w_2 = ATgetArgument(t, 0);
                x_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_5(h_1, w_2, x_2, t);
            u_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_21, u_2);
            x_10 = t;
            t = SSLsetAnnotations(x_10, r_2);
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
ATerm apply_strategy_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,g_22 = NULL,i_22 = NULL,j_22 = NULL;
  j_22 = t;
  t = dtime_0_0(t);
  t = j_22;
  t = m_95(t);
  i_22 = t;
  t = dtime_0_0(t);
  c_22 = t;
  t = i_22;
  if(match_cons(t, sym__2))
    {
      d_22 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_22), (ATerm) ATmakeAppl(sym_Runtime_1, c_22)), g_22);
  return(t);
}
ATerm e_23 (ATerm w_22, ATerm t)
{
  t = SSL_fclose(w_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL;
  a_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_22 = ATgetArgument(t, 0);
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_22);
            ;
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            t = e_23(a_23, t);
          }
      }
    }
  else
    {
      t = e_23(a_23, t);
    }
  return(t);
}
ATerm t_5 (ATerm w_42, ATerm t)
{
  t = SSL_read_term_from_stream(w_42);
  return(t);
}
ATerm u_5 (ATerm i_39, ATerm j_39, ATerm t)
{
  ATerm g_23 = NULL;
  t = SSL_fopen(i_39, j_39);
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_23);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_23 = NULL;
  t = SSL_stdin_stream();
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_23 = NULL;
  t = SSL_stdout_stream();
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_23 = NULL;
  t = SSL_stderr_stream();
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_23);
  return(t);
}
ATerm q_24 (ATerm p_23, ATerm t)
{
  ATerm q_23 = NULL;
  t = SSL_explode_term(p_23);
  if(match_cons(t, sym__2))
    {
      ATerm u_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_9 = ATgetArgument(t, 1);
        if(((ATgetType(v_9) == AT_LIST) && !(ATisEmpty(v_9))))
          {
            q_23 = ATgetFirst((ATermList) v_9);
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
  t = q_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm r_24 (ATerm t_23, ATerm u_23, ATerm v_23, ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,b_24 = NULL,d_11 = NULL;
  t = SSLgetAnnotations(v_23);
  y_23 = t;
  t = t_23;
  if(match_cons(t, sym_Path_1))
    {
      b_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_24, u_23);
  d_11 = t;
  t = SSLsetAnnotations(d_11, y_23);
  if(match_cons(t, sym__2))
    {
      w_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(w_23, x_23, t);
  return(t);
}
ATerm s_24 (ATerm d_24, ATerm e_24, ATerm f_24, ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,l_24 = NULL,e_11 = NULL;
  t = SSLgetAnnotations(f_24);
  i_24 = t;
  t = SSL_is_string(d_24);
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_24, e_24);
  e_11 = t;
  t = SSLsetAnnotations(e_11, i_24);
  if(match_cons(t, sym__2))
    {
      g_24 = ATgetArgument(t, 0);
      h_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(g_24, h_24, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      ATerm y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  n_24 = t;
  if(match_cons(t, sym__2))
    {
      o_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
      {
        ATerm a_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_24(n_24, t);
            ;
            LocalPopChoice(c_10);
          }
        else
          {
            t = a_10;
            {
              ATerm d_10 = t;
              int i_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_24(o_24, p_24, n_24, t);
                  ;
                  LocalPopChoice(i_10);
                }
              else
                {
                  t = d_10;
                  t = s_24(o_24, p_24, n_24, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_24(n_24, t);
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
  ATerm l_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_24 = NULL;
      w_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_24, term_r_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = l_10;
      t = debug_1_0(i_1, t);
      _fail(t);
    }
  u_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(v_24, t);
  t_24 = t;
  t = u_24;
  t = fclose_0_0(t);
  t = t_24;
  return(t);
}
ATerm fetch_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm u_25 (ATerm t)
  {
    ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
    r_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_25 = ATgetFirst((ATermList) t);
        t_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_10 = t;
      int a_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_4 = NULL,u_4 = NULL,h_11 = NULL;
          t = SSLgetAnnotations(r_25);
          o_4 = t;
          t = s_25;
          t = x_79(t);
          u_4 = t;
          t = (ATerm) ATinsert(CheckATermList(t_25), u_4);
          h_11 = t;
          t = SSLsetAnnotations(h_11, o_4);
          ;
          LocalPopChoice(a_11);
        }
      else
        {
          t = y_10;
          {
            ATerm c_5 = NULL,g_5 = NULL,i_11 = NULL;
            t = SSLgetAnnotations(r_25);
            c_5 = t;
            t = t_25;
            t = u_25(t);
            g_5 = t;
            t = (ATerm) ATinsert(CheckATermList(g_5), s_25);
            i_11 = t;
            t = SSLsetAnnotations(i_11, c_5);
          }
        }
    }
    return(t);
  }
  t = u_25(t);
  return(t);
}
ATerm o_5 (ATerm w_33, ATerm x_33, ATerm t)
{
  t = SSL_strcat(w_33, x_33);
  return(t);
}
ATerm debug_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL;
  x_25 = t;
  t = i_92(t);
  y_25 = t;
  t = term_z_4;
  z_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_25), y_25);
  a_26 = t;
  t = SSL_printnl(z_25, a_26);
  t = x_25;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
    }
  return(t);
}
ATerm k_1 (ATerm t)
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
      ATerm h_26 = NULL;
      h_26 = t;
      t = SSL_is_string(h_26);
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
            t = map_1_0(j_1, t);
            ;
            LocalPopChoice(m_11);
          }
        else
          {
            t = k_11;
            {
              ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
              n_26 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_26 = ATgetArgument(t, 0);
                  t = o_26;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_26 = ATgetArgument(t, 0);
                      t = o_26;
                      {
                        ATerm p_11 = t;
                        int s_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(s_11);
                          }
                        else
                          {
                            t = p_11;
                            t = debug_1_0(k_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_26 = NULL,u_26 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_26 = ATgetArgument(t, 0);
                          p_26 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_26;
                      t = eval_config_0_0(t);
                      t_26 = t;
                      t = p_26;
                      t = eval_config_0_0(t);
                      u_26 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_26, u_26);
                      t = o_5(t_26, u_26, t);
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
  ATerm y_26 = NULL,z_26 = NULL;
  y_26 = t;
  t = term_v_11;
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, y_26);
  t = x_5(z_26, y_26, t);
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL,b_27 = NULL;
        t = eval_config_0_0(t);
        a_27 = t;
        t = term_v_11;
        b_27 = t;
        t = SSL_table_put(b_27, y_26, a_27);
        t = a_27;
        ;
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  ATerm h_27 = NULL;
  h_27 = t;
  {
    ATerm a_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_27 = NULL;
        t = term_g_12;
        t = get_config_0_0(t);
        j_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_27, term_i_12);
        t = geq_0_0(t);
        t = h_27;
        t = v_93(t);
        ;
        LocalPopChoice(e_12);
      }
    else
      {
        t = a_12;
        t = h_27;
      }
  }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  if(match_string(t, "-k"))
    {
      t = m_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_27;
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
  n_27 = t;
  t = SSL_string_to_int(n_27);
  o_27 = t;
  t = term_k_12;
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_12, o_27);
  t = a_6(p_27, o_27, t);
  t = n_27;
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_l_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_1, m_1, o_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm r_27 = NULL;
  r_27 = t;
  if(match_string(t, "-S"))
    {
      t = r_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_27;
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL;
  t = term_g_12;
  s_27 = t;
  t = term_h_5;
  t_27 = t;
  t = term_m_12;
  t = a_6(s_27, t_27, t);
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
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
  u_27 = t;
  t = SSL_string_to_int(u_27);
  v_27 = t;
  t = term_g_12;
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_12, v_27);
  t = a_6(w_27, v_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_27);
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
  ATerm x_27 = NULL,y_27 = NULL;
  t = term_q_12;
  x_27 = t;
  t = term_f_2;
  y_27 = t;
  t = term_r_12;
  t = a_6(x_27, y_27, t);
  t = term_s_12;
  return(t);
}
ATerm b_2 (ATerm t)
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
      t = Option_3_0(p_1, u_1, v_1, t);
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
            t = Option_3_0(z_1, a_2, b_2, t);
          }
      }
    }
  return(t);
}
ATerm a_6 (ATerm x_43, ATerm y_43, ATerm t)
{
  ATerm z_27 = NULL;
  t = term_v_11;
  z_27 = t;
  t = SSL_table_put(z_27, x_43, y_43);
  t = (ATerm) ATmakeAppl(sym__3, term_v_11, x_43, y_43);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
      t = term_f_2;
      t = h_0(t);
      e_28 = t;
      t = term_z_12;
      f_28 = t;
      t = term_a_13;
      g_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_12, term_a_13, e_28);
      t = y_5(f_28, g_28, e_28, t);
      _fail(t);
    }
  else
    {
      ATerm j_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_28 = ATgetFirst((ATermList) t);
          d_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_28;
      t = d_0(t);
      t = term_f_2;
      t = g_0(t);
      j_28 = t;
      t = (ATerm) ATinsert(CheckATermList(d_28), j_28);
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm l_28 = NULL;
  l_28 = t;
  if(match_string(t, "-o"))
    {
      t = l_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_28;
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  m_28 = t;
  t = term_b_13;
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_13, m_28);
  t = a_6(n_28, m_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_28);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_c_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_2, n_2, o_2, t);
  return(t);
}
ATerm y_5 (ATerm v_48, ATerm w_48, ATerm u_48, ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_48, w_48);
  {
    ATerm d_13 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, v_48, w_48);
        t = x_5(v_48, w_48, t);
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        t = (ATerm) ATempty;
      }
    q_28 = t;
    t = (ATerm) ATinsert(CheckATermList(q_28), u_48);
    r_28 = t;
    t = SSL_table_put(v_48, w_48, r_28);
    t = p_28;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
      t = term_f_2;
      t = p_0(t);
      c_29 = t;
      t = term_z_12;
      d_29 = t;
      t = term_a_13;
      e_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_12, term_a_13, c_29);
      t = y_5(d_29, e_29, c_29, t);
      _fail(t);
    }
  else
    {
      ATerm i_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_28 = ATgetFirst((ATermList) t);
          z_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_29 = ATgetFirst((ATermList) t);
          b_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_28;
      t = m_0(t);
      t = a_29;
      t = n_0(t);
      i_29 = t;
      t = (ATerm) ATinsert(CheckATermList(b_29), i_29);
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  if(match_string(t, "-i"))
    {
      t = k_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_29;
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL;
  l_29 = t;
  t = term_h_13;
  m_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_13, l_29);
  t = a_6(m_29, l_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_29);
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
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_2;
  t = whoami_0_0(t);
  n_29 = t;
  t = term_z_4;
  p_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_13), n_29);
  q_29 = t;
  t = SSL_printnl(p_29, q_29);
  t = term_e_5;
  o_29 = t;
  t = SSL_exit(o_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_5 (ATerm g_36, ATerm h_36, ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_36, h_36);
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      t = SSL_addr(g_36, h_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
  s_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_29;
      t = q_85(t);
    }
  else
    {
      ATerm x_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_29 = ATgetFirst((ATermList) t);
          u_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_29;
      t = foldr_2_0(q_85, r_85, t);
      x_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_29, x_29);
      t = r_85(t);
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
  t = term_h_5;
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      e_7 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(e_7, f_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_30 = NULL,q_6 = NULL,r_6 = NULL;
  t = times_0_0(t);
  r_6 = t;
  t = SSL_explode_term(r_6);
  if(match_cons(t, sym__2))
    {
      ATerm o_13 = ATgetArgument(t, 0);
      q_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6;
  t = foldr_2_0(t_2, d_3, t);
  a_30 = t;
  t = SSL_TicksToSeconds(a_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL;
  l_30 = t;
  if(match_cons(t, sym__2))
    {
      m_30 = ATgetArgument(t, 0);
      n_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_30;
        if((m_30 != t))
          {
            _fail(t);
          }
        t = l_30;
        ;
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
        {
          ATerm r_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_30, n_30);
              ;
              LocalPopChoice(s_13);
            }
          else
            {
              t = r_13;
              t = SSL_gtr(m_30, n_30);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm r_30 = NULL;
  r_30 = t;
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_30 = NULL;
        t = term_g_12;
        t = get_config_0_0(t);
        t_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_30, term_e_5);
        t = geq_0_0(t);
        t = r_30;
        t = u_93(t);
        ;
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        t = r_30;
      }
  }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,y_30 = NULL,z_30 = NULL;
  t = run_time_0_0(t);
  v_30 = t;
  t = term_f_2;
  t = whoami_0_0(t);
  w_30 = t;
  t = term_z_4;
  y_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_13), v_30), term_v_13), w_30);
  z_30 = t;
  t = SSL_printnl(y_30, z_30);
  t = (ATerm) ATmakeAppl(sym__2, term_z_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_13), v_30), term_v_13), w_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_5;
  a_31 = t;
  t = SSL_exit(a_31);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL;
  j_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_31 = ATgetArgument(t, 0);
          {
            ATerm g_8 = NULL,l_11 = NULL;
            t = SSLgetAnnotations(j_31);
            g_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_31);
            l_11 = t;
            t = SSLsetAnnotations(l_11, g_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_96 (ATerm), ATerm t)
{
  ATerm x_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = x_13;
      t = fetch_1_0(i_3, t);
    }
  t = k_96(t);
  return(t);
}
ATerm map_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  ATerm z_31 (ATerm t)
  {
    ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
    w_31 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_31;
      }
    else
      {
        ATerm u_8 = NULL,y_8 = NULL,b_9 = NULL,n_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_31 = ATgetFirst((ATermList) t);
            y_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_31);
        u_8 = t;
        t = x_31;
        t = n_79(t);
        y_8 = t;
        t = y_31;
        t = z_31(t);
        b_9 = t;
        t = (ATerm) ATinsert(CheckATermList(b_9), y_8);
        n_11 = t;
        t = SSLsetAnnotations(n_11, u_8);
      }
    return(t);
  }
  t = z_31(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_32 = ATgetFirst((ATermList) t);
      d_32 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_32 = NULL,i_32 = NULL;
        ATerm l_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_32)), not_null(i_32));
          return(t);
        }
        t = d_32;
        t = k_0(t);
        if(((h_32 != NULL) && (h_32 != t)))
          _fail(t);
        else
          h_32 = t;
        t = c_32;
        t = j_0(t);
        if(((i_32 != NULL) && (i_32 != t)))
          _fail(t);
        else
          i_32 = t;
        t = d_32;
        t = reverse_acc_2_0(j_0, l_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_2;
      t = k_0(t);
    }
  return(t);
}
ATerm x_5 (ATerm m_50, ATerm n_50, ATerm t)
{
  t = SSL_table_get(m_50, n_50);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm v_32 = NULL;
  v_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_32), term_b_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_13;
      t = get_config_0_0(t);
      m_32 = t;
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm m_3 (ATerm t)
        {
          ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,q_11 = NULL;
          r_32 = t;
          if(match_cons(t, sym_Program_1))
            {
              q_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_32);
          p_32 = t;
          t = q_32;
          if(((m_32 != NULL) && (m_32 != t)))
            _fail(t);
          else
            m_32 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, q_32);
          q_11 = t;
          t = SSLsetAnnotations(q_11, p_32);
          return(t);
        }
        t = fetch_1_0(m_3, t);
      }
    }
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_14), not_null(m_32)), term_g_14);
        t = echo_0_0(t);
        ;
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
      }
    t = term_k_14;
    t = echo_0_0(t);
    t = term_z_12;
    if(((n_32 != NULL) && (n_32 != t)))
      _fail(t);
    else
      n_32 = t;
    t = term_a_13;
    if(((o_32 != NULL) && (o_32 != t)))
      _fail(t);
    else
      o_32 = t;
    t = term_o_14;
    t = x_5(n_32, o_32, t);
    t = reverse_acc_2_0(_id, p_3, t);
    t = map_1_0(r_3, t);
    {
      ATerm p_14 = t;
      int q_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_15), term_z_14), term_v_14), term_s_14), term_r_14);
          t = echo_0_0(t);
          ;
          LocalPopChoice(q_14);
        }
      else
        {
          t = p_14;
        }
    }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
  z_32 = t;
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_32;
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
            t = z_32;
          }
        ;
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        t = (ATerm) ATinsert(ATempty, z_32);
      }
    a_33 = t;
    t = term_n_9;
    b_33 = t;
    t = SSL_printnl(b_33, a_33);
    t = z_32;
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
ATerm v_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL;
  t = term_f_15;
  f_33 = t;
  t = term_f_2;
  g_33 = t;
  t = term_g_15;
  t = a_6(f_33, g_33, t);
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
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL;
  t = term_f_15;
  j_33 = t;
  t = term_f_2;
  k_33 = t;
  t = term_g_15;
  t = a_6(j_33, k_33, t);
  t = term_i_15;
  h_33 = t;
  t = term_f_2;
  i_33 = t;
  t = term_j_15;
  t = a_6(h_33, i_33, t);
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
      t = Option_3_0(v_3, w_3, x_3, t);
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
ATerm Cons_2_0 (ATerm c_58 (ATerm), ATerm d_58 (ATerm), ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,u_11 = NULL;
  q_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_33 = ATgetFirst((ATermList) t);
      n_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_33);
  l_33 = t;
  t = m_33;
  t = c_58(t);
  o_33 = t;
  t = n_33;
  t = d_58(t);
  p_33 = t;
  t = (ATerm) ATinsert(CheckATermList(p_33), o_33);
  u_11 = t;
  t = SSLsetAnnotations(u_11, l_33);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,c_34 = NULL,e_34 = NULL,w_11 = NULL;
  v_33 = t;
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_15;
        t = n_98(t);
        ;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
      }
    t = v_33;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_33 = ATgetFirst((ATermList) t);
        a_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_33);
    y_33 = t;
    t = term_k_13;
    e_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_13, z_33);
    t = a_6(e_34, z_33, t);
    t = a_34;
    {
      ATerm o_34 (ATerm t)
      {
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_15 = t;
            int z_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_34 = NULL;
                h_34 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = h_34;
                ;
                LocalPopChoice(z_15);
              }
            else
              {
                t = y_15;
                t = n_98(t);
                t = Cons_2_0(_id, o_34, t);
              }
            ;
            LocalPopChoice(t_15);
          }
        else
          {
            t = s_15;
            {
              ATerm k_34 = NULL,l_34 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_34 = ATgetFirst((ATermList) t);
                  l_34 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_34), (ATerm) ATmakeAppl(sym_Undefined_1, k_34));
            }
          }
        return(t);
      }
      t = o_34(t);
      if(((c_34 != NULL) && (c_34 != t)))
        _fail(t);
      else
        c_34 = t;
      t = (ATerm) ATinsert(CheckATermList(c_34), (ATerm) ATmakeAppl(sym_Program_1, z_33));
      if(((w_11 != NULL) && (w_11 != t)))
        _fail(t);
      else
        w_11 = t;
      t = SSLsetAnnotations(w_11, y_33);
    }
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm a_35 = NULL;
  a_35 = t;
  if(match_string(t, "--help"))
    {
      t = a_35;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_35;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_35;
        }
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL;
  t = term_a_14;
  b_35 = t;
  t = term_f_2;
  c_35 = t;
  t = term_b_16;
  t = a_6(b_35, c_35, t);
  t = term_d_16;
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_f_16;
  return(t);
}
ATerm f_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
  v_34 = t;
  t = term_z_12;
  x_34 = t;
  t = term_a_13;
  y_34 = t;
  t = (ATerm) ATempty;
  z_34 = t;
  t = SSL_table_put(x_34, y_34, z_34);
  t = v_34;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm n_16 = t;
      int o_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_98(t);
          ;
          LocalPopChoice(o_16);
        }
      else
        {
          t = n_16;
          {
            ATerm q_16 = t;
            int r_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_4, d_4, e_4, t);
                ;
                LocalPopChoice(r_16);
              }
            else
              {
                t = q_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_4, t);
    {
      ATerm s_16 = t;
      int t_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_35 = NULL;
          j_35 = t;
          {
            ATerm u_16 = t;
            int w_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_9 = NULL;
                t = j_35;
                {
                  ATerm z_16 = t;
                  int b_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_a_14;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(b_17);
                    }
                  else
                    {
                      t = z_16;
                      t = fetch_1_0(f_4, t);
                    }
                  t = j_35;
                  t = default_system_usage_0_0(t);
                  t = term_h_5;
                  t_9 = t;
                  t = SSL_exit(t_9);
                }
                ;
                LocalPopChoice(w_16);
              }
            else
              {
                t = u_16;
                {
                  ATerm z_9 = NULL;
                  t = term_f_15;
                  t = get_config_0_0(t);
                  t = j_35;
                  t = default_system_about_0_0(t);
                  t = term_h_5;
                  z_9 = t;
                  t = SSL_exit(z_9);
                }
              }
          }
          ;
          LocalPopChoice(t_16);
        }
      else
        {
          t = s_16;
          {
            ATerm c_17 = t;
            int d_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
                ATerm g_4 (ATerm t)
                {
                  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,z_11 = NULL;
                  p_35 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      o_35 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_35);
                  n_35 = t;
                  t = o_35;
                  if(((t_34 != NULL) && (t_34 != t)))
                    _fail(t);
                  else
                    t_34 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, o_35);
                  z_11 = t;
                  t = SSLsetAnnotations(z_11, n_35);
                  return(t);
                }
                t = fetch_1_0(g_4, t);
                t = term_z_4;
                if(((l_35 != NULL) && (l_35 != t)))
                  _fail(t);
                else
                  l_35 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_34)), term_e_17);
                if(((m_35 != NULL) && (m_35 != t)))
                  _fail(t);
                else
                  m_35 = t;
                t = SSL_printnl(l_35, m_35);
                t = (ATerm) ATmakeAppl(sym__2, term_z_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_34)), term_e_17));
                t = default_system_usage_0_0(t);
                t = term_e_5;
                if(((k_35 != NULL) && (k_35 != t)))
                  _fail(t);
                else
                  k_35 = t;
                t = SSL_exit(k_35);
                ;
                LocalPopChoice(d_17);
              }
            else
              {
                t = c_17;
              }
          }
        }
      if(((u_34 != NULL) && (u_34 != t)))
        _fail(t);
      else
        u_34 = t;
      t = term_z_12;
      if(((w_34 != NULL) && (w_34 != t)))
        _fail(t);
      else
        w_34 = t;
      t = SSL_table_destroy(w_34);
      t = u_34;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL;
  t = parse_options_1_0(m_96, t);
  u_35 = t;
  t = term_f_17;
  x_35 = t;
  t = SSL_table_create(x_35);
  t = term_f_17;
  v_35 = t;
  t = term_g_17;
  w_35 = t;
  t = SSL_table_put(v_35, w_35, u_35);
  t = u_35;
  t = o_96(t);
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_96, t);
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        {
          ATerm j_17 = t;
          int k_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_96(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_17);
            }
          else
            {
              t = j_17;
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
ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL;
  t = term_l_17;
  y_35 = t;
  t = term_f_2;
  z_35 = t;
  t = term_n_17;
  t = a_6(y_35, z_35, t);
  t = term_o_17;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL;
  a_36 = t;
  t = term_k_13;
  t = get_config_0_0(t);
  b_36 = t;
  t = term_z_4;
  c_36 = t;
  t = (ATerm) ATinsert(ATempty, b_36);
  d_36 = t;
  t = SSL_printnl(c_36, d_36);
  t = a_36;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_95(t);
        ;
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
              t = input_option_0_0(t);
              ;
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
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(v_17);
                  }
                else
                  {
                    t = u_17;
                    {
                      ATerm w_17 = t;
                      int z_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_4, s_4, t_4, t);
                          ;
                          LocalPopChoice(z_17);
                        }
                      else
                        {
                          t = w_17;
                          {
                            ATerm a_18 = t;
                            int b_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_18);
                              }
                            else
                              {
                                t = a_18;
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
    ATerm e_36 = NULL,f_36 = NULL,i_36 = NULL;
    f_36 = t;
    {
      ATerm c_18 = t;
      int d_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_36 != NULL) && (e_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_36 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_4, t);
          ;
          LocalPopChoice(d_18);
        }
      else
        {
          t = c_18;
          t = term_e_18;
          e_36 = t;
        }
      t = not_null(e_36);
      t = ReadFromFile_0_0(t);
      if(((i_36 != NULL) && (i_36 != t)))
        _fail(t);
      else
        i_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_36, i_36);
      t = apply_strategy_1_0(v_95, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(h_4, x_95, i_4, j_4, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,d_12 = NULL;
  i_37 = t;
  if(match_cons(t, sym__2))
    {
      f_37 = ATgetArgument(t, 0);
      g_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_37);
  e_37 = t;
  t = g_37;
  t = bottomup_1_0(y_4, t);
  h_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_37, h_37);
  d_12 = t;
  t = SSLsetAnnotations(d_12, e_37);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
  l_37 = t;
  if(match_cons(t, sym_appl_2))
    {
      j_37 = ATgetArgument(t, 0);
      k_37 = ATgetArgument(t, 1);
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_37;
            t = m_5(j_37, k_37, t);
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            t = l_37;
          }
      }
    }
  else
    {
      t = l_37;
    }
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = unflatten_list_0_0(t);
        ;
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
      }
    d_38 = t;
    if(match_cons(t, sym_appl_2))
      {
        t_37 = ATgetArgument(t, 0);
        c_38 = ATgetArgument(t, 1);
        t = t_37;
        if(match_cons(t, sym_prod_3))
          {
            u_37 = ATgetArgument(t, 0);
            y_37 = ATgetArgument(t, 1);
            b_38 = ATgetArgument(t, 2);
            t = b_38;
            if(match_cons(t, sym_no_attrs_0))
              {
                t = y_37;
                if(match_cons(t, sym_cf_1))
                  {
                    z_37 = ATgetArgument(t, 0);
                    t = z_37;
                    if(match_cons(t, sym_opt_1))
                      {
                        a_38 = ATgetArgument(t, 0);
                        t = a_38;
                        if(match_cons(t, sym_layout_0))
                          {
                            t = u_37;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                v_37 = ATgetFirst((ATermList) t);
                                x_37 = (ATerm) ATgetNext((ATermList) t);
                                t = x_37;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    t = v_37;
                                    if(match_cons(t, sym_cf_1))
                                      {
                                        w_37 = ATgetArgument(t, 0);
                                        t = w_37;
                                        if(match_cons(t, sym_layout_0))
                                          {
                                            ATerm k_18 = t;
                                            int l_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = d_38;
                                                t = l_5(c_38, t);
                                                ;
                                                LocalPopChoice(l_18);
                                              }
                                            else
                                              {
                                                t = k_18;
                                                t = d_38;
                                              }
                                          }
                                        else
                                          {
                                            t = d_38;
                                          }
                                      }
                                    else
                                      {
                                        t = d_38;
                                      }
                                  }
                                else
                                  {
                                    t = d_38;
                                  }
                              }
                            else
                              {
                                t = d_38;
                              }
                          }
                        else
                          {
                            t = d_38;
                          }
                      }
                    else
                      {
                        t = d_38;
                      }
                  }
                else
                  {
                    t = d_38;
                  }
              }
            else
              {
                t = d_38;
              }
          }
        else
          {
            t = d_38;
          }
      }
    else
      {
        t = d_38;
      }
    {
      ATerm m_18 = t;
      int n_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = unflatten_lexical_0_0(t);
          ;
          LocalPopChoice(n_18);
        }
      else
        {
          t = m_18;
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
