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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_lexical_1;
Symbol sym_root_1;
Symbol sym_N_2;
Symbol sym_amb_abbr_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
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
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_lexical_1 = ATmakeSymbol("lexical", 1, ATfalse);
  ATprotectSymbol(sym_lexical_1);
  sym_root_1 = ATmakeSymbol("root", 1, ATfalse);
  ATprotectSymbol(sym_root_1);
  sym_N_2 = ATmakeSymbol("N", 2, ATfalse);
  ATprotectSymbol(sym_N_2);
  sym_amb_abbr_2 = ATmakeSymbol("amb-abbr", 2, ATfalse);
  ATprotectSymbol(sym_amb_abbr_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  init_constant_terms();
}
ATerm term_u_16;
ATerm term_b_16;
ATerm term_n_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_s_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_q_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_v_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_m_7;
ATerm term_v_4;
ATerm term_o_4;
ATerm term_l_4;
ATerm term_i_4;
ATerm term_g_4;
ATerm term_r_3;
ATerm term_i_3;
ATerm term_h_3;
ATerm term_g_3;
void init_constant_terms (void)
{
  ATprotect(&(term_g_3));
  term_g_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_3));
  term_h_3 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_3));
  term_i_3 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_r_7);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym__2, term_g_4, term_r_3);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_3);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_r_7);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_r_7);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("The SDF2 implementation caters for arbitrary context-free grammars. That is,\n", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("even for ambiguous grammars the parser will produce a parse trees containing\n", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("a concise encoding of allpossible parses. Ambiguities are represented by\n", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("means of amb nodes that contain a list of possible parse trees at that\n", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("point. For most applications, however, it is desirable to develop\n", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("unambiguous grammars. To aid the grammar writer in detecting and solving the\n", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ambiguities, the visamb tool extracts the ambiguities from a parse tree and\n", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("displays them in a readable format.\n", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym__2, term_v_11, term_w_11);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_r_7);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym__3, term_v_11, term_w_11, (ATerm) ATempty);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm d_70 (ATerm), ATerm e_70 (ATerm));
ATerm crush_2 (ATerm, ATerm b_69 (ATerm), ATerm c_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm j_77 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm get_args_0 (ATerm);
ATerm lit_1 (ATerm, ATerm l_54 (ATerm));
ATerm prod_3 (ATerm, ATerm b_55 (ATerm), ATerm c_55 (ATerm), ATerm d_55 (ATerm));
ATerm MkLex_0 (ATerm);
ATerm cf_1 (ATerm, ATerm h_54 (ATerm));
ATerm lex_1 (ATerm, ATerm i_54 (ATerm));
ATerm Lexical_0 (ATerm);
ATerm get_sort_0 (ATerm);
ATerm Nsplit_2 (ATerm, ATerm s_55 (ATerm), ATerm t_55 (ATerm));
ATerm ProjectAmb_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm abbrev_term_0 (ATerm);
ATerm F_p__0 (ATerm);
ATerm F_0 (ATerm);
ATerm appl_2 (ATerm, ATerm e_55 (ATerm), ATerm f_55 (ATerm));
ATerm yield_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm abbrev_amb_0 (ATerm);
ATerm abbrev_ambs_0 (ATerm);
ATerm amb_1 (ATerm, ATerm g_55 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm q_69 (ATerm), ATerm r_69 (ATerm));
ATerm union_1 (ATerm, ATerm m_69 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm h_70 (ATerm));
ATerm crush_3 (ATerm, ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm f_69 (ATerm));
ATerm bu_collect_1 (ATerm, ATerm n_68 (ATerm));
ATerm parsetree_2 (ATerm, ATerm l_55 (ATerm), ATerm m_55 (ATerm));
ATerm collect_ambs_0 (ATerm);
ATerm visamb_0 (ATerm);
ATerm _2 (ATerm, ATerm r_47 (ATerm), ATerm s_47 (ATerm));
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm r_75 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm s_71 (ATerm), ATerm t_71 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm a_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm o_74 (ATerm));
ATerm Undefined_1 (ATerm, ATerm b_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_78 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm n_74 (ATerm));
ATerm map_1 (ATerm, ATerm p_63 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm y_55 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_79 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_49 (ATerm), ATerm b_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_79 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_79 (ATerm));
ATerm Vis_amb_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_g_3, (ATerm) ATinsert(ATempty, term_h_3));
  {
    t = printnl_0(t);
    {
      t = term_i_3;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_2 = NULL;
  u_2 = t;
  t = SSL_TicksToSeconds(not_null(u_2));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm m_3 = NULL,o_3 = NULL,p_3 = NULL;
  m_3 = t;
  l_3 :
  if(match_cons(m_3, sym__2))
    {
      o_3 = ATgetArgument(m_3, 0);
      p_3 = ATgetArgument(m_3, 1);
      {
        ATerm j_3 = t;
        int k_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_3), not_null(p_3));
            LocalPopChoice(k_3);
          }
        else
          {
            t = j_3;
            t = SSL_addr(not_null(o_3), not_null(p_3));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm d_70 (ATerm), ATerm e_70 (ATerm))
{
  ATerm n_3 = t;
  int q_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_70(t);
      LocalPopChoice(q_3);
    }
  else
    {
      t = n_3;
      {
        ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
        x_3 = t;
        w_3 :
        if(((ATgetType(x_3) == AT_LIST) && !(ATisEmpty(x_3))))
          {
            y_3 = ATgetFirst((ATermList) x_3);
            z_3 = (ATerm) ATgetNext((ATermList) x_3);
            {
              ATerm c_4 = NULL;
              ATerm d_4 = NULL;
              t = not_null(z_3);
              {
                t = foldr_2(t, d_70, e_70);
                {
                  d_4 = t;
                  if(((c_4 != NULL) && (c_4 != d_4)))
                    _fail(d_4);
                  else
                    c_4 = d_4;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_3), not_null(c_4));
                t = e_70(t);
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
ATerm crush_2 (ATerm t, ATerm b_69 (ATerm), ATerm c_69 (ATerm))
{
  ATerm k_4 = NULL;
  ATerm m_4 = NULL;
  k_4 = t;
  {
    ATerm n_4 = NULL;
    ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
    t = not_null(k_4);
    {
      n_4 = t;
      {
        t = SSL_explode_term(not_null(n_4));
        {
          p_4 = t;
          j_4 :
          if(match_cons(p_4, sym__2))
            {
              q_4 = ATgetArgument(p_4, 0);
              r_4 = ATgetArgument(p_4, 1);
              if(((m_4 != NULL) && (m_4 != r_4)))
                _fail(r_4);
              else
                m_4 = r_4;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(m_4);
      t = foldr_2(t, b_69, c_69);
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
    ATerm b_0 (ATerm t)
    {
      t = term_r_3;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  w_4 :
  if(match_cons(x_4, sym__2))
    {
      y_4 = ATgetArgument(x_4, 0);
      z_4 = ATgetArgument(x_4, 1);
      {
        ATerm s_3;
        s_3 = t;
        {
          ATerm t_3 = t;
          int u_3 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(y_4), not_null(z_4));
              LocalPopChoice(u_3);
            }
          else
            {
              t = t_3;
              t = SSL_gtr(not_null(y_4), not_null(z_4));
            }
        }
        t = s_3;
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
  ATerm f_5 = NULL;
  ATerm v_3 = t;
  int a_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
      g_5 = t;
      e_5 :
      if(match_cons(g_5, sym__2))
        {
          h_5 = ATgetArgument(g_5, 0);
          i_5 = ATgetArgument(g_5, 1);
          {
            if(((f_5 != NULL) && (f_5 != h_5)))
              _fail(h_5);
            else
              f_5 = h_5;
            if(((f_5 != NULL) && (f_5 != i_5)))
              _fail(i_5);
            else
              f_5 = i_5;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_4);
    }
  else
    {
      t = v_3;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm j_77 (ATerm))
{
  ATerm b_4 = t;
  int e_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_4;
      f_4 = t;
      {
        ATerm l_5 = NULL;
        ATerm m_5 = NULL;
        t = term_g_4;
        {
          t = get_config_0(t);
          {
            m_5 = t;
            if(((l_5 != NULL) && (l_5 != m_5)))
              _fail(m_5);
            else
              l_5 = m_5;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), term_i_3);
          t = geq_0(t);
        }
      }
      t = f_4;
      t = j_77(t);
      LocalPopChoice(e_4);
    }
  else
    {
      t = b_4;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm q_5 = NULL,s_5 = NULL;
    ATerm h_4;
    h_4 = t;
    {
      ATerm r_5 = NULL;
      t = run_time_0(t);
      {
        r_5 = t;
        if(((q_5 != NULL) && (q_5 != r_5)))
          _fail(r_5);
        else
          q_5 = r_5;
      }
    }
    t = h_4;
    {
      ATerm t_5 = NULL;
      t = term_i_4;
      {
        t = get_config_0(t);
        {
          t_5 = t;
          if(((s_5 != NULL) && (s_5 != t_5)))
            _fail(t_5);
          else
            s_5 = t_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_4), not_null(q_5)), term_l_4), not_null(s_5)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_0);
  {
    t = term_r_3;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  x_5 :
  if(match_cons(y_5, sym__2))
    {
      z_5 = ATgetArgument(y_5, 0);
      a_6 = ATgetArgument(y_5, 1);
      t = SSL_WriteToTextFile(not_null(z_5), not_null(a_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  g_6 = t;
  f_6 :
  if(match_cons(g_6, sym__2))
    {
      h_6 = ATgetArgument(g_6, 0);
      i_6 = ATgetArgument(g_6, 1);
      t = SSL_WriteToBinaryFile(not_null(h_6), not_null(i_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm q_6 = NULL;
  ATerm s_4;
  s_4 = t;
  {
    ATerm e_0 (ATerm t)
    {
      ATerm t_4 = t;
      int u_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_0 (ATerm t)
          {
            ATerm r_6 = NULL,s_6 = NULL;
            r_6 = t;
            n_6 :
            if(match_cons(r_6, sym_Output_1))
              {
                s_6 = ATgetArgument(r_6, 0);
                if(((q_6 != NULL) && (q_6 != s_6)))
                  _fail(s_6);
                else
                  q_6 = s_6;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, f_0);
          LocalPopChoice(u_4);
        }
      else
        {
          t = t_4;
          {
            ATerm t_6 = NULL;
            t = term_v_4;
            {
              t_6 = t;
              if(((q_6 != NULL) && (q_6 != t_6)))
                _fail(t_6);
              else
                q_6 = t_6;
            }
          }
        }
      return(t);
    }
    t = _2(t, e_0, _id);
  }
  t = s_4;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm p_0 (ATerm t)
      {
        t = not_null(q_6);
        return(t);
      }
      t = split_2(t, p_0, _id);
      return(t);
    }
    t = _2(t, _id, o_0);
    {
      ATerm a_5 = t;
      int b_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_0 (ATerm t)
          {
            ATerm r_0 (ATerm t)
            {
              ATerm u_6 = NULL;
              u_6 = t;
              p_6 :
              if(!(match_cons(u_6, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, r_0);
            return(t);
          }
          t = _2(t, q_0, WriteToBinaryFile_0);
          LocalPopChoice(b_5);
        }
      else
        {
          t = a_5;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm y_6 = NULL;
  y_6 = t;
  t = SSL_int_to_string(not_null(y_6));
  return(t);
}
ATerm get_args_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL;
  d_7 = t;
  c_7 :
  if(match_cons(d_7, sym_appl_2))
    {
      e_7 = ATgetArgument(d_7, 0);
      f_7 = ATgetArgument(d_7, 1);
      t = not_null(f_7);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm l_54 (ATerm))
{
  ATerm o_7 = NULL,p_7 = NULL;
  o_7 = t;
  n_7 :
  if(match_cons(o_7, sym_lit_1))
    {
      p_7 = ATgetArgument(o_7, 0);
      {
        ATerm s_7 = NULL,u_7 = NULL;
        ATerm t_7 = NULL;
        t = SSLgetAnnotations(not_null(o_7));
        {
          t_7 = t;
          if(((s_7 != NULL) && (s_7 != t_7)))
            _fail(t_7);
          else
            s_7 = t_7;
        }
        {
          t = not_null(p_7);
          {
            ATerm w_7 = NULL;
            t = l_54(t);
            {
              u_7 = t;
              {
                ATerm x_7 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(u_7)), not_null(s_7));
                {
                  x_7 = t;
                  if(((w_7 != NULL) && (w_7 != x_7)))
                    _fail(x_7);
                  else
                    w_7 = x_7;
                }
                t = not_null(w_7);
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
ATerm prod_3 (ATerm t, ATerm b_55 (ATerm), ATerm c_55 (ATerm), ATerm d_55 (ATerm))
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL;
  j_8 = t;
  i_8 :
  if(match_cons(j_8, sym_prod_3))
    {
      k_8 = ATgetArgument(j_8, 0);
      l_8 = ATgetArgument(j_8, 1);
      m_8 = ATgetArgument(j_8, 2);
      {
        ATerm r_8 = NULL,t_8 = NULL;
        ATerm s_8 = NULL;
        t = SSLgetAnnotations(not_null(j_8));
        {
          s_8 = t;
          if(((r_8 != NULL) && (r_8 != s_8)))
            _fail(s_8);
          else
            r_8 = s_8;
        }
        {
          t = not_null(k_8);
          {
            ATerm v_8 = NULL;
            t = b_55(t);
            {
              t_8 = t;
              {
                t = not_null(l_8);
                {
                  ATerm x_8 = NULL;
                  t = c_55(t);
                  {
                    v_8 = t;
                    {
                      t = not_null(m_8);
                      {
                        ATerm z_8 = NULL;
                        t = d_55(t);
                        {
                          x_8 = t;
                          {
                            ATerm a_9 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(t_8), not_null(v_8), not_null(x_8)), not_null(r_8));
                            {
                              a_9 = t;
                              if(((z_8 != NULL) && (z_8 != a_9)))
                                _fail(a_9);
                              else
                                z_8 = a_9;
                            }
                            t = not_null(z_8);
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
  ATerm i_9 = NULL;
  i_9 = t;
  t = (ATerm) ATmakeAppl(sym_lexical_1, not_null(i_9));
  return(t);
}
ATerm cf_1 (ATerm t, ATerm h_54 (ATerm))
{
  ATerm q_9 = NULL,r_9 = NULL;
  q_9 = t;
  p_9 :
  if(match_cons(q_9, sym_cf_1))
    {
      r_9 = ATgetArgument(q_9, 0);
      {
        ATerm u_9 = NULL,w_9 = NULL;
        ATerm v_9 = NULL;
        t = SSLgetAnnotations(not_null(q_9));
        {
          v_9 = t;
          if(((u_9 != NULL) && (u_9 != v_9)))
            _fail(v_9);
          else
            u_9 = v_9;
        }
        {
          t = not_null(r_9);
          {
            ATerm y_9 = NULL;
            t = h_54(t);
            {
              w_9 = t;
              {
                ATerm z_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, not_null(w_9)), not_null(u_9));
                {
                  z_9 = t;
                  if(((y_9 != NULL) && (y_9 != z_9)))
                    _fail(z_9);
                  else
                    y_9 = z_9;
                }
                t = not_null(y_9);
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
ATerm lex_1 (ATerm t, ATerm i_54 (ATerm))
{
  ATerm j_10 = NULL,k_10 = NULL;
  j_10 = t;
  i_10 :
  if(match_cons(j_10, sym_lex_1))
    {
      k_10 = ATgetArgument(j_10, 0);
      {
        ATerm n_10 = NULL,p_10 = NULL;
        ATerm o_10 = NULL;
        t = SSLgetAnnotations(not_null(j_10));
        {
          o_10 = t;
          if(((n_10 != NULL) && (n_10 != o_10)))
            _fail(o_10);
          else
            n_10 = o_10;
        }
        {
          t = not_null(k_10);
          {
            ATerm r_10 = NULL;
            t = i_54(t);
            {
              p_10 = t;
              {
                ATerm s_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(p_10)), not_null(n_10));
                {
                  s_10 = t;
                  if(((r_10 != NULL) && (r_10 != s_10)))
                    _fail(s_10);
                  else
                    r_10 = s_10;
                }
                t = not_null(r_10);
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
  ATerm c_5 = t;
  int d_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_0 (ATerm t)
      {
        ATerm t_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = lex_1(t, _id);
            return(t);
          }
          t = Cons_2(t, v_0, Nil_0);
          return(t);
        }
        ATerm u_0 (ATerm t)
        {
          t = cf_1(t, _id);
          return(t);
        }
        t = prod_3(t, t_0, u_0, _id);
        return(t);
      }
      t = appl_2(t, s_0, _id);
      {
        t = yield_0(t);
        {
          t = MkLex_0(t);
          t = F_p__0(t);
        }
      }
      LocalPopChoice(d_5);
    }
  else
    {
      t = c_5;
      {
        ATerm w_0 (ATerm t)
        {
          ATerm x_0 (ATerm t)
          {
            t = lit_1(t, _id);
            return(t);
          }
          t = prod_3(t, _id, x_0, _id);
          return(t);
        }
        t = appl_2(t, w_0, _id);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm get_sort_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
  a_11 = t;
  y_10 :
  if(match_cons(a_11, sym_appl_2))
    {
      b_11 = ATgetArgument(a_11, 0);
      f_11 = ATgetArgument(a_11, 1);
      z_10 :
      if(match_cons(b_11, sym_prod_3))
        {
          c_11 = ATgetArgument(b_11, 0);
          d_11 = ATgetArgument(b_11, 1);
          e_11 = ATgetArgument(b_11, 2);
          t = not_null(d_11);
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
ATerm Nsplit_2 (ATerm t, ATerm s_55 (ATerm), ATerm t_55 (ATerm))
{
  ATerm o_11 = NULL;
  ATerm q_11 = NULL,s_11 = NULL;
  o_11 = t;
  {
    ATerm j_5;
    j_5 = t;
    {
      ATerm r_11 = NULL;
      t = not_null(o_11);
      {
        t = s_55(t);
        {
          r_11 = t;
          if(((q_11 != NULL) && (q_11 != r_11)))
            _fail(r_11);
          else
            q_11 = r_11;
        }
      }
    }
    t = j_5;
    {
      ATerm t_11 = NULL;
      t = not_null(o_11);
      {
        t = t_55(t);
        {
          t_11 = t;
          if(((s_11 != NULL) && (s_11 != t_11)))
            _fail(t_11);
          else
            s_11 = t_11;
        }
      }
      t = (ATerm) ATmakeAppl(sym_N_2, not_null(q_11), not_null(s_11));
    }
  }
  return(t);
}
ATerm ProjectAmb_0 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
  a_12 = t;
  y_11 :
  if(match_cons(a_12, sym_amb_1))
    {
      b_12 = ATgetArgument(a_12, 0);
      z_11 :
      if(((ATgetType(b_12) == AT_LIST) && !(ATisEmpty(b_12))))
        {
          c_12 = ATgetFirst((ATermList) b_12);
          d_12 = (ATerm) ATgetNext((ATermList) b_12);
          t = not_null(c_12);
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
  ATerm i_12 = NULL;
  i_12 = t;
  t = SSL_is_int(not_null(i_12));
  return(t);
}
ATerm abbrev_term_0 (ATerm t)
{
  ATerm k_5 = t;
  int n_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_5 = t;
      int p_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_int_0(t);
          LocalPopChoice(p_5);
        }
      else
        {
          t = o_5;
          t = ProjectAmb_0(t);
        }
      LocalPopChoice(n_5);
    }
  else
    {
      t = k_5;
      {
        ATerm y_0 (ATerm t)
        {
          ATerm u_5 = t;
          int v_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Lexical_0(t);
              LocalPopChoice(v_5);
            }
          else
            {
              t = u_5;
              {
                t = get_args_0(t);
                t = map_1(t, abbrev_term_0);
              }
            }
          return(t);
        }
        t = Nsplit_2(t, get_sort_0, y_0);
      }
    }
  return(t);
}
ATerm F_p__0 (ATerm t)
{
  ATerm n_12 = NULL;
  n_12 = t;
  t = (ATerm) ATinsert(ATempty, not_null(n_12));
  return(t);
}
ATerm F_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  r_12 :
  if(match_cons(s_12, sym_appl_2))
    {
      t_12 = ATgetArgument(s_12, 0);
      u_12 = ATgetArgument(s_12, 1);
      {
        t = not_null(u_12);
        t = concat_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm appl_2 (ATerm t, ATerm e_55 (ATerm), ATerm f_55 (ATerm))
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
  e_13 = t;
  d_13 :
  if(match_cons(e_13, sym_appl_2))
    {
      f_13 = ATgetArgument(e_13, 0);
      g_13 = ATgetArgument(e_13, 1);
      {
        ATerm k_13 = NULL,m_13 = NULL;
        ATerm l_13 = NULL;
        t = SSLgetAnnotations(not_null(e_13));
        {
          l_13 = t;
          if(((k_13 != NULL) && (k_13 != l_13)))
            _fail(l_13);
          else
            k_13 = l_13;
        }
        {
          t = not_null(f_13);
          {
            ATerm o_13 = NULL;
            t = e_55(t);
            {
              m_13 = t;
              {
                t = not_null(g_13);
                {
                  ATerm q_13 = NULL;
                  t = f_55(t);
                  {
                    o_13 = t;
                    {
                      ATerm r_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, not_null(m_13), not_null(o_13)), not_null(k_13));
                      {
                        r_13 = t;
                        if(((q_13 != NULL) && (q_13 != r_13)))
                          _fail(r_13);
                        else
                          q_13 = r_13;
                      }
                      t = not_null(q_13);
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
  ATerm x_13 (ATerm t)
  {
    ATerm w_5 = t;
    int b_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 (ATerm t)
        {
          t = map_1(t, x_13);
          return(t);
        }
        t = appl_2(t, _id, z_0);
        t = F_0(t);
        LocalPopChoice(b_6);
      }
    else
      {
        t = w_5;
        t = F_p__0(t);
      }
    return(t);
  }
  t = x_13(t);
  t = implode_string_0(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
  a_14 = t;
  z_13 :
  if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
    {
      b_14 = ATgetFirst((ATermList) a_14);
      c_14 = (ATerm) ATgetNext((ATermList) a_14);
      t = not_null(b_14);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm abbrev_amb_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL;
  j_14 = t;
  i_14 :
  if(match_cons(j_14, sym_amb_1))
    {
      k_14 = ATgetArgument(j_14, 0);
      {
        ATerm m_14 = NULL,o_14 = NULL;
        ATerm c_6;
        c_6 = t;
        {
          ATerm n_14 = NULL;
          t = not_null(k_14);
          {
            t = Hd_0(t);
            {
              t = yield_0(t);
              {
                n_14 = t;
                if(((m_14 != NULL) && (m_14 != n_14)))
                  _fail(n_14);
                else
                  m_14 = n_14;
              }
            }
          }
        }
        t = c_6;
        {
          ATerm p_14 = NULL;
          t = not_null(k_14);
          {
            t = map_1(t, abbrev_term_0);
            {
              p_14 = t;
              if(((o_14 != NULL) && (o_14 != p_14)))
                _fail(p_14);
              else
                o_14 = p_14;
            }
          }
          t = (ATerm) ATmakeAppl(sym_amb_abbr_2, not_null(m_14), not_null(o_14));
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
  ATerm a_1 (ATerm t)
  {
    ATerm b_1 (ATerm t)
    {
      ATerm v_14 = NULL;
      ATerm x_14 = NULL;
      v_14 = t;
      {
        ATerm y_14 = NULL;
        t = not_null(v_14);
        {
          t = abbrev_amb_0(t);
          {
            y_14 = t;
            if(((x_14 != NULL) && (x_14 != y_14)))
              _fail(y_14);
            else
              x_14 = y_14;
          }
        }
        t = (ATerm) ATmakeAppl(sym_root_1, not_null(x_14));
      }
      return(t);
    }
    t = map_1(t, b_1);
    return(t);
  }
  t = parsetree_2(t, a_1, int_to_string_0);
  return(t);
}
ATerm amb_1 (ATerm t, ATerm g_55 (ATerm))
{
  ATerm g_15 = NULL,h_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym_amb_1))
    {
      h_15 = ATgetArgument(g_15, 0);
      {
        ATerm k_15 = NULL,m_15 = NULL;
        ATerm l_15 = NULL;
        t = SSLgetAnnotations(not_null(g_15));
        {
          l_15 = t;
          if(((k_15 != NULL) && (k_15 != l_15)))
            _fail(l_15);
          else
            k_15 = l_15;
        }
        {
          t = not_null(h_15);
          {
            ATerm o_15 = NULL;
            t = g_55(t);
            {
              m_15 = t;
              {
                ATerm p_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, not_null(m_15)), not_null(k_15));
                {
                  p_15 = t;
                  if(((o_15 != NULL) && (o_15 != p_15)))
                    _fail(p_15);
                  else
                    o_15 = p_15;
                }
                t = not_null(o_15);
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
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  w_15 = t;
  v_15 :
  if(match_cons(w_15, sym__2))
    {
      x_15 = ATgetArgument(w_15, 0);
      y_15 = ATgetArgument(w_15, 1);
      if(((x_15 != NULL) && (x_15 != y_15)))
        _fail(y_15);
      else
        x_15 = y_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm q_69 (ATerm), ATerm r_69 (ATerm))
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  d_16 :
  if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
    {
      f_16 = ATgetFirst((ATermList) e_16);
      g_16 = (ATerm) ATgetNext((ATermList) e_16);
      {
        t = r_69(t);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm j_16 = NULL;
            j_16 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_16), not_null(j_16));
              t = q_69(t);
            }
            return(t);
          }
          t = fetch_1(t, c_1);
        }
        t = not_null(g_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm m_69 (ATerm))
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  p_16 = t;
  o_16 :
  if(match_cons(p_16, sym__2))
    {
      q_16 = ATgetArgument(p_16, 0);
      r_16 = ATgetArgument(p_16, 1);
      {
        t = not_null(q_16);
        {
          ATerm v_16 (ATerm t)
          {
            ATerm d_6 = t;
            int e_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_16);
                LocalPopChoice(e_6);
              }
            else
              {
                t = d_6;
                {
                  ATerm j_6 = t;
                  int k_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_1 (ATerm t)
                      {
                        t = not_null(r_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, m_69, d_1);
                      t = v_16(t);
                      LocalPopChoice(k_6);
                    }
                  else
                    {
                      t = j_6;
                      t = Cons_2(t, _id, v_16);
                    }
                }
              }
            return(t);
          }
          t = v_16(t);
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
ATerm foldr_3 (ATerm t, ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm h_70 (ATerm))
{
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_70(t);
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      {
        ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
        a_17 = t;
        z_16 :
        if(((ATgetType(a_17) == AT_LIST) && !(ATisEmpty(a_17))))
          {
            b_17 = ATgetFirst((ATermList) a_17);
            c_17 = (ATerm) ATgetNext((ATermList) a_17);
            {
              ATerm f_17 = NULL,h_17 = NULL;
              ATerm o_6;
              o_6 = t;
              {
                ATerm g_17 = NULL;
                t = not_null(b_17);
                {
                  t = h_70(t);
                  {
                    g_17 = t;
                    if(((f_17 != NULL) && (f_17 != g_17)))
                      _fail(g_17);
                    else
                      f_17 = g_17;
                  }
                }
              }
              t = o_6;
              {
                ATerm i_17 = NULL;
                t = not_null(c_17);
                {
                  t = foldr_3(t, f_70, g_70, h_70);
                  {
                    i_17 = t;
                    if(((h_17 != NULL) && (h_17 != i_17)))
                      _fail(i_17);
                    else
                      h_17 = i_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), not_null(h_17));
                  t = g_70(t);
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
ATerm crush_3 (ATerm t, ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm f_69 (ATerm))
{
  ATerm g_18 = NULL;
  ATerm i_18 = NULL;
  g_18 = t;
  {
    ATerm j_18 = NULL;
    ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
    t = not_null(g_18);
    {
      j_18 = t;
      {
        t = SSL_explode_term(not_null(j_18));
        {
          l_18 = t;
          p_17 :
          if(match_cons(l_18, sym__2))
            {
              m_18 = ATgetArgument(l_18, 0);
              n_18 = ATgetArgument(l_18, 1);
              if(((i_18 != NULL) && (i_18 != n_18)))
                _fail(n_18);
              else
                i_18 = n_18;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_18);
      t = foldr_3(t, d_69, e_69, f_69);
    }
  }
  return(t);
}
ATerm bu_collect_1 (ATerm t, ATerm n_68 (ATerm))
{
  ATerm v_6 = t;
  int w_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_18 (ATerm t)
      {
        ATerm x_6 = t;
        int z_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _some(t, u_18);
            {
              ATerm e_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              ATerm f_1 (ATerm t)
              {
                t = union_1(t, eq_0);
                return(t);
              }
              ATerm g_1 (ATerm t)
              {
                ATerm a_7 = t;
                int b_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2(t, n_68, _id);
                    LocalPopChoice(b_7);
                  }
                else
                  {
                    t = a_7;
                    t = (ATerm) ATempty;
                  }
                return(t);
              }
              t = crush_3(t, e_1, f_1, g_1);
            }
            LocalPopChoice(z_6);
          }
        else
          {
            t = x_6;
            {
              ATerm s_18 = NULL;
              ATerm t_18 = NULL;
              t = n_68(t);
              {
                t_18 = t;
                if(((s_18 != NULL) && (s_18 != t_18)))
                  _fail(t_18);
                else
                  s_18 = t_18;
              }
              t = (ATerm) ATinsert(ATempty, not_null(s_18));
            }
          }
        return(t);
      }
      t = u_18(t);
      LocalPopChoice(w_6);
    }
  else
    {
      t = v_6;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm parsetree_2 (ATerm t, ATerm l_55 (ATerm), ATerm m_55 (ATerm))
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym_parsetree_2))
    {
      d_19 = ATgetArgument(c_19, 0);
      e_19 = ATgetArgument(c_19, 1);
      {
        ATerm i_19 = NULL,k_19 = NULL;
        ATerm j_19 = NULL;
        t = SSLgetAnnotations(not_null(c_19));
        {
          j_19 = t;
          if(((i_19 != NULL) && (i_19 != j_19)))
            _fail(j_19);
          else
            i_19 = j_19;
        }
        {
          t = not_null(d_19);
          {
            ATerm r_19 = NULL;
            t = l_55(t);
            {
              k_19 = t;
              {
                t = not_null(e_19);
                {
                  ATerm t_19 = NULL;
                  t = m_55(t);
                  {
                    r_19 = t;
                    {
                      ATerm u_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, not_null(k_19), not_null(r_19)), not_null(i_19));
                      {
                        u_19 = t;
                        if(((t_19 != NULL) && (t_19 != u_19)))
                          _fail(u_19);
                        else
                          t_19 = u_19;
                      }
                      t = not_null(t_19);
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
  ATerm h_1 (ATerm t)
  {
    ATerm i_1 (ATerm t)
    {
      t = amb_1(t, _id);
      return(t);
    }
    t = bu_collect_1(t, i_1);
    return(t);
  }
  t = parsetree_2(t, h_1, _id);
  return(t);
}
ATerm visamb_0 (ATerm t)
{
  t = collect_ambs_0(t);
  t = abbrev_ambs_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm r_47 (ATerm), ATerm s_47 (ATerm))
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym__2))
    {
      l_20 = ATgetArgument(k_20, 0);
      m_20 = ATgetArgument(k_20, 1);
      {
        ATerm q_20 = NULL,s_20 = NULL;
        ATerm r_20 = NULL;
        t = SSLgetAnnotations(not_null(k_20));
        {
          r_20 = t;
          if(((q_20 != NULL) && (q_20 != r_20)))
            _fail(r_20);
          else
            q_20 = r_20;
        }
        {
          t = not_null(l_20);
          {
            ATerm u_20 = NULL;
            t = r_47(t);
            {
              s_20 = t;
              {
                t = not_null(m_20);
                {
                  ATerm w_20 = NULL;
                  t = s_47(t);
                  {
                    u_20 = t;
                    {
                      ATerm x_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(s_20), not_null(u_20)), not_null(q_20));
                      {
                        x_20 = t;
                        if(((w_20 != NULL) && (w_20 != x_20)))
                          _fail(x_20);
                        else
                          w_20 = x_20;
                      }
                      t = not_null(w_20);
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
ATerm apply_strategy_1 (ATerm t, ATerm r_75 (ATerm))
{
  ATerm g_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
  ATerm g_7;
  g_7 = t;
  t = dtime_0(t);
  t = g_7;
  {
    t = r_75(t);
    {
      ATerm h_7;
      h_7 = t;
      {
        ATerm h_21 = NULL;
        t = dtime_0(t);
        {
          h_21 = t;
          if(((g_21 != NULL) && (g_21 != h_21)))
            _fail(h_21);
          else
            g_21 = h_21;
        }
      }
      t = h_7;
      {
        i_21 = t;
        f_21 :
        if(match_cons(i_21, sym__2))
          {
            j_21 = ATgetArgument(i_21, 0);
            k_21 = ATgetArgument(i_21, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_21)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(g_21))), not_null(k_21));
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
  ATerm q_21 = NULL;
  q_21 = t;
  t = SSL_ReadFromFile(not_null(q_21));
  return(t);
}
ATerm split_2 (ATerm t, ATerm s_71 (ATerm), ATerm t_71 (ATerm))
{
  ATerm v_21 = NULL,x_21 = NULL;
  ATerm i_7;
  i_7 = t;
  {
    ATerm w_21 = NULL;
    t = s_71(t);
    {
      w_21 = t;
      if(((v_21 != NULL) && (v_21 != w_21)))
        _fail(w_21);
      else
        v_21 = w_21;
    }
  }
  t = i_7;
  {
    ATerm y_21 = NULL;
    t = t_71(t);
    {
      y_21 = t;
      if(((x_21 != NULL) && (x_21 != y_21)))
        _fail(y_21);
      else
        x_21 = y_21;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_21), not_null(x_21));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm e_22 = NULL;
  ATerm j_7;
  j_7 = t;
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 (ATerm t)
        {
          ATerm f_22 = NULL,g_22 = NULL;
          f_22 = t;
          c_22 :
          if(match_cons(f_22, sym_Input_1))
            {
              g_22 = ATgetArgument(f_22, 0);
              if(((e_22 != NULL) && (e_22 != g_22)))
                _fail(g_22);
              else
                e_22 = g_22;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, j_1);
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        {
          ATerm h_22 = NULL;
          t = term_m_7;
          {
            h_22 = t;
            if(((e_22 != NULL) && (e_22 != h_22)))
              _fail(h_22);
            else
              e_22 = h_22;
          }
        }
      }
  }
  t = j_7;
  {
    ATerm k_1 (ATerm t)
    {
      t = not_null(e_22);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, k_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm l_22 = NULL;
    l_22 = t;
    k_22 :
    if(!(match_string(l_22, "-v")))
      {
        if(!(match_string(l_22, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = term_v_7;
    t = set_config_0(t);
    t = term_y_7;
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    t = term_z_7;
    return(t);
  }
  t = Option_3(t, l_1, m_1, n_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm o_22 = NULL;
    o_22 = t;
    m_22 :
    if(!(match_string(o_22, "-k")))
      {
        if(!(match_string(o_22, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    ATerm a_8;
    a_8 = t;
    {
      ATerm p_22 = NULL;
      ATerm q_22 = NULL;
      t = string_to_int_0(t);
      {
        q_22 = t;
        if(((p_22 != NULL) && (p_22 != q_22)))
          _fail(q_22);
        else
          p_22 = q_22;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_8, not_null(p_22));
        t = set_config_0(t);
      }
    }
    t = a_8;
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    t = term_c_8;
    return(t);
  }
  t = ArgOption_3(t, o_1, p_1, q_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm t_22 = NULL;
  t_22 = t;
  t = SSL_string_to_int(not_null(t_22));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm d_8 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 (ATerm t)
      {
        ATerm b_23 = NULL;
        b_23 = t;
        w_22 :
        if(!(match_string(b_23, "-S")))
          {
            if(!(match_string(b_23, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        t = term_f_8;
        t = set_config_0(t);
        t = term_g_8;
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        t = term_h_8;
        return(t);
      }
      t = Option_3(t, r_1, s_1, t_1);
      LocalPopChoice(e_8);
    }
  else
    {
      t = d_8;
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 (ATerm t)
            {
              ATerm c_23 = NULL;
              c_23 = t;
              x_22 :
              if(!(match_string(c_23, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              ATerm f_23 = NULL;
              ATerm p_8;
              p_8 = t;
              {
                ATerm d_23 = NULL;
                ATerm e_23 = NULL;
                t = string_to_int_0(t);
                {
                  e_23 = t;
                  if(((d_23 != NULL) && (d_23 != e_23)))
                    _fail(e_23);
                  else
                    d_23 = e_23;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_4, not_null(d_23));
                  t = set_config_0(t);
                }
              }
              t = p_8;
              {
                ATerm g_23 = NULL;
                g_23 = t;
                if(((f_23 != NULL) && (f_23 != g_23)))
                  _fail(g_23);
                else
                  f_23 = g_23;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(f_23));
              }
              return(t);
            }
            ATerm w_1 (ATerm t)
            {
              t = term_q_8;
              return(t);
            }
            t = ArgOption_3(t, u_1, v_1, w_1);
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            {
              ATerm x_1 (ATerm t)
              {
                ATerm h_23 = NULL;
                h_23 = t;
                a_23 :
                if(!(match_string(h_23, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm y_1 (ATerm t)
              {
                t = term_w_8;
                t = set_config_0(t);
                t = term_y_8;
                return(t);
              }
              ATerm z_1 (ATerm t)
              {
                t = term_b_9;
                return(t);
              }
              t = Option_3(t, x_1, y_1, z_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm n_23 = NULL;
    n_23 = t;
    k_23 :
    if(!(match_string(n_23, "-o")))
      {
        if(!(match_string(n_23, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    ATerm q_23 = NULL;
    ATerm g_9;
    g_9 = t;
    {
      ATerm o_23 = NULL;
      ATerm p_23 = NULL;
      p_23 = t;
      if(((o_23 != NULL) && (o_23 != p_23)))
        _fail(p_23);
      else
        o_23 = p_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_9, not_null(o_23));
        t = set_config_0(t);
      }
    }
    t = g_9;
    {
      ATerm r_23 = NULL;
      r_23 = t;
      if(((q_23 != NULL) && (q_23 != r_23)))
        _fail(r_23);
      else
        q_23 = r_23;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_23));
    }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_j_9;
    return(t);
  }
  t = ArgOption_3(t, a_2, b_2, c_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      {
        ATerm d_2 (ATerm t)
        {
          ATerm v_23 = NULL;
          v_23 = t;
          u_23 :
          if(!(match_string(v_23, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm e_2 (ATerm t)
        {
          t = term_n_9;
          t = set_config_0(t);
          t = term_o_9;
          return(t);
        }
        ATerm f_2 (ATerm t)
        {
          t = term_s_9;
          return(t);
        }
        t = Option_3(t, d_2, e_2, f_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL;
  b_24 = t;
  z_23 :
  if(match_string(b_24, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(b_24) == AT_LIST) && !(ATisEmpty(b_24))))
        {
          c_24 = ATgetFirst((ATermList) b_24);
          d_24 = (ATerm) ATgetNext((ATermList) b_24);
          a_24 :
          if(((ATgetType(d_24) == AT_LIST) && !(ATisEmpty(d_24))))
            {
              e_24 = ATgetFirst((ATermList) d_24);
              f_24 = (ATerm) ATgetNext((ATermList) d_24);
              {
                ATerm j_24 = NULL;
                ATerm t_9;
                t_9 = t;
                {
                  t = not_null(c_24);
                  t = l_0(t);
                }
                t = t_9;
                {
                  ATerm k_24 = NULL;
                  t = not_null(e_24);
                  {
                    t = m_0(t);
                    {
                      k_24 = t;
                      if(((j_24 != NULL) && (j_24 != k_24)))
                        _fail(k_24);
                      else
                        j_24 = k_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_24)), not_null(j_24));
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
ATerm input_option_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm r_24 = NULL;
    r_24 = t;
    o_24 :
    if(!(match_string(r_24, "-i")))
      {
        if(!(match_string(r_24, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm u_24 = NULL;
    ATerm x_9;
    x_9 = t;
    {
      ATerm s_24 = NULL;
      ATerm t_24 = NULL;
      t_24 = t;
      if(((s_24 != NULL) && (s_24 != t_24)))
        _fail(t_24);
      else
        s_24 = t_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_10, not_null(s_24));
        t = set_config_0(t);
      }
    }
    t = x_9;
    {
      ATerm x_24 = NULL;
      x_24 = t;
      if(((u_24 != NULL) && (u_24 != x_24)))
        _fail(x_24);
      else
        u_24 = x_24;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_24));
    }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_b_10;
    return(t);
  }
  t = ArgOption_3(t, g_2, h_2, i_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  t = SSL_table_destroy(not_null(d_25));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  t = SSL_exit(not_null(k_25));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
  o_25 = t;
  n_25 :
  if(((ATgetType(o_25) == AT_LIST) && ATisEmpty(o_25)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(o_25) == AT_LIST) && !(ATisEmpty(o_25))))
        {
          p_25 = ATgetFirst((ATermList) o_25);
          q_25 = (ATerm) ATgetNext((ATermList) o_25);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm g_10;
  g_10 = t;
  {
    ATerm x_25 = NULL;
    ATerm a_26 = NULL;
    ATerm h_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(l_10);
      }
    else
      {
        t = h_10;
        {
          ATerm y_25 = NULL;
          ATerm z_25 = NULL;
          z_25 = t;
          if(((y_25 != NULL) && (y_25 != z_25)))
            _fail(z_25);
          else
            y_25 = z_25;
          t = (ATerm) ATinsert(ATempty, not_null(y_25));
        }
      }
    {
      a_26 = t;
      if(((x_25 != NULL) && (x_25 != a_26)))
        _fail(a_26);
      else
        x_25 = a_26;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_4, not_null(x_25));
      t = printnl_0(t);
    }
  }
  t = g_10;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_11), term_x_10), term_w_10), term_v_10), term_u_10), term_t_10), term_q_10), term_m_10);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  l_26 = t;
  i_26 :
  if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
    {
      j_26 = ATgetFirst((ATermList) l_26);
      k_26 = (ATerm) ATgetNext((ATermList) l_26);
      {
        ATerm o_26 = NULL;
        t = not_null(k_26);
        {
          ATerm h_11;
          h_11 = t;
          {
            ATerm p_26 = NULL,r_26 = NULL,t_26 = NULL;
            ATerm i_11;
            i_11 = t;
            {
              ATerm q_26 = NULL;
              t = j_0(t);
              {
                q_26 = t;
                if(((p_26 != NULL) && (p_26 != q_26)))
                  _fail(q_26);
                else
                  p_26 = q_26;
              }
            }
            t = i_11;
            {
              ATerm s_26 = NULL;
              t = not_null(j_26);
              {
                t = i_0(t);
                {
                  s_26 = t;
                  if(((r_26 != NULL) && (r_26 != s_26)))
                    _fail(s_26);
                  else
                    r_26 = s_26;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_26)), not_null(r_26));
                {
                  t_26 = t;
                  if(((o_26 != NULL) && (o_26 != t_26)))
                    _fail(t_26);
                  else
                    o_26 = t_26;
                }
              }
            }
          }
          t = h_11;
          {
            ATerm j_2 (ATerm t)
            {
              t = not_null(o_26);
              return(t);
            }
            t = reverse_acc_2(t, i_0, j_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(l_26) == AT_LIST) && ATisEmpty(l_26)))
        {
          {
            t = term_r_7;
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
  ATerm k_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, k_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm a_27 = NULL;
  ATerm b_27 = NULL;
  t = term_r_7;
  {
    t = h_0(t);
    {
      b_27 = t;
      if(((a_27 != NULL) && (a_27 != b_27)))
        _fail(b_27);
      else
        a_27 = b_27;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), not_null(a_27)), term_j_11);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_54 (ATerm))
{
  ATerm i_27 = NULL,j_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_Program_1))
    {
      j_27 = ATgetArgument(i_27, 0);
      {
        ATerm m_27 = NULL,o_27 = NULL;
        ATerm n_27 = NULL;
        t = SSLgetAnnotations(not_null(i_27));
        {
          n_27 = t;
          if(((m_27 != NULL) && (m_27 != n_27)))
            _fail(n_27);
          else
            m_27 = n_27;
        }
        {
          t = not_null(j_27);
          {
            ATerm q_27 = NULL;
            t = a_54(t);
            {
              o_27 = t;
              {
                ATerm r_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(o_27)), not_null(m_27));
                {
                  r_27 = t;
                  if(((q_27 != NULL) && (q_27 != r_27)))
                    _fail(r_27);
                  else
                    q_27 = r_27;
                }
                t = not_null(q_27);
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
  ATerm a_28 = NULL;
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_28 = NULL;
      t = term_i_4;
      {
        t = get_config_0(t);
        {
          b_28 = t;
          if(((a_28 != NULL) && (a_28 != b_28)))
            _fail(b_28);
          else
            a_28 = b_28;
        }
      }
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm l_2 (ATerm t)
        {
          ATerm m_2 (ATerm t)
          {
            ATerm c_28 = NULL;
            c_28 = t;
            if(((a_28 != NULL) && (a_28 != c_28)))
              _fail(c_28);
            else
              a_28 = c_28;
            return(t);
          }
          t = Program_1(t, m_2);
          return(t);
        }
        t = fetch_1(t, l_2);
      }
    }
  {
    ATerm n_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_2 (ATerm t)
        {
          t = not_null(a_28);
          return(t);
        }
        t = short_description_1(t, n_2);
        t = echo_0(t);
        LocalPopChoice(p_11);
      }
    else
      {
        t = n_11;
        {
        }
      }
    {
      t = term_u_11;
      {
        t = echo_0(t);
        {
          t = term_x_11;
          {
            t = table_get_0(t);
            {
              ATerm o_2 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, o_2);
              {
                ATerm p_2 (ATerm t)
                {
                  ATerm d_28 = NULL;
                  ATerm e_28 = NULL;
                  e_28 = t;
                  if(((d_28 != NULL) && (d_28 != e_28)))
                    _fail(e_28);
                  else
                    d_28 = e_28;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_28)), term_e_12);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, p_2);
                {
                  ATerm f_12 = t;
                  int g_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_28 = NULL;
                      ATerm g_28 = NULL;
                      ATerm q_2 (ATerm t)
                      {
                        t = not_null(a_28);
                        return(t);
                      }
                      t = long_description_1(t, q_2);
                      {
                        g_28 = t;
                        if(((f_28 != NULL) && (f_28 != g_28)))
                          _fail(g_28);
                        else
                          f_28 = g_28;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(f_28)), term_h_12);
                        t = echo_0(t);
                      }
                      LocalPopChoice(g_12);
                    }
                  else
                    {
                      t = f_12;
                      {
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
ATerm debug_0 (ATerm t)
{
  ATerm j_12;
  j_12 = t;
  {
    ATerm m_28 = NULL;
    ATerm n_28 = NULL;
    n_28 = t;
    if(((m_28 != NULL) && (m_28 != n_28)))
      _fail(n_28);
    else
      m_28 = n_28;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_3, (ATerm) ATinsert(ATempty, not_null(m_28)));
      t = printnl_0(t);
    }
  }
  t = j_12;
  return(t);
}
ATerm say_1 (ATerm t, ATerm o_74 (ATerm))
{
  ATerm k_12;
  k_12 = t;
  {
    t = o_74(t);
    t = debug_0(t);
  }
  t = k_12;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_54 (ATerm))
{
  ATerm u_28 = NULL,v_28 = NULL;
  u_28 = t;
  t_28 :
  if(match_cons(u_28, sym_Undefined_1))
    {
      v_28 = ATgetArgument(u_28, 0);
      {
        ATerm y_28 = NULL,a_29 = NULL;
        ATerm z_28 = NULL;
        t = SSLgetAnnotations(not_null(u_28));
        {
          z_28 = t;
          if(((y_28 != NULL) && (y_28 != z_28)))
            _fail(z_28);
          else
            y_28 = z_28;
        }
        {
          t = not_null(v_28);
          {
            ATerm c_29 = NULL;
            t = b_54(t);
            {
              a_29 = t;
              {
                ATerm d_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_29)), not_null(y_28));
                {
                  d_29 = t;
                  if(((c_29 != NULL) && (c_29 != d_29)))
                    _fail(d_29);
                  else
                    c_29 = d_29;
                }
                t = not_null(c_29);
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
ATerm fetch_1 (ATerm t, ATerm y_63 (ATerm))
{
  ATerm i_29 (ATerm t)
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_63, _id);
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        t = Cons_2(t, _id, i_29);
      }
    return(t);
  }
  t = i_29(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_78 (ATerm))
{
  t = fetch_1(t, m_78);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_29 = NULL;
  n_29 = t;
  m_29 :
  if(match_cons(n_29, sym_Help_0))
    {
      ATerm p_29 = NULL,r_29 = NULL;
      ATerm o_12;
      o_12 = t;
      {
        ATerm q_29 = NULL;
        t = SSLgetAnnotations(not_null(n_29));
        {
          q_29 = t;
          if(((p_29 != NULL) && (p_29 != q_29)))
            _fail(q_29);
          else
            p_29 = q_29;
        }
      }
      t = o_12;
      {
        ATerm s_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_29));
        {
          s_29 = t;
          if(((r_29 != NULL) && (r_29 != s_29)))
            _fail(s_29);
          else
            r_29 = s_29;
        }
        t = not_null(r_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm x_29 = NULL;
  x_29 = t;
  t = SSL_implode_string(not_null(x_29));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      {
        ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
        c_30 = t;
        b_30 :
        if(((ATgetType(c_30) == AT_LIST) && !(ATisEmpty(c_30))))
          {
            d_30 = ATgetFirst((ATermList) c_30);
            e_30 = (ATerm) ATgetNext((ATermList) c_30);
            {
              t = not_null(d_30);
              {
                ATerm r_2 (ATerm t)
                {
                  t = not_null(e_30);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, r_2);
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
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm o_30 = NULL;
  ATerm q_30 = NULL;
  o_30 = t;
  {
    ATerm r_30 = NULL;
    ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
    t = not_null(o_30);
    {
      r_30 = t;
      {
        t = SSL_explode_term(not_null(r_30));
        {
          t_30 = t;
          m_30 :
          if(match_cons(t_30, sym__2))
            {
              u_30 = ATgetArgument(t_30, 0);
              v_30 = ATgetArgument(t_30, 1);
              n_30 :
              if(match_string(u_30, ""))
                {
                  if(((q_30 != NULL) && (q_30 != v_30)))
                    _fail(v_30);
                  else
                    q_30 = v_30;
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
      }
    }
    {
      t = not_null(q_30);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_64 (ATerm))
{
  ATerm z_30 (ATerm t)
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_30);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        {
          t = Nil_0(t);
          t = e_64(t);
        }
      }
    return(t);
  }
  t = z_30(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
  c_31 = t;
  b_31 :
  if(match_cons(c_31, sym__2))
    {
      d_31 = ATgetArgument(c_31, 0);
      e_31 = ATgetArgument(c_31, 1);
      {
        t = not_null(d_31);
        {
          ATerm s_2 (ATerm t)
          {
            t = not_null(e_31);
            return(t);
          }
          t = at_end_1(t, s_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_31 = NULL;
  j_31 = t;
  t = SSL_explode_string(not_null(j_31));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  n_31 :
  if(match_cons(o_31, sym__2))
    {
      p_31 = ATgetArgument(o_31, 0);
      q_31 = ATgetArgument(o_31, 1);
      {
        ATerm b_13;
        b_13 = t;
        t = SSL_printnl(not_null(p_31), not_null(q_31));
        t = b_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm n_74 (ATerm))
{
  ATerm c_13;
  c_13 = t;
  {
    ATerm w_31 = NULL,y_31 = NULL;
    ATerm h_13;
    h_13 = t;
    {
      ATerm x_31 = NULL;
      t = n_74(t);
      {
        x_31 = t;
        if(((w_31 != NULL) && (w_31 != x_31)))
          _fail(x_31);
        else
          w_31 = x_31;
      }
    }
    t = h_13;
    {
      ATerm z_31 = NULL;
      z_31 = t;
      if(((y_31 != NULL) && (y_31 != z_31)))
        _fail(z_31);
      else
        y_31 = z_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_31)), not_null(w_31)));
        t = printnl_0(t);
      }
    }
  }
  t = c_13;
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_63 (ATerm))
{
  ATerm c_32 (ATerm t)
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        t = Cons_2(t, p_63, c_32);
      }
    return(t);
  }
  t = c_32(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  t = SSL_is_string(not_null(e_32));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(p_13);
    }
  else
    {
      t = n_13;
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              ATerm u_13 = t;
              int v_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(v_13);
                }
              else
                {
                  t = u_13;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, t_2);
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            {
              ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
              q_32 = t;
              p_32 :
              if(match_cons(q_32, sym_Path_1))
                {
                  r_32 = ATgetArgument(q_32, 0);
                  t = not_null(r_32);
                }
              else
                {
                  if(match_cons(q_32, sym_Var_1))
                    {
                      r_32 = ATgetArgument(q_32, 0);
                      {
                        t = not_null(r_32);
                        {
                          ATerm w_13 = t;
                          int y_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(y_13);
                            }
                          else
                            {
                              t = w_13;
                              {
                                ATerm v_2 (ATerm t)
                                {
                                  t = term_d_14;
                                  return(t);
                                }
                                t = debug_1(t, v_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(q_32, sym_Prefix_2))
                        {
                          r_32 = ATgetArgument(q_32, 0);
                          s_32 = ATgetArgument(q_32, 1);
                          {
                            ATerm x_32 = NULL,z_32 = NULL;
                            ATerm e_14;
                            e_14 = t;
                            {
                              ATerm y_32 = NULL;
                              t = not_null(r_32);
                              {
                                t = eval_config_0(t);
                                {
                                  y_32 = t;
                                  if(((x_32 != NULL) && (x_32 != y_32)))
                                    _fail(y_32);
                                  else
                                    x_32 = y_32;
                                }
                              }
                            }
                            t = e_14;
                            {
                              ATerm a_33 = NULL;
                              t = not_null(s_32);
                              {
                                t = eval_config_0(t);
                                {
                                  a_33 = t;
                                  if(((z_32 != NULL) && (z_32 != a_33)))
                                    _fail(a_33);
                                  else
                                    z_32 = a_33;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_32), not_null(z_32));
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
  ATerm i_33 = NULL;
  i_33 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_14, not_null(i_33));
    {
      t = table_get_0(t);
      {
        ATerm g_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm l_14;
              l_14 = t;
              {
                ATerm k_33 = NULL;
                ATerm l_33 = NULL;
                l_33 = t;
                if(((k_33 != NULL) && (k_33 != l_33)))
                  _fail(l_33);
                else
                  k_33 = l_33;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_f_14, not_null(i_33), not_null(k_33));
                  t = table_put_0(t);
                }
              }
              t = l_14;
            }
            LocalPopChoice(h_14);
          }
        else
          {
            t = g_14;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm y_55 (ATerm))
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_55(t);
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
  q_33 = t;
  p_33 :
  if(match_cons(q_33, sym__2))
    {
      r_33 = ATgetArgument(q_33, 0);
      s_33 = ATgetArgument(q_33, 1);
      t = SSL_table_get(not_null(r_33), not_null(s_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,g_34 = NULL,h_34 = NULL;
  b_34 = t;
  a_34 :
  if(match_cons(b_34, sym__3))
    {
      c_34 = ATgetArgument(b_34, 0);
      g_34 = ATgetArgument(b_34, 1);
      h_34 = ATgetArgument(b_34, 2);
      {
        ATerm s_14;
        s_14 = t;
        {
          ATerm l_34 = NULL;
          ATerm m_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_34), not_null(g_34));
          {
            ATerm t_14 = t;
            int u_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_14);
              }
            else
              {
                t = t_14;
                t = (ATerm) ATempty;
              }
            {
              m_34 = t;
              if(((l_34 != NULL) && (l_34 != m_34)))
                _fail(m_34);
              else
                l_34 = m_34;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_34), not_null(g_34), (ATerm) ATinsert(CheckATermList(not_null(l_34)), not_null(h_34)));
            t = table_put_0(t);
          }
        }
        t = s_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_79 (ATerm))
{
  ATerm q_34 = NULL;
  ATerm r_34 = NULL;
  t = term_r_7;
  {
    t = r_79(t);
    {
      r_34 = t;
      if(((q_34 != NULL) && (q_34 != r_34)))
        _fail(r_34);
      else
        q_34 = r_34;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_11, term_w_11, not_null(q_34));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
  x_34 = t;
  w_34 :
  if(match_string(x_34, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(x_34) == AT_LIST) && !(ATisEmpty(x_34))))
        {
          y_34 = ATgetFirst((ATermList) x_34);
          z_34 = (ATerm) ATgetNext((ATermList) x_34);
          {
            ATerm c_35 = NULL;
            ATerm w_14;
            w_14 = t;
            {
              t = not_null(y_34);
              t = a_0(t);
            }
            t = w_14;
            {
              ATerm d_35 = NULL;
              t = term_r_7;
              {
                t = d_0(t);
                {
                  d_35 = t;
                  if(((c_35 != NULL) && (c_35 != d_35)))
                    _fail(d_35);
                  else
                    c_35 = d_35;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_34)), not_null(c_35));
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
    ATerm l_35 = NULL;
    l_35 = t;
    j_35 :
    if(!(match_string(l_35, "--help")))
      {
        if(!(match_string(l_35, "-h")))
          {
            if(!(match_string(l_35, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_a_15;
    {
      t = set_config_0(t);
      t = term_b_15;
    }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_c_15;
    return(t);
  }
  t = Option_3(t, w_2, x_2, y_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
  o_35 = t;
  n_35 :
  if(((ATgetType(o_35) == AT_LIST) && !(ATisEmpty(o_35))))
    {
      p_35 = ATgetFirst((ATermList) o_35);
      q_35 = (ATerm) ATgetNext((ATermList) o_35);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_35)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_35)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_49 (ATerm), ATerm b_49 (ATerm))
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  z_35 :
  if(((ATgetType(a_36) == AT_LIST) && !(ATisEmpty(a_36))))
    {
      b_36 = ATgetFirst((ATermList) a_36);
      c_36 = (ATerm) ATgetNext((ATermList) a_36);
      {
        ATerm g_36 = NULL,i_36 = NULL;
        ATerm h_36 = NULL;
        t = SSLgetAnnotations(not_null(a_36));
        {
          h_36 = t;
          if(((g_36 != NULL) && (g_36 != h_36)))
            _fail(h_36);
          else
            g_36 = h_36;
        }
        {
          t = not_null(b_36);
          {
            ATerm k_36 = NULL;
            t = a_49(t);
            {
              i_36 = t;
              {
                t = not_null(c_36);
                {
                  ATerm m_36 = NULL;
                  t = b_49(t);
                  {
                    k_36 = t;
                    {
                      ATerm n_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(k_36)), not_null(i_36)), not_null(g_36));
                      {
                        n_36 = t;
                        if(((m_36 != NULL) && (m_36 != n_36)))
                          _fail(n_36);
                        else
                          m_36 = n_36;
                      }
                      t = not_null(m_36);
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
  ATerm f_37 = NULL;
  f_37 = t;
  e_37 :
  if(((ATgetType(f_37) == AT_LIST) && ATisEmpty(f_37)))
    {
      {
        ATerm h_37 = NULL,j_37 = NULL;
        ATerm d_15;
        d_15 = t;
        {
          ATerm i_37 = NULL;
          t = SSLgetAnnotations(not_null(f_37));
          {
            i_37 = t;
            if(((h_37 != NULL) && (h_37 != i_37)))
              _fail(i_37);
            else
              h_37 = i_37;
          }
        }
        t = d_15;
        {
          ATerm k_37 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_37));
          {
            k_37 = t;
            if(((j_37 != NULL) && (j_37 != k_37)))
              _fail(k_37);
            else
              j_37 = k_37;
          }
          t = not_null(j_37);
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
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
  q_37 = t;
  p_37 :
  if(match_cons(q_37, sym__2))
    {
      r_37 = ATgetArgument(q_37, 0);
      s_37 = ATgetArgument(q_37, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_14, not_null(r_37), not_null(s_37));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_79 (ATerm))
{
  ATerm e_15;
  e_15 = t;
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_15;
        t = p_79(t);
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        {
        }
      }
  }
  t = e_15;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm a_38 = NULL;
      ATerm q_15;
      q_15 = t;
      {
        ATerm y_37 = NULL;
        ATerm z_37 = NULL;
        z_37 = t;
        if(((y_37 != NULL) && (y_37 != z_37)))
          _fail(z_37);
        else
          y_37 = z_37;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_4, not_null(y_37));
          t = set_config_0(t);
        }
      }
      t = q_15;
      {
        ATerm b_38 = NULL;
        b_38 = t;
        if(((a_38 != NULL) && (a_38 != b_38)))
          _fail(b_38);
        else
          a_38 = b_38;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_38));
      }
      return(t);
    }
    ATerm a_3 (ATerm t)
    {
      ATerm r_15 = t;
      int s_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_15 = t;
          int u_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_15);
            }
          else
            {
              t = t_15;
              {
                t = p_79(t);
                t = Cons_2(t, _id, a_3);
              }
            }
          LocalPopChoice(s_15);
        }
      else
        {
          t = r_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_2, a_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
  ATerm z_15;
  z_15 = t;
  {
    ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
    k_38 = t;
    g_38 :
    if(match_cons(k_38, sym__3))
      {
        l_38 = ATgetArgument(k_38, 0);
        m_38 = ATgetArgument(k_38, 1);
        n_38 = ATgetArgument(k_38, 2);
        {
          if(((h_38 != NULL) && (h_38 != l_38)))
            _fail(l_38);
          else
            h_38 = l_38;
          {
            if(((i_38 != NULL) && (i_38 != m_38)))
              _fail(m_38);
            else
              i_38 = m_38;
            {
              if(((j_38 != NULL) && (j_38 != n_38)))
                _fail(n_38);
              else
                j_38 = n_38;
              t = SSL_table_put(not_null(h_38), not_null(i_38), not_null(j_38));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = z_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_79 (ATerm))
{
  ATerm q_38 = NULL;
  ATerm a_16;
  a_16 = t;
  {
    t = term_b_16;
    t = table_put_0(t);
  }
  t = a_16;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm c_16 = t;
      int h_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_79(t);
          LocalPopChoice(h_16);
        }
      else
        {
          t = c_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_3);
    {
      ATerm i_16 = t;
      int k_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_16;
          l_16 = t;
          {
            ATerm m_16 = t;
            int n_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_z_14;
                t = get_config_0(t);
                LocalPopChoice(n_16);
              }
            else
              {
                t = m_16;
                t = fetch_1(t, Help_0);
              }
          }
          t = l_16;
          {
            t = system_usage_0(t);
            {
              t = term_r_3;
              t = exit_0(t);
            }
          }
          LocalPopChoice(k_16);
        }
      else
        {
          t = i_16;
          {
            ATerm s_16 = t;
            int t_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_3 (ATerm t)
                {
                  ATerm d_3 (ATerm t)
                  {
                    ATerm r_38 = NULL;
                    r_38 = t;
                    if(((q_38 != NULL) && (q_38 != r_38)))
                      _fail(r_38);
                    else
                      q_38 = r_38;
                    return(t);
                  }
                  t = Undefined_1(t, d_3);
                  return(t);
                }
                t = fetch_1(t, c_3);
                {
                  ATerm e_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_38)), term_u_16);
                    return(t);
                  }
                  t = say_1(t, e_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_i_3;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(t_16);
              }
            else
              {
                t = s_16;
                {
                }
              }
          }
        }
      {
        ATerm w_16;
        w_16 = t;
        {
          t = term_v_11;
          t = table_destroy_0(t);
        }
        t = w_16;
      }
    }
  }
  return(t);
}
ATerm Vis_amb_0 (ATerm t)
{
  t = parse_options_1(t, io_options_0);
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_file_0(t);
        {
          ATerm f_3 (ATerm t)
          {
            t = _2(t, _id, visamb_0);
            return(t);
          }
          t = apply_strategy_1(t, f_3);
          {
            t = output_file_0(t);
            t = report_success_0(t);
          }
        }
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
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
