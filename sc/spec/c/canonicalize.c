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
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_As_2;
Symbol sym_RDefT_4;
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
Symbol sym_Bagof_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
Symbol sym_Some_1;
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
Symbol sym_Id_1;
Symbol sym_FunType_2;
Symbol sym_Undefined_0;
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
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
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
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
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_b_21;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_k_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_z_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_h_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_r_15;
ATerm term_n_14;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_j_12;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_y_7;
void init_constant_terms (void)
{
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Op_2, term_o_9, (ATerm) ATempty);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_ConstType_1, term_p_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_CallT_3, term_q_13, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_CallT_3, term_t_13, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__3, term_k_19, term_w_19, term_n_14);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm BuildPrim_0_0 (ATerm);
ATerm zip_1_0 (ATerm w_129 (ATerm), ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BMF_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm b_123 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm F10_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm downup_1_0 (ATerm z_121 (ATerm), ATerm);
ATerm simplify0_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm CreateDef2_0_0 (ATerm);
ATerm SVar_1_0 (ATerm p_103 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm);
ATerm unzip_1_0 (ATerm b_130 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm p_123 (ATerm), ATerm);
ATerm Canon_0_0 (ATerm);
ATerm repeat_1_0 (ATerm z_120 (ATerm), ATerm);
ATerm downup2_2_0 (ATerm c_122 (ATerm), ATerm d_122 (ATerm), ATerm);
ATerm _2_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm e_128 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm v_140 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm r_139 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm t_142 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm d_139 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm e_135 (ATerm), ATerm f_135 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm);
ATerm crush_2_0 (ATerm i_137 (ATerm), ATerm j_137 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm u_140 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm r_143 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_127 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm q_107 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm r_107 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm y_127 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm r_144 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm d_120 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm w_145 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm u_145 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm t_145 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm t_143 (ATerm), ATerm u_143 (ATerm), ATerm v_143 (ATerm), ATerm w_143 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm l_143 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm c_143 (ATerm), ATerm d_143 (ATerm), ATerm e_143 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm a_143 (ATerm), ATerm b_143 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm x_142 (ATerm), ATerm);
ATerm canonicalize_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,g_1 = NULL,l_1 = NULL,n_1 = NULL,t_1 = NULL,u_1 = NULL;
  if(match_cons(t, sym__2))
    {
      g_1 = ATgetArgument(t, 0);
      l_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_1;
  if(match_cons(t, sym_Build_1))
    {
      ATerm d_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_1;
  if(match_cons(t, sym_Where_1))
    {
      n_1 = ATgetArgument(t, 0);
      t = n_1;
      if(match_cons(t, sym_Prim_2))
        {
          c_1 = ATgetArgument(t, 0);
          d_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          n_1 = ATgetArgument(t, 0);
          t_1 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, n_1, t_1);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              n_1 = ATgetArgument(t, 0);
              t_1 = ATgetArgument(t, 1);
              u_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm zip_1_0 (ATerm w_129 (ATerm), ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm f_7 = ATgetArgument(t, 0);
        if(((ATgetType(f_7) != AT_LIST) || !(ATisEmpty(f_7))))
          _fail(t);
        {
          ATerm g_7 = ATgetArgument(t, 1);
          if(((ATgetType(g_7) != AT_LIST) || !(ATisEmpty(g_7))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm h_0 (ATerm t)
  {
    ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm h_7 = ATgetArgument(t, 0);
        if(((ATgetType(h_7) == AT_LIST) && !(ATisEmpty(h_7))))
          {
            n_2 = ATgetFirst((ATermList) h_7);
            p_2 = (ATerm) ATgetNext((ATermList) h_7);
          }
        else
          _fail(t);
        {
          ATerm i_7 = ATgetArgument(t, 1);
          if(((ATgetType(i_7) == AT_LIST) && !(ATisEmpty(i_7))))
            {
              o_2 = ATgetFirst((ATermList) i_7);
              q_2 = (ATerm) ATgetNext((ATermList) i_7);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_2, o_2), (ATerm) ATmakeAppl(sym__2, p_2, q_2));
    return(t);
  }
  ATerm j_0 (ATerm t)
  {
    ATerm r_2 = NULL,t_2 = NULL;
    if(match_cons(t, sym__2))
      {
        r_2 = ATgetArgument(t, 0);
        t_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(t_2), r_2);
    return(t);
  }
  t = genzip_4_0(b_0, h_0, j_0, w_129, t);
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_7 = ATgetArgument(t, 0);
      if(match_cons(j_7, sym_Build_1))
        {
          ATerm l_7 = ATgetArgument(j_7, 0);
          if(match_cons(l_7, sym_Op_2))
            {
              v_2 = ATgetArgument(l_7, 0);
              u_2 = ATgetArgument(l_7, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm k_7 = ATgetArgument(t, 1);
        if(match_cons(k_7, sym_Match_1))
          {
            ATerm m_7 = ATgetArgument(k_7, 0);
            if(match_cons(m_7, sym_Op_2))
              {
                if((v_2 != ATgetArgument(m_7, 0)))
                  {
                    _fail(ATgetArgument(m_7, 0));
                  }
                w_2 = ATgetArgument(m_7, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, u_2, w_2);
  {
    ATerm m_0 (ATerm t)
    {
      ATerm a_3 = NULL,c_3 = NULL;
      if(match_cons(t, sym__2))
        {
          a_3 = ATgetArgument(t, 0);
          c_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_3), (ATerm) ATmakeAppl(sym_Match_1, c_3));
      return(t);
    }
    t = zip_1_0(m_0, t);
    x_2 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_2), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, v_2, u_2)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_7 = ATgetArgument(t, 0);
      if(match_cons(n_7, sym_Build_1))
        {
          ATerm p_7 = ATgetArgument(n_7, 0);
          if(match_cons(p_7, sym_Op_2))
            {
              d_3 = ATgetArgument(p_7, 0);
              {
                ATerm q_7 = ATgetArgument(p_7, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm o_7 = ATgetArgument(t, 1);
        if(match_cons(o_7, sym_Match_1))
          {
            ATerm u_7 = ATgetArgument(o_7, 0);
            if(match_cons(u_7, sym_Op_2))
              {
                e_3 = ATgetArgument(u_7, 0);
                {
                  ATerm v_7 = ATgetArgument(u_7, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, d_3, e_3);
  {
    ATerm w_7 = t;
    if((PushChoice() == 0))
      {
        ATerm f_3 = NULL;
        if(match_cons(t, sym__2))
          {
            f_3 = ATgetArgument(t, 0);
            if((f_3 != ATgetArgument(t, 1)))
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
        t = w_7;
      }
    t = term_y_7;
  }
  return(t);
}
ATerm BMF_0_0 (ATerm t)
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0_0(t);
      ;
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0_0(t);
            ;
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            {
              ATerm e_8 = t;
              int g_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_3 = NULL,u_3 = NULL,v_3 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      q_3 = ATgetArgument(t, 0);
                      u_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_3;
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm l_8 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = u_3;
                  if(match_cons(t, sym_Build_1))
                    {
                      v_3 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  ;
                  LocalPopChoice(g_8);
                }
              else
                {
                  t = e_8;
                  {
                    ATerm o_8 = t;
                    int p_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0_0(t);
                        ;
                        LocalPopChoice(p_8);
                      }
                    else
                      {
                        t = o_8;
                        {
                          ATerm q_5 = NULL,s_5 = NULL,u_5 = NULL,w_5 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              q_5 = ATgetArgument(t, 0);
                              u_5 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = q_5;
                          if(match_cons(t, sym_Match_1))
                            {
                              s_5 = ATgetArgument(t, 0);
                              t = u_5;
                              if(match_cons(t, sym_Match_1))
                                {
                                  w_5 = ATgetArgument(t, 0);
                                  t = w_5;
                                  if((s_5 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, s_5);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      w_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = w_5;
                                  if((s_5 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, s_5);
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_Build_1))
                                {
                                  s_5 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = u_5;
                              if(match_cons(t, sym_Match_1))
                                {
                                  w_5 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = w_5;
                              if((s_5 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_Build_1, s_5);
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
  ATerm s_6 = NULL,t_6 = NULL,x_6 = NULL,y_6 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      x_6 = ATgetArgument(t, 0);
      y_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6;
  if(match_cons(t, sym_Seq_2))
    {
      s_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
      {
        ATerm q_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_7 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, x_6, s_6);
            t = BMF_0_0(t);
            e_7 = t;
            t = (ATerm) ATmakeAppl(sym_Seq_2, e_7, t_6);
            ;
            LocalPopChoice(r_8);
          }
        else
          {
            t = q_8;
            t = (ATerm) ATmakeAppl(sym__2, x_6, y_6);
            t = BMF_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, x_6, y_6);
      t = BMF_0_0(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm b_123 (ATerm), ATerm t)
{
  ATerm r_7 (ATerm t)
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_123(t);
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        t = SRTS_one(r_7, t);
      }
    return(t);
  }
  t = r_7(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm u_8 = ATgetArgument(t, 0);
      if(((ATgetType(u_8) == AT_LIST) && !(ATisEmpty(u_8))))
        {
          ATerm w_8 = ATgetFirst((ATermList) u_8);
          if(match_cons(w_8, sym_SDefT_4))
            {
              t_7 = ATgetArgument(w_8, 0);
              {
                ATerm y_8 = ATgetArgument(w_8, 1);
                if(((ATgetType(y_8) != AT_LIST) || !(ATisEmpty(y_8))))
                  _fail(t);
              }
              {
                ATerm z_8 = ATgetArgument(w_8, 2);
                if(((ATgetType(z_8) != AT_LIST) || !(ATisEmpty(z_8))))
                  _fail(t);
              }
              s_7 = ATgetArgument(w_8, 3);
            }
          else
            _fail(t);
          {
            ATerm x_8 = (ATerm) ATgetNext((ATermList) u_8);
            if(((ATgetType(x_8) != AT_LIST) || !(ATisEmpty(x_8))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm v_8 = ATgetArgument(t, 1);
        if(match_cons(v_8, sym_CallT_3))
          {
            ATerm a_9 = ATgetArgument(v_8, 0);
            if(match_cons(a_9, sym_SVar_1))
              {
                if((t_7 != ATgetArgument(a_9, 0)))
                  {
                    _fail(ATgetArgument(a_9, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm b_9 = ATgetArgument(v_8, 1);
              if(((ATgetType(b_9) != AT_LIST) || !(ATisEmpty(b_9))))
                _fail(t);
            }
            {
              ATerm c_9 = ATgetArgument(v_8, 2);
              if(((ATgetType(c_9) != AT_LIST) || !(ATisEmpty(c_9))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_7;
  {
    ATerm d_9 = t;
    if((PushChoice() == 0))
      {
        ATerm o_0 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm h_9 = ATgetArgument(t, 0);
              if(match_cons(h_9, sym_SVar_1))
                {
                  if((t_7 != ATgetArgument(h_9, 0)))
                    {
                      _fail(ATgetArgument(h_9, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm j_9 = ATgetArgument(t, 1);
                if(((ATgetType(j_9) != AT_LIST) || !(ATisEmpty(j_9))))
                  _fail(t);
              }
              {
                ATerm k_9 = ATgetArgument(t, 2);
                if(((ATgetType(k_9) != AT_LIST) || !(ATisEmpty(k_9))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(o_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_9;
      }
    t = s_7;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm d_8 = NULL,f_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,m_8 = NULL,n_8 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      m_8 = ATgetArgument(t, 0);
      t = m_8;
      if(match_cons(t, sym_Seq_2))
        {
          k_8 = ATgetArgument(t, 0);
          f_8 = ATgetArgument(t, 1);
          t = k_8;
          if(match_cons(t, sym_Where_1))
            {
              d_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_8;
          if(match_cons(t, sym_Seq_2))
            {
              h_8 = ATgetArgument(t, 0);
              j_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_8;
          if(match_cons(t, sym_Build_1))
            {
              i_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, d_8, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_8), j_8)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              k_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          m_8 = ATgetArgument(t, 0);
          t = m_8;
          if(match_cons(t, sym_Test_1))
            {
              k_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              m_8 = ATgetArgument(t, 0);
              t = m_8;
              if(match_cons(t, sym_Not_1))
                {
                  k_8 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, k_8);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  m_8 = ATgetArgument(t, 0);
                  n_8 = ATgetArgument(t, 1);
                  t = n_8;
                  if((m_8 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      m_8 = ATgetArgument(t, 0);
                      n_8 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = n_8;
                  if((m_8 != t))
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
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      e_9 = ATgetArgument(t, 0);
      i_9 = ATgetArgument(t, 1);
      t = e_9;
      if(match_cons(t, sym_LChoice_2))
        {
          f_9 = ATgetArgument(t, 0);
          g_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, f_9, (ATerm) ATmakeAppl(sym_LChoice_2, g_9, i_9));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          e_9 = ATgetArgument(t, 0);
          i_9 = ATgetArgument(t, 1);
          t = e_9;
          if(match_cons(t, sym_Seq_2))
            {
              f_9 = ATgetArgument(t, 0);
              g_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, f_9, (ATerm) ATmakeAppl(sym_Seq_2, g_9, i_9));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              e_9 = ATgetArgument(t, 0);
              i_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_9;
          if(match_cons(t, sym_Choice_2))
            {
              f_9 = ATgetArgument(t, 0);
              g_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, f_9, (ATerm) ATmakeAppl(sym_Choice_2, g_9, i_9));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm p_0 (ATerm t)
        {
          ATerm q_0 (ATerm t)
          {
            t = map1_1_0(n_0, t);
            return(t);
          }
          t = try_1_0(q_0, t);
          return(t);
        }
        t = Cons_2_0(_id, p_0, t);
      }
      ;
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      {
        ATerm r_0 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, r_0, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,e_10 = NULL,f_10 = NULL,i_10 = NULL,j_10 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      i_10 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, i_10, j_10);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          i_10 = ATgetArgument(t, 0);
          t = i_10;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_9 = ATgetFirst((ATermList) t);
              a_10 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, z_9, (ATerm) ATmakeAppl(sym_LChoices_1, a_10));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_y_7;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              i_10 = ATgetArgument(t, 0);
              t = i_10;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_9 = ATgetFirst((ATermList) t);
                  a_10 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, z_9, (ATerm) ATmakeAppl(sym_Choices_1, a_10));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_y_7;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  i_10 = ATgetArgument(t, 0);
                  t = i_10;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_9 = ATgetFirst((ATermList) t);
                      a_10 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_9, (ATerm) ATmakeAppl(sym_Seqs_1, a_10));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_n_9;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_10 = ATgetArgument(t, 0);
                      j_10 = ATgetArgument(t, 1);
                      f_10 = ATgetArgument(t, 2);
                      e_10 = ATgetArgument(t, 3);
                      {
                        ATerm a_11 = NULL,b_11 = NULL;
                        t = j_10;
                        {
                          ATerm t_0 (ATerm t)
                          {
                            ATerm c_11 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                c_11 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_9), term_q_9));
                            return(t);
                          }
                          t = map1_1_0(t_0, t);
                          a_11 = t;
                          t = f_10;
                          {
                            ATerm v_0 (ATerm t)
                            {
                              ATerm w_0 (ATerm t)
                              {
                                ATerm d_11 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    d_11 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, d_11, term_q_9);
                                return(t);
                              }
                              t = try_1_0(w_0, t);
                              return(t);
                            }
                            t = map1_1_0(v_0, t);
                            b_11 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, i_10, a_11, b_11, e_10);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          i_10 = ATgetArgument(t, 0);
                          j_10 = ATgetArgument(t, 1);
                          f_10 = ATgetArgument(t, 2);
                          e_10 = ATgetArgument(t, 3);
                          {
                            ATerm r_9 = t;
                            int s_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_11 = NULL,o_11 = NULL;
                                t = f_10;
                                {
                                  ATerm x_0 (ATerm t)
                                  {
                                    ATerm p_11 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        p_11 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, p_11, term_q_9);
                                    return(t);
                                  }
                                  t = map1_1_0(x_0, t);
                                  l_11 = t;
                                  t = j_10;
                                  {
                                    ATerm y_0 (ATerm t)
                                    {
                                      ATerm z_0 (ATerm t)
                                      {
                                        ATerm q_11 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            q_11 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_9), term_q_9));
                                        return(t);
                                      }
                                      t = try_1_0(z_0, t);
                                      return(t);
                                    }
                                    t = map_1_0(y_0, t);
                                    o_11 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, i_10, o_11, l_11, e_10);
                                  }
                                }
                                ;
                                LocalPopChoice(s_9);
                              }
                            else
                              {
                                t = r_9;
                                {
                                  ATerm v_11 = NULL,w_11 = NULL;
                                  t = j_10;
                                  {
                                    ATerm a_1 (ATerm t)
                                    {
                                      ATerm x_11 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          x_11 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, x_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_9), term_q_9));
                                      return(t);
                                    }
                                    t = map1_1_0(a_1, t);
                                    v_11 = t;
                                    t = f_10;
                                    {
                                      ATerm b_1 (ATerm t)
                                      {
                                        ATerm e_1 (ATerm t)
                                        {
                                          ATerm y_11 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              y_11 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, y_11, term_q_9);
                                          return(t);
                                        }
                                        t = try_1_0(e_1, t);
                                        return(t);
                                      }
                                      t = map_1_0(b_1, t);
                                      w_11 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, i_10, v_11, w_11, e_10);
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
                              i_10 = ATgetArgument(t, 0);
                              j_10 = ATgetArgument(t, 1);
                              f_10 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, j_10, (ATerm) ATmakeAppl(sym_Op_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, f_10), i_10)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  i_10 = ATgetArgument(t, 0);
                                  j_10 = ATgetArgument(t, 1);
                                  f_10 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, f_10)), i_10), (ATerm) ATmakeAppl(sym_Build_1, j_10)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      i_10 = ATgetArgument(t, 0);
                                      j_10 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, (ATerm) ATmakeAppl(sym_Match_1, j_10));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          i_10 = ATgetArgument(t, 0);
                                          j_10 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_10), j_10);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              i_10 = ATgetArgument(t, 0);
                                              j_10 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_10), i_10);
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
  ATerm l_12 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      ATerm u_9 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_12;
  {
    ATerm f_1 (ATerm t)
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      return(t);
    }
    t = fetch_1_0(f_1, t);
    t = term_y_7;
  }
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_13 = NULL,g_13 = NULL;
      if(match_cons(t, sym_Test_1))
        {
          f_13 = ATgetArgument(t, 0);
          t = f_13;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              f_13 = ATgetArgument(t, 0);
              t = f_13;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_n_9;
            }
          else
            {
              ATerm x_9 = t;
              int y_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      f_13 = ATgetArgument(t, 0);
                      {
                        ATerm b_10 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(y_9);
                  t = f_13;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                }
              else
                {
                  t = x_9;
                  {
                    ATerm c_10 = t;
                    int d_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm g_10 = ATgetArgument(t, 0);
                            g_13 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(d_10);
                        t = g_13;
                        if(!(match_cons(t, sym_Fail_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = c_10;
                        {
                          ATerm h_10 = t;
                          int k_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm l_10 = ATgetArgument(t, 0);
                                  g_13 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(k_10);
                              t = g_13;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = h_10;
                              if(match_cons(t, sym_Some_1))
                                {
                                  f_13 = ATgetArgument(t, 0);
                                  t = f_13;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_One_1))
                                    {
                                      f_13 = ATgetArgument(t, 0);
                                      t = f_13;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm m_10 = ATgetArgument(t, 0);
                                          g_13 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = g_13;
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
      LocalPopChoice(w_9);
    }
  else
    {
      t = v_9;
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F10_0_0(t);
            ;
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            {
              ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
              if(match_cons(t, sym_Choice_2))
                {
                  i_13 = ATgetArgument(t, 0);
                  j_13 = ATgetArgument(t, 1);
                  t = j_13;
                  if(match_cons(t, sym_Fail_0))
                    {
                      t = i_13;
                      if(match_cons(t, sym_Fail_0))
                        {
                          ATerm p_10 = t;
                          int q_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_13;
                              ;
                              LocalPopChoice(q_10);
                            }
                          else
                            {
                              t = p_10;
                              t = i_13;
                            }
                        }
                      else
                        {
                          t = i_13;
                        }
                    }
                  else
                    {
                      t = i_13;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = j_13;
                    }
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      i_13 = ATgetArgument(t, 0);
                      j_13 = ATgetArgument(t, 1);
                      t = j_13;
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = i_13;
                          if(match_cons(t, sym_Fail_0))
                            {
                              ATerm r_10 = t;
                              int s_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = j_13;
                                  ;
                                  LocalPopChoice(s_10);
                                }
                              else
                                {
                                  t = r_10;
                                  t = i_13;
                                }
                            }
                          else
                            {
                              t = i_13;
                            }
                        }
                      else
                        {
                          t = i_13;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = j_13;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Where_1))
                        {
                          i_13 = ATgetArgument(t, 0);
                          t = i_13;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_GuardedLChoice_3))
                            {
                              i_13 = ATgetArgument(t, 0);
                              j_13 = ATgetArgument(t, 1);
                              k_13 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = k_13;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_13, j_13);
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
  ATerm j_14 = NULL,l_14 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      l_14 = ATgetArgument(t, 0);
      t = l_14;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          l_14 = ATgetArgument(t, 0);
          t = l_14;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_y_7;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              l_14 = ATgetArgument(t, 0);
              j_14 = ATgetArgument(t, 1);
              t = j_14;
              if(match_cons(t, sym_Id_0))
                {
                  t = l_14;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm t_10 = t;
                      int u_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = j_14;
                          ;
                          LocalPopChoice(u_10);
                        }
                      else
                        {
                          t = t_10;
                          t = l_14;
                        }
                    }
                  else
                    {
                      t = l_14;
                    }
                }
              else
                {
                  t = l_14;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = j_14;
                }
            }
          else
            {
              ATerm v_10 = t;
              int w_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      l_14 = ATgetArgument(t, 0);
                      {
                        ATerm x_10 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(w_10);
                  t = l_14;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = v_10;
                  {
                    ATerm y_10 = t;
                    int z_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm e_11 = ATgetArgument(t, 0);
                            j_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(z_10);
                        t = j_14;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = y_10;
                        {
                          ATerm f_11 = t;
                          int g_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm h_11 = ATgetArgument(t, 0);
                                  j_14 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(g_11);
                              t = j_14;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = f_11;
                              if(match_cons(t, sym_All_1))
                                {
                                  l_14 = ATgetArgument(t, 0);
                                  t = l_14;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      l_14 = ATgetArgument(t, 0);
                                      t = l_14;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          l_14 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = l_14;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_n_9;
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
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm k_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(m_11);
          }
        else
          {
            t = k_11;
            {
              ATerm n_11 = t;
              int r_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(r_11);
                }
              else
                {
                  t = n_11;
                  {
                    ATerm s_11 = t;
                    int t_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(t_11);
                      }
                    else
                      {
                        t = s_11;
                        {
                          ATerm u_11 = t;
                          int z_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(z_11);
                            }
                          else
                            {
                              t = u_11;
                              {
                                ATerm a_12 = t;
                                int b_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_14 = NULL,v_14 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        u_14 = ATgetArgument(t, 0);
                                        v_14 = ATgetArgument(t, 1);
                                        t = u_14;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            u_14 = ATgetArgument(t, 0);
                                            v_14 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = u_14;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_14;
                                      }
                                    ;
                                    LocalPopChoice(b_12);
                                  }
                                else
                                  {
                                    t = a_12;
                                    {
                                      ATerm c_12 = t;
                                      int d_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(d_12);
                                        }
                                      else
                                        {
                                          t = c_12;
                                          {
                                            ATerm e_12 = t;
                                            int f_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(f_12);
                                              }
                                            else
                                              {
                                                t = e_12;
                                                {
                                                  ATerm f_0 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      ATerm g_12 = ATgetArgument(t, 0);
                                                      if(!(match_cons(g_12, sym_Wld_0)))
                                                        _fail(t);
                                                      f_0 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = f_0;
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
ATerm downup_1_0 (ATerm z_121 (ATerm), ATerm t)
{
  t = z_121(t);
  {
    ATerm i_1 (ATerm t)
    {
      t = downup_1_0(z_121, t);
      return(t);
    }
    t = SRTS_all(i_1, t);
    t = z_121(t);
  }
  return(t);
}
ATerm simplify0_0_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    t = repeat_1_0(Simplify_0_0, t);
    return(t);
  }
  t = downup_1_0(m_1, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm CreateDef2_0_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  y_14 = t;
  t = new_0_0(t);
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_14), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, z_14, (ATerm)ATempty, (ATerm)ATempty, y_14)));
  return(t);
}
ATerm SVar_1_0 (ATerm p_103 (ATerm), ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL;
  d_15 = t;
  if(match_cons(t, sym_SVar_1))
    {
      b_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_15);
  a_15 = t;
  t = b_15;
  t = p_103(t);
  c_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, c_15), a_15);
  return(t);
}
ATerm CallT_3_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
  o_15 = t;
  if(match_cons(t, sym_CallT_3))
    {
      i_15 = ATgetArgument(t, 0);
      j_15 = ATgetArgument(t, 1);
      k_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_15);
  h_15 = t;
  t = i_15;
  t = u_103(t);
  l_15 = t;
  t = j_15;
  t = v_103(t);
  m_15 = t;
  t = k_15;
  t = w_103(t);
  n_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, l_15, m_15, n_15), h_15);
  return(t);
}
ATerm genzip_4_0 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm t)
{
  ATerm s_15 (ATerm t)
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_129(t);
        ;
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
        t = s_129(t);
        t = _2_0(u_129, s_15, t);
        t = t_129(t);
      }
    return(t);
  }
  t = s_15(t);
  return(t);
}
ATerm unzip_1_0 (ATerm b_130 (ATerm), ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = term_j_12;
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    ATerm t_15 = NULL,u_15 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_15 = ATgetFirst((ATermList) t);
        u_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, t_15, u_15);
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm k_12 = ATgetArgument(t, 0);
        if(match_cons(k_12, sym__2))
          {
            v_15 = ATgetArgument(k_12, 0);
            x_15 = ATgetArgument(k_12, 1);
          }
        else
          _fail(t);
        {
          ATerm m_12 = ATgetArgument(t, 1);
          if(match_cons(m_12, sym__2))
            {
              w_15 = ATgetArgument(m_12, 0);
              y_15 = ATgetArgument(m_12, 1);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_15), v_15), (ATerm) ATinsert(CheckATermList(y_15), x_15));
    return(t);
  }
  t = genzip_4_0(o_1, x_1, y_1, b_130, t);
  return(t);
}
ATerm alltd_1_0 (ATerm p_123 (ATerm), ATerm t)
{
  ATerm z_15 (ATerm t)
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_123(t);
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        t = SRTS_all(z_15, t);
      }
    return(t);
  }
  t = z_15(t);
  return(t);
}
ATerm Canon_0_0 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL;
  s_19 = t;
  if(match_cons(t, sym_Rec_2))
    {
      t_19 = ATgetArgument(t, 0);
      u_19 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, t_19, (ATerm)ATempty, (ATerm)ATempty, u_19)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, t_19), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          t_19 = ATgetArgument(t, 0);
          u_19 = ATgetArgument(t, 1);
          v_19 = ATgetArgument(t, 2);
          l_19 = ATgetArgument(t, 3);
          {
            ATerm b_20 = NULL;
            t = u_19;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = v_19;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = l_19;
            if(match_cons(t, sym_Rec_2))
              {
                m_19 = ATgetArgument(t, 0);
                n_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_19;
            {
              ATerm z_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm p_12 = ATgetArgument(t, 0);
                    if(match_cons(p_12, sym_SVar_1))
                      {
                        if((m_19 != ATgetArgument(p_12, 0)))
                          {
                            _fail(ATgetArgument(p_12, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm q_12 = ATgetArgument(t, 1);
                      if(((ATgetType(q_12) != AT_LIST) || !(ATisEmpty(q_12))))
                        _fail(t);
                    }
                    {
                      ATerm r_12 = ATgetArgument(t, 2);
                      if(((ATgetType(r_12) != AT_LIST) || !(ATisEmpty(r_12))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, t_19), (ATerm)ATempty, (ATerm) ATempty);
                return(t);
              }
              t = alltd_1_0(z_1, t);
              b_20 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, t_19, (ATerm)ATempty, (ATerm)ATempty, b_20);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              t_19 = ATgetArgument(t, 0);
              u_19 = ATgetArgument(t, 1);
              t = u_19;
              if(match_cons(t, sym_Seq_2))
                {
                  q_19 = ATgetArgument(t, 0);
                  r_19 = ATgetArgument(t, 1);
                  t = t_19;
                  if(match_cons(t, sym_Where_1))
                    {
                      p_19 = ATgetArgument(t, 0);
                      t = q_19;
                      if(match_cons(t, sym_Build_1))
                        {
                          o_19 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_19), r_19));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = u_19;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      q_19 = ATgetArgument(t, 0);
                      t = t_19;
                      if(match_cons(t, sym_Where_1))
                        {
                          p_19 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_19, (ATerm) ATmakeAppl(sym_Build_1, q_19));
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = u_19;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Id_0))
                        {
                          t = t_19;
                          if(match_cons(t, sym_Id_0))
                            {
                              ATerm s_12 = t;
                              int t_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = t_19;
                                  ;
                                  LocalPopChoice(t_12);
                                }
                              else
                                {
                                  t = s_12;
                                  t = u_19;
                                }
                            }
                          else
                            {
                              t = t_19;
                            }
                        }
                      else
                        {
                          t = t_19;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = u_19;
                        }
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  t_19 = ATgetArgument(t, 0);
                  u_19 = ATgetArgument(t, 1);
                  t = u_19;
                  if(match_cons(t, sym_Scope_2))
                    {
                      q_19 = ATgetArgument(t, 0);
                      r_19 = ATgetArgument(t, 1);
                      t = t_19;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm u_12 = t;
                          int v_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_20 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, t_19, q_19);
                              t = conc_0_0(t);
                              q_20 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, q_20, r_19);
                              ;
                              LocalPopChoice(v_12);
                            }
                          else
                            {
                              t = u_12;
                              t = u_19;
                            }
                        }
                      else
                        {
                          ATerm v_20 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, t_19, q_19);
                          t = conc_0_0(t);
                          v_20 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, v_20, r_19);
                        }
                    }
                  else
                    {
                      t = t_19;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = u_19;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Thread_1))
                    {
                      t_19 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_12, (ATerm)ATinsert(ATempty, t_19), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          t_19 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_12, (ATerm)ATinsert(ATempty, t_19), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              t_19 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_CallT_3, term_b_13, (ATerm)ATinsert(ATempty, t_19), (ATerm) ATempty);
                            }
                          else
                            {
                              if(match_cons(t, sym_All_1))
                                {
                                  t_19 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_13, (ATerm)ATinsert(ATempty, t_19), (ATerm) ATempty);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Bagof_1))
                                    {
                                      t_19 = ATgetArgument(t, 0);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_13, (ATerm)ATinsert(ATempty, t_19), (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_PrimT_3))
                                        {
                                          t_19 = ATgetArgument(t, 0);
                                          u_19 = ATgetArgument(t, 1);
                                          v_19 = ATgetArgument(t, 2);
                                          {
                                            ATerm l_13 = t;
                                            int m_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm s_0 = NULL;
                                                t = u_19;
                                                {
                                                  ATerm u_0 (ATerm t)
                                                  {
                                                    ATerm n_13 = t;
                                                    int o_13 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm a_2 (ATerm t)
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_r_13;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_u_13;
                                                            }
                                                          return(t);
                                                        }
                                                        ATerm b_2 (ATerm t)
                                                        {
                                                          t = try_1_0(u_0, t);
                                                          return(t);
                                                        }
                                                        t = Cons_2_0(a_2, b_2, t);
                                                        ;
                                                        LocalPopChoice(o_13);
                                                      }
                                                    else
                                                      {
                                                        t = n_13;
                                                        t = Cons_2_0(_id, u_0, t);
                                                      }
                                                    return(t);
                                                  }
                                                  t = u_0(t);
                                                  s_0 = t;
                                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, t_19, s_0, v_19);
                                                }
                                                ;
                                                LocalPopChoice(m_13);
                                              }
                                            else
                                              {
                                                t = l_13;
                                                {
                                                  ATerm h_1 = NULL,j_1 = NULL,k_1 = NULL;
                                                  t = u_19;
                                                  {
                                                    ATerm c_2 (ATerm t)
                                                    {
                                                      ATerm d_2 (ATerm t)
                                                      {
                                                        if(match_cons(t, sym_Id_0))
                                                          {
                                                            t = term_r_13;
                                                          }
                                                        else
                                                          {
                                                            if(!(match_cons(t, sym_Fail_0)))
                                                              _fail(t);
                                                            t = term_u_13;
                                                          }
                                                        return(t);
                                                      }
                                                      t = try_1_0(d_2, t);
                                                      {
                                                        ATerm v_13 = t;
                                                        int w_13 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,v_1 = NULL,w_1 = NULL;
                                                            if(match_cons(t, sym_Let_2))
                                                              {
                                                                p_1 = ATgetArgument(t, 0);
                                                                q_1 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = q_1;
                                                            if(match_cons(t, sym_CallT_3))
                                                              {
                                                                r_1 = ATgetArgument(t, 0);
                                                                v_1 = ATgetArgument(t, 1);
                                                                w_1 = ATgetArgument(t, 2);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = r_1;
                                                            if(match_cons(t, sym_SVar_1))
                                                              {
                                                                s_1 = ATgetArgument(t, 0);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = v_1;
                                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                              _fail(t);
                                                            t = w_1;
                                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                              _fail(t);
                                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_1), (ATerm)ATempty, (ATerm) ATempty), p_1);
                                                            ;
                                                            LocalPopChoice(w_13);
                                                          }
                                                        else
                                                          {
                                                            t = v_13;
                                                            {
                                                              ATerm x_13 = t;
                                                              int y_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm z_13 = t;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm e_2 (ATerm t)
                                                                      {
                                                                        t = SVar_1_0(_id, t);
                                                                        return(t);
                                                                      }
                                                                      ATerm f_2 (ATerm t)
                                                                      {
                                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                          _fail(t);
                                                                        return(t);
                                                                      }
                                                                      ATerm g_2 (ATerm t)
                                                                      {
                                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                          _fail(t);
                                                                        return(t);
                                                                      }
                                                                      t = CallT_3_0(e_2, f_2, g_2, t);
                                                                      PopChoice();
                                                                      _fail(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = z_13;
                                                                    }
                                                                  t = CreateDef2_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(y_13);
                                                                }
                                                              else
                                                                {
                                                                  t = x_13;
                                                                  {
                                                                    ATerm h_2 (ATerm t)
                                                                    {
                                                                      t = (ATerm) ATempty;
                                                                      return(t);
                                                                    }
                                                                    t = split_2_0(_id, h_2, t);
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                      return(t);
                                                    }
                                                    t = unzip_1_0(c_2, t);
                                                    if(match_cons(t, sym__2))
                                                      {
                                                        h_1 = ATgetArgument(t, 0);
                                                        j_1 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = j_1;
                                                    t = concat_0_0(t);
                                                    k_1 = t;
                                                    {
                                                      ATerm a_14 = t;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                            _fail(t);
                                                          PopChoice();
                                                          _fail(t);
                                                        }
                                                      else
                                                        {
                                                          t = a_14;
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Let_2, k_1, (ATerm) ATmakeAppl(sym_PrimT_3, t_19, h_1, v_19));
                                                    }
                                                  }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              t_19 = ATgetArgument(t, 0);
                                              u_19 = ATgetArgument(t, 1);
                                              v_19 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm b_14 = t;
                                            int c_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm s_2 = NULL;
                                                t = u_19;
                                                {
                                                  ATerm z_2 (ATerm t)
                                                  {
                                                    ATerm d_14 = t;
                                                    int e_14 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm i_2 (ATerm t)
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_r_13;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_u_13;
                                                            }
                                                          return(t);
                                                        }
                                                        ATerm j_2 (ATerm t)
                                                        {
                                                          t = try_1_0(z_2, t);
                                                          return(t);
                                                        }
                                                        t = Cons_2_0(i_2, j_2, t);
                                                        ;
                                                        LocalPopChoice(e_14);
                                                      }
                                                    else
                                                      {
                                                        t = d_14;
                                                        t = Cons_2_0(_id, z_2, t);
                                                      }
                                                    return(t);
                                                  }
                                                  t = z_2(t);
                                                  s_2 = t;
                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, t_19, s_2, v_19);
                                                }
                                                ;
                                                LocalPopChoice(c_14);
                                              }
                                            else
                                              {
                                                t = b_14;
                                                {
                                                  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL;
                                                  t = u_19;
                                                  {
                                                    ATerm k_2 (ATerm t)
                                                    {
                                                      ATerm l_2 (ATerm t)
                                                      {
                                                        if(match_cons(t, sym_Id_0))
                                                          {
                                                            t = term_r_13;
                                                          }
                                                        else
                                                          {
                                                            if(!(match_cons(t, sym_Fail_0)))
                                                              _fail(t);
                                                            t = term_u_13;
                                                          }
                                                        return(t);
                                                      }
                                                      t = try_1_0(l_2, t);
                                                      {
                                                        ATerm f_14 = t;
                                                        int g_14 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL;
                                                            if(match_cons(t, sym_Let_2))
                                                              {
                                                                w_3 = ATgetArgument(t, 0);
                                                                x_3 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = x_3;
                                                            if(match_cons(t, sym_CallT_3))
                                                              {
                                                                y_3 = ATgetArgument(t, 0);
                                                                a_4 = ATgetArgument(t, 1);
                                                                b_4 = ATgetArgument(t, 2);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = y_3;
                                                            if(match_cons(t, sym_SVar_1))
                                                              {
                                                                z_3 = ATgetArgument(t, 0);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = a_4;
                                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                              _fail(t);
                                                            t = b_4;
                                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                              _fail(t);
                                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_3), (ATerm)ATempty, (ATerm) ATempty), w_3);
                                                            ;
                                                            LocalPopChoice(g_14);
                                                          }
                                                        else
                                                          {
                                                            t = f_14;
                                                            {
                                                              ATerm h_14 = t;
                                                              int i_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_14 = t;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm m_2 (ATerm t)
                                                                      {
                                                                        t = SVar_1_0(_id, t);
                                                                        return(t);
                                                                      }
                                                                      ATerm y_2 (ATerm t)
                                                                      {
                                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                          _fail(t);
                                                                        return(t);
                                                                      }
                                                                      ATerm b_3 (ATerm t)
                                                                      {
                                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                          _fail(t);
                                                                        return(t);
                                                                      }
                                                                      t = CallT_3_0(m_2, y_2, b_3, t);
                                                                      PopChoice();
                                                                      _fail(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = k_14;
                                                                    }
                                                                  t = CreateDef2_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(i_14);
                                                                }
                                                              else
                                                                {
                                                                  t = h_14;
                                                                  {
                                                                    ATerm g_3 (ATerm t)
                                                                    {
                                                                      t = (ATerm) ATempty;
                                                                      return(t);
                                                                    }
                                                                    t = split_2_0(_id, g_3, t);
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                      return(t);
                                                    }
                                                    t = unzip_1_0(k_2, t);
                                                    if(match_cons(t, sym__2))
                                                      {
                                                        m_3 = ATgetArgument(t, 0);
                                                        n_3 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = n_3;
                                                    t = concat_0_0(t);
                                                    o_3 = t;
                                                    {
                                                      ATerm m_14 = t;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                            _fail(t);
                                                          PopChoice();
                                                          _fail(t);
                                                        }
                                                      else
                                                        {
                                                          t = m_14;
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Let_2, o_3, (ATerm) ATmakeAppl(sym_CallT_3, t_19, m_3, v_19));
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
ATerm repeat_1_0 (ATerm z_120 (ATerm), ATerm t)
{
  ATerm i_21 (ATerm t)
  {
    ATerm h_3 (ATerm t)
    {
      t = z_120(t);
      t = i_21(t);
      return(t);
    }
    t = try_1_0(h_3, t);
    return(t);
  }
  t = i_21(t);
  return(t);
}
ATerm downup2_2_0 (ATerm c_122 (ATerm), ATerm d_122 (ATerm), ATerm t)
{
  t = c_122(t);
  {
    ATerm i_3 (ATerm t)
    {
      t = downup2_2_0(c_122, d_122, t);
      return(t);
    }
    t = SRTS_all(i_3, t);
    t = d_122(t);
  }
  return(t);
}
ATerm _2_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL;
  o_21 = t;
  if(match_cons(t, sym__2))
    {
      k_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_21);
  j_21 = t;
  t = k_21;
  t = v_97(t);
  m_21 = t;
  t = l_21;
  t = w_97(t);
  n_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, m_21, n_21), j_21);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL;
  s_21 = t;
  t = term_n_14;
  t = whoami_0_0(t);
  t_21 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), t_21), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = s_21;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        ATerm w_21 = NULL,x_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_21 = ATgetFirst((ATermList) t);
            x_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_21;
        {
          ATerm j_3 (ATerm t)
          {
            t = x_21;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(j_3, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL;
  b_22 = t;
  t = SSL_explode_term(b_22);
  if(match_cons(t, sym__2))
    {
      ATerm q_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_22;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_128 (ATerm), ATerm t)
{
  ATerm d_22 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, d_22, t);
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_128(t);
      }
    return(t);
  }
  t = d_22(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL;
  if(match_cons(t, sym__2))
    {
      f_22 = ATgetArgument(t, 0);
      e_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_22;
  {
    ATerm k_3 (ATerm t)
    {
      t = e_22;
      return(t);
    }
    t = at_end_1_0(k_3, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = t_14;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm g_22 = NULL;
  ATerm l_3 (ATerm t)
  {
    ATerm h_22 = NULL;
    h_22 = t;
    t = SSL_explode_string(h_22);
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm i_22 = NULL;
    i_22 = t;
    t = SSL_explode_string(i_22);
    return(t);
  }
  t = _2_0(l_3, p_3, t);
  t = conc_0_0(t);
  g_22 = t;
  t = SSL_implode_string(g_22);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_14 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_22 = NULL;
      o_22 = t;
      t = SSL_is_string(o_22);
      ;
      LocalPopChoice(e_15);
    }
  else
    {
      t = x_14;
      {
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(r_3, t);
            ;
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
            {
              ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
              s_22 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_22 = ATgetArgument(t, 0);
                  t = t_22;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_22 = ATgetArgument(t, 0);
                      t = t_22;
                      {
                        ATerm p_15 = t;
                        int q_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_15);
                          }
                        else
                          {
                            t = p_15;
                            {
                              ATerm s_3 (ATerm t)
                              {
                                t = term_r_15;
                                return(t);
                              }
                              t = debug_1_0(s_3, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm y_22 = NULL,z_22 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_22 = ATgetArgument(t, 0);
                          u_22 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_22;
                      t = eval_config_0_0(t);
                      y_22 = t;
                      t = u_22;
                      t = eval_config_0_0(t);
                      z_22 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_22, z_22);
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
  ATerm c_23 = NULL;
  c_23 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_23);
  {
    ATerm t_3 (ATerm t)
    {
      ATerm d_23 = NULL;
      t = eval_config_0_0(t);
      d_23 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_23, d_23);
      t = d_23;
      return(t);
    }
    t = try_1_0(t_3, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_140 (ATerm), ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm e_23 = NULL,f_23 = NULL;
    e_23 = t;
    t = term_a_16;
    t = get_config_0_0(t);
    f_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_23, term_b_16);
    t = geq_0_0(t);
    t = e_23;
    t = v_140(t);
    return(t);
  }
  t = try_1_0(c_4, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm c_16 = ATgetArgument(t, 0);
        if(match_cons(c_16, sym_Stream_1))
          {
            g_23 = ATgetArgument(c_16, 0);
          }
        else
          _fail(t);
        h_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(g_23, h_23);
    i_23 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), i_23);
    j_23 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, j_23);
    return(t);
  }
  t = WriteToFile_1_0(d_4, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm r_139 (ATerm), ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
  if(match_cons(t, sym__2))
    {
      k_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_23, term_d_16);
  t = open_stream_0_0(t);
  m_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_23, l_23);
  t = r_139(t);
  t = fclose_0_0(t);
  t = l_23;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm e_16 = ATgetArgument(t, 0);
        if(match_cons(e_16, sym_Stream_1))
          {
            n_23 = ATgetArgument(e_16, 0);
          }
        else
          _fail(t);
        o_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(n_23, o_23);
    p_23 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, p_23);
    return(t);
  }
  t = WriteToFile_1_0(e_4, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL;
  q_23 = t;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm f_16 = t;
      int g_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_4 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                r_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(g_4, t);
          ;
          LocalPopChoice(g_16);
        }
      else
        {
          t = f_16;
          t = term_h_16;
          r_23 = t;
        }
      return(t);
    }
    t = _2_0(f_4, _id, t);
    t = q_23;
    {
      ATerm h_4 (ATerm t)
      {
        ATerm i_4 (ATerm t)
        {
          t = not_null(r_23);
          return(t);
        }
        t = split_2_0(i_4, _id, t);
        return(t);
      }
      t = _2_0(_id, h_4, t);
      {
        ATerm i_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 (ATerm t)
            {
              ATerm k_4 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(k_4, t);
              return(t);
            }
            t = _2_0(j_4, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(j_16);
          }
        else
          {
            t = i_16;
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
ATerm apply_strategy_1_0 (ATerm t_142 (ATerm), ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
  s_23 = t;
  t = dtime_0_0(t);
  t = s_23;
  t = t_142(t);
  t_23 = t;
  t = dtime_0_0(t);
  u_23 = t;
  t = t_23;
  if(match_cons(t, sym__2))
    {
      v_23 = ATgetArgument(t, 0);
      w_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_23), (ATerm) ATmakeAppl(sym_Runtime_1, u_23)), w_23);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_24 (ATerm e_24, ATerm t)
  {
    t = SSL_fclose(e_24);
    return(t);
  }
  ATerm h_24 = NULL,i_24 = NULL;
  i_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_24 = ATgetArgument(t, 0);
      {
        ATerm k_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_24);
            ;
            LocalPopChoice(l_16);
          }
        else
          {
            t = k_16;
            t = k_24(i_24, t);
          }
      }
    }
  else
    {
      t = k_24(i_24, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm d_139 (ATerm), ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  l_24 = t;
  t = d_139(t);
  m_24 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_24), m_24));
  t = l_24;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_24 = NULL;
  t = SSL_stdin_stream();
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_24);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_24 = NULL;
  t = SSL_stdout_stream();
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_24);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_24 = NULL;
  t = SSL_stderr_stream();
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_24);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_24;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_24;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_24;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_16 = ATgetArgument(t, 0);
      ATerm n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_4 = NULL,r_4 = NULL;
        q_4 = t;
        t = SSL_explode_term(q_4);
        if(match_cons(t, sym__2))
          {
            ATerm q_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_16) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_16 = ATgetArgument(t, 1);
              if(((ATgetType(r_16) == AT_LIST) && !(ATisEmpty(r_16))))
                {
                  r_4 = ATgetFirst((ATermList) r_16);
                  {
                    ATerm s_16 = (ATerm) ATgetNext((ATermList) r_16);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_4;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        {
          ATerm t_16 = t;
          int u_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
              ATerm l_4 (ATerm t)
              {
                ATerm x_24 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    x_24 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = x_24;
                return(t);
              }
              t = _2_0(l_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  u_24 = ATgetArgument(t, 0);
                  v_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(u_24, v_24);
              w_24 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, w_24);
              ;
              LocalPopChoice(u_16);
            }
          else
            {
              t = t_16;
              {
                ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
                ATerm m_4 (ATerm t)
                {
                  ATerm b_25 = NULL;
                  b_25 = t;
                  t = SSL_is_string(b_25);
                  return(t);
                }
                t = _2_0(m_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    y_24 = ATgetArgument(t, 0);
                    z_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(y_24, z_24);
                a_25 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, a_25);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_25 = NULL;
      f_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_25, term_x_16);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      {
        ATerm n_4 (ATerm t)
        {
          t = term_y_16;
          return(t);
        }
        t = debug_1_0(n_4, t);
        _fail(t);
      }
    }
  c_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(e_25);
  d_25 = t;
  t = c_25;
  t = fclose_0_0(t);
  t = d_25;
  return(t);
}
ATerm split_2_0 (ATerm e_135 (ATerm), ATerm f_135 (ATerm), ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
  h_25 = t;
  t = e_135(t);
  i_25 = t;
  t = h_25;
  t = f_135(t);
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_25, j_25);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL;
  k_25 = t;
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_4 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              l_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(o_4, t);
        ;
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        t = term_b_17;
        l_25 = t;
      }
    t = k_25;
    {
      ATerm p_4 (ATerm t)
      {
        t = not_null(l_25);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, p_4, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm n_25 = NULL;
    n_25 = t;
    if(match_string(t, "-k"))
      {
        t = n_25;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = n_25;
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    ATerm o_25 = NULL,p_25 = NULL;
    o_25 = t;
    t = SSL_string_to_int(o_25);
    p_25 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), p_25);
    t = o_25;
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_c_17;
    return(t);
  }
  t = ArgOption_3_0(s_4, t_4, u_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_4 (ATerm t)
      {
        ATerm r_25 = NULL;
        r_25 = t;
        if(match_string(t, "-S"))
          {
            t = r_25;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = r_25;
          }
        return(t);
      }
      ATerm w_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_g_17;
        return(t);
      }
      ATerm x_4 (ATerm t)
      {
        t = term_h_17;
        return(t);
      }
      t = Option_3_0(v_4, w_4, x_4, t);
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = d_17;
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm z_4 (ATerm t)
            {
              ATerm s_25 = NULL,t_25 = NULL;
              s_25 = t;
              t = SSL_string_to_int(s_25);
              t_25 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_25);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, s_25);
              return(t);
            }
            ATerm a_5 (ATerm t)
            {
              t = term_k_17;
              return(t);
            }
            t = ArgOption_3_0(y_4, z_4, a_5, t);
            ;
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            {
              ATerm b_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm c_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_l_17;
                return(t);
              }
              ATerm d_5 (ATerm t)
              {
                t = term_m_17;
                return(t);
              }
              t = Option_3_0(b_5, c_5, d_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm v_25 = NULL;
    v_25 = t;
    if(match_string(t, "-o"))
      {
        t = v_25;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = v_25;
      }
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    ATerm w_25 = NULL;
    w_25 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), w_25);
    t = (ATerm) ATmakeAppl(sym_Output_1, w_25);
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = term_p_17;
    return(t);
  }
  t = ArgOption_3_0(e_5, f_5, g_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm h_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm i_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_s_17;
          return(t);
        }
        ATerm j_5 (ATerm t)
        {
          t = term_t_17;
          return(t);
        }
        t = Option_3_0(h_5, i_5, j_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  z_25 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = z_25;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm h_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_26 = ATgetFirst((ATermList) t);
          b_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_26 = ATgetFirst((ATermList) t);
          d_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_26;
      t = i_0(t);
      t = c_26;
      t = k_0(t);
      h_26 = t;
      t = (ATerm) ATinsert(CheckATermList(d_26), h_26);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm j_26 = NULL;
    j_26 = t;
    if(match_string(t, "-i"))
      {
        t = j_26;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = j_26;
      }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    ATerm k_26 = NULL;
    k_26 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), k_26);
    t = (ATerm) ATmakeAppl(sym_Input_1, k_26);
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_u_17;
    return(t);
  }
  t = ArgOption_3_0(k_5, l_5, m_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm x_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(y_17);
          }
        else
          {
            t = x_17;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_14;
  t = whoami_0_0(t);
  l_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), l_26));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_17;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm t)
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_133(t);
      ;
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      {
        ATerm o_26 = NULL,p_26 = NULL,s_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_26 = ATgetFirst((ATermList) t);
            p_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_26;
        t = foldr_2_0(p_133, q_133, t);
        s_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_26, s_26);
        t = q_133(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm i_137 (ATerm), ATerm j_137 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL;
  t_26 = t;
  t = SSL_explode_term(t_26);
  if(match_cons(t, sym__2))
    {
      ATerm c_18 = ATgetArgument(t, 0);
      u_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_26;
  t = foldr_2_0(i_137, j_137, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_26 = NULL;
  t = times_0_0(t);
  {
    ATerm n_5 (ATerm t)
    {
      t = term_f_17;
      return(t);
    }
    ATerm o_5 (ATerm t)
    {
      ATerm w_26 = NULL,x_26 = NULL;
      if(match_cons(t, sym__2))
        {
          w_26 = ATgetArgument(t, 0);
          x_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(w_26, x_26);
            ;
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
            t = SSL_addr(w_26, x_26);
          }
      }
      return(t);
    }
    t = crush_2_0(n_5, o_5, t);
    v_26 = t;
    t = SSL_TicksToSeconds(v_26);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
  g_27 = t;
  if(match_cons(t, sym__2))
    {
      h_27 = ATgetArgument(t, 0);
      i_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_27;
        if((h_27 != t))
          {
            _fail(t);
          }
        t = g_27;
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        t = g_27;
        {
          ATerm h_18 = t;
          int i_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_27, i_27);
              ;
              LocalPopChoice(i_18);
            }
          else
            {
              t = h_18;
              t = SSL_gtr(h_27, i_27);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_27, i_27);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_140 (ATerm), ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm l_27 = NULL,m_27 = NULL;
    l_27 = t;
    t = term_a_16;
    t = get_config_0_0(t);
    m_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_27, term_j_18);
    t = geq_0_0(t);
    t = l_27;
    t = u_140(t);
    return(t);
  }
  t = try_1_0(p_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm o_27 = NULL,p_27 = NULL;
    t = run_time_0_0(t);
    o_27 = t;
    t = term_n_14;
    t = whoami_0_0(t);
    p_27 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), o_27), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), p_27));
    t = (ATerm) ATmakeAppl(sym__2, term_k_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_18), o_27), term_l_18), p_27));
    return(t);
  }
  t = if_verbose1_1_0(r_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm r_143 (ATerm), ATerm t)
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      {
        ATerm t_5 (ATerm t)
        {
          ATerm q_18 = t;
          int r_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(r_18);
            }
          else
            {
              t = q_18;
              {
                ATerm s_18 = t;
                int t_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(t_18);
                  }
                else
                  {
                    t = s_18;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(t_5, t);
      }
    }
  t = r_143(t);
  return(t);
}
ATerm map_1_0 (ATerm o_127 (ATerm), ATerm t)
{
  ATerm r_27 (ATerm t)
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = Cons_2_0(o_127, r_27, t);
      }
    return(t);
  }
  t = r_27(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_27 = ATgetFirst((ATermList) t);
      u_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_27 = NULL,z_27 = NULL;
        t = u_27;
        t = g_0(t);
        y_27 = t;
        t = t_27;
        t = e_0(t);
        z_27 = t;
        t = u_27;
        {
          ATerm v_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_27), z_27);
            return(t);
          }
          t = reverse_acc_2_0(e_0, v_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_14;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, x_5, t);
  return(t);
}
ATerm Program_1_0 (ATerm q_107 (ATerm), ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL;
  d_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_28);
  a_28 = t;
  t = b_28;
  t = q_107(t);
  c_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, c_28), a_28);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
      {
        ATerm y_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(y_5, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_y_18;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm z_5 (ATerm t)
    {
      ATerm h_28 = NULL;
      h_28 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, h_28), term_z_18);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(z_5, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm r_107 (ATerm), ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL;
  l_28 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      j_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_28);
  i_28 = t;
  t = j_28;
  t = r_107(t);
  k_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, k_28), i_28);
  return(t);
}
ATerm fetch_1_0 (ATerm y_127 (ATerm), ATerm t)
{
  ATerm p_28 (ATerm t)
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_127, _id, t);
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = Cons_2_0(_id, p_28, t);
      }
    return(t);
  }
  t = p_28(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm r_144 (ATerm), ATerm t)
{
  t = fetch_1_0(r_144, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL;
  r_28 = t;
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_19 = ATgetFirst((ATermList) t);
                ATerm f_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_28;
          }
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        t = (ATerm) ATinsert(ATempty, r_28);
      }
    s_28 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), s_28);
    t = r_28;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm d_120 (ATerm), ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_120(t);
      ;
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm b_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_x_19;
        return(t);
      }
      ATerm c_6 (ATerm t)
      {
        t = term_y_19;
        return(t);
      }
      t = Option_3_0(a_6, b_6, c_6, t);
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      {
        ATerm d_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm e_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_z_19;
          return(t);
        }
        ATerm f_6 (ATerm t)
        {
          t = term_a_20;
          return(t);
        }
        t = Option_3_0(d_6, e_6, f_6, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  if(match_cons(t, sym__3))
    {
      y_28 = ATgetArgument(t, 0);
      z_28 = ATgetArgument(t, 1);
      a_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_28, z_28);
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_20 = ATgetArgument(t, 0);
            ATerm f_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_28, z_28);
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = (ATerm) ATempty;
      }
    b_29 = t;
    t = SSL_table_put(y_28, z_28, (ATerm) ATinsert(CheckATermList(b_29), a_29));
    t = (ATerm) ATmakeAppl(sym__3, y_28, z_28, a_29);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm w_145 (ATerm), ATerm t)
{
  ATerm g_29 = NULL;
  t = term_n_14;
  t = w_145(t);
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_20, term_h_20, g_29);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
  i_29 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = i_29;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm n_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_29 = ATgetFirst((ATermList) t);
          k_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_29;
      t = a_0(t);
      t = term_n_14;
      t = c_0(t);
      n_29 = t;
      t = (ATerm) ATinsert(CheckATermList(k_29), n_29);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm p_29 = NULL;
    p_29 = t;
    if(match_string(t, "--help"))
      {
        t = p_29;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = p_29;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = p_29;
          }
      }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_i_20;
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_j_20;
    return(t);
  }
  t = Option_3_0(g_6, h_6, i_6, t);
  return(t);
}
ATerm Cons_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
  v_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_29 = ATgetFirst((ATermList) t);
      s_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_29);
  q_29 = t;
  t = r_29;
  t = e_99(t);
  t_29 = t;
  t = s_29;
  t = f_99(t);
  u_29 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(u_29), t_29), q_29);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_145 (ATerm), ATerm t)
{
  ATerm c_30 = NULL;
  c_30 = t;
  {
    ATerm j_6 (ATerm t)
    {
      t = term_k_20;
      t = u_145(t);
      return(t);
    }
    t = try_1_0(j_6, t);
    t = c_30;
    {
      ATerm k_6 (ATerm t)
      {
        ATerm d_30 = NULL;
        d_30 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_30);
        t = (ATerm) ATmakeAppl(sym_Program_1, d_30);
        return(t);
      }
      ATerm l_6 (ATerm t)
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_20 = t;
            int o_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(o_20);
              }
            else
              {
                t = n_20;
                t = u_145(t);
                t = Cons_2_0(_id, l_6, t);
              }
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            {
              ATerm f_30 = NULL,g_30 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_30 = ATgetFirst((ATermList) t);
                  g_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_30), (ATerm) ATmakeAppl(sym_Undefined_1, f_30));
            }
          }
        return(t);
      }
      t = Cons_2_0(k_6, l_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm t_145 (ATerm), ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  m_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = m_30;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm p_20 = t;
      int r_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_145(t);
          ;
          LocalPopChoice(r_20);
        }
      else
        {
          t = p_20;
          {
            ATerm s_20 = t;
            int t_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(t_20);
              }
            else
              {
                t = s_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_6, t);
    {
      ATerm n_6 (ATerm t)
      {
        ATerm u_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_30 = NULL;
            t_30 = t;
            {
              ATerm x_20 = t;
              int y_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_30;
                  {
                    ATerm z_20 = t;
                    int a_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_p_18;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(a_21);
                      }
                    else
                      {
                        t = z_20;
                        {
                          ATerm o_6 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(o_6, t);
                        }
                      }
                    t = t_30;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(y_20);
                }
              else
                {
                  t = x_20;
                  t = term_w_19;
                  t = get_config_0_0(t);
                  t = t_30;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(w_20);
          }
        else
          {
            t = u_20;
            {
              ATerm p_6 (ATerm t)
              {
                ATerm q_6 (ATerm t)
                {
                  n_30 = t;
                  return(t);
                }
                t = Undefined_1_0(q_6, t);
                return(t);
              }
              t = option_defined_1_0(p_6, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(n_30)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_30)), term_b_21));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(n_6, t);
      o_30 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = o_30;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_143 (ATerm), ATerm u_143 (ATerm), ATerm v_143 (ATerm), ATerm w_143 (ATerm), ATerm t)
{
  ATerm x_7 = NULL;
  t = parse_options_1_0(t_143, t);
  x_7 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), x_7);
  t = x_7;
  t = v_143(t);
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_143, t);
        ;
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        {
          ATerm e_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_143(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_21);
            }
          else
            {
              t = e_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm l_143 (ATerm), ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_143(t);
        ;
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(i_143, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(r_6, k_143, l_143, u_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm c_143 (ATerm), ATerm d_143 (ATerm), ATerm e_143 (ATerm), ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm w_6 (ATerm t)
    {
      ATerm w_30 = NULL,x_30 = NULL;
      w_30 = t;
      t = term_z_17;
      t = get_config_0_0(t);
      x_30 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, x_30));
      t = w_30;
      return(t);
    }
    t = if_verbose2_1_0(w_6, t);
    return(t);
  }
  t = iowrap_4_0(c_143, d_143, e_143, v_6, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm a_143 (ATerm), ATerm b_143 (ATerm), ATerm t)
{
  t = iowrap_3_0(a_143, b_143, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm x_142 (ATerm), ATerm t)
{
  ATerm z_6 (ATerm t)
  {
    t = _2_0(_id, x_142, t);
    return(t);
  }
  t = iowrap_2_0(z_6, _fail, t);
  return(t);
}
ATerm canonicalize_0_0 (ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm b_7 (ATerm t)
    {
      t = repeat_1_0(Canon_0_0, t);
      return(t);
    }
    ATerm c_7 (ATerm t)
    {
      t = repeat_1_0(Canon_0_0, t);
      return(t);
    }
    t = downup2_2_0(b_7, c_7, t);
    t = simplify0_0_0(t);
    return(t);
  }
  t = iowrap_1_0(a_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = canonicalize_0_0(t);
  return(t);
}
