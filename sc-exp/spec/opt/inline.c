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
ATerm term_x_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_r_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_a_38;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_m_37;
ATerm term_j_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_s_36;
ATerm term_p_36;
ATerm term_l_35;
ATerm term_h_35;
ATerm term_b_35;
ATerm term_y_34;
ATerm term_w_34;
ATerm term_z_27;
ATerm term_w_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_l_27;
ATerm term_c_24;
ATerm term_i_21;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_q_17;
ATerm term_f_16;
ATerm term_a_16;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_j_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_v_9;
ATerm term_p_9;
void init_constant_terms (void)
{
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Op_2, term_r_27, (ATerm) ATempty);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_27);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_10);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(sym__3, term_n_39, term_o_39, term_a_16);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm SubsArgCall2_0_0 (ATerm);
ATerm SubsArgCall1_0_0 (ATerm);
ATerm topdown_1_0 (ATerm n_112 (ATerm), ATerm);
ATerm substitute_arg_0_0 (ATerm);
ATerm substitute_args_0_0 (ATerm);
ATerm InlineCall_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm length_0_0 (ATerm);
ATerm spaste_1_0 (ATerm r_111 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm r_103 (ATerm), ATerm);
ATerm Let_2_0 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm srename_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm n_111 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm h_100 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm union_1_0 (ATerm a_121 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm e_121 (ATerm), ATerm f_121 (ATerm), ATerm);
ATerm diff_1_0 (ATerm w_120 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm);
ATerm for_3_0 (ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm c_130 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm q_97 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm z_125 (ATerm), ATerm a_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm RnBinding_2_0 (ATerm t_125 (ATerm), ATerm u_125 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm RnVar_1_0 (ATerm e_126 (ATerm (ATerm), ATerm), ATerm);
ATerm all_dist_1_0 (ATerm x_126 (ATerm), ATerm);
ATerm env_alltd_1_0 (ATerm h_126 (ATerm), ATerm);
ATerm rename_4_0 (ATerm o_125 (ATerm (ATerm), ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_125 (ATerm (ATerm), ATerm), ATerm);
ATerm trename_0_0 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm a_125 (ATerm), ATerm);
ATerm InlineCall0_0_0 (ATerm);
ATerm occurrences_1_0 (ATerm i_121 (ATerm), ATerm);
ATerm local_inlinable_1_0 (ATerm s_110 (ATerm), ATerm);
ATerm DeclareInline_0_0 (ATerm);
ATerm UndefineSDef_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm v_124 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm u_124 (ATerm), ATerm);
ATerm scope_2_0 (ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm);
ATerm inline_sdef_0_0 (ATerm);
ATerm assert_1_0 (ATerm y_124 (ATerm), ATerm);
ATerm AddSDef_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm foldr_3_0 (ATerm p_123 (ATerm), ATerm q_123 (ATerm), ATerm r_123 (ATerm), ATerm);
ATerm crush_3_0 (ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm p_121 (ATerm), ATerm);
ATerm term_size_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm);
ATerm Match_1_0 (ATerm h_101 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm);
ATerm Build_1_0 (ATerm i_101 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm z_100 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm);
ATerm body_to_inline_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm);
ATerm inlineable_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm genzip_4_0 (ATerm z_116 (ATerm), ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm);
ATerm zip_1_0 (ATerm e_117 (ATerm), ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BMF_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm r_113 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm F10_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm i_129 (ATerm), ATerm);
ATerm downup_1_0 (ATerm p_112 (ATerm), ATerm);
ATerm simplify0_0_0 (ATerm);
ATerm inline_sdefs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm s_96 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm x_96 (ATerm), ATerm);
ATerm inline_strategies_0_0 (ATerm);
ATerm _2_0 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm e_119 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm s_132 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm w_139 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_134 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm i_139 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm);
ATerm crush_2_0 (ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_132 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm j_135 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_118 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm d_109 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm e_109 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm y_118 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm j_136 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm f_115 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm o_137 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm m_137 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm l_137 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_135 (ATerm), ATerm m_135 (ATerm), ATerm n_135 (ATerm), ATerm o_135 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm a_135 (ATerm), ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm u_134 (ATerm), ATerm v_134 (ATerm), ATerm w_134 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm s_134 (ATerm), ATerm t_134 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm p_134 (ATerm), ATerm);
ATerm inline_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm v_2 = NULL,y_2 = NULL,a_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm o_9 = ATgetArgument(t, 0);
      if(match_cons(o_9, sym_SVar_1))
        {
          v_2 = ATgetArgument(o_9, 0);
        }
      else
        _fail(t);
      y_2 = ATgetArgument(t, 1);
      a_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_2), (ATerm)ATempty, (ATerm) ATempty);
  {
    ATerm m_0 (ATerm t)
    {
      t = term_p_9;
      return(t);
    }
    t = rewrite_1_0(m_0, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm q_9 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) q_9) != ATmakeSymbol("n_0", 0, ATtrue)))
          _fail(t);
        g_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_3), y_2, a_3);
  }
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm h_3 = NULL,m_3 = NULL;
  h_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm r_9 = ATgetArgument(t, 0);
      if(match_cons(r_9, sym_SVar_1))
        {
          ATerm u_9 = ATgetArgument(r_9, 0);
        }
      else
        _fail(t);
      {
        ATerm s_9 = ATgetArgument(t, 1);
        if(((ATgetType(s_9) != AT_LIST) || !(ATisEmpty(s_9))))
          _fail(t);
      }
      {
        ATerm t_9 = ATgetArgument(t, 2);
        if(((ATgetType(t_9) != AT_LIST) || !(ATisEmpty(t_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_3;
  {
    ATerm o_0 (ATerm t)
    {
      t = term_v_9;
      return(t);
    }
    t = rewrite_1_0(o_0, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm w_9 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) w_9) != ATmakeSymbol("k_0", 0, ATtrue)))
          _fail(t);
        m_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = m_3;
    t = strename_0_0(t);
  }
  return(t);
}
ATerm topdown_1_0 (ATerm n_112 (ATerm), ATerm t)
{
  t = n_112(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = topdown_1_0(n_112, t);
      return(t);
    }
    t = SRTS_all(p_0, t);
  }
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,n_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,t_4 = NULL,x_4 = NULL;
  k_4 = t;
  if(match_cons(t, sym__2))
    {
      n_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4;
  if(match_cons(t, sym_VarDec_2))
    {
      p_4 = ATgetArgument(t, 0);
      q_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4;
  if(match_cons(t, sym_FunType_2))
    {
      r_4 = ATgetArgument(t, 0);
      {
        ATerm x_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_9 = ATgetFirst((ATermList) t);
      t_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_4;
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_10 = ATgetFirst((ATermList) t);
            ATerm c_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_10);
        t = x_4;
        if(match_cons(t, sym_CallT_3))
          {
            g_4 = ATgetArgument(t, 0);
            i_4 = ATgetArgument(t, 1);
            j_4 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = g_4;
        if(match_cons(t, sym_SVar_1))
          {
            h_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_4;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_4;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_4), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_d_10, h_4));
        {
          ATerm q_0 (ATerm t)
          {
            t = term_p_9;
            return(t);
          }
          t = assert_1_0(q_0, t);
          t = k_4;
        }
      }
    else
      {
        t = z_9;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_4), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_e_10, x_4));
        {
          ATerm r_0 (ATerm t)
          {
            t = term_v_9;
            return(t);
          }
          t = assert_1_0(r_0, t);
          t = k_4;
        }
      }
  }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm e_5 = NULL,h_5 = NULL,i_5 = NULL;
  ATerm s_0 (ATerm t)
  {
    t = term_v_9;
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_p_9;
      return(t);
    }
    ATerm v_0 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          e_5 = ATgetArgument(t, 0);
          h_5 = ATgetArgument(t, 1);
          i_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, e_5, h_5);
      t = zip_1_0(substitute_arg_0_0, t);
      t = i_5;
      {
        ATerm w_0 (ATerm t)
        {
          ATerm x_0 (ATerm t)
          {
            ATerm f_10 = t;
            int g_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SubsArgCall1_0_0(t);
                ;
                LocalPopChoice(g_10);
              }
            else
              {
                t = f_10;
                t = SubsArgCall2_0_0(t);
              }
            return(t);
          }
          t = try_1_0(x_0, t);
          return(t);
        }
        t = topdown_1_0(w_0, t);
      }
      return(t);
    }
    t = scope_2_0(u_0, v_0, t);
    return(t);
  }
  t = scope_2_0(s_0, t_0, t);
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm x_10 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
  x_10 = t;
  if(match_cons(t, sym_CallT_3))
    {
      c_11 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
      f_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_11;
  if(match_cons(t, sym_SVar_1))
    {
      d_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_11), (ATerm)ATempty, (ATerm) ATempty);
        {
          ATerm y_0 (ATerm t)
          {
            t = term_j_10;
            return(t);
          }
          t = rewrite_1_0(y_0, t);
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          _fail(t);
        }
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        {
          ATerm k_10 = t;
          int l_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_11), (ATerm)ATempty, (ATerm) ATempty);
              {
                ATerm z_0 (ATerm t)
                {
                  t = term_j_10;
                  return(t);
                }
                t = rewrite_1_0(z_0, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                _fail(t);
              }
              ;
              LocalPopChoice(l_10);
            }
          else
            {
              t = k_10;
              {
                ATerm m_10 = t;
                int n_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_11), (ATerm)ATempty, (ATerm) ATempty);
                    {
                      ATerm k_1 (ATerm t)
                      {
                        t = term_j_10;
                        return(t);
                      }
                      t = rewrite_1_0(k_1, t);
                      if(match_cons(t, sym_Defined_2))
                        {
                          ATerm o_10 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) o_10) != ATmakeSymbol("d_0", 0, ATtrue)))
                            _fail(t);
                          a_1 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_1;
                      t = strename_0_0(t);
                      if(match_cons(t, sym_SDefT_4))
                        {
                          if((d_11 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          b_1 = ATgetArgument(t, 1);
                          c_1 = ATgetArgument(t, 2);
                          d_1 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__3, b_1, e_11, d_1);
                      t = substitute_args_0_0(t);
                      e_1 = t;
                      t = c_1;
                      {
                        ATerm l_1 (ATerm t)
                        {
                          ATerm h_1 = NULL;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              h_1 = ATgetArgument(t, 0);
                              {
                                ATerm p_10 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = h_1;
                          return(t);
                        }
                        t = map_1_0(l_1, t);
                        f_1 = t;
                        t = (ATerm) ATmakeAppl(sym__2, f_11, f_1);
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm i_1 = NULL,j_1 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                i_1 = ATgetArgument(t, 0);
                                j_1 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_1), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_1)));
                            return(t);
                          }
                          t = zip_1_0(m_1, t);
                          g_1 = t;
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_11), (ATerm)ATempty, (ATerm) ATempty), term_q_10);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              t = term_j_10;
                              return(t);
                            }
                            t = assert_1_0(n_1, t);
                            t = (ATerm) ATmakeAppl(sym_Scope_2, f_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_1), e_1));
                            t = simplify0_0_0(t);
                          }
                        }
                      }
                    }
                    ;
                    LocalPopChoice(n_10);
                  }
                else
                  {
                    t = m_10;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_11), (ATerm)ATempty, (ATerm) ATempty);
                    {
                      ATerm o_1 (ATerm t)
                      {
                        t = term_j_10;
                        return(t);
                      }
                      t = rewrite_1_0(o_1, t);
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
  ATerm p_1 (ATerm t)
  {
    t = term_r_10;
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    ATerm q_11 = NULL,r_11 = NULL;
    if(match_cons(t, sym__2))
      {
        q_11 = ATgetArgument(t, 0);
        r_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm s_10 = t;
      int t_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(q_11, r_11);
          ;
          LocalPopChoice(t_10);
        }
      else
        {
          t = s_10;
          t = SSL_addr(q_11, r_11);
        }
    }
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    t = term_u_10;
    return(t);
  }
  t = foldr_3_0(p_1, q_1, r_1, t);
  return(t);
}
ATerm spaste_1_0 (ATerm r_111 (ATerm), ATerm t)
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        t = split_2_0(_id, r_111, t);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm d_15 = NULL,f_15 = NULL,h_15 = NULL,s_15 = NULL,t_15 = NULL;
            if(match_cons(t, sym__2))
              {
                d_15 = ATgetArgument(t, 0);
                t_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_15;
            {
              ATerm y_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm a_11 = ATgetArgument(t, 0);
                      f_15 = ATgetArgument(t, 1);
                      h_15 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_10);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, t_15, f_15, h_15);
                }
              else
                {
                  t = y_10;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm b_11 = ATgetArgument(t, 0);
                      f_15 = ATgetArgument(t, 1);
                      h_15 = ATgetArgument(t, 2);
                      s_15 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, t_15, f_15, h_15, s_15);
                }
            }
            return(t);
          }
          t = zip_1_0(v_1, t);
        }
        return(t);
      }
      t = Let_2_0(t_1, _id, t);
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              t = split_2_0(_id, r_111, t);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm z_16 = NULL,e_17 = NULL,f_17 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      z_16 = ATgetArgument(t, 0);
                      f_17 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = z_16;
                  {
                    ATerm i_11 = t;
                    int j_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm k_11 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_11);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_17);
                      }
                    else
                      {
                        t = i_11;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm l_11 = ATgetArgument(t, 0);
                            e_17 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, f_17, e_17);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(y_1, t);
              }
              return(t);
            }
            t = SDef_3_0(_id, x_1, _id, t);
            ;
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            {
              ATerm m_11 = t;
              int n_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_1 (ATerm t)
                  {
                    t = split_2_0(_id, r_111, t);
                    {
                      ATerm a_2 (ATerm t)
                      {
                        ATerm o_17 = NULL,r_17 = NULL,s_17 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            o_17 = ATgetArgument(t, 0);
                            s_17 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = o_17;
                        {
                          ATerm o_11 = t;
                          int p_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm s_11 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(p_11);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_17);
                            }
                          else
                            {
                              t = o_11;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm t_11 = ATgetArgument(t, 0);
                                  r_17 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, s_17, r_17);
                            }
                        }
                        return(t);
                      }
                      t = zip_1_0(a_2, t);
                    }
                    return(t);
                  }
                  t = SDefT_4_0(_id, z_1, _id, _id, t);
                  ;
                  LocalPopChoice(n_11);
                }
              else
                {
                  t = m_11;
                  {
                    ATerm u_11 = t;
                    int v_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_2 (ATerm t)
                        {
                          t = split_2_0(_id, r_111, t);
                          {
                            ATerm c_2 (ATerm t)
                            {
                              ATerm b_18 = NULL,d_18 = NULL,e_18 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  b_18 = ATgetArgument(t, 0);
                                  e_18 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = b_18;
                              {
                                ATerm w_11 = t;
                                int x_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm y_11 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(x_11);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_18);
                                  }
                                else
                                  {
                                    t = w_11;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm z_11 = ATgetArgument(t, 0);
                                        d_18 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, e_18, d_18);
                                  }
                              }
                              return(t);
                            }
                            t = zip_1_0(c_2, t);
                          }
                          return(t);
                        }
                        t = RDefT_4_0(_id, b_2, _id, _id, t);
                        ;
                        LocalPopChoice(v_11);
                      }
                    else
                      {
                        t = u_11;
                        {
                          ATerm d_2 (ATerm t)
                          {
                            ATerm i_18 = NULL;
                            t = r_111(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                i_18 = ATgetFirst((ATermList) t);
                                {
                                  ATerm a_12 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = i_18;
                            return(t);
                          }
                          t = Rec_2_0(d_2, _id, t);
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
ATerm Rec_2_0 (ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,q_18 = NULL;
  q_18 = t;
  if(match_cons(t, sym_Rec_2))
    {
      k_18 = ATgetArgument(t, 0);
      l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_18);
  j_18 = t;
  t = k_18;
  t = x_101(t);
  m_18 = t;
  t = l_18;
  t = y_101(t);
  n_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, m_18, n_18), j_18);
  return(t);
}
ATerm SDef_3_0 (ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm r_103 (ATerm), ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  e_19 = t;
  if(match_cons(t, sym_SDef_3))
    {
      y_18 = ATgetArgument(t, 0);
      z_18 = ATgetArgument(t, 1);
      a_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_19);
  x_18 = t;
  t = y_18;
  t = p_103(t);
  b_19 = t;
  t = z_18;
  t = q_103(t);
  c_19 = t;
  t = a_19;
  t = r_103(t);
  d_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, b_19, c_19, d_19), x_18);
  return(t);
}
ATerm Let_2_0 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
  n_19 = t;
  if(match_cons(t, sym_Let_2))
    {
      j_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_19);
  i_19 = t;
  t = j_19;
  t = a_101(t);
  l_19 = t;
  t = k_19;
  t = b_101(t);
  m_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, l_19, m_19), i_19);
  return(t);
}
ATerm sboundin_3_0 (ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm t)
{
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(s_111, s_111, t);
      ;
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm d_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(u_111, u_111, s_111, t);
            ;
            LocalPopChoice(e_12);
          }
        else
          {
            t = d_12;
            {
              ATerm f_12 = t;
              int g_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(u_111, u_111, u_111, s_111, t);
                  ;
                  LocalPopChoice(g_12);
                }
              else
                {
                  t = f_12;
                  t = Rec_2_0(u_111, s_111, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm r_19 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm h_12 = ATgetArgument(t, 0);
      r_19 = ATgetArgument(t, 1);
      {
        ATerm i_12 = ATgetArgument(t, 2);
      }
      {
        ATerm j_12 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = r_19;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm s_19 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm k_12 = ATgetArgument(t, 0);
      s_19 = ATgetArgument(t, 1);
      {
        ATerm l_12 = ATgetArgument(t, 2);
      }
      {
        ATerm m_12 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = s_19;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm t_19 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm n_12 = ATgetArgument(t, 0);
      t_19 = ATgetArgument(t, 1);
      {
        ATerm o_12 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = t_19;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm v_19 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      v_19 = ATgetArgument(t, 0);
      {
        ATerm p_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_19;
  {
    ATerm e_2 (ATerm t)
    {
      ATerm x_19 = NULL;
      ATerm q_12 = t;
      int r_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              x_19 = ATgetArgument(t, 0);
              {
                ATerm s_12 = ATgetArgument(t, 1);
              }
              {
                ATerm t_12 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(r_12);
          t = x_19;
        }
      else
        {
          t = q_12;
          if(match_cons(t, sym_SDefT_4))
            {
              x_19 = ATgetArgument(t, 0);
              {
                ATerm u_12 = ATgetArgument(t, 1);
              }
              {
                ATerm v_12 = ATgetArgument(t, 2);
              }
              {
                ATerm w_12 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = x_19;
        }
      return(t);
    }
    t = map_1_0(e_2, t);
  }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        {
          ATerm z_12 = t;
          int a_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
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
                    ATerm f_20 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        f_20 = ATgetArgument(t, 0);
                        {
                          ATerm d_13 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, f_20);
                    ;
                    LocalPopChoice(c_13);
                  }
                else
                  {
                    t = b_13;
                    {
                      ATerm e_13 = t;
                      int f_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(f_13);
                        }
                      else
                        {
                          t = e_13;
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
  t = rename_4_0(SVar_1_0, f_2, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm tpaste_1_0 (ATerm n_111 (ATerm), ATerm t)
{
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(n_111, _id, t);
      ;
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_2 (ATerm t)
            {
              t = split_2_0(_id, n_111, t);
              {
                ATerm h_2 (ATerm t)
                {
                  ATerm n_20 = NULL,p_20 = NULL,q_20 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      n_20 = ATgetArgument(t, 0);
                      q_20 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = n_20;
                  {
                    ATerm k_13 = t;
                    int l_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm m_13 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(l_13);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_20);
                      }
                    else
                      {
                        t = k_13;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm n_13 = ATgetArgument(t, 0);
                            p_20 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_20, p_20);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(h_2, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, g_2, _id, t);
            ;
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            {
              ATerm k_2 (ATerm t)
              {
                t = split_2_0(_id, n_111, t);
                {
                  ATerm l_2 (ATerm t)
                  {
                    ATerm v_20 = NULL,x_20 = NULL,a_21 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        v_20 = ATgetArgument(t, 0);
                        a_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = v_20;
                    {
                      ATerm o_13 = t;
                      int p_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              ATerm q_13 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(p_13);
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_21);
                        }
                      else
                        {
                          t = o_13;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm r_13 = ATgetArgument(t, 0);
                              x_20 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, a_21, x_20);
                        }
                    }
                    return(t);
                  }
                  t = zip_1_0(l_2, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, k_2, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm h_100 (ATerm), ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL;
  h_21 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      f_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_21);
  e_21 = t;
  t = f_21;
  t = h_100(t);
  g_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, g_21), e_21);
  return(t);
}
ATerm RDefT_4_0 (ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL;
  u_21 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      m_21 = ATgetArgument(t, 0);
      n_21 = ATgetArgument(t, 1);
      o_21 = ATgetArgument(t, 2);
      p_21 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_21);
  l_21 = t;
  t = m_21;
  t = y_99(t);
  q_21 = t;
  t = n_21;
  t = z_99(t);
  r_21 = t;
  t = o_21;
  t = a_100(t);
  s_21 = t;
  t = p_21;
  t = b_100(t);
  t_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, q_21, r_21, s_21, t_21), l_21);
  return(t);
}
ATerm tboundin_3_0 (ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm t)
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(q_111, o_111, t);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(q_111, q_111, q_111, o_111, t);
            ;
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            {
              ATerm w_13 = t;
              int x_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(q_111, q_111, q_111, o_111, t);
                  ;
                  LocalPopChoice(x_13);
                }
              else
                {
                  t = w_13;
                  t = DynamicRules_1_0(o_111, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm y_21 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm y_13 = ATgetArgument(t, 0);
      ATerm z_13 = ATgetArgument(t, 1);
      y_21 = ATgetArgument(t, 2);
      {
        ATerm a_14 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = y_21;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm c_22 = NULL;
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            c_22 = ATgetArgument(t, 0);
            {
              ATerm d_14 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_14);
        t = c_22;
      }
    else
      {
        t = b_14;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            c_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_22;
      }
    return(t);
  }
  t = map_1_0(m_2, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm f_22 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm e_14 = ATgetArgument(t, 0);
      ATerm f_14 = ATgetArgument(t, 1);
      f_22 = ATgetArgument(t, 2);
      {
        ATerm g_14 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = f_22;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm g_22 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      g_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_22;
  t = tvars_0_0(t);
  return(t);
}
ATerm union_1_0 (ATerm a_121 (ATerm), ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym__2))
    {
      i_22 = ATgetArgument(t, 0);
      h_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_22;
  {
    ATerm j_22 (ATerm t)
    {
      ATerm h_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_22;
          ;
          LocalPopChoice(i_14);
        }
      else
        {
          t = h_14;
          {
            ATerm j_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_2 (ATerm t)
                {
                  t = h_22;
                  return(t);
                }
                t = HdMember_p__2_0(a_121, n_2, t);
                t = j_22(t);
                ;
                LocalPopChoice(k_14);
              }
            else
              {
                t = j_14;
                t = Cons_2_0(_id, j_22, t);
              }
          }
        }
      return(t);
    }
    t = j_22(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm k_22 = NULL;
    if(match_cons(t, sym__2))
      {
        k_22 = ATgetArgument(t, 0);
        if((k_22 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(o_2, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm e_121 (ATerm), ATerm f_121 (ATerm), ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_22 = ATgetFirst((ATermList) t);
      m_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_121(t);
  {
    ATerm p_2 (ATerm t)
    {
      ATerm n_22 = NULL;
      n_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_22, n_22);
      t = e_121(t);
      return(t);
    }
    t = fetch_1_0(p_2, t);
    t = m_22;
  }
  return(t);
}
ATerm diff_1_0 (ATerm w_120 (ATerm), ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  if(match_cons(t, sym__2))
    {
      p_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_22;
  {
    ATerm q_22 (ATerm t)
    {
      ATerm l_14 = t;
      int m_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(m_14);
        }
      else
        {
          t = l_14;
          {
            ATerm n_14 = t;
            int o_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_2 (ATerm t)
                {
                  t = o_22;
                  return(t);
                }
                t = HdMember_p__2_0(w_120, q_2, t);
                t = q_22(t);
                ;
                LocalPopChoice(o_14);
              }
            else
              {
                t = n_14;
                t = Cons_2_0(_id, q_22, t);
              }
          }
        }
      return(t);
    }
    t = q_22(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_14 = ATgetFirst((ATermList) t);
      if(match_cons(p_14, sym__2))
        {
          r_22 = ATgetArgument(p_14, 0);
          s_22 = ATgetArgument(p_14, 1);
        }
      else
        _fail(t);
      t_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_22);
  if(match_cons(t, sym__2))
    {
      u_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_22);
  if(match_cons(t, sym__2))
    {
      if((u_22 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      w_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_22, v_22);
  t = zip_1_0(_id, t);
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_22, t_22);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm t)
{
  ATerm y_22 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_129(t);
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        t = y_129(t);
        t = y_22(t);
      }
    return(t);
  }
  t = y_22(t);
  return(t);
}
ATerm for_3_0 (ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm c_130 (ATerm), ATerm t)
{
  t = a_130(t);
  t = while_not_2_0(b_130, c_130, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 (ATerm t)
      {
        ATerm d_23 = NULL;
        d_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_23);
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        ATerm u_2 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, u_2, t);
        return(t);
      }
      ATerm t_2 (ATerm t)
      {
        ATerm u_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_2 (ATerm t)
            {
              ATerm w_14 = t;
              int x_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_23 = ATgetFirst((ATermList) t);
                      i_23 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = f_23;
                  if(match_cons(t, sym__2))
                    {
                      g_23 = ATgetArgument(t, 0);
                      h_23 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = h_23;
                  if((g_23 != t))
                    {
                      _fail(t);
                    }
                  t = i_23;
                  ;
                  LocalPopChoice(x_14);
                }
              else
                {
                  t = w_14;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, w_2, t);
            ;
            LocalPopChoice(v_14);
          }
        else
          {
            t = u_14;
            {
              ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
              if(match_cons(t, sym__2))
                {
                  m_23 = ATgetArgument(t, 0);
                  n_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_23;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_23 = ATgetFirst((ATermList) t);
                  p_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_23), o_23), p_23);
            }
          }
        return(t);
      }
      t = for_3_0(r_2, s_2, t_2, t);
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        ATerm x_2 (ATerm t)
        {
          ATerm t_23 = NULL;
          if(match_cons(t, sym__2))
            {
              t_23 = ATgetArgument(t, 0);
              if((t_23 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(x_2, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm x_23 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_127(t);
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
              ATerm u_23 = NULL,w_23 = NULL;
              u_23 = t;
              t = s_127(t);
              w_23 = t;
              t = u_23;
              {
                ATerm z_2 (ATerm t)
                {
                  ATerm c_3 (ATerm t)
                  {
                    t = w_23;
                    return(t);
                  }
                  t = split_2_0(x_23, c_3, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm b_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = t_127(z_2, x_23, b_3, t);
                {
                  ATerm d_3 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(d_3, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(b_15);
            }
          else
            {
              t = a_15;
              {
                ATerm e_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(e_3, union_0_0, x_23, t);
              }
            }
        }
      }
    return(t);
  }
  t = x_23(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm y_23 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        y_23 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, y_23);
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm c_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(e_15);
      }
    else
      {
        t = c_15;
        {
          ATerm g_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(i_15);
            }
          else
            {
              t = g_15;
              {
                ATerm j_15 = t;
                int k_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(k_15);
                  }
                else
                  {
                    t = j_15;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(f_3, i_3, tboundin_3_0, t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm b_24 = NULL,f_24 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      f_24 = ATgetArgument(t, 0);
      t = f_24;
      if(match_cons(t, sym_Rule_3))
        {
          b_24 = ATgetArgument(t, 0);
          {
            ATerm l_15 = ATgetArgument(t, 1);
          }
          {
            ATerm m_15 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = b_24;
      t = tvars_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          f_24 = ATgetArgument(t, 0);
          {
            ATerm n_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = f_24;
    }
  return(t);
}
ATerm Var_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  m_24 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_24);
  j_24 = t;
  t = k_24;
  t = q_97(t);
  l_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, l_24), j_24);
  return(t);
}
ATerm DistBinding_2_0 (ATerm z_125 (ATerm), ATerm a_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
  if(match_cons(t, sym__3))
    {
      s_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
      q_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_24;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm t_24 = NULL;
      t_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_24, q_24);
      t = z_125(t);
      return(t);
    }
    ATerm k_3 (ATerm t)
    {
      ATerm u_24 = NULL;
      u_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_24, r_24);
      t = z_125(t);
      return(t);
    }
    t = a_126(j_3, k_3, _id, t);
  }
  return(t);
}
ATerm RnBinding_2_0 (ATerm t_125 (ATerm), ATerm u_125 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_24;
  t = t_125(t);
  x_24 = t;
  t = map_1_0(new_0_0, t);
  y_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_24, y_24);
  t = zip_1_0(_id, t);
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_24, w_24);
  t = conc_0_0(t);
  a_25 = t;
  t = v_24;
  {
    ATerm l_3 (ATerm t)
    {
      t = y_24;
      return(t);
    }
    t = u_125(l_3, t);
    b_25 = t;
    t = (ATerm) ATmakeAppl(sym__3, b_25, w_24, a_25);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
  if(match_cons(t, sym__2))
    {
      i_25 = ATgetArgument(t, 0);
      j_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_25 = ATgetFirst((ATermList) t);
      l_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_25;
  if(match_cons(t, sym__2))
    {
      f_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
      {
        ATerm o_15 = t;
        int p_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_25;
            if((i_25 != t))
              {
                _fail(t);
              }
            t = g_25;
            ;
            LocalPopChoice(p_15);
          }
        else
          {
            t = o_15;
            t = (ATerm) ATmakeAppl(sym__2, i_25, l_25);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, i_25, l_25);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm e_126 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  if(match_cons(t, sym__2))
    {
      u_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_25;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm o_3 (ATerm t)
      {
        t = t_25;
        return(t);
      }
      t = split_2_0(_id, o_3, t);
      t = lookup_0_0(t);
      return(t);
    }
    t = e_126(n_3, t);
  }
  return(t);
}
ATerm all_dist_1_0 (ATerm x_126 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  if(match_cons(t, sym__2))
    {
      w_25 = ATgetArgument(t, 0);
      v_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_25;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm x_25 = NULL;
      x_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_25, v_25);
      t = x_126(t);
      return(t);
    }
    t = SRTS_all(p_3, t);
  }
  return(t);
}
ATerm env_alltd_1_0 (ATerm h_126 (ATerm), ATerm t)
{
  ATerm y_25 (ATerm t)
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_126(t);
        ;
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
        t = all_dist_1_0(y_25, t);
      }
    return(t);
  }
  t = y_25(t);
  return(t);
}
ATerm rename_4_0 (ATerm o_125 (ATerm (ATerm), ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_125 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm z_25 = NULL;
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_25, (ATerm) ATempty);
  {
    ATerm a_26 (ATerm t)
    {
      ATerm q_3 (ATerm t)
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RnVar_1_0(o_125, t);
            ;
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
            t = RnBinding_2_0(p_125, r_125, t);
            t = DistBinding_2_0(a_26, q_125, t);
          }
        return(t);
      }
      t = env_alltd_1_0(q_3, t);
      return(t);
    }
    t = a_26(t);
  }
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        {
          ATerm y_15 = t;
          int z_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(z_15);
            }
          else
            {
              t = y_15;
              t = Bind8_0_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, r_3, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = trename_0_0(t);
  t = srename_0_0(t);
  return(t);
}
ATerm rewrite_1_0 (ATerm a_125 (ATerm), ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,s_1 = NULL;
  e_26 = t;
  t = term_a_16;
  t = a_125(t);
  f_26 = t;
  t = SSL_table_get(f_26, e_26);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_1 = ATgetFirst((ATermList) t);
      {
        ATerm b_16 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_1;
  return(t);
}
ATerm InlineCall0_0_0 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
  g_26 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if(match_cons(c_16, sym_SVar_1))
        {
          h_26 = ATgetArgument(c_16, 0);
        }
      else
        _fail(t);
      {
        ATerm d_16 = ATgetArgument(t, 1);
        if(((ATgetType(d_16) != AT_LIST) || !(ATisEmpty(d_16))))
          _fail(t);
      }
      {
        ATerm e_16 = ATgetArgument(t, 2);
        if(((ATgetType(e_16) != AT_LIST) || !(ATisEmpty(e_16))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_26;
  {
    ATerm s_3 (ATerm t)
    {
      t = term_f_16;
      return(t);
    }
    t = rewrite_1_0(s_3, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm g_16 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) g_16) != ATmakeSymbol("g_0", 0, ATtrue)))
          _fail(t);
        i_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = i_26;
    t = strename_0_0(t);
    if(match_cons(t, sym_SDefT_4))
      {
        if((h_26 != ATgetArgument(t, 0)))
          {
            _fail(ATgetArgument(t, 0));
          }
        j_26 = ATgetArgument(t, 1);
        k_26 = ATgetArgument(t, 2);
        l_26 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = j_26;
    t = length_0_0(t);
    m_26 = t;
    t = k_26;
    t = length_0_0(t);
    n_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_26, n_26);
    {
      ATerm h_16 = t;
      int i_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(m_26, n_26);
          ;
          LocalPopChoice(i_16);
        }
      else
        {
          t = h_16;
          t = SSL_addr(m_26, n_26);
        }
      o_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_26, term_r_10);
      {
        ATerm j_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(o_26, (ATerm) ATmakeInt(0));
            ;
            LocalPopChoice(k_16);
          }
        else
          {
            t = j_16;
            t = SSL_gtr(o_26, (ATerm) ATmakeInt(0));
          }
        t = (ATerm) ATmakeAppl(sym__2, o_26, term_r_10);
        t = new_0_0(t);
        p_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_26), (ATerm)ATempty, (ATerm) ATempty), term_q_10);
        {
          ATerm t_3 (ATerm t)
          {
            t = term_j_10;
            return(t);
          }
          t = assert_1_0(t_3, t);
          t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, p_26, j_26, k_26, l_26)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_26), (ATerm)ATempty, (ATerm) ATempty));
        }
      }
    }
  }
  return(t);
}
ATerm occurrences_1_0 (ATerm i_121 (ATerm), ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL;
  ATerm u_3 (ATerm t)
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_121(t);
        t = term_u_10;
        ;
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        t = term_r_10;
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    ATerm w_3 (ATerm t)
    {
      t = term_r_10;
      return(t);
    }
    ATerm x_3 (ATerm t)
    {
      ATerm s_26 = NULL,t_26 = NULL;
      if(match_cons(t, sym__2))
        {
          s_26 = ATgetArgument(t, 0);
          t_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm n_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(s_26, t_26);
            ;
            LocalPopChoice(o_16);
          }
        else
          {
            t = n_16;
            t = SSL_addr(s_26, t_26);
          }
      }
      return(t);
    }
    ATerm y_3 (ATerm t)
    {
      t = occurrences_1_0(i_121, t);
      return(t);
    }
    t = crush_3_0(w_3, x_3, y_3, t);
    return(t);
  }
  t = split_2_0(u_3, v_3, t);
  if(match_cons(t, sym__2))
    {
      q_26 = ATgetArgument(t, 0);
      r_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(q_26, r_26);
        ;
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
        t = SSL_addr(q_26, r_26);
      }
  }
  return(t);
}
ATerm local_inlinable_1_0 (ATerm s_110 (ATerm), ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      u_26 = ATgetArgument(t, 0);
      {
        ATerm r_16 = ATgetArgument(t, 1);
      }
      {
        ATerm s_16 = ATgetArgument(t, 2);
      }
      v_26 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  w_26 = t;
  t = v_26;
  {
    ATerm t_16 = t;
    if((PushChoice() == 0))
      {
        ATerm z_3 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm u_16 = ATgetArgument(t, 0);
              if(match_cons(u_16, sym_SVar_1))
                {
                  if((u_26 != ATgetArgument(u_16, 0)))
                    {
                      _fail(ATgetArgument(u_16, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm v_16 = ATgetArgument(t, 1);
              }
              {
                ATerm w_16 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(z_3, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_16;
      }
    t = s_110(t);
    {
      ATerm a_4 (ATerm t)
      {
        if(match_cons(t, sym_CallT_3))
          {
            ATerm x_16 = ATgetArgument(t, 0);
            if(match_cons(x_16, sym_SVar_1))
              {
                if((u_26 != ATgetArgument(x_16, 0)))
                  {
                    _fail(ATgetArgument(x_16, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm y_16 = ATgetArgument(t, 1);
            }
            {
              ATerm a_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        return(t);
      }
      t = occurrences_1_0(a_4, t);
      x_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_26, term_u_10);
      t = leq_0_0(t);
      t = w_26;
    }
  }
  return(t);
}
ATerm DeclareInline_0_0 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      y_26 = ATgetArgument(t, 0);
      z_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_26;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm c_4 (ATerm t)
      {
        t = z_26;
        return(t);
      }
      t = local_inlinable_1_0(c_4, t);
      t = AddSDef_0_0(t);
      return(t);
    }
    t = map_1_0(b_4, t);
    t = (ATerm) ATmakeAppl(sym_Let_2, y_26, z_26);
  }
  return(t);
}
ATerm UndefineSDef_0_0 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      a_27 = ATgetArgument(t, 0);
      {
        ATerm b_17 = ATgetArgument(t, 1);
      }
      {
        ATerm c_17 = ATgetArgument(t, 2);
      }
      {
        ATerm d_17 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_27), (ATerm)ATempty, (ATerm) ATempty), term_q_10);
  {
    ATerm d_4 (ATerm t)
    {
      t = term_j_10;
      return(t);
    }
    t = assert_1_0(d_4, t);
    t = b_27;
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  if(match_cons(t, sym__2))
    {
      e_27 = ATgetArgument(t, 0);
      f_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_17 = ATgetArgument(t, 0);
            ATerm j_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_27, f_27);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_17 = ATgetFirst((ATermList) t);
            u_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_1;
        ;
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        t = (ATerm) ATempty;
      }
    g_27 = t;
    t = SSL_table_put(e_27, f_27, g_27);
    t = (ATerm) ATmakeAppl(sym__2, e_27, f_27);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm v_124 (ATerm), ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL;
  m_27 = t;
  t = v_124(t);
  n_27 = t;
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_27, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_27 = ATgetFirst((ATermList) t);
        o_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_27, (ATerm)ATmakeAppl(sym_Scopes_0), o_27);
    t = p_27;
    {
      ATerm e_4 (ATerm t)
      {
        ATerm q_27 = NULL;
        q_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_27, q_27);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(e_4, t);
      t = m_27;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t)
{
  ATerm n_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_115(t);
      t = v_115(t);
      ;
      LocalPopChoice(p_17);
    }
  else
    {
      t = n_17;
      t = v_115(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm u_124 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
  t_27 = t;
  t = u_124(t);
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_27, term_q_17);
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_17 = ATgetArgument(t, 0);
            ATerm w_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_27, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        t = (ATerm) ATempty;
      }
    v_27 = t;
    t = SSL_table_put(u_27, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(v_27), (ATerm) ATempty));
    t = t_27;
  }
  return(t);
}
ATerm scope_2_0 (ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm t)
{
  t = begin_scope_1_0(w_124, t);
  {
    ATerm f_4 (ATerm t)
    {
      t = end_scope_1_0(w_124, t);
      return(t);
    }
    t = restore_always_2_0(x_124, f_4, t);
  }
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    t = term_j_10;
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    ATerm o_4 (ATerm t)
    {
      t = term_f_16;
      return(t);
    }
    ATerm s_4 (ATerm t)
    {
      ATerm x_17 = t;
      int y_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = UndefineSDef_0_0(t);
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
                t = DeclareInline_0_0(t);
                ;
                LocalPopChoice(a_18);
              }
            else
              {
                t = z_17;
                {
                  ATerm u_4 (ATerm t)
                  {
                    ATerm c_18 = t;
                    int f_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = InlineCall0_0_0(t);
                        ;
                        LocalPopChoice(f_18);
                      }
                    else
                      {
                        t = c_18;
                        t = InlineCall_0_0(t);
                      }
                    return(t);
                  }
                  t = repeat_1_0(u_4, t);
                }
              }
          }
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(o_4, s_4, t);
    return(t);
  }
  t = scope_2_0(l_4, m_4, t);
  return(t);
}
ATerm assert_1_0 (ATerm y_124 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
  if(match_cons(t, sym__2))
    {
      b_28 = ATgetArgument(t, 0);
      c_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_124(t);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_28, b_28, c_28);
  t = table_push_0_0(t);
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(d_28, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_28 = ATgetFirst((ATermList) t);
        f_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(d_28, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(f_28), (ATerm) ATinsert(CheckATermList(e_28), b_28)));
    t = (ATerm) ATmakeAppl(sym__2, b_28, c_28);
  }
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  g_28 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      h_28 = ATgetArgument(t, 0);
      {
        ATerm o_18 = ATgetArgument(t, 1);
      }
      {
        ATerm p_18 = ATgetArgument(t, 2);
      }
      {
        ATerm r_18 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_28), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_s_18, g_28));
  {
    ATerm v_4 (ATerm t)
    {
      t = term_j_10;
      return(t);
    }
    t = assert_1_0(v_4, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_28), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_t_18, g_28));
    {
      ATerm w_4 (ATerm t)
      {
        t = term_f_16;
        return(t);
      }
      t = assert_1_0(w_4, t);
      t = i_28;
    }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm u_18 = t;
  if((PushChoice() == 0))
    {
      ATerm j_28 = NULL,k_28 = NULL;
      if(match_cons(t, sym__2))
        {
          j_28 = ATgetArgument(t, 0);
          k_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(j_28, k_28);
            ;
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            t = SSL_gtr(j_28, k_28);
          }
        t = (ATerm) ATmakeAppl(sym__2, j_28, k_28);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_18;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm p_123 (ATerm), ATerm q_123 (ATerm), ATerm r_123 (ATerm), ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_123(t);
      ;
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      {
        ATerm n_28 = NULL,o_28 = NULL,r_28 = NULL,s_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_28 = ATgetFirst((ATermList) t);
            o_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_28;
        t = r_123(t);
        r_28 = t;
        t = o_28;
        t = foldr_3_0(p_123, q_123, r_123, t);
        s_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_28, s_28);
        t = q_123(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm p_121 (ATerm), ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL;
  t_28 = t;
  t = SSL_explode_term(t_28);
  if(match_cons(t, sym__2))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      u_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_28;
  t = foldr_3_0(n_121, o_121, p_121, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_4 (ATerm t)
      {
        t = term_u_10;
        return(t);
      }
      ATerm z_4 (ATerm t)
      {
        ATerm v_28 = NULL,w_28 = NULL;
        if(match_cons(t, sym__2))
          {
            v_28 = ATgetArgument(t, 0);
            w_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm q_19 = t;
          int u_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(v_28, w_28);
              ;
              LocalPopChoice(u_19);
            }
          else
            {
              t = q_19;
              t = SSL_addr(v_28, w_28);
            }
        }
        return(t);
      }
      t = crush_3_0(y_4, z_4, term_size_0_0, t);
      ;
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      {
        ATerm z_28 (ATerm t)
        {
          ATerm a_5 (ATerm t)
          {
            t = term_u_10;
            return(t);
          }
          ATerm b_5 (ATerm t)
          {
            ATerm x_28 = NULL,y_28 = NULL;
            if(match_cons(t, sym__2))
              {
                x_28 = ATgetArgument(t, 0);
                y_28 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm w_19 = t;
              int y_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(x_28, y_28);
                  ;
                  LocalPopChoice(y_19);
                }
              else
                {
                  t = w_19;
                  t = SSL_addr(x_28, y_28);
                }
            }
            return(t);
          }
          t = crush_3_0(a_5, b_5, z_28, t);
          return(t);
        }
        t = z_28(t);
      }
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  h_29 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      b_29 = ATgetArgument(t, 0);
      c_29 = ATgetArgument(t, 1);
      d_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_29);
  a_29 = t;
  t = b_29;
  t = u_101(t);
  e_29 = t;
  t = c_29;
  t = v_101(t);
  f_29 = t;
  t = d_29;
  t = w_101(t);
  g_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, e_29, f_29, g_29), a_29);
  return(t);
}
ATerm LChoice_2_0 (ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  q_29 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      m_29 = ATgetArgument(t, 0);
      n_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_29);
  l_29 = t;
  t = m_29;
  t = q_101(t);
  o_29 = t;
  t = n_29;
  t = r_101(t);
  p_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, o_29, p_29), l_29);
  return(t);
}
ATerm Choice_2_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
  z_29 = t;
  if(match_cons(t, sym_Choice_2))
    {
      v_29 = ATgetArgument(t, 0);
      w_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_29);
  u_29 = t;
  t = v_29;
  t = o_100(t);
  x_29 = t;
  t = w_29;
  t = p_100(t);
  y_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, x_29, y_29), u_29);
  return(t);
}
ATerm Match_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  g_30 = t;
  if(match_cons(t, sym_Match_1))
    {
      e_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_30);
  d_30 = t;
  t = e_30;
  t = h_101(t);
  f_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, f_30), d_30);
  return(t);
}
ATerm Seq_2_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
  p_30 = t;
  if(match_cons(t, sym_Seq_2))
    {
      l_30 = ATgetArgument(t, 0);
      m_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_30);
  k_30 = t;
  t = l_30;
  t = o_101(t);
  n_30 = t;
  t = m_30;
  t = p_101(t);
  o_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, n_30, o_30), k_30);
  return(t);
}
ATerm Scope_2_0 (ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  y_30 = t;
  if(match_cons(t, sym_Scope_2))
    {
      u_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_30);
  t_30 = t;
  t = u_30;
  t = k_101(t);
  w_30 = t;
  t = v_30;
  t = l_101(t);
  x_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, w_30, x_30), t_30);
  return(t);
}
ATerm Build_1_0 (ATerm i_101 (ATerm), ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
  f_31 = t;
  if(match_cons(t, sym_Build_1))
    {
      d_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_31);
  c_31 = t;
  t = d_31;
  t = i_101(t);
  e_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, e_31), c_31);
  return(t);
}
ATerm SVar_1_0 (ATerm z_100 (ATerm), ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
  m_31 = t;
  if(match_cons(t, sym_SVar_1))
    {
      k_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_31);
  j_31 = t;
  t = k_31;
  t = z_100(t);
  l_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, l_31), j_31);
  return(t);
}
ATerm PrimT_3_0 (ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
  x_31 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      r_31 = ATgetArgument(t, 0);
      s_31 = ATgetArgument(t, 1);
      t_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_31);
  q_31 = t;
  t = r_31;
  t = g_102(t);
  u_31 = t;
  t = s_31;
  t = h_102(t);
  v_31 = t;
  t = t_31;
  t = i_102(t);
  w_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, u_31, v_31, w_31), q_31);
  return(t);
}
ATerm CallT_3_0 (ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
  i_32 = t;
  if(match_cons(t, sym_CallT_3))
    {
      c_32 = ATgetArgument(t, 0);
      d_32 = ATgetArgument(t, 1);
      e_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_32);
  b_32 = t;
  t = c_32;
  t = e_101(t);
  f_32 = t;
  t = d_32;
  t = f_101(t);
  g_32 = t;
  t = e_32;
  t = g_101(t);
  h_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, f_32, g_32, h_32), b_32);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL;
  ATerm o_32 (ATerm t)
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        {
          ATerm b_20 = t;
          int c_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              ;
              LocalPopChoice(c_20);
            }
          else
            {
              t = b_20;
              {
                ATerm d_20 = t;
                int e_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_5 (ATerm t)
                    {
                      t = SVar_1_0(_id, t);
                      return(t);
                    }
                    t = CallT_3_0(c_5, _id, _id, t);
                    ;
                    LocalPopChoice(e_20);
                  }
                else
                  {
                    t = d_20;
                    {
                      ATerm g_20 = t;
                      int h_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_5 (ATerm t)
                          {
                            t = SVar_1_0(_id, t);
                            return(t);
                          }
                          t = PrimT_3_0(d_5, _id, _id, t);
                          ;
                          LocalPopChoice(h_20);
                        }
                      else
                        {
                          t = g_20;
                          {
                            ATerm i_20 = t;
                            int j_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Build_1_0(_id, t);
                                ;
                                LocalPopChoice(j_20);
                              }
                            else
                              {
                                t = i_20;
                                {
                                  ATerm k_20 = t;
                                  int l_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = Match_1_0(_id, t);
                                      ;
                                      LocalPopChoice(l_20);
                                    }
                                  else
                                    {
                                      t = k_20;
                                      {
                                        ATerm m_20 = t;
                                        int o_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm f_5 (ATerm t)
                                            {
                                              t = Match_1_0(_id, t);
                                              return(t);
                                            }
                                            t = Seq_2_0(f_5, _id, t);
                                            ;
                                            LocalPopChoice(o_20);
                                          }
                                        else
                                          {
                                            t = m_20;
                                            {
                                              ATerm r_20 = t;
                                              int s_20 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm g_5 (ATerm t)
                                                  {
                                                    t = Match_1_0(_id, t);
                                                    return(t);
                                                  }
                                                  t = Scope_2_0(_id, g_5, t);
                                                  ;
                                                  LocalPopChoice(s_20);
                                                }
                                              else
                                                {
                                                  t = r_20;
                                                  {
                                                    ATerm t_20 = t;
                                                    int u_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm j_5 (ATerm t)
                                                        {
                                                          ATerm k_5 (ATerm t)
                                                          {
                                                            t = Match_1_0(_id, t);
                                                            return(t);
                                                          }
                                                          t = Seq_2_0(k_5, _id, t);
                                                          return(t);
                                                        }
                                                        t = Scope_2_0(_id, j_5, t);
                                                        ;
                                                        LocalPopChoice(u_20);
                                                      }
                                                    else
                                                      {
                                                        t = t_20;
                                                        {
                                                          ATerm w_20 = t;
                                                          int y_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_5 (ATerm t)
                                                              {
                                                                ATerm m_5 (ATerm t)
                                                                {
                                                                  ATerm n_5 (ATerm t)
                                                                  {
                                                                    t = Match_1_0(_id, t);
                                                                    return(t);
                                                                  }
                                                                  t = Seq_2_0(n_5, _id, t);
                                                                  return(t);
                                                                }
                                                                t = Scope_2_0(_id, m_5, t);
                                                                return(t);
                                                              }
                                                              t = Seq_2_0(l_5, _id, t);
                                                              ;
                                                              LocalPopChoice(y_20);
                                                            }
                                                          else
                                                            {
                                                              t = w_20;
                                                              {
                                                                ATerm z_20 = t;
                                                                int b_21 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2_0(o_32, o_32, t);
                                                                    ;
                                                                    LocalPopChoice(b_21);
                                                                  }
                                                                else
                                                                  {
                                                                    t = z_20;
                                                                    {
                                                                      ATerm c_21 = t;
                                                                      int d_21 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = LChoice_2_0(o_32, o_32, t);
                                                                          ;
                                                                          LocalPopChoice(d_21);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = c_21;
                                                                          t = GuardedLChoice_3_0(o_32, o_32, o_32, t);
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
  t = o_32(t);
  m_32 = t;
  t = term_size_0_0(t);
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_32, term_i_21);
  t = leq_0_0(t);
  t = m_32;
  return(t);
}
ATerm SDefT_4_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL;
  y_32 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      q_32 = ATgetArgument(t, 0);
      r_32 = ATgetArgument(t, 1);
      s_32 = ATgetArgument(t, 2);
      t_32 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_32);
  p_32 = t;
  t = q_32;
  t = s_103(t);
  u_32 = t;
  t = r_32;
  t = t_103(t);
  v_32 = t;
  t = s_32;
  t = u_103(t);
  w_32 = t;
  t = t_32;
  t = v_103(t);
  x_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, u_32, v_32, w_32, x_32), p_32);
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm j_21 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_21;
      }
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    ATerm d_33 = NULL;
    d_33 = t;
    {
      ATerm k_21 = t;
      if((PushChoice() == 0))
        {
          ATerm q_5 (ATerm t)
          {
            if(match_cons(t, sym_CallT_3))
              {
                ATerm v_21 = ATgetArgument(t, 0);
                if(match_cons(v_21, sym_SVar_1))
                  {
                    ATerm z_21 = ATgetArgument(v_21, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm w_21 = ATgetArgument(t, 1);
                }
                {
                  ATerm x_21 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(q_5, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_21;
        }
      t = d_33;
      t = body_to_inline_0_0(t);
    }
    return(t);
  }
  t = SDefT_4_0(o_5, _id, _id, p_5, t);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,m_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL;
  if(match_cons(t, sym__2))
    {
      m_33 = ATgetArgument(t, 0);
      o_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_33;
  if(match_cons(t, sym_Build_1))
    {
      ATerm a_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_33;
  if(match_cons(t, sym_Where_1))
    {
      p_33 = ATgetArgument(t, 0);
      t = p_33;
      if(match_cons(t, sym_Prim_2))
        {
          j_33 = ATgetArgument(t, 0);
          k_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          p_33 = ATgetArgument(t, 0);
          q_33 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, p_33, q_33);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              p_33 = ATgetArgument(t, 0);
              q_33 = ATgetArgument(t, 1);
              r_33 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm z_116 (ATerm), ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm t)
{
  ATerm z_33 (ATerm t)
  {
    ATerm b_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_116(t);
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = b_22;
        t = a_117(t);
        t = _2_0(c_117, z_33, t);
        t = b_117(t);
      }
    return(t);
  }
  t = z_33(t);
  return(t);
}
ATerm zip_1_0 (ATerm e_117 (ATerm), ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm e_22 = ATgetArgument(t, 0);
        if(((ATgetType(e_22) != AT_LIST) || !(ATisEmpty(e_22))))
          _fail(t);
        {
          ATerm z_22 = ATgetArgument(t, 1);
          if(((ATgetType(z_22) != AT_LIST) || !(ATisEmpty(z_22))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm a_23 = ATgetArgument(t, 0);
        if(((ATgetType(a_23) == AT_LIST) && !(ATisEmpty(a_23))))
          {
            a_34 = ATgetFirst((ATermList) a_23);
            c_34 = (ATerm) ATgetNext((ATermList) a_23);
          }
        else
          _fail(t);
        {
          ATerm b_23 = ATgetArgument(t, 1);
          if(((ATgetType(b_23) == AT_LIST) && !(ATisEmpty(b_23))))
            {
              b_34 = ATgetFirst((ATermList) b_23);
              d_34 = (ATerm) ATgetNext((ATermList) b_23);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_34, b_34), (ATerm) ATmakeAppl(sym__2, c_34, d_34));
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    ATerm e_34 = NULL,f_34 = NULL;
    if(match_cons(t, sym__2))
      {
        e_34 = ATgetArgument(t, 0);
        f_34 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(f_34), e_34);
    return(t);
  }
  t = genzip_4_0(r_5, s_5, t_5, e_117, t);
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_23 = ATgetArgument(t, 0);
      if(match_cons(c_23, sym_Build_1))
        {
          ATerm j_23 = ATgetArgument(c_23, 0);
          if(match_cons(j_23, sym_Op_2))
            {
              h_34 = ATgetArgument(j_23, 0);
              g_34 = ATgetArgument(j_23, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm e_23 = ATgetArgument(t, 1);
        if(match_cons(e_23, sym_Match_1))
          {
            ATerm k_23 = ATgetArgument(e_23, 0);
            if(match_cons(k_23, sym_Op_2))
              {
                if((h_34 != ATgetArgument(k_23, 0)))
                  {
                    _fail(ATgetArgument(k_23, 0));
                  }
                i_34 = ATgetArgument(k_23, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, g_34, i_34);
  {
    ATerm u_5 (ATerm t)
    {
      ATerm k_34 = NULL,l_34 = NULL;
      if(match_cons(t, sym__2))
        {
          k_34 = ATgetArgument(t, 0);
          l_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_34), (ATerm) ATmakeAppl(sym_Match_1, l_34));
      return(t);
    }
    t = zip_1_0(u_5, t);
    j_34 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_34), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_34, g_34)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_23 = ATgetArgument(t, 0);
      if(match_cons(l_23, sym_Build_1))
        {
          ATerm r_23 = ATgetArgument(l_23, 0);
          if(match_cons(r_23, sym_Op_2))
            {
              m_34 = ATgetArgument(r_23, 0);
              {
                ATerm s_23 = ATgetArgument(r_23, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm q_23 = ATgetArgument(t, 1);
        if(match_cons(q_23, sym_Match_1))
          {
            ATerm v_23 = ATgetArgument(q_23, 0);
            if(match_cons(v_23, sym_Op_2))
              {
                n_34 = ATgetArgument(v_23, 0);
                {
                  ATerm z_23 = ATgetArgument(v_23, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, m_34, n_34);
  {
    ATerm a_24 = t;
    if((PushChoice() == 0))
      {
        ATerm o_34 = NULL;
        if(match_cons(t, sym__2))
          {
            o_34 = ATgetArgument(t, 0);
            if((o_34 != ATgetArgument(t, 1)))
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
        t = a_24;
      }
    t = term_c_24;
  }
  return(t);
}
ATerm BMF_0_0 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0_0(t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
        ATerm g_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0_0(t);
            ;
            LocalPopChoice(h_24);
          }
        else
          {
            t = g_24;
            {
              ATerm i_24 = t;
              int n_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_34 = NULL,z_34 = NULL,a_35 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      x_34 = ATgetArgument(t, 0);
                      z_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = x_34;
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm o_24 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = z_34;
                  if(match_cons(t, sym_Build_1))
                    {
                      a_35 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  ;
                  LocalPopChoice(n_24);
                }
              else
                {
                  t = i_24;
                  {
                    ATerm p_24 = t;
                    int c_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0_0(t);
                        ;
                        LocalPopChoice(c_25);
                      }
                    else
                      {
                        t = p_24;
                        {
                          ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              d_35 = ATgetArgument(t, 0);
                              f_35 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = d_35;
                          if(match_cons(t, sym_Match_1))
                            {
                              e_35 = ATgetArgument(t, 0);
                              t = f_35;
                              if(match_cons(t, sym_Match_1))
                                {
                                  g_35 = ATgetArgument(t, 0);
                                  t = g_35;
                                  if((e_35 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, e_35);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      g_35 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = g_35;
                                  if((e_35 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, e_35);
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_Build_1))
                                {
                                  e_35 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = f_35;
                              if(match_cons(t, sym_Match_1))
                                {
                                  g_35 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = g_35;
                              if((e_35 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_Build_1, e_35);
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
  ATerm m_35 = NULL,n_35 = NULL,p_35 = NULL,q_35 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_35 = ATgetArgument(t, 0);
      q_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_35;
  if(match_cons(t, sym_Seq_2))
    {
      m_35 = ATgetArgument(t, 0);
      n_35 = ATgetArgument(t, 1);
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_35 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, p_35, m_35);
            t = BMF_0_0(t);
            u_35 = t;
            t = (ATerm) ATmakeAppl(sym_Seq_2, u_35, n_35);
            ;
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            t = (ATerm) ATmakeAppl(sym__2, p_35, q_35);
            t = BMF_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, p_35, q_35);
      t = BMF_0_0(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm r_113 (ATerm), ATerm t)
{
  ATerm z_35 (ATerm t)
  {
    ATerm h_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_113(t);
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = h_25;
        t = SRTS_one(z_35, t);
      }
    return(t);
  }
  t = z_35(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      if(((ATgetType(n_25) == AT_LIST) && !(ATisEmpty(n_25))))
        {
          ATerm p_25 = ATgetFirst((ATermList) n_25);
          if(match_cons(p_25, sym_SDefT_4))
            {
              b_36 = ATgetArgument(p_25, 0);
              {
                ATerm r_25 = ATgetArgument(p_25, 1);
                if(((ATgetType(r_25) != AT_LIST) || !(ATisEmpty(r_25))))
                  _fail(t);
              }
              {
                ATerm s_25 = ATgetArgument(p_25, 2);
                if(((ATgetType(s_25) != AT_LIST) || !(ATisEmpty(s_25))))
                  _fail(t);
              }
              a_36 = ATgetArgument(p_25, 3);
            }
          else
            _fail(t);
          {
            ATerm q_25 = (ATerm) ATgetNext((ATermList) n_25);
            if(((ATgetType(q_25) != AT_LIST) || !(ATisEmpty(q_25))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm o_25 = ATgetArgument(t, 1);
        if(match_cons(o_25, sym_CallT_3))
          {
            ATerm b_26 = ATgetArgument(o_25, 0);
            if(match_cons(b_26, sym_SVar_1))
              {
                if((b_36 != ATgetArgument(b_26, 0)))
                  {
                    _fail(ATgetArgument(b_26, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm c_26 = ATgetArgument(o_25, 1);
              if(((ATgetType(c_26) != AT_LIST) || !(ATisEmpty(c_26))))
                _fail(t);
            }
            {
              ATerm d_26 = ATgetArgument(o_25, 2);
              if(((ATgetType(d_26) != AT_LIST) || !(ATisEmpty(d_26))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_36;
  {
    ATerm c_27 = t;
    if((PushChoice() == 0))
      {
        ATerm w_5 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm d_27 = ATgetArgument(t, 0);
              if(match_cons(d_27, sym_SVar_1))
                {
                  if((b_36 != ATgetArgument(d_27, 0)))
                    {
                      _fail(ATgetArgument(d_27, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm h_27 = ATgetArgument(t, 1);
                if(((ATgetType(h_27) != AT_LIST) || !(ATisEmpty(h_27))))
                  _fail(t);
              }
              {
                ATerm i_27 = ATgetArgument(t, 2);
                if(((ATgetType(i_27) != AT_LIST) || !(ATisEmpty(i_27))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(w_5, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_27;
      }
    t = a_36;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,q_36 = NULL,r_36 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      q_36 = ATgetArgument(t, 0);
      t = q_36;
      if(match_cons(t, sym_Seq_2))
        {
          o_36 = ATgetArgument(t, 0);
          k_36 = ATgetArgument(t, 1);
          t = o_36;
          if(match_cons(t, sym_Where_1))
            {
              j_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_36;
          if(match_cons(t, sym_Seq_2))
            {
              l_36 = ATgetArgument(t, 0);
              n_36 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_36;
          if(match_cons(t, sym_Build_1))
            {
              m_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, j_36, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_36), n_36)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              o_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          q_36 = ATgetArgument(t, 0);
          t = q_36;
          if(match_cons(t, sym_Test_1))
            {
              o_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              q_36 = ATgetArgument(t, 0);
              t = q_36;
              if(match_cons(t, sym_Not_1))
                {
                  o_36 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, o_36);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  q_36 = ATgetArgument(t, 0);
                  r_36 = ATgetArgument(t, 1);
                  t = r_36;
                  if((q_36 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      q_36 = ATgetArgument(t, 0);
                      r_36 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = r_36;
                  if((q_36 != t))
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
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      f_37 = ATgetArgument(t, 0);
      i_37 = ATgetArgument(t, 1);
      t = f_37;
      if(match_cons(t, sym_LChoice_2))
        {
          g_37 = ATgetArgument(t, 0);
          h_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, g_37, (ATerm) ATmakeAppl(sym_LChoice_2, h_37, i_37));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          f_37 = ATgetArgument(t, 0);
          i_37 = ATgetArgument(t, 1);
          t = f_37;
          if(match_cons(t, sym_Seq_2))
            {
              g_37 = ATgetArgument(t, 0);
              h_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, g_37, (ATerm) ATmakeAppl(sym_Seq_2, h_37, i_37));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              f_37 = ATgetArgument(t, 0);
              i_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_37;
          if(match_cons(t, sym_Choice_2))
            {
              g_37 = ATgetArgument(t, 0);
              h_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, g_37, (ATerm) ATmakeAppl(sym_Choice_2, h_37, i_37));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(l_0, _id, t);
      {
        ATerm x_5 (ATerm t)
        {
          ATerm y_5 (ATerm t)
          {
            t = map1_1_0(l_0, t);
            return(t);
          }
          t = try_1_0(y_5, t);
          return(t);
        }
        t = Cons_2_0(_id, x_5, t);
      }
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      {
        ATerm z_5 (ATerm t)
        {
          t = map1_1_0(l_0, t);
          return(t);
        }
        t = Cons_2_0(_id, z_5, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,b_38 = NULL,c_38 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      b_38 = ATgetArgument(t, 0);
      c_38 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, b_38, c_38);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          b_38 = ATgetArgument(t, 0);
          t = b_38;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_37 = ATgetFirst((ATermList) t);
              x_37 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, w_37, (ATerm) ATmakeAppl(sym_LChoices_1, x_37));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_c_24;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              b_38 = ATgetArgument(t, 0);
              t = b_38;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_37 = ATgetFirst((ATermList) t);
                  x_37 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, w_37, (ATerm) ATmakeAppl(sym_Choices_1, x_37));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_c_24;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  b_38 = ATgetArgument(t, 0);
                  t = b_38;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_37 = ATgetFirst((ATermList) t);
                      x_37 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_37, (ATerm) ATmakeAppl(sym_Seqs_1, x_37));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_l_27;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_38 = ATgetArgument(t, 0);
                      c_38 = ATgetArgument(t, 1);
                      z_37 = ATgetArgument(t, 2);
                      y_37 = ATgetArgument(t, 3);
                      {
                        ATerm g_39 = NULL,p_39 = NULL;
                        t = c_38;
                        {
                          ATerm a_6 (ATerm t)
                          {
                            ATerm w_39 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                w_39 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, w_39, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_27), term_w_27));
                            return(t);
                          }
                          t = map1_1_0(a_6, t);
                          g_39 = t;
                          t = z_37;
                          {
                            ATerm b_6 (ATerm t)
                            {
                              ATerm c_6 (ATerm t)
                              {
                                ATerm b_40 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    b_40 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, b_40, term_w_27);
                                return(t);
                              }
                              t = try_1_0(c_6, t);
                              return(t);
                            }
                            t = map1_1_0(b_6, t);
                            p_39 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, b_38, g_39, p_39, y_37);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          b_38 = ATgetArgument(t, 0);
                          c_38 = ATgetArgument(t, 1);
                          z_37 = ATgetArgument(t, 2);
                          y_37 = ATgetArgument(t, 3);
                          {
                            ATerm x_27 = t;
                            int y_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm n_40 = NULL,o_40 = NULL;
                                t = z_37;
                                {
                                  ATerm d_6 (ATerm t)
                                  {
                                    ATerm p_40 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        p_40 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, p_40, term_w_27);
                                    return(t);
                                  }
                                  t = map1_1_0(d_6, t);
                                  n_40 = t;
                                  t = c_38;
                                  {
                                    ATerm e_6 (ATerm t)
                                    {
                                      ATerm f_6 (ATerm t)
                                      {
                                        ATerm q_40 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            q_40 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_40, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_27), term_w_27));
                                        return(t);
                                      }
                                      t = try_1_0(f_6, t);
                                      return(t);
                                    }
                                    t = map_1_0(e_6, t);
                                    o_40 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, b_38, o_40, n_40, y_37);
                                  }
                                }
                                ;
                                LocalPopChoice(y_27);
                              }
                            else
                              {
                                t = x_27;
                                {
                                  ATerm e_41 = NULL,g_41 = NULL;
                                  t = c_38;
                                  {
                                    ATerm g_6 (ATerm t)
                                    {
                                      ATerm h_41 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          h_41 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, h_41, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_27), term_w_27));
                                      return(t);
                                    }
                                    t = map1_1_0(g_6, t);
                                    e_41 = t;
                                    t = z_37;
                                    {
                                      ATerm h_6 (ATerm t)
                                      {
                                        ATerm i_6 (ATerm t)
                                        {
                                          ATerm j_41 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              j_41 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, j_41, term_w_27);
                                          return(t);
                                        }
                                        t = try_1_0(i_6, t);
                                        return(t);
                                      }
                                      t = map_1_0(h_6, t);
                                      g_41 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, b_38, e_41, g_41, y_37);
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
                              b_38 = ATgetArgument(t, 0);
                              c_38 = ATgetArgument(t, 1);
                              z_37 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, c_38, (ATerm) ATmakeAppl(sym_Op_2, term_z_27, (ATerm) ATinsert(ATinsert(ATempty, z_37), b_38)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  b_38 = ATgetArgument(t, 0);
                                  c_38 = ATgetArgument(t, 1);
                                  z_37 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, z_37)), b_38), (ATerm) ATmakeAppl(sym_Build_1, c_38)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      b_38 = ATgetArgument(t, 0);
                                      c_38 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_38, (ATerm) ATmakeAppl(sym_Match_1, c_38));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          b_38 = ATgetArgument(t, 0);
                                          c_38 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_38), c_38);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              b_38 = ATgetArgument(t, 0);
                                              c_38 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_38), b_38);
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
  ATerm a_42 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      ATerm a_28 = ATgetArgument(t, 0);
      a_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_42;
  {
    ATerm j_6 (ATerm t)
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      return(t);
    }
    t = fetch_1_0(j_6, t);
    t = term_c_24;
  }
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_42 = NULL,w_42 = NULL;
      if(match_cons(t, sym_Test_1))
        {
          v_42 = ATgetArgument(t, 0);
          t = v_42;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              v_42 = ATgetArgument(t, 0);
              t = v_42;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_l_27;
            }
          else
            {
              ATerm p_28 = t;
              int q_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      v_42 = ATgetArgument(t, 0);
                      {
                        ATerm i_29 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_28);
                  t = v_42;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                }
              else
                {
                  t = p_28;
                  {
                    ATerm j_29 = t;
                    int k_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm r_29 = ATgetArgument(t, 0);
                            w_42 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(k_29);
                        t = w_42;
                        if(!(match_cons(t, sym_Fail_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = j_29;
                        {
                          ATerm s_29 = t;
                          int t_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm a_30 = ATgetArgument(t, 0);
                                  w_42 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(t_29);
                              t = w_42;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = s_29;
                              if(match_cons(t, sym_Some_1))
                                {
                                  v_42 = ATgetArgument(t, 0);
                                  t = v_42;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_One_1))
                                    {
                                      v_42 = ATgetArgument(t, 0);
                                      t = v_42;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm b_30 = ATgetArgument(t, 0);
                                          w_42 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = w_42;
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
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      {
        ATerm c_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F10_0_0(t);
            ;
            LocalPopChoice(h_30);
          }
        else
          {
            t = c_30;
            {
              ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
              if(match_cons(t, sym_Choice_2))
                {
                  y_42 = ATgetArgument(t, 0);
                  z_42 = ATgetArgument(t, 1);
                  t = z_42;
                  if(match_cons(t, sym_Fail_0))
                    {
                      t = y_42;
                      if(match_cons(t, sym_Fail_0))
                        {
                          ATerm i_30 = t;
                          int j_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = z_42;
                              ;
                              LocalPopChoice(j_30);
                            }
                          else
                            {
                              t = i_30;
                              t = y_42;
                            }
                        }
                      else
                        {
                          t = y_42;
                        }
                    }
                  else
                    {
                      t = y_42;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = z_42;
                    }
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      y_42 = ATgetArgument(t, 0);
                      z_42 = ATgetArgument(t, 1);
                      t = z_42;
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = y_42;
                          if(match_cons(t, sym_Fail_0))
                            {
                              ATerm q_30 = t;
                              int r_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = z_42;
                                  ;
                                  LocalPopChoice(r_30);
                                }
                              else
                                {
                                  t = q_30;
                                  t = y_42;
                                }
                            }
                          else
                            {
                              t = y_42;
                            }
                        }
                      else
                        {
                          t = y_42;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = z_42;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Where_1))
                        {
                          y_42 = ATgetArgument(t, 0);
                          t = y_42;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_GuardedLChoice_3))
                            {
                              y_42 = ATgetArgument(t, 0);
                              z_42 = ATgetArgument(t, 1);
                              a_43 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = a_43;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_42, z_42);
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
  ATerm y_43 = NULL,a_44 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      a_44 = ATgetArgument(t, 0);
      t = a_44;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          a_44 = ATgetArgument(t, 0);
          t = a_44;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_c_24;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              a_44 = ATgetArgument(t, 0);
              y_43 = ATgetArgument(t, 1);
              t = y_43;
              if(match_cons(t, sym_Id_0))
                {
                  t = a_44;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm s_30 = t;
                      int z_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_43;
                          ;
                          LocalPopChoice(z_30);
                        }
                      else
                        {
                          t = s_30;
                          t = a_44;
                        }
                    }
                  else
                    {
                      t = a_44;
                    }
                }
              else
                {
                  t = a_44;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = y_43;
                }
            }
          else
            {
              ATerm a_31 = t;
              int b_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      a_44 = ATgetArgument(t, 0);
                      {
                        ATerm g_31 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(b_31);
                  t = a_44;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = a_31;
                  {
                    ATerm h_31 = t;
                    int i_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm n_31 = ATgetArgument(t, 0);
                            y_43 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(i_31);
                        t = y_43;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = h_31;
                        {
                          ATerm o_31 = t;
                          int p_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm y_31 = ATgetArgument(t, 0);
                                  y_43 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(p_31);
                              t = y_43;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = o_31;
                              if(match_cons(t, sym_All_1))
                                {
                                  a_44 = ATgetArgument(t, 0);
                                  t = a_44;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      a_44 = ATgetArgument(t, 0);
                                      t = a_44;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          a_44 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = a_44;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_l_27;
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
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(a_32);
    }
  else
    {
      t = z_31;
      {
        ATerm j_32 = t;
        int k_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(k_32);
          }
        else
          {
            t = j_32;
            {
              ATerm l_32 = t;
              int z_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(z_32);
                }
              else
                {
                  t = l_32;
                  {
                    ATerm a_33 = t;
                    int b_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(b_33);
                      }
                    else
                      {
                        t = a_33;
                        {
                          ATerm c_33 = t;
                          int e_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(e_33);
                            }
                          else
                            {
                              t = c_33;
                              {
                                ATerm f_33 = t;
                                int g_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_44 = NULL,k_44 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        j_44 = ATgetArgument(t, 0);
                                        k_44 = ATgetArgument(t, 1);
                                        t = j_44;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = k_44;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            j_44 = ATgetArgument(t, 0);
                                            k_44 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = j_44;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = k_44;
                                      }
                                    ;
                                    LocalPopChoice(g_33);
                                  }
                                else
                                  {
                                    t = f_33;
                                    {
                                      ATerm h_33 = t;
                                      int i_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(i_33);
                                        }
                                      else
                                        {
                                          t = h_33;
                                          {
                                            ATerm l_33 = t;
                                            int n_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(n_33);
                                              }
                                            else
                                              {
                                                t = l_33;
                                                {
                                                  ATerm w_1 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      ATerm s_33 = ATgetArgument(t, 0);
                                                      if(!(match_cons(s_33, sym_Wld_0)))
                                                        _fail(t);
                                                      w_1 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = w_1;
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
ATerm repeat_1_0 (ATerm i_129 (ATerm), ATerm t)
{
  ATerm n_44 (ATerm t)
  {
    ATerm k_6 (ATerm t)
    {
      t = i_129(t);
      t = n_44(t);
      return(t);
    }
    t = try_1_0(k_6, t);
    return(t);
  }
  t = n_44(t);
  return(t);
}
ATerm downup_1_0 (ATerm p_112 (ATerm), ATerm t)
{
  t = p_112(t);
  {
    ATerm l_6 (ATerm t)
    {
      t = downup_1_0(p_112, t);
      return(t);
    }
    t = SRTS_all(l_6, t);
    t = p_112(t);
  }
  return(t);
}
ATerm simplify0_0_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    t = repeat_1_0(Simplify_0_0, t);
    return(t);
  }
  t = downup_1_0(m_6, t);
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    t = simplify0_0_0(t);
    {
      ATerm o_6 (ATerm t)
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        return(t);
      }
      t = try_1_0(o_6, t);
    }
    return(t);
  }
  t = map_1_0(n_6, t);
  t = map_1_0(inline_sdef_0_0, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm s_96 (ATerm), ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL;
  r_44 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      p_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_44);
  o_44 = t;
  t = p_44;
  t = s_96(t);
  q_44 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, q_44), o_44);
  return(t);
}
ATerm Specification_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL;
  y_44 = t;
  if(match_cons(t, sym_Specification_1))
    {
      w_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_44);
  v_44 = t;
  t = w_44;
  t = x_96(t);
  x_44 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, x_44), v_44);
  return(t);
}
ATerm inline_strategies_0_0 (ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    ATerm q_6 (ATerm t)
    {
      ATerm r_6 (ATerm t)
      {
        t = Strategies_1_0(inline_sdefs_0_0, t);
        return(t);
      }
      ATerm s_6 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Cons_2_0(r_6, s_6, t);
      return(t);
    }
    t = Cons_2_0(_id, q_6, t);
    return(t);
  }
  t = Specification_1_0(p_6, t);
  return(t);
}
ATerm _2_0 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL;
  h_45 = t;
  if(match_cons(t, sym__2))
    {
      d_45 = ATgetArgument(t, 0);
      e_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_45);
  c_45 = t;
  t = d_45;
  t = l_94(t);
  f_45 = t;
  t = e_45;
  t = m_94(t);
  g_45 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, f_45, g_45), c_45);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL;
  l_45 = t;
  t = term_a_16;
  t = whoami_0_0(t);
  m_45 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), m_45), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = l_45;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_33);
    }
  else
    {
      t = t_33;
      {
        ATerm p_45 = NULL,q_45 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_45 = ATgetFirst((ATermList) t);
            q_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_45;
        {
          ATerm t_6 (ATerm t)
          {
            t = q_45;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(t_6, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL;
  u_45 = t;
  t = SSL_explode_term(u_45);
  if(match_cons(t, sym__2))
    {
      ATerm v_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_45;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_119 (ATerm), ATerm t)
{
  ATerm w_45 (ATerm t)
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_45, t);
        ;
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_119(t);
      }
    return(t);
  }
  t = w_45(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL;
  if(match_cons(t, sym__2))
    {
      y_45 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_45;
  {
    ATerm u_6 (ATerm t)
    {
      t = x_45;
      return(t);
    }
    t = at_end_1_0(u_6, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_33 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(p_34);
    }
  else
    {
      t = y_33;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm z_45 = NULL;
  ATerm v_6 (ATerm t)
  {
    ATerm a_46 = NULL;
    a_46 = t;
    t = SSL_explode_string(a_46);
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    ATerm b_46 = NULL;
    b_46 = t;
    t = SSL_explode_string(b_46);
    return(t);
  }
  t = _2_0(v_6, w_6, t);
  t = conc_0_0(t);
  z_45 = t;
  t = SSL_implode_string(z_45);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_46 = NULL;
      h_46 = t;
      t = SSL_is_string(h_46);
      ;
      LocalPopChoice(r_34);
    }
  else
    {
      t = q_34;
      {
        ATerm s_34 = t;
        int t_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_6 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(x_6, t);
            ;
            LocalPopChoice(t_34);
          }
        else
          {
            t = s_34;
            {
              ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL;
              l_46 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_46 = ATgetArgument(t, 0);
                  t = m_46;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_46 = ATgetArgument(t, 0);
                      t = m_46;
                      {
                        ATerm u_34 = t;
                        int v_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(v_34);
                          }
                        else
                          {
                            t = u_34;
                            {
                              ATerm y_6 (ATerm t)
                              {
                                t = term_w_34;
                                return(t);
                              }
                              t = debug_1_0(y_6, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm r_46 = NULL,s_46 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_46 = ATgetArgument(t, 0);
                          n_46 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_46;
                      t = eval_config_0_0(t);
                      r_46 = t;
                      t = n_46;
                      t = eval_config_0_0(t);
                      s_46 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_46, s_46);
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
  ATerm v_46 = NULL;
  v_46 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_46);
  {
    ATerm z_6 (ATerm t)
    {
      ATerm w_46 = NULL;
      t = eval_config_0_0(t);
      w_46 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_46, w_46);
      t = w_46;
      return(t);
    }
    t = try_1_0(z_6, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_132 (ATerm), ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm x_46 = NULL,y_46 = NULL;
    x_46 = t;
    t = term_y_34;
    t = get_config_0_0(t);
    y_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_46, term_b_35);
    t = geq_0_0(t);
    t = x_46;
    t = s_132(t);
    return(t);
  }
  t = try_1_0(a_7, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm b_7 (ATerm t)
  {
    ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm c_35 = ATgetArgument(t, 0);
        if(match_cons(c_35, sym_Stream_1))
          {
            z_46 = ATgetArgument(c_35, 0);
          }
        else
          _fail(t);
        a_47 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(z_46, a_47);
    b_47 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), b_47);
    c_47 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, c_47);
    return(t);
  }
  t = WriteToFile_1_0(b_7, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm w_139 (ATerm), ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL;
  if(match_cons(t, sym__2))
    {
      d_47 = ATgetArgument(t, 0);
      e_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_47, term_h_35);
  t = open_stream_0_0(t);
  f_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_47, e_47);
  t = w_139(t);
  t = fclose_0_0(t);
  t = e_47;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm i_35 = ATgetArgument(t, 0);
        if(match_cons(i_35, sym_Stream_1))
          {
            g_47 = ATgetArgument(i_35, 0);
          }
        else
          _fail(t);
        h_47 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(g_47, h_47);
    i_47 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, i_47);
    return(t);
  }
  t = WriteToFile_1_0(c_7, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL;
  j_47 = t;
  {
    ATerm d_7 (ATerm t)
    {
      ATerm j_35 = t;
      int k_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_7 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                k_47 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(e_7, t);
          ;
          LocalPopChoice(k_35);
        }
      else
        {
          t = j_35;
          t = term_l_35;
          k_47 = t;
        }
      return(t);
    }
    t = _2_0(d_7, _id, t);
    t = j_47;
    {
      ATerm f_7 (ATerm t)
      {
        ATerm g_7 (ATerm t)
        {
          t = not_null(k_47);
          return(t);
        }
        t = split_2_0(g_7, _id, t);
        return(t);
      }
      t = _2_0(_id, f_7, t);
      {
        ATerm o_35 = t;
        int r_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_7 (ATerm t)
            {
              ATerm i_7 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(i_7, t);
              return(t);
            }
            t = _2_0(h_7, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(r_35);
          }
        else
          {
            t = o_35;
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
ATerm apply_strategy_1_0 (ATerm l_134 (ATerm), ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
  q_47 = t;
  t = dtime_0_0(t);
  t = q_47;
  t = l_134(t);
  r_47 = t;
  t = dtime_0_0(t);
  s_47 = t;
  t = r_47;
  if(match_cons(t, sym__2))
    {
      t_47 = ATgetArgument(t, 0);
      u_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_47), (ATerm) ATmakeAppl(sym_Runtime_1, s_47)), u_47);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_48 (ATerm c_48, ATerm t)
  {
    t = SSL_fclose(c_48);
    return(t);
  }
  ATerm h_48 = NULL,i_48 = NULL;
  i_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_48 = ATgetArgument(t, 0);
      {
        ATerm s_35 = t;
        int t_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_48);
            ;
            LocalPopChoice(t_35);
          }
        else
          {
            t = s_35;
            t = k_48(i_48, t);
          }
      }
    }
  else
    {
      t = k_48(i_48, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm i_139 (ATerm), ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL;
  l_48 = t;
  t = i_139(t);
  m_48 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_48), m_48));
  t = l_48;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_48 = NULL;
  t = SSL_stdin_stream();
  n_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_48);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_48 = NULL;
  t = SSL_stdout_stream();
  o_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_48);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_48 = NULL;
  t = SSL_stderr_stream();
  p_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_48);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm r_48 = NULL;
  r_48 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_48;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_48;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_48;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_35 = ATgetArgument(t, 0);
      ATerm w_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL,j_2 = NULL;
        i_2 = t;
        t = SSL_explode_term(i_2);
        if(match_cons(t, sym__2))
          {
            ATerm c_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_36) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_36 = ATgetArgument(t, 1);
              if(((ATgetType(d_36) == AT_LIST) && !(ATisEmpty(d_36))))
                {
                  j_2 = ATgetFirst((ATermList) d_36);
                  {
                    ATerm e_36 = (ATerm) ATgetNext((ATermList) d_36);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = j_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(y_35);
      }
    else
      {
        t = x_35;
        {
          ATerm f_36 = t;
          int g_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL;
              ATerm j_7 (ATerm t)
              {
                ATerm x_48 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    x_48 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = x_48;
                return(t);
              }
              t = _2_0(j_7, _id, t);
              if(match_cons(t, sym__2))
                {
                  u_48 = ATgetArgument(t, 0);
                  v_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(u_48, v_48);
              w_48 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, w_48);
              ;
              LocalPopChoice(g_36);
            }
          else
            {
              t = f_36;
              {
                ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL;
                ATerm k_7 (ATerm t)
                {
                  ATerm b_49 = NULL;
                  b_49 = t;
                  t = SSL_is_string(b_49);
                  return(t);
                }
                t = _2_0(k_7, _id, t);
                if(match_cons(t, sym__2))
                  {
                    y_48 = ATgetArgument(t, 0);
                    z_48 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(y_48, z_48);
                a_49 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, a_49);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_49 = NULL;
      f_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_49, term_p_36);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_36);
    }
  else
    {
      t = h_36;
      {
        ATerm l_7 (ATerm t)
        {
          t = term_s_36;
          return(t);
        }
        t = debug_1_0(l_7, t);
        _fail(t);
      }
    }
  c_49 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(e_49);
  d_49 = t;
  t = c_49;
  t = fclose_0_0(t);
  t = d_49;
  return(t);
}
ATerm split_2_0 (ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
  h_49 = t;
  t = z_115(t);
  i_49 = t;
  t = h_49;
  t = a_116(t);
  j_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_49, j_49);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm k_49 = NULL,p_49 = NULL;
  k_49 = t;
  {
    ATerm t_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_7 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              p_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(m_7, t);
        ;
        LocalPopChoice(u_36);
      }
    else
      {
        t = t_36;
        t = term_v_36;
        p_49 = t;
      }
    t = k_49;
    {
      ATerm n_7 (ATerm t)
      {
        t = not_null(p_49);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, n_7, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm u_49 = NULL;
    u_49 = t;
    if(match_string(t, "-k"))
      {
        t = u_49;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = u_49;
      }
    return(t);
  }
  ATerm p_7 (ATerm t)
  {
    ATerm x_49 = NULL,y_49 = NULL;
    x_49 = t;
    t = SSL_string_to_int(x_49);
    y_49 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), y_49);
    t = x_49;
    return(t);
  }
  ATerm q_7 (ATerm t)
  {
    t = term_w_36;
    return(t);
  }
  t = ArgOption_3_0(o_7, p_7, q_7, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_36 = t;
  int y_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_7 (ATerm t)
      {
        ATerm a_50 = NULL;
        a_50 = t;
        if(match_string(t, "-S"))
          {
            t = a_50;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = a_50;
          }
        return(t);
      }
      ATerm s_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_z_36;
        return(t);
      }
      ATerm t_7 (ATerm t)
      {
        t = term_a_37;
        return(t);
      }
      t = Option_3_0(r_7, s_7, t_7, t);
      ;
      LocalPopChoice(y_36);
    }
  else
    {
      t = x_36;
      {
        ATerm b_37 = t;
        int c_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_7 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm v_7 (ATerm t)
            {
              ATerm b_50 = NULL,c_50 = NULL;
              b_50 = t;
              t = SSL_string_to_int(b_50);
              c_50 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_50);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, b_50);
              return(t);
            }
            ATerm w_7 (ATerm t)
            {
              t = term_d_37;
              return(t);
            }
            t = ArgOption_3_0(u_7, v_7, w_7, t);
            ;
            LocalPopChoice(c_37);
          }
        else
          {
            t = b_37;
            {
              ATerm x_7 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm y_7 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_e_37;
                return(t);
              }
              ATerm z_7 (ATerm t)
              {
                t = term_j_37;
                return(t);
              }
              t = Option_3_0(x_7, y_7, z_7, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm k_37 = t;
  int l_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(l_37);
    }
  else
    {
      t = k_37;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    ATerm e_50 = NULL;
    e_50 = t;
    if(match_string(t, "-o"))
      {
        t = e_50;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = e_50;
      }
    return(t);
  }
  ATerm b_8 (ATerm t)
  {
    ATerm f_50 = NULL;
    f_50 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), f_50);
    t = (ATerm) ATmakeAppl(sym_Output_1, f_50);
    return(t);
  }
  ATerm c_8 (ATerm t)
  {
    t = term_m_37;
    return(t);
  }
  t = ArgOption_3_0(a_8, b_8, c_8, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm n_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(o_37);
    }
  else
    {
      t = n_37;
      {
        ATerm d_8 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm e_8 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_p_37;
          return(t);
        }
        ATerm f_8 (ATerm t)
        {
          t = term_q_37;
          return(t);
        }
        t = Option_3_0(d_8, e_8, f_8, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL;
  i_50 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = i_50;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm q_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_50 = ATgetFirst((ATermList) t);
          k_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_50 = ATgetFirst((ATermList) t);
          m_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_50;
      t = h_0(t);
      t = l_50;
      t = i_0(t);
      q_50 = t;
      t = (ATerm) ATinsert(CheckATermList(m_50), q_50);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm g_8 (ATerm t)
  {
    ATerm s_50 = NULL;
    s_50 = t;
    if(match_string(t, "-i"))
      {
        t = s_50;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = s_50;
      }
    return(t);
  }
  ATerm h_8 (ATerm t)
  {
    ATerm t_50 = NULL;
    t_50 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), t_50);
    t = (ATerm) ATmakeAppl(sym_Input_1, t_50);
    return(t);
  }
  ATerm i_8 (ATerm t)
  {
    t = term_r_37;
    return(t);
  }
  t = ArgOption_3_0(g_8, h_8, i_8, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(t_37);
    }
  else
    {
      t = s_37;
      {
        ATerm u_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(v_37);
          }
        else
          {
            t = u_37;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_16;
  t = whoami_0_0(t);
  u_50 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), u_50));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_38;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm t)
{
  ATerm d_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_123(t);
      ;
      LocalPopChoice(e_38);
    }
  else
    {
      t = d_38;
      {
        ATerm b_51 = NULL,c_51 = NULL,f_51 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_51 = ATgetFirst((ATermList) t);
            c_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_51;
        t = foldr_2_0(n_123, o_123, t);
        f_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_51, f_51);
        t = o_123(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  g_51 = t;
  t = SSL_explode_term(g_51);
  if(match_cons(t, sym__2))
    {
      ATerm f_38 = ATgetArgument(t, 0);
      h_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_51;
  t = foldr_2_0(l_121, m_121, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_51 = NULL;
  t = times_0_0(t);
  {
    ATerm j_8 (ATerm t)
    {
      t = term_r_10;
      return(t);
    }
    ATerm k_8 (ATerm t)
    {
      ATerm j_51 = NULL,k_51 = NULL;
      if(match_cons(t, sym__2))
        {
          j_51 = ATgetArgument(t, 0);
          k_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm g_38 = t;
        int h_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(j_51, k_51);
            ;
            LocalPopChoice(h_38);
          }
        else
          {
            t = g_38;
            t = SSL_addr(j_51, k_51);
          }
      }
      return(t);
    }
    t = crush_2_0(j_8, k_8, t);
    i_51 = t;
    t = SSL_TicksToSeconds(i_51);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  t_51 = t;
  if(match_cons(t, sym__2))
    {
      u_51 = ATgetArgument(t, 0);
      v_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_51;
        if((u_51 != t))
          {
            _fail(t);
          }
        t = t_51;
        ;
        LocalPopChoice(j_38);
      }
    else
      {
        t = i_38;
        t = t_51;
        {
          ATerm k_38 = t;
          int l_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_51, v_51);
              ;
              LocalPopChoice(l_38);
            }
          else
            {
              t = k_38;
              t = SSL_gtr(u_51, v_51);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_51, v_51);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_132 (ATerm), ATerm t)
{
  ATerm l_8 (ATerm t)
  {
    ATerm y_51 = NULL,z_51 = NULL;
    y_51 = t;
    t = term_y_34;
    t = get_config_0_0(t);
    z_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_51, term_u_10);
    t = geq_0_0(t);
    t = y_51;
    t = r_132(t);
    return(t);
  }
  t = try_1_0(l_8, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    ATerm b_52 = NULL,c_52 = NULL;
    t = run_time_0_0(t);
    b_52 = t;
    t = term_a_16;
    t = whoami_0_0(t);
    c_52 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), b_52), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), c_52));
    t = (ATerm) ATmakeAppl(sym__2, term_m_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_38), b_52), term_n_38), c_52));
    return(t);
  }
  t = if_verbose1_1_0(m_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm j_135 (ATerm), ATerm t)
{
  ATerm p_38 = t;
  int q_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_38;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_38);
    }
  else
    {
      t = p_38;
      {
        ATerm n_8 (ATerm t)
        {
          ATerm s_38 = t;
          int t_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(t_38);
            }
          else
            {
              t = s_38;
              {
                ATerm u_38 = t;
                int v_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(v_38);
                  }
                else
                  {
                    t = u_38;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(n_8, t);
      }
    }
  t = j_135(t);
  return(t);
}
ATerm map_1_0 (ATerm o_118 (ATerm), ATerm t)
{
  ATerm e_52 (ATerm t)
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(x_38);
      }
    else
      {
        t = w_38;
        t = Cons_2_0(o_118, e_52, t);
      }
    return(t);
  }
  t = e_52(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_52 = ATgetFirst((ATermList) t);
      h_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_52 = NULL,m_52 = NULL;
        t = h_52;
        t = f_0(t);
        l_52 = t;
        t = g_52;
        t = e_0(t);
        m_52 = t;
        t = h_52;
        {
          ATerm o_8 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(l_52), m_52);
            return(t);
          }
          t = reverse_acc_2_0(e_0, o_8, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_16;
      t = f_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm p_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, p_8, t);
  return(t);
}
ATerm Program_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL;
  q_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_52);
  n_52 = t;
  t = o_52;
  t = d_109(t);
  p_52 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, p_52), n_52);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_38;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_38);
    }
  else
    {
      t = y_38;
      {
        ATerm q_8 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(q_8, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_a_39;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm r_8 (ATerm t)
    {
      ATerm u_52 = NULL;
      u_52 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, u_52), term_b_39);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(r_8, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL;
  y_52 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      w_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_52);
  v_52 = t;
  t = w_52;
  t = e_109(t);
  x_52 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, x_52), v_52);
  return(t);
}
ATerm fetch_1_0 (ATerm y_118 (ATerm), ATerm t)
{
  ATerm c_53 (ATerm t)
  {
    ATerm c_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_118, _id, t);
        ;
        LocalPopChoice(d_39);
      }
    else
      {
        t = c_39;
        t = Cons_2_0(_id, c_53, t);
      }
    return(t);
  }
  t = c_53(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm j_136 (ATerm), ATerm t)
{
  t = fetch_1_0(j_136, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL;
  e_53 = t;
  {
    ATerm e_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_53;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_39 = ATgetFirst((ATermList) t);
                ATerm i_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_53;
          }
        ;
        LocalPopChoice(f_39);
      }
    else
      {
        t = e_39;
        t = (ATerm) ATinsert(ATempty, e_53);
      }
    f_53 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), f_53);
    t = e_53;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_38;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm f_115 (ATerm), ATerm t)
{
  ATerm j_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_115(t);
      ;
      LocalPopChoice(k_39);
    }
  else
    {
      t = j_39;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_8 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm t_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_q_39;
        return(t);
      }
      ATerm u_8 (ATerm t)
      {
        t = term_r_39;
        return(t);
      }
      t = Option_3_0(s_8, t_8, u_8, t);
      ;
      LocalPopChoice(m_39);
    }
  else
    {
      t = l_39;
      {
        ATerm v_8 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm w_8 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_s_39;
          return(t);
        }
        ATerm x_8 (ATerm t)
        {
          t = term_t_39;
          return(t);
        }
        t = Option_3_0(v_8, w_8, x_8, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL;
  if(match_cons(t, sym__3))
    {
      l_53 = ATgetArgument(t, 0);
      m_53 = ATgetArgument(t, 1);
      n_53 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_53, m_53);
  {
    ATerm u_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_39 = ATgetArgument(t, 0);
            ATerm y_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_53, m_53);
        ;
        LocalPopChoice(v_39);
      }
    else
      {
        t = u_39;
        t = (ATerm) ATempty;
      }
    o_53 = t;
    t = SSL_table_put(l_53, m_53, (ATerm) ATinsert(CheckATermList(o_53), n_53));
    t = (ATerm) ATmakeAppl(sym__3, l_53, m_53, n_53);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm o_137 (ATerm), ATerm t)
{
  ATerm t_53 = NULL;
  t = term_a_16;
  t = o_137(t);
  t_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_39, term_a_40, t_53);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL;
  v_53 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = v_53;
      t = register_usage_1_0(c_0, t);
    }
  else
    {
      ATerm a_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_53 = ATgetFirst((ATermList) t);
          x_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_53;
      t = a_0(t);
      t = term_a_16;
      t = b_0(t);
      a_54 = t;
      t = (ATerm) ATinsert(CheckATermList(x_53), a_54);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm y_8 (ATerm t)
  {
    ATerm c_54 = NULL;
    c_54 = t;
    if(match_string(t, "--help"))
      {
        t = c_54;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = c_54;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = c_54;
          }
      }
    return(t);
  }
  ATerm z_8 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_c_40;
    return(t);
  }
  ATerm a_9 (ATerm t)
  {
    t = term_d_40;
    return(t);
  }
  t = Option_3_0(y_8, z_8, a_9, t);
  return(t);
}
ATerm Cons_2_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,t_54 = NULL;
  t_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_54 = ATgetFirst((ATermList) t);
      f_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_54);
  d_54 = t;
  t = e_54;
  t = u_95(t);
  g_54 = t;
  t = f_54;
  t = v_95(t);
  h_54 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(h_54), g_54), d_54);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_137 (ATerm), ATerm t)
{
  ATerm i_55 = NULL;
  i_55 = t;
  {
    ATerm b_9 (ATerm t)
    {
      t = term_e_40;
      t = m_137(t);
      return(t);
    }
    t = try_1_0(b_9, t);
    t = i_55;
    {
      ATerm c_9 (ATerm t)
      {
        ATerm j_55 = NULL;
        j_55 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_55);
        t = (ATerm) ATmakeAppl(sym_Program_1, j_55);
        return(t);
      }
      ATerm d_9 (ATerm t)
      {
        ATerm f_40 = t;
        int g_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_40 = t;
            int i_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(i_40);
              }
            else
              {
                t = h_40;
                t = m_137(t);
                t = Cons_2_0(_id, d_9, t);
              }
            ;
            LocalPopChoice(g_40);
          }
        else
          {
            t = f_40;
            {
              ATerm l_55 = NULL,m_55 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_55 = ATgetFirst((ATermList) t);
                  m_55 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_55), (ATerm) ATmakeAppl(sym_Undefined_1, l_55));
            }
          }
        return(t);
      }
      t = Cons_2_0(c_9, d_9, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm l_137 (ATerm), ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL;
  s_55 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = s_55;
  {
    ATerm e_9 (ATerm t)
    {
      ATerm j_40 = t;
      int k_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_137(t);
          ;
          LocalPopChoice(k_40);
        }
      else
        {
          t = j_40;
          {
            ATerm l_40 = t;
            int m_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(m_40);
              }
            else
              {
                t = l_40;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_9, t);
    {
      ATerm f_9 (ATerm t)
      {
        ATerm r_40 = t;
        int s_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_55 = NULL;
            z_55 = t;
            {
              ATerm t_40 = t;
              int u_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_55;
                  {
                    ATerm v_40 = t;
                    int w_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_r_38;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(w_40);
                      }
                    else
                      {
                        t = v_40;
                        {
                          ATerm g_9 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(g_9, t);
                        }
                      }
                    t = z_55;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(u_40);
                }
              else
                {
                  t = t_40;
                  t = term_o_39;
                  t = get_config_0_0(t);
                  t = z_55;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(s_40);
          }
        else
          {
            t = r_40;
            {
              ATerm h_9 (ATerm t)
              {
                ATerm i_9 (ATerm t)
                {
                  t_55 = t;
                  return(t);
                }
                t = Undefined_1_0(i_9, t);
                return(t);
              }
              t = option_defined_1_0(h_9, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_55)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_m_38, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_55)), term_x_40));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(f_9, t);
      u_55 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = u_55;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_135 (ATerm), ATerm m_135 (ATerm), ATerm n_135 (ATerm), ATerm o_135 (ATerm), ATerm t)
{
  ATerm v_5 = NULL;
  t = parse_options_1_0(l_135, t);
  v_5 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), v_5);
  t = v_5;
  t = n_135(t);
  {
    ATerm y_40 = t;
    int z_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_135, t);
        ;
        LocalPopChoice(z_40);
      }
    else
      {
        t = y_40;
        {
          ATerm a_41 = t;
          int b_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_135(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_41);
            }
          else
            {
              t = a_41;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm a_135 (ATerm), ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t)
{
  ATerm j_9 (ATerm t)
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_135(t);
        ;
        LocalPopChoice(d_41);
      }
    else
      {
        t = c_41;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm k_9 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(a_135, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(j_9, c_135, d_135, k_9, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm u_134 (ATerm), ATerm v_134 (ATerm), ATerm w_134 (ATerm), ATerm t)
{
  ATerm l_9 (ATerm t)
  {
    ATerm m_9 (ATerm t)
    {
      ATerm c_56 = NULL,d_56 = NULL;
      c_56 = t;
      t = term_a_38;
      t = get_config_0_0(t);
      d_56 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, d_56));
      t = c_56;
      return(t);
    }
    t = if_verbose2_1_0(m_9, t);
    return(t);
  }
  t = iowrap_4_0(u_134, v_134, w_134, l_9, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm s_134 (ATerm), ATerm t_134 (ATerm), ATerm t)
{
  t = iowrap_3_0(s_134, t_134, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm p_134 (ATerm), ATerm t)
{
  ATerm n_9 (ATerm t)
  {
    t = _2_0(_id, p_134, t);
    return(t);
  }
  t = iowrap_2_0(n_9, _fail, t);
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
