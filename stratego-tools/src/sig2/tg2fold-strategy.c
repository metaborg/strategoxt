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
ATerm term_v_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_x_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_i_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_v_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_i_13;
ATerm term_w_12;
ATerm term_r_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_o_10;
ATerm term_i_10;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_l_8;
ATerm term_j_8;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_q_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_x_5;
ATerm term_o_5;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_i_5;
void init_constant_terms (void)
{
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("is-string", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_5);
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_j_5);
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("is-int", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_5);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_o_5);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("to-s", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("to-", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("is-", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("fold-strategy", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_7);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_RootApp_1, term_s_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("T2-", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("cond", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_l_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("transform", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_q_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("children", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_a_9);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("nt", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Var_1, term_c_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_8);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_e_9);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("risky", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("concat-strings", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_s_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\nTransformation failed when trying to transform to ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Str_1, term_v_9);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n-------------\n", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Str_1, term_o_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_8);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_t_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\nExpected ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Str_1, term_y_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol(", but found:\n-------------\n", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Str_1, term_c_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_9);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_j_11);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__3, term_s_17, term_t_17, term_q_6);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm arg_to_fold_arg_0_0 (ATerm);
ATerm prod_to_cong_0_0 (ATerm);
ATerm to_nt_paramname_0_0 (ATerm);
ATerm map_with_index_1_0 (ATerm d_84 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm o_95 (ATerm), ATerm p_95 (ATerm), ATerm);
ATerm for_3_0 (ATerm r_95 (ATerm), ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm);
ATerm copy_0_0 (ATerm);
ATerm int_to_int_list_0_0 (ATerm);
ATerm to_nt_0_0 (ATerm);
ATerm is_nt_0_0 (ATerm);
ATerm to_nt_sdef_0_0 (ATerm);
ATerm t2_nt_0_0 (ATerm);
ATerm t2_sdef_0_0 (ATerm);
ATerm T2_Module_0_0 (ATerm);
ATerm _2_0 (ATerm g_61 (ATerm), ATerm h_61 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm l_102 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm m_92 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_75 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm y_91 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm);
ATerm crush_2_0 (ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_102 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm w_76 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_82 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm d_75 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm e_75 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm q_82 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm q_93 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm o_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm v_94 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm p_62 (ATerm), ATerm q_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm t_94 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm s_94 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm h_76 (ATerm), ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm io_tg2fold_strategy_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm arg_to_fold_arg_0_0 (ATerm t)
{
  ATerm d_1 = NULL,h_1 = NULL,i_1 = NULL;
  if(match_cons(t, sym_Param_1))
    {
      d_1 = ATgetArgument(t, 0);
      {
        ATerm l_1 = NULL;
        t = d_1;
        t = to_nt_paramname_0_0(t);
        l_1 = t;
        t = (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, l_1));
      }
    }
  else
    {
      if(match_cons(t, sym_String_0))
        {
          t = term_k_5;
        }
      else
        {
          if(match_cons(t, sym_Int_0))
            {
              t = term_x_5;
            }
          else
            {
              ATerm s_1 = NULL,y_1 = NULL;
              if(match_cons(t, sym_NonTermRef_2))
                {
                  d_1 = ATgetArgument(t, 0);
                  i_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_1;
              if(match_cons(t, sym_Id_1))
                {
                  h_1 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = h_1;
              t = to_nt_0_0(t);
              s_1 = t;
              t = i_1;
              t = map_1_0(arg_to_fold_arg_0_0, t);
              y_1 = t;
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_1), y_1);
            }
        }
    }
  return(t);
}
ATerm prod_to_cong_0_0 (ATerm t)
{
  ATerm z_1 = NULL,e_2 = NULL,i_2 = NULL;
  if(match_cons(t, sym_Prod_2))
    {
      ATerm y_5 = ATgetArgument(t, 0);
      if(match_cons(y_5, sym_Id_1))
        {
          z_1 = ATgetArgument(y_5, 0);
        }
      else
        _fail(t);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_2;
  t = map_1_0(arg_to_fold_arg_0_0, t);
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, z_1), i_2);
  return(t);
}
ATerm to_nt_paramname_0_0 (ATerm t)
{
  ATerm m_2 = NULL,o_2 = NULL;
  m_2 = t;
  t = SSL_int_to_string(m_2);
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_5, o_2);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  ATerm t_2 = NULL;
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_6, t_2);
  {
    ATerm j_3 (ATerm t)
    {
      ATerm v_2 = NULL,w_2 = NULL,y_2 = NULL,z_2 = NULL;
      if(match_cons(t, sym__2))
        {
          v_2 = ATgetArgument(t, 0);
          w_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_2;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm f_3 = NULL,h_3 = NULL,i_3 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_2 = ATgetFirst((ATermList) t);
              z_2 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, v_2, y_2);
          t = d_84(t);
          f_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_2, term_a_6);
          {
            ATerm b_6 = t;
            int c_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(v_2, (ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(c_6);
              }
            else
              {
                t = b_6;
                t = SSL_addr(v_2, (ATerm) ATmakeInt(1));
              }
            h_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_3, z_2);
            t = j_3(t);
            i_3 = t;
            t = (ATerm) ATinsert(CheckATermList(i_3), f_3);
          }
        }
      return(t);
    }
    t = j_3(t);
  }
  return(t);
}
ATerm while_not_2_0 (ATerm o_95 (ATerm), ATerm p_95 (ATerm), ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm f_6 = t;
    int g_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_95(t);
        ;
        LocalPopChoice(g_6);
      }
    else
      {
        t = f_6;
        t = p_95(t);
        t = k_3(t);
      }
    return(t);
  }
  t = k_3(t);
  return(t);
}
ATerm for_3_0 (ATerm r_95 (ATerm), ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm t)
{
  t = r_95(t);
  t = while_not_2_0(s_95, t_95, t);
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm l_3 = NULL,n_3 = NULL;
    if(match_cons(t, sym__2))
      {
        l_3 = ATgetArgument(t, 0);
        n_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, l_3, n_3, (ATerm) ATempty);
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    ATerm p_3 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm j_6 = ATgetArgument(t, 0);
        if(((ATgetType(j_6) != AT_INT) || (ATgetInt((ATermInt) j_6) != 0)))
          _fail(t);
        {
          ATerm k_6 = ATgetArgument(t, 1);
        }
        p_3 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = p_3;
    return(t);
  }
  ATerm k_0 (ATerm t)
  {
    ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
    if(match_cons(t, sym__3))
      {
        q_3 = ATgetArgument(t, 0);
        r_3 = ATgetArgument(t, 1);
        s_3 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, q_3, term_a_6);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, q_3, term_a_6);
    {
      ATerm l_6 = t;
      int m_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(q_3, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(m_6);
        }
      else
        {
          t = l_6;
          t = SSL_subtr(q_3, (ATerm) ATmakeInt(1));
        }
      t_3 = t;
      t = (ATerm) ATmakeAppl(sym__3, t_3, r_3, (ATerm) ATinsert(CheckATermList(s_3), r_3));
    }
    return(t);
  }
  t = for_3_0(c_0, e_0, k_0, t);
  return(t);
}
ATerm int_to_int_list_0_0 (ATerm t)
{
  ATerm u_3 = NULL;
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_3, term_q_6);
  t = copy_0_0(t);
  {
    ATerm l_0 (ATerm t)
    {
      ATerm o_0 = NULL,p_0 = NULL;
      o_0 = t;
      t = SSL_explode_term(o_0);
      if(match_cons(t, sym__2))
        {
          ATerm r_6 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) r_6) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm s_6 = ATgetArgument(t, 1);
            if(((ATgetType(s_6) == AT_LIST) && !(ATisEmpty(s_6))))
              {
                p_0 = ATgetFirst((ATermList) s_6);
                {
                  ATerm y_6 = (ATerm) ATgetNext((ATermList) s_6);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = p_0;
      return(t);
    }
    t = map_with_index_1_0(l_0, t);
  }
  return(t);
}
ATerm to_nt_0_0 (ATerm t)
{
  ATerm v_3 = NULL;
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, v_3);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm is_nt_0_0 (ATerm t)
{
  ATerm w_3 = NULL;
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_7, w_3);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm to_nt_sdef_0_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,h_4 = NULL,j_4 = NULL,l_4 = NULL,o_4 = NULL,p_4 = NULL,s_4 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm b_7 = ATgetArgument(t, 0);
      if(match_cons(b_7, sym_Id_1))
        {
          z_3 = ATgetArgument(b_7, 0);
        }
      else
        _fail(t);
      a_4 = ATgetArgument(t, 1);
      h_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_3;
  t = t2_nt_0_0(t);
  j_4 = t;
  t = z_3;
  t = is_nt_0_0(t);
  l_4 = t;
  t = z_3;
  t = to_nt_0_0(t);
  o_4 = t;
  t = a_4;
  t = int_to_int_list_0_0(t);
  {
    ATerm m_0 (ATerm t)
    {
      ATerm r_0 = NULL;
      t = to_nt_paramname_0_0(t);
      r_0 = t;
      t = SSL_is_string(r_0);
      t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_0);
      return(t);
    }
    t = map_1_0(m_0, t);
    p_4 = t;
    t = h_4;
    {
      ATerm n_0 (ATerm t)
      {
        t = term_c_7;
        return(t);
      }
      ATerm q_0 (ATerm t)
      {
        ATerm t_4 = NULL,x_4 = NULL,x_0 = NULL,b_1 = NULL;
        t_4 = t;
        t = SSL_explode_term(t_4);
        if(match_cons(t, sym__2))
          {
            ATerm f_7 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_7) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_7 = ATgetArgument(t, 1);
              if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
                {
                  x_0 = ATgetFirst((ATermList) g_7);
                  {
                    ATerm h_7 = (ATerm) ATgetNext((ATermList) g_7);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_0;
        t = prod_to_cong_0_0(t);
        x_4 = t;
        t = SSL_explode_term(t_4);
        if(match_cons(t, sym__2))
          {
            ATerm i_7 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_7) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_7 = ATgetArgument(t, 1);
              if(((ATgetType(j_7) == AT_LIST) && !(ATisEmpty(j_7))))
                {
                  ATerm k_7 = ATgetFirst((ATermList) j_7);
                  ATerm o_7 = (ATerm) ATgetNext((ATermList) j_7);
                  if(((ATgetType(o_7) == AT_LIST) && !(ATisEmpty(o_7))))
                    {
                      b_1 = ATgetFirst((ATermList) o_7);
                      {
                        ATerm p_7 = (ATerm) ATgetNext((ATermList) o_7);
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
        t = (ATerm) ATmakeAppl(sym_Choice_2, x_4, b_1);
        return(t);
      }
      t = foldr_2_0(n_0, q_0, t);
      s_4 = t;
      t = (ATerm) ATmakeAppl(sym_SDef_3, o_4, p_4, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_r_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_4), (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, j_4))), (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, l_4)))), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_t_7), (ATerm) ATmakeAppl(sym_Str_1, z_3)))));
    }
  }
  return(t);
}
ATerm t2_nt_0_0 (ATerm t)
{
  ATerm z_4 = NULL;
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_7, z_4);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm t2_sdef_0_0 (ATerm t)
{
  ATerm b_5 = NULL,m_5 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm x_7 = ATgetArgument(t, 0);
      if(match_cons(x_7, sym_Id_1))
        {
          b_5 = ATgetArgument(x_7, 0);
        }
      else
        _fail(t);
      {
        ATerm y_7 = ATgetArgument(t, 1);
      }
      {
        ATerm i_8 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = b_5;
  t = t2_nt_0_0(t);
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, m_5, term_c_7);
  return(t);
}
ATerm T2_Module_0_0 (ATerm t)
{
  ATerm n_5 = NULL,p_5 = NULL,q_5 = NULL;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      n_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_5;
  t = map_1_0(t2_sdef_0_0, t);
  p_5 = t;
  t = n_5;
  t = map_1_0(to_nt_sdef_0_0, t);
  q_5 = t;
  t = (ATerm) ATmakeAppl(sym_Module_2, term_j_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_q_7, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_b_9), term_z_8), term_p_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_t_7), term_d_9))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, term_f_9, term_s_7, (ATerm) ATmakeAppl(sym_Call_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, term_u_10), (ATerm) ATmakeAppl(sym_BA_2, term_u_9, (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_10), term_d_9), term_i_10)))))), (ATerm) ATmakeAppl(sym_Call_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, term_k_11), (ATerm) ATmakeAppl(sym_BA_2, term_u_9, (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), term_d_9), term_b_11))))))))))), (ATerm) ATmakeAppl(sym_Strategies_1, p_5)), (ATerm) ATmakeAppl(sym_Strategies_1, q_5)));
  return(t);
}
ATerm _2_0 (ATerm g_61 (ATerm), ATerm h_61 (ATerm), ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
  w_5 = t;
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_5);
  r_5 = t;
  t = s_5;
  t = g_61(t);
  u_5 = t;
  t = t_5;
  t = h_61(t);
  v_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, u_5, v_5), r_5);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL;
  d_6 = t;
  t = term_q_6;
  t = whoami_0_0(t);
  e_6 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_6), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = d_6;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = m_11;
      {
        ATerm h_6 = NULL,i_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_6 = ATgetFirst((ATermList) t);
            i_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_6;
        {
          ATerm s_0 (ATerm t)
          {
            t = i_6;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(s_0, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL;
  n_6 = t;
  t = SSL_explode_term(n_6);
  if(match_cons(t, sym__2))
    {
      ATerm r_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_6, t);
        ;
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_82(t);
      }
    return(t);
  }
  t = p_6(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL;
  if(match_cons(t, sym__2))
    {
      u_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6;
  {
    ATerm t_0 (ATerm t)
    {
      t = t_6;
      return(t);
    }
    t = at_end_1_0(t_0, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm v_6 = NULL;
  ATerm u_0 (ATerm t)
  {
    ATerm w_6 = NULL;
    w_6 = t;
    t = SSL_explode_string(w_6);
    return(t);
  }
  ATerm v_0 (ATerm t)
  {
    ATerm x_6 = NULL;
    x_6 = t;
    t = SSL_explode_string(x_6);
    return(t);
  }
  t = _2_0(u_0, v_0, t);
  t = conc_0_0(t);
  v_6 = t;
  t = SSL_implode_string(v_6);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_7 = NULL;
      d_7 = t;
      t = SSL_is_string(d_7);
      ;
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_0 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(w_0, t);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            {
              ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
              l_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_7 = ATgetArgument(t, 0);
                  t = m_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_7 = ATgetArgument(t, 0);
                      t = m_7;
                      {
                        ATerm i_12 = t;
                        int j_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_12);
                          }
                        else
                          {
                            t = i_12;
                            {
                              ATerm y_0 (ATerm t)
                              {
                                t = term_n_12;
                                return(t);
                              }
                              t = debug_1_0(y_0, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm v_7 = NULL,w_7 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_7 = ATgetArgument(t, 0);
                          n_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_7;
                      t = eval_config_0_0(t);
                      v_7 = t;
                      t = n_7;
                      t = eval_config_0_0(t);
                      w_7 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_7, w_7);
                      t = conc_strings_0_0(t);
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
  ATerm z_7 = NULL;
  z_7 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_7);
  {
    ATerm z_0 (ATerm t)
    {
      ATerm a_8 = NULL;
      t = eval_config_0_0(t);
      a_8 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_7, a_8);
      t = a_8;
      return(t);
    }
    t = try_1_0(z_0, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm b_8 = NULL,c_8 = NULL;
    b_8 = t;
    t = term_o_12;
    t = get_config_0_0(t);
    c_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_8, term_r_12);
    t = geq_0_0(t);
    t = b_8;
    t = l_102(t);
    return(t);
  }
  t = try_1_0(a_1, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm u_12 = ATgetArgument(t, 0);
        if(match_cons(u_12, sym_Stream_1))
          {
            d_8 = ATgetArgument(u_12, 0);
          }
        else
          _fail(t);
        e_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(d_8, e_8);
    f_8 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), f_8);
    g_8 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, g_8);
    return(t);
  }
  t = WriteToFile_1_0(c_1, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm m_92 (ATerm), ATerm t)
{
  ATerm h_8 = NULL,k_8 = NULL,m_8 = NULL;
  if(match_cons(t, sym__2))
    {
      h_8 = ATgetArgument(t, 0);
      k_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_8, term_w_12);
  t = open_stream_0_0(t);
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_8, k_8);
  t = m_92(t);
  t = fclose_0_0(t);
  t = k_8;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm n_8 = NULL,o_8 = NULL,r_8 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm z_12 = ATgetArgument(t, 0);
        if(match_cons(z_12, sym_Stream_1))
          {
            n_8 = ATgetArgument(z_12, 0);
          }
        else
          _fail(t);
        o_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(n_8, o_8);
    r_8 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, r_8);
    return(t);
  }
  t = WriteToFile_1_0(e_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL;
  s_8 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm a_13 = t;
      int b_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                t_8 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(g_1, t);
          ;
          LocalPopChoice(b_13);
        }
      else
        {
          t = a_13;
          t = term_i_13;
          t_8 = t;
        }
      return(t);
    }
    t = _2_0(f_1, _id, t);
    t = s_8;
    {
      ATerm j_1 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          t = not_null(t_8);
          return(t);
        }
        t = split_2_0(k_1, _id, t);
        return(t);
      }
      t = _2_0(_id, j_1, t);
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm n_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(n_1, t);
              return(t);
            }
            t = _2_0(m_1, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
  u_8 = t;
  t = dtime_0_0(t);
  t = u_8;
  t = y_75(t);
  v_8 = t;
  t = dtime_0_0(t);
  w_8 = t;
  t = v_8;
  if(match_cons(t, sym__2))
    {
      x_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_8), (ATerm) ATmakeAppl(sym_Runtime_1, w_8)), y_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_9 (ATerm g_9, ATerm t)
  {
    t = SSL_fclose(g_9);
    return(t);
  }
  ATerm j_9 = NULL,k_9 = NULL;
  k_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_9 = ATgetArgument(t, 0);
      {
        ATerm q_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_9);
            ;
            LocalPopChoice(r_13);
          }
        else
          {
            t = q_13;
            t = m_9(k_9, t);
          }
      }
    }
  else
    {
      t = m_9(k_9, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm y_91 (ATerm), ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL;
  n_9 = t;
  t = y_91(t);
  o_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_9), o_9));
  t = n_9;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_9 = NULL;
  t = SSL_stdin_stream();
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_9 = NULL;
  t = SSL_stdout_stream();
  q_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_9 = NULL;
  t = SSL_stderr_stream();
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_9);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm t_9 = NULL;
  t_9 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_13 = ATgetArgument(t, 0);
      ATerm u_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL,x_1 = NULL;
        w_1 = t;
        t = SSL_explode_term(w_1);
        if(match_cons(t, sym__2))
          {
            ATerm z_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_14 = ATgetArgument(t, 1);
              if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
                {
                  x_1 = ATgetFirst((ATermList) a_14);
                  {
                    ATerm b_14 = (ATerm) ATgetNext((ATermList) a_14);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        {
          ATerm g_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
              ATerm o_1 (ATerm t)
              {
                ATerm z_9 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    z_9 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = z_9;
                return(t);
              }
              t = _2_0(o_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_9 = ATgetArgument(t, 0);
                  x_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(w_9, x_9);
              y_9 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, y_9);
              ;
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
              {
                ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
                ATerm p_1 (ATerm t)
                {
                  ATerm d_10 = NULL;
                  d_10 = t;
                  t = SSL_is_string(d_10);
                  return(t);
                }
                t = _2_0(p_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_10 = ATgetArgument(t, 0);
                    b_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(a_10, b_10);
                c_10 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, c_10);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_10 = NULL;
      h_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_10, term_l_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      {
        ATerm q_1 (ATerm t)
        {
          t = term_p_14;
          return(t);
        }
        t = debug_1_0(q_1, t);
        _fail(t);
      }
    }
  e_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(g_10);
  f_10 = t;
  t = e_10;
  t = fclose_0_0(t);
  t = f_10;
  return(t);
}
ATerm split_2_0 (ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
  j_10 = t;
  t = i_81(t);
  k_10 = t;
  t = j_10;
  t = j_81(t);
  l_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_10, l_10);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL;
  m_10 = t;
  {
    ATerm q_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              n_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(r_1, t);
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = q_14;
        t = term_a_15;
        n_10 = t;
      }
    t = m_10;
    {
      ATerm t_1 (ATerm t)
      {
        t = not_null(n_10);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, t_1, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm p_10 = NULL;
    p_10 = t;
    if(match_string(t, "-k"))
      {
        t = p_10;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = p_10;
      }
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm q_10 = NULL,r_10 = NULL;
    q_10 = t;
    t = SSL_string_to_int(q_10);
    r_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), r_10);
    t = q_10;
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_b_15;
    return(t);
  }
  t = ArgOption_3_0(u_1, v_1, a_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm v_10 = NULL;
        v_10 = t;
        if(match_string(t, "-S"))
          {
            t = v_10;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = v_10;
          }
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_f_15;
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        t = term_i_15;
        return(t);
      }
      t = Option_3_0(b_2, c_2, d_2, t);
      ;
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm g_2 (ATerm t)
            {
              ATerm w_10 = NULL,x_10 = NULL;
              w_10 = t;
              t = SSL_string_to_int(w_10);
              x_10 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_10);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, w_10);
              return(t);
            }
            ATerm h_2 (ATerm t)
            {
              t = term_n_15;
              return(t);
            }
            t = ArgOption_3_0(f_2, g_2, h_2, t);
            ;
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            {
              ATerm j_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm k_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_o_15;
                return(t);
              }
              ATerm l_2 (ATerm t)
              {
                t = term_p_15;
                return(t);
              }
              t = Option_3_0(j_2, k_2, l_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(u_15);
    }
  else
    {
      t = t_15;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm z_10 = NULL;
    z_10 = t;
    if(match_string(t, "-o"))
      {
        t = z_10;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = z_10;
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm a_11 = NULL;
    a_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), a_11);
    t = (ATerm) ATmakeAppl(sym_Output_1, a_11);
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_v_15;
    return(t);
  }
  t = ArgOption_3_0(n_2, p_2, q_2, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm w_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(y_15);
    }
  else
    {
      t = w_15;
      {
        ATerm r_2 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm s_2 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_z_15;
          return(t);
        }
        ATerm u_2 (ATerm t)
        {
          t = term_c_16;
          return(t);
        }
        t = Option_3_0(r_2, s_2, u_2, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
  d_11 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = d_11;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm l_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_11 = ATgetFirst((ATermList) t);
          f_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_11;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_11 = ATgetFirst((ATermList) t);
          h_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_11;
      t = h_0(t);
      t = g_11;
      t = i_0(t);
      l_11 = t;
      t = (ATerm) ATinsert(CheckATermList(h_11), l_11);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm n_11 = NULL;
    n_11 = t;
    if(match_string(t, "-i"))
      {
        t = n_11;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = n_11;
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm o_11 = NULL;
    o_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), o_11);
    t = (ATerm) ATmakeAppl(sym_Input_1, o_11);
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_d_16;
    return(t);
  }
  t = ArgOption_3_0(x_2, a_3, b_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(f_16);
    }
  else
    {
      t = e_16;
      {
        ATerm g_16 = t;
        int h_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(h_16);
          }
        else
          {
            t = g_16;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_11 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_6;
  t = whoami_0_0(t);
  p_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), p_11));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_16;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_88(t);
      ;
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
      {
        ATerm s_11 = NULL,t_11 = NULL,w_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_11 = ATgetFirst((ATermList) t);
            t_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_11;
        t = foldr_2_0(w_88, x_88, t);
        w_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_11, w_11);
        t = x_88(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL;
  x_11 = t;
  t = SSL_explode_term(x_11);
  if(match_cons(t, sym__2))
    {
      ATerm l_16 = ATgetArgument(t, 0);
      y_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_11;
  t = foldr_2_0(u_86, v_86, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_11 = NULL;
  t = times_0_0(t);
  {
    ATerm c_3 (ATerm t)
    {
      t = term_e_15;
      return(t);
    }
    ATerm d_3 (ATerm t)
    {
      ATerm a_12 = NULL,b_12 = NULL;
      if(match_cons(t, sym__2))
        {
          a_12 = ATgetArgument(t, 0);
          b_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm m_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(a_12, b_12);
            ;
            LocalPopChoice(n_16);
          }
        else
          {
            t = m_16;
            t = SSL_addr(a_12, b_12);
          }
      }
      return(t);
    }
    t = crush_2_0(c_3, d_3, t);
    z_11 = t;
    t = SSL_TicksToSeconds(z_11);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym__2))
    {
      l_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_12;
        if((l_12 != t))
          {
            _fail(t);
          }
        t = k_12;
        ;
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        t = k_12;
        {
          ATerm q_16 = t;
          int r_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_12, m_12);
              ;
              LocalPopChoice(r_16);
            }
          else
            {
              t = q_16;
              t = SSL_gtr(l_12, m_12);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_12, m_12);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_102 (ATerm), ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm p_12 = NULL,q_12 = NULL;
    p_12 = t;
    t = term_o_12;
    t = get_config_0_0(t);
    q_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_12, term_a_6);
    t = geq_0_0(t);
    t = p_12;
    t = k_102(t);
    return(t);
  }
  t = try_1_0(e_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm s_12 = NULL,t_12 = NULL;
    t = run_time_0_0(t);
    s_12 = t;
    t = term_q_6;
    t = whoami_0_0(t);
    t_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), s_12), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), t_12));
    t = (ATerm) ATmakeAppl(sym__2, term_s_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_16), s_12), term_t_16), t_12));
    return(t);
  }
  t = if_verbose1_1_0(g_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm w_76 (ATerm), ATerm t)
{
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      {
        ATerm m_3 (ATerm t)
        {
          ATerm y_16 = t;
          int z_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(z_16);
            }
          else
            {
              t = y_16;
              {
                ATerm a_17 = t;
                int b_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(b_17);
                  }
                else
                  {
                    t = a_17;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(m_3, t);
      }
    }
  t = w_76(t);
  return(t);
}
ATerm map_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm v_12 (ATerm t)
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        t = Cons_2_0(g_82, v_12, t);
      }
    return(t);
  }
  t = v_12(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_12 = ATgetFirst((ATermList) t);
      y_12 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_13 = NULL,d_13 = NULL;
        t = y_12;
        t = g_0(t);
        c_13 = t;
        t = x_12;
        t = f_0(t);
        d_13 = t;
        t = y_12;
        {
          ATerm o_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(c_13), d_13);
            return(t);
          }
          t = reverse_acc_2_0(f_0, o_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_6;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, x_3, t);
  return(t);
}
ATerm Program_1_0 (ATerm d_75 (ATerm), ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
  h_13 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_13);
  e_13 = t;
  t = f_13;
  t = d_75(t);
  g_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, g_13), e_13);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
        ATerm y_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(y_3, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_g_17;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm b_4 (ATerm t)
    {
      ATerm l_13 = NULL;
      l_13 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, l_13), term_h_17);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(b_4, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm e_75 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
  p_13 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      n_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_13);
  m_13 = t;
  t = n_13;
  t = e_75(t);
  o_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, o_13), m_13);
  return(t);
}
ATerm fetch_1_0 (ATerm q_82 (ATerm), ATerm t)
{
  ATerm t_13 (ATerm t)
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(q_82, _id, t);
        ;
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        t = Cons_2_0(_id, t_13, t);
      }
    return(t);
  }
  t = t_13(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm q_93 (ATerm), ATerm t)
{
  t = fetch_1_0(q_93, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL;
  v_13 = t;
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_13;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_17 = ATgetFirst((ATermList) t);
                ATerm n_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_13;
          }
        ;
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        t = (ATerm) ATinsert(ATempty, v_13);
      }
    w_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), w_13);
    t = v_13;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_16;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_80(t);
      ;
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_u_17;
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        t = term_v_17;
        return(t);
      }
      t = Option_3_0(c_4, d_4, e_4, t);
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm f_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm g_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_w_17;
          return(t);
        }
        ATerm i_4 (ATerm t)
        {
          t = term_x_17;
          return(t);
        }
        t = Option_3_0(f_4, g_4, i_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__3))
    {
      c_14 = ATgetArgument(t, 0);
      d_14 = ATgetArgument(t, 1);
      e_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_14, d_14);
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_18 = ATgetArgument(t, 0);
            ATerm b_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(c_14, d_14);
        ;
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
        t = (ATerm) ATempty;
      }
    f_14 = t;
    t = SSL_table_put(c_14, d_14, (ATerm) ATinsert(CheckATermList(f_14), e_14));
    t = (ATerm) ATmakeAppl(sym__3, c_14, d_14, e_14);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm k_14 = NULL;
  t = term_q_6;
  t = v_94(t);
  k_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_18, term_d_18, k_14);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  m_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = m_14;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm r_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_14 = ATgetFirst((ATermList) t);
          o_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_14;
      t = a_0(t);
      t = term_q_6;
      t = b_0(t);
      r_14 = t;
      t = (ATerm) ATinsert(CheckATermList(o_14), r_14);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm t_14 = NULL;
    t_14 = t;
    if(match_string(t, "--help"))
      {
        t = t_14;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = t_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = t_14;
          }
      }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_e_18;
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    t = term_f_18;
    return(t);
  }
  t = Option_3_0(k_4, m_4, n_4, t);
  return(t);
}
ATerm Cons_2_0 (ATerm p_62 (ATerm), ATerm q_62 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL;
  z_14 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_14 = ATgetFirst((ATermList) t);
      w_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_14);
  u_14 = t;
  t = v_14;
  t = p_62(t);
  x_14 = t;
  t = w_14;
  t = q_62(t);
  y_14 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(y_14), x_14), u_14);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_94 (ATerm), ATerm t)
{
  ATerm g_15 = NULL;
  g_15 = t;
  {
    ATerm q_4 (ATerm t)
    {
      t = term_g_18;
      t = t_94(t);
      return(t);
    }
    t = try_1_0(q_4, t);
    t = g_15;
    {
      ATerm r_4 (ATerm t)
      {
        ATerm h_15 = NULL;
        h_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_15);
        t = (ATerm) ATmakeAppl(sym_Program_1, h_15);
        return(t);
      }
      ATerm u_4 (ATerm t)
      {
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_18 = t;
            int k_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(k_18);
              }
            else
              {
                t = j_18;
                t = t_94(t);
                t = Cons_2_0(_id, u_4, t);
              }
            ;
            LocalPopChoice(i_18);
          }
        else
          {
            t = h_18;
            {
              ATerm j_15 = NULL,k_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_15 = ATgetFirst((ATermList) t);
                  k_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_15), (ATerm) ATmakeAppl(sym_Undefined_1, j_15));
            }
          }
        return(t);
      }
      t = Cons_2_0(r_4, u_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm s_94 (ATerm), ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  q_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = q_15;
  {
    ATerm v_4 (ATerm t)
    {
      ATerm l_18 = t;
      int m_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_94(t);
          ;
          LocalPopChoice(m_18);
        }
      else
        {
          t = l_18;
          {
            ATerm n_18 = t;
            int o_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(o_18);
              }
            else
              {
                t = n_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_4, t);
    {
      ATerm w_4 (ATerm t)
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_15 = NULL;
            x_15 = t;
            {
              ATerm r_18 = t;
              int s_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_15;
                  {
                    ATerm t_18 = t;
                    int u_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_x_16;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(u_18);
                      }
                    else
                      {
                        t = t_18;
                        {
                          ATerm y_4 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(y_4, t);
                        }
                      }
                    t = x_15;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(s_18);
                }
              else
                {
                  t = r_18;
                  t = term_t_17;
                  t = get_config_0_0(t);
                  t = x_15;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            {
              ATerm a_5 (ATerm t)
              {
                ATerm c_5 (ATerm t)
                {
                  r_15 = t;
                  return(t);
                }
                t = Undefined_1_0(c_5, t);
                return(t);
              }
              t = option_defined_1_0(a_5, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_15)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_s_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_15)), term_v_18));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(w_4, t);
      s_15 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = s_15;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm t)
{
  ATerm e_7 = NULL;
  t = parse_options_1_0(y_76, t);
  e_7 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), e_7);
  t = e_7;
  t = a_77(t);
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_76, t);
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        {
          ATerm y_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_77(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_18);
            }
          else
            {
              t = y_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_76(t);
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(n_76, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(d_5, p_76, q_76, e_5, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm h_76 (ATerm), ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm g_5 (ATerm t)
    {
      ATerm a_16 = NULL,b_16 = NULL;
      a_16 = t;
      t = term_i_16;
      t = get_config_0_0(t);
      b_16 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, b_16));
      t = a_16;
      return(t);
    }
    t = if_verbose2_1_0(g_5, t);
    return(t);
  }
  t = iowrap_4_0(h_76, i_76, j_76, f_5, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t)
{
  t = iowrap_3_0(f_76, g_76, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    t = _2_0(_id, c_76, t);
    return(t);
  }
  t = iowrap_2_0(h_5, _fail, t);
  return(t);
}
ATerm io_tg2fold_strategy_0_0 (ATerm t)
{
  t = iowrap_1_0(T2_Module_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_tg2fold_strategy_0_0(t);
  return(t);
}
