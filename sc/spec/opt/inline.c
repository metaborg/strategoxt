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
Symbol sym_Cong_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_As_2;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Some_1;
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
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_c_41;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_d_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_o_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_e_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_t_37;
ATerm term_r_37;
ATerm term_o_37;
ATerm term_j_37;
ATerm term_g_37;
ATerm term_b_37;
ATerm term_f_36;
ATerm term_b_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_o_31;
ATerm term_y_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_f_30;
ATerm term_h_26;
ATerm term_d_23;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_z_18;
ATerm term_p_17;
ATerm term_k_17;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_n_10;
ATerm term_e_10;
void init_constant_terms (void)
{
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Op_2, term_o_30, (ATerm) ATempty);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_ConstType_1, term_p_30);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_11);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym__3, term_z_39, term_a_40, term_k_17);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm SubsArgCall2_0_0 (ATerm);
ATerm SubsArgCall1_0_0 (ATerm);
ATerm topdown_1_0 (ATerm k_111 (ATerm), ATerm);
ATerm substitute_arg_0_0 (ATerm);
ATerm substitute_args_0_0 (ATerm);
ATerm InlineCall_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm length_0_0 (ATerm);
ATerm spaste_1_0 (ATerm o_110 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm);
ATerm Let_2_0 (ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm srename_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm k_110 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm e_99 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm union_1_0 (ATerm y_119 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm);
ATerm diff_1_0 (ATerm u_119 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm);
ATerm for_3_0 (ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm a_129 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm p_126 (ATerm), ATerm q_126 (ATerm), ATerm r_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm n_96 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm x_124 (ATerm), ATerm y_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm RnBinding_2_0 (ATerm r_124 (ATerm), ATerm s_124 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm RnVar_1_0 (ATerm c_125 (ATerm (ATerm), ATerm), ATerm);
ATerm all_dist_1_0 (ATerm v_125 (ATerm), ATerm);
ATerm env_alltd_1_0 (ATerm f_125 (ATerm), ATerm);
ATerm rename_4_0 (ATerm m_124 (ATerm (ATerm), ATerm), ATerm n_124 (ATerm), ATerm o_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_124 (ATerm (ATerm), ATerm), ATerm);
ATerm trename_0_0 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm y_123 (ATerm), ATerm);
ATerm InlineCall0_0_0 (ATerm);
ATerm occurrences_1_0 (ATerm g_120 (ATerm), ATerm);
ATerm local_inlinable_1_0 (ATerm p_109 (ATerm), ATerm);
ATerm DeclareInline_0_0 (ATerm);
ATerm UndefineSDef_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm t_123 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm s_123 (ATerm), ATerm);
ATerm scope_2_0 (ATerm u_123 (ATerm), ATerm v_123 (ATerm), ATerm);
ATerm inline_sdef_0_0 (ATerm);
ATerm assert_1_0 (ATerm w_123 (ATerm), ATerm);
ATerm AddSDef_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm foldr_3_0 (ATerm n_122 (ATerm), ATerm o_122 (ATerm), ATerm p_122 (ATerm), ATerm);
ATerm crush_3_0 (ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm);
ATerm term_size_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm);
ATerm Match_1_0 (ATerm e_100 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm);
ATerm Build_1_0 (ATerm f_100 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm w_99 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm);
ATerm body_to_inline_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm);
ATerm inlineable_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm genzip_4_0 (ATerm w_115 (ATerm), ATerm x_115 (ATerm), ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm);
ATerm zip_1_0 (ATerm b_116 (ATerm), ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BMF_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm o_112 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm F10_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm g_128 (ATerm), ATerm);
ATerm downup_1_0 (ATerm m_111 (ATerm), ATerm);
ATerm simplify0_0_0 (ATerm);
ATerm inline_sdefs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm p_95 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm u_95 (ATerm), ATerm);
ATerm inline_strategies_0_0 (ATerm);
ATerm _2_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm c_118 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm t_131 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm x_138 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_133 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm j_138 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm l_122 (ATerm), ATerm m_122 (ATerm), ATerm);
ATerm crush_2_0 (ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_131 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm k_134 (ATerm), ATerm);
ATerm map_1_0 (ATerm l_117 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm a_108 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm b_108 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm w_117 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm k_135 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm c_114 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm p_136 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm n_136 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm m_136 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_134 (ATerm), ATerm n_134 (ATerm), ATerm o_134 (ATerm), ATerm p_134 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm b_134 (ATerm), ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm e_134 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm v_133 (ATerm), ATerm w_133 (ATerm), ATerm x_133 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm t_133 (ATerm), ATerm u_133 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm q_133 (ATerm), ATerm);
ATerm inline_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm m_0 = NULL,o_0 = NULL,r_0 = NULL,s_0 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm d_10 = ATgetArgument(t, 0);
      if(match_cons(d_10, sym_SVar_1))
        {
          m_0 = ATgetArgument(d_10, 0);
        }
      else
        _fail(t);
      o_0 = ATgetArgument(t, 1);
      r_0 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_0), (ATerm)ATempty, (ATerm) ATempty);
  {
    ATerm p_0 (ATerm t)
    {
      t = term_e_10;
      return(t);
    }
    t = rewrite_1_0(p_0, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm g_10 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) g_10) != ATmakeSymbol("n_0", 0, ATtrue)))
          _fail(t);
        s_0 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_0), o_0, r_0);
  }
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL;
  t_0 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm i_10 = ATgetArgument(t, 0);
      if(match_cons(i_10, sym_SVar_1))
        {
          ATerm m_10 = ATgetArgument(i_10, 0);
        }
      else
        _fail(t);
      {
        ATerm j_10 = ATgetArgument(t, 1);
        if(((ATgetType(j_10) != AT_LIST) || !(ATisEmpty(j_10))))
          _fail(t);
      }
      {
        ATerm l_10 = ATgetArgument(t, 2);
        if(((ATgetType(l_10) != AT_LIST) || !(ATisEmpty(l_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_0;
  {
    ATerm q_0 (ATerm t)
    {
      t = term_n_10;
      return(t);
    }
    t = rewrite_1_0(q_0, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm o_10 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) o_10) != ATmakeSymbol("k_0", 0, ATtrue)))
          _fail(t);
        u_0 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = u_0;
    t = strename_0_0(t);
  }
  return(t);
}
ATerm topdown_1_0 (ATerm k_111 (ATerm), ATerm t)
{
  t = k_111(t);
  {
    ATerm v_0 (ATerm t)
    {
      t = topdown_1_0(k_111, t);
      return(t);
    }
    t = SRTS_all(v_0, t);
  }
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL,m_1 = NULL,n_1 = NULL,p_1 = NULL,q_1 = NULL,t_1 = NULL,u_1 = NULL,x_1 = NULL,z_1 = NULL;
  n_1 = t;
  if(match_cons(t, sym__2))
    {
      p_1 = ATgetArgument(t, 0);
      z_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_1;
  if(match_cons(t, sym_VarDec_2))
    {
      q_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_1;
  if(match_cons(t, sym_FunType_2))
    {
      u_1 = ATgetArgument(t, 0);
      {
        ATerm p_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = u_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_10 = ATgetFirst((ATermList) t);
      x_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_1;
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_10 = ATgetFirst((ATermList) t);
            ATerm v_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(s_10);
        t = z_1;
        if(match_cons(t, sym_CallT_3))
          {
            i_1 = ATgetArgument(t, 0);
            k_1 = ATgetArgument(t, 1);
            m_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = i_1;
        if(match_cons(t, sym_SVar_1))
          {
            j_1 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_1;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_1;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_1), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_y_10, j_1));
        {
          ATerm w_0 (ATerm t)
          {
            t = term_e_10;
            return(t);
          }
          t = assert_1_0(w_0, t);
          t = n_1;
        }
      }
    else
      {
        t = r_10;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_1), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_z_10, z_1));
        {
          ATerm x_0 (ATerm t)
          {
            t = term_n_10;
            return(t);
          }
          t = assert_1_0(x_0, t);
          t = n_1;
        }
      }
  }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL;
  ATerm y_0 (ATerm t)
  {
    t = term_n_10;
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    ATerm a_1 (ATerm t)
    {
      t = term_e_10;
      return(t);
    }
    ATerm b_1 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          i_2 = ATgetArgument(t, 0);
          j_2 = ATgetArgument(t, 1);
          k_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, i_2, j_2);
      t = zip_1_0(substitute_arg_0_0, t);
      t = k_2;
      {
        ATerm c_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            ATerm a_11 = t;
            int b_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SubsArgCall1_0_0(t);
                ;
                LocalPopChoice(b_11);
              }
            else
              {
                t = a_11;
                t = SubsArgCall2_0_0(t);
              }
            return(t);
          }
          t = try_1_0(d_1, t);
          return(t);
        }
        t = topdown_1_0(c_1, t);
      }
      return(t);
    }
    t = scope_2_0(a_1, b_1, t);
    return(t);
  }
  t = scope_2_0(y_0, z_0, t);
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,v_4 = NULL,x_4 = NULL,y_4 = NULL;
  s_4 = t;
  if(match_cons(t, sym_CallT_3))
    {
      t_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
      y_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_4;
  if(match_cons(t, sym_SVar_1))
    {
      v_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_4), (ATerm)ATempty, (ATerm) ATempty);
        {
          ATerm e_1 (ATerm t)
          {
            t = term_e_11;
            return(t);
          }
          t = rewrite_1_0(e_1, t);
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          _fail(t);
        }
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        {
          ATerm g_11 = t;
          int h_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_4), (ATerm)ATempty, (ATerm) ATempty);
              {
                ATerm f_1 (ATerm t)
                {
                  t = term_e_11;
                  return(t);
                }
                t = rewrite_1_0(f_1, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                _fail(t);
              }
              ;
              LocalPopChoice(h_11);
            }
          else
            {
              t = g_11;
              {
                ATerm k_11 = t;
                int l_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_1 = NULL,o_1 = NULL,r_1 = NULL,s_1 = NULL,v_1 = NULL,a_2 = NULL,c_2 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_4), (ATerm)ATempty, (ATerm) ATempty);
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = term_e_11;
                        return(t);
                      }
                      t = rewrite_1_0(g_1, t);
                      if(match_cons(t, sym_Defined_2))
                        {
                          ATerm n_11 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) n_11) != ATmakeSymbol("d_0", 0, ATtrue)))
                            _fail(t);
                          l_1 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_1;
                      t = strename_0_0(t);
                      if(match_cons(t, sym_SDefT_4))
                        {
                          if((v_4 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          o_1 = ATgetArgument(t, 1);
                          r_1 = ATgetArgument(t, 2);
                          s_1 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__3, o_1, x_4, s_1);
                      t = substitute_args_0_0(t);
                      v_1 = t;
                      t = r_1;
                      {
                        ATerm h_1 (ATerm t)
                        {
                          ATerm l_2 = NULL;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              l_2 = ATgetArgument(t, 0);
                              {
                                ATerm r_11 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = l_2;
                          return(t);
                        }
                        t = map_1_0(h_1, t);
                        a_2 = t;
                        t = (ATerm) ATmakeAppl(sym__2, y_4, a_2);
                        {
                          ATerm w_1 (ATerm t)
                          {
                            ATerm m_2 = NULL,n_2 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                m_2 = ATgetArgument(t, 0);
                                n_2 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_2), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_2)));
                            return(t);
                          }
                          t = zip_1_0(w_1, t);
                          c_2 = t;
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_4), (ATerm)ATempty, (ATerm) ATempty), term_s_11);
                          {
                            ATerm y_1 (ATerm t)
                            {
                              t = term_e_11;
                              return(t);
                            }
                            t = assert_1_0(y_1, t);
                            t = (ATerm) ATmakeAppl(sym_Scope_2, a_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_2), v_1));
                            t = simplify0_0_0(t);
                          }
                        }
                      }
                    }
                    ;
                    LocalPopChoice(l_11);
                  }
                else
                  {
                    t = k_11;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_4), (ATerm)ATempty, (ATerm) ATempty);
                    {
                      ATerm b_2 (ATerm t)
                      {
                        t = term_e_11;
                        return(t);
                      }
                      t = rewrite_1_0(b_2, t);
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
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
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    t = term_t_11;
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm d_5 = NULL,e_5 = NULL;
    if(match_cons(t, sym__2))
      {
        d_5 = ATgetArgument(t, 0);
        e_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm u_11 = t;
      int v_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(d_5, e_5);
          ;
          LocalPopChoice(v_11);
        }
      else
        {
          t = u_11;
          t = SSL_addr(d_5, e_5);
        }
    }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_w_11;
    return(t);
  }
  t = foldr_3_0(d_2, e_2, f_2, t);
  return(t);
}
ATerm spaste_1_0 (ATerm o_110 (ATerm), ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 (ATerm t)
      {
        t = split_2_0(_id, o_110, t);
        {
          ATerm h_2 (ATerm t)
          {
            ATerm t_6 = NULL,c_7 = NULL,f_7 = NULL,j_7 = NULL,l_7 = NULL;
            if(match_cons(t, sym__2))
              {
                t_6 = ATgetArgument(t, 0);
                l_7 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_6;
            {
              ATerm z_11 = t;
              int a_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm b_12 = ATgetArgument(t, 0);
                      c_7 = ATgetArgument(t, 1);
                      f_7 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_12);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, l_7, c_7, f_7);
                }
              else
                {
                  t = z_11;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm d_12 = ATgetArgument(t, 0);
                      c_7 = ATgetArgument(t, 1);
                      f_7 = ATgetArgument(t, 2);
                      j_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, l_7, c_7, f_7, j_7);
                }
            }
            return(t);
          }
          t = zip_1_0(h_2, t);
        }
        return(t);
      }
      t = Let_2_0(g_2, _id, t);
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              t = split_2_0(_id, o_110, t);
              {
                ATerm p_2 (ATerm t)
                {
                  ATerm h_9 = NULL,k_9 = NULL,l_9 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      h_9 = ATgetArgument(t, 0);
                      l_9 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = h_9;
                  {
                    ATerm g_12 = t;
                    int h_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm i_12 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(h_12);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_9);
                      }
                    else
                      {
                        t = g_12;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm j_12 = ATgetArgument(t, 0);
                            k_9 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, l_9, k_9);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(p_2, t);
              }
              return(t);
            }
            t = SDef_3_0(_id, o_2, _id, t);
            ;
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            {
              ATerm k_12 = t;
              int l_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_2 (ATerm t)
                  {
                    t = split_2_0(_id, o_110, t);
                    {
                      ATerm r_2 (ATerm t)
                      {
                        ATerm f_10 = NULL,h_10 = NULL,k_10 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            f_10 = ATgetArgument(t, 0);
                            k_10 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = f_10;
                        {
                          ATerm m_12 = t;
                          int n_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm o_12 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(n_12);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_10);
                            }
                          else
                            {
                              t = m_12;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm p_12 = ATgetArgument(t, 0);
                                  h_10 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, k_10, h_10);
                            }
                        }
                        return(t);
                      }
                      t = zip_1_0(r_2, t);
                    }
                    return(t);
                  }
                  t = SDefT_4_0(_id, q_2, _id, _id, t);
                  ;
                  LocalPopChoice(l_12);
                }
              else
                {
                  t = k_12;
                  {
                    ATerm q_12 = t;
                    int r_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_2 (ATerm t)
                        {
                          t = split_2_0(_id, o_110, t);
                          {
                            ATerm t_2 (ATerm t)
                            {
                              ATerm t_10 = NULL,w_10 = NULL,x_10 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  t_10 = ATgetArgument(t, 0);
                                  x_10 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = t_10;
                              {
                                ATerm s_12 = t;
                                int t_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm v_12 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(t_12);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_10);
                                  }
                                else
                                  {
                                    t = s_12;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm w_12 = ATgetArgument(t, 0);
                                        w_10 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, x_10, w_10);
                                  }
                              }
                              return(t);
                            }
                            t = zip_1_0(t_2, t);
                          }
                          return(t);
                        }
                        t = RDefT_4_0(_id, s_2, _id, _id, t);
                        ;
                        LocalPopChoice(r_12);
                      }
                    else
                      {
                        t = q_12;
                        {
                          ATerm u_2 (ATerm t)
                          {
                            ATerm f_11 = NULL;
                            t = o_110(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                f_11 = ATgetFirst((ATermList) t);
                                {
                                  ATerm x_12 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = f_11;
                            return(t);
                          }
                          t = Rec_2_0(u_2, _id, t);
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
ATerm Rec_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,m_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  q_11 = t;
  if(match_cons(t, sym_Rec_2))
    {
      j_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_11);
  i_11 = t;
  t = j_11;
  t = u_100(t);
  o_11 = t;
  t = m_11;
  t = v_100(t);
  p_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, o_11, p_11), i_11);
  return(t);
}
ATerm SDef_3_0 (ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm t)
{
  ATerm c_12 = NULL,u_12 = NULL,y_12 = NULL,m_13 = NULL,t_13 = NULL,v_13 = NULL,x_13 = NULL,z_13 = NULL;
  z_13 = t;
  if(match_cons(t, sym_SDef_3))
    {
      u_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
      m_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_13);
  c_12 = t;
  t = u_12;
  t = m_102(t);
  t_13 = t;
  t = y_12;
  t = n_102(t);
  v_13 = t;
  t = m_13;
  t = o_102(t);
  x_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, t_13, v_13, x_13), c_12);
  return(t);
}
ATerm Let_2_0 (ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm t)
{
  ATerm r_14 = NULL,t_14 = NULL,v_14 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  f_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      t_14 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_15);
  r_14 = t;
  t = t_14;
  t = x_99(t);
  d_15 = t;
  t = v_14;
  t = y_99(t);
  e_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, d_15, e_15), r_14);
  return(t);
}
ATerm sboundin_3_0 (ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(p_110, p_110, t);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(r_110, r_110, p_110, t);
            ;
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            {
              ATerm d_13 = t;
              int e_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(r_110, r_110, r_110, p_110, t);
                  ;
                  LocalPopChoice(e_13);
                }
              else
                {
                  t = d_13;
                  t = Rec_2_0(r_110, p_110, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm s_15 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm f_13 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
      {
        ATerm g_13 = ATgetArgument(t, 2);
      }
      {
        ATerm h_13 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = s_15;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm t_15 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm i_13 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
      {
        ATerm j_13 = ATgetArgument(t, 2);
      }
      {
        ATerm k_13 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = t_15;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm y_15 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm l_13 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
      {
        ATerm n_13 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = y_15;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm a_16 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      a_16 = ATgetArgument(t, 0);
      {
        ATerm o_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_16;
  {
    ATerm v_2 (ATerm t)
    {
      ATerm e_16 = NULL;
      ATerm p_13 = t;
      int q_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              e_16 = ATgetArgument(t, 0);
              {
                ATerm r_13 = ATgetArgument(t, 1);
              }
              {
                ATerm s_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(q_13);
          t = e_16;
        }
      else
        {
          t = p_13;
          if(match_cons(t, sym_SDefT_4))
            {
              e_16 = ATgetArgument(t, 0);
              {
                ATerm u_13 = ATgetArgument(t, 1);
              }
              {
                ATerm w_13 = ATgetArgument(t, 2);
              }
              {
                ATerm y_13 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = e_16;
        }
      return(t);
    }
    t = map_1_0(v_2, t);
  }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        {
          ATerm c_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(d_14);
            }
          else
            {
              t = c_14;
              {
                ATerm e_14 = t;
                int f_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_17 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        f_17 = ATgetArgument(t, 0);
                        {
                          ATerm g_14 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, f_17);
                    ;
                    LocalPopChoice(f_14);
                  }
                else
                  {
                    t = e_14;
                    {
                      ATerm h_14 = t;
                      int i_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(i_14);
                        }
                      else
                        {
                          t = h_14;
                          t = Bind7_0_0(t);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  t = rename_4_0(SVar_1_0, w_2, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm tpaste_1_0 (ATerm k_110 (ATerm), ATerm t)
{
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(k_110, _id, t);
      ;
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      {
        ATerm l_14 = t;
        int m_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_2 (ATerm t)
            {
              t = split_2_0(_id, k_110, t);
              {
                ATerm z_2 (ATerm t)
                {
                  ATerm h_18 = NULL,j_18 = NULL,l_18 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      h_18 = ATgetArgument(t, 0);
                      l_18 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = h_18;
                  {
                    ATerm n_14 = t;
                    int o_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm p_14 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(o_14);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_18);
                      }
                    else
                      {
                        t = n_14;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm q_14 = ATgetArgument(t, 0);
                            j_18 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, l_18, j_18);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(z_2, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, y_2, _id, t);
            ;
            LocalPopChoice(m_14);
          }
        else
          {
            t = l_14;
            {
              ATerm a_3 (ATerm t)
              {
                t = split_2_0(_id, k_110, t);
                {
                  ATerm c_3 (ATerm t)
                  {
                    ATerm d_19 = NULL,h_19 = NULL,l_19 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        d_19 = ATgetArgument(t, 0);
                        l_19 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = d_19;
                    {
                      ATerm s_14 = t;
                      int u_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              ATerm w_14 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(u_14);
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_19);
                        }
                      else
                        {
                          t = s_14;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm x_14 = ATgetArgument(t, 0);
                              h_19 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, l_19, h_19);
                        }
                    }
                    return(t);
                  }
                  t = zip_1_0(c_3, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, a_3, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm p_19 = NULL,t_19 = NULL,u_19 = NULL,y_19 = NULL;
  y_19 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      t_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_19);
  p_19 = t;
  t = t_19;
  t = e_99(t);
  u_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, u_19), p_19);
  return(t);
}
ATerm RDefT_4_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm t)
{
  ATerm b_20 = NULL,e_20 = NULL,f_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
  s_20 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      e_20 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
      k_20 = ATgetArgument(t, 2);
      l_20 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_20);
  b_20 = t;
  t = e_20;
  t = v_98(t);
  m_20 = t;
  t = f_20;
  t = w_98(t);
  n_20 = t;
  t = k_20;
  t = x_98(t);
  q_20 = t;
  t = l_20;
  t = y_98(t);
  r_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, m_20, n_20, q_20, r_20), b_20);
  return(t);
}
ATerm tboundin_3_0 (ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm t)
{
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(n_110, l_110, t);
      ;
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
      {
        ATerm a_15 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(n_110, n_110, n_110, l_110, t);
            ;
            LocalPopChoice(b_15);
          }
        else
          {
            t = a_15;
            {
              ATerm c_15 = t;
              int g_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(n_110, n_110, n_110, l_110, t);
                  ;
                  LocalPopChoice(g_15);
                }
              else
                {
                  t = c_15;
                  t = DynamicRules_1_0(l_110, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm v_20 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm h_15 = ATgetArgument(t, 0);
      ATerm i_15 = ATgetArgument(t, 1);
      v_20 = ATgetArgument(t, 2);
      {
        ATerm j_15 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = v_20;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm b_21 = NULL;
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            b_21 = ATgetArgument(t, 0);
            {
              ATerm m_15 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_15);
        t = b_21;
      }
    else
      {
        t = k_15;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            b_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_21;
      }
    return(t);
  }
  t = map_1_0(e_3, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm e_21 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm n_15 = ATgetArgument(t, 0);
      ATerm o_15 = ATgetArgument(t, 1);
      e_21 = ATgetArgument(t, 2);
      {
        ATerm p_15 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = e_21;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm f_21 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      f_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_21;
  t = tvars_0_0(t);
  return(t);
}
ATerm union_1_0 (ATerm y_119 (ATerm), ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL;
  if(match_cons(t, sym__2))
    {
      h_21 = ATgetArgument(t, 0);
      g_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_21;
  {
    ATerm i_21 (ATerm t)
    {
      ATerm q_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_21;
          ;
          LocalPopChoice(r_15);
        }
      else
        {
          t = q_15;
          {
            ATerm u_15 = t;
            int v_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_3 (ATerm t)
                {
                  t = g_21;
                  return(t);
                }
                t = HdMember_p__2_0(y_119, f_3, t);
                t = i_21(t);
                ;
                LocalPopChoice(v_15);
              }
            else
              {
                t = u_15;
                t = Cons_2_0(_id, i_21, t);
              }
          }
        }
      return(t);
    }
    t = i_21(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm j_21 = NULL;
    if(match_cons(t, sym__2))
      {
        j_21 = ATgetArgument(t, 0);
        if((j_21 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(g_3, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_21 = ATgetFirst((ATermList) t);
      l_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_120(t);
  {
    ATerm h_3 (ATerm t)
    {
      ATerm m_21 = NULL;
      m_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_21, m_21);
      t = c_120(t);
      return(t);
    }
    t = fetch_1_0(h_3, t);
    t = l_21;
  }
  return(t);
}
ATerm diff_1_0 (ATerm u_119 (ATerm), ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL;
  if(match_cons(t, sym__2))
    {
      o_21 = ATgetArgument(t, 0);
      n_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_21;
  {
    ATerm p_21 (ATerm t)
    {
      ATerm w_15 = t;
      int x_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(x_15);
        }
      else
        {
          t = w_15;
          {
            ATerm z_15 = t;
            int b_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_3 (ATerm t)
                {
                  t = n_21;
                  return(t);
                }
                t = HdMember_p__2_0(u_119, i_3, t);
                t = p_21(t);
                ;
                LocalPopChoice(b_16);
              }
            else
              {
                t = z_15;
                t = Cons_2_0(_id, p_21, t);
              }
          }
        }
      return(t);
    }
    t = p_21(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_16 = ATgetFirst((ATermList) t);
      if(match_cons(c_16, sym__2))
        {
          q_21 = ATgetArgument(c_16, 0);
          r_21 = ATgetArgument(c_16, 1);
        }
      else
        _fail(t);
      s_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_21);
  if(match_cons(t, sym__2))
    {
      t_21 = ATgetArgument(t, 0);
      u_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_21);
  if(match_cons(t, sym__2))
    {
      if((t_21 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      v_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_21, u_21);
  t = zip_1_0(_id, t);
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_21, s_21);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm t)
{
  ATerm x_21 (ATerm t)
  {
    ATerm d_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_128(t);
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = d_16;
        t = w_128(t);
        t = x_21(t);
      }
    return(t);
  }
  t = x_21(t);
  return(t);
}
ATerm for_3_0 (ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm a_129 (ATerm), ATerm t)
{
  t = y_128(t);
  t = while_not_2_0(z_128, a_129, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_3 (ATerm t)
      {
        ATerm c_22 = NULL;
        c_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, c_22);
        return(t);
      }
      ATerm k_3 (ATerm t)
      {
        ATerm m_3 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, m_3, t);
        return(t);
      }
      ATerm l_3 (ATerm t)
      {
        ATerm i_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_3 (ATerm t)
            {
              ATerm k_16 = t;
              int l_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_22 = ATgetFirst((ATermList) t);
                      h_22 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = e_22;
                  if(match_cons(t, sym__2))
                    {
                      f_22 = ATgetArgument(t, 0);
                      g_22 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = g_22;
                  if((f_22 != t))
                    {
                      _fail(t);
                    }
                  t = h_22;
                  ;
                  LocalPopChoice(l_16);
                }
              else
                {
                  t = k_16;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, n_3, t);
            ;
            LocalPopChoice(j_16);
          }
        else
          {
            t = i_16;
            {
              ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL;
              if(match_cons(t, sym__2))
                {
                  l_22 = ATgetArgument(t, 0);
                  m_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_22;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_22 = ATgetFirst((ATermList) t);
                  o_22 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_22), n_22), o_22);
            }
          }
        return(t);
      }
      t = for_3_0(j_3, k_3, l_3, t);
      ;
      LocalPopChoice(h_16);
    }
  else
    {
      t = g_16;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm s_22 = NULL;
          if(match_cons(t, sym__2))
            {
              s_22 = ATgetArgument(t, 0);
              if((s_22 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(o_3, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm p_126 (ATerm), ATerm q_126 (ATerm), ATerm r_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm w_22 (ATerm t)
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_126(t);
        ;
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        {
          ATerm o_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_22 = NULL,v_22 = NULL;
              t_22 = t;
              t = q_126(t);
              v_22 = t;
              t = t_22;
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm r_3 (ATerm t)
                  {
                    t = v_22;
                    return(t);
                  }
                  t = split_2_0(w_22, r_3, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm q_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = r_126(p_3, w_22, q_3, t);
                {
                  ATerm s_3 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(s_3, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(p_16);
            }
          else
            {
              t = o_16;
              {
                ATerm t_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(t_3, union_0_0, w_22, t);
              }
            }
        }
      }
    return(t);
  }
  t = w_22(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm x_22 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        x_22 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, x_22);
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
        {
          ATerm s_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(t_16);
            }
          else
            {
              t = s_16;
              {
                ATerm u_16 = t;
                int v_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(v_16);
                  }
                else
                  {
                    t = u_16;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(u_3, w_3, tboundin_3_0, t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm a_23 = NULL,e_23 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      e_23 = ATgetArgument(t, 0);
      t = e_23;
      if(match_cons(t, sym_Rule_3))
        {
          a_23 = ATgetArgument(t, 0);
          {
            ATerm w_16 = ATgetArgument(t, 1);
          }
          {
            ATerm x_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = a_23;
      t = tvars_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          e_23 = ATgetArgument(t, 0);
          {
            ATerm y_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_23;
    }
  return(t);
}
ATerm Var_1_0 (ATerm n_96 (ATerm), ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL;
  l_23 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_23);
  i_23 = t;
  t = j_23;
  t = n_96(t);
  k_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, k_23), i_23);
  return(t);
}
ATerm DistBinding_2_0 (ATerm x_124 (ATerm), ATerm y_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
  if(match_cons(t, sym__3))
    {
      q_23 = ATgetArgument(t, 0);
      p_23 = ATgetArgument(t, 1);
      o_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_23;
  {
    ATerm x_3 (ATerm t)
    {
      ATerm r_23 = NULL;
      r_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_23, o_23);
      t = x_124(t);
      return(t);
    }
    ATerm y_3 (ATerm t)
    {
      ATerm s_23 = NULL;
      s_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_23, p_23);
      t = x_124(t);
      return(t);
    }
    t = y_124(x_3, y_3, _id, t);
  }
  return(t);
}
ATerm RnBinding_2_0 (ATerm r_124 (ATerm), ATerm s_124 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
  if(match_cons(t, sym__2))
    {
      t_23 = ATgetArgument(t, 0);
      u_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_23;
  t = r_124(t);
  v_23 = t;
  t = map_1_0(new_0_0, t);
  w_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_23, w_23);
  t = zip_1_0(_id, t);
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_23, u_23);
  t = conc_0_0(t);
  y_23 = t;
  t = t_23;
  {
    ATerm a_4 (ATerm t)
    {
      t = w_23;
      return(t);
    }
    t = s_124(a_4, t);
    z_23 = t;
    t = (ATerm) ATmakeAppl(sym__3, z_23, u_23, y_23);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
  if(match_cons(t, sym__2))
    {
      g_24 = ATgetArgument(t, 0);
      h_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_24;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_24 = ATgetFirst((ATermList) t);
      j_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_24;
  if(match_cons(t, sym__2))
    {
      d_24 = ATgetArgument(t, 0);
      e_24 = ATgetArgument(t, 1);
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_24;
            if((g_24 != t))
              {
                _fail(t);
              }
            t = e_24;
            ;
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            t = (ATerm) ATmakeAppl(sym__2, g_24, j_24);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, g_24, j_24);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm c_125 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL;
  if(match_cons(t, sym__2))
    {
      s_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_24;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm c_4 (ATerm t)
      {
        t = r_24;
        return(t);
      }
      t = split_2_0(_id, c_4, t);
      t = lookup_0_0(t);
      return(t);
    }
    t = c_125(b_4, t);
  }
  return(t);
}
ATerm all_dist_1_0 (ATerm v_125 (ATerm), ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
  if(match_cons(t, sym__2))
    {
      u_24 = ATgetArgument(t, 0);
      t_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_24;
  {
    ATerm d_4 (ATerm t)
    {
      ATerm v_24 = NULL;
      v_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_24, t_24);
      t = v_125(t);
      return(t);
    }
    t = SRTS_all(d_4, t);
  }
  return(t);
}
ATerm env_alltd_1_0 (ATerm f_125 (ATerm), ATerm t)
{
  ATerm w_24 (ATerm t)
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_125(t);
        ;
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        t = all_dist_1_0(w_24, t);
      }
    return(t);
  }
  t = w_24(t);
  return(t);
}
ATerm rename_4_0 (ATerm m_124 (ATerm (ATerm), ATerm), ATerm n_124 (ATerm), ATerm o_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_124 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm x_24 = NULL;
  x_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_24, (ATerm) ATempty);
  {
    ATerm y_24 (ATerm t)
    {
      ATerm e_4 (ATerm t)
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RnVar_1_0(m_124, t);
            ;
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            t = RnBinding_2_0(n_124, p_124, t);
            t = DistBinding_2_0(y_24, o_124, t);
          }
        return(t);
      }
      t = env_alltd_1_0(e_4, t);
      return(t);
    }
    t = y_24(t);
  }
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        {
          ATerm i_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(j_17);
            }
          else
            {
              t = i_17;
              t = Bind8_0_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, f_4, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = trename_0_0(t);
  t = srename_0_0(t);
  return(t);
}
ATerm rewrite_1_0 (ATerm y_123 (ATerm), ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,x_2 = NULL;
  c_25 = t;
  t = term_k_17;
  t = y_123(t);
  d_25 = t;
  t = SSL_table_get(d_25, c_25);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_2 = ATgetFirst((ATermList) t);
      {
        ATerm l_17 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_2;
  return(t);
}
ATerm InlineCall0_0_0 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  e_25 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm m_17 = ATgetArgument(t, 0);
      if(match_cons(m_17, sym_SVar_1))
        {
          f_25 = ATgetArgument(m_17, 0);
        }
      else
        _fail(t);
      {
        ATerm n_17 = ATgetArgument(t, 1);
        if(((ATgetType(n_17) != AT_LIST) || !(ATisEmpty(n_17))))
          _fail(t);
      }
      {
        ATerm o_17 = ATgetArgument(t, 2);
        if(((ATgetType(o_17) != AT_LIST) || !(ATisEmpty(o_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_25;
  {
    ATerm g_4 (ATerm t)
    {
      t = term_p_17;
      return(t);
    }
    t = rewrite_1_0(g_4, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm q_17 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) q_17) != ATmakeSymbol("g_0", 0, ATtrue)))
          _fail(t);
        g_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = g_25;
    t = strename_0_0(t);
    if(match_cons(t, sym_SDefT_4))
      {
        if((f_25 != ATgetArgument(t, 0)))
          {
            _fail(ATgetArgument(t, 0));
          }
        h_25 = ATgetArgument(t, 1);
        i_25 = ATgetArgument(t, 2);
        j_25 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = h_25;
    t = length_0_0(t);
    k_25 = t;
    t = i_25;
    t = length_0_0(t);
    l_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_25, l_25);
    {
      ATerm r_17 = t;
      int s_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(k_25, l_25);
          ;
          LocalPopChoice(s_17);
        }
      else
        {
          t = r_17;
          t = SSL_addr(k_25, l_25);
        }
      m_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_25, term_t_11);
      {
        ATerm t_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(m_25, (ATerm) ATmakeInt(0));
            ;
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            t = SSL_gtr(m_25, (ATerm) ATmakeInt(0));
          }
        t = (ATerm) ATmakeAppl(sym__2, m_25, term_t_11);
        t = new_0_0(t);
        n_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_25), (ATerm)ATempty, (ATerm) ATempty), term_s_11);
        {
          ATerm h_4 (ATerm t)
          {
            t = term_e_11;
            return(t);
          }
          t = assert_1_0(h_4, t);
          t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, n_25, h_25, i_25, j_25)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_25), (ATerm)ATempty, (ATerm) ATempty));
        }
      }
    }
  }
  return(t);
}
ATerm occurrences_1_0 (ATerm g_120 (ATerm), ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL;
  ATerm i_4 (ATerm t)
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_120(t);
        t = term_w_11;
        ;
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        t = term_t_11;
      }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    ATerm k_4 (ATerm t)
    {
      t = term_t_11;
      return(t);
    }
    ATerm l_4 (ATerm t)
    {
      ATerm q_25 = NULL,r_25 = NULL;
      if(match_cons(t, sym__2))
        {
          q_25 = ATgetArgument(t, 0);
          r_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm x_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(q_25, r_25);
            ;
            LocalPopChoice(y_17);
          }
        else
          {
            t = x_17;
            t = SSL_addr(q_25, r_25);
          }
      }
      return(t);
    }
    ATerm m_4 (ATerm t)
    {
      t = occurrences_1_0(g_120, t);
      return(t);
    }
    t = crush_3_0(k_4, l_4, m_4, t);
    return(t);
  }
  t = split_2_0(i_4, j_4, t);
  if(match_cons(t, sym__2))
    {
      o_25 = ATgetArgument(t, 0);
      p_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(o_25, p_25);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = SSL_addr(o_25, p_25);
      }
  }
  return(t);
}
ATerm local_inlinable_1_0 (ATerm p_109 (ATerm), ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      s_25 = ATgetArgument(t, 0);
      {
        ATerm b_18 = ATgetArgument(t, 1);
      }
      {
        ATerm c_18 = ATgetArgument(t, 2);
      }
      t_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  u_25 = t;
  t = t_25;
  {
    ATerm d_18 = t;
    if((PushChoice() == 0))
      {
        ATerm n_4 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm e_18 = ATgetArgument(t, 0);
              if(match_cons(e_18, sym_SVar_1))
                {
                  if((s_25 != ATgetArgument(e_18, 0)))
                    {
                      _fail(ATgetArgument(e_18, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm f_18 = ATgetArgument(t, 1);
              }
              {
                ATerm g_18 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(n_4, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_18;
      }
    t = p_109(t);
    {
      ATerm o_4 (ATerm t)
      {
        if(match_cons(t, sym_CallT_3))
          {
            ATerm i_18 = ATgetArgument(t, 0);
            if(match_cons(i_18, sym_SVar_1))
              {
                if((s_25 != ATgetArgument(i_18, 0)))
                  {
                    _fail(ATgetArgument(i_18, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm k_18 = ATgetArgument(t, 1);
            }
            {
              ATerm m_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        return(t);
      }
      t = occurrences_1_0(o_4, t);
      v_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_25, term_w_11);
      t = leq_0_0(t);
      t = u_25;
    }
  }
  return(t);
}
ATerm DeclareInline_0_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      w_25 = ATgetArgument(t, 0);
      x_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_25;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm q_4 (ATerm t)
      {
        t = x_25;
        return(t);
      }
      t = local_inlinable_1_0(q_4, t);
      t = AddSDef_0_0(t);
      return(t);
    }
    t = map_1_0(p_4, t);
    t = (ATerm) ATmakeAppl(sym_Let_2, w_25, x_25);
  }
  return(t);
}
ATerm UndefineSDef_0_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      y_25 = ATgetArgument(t, 0);
      {
        ATerm n_18 = ATgetArgument(t, 1);
      }
      {
        ATerm o_18 = ATgetArgument(t, 2);
      }
      {
        ATerm p_18 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_25), (ATerm)ATempty, (ATerm) ATempty), term_s_11);
  {
    ATerm r_4 (ATerm t)
    {
      t = term_e_11;
      return(t);
    }
    t = assert_1_0(r_4, t);
    t = z_25;
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
  if(match_cons(t, sym__2))
    {
      c_26 = ATgetArgument(t, 0);
      d_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_3 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm s_18 = ATgetArgument(t, 0);
            ATerm t_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(c_26, d_26);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_18 = ATgetFirst((ATermList) t);
            b_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_3;
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        t = (ATerm) ATempty;
      }
    e_26 = t;
    t = SSL_table_put(c_26, d_26, e_26);
    t = (ATerm) ATmakeAppl(sym__2, c_26, d_26);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm t_123 (ATerm), ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
  k_26 = t;
  t = t_123(t);
  l_26 = t;
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(l_26, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_26 = ATgetFirst((ATermList) t);
        m_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(l_26, (ATerm)ATmakeAppl(sym_Scopes_0), m_26);
    t = n_26;
    {
      ATerm u_4 (ATerm t)
      {
        ATerm o_26 = NULL;
        o_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_26, o_26);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(u_4, t);
      t = k_26;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t)
{
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_114(t);
      t = s_114(t);
      ;
      LocalPopChoice(y_18);
    }
  else
    {
      t = x_18;
      t = s_114(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_123 (ATerm), ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
  r_26 = t;
  t = s_123(t);
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_26, term_z_18);
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_19 = ATgetArgument(t, 0);
            ATerm e_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_26, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = (ATerm) ATempty;
      }
    t_26 = t;
    t = SSL_table_put(s_26, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(t_26), (ATerm) ATempty));
    t = r_26;
  }
  return(t);
}
ATerm scope_2_0 (ATerm u_123 (ATerm), ATerm v_123 (ATerm), ATerm t)
{
  t = begin_scope_1_0(u_123, t);
  {
    ATerm w_4 (ATerm t)
    {
      t = end_scope_1_0(u_123, t);
      return(t);
    }
    t = restore_always_2_0(v_123, w_4, t);
  }
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    t = term_e_11;
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    ATerm b_5 (ATerm t)
    {
      t = term_p_17;
      return(t);
    }
    ATerm c_5 (ATerm t)
    {
      ATerm f_19 = t;
      int g_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = UndefineSDef_0_0(t);
          ;
          LocalPopChoice(g_19);
        }
      else
        {
          t = f_19;
          {
            ATerm i_19 = t;
            int j_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = DeclareInline_0_0(t);
                ;
                LocalPopChoice(j_19);
              }
            else
              {
                t = i_19;
                {
                  ATerm f_5 (ATerm t)
                  {
                    ATerm k_19 = t;
                    int m_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = InlineCall0_0_0(t);
                        ;
                        LocalPopChoice(m_19);
                      }
                    else
                      {
                        t = k_19;
                        t = InlineCall_0_0(t);
                      }
                    return(t);
                  }
                  t = repeat_1_0(f_5, t);
                }
              }
          }
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(b_5, c_5, t);
    return(t);
  }
  t = scope_2_0(z_4, a_5, t);
  return(t);
}
ATerm assert_1_0 (ATerm w_123 (ATerm), ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  if(match_cons(t, sym__2))
    {
      z_26 = ATgetArgument(t, 0);
      a_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_123(t);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_27, z_26, a_27);
  t = table_push_0_0(t);
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(b_27, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_27 = ATgetFirst((ATermList) t);
        d_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(b_27, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(d_27), (ATerm) ATinsert(CheckATermList(c_27), z_26)));
    t = (ATerm) ATmakeAppl(sym__2, z_26, a_27);
  }
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  e_27 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      f_27 = ATgetArgument(t, 0);
      {
        ATerm q_19 = ATgetArgument(t, 1);
      }
      {
        ATerm r_19 = ATgetArgument(t, 2);
      }
      {
        ATerm s_19 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  g_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_27), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_v_19, e_27));
  {
    ATerm g_5 (ATerm t)
    {
      t = term_e_11;
      return(t);
    }
    t = assert_1_0(g_5, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_27), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_w_19, e_27));
    {
      ATerm h_5 (ATerm t)
      {
        t = term_p_17;
        return(t);
      }
      t = assert_1_0(h_5, t);
      t = g_27;
    }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm x_19 = t;
  if((PushChoice() == 0))
    {
      ATerm h_27 = NULL,i_27 = NULL;
      if(match_cons(t, sym__2))
        {
          h_27 = ATgetArgument(t, 0);
          i_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm z_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(h_27, i_27);
            ;
            LocalPopChoice(a_20);
          }
        else
          {
            t = z_19;
            t = SSL_gtr(h_27, i_27);
          }
        t = (ATerm) ATmakeAppl(sym__2, h_27, i_27);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_19;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm n_122 (ATerm), ATerm o_122 (ATerm), ATerm p_122 (ATerm), ATerm t)
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_122(t);
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
      {
        ATerm l_27 = NULL,m_27 = NULL,p_27 = NULL,q_27 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_27 = ATgetFirst((ATermList) t);
            m_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_27;
        t = p_122(t);
        p_27 = t;
        t = m_27;
        t = foldr_3_0(n_122, o_122, p_122, t);
        q_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_27, q_27);
        t = o_122(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL;
  r_27 = t;
  t = SSL_explode_term(r_27);
  if(match_cons(t, sym__2))
    {
      ATerm g_20 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_27;
  t = foldr_3_0(l_120, m_120, n_120, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_5 (ATerm t)
      {
        t = term_w_11;
        return(t);
      }
      ATerm j_5 (ATerm t)
      {
        ATerm t_27 = NULL,u_27 = NULL;
        if(match_cons(t, sym__2))
          {
            t_27 = ATgetArgument(t, 0);
            u_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm j_20 = t;
          int o_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(t_27, u_27);
              ;
              LocalPopChoice(o_20);
            }
          else
            {
              t = j_20;
              t = SSL_addr(t_27, u_27);
            }
        }
        return(t);
      }
      t = crush_3_0(i_5, j_5, term_size_0_0, t);
      ;
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm x_27 (ATerm t)
        {
          ATerm k_5 (ATerm t)
          {
            t = term_w_11;
            return(t);
          }
          ATerm l_5 (ATerm t)
          {
            ATerm v_27 = NULL,w_27 = NULL;
            if(match_cons(t, sym__2))
              {
                v_27 = ATgetArgument(t, 0);
                w_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm p_20 = t;
              int t_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(v_27, w_27);
                  ;
                  LocalPopChoice(t_20);
                }
              else
                {
                  t = p_20;
                  t = SSL_addr(v_27, w_27);
                }
            }
            return(t);
          }
          t = crush_3_0(k_5, l_5, x_27, t);
          return(t);
        }
        t = x_27(t);
      }
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
  f_28 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      z_27 = ATgetArgument(t, 0);
      a_28 = ATgetArgument(t, 1);
      b_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_28);
  y_27 = t;
  t = z_27;
  t = r_100(t);
  c_28 = t;
  t = a_28;
  t = s_100(t);
  d_28 = t;
  t = b_28;
  t = t_100(t);
  e_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, c_28, d_28, e_28), y_27);
  return(t);
}
ATerm LChoice_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
  n_28 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      j_28 = ATgetArgument(t, 0);
      k_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_28);
  i_28 = t;
  t = j_28;
  t = n_100(t);
  l_28 = t;
  t = k_28;
  t = o_100(t);
  m_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, l_28, m_28), i_28);
  return(t);
}
ATerm Choice_2_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  v_28 = t;
  if(match_cons(t, sym_Choice_2))
    {
      r_28 = ATgetArgument(t, 0);
      s_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_28);
  q_28 = t;
  t = r_28;
  t = l_99(t);
  t_28 = t;
  t = s_28;
  t = m_99(t);
  u_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, t_28, u_28), q_28);
  return(t);
}
ATerm Match_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  b_29 = t;
  if(match_cons(t, sym_Match_1))
    {
      z_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_29);
  y_28 = t;
  t = z_28;
  t = e_100(t);
  a_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, a_29), y_28);
  return(t);
}
ATerm Seq_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
  j_29 = t;
  if(match_cons(t, sym_Seq_2))
    {
      f_29 = ATgetArgument(t, 0);
      g_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_29);
  e_29 = t;
  t = f_29;
  t = l_100(t);
  h_29 = t;
  t = g_29;
  t = m_100(t);
  i_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, h_29, i_29), e_29);
  return(t);
}
ATerm Scope_2_0 (ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
  r_29 = t;
  if(match_cons(t, sym_Scope_2))
    {
      n_29 = ATgetArgument(t, 0);
      o_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_29);
  m_29 = t;
  t = n_29;
  t = h_100(t);
  p_29 = t;
  t = o_29;
  t = i_100(t);
  q_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, p_29, q_29), m_29);
  return(t);
}
ATerm Build_1_0 (ATerm f_100 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
  x_29 = t;
  if(match_cons(t, sym_Build_1))
    {
      v_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_29);
  u_29 = t;
  t = v_29;
  t = f_100(t);
  w_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, w_29), u_29);
  return(t);
}
ATerm SVar_1_0 (ATerm w_99 (ATerm), ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
  d_30 = t;
  if(match_cons(t, sym_SVar_1))
    {
      b_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_30);
  a_30 = t;
  t = b_30;
  t = w_99(t);
  c_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, c_30), a_30);
  return(t);
}
ATerm PrimT_3_0 (ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  n_30 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      h_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
      j_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_30);
  g_30 = t;
  t = h_30;
  t = d_101(t);
  k_30 = t;
  t = i_30;
  t = e_101(t);
  l_30 = t;
  t = j_30;
  t = f_101(t);
  m_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, k_30, l_30, m_30), g_30);
  return(t);
}
ATerm CallT_3_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
  x_30 = t;
  if(match_cons(t, sym_CallT_3))
    {
      r_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
      t_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_30);
  q_30 = t;
  t = r_30;
  t = b_100(t);
  u_30 = t;
  t = s_30;
  t = c_100(t);
  v_30 = t;
  t = t_30;
  t = d_100(t);
  w_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, u_30, v_30, w_30), q_30);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL;
  ATerm c_31 (ATerm t)
  {
    ATerm u_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        ;
        LocalPopChoice(w_20);
      }
    else
      {
        t = u_20;
        {
          ATerm x_20 = t;
          int y_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              ;
              LocalPopChoice(y_20);
            }
          else
            {
              t = x_20;
              {
                ATerm z_20 = t;
                int a_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_5 (ATerm t)
                    {
                      t = SVar_1_0(_id, t);
                      return(t);
                    }
                    t = CallT_3_0(m_5, _id, _id, t);
                    ;
                    LocalPopChoice(a_21);
                  }
                else
                  {
                    t = z_20;
                    {
                      ATerm c_21 = t;
                      int d_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_5 (ATerm t)
                          {
                            t = SVar_1_0(_id, t);
                            return(t);
                          }
                          t = PrimT_3_0(n_5, _id, _id, t);
                          ;
                          LocalPopChoice(d_21);
                        }
                      else
                        {
                          t = c_21;
                          {
                            ATerm y_21 = t;
                            int z_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Build_1_0(_id, t);
                                ;
                                LocalPopChoice(z_21);
                              }
                            else
                              {
                                t = y_21;
                                {
                                  ATerm a_22 = t;
                                  int b_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = Match_1_0(_id, t);
                                      ;
                                      LocalPopChoice(b_22);
                                    }
                                  else
                                    {
                                      t = a_22;
                                      {
                                        ATerm d_22 = t;
                                        int i_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm o_5 (ATerm t)
                                            {
                                              t = Match_1_0(_id, t);
                                              return(t);
                                            }
                                            t = Seq_2_0(o_5, _id, t);
                                            ;
                                            LocalPopChoice(i_22);
                                          }
                                        else
                                          {
                                            t = d_22;
                                            {
                                              ATerm j_22 = t;
                                              int k_22 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_5 (ATerm t)
                                                  {
                                                    t = Match_1_0(_id, t);
                                                    return(t);
                                                  }
                                                  t = Scope_2_0(_id, p_5, t);
                                                  ;
                                                  LocalPopChoice(k_22);
                                                }
                                              else
                                                {
                                                  t = j_22;
                                                  {
                                                    ATerm p_22 = t;
                                                    int q_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm q_5 (ATerm t)
                                                        {
                                                          ATerm r_5 (ATerm t)
                                                          {
                                                            t = Match_1_0(_id, t);
                                                            return(t);
                                                          }
                                                          t = Seq_2_0(r_5, _id, t);
                                                          return(t);
                                                        }
                                                        t = Scope_2_0(_id, q_5, t);
                                                        ;
                                                        LocalPopChoice(q_22);
                                                      }
                                                    else
                                                      {
                                                        t = p_22;
                                                        {
                                                          ATerm r_22 = t;
                                                          int u_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_5 (ATerm t)
                                                              {
                                                                ATerm t_5 (ATerm t)
                                                                {
                                                                  ATerm u_5 (ATerm t)
                                                                  {
                                                                    t = Match_1_0(_id, t);
                                                                    return(t);
                                                                  }
                                                                  t = Seq_2_0(u_5, _id, t);
                                                                  return(t);
                                                                }
                                                                t = Scope_2_0(_id, t_5, t);
                                                                return(t);
                                                              }
                                                              t = Seq_2_0(s_5, _id, t);
                                                              ;
                                                              LocalPopChoice(u_22);
                                                            }
                                                          else
                                                            {
                                                              t = r_22;
                                                              {
                                                                ATerm y_22 = t;
                                                                int z_22 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2_0(c_31, c_31, t);
                                                                    ;
                                                                    LocalPopChoice(z_22);
                                                                  }
                                                                else
                                                                  {
                                                                    t = y_22;
                                                                    {
                                                                      ATerm b_23 = t;
                                                                      int c_23 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = LChoice_2_0(c_31, c_31, t);
                                                                          ;
                                                                          LocalPopChoice(c_23);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = b_23;
                                                                          t = GuardedLChoice_3_0(c_31, c_31, c_31, t);
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
  t = c_31(t);
  a_31 = t;
  t = term_size_0_0(t);
  b_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_31, term_d_23);
  t = leq_0_0(t);
  t = a_31;
  return(t);
}
ATerm SDefT_4_0 (ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
  m_31 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      e_31 = ATgetArgument(t, 0);
      f_31 = ATgetArgument(t, 1);
      g_31 = ATgetArgument(t, 2);
      h_31 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_31);
  d_31 = t;
  t = e_31;
  t = p_102(t);
  i_31 = t;
  t = f_31;
  t = q_102(t);
  j_31 = t;
  t = g_31;
  t = r_102(t);
  k_31 = t;
  t = h_31;
  t = s_102(t);
  l_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, i_31, j_31, k_31, l_31), d_31);
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm p_31 = NULL;
  ATerm v_5 (ATerm t)
  {
    ATerm f_23 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_23;
      }
    p_31 = t;
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    ATerm q_31 = NULL;
    q_31 = t;
    {
      ATerm g_23 = t;
      if((PushChoice() == 0))
        {
          ATerm x_5 (ATerm t)
          {
            if(match_cons(t, sym_CallT_3))
              {
                ATerm h_23 = ATgetArgument(t, 0);
                if(match_cons(h_23, sym_SVar_1))
                  {
                    p_31 = ATgetArgument(h_23, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm m_23 = ATgetArgument(t, 1);
                }
                {
                  ATerm n_23 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(x_5, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_23;
        }
      t = q_31;
      t = body_to_inline_0_0(t);
    }
    return(t);
  }
  t = SDefT_4_0(v_5, _id, _id, w_5, t);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,z_31 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
  if(match_cons(t, sym__2))
    {
      z_31 = ATgetArgument(t, 0);
      b_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_31;
  if(match_cons(t, sym_Build_1))
    {
      ATerm a_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_32;
  if(match_cons(t, sym_Where_1))
    {
      c_32 = ATgetArgument(t, 0);
      t = c_32;
      if(match_cons(t, sym_Prim_2))
        {
          w_31 = ATgetArgument(t, 0);
          x_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          c_32 = ATgetArgument(t, 0);
          d_32 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, c_32, d_32);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              c_32 = ATgetArgument(t, 0);
              d_32 = ATgetArgument(t, 1);
              e_32 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm w_115 (ATerm), ATerm x_115 (ATerm), ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm t)
{
  ATerm m_32 (ATerm t)
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_115(t);
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        t = x_115(t);
        t = _2_0(z_115, m_32, t);
        t = y_115(t);
      }
    return(t);
  }
  t = m_32(t);
  return(t);
}
ATerm zip_1_0 (ATerm b_116 (ATerm), ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm f_24 = ATgetArgument(t, 0);
        if(((ATgetType(f_24) != AT_LIST) || !(ATisEmpty(f_24))))
          _fail(t);
        {
          ATerm k_24 = ATgetArgument(t, 1);
          if(((ATgetType(k_24) != AT_LIST) || !(ATisEmpty(k_24))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm l_24 = ATgetArgument(t, 0);
        if(((ATgetType(l_24) == AT_LIST) && !(ATisEmpty(l_24))))
          {
            n_32 = ATgetFirst((ATermList) l_24);
            p_32 = (ATerm) ATgetNext((ATermList) l_24);
          }
        else
          _fail(t);
        {
          ATerm m_24 = ATgetArgument(t, 1);
          if(((ATgetType(m_24) == AT_LIST) && !(ATisEmpty(m_24))))
            {
              o_32 = ATgetFirst((ATermList) m_24);
              q_32 = (ATerm) ATgetNext((ATermList) m_24);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_32, o_32), (ATerm) ATmakeAppl(sym__2, p_32, q_32));
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    ATerm r_32 = NULL,s_32 = NULL;
    if(match_cons(t, sym__2))
      {
        r_32 = ATgetArgument(t, 0);
        s_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(s_32), r_32);
    return(t);
  }
  t = genzip_4_0(y_5, z_5, a_6, b_116, t);
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_24 = ATgetArgument(t, 0);
      if(match_cons(n_24, sym_Build_1))
        {
          ATerm p_24 = ATgetArgument(n_24, 0);
          if(match_cons(p_24, sym_Op_2))
            {
              u_32 = ATgetArgument(p_24, 0);
              t_32 = ATgetArgument(p_24, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm o_24 = ATgetArgument(t, 1);
        if(match_cons(o_24, sym_Match_1))
          {
            ATerm q_24 = ATgetArgument(o_24, 0);
            if(match_cons(q_24, sym_Op_2))
              {
                if((u_32 != ATgetArgument(q_24, 0)))
                  {
                    _fail(ATgetArgument(q_24, 0));
                  }
                v_32 = ATgetArgument(q_24, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, t_32, v_32);
  {
    ATerm b_6 (ATerm t)
    {
      ATerm x_32 = NULL,y_32 = NULL;
      if(match_cons(t, sym__2))
        {
          x_32 = ATgetArgument(t, 0);
          y_32 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_32), (ATerm) ATmakeAppl(sym_Match_1, y_32));
      return(t);
    }
    t = zip_1_0(b_6, t);
    w_32 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_32), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, u_32, t_32)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_24 = ATgetArgument(t, 0);
      if(match_cons(z_24, sym_Build_1))
        {
          ATerm b_25 = ATgetArgument(z_24, 0);
          if(match_cons(b_25, sym_Op_2))
            {
              z_32 = ATgetArgument(b_25, 0);
              {
                ATerm a_26 = ATgetArgument(b_25, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm a_25 = ATgetArgument(t, 1);
        if(match_cons(a_25, sym_Match_1))
          {
            ATerm b_26 = ATgetArgument(a_25, 0);
            if(match_cons(b_26, sym_Op_2))
              {
                a_33 = ATgetArgument(b_26, 0);
                {
                  ATerm f_26 = ATgetArgument(b_26, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, z_32, a_33);
  {
    ATerm g_26 = t;
    if((PushChoice() == 0))
      {
        ATerm b_33 = NULL;
        if(match_cons(t, sym__2))
          {
            b_33 = ATgetArgument(t, 0);
            if((b_33 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_26;
      }
    t = term_h_26;
  }
  return(t);
}
ATerm BMF_0_0 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0_0(t);
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm p_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0_0(t);
            ;
            LocalPopChoice(q_26);
          }
        else
          {
            t = p_26;
            {
              ATerm u_26 = t;
              int v_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_33 = NULL,m_33 = NULL,n_33 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      k_33 = ATgetArgument(t, 0);
                      m_33 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = k_33;
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm w_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_33;
                  if(match_cons(t, sym_Build_1))
                    {
                      n_33 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  ;
                  LocalPopChoice(v_26);
                }
              else
                {
                  t = u_26;
                  {
                    ATerm x_26 = t;
                    int y_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0_0(t);
                        ;
                        LocalPopChoice(y_26);
                      }
                    else
                      {
                        t = x_26;
                        {
                          ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              q_33 = ATgetArgument(t, 0);
                              s_33 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = q_33;
                          if(match_cons(t, sym_Match_1))
                            {
                              r_33 = ATgetArgument(t, 0);
                              t = s_33;
                              if(match_cons(t, sym_Match_1))
                                {
                                  t_33 = ATgetArgument(t, 0);
                                  t = t_33;
                                  if((r_33 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, r_33);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      t_33 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = t_33;
                                  if((r_33 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, r_33);
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_Build_1))
                                {
                                  r_33 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = s_33;
                              if(match_cons(t, sym_Match_1))
                                {
                                  t_33 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = t_33;
                              if((r_33 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_Build_1, r_33);
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
ATerm BuildMatch_0_0 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,c_34 = NULL,d_34 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_34 = ATgetArgument(t, 0);
      d_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_34;
  if(match_cons(t, sym_Seq_2))
    {
      z_33 = ATgetArgument(t, 0);
      a_34 = ATgetArgument(t, 1);
      {
        ATerm j_27 = t;
        int k_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_34 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, c_34, z_33);
            t = BMF_0_0(t);
            h_34 = t;
            t = (ATerm) ATmakeAppl(sym_Seq_2, h_34, a_34);
            ;
            LocalPopChoice(k_27);
          }
        else
          {
            t = j_27;
            t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
            t = BMF_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
      t = BMF_0_0(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm o_112 (ATerm), ATerm t)
{
  ATerm m_34 (ATerm t)
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_112(t);
        ;
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        t = SRTS_one(m_34, t);
      }
    return(t);
  }
  t = m_34(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm g_28 = ATgetArgument(t, 0);
      if(((ATgetType(g_28) == AT_LIST) && !(ATisEmpty(g_28))))
        {
          ATerm o_28 = ATgetFirst((ATermList) g_28);
          if(match_cons(o_28, sym_SDefT_4))
            {
              o_34 = ATgetArgument(o_28, 0);
              {
                ATerm w_28 = ATgetArgument(o_28, 1);
                if(((ATgetType(w_28) != AT_LIST) || !(ATisEmpty(w_28))))
                  _fail(t);
              }
              {
                ATerm x_28 = ATgetArgument(o_28, 2);
                if(((ATgetType(x_28) != AT_LIST) || !(ATisEmpty(x_28))))
                  _fail(t);
              }
              n_34 = ATgetArgument(o_28, 3);
            }
          else
            _fail(t);
          {
            ATerm p_28 = (ATerm) ATgetNext((ATermList) g_28);
            if(((ATgetType(p_28) != AT_LIST) || !(ATisEmpty(p_28))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm h_28 = ATgetArgument(t, 1);
        if(match_cons(h_28, sym_CallT_3))
          {
            ATerm c_29 = ATgetArgument(h_28, 0);
            if(match_cons(c_29, sym_SVar_1))
              {
                if((o_34 != ATgetArgument(c_29, 0)))
                  {
                    _fail(ATgetArgument(c_29, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm d_29 = ATgetArgument(h_28, 1);
              if(((ATgetType(d_29) != AT_LIST) || !(ATisEmpty(d_29))))
                _fail(t);
            }
            {
              ATerm k_29 = ATgetArgument(h_28, 2);
              if(((ATgetType(k_29) != AT_LIST) || !(ATisEmpty(k_29))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_34;
  {
    ATerm l_29 = t;
    if((PushChoice() == 0))
      {
        ATerm c_6 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm s_29 = ATgetArgument(t, 0);
              if(match_cons(s_29, sym_SVar_1))
                {
                  if((o_34 != ATgetArgument(s_29, 0)))
                    {
                      _fail(ATgetArgument(s_29, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm t_29 = ATgetArgument(t, 1);
                if(((ATgetType(t_29) != AT_LIST) || !(ATisEmpty(t_29))))
                  _fail(t);
              }
              {
                ATerm y_29 = ATgetArgument(t, 2);
                if(((ATgetType(y_29) != AT_LIST) || !(ATisEmpty(y_29))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(c_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_29;
      }
    t = n_34;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,d_35 = NULL,e_35 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      d_35 = ATgetArgument(t, 0);
      t = d_35;
      if(match_cons(t, sym_Seq_2))
        {
          b_35 = ATgetArgument(t, 0);
          x_34 = ATgetArgument(t, 1);
          t = b_35;
          if(match_cons(t, sym_Where_1))
            {
              w_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_34;
          if(match_cons(t, sym_Seq_2))
            {
              y_34 = ATgetArgument(t, 0);
              a_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_34;
          if(match_cons(t, sym_Build_1))
            {
              z_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, w_34, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_34), a_35)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              b_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          d_35 = ATgetArgument(t, 0);
          t = d_35;
          if(match_cons(t, sym_Test_1))
            {
              b_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              d_35 = ATgetArgument(t, 0);
              t = d_35;
              if(match_cons(t, sym_Not_1))
                {
                  b_35 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, b_35);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  d_35 = ATgetArgument(t, 0);
                  e_35 = ATgetArgument(t, 1);
                  t = e_35;
                  if((d_35 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      d_35 = ATgetArgument(t, 0);
                      e_35 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = e_35;
                  if((d_35 != t))
                    {
                      _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0_0 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      s_35 = ATgetArgument(t, 0);
      v_35 = ATgetArgument(t, 1);
      t = s_35;
      if(match_cons(t, sym_LChoice_2))
        {
          t_35 = ATgetArgument(t, 0);
          u_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, t_35, (ATerm) ATmakeAppl(sym_LChoice_2, u_35, v_35));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          s_35 = ATgetArgument(t, 0);
          v_35 = ATgetArgument(t, 1);
          t = s_35;
          if(match_cons(t, sym_Seq_2))
            {
              t_35 = ATgetArgument(t, 0);
              u_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, t_35, (ATerm) ATmakeAppl(sym_Seq_2, u_35, v_35));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              s_35 = ATgetArgument(t, 0);
              v_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_35;
          if(match_cons(t, sym_Choice_2))
            {
              t_35 = ATgetArgument(t, 0);
              u_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, t_35, (ATerm) ATmakeAppl(sym_Choice_2, u_35, v_35));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_29 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(l_0, _id, t);
      {
        ATerm d_6 (ATerm t)
        {
          ATerm e_6 (ATerm t)
          {
            t = map1_1_0(l_0, t);
            return(t);
          }
          t = try_1_0(e_6, t);
          return(t);
        }
        t = Cons_2_0(_id, d_6, t);
      }
      ;
      LocalPopChoice(e_30);
    }
  else
    {
      t = z_29;
      {
        ATerm f_6 (ATerm t)
        {
          t = map1_1_0(l_0, t);
          return(t);
        }
        t = Cons_2_0(_id, f_6, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,o_36 = NULL,p_36 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      o_36 = ATgetArgument(t, 0);
      p_36 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, o_36, p_36);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          o_36 = ATgetArgument(t, 0);
          t = o_36;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_36 = ATgetFirst((ATermList) t);
              k_36 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, j_36, (ATerm) ATmakeAppl(sym_LChoices_1, k_36));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_h_26;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              o_36 = ATgetArgument(t, 0);
              t = o_36;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_36 = ATgetFirst((ATermList) t);
                  k_36 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, j_36, (ATerm) ATmakeAppl(sym_Choices_1, k_36));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_h_26;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  o_36 = ATgetArgument(t, 0);
                  t = o_36;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      j_36 = ATgetFirst((ATermList) t);
                      k_36 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_36, (ATerm) ATmakeAppl(sym_Seqs_1, k_36));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_f_30;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_36 = ATgetArgument(t, 0);
                      p_36 = ATgetArgument(t, 1);
                      m_36 = ATgetArgument(t, 2);
                      l_36 = ATgetArgument(t, 3);
                      {
                        ATerm c_37 = NULL,d_37 = NULL;
                        t = p_36;
                        {
                          ATerm g_6 (ATerm t)
                          {
                            ATerm e_37 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                e_37 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, e_37, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_30), term_y_30));
                            return(t);
                          }
                          t = map1_1_0(g_6, t);
                          c_37 = t;
                          t = m_36;
                          {
                            ATerm h_6 (ATerm t)
                            {
                              ATerm i_6 (ATerm t)
                              {
                                ATerm f_37 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    f_37 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, f_37, term_y_30);
                                return(t);
                              }
                              t = try_1_0(i_6, t);
                              return(t);
                            }
                            t = map1_1_0(h_6, t);
                            d_37 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, o_36, c_37, d_37, l_36);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          o_36 = ATgetArgument(t, 0);
                          p_36 = ATgetArgument(t, 1);
                          m_36 = ATgetArgument(t, 2);
                          l_36 = ATgetArgument(t, 3);
                          {
                            ATerm z_30 = t;
                            int n_31 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm k_37 = NULL,l_37 = NULL;
                                t = m_36;
                                {
                                  ATerm j_6 (ATerm t)
                                  {
                                    ATerm m_37 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        m_37 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, m_37, term_y_30);
                                    return(t);
                                  }
                                  t = map1_1_0(j_6, t);
                                  k_37 = t;
                                  t = p_36;
                                  {
                                    ATerm k_6 (ATerm t)
                                    {
                                      ATerm l_6 (ATerm t)
                                      {
                                        ATerm n_37 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            n_37 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_37, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_30), term_y_30));
                                        return(t);
                                      }
                                      t = try_1_0(l_6, t);
                                      return(t);
                                    }
                                    t = map_1_0(k_6, t);
                                    l_37 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, o_36, l_37, k_37, l_36);
                                  }
                                }
                                ;
                                LocalPopChoice(n_31);
                              }
                            else
                              {
                                t = z_30;
                                {
                                  ATerm s_37 = NULL,w_37 = NULL;
                                  t = p_36;
                                  {
                                    ATerm m_6 (ATerm t)
                                    {
                                      ATerm x_37 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          x_37 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, x_37, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_30), term_y_30));
                                      return(t);
                                    }
                                    t = map1_1_0(m_6, t);
                                    s_37 = t;
                                    t = m_36;
                                    {
                                      ATerm n_6 (ATerm t)
                                      {
                                        ATerm o_6 (ATerm t)
                                        {
                                          ATerm y_37 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              y_37 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, y_37, term_y_30);
                                          return(t);
                                        }
                                        t = try_1_0(o_6, t);
                                        return(t);
                                      }
                                      t = map_1_0(n_6, t);
                                      w_37 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, o_36, s_37, w_37, l_36);
                                    }
                                  }
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              o_36 = ATgetArgument(t, 0);
                              p_36 = ATgetArgument(t, 1);
                              m_36 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, p_36, (ATerm) ATmakeAppl(sym_Op_2, term_o_31, (ATerm) ATinsert(ATinsert(ATempty, m_36), o_36)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  o_36 = ATgetArgument(t, 0);
                                  p_36 = ATgetArgument(t, 1);
                                  m_36 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, m_36)), o_36), (ATerm) ATmakeAppl(sym_Build_1, p_36)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      o_36 = ATgetArgument(t, 0);
                                      p_36 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_36, (ATerm) ATmakeAppl(sym_Match_1, p_36));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          o_36 = ATgetArgument(t, 0);
                                          p_36 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_36), p_36);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              o_36 = ATgetArgument(t, 0);
                                              p_36 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_36), o_36);
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
ATerm F10_0_0 (ATerm t)
{
  ATerm y_39 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      ATerm r_31 = ATgetArgument(t, 0);
      y_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_39;
  {
    ATerm p_6 (ATerm t)
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      return(t);
    }
    t = fetch_1_0(p_6, t);
    t = term_h_26;
  }
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_41 = NULL,i_41 = NULL;
      if(match_cons(t, sym_Test_1))
        {
          h_41 = ATgetArgument(t, 0);
          t = h_41;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              h_41 = ATgetArgument(t, 0);
              t = h_41;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_f_30;
            }
          else
            {
              ATerm u_31 = t;
              int v_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      h_41 = ATgetArgument(t, 0);
                      {
                        ATerm y_31 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(v_31);
                  t = h_41;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                }
              else
                {
                  t = u_31;
                  {
                    ATerm a_32 = t;
                    int f_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm g_32 = ATgetArgument(t, 0);
                            i_41 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(f_32);
                        t = i_41;
                        if(!(match_cons(t, sym_Fail_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = a_32;
                        {
                          ATerm h_32 = t;
                          int i_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm j_32 = ATgetArgument(t, 0);
                                  i_41 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(i_32);
                              t = i_41;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = h_32;
                              if(match_cons(t, sym_Some_1))
                                {
                                  h_41 = ATgetArgument(t, 0);
                                  t = h_41;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_One_1))
                                    {
                                      h_41 = ATgetArgument(t, 0);
                                      t = h_41;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm k_32 = ATgetArgument(t, 0);
                                          i_41 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = i_41;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                }
                            }
                        }
                      }
                  }
                }
            }
        }
      ;
      LocalPopChoice(t_31);
    }
  else
    {
      t = s_31;
      {
        ATerm l_32 = t;
        int c_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F10_0_0(t);
            ;
            LocalPopChoice(c_33);
          }
        else
          {
            t = l_32;
            {
              ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
              if(match_cons(t, sym_Choice_2))
                {
                  l_41 = ATgetArgument(t, 0);
                  m_41 = ATgetArgument(t, 1);
                  t = m_41;
                  if(match_cons(t, sym_Fail_0))
                    {
                      t = l_41;
                      if(match_cons(t, sym_Fail_0))
                        {
                          ATerm d_33 = t;
                          int e_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = m_41;
                              ;
                              LocalPopChoice(e_33);
                            }
                          else
                            {
                              t = d_33;
                              t = l_41;
                            }
                        }
                      else
                        {
                          t = l_41;
                        }
                    }
                  else
                    {
                      t = l_41;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = m_41;
                    }
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      l_41 = ATgetArgument(t, 0);
                      m_41 = ATgetArgument(t, 1);
                      t = m_41;
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = l_41;
                          if(match_cons(t, sym_Fail_0))
                            {
                              ATerm f_33 = t;
                              int g_33 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = m_41;
                                  ;
                                  LocalPopChoice(g_33);
                                }
                              else
                                {
                                  t = f_33;
                                  t = l_41;
                                }
                            }
                          else
                            {
                              t = l_41;
                            }
                        }
                      else
                        {
                          t = l_41;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = m_41;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Where_1))
                        {
                          l_41 = ATgetArgument(t, 0);
                          t = l_41;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_GuardedLChoice_3))
                            {
                              l_41 = ATgetArgument(t, 0);
                              m_41 = ATgetArgument(t, 1);
                              n_41 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = n_41;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_41, m_41);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm ElimId_0_0 (ATerm t)
{
  ATerm k_42 = NULL,m_42 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      m_42 = ATgetArgument(t, 0);
      t = m_42;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          m_42 = ATgetArgument(t, 0);
          t = m_42;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_h_26;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              m_42 = ATgetArgument(t, 0);
              k_42 = ATgetArgument(t, 1);
              t = k_42;
              if(match_cons(t, sym_Id_0))
                {
                  t = m_42;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm h_33 = t;
                      int i_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = k_42;
                          ;
                          LocalPopChoice(i_33);
                        }
                      else
                        {
                          t = h_33;
                          t = m_42;
                        }
                    }
                  else
                    {
                      t = m_42;
                    }
                }
              else
                {
                  t = m_42;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = k_42;
                }
            }
          else
            {
              ATerm j_33 = t;
              int l_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      m_42 = ATgetArgument(t, 0);
                      {
                        ATerm o_33 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_33);
                  t = m_42;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = j_33;
                  {
                    ATerm p_33 = t;
                    int u_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm v_33 = ATgetArgument(t, 0);
                            k_42 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(u_33);
                        t = k_42;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = p_33;
                        {
                          ATerm w_33 = t;
                          int x_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm y_33 = ATgetArgument(t, 0);
                                  k_42 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(x_33);
                              t = k_42;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = w_33;
                              if(match_cons(t, sym_All_1))
                                {
                                  m_42 = ATgetArgument(t, 0);
                                  t = m_42;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      m_42 = ATgetArgument(t, 0);
                                      t = m_42;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          m_42 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = m_42;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_f_30;
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
ATerm Simplify_0_0 (ATerm t)
{
  ATerm b_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(e_34);
    }
  else
    {
      t = b_34;
      {
        ATerm f_34 = t;
        int g_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(g_34);
          }
        else
          {
            t = f_34;
            {
              ATerm i_34 = t;
              int j_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(j_34);
                }
              else
                {
                  t = i_34;
                  {
                    ATerm k_34 = t;
                    int l_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(l_34);
                      }
                    else
                      {
                        t = k_34;
                        {
                          ATerm p_34 = t;
                          int q_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(q_34);
                            }
                          else
                            {
                              t = p_34;
                              {
                                ATerm r_34 = t;
                                int s_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm v_42 = NULL,x_42 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        v_42 = ATgetArgument(t, 0);
                                        x_42 = ATgetArgument(t, 1);
                                        t = v_42;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = x_42;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            v_42 = ATgetArgument(t, 0);
                                            x_42 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = v_42;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = x_42;
                                      }
                                    ;
                                    LocalPopChoice(s_34);
                                  }
                                else
                                  {
                                    t = r_34;
                                    {
                                      ATerm t_34 = t;
                                      int u_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(u_34);
                                        }
                                      else
                                        {
                                          t = t_34;
                                          {
                                            ATerm v_34 = t;
                                            int c_35 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(c_35);
                                              }
                                            else
                                              {
                                                t = v_34;
                                                {
                                                  ATerm d_3 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      ATerm f_35 = ATgetArgument(t, 0);
                                                      if(!(match_cons(f_35, sym_Wld_0)))
                                                        _fail(t);
                                                      d_3 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = d_3;
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
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm g_128 (ATerm), ATerm t)
{
  ATerm a_43 (ATerm t)
  {
    ATerm q_6 (ATerm t)
    {
      t = g_128(t);
      t = a_43(t);
      return(t);
    }
    t = try_1_0(q_6, t);
    return(t);
  }
  t = a_43(t);
  return(t);
}
ATerm downup_1_0 (ATerm m_111 (ATerm), ATerm t)
{
  t = m_111(t);
  {
    ATerm r_6 (ATerm t)
    {
      t = downup_1_0(m_111, t);
      return(t);
    }
    t = SRTS_all(r_6, t);
    t = m_111(t);
  }
  return(t);
}
ATerm simplify0_0_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    t = repeat_1_0(Simplify_0_0, t);
    return(t);
  }
  t = downup_1_0(s_6, t);
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    t = simplify0_0_0(t);
    {
      ATerm v_6 (ATerm t)
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        return(t);
      }
      t = try_1_0(v_6, t);
    }
    return(t);
  }
  t = map_1_0(u_6, t);
  t = map_1_0(inline_sdef_0_0, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm p_95 (ATerm), ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
  e_43 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      c_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_43);
  b_43 = t;
  t = c_43;
  t = p_95(t);
  d_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, d_43), b_43);
  return(t);
}
ATerm Specification_1_0 (ATerm u_95 (ATerm), ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
  k_43 = t;
  if(match_cons(t, sym_Specification_1))
    {
      i_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_43);
  h_43 = t;
  t = i_43;
  t = u_95(t);
  j_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, j_43), h_43);
  return(t);
}
ATerm inline_strategies_0_0 (ATerm t)
{
  ATerm w_6 (ATerm t)
  {
    ATerm x_6 (ATerm t)
    {
      ATerm y_6 (ATerm t)
      {
        t = Strategies_1_0(inline_sdefs_0_0, t);
        return(t);
      }
      ATerm z_6 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Cons_2_0(y_6, z_6, t);
      return(t);
    }
    t = Cons_2_0(_id, x_6, t);
    return(t);
  }
  t = Specification_1_0(w_6, t);
  return(t);
}
ATerm _2_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
  s_43 = t;
  if(match_cons(t, sym__2))
    {
      o_43 = ATgetArgument(t, 0);
      p_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_43);
  n_43 = t;
  t = o_43;
  t = a_94(t);
  q_43 = t;
  t = p_43;
  t = b_94(t);
  r_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, q_43, r_43), n_43);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL;
  v_43 = t;
  t = term_k_17;
  t = whoami_0_0(t);
  w_43 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), w_43), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = v_43;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_35 = t;
  int h_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_35);
    }
  else
    {
      t = g_35;
      {
        ATerm z_43 = NULL,a_44 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_43 = ATgetFirst((ATermList) t);
            a_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_43;
        {
          ATerm a_7 (ATerm t)
          {
            t = a_44;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_7, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL;
  e_44 = t;
  t = SSL_explode_term(e_44);
  if(match_cons(t, sym__2))
    {
      ATerm i_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_44;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_118 (ATerm), ATerm t)
{
  ATerm g_44 (ATerm t)
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_44, t);
        ;
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_118(t);
      }
    return(t);
  }
  t = g_44(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL;
  if(match_cons(t, sym__2))
    {
      i_44 = ATgetArgument(t, 0);
      h_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_44;
  {
    ATerm b_7 (ATerm t)
    {
      t = h_44;
      return(t);
    }
    t = at_end_1_0(b_7, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(m_35);
    }
  else
    {
      t = l_35;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm j_44 = NULL;
  ATerm d_7 (ATerm t)
  {
    ATerm k_44 = NULL;
    k_44 = t;
    t = SSL_explode_string(k_44);
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    ATerm l_44 = NULL;
    l_44 = t;
    t = SSL_explode_string(l_44);
    return(t);
  }
  t = _2_0(d_7, e_7, t);
  t = conc_0_0(t);
  j_44 = t;
  t = SSL_implode_string(j_44);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_44 = NULL;
      r_44 = t;
      t = SSL_is_string(r_44);
      ;
      LocalPopChoice(o_35);
    }
  else
    {
      t = n_35;
      {
        ATerm p_35 = t;
        int q_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(g_7, t);
            ;
            LocalPopChoice(q_35);
          }
        else
          {
            t = p_35;
            {
              ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL;
              v_44 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_44 = ATgetArgument(t, 0);
                  t = w_44;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_44 = ATgetArgument(t, 0);
                      t = w_44;
                      {
                        ATerm r_35 = t;
                        int w_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(w_35);
                          }
                        else
                          {
                            t = r_35;
                            {
                              ATerm h_7 (ATerm t)
                              {
                                t = term_x_35;
                                return(t);
                              }
                              t = debug_1_0(h_7, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm b_45 = NULL,c_45 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_44 = ATgetArgument(t, 0);
                          x_44 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_44;
                      t = eval_config_0_0(t);
                      b_45 = t;
                      t = x_44;
                      t = eval_config_0_0(t);
                      c_45 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_45, c_45);
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
  ATerm f_45 = NULL;
  f_45 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_45);
  {
    ATerm i_7 (ATerm t)
    {
      ATerm g_45 = NULL;
      t = eval_config_0_0(t);
      g_45 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_45, g_45);
      t = g_45;
      return(t);
    }
    t = try_1_0(i_7, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_131 (ATerm), ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    ATerm h_45 = NULL,i_45 = NULL;
    h_45 = t;
    t = term_y_35;
    t = get_config_0_0(t);
    i_45 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_45, term_z_35);
    t = geq_0_0(t);
    t = h_45;
    t = t_131(t);
    return(t);
  }
  t = try_1_0(k_7, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm a_36 = ATgetArgument(t, 0);
        if(match_cons(a_36, sym_Stream_1))
          {
            j_45 = ATgetArgument(a_36, 0);
          }
        else
          _fail(t);
        k_45 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(j_45, k_45);
    l_45 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), l_45);
    m_45 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, m_45);
    return(t);
  }
  t = WriteToFile_1_0(m_7, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_138 (ATerm), ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  if(match_cons(t, sym__2))
    {
      n_45 = ATgetArgument(t, 0);
      o_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_45, term_b_36);
  t = open_stream_0_0(t);
  p_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_45, o_45);
  t = x_138(t);
  t = fclose_0_0(t);
  t = o_45;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm c_36 = ATgetArgument(t, 0);
        if(match_cons(c_36, sym_Stream_1))
          {
            q_45 = ATgetArgument(c_36, 0);
          }
        else
          _fail(t);
        r_45 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(q_45, r_45);
    s_45 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, s_45);
    return(t);
  }
  t = WriteToFile_1_0(o_7, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL;
  t_45 = t;
  {
    ATerm p_7 (ATerm t)
    {
      ATerm d_36 = t;
      int e_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_7 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                u_45 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(q_7, t);
          ;
          LocalPopChoice(e_36);
        }
      else
        {
          t = d_36;
          t = term_f_36;
          u_45 = t;
        }
      return(t);
    }
    t = _2_0(p_7, _id, t);
    t = t_45;
    {
      ATerm r_7 (ATerm t)
      {
        ATerm s_7 (ATerm t)
        {
          t = not_null(u_45);
          return(t);
        }
        t = split_2_0(s_7, _id, t);
        return(t);
      }
      t = _2_0(_id, r_7, t);
      {
        ATerm g_36 = t;
        int h_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_7 (ATerm t)
            {
              ATerm u_7 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(u_7, t);
              return(t);
            }
            t = _2_0(t_7, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(h_36);
          }
        else
          {
            t = g_36;
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
ATerm apply_strategy_1_0 (ATerm m_133 (ATerm), ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL;
  v_45 = t;
  t = dtime_0_0(t);
  t = v_45;
  t = m_133(t);
  w_45 = t;
  t = dtime_0_0(t);
  x_45 = t;
  t = w_45;
  if(match_cons(t, sym__2))
    {
      y_45 = ATgetArgument(t, 0);
      z_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_45), (ATerm) ATmakeAppl(sym_Runtime_1, x_45)), z_45);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_46 (ATerm h_46, ATerm t)
  {
    t = SSL_fclose(h_46);
    return(t);
  }
  ATerm k_46 = NULL,l_46 = NULL;
  l_46 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_46 = ATgetArgument(t, 0);
      {
        ATerm i_36 = t;
        int n_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_46);
            ;
            LocalPopChoice(n_36);
          }
        else
          {
            t = i_36;
            t = n_46(l_46, t);
          }
      }
    }
  else
    {
      t = n_46(l_46, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm j_138 (ATerm), ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL;
  o_46 = t;
  t = j_138(t);
  p_46 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_46), p_46));
  t = o_46;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_46 = NULL;
  t = SSL_stdin_stream();
  q_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_46);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_46 = NULL;
  t = SSL_stdout_stream();
  r_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_46);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_46 = NULL;
  t = SSL_stderr_stream();
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_46);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm z_46 = NULL;
  z_46 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_46;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_46;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_46;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_36 = ATgetArgument(t, 0);
      ATerm r_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_3 = NULL,z_3 = NULL;
        v_3 = t;
        t = SSL_explode_term(v_3);
        if(match_cons(t, sym__2))
          {
            ATerm u_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_36) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_36 = ATgetArgument(t, 1);
              if(((ATgetType(v_36) == AT_LIST) && !(ATisEmpty(v_36))))
                {
                  z_3 = ATgetFirst((ATermList) v_36);
                  {
                    ATerm w_36 = (ATerm) ATgetNext((ATermList) v_36);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = z_3;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        {
          ATerm x_36 = t;
          int y_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
              ATerm v_7 (ATerm t)
              {
                ATerm f_47 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    f_47 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = f_47;
                return(t);
              }
              t = _2_0(v_7, _id, t);
              if(match_cons(t, sym__2))
                {
                  c_47 = ATgetArgument(t, 0);
                  d_47 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(c_47, d_47);
              e_47 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, e_47);
              ;
              LocalPopChoice(y_36);
            }
          else
            {
              t = x_36;
              {
                ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
                ATerm w_7 (ATerm t)
                {
                  ATerm j_47 = NULL;
                  j_47 = t;
                  t = SSL_is_string(j_47);
                  return(t);
                }
                t = _2_0(w_7, _id, t);
                if(match_cons(t, sym__2))
                  {
                    g_47 = ATgetArgument(t, 0);
                    h_47 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(g_47, h_47);
                i_47 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, i_47);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL;
  ATerm z_36 = t;
  int a_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_47 = NULL;
      p_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_47, term_b_37);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_37);
    }
  else
    {
      t = z_36;
      {
        ATerm x_7 (ATerm t)
        {
          t = term_g_37;
          return(t);
        }
        t = debug_1_0(x_7, t);
        _fail(t);
      }
    }
  k_47 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(m_47);
  l_47 = t;
  t = k_47;
  t = fclose_0_0(t);
  t = l_47;
  return(t);
}
ATerm split_2_0 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
  r_47 = t;
  t = w_114(t);
  s_47 = t;
  t = r_47;
  t = x_114(t);
  t_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_47, t_47);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL;
  u_47 = t;
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              v_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(y_7, t);
        ;
        LocalPopChoice(i_37);
      }
    else
      {
        t = h_37;
        t = term_j_37;
        v_47 = t;
      }
    t = u_47;
    {
      ATerm z_7 (ATerm t)
      {
        t = not_null(v_47);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, z_7, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    ATerm x_47 = NULL;
    x_47 = t;
    if(match_string(t, "-k"))
      {
        t = x_47;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = x_47;
      }
    return(t);
  }
  ATerm b_8 (ATerm t)
  {
    ATerm y_47 = NULL,z_47 = NULL;
    y_47 = t;
    t = SSL_string_to_int(y_47);
    z_47 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), z_47);
    t = y_47;
    return(t);
  }
  ATerm c_8 (ATerm t)
  {
    t = term_o_37;
    return(t);
  }
  t = ArgOption_3_0(a_8, b_8, c_8, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_8 (ATerm t)
      {
        ATerm b_48 = NULL;
        b_48 = t;
        if(match_string(t, "-S"))
          {
            t = b_48;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = b_48;
          }
        return(t);
      }
      ATerm e_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_r_37;
        return(t);
      }
      ATerm f_8 (ATerm t)
      {
        t = term_t_37;
        return(t);
      }
      t = Option_3_0(d_8, e_8, f_8, t);
      ;
      LocalPopChoice(q_37);
    }
  else
    {
      t = p_37;
      {
        ATerm u_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_8 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm h_8 (ATerm t)
            {
              ATerm c_48 = NULL,d_48 = NULL;
              c_48 = t;
              t = SSL_string_to_int(c_48);
              d_48 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_48);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, c_48);
              return(t);
            }
            ATerm i_8 (ATerm t)
            {
              t = term_z_37;
              return(t);
            }
            t = ArgOption_3_0(g_8, h_8, i_8, t);
            ;
            LocalPopChoice(v_37);
          }
        else
          {
            t = u_37;
            {
              ATerm j_8 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm k_8 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_a_38;
                return(t);
              }
              ATerm l_8 (ATerm t)
              {
                t = term_b_38;
                return(t);
              }
              t = Option_3_0(j_8, k_8, l_8, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(d_38);
    }
  else
    {
      t = c_38;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    ATerm f_48 = NULL;
    f_48 = t;
    if(match_string(t, "-o"))
      {
        t = f_48;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = f_48;
      }
    return(t);
  }
  ATerm n_8 (ATerm t)
  {
    ATerm g_48 = NULL;
    g_48 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), g_48);
    t = (ATerm) ATmakeAppl(sym_Output_1, g_48);
    return(t);
  }
  ATerm o_8 (ATerm t)
  {
    t = term_e_38;
    return(t);
  }
  t = ArgOption_3_0(m_8, n_8, o_8, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm f_38 = t;
  int g_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(g_38);
    }
  else
    {
      t = f_38;
      {
        ATerm p_8 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm q_8 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_h_38;
          return(t);
        }
        ATerm r_8 (ATerm t)
        {
          t = term_i_38;
          return(t);
        }
        t = Option_3_0(p_8, q_8, r_8, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL;
  j_48 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = j_48;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm r_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_48 = ATgetFirst((ATermList) t);
          l_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_48 = ATgetFirst((ATermList) t);
          n_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_48;
      t = h_0(t);
      t = m_48;
      t = i_0(t);
      r_48 = t;
      t = (ATerm) ATinsert(CheckATermList(n_48), r_48);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm s_8 (ATerm t)
  {
    ATerm t_48 = NULL;
    t_48 = t;
    if(match_string(t, "-i"))
      {
        t = t_48;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = t_48;
      }
    return(t);
  }
  ATerm t_8 (ATerm t)
  {
    ATerm y_48 = NULL;
    y_48 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), y_48);
    t = (ATerm) ATmakeAppl(sym_Input_1, y_48);
    return(t);
  }
  ATerm u_8 (ATerm t)
  {
    t = term_j_38;
    return(t);
  }
  t = ArgOption_3_0(s_8, t_8, u_8, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm k_38 = t;
  int l_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(l_38);
    }
  else
    {
      t = k_38;
      {
        ATerm m_38 = t;
        int n_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(n_38);
          }
        else
          {
            t = m_38;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_17;
  t = whoami_0_0(t);
  z_48 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), z_48));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_38;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm l_122 (ATerm), ATerm m_122 (ATerm), ATerm t)
{
  ATerm p_38 = t;
  int q_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_122(t);
      ;
      LocalPopChoice(q_38);
    }
  else
    {
      t = p_38;
      {
        ATerm h_49 = NULL,i_49 = NULL,l_49 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_49 = ATgetFirst((ATermList) t);
            i_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_49;
        t = foldr_2_0(l_122, m_122, t);
        l_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_49, l_49);
        t = m_122(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL;
  m_49 = t;
  t = SSL_explode_term(m_49);
  if(match_cons(t, sym__2))
    {
      ATerm r_38 = ATgetArgument(t, 0);
      n_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_49;
  t = foldr_2_0(j_120, k_120, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_49 = NULL;
  t = times_0_0(t);
  {
    ATerm v_8 (ATerm t)
    {
      t = term_t_11;
      return(t);
    }
    ATerm w_8 (ATerm t)
    {
      ATerm p_49 = NULL,q_49 = NULL;
      if(match_cons(t, sym__2))
        {
          p_49 = ATgetArgument(t, 0);
          q_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm s_38 = t;
        int t_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(p_49, q_49);
            ;
            LocalPopChoice(t_38);
          }
        else
          {
            t = s_38;
            t = SSL_addr(p_49, q_49);
          }
      }
      return(t);
    }
    t = crush_2_0(v_8, w_8, t);
    o_49 = t;
    t = SSL_TicksToSeconds(o_49);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
  z_49 = t;
  if(match_cons(t, sym__2))
    {
      a_50 = ATgetArgument(t, 0);
      b_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_38 = t;
    int v_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_50;
        if((a_50 != t))
          {
            _fail(t);
          }
        t = z_49;
        ;
        LocalPopChoice(v_38);
      }
    else
      {
        t = u_38;
        t = z_49;
        {
          ATerm w_38 = t;
          int x_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_50, b_50);
              ;
              LocalPopChoice(x_38);
            }
          else
            {
              t = w_38;
              t = SSL_gtr(a_50, b_50);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_50, b_50);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_131 (ATerm), ATerm t)
{
  ATerm x_8 (ATerm t)
  {
    ATerm e_50 = NULL,f_50 = NULL;
    e_50 = t;
    t = term_y_35;
    t = get_config_0_0(t);
    f_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_50, term_w_11);
    t = geq_0_0(t);
    t = e_50;
    t = s_131(t);
    return(t);
  }
  t = try_1_0(x_8, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm y_8 (ATerm t)
  {
    ATerm l_50 = NULL,m_50 = NULL;
    t = run_time_0_0(t);
    l_50 = t;
    t = term_k_17;
    t = whoami_0_0(t);
    m_50 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), l_50), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), m_50));
    t = (ATerm) ATmakeAppl(sym__2, term_y_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_39), l_50), term_z_38), m_50));
    return(t);
  }
  t = if_verbose1_1_0(y_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm k_134 (ATerm), ATerm t)
{
  ATerm b_39 = t;
  int c_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_39;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_39);
    }
  else
    {
      t = b_39;
      {
        ATerm z_8 (ATerm t)
        {
          ATerm e_39 = t;
          int f_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(f_39);
            }
          else
            {
              t = e_39;
              {
                ATerm g_39 = t;
                int h_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(h_39);
                  }
                else
                  {
                    t = g_39;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(z_8, t);
      }
    }
  t = k_134(t);
  return(t);
}
ATerm map_1_0 (ATerm l_117 (ATerm), ATerm t)
{
  ATerm o_50 (ATerm t)
  {
    ATerm i_39 = t;
    int j_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(j_39);
      }
    else
      {
        t = i_39;
        t = Cons_2_0(l_117, o_50, t);
      }
    return(t);
  }
  t = o_50(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_50 = ATgetFirst((ATermList) t);
      r_50 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_50 = NULL,w_50 = NULL;
        t = r_50;
        t = f_0(t);
        v_50 = t;
        t = q_50;
        t = e_0(t);
        w_50 = t;
        t = r_50;
        {
          ATerm a_9 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(v_50), w_50);
            return(t);
          }
          t = reverse_acc_2_0(e_0, a_9, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_17;
      t = f_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm b_9 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, b_9, t);
  return(t);
}
ATerm Program_1_0 (ATerm a_108 (ATerm), ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL;
  a_51 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_51);
  x_50 = t;
  t = y_50;
  t = a_108(t);
  z_50 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, z_50), x_50);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_38;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_39);
    }
  else
    {
      t = k_39;
      {
        ATerm c_9 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(c_9, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_m_39;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm d_9 (ATerm t)
    {
      ATerm d_51 = NULL;
      d_51 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, d_51), term_n_39);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(d_9, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm b_108 (ATerm), ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL;
  h_51 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      f_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_51);
  e_51 = t;
  t = f_51;
  t = b_108(t);
  g_51 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, g_51), e_51);
  return(t);
}
ATerm fetch_1_0 (ATerm w_117 (ATerm), ATerm t)
{
  ATerm k_51 (ATerm t)
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(w_117, _id, t);
        ;
        LocalPopChoice(p_39);
      }
    else
      {
        t = o_39;
        t = Cons_2_0(_id, k_51, t);
      }
    return(t);
  }
  t = k_51(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm k_135 (ATerm), ATerm t)
{
  t = fetch_1_0(k_135, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL;
  m_51 = t;
  {
    ATerm q_39 = t;
    int r_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_51;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_39 = ATgetFirst((ATermList) t);
                ATerm t_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_51;
          }
        ;
        LocalPopChoice(r_39);
      }
    else
      {
        t = q_39;
        t = (ATerm) ATinsert(ATempty, m_51);
      }
    n_51 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), n_51);
    t = m_51;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_38;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm c_114 (ATerm), ATerm t)
{
  ATerm u_39 = t;
  int v_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_114(t);
      ;
      LocalPopChoice(v_39);
    }
  else
    {
      t = u_39;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_39 = t;
  int x_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_9 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm f_9 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_b_40;
        return(t);
      }
      ATerm g_9 (ATerm t)
      {
        t = term_c_40;
        return(t);
      }
      t = Option_3_0(e_9, f_9, g_9, t);
      ;
      LocalPopChoice(x_39);
    }
  else
    {
      t = w_39;
      {
        ATerm i_9 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm j_9 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_d_40;
          return(t);
        }
        ATerm m_9 (ATerm t)
        {
          t = term_e_40;
          return(t);
        }
        t = Option_3_0(i_9, j_9, m_9, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL;
  if(match_cons(t, sym__3))
    {
      t_51 = ATgetArgument(t, 0);
      u_51 = ATgetArgument(t, 1);
      v_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_51, u_51);
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_40 = ATgetArgument(t, 0);
            ATerm i_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_51, u_51);
        ;
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        t = (ATerm) ATempty;
      }
    w_51 = t;
    t = SSL_table_put(t_51, u_51, (ATerm) ATinsert(CheckATermList(w_51), v_51));
    t = (ATerm) ATmakeAppl(sym__3, t_51, u_51, v_51);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm p_136 (ATerm), ATerm t)
{
  ATerm b_52 = NULL;
  t = term_k_17;
  t = p_136(t);
  b_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_40, term_k_40, b_52);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
  d_52 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = d_52;
      t = register_usage_1_0(c_0, t);
    }
  else
    {
      ATerm i_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_52 = ATgetFirst((ATermList) t);
          f_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_52;
      t = a_0(t);
      t = term_k_17;
      t = b_0(t);
      i_52 = t;
      t = (ATerm) ATinsert(CheckATermList(f_52), i_52);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm n_9 (ATerm t)
  {
    ATerm k_52 = NULL;
    k_52 = t;
    if(match_string(t, "--help"))
      {
        t = k_52;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = k_52;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = k_52;
          }
      }
    return(t);
  }
  ATerm o_9 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_l_40;
    return(t);
  }
  ATerm p_9 (ATerm t)
  {
    t = term_m_40;
    return(t);
  }
  t = Option_3_0(n_9, o_9, p_9, t);
  return(t);
}
ATerm Cons_2_0 (ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL;
  q_52 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_52 = ATgetFirst((ATermList) t);
      n_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_52);
  l_52 = t;
  t = m_52;
  t = j_95(t);
  o_52 = t;
  t = n_52;
  t = k_95(t);
  p_52 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(p_52), o_52), l_52);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_136 (ATerm), ATerm t)
{
  ATerm w_52 = NULL;
  w_52 = t;
  {
    ATerm q_9 (ATerm t)
    {
      t = term_n_40;
      t = n_136(t);
      return(t);
    }
    t = try_1_0(q_9, t);
    t = w_52;
    {
      ATerm r_9 (ATerm t)
      {
        ATerm x_52 = NULL;
        x_52 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_52);
        t = (ATerm) ATmakeAppl(sym_Program_1, x_52);
        return(t);
      }
      ATerm s_9 (ATerm t)
      {
        ATerm o_40 = t;
        int p_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_40 = t;
            int r_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(r_40);
              }
            else
              {
                t = q_40;
                t = n_136(t);
                t = Cons_2_0(_id, s_9, t);
              }
            ;
            LocalPopChoice(p_40);
          }
        else
          {
            t = o_40;
            {
              ATerm z_52 = NULL,a_53 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_52 = ATgetFirst((ATermList) t);
                  a_53 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_53), (ATerm) ATmakeAppl(sym_Undefined_1, z_52));
            }
          }
        return(t);
      }
      t = Cons_2_0(r_9, s_9, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm m_136 (ATerm), ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL;
  g_53 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = g_53;
  {
    ATerm t_9 (ATerm t)
    {
      ATerm s_40 = t;
      int t_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_136(t);
          ;
          LocalPopChoice(t_40);
        }
      else
        {
          t = s_40;
          {
            ATerm u_40 = t;
            int v_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(v_40);
              }
            else
              {
                t = u_40;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_9, t);
    {
      ATerm u_9 (ATerm t)
      {
        ATerm w_40 = t;
        int x_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_53 = NULL;
            n_53 = t;
            {
              ATerm y_40 = t;
              int z_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_53;
                  {
                    ATerm a_41 = t;
                    int b_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_d_39;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(b_41);
                      }
                    else
                      {
                        t = a_41;
                        {
                          ATerm v_9 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(v_9, t);
                        }
                      }
                    t = n_53;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(z_40);
                }
              else
                {
                  t = y_40;
                  t = term_a_40;
                  t = get_config_0_0(t);
                  t = n_53;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(x_40);
          }
        else
          {
            t = w_40;
            {
              ATerm w_9 (ATerm t)
              {
                ATerm x_9 (ATerm t)
                {
                  h_53 = t;
                  return(t);
                }
                t = Undefined_1_0(x_9, t);
                return(t);
              }
              t = option_defined_1_0(w_9, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(h_53)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_y_38, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_53)), term_c_41));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(u_9, t);
      i_53 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = i_53;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_134 (ATerm), ATerm n_134 (ATerm), ATerm o_134 (ATerm), ATerm p_134 (ATerm), ATerm t)
{
  ATerm n_7 = NULL;
  t = parse_options_1_0(m_134, t);
  n_7 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), n_7);
  t = n_7;
  t = o_134(t);
  {
    ATerm d_41 = t;
    int e_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_134, t);
        ;
        LocalPopChoice(e_41);
      }
    else
      {
        t = d_41;
        {
          ATerm f_41 = t;
          int g_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_134(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_41);
            }
          else
            {
              t = f_41;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm b_134 (ATerm), ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm e_134 (ATerm), ATerm t)
{
  ATerm y_9 (ATerm t)
  {
    ATerm j_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_134(t);
        ;
        LocalPopChoice(k_41);
      }
    else
      {
        t = j_41;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm z_9 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(b_134, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(y_9, d_134, e_134, z_9, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm v_133 (ATerm), ATerm w_133 (ATerm), ATerm x_133 (ATerm), ATerm t)
{
  ATerm a_10 (ATerm t)
  {
    ATerm b_10 (ATerm t)
    {
      ATerm q_53 = NULL,c_54 = NULL;
      q_53 = t;
      t = term_o_38;
      t = get_config_0_0(t);
      c_54 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, c_54));
      t = q_53;
      return(t);
    }
    t = if_verbose2_1_0(b_10, t);
    return(t);
  }
  t = iowrap_4_0(v_133, w_133, x_133, a_10, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm t_133 (ATerm), ATerm u_133 (ATerm), ATerm t)
{
  t = iowrap_3_0(t_133, u_133, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm q_133 (ATerm), ATerm t)
{
  ATerm c_10 (ATerm t)
  {
    t = _2_0(_id, q_133, t);
    return(t);
  }
  t = iowrap_2_0(c_10, _fail, t);
  return(t);
}
ATerm inline_io_0_0 (ATerm t)
{
  t = iowrap_1_0(inline_strategies_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = inline_io_0_0(t);
  return(t);
}
