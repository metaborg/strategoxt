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
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_Scopes_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Op_2;
Symbol sym_Id_0;
Symbol sym_Path_2;
Symbol sym_TreeGrammar_1;
Symbol sym_NonTermRef_2;
Symbol sym_NonTermDec_3;
Symbol sym_Prod_2;
Symbol sym_NonTermRef_2;
Symbol sym_Param_1;
Symbol sym_String_0;
Symbol sym_Int_0;
Symbol sym_Id_1;
Symbol sym_NonTermRef_2;
Symbol sym_Param_1;
Symbol sym_String_0;
Symbol sym_Int_0;
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_TreeGrammar_1 = ATmakeSymbol("TreeGrammar", 1, ATfalse);
  ATprotectSymbol(sym_TreeGrammar_1);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_NonTermDec_3 = ATmakeSymbol("NonTermDec", 3, ATfalse);
  ATprotectSymbol(sym_NonTermDec_3);
  sym_Prod_2 = ATmakeSymbol("Prod", 2, ATfalse);
  ATprotectSymbol(sym_Prod_2);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_Param_1 = ATmakeSymbol("Param", 1, ATfalse);
  ATprotectSymbol(sym_Param_1);
  sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
  ATprotectSymbol(sym_String_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_Param_1 = ATmakeSymbol("Param", 1, ATfalse);
  ATprotectSymbol(sym_Param_1);
  sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
  ATprotectSymbol(sym_String_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_d_20;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_w_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_k_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_o_14;
ATerm term_j_14;
ATerm term_x_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_m_12;
ATerm term_i_12;
ATerm term_e_12;
ATerm term_w_10;
ATerm term_j_10;
ATerm term_q_9;
ATerm term_j_9;
ATerm term_d_9;
ATerm term_z_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_m_8;
void init_constant_terms (void)
{
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_String_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Param", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym__2, term_o_14, term_w_10);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_10);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym__2, term_a_15, term_m_8);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_p_15);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_m_8);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__2, term_a_17, term_m_8);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__2, term_n_16, term_m_8);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_m_8);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_94 (ATerm), ATerm);
ATerm build_group_by_pairs_4_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm);
ATerm l_0 (ATerm);
ATerm o_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm group_by_3_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm);
ATerm c_5 (ATerm b_56, ATerm c_56, ATerm);
ATerm z_0 (ATerm);
ATerm to_dec_prod_item_0_0 (ATerm);
ATerm d_5 (ATerm c_113 (ATerm), ATerm o_65, ATerm m_65, ATerm);
ATerm map_with_index_1_0 (ATerm l_92 (ATerm), ATerm);
ATerm f_5 (ATerm v_55, ATerm w_55, ATerm);
ATerm end_scope_1_0 (ATerm z_112 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm y_112 (ATerm), ATerm);
ATerm scope_2_0 (ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm);
ATerm d_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm to_prod_items_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm t_1 (ATerm);
ATerm b_2 (ATerm);
ATerm g_5 (ATerm v_30, ATerm z_30, ATerm);
ATerm h_5 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm o_63, ATerm n_63, ATerm);
ATerm i_5 (ATerm a_110 (ATerm), ATerm k_63, ATerm j_63, ATerm);
ATerm foldr_3_0 (ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm);
ATerm e_2 (ATerm);
ATerm collect_om_2_0 (ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm stratego_ast_to_tg_0_0 (ATerm);
ATerm l_5 (ATerm c_33, ATerm d_33, ATerm);
ATerm m_5 (ATerm i_49, ATerm j_49, ATerm);
ATerm o_5 (ATerm w_98 (ATerm), ATerm c_371, ATerm m_49, ATerm);
ATerm n_5 (ATerm e_49, ATerm f_49, ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_84 (ATerm), ATerm);
ATerm m_18 (ATerm f_18, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm p_5 (ATerm k_49, ATerm);
ATerm q_5 (ATerm e_33, ATerm f_33, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_20 (ATerm e_19, ATerm);
ATerm w_20 (ATerm k_19, ATerm l_19, ATerm m_19, ATerm);
ATerm x_20 (ATerm v_19, ATerm w_19, ATerm x_19, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm y_90 (ATerm), ATerm);
ATerm k_5 (ATerm z_44, ATerm a_45, ATerm);
ATerm debug_1_0 (ATerm u_98 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm f_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm z_108 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm b_4 (ATerm);
ATerm g_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm w_5 (ATerm j_60, ATerm k_60, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm q_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_5 (ATerm q_55, ATerm r_55, ATerm p_55, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm e_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm r_5 (ATerm l_50, ATerm m_50, ATerm);
ATerm foldr_2_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm s_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm need_help_1_0 (ATerm e_85 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm t_5 (ATerm h_57, ATerm i_57, ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm h_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm y_6 (ATerm);
ATerm b_7 (ATerm);
ATerm e_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm k_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm f_101 (ATerm), ATerm);
ATerm m_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm parse_options_1_0 (ATerm e_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm);
ATerm t_7 (ATerm);
ATerm x_7 (ATerm);
ATerm z_7 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm iowrap_3_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm);
ATerm l_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_0 = NULL,m_0 = NULL,n_0 = NULL,p_0 = NULL,q_0 = NULL;
  h_0 = t;
  t = term_m_8;
  t = whoami_0_0(t);
  m_0 = t;
  t = term_o_8;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_8), m_0), term_q_8);
  q_0 = t;
  t = SSL_printnl(p_0, q_0);
  t = term_s_8;
  n_0 = t;
  t = SSL_exit(n_0);
  t = h_0;
  return(t);
}
ATerm filter_1_0 (ATerm r_94 (ATerm), ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL;
  m_1 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_1;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_1 = ATgetFirst((ATermList) t);
          o_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 = NULL,u_0 = NULL,v_0 = NULL,x_0 = NULL;
            t = SSLgetAnnotations(m_1);
            r_0 = t;
            t = n_1;
            t = r_94(t);
            u_0 = t;
            t = o_1;
            t = filter_1_0(r_94, t);
            v_0 = t;
            t = (ATerm) ATinsert(CheckATermList(v_0), u_0);
            x_0 = t;
            t = SSLsetAnnotations(x_0, r_0);
            ;
            LocalPopChoice(u_8);
          }
        else
          {
            t = t_8;
            t = o_1;
            t = filter_1_0(r_94, t);
          }
      }
    }
  return(t);
}
ATerm build_group_by_pairs_4_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm t)
{
  ATerm s_1 = NULL,u_1 = NULL;
  if(((s_1 != NULL) && (s_1 != t)))
    _fail(t);
  else
    s_1 = t;
  t = term_m_8;
  t = f_84(t);
  {
    ATerm f_0 (ATerm t)
    {
      ATerm v_1 = NULL;
      v_1 = t;
      t = c_84(t);
      if(((s_1 != NULL) && (s_1 != t)))
        _fail(t);
      else
        s_1 = t;
      t = v_1;
      return(t);
    }
    t = filter_1_0(f_0, t);
    t = map_1_0(d_84, t);
    if(((u_1 != NULL) && (u_1 != t)))
      _fail(t);
    else
      u_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_1), not_null(u_1));
    t = e_84(t);
  }
  return(t);
}
ATerm l_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL;
  if(match_cons(t, sym__2))
    {
      x_1 = ATgetArgument(t, 0);
      y_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(t_0, x_1, y_1, t);
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm a_2 = NULL;
  a_2 = t;
  t = (ATerm) ATinsert(ATempty, a_2);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm z_1 = NULL;
  if(match_cons(t, sym__2))
    {
      z_1 = ATgetArgument(t, 0);
      if((z_1 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm group_by_3_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  ATerm w_1 = NULL;
  ATerm w_0 (ATerm t)
  {
    ATerm y_0 (ATerm t)
    {
      t = not_null(w_1);
      return(t);
    }
    t = build_group_by_pairs_4_0(z_83, a_84, b_84, y_0, t);
    return(t);
  }
  if(((w_1 != NULL) && (w_1 != t)))
    _fail(t);
  else
    w_1 = t;
  t = map_1_0(z_83, t);
  t = foldr_3_0(l_0, o_0, s_0, t);
  t = map_1_0(w_0, t);
  return(t);
}
ATerm c_5 (ATerm b_56, ATerm c_56, ATerm t)
{
  ATerm h_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_56, c_56);
  t = t_5(b_56, c_56, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_2 = ATgetFirst((ATermList) t);
      {
        ATerm v_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_2;
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_3 = NULL;
      if(match_cons(t, sym_Var_1))
        {
          y_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_3;
      if(match_string(t, "String"))
        {
          t = term_z_8;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Int", 0, ATtrue)))
            _fail(t);
          t = term_d_9;
        }
      ;
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      t = to_dec_prod_item_0_0(t);
    }
  return(t);
}
ATerm to_dec_prod_item_0_0 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL;
  p_3 = t;
  if(match_cons(t, sym_Op_2))
    {
      q_3 = ATgetArgument(t, 0);
      o_3 = ATgetArgument(t, 1);
      {
        ATerm t_3 = NULL;
        t = o_3;
        t = map_1_0(z_0, t);
        t_3 = t;
        t = (ATerm) ATmakeAppl(sym_NonTermRef_2, (ATerm)ATmakeAppl(sym_Id_1, q_3), t_3);
      }
    }
  else
    {
      if(match_cons(t, sym_Var_1))
        {
          q_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm f_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_2 = NULL,j_2 = NULL,k_2 = NULL;
            t = (ATerm) ATmakeAppl(sym_Var_1, q_3);
            j_2 = t;
            t = term_j_9;
            k_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_j_9, (ATerm) ATmakeAppl(sym_Var_1, q_3));
            t = c_5(k_2, j_2, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm k_9 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) k_9) != ATmakeSymbol("b_0", 0, ATtrue)))
                  _fail(t);
                f_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Param_1, f_2);
            ;
            LocalPopChoice(h_9);
          }
        else
          {
            t = f_9;
            t = p_3;
            {
              ATerm l_9 = t;
              if((PushChoice() == 0))
                {
                  ATerm r_2 = NULL,u_2 = NULL,v_2 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Var_1, q_3);
                  u_2 = t;
                  t = term_j_9;
                  v_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_j_9, (ATerm) ATmakeAppl(sym_Var_1, q_3));
                  t = c_5(v_2, u_2, t);
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm n_9 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) n_9) != ATmakeSymbol("b_0", 0, ATtrue)))
                        _fail(t);
                      r_2 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = r_2;
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = l_9;
                }
              t = (ATerm) ATmakeAppl(sym_NonTermRef_2, (ATerm)ATmakeAppl(sym_Id_1, q_3), (ATerm) ATempty);
            }
          }
      }
    }
  return(t);
}
ATerm d_5 (ATerm c_113 (ATerm), ATerm o_65, ATerm m_65, ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL;
  h_4 = t;
  t = c_113(t);
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_4, o_65, m_65);
  t = u_5(c_4, o_65, m_65, t);
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_4 = NULL;
        t = term_q_9;
        l_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_4, term_q_9);
        t = t_5(c_4, l_4, t);
        ;
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_4 = ATgetFirst((ATermList) t);
        e_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_q_9;
    i_4 = t;
    t = (ATerm) ATinsert(CheckATermList(e_4), (ATerm) ATinsert(CheckATermList(d_4), o_65));
    k_4 = t;
    t = SSL_table_put(c_4, i_4, k_4);
    t = h_4;
  }
  return(t);
}
ATerm map_with_index_1_0 (ATerm l_92 (ATerm), ATerm t)
{
  ATerm p_4 = NULL;
  ATerm p_6 (ATerm t)
  {
    ATerm s_4 = NULL,x_4 = NULL,a_5 = NULL,y_5 = NULL;
    if(match_cons(t, sym__2))
      {
        s_4 = ATgetArgument(t, 0);
        x_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = x_4;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATempty;
      }
    else
      {
        ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,o_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_5 = ATgetFirst((ATermList) t);
            y_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_4, a_5);
        t = l_92(t);
        k_6 = t;
        t = term_s_8;
        o_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_4, term_s_8);
        t = r_5(s_4, o_6, t);
        m_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_6, y_5);
        t = p_6(t);
        l_6 = t;
        t = (ATerm) ATinsert(CheckATermList(l_6), k_6);
      }
    return(t);
  }
  if(((p_4 != NULL) && (p_4 != t)))
    _fail(t);
  else
    p_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_8, not_null(p_4));
  t = p_6(t);
  return(t);
}
ATerm f_5 (ATerm v_55, ATerm w_55, ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  r_6 = t;
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_55, w_55);
        t = t_5(v_55, w_55, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_9 = ATgetFirst((ATermList) t);
            q_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(s_9);
        t = SSL_table_put(v_55, w_55, q_6);
        t = (ATerm) ATmakeAppl(sym__3, v_55, w_55, q_6);
      }
    else
      {
        t = r_9;
        t = SSL_table_remove(v_55, w_55);
        t = (ATerm) ATmakeAppl(sym__2, v_55, w_55);
      }
    t = r_6;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm z_112 (ATerm), ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL;
  if(((w_6 != NULL) && (w_6 != t)))
    _fail(t);
  else
    w_6 = t;
  t = z_112(t);
  if(((v_6 != NULL) && (v_6 != t)))
    _fail(t);
  else
    v_6 = t;
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_6 = NULL;
        t = term_q_9;
        z_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_6), term_q_9);
        t = t_5(not_null(v_6), z_6, t);
        ;
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_6 != NULL) && (t_6 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_6 = ATgetFirst((ATermList) t);
        if(((s_6 != NULL) && (s_6 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          s_6 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_q_9;
    if(((x_6 != NULL) && (x_6 != t)))
      _fail(t);
    else
      x_6 = t;
    t = SSL_table_put(not_null(v_6), not_null(x_6), not_null(s_6));
    t = not_null(t_6);
    {
      ATerm a_1 (ATerm t)
      {
        ATerm a_7 = NULL;
        a_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_6), a_7);
        t = f_5(not_null(v_6), a_7, t);
        return(t);
      }
      t = map_1_0(a_1, t);
      t = not_null(w_6);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm t)
{
  ATerm w_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_89(t);
      t = m_89(t);
      ;
      LocalPopChoice(z_9);
    }
  else
    {
      t = w_9;
      t = m_89(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_112 (ATerm), ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,f_7 = NULL,i_7 = NULL,j_7 = NULL;
  d_7 = t;
  t = y_112(t);
  c_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_7, term_q_9);
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_7 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_10 = ATgetArgument(t, 0);
            ATerm e_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_9;
        n_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_7, term_q_9);
        t = t_5(c_7, n_7, t);
        ;
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        t = (ATerm) ATempty;
      }
    f_7 = t;
    t = term_q_9;
    i_7 = t;
    t = (ATerm) ATinsert(CheckATermList(f_7), (ATerm) ATempty);
    j_7 = t;
    t = SSL_table_put(c_7, i_7, j_7);
    t = d_7;
  }
  return(t);
}
ATerm scope_2_0 (ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    t = end_scope_1_0(a_113, t);
    return(t);
  }
  t = begin_scope_1_0(a_113, t);
  t = restore_always_2_0(b_113, c_1, t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_j_9;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL;
  if(match_cons(t, sym__2))
    {
      g_8 = ATgetArgument(t, 0);
      {
        ATerm g_10 = ATgetArgument(t, 1);
        if(match_cons(g_10, sym_Var_1))
          {
            h_8 = ATgetArgument(g_10, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, h_8);
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_10, g_8);
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, h_8), (ATerm) ATmakeAppl(sym_Defined_2, term_j_10, g_8));
  t = d_5(k_1, i_8, j_8, t);
  t = (ATerm) ATmakeAppl(sym__2, g_8, (ATerm) ATmakeAppl(sym_Var_1, h_8));
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_j_9;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm n_8 = NULL;
  if(match_cons(t, sym_ConstType_1))
    {
      n_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_8;
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_8 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            p_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_8;
        if(match_string(t, "String"))
          {
            t = term_z_8;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Int", 0, ATtrue)))
              _fail(t);
            t = term_d_9;
          }
        ;
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        t = to_dec_prod_item_0_0(t);
      }
  }
  return(t);
}
ATerm to_prod_items_0_0 (ATerm t)
{
  ATerm w_7 = NULL,y_7 = NULL,a_8 = NULL;
  if(((y_7 != NULL) && (y_7 != t)))
    _fail(t);
  else
    y_7 = t;
  if(match_cons(t, sym_FunType_2))
    {
      a_8 = ATgetArgument(t, 0);
      w_7 = ATgetArgument(t, 1);
      {
        ATerm e_8 = NULL;
        t = not_null(y_7);
        {
          ATerm i_1 (ATerm t)
          {
            t = not_null(w_7);
            {
              ATerm m_10 = t;
              int n_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_8 = NULL;
                  if(match_cons(t, sym_ConstType_1))
                    {
                      ATerm o_10 = ATgetArgument(t, 0);
                      if(match_cons(o_10, sym_Op_2))
                        {
                          ATerm p_10 = ATgetArgument(o_10, 0);
                          f_8 = ATgetArgument(o_10, 1);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = f_8;
                  LocalPopChoice(n_10);
                  t = map_with_index_1_0(j_1, t);
                }
              else
                {
                  t = m_10;
                }
              t = not_null(a_8);
              t = map_1_0(l_1, t);
              if(((e_8 != NULL) && (e_8 != t)))
                _fail(t);
              else
                e_8 = t;
            }
            return(t);
          }
          t = scope_2_0(d_1, i_1, t);
          t = not_null(e_8);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          if(((a_8 != NULL) && (a_8 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(a_8);
      {
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm s_10 = ATgetArgument(t, 0);
                ATerm u_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(r_10);
            t = (ATerm) ATempty;
          }
        else
          {
            t = q_10;
            if(match_cons(t, sym_Var_1))
              {
                ATerm v_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATempty;
          }
      }
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm t_10 = NULL,x_10 = NULL;
  if(match_cons(t, sym__2))
    {
      t_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(t_10, x_10, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_s_8;
  return(t);
}
ATerm g_5 (ATerm v_30, ATerm z_30, ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,f_10 = NULL,c_10 = NULL,g_9 = NULL,i_9 = NULL,m_9 = NULL;
  t = z_30;
  if(match_cons(t, sym_ConstType_1))
    {
      g_9 = ATgetArgument(t, 0);
      t = g_9;
    }
  else
    {
      if(match_cons(t, sym_FunType_2))
        {
          ATerm a_11 = ATgetArgument(t, 0);
          i_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_9;
      if(match_cons(t, sym_ConstType_1))
        {
          m_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_9;
    }
  a_9 = t;
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Op_2))
          {
            c_10 = ATgetArgument(t, 0);
            {
              ATerm d_11 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_11);
        t = c_10;
      }
    else
      {
        t = b_11;
        if(match_cons(t, sym_Var_1))
          {
            c_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_10;
      }
    t = a_9;
    {
      ATerm e_11 = t;
      int f_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Op_2))
            {
              ATerm g_11 = ATgetArgument(t, 0);
              f_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(f_11);
          t = f_10;
          t = foldr_3_0(p_1, t_1, b_2, t);
        }
      else
        {
          t = e_11;
          if(match_cons(t, sym_Var_1))
            {
              ATerm h_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_w_10;
        }
      b_9 = t;
      t = z_30;
      t = to_prod_items_0_0(t);
      c_9 = t;
      t = (ATerm) ATmakeAppl(sym_NonTermDec_3, (ATerm)ATmakeAppl(sym_Id_1, c_10), b_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Prod_2, (ATerm)ATmakeAppl(sym_Id_1, v_30), c_9)));
    }
  }
  return(t);
}
ATerm h_5 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm o_63, ATerm n_63, ATerm t)
{
  t = e_110(t);
  {
    ATerm c_2 (ATerm t)
    {
      ATerm y_10 = NULL;
      y_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_63), y_10);
      t = d_110(t);
      return(t);
    }
    t = fetch_1_0(c_2, t);
    t = not_null(n_63);
  }
  return(t);
}
ATerm i_5 (ATerm a_110 (ATerm), ATerm k_63, ATerm j_63, ATerm t)
{
  ATerm x_11 (ATerm t)
  {
    ATerm p_11 = NULL,r_11 = NULL,s_11 = NULL;
    p_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(j_63);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_11 = ATgetFirst((ATermList) t);
            s_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_11 = t;
          int j_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_11;
              {
                ATerm d_2 (ATerm t)
                {
                  t = not_null(j_63);
                  return(t);
                }
                t = h_5(a_110, d_2, not_null(r_11), not_null(s_11), t);
                t = x_11(t);
              }
              ;
              LocalPopChoice(j_11);
            }
          else
            {
              t = i_11;
              {
                ATerm a_3 = NULL,d_3 = NULL,b_1 = NULL;
                t = SSLgetAnnotations(p_11);
                a_3 = t;
                t = s_11;
                t = x_11(t);
                d_3 = t;
                t = (ATerm) ATinsert(CheckATermList(d_3), r_11);
                b_1 = t;
                t = SSLsetAnnotations(b_1, a_3);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(k_63);
  t = x_11(t);
  return(t);
}
ATerm foldr_3_0 (ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm t)
{
  ATerm a_12 = NULL,d_12 = NULL,g_12 = NULL;
  a_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_12;
      t = v_111(t);
    }
  else
    {
      ATerm k_12 = NULL,r_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_12 = ATgetFirst((ATermList) t);
          g_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_12;
      t = x_111(t);
      k_12 = t;
      t = g_12;
      t = foldr_3_0(v_111, w_111, x_111, t);
      r_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_12, r_12);
      t = w_111(t);
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm t)
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_12 = NULL;
      t = f_111(t);
      u_12 = t;
      t = (ATerm) ATinsert(ATempty, u_12);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
        ATerm x_3 = NULL,z_3 = NULL;
        ATerm g_2 (ATerm t)
        {
          t = collect_om_2_0(f_111, g_111, t);
          return(t);
        }
        if(((z_3 != NULL) && (z_3 != t)))
          _fail(t);
        else
          z_3 = t;
        t = SSL_explode_term(not_null(z_3));
        if(match_cons(t, sym__2))
          {
            ATerm m_11 = ATgetArgument(t, 0);
            if(((x_3 != NULL) && (x_3 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              x_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(x_3);
        t = foldr_3_0(e_2, g_111, g_2, t);
      }
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  if(match_cons(t, sym_OpDecl_2))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      ATerm o_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL;
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      x_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(o_2, w_12, x_12, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm y_12 = NULL;
  if(match_cons(t, sym__2))
    {
      y_12 = ATgetArgument(t, 0);
      if((y_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      z_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(z_12, a_13, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm d_13 = NULL,f_13 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      d_13 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
      {
        ATerm t_11 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_13, f_13);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm i_13 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm u_11 = ATgetArgument(t, 0);
      ATerm v_11 = ATgetArgument(t, 1);
      ATerm w_11 = ATgetArgument(t, 2);
      if(((ATgetType(w_11) == AT_LIST) && !(ATisEmpty(w_11))))
        {
          i_13 = ATgetFirst((ATermList) w_11);
          {
            ATerm y_11 = (ATerm) ATgetNext((ATermList) w_11);
            if(((ATgetType(y_11) != AT_LIST) || !(ATisEmpty(y_11))))
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = i_13;
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm l_13 = NULL,s_13 = NULL,y_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_12 = ATgetArgument(t, 0);
      if(match_cons(c_12, sym__2))
        {
          l_13 = ATgetArgument(c_12, 0);
          s_13 = ATgetArgument(c_12, 1);
        }
      else
        _fail(t);
      y_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_NonTermDec_3, l_13, s_13, y_13);
  return(t);
}
ATerm stratego_ast_to_tg_0_0 (ATerm t)
{
  ATerm v_12 = NULL;
  t = collect_om_2_0(i_2, n_2, t);
  t = map_1_0(p_2, t);
  t = group_by_3_0(q_2, s_2, t_2, t);
  v_12 = t;
  t = (ATerm) ATmakeAppl(sym_TreeGrammar_1, v_12);
  return(t);
}
ATerm l_5 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm z_13 = NULL;
  t = SSL_fputc(c_33, d_33);
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_13);
  return(t);
}
ATerm m_5 (ATerm i_49, ATerm j_49, ATerm t)
{
  ATerm c_14 = NULL;
  t = SSL_write_term_to_stream_text(i_49, j_49);
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_14);
  return(t);
}
ATerm o_5 (ATerm w_98 (ATerm), ATerm c_371, ATerm m_49, ATerm t)
{
  ATerm d_14 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_371, term_e_12);
  t = open_stream_0_0(t);
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_14, m_49);
  t = w_98(t);
  t = fclose_0_0(t);
  t = m_49;
  return(t);
}
ATerm n_5 (ATerm e_49, ATerm f_49, ATerm t)
{
  ATerm e_14 = NULL;
  t = SSL_write_term_to_stream_baf(e_49, f_49);
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_14);
  return(t);
}
ATerm x_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm z_4 = NULL,b_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_12 = ATgetArgument(t, 0);
      if(match_cons(f_12, sym_Stream_1))
        {
          z_4 = ATgetArgument(f_12, 0);
        }
      else
        _fail(t);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(z_4, b_5, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm g_6 = NULL,i_6 = NULL,j_6 = NULL,n_6 = NULL,u_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_12 = ATgetArgument(t, 0);
      if(match_cons(h_12, sym_Stream_1))
        {
          n_6 = ATgetArgument(h_12, 0);
        }
      else
        _fail(t);
      u_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(n_6, u_6, t);
  g_6 = t;
  t = term_i_12;
  i_6 = t;
  t = g_6;
  if(match_cons(t, sym_Stream_1))
    {
      j_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_12, g_6);
  t = l_5(i_6, j_6, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,v_14 = NULL,b_15 = NULL,e_15 = NULL,h_15 = NULL,j_15 = NULL,n_15 = NULL,o_15 = NULL,h_17 = NULL,i_17 = NULL,f_1 = NULL,e_1 = NULL;
  if(((q_14 != NULL) && (q_14 != t)))
    _fail(t);
  else
    q_14 = t;
  if(match_cons(t, sym__2))
    {
      if(((j_15 != NULL) && (j_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_15 = ATgetArgument(t, 0);
      if(((n_15 != NULL) && (n_15 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(q_14));
  if(((h_15 != NULL) && (h_15 != t)))
    _fail(t);
  else
    h_15 = t;
  t = not_null(j_15);
  {
    ATerm j_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((p_14 != NULL) && (p_14 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(w_2, t);
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = j_12;
        t = term_m_12;
        if(((p_14 != NULL) && (p_14 != t)))
          _fail(t);
        else
          p_14 = t;
      }
    if(((o_15 != NULL) && (o_15 != t)))
      _fail(t);
    else
      o_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_15), not_null(n_15));
    if(((e_1 != NULL) && (e_1 != t)))
      _fail(t);
    else
      e_1 = t;
    t = SSLsetAnnotations(not_null(e_1), not_null(h_15));
    t = not_null(q_14);
    if(match_cons(t, sym__2))
      {
        if(((v_14 != NULL) && (v_14 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          v_14 = ATgetArgument(t, 0);
        if(((b_15 != NULL) && (b_15 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          b_15 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(q_14));
    if(((r_14 != NULL) && (r_14 != t)))
      _fail(t);
    else
      r_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_14), (ATerm) ATmakeAppl(sym__2, not_null(p_14), not_null(b_15)));
    if(((f_1 != NULL) && (f_1 != t)))
      _fail(t);
    else
      f_1 = t;
    t = SSLsetAnnotations(not_null(f_1), not_null(r_14));
    if(((e_15 != NULL) && (e_15 != t)))
      _fail(t);
    else
      e_15 = t;
    if(match_cons(t, sym__2))
      {
        if(((h_17 != NULL) && (h_17 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          h_17 = ATgetArgument(t, 0);
        if(((i_17 != NULL) && (i_17 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          i_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm o_12 = t;
      int p_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,y_4 = NULL,g_1 = NULL;
          t = SSLgetAnnotations(not_null(e_15));
          o_4 = t;
          t = not_null(h_17);
          t = fetch_1_0(x_2, t);
          u_4 = t;
          t = not_null(i_17);
          if(match_cons(t, sym__2))
            {
              w_4 = ATgetArgument(t, 0);
              y_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_5(y_2, w_4, y_4, t);
          v_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_4, v_4);
          g_1 = t;
          t = SSLsetAnnotations(g_1, o_4);
          ;
          LocalPopChoice(p_12);
        }
      else
        {
          t = o_12;
          {
            ATerm x_5 = NULL,c_6 = NULL,e_6 = NULL,f_6 = NULL,h_1 = NULL;
            t = SSLgetAnnotations(not_null(e_15));
            x_5 = t;
            t = not_null(i_17);
            if(match_cons(t, sym__2))
              {
                e_6 = ATgetArgument(t, 0);
                f_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_5(z_2, e_6, f_6, t);
            c_6 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), c_6);
            h_1 = t;
            t = SSLsetAnnotations(h_1, x_5);
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
ATerm apply_strategy_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  v_17 = t;
  t = dtime_0_0(t);
  t = v_17;
  t = g_84(t);
  u_17 = t;
  t = dtime_0_0(t);
  r_17 = t;
  t = u_17;
  if(match_cons(t, sym__2))
    {
      s_17 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_17), (ATerm) ATmakeAppl(sym_Runtime_1, r_17)), t_17);
  return(t);
}
ATerm m_18 (ATerm f_18, ATerm t)
{
  t = SSL_fclose(f_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_18 = NULL,k_18 = NULL;
  k_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_18 = ATgetArgument(t, 0);
      {
        ATerm q_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_18);
            ;
            LocalPopChoice(s_12);
          }
        else
          {
            t = q_12;
            t = m_18(k_18, t);
          }
      }
    }
  else
    {
      t = m_18(k_18, t);
    }
  return(t);
}
ATerm p_5 (ATerm k_49, ATerm t)
{
  t = SSL_read_term_from_stream(k_49);
  return(t);
}
ATerm q_5 (ATerm e_33, ATerm f_33, ATerm t)
{
  ATerm n_18 = NULL;
  t = SSL_fopen(e_33, f_33);
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_18 = NULL;
  t = SSL_stdin_stream();
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_18 = NULL;
  t = SSL_stdout_stream();
  v_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_18 = NULL;
  t = SSL_stderr_stream();
  w_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_18);
  return(t);
}
ATerm t_20 (ATerm e_19, ATerm t)
{
  ATerm f_19 = NULL;
  t = SSL_explode_term(e_19);
  if(match_cons(t, sym__2))
    {
      ATerm t_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_13 = ATgetArgument(t, 1);
        if(((ATgetType(c_13) == AT_LIST) && !(ATisEmpty(c_13))))
          {
            f_19 = ATgetFirst((ATermList) c_13);
            {
              ATerm e_13 = (ATerm) ATgetNext((ATermList) c_13);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_19;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_19;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_19;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_19;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm w_20 (ATerm k_19, ATerm l_19, ATerm m_19, ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,q_19 = NULL,t_19 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(m_19);
  q_19 = t;
  t = k_19;
  if(match_cons(t, sym_Path_1))
    {
      t_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_19, l_19);
  q_1 = t;
  t = SSLsetAnnotations(q_1, q_19);
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(n_19, o_19, t);
  return(t);
}
ATerm x_20 (ATerm v_19, ATerm w_19, ATerm x_19, ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,h_20 = NULL,r_1 = NULL;
  t = SSLgetAnnotations(x_19);
  a_20 = t;
  t = SSL_is_string(v_19);
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_20, w_19);
  r_1 = t;
  t = SSLsetAnnotations(r_1, a_20);
  if(match_cons(t, sym__2))
    {
      y_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(y_19, z_19, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm j_20 = NULL,n_20 = NULL,q_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_13 = ATgetArgument(t, 0);
      ATerm h_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  j_20 = t;
  if(match_cons(t, sym__2))
    {
      n_20 = ATgetArgument(t, 0);
      q_20 = ATgetArgument(t, 1);
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_20(j_20, t);
            ;
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            {
              ATerm m_13 = t;
              int n_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_20(n_20, q_20, j_20, t);
                  ;
                  LocalPopChoice(n_13);
                }
              else
                {
                  t = m_13;
                  t = x_20(n_20, q_20, j_20, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_20(j_20, t);
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_o_13;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,c_21 = NULL;
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_21 = NULL;
      d_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_21, term_r_13);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      t = debug_1_0(b_3, t);
      _fail(t);
    }
  z_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(c_21, t);
  y_20 = t;
  t = z_20;
  t = fclose_0_0(t);
  t = y_20;
  return(t);
}
ATerm fetch_1_0 (ATerm y_90 (ATerm), ATerm t)
{
  ATerm l_22 (ATerm t)
  {
    ATerm g_22 = NULL,h_22 = NULL,k_22 = NULL;
    g_22 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_22 = ATgetFirst((ATermList) t);
        k_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_7 = NULL,k_8 = NULL,l_2 = NULL;
          t = SSLgetAnnotations(g_22);
          u_7 = t;
          t = h_22;
          t = y_90(t);
          k_8 = t;
          t = (ATerm) ATinsert(CheckATermList(k_22), k_8);
          l_2 = t;
          t = SSLsetAnnotations(l_2, u_7);
          ;
          LocalPopChoice(u_13);
        }
      else
        {
          t = t_13;
          {
            ATerm w_8 = NULL,e_9 = NULL,m_2 = NULL;
            t = SSLgetAnnotations(g_22);
            w_8 = t;
            t = k_22;
            t = l_22(t);
            e_9 = t;
            t = (ATerm) ATinsert(CheckATermList(e_9), h_22);
            m_2 = t;
            t = SSLsetAnnotations(m_2, w_8);
          }
        }
    }
    return(t);
  }
  t = l_22(t);
  return(t);
}
ATerm k_5 (ATerm z_44, ATerm a_45, ATerm t)
{
  t = SSL_strcat(z_44, a_45);
  return(t);
}
ATerm debug_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm q_22 = NULL,t_22 = NULL,u_22 = NULL,w_22 = NULL;
  q_22 = t;
  t = u_98(t);
  t_22 = t;
  t = term_o_8;
  u_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_22), t_22);
  w_22 = t;
  t = SSL_printnl(u_22, w_22);
  t = q_22;
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_14 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_23 = NULL;
      d_23 = t;
      t = SSL_is_string(d_23);
      ;
      LocalPopChoice(b_14);
    }
  else
    {
      t = a_14;
      {
        ATerm f_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_3, t);
            ;
            LocalPopChoice(g_14);
          }
        else
          {
            t = f_14;
            {
              ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
              j_23 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_23 = ATgetArgument(t, 0);
                  t = k_23;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_23 = ATgetArgument(t, 0);
                      t = k_23;
                      {
                        ATerm h_14 = t;
                        int i_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(i_14);
                          }
                        else
                          {
                            t = h_14;
                            t = debug_1_0(f_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_23 = NULL,q_23 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_23 = ATgetArgument(t, 0);
                          l_23 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_23;
                      t = eval_config_0_0(t);
                      p_23 = t;
                      t = l_23;
                      t = eval_config_0_0(t);
                      q_23 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_23, q_23);
                      t = k_5(p_23, q_23, t);
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
  ATerm u_23 = NULL,v_23 = NULL;
  u_23 = t;
  t = term_j_14;
  v_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, u_23);
  t = t_5(v_23, u_23, t);
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL,x_23 = NULL;
        t = eval_config_0_0(t);
        w_23 = t;
        t = term_j_14;
        x_23 = t;
        t = SSL_table_put(x_23, u_23, w_23);
        t = w_23;
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm b_24 = NULL;
  b_24 = t;
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_24 = NULL;
        t = term_o_14;
        t = get_config_0_0(t);
        d_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_24, term_s_14);
        t = geq_0_0(t);
        t = b_24;
        t = z_108(t);
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = b_24;
      }
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm g_24 = NULL;
  g_24 = t;
  if(match_string(t, "-k"))
    {
      t = g_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_24;
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  h_24 = t;
  t = SSL_string_to_int(h_24);
  i_24 = t;
  t = term_t_14;
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_14, i_24);
  t = w_5(j_24, i_24, t);
  t = h_24;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_3, i_3, k_3, t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm l_24 = NULL;
  l_24 = t;
  if(match_string(t, "-S"))
    {
      t = l_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_24;
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  t = term_o_14;
  m_24 = t;
  t = term_w_10;
  n_24 = t;
  t = term_w_14;
  t = w_5(m_24, n_24, t);
  t = term_x_14;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_y_14;
  return(t);
}
ATerm s_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
  o_24 = t;
  t = SSL_string_to_int(o_24);
  p_24 = t;
  t = term_o_14;
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_14, p_24);
  t = w_5(q_24, p_24, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_24);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_z_14;
  return(t);
}
ATerm w_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL;
  t = term_a_15;
  r_24 = t;
  t = term_m_8;
  s_24 = t;
  t = term_c_15;
  t = w_5(r_24, s_24, t);
  t = term_d_15;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_f_15;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_3, n_3, r_3, t);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = g_15;
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_3, u_3, v_3, t);
            ;
            LocalPopChoice(l_15);
          }
        else
          {
            t = k_15;
            t = Option_3_0(w_3, b_4, g_4, t);
          }
      }
    }
  return(t);
}
ATerm w_5 (ATerm j_60, ATerm k_60, ATerm t)
{
  ATerm t_24 = NULL;
  t = term_j_14;
  t_24 = t;
  t = SSL_table_put(t_24, j_60, k_60);
  t = (ATerm) ATmakeAppl(sym__3, term_j_14, j_60, k_60);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
      t = term_m_8;
      t = d_0(t);
      y_24 = t;
      t = term_m_15;
      z_24 = t;
      t = term_p_15;
      a_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_15, term_p_15, y_24);
      t = u_5(z_24, a_25, y_24, t);
      _fail(t);
    }
  else
    {
      ATerm d_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_24 = ATgetFirst((ATermList) t);
          x_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_24;
      t = a_0(t);
      t = term_m_8;
      t = c_0(t);
      d_25 = t;
      t = (ATerm) ATinsert(CheckATermList(x_24), d_25);
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm f_25 = NULL;
  f_25 = t;
  if(match_string(t, "-o"))
    {
      t = f_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_25;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL;
  g_25 = t;
  t = term_q_15;
  h_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_15, g_25);
  t = w_5(h_25, g_25, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_25);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_r_15;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_4, n_4, q_4, t);
  return(t);
}
ATerm u_5 (ATerm q_55, ATerm r_55, ATerm p_55, ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_55, r_55);
  {
    ATerm s_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_15 = ATgetArgument(t, 0);
            ATerm v_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_55, r_55);
        t = t_5(q_55, r_55, t);
        ;
        LocalPopChoice(t_15);
      }
    else
      {
        t = s_15;
        t = (ATerm) ATempty;
      }
    k_25 = t;
    t = (ATerm) ATinsert(CheckATermList(k_25), p_55);
    l_25 = t;
    t = SSL_table_put(q_55, r_55, l_25);
    t = j_25;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
      t = term_m_8;
      t = k_0(t);
      w_25 = t;
      t = term_m_15;
      x_25 = t;
      t = term_p_15;
      y_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_15, term_p_15, w_25);
      t = u_5(x_25, y_25, w_25, t);
      _fail(t);
    }
  else
    {
      ATerm c_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_25 = ATgetFirst((ATermList) t);
          t_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_25 = ATgetFirst((ATermList) t);
          v_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_25;
      t = i_0(t);
      t = u_25;
      t = j_0(t);
      c_26 = t;
      t = (ATerm) ATinsert(CheckATermList(v_25), c_26);
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm e_26 = NULL;
  e_26 = t;
  if(match_string(t, "-i"))
    {
      t = e_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_26;
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL;
  f_26 = t;
  t = term_w_15;
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_15, f_26);
  t = w_5(g_26, f_26, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_26);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, t_4, e_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_8;
  t = whoami_0_0(t);
  h_26 = t;
  t = term_o_8;
  j_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_15), h_26);
  k_26 = t;
  t = SSL_printnl(j_26, k_26);
  t = term_s_8;
  i_26 = t;
  t = SSL_exit(i_26);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_15;
  t = get_config_0_0(t);
  return(t);
}
ATerm r_5 (ATerm l_50, ATerm m_50, ATerm t)
{
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_50, m_50);
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
      t = SSL_addr(l_50, m_50);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  m_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_26;
      t = t_111(t);
    }
  else
    {
      ATerm r_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_26 = ATgetFirst((ATermList) t);
          o_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_26;
      t = foldr_2_0(t_111, u_111, t);
      r_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_26, r_26);
      t = u_111(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL;
  if(match_cons(t, sym__2))
    {
      h_10 = ATgetArgument(t, 0);
      i_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(h_10, i_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_26 = NULL,x_9 = NULL,y_9 = NULL;
  t = times_0_0(t);
  y_9 = t;
  t = SSL_explode_term(y_9);
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      x_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_9;
  t = foldr_2_0(j_5, s_5, t);
  u_26 = t;
  t = SSL_TicksToSeconds(u_26);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
  f_27 = t;
  if(match_cons(t, sym__2))
    {
      g_27 = ATgetArgument(t, 0);
      h_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_27;
        if((g_27 != t))
          {
            _fail(t);
          }
        t = f_27;
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        t = (ATerm) ATmakeAppl(sym__2, g_27, h_27);
        {
          ATerm f_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_27, h_27);
              ;
              LocalPopChoice(g_16);
            }
          else
            {
              t = f_16;
              t = SSL_gtr(g_27, h_27);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_27, h_27);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm l_27 = NULL;
  l_27 = t;
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_27 = NULL;
        t = term_o_14;
        t = get_config_0_0(t);
        n_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_27, term_s_8);
        t = geq_0_0(t);
        t = l_27;
        t = y_108(t);
        ;
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
        t = l_27;
      }
  }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,s_27 = NULL,t_27 = NULL;
  t = run_time_0_0(t);
  p_27 = t;
  t = term_m_8;
  t = whoami_0_0(t);
  q_27 = t;
  t = term_o_8;
  s_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_16), p_27), term_j_16), q_27);
  t_27 = t;
  t = SSL_printnl(s_27, t_27);
  t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_16), p_27), term_j_16), q_27));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_10;
  u_27 = t;
  t = SSL_exit(u_27);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL;
  d_28 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_28;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_28 = ATgetArgument(t, 0);
          {
            ATerm z_10 = NULL,e_3 = NULL;
            t = SSLgetAnnotations(d_28);
            z_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_28);
            e_3 = t;
            t = SSLsetAnnotations(e_3, z_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_28;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_85 (ATerm), ATerm t)
{
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      t = fetch_1_0(z_5, t);
    }
  t = e_85(t);
  return(t);
}
ATerm map_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm t_28 (ATerm t)
  {
    ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
    q_28 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_28;
      }
    else
      {
        ATerm q_11 = NULL,z_11 = NULL,b_12 = NULL,g_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_28 = ATgetFirst((ATermList) t);
            s_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_28);
        q_11 = t;
        t = r_28;
        t = o_90(t);
        z_11 = t;
        t = s_28;
        t = t_28(t);
        b_12 = t;
        t = (ATerm) ATinsert(CheckATermList(b_12), z_11);
        g_3 = t;
        t = SSLsetAnnotations(g_3, q_11);
      }
    return(t);
  }
  t = t_28(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_28 = ATgetFirst((ATermList) t);
      x_28 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_29 = NULL,c_29 = NULL;
        ATerm a_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_29)), not_null(c_29));
          return(t);
        }
        t = not_null(x_28);
        t = g_0(t);
        if(((b_29 != NULL) && (b_29 != t)))
          _fail(t);
        else
          b_29 = t;
        t = not_null(w_28);
        t = e_0(t);
        if(((c_29 != NULL) && (c_29 != t)))
          _fail(t);
        else
          c_29 = t;
        t = not_null(x_28);
        t = reverse_acc_2_0(e_0, a_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_8;
      t = g_0(t);
    }
  return(t);
}
ATerm t_5 (ATerm h_57, ATerm i_57, ATerm t)
{
  t = SSL_table_get(h_57, i_57);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_3 = NULL;
  i_29 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_29);
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_29);
  j_3 = t;
  t = SSLsetAnnotations(j_3, g_29);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_29), term_o_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL;
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
      t = fetch_1_0(b_6, t);
    }
  t = term_r_16;
  t = echo_0_0(t);
  t = term_m_15;
  e_29 = t;
  t = term_p_15;
  f_29 = t;
  t = term_s_16;
  t = t_5(e_29, f_29, t);
  t = reverse_acc_2_0(_id, d_6, t);
  t = map_1_0(h_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
  m_29 = t;
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_29;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_16 = ATgetFirst((ATermList) t);
                ATerm w_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_29;
          }
        ;
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        t = (ATerm) ATinsert(ATempty, m_29);
      }
    n_29 = t;
    t = term_m_12;
    o_29 = t;
    t = SSL_printnl(o_29, n_29);
    t = m_29;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_15;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL;
  t = term_x_16;
  s_29 = t;
  t = term_m_8;
  t_29 = t;
  t = term_y_16;
  t = w_5(s_29, t_29, t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_z_16;
  return(t);
}
ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
  t = term_x_16;
  w_29 = t;
  t = term_m_8;
  x_29 = t;
  t = term_y_16;
  t = w_5(w_29, x_29, t);
  t = term_a_17;
  u_29 = t;
  t = term_m_8;
  v_29 = t;
  t = term_b_17;
  t = w_5(u_29, v_29, t);
  t = term_c_17;
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_d_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_6, b_7, e_7, t);
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      t = Option_3_0(g_7, h_7, k_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,l_3 = NULL;
  d_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_29 = ATgetFirst((ATermList) t);
      a_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_30);
  y_29 = t;
  t = z_29;
  t = l_70(t);
  b_30 = t;
  t = a_30;
  t = m_70(t);
  c_30 = t;
  t = (ATerm) ATinsert(CheckATermList(c_30), b_30);
  l_3 = t;
  t = SSLsetAnnotations(l_3, y_29);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_101 (ATerm), ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,n_30 = NULL,o_30 = NULL,a_4 = NULL;
  if(((i_30 != NULL) && (i_30 != t)))
    _fail(t);
  else
    i_30 = t;
  {
    ATerm g_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_17;
        t = f_101(t);
        ;
        LocalPopChoice(j_17);
      }
    else
      {
        t = g_17;
      }
    t = not_null(i_30);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_30 != NULL) && (k_30 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_30 = ATgetFirst((ATermList) t);
        if(((l_30 != NULL) && (l_30 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          l_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(i_30));
    if(((j_30 != NULL) && (j_30 != t)))
      _fail(t);
    else
      j_30 = t;
    t = term_z_15;
    if(((o_30 != NULL) && (o_30 != t)))
      _fail(t);
    else
      o_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_15, not_null(k_30));
    t = w_5(not_null(o_30), not_null(k_30), t);
    t = not_null(l_30);
    {
      ATerm n_31 (ATerm t)
      {
        ATerm l_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_17 = t;
            int o_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_31 = NULL;
                d_31 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_31;
                ;
                LocalPopChoice(o_17);
              }
            else
              {
                t = n_17;
                t = f_101(t);
                t = Cons_2_0(_id, n_31, t);
              }
            ;
            LocalPopChoice(m_17);
          }
        else
          {
            t = l_17;
            {
              ATerm g_31 = NULL,h_31 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_31 = ATgetFirst((ATermList) t);
                  h_31 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_31), (ATerm) ATmakeAppl(sym_Undefined_1, g_31));
            }
          }
        return(t);
      }
      t = n_31(t);
      if(((n_30 != NULL) && (n_30 != t)))
        _fail(t);
      else
        n_30 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(n_30)), (ATerm) ATmakeAppl(sym_Program_1, not_null(k_30)));
      if(((a_4 != NULL) && (a_4 != t)))
        _fail(t);
      else
        a_4 = t;
      t = SSLsetAnnotations(not_null(a_4), not_null(j_30));
    }
  }
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm k_32 = NULL;
  k_32 = t;
  if(match_string(t, "--help"))
    {
      t = k_32;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_32;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_32;
        }
    }
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL;
  t = term_n_16;
  l_32 = t;
  t = term_m_8;
  m_32 = t;
  t = term_p_17;
  t = w_5(l_32, m_32, t);
  t = term_q_17;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_w_17;
  return(t);
}
ATerm q_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL;
  if(((f_32 != NULL) && (f_32 != t)))
    _fail(t);
  else
    f_32 = t;
  t = term_m_15;
  if(((h_32 != NULL) && (h_32 != t)))
    _fail(t);
  else
    h_32 = t;
  t = term_p_15;
  if(((i_32 != NULL) && (i_32 != t)))
    _fail(t);
  else
    i_32 = t;
  t = (ATerm) ATempty;
  if(((j_32 != NULL) && (j_32 != t)))
    _fail(t);
  else
    j_32 = t;
  t = SSL_table_put(not_null(h_32), not_null(i_32), not_null(j_32));
  t = not_null(f_32);
  {
    ATerm l_7 (ATerm t)
    {
      ATerm x_17 = t;
      int y_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_101(t);
          ;
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
                t = Option_3_0(m_7, o_7, p_7, t);
                ;
                LocalPopChoice(a_18);
              }
            else
              {
                t = z_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_7, t);
    {
      ATerm b_18 = t;
      int c_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_32 = NULL;
          t_32 = t;
          {
            ATerm d_18 = t;
            int e_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_12 = NULL;
                t = t_32;
                {
                  ATerm g_18 = t;
                  int h_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_n_16;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(h_18);
                    }
                  else
                    {
                      t = g_18;
                      t = fetch_1_0(q_7, t);
                    }
                  t = t_32;
                  t = default_system_usage_0_0(t);
                  t = term_w_10;
                  n_12 = t;
                  t = SSL_exit(n_12);
                }
                ;
                LocalPopChoice(e_18);
              }
            else
              {
                t = d_18;
                {
                  ATerm b_13 = NULL;
                  t = term_x_16;
                  t = get_config_0_0(t);
                  t = t_32;
                  t = default_system_about_0_0(t);
                  t = term_w_10;
                  b_13 = t;
                  t = SSL_exit(b_13);
                }
              }
          }
          ;
          LocalPopChoice(c_18);
        }
      else
        {
          t = b_18;
          {
            ATerm j_18 = t;
            int l_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
                ATerm r_7 (ATerm t)
                {
                  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,f_4 = NULL;
                  z_32 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      y_32 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_32);
                  x_32 = t;
                  t = y_32;
                  if(((d_32 != NULL) && (d_32 != t)))
                    _fail(t);
                  else
                    d_32 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_32);
                  f_4 = t;
                  t = SSLsetAnnotations(f_4, x_32);
                  return(t);
                }
                t = fetch_1_0(r_7, t);
                t = term_o_8;
                if(((v_32 != NULL) && (v_32 != t)))
                  _fail(t);
                else
                  v_32 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_32)), term_o_18);
                if(((w_32 != NULL) && (w_32 != t)))
                  _fail(t);
                else
                  w_32 = t;
                t = SSL_printnl(not_null(v_32), not_null(w_32));
                t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_32)), term_o_18));
                t = default_system_usage_0_0(t);
                t = term_s_8;
                if(((u_32 != NULL) && (u_32 != t)))
                  _fail(t);
                else
                  u_32 = t;
                t = SSL_exit(not_null(u_32));
                ;
                LocalPopChoice(l_18);
              }
            else
              {
                t = j_18;
              }
          }
        }
      if(((e_32 != NULL) && (e_32 != t)))
        _fail(t);
      else
        e_32 = t;
      t = term_m_15;
      if(((g_32 != NULL) && (g_32 != t)))
        _fail(t);
      else
        g_32 = t;
      t = SSL_table_destroy(not_null(g_32));
      t = not_null(e_32);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL;
  t = parse_options_1_0(g_85, t);
  k_33 = t;
  t = term_p_18;
  n_33 = t;
  t = SSL_table_create(n_33);
  t = term_p_18;
  l_33 = t;
  t = term_q_18;
  m_33 = t;
  t = SSL_table_put(l_33, m_33, k_33);
  t = k_33;
  t = i_85(t);
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_85, t);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        {
          ATerm t_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_18);
            }
          else
            {
              t = t_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = if_verbose2_1_0(c_8, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL;
  t = term_y_18;
  o_33 = t;
  t = term_m_8;
  p_33 = t;
  t = term_z_18;
  t = w_5(o_33, p_33, t);
  t = term_a_19;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
  q_33 = t;
  t = term_z_15;
  t = get_config_0_0(t);
  r_33 = t;
  t = term_o_8;
  s_33 = t;
  t = (ATerm) ATinsert(ATempty, r_33);
  t_33 = t;
  t = SSL_printnl(s_33, t_33);
  t = q_33;
  return(t);
}
ATerm iowrap_3_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm t)
{
  ATerm s_7 (ATerm t)
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_84(t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        {
          ATerm g_19 = t;
          int h_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(h_19);
            }
          else
            {
              t = g_19;
              {
                ATerm i_19 = t;
                int j_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(j_19);
                  }
                else
                  {
                    t = i_19;
                    {
                      ATerm p_19 = t;
                      int r_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(x_7, z_7, b_8, t);
                          ;
                          LocalPopChoice(r_19);
                        }
                      else
                        {
                          t = p_19;
                          {
                            ATerm s_19 = t;
                            int u_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(u_19);
                              }
                            else
                              {
                                t = s_19;
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
  ATerm v_7 (ATerm t)
  {
    ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
    if(((v_33 != NULL) && (v_33 != t)))
      _fail(t);
    else
      v_33 = t;
    {
      ATerm b_20 = t;
      int c_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_33 != NULL) && (u_33 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_33 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_8, t);
          ;
          LocalPopChoice(c_20);
        }
      else
        {
          t = b_20;
          t = term_d_20;
          if(((u_33 != NULL) && (u_33 != t)))
            _fail(t);
          else
            u_33 = t;
        }
      t = not_null(u_33);
      t = ReadFromFile_0_0(t);
      if(((w_33 != NULL) && (w_33 != t)))
        _fail(t);
      else
        w_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_33), not_null(w_33));
      t = apply_strategy_1_0(p_84, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(s_7, r_84, t_7, v_7, t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,j_4 = NULL;
  b_34 = t;
  if(match_cons(t, sym__2))
    {
      y_33 = ATgetArgument(t, 0);
      z_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_34);
  x_33 = t;
  t = z_33;
  t = stratego_ast_to_tg_0_0(t);
  a_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_33, a_34);
  j_4 = t;
  t = SSLsetAnnotations(j_4, x_33);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(l_8, _fail, default_usage_0_0, t);
  return(t);
}
