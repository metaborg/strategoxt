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
ATerm term_n_19;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_t_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_w_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_z_13;
ATerm term_o_13;
ATerm term_e_13;
ATerm term_x_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_x_10;
ATerm term_n_10;
ATerm term_g_10;
ATerm term_a_10;
ATerm term_l_9;
ATerm term_d_9;
ATerm term_a_9;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_g_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_x_1;
void init_constant_terms (void)
{
  ATprotect(&(term_x_1));
  term_x_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(255);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_range_2, term_s_6, term_t_6);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_lex_1, term_a_8);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_cf_1, term_a_8);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_left_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_assoc_1, term_o_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_opt_1, term_a_8);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_cf_1, term_q_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, term_d_11, term_s_6);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_6);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_x_1);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym__2, term_u_11, term_v_11);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("This tool explodes an AsFix2ME term to a valid AsFix2 term. Explosion involes\n", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattening of lists, layout, literals, and lexicals.\n\n", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Observe that the structure of lexicals cannot be restored. Lexicals are\n", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattened into left linear binary trees.", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_i_15, term_x_1);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_x_1);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym__2, term_o_13, term_x_1);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_t_17, term_x_1);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_stdin_0);
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
ATerm list_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm list_some_1_0 (ATerm r_91 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm m_5 (ATerm y_28, ATerm z_28, ATerm);
ATerm bottomup_1_0 (ATerm w_85 (ATerm), ATerm);
ATerm _2_0 (ATerm m_65 (ATerm), ATerm n_65 (ATerm), ATerm);
ATerm p_5 (ATerm f_51, ATerm g_51, ATerm);
ATerm q_5 (ATerm t_54, ATerm u_54, ATerm);
ATerm s_5 (ATerm d_104 (ATerm), ATerm p_455, ATerm x_54, ATerm);
ATerm r_5 (ATerm p_54, ATerm q_54, ATerm);
ATerm d_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_107 (ATerm), ATerm);
ATerm z_15 (ATerm l_15, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm t_5 (ATerm v_54, ATerm);
ATerm u_5 (ATerm h_51, ATerm i_51, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm o_5 (ATerm v_45, ATerm w_45, ATerm);
ATerm debug_1_0 (ATerm b_104 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_105 (ATerm), ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm x_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm h_3 (ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm a_6 (ATerm w_55, ATerm x_55, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm y_5 (ATerm u_60, ATerm v_60, ATerm t_60, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_5 (ATerm f_48, ATerm g_48, ATerm);
ATerm foldr_2_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_105 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm need_help_1_0 (ATerm d_108 (ATerm), ATerm);
ATerm map_1_0 (ATerm m_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm x_5 (ATerm l_62, ATerm m_62, ATerm);
ATerm Program_1_0 (ATerm r_75 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm s_75 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm g_110 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm d_5 (ATerm);
ATerm parse_options_1_0 (ATerm f_110 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm n_5 (ATerm);
ATerm w_5 (ATerm);
ATerm z_5 (ATerm);
ATerm c_6 (ATerm);
ATerm iowrap_3_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,n_0 = NULL,o_0 = NULL,p_0 = NULL;
  b_0 = t;
  t = term_x_1;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_j_6;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_6), f_0), term_k_6);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_o_6;
  p_0 = t;
  t = SSL_exit(p_0);
  t = b_0;
  return(t);
}
ATerm k_5 (ATerm k_31, ATerm l_31, ATerm m_31, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, k_31)), (ATerm)ATmakeAppl(sym_cf_1, k_31), term_r_6), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_u_6))))), (ATerm)ATmakeAppl(sym_lex_1, k_31), term_r_6), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, l_31, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_u_6)))), term_r_6), m_31))));
  return(t);
}
ATerm unflatten_lexical_0_0 (ATerm t)
{
  ATerm q_0 = NULL,r_0 = NULL,s_0 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm v_6 = ATgetArgument(t, 0);
      if(match_cons(v_6, sym_prod_3))
        {
          ATerm x_6 = ATgetArgument(v_6, 0);
          if(((ATgetType(x_6) == AT_LIST) && !(ATisEmpty(x_6))))
            {
              ATerm a_7 = ATgetFirst((ATermList) x_6);
              if(match_cons(a_7, sym_lex_1))
                {
                  q_0 = ATgetArgument(a_7, 0);
                }
              else
                _fail(t);
              {
                ATerm b_7 = (ATerm) ATgetNext((ATermList) x_6);
                if(((ATgetType(b_7) != AT_LIST) || !(ATisEmpty(b_7))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm y_6 = ATgetArgument(v_6, 1);
            if(match_cons(y_6, sym_cf_1))
              {
                if((q_0 != ATgetArgument(y_6, 0)))
                  {
                    _fail(ATgetArgument(y_6, 0));
                  }
              }
            else
              _fail(t);
          }
          {
            ATerm z_6 = ATgetArgument(v_6, 2);
            if(!(match_cons(z_6, sym_no_attrs_0)))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm w_6 = ATgetArgument(t, 1);
        if(((ATgetType(w_6) == AT_LIST) && !(ATisEmpty(w_6))))
          {
            ATerm c_7 = ATgetFirst((ATermList) w_6);
            if(match_cons(c_7, sym_appl_2))
              {
                ATerm e_7 = ATgetArgument(c_7, 0);
                if(match_cons(e_7, sym_prod_3))
                  {
                    r_0 = ATgetArgument(e_7, 0);
                    {
                      ATerm f_7 = ATgetArgument(e_7, 1);
                      if(match_cons(f_7, sym_iter_star_1))
                        {
                          ATerm h_7 = ATgetArgument(f_7, 0);
                          if(match_cons(h_7, sym_char_class_1))
                            {
                              ATerm i_7 = ATgetArgument(h_7, 0);
                              if(((ATgetType(i_7) == AT_LIST) && !(ATisEmpty(i_7))))
                                {
                                  ATerm j_7 = ATgetFirst((ATermList) i_7);
                                  if(match_cons(j_7, sym_range_2))
                                    {
                                      ATerm l_7 = ATgetArgument(j_7, 0);
                                      if(((ATgetType(l_7) != AT_INT) || (ATgetInt((ATermInt) l_7) != 0)))
                                        _fail(t);
                                      {
                                        ATerm p_7 = ATgetArgument(j_7, 1);
                                        if(((ATgetType(p_7) != AT_INT) || (ATgetInt((ATermInt) p_7) != 255)))
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm k_7 = (ATerm) ATgetNext((ATermList) i_7);
                                    if(((ATgetType(k_7) != AT_LIST) || !(ATisEmpty(k_7))))
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
                      ATerm g_7 = ATgetArgument(e_7, 2);
                      if(!(match_cons(g_7, sym_no_attrs_0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                s_0 = ATgetArgument(c_7, 1);
              }
            else
              _fail(t);
            {
              ATerm d_7 = (ATerm) ATgetNext((ATermList) w_6);
              if(((ATgetType(d_7) != AT_LIST) || !(ATisEmpty(d_7))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_5(q_0, r_0, s_0, t);
  return(t);
}
ATerm MkLayoutCharacter_0_0 (ATerm t)
{
  ATerm w_0 = NULL;
  w_0 = t;
  {
    ATerm r_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_is_int(w_0);
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_b_8), term_g_8, term_r_6), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_u_6))), term_b_8, term_r_6), (ATerm) ATinsert(ATempty, w_0))));
        ;
        LocalPopChoice(z_7);
      }
    else
      {
        t = r_7;
        {
          ATerm h_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_0 = NULL,b_1 = NULL,c_1 = NULL;
              if(match_cons(t, sym_appl_2))
                {
                  z_0 = ATgetArgument(t, 0);
                  {
                    ATerm j_8 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = z_0;
              if(match_cons(t, sym_prod_3))
                {
                  ATerm k_8 = ATgetArgument(t, 0);
                  b_1 = ATgetArgument(t, 1);
                  {
                    ATerm n_8 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = b_1;
              if(match_cons(t, sym_lex_1))
                {
                  c_1 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_b_8), term_g_8, term_r_6), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, c_1)), term_b_8, term_r_6), (ATerm) ATinsert(ATempty, w_0))));
                }
              else
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      c_1 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_b_8), term_g_8, term_r_6), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, c_1)), term_b_8, term_r_6), (ATerm) ATinsert(ATempty, w_0))));
                }
              ;
              LocalPopChoice(i_8);
            }
          else
            {
              t = h_8;
            }
        }
      }
  }
  return(t);
}
ATerm MkLayoutConsList_0_0 (ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_1 = ATgetFirst((ATermList) t);
      k_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_1;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_1;
      t = MkLayoutCharacter_0_0(t);
    }
  else
    {
      ATerm v_1 = NULL,w_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_1 = ATgetFirst((ATermList) t);
          m_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_1;
      t = MkLayoutCharacter_0_0(t);
      v_1 = t;
      t = l_1;
      t = MkLayoutCharacter_0_0(t);
      w_1 = t;
      t = (ATerm) ATinsert(CheckATermList(m_1), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_g_8), term_g_8), term_g_8, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_p_8))), (ATerm) ATinsert(ATinsert(ATempty, w_1), v_1)));
      t = MkLayoutConsList_0_0(t);
    }
  return(t);
}
ATerm l_5 (ATerm a_31, ATerm t)
{
  ATerm y_1 = NULL;
  t = a_31;
  t = MkLayoutConsList_0_0(t);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_g_8), term_r_8, term_r_6), (ATerm) ATinsert(ATempty, y_1));
  return(t);
}
ATerm MkCfConsList_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm e_2 = NULL;
  ATerm h_1 (ATerm t)
  {
    ATerm f_2 = NULL,g_2 = NULL;
    if(((e_2 != NULL) && (e_2 != t)))
      _fail(t);
    else
      e_2 = t;
    t = term_x_1;
    t = t_83(t);
    f_2 = t;
    t = term_x_1;
    t = t_83(t);
    g_2 = t;
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, f_2)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, g_2)), term_r_6), (ATerm) ATinsert(ATempty, not_null(e_2)));
    return(t);
  }
  t = Cons_2_0(h_1, _id, t);
  {
    ATerm i_4 (ATerm t)
    {
      ATerm p_2 = NULL,v_2 = NULL,w_2 = NULL,i_3 = NULL,j_3 = NULL,l_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_2 = ATgetFirst((ATermList) t);
          v_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_2;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = p_2;
        }
      else
        {
          ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,e_4 = NULL,g_4 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_2 = ATgetFirst((ATermList) t);
              i_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_3;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_3 = ATgetFirst((ATermList) t);
              l_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = term_x_1;
          t = t_83(t);
          z_3 = t;
          t = term_x_1;
          t = t_83(t);
          a_4 = t;
          t = term_x_1;
          t = t_83(t);
          b_4 = t;
          t = term_x_1;
          t = t_83(t);
          e_4 = t;
          t = term_x_1;
          t = t_83(t);
          g_4 = t;
          t = (ATerm) ATinsert(CheckATermList(l_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, a_4))), term_r_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, z_3))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, b_4)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_p_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, e_4)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, g_4)), term_r_6), (ATerm) ATinsert(ATempty, j_3))), w_2), p_2)));
          t = i_4(t);
        }
      return(t);
    }
    t = i_4(t);
  }
  return(t);
}
ATerm MkCfConsList_2_0 (ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm t)
{
  ATerm s_4 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm t_4 = NULL,v_4 = NULL,x_4 = NULL;
    if(((s_4 != NULL) && (s_4 != t)))
      _fail(t);
    else
      s_4 = t;
    t = term_x_1;
    t = v_83(t);
    t_4 = t;
    t = term_x_1;
    t = v_83(t);
    v_4 = t;
    t = term_x_1;
    t = w_83(t);
    x_4 = t;
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, t_4)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, v_4, x_4)), term_r_6), (ATerm) ATinsert(ATempty, not_null(s_4)));
    return(t);
  }
  t = Cons_2_0(i_1, _id, t);
  {
    ATerm y_7 (ATerm t)
    {
      ATerm b_5 = NULL,c_5 = NULL,g_5 = NULL,b_6 = NULL,d_6 = NULL,e_6 = NULL,l_6 = NULL,m_6 = NULL,p_6 = NULL,q_6 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_5 = ATgetFirst((ATermList) t);
          c_5 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_5;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = b_5;
        }
      else
        {
          ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,q_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_5 = ATgetFirst((ATermList) t);
              b_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_6;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_6 = ATgetFirst((ATermList) t);
              e_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = e_6;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_6 = ATgetFirst((ATermList) t);
              m_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_6;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_6 = ATgetFirst((ATermList) t);
              q_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = term_x_1;
          t = v_83(t);
          m_7 = t;
          t = term_x_1;
          t = w_83(t);
          n_7 = t;
          t = term_x_1;
          t = w_83(t);
          o_7 = t;
          t = term_x_1;
          t = v_83(t);
          q_7 = t;
          t = term_x_1;
          t = w_83(t);
          s_7 = t;
          t = term_x_1;
          t = v_83(t);
          t_7 = t;
          t = term_x_1;
          t = w_83(t);
          u_7 = t;
          t = term_x_1;
          t = v_83(t);
          v_7 = t;
          t = term_x_1;
          t = v_83(t);
          w_7 = t;
          t = term_x_1;
          t = w_83(t);
          x_7 = t;
          t = (ATerm) ATinsert(CheckATermList(q_6), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, q_7, s_7))), term_r_8), o_7), term_r_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, m_7, n_7))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, t_7, u_7)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_p_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, v_7)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, w_7, x_7)), term_r_6), (ATerm) ATinsert(ATempty, p_6))), l_6), d_6), g_5), b_5)));
          t = y_7(t);
        }
      return(t);
    }
    t = y_7(t);
  }
  return(t);
}
ATerm MkLexConsList_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm m_9 (ATerm t)
  {
    ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_8 = ATgetFirst((ATermList) t);
        d_8 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = d_8;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        ATerm l_8 = NULL,m_8 = NULL;
        t = term_x_1;
        t = y_83(t);
        l_8 = t;
        t = term_x_1;
        t = y_83(t);
        m_8 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, l_8)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, m_8)), term_r_6), (ATerm) ATinsert(ATempty, c_8));
      }
    else
      {
        ATerm x_8 = NULL,z_8 = NULL,e_9 = NULL,f_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_8 = ATgetFirst((ATermList) t);
            f_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_x_1;
        t = y_83(t);
        x_8 = t;
        t = term_x_1;
        t = y_83(t);
        z_8 = t;
        t = term_x_1;
        t = y_83(t);
        e_9 = t;
        t = term_x_1;
        t = y_83(t);
        f_9 = t;
        t = term_x_1;
        t = y_83(t);
        i_9 = t;
        t = term_x_1;
        t = y_83(t);
        j_9 = t;
        t = term_x_1;
        t = y_83(t);
        k_9 = t;
        t = (ATerm) ATinsert(CheckATermList(f_8), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, z_8))), (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, x_8))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, e_9)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_p_8))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, j_9)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, k_9)), term_r_6), (ATerm) ATinsert(ATempty, e_8))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, f_9)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, i_9)), term_r_6), (ATerm) ATinsert(ATempty, c_8)))));
        t = m_9(t);
      }
    return(t);
  }
  t = m_9(t);
  return(t);
}
ATerm unflatten_list_0_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,i_10 = NULL,k_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      i_10 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10;
  if(match_cons(t, sym_list_1))
    {
      k_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_10;
  if(match_cons(t, sym_iter_1))
    {
      o_10 = ATgetArgument(t, 0);
      t = q_10;
      {
        ATerm n_1 (ATerm t)
        {
          t = o_10;
          return(t);
        }
        t = MkLexConsList_1_0(n_1, t);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          o_10 = ATgetArgument(t, 0);
          t = q_10;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_10 = ATgetFirst((ATermList) t);
              d_10 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm a_11 = NULL;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_iter_1, o_10)), (ATerm) ATinsert(CheckATermList(d_10), c_10));
                t = unflatten_list_0_0(t);
                a_11 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, o_10))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, o_10)), term_r_6), (ATerm) ATinsert(ATempty, a_11));
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, o_10)), term_r_6), (ATerm) ATempty);
            }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              o_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_10;
          if(match_cons(t, sym_iter_sep_2))
            {
              p_10 = ATgetArgument(t, 0);
              b_10 = ATgetArgument(t, 1);
              t = q_10;
              {
                ATerm o_1 (ATerm t)
                {
                  t = p_10;
                  return(t);
                }
                ATerm p_1 (ATerm t)
                {
                  t = b_10;
                  return(t);
                }
                t = MkCfConsList_2_0(o_1, p_1, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  p_10 = ATgetArgument(t, 0);
                  b_10 = ATgetArgument(t, 1);
                  t = q_10;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      c_10 = ATgetFirst((ATermList) t);
                      d_10 = (ATerm) ATgetNext((ATermList) t);
                      {
                        ATerm p_11 = NULL;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, p_10, b_10))), (ATerm) ATinsert(CheckATermList(d_10), c_10));
                        t = unflatten_list_0_0(t);
                        p_11 = t;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, p_10, b_10))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, p_10, b_10)), term_r_6), (ATerm) ATinsert(ATempty, p_11));
                      }
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, p_10, b_10)), term_r_6), (ATerm) ATempty);
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      p_10 = ATgetArgument(t, 0);
                      t = q_10;
                      {
                        ATerm q_1 (ATerm t)
                        {
                          t = p_10;
                          return(t);
                        }
                        t = MkCfConsList_1_0(q_1, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          p_10 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = q_10;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          c_10 = ATgetFirst((ATermList) t);
                          d_10 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm z_11 = NULL;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, p_10))), (ATerm) ATinsert(CheckATermList(d_10), c_10));
                            t = unflatten_list_0_0(t);
                            z_11 = t;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, p_10))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, p_10)), term_r_6), (ATerm) ATinsert(ATempty, z_11));
                          }
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, p_10)), term_r_6), (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm list_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(m_0, t);
      ;
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      {
        ATerm q_12 = NULL,r_12 = NULL,t_0 = NULL,v_0 = NULL,e_0 = NULL,i_0 = NULL;
        q_12 = t;
        if(match_cons(t, sym_list_1))
          {
            r_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_12);
        t_0 = t;
        t = r_12;
        t = m_0(t);
        v_0 = t;
        i_0 = t;
        t = (ATerm) ATmakeAppl(sym_list_1, v_0);
        e_0 = t;
        t = SSLsetAnnotations(e_0, t_0);
      }
    }
  return(t);
}
ATerm list_some_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm t_12 (ATerm t)
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_91, _id, t);
        LocalPopChoice(v_8);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm s_1 (ATerm t)
            {
              ATerm w_8 = t;
              int y_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_91(t);
                  ;
                  LocalPopChoice(y_8);
                }
              else
                {
                  t = w_8;
                }
              return(t);
            }
            t = list_1_0(s_1, t);
            return(t);
          }
          t = Cons_2_0(_id, r_1, t);
        }
      }
    else
      {
        t = u_8;
        t = Cons_2_0(_id, t_12, t);
      }
    return(t);
  }
  t = t_12(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm v_12 = NULL,y_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      v_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_explode_string(v_12);
  y_12 = t;
  t = map_1_0(u_1, t);
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, z_12, (ATerm)ATmakeAppl(sym_lit_1, v_12), term_r_6), y_12);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm a_13 = NULL;
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, a_13));
  return(t);
}
ATerm m_5 (ATerm y_28, ATerm z_28, ATerm t)
{
  ATerm u_12 = NULL;
  t = z_28;
  t = list_some_1_0(t_1, t);
  u_12 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, y_28, u_12);
  return(t);
}
ATerm bottomup_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = bottomup_1_0(w_85, t);
    return(t);
  }
  t = SRTS_all(z_1, t);
  t = w_85(t);
  return(t);
}
ATerm _2_0 (ATerm m_65 (ATerm), ATerm n_65 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,u_0 = NULL,x_0 = NULL;
  h_13 = t;
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_13);
  b_13 = t;
  t = c_13;
  t = m_65(t);
  f_13 = t;
  t = d_13;
  t = n_65(t);
  g_13 = t;
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_13, g_13);
  u_0 = t;
  t = SSLsetAnnotations(u_0, b_13);
  return(t);
}
ATerm p_5 (ATerm f_51, ATerm g_51, ATerm t)
{
  ATerm q_13 = NULL;
  t = SSL_fputc(f_51, g_51);
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_13);
  return(t);
}
ATerm q_5 (ATerm t_54, ATerm u_54, ATerm t)
{
  ATerm r_13 = NULL;
  t = SSL_write_term_to_stream_text(t_54, u_54);
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_13);
  return(t);
}
ATerm s_5 (ATerm d_104 (ATerm), ATerm p_455, ATerm x_54, ATerm t)
{
  ATerm s_13 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_455, term_a_9);
  t = open_stream_0_0(t);
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_13, x_54);
  t = d_104(t);
  t = fclose_0_0(t);
  t = x_54;
  return(t);
}
ATerm r_5 (ATerm p_54, ATerm q_54, ATerm t)
{
  ATerm t_13 = NULL;
  t = SSL_write_term_to_stream_baf(p_54, q_54);
  t_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_13);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = fetch_1_0(i_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm y_13 = NULL,a_14 = NULL;
  if(match_cons(t, sym__2))
    {
      y_13 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(j_2, y_13, a_14, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_9 = ATgetArgument(t, 0);
      if(match_cons(b_9, sym_Stream_1))
        {
          d_14 = ATgetArgument(b_9, 0);
        }
      else
        _fail(t);
      e_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(d_14, e_14, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL;
  if(match_cons(t, sym__2))
    {
      f_14 = ATgetArgument(t, 0);
      g_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(l_2, f_14, g_14, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,m_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if(match_cons(c_9, sym_Stream_1))
        {
          i_14 = ATgetArgument(c_9, 0);
        }
      else
        _fail(t);
      j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(i_14, j_14, t);
  h_14 = t;
  t = term_d_9;
  k_14 = t;
  t = h_14;
  if(match_cons(t, sym_Stream_1))
    {
      m_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_9, h_14);
  t = p_5(k_14, m_14, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL;
  v_13 = t;
  {
    ATerm a_2 (ATerm t)
    {
      ATerm g_9 = t;
      int h_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((w_13 != NULL) && (w_13 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_13 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(b_2, t);
          ;
          LocalPopChoice(h_9);
        }
      else
        {
          t = g_9;
          t = term_l_9;
          if(((w_13 != NULL) && (w_13 != t)))
            _fail(t);
          else
            w_13 = t;
        }
      return(t);
    }
    t = _2_0(a_2, _id, t);
    t = v_13;
    {
      ATerm c_2 (ATerm t)
      {
        ATerm x_13 = NULL;
        x_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_13), x_13);
        return(t);
      }
      t = _2_0(_id, c_2, t);
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(d_2, h_2, t);
            ;
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            t = _2_0(_id, k_2, t);
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
  ATerm n_14 = NULL,o_14 = NULL,q_14 = NULL,t_14 = NULL,u_14 = NULL;
  n_14 = t;
  t = dtime_0_0(t);
  t = n_14;
  t = f_107(t);
  o_14 = t;
  t = dtime_0_0(t);
  q_14 = t;
  t = o_14;
  if(match_cons(t, sym__2))
    {
      t_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_14), (ATerm) ATmakeAppl(sym_Runtime_1, q_14)), u_14);
  return(t);
}
ATerm z_15 (ATerm l_15, ATerm t)
{
  t = SSL_fclose(l_15);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_15 = NULL,u_15 = NULL;
  u_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_15 = ATgetArgument(t, 0);
      {
        ATerm p_9 = t;
        int q_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_15);
            ;
            LocalPopChoice(q_9);
          }
        else
          {
            t = p_9;
            t = z_15(u_15, t);
          }
      }
    }
  else
    {
      t = z_15(u_15, t);
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
  ATerm a_16 = NULL;
  t = SSL_fopen(h_51, i_51);
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_16);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_16 = NULL;
  t = SSL_stdin_stream();
  b_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_16);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_16 = NULL;
  t = SSL_stdout_stream();
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_16);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_16 = NULL;
  t = SSL_stderr_stream();
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_16);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm n_16 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      n_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_16;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm r_16 = NULL;
  r_16 = t;
  t = SSL_is_string(r_16);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_9 = ATgetArgument(t, 0);
      ATerm s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_16 = NULL,n_2 = NULL;
        k_16 = t;
        t = SSL_explode_term(k_16);
        if(match_cons(t, sym__2))
          {
            ATerm v_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_9 = ATgetArgument(t, 1);
              if(((ATgetType(w_9) == AT_LIST) && !(ATisEmpty(w_9))))
                {
                  n_2 = ATgetFirst((ATermList) w_9);
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
        t = n_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = n_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = n_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = n_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
        {
          ATerm y_9 = t;
          int z_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_16 = NULL,m_16 = NULL;
              t = _2_0(m_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_16 = ATgetArgument(t, 0);
                  m_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_5(l_16, m_16, t);
              ;
              LocalPopChoice(z_9);
            }
          else
            {
              t = y_9;
              {
                ATerm o_16 = NULL,p_16 = NULL;
                t = _2_0(o_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_16 = ATgetArgument(t, 0);
                    p_16 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_5(o_16, p_16, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,a_17 = NULL;
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_17 = NULL;
      b_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_17, term_g_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      t = debug_1_0(q_2, t);
      _fail(t);
    }
  w_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(a_17, t);
  x_16 = t;
  t = w_16;
  t = fclose_0_0(t);
  t = x_16;
  return(t);
}
ATerm fetch_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm f_17 (ATerm t)
  {
    ATerm h_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(w_91, _id, t);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = h_10;
        t = Cons_2_0(_id, f_17, t);
      }
    return(t);
  }
  t = f_17(t);
  return(t);
}
ATerm o_5 (ATerm v_45, ATerm w_45, ATerm t)
{
  t = SSL_strcat(v_45, w_45);
  return(t);
}
ATerm debug_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,k_17 = NULL;
  g_17 = t;
  t = b_104(t);
  h_17 = t;
  t = term_j_6;
  i_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_17), h_17);
  k_17 = t;
  t = SSL_printnl(i_17, k_17);
  t = g_17;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_n_10;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_17 = NULL;
      q_17 = t;
      t = SSL_is_string(q_17);
      ;
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_2, t);
            ;
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            {
              ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
              u_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_17 = ATgetArgument(t, 0);
                  t = v_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_17 = ATgetArgument(t, 0);
                      t = v_17;
                      {
                        ATerm v_10 = t;
                        int w_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(w_10);
                          }
                        else
                          {
                            t = v_10;
                            t = debug_1_0(s_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_18 = NULL,b_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_17 = ATgetArgument(t, 0);
                          w_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_17;
                      t = eval_config_0_0(t);
                      a_18 = t;
                      t = w_17;
                      t = eval_config_0_0(t);
                      b_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_18, b_18);
                      t = o_5(a_18, b_18, t);
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
  ATerm h_18 = NULL,i_18 = NULL;
  h_18 = t;
  t = term_x_10;
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, h_18);
  t = x_5(i_18, h_18, t);
  {
    ATerm y_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_18 = NULL,k_18 = NULL;
        t = eval_config_0_0(t);
        j_18 = t;
        t = term_x_10;
        k_18 = t;
        t = SSL_table_put(k_18, h_18, j_18);
        t = j_18;
        ;
        LocalPopChoice(z_10);
      }
    else
      {
        t = y_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_18 = NULL,n_18 = NULL;
      l_18 = t;
      t = term_d_11;
      t = get_config_0_0(t);
      n_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_18, term_e_11);
      t = geq_0_0(t);
      t = l_18;
      t = o_105(t);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  if(match_string(t, "-k"))
    {
      t = p_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_18;
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  t = SSL_string_to_int(q_18);
  r_18 = t;
  t = term_f_11;
  s_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, r_18);
  t = a_6(s_18, r_18, t);
  t = q_18;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_2, u_2, x_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm u_18 = NULL;
  u_18 = t;
  if(match_string(t, "-S"))
    {
      t = u_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_18;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL;
  t = term_d_11;
  v_18 = t;
  t = term_s_6;
  w_18 = t;
  t = term_h_11;
  t = a_6(v_18, w_18, t);
  t = term_i_11;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm d_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  t = SSL_string_to_int(x_18);
  y_18 = t;
  t = term_d_11;
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_11, y_18);
  t = a_6(z_18, y_18, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_18);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_k_11;
  return(t);
}
ATerm k_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  t = term_l_11;
  a_19 = t;
  t = term_x_1;
  b_19 = t;
  t = term_m_11;
  t = a_6(a_19, b_19, t);
  t = term_n_11;
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_2, z_2, a_3, t);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_3, e_3, h_3, t);
            ;
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            t = Option_3_0(k_3, m_3, n_3, t);
          }
      }
    }
  return(t);
}
ATerm a_6 (ATerm w_55, ATerm x_55, ATerm t)
{
  ATerm c_19 = NULL;
  t = term_x_10;
  c_19 = t;
  t = SSL_table_put(c_19, w_55, x_55);
  t = (ATerm) ATmakeAppl(sym__3, term_x_10, w_55, x_55);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
      t = term_x_1;
      t = d_0(t);
      h_19 = t;
      t = term_u_11;
      i_19 = t;
      t = term_v_11;
      j_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_11, term_v_11, h_19);
      t = y_5(i_19, j_19, h_19, t);
      _fail(t);
    }
  else
    {
      ATerm m_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_19 = ATgetFirst((ATermList) t);
          g_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_19;
      t = a_0(t);
      t = term_x_1;
      t = c_0(t);
      m_19 = t;
      t = (ATerm) ATinsert(CheckATermList(g_19), m_19);
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm o_19 = NULL;
  o_19 = t;
  if(match_string(t, "-o"))
    {
      t = o_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_19;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL;
  p_19 = t;
  t = term_w_11;
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_11, p_19);
  t = a_6(q_19, p_19, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_19);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_3, p_3, q_3, t);
  return(t);
}
ATerm y_5 (ATerm u_60, ATerm v_60, ATerm t_60, ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_60, v_60);
  {
    ATerm y_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_12 = ATgetArgument(t, 0);
            ATerm c_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_60, v_60);
        t = x_5(u_60, v_60, t);
        ;
        LocalPopChoice(a_12);
      }
    else
      {
        t = y_11;
        t = (ATerm) ATempty;
      }
    t_19 = t;
    t = (ATerm) ATinsert(CheckATermList(t_19), t_60);
    u_19 = t;
    t = SSL_table_put(u_60, v_60, u_19);
    t = s_19;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
      t = term_x_1;
      t = l_0(t);
      f_20 = t;
      t = term_u_11;
      g_20 = t;
      t = term_v_11;
      h_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_11, term_v_11, f_20);
      t = y_5(g_20, h_20, f_20, t);
      _fail(t);
    }
  else
    {
      ATerm l_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_20 = ATgetFirst((ATermList) t);
          c_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_20 = ATgetFirst((ATermList) t);
          e_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_20;
      t = j_0(t);
      t = d_20;
      t = k_0(t);
      l_20 = t;
      t = (ATerm) ATinsert(CheckATermList(e_20), l_20);
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  if(match_string(t, "-i"))
    {
      t = n_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_20;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  o_20 = t;
  t = term_d_12;
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_12, o_20);
  t = a_6(p_20, o_20, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_20);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_e_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, s_3, t_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_1;
  t = whoami_0_0(t);
  q_20 = t;
  t = term_j_6;
  r_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_12), q_20);
  s_20 = t;
  t = SSL_printnl(r_20, s_20);
  t = term_o_6;
  t_20 = t;
  t = SSL_exit(t_20);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_12;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_5 (ATerm f_48, ATerm g_48, ATerm t)
{
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_48, g_48);
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      t = SSL_addr(f_48, g_48);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_97(t);
      ;
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      {
        ATerm w_20 = NULL,x_20 = NULL,a_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_20 = ATgetFirst((ATermList) t);
            x_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_20;
        t = foldr_2_0(p_97, q_97, t);
        a_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_20, a_21);
        t = q_97(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym__2))
    {
      f_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(f_3, g_3, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_21 = NULL,b_3 = NULL,c_3 = NULL;
  t = times_0_0(t);
  b_3 = t;
  t = SSL_explode_term(b_3);
  if(match_cons(t, sym__2))
    {
      ATerm l_12 = ATgetArgument(t, 0);
      c_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_3;
  t = foldr_2_0(u_3, v_3, t);
  d_21 = t;
  t = SSL_TicksToSeconds(d_21);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  if(match_cons(t, sym__2))
    {
      p_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_21;
        if((p_21 != t))
          {
            _fail(t);
          }
        t = o_21;
        ;
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        t = (ATerm) ATmakeAppl(sym__2, p_21, q_21);
        {
          ATerm o_12 = t;
          int p_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_21, q_21);
              ;
              LocalPopChoice(p_12);
            }
          else
            {
              t = o_12;
              t = SSL_gtr(p_21, q_21);
            }
          t = (ATerm) ATmakeAppl(sym__2, p_21, q_21);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_105 (ATerm), ATerm t)
{
  ATerm s_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_21 = NULL,v_21 = NULL;
      t_21 = t;
      t = term_d_11;
      t = get_config_0_0(t);
      v_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_21, term_o_6);
      t = geq_0_0(t);
      t = t_21;
      t = n_105(t);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = s_12;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  t = run_time_0_0(t);
  x_21 = t;
  t = term_x_1;
  t = whoami_0_0(t);
  y_21 = t;
  t = term_j_6;
  z_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_13), x_21), term_x_12), y_21);
  a_22 = t;
  t = SSL_printnl(z_21, a_22);
  t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_13), x_21), term_x_12), y_21));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_6;
  b_22 = t;
  t = SSL_exit(b_22);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_108 (ATerm), ATerm t)
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      t = fetch_1_0(x_3, t);
    }
  t = d_108(t);
  return(t);
}
ATerm map_1_0 (ATerm m_91 (ATerm), ATerm t)
{
  ATerm c_22 (ATerm t)
  {
    ATerm p_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(u_13);
      }
    else
      {
        t = p_13;
        t = Cons_2_0(m_91, c_22, t);
      }
    return(t);
  }
  t = c_22(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_22 = ATgetFirst((ATermList) t);
      f_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_22 = NULL,k_22 = NULL;
        t = f_22;
        t = h_0(t);
        j_22 = t;
        t = e_22;
        t = g_0(t);
        k_22 = t;
        t = f_22;
        {
          ATerm y_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_22), k_22);
            return(t);
          }
          t = reverse_acc_2_0(g_0, y_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_1;
      t = h_0(t);
    }
  return(t);
}
ATerm x_5 (ATerm l_62, ATerm m_62, ATerm t)
{
  t = SSL_table_get(l_62, m_62);
  return(t);
}
ATerm Program_1_0 (ATerm r_75 (ATerm), ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,y_0 = NULL,a_1 = NULL;
  o_22 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_22);
  l_22 = t;
  t = m_22;
  t = r_75(t);
  n_22 = t;
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_22);
  y_0 = t;
  t = SSLsetAnnotations(y_0, l_22);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm u_22 = NULL;
  u_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_22), term_z_13);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_12;
      t = get_config_0_0(t);
      r_22 = t;
      ;
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      {
        ATerm c_4 (ATerm t)
        {
          ATerm d_4 (ATerm t)
          {
            if(((r_22 != NULL) && (r_22 != t)))
              _fail(t);
            else
              r_22 = t;
            return(t);
          }
          t = Program_1_0(d_4, t);
          return(t);
        }
        t = fetch_1_0(c_4, t);
      }
    }
  {
    ATerm l_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_14), not_null(r_22)), term_r_14);
        t = echo_0_0(t);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = l_14;
      }
    t = term_v_14;
    t = echo_0_0(t);
    t = term_u_11;
    s_22 = t;
    t = term_v_11;
    t_22 = t;
    t = term_w_14;
    t = x_5(s_22, t_22, t);
    t = reverse_acc_2_0(_id, f_4, t);
    t = map_1_0(h_4, t);
    {
      ATerm x_14 = t;
      int y_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_15), term_c_15), term_b_15), term_a_15), term_z_14);
          t = echo_0_0(t);
          ;
          LocalPopChoice(y_14);
        }
      else
        {
          t = x_14;
        }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm s_75 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,d_1 = NULL,e_1 = NULL;
  y_22 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      w_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_22);
  v_22 = t;
  t = w_22;
  t = s_75(t);
  x_22 = t;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, x_22);
  d_1 = t;
  t = SSLsetAnnotations(d_1, v_22);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
  c_23 = t;
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_23;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_15 = ATgetFirst((ATermList) t);
                ATerm h_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_23;
          }
        ;
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        t = (ATerm) ATinsert(ATempty, c_23);
      }
    d_23 = t;
    t = term_l_9;
    e_23 = t;
    t = SSL_printnl(e_23, d_23);
    t = c_23;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_12;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL;
  t = term_i_15;
  i_23 = t;
  t = term_x_1;
  j_23 = t;
  t = term_j_15;
  t = a_6(i_23, j_23, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL;
  t = term_i_15;
  k_23 = t;
  t = term_x_1;
  l_23 = t;
  t = term_j_15;
  t = a_6(k_23, l_23, t);
  t = term_m_15;
  m_23 = t;
  t = term_x_1;
  n_23 = t;
  t = term_n_15;
  t = a_6(m_23, n_23, t);
  t = term_o_15;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_p_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_4, k_4, m_4, t);
      ;
      LocalPopChoice(s_15);
    }
  else
    {
      t = r_15;
      t = Option_3_0(n_4, o_4, q_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,f_1 = NULL,g_1 = NULL;
  t_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_23 = ATgetFirst((ATermList) t);
      q_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_23);
  o_23 = t;
  t = p_23;
  t = b_70(t);
  r_23 = t;
  t = q_23;
  t = c_70(t);
  s_23 = t;
  g_1 = t;
  t = (ATerm) ATinsert(CheckATermList(s_23), r_23);
  f_1 = t;
  t = SSLsetAnnotations(f_1, o_23);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL;
  y_23 = t;
  t = term_g_12;
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_12, y_23);
  t = a_6(z_23, y_23, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, y_23);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_110 (ATerm), ATerm t)
{
  ATerm x_23 = NULL;
  x_23 = t;
  {
    ATerm t_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_15;
        t = g_110(t);
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = t_15;
      }
    t = x_23;
    {
      ATerm u_4 (ATerm t)
      {
        ATerm x_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_16 = t;
            int f_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(f_16);
              }
            else
              {
                t = e_16;
                t = g_110(t);
                t = Cons_2_0(_id, u_4, t);
              }
            ;
            LocalPopChoice(y_15);
          }
        else
          {
            t = x_15;
            {
              ATerm b_24 = NULL,c_24 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_24 = ATgetFirst((ATermList) t);
                  c_24 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_24), (ATerm) ATmakeAppl(sym_Undefined_1, b_24));
            }
          }
        return(t);
      }
      t = Cons_2_0(r_4, u_4, t);
    }
  }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  if(match_string(t, "--help"))
    {
      t = q_24;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_24;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_24;
        }
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL;
  t = term_o_13;
  r_24 = t;
  t = term_x_1;
  s_24 = t;
  t = term_g_16;
  t = a_6(r_24, s_24, t);
  t = term_h_16;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_i_16;
  return(t);
}
ATerm d_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_110 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
  j_24 = t;
  t = term_u_11;
  m_24 = t;
  t = term_v_11;
  n_24 = t;
  t = (ATerm) ATempty;
  o_24 = t;
  t = SSL_table_put(m_24, n_24, o_24);
  t = j_24;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm j_16 = t;
      int q_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_110(t);
          ;
          LocalPopChoice(q_16);
        }
      else
        {
          t = j_16;
          {
            ATerm s_16 = t;
            int t_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_4, z_4, a_5, t);
                ;
                LocalPopChoice(t_16);
              }
            else
              {
                t = s_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_4, t);
    {
      ATerm u_16 = t;
      int v_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_24 = NULL;
          z_24 = t;
          {
            ATerm y_16 = t;
            int z_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_4 = NULL;
                t = z_24;
                {
                  ATerm c_17 = t;
                  int d_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_o_13;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(d_17);
                    }
                  else
                    {
                      t = c_17;
                      t = fetch_1_0(d_5, t);
                    }
                  t = z_24;
                  t = default_system_usage_0_0(t);
                  t = term_s_6;
                  l_4 = t;
                  t = SSL_exit(l_4);
                }
                ;
                LocalPopChoice(z_16);
              }
            else
              {
                t = y_16;
                {
                  ATerm p_4 = NULL;
                  t = term_i_15;
                  t = get_config_0_0(t);
                  t = z_24;
                  t = default_system_about_0_0(t);
                  t = term_s_6;
                  p_4 = t;
                  t = SSL_exit(p_4);
                }
              }
          }
          ;
          LocalPopChoice(v_16);
        }
      else
        {
          t = u_16;
          {
            ATerm e_17 = t;
            int j_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
                ATerm e_5 (ATerm t)
                {
                  ATerm f_5 (ATerm t)
                  {
                    if(((k_24 != NULL) && (k_24 != t)))
                      _fail(t);
                    else
                      k_24 = t;
                    return(t);
                  }
                  t = Undefined_1_0(f_5, t);
                  return(t);
                }
                t = fetch_1_0(e_5, t);
                t = term_j_6;
                a_25 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_24)), term_l_17);
                b_25 = t;
                t = SSL_printnl(a_25, b_25);
                t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_24)), term_l_17));
                t = default_system_usage_0_0(t);
                t = term_o_6;
                c_25 = t;
                t = SSL_exit(c_25);
                ;
                LocalPopChoice(j_17);
              }
            else
              {
                t = e_17;
              }
          }
        }
      l_24 = t;
      t = term_u_11;
      p_24 = t;
      t = SSL_table_destroy(p_24);
      t = l_24;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  t = parse_options_1_0(f_108, t);
  f_25 = t;
  t = term_m_17;
  g_25 = t;
  t = SSL_table_create(g_25);
  t = term_m_17;
  h_25 = t;
  t = term_n_17;
  i_25 = t;
  t = SSL_table_put(h_25, i_25, f_25);
  t = f_25;
  t = h_108(t);
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_108, t);
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        {
          ATerm r_17 = t;
          int s_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_108(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_17);
            }
          else
            {
              t = r_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = if_verbose2_1_0(c_6, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL;
  t = term_t_17;
  j_25 = t;
  t = term_x_1;
  k_25 = t;
  t = term_x_17;
  t = a_6(j_25, k_25, t);
  t = term_y_17;
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_z_17;
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
  l_25 = t;
  t = term_g_12;
  t = get_config_0_0(t);
  m_25 = t;
  t = term_j_6;
  n_25 = t;
  t = (ATerm) ATinsert(ATempty, m_25);
  o_25 = t;
  t = SSL_printnl(n_25, o_25);
  t = l_25;
  return(t);
}
ATerm iowrap_3_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_107(t);
        ;
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
        {
          ATerm e_18 = t;
          int f_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(f_18);
            }
          else
            {
              t = e_18;
              {
                ATerm g_18 = t;
                int m_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(m_18);
                  }
                else
                  {
                    t = g_18;
                    {
                      ATerm o_18 = t;
                      int t_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_5, w_5, z_5, t);
                          ;
                          LocalPopChoice(t_18);
                        }
                      else
                        {
                          t = o_18;
                          {
                            ATerm d_19 = t;
                            int e_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(e_19);
                              }
                            else
                              {
                                t = d_19;
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
  ATerm j_5 (ATerm t)
  {
    ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
    p_25 = t;
    {
      ATerm k_19 = t;
      int l_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((q_25 != NULL) && (q_25 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_6, t);
          ;
          LocalPopChoice(l_19);
        }
      else
        {
          t = k_19;
          t = term_n_19;
          q_25 = t;
        }
      t = not_null(q_25);
      t = ReadFromFile_0_0(t);
      r_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_25, r_25);
      t = apply_strategy_1_0(o_107, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(h_5, q_107, i_5, j_5, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = _2_0(_id, h_6, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = bottomup_1_0(i_6, t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm r_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
      d_26 = t;
      if(match_cons(t, sym_appl_2))
        {
          e_26 = ATgetArgument(t, 0);
          f_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_26;
      t = m_5(e_26, f_26, t);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = r_19;
    }
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = unflatten_list_0_0(t);
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
      }
    {
      ATerm y_19 = t;
      int z_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
          i_26 = t;
          if(match_cons(t, sym_appl_2))
            {
              j_26 = ATgetArgument(t, 0);
              s_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_26;
          if(match_cons(t, sym_prod_3))
            {
              k_26 = ATgetArgument(t, 0);
              o_26 = ATgetArgument(t, 1);
              r_26 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = k_26;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_26 = ATgetFirst((ATermList) t);
              n_26 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_26;
          if(match_cons(t, sym_cf_1))
            {
              m_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_26;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = n_26;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = o_26;
          if(match_cons(t, sym_cf_1))
            {
              p_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_26;
          if(match_cons(t, sym_opt_1))
            {
              q_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_26;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = r_26;
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = i_26;
          t = l_5(s_26, t);
          ;
          LocalPopChoice(z_19);
        }
      else
        {
          t = y_19;
        }
      {
        ATerm a_20 = t;
        int i_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = unflatten_lexical_0_0(t);
            ;
            LocalPopChoice(i_20);
          }
        else
          {
            t = a_20;
          }
      }
    }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_6, _fail, default_usage_0_0, t);
  return(t);
}
