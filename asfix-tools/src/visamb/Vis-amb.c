#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_layout_0;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_opt_1;
Symbol sym_seq_1;
Symbol sym_lit_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_alt_2;
Symbol sym_char_class_1;
Symbol sym_sort_1;
Symbol sym_varsym_1;
Symbol sym_atr_1;
Symbol sym_term_1;
Symbol sym_cons_1;
Symbol sym_bracket_0;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_amb_1;
Symbol sym_flatlex_2;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_parsetree_2;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_amb_abbr_2;
Symbol sym_lexical_1;
Symbol sym_root_1;
Symbol sym_N_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_seq_1 = ATmakeSymbol("seq", 1, ATfalse);
  ATprotectSymbol(sym_seq_1);
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
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_varsym_1 = ATmakeSymbol("varsym", 1, ATfalse);
  ATprotectSymbol(sym_varsym_1);
  sym_atr_1 = ATmakeSymbol("atr", 1, ATfalse);
  ATprotectSymbol(sym_atr_1);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_flatlex_2 = ATmakeSymbol("flatlex", 2, ATfalse);
  ATprotectSymbol(sym_flatlex_2);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_amb_abbr_2 = ATmakeSymbol("amb-abbr", 2, ATfalse);
  ATprotectSymbol(sym_amb_abbr_2);
  sym_lexical_1 = ATmakeSymbol("lexical", 1, ATfalse);
  ATprotectSymbol(sym_lexical_1);
  sym_root_1 = ATmakeSymbol("root", 1, ATfalse);
  ATprotectSymbol(sym_root_1);
  sym_N_2 = ATmakeSymbol("N", 2, ATfalse);
  ATprotectSymbol(sym_N_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_h_14;
ATerm term_a_14;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_q_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_w_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_e_8;
ATerm term_m_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_w_4;
ATerm term_l_4;
ATerm term_b_4;
ATerm term_z_3;
ATerm term_l_3;
ATerm term_k_3;
ATerm term_j_3;
void init_constant_terms (void)
{
  ATprotect(&(term_j_3));
  term_j_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_3));
  term_k_3 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym__2, term_w_4, term_l_4);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_4);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_w_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_w_9);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_w_9);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("The SDF2 implementation caters for arbitrary context-free grammars. That is,\n", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("even for ambiguous grammars the parser will produce a parse trees containing\n", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("a concise encoding of allpossible parses. Ambiguities are represented by\n", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("means of amb nodes that contain a list of possible parse trees at that\n", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("point. For most applications, however, it is desirable to develop\n", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("unambiguous grammars. To aid the grammar writer in detecting and solving the\n", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ambiguities, the visamb tool extracts the ambiguities from a parse tree and\n", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("displays them in a readable format.\n", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_y_11, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__3, term_y_11, term_z_11, (ATerm) ATempty);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_59 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm w_63 (ATerm), ATerm x_63 (ATerm));
ATerm crush_2 (ATerm, ATerm o_65 (ATerm), ATerm p_65 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm i_57 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm get_args_0 (ATerm);
ATerm lit_1 (ATerm, ATerm a_46 (ATerm));
ATerm prod_3 (ATerm, ATerm q_46 (ATerm), ATerm r_46 (ATerm), ATerm s_46 (ATerm));
ATerm MkLex_0 (ATerm);
ATerm cf_1 (ATerm, ATerm w_45 (ATerm));
ATerm lex_1 (ATerm, ATerm x_45 (ATerm));
ATerm Lexical_0 (ATerm);
ATerm get_sort_0 (ATerm);
ATerm Nsplit_2 (ATerm, ATerm y_78 (ATerm), ATerm z_78 (ATerm));
ATerm ProjectAmb_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm abbrev_term_0 (ATerm);
ATerm F_p__0 (ATerm);
ATerm F_0 (ATerm);
ATerm appl_2 (ATerm, ATerm t_46 (ATerm), ATerm u_46 (ATerm));
ATerm yield_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm abbrev_amb_0 (ATerm);
ATerm abbrev_ambs_0 (ATerm);
ATerm amb_1 (ATerm, ATerm v_46 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm d_65 (ATerm), ATerm e_65 (ATerm));
ATerm union_1 (ATerm, ATerm f_65 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm a_64 (ATerm));
ATerm crush_3 (ATerm, ATerm q_65 (ATerm), ATerm r_65 (ATerm), ATerm s_65 (ATerm));
ATerm bu_collect_1 (ATerm, ATerm s_66 (ATerm));
ATerm parsetree_2 (ATerm, ATerm a_47 (ATerm), ATerm b_47 (ATerm));
ATerm collect_ambs_0 (ATerm);
ATerm visamb_0 (ATerm);
ATerm _2 (ATerm, ATerm n_44 (ATerm), ATerm o_44 (ATerm));
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm j_59 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm k_62 (ATerm), ATerm l_62 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_70 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm l_69 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_0 (ATerm));
ATerm Program_1 (ATerm, ATerm h_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_57 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_78 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_56 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_52 (ATerm), ATerm i_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_56 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_56 (ATerm));
ATerm Vis_amb_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_j_3, (ATerm) ATinsert(ATempty, term_k_3));
  {
    t = printnl_0(t);
    {
      t = term_l_3;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm u_2 = NULL,f_3 = NULL,g_3 = NULL;
  u_2 = t;
  t_2 :
  if(match_cons(u_2, sym__2))
    {
      f_3 = ATgetArgument(u_2, 0);
      g_3 = ATgetArgument(u_2, 1);
      {
        t = not_null(f_3);
        {
          ATerm c_0 (ATerm t)
          {
            t = not_null(g_3);
            return(t);
          }
          t = at_end_1(t, c_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_59 (ATerm))
{
  ATerm m_3;
  m_3 = t;
  {
    ATerm p_3 = NULL,r_3 = NULL;
    ATerm n_3;
    n_3 = t;
    {
      ATerm q_3 = NULL;
      t = z_59(t);
      {
        q_3 = t;
        if(((p_3 != NULL) && (p_3 != q_3)))
          _fail(q_3);
        else
          p_3 = q_3;
      }
    }
    t = n_3;
    {
      ATerm s_3 = NULL;
      s_3 = t;
      if(((r_3 != NULL) && (r_3 != s_3)))
        _fail(s_3);
      else
        r_3 = s_3;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_3)), not_null(p_3)));
        t = printnl_0(t);
      }
    }
  }
  t = m_3;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm w_3 = NULL;
  w_3 = t;
  t = SSL_is_string(not_null(w_3));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm o_3 = t;
  int t_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(t_3);
    }
  else
    {
      t = o_3;
      {
        ATerm u_3 = t;
        int v_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, d_0);
            LocalPopChoice(v_3);
          }
        else
          {
            t = u_3;
            {
              ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL;
              f_4 = t;
              e_4 :
              if(match_cons(f_4, sym_Path_1))
                {
                  g_4 = ATgetArgument(f_4, 0);
                  t = not_null(g_4);
                }
              else
                {
                  if(match_cons(f_4, sym_Var_1))
                    {
                      g_4 = ATgetArgument(f_4, 0);
                      {
                        t = not_null(g_4);
                        {
                          ATerm x_3 = t;
                          int y_3 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(y_3);
                            }
                          else
                            {
                              t = x_3;
                              {
                                ATerm g_0 (ATerm t)
                                {
                                  t = term_z_3;
                                  return(t);
                                }
                                t = debug_1(t, g_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(f_4, sym_Prefix_2))
                        {
                          g_4 = ATgetArgument(f_4, 0);
                          h_4 = ATgetArgument(f_4, 1);
                          {
                            ATerm m_4 = NULL,o_4 = NULL;
                            ATerm a_4;
                            a_4 = t;
                            {
                              ATerm n_4 = NULL;
                              t = not_null(g_4);
                              {
                                t = eval_config_0(t);
                                {
                                  n_4 = t;
                                  if(((m_4 != NULL) && (m_4 != n_4)))
                                    _fail(n_4);
                                  else
                                    m_4 = n_4;
                                }
                              }
                            }
                            t = a_4;
                            {
                              ATerm p_4 = NULL;
                              t = not_null(h_4);
                              {
                                t = eval_config_0(t);
                                {
                                  p_4 = t;
                                  if(((o_4 != NULL) && (o_4 != p_4)))
                                    _fail(p_4);
                                  else
                                    o_4 = p_4;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_4), not_null(o_4));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm x_4 = NULL;
  x_4 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_4, not_null(x_4));
    {
      t = table_get_0(t);
      {
        ATerm h_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm c_4;
            c_4 = t;
            {
              ATerm z_4 = NULL;
              ATerm a_5 = NULL;
              a_5 = t;
              if(((z_4 != NULL) && (z_4 != a_5)))
                _fail(a_5);
              else
                z_4 = a_5;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_b_4, not_null(x_4), not_null(z_4));
                t = table_put_0(t);
              }
            }
            t = c_4;
          }
          return(t);
        }
        t = try_1(t, h_0);
      }
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_5 = NULL;
  e_5 = t;
  t = SSL_TicksToSeconds(not_null(e_5));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym__2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      {
        ATerm d_4 = t;
        int i_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_5), not_null(l_5));
            LocalPopChoice(i_4);
          }
        else
          {
            t = d_4;
            t = SSL_addr(not_null(k_5), not_null(l_5));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm w_63 (ATerm), ATerm x_63 (ATerm))
{
  ATerm j_4 = t;
  int k_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_63(t);
      LocalPopChoice(k_4);
    }
  else
    {
      t = j_4;
      {
        ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
        s_5 = t;
        r_5 :
        if(((ATgetType(s_5) == AT_LIST) && ((ATermList) s_5 != ATempty)))
          {
            t_5 = ATgetFirst((ATermList) s_5);
            u_5 = (ATerm) ATgetNext((ATermList) s_5);
            {
              ATerm x_5 = NULL;
              ATerm y_5 = NULL;
              t = not_null(u_5);
              {
                t = foldr_2(t, w_63, x_63);
                {
                  y_5 = t;
                  if(((x_5 != NULL) && (x_5 != y_5)))
                    _fail(y_5);
                  else
                    x_5 = y_5;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), not_null(x_5));
                t = x_63(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm o_65 (ATerm), ATerm p_65 (ATerm))
{
  ATerm f_6 = NULL;
  ATerm h_6 = NULL;
  f_6 = t;
  {
    ATerm i_6 = NULL;
    ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
    t = not_null(f_6);
    {
      i_6 = t;
      {
        t = SSL_explode_term(not_null(i_6));
        {
          k_6 = t;
          e_6 :
          if(match_cons(k_6, sym__2))
            {
              l_6 = ATgetArgument(k_6, 0);
              m_6 = ATgetArgument(k_6, 1);
              if(((h_6 != NULL) && (h_6 != m_6)))
                _fail(m_6);
              else
                h_6 = m_6;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_6);
      t = foldr_2(t, o_65, p_65);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm o_0 (ATerm t)
    {
      t = term_l_4;
      return(t);
    }
    t = crush_2(t, o_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
  s_6 = t;
  r_6 :
  if(match_cons(s_6, sym__2))
    {
      t_6 = ATgetArgument(s_6, 0);
      u_6 = ATgetArgument(s_6, 1);
      {
        ATerm q_4;
        q_4 = t;
        {
          ATerm r_4 = t;
          int s_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_6), not_null(u_6));
              LocalPopChoice(s_4);
            }
          else
            {
              t = r_4;
              t = SSL_gtr(not_null(t_6), not_null(u_6));
            }
        }
        t = q_4;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm a_7 = NULL;
  ATerm t_4 = t;
  int u_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
      b_7 = t;
      z_6 :
      if(match_cons(b_7, sym__2))
        {
          c_7 = ATgetArgument(b_7, 0);
          d_7 = ATgetArgument(b_7, 1);
          {
            if(((a_7 != NULL) && (a_7 != c_7)))
              _fail(c_7);
            else
              a_7 = c_7;
            if(((a_7 != NULL) && (a_7 != d_7)))
              _fail(d_7);
            else
              a_7 = d_7;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_4);
    }
  else
    {
      t = t_4;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm i_57 (ATerm))
{
  ATerm p_0 (ATerm t)
  {
    ATerm v_4;
    v_4 = t;
    {
      ATerm g_7 = NULL;
      ATerm h_7 = NULL;
      t = term_w_4;
      {
        t = get_config_0(t);
        {
          h_7 = t;
          if(((g_7 != NULL) && (g_7 != h_7)))
            _fail(h_7);
          else
            g_7 = h_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_7), term_l_3);
        t = geq_0(t);
      }
    }
    t = v_4;
    t = i_57(t);
    return(t);
  }
  t = try_1(t, p_0);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm l_7 = NULL,n_7 = NULL;
    ATerm y_4;
    y_4 = t;
    {
      ATerm m_7 = NULL;
      t = run_time_0(t);
      {
        m_7 = t;
        if(((l_7 != NULL) && (l_7 != m_7)))
          _fail(m_7);
        else
          l_7 = m_7;
      }
    }
    t = y_4;
    {
      ATerm o_7 = NULL;
      t = term_b_5;
      {
        t = get_config_0(t);
        {
          o_7 = t;
          if(((n_7 != NULL) && (n_7 != o_7)))
            _fail(o_7);
          else
            n_7 = o_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_5), not_null(l_7)), term_c_5), not_null(n_7)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, q_0);
  {
    t = term_l_4;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym__2))
    {
      u_7 = ATgetArgument(t_7, 0);
      v_7 = ATgetArgument(t_7, 1);
      t = SSL_WriteToTextFile(not_null(u_7), not_null(v_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym__2))
    {
      c_8 = ATgetArgument(b_8, 0);
      d_8 = ATgetArgument(b_8, 1);
      t = SSL_WriteToBinaryFile(not_null(c_8), not_null(d_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm l_8 = NULL;
  ATerm f_5;
  f_5 = t;
  {
    ATerm r_0 (ATerm t)
    {
      ATerm g_5 = t;
      int h_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_0 (ATerm t)
          {
            ATerm m_8 = NULL,n_8 = NULL;
            m_8 = t;
            i_8 :
            if(match_cons(m_8, sym_Output_1))
              {
                n_8 = ATgetArgument(m_8, 0);
                if(((l_8 != NULL) && (l_8 != n_8)))
                  _fail(n_8);
                else
                  l_8 = n_8;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, s_0);
          LocalPopChoice(h_5);
        }
      else
        {
          t = g_5;
          {
            ATerm o_8 = NULL;
            t = term_m_5;
            {
              o_8 = t;
              if(((l_8 != NULL) && (l_8 != o_8)))
                _fail(o_8);
              else
                l_8 = o_8;
            }
          }
        }
      return(t);
    }
    t = _2(t, r_0, _id);
  }
  t = f_5;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm u_0 (ATerm t)
      {
        t = not_null(l_8);
        return(t);
      }
      t = split_2(t, u_0, _id);
      return(t);
    }
    t = _2(t, _id, t_0);
    {
      ATerm n_5 = t;
      int o_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_0 (ATerm t)
          {
            ATerm w_0 (ATerm t)
            {
              ATerm p_8 = NULL;
              p_8 = t;
              k_8 :
              if(!(match_cons(p_8, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, w_0);
            return(t);
          }
          t = _2(t, v_0, WriteToBinaryFile_0);
          LocalPopChoice(o_5);
        }
      else
        {
          t = n_5;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm t_8 = NULL;
  t_8 = t;
  t = SSL_int_to_string(not_null(t_8));
  return(t);
}
ATerm get_args_0 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
  y_8 = t;
  x_8 :
  if(match_cons(y_8, sym_appl_2))
    {
      z_8 = ATgetArgument(y_8, 0);
      a_9 = ATgetArgument(y_8, 1);
      t = not_null(a_9);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm a_46 (ATerm))
{
  ATerm j_9 = NULL,k_9 = NULL;
  j_9 = t;
  i_9 :
  if(match_cons(j_9, sym_lit_1))
    {
      k_9 = ATgetArgument(j_9, 0);
      {
        ATerm n_9 = NULL,p_9 = NULL;
        ATerm o_9 = NULL;
        t = SSLgetAnnotations(not_null(j_9));
        {
          o_9 = t;
          if(((n_9 != NULL) && (n_9 != o_9)))
            _fail(o_9);
          else
            n_9 = o_9;
        }
        {
          t = not_null(k_9);
          {
            ATerm r_9 = NULL;
            t = a_46(t);
            {
              p_9 = t;
              {
                ATerm s_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(p_9)), not_null(n_9));
                {
                  s_9 = t;
                  if(((r_9 != NULL) && (r_9 != s_9)))
                    _fail(s_9);
                  else
                    r_9 = s_9;
                }
                t = not_null(r_9);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm prod_3 (ATerm t, ATerm q_46 (ATerm), ATerm r_46 (ATerm), ATerm s_46 (ATerm))
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym_prod_3))
    {
      f_10 = ATgetArgument(e_10, 0);
      g_10 = ATgetArgument(e_10, 1);
      h_10 = ATgetArgument(e_10, 2);
      {
        ATerm m_10 = NULL,o_10 = NULL;
        ATerm n_10 = NULL;
        t = SSLgetAnnotations(not_null(e_10));
        {
          n_10 = t;
          if(((m_10 != NULL) && (m_10 != n_10)))
            _fail(n_10);
          else
            m_10 = n_10;
        }
        {
          t = not_null(f_10);
          {
            ATerm q_10 = NULL;
            t = q_46(t);
            {
              o_10 = t;
              {
                t = not_null(g_10);
                {
                  ATerm s_10 = NULL;
                  t = r_46(t);
                  {
                    q_10 = t;
                    {
                      t = not_null(h_10);
                      {
                        ATerm u_10 = NULL;
                        t = s_46(t);
                        {
                          s_10 = t;
                          {
                            ATerm v_10 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(o_10), not_null(q_10), not_null(s_10)), not_null(m_10));
                            {
                              v_10 = t;
                              if(((u_10 != NULL) && (u_10 != v_10)))
                                _fail(v_10);
                              else
                                u_10 = v_10;
                            }
                            t = not_null(u_10);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkLex_0 (ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym_lexical_1, not_null(d_11));
  return(t);
}
ATerm cf_1 (ATerm t, ATerm w_45 (ATerm))
{
  ATerm l_11 = NULL,m_11 = NULL;
  l_11 = t;
  k_11 :
  if(match_cons(l_11, sym_cf_1))
    {
      m_11 = ATgetArgument(l_11, 0);
      {
        ATerm p_11 = NULL,r_11 = NULL;
        ATerm q_11 = NULL;
        t = SSLgetAnnotations(not_null(l_11));
        {
          q_11 = t;
          if(((p_11 != NULL) && (p_11 != q_11)))
            _fail(q_11);
          else
            p_11 = q_11;
        }
        {
          t = not_null(m_11);
          {
            ATerm t_11 = NULL;
            t = w_45(t);
            {
              r_11 = t;
              {
                ATerm u_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, not_null(r_11)), not_null(p_11));
                {
                  u_11 = t;
                  if(((t_11 != NULL) && (t_11 != u_11)))
                    _fail(u_11);
                  else
                    t_11 = u_11;
                }
                t = not_null(t_11);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm lex_1 (ATerm t, ATerm x_45 (ATerm))
{
  ATerm e_12 = NULL,f_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym_lex_1))
    {
      f_12 = ATgetArgument(e_12, 0);
      {
        ATerm i_12 = NULL,k_12 = NULL;
        ATerm j_12 = NULL;
        t = SSLgetAnnotations(not_null(e_12));
        {
          j_12 = t;
          if(((i_12 != NULL) && (i_12 != j_12)))
            _fail(j_12);
          else
            i_12 = j_12;
        }
        {
          t = not_null(f_12);
          {
            ATerm m_12 = NULL;
            t = x_45(t);
            {
              k_12 = t;
              {
                ATerm n_12 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(k_12)), not_null(i_12));
                {
                  n_12 = t;
                  if(((m_12 != NULL) && (m_12 != n_12)))
                    _fail(n_12);
                  else
                    m_12 = n_12;
                }
                t = not_null(m_12);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Lexical_0 (ATerm t)
{
  ATerm p_5 = t;
  int q_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 (ATerm t)
      {
        ATerm y_0 (ATerm t)
        {
          ATerm a_1 (ATerm t)
          {
            t = lex_1(t, _id);
            return(t);
          }
          t = Cons_2(t, a_1, Nil_0);
          return(t);
        }
        ATerm z_0 (ATerm t)
        {
          t = cf_1(t, _id);
          return(t);
        }
        t = prod_3(t, y_0, z_0, _id);
        return(t);
      }
      t = appl_2(t, x_0, _id);
      {
        t = yield_0(t);
        {
          t = MkLex_0(t);
          t = F_p__0(t);
        }
      }
      LocalPopChoice(q_5);
    }
  else
    {
      t = p_5;
      {
        ATerm b_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            t = lit_1(t, _id);
            return(t);
          }
          t = prod_3(t, _id, c_1, _id);
          return(t);
        }
        t = appl_2(t, b_1, _id);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm get_sort_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
  v_12 = t;
  t_12 :
  if(match_cons(v_12, sym_appl_2))
    {
      w_12 = ATgetArgument(v_12, 0);
      a_13 = ATgetArgument(v_12, 1);
      u_12 :
      if(match_cons(w_12, sym_prod_3))
        {
          x_12 = ATgetArgument(w_12, 0);
          y_12 = ATgetArgument(w_12, 1);
          z_12 = ATgetArgument(w_12, 2);
          t = not_null(y_12);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nsplit_2 (ATerm t, ATerm y_78 (ATerm), ATerm z_78 (ATerm))
{
  ATerm j_13 = NULL;
  ATerm l_13 = NULL,n_13 = NULL;
  j_13 = t;
  {
    ATerm v_5;
    v_5 = t;
    {
      ATerm m_13 = NULL;
      t = not_null(j_13);
      {
        t = y_78(t);
        {
          m_13 = t;
          if(((l_13 != NULL) && (l_13 != m_13)))
            _fail(m_13);
          else
            l_13 = m_13;
        }
      }
    }
    t = v_5;
    {
      ATerm o_13 = NULL;
      t = not_null(j_13);
      {
        t = z_78(t);
        {
          o_13 = t;
          if(((n_13 != NULL) && (n_13 != o_13)))
            _fail(o_13);
          else
            n_13 = o_13;
        }
      }
      t = (ATerm) ATmakeAppl(sym_N_2, not_null(l_13), not_null(n_13));
    }
  }
  return(t);
}
ATerm ProjectAmb_0 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
  v_13 = t;
  t_13 :
  if(match_cons(v_13, sym_amb_1))
    {
      w_13 = ATgetArgument(v_13, 0);
      u_13 :
      if(((ATgetType(w_13) == AT_LIST) && ((ATermList) w_13 != ATempty)))
        {
          x_13 = ATgetFirst((ATermList) w_13);
          y_13 = (ATerm) ATgetNext((ATermList) w_13);
          t = not_null(x_13);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
  t = SSL_is_int(not_null(d_14));
  return(t);
}
ATerm abbrev_term_0 (ATerm t)
{
  ATerm w_5 = t;
  int z_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_6 = t;
      int b_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_int_0(t);
          LocalPopChoice(b_6);
        }
      else
        {
          t = a_6;
          t = ProjectAmb_0(t);
        }
      LocalPopChoice(z_5);
    }
  else
    {
      t = w_5;
      {
        ATerm d_1 (ATerm t)
        {
          ATerm c_6 = t;
          int d_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Lexical_0(t);
              LocalPopChoice(d_6);
            }
          else
            {
              t = c_6;
              {
                t = get_args_0(t);
                t = map_1(t, abbrev_term_0);
              }
            }
          return(t);
        }
        t = Nsplit_2(t, get_sort_0, d_1);
      }
    }
  return(t);
}
ATerm F_p__0 (ATerm t)
{
  ATerm i_14 = NULL;
  i_14 = t;
  t = (ATerm) ATinsert(ATempty, not_null(i_14));
  return(t);
}
ATerm F_0 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_appl_2))
    {
      o_14 = ATgetArgument(n_14, 0);
      p_14 = ATgetArgument(n_14, 1);
      {
        t = not_null(p_14);
        t = concat_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm appl_2 (ATerm t, ATerm t_46 (ATerm), ATerm u_46 (ATerm))
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
  z_14 = t;
  y_14 :
  if(match_cons(z_14, sym_appl_2))
    {
      a_15 = ATgetArgument(z_14, 0);
      b_15 = ATgetArgument(z_14, 1);
      {
        ATerm f_15 = NULL,h_15 = NULL;
        ATerm g_15 = NULL;
        t = SSLgetAnnotations(not_null(z_14));
        {
          g_15 = t;
          if(((f_15 != NULL) && (f_15 != g_15)))
            _fail(g_15);
          else
            f_15 = g_15;
        }
        {
          t = not_null(a_15);
          {
            ATerm j_15 = NULL;
            t = t_46(t);
            {
              h_15 = t;
              {
                t = not_null(b_15);
                {
                  ATerm l_15 = NULL;
                  t = u_46(t);
                  {
                    j_15 = t;
                    {
                      ATerm m_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, not_null(h_15), not_null(j_15)), not_null(f_15));
                      {
                        m_15 = t;
                        if(((l_15 != NULL) && (l_15 != m_15)))
                          _fail(m_15);
                        else
                          l_15 = m_15;
                      }
                      t = not_null(l_15);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm yield_0 (ATerm t)
{
  ATerm s_15 (ATerm t)
  {
    ATerm g_6 = t;
    int j_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_1 (ATerm t)
        {
          t = map_1(t, s_15);
          return(t);
        }
        t = appl_2(t, _id, e_1);
        t = F_0(t);
        LocalPopChoice(j_6);
      }
    else
      {
        t = g_6;
        t = F_p__0(t);
      }
    return(t);
  }
  t = s_15(t);
  t = implode_string_0(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  u_15 :
  if(((ATgetType(v_15) == AT_LIST) && ((ATermList) v_15 != ATempty)))
    {
      w_15 = ATgetFirst((ATermList) v_15);
      x_15 = (ATerm) ATgetNext((ATermList) v_15);
      t = not_null(w_15);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm abbrev_amb_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL;
  f_16 = t;
  e_16 :
  if(match_cons(f_16, sym_amb_1))
    {
      g_16 = ATgetArgument(f_16, 0);
      {
        ATerm i_16 = NULL,k_16 = NULL;
        ATerm n_6;
        n_6 = t;
        {
          ATerm j_16 = NULL;
          t = not_null(g_16);
          {
            t = Hd_0(t);
            {
              t = yield_0(t);
              {
                j_16 = t;
                if(((i_16 != NULL) && (i_16 != j_16)))
                  _fail(j_16);
                else
                  i_16 = j_16;
              }
            }
          }
        }
        t = n_6;
        {
          ATerm l_16 = NULL;
          t = not_null(g_16);
          {
            t = map_1(t, abbrev_term_0);
            {
              l_16 = t;
              if(((k_16 != NULL) && (k_16 != l_16)))
                _fail(l_16);
              else
                k_16 = l_16;
            }
          }
          t = (ATerm) ATmakeAppl(sym_amb_abbr_2, not_null(i_16), not_null(k_16));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm abbrev_ambs_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm g_1 (ATerm t)
    {
      ATerm r_16 = NULL;
      ATerm t_16 = NULL;
      r_16 = t;
      {
        ATerm u_16 = NULL;
        t = not_null(r_16);
        {
          t = abbrev_amb_0(t);
          {
            u_16 = t;
            if(((t_16 != NULL) && (t_16 != u_16)))
              _fail(u_16);
            else
              t_16 = u_16;
          }
        }
        t = (ATerm) ATmakeAppl(sym_root_1, not_null(t_16));
      }
      return(t);
    }
    t = map_1(t, g_1);
    return(t);
  }
  t = parsetree_2(t, f_1, int_to_string_0);
  return(t);
}
ATerm amb_1 (ATerm t, ATerm v_46 (ATerm))
{
  ATerm c_17 = NULL,d_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym_amb_1))
    {
      d_17 = ATgetArgument(c_17, 0);
      {
        ATerm g_17 = NULL,i_17 = NULL;
        ATerm h_17 = NULL;
        t = SSLgetAnnotations(not_null(c_17));
        {
          h_17 = t;
          if(((g_17 != NULL) && (g_17 != h_17)))
            _fail(h_17);
          else
            g_17 = h_17;
        }
        {
          t = not_null(d_17);
          {
            ATerm k_17 = NULL;
            t = v_46(t);
            {
              i_17 = t;
              {
                ATerm l_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, not_null(i_17)), not_null(g_17));
                {
                  l_17 = t;
                  if(((k_17 != NULL) && (k_17 != l_17)))
                    _fail(l_17);
                  else
                    k_17 = l_17;
                }
                t = not_null(k_17);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym__2))
    {
      t_17 = ATgetArgument(s_17, 0);
      u_17 = ATgetArgument(s_17, 1);
      if(((t_17 != NULL) && (t_17 != u_17)))
        _fail(u_17);
      else
        t_17 = u_17;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm d_65 (ATerm), ATerm e_65 (ATerm))
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
  a_18 = t;
  z_17 :
  if(((ATgetType(a_18) == AT_LIST) && ((ATermList) a_18 != ATempty)))
    {
      b_18 = ATgetFirst((ATermList) a_18);
      c_18 = (ATerm) ATgetNext((ATermList) a_18);
      {
        t = e_65(t);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm f_18 = NULL;
            f_18 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_18), not_null(f_18));
              t = d_65(t);
            }
            return(t);
          }
          t = fetch_1(t, h_1);
        }
        t = not_null(c_18);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym__2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      {
        t = not_null(m_18);
        {
          ATerm r_18 (ATerm t)
          {
            ATerm o_6 = t;
            int p_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(n_18);
                LocalPopChoice(p_6);
              }
            else
              {
                t = o_6;
                {
                  ATerm q_6 = t;
                  int v_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_1 (ATerm t)
                      {
                        t = not_null(n_18);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_65, i_1);
                      t = r_18(t);
                      LocalPopChoice(v_6);
                    }
                  else
                    {
                      t = q_6;
                      t = Cons_2(t, _id, r_18);
                    }
                }
              }
            return(t);
          }
          t = r_18(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm a_64 (ATerm))
{
  ATerm w_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_63(t);
      LocalPopChoice(x_6);
    }
  else
    {
      t = w_6;
      {
        ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
        w_18 = t;
        v_18 :
        if(((ATgetType(w_18) == AT_LIST) && ((ATermList) w_18 != ATempty)))
          {
            x_18 = ATgetFirst((ATermList) w_18);
            y_18 = (ATerm) ATgetNext((ATermList) w_18);
            {
              ATerm b_19 = NULL,d_19 = NULL;
              ATerm y_6;
              y_6 = t;
              {
                ATerm c_19 = NULL;
                t = not_null(x_18);
                {
                  t = a_64(t);
                  {
                    c_19 = t;
                    if(((b_19 != NULL) && (b_19 != c_19)))
                      _fail(c_19);
                    else
                      b_19 = c_19;
                  }
                }
              }
              t = y_6;
              {
                ATerm e_19 = NULL;
                t = not_null(y_18);
                {
                  t = foldr_3(t, y_63, z_63, a_64);
                  {
                    e_19 = t;
                    if(((d_19 != NULL) && (d_19 != e_19)))
                      _fail(e_19);
                    else
                      d_19 = e_19;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(d_19));
                  t = z_63(t);
                }
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm q_65 (ATerm), ATerm r_65 (ATerm), ATerm s_65 (ATerm))
{
  ATerm m_19 = NULL;
  ATerm o_19 = NULL;
  m_19 = t;
  {
    ATerm v_19 = NULL;
    ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
    t = not_null(m_19);
    {
      v_19 = t;
      {
        t = SSL_explode_term(not_null(v_19));
        {
          x_19 = t;
          l_19 :
          if(match_cons(x_19, sym__2))
            {
              y_19 = ATgetArgument(x_19, 0);
              z_19 = ATgetArgument(x_19, 1);
              if(((o_19 != NULL) && (o_19 != z_19)))
                _fail(z_19);
              else
                o_19 = z_19;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_19);
      t = foldr_3(t, q_65, r_65, s_65);
    }
  }
  return(t);
}
ATerm bu_collect_1 (ATerm t, ATerm s_66 (ATerm))
{
  ATerm e_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_20 (ATerm t)
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _some(t, g_20);
            {
              ATerm j_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              ATerm k_1 (ATerm t)
              {
                ATerm k_7 = t;
                int p_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2(t, s_66, _id);
                    LocalPopChoice(p_7);
                  }
                else
                  {
                    t = k_7;
                    t = (ATerm) ATempty;
                  }
                return(t);
              }
              t = crush_3(t, j_1, union_0, k_1);
            }
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            {
              ATerm e_20 = NULL;
              ATerm f_20 = NULL;
              t = s_66(t);
              {
                f_20 = t;
                if(((e_20 != NULL) && (e_20 != f_20)))
                  _fail(f_20);
                else
                  e_20 = f_20;
              }
              t = (ATerm) ATinsert(ATempty, not_null(e_20));
            }
          }
        return(t);
      }
      t = g_20(t);
      LocalPopChoice(f_7);
    }
  else
    {
      t = e_7;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm parsetree_2 (ATerm t, ATerm a_47 (ATerm), ATerm b_47 (ATerm))
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
  r_20 = t;
  q_20 :
  if(match_cons(r_20, sym_parsetree_2))
    {
      s_20 = ATgetArgument(r_20, 0);
      t_20 = ATgetArgument(r_20, 1);
      {
        ATerm x_20 = NULL,z_20 = NULL;
        ATerm y_20 = NULL;
        t = SSLgetAnnotations(not_null(r_20));
        {
          y_20 = t;
          if(((x_20 != NULL) && (x_20 != y_20)))
            _fail(y_20);
          else
            x_20 = y_20;
        }
        {
          t = not_null(s_20);
          {
            ATerm b_21 = NULL;
            t = a_47(t);
            {
              z_20 = t;
              {
                t = not_null(t_20);
                {
                  ATerm e_21 = NULL;
                  t = b_47(t);
                  {
                    b_21 = t;
                    {
                      ATerm f_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, not_null(z_20), not_null(b_21)), not_null(x_20));
                      {
                        f_21 = t;
                        if(((e_21 != NULL) && (e_21 != f_21)))
                          _fail(f_21);
                        else
                          e_21 = f_21;
                      }
                      t = not_null(e_21);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm collect_ambs_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      t = amb_1(t, _id);
      return(t);
    }
    t = bu_collect_1(t, m_1);
    return(t);
  }
  t = parsetree_2(t, l_1, _id);
  return(t);
}
ATerm visamb_0 (ATerm t)
{
  t = collect_ambs_0(t);
  t = abbrev_ambs_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm n_44 (ATerm), ATerm o_44 (ATerm))
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  r_21 = t;
  q_21 :
  if(match_cons(r_21, sym__2))
    {
      s_21 = ATgetArgument(r_21, 0);
      t_21 = ATgetArgument(r_21, 1);
      {
        ATerm x_21 = NULL,z_21 = NULL;
        ATerm y_21 = NULL;
        t = SSLgetAnnotations(not_null(r_21));
        {
          y_21 = t;
          if(((x_21 != NULL) && (x_21 != y_21)))
            _fail(y_21);
          else
            x_21 = y_21;
        }
        {
          t = not_null(s_21);
          {
            ATerm b_22 = NULL;
            t = n_44(t);
            {
              z_21 = t;
              {
                t = not_null(t_21);
                {
                  ATerm d_22 = NULL;
                  t = o_44(t);
                  {
                    b_22 = t;
                    {
                      ATerm e_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_21), not_null(b_22)), not_null(x_21));
                      {
                        e_22 = t;
                        if(((d_22 != NULL) && (d_22 != e_22)))
                          _fail(e_22);
                        else
                          d_22 = e_22;
                      }
                      t = not_null(d_22);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm n_22 = NULL,p_22 = NULL,y_22 = NULL,z_22 = NULL;
  ATerm q_7;
  q_7 = t;
  t = dtime_0(t);
  t = q_7;
  {
    t = j_59(t);
    {
      ATerm r_7;
      r_7 = t;
      {
        ATerm o_22 = NULL;
        t = dtime_0(t);
        {
          o_22 = t;
          if(((n_22 != NULL) && (n_22 != o_22)))
            _fail(o_22);
          else
            n_22 = o_22;
        }
      }
      t = r_7;
      {
        p_22 = t;
        m_22 :
        if(match_cons(p_22, sym__2))
          {
            y_22 = ATgetArgument(p_22, 0);
            z_22 = ATgetArgument(p_22, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_22)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(n_22))), not_null(z_22));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm h_23 = NULL;
  h_23 = t;
  t = SSL_ReadFromFile(not_null(h_23));
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_62 (ATerm), ATerm l_62 (ATerm))
{
  ATerm o_23 = NULL,q_23 = NULL;
  ATerm w_7;
  w_7 = t;
  {
    ATerm p_23 = NULL;
    t = k_62(t);
    {
      p_23 = t;
      if(((o_23 != NULL) && (o_23 != p_23)))
        _fail(p_23);
      else
        o_23 = p_23;
    }
  }
  t = w_7;
  {
    ATerm r_23 = NULL;
    t = l_62(t);
    {
      r_23 = t;
      if(((q_23 != NULL) && (q_23 != r_23)))
        _fail(r_23);
      else
        q_23 = r_23;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), not_null(q_23));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm c_24 = NULL;
  ATerm x_7;
  x_7 = t;
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_1 (ATerm t)
        {
          ATerm d_24 = NULL,j_24 = NULL;
          d_24 = t;
          a_24 :
          if(match_cons(d_24, sym_Input_1))
            {
              j_24 = ATgetArgument(d_24, 0);
              if(((c_24 != NULL) && (c_24 != j_24)))
                _fail(j_24);
              else
                c_24 = j_24;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, n_1);
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        {
          ATerm k_24 = NULL;
          t = term_e_8;
          {
            k_24 = t;
            if(((c_24 != NULL) && (c_24 != k_24)))
              _fail(k_24);
            else
              c_24 = k_24;
          }
        }
      }
  }
  t = x_7;
  {
    ATerm o_1 (ATerm t)
    {
      t = not_null(c_24);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_1);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm o_24 = NULL;
  o_24 = t;
  t = SSL_string_to_int(not_null(o_24));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  x_24 = t;
  v_24 :
  if(match_string(x_24, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(x_24) == AT_LIST) && ((ATermList) x_24 != ATempty)))
        {
          y_24 = ATgetFirst((ATermList) x_24);
          z_24 = (ATerm) ATgetNext((ATermList) x_24);
          w_24 :
          if(((ATgetType(z_24) == AT_LIST) && ((ATermList) z_24 != ATempty)))
            {
              a_25 = ATgetFirst((ATermList) z_24);
              b_25 = (ATerm) ATgetNext((ATermList) z_24);
              {
                ATerm f_25 = NULL;
                ATerm f_8;
                f_8 = t;
                {
                  t = not_null(y_24);
                  t = l_0(t);
                }
                t = f_8;
                {
                  ATerm g_25 = NULL;
                  t = not_null(a_25);
                  {
                    t = m_0(t);
                    {
                      g_25 = t;
                      if(((f_25 != NULL) && (f_25 != g_25)))
                        _fail(g_25);
                      else
                        f_25 = g_25;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_25)), not_null(f_25));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        ATerm x_25 = NULL;
        x_25 = t;
        k_25 :
        if(!(match_string(x_25, "-i")))
          {
            if(!(match_string(x_25, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm q_1 (ATerm t)
      {
        ATerm a_26 = NULL;
        ATerm j_8;
        j_8 = t;
        {
          ATerm y_25 = NULL;
          ATerm z_25 = NULL;
          z_25 = t;
          if(((y_25 != NULL) && (y_25 != z_25)))
            _fail(z_25);
          else
            y_25 = z_25;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_q_8, not_null(y_25));
            t = set_config_0(t);
          }
        }
        t = j_8;
        {
          ATerm b_26 = NULL;
          b_26 = t;
          if(((a_26 != NULL) && (a_26 != b_26)))
            _fail(b_26);
          else
            a_26 = b_26;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_26));
        }
        return(t);
      }
      ATerm r_1 (ATerm t)
      {
        t = term_r_8;
        return(t);
      }
      t = ArgOption_3(t, p_1, q_1, r_1);
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      {
        ATerm s_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              ATerm c_26 = NULL;
              c_26 = t;
              n_25 :
              if(!(match_string(c_26, "-o")))
                {
                  if(!(match_string(c_26, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm t_1 (ATerm t)
            {
              ATerm f_26 = NULL;
              ATerm v_8;
              v_8 = t;
              {
                ATerm d_26 = NULL;
                ATerm e_26 = NULL;
                e_26 = t;
                if(((d_26 != NULL) && (d_26 != e_26)))
                  _fail(e_26);
                else
                  d_26 = e_26;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_8, not_null(d_26));
                  t = set_config_0(t);
                }
              }
              t = v_8;
              {
                ATerm g_26 = NULL;
                g_26 = t;
                if(((f_26 != NULL) && (f_26 != g_26)))
                  _fail(g_26);
                else
                  f_26 = g_26;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_26));
              }
              return(t);
            }
            ATerm u_1 (ATerm t)
            {
              t = term_b_9;
              return(t);
            }
            t = ArgOption_3(t, s_1, t_1, u_1);
            LocalPopChoice(u_8);
          }
        else
          {
            t = s_8;
            {
              ATerm c_9 = t;
              int d_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_1 (ATerm t)
                  {
                    ATerm h_26 = NULL;
                    h_26 = t;
                    q_25 :
                    if(!(match_string(h_26, "-S")))
                      {
                        if(!(match_string(h_26, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm w_1 (ATerm t)
                  {
                    t = term_e_9;
                    t = set_config_0(t);
                    t = term_f_9;
                    return(t);
                  }
                  ATerm x_1 (ATerm t)
                  {
                    t = term_g_9;
                    return(t);
                  }
                  t = Option_3(t, v_1, w_1, x_1);
                  LocalPopChoice(d_9);
                }
              else
                {
                  t = c_9;
                  {
                    ATerm h_9 = t;
                    int l_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_1 (ATerm t)
                        {
                          ATerm i_26 = NULL;
                          i_26 = t;
                          r_25 :
                          if(!(match_string(i_26, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm z_1 (ATerm t)
                        {
                          ATerm l_26 = NULL;
                          ATerm m_9;
                          m_9 = t;
                          {
                            ATerm j_26 = NULL;
                            ATerm k_26 = NULL;
                            t = string_to_int_0(t);
                            {
                              k_26 = t;
                              if(((j_26 != NULL) && (j_26 != k_26)))
                                _fail(k_26);
                              else
                                j_26 = k_26;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_w_4, not_null(j_26));
                              t = set_config_0(t);
                            }
                          }
                          t = m_9;
                          {
                            ATerm m_26 = NULL;
                            m_26 = t;
                            if(((l_26 != NULL) && (l_26 != m_26)))
                              _fail(m_26);
                            else
                              l_26 = m_26;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(l_26));
                          }
                          return(t);
                        }
                        ATerm a_2 (ATerm t)
                        {
                          t = term_q_9;
                          return(t);
                        }
                        t = ArgOption_3(t, y_1, z_1, a_2);
                        LocalPopChoice(l_9);
                      }
                    else
                      {
                        t = h_9;
                        {
                          ATerm t_9 = t;
                          int u_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_2 (ATerm t)
                              {
                                ATerm n_26 = NULL;
                                n_26 = t;
                                u_25 :
                                if(!(match_string(n_26, "-v")))
                                  {
                                    if(!(match_string(n_26, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm c_2 (ATerm t)
                              {
                                t = term_x_9;
                                t = set_config_0(t);
                                t = term_y_9;
                                return(t);
                              }
                              ATerm d_2 (ATerm t)
                              {
                                t = term_z_9;
                                return(t);
                              }
                              t = Option_3(t, b_2, c_2, d_2);
                              LocalPopChoice(u_9);
                            }
                          else
                            {
                              t = t_9;
                              {
                                ATerm a_10 = t;
                                int b_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_2 (ATerm t)
                                    {
                                      ATerm o_26 = NULL;
                                      o_26 = t;
                                      v_25 :
                                      if(!(match_string(o_26, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm f_2 (ATerm t)
                                    {
                                      t = term_i_10;
                                      t = set_config_0(t);
                                      t = term_j_10;
                                      return(t);
                                    }
                                    ATerm g_2 (ATerm t)
                                    {
                                      t = term_k_10;
                                      return(t);
                                    }
                                    t = Option_3(t, e_2, f_2, g_2);
                                    LocalPopChoice(b_10);
                                  }
                                else
                                  {
                                    t = a_10;
                                    {
                                      ATerm h_2 (ATerm t)
                                      {
                                        ATerm p_26 = NULL;
                                        p_26 = t;
                                        w_25 :
                                        if(!(match_string(p_26, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm i_2 (ATerm t)
                                      {
                                        t = term_p_10;
                                        t = set_config_0(t);
                                        t = term_r_10;
                                        return(t);
                                      }
                                      ATerm j_2 (ATerm t)
                                      {
                                        t = term_t_10;
                                        return(t);
                                      }
                                      t = Option_3(t, h_2, i_2, j_2);
                                    }
                                  }
                              }
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm z_26 = NULL;
  z_26 = t;
  t = SSL_table_destroy(not_null(z_26));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  t = SSL_exit(not_null(i_27));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  t = SSL_implode_string(not_null(m_27));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_70 (ATerm))
{
  ATerm p_27 (ATerm t)
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_27);
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        {
          t = Nil_0(t);
          t = a_70(t);
        }
      }
    return(t);
  }
  t = p_27(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_10);
    }
  else
    {
      t = y_10;
      {
        ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
        s_27 = t;
        r_27 :
        if(((ATgetType(s_27) == AT_LIST) && ((ATermList) s_27 != ATempty)))
          {
            t_27 = ATgetFirst((ATermList) s_27);
            u_27 = (ATerm) ATgetNext((ATermList) s_27);
            {
              t = not_null(t_27);
              {
                ATerm k_2 (ATerm t)
                {
                  t = not_null(u_27);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, k_2);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  t = SSL_explode_string(not_null(a_28));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_11), term_h_11), term_g_11), term_f_11), term_e_11), term_c_11), term_b_11), term_a_11);
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_69 (ATerm))
{
  ATerm g_28 (ATerm t)
  {
    ATerm j_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(n_11);
      }
    else
      {
        t = j_11;
        t = Cons_2(t, l_69, g_28);
      }
    return(t);
  }
  t = g_28(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
  p_28 = t;
  m_28 :
  if(((ATgetType(p_28) == AT_LIST) && ((ATermList) p_28 != ATempty)))
    {
      n_28 = ATgetFirst((ATermList) p_28);
      o_28 = (ATerm) ATgetNext((ATermList) p_28);
      {
        ATerm s_28 = NULL;
        t = not_null(o_28);
        {
          ATerm o_11;
          o_11 = t;
          {
            ATerm t_28 = NULL,v_28 = NULL,x_28 = NULL;
            ATerm s_11;
            s_11 = t;
            {
              ATerm u_28 = NULL;
              t = j_0(t);
              {
                u_28 = t;
                if(((t_28 != NULL) && (t_28 != u_28)))
                  _fail(u_28);
                else
                  t_28 = u_28;
              }
            }
            t = s_11;
            {
              ATerm w_28 = NULL;
              t = not_null(n_28);
              {
                t = i_0(t);
                {
                  w_28 = t;
                  if(((v_28 != NULL) && (v_28 != w_28)))
                    _fail(w_28);
                  else
                    v_28 = w_28;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(t_28)), not_null(v_28));
                {
                  x_28 = t;
                  if(((s_28 != NULL) && (s_28 != x_28)))
                    _fail(x_28);
                  else
                    s_28 = x_28;
                }
              }
            }
          }
          t = o_11;
          {
            ATerm l_2 (ATerm t)
            {
              t = not_null(s_28);
              return(t);
            }
            t = reverse_acc_2(t, i_0, l_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) p_28 == ATempty))
        {
          {
            t = term_w_9;
            t = j_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, m_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_0 (ATerm))
{
  ATerm g_29 = NULL;
  ATerm h_29 = NULL;
  t = term_w_9;
  {
    t = f_0(t);
    {
      h_29 = t;
      if(((g_29 != NULL) && (g_29 != h_29)))
        _fail(h_29);
      else
        g_29 = h_29;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_11), not_null(g_29)), term_v_11);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_47 (ATerm))
{
  ATerm r_29 = NULL,s_29 = NULL;
  r_29 = t;
  q_29 :
  if(match_cons(r_29, sym_Program_1))
    {
      s_29 = ATgetArgument(r_29, 0);
      {
        ATerm v_29 = NULL,x_29 = NULL;
        ATerm w_29 = NULL;
        t = SSLgetAnnotations(not_null(r_29));
        {
          w_29 = t;
          if(((v_29 != NULL) && (v_29 != w_29)))
            _fail(w_29);
          else
            v_29 = w_29;
        }
        {
          t = not_null(s_29);
          {
            ATerm z_29 = NULL;
            t = h_47(t);
            {
              x_29 = t;
              {
                ATerm a_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_29)), not_null(v_29));
                {
                  a_30 = t;
                  if(((z_29 != NULL) && (z_29 != a_30)))
                    _fail(a_30);
                  else
                    z_29 = a_30;
                }
                t = not_null(z_29);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm j_30 = NULL;
  ATerm n_2 (ATerm t)
  {
    ATerm o_2 (ATerm t)
    {
      ATerm k_30 = NULL;
      k_30 = t;
      if(((j_30 != NULL) && (j_30 != k_30)))
        _fail(k_30);
      else
        j_30 = k_30;
      return(t);
    }
    t = Program_1(t, o_2);
    return(t);
  }
  t = option_defined_1(t, n_2);
  {
    ATerm p_2 (ATerm t)
    {
      ATerm l_30 = NULL;
      ATerm m_30 = NULL;
      t = term_w_9;
      {
        ATerm q_2 (ATerm t)
        {
          t = not_null(j_30);
          return(t);
        }
        t = short_description_1(t, q_2);
        {
          t = concat_strings_0(t);
          {
            m_30 = t;
            if(((l_30 != NULL) && (l_30 != m_30)))
              _fail(m_30);
            else
              l_30 = m_30;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_3, (ATerm) ATinsert(ATempty, not_null(l_30)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, p_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_3, (ATerm) ATinsert(ATempty, term_x_11));
      {
        t = printnl_0(t);
        {
          t = term_a_12;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm r_2 (ATerm t)
                {
                  ATerm n_30 = NULL;
                  n_30 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_j_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_30)), term_b_12));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, r_2);
                {
                  ATerm s_2 (ATerm t)
                  {
                    ATerm p_30 = NULL;
                    ATerm q_30 = NULL;
                    t = term_w_9;
                    {
                      ATerm v_2 (ATerm t)
                      {
                        t = not_null(j_30);
                        return(t);
                      }
                      t = long_description_1(t, v_2);
                      {
                        t = concat_strings_0(t);
                        {
                          q_30 = t;
                          if(((p_30 != NULL) && (p_30 != q_30)))
                            _fail(q_30);
                          else
                            p_30 = q_30;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_j_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_30)), term_c_12));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, s_2);
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
ATerm printnl_0 (ATerm t)
{
  ATerm x_30 = NULL,b_31 = NULL,c_31 = NULL;
  x_30 = t;
  w_30 :
  if(match_cons(x_30, sym__2))
    {
      b_31 = ATgetArgument(x_30, 0);
      c_31 = ATgetArgument(x_30, 1);
      {
        ATerm g_12;
        g_12 = t;
        t = SSL_printnl(not_null(b_31), not_null(c_31));
        t = g_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_47 (ATerm))
{
  ATerm l_31 = NULL,m_31 = NULL;
  l_31 = t;
  k_31 :
  if(match_cons(l_31, sym_Undefined_1))
    {
      m_31 = ATgetArgument(l_31, 0);
      {
        ATerm p_31 = NULL,r_31 = NULL;
        ATerm q_31 = NULL;
        t = SSLgetAnnotations(not_null(l_31));
        {
          q_31 = t;
          if(((p_31 != NULL) && (p_31 != q_31)))
            _fail(q_31);
          else
            p_31 = q_31;
        }
        {
          t = not_null(m_31);
          {
            ATerm t_31 = NULL;
            t = i_47(t);
            {
              r_31 = t;
              {
                ATerm u_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_31)), not_null(p_31));
                {
                  u_31 = t;
                  if(((t_31 != NULL) && (t_31 != u_31)))
                    _fail(u_31);
                  else
                    t_31 = u_31;
                }
                t = not_null(t_31);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm u_69 (ATerm))
{
  ATerm z_31 (ATerm t)
  {
    ATerm h_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_69, _id);
        LocalPopChoice(l_12);
      }
    else
      {
        t = h_12;
        t = Cons_2(t, _id, z_31);
      }
    return(t);
  }
  t = z_31(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_57 (ATerm))
{
  t = fetch_1(t, g_57);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  d_32 :
  if(match_cons(e_32, sym_Help_0))
    {
      ATerm g_32 = NULL,i_32 = NULL;
      ATerm o_12;
      o_12 = t;
      {
        ATerm h_32 = NULL;
        t = SSLgetAnnotations(not_null(e_32));
        {
          h_32 = t;
          if(((g_32 != NULL) && (g_32 != h_32)))
            _fail(h_32);
          else
            g_32 = h_32;
        }
      }
      t = o_12;
      {
        ATerm j_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_32));
        {
          j_32 = t;
          if(((i_32 != NULL) && (i_32 != j_32)))
            _fail(j_32);
          else
            i_32 = j_32;
        }
        t = not_null(i_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_78(t);
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
  p_32 = t;
  o_32 :
  if(match_cons(p_32, sym__2))
    {
      q_32 = ATgetArgument(p_32, 0);
      r_32 = ATgetArgument(p_32, 1);
      t = SSL_table_get(not_null(q_32), not_null(r_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL;
  y_32 = t;
  x_32 :
  if(match_cons(y_32, sym__3))
    {
      z_32 = ATgetArgument(y_32, 0);
      a_33 = ATgetArgument(y_32, 1);
      b_33 = ATgetArgument(y_32, 2);
      {
        ATerm r_12;
        r_12 = t;
        {
          ATerm f_33 = NULL;
          ATerm g_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_32), not_null(a_33));
          {
            ATerm s_12 = t;
            int b_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(b_13);
              }
            else
              {
                t = s_12;
                t = (ATerm) ATempty;
              }
            {
              g_33 = t;
              if(((f_33 != NULL) && (f_33 != g_33)))
                _fail(g_33);
              else
                f_33 = g_33;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_32), not_null(a_33), (ATerm) ATinsert(CheckATermList(not_null(f_33)), not_null(b_33)));
            t = table_put_0(t);
          }
        }
        t = r_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_56 (ATerm))
{
  ATerm k_33 = NULL;
  ATerm l_33 = NULL;
  t = term_w_9;
  {
    t = m_56(t);
    {
      l_33 = t;
      if(((k_33 != NULL) && (k_33 != l_33)))
        _fail(l_33);
      else
        k_33 = l_33;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_11, term_z_11, not_null(k_33));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
  r_33 = t;
  q_33 :
  if(match_string(r_33, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(r_33) == AT_LIST) && ((ATermList) r_33 != ATempty)))
        {
          s_33 = ATgetFirst((ATermList) r_33);
          t_33 = (ATerm) ATgetNext((ATermList) r_33);
          {
            ATerm w_33 = NULL;
            ATerm c_13;
            c_13 = t;
            {
              t = not_null(s_33);
              t = a_0(t);
            }
            t = c_13;
            {
              ATerm x_33 = NULL;
              t = term_w_9;
              {
                t = b_0(t);
                {
                  x_33 = t;
                  if(((w_33 != NULL) && (w_33 != x_33)))
                    _fail(x_33);
                  else
                    w_33 = x_33;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_33)), not_null(w_33));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm c_34 = NULL;
    c_34 = t;
    b_34 :
    if(!(match_string(c_34, "--help")))
      {
        if(!(match_string(c_34, "-h")))
          {
            if(!(match_string(c_34, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_d_13;
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_e_13;
    return(t);
  }
  t = Option_3(t, w_2, x_2, y_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
  f_34 = t;
  e_34 :
  if(((ATgetType(f_34) == AT_LIST) && ((ATermList) f_34 != ATempty)))
    {
      g_34 = ATgetFirst((ATermList) f_34);
      h_34 = (ATerm) ATgetNext((ATermList) f_34);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_34)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_34)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_52 (ATerm), ATerm i_52 (ATerm))
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  r_34 = t;
  q_34 :
  if(((ATgetType(r_34) == AT_LIST) && ((ATermList) r_34 != ATempty)))
    {
      s_34 = ATgetFirst((ATermList) r_34);
      t_34 = (ATerm) ATgetNext((ATermList) r_34);
      {
        ATerm x_34 = NULL,z_34 = NULL;
        ATerm y_34 = NULL;
        t = SSLgetAnnotations(not_null(r_34));
        {
          y_34 = t;
          if(((x_34 != NULL) && (x_34 != y_34)))
            _fail(y_34);
          else
            x_34 = y_34;
        }
        {
          t = not_null(s_34);
          {
            ATerm b_35 = NULL;
            t = h_52(t);
            {
              z_34 = t;
              {
                t = not_null(t_34);
                {
                  ATerm d_35 = NULL;
                  t = i_52(t);
                  {
                    b_35 = t;
                    {
                      ATerm e_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_35)), not_null(z_34)), not_null(x_34));
                      {
                        e_35 = t;
                        if(((d_35 != NULL) && (d_35 != e_35)))
                          _fail(e_35);
                        else
                          d_35 = e_35;
                      }
                      t = not_null(d_35);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm o_35 = NULL;
  o_35 = t;
  n_35 :
  if(((ATermList) o_35 == ATempty))
    {
      {
        ATerm q_35 = NULL,s_35 = NULL;
        ATerm f_13;
        f_13 = t;
        {
          ATerm r_35 = NULL;
          t = SSLgetAnnotations(not_null(o_35));
          {
            r_35 = t;
            if(((q_35 != NULL) && (q_35 != r_35)))
              _fail(r_35);
            else
              q_35 = r_35;
          }
        }
        t = f_13;
        {
          ATerm t_35 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_35));
          {
            t_35 = t;
            if(((s_35 != NULL) && (s_35 != t_35)))
              _fail(t_35);
            else
              s_35 = t_35;
          }
          t = not_null(s_35);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
  d_36 = t;
  c_36 :
  if(match_cons(d_36, sym__2))
    {
      e_36 = ATgetArgument(d_36, 0);
      f_36 = ATgetArgument(d_36, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_4, not_null(e_36), not_null(f_36));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_56 (ATerm))
{
  ATerm g_13;
  g_13 = t;
  {
    ATerm z_2 (ATerm t)
    {
      t = term_h_13;
      t = k_56(t);
      return(t);
    }
    t = try_1(t, z_2);
  }
  t = g_13;
  {
    ATerm a_3 (ATerm t)
    {
      ATerm n_36 = NULL;
      ATerm i_13;
      i_13 = t;
      {
        ATerm l_36 = NULL;
        ATerm m_36 = NULL;
        m_36 = t;
        if(((l_36 != NULL) && (l_36 != m_36)))
          _fail(m_36);
        else
          l_36 = m_36;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_5, not_null(l_36));
          t = set_config_0(t);
        }
      }
      t = i_13;
      {
        ATerm o_36 = NULL;
        o_36 = t;
        if(((n_36 != NULL) && (n_36 != o_36)))
          _fail(o_36);
        else
          n_36 = o_36;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_36));
      }
      return(t);
    }
    ATerm b_3 (ATerm t)
    {
      ATerm k_13 = t;
      int p_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_13 = t;
          int r_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(r_13);
            }
          else
            {
              t = q_13;
              {
                t = k_56(t);
                t = Cons_2(t, _id, b_3);
              }
            }
          LocalPopChoice(p_13);
        }
      else
        {
          t = k_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_3, b_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
  ATerm s_13;
  s_13 = t;
  {
    ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
    x_36 = t;
    t_36 :
    if(match_cons(x_36, sym__3))
      {
        y_36 = ATgetArgument(x_36, 0);
        z_36 = ATgetArgument(x_36, 1);
        a_37 = ATgetArgument(x_36, 2);
        {
          if(((u_36 != NULL) && (u_36 != y_36)))
            _fail(y_36);
          else
            u_36 = y_36;
          {
            if(((v_36 != NULL) && (v_36 != z_36)))
              _fail(z_36);
            else
              v_36 = z_36;
            {
              if(((w_36 != NULL) && (w_36 != a_37)))
                _fail(a_37);
              else
                w_36 = a_37;
              t = SSL_table_put(not_null(u_36), not_null(v_36), not_null(w_36));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_56 (ATerm))
{
  ATerm i_37 = NULL;
  ATerm z_13;
  z_13 = t;
  {
    t = term_a_14;
    t = table_put_0(t);
  }
  t = z_13;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm b_14 = t;
      int c_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_56(t);
          LocalPopChoice(c_14);
        }
      else
        {
          t = b_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_3);
    {
      ATerm d_3 (ATerm t)
      {
        ATerm e_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_l_4;
                t = exit_0(t);
              }
            }
            LocalPopChoice(f_14);
          }
        else
          {
            t = e_14;
            {
              ATerm e_3 (ATerm t)
              {
                ATerm h_3 (ATerm t)
                {
                  ATerm j_37 = NULL;
                  j_37 = t;
                  if(((i_37 != NULL) && (i_37 != j_37)))
                    _fail(j_37);
                  else
                    i_37 = j_37;
                  return(t);
                }
                t = Undefined_1(t, h_3);
                return(t);
              }
              t = option_defined_1(t, e_3);
              {
                ATerm g_14;
                g_14 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_37)), term_h_14));
                  t = printnl_0(t);
                }
                t = g_14;
                {
                  t = system_usage_0(t);
                  {
                    t = term_l_3;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, d_3);
      {
        ATerm j_14;
        j_14 = t;
        {
          t = term_y_11;
          t = table_destroy_0(t);
        }
        t = j_14;
      }
    }
  }
  return(t);
}
ATerm Vis_amb_0 (ATerm t)
{
  t = parse_options_1(t, io_options_0);
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_file_0(t);
        {
          ATerm i_3 (ATerm t)
          {
            t = _2(t, _id, visamb_0);
            return(t);
          }
          t = apply_strategy_1(t, i_3);
          {
            t = output_file_0(t);
            t = report_success_0(t);
          }
        }
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        t = report_failure_0(t);
      }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Vis_amb_0(t);
  return(t);
}
