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
Symbol sym_Strategies_1;
Symbol sym_Module_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Str_1;
Symbol sym_RootApp_1;
Symbol sym_Tuple_1;
Symbol sym_List_1;
Symbol sym_CallNoArgs_1;
Symbol sym_Choice_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Match_1;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDefNoArgs_2;
Symbol sym_SDef_3;
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
Symbol sym_Undefined_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_t_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_y_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_b_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_k_17;
ATerm term_f_17;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_x_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_l_12;
ATerm term_o_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_t_10;
ATerm term_p_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_m_8;
ATerm term_v_7;
ATerm term_t_6;
ATerm term_r_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
void init_constant_terms (void)
{
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("to-s", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("is-string", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_6);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_j_6);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("is-int", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_6);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_n_6);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("to-", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("T2-", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("is-", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("fold-strategy", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_RootApp_1, term_s_8);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("cond", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_z_8);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("transform", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_c_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("children", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_e_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("nt", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Var_1, term_j_9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_8);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_l_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("risky", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("concat-strings", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_s_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\nTransformation failed when trying to transform to ", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Str_1, term_w_9);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n-------------\n", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Str_1, term_f_10);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_9);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_k_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\nExpected ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Str_1, term_p_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol(", but found:\n-------------\n", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Str_1, term_y_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_9);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_a_11);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym__3, term_r_17, term_s_17, term_g_6);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm arg_to_fold_arg_0_0 (ATerm);
ATerm map_with_index_1_0 (ATerm w_90 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm);
ATerm for_3_0 (ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm);
ATerm k_0 (ATerm);
ATerm l_0 (ATerm);
ATerm m_0 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm n_0 (ATerm);
ATerm o_0 (ATerm);
ATerm p_0 (ATerm);
ATerm s_0 (ATerm);
ATerm to_nt_sdef_0_0 (ATerm);
ATerm t_0 (ATerm);
ATerm T2_Module_0_0 (ATerm);
ATerm _2_0 (ATerm s_64 (ATerm), ATerm t_64 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm f_99 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm q_82 (ATerm), ATerm);
ATerm s_6 (ATerm k_6, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm j_89 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm p_89 (ATerm), ATerm);
ATerm m_1 (ATerm);
ATerm q_1 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_109 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_109 (ATerm), ATerm);
ATerm w_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm need_help_1_0 (ATerm o_83 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_88 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm v_81 (ATerm), ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm parse_options_p__1_0 (ATerm m_101 (ATerm), ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm k_4 (ATerm);
ATerm parse_options_1_0 (ATerm l_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm y_4 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm d_6 (ATerm);
ATerm iowrap_3_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL;
  c_0 = t;
  t = term_g_6;
  t = whoami_0_0(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_0;
  return(t);
}
ATerm arg_to_fold_arg_0_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL;
  g_1 = t;
  if(match_cons(t, sym_Param_1))
    {
      h_1 = ATgetArgument(t, 0);
      {
        ATerm q_0 = NULL,r_0 = NULL;
        t = SSL_int_to_string(h_1);
        r_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_6, r_0);
        t = conc_strings_0_0(t);
        q_0 = t;
        t = (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, q_0));
      }
    }
  else
    {
      if(match_cons(t, sym_String_0))
        {
          t = term_l_6;
        }
      else
        {
          if(match_cons(t, sym_Int_0))
            {
              t = term_o_6;
            }
          else
            {
              ATerm n_1 = NULL,o_1 = NULL;
              if(match_cons(t, sym_NonTermRef_2))
                {
                  h_1 = ATgetArgument(t, 0);
                  j_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_1;
              if(match_cons(t, sym_Id_1))
                {
                  i_1 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, term_r_6, i_1);
              t = conc_strings_0_0(t);
              n_1 = t;
              t = j_1;
              t = map_1_0(arg_to_fold_arg_0_0, t);
              o_1 = t;
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_1), o_1);
            }
        }
    }
  return(t);
}
ATerm map_with_index_1_0 (ATerm w_90 (ATerm), ATerm t)
{
  ATerm r_2 = NULL;
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_6, r_2);
  {
    ATerm l_3 (ATerm t)
    {
      ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL;
      if(match_cons(t, sym__2))
        {
          g_3 = ATgetArgument(t, 0);
          h_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm f_1 = NULL,k_1 = NULL,p_1 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_3 = ATgetFirst((ATermList) t);
              j_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, g_3, i_3);
          t = w_90(t);
          f_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_3, term_t_6);
          {
            ATerm x_6 = t;
            int y_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(g_3, (ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(y_6);
              }
            else
              {
                t = x_6;
                t = SSL_addr(g_3, (ATerm) ATmakeInt(1));
              }
            k_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_1, j_3);
            t = l_3(t);
            p_1 = t;
            t = (ATerm) ATinsert(CheckATermList(p_1), f_1);
          }
        }
      return(t);
    }
    t = l_3(t);
  }
  return(t);
}
ATerm while_not_2_0 (ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_102(t);
        ;
        LocalPopChoice(a_7);
      }
    else
      {
        t = z_6;
        t = i_102(t);
        t = q_3(t);
      }
    return(t);
  }
  t = q_3(t);
  return(t);
}
ATerm for_3_0 (ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm t)
{
  t = k_102(t);
  t = while_not_2_0(l_102, m_102, t);
  return(t);
}
ATerm k_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  if(match_cons(t, sym__2))
    {
      r_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_3, s_3, (ATerm) ATempty);
  return(t);
}
ATerm l_0 (ATerm t)
{
  ATerm t_3 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm e_7 = ATgetArgument(t, 0);
      if(((ATgetType(e_7) != AT_INT) || (ATgetInt((ATermInt) e_7) != 0)))
        _fail(t);
      {
        ATerm g_7 = ATgetArgument(t, 1);
      }
      t_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_3;
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm u_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym__3))
    {
      u_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
      z_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_3, term_t_6);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, u_3, term_t_6);
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(u_3, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        t = SSL_subtr(u_3, (ATerm) ATmakeInt(1));
      }
    a_4 = t;
    t = (ATerm) ATmakeAppl(sym__3, a_4, y_3, (ATerm) ATinsert(CheckATermList(z_3), y_3));
  }
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(k_0, l_0, m_0, t);
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm w_1 = NULL,y_1 = NULL;
  w_1 = t;
  t = SSL_explode_term(w_1);
  if(match_cons(t, sym__2))
    {
      ATerm r_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_7 = ATgetArgument(t, 1);
        if(((ATgetType(s_7) == AT_LIST) && !(ATisEmpty(s_7))))
          {
            y_1 = ATgetFirst((ATermList) s_7);
            {
              ATerm u_7 = (ATerm) ATgetNext((ATermList) s_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_1;
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,v_4 = NULL;
  t_4 = t;
  t = SSL_int_to_string(t_4);
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_6, v_4);
  t = conc_strings_0_0(t);
  s_4 = t;
  t = SSL_is_string(s_4);
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_4);
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_v_7;
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm w_4 = NULL,c_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,o_2 = NULL;
  w_4 = t;
  t = SSL_explode_term(w_4);
  if(match_cons(t, sym__2))
    {
      ATerm y_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_7 = ATgetArgument(t, 1);
        if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
          {
            c_2 = ATgetFirst((ATermList) z_7);
            {
              ATerm a_8 = (ATerm) ATgetNext((ATermList) z_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_2;
  if(match_cons(t, sym_Prod_2))
    {
      ATerm b_8 = ATgetArgument(t, 0);
      if(match_cons(b_8, sym_Id_1))
        {
          i_2 = ATgetArgument(b_8, 0);
        }
      else
        _fail(t);
      j_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_2;
  t = map_1_0(arg_to_fold_arg_0_0, t);
  k_2 = t;
  t = SSL_explode_term(w_4);
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_8 = ATgetArgument(t, 1);
        if(((ATgetType(d_8) == AT_LIST) && !(ATisEmpty(d_8))))
          {
            ATerm e_8 = ATgetFirst((ATermList) d_8);
            ATerm g_8 = (ATerm) ATgetNext((ATermList) d_8);
            if(((ATgetType(g_8) == AT_LIST) && !(ATisEmpty(g_8))))
              {
                o_2 = ATgetFirst((ATermList) g_8);
                {
                  ATerm j_8 = (ATerm) ATgetNext((ATermList) g_8);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_2), k_2), o_2);
  return(t);
}
ATerm to_nt_sdef_0_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,e_4 = NULL,f_4 = NULL,i_4 = NULL,j_4 = NULL,q_4 = NULL,r_4 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      if(match_cons(k_8, sym_Id_1))
        {
          b_4 = ATgetArgument(k_8, 0);
        }
      else
        _fail(t);
      c_4 = ATgetArgument(t, 1);
      e_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, b_4);
  t = conc_strings_0_0(t);
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_8, b_4);
  t = conc_strings_0_0(t);
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_6, b_4);
  t = conc_strings_0_0(t);
  j_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_4, term_g_6);
  t = copy_0_0(t);
  t = map_with_index_1_0(n_0, t);
  t = map_1_0(o_0, t);
  q_4 = t;
  t = e_4;
  t = foldr_2_0(p_0, s_0, t);
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, j_4, q_4, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_r_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_4), (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, f_4))), (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, i_4)))), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_t_8), (ATerm) ATmakeAppl(sym_Str_1, b_4)))));
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm u_8 = ATgetArgument(t, 0);
      if(match_cons(u_8, sym_Id_1))
        {
          c_5 = ATgetArgument(u_8, 0);
        }
      else
        _fail(t);
      {
        ATerm w_8 = ATgetArgument(t, 1);
      }
      {
        ATerm x_8 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, c_5);
  t = conc_strings_0_0(t);
  d_5 = t;
  t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, d_5, term_v_7);
  return(t);
}
ATerm T2_Module_0_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      z_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_4;
  t = map_1_0(t_0, t);
  a_5 = t;
  t = z_4;
  t = map_1_0(to_nt_sdef_0_0, t);
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym_Module_2, term_y_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_q_8, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_i_9), term_d_9), term_a_9), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_t_8), term_k_9))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, term_m_9, term_s_8, (ATerm) ATmakeAppl(sym_Call_2, term_q_9, (ATerm) ATinsert(ATinsert(ATempty, term_m_10), (ATerm) ATmakeAppl(sym_BA_2, term_u_9, (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_10), term_k_9), term_e_10)))))), (ATerm) ATmakeAppl(sym_Call_2, term_q_9, (ATerm) ATinsert(ATinsert(ATempty, term_b_11), (ATerm) ATmakeAppl(sym_BA_2, term_u_9, (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_10), term_k_9), term_t_10))))))))))), (ATerm) ATmakeAppl(sym_Strategies_1, a_5)), (ATerm) ATmakeAppl(sym_Strategies_1, b_5)));
  return(t);
}
ATerm _2_0 (ATerm s_64 (ATerm), ATerm t_64 (ATerm), ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
  j_5 = t;
  if(match_cons(t, sym__2))
    {
      f_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_5);
  e_5 = t;
  t = f_5;
  t = s_64(t);
  h_5 = t;
  t = g_5;
  t = t_64(t);
  i_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, h_5, i_5), e_5);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm f_99 (ATerm), ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
  if(match_cons(t, sym__2))
    {
      m_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_5, term_c_11);
  t = open_stream_0_0(t);
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_5, n_5);
  t = f_99(t);
  t = fclose_0_0(t);
  t = n_5;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = fetch_1_0(z_0, t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = WriteToFile_1_0(a_1, t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_11 = ATgetArgument(t, 0);
      if(match_cons(f_11, sym_Stream_1))
        {
          r_5 = ATgetArgument(f_11, 0);
        }
      else
        _fail(t);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(r_5, s_5);
  t_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_5);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = WriteToFile_1_0(c_1, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_11 = ATgetArgument(t, 0);
      if(match_cons(g_11, sym_Stream_1))
        {
          u_5 = ATgetArgument(g_11, 0);
        }
      else
        _fail(t);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(u_5, v_5);
  w_5 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), w_5);
  x_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_5);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  p_5 = t;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm h_11 = t;
      int m_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((q_5 != NULL) && (q_5 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_0, t);
          ;
          LocalPopChoice(m_11);
        }
      else
        {
          t = h_11;
          t = term_o_11;
          if(((q_5 != NULL) && (q_5 != t)))
            _fail(t);
          else
            q_5 = t;
        }
      return(t);
    }
    t = _2_0(u_0, _id, t);
    t = p_5;
    {
      ATerm w_0 (ATerm t)
      {
        ATerm p_2 = NULL;
        p_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_5), p_2);
        return(t);
      }
      t = _2_0(_id, w_0, t);
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(x_0, y_0, t);
            ;
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            t = _2_0(_id, b_1, t);
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
ATerm apply_strategy_1_0 (ATerm q_82 (ATerm), ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
  y_5 = t;
  t = dtime_0_0(t);
  t = y_5;
  t = q_82(t);
  z_5 = t;
  t = dtime_0_0(t);
  a_6 = t;
  t = z_5;
  if(match_cons(t, sym__2))
    {
      b_6 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_6), (ATerm) ATmakeAppl(sym_Runtime_1, a_6)), c_6);
  return(t);
}
ATerm s_6 (ATerm k_6, ATerm t)
{
  t = SSL_fclose(k_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL;
  q_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_6 = ATgetArgument(t, 0);
      {
        ATerm s_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_6);
            ;
            LocalPopChoice(w_11);
          }
        else
          {
            t = s_11;
            t = s_6(q_6, t);
          }
      }
    }
  else
    {
      t = s_6(q_6, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_6 = NULL;
  t = SSL_stdin_stream();
  u_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_6 = NULL;
  t = SSL_stdout_stream();
  v_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_6 = NULL;
  t = SSL_stderr_stream();
  w_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_6);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm f_7 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      f_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm k_7 = NULL;
  k_7 = t;
  t = SSL_is_string(k_7);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_11 = ATgetArgument(t, 0);
      ATerm y_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_4 = NULL,g_4 = NULL;
        d_4 = t;
        t = SSL_explode_term(d_4);
        if(match_cons(t, sym__2))
          {
            ATerm d_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_12) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_12 = ATgetArgument(t, 1);
              if(((ATgetType(e_12) == AT_LIST) && !(ATisEmpty(e_12))))
                {
                  g_4 = ATgetFirst((ATermList) e_12);
                  {
                    ATerm f_12 = (ATerm) ATgetNext((ATermList) e_12);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_4;
        if(match_cons(t, sym_stderr_0))
          {
            t = g_4;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = g_4;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = g_4;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        {
          ATerm h_12 = t;
          int i_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
              t = _2_0(d_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_7 = ATgetArgument(t, 0);
                  c_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(b_7, c_7);
              d_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_7);
              ;
              LocalPopChoice(i_12);
            }
          else
            {
              t = h_12;
              {
                ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL;
                t = _2_0(e_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    h_7 = ATgetArgument(t, 0);
                    i_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(h_7, i_7);
                j_7 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, j_7);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_7 = NULL;
      o_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_7, term_l_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      {
        ATerm h_4 = NULL;
        h_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_4), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = h_4;
        _fail(t);
      }
    }
  l_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(n_7);
  m_7 = t;
  t = l_7;
  t = fclose_0_0(t);
  t = m_7;
  return(t);
}
ATerm fetch_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(j_89, _id, t);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        t = Cons_2_0(_id, t_7, t);
      }
    return(t);
  }
  t = t_7(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
        ATerm w_7 = NULL,x_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_7 = ATgetFirst((ATermList) t);
            x_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_7;
        {
          ATerm l_1 (ATerm t)
          {
            t = x_7;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(l_1, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm p_89 (ATerm), ATerm t)
{
  ATerm f_8 (ATerm t)
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_8, t);
        ;
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_89(t);
      }
    return(t);
  }
  t = f_8(t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm i_8 = NULL;
  i_8 = t;
  t = SSL_explode_string(i_8);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm l_8 = NULL;
  l_8 = t;
  t = SSL_explode_string(l_8);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm h_8 = NULL;
  t = _2_0(m_1, q_1, t);
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_8 = NULL,p_8 = NULL;
        if(match_cons(t, sym__2))
          {
            n_8 = ATgetArgument(t, 0);
            p_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_8;
        {
          ATerm r_1 (ATerm t)
          {
            t = p_8;
            return(t);
          }
          t = at_end_1_0(r_1, t);
        }
        ;
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        {
          ATerm o_4 = NULL,p_4 = NULL;
          o_4 = t;
          t = SSL_explode_term(o_4);
          if(match_cons(t, sym__2))
            {
              ATerm w_12 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_12) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              p_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_4;
          t = concat_0_0(t);
        }
      }
    h_8 = t;
    t = SSL_implode_string(h_8);
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm x_12 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_13);
    }
  else
    {
      t = x_12;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_9 = NULL;
      b_9 = t;
      t = SSL_is_string(b_9);
      ;
      LocalPopChoice(e_13);
    }
  else
    {
      t = c_13;
      {
        ATerm g_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_1, t);
            ;
            LocalPopChoice(k_13);
          }
        else
          {
            t = g_13;
            {
              ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
              f_9 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_9 = ATgetArgument(t, 0);
                  t = g_9;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_9 = ATgetArgument(t, 0);
                      t = g_9;
                      {
                        ATerm n_13 = t;
                        int o_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), g_9);
                            {
                              ATerm p_13 = t;
                              int w_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm v_8 = NULL;
                                  t = eval_config_0_0(t);
                                  v_8 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), g_9, v_8);
                                  t = v_8;
                                  ;
                                  LocalPopChoice(w_13);
                                }
                              else
                                {
                                  t = p_13;
                                }
                            }
                            ;
                            LocalPopChoice(o_13);
                          }
                        else
                          {
                            t = n_13;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_9), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = g_9;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_9 = NULL,o_9 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_9 = ATgetArgument(t, 0);
                          h_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_9;
                      t = eval_config_0_0(t);
                      n_9 = t;
                      t = h_9;
                      t = eval_config_0_0(t);
                      o_9 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_9, o_9);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  ATerm x_13 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_9 = NULL,v_9 = NULL;
      t_9 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm e_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_10 = NULL;
            t = eval_config_0_0(t);
            a_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_10);
            t = a_10;
            ;
            LocalPopChoice(i_14);
          }
        else
          {
            t = e_14;
          }
        v_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_9, term_j_14);
        t = geq_0_0(t);
        t = t_9;
        t = o_109(t);
      }
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = x_13;
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm x_9 = NULL;
  x_9 = t;
  if(match_string(t, "-k"))
    {
      t = x_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_9;
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL;
  y_9 = t;
  t = SSL_string_to_int(y_9);
  z_9 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), z_9);
  t = y_9;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_k_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_1, u_1, v_1, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  if(match_string(t, "-S"))
    {
      t = b_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_10;
    }
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_s_14;
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_t_14;
  return(t);
}
ATerm b_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL;
  c_10 = t;
  t = SSL_string_to_int(c_10);
  d_10 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_10);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_10);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_w_14;
  return(t);
}
ATerm f_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_z_14;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_a_15;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_1, z_1, a_2, t);
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      {
        ATerm d_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_2, d_2, e_2, t);
            ;
            LocalPopChoice(j_15);
          }
        else
          {
            t = d_15;
            t = Option_3_0(f_2, g_2, h_2, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_10 = NULL;
      t = term_g_6;
      t = d_0(t);
      i_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_15, term_l_15, i_10);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm l_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_10 = ATgetFirst((ATermList) t);
          h_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_10;
      t = a_0(t);
      t = term_g_6;
      t = b_0(t);
      l_10 = t;
      t = (ATerm) ATinsert(CheckATermList(h_10), l_10);
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  if(match_string(t, "-o"))
    {
      t = n_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_10;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm o_10 = NULL;
  o_10 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), o_10);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_10);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_m_15;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_2, m_2, n_2, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
  if(match_cons(t, sym__3))
    {
      u_10 = ATgetArgument(t, 0);
      v_10 = ATgetArgument(t, 1);
      w_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_10, v_10);
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_15 = ATgetArgument(t, 0);
            ATerm w_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_10, v_10);
        ;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = (ATerm) ATempty;
      }
    x_10 = t;
    t = SSL_table_put(u_10, v_10, (ATerm) ATinsert(CheckATermList(x_10), w_10));
    t = (ATerm) ATmakeAppl(sym__3, u_10, v_10, w_10);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_11 = NULL;
      t = term_g_6;
      t = j_0(t);
      n_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_15, term_l_15, n_11);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm r_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_11 = ATgetFirst((ATermList) t);
          j_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_11;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_11 = ATgetFirst((ATermList) t);
          l_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_11;
      t = h_0(t);
      t = k_11;
      t = i_0(t);
      r_11 = t;
      t = (ATerm) ATinsert(CheckATermList(l_11), r_11);
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm t_11 = NULL;
  t_11 = t;
  if(match_string(t, "-i"))
    {
      t = t_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_11;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm u_11 = NULL;
  u_11 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), u_11);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_11);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_2, s_2, t_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_11 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_6;
  t = whoami_0_0(t);
  v_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), v_11));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_10 = NULL;
        t = eval_config_0_0(t);
        q_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_10);
        t = q_10;
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm t)
{
  ATerm b_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_95(t);
      ;
      LocalPopChoice(c_16);
    }
  else
    {
      t = b_16;
      {
        ATerm b_12 = NULL,c_12 = NULL,g_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_12 = ATgetFirst((ATermList) t);
            c_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_12;
        t = foldr_2_0(p_95, q_95, t);
        g_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_12, g_12);
        t = q_95(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_r_14;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL;
  if(match_cons(t, sym__2))
    {
      d_11 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(d_11, e_11);
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        t = SSL_addr(d_11, e_11);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_12 = NULL,r_10 = NULL,s_10 = NULL;
  t = times_0_0(t);
  r_10 = t;
  t = SSL_explode_term(r_10);
  if(match_cons(t, sym__2))
    {
      ATerm f_16 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10;
  t = foldr_2_0(u_2, v_2, t);
  m_12 = t;
  t = SSL_TicksToSeconds(m_12);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
  y_12 = t;
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_13;
        if((z_12 != t))
          {
            _fail(t);
          }
        t = y_12;
        ;
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        t = y_12;
        {
          ATerm i_16 = t;
          int j_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_12, a_13);
              ;
              LocalPopChoice(j_16);
            }
          else
            {
              t = i_16;
              t = SSL_gtr(z_12, a_13);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_12, a_13);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_109 (ATerm), ATerm t)
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_13 = NULL,f_13 = NULL;
      d_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm m_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_12 = NULL;
            t = eval_config_0_0(t);
            n_12 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_12);
            t = n_12;
            ;
            LocalPopChoice(o_16);
          }
        else
          {
            t = m_16;
          }
        f_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_13, term_t_6);
        t = geq_0_0(t);
        t = d_13;
        t = n_109(t);
      }
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL;
  t = run_time_0_0(t);
  h_13 = t;
  t = term_g_6;
  t = whoami_0_0(t);
  i_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), h_13), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), i_13));
  t = (ATerm) ATmakeAppl(sym__2, term_p_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_16), h_13), term_q_16), i_13));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_83 (ATerm), ATerm t)
{
  ATerm x_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm a_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_14 = NULL;
            t = eval_config_0_0(t);
            f_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), f_14);
            t = f_14;
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = a_17;
          }
      }
      ;
      LocalPopChoice(z_16);
    }
  else
    {
      t = x_16;
      t = fetch_1_0(x_2, t);
    }
  t = o_83(t);
  return(t);
}
ATerm map_1_0 (ATerm y_88 (ATerm), ATerm t)
{
  ATerm j_13 (ATerm t)
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        t = Cons_2_0(y_88, j_13, t);
      }
    return(t);
  }
  t = j_13(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_13 = ATgetFirst((ATermList) t);
      m_13 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_13 = NULL,r_13 = NULL;
        t = m_13;
        t = g_0(t);
        q_13 = t;
        t = l_13;
        t = f_0(t);
        r_13 = t;
        t = m_13;
        {
          ATerm y_2 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_13), r_13);
            return(t);
          }
          t = reverse_acc_2_0(f_0, y_2, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_6;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
  v_13 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_13);
  s_13 = t;
  t = t_13;
  t = v_81(t);
  u_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, u_13), s_13);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm y_13 = NULL;
  y_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_13), term_f_17);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_15 = NULL;
            t = eval_config_0_0(t);
            e_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_15);
            t = e_15;
            ;
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
          }
      }
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      t = fetch_1_0(z_2, t);
    }
  t = term_k_17;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, a_3, t);
  t = map_1_0(b_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm w_81 (ATerm), ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
  c_14 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_14);
  z_13 = t;
  t = a_14;
  t = w_81(t);
  b_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, b_14), z_13);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL;
  g_14 = t;
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_14;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_17 = ATgetFirst((ATermList) t);
                ATerm o_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_14;
          }
        ;
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        t = (ATerm) ATinsert(ATempty, g_14);
      }
    h_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), h_14);
    t = g_14;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_15 = NULL;
        t = eval_config_0_0(t);
        y_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_15);
        t = y_15;
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm c_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_t_17;
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_u_17;
  return(t);
}
ATerm f_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_v_17;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_w_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_3, d_3, e_3, t);
      ;
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      t = Option_3_0(f_3, k_3, m_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  q_14 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_14 = ATgetFirst((ATermList) t);
      n_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_14);
  l_14 = t;
  t = m_14;
  t = h_69(t);
  o_14 = t;
  t = n_14;
  t = i_69(t);
  p_14 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(p_14), o_14), l_14);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm v_14 = NULL;
  v_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_14);
  t = (ATerm) ATmakeAppl(sym_Program_1, v_14);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm u_14 = NULL;
  u_14 = t;
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_18;
        t = m_101(t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
      }
    t = u_14;
    {
      ATerm o_3 (ATerm t)
      {
        ATerm c_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_18 = t;
            int f_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(f_18);
              }
            else
              {
                t = e_18;
                t = m_101(t);
                t = Cons_2_0(_id, o_3, t);
              }
            ;
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
            {
              ATerm x_14 = NULL,y_14 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_14 = ATgetFirst((ATermList) t);
                  y_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_14), (ATerm) ATmakeAppl(sym_Undefined_1, x_14));
            }
          }
        return(t);
      }
      t = Cons_2_0(n_3, o_3, t);
    }
  }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm i_15 = NULL;
  i_15 = t;
  if(match_string(t, "--help"))
    {
      t = i_15;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_15;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_15;
        }
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_g_18;
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_h_18;
  return(t);
}
ATerm k_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_101 (ATerm), ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  f_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = f_15;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm i_18 = t;
      int j_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_101(t);
          ;
          LocalPopChoice(j_18);
        }
      else
        {
          t = i_18;
          {
            ATerm k_18 = t;
            int l_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_3, w_3, x_3, t);
                ;
                LocalPopChoice(l_18);
              }
            else
              {
                t = k_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_3, t);
    {
      ATerm m_18 = t;
      int n_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_15 = NULL;
          n_15 = t;
          {
            ATerm o_18 = t;
            int p_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = n_15;
                {
                  ATerm q_18 = t;
                  int r_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm s_18 = t;
                        int t_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm n_16 = NULL;
                            t = eval_config_0_0(t);
                            n_16 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), n_16);
                            t = n_16;
                            ;
                            LocalPopChoice(t_18);
                          }
                        else
                          {
                            t = s_18;
                          }
                      }
                      ;
                      LocalPopChoice(r_18);
                    }
                  else
                    {
                      t = q_18;
                      t = fetch_1_0(k_4, t);
                    }
                  t = n_15;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(p_18);
              }
            else
              {
                t = o_18;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm u_18 = t;
                  int v_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_16 = NULL;
                      t = eval_config_0_0(t);
                      u_16 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), u_16);
                      t = u_16;
                      ;
                      LocalPopChoice(v_18);
                    }
                  else
                    {
                      t = u_18;
                    }
                  t = n_15;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(n_18);
        }
      else
        {
          t = m_18;
          {
            ATerm w_18 = t;
            int x_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_4 (ATerm t)
                {
                  ATerm m_4 (ATerm t)
                  {
                    if(((g_15 != NULL) && (g_15 != t)))
                      _fail(t);
                    else
                      g_15 = t;
                    return(t);
                  }
                  t = Undefined_1_0(m_4, t);
                  return(t);
                }
                t = fetch_1_0(l_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_15)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_p_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_15)), term_y_18));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(x_18);
              }
            else
              {
                t = w_18;
              }
          }
        }
      h_15 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = h_15;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t)
{
  ATerm r_15 = NULL;
  t = parse_options_1_0(q_83, t);
  r_15 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), r_15);
  t = r_15;
  t = s_83(t);
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_83, t);
        ;
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        {
          ATerm b_19 = t;
          int c_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_83(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_19);
            }
          else
            {
              t = b_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = if_verbose2_1_0(d_6, t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_d_19;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  s_15 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_16 = NULL;
        t = eval_config_0_0(t);
        y_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_16);
        t = y_16;
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
      }
    t_15 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, t_15));
    t = s_15;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_83(t);
        ;
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        {
          ATerm j_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(k_19);
            }
          else
            {
              t = j_19;
              {
                ATerm l_19 = t;
                int m_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(m_19);
                  }
                else
                  {
                    t = l_19;
                    {
                      ATerm n_19 = t;
                      int o_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(y_4, k_5, l_5, t);
                          ;
                          LocalPopChoice(o_19);
                        }
                      else
                        {
                          t = n_19;
                          {
                            ATerm p_19 = t;
                            int q_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(q_19);
                              }
                            else
                              {
                                t = p_19;
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
  ATerm x_4 (ATerm t)
  {
    ATerm u_15 = NULL,v_15 = NULL,b_17 = NULL;
    u_15 = t;
    {
      ATerm r_19 = t;
      int s_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((v_15 != NULL) && (v_15 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_15 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_6, t);
          ;
          LocalPopChoice(s_19);
        }
      else
        {
          t = r_19;
          t = term_t_19;
          v_15 = t;
        }
      t = not_null(v_15);
      t = ReadFromFile_0_0(t);
      b_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_15, b_17);
      t = apply_strategy_1_0(z_82, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(n_4, b_83, u_4, x_4, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = _2_0(_id, T2_Module_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(f_6, _fail, default_usage_0_0, t);
  return(t);
}
