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
ATerm term_o_27;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_k_26;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_q_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_y_22;
ATerm term_i_22;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_i_19;
ATerm term_c_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_v_16;
ATerm term_b_16;
ATerm term_v_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_a_7;
ATerm term_f_6;
void init_constant_terms (void)
{
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Op_2, term_a_10, (ATerm) ATempty);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_ConstType_1, term_b_10);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_CallT_3, term_y_13, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_14);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_CallT_3, term_b_14, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__3, term_g_23, term_h_23, term_f_6);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm h_0 (ATerm);
ATerm j_0 (ATerm);
ATerm l_0 (ATerm);
ATerm o_0 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm i_8 (ATerm w_6, ATerm y_6, ATerm z_6, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm a_130 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm y_127 (ATerm), ATerm);
ATerm downup_1_0 (ATerm y_128 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm o_130 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm CreateDef2_0_0 (ATerm);
ATerm SVar_1_0 (ATerm o_110 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t_136 (ATerm), ATerm u_136 (ATerm), ATerm);
ATerm s_23 (ATerm y_18, ATerm z_18, ATerm a_19, ATerm b_19, ATerm);
ATerm t_23 (ATerm j_19, ATerm k_19, ATerm m_19, ATerm n_19, ATerm);
ATerm u_23 (ATerm t_19, ATerm u_19, ATerm v_19, ATerm w_19, ATerm);
ATerm v_23 (ATerm c_20, ATerm d_20, ATerm e_20, ATerm f_20, ATerm);
ATerm w_23 (ATerm h_21, ATerm j_21, ATerm l_21, ATerm m_21, ATerm);
ATerm k_1 (ATerm);
ATerm m_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm t_1 (ATerm);
ATerm w_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm n_2 (ATerm);
ATerm r_2 (ATerm);
ATerm Canon_0_0 (ATerm);
ATerm downup2_2_0 (ATerm b_129 (ATerm), ATerm c_129 (ATerm), ATerm);
ATerm _2_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm u_146 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm w_149 (ATerm), ATerm);
ATerm m_25 (ATerm g_25, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm y_134 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm e_135 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm f_148 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm w_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm p_140 (ATerm), ATerm q_140 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_148 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm r_4 (ATerm);
ATerm need_help_1_0 (ATerm u_150 (ATerm), ATerm);
ATerm map_1_0 (ATerm n_134 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm p_114 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm q_114 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm parse_options_p__1_0 (ATerm x_152 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm p_5 (ATerm);
ATerm parse_options_1_0 (ATerm w_152 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm w_150 (ATerm), ATerm x_150 (ATerm), ATerm y_150 (ATerm), ATerm z_150 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm iowrap_3_0 (ATerm f_150 (ATerm), ATerm g_150 (ATerm), ATerm h_150 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
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
  t = term_f_6;
  t = whoami_0_0(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_0;
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,t_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL;
  if(match_cons(t, sym__2))
    {
      t_0 = ATgetArgument(t, 0);
      v_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_0;
  if(match_cons(t, sym_Build_1))
    {
      ATerm g_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_0;
  if(match_cons(t, sym_Where_1))
    {
      w_0 = ATgetArgument(t, 0);
      t = w_0;
      if(match_cons(t, sym_Prim_2))
        {
          p_0 = ATgetArgument(t, 0);
          q_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, p_0, q_0);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          w_0 = ATgetArgument(t, 0);
          x_0 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, w_0, x_0);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              w_0 = ATgetArgument(t, 0);
              x_0 = ATgetArgument(t, 1);
              y_0 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, w_0, x_0, y_0);
        }
    }
  return(t);
}
ATerm h_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_6 = ATgetArgument(t, 0);
      if(((ATgetType(h_6) != AT_LIST) || !(ATisEmpty(h_6))))
        _fail(t);
      {
        ATerm i_6 = ATgetArgument(t, 1);
        if(((ATgetType(i_6) != AT_LIST) || !(ATisEmpty(i_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_0 (ATerm t)
{
  ATerm z_1 = NULL,e_2 = NULL,i_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_6 = ATgetArgument(t, 0);
      if(((ATgetType(j_6) == AT_LIST) && !(ATisEmpty(j_6))))
        {
          z_1 = ATgetFirst((ATermList) j_6);
          i_2 = (ATerm) ATgetNext((ATermList) j_6);
        }
      else
        _fail(t);
      {
        ATerm k_6 = ATgetArgument(t, 1);
        if(((ATgetType(k_6) == AT_LIST) && !(ATisEmpty(k_6))))
          {
            e_2 = ATgetFirst((ATermList) k_6);
            l_2 = (ATerm) ATgetNext((ATermList) k_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_1, e_2), (ATerm) ATmakeAppl(sym__2, i_2, l_2));
  return(t);
}
ATerm l_0 (ATerm t)
{
  ATerm m_2 = NULL,o_2 = NULL;
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      o_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_2), m_2);
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      p_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_2), (ATerm) ATmakeAppl(sym_Match_1, q_2));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm j_1 = NULL,n_1 = NULL,s_1 = NULL,y_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_6 = ATgetArgument(t, 0);
      if(match_cons(l_6, sym_Build_1))
        {
          ATerm n_6 = ATgetArgument(l_6, 0);
          if(match_cons(n_6, sym_Op_2))
            {
              n_1 = ATgetArgument(n_6, 0);
              j_1 = ATgetArgument(n_6, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm m_6 = ATgetArgument(t, 1);
        if(match_cons(m_6, sym_Match_1))
          {
            ATerm o_6 = ATgetArgument(m_6, 0);
            if(match_cons(o_6, sym_Op_2))
              {
                if((n_1 != ATgetArgument(o_6, 0)))
                  {
                    _fail(ATgetArgument(o_6, 0));
                  }
                s_1 = ATgetArgument(o_6, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, j_1, s_1);
  t = genzip_4_0(h_0, j_0, l_0, o_0, t);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_1), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, n_1, j_1)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_6 = ATgetArgument(t, 0);
      if(match_cons(p_6, sym_Build_1))
        {
          ATerm r_6 = ATgetArgument(p_6, 0);
          if(match_cons(r_6, sym_Op_2))
            {
              s_2 = ATgetArgument(r_6, 0);
              {
                ATerm s_6 = ATgetArgument(r_6, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm q_6 = ATgetArgument(t, 1);
        if(match_cons(q_6, sym_Match_1))
          {
            ATerm t_6 = ATgetArgument(q_6, 0);
            if(match_cons(t_6, sym_Op_2))
              {
                t_2 = ATgetArgument(t_6, 0);
                {
                  ATerm u_6 = ATgetArgument(t_6, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, s_2, t_2);
  {
    ATerm v_6 = t;
    if((PushChoice() == 0))
      {
        ATerm v_2 = NULL;
        if(match_cons(t, sym__2))
          {
            v_2 = ATgetArgument(t, 0);
            if((v_2 != ATgetArgument(t, 1)))
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
        t = v_6;
      }
    t = term_a_7;
  }
  return(t);
}
ATerm i_8 (ATerm w_6, ATerm y_6, ATerm z_6, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, w_6, y_6);
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        {
          ATerm d_7 = t;
          int e_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(e_7);
            }
          else
            {
              t = d_7;
              {
                ATerm f_7 = t;
                int g_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_7 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm i_7 = ATgetArgument(t, 0);
                        ATerm j_7 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = w_6;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm k_7 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = y_6;
                    if(match_cons(t, sym_Build_1))
                      {
                        l_7 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Build_1, l_7);
                    ;
                    LocalPopChoice(g_7);
                  }
                else
                  {
                    t = f_7;
                    {
                      ATerm m_7 = t;
                      int n_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(n_7);
                        }
                      else
                        {
                          t = m_7;
                          {
                            ATerm p_7 = NULL,q_7 = NULL,s_7 = NULL,t_7 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm o_7 = ATgetArgument(t, 0);
                                ATerm r_7 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = w_6;
                            if(match_cons(t, sym_Match_1))
                              {
                                p_7 = ATgetArgument(t, 0);
                                t = y_6;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    s_7 = ATgetArgument(t, 0);
                                    t = s_7;
                                    if((p_7 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, p_7);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        s_7 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = p_7;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        q_7 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = s_7;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        t_7 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = t_7;
                                    if((q_7 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_7));
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    p_7 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = y_6;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    s_7 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = s_7;
                                if((p_7 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, p_7);
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
ATerm BuildMatch_0_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,b_8 = NULL,d_8 = NULL,f_8 = NULL;
  b_8 = t;
  if(match_cons(t, sym_Seq_2))
    {
      d_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8;
  if(match_cons(t, sym_Seq_2))
    {
      y_7 = ATgetArgument(t, 0);
      z_7 = ATgetArgument(t, 1);
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_1 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, d_8, y_7);
            {
              ATerm w_7 = t;
              int x_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(x_7);
                }
              else
                {
                  t = w_7;
                  {
                    ATerm a_8 = t;
                    int e_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(e_8);
                      }
                    else
                      {
                        t = a_8;
                        {
                          ATerm g_8 = t;
                          int h_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_1 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm j_8 = ATgetArgument(t, 0);
                                  ATerm m_8 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = d_8;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm o_8 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = y_7;
                              if(match_cons(t, sym_Build_1))
                                {
                                  p_1 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, p_1);
                              ;
                              LocalPopChoice(h_8);
                            }
                          else
                            {
                              t = g_8;
                              {
                                ATerm q_8 = t;
                                int r_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(r_8);
                                  }
                                else
                                  {
                                    t = q_8;
                                    {
                                      ATerm u_1 = NULL,v_1 = NULL,x_1 = NULL,a_2 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm s_8 = ATgetArgument(t, 0);
                                          ATerm t_8 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = d_8;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          u_1 = ATgetArgument(t, 0);
                                          t = y_7;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              x_1 = ATgetArgument(t, 0);
                                              t = x_1;
                                              if((u_1 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, u_1);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  x_1 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = u_1;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  v_1 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = x_1;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  a_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = a_2;
                                              if((v_1 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_1));
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              u_1 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = y_7;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              x_1 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = x_1;
                                          if((u_1 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, u_1);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              f_1 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, f_1, z_7);
            }
            ;
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            t = i_8(d_8, f_8, b_8, t);
          }
      }
    }
  else
    {
      t = i_8(d_8, f_8, b_8, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm a_130 (ATerm), ATerm t)
{
  ATerm l_8 (ATerm t)
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_130(t);
        ;
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
        t = SRTS_one(l_8, t);
      }
    return(t);
  }
  t = l_8(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm n_8 = NULL,p_8 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm w_8 = ATgetArgument(t, 0);
      if(((ATgetType(w_8) == AT_LIST) && !(ATisEmpty(w_8))))
        {
          ATerm y_8 = ATgetFirst((ATermList) w_8);
          if(match_cons(y_8, sym_SDefT_4))
            {
              p_8 = ATgetArgument(y_8, 0);
              {
                ATerm g_9 = ATgetArgument(y_8, 1);
                if(((ATgetType(g_9) != AT_LIST) || !(ATisEmpty(g_9))))
                  _fail(t);
              }
              {
                ATerm j_9 = ATgetArgument(y_8, 2);
                if(((ATgetType(j_9) != AT_LIST) || !(ATisEmpty(j_9))))
                  _fail(t);
              }
              n_8 = ATgetArgument(y_8, 3);
            }
          else
            _fail(t);
          {
            ATerm a_9 = (ATerm) ATgetNext((ATermList) w_8);
            if(((ATgetType(a_9) != AT_LIST) || !(ATisEmpty(a_9))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm x_8 = ATgetArgument(t, 1);
        if(match_cons(x_8, sym_CallT_3))
          {
            ATerm k_9 = ATgetArgument(x_8, 0);
            if(match_cons(k_9, sym_SVar_1))
              {
                if((p_8 != ATgetArgument(k_9, 0)))
                  {
                    _fail(ATgetArgument(k_9, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm l_9 = ATgetArgument(x_8, 1);
              if(((ATgetType(l_9) != AT_LIST) || !(ATisEmpty(l_9))))
                _fail(t);
            }
            {
              ATerm m_9 = ATgetArgument(x_8, 2);
              if(((ATgetType(m_9) != AT_LIST) || !(ATisEmpty(m_9))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_8;
  {
    ATerm n_9 = t;
    if((PushChoice() == 0))
      {
        ATerm r_0 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm o_9 = ATgetArgument(t, 0);
              if(match_cons(o_9, sym_SVar_1))
                {
                  if((p_8 != ATgetArgument(o_9, 0)))
                    {
                      _fail(ATgetArgument(o_9, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm p_9 = ATgetArgument(t, 1);
                if(((ATgetType(p_9) != AT_LIST) || !(ATisEmpty(p_9))))
                  _fail(t);
              }
              {
                ATerm q_9 = ATgetArgument(t, 2);
                if(((ATgetType(q_9) != AT_LIST) || !(ATisEmpty(q_9))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(r_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_9;
      }
    t = n_8;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm z_8 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,h_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      h_9 = ATgetArgument(t, 0);
      t = h_9;
      if(match_cons(t, sym_Seq_2))
        {
          f_9 = ATgetArgument(t, 0);
          b_9 = ATgetArgument(t, 1);
          t = f_9;
          if(match_cons(t, sym_Where_1))
            {
              z_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_9;
          if(match_cons(t, sym_Seq_2))
            {
              c_9 = ATgetArgument(t, 0);
              e_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_9;
          if(match_cons(t, sym_Build_1))
            {
              d_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, z_8, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_9), e_9)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              f_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, f_9);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          h_9 = ATgetArgument(t, 0);
          t = h_9;
          if(match_cons(t, sym_Test_1))
            {
              f_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, f_9);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              h_9 = ATgetArgument(t, 0);
              t = h_9;
              if(match_cons(t, sym_Not_1))
                {
                  f_9 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, f_9);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  h_9 = ATgetArgument(t, 0);
                  i_9 = ATgetArgument(t, 1);
                  t = i_9;
                  if((h_9 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      h_9 = ATgetArgument(t, 0);
                      i_9 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_9;
                  if((h_9 != t))
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
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      w_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
      t = w_9;
      if(match_cons(t, sym_LChoice_2))
        {
          x_9 = ATgetArgument(t, 0);
          y_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, x_9, (ATerm) ATmakeAppl(sym_LChoice_2, y_9, z_9));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          w_9 = ATgetArgument(t, 0);
          z_9 = ATgetArgument(t, 1);
          t = w_9;
          if(match_cons(t, sym_Seq_2))
            {
              x_9 = ATgetArgument(t, 0);
              y_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, x_9, (ATerm) ATmakeAppl(sym_Seq_2, y_9, z_9));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              w_9 = ATgetArgument(t, 0);
              z_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_9;
          if(match_cons(t, sym_Choice_2))
            {
              x_9 = ATgetArgument(t, 0);
              y_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, x_9, (ATerm) ATmakeAppl(sym_Choice_2, y_9, z_9));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm s_0 (ATerm t)
        {
          ATerm u_9 = t;
          int v_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(v_9);
            }
          else
            {
              t = u_9;
            }
          return(t);
        }
        t = Cons_2_0(_id, s_0, t);
      }
      ;
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      {
        ATerm u_0 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, u_0, t);
      }
    }
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm d_12 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_12, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_10), term_c_10));
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_12 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, f_12, term_c_10);
      ;
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
    }
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm r_12 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_12, term_c_10);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_12 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, t_12, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_10), term_c_10));
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
    }
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm c_13 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      c_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_10), term_c_10));
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_13 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, e_13, term_c_10);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm e_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,l_11 = NULL,m_11 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      l_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, l_11, m_11);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          l_11 = ATgetArgument(t, 0);
          t = l_11;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_11 = ATgetFirst((ATermList) t);
              h_11 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, e_11, (ATerm) ATmakeAppl(sym_LChoices_1, h_11));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_a_7;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              l_11 = ATgetArgument(t, 0);
              t = l_11;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_11 = ATgetFirst((ATermList) t);
                  h_11 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, e_11, (ATerm) ATmakeAppl(sym_Choices_1, h_11));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_a_7;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  l_11 = ATgetArgument(t, 0);
                  t = l_11;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_11 = ATgetFirst((ATermList) t);
                      h_11 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_11, (ATerm) ATmakeAppl(sym_Seqs_1, h_11));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_k_10;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_11 = ATgetArgument(t, 0);
                      m_11 = ATgetArgument(t, 1);
                      j_11 = ATgetArgument(t, 2);
                      i_11 = ATgetArgument(t, 3);
                      {
                        ATerm a_12 = NULL,c_12 = NULL;
                        t = m_11;
                        t = map1_1_0(z_0, t);
                        a_12 = t;
                        t = j_11;
                        t = map1_1_0(a_1, t);
                        c_12 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, l_11, a_12, c_12, i_11);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          l_11 = ATgetArgument(t, 0);
                          m_11 = ATgetArgument(t, 1);
                          j_11 = ATgetArgument(t, 2);
                          i_11 = ATgetArgument(t, 3);
                          {
                            ATerm l_10 = t;
                            int m_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_12 = NULL,q_12 = NULL;
                                t = j_11;
                                t = map1_1_0(b_1, t);
                                p_12 = t;
                                t = m_11;
                                t = map_1_0(c_1, t);
                                q_12 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, l_11, q_12, p_12, i_11);
                                ;
                                LocalPopChoice(m_10);
                              }
                            else
                              {
                                t = l_10;
                                {
                                  ATerm a_13 = NULL,b_13 = NULL;
                                  t = m_11;
                                  t = map1_1_0(d_1, t);
                                  a_13 = t;
                                  t = j_11;
                                  t = map_1_0(e_1, t);
                                  b_13 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, l_11, a_13, b_13, i_11);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              l_11 = ATgetArgument(t, 0);
                              m_11 = ATgetArgument(t, 1);
                              j_11 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, m_11, (ATerm) ATmakeAppl(sym_Op_2, term_n_10, (ATerm) ATinsert(ATinsert(ATempty, j_11), l_11)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  l_11 = ATgetArgument(t, 0);
                                  m_11 = ATgetArgument(t, 1);
                                  j_11 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, j_11)), l_11), (ATerm) ATmakeAppl(sym_Build_1, m_11)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      l_11 = ATgetArgument(t, 0);
                                      m_11 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_11, (ATerm) ATmakeAppl(sym_Match_1, m_11));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          l_11 = ATgetArgument(t, 0);
                                          m_11 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_11), m_11);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              l_11 = ATgetArgument(t, 0);
                                              m_11 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_11), l_11);
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
ATerm g_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm m_14 = NULL,q_14 = NULL,r_14 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      m_14 = ATgetArgument(t, 0);
      t = m_14;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_a_7;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          m_14 = ATgetArgument(t, 0);
          t = m_14;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_k_10;
        }
      else
        {
          ATerm o_10 = t;
          int p_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  m_14 = ATgetArgument(t, 0);
                  {
                    ATerm q_10 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(p_10);
              t = m_14;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_a_7;
            }
          else
            {
              t = o_10;
              {
                ATerm r_10 = t;
                int t_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm u_10 = ATgetArgument(t, 0);
                        q_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(t_10);
                    t = q_14;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_a_7;
                  }
                else
                  {
                    t = r_10;
                    {
                      ATerm w_10 = t;
                      int x_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm y_10 = ATgetArgument(t, 0);
                              q_14 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(x_10);
                          t = q_14;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_a_7;
                        }
                      else
                        {
                          t = w_10;
                          if(match_cons(t, sym_Some_1))
                            {
                              m_14 = ATgetArgument(t, 0);
                              t = m_14;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_a_7;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  m_14 = ATgetArgument(t, 0);
                                  t = m_14;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_a_7;
                                }
                              else
                                {
                                  ATerm z_10 = t;
                                  int a_11 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm b_11 = ATgetArgument(t, 0);
                                          q_14 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(a_11);
                                      t = q_14;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_a_7;
                                    }
                                  else
                                    {
                                      t = z_10;
                                      {
                                        ATerm c_11 = t;
                                        int d_11 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm f_11 = ATgetArgument(t, 0);
                                                q_14 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(d_11);
                                            t = q_14;
                                            t = fetch_1_0(g_1, t);
                                            t = term_a_7;
                                          }
                                        else
                                          {
                                            t = c_11;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                m_14 = ATgetArgument(t, 0);
                                                q_14 = ATgetArgument(t, 1);
                                                t = q_14;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = m_14;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm g_11 = t;
                                                        int k_11 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = q_14;
                                                            ;
                                                            LocalPopChoice(k_11);
                                                          }
                                                        else
                                                          {
                                                            t = g_11;
                                                            t = m_14;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = m_14;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = m_14;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = q_14;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    m_14 = ATgetArgument(t, 0);
                                                    q_14 = ATgetArgument(t, 1);
                                                    t = q_14;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = m_14;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm n_11 = t;
                                                            int o_11 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = q_14;
                                                                ;
                                                                LocalPopChoice(o_11);
                                                              }
                                                            else
                                                              {
                                                                t = n_11;
                                                                t = m_14;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = m_14;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = m_14;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = q_14;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        m_14 = ATgetArgument(t, 0);
                                                        t = m_14;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = term_a_7;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            m_14 = ATgetArgument(t, 0);
                                                            q_14 = ATgetArgument(t, 1);
                                                            r_14 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = r_14;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, m_14, q_14);
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
ATerm ElimId_0_0 (ATerm t)
{
  ATerm t_15 = NULL,y_15 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      y_15 = ATgetArgument(t, 0);
      t = y_15;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_k_10;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          y_15 = ATgetArgument(t, 0);
          t = y_15;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_a_7;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              y_15 = ATgetArgument(t, 0);
              t_15 = ATgetArgument(t, 1);
              t = t_15;
              if(match_cons(t, sym_Id_0))
                {
                  t = y_15;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm p_11 = t;
                      int q_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = t_15;
                          ;
                          LocalPopChoice(q_11);
                        }
                      else
                        {
                          t = p_11;
                          t = y_15;
                        }
                    }
                  else
                    {
                      t = y_15;
                    }
                }
              else
                {
                  t = y_15;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = t_15;
                }
            }
          else
            {
              ATerm r_11 = t;
              int s_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      y_15 = ATgetArgument(t, 0);
                      {
                        ATerm t_11 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(s_11);
                  t = y_15;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_k_10;
                }
              else
                {
                  t = r_11;
                  {
                    ATerm u_11 = t;
                    int v_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm w_11 = ATgetArgument(t, 0);
                            t_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(v_11);
                        t = t_15;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_k_10;
                      }
                    else
                      {
                        t = u_11;
                        {
                          ATerm x_11 = t;
                          int y_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm z_11 = ATgetArgument(t, 0);
                                  t_15 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(y_11);
                              t = t_15;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_k_10;
                            }
                          else
                            {
                              t = x_11;
                              if(match_cons(t, sym_All_1))
                                {
                                  y_15 = ATgetArgument(t, 0);
                                  t = y_15;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_k_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      y_15 = ATgetArgument(t, 0);
                                      t = y_15;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_k_10;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          y_15 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = y_15;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_k_10;
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
  ATerm b_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = b_12;
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            {
              ATerm i_12 = t;
              int j_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(j_12);
                }
              else
                {
                  t = i_12;
                  {
                    ATerm k_12 = t;
                    int l_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(l_12);
                      }
                    else
                      {
                        t = k_12;
                        {
                          ATerm m_12 = t;
                          int n_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(n_12);
                            }
                          else
                            {
                              t = m_12;
                              {
                                ATerm o_12 = t;
                                int s_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_16 = NULL,p_16 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        o_16 = ATgetArgument(t, 0);
                                        p_16 = ATgetArgument(t, 1);
                                        t = o_16;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = p_16;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            o_16 = ATgetArgument(t, 0);
                                            p_16 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = o_16;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = p_16;
                                      }
                                    ;
                                    LocalPopChoice(s_12);
                                  }
                                else
                                  {
                                    t = o_12;
                                    {
                                      ATerm u_12 = t;
                                      int v_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
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
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(x_12);
                                              }
                                            else
                                              {
                                                t = w_12;
                                                {
                                                  ATerm t_16 = NULL,u_16 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      t_16 = ATgetArgument(t, 0);
                                                      u_16 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = t_16;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = u_16;
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
ATerm repeat_1_0 (ATerm y_127 (ATerm), ATerm t)
{
  ATerm w_16 (ATerm t)
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_127(t);
        t = w_16(t);
        ;
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
      }
    return(t);
  }
  t = w_16(t);
  return(t);
}
ATerm downup_1_0 (ATerm y_128 (ATerm), ATerm t)
{
  t = y_128(t);
  {
    ATerm h_1 (ATerm t)
    {
      t = downup_1_0(y_128, t);
      return(t);
    }
    t = SRTS_all(h_1, t);
    t = y_128(t);
  }
  return(t);
}
ATerm alltd_1_0 (ATerm o_130 (ATerm), ATerm t)
{
  ATerm q_17 (ATerm t)
  {
    ATerm d_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_130(t);
        ;
        LocalPopChoice(f_13);
      }
    else
      {
        t = d_13;
        t = SRTS_all(q_17, t);
      }
    return(t);
  }
  t = q_17(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm CreateDef2_0_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL;
  x_16 = t;
  t = new_0_0(t);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_16), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, y_16, (ATerm)ATempty, (ATerm)ATempty, x_16)));
  return(t);
}
ATerm SVar_1_0 (ATerm o_110 (ATerm), ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
  c_17 = t;
  if(match_cons(t, sym_SVar_1))
    {
      a_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_17);
  z_16 = t;
  t = a_17;
  t = o_110(t);
  b_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, b_17), z_16);
  return(t);
}
ATerm CallT_3_0 (ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  m_17 = t;
  if(match_cons(t, sym_CallT_3))
    {
      g_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
      i_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_17);
  f_17 = t;
  t = g_17;
  t = t_110(t);
  j_17 = t;
  t = h_17;
  t = u_110(t);
  k_17 = t;
  t = i_17;
  t = v_110(t);
  l_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, j_17, k_17, l_17), f_17);
  return(t);
}
ATerm genzip_4_0 (ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t_136 (ATerm), ATerm u_136 (ATerm), ATerm t)
{
  ATerm p_17 (ATerm t)
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_136(t);
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        t = s_136(t);
        t = _2_0(u_136, p_17, t);
        t = t_136(t);
      }
    return(t);
  }
  t = p_17(t);
  return(t);
}
ATerm s_23 (ATerm y_18, ATerm z_18, ATerm a_19, ATerm b_19, ATerm t)
{
  ATerm f_19 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_18, z_18);
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 (ATerm t)
        {
          t = z_18;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm k_13 = ATgetArgument(t, 0);
            ATerm l_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_18;
        t = at_end_1_0(i_1, t);
        ;
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        {
          ATerm u_2 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, y_18, z_18));
          if(match_cons(t, sym__2))
            {
              ATerm m_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) m_13) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              u_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_2;
          t = concat_0_0(t);
        }
      }
    f_19 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, f_19, a_19);
  }
  return(t);
}
ATerm t_23 (ATerm j_19, ATerm k_19, ATerm m_19, ATerm n_19, ATerm t)
{
  ATerm r_19 = NULL;
  t = k_19;
  {
    ATerm x_23 (ATerm t)
    {
      ATerm n_13 = t;
      int o_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_1 (ATerm t)
          {
            ATerm p_13 = t;
            int q_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = x_23(t);
                ;
                LocalPopChoice(q_13);
              }
            else
              {
                t = p_13;
              }
            return(t);
          }
          t = Cons_2_0(k_1, l_1, t);
          ;
          LocalPopChoice(o_13);
        }
      else
        {
          t = n_13;
          t = Cons_2_0(_id, x_23, t);
        }
      return(t);
    }
    t = x_23(t);
    r_19 = t;
    t = (ATerm) ATmakeAppl(sym_PrimT_3, j_19, r_19, m_19);
  }
  return(t);
}
ATerm u_23 (ATerm t_19, ATerm u_19, ATerm v_19, ATerm w_19, ATerm t)
{
  ATerm a_20 = NULL;
  t = u_19;
  {
    ATerm y_23 (ATerm t)
    {
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_1 (ATerm t)
          {
            ATerm t_13 = t;
            int u_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = y_23(t);
                ;
                LocalPopChoice(u_13);
              }
            else
              {
                t = t_13;
              }
            return(t);
          }
          t = Cons_2_0(m_1, o_1, t);
          ;
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          t = Cons_2_0(_id, y_23, t);
        }
      return(t);
    }
    t = y_23(t);
    a_20 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, t_19, a_20, v_19);
  }
  return(t);
}
ATerm v_23 (ATerm c_20, ATerm d_20, ATerm e_20, ATerm f_20, ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  t = d_20;
  t = genzip_4_0(q_1, r_1, t_1, w_1, t);
  if(match_cons(t, sym__2))
    {
      j_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_20;
  t = concat_0_0(t);
  l_20 = t;
  {
    ATerm v_13 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_13;
      }
    t = (ATerm) ATmakeAppl(sym_Let_2, l_20, (ATerm) ATmakeAppl(sym_PrimT_3, c_20, j_20, e_20));
  }
  return(t);
}
ATerm w_23 (ATerm h_21, ATerm j_21, ATerm l_21, ATerm m_21, ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
  t = j_21;
  t = genzip_4_0(f_2, g_2, h_2, j_2, t);
  if(match_cons(t, sym__2))
    {
      q_21 = ATgetArgument(t, 0);
      r_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_21;
  t = concat_0_0(t);
  s_21 = t;
  {
    ATerm w_13 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_13;
      }
    t = (ATerm) ATmakeAppl(sym_Let_2, s_21, (ATerm) ATmakeAppl(sym_CallT_3, h_21, q_21, l_21));
  }
  return(t);
}
ATerm k_1 (ATerm t)
{
  if(match_cons(t, sym_Id_0))
    {
      t = term_z_13;
    }
  else
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_c_14;
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  if(match_cons(t, sym_Id_0))
    {
      t = term_z_13;
    }
  else
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_c_14;
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_14;
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_20 = ATgetFirst((ATermList) t);
      n_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_20, n_20);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_14 = ATgetArgument(t, 0);
      if(match_cons(e_14, sym__2))
        {
          o_20 = ATgetArgument(e_14, 0);
          q_20 = ATgetArgument(e_14, 1);
        }
      else
        _fail(t);
      {
        ATerm f_14 = ATgetArgument(t, 1);
        if(match_cons(f_14, sym__2))
          {
            p_20 = ATgetArgument(f_14, 0);
            r_20 = ATgetArgument(f_14, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_20), o_20), (ATerm) ATinsert(CheckATermList(r_20), q_20));
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Id_0))
        {
          t = term_z_13;
        }
      else
        {
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_c_14;
        }
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
    }
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,z_20 = NULL,b_21 = NULL,c_21 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            u_20 = ATgetArgument(t, 0);
            v_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_20;
        if(match_cons(t, sym_CallT_3))
          {
            w_20 = ATgetArgument(t, 0);
            b_21 = ATgetArgument(t, 1);
            c_21 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = w_20;
        if(match_cons(t, sym_SVar_1))
          {
            z_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_21;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_21;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_20), (ATerm)ATempty, (ATerm) ATempty), u_20);
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        {
          ATerm k_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_14 = t;
              if((PushChoice() == 0))
                {
                  t = CallT_3_0(b_2, c_2, d_2, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = n_14;
                }
              t = CreateDef2_0_0(t);
              ;
              LocalPopChoice(l_14);
            }
          else
            {
              t = k_14;
              {
                ATerm w_2 = NULL;
                w_2 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_2, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = SVar_1_0(_id, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_14;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_21 = ATgetFirst((ATermList) t);
      u_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_21, u_21);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      if(match_cons(o_14, sym__2))
        {
          v_21 = ATgetArgument(o_14, 0);
          x_21 = ATgetArgument(o_14, 1);
        }
      else
        _fail(t);
      {
        ATerm p_14 = ATgetArgument(t, 1);
        if(match_cons(p_14, sym__2))
          {
            w_21 = ATgetArgument(p_14, 0);
            y_21 = ATgetArgument(p_14, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_21), v_21), (ATerm) ATinsert(CheckATermList(y_21), x_21));
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Id_0))
        {
          t = term_z_13;
        }
      else
        {
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_c_14;
        }
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
    }
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            b_22 = ATgetArgument(t, 0);
            c_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_22;
        if(match_cons(t, sym_CallT_3))
          {
            d_22 = ATgetArgument(t, 0);
            f_22 = ATgetArgument(t, 1);
            g_22 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = d_22;
        if(match_cons(t, sym_SVar_1))
          {
            e_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_22), (ATerm)ATempty, (ATerm) ATempty), b_22);
        ;
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        {
          ATerm w_14 = t;
          int x_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_14 = t;
              if((PushChoice() == 0))
                {
                  t = CallT_3_0(k_2, n_2, r_2, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = y_14;
                }
              t = CreateDef2_0_0(t);
              ;
              LocalPopChoice(x_14);
            }
          else
            {
              t = w_14;
              {
                ATerm b_3 = NULL;
                b_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_3, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = SVar_1_0(_id, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm Canon_0_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL;
  q_22 = t;
  if(match_cons(t, sym_Rec_2))
    {
      r_22 = ATgetArgument(t, 0);
      s_22 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, r_22, (ATerm)ATempty, (ATerm)ATempty, s_22)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_22), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          r_22 = ATgetArgument(t, 0);
          s_22 = ATgetArgument(t, 1);
          t_22 = ATgetArgument(t, 2);
          j_22 = ATgetArgument(t, 3);
          {
            ATerm z_22 = NULL;
            t = s_22;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = t_22;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = j_22;
            if(match_cons(t, sym_Rec_2))
              {
                k_22 = ATgetArgument(t, 0);
                l_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_22;
            {
              ATerm x_2 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm z_14 = ATgetArgument(t, 0);
                    if(match_cons(z_14, sym_SVar_1))
                      {
                        if((k_22 != ATgetArgument(z_14, 0)))
                          {
                            _fail(ATgetArgument(z_14, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm a_15 = ATgetArgument(t, 1);
                      if(((ATgetType(a_15) != AT_LIST) || !(ATisEmpty(a_15))))
                        _fail(t);
                    }
                    {
                      ATerm b_15 = ATgetArgument(t, 2);
                      if(((ATgetType(b_15) != AT_LIST) || !(ATisEmpty(b_15))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_22), (ATerm)ATempty, (ATerm) ATempty);
                return(t);
              }
              t = alltd_1_0(x_2, t);
              z_22 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, r_22, (ATerm)ATempty, (ATerm)ATempty, z_22);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              r_22 = ATgetArgument(t, 0);
              s_22 = ATgetArgument(t, 1);
              t = s_22;
              if(match_cons(t, sym_Seq_2))
                {
                  o_22 = ATgetArgument(t, 0);
                  p_22 = ATgetArgument(t, 1);
                  t = r_22;
                  if(match_cons(t, sym_Where_1))
                    {
                      n_22 = ATgetArgument(t, 0);
                      t = o_22;
                      if(match_cons(t, sym_Build_1))
                        {
                          m_22 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_22), p_22));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = s_22;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      o_22 = ATgetArgument(t, 0);
                      t = r_22;
                      if(match_cons(t, sym_Where_1))
                        {
                          n_22 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, (ATerm) ATmakeAppl(sym_Build_1, o_22));
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = s_22;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Id_0))
                        {
                          t = r_22;
                          if(match_cons(t, sym_Id_0))
                            {
                              ATerm c_15 = t;
                              int d_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = r_22;
                                  ;
                                  LocalPopChoice(d_15);
                                }
                              else
                                {
                                  t = c_15;
                                  t = s_22;
                                }
                            }
                          else
                            {
                              t = r_22;
                            }
                        }
                      else
                        {
                          t = r_22;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = s_22;
                        }
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  r_22 = ATgetArgument(t, 0);
                  s_22 = ATgetArgument(t, 1);
                  t = s_22;
                  if(match_cons(t, sym_Scope_2))
                    {
                      o_22 = ATgetArgument(t, 0);
                      p_22 = ATgetArgument(t, 1);
                      t = r_22;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm e_15 = t;
                          int f_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = s_23(r_22, o_22, p_22, q_22, t);
                              ;
                              LocalPopChoice(f_15);
                            }
                          else
                            {
                              t = e_15;
                              t = s_22;
                            }
                        }
                      else
                        {
                          t = s_23(r_22, o_22, p_22, q_22, t);
                        }
                    }
                  else
                    {
                      t = r_22;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = s_22;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Thread_1))
                    {
                      r_22 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_15, (ATerm)ATinsert(ATempty, r_22), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          r_22 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_15, (ATerm)ATinsert(ATempty, r_22), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              r_22 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_15, (ATerm)ATinsert(ATempty, r_22), (ATerm) ATempty);
                            }
                          else
                            {
                              if(match_cons(t, sym_All_1))
                                {
                                  r_22 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_15, (ATerm)ATinsert(ATempty, r_22), (ATerm) ATempty);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Bagof_1))
                                    {
                                      r_22 = ATgetArgument(t, 0);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_p_15, (ATerm)ATinsert(ATempty, r_22), (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_PrimT_3))
                                        {
                                          r_22 = ATgetArgument(t, 0);
                                          s_22 = ATgetArgument(t, 1);
                                          t_22 = ATgetArgument(t, 2);
                                          {
                                            ATerm q_15 = t;
                                            int r_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = t_23(r_22, s_22, t_22, q_22, t);
                                                ;
                                                LocalPopChoice(r_15);
                                              }
                                            else
                                              {
                                                t = q_15;
                                                t = v_23(r_22, s_22, t_22, q_22, t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              r_22 = ATgetArgument(t, 0);
                                              s_22 = ATgetArgument(t, 1);
                                              t_22 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm s_15 = t;
                                            int u_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = u_23(r_22, s_22, t_22, q_22, t);
                                                ;
                                                LocalPopChoice(u_15);
                                              }
                                            else
                                              {
                                                t = s_15;
                                                t = w_23(r_22, s_22, t_22, q_22, t);
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
ATerm downup2_2_0 (ATerm b_129 (ATerm), ATerm c_129 (ATerm), ATerm t)
{
  t = b_129(t);
  {
    ATerm y_2 (ATerm t)
    {
      t = downup2_2_0(b_129, c_129, t);
      return(t);
    }
    t = SRTS_all(y_2, t);
    t = c_129(t);
  }
  return(t);
}
ATerm _2_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL;
  e_24 = t;
  if(match_cons(t, sym__2))
    {
      a_24 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_24);
  z_23 = t;
  t = a_24;
  t = o_101(t);
  c_24 = t;
  t = b_24;
  t = p_101(t);
  d_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, c_24, d_24), z_23);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm u_146 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  if(match_cons(t, sym__2))
    {
      h_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_24, term_v_15);
  t = open_stream_0_0(t);
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_24, i_24);
  t = u_146(t);
  t = fclose_0_0(t);
  t = i_24;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = fetch_1_0(f_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = WriteToFile_1_0(h_3, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_15 = ATgetArgument(t, 0);
      if(match_cons(w_15, sym_Stream_1))
        {
          m_24 = ATgetArgument(w_15, 0);
        }
      else
        _fail(t);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(m_24, n_24);
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_24);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = WriteToFile_1_0(j_3, t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,t_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_15 = ATgetArgument(t, 0);
      if(match_cons(x_15, sym_Stream_1))
        {
          p_24 = ATgetArgument(x_15, 0);
        }
      else
        _fail(t);
      q_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(p_24, q_24);
  r_24 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), r_24);
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_24);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL;
  k_24 = t;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm z_15 = t;
      int a_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((l_24 != NULL) && (l_24 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(a_3, t);
          ;
          LocalPopChoice(a_16);
        }
      else
        {
          t = z_15;
          t = term_b_16;
          if(((l_24 != NULL) && (l_24 != t)))
            _fail(t);
          else
            l_24 = t;
        }
      return(t);
    }
    t = _2_0(z_2, _id, t);
    t = k_24;
    {
      ATerm c_3 (ATerm t)
      {
        ATerm g_3 = NULL;
        g_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_24), g_3);
        return(t);
      }
      t = _2_0(_id, c_3, t);
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(d_3, e_3, t);
            ;
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            t = _2_0(_id, i_3, t);
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
ATerm apply_strategy_1_0 (ATerm w_149 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL;
  u_24 = t;
  t = dtime_0_0(t);
  t = u_24;
  t = w_149(t);
  v_24 = t;
  t = dtime_0_0(t);
  w_24 = t;
  t = v_24;
  if(match_cons(t, sym__2))
    {
      x_24 = ATgetArgument(t, 0);
      y_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_24), (ATerm) ATmakeAppl(sym_Runtime_1, w_24)), y_24);
  return(t);
}
ATerm m_25 (ATerm g_25, ATerm t)
{
  t = SSL_fclose(g_25);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL;
  k_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_25 = ATgetArgument(t, 0);
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_25);
            ;
            LocalPopChoice(f_16);
          }
        else
          {
            t = e_16;
            t = m_25(k_25, t);
          }
      }
    }
  else
    {
      t = m_25(k_25, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_25 = NULL;
  t = SSL_stdin_stream();
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_25);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_25 = NULL;
  t = SSL_stdout_stream();
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_25);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_25 = NULL;
  t = SSL_stderr_stream();
  p_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_25);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm x_25 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      x_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_25;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm b_26 = NULL;
  b_26 = t;
  t = SSL_is_string(b_26);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_16 = ATgetArgument(t, 0);
      ATerm h_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_3 = NULL,u_3 = NULL;
        t_3 = t;
        t = SSL_explode_term(t_3);
        if(match_cons(t, sym__2))
          {
            ATerm k_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_16) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_16 = ATgetArgument(t, 1);
              if(((ATgetType(l_16) == AT_LIST) && !(ATisEmpty(l_16))))
                {
                  u_3 = ATgetFirst((ATermList) l_16);
                  {
                    ATerm m_16 = (ATerm) ATgetNext((ATermList) l_16);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = u_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = u_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = u_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        {
          ATerm n_16 = t;
          int q_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
              t = _2_0(k_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  u_25 = ATgetArgument(t, 0);
                  v_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(u_25, v_25);
              w_25 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, w_25);
              ;
              LocalPopChoice(q_16);
            }
          else
            {
              t = n_16;
              {
                ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
                t = _2_0(l_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    y_25 = ATgetArgument(t, 0);
                    z_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(y_25, z_25);
                a_26 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, a_26);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_26 = NULL,f_26 = NULL,g_26 = NULL;
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_26 = NULL;
      h_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_26, term_v_16);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      {
        ATerm v_3 = NULL;
        v_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = v_3;
        _fail(t);
      }
    }
  c_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(g_26);
  f_26 = t;
  t = c_26;
  t = fclose_0_0(t);
  t = f_26;
  return(t);
}
ATerm fetch_1_0 (ATerm y_134 (ATerm), ATerm t)
{
  ATerm m_26 (ATerm t)
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_134, _id, t);
        ;
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        t = Cons_2_0(_id, m_26, t);
      }
    return(t);
  }
  t = m_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      {
        ATerm p_26 = NULL,q_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_26 = ATgetFirst((ATermList) t);
            q_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_26;
        {
          ATerm m_3 (ATerm t)
          {
            t = q_26;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_3, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm e_135 (ATerm), ATerm t)
{
  ATerm w_26 (ATerm t)
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_26, t);
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_135(t);
      }
    return(t);
  }
  t = w_26(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm z_26 = NULL;
  z_26 = t;
  t = SSL_explode_string(z_26);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm c_27 = NULL;
  c_27 = t;
  t = SSL_explode_string(c_27);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm y_26 = NULL;
  t = _2_0(n_3, o_3, t);
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_27 = NULL,f_27 = NULL;
        if(match_cons(t, sym__2))
          {
            e_27 = ATgetArgument(t, 0);
            f_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_27;
        {
          ATerm p_3 (ATerm t)
          {
            t = f_27;
            return(t);
          }
          t = at_end_1_0(p_3, t);
        }
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        {
          ATerm a_4 = NULL,b_4 = NULL;
          a_4 = t;
          t = SSL_explode_term(a_4);
          if(match_cons(t, sym__2))
            {
              ATerm v_17 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_17) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_4;
          t = concat_0_0(t);
        }
      }
    y_26 = t;
    t = SSL_implode_string(y_26);
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_27 = NULL;
      p_27 = t;
      t = SSL_is_string(p_27);
      ;
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_3, t);
            ;
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            {
              ATerm t_27 = NULL,v_27 = NULL,w_27 = NULL;
              t_27 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_27 = ATgetArgument(t, 0);
                  t = v_27;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_27 = ATgetArgument(t, 0);
                      t = v_27;
                      {
                        ATerm c_18 = t;
                        int d_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_27);
                            {
                              ATerm e_18 = t;
                              int f_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm w_4 = NULL;
                                  t = eval_config_0_0(t);
                                  w_4 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_27, w_4);
                                  t = w_4;
                                  ;
                                  LocalPopChoice(f_18);
                                }
                              else
                                {
                                  t = e_18;
                                }
                            }
                            ;
                            LocalPopChoice(d_18);
                          }
                        else
                          {
                            t = c_18;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_27), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = v_27;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_28 = NULL,b_28 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_27 = ATgetArgument(t, 0);
                          w_27 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_27;
                      t = eval_config_0_0(t);
                      a_28 = t;
                      t = w_27;
                      t = eval_config_0_0(t);
                      b_28 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_28, b_28);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_148 (ATerm), ATerm t)
{
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_28 = NULL,i_28 = NULL;
      g_28 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_5 = NULL;
            t = eval_config_0_0(t);
            e_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_5);
            t = e_5;
            ;
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
          }
        i_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_28, term_k_18);
        t = geq_0_0(t);
        t = g_28;
        t = f_148(t);
      }
      ;
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm k_28 = NULL;
  k_28 = t;
  if(match_string(t, "-k"))
    {
      t = k_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_28;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL;
  l_28 = t;
  t = SSL_string_to_int(l_28);
  m_28 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), m_28);
  t = l_28;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, s_3, w_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  if(match_string(t, "-S"))
    {
      t = o_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_28;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_n_18;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_o_18;
  return(t);
}
ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL;
  p_28 = t;
  t = SSL_string_to_int(p_28);
  q_28 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_28);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_28);
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_p_18;
  return(t);
}
ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_18;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_r_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_3, y_3, z_3, t);
      ;
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      {
        ATerm u_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_4, d_4, e_4, t);
            ;
            LocalPopChoice(v_18);
          }
        else
          {
            t = u_18;
            t = Option_3_0(f_4, g_4, h_4, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_28 = NULL;
      t = term_f_6;
      t = d_0(t);
      v_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_18, term_x_18, v_28);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm y_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_28 = ATgetFirst((ATermList) t);
          u_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_28;
      t = a_0(t);
      t = term_f_6;
      t = b_0(t);
      y_28 = t;
      t = (ATerm) ATinsert(CheckATermList(u_28), y_28);
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  if(match_string(t, "-o"))
    {
      t = a_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_29;
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm b_29 = NULL;
  b_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), b_29);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_29);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_c_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_4, j_4, k_4, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
  if(match_cons(t, sym__3))
    {
      g_29 = ATgetArgument(t, 0);
      h_29 = ATgetArgument(t, 1);
      i_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_29, h_29);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_19 = ATgetArgument(t, 0);
            ATerm h_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_29, h_29);
        ;
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = (ATerm) ATempty;
      }
    j_29 = t;
    t = SSL_table_put(g_29, h_29, (ATerm) ATinsert(CheckATermList(j_29), i_29));
    t = (ATerm) ATmakeAppl(sym__3, g_29, h_29, i_29);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_29 = NULL;
      t = term_f_6;
      t = m_0(t);
      v_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_18, term_x_18, v_29);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm z_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_29 = ATgetFirst((ATermList) t);
          s_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_29 = ATgetFirst((ATermList) t);
          u_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_29;
      t = i_0(t);
      t = t_29;
      t = k_0(t);
      z_29 = t;
      t = (ATerm) ATinsert(CheckATermList(u_29), z_29);
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm b_30 = NULL;
  b_30 = t;
  if(match_string(t, "-i"))
    {
      t = b_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_30;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm e_30 = NULL;
  e_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), e_30);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_30);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_i_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, n_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_6;
  t = whoami_0_0(t);
  f_30 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), f_30));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm l_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 = NULL;
        t = eval_config_0_0(t);
        i_5 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_5);
        t = i_5;
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = l_19;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm p_140 (ATerm), ATerm q_140 (ATerm), ATerm t)
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_140(t);
      ;
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      {
        ATerm i_30 = NULL,j_30 = NULL,m_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_30 = ATgetFirst((ATermList) t);
            j_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_30;
        t = foldr_2_0(p_140, q_140, t);
        m_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_30, m_30);
        t = q_140(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_m_18;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL;
  if(match_cons(t, sym__2))
    {
      n_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(n_5, o_5);
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = s_19;
        t = SSL_addr(n_5, o_5);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_30 = NULL,j_5 = NULL,k_5 = NULL;
  t = times_0_0(t);
  j_5 = t;
  t = SSL_explode_term(j_5);
  if(match_cons(t, sym__2))
    {
      ATerm y_19 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5;
  t = foldr_2_0(o_4, p_4, t);
  p_30 = t;
  t = SSL_TicksToSeconds(p_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
  a_31 = t;
  if(match_cons(t, sym__2))
    {
      b_31 = ATgetArgument(t, 0);
      c_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_19 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_31;
        if((b_31 != t))
          {
            _fail(t);
          }
        t = a_31;
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = z_19;
        t = a_31;
        {
          ATerm g_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_31, c_31);
              ;
              LocalPopChoice(h_20);
            }
          else
            {
              t = g_20;
              t = SSL_gtr(b_31, c_31);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_31, c_31);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_148 (ATerm), ATerm t)
{
  ATerm i_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_31 = NULL,h_31 = NULL;
      f_31 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_6 = NULL;
            t = eval_config_0_0(t);
            x_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_6);
            t = x_6;
            ;
            LocalPopChoice(x_20);
          }
        else
          {
            t = t_20;
          }
        h_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_31, term_y_20);
        t = geq_0_0(t);
        t = f_31;
        t = e_148(t);
      }
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = i_20;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL;
  t = run_time_0_0(t);
  j_31 = t;
  t = term_f_6;
  t = whoami_0_0(t);
  k_31 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), j_31), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), k_31));
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_21), j_31), term_d_21), k_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      {
        ATerm i_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(k_21);
          }
        else
          {
            t = i_21;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_150 (ATerm), ATerm t)
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm p_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_7 = NULL;
            t = eval_config_0_0(t);
            h_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), h_7);
            t = h_7;
            ;
            LocalPopChoice(z_21);
          }
        else
          {
            t = p_21;
          }
      }
      ;
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      t = fetch_1_0(r_4, t);
    }
  t = u_150(t);
  return(t);
}
ATerm map_1_0 (ATerm n_134 (ATerm), ATerm t)
{
  ATerm l_31 (ATerm t)
  {
    ATerm a_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = a_22;
        t = Cons_2_0(n_134, l_31, t);
      }
    return(t);
  }
  t = l_31(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_31 = ATgetFirst((ATermList) t);
      o_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_31 = NULL,t_31 = NULL;
        t = o_31;
        t = g_0(t);
        s_31 = t;
        t = n_31;
        t = f_0(t);
        t_31 = t;
        t = o_31;
        {
          ATerm s_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(s_31), t_31);
            return(t);
          }
          t = reverse_acc_2_0(f_0, s_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_6;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm p_114 (ATerm), ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
  x_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_31);
  u_31 = t;
  t = v_31;
  t = p_114(t);
  w_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, w_31), u_31);
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm a_32 = NULL;
  a_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_32), term_i_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm w_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_8 = NULL;
            t = eval_config_0_0(t);
            c_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_8);
            t = c_8;
            ;
            LocalPopChoice(x_22);
          }
        else
          {
            t = w_22;
          }
      }
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      t = fetch_1_0(t_4, t);
    }
  t = term_y_22;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, u_4, t);
  t = map_1_0(v_4, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm q_114 (ATerm), ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
  e_32 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      c_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_32);
  b_32 = t;
  t = c_32;
  t = q_114(t);
  d_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, d_32), b_32);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL;
  i_32 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_23 = ATgetFirst((ATermList) t);
                ATerm d_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_32;
          }
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        t = (ATerm) ATinsert(ATempty, i_32);
      }
    j_32 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), j_32);
    t = i_32;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_8 = NULL;
        t = eval_config_0_0(t);
        k_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_8);
        t = k_8;
        ;
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_i_23;
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_j_23;
  return(t);
}
ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_k_23;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_4, y_4, z_4, t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      t = Option_3_0(a_5, b_5, c_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
  s_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_32 = ATgetFirst((ATermList) t);
      p_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_32);
  n_32 = t;
  t = o_32;
  t = d_106(t);
  q_32 = t;
  t = p_32;
  t = e_106(t);
  r_32 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(r_32), q_32), n_32);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm x_32 = NULL;
  x_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_32);
  t = (ATerm) ATmakeAppl(sym_Program_1, x_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_152 (ATerm), ATerm t)
{
  ATerm w_32 = NULL;
  w_32 = t;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_23;
        t = x_152(t);
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
      }
    t = w_32;
    {
      ATerm f_5 (ATerm t)
      {
        ATerm r_23 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_24 = t;
            int s_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(s_24);
              }
            else
              {
                t = g_24;
                t = x_152(t);
                t = Cons_2_0(_id, f_5, t);
              }
            ;
            LocalPopChoice(f_24);
          }
        else
          {
            t = r_23;
            {
              ATerm z_32 = NULL,a_33 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_32 = ATgetFirst((ATermList) t);
                  a_33 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_33), (ATerm) ATmakeAppl(sym_Undefined_1, z_32));
            }
          }
        return(t);
      }
      t = Cons_2_0(d_5, f_5, t);
    }
  }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  if(match_string(t, "--help"))
    {
      t = k_33;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_33;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_33;
        }
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_z_24;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm p_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_152 (ATerm), ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  h_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = h_33;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm b_25 = t;
      int c_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_152(t);
          ;
          LocalPopChoice(c_25);
        }
      else
        {
          t = b_25;
          {
            ATerm d_25 = t;
            int e_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_5, l_5, m_5, t);
                ;
                LocalPopChoice(e_25);
              }
            else
              {
                t = d_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_5, t);
    {
      ATerm f_25 = t;
      int h_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_33 = NULL;
          p_33 = t;
          {
            ATerm i_25 = t;
            int l_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = p_33;
                {
                  ATerm q_25 = t;
                  int r_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm s_25 = t;
                        int t_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_9 = NULL;
                            t = eval_config_0_0(t);
                            t_9 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), t_9);
                            t = t_9;
                            ;
                            LocalPopChoice(t_25);
                          }
                        else
                          {
                            t = s_25;
                          }
                      }
                      ;
                      LocalPopChoice(r_25);
                    }
                  else
                    {
                      t = q_25;
                      t = fetch_1_0(p_5, t);
                    }
                  t = p_33;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(l_25);
              }
            else
              {
                t = i_25;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm d_26 = t;
                  int e_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_10 = NULL;
                      t = eval_config_0_0(t);
                      j_10 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), j_10);
                      t = j_10;
                      ;
                      LocalPopChoice(e_26);
                    }
                  else
                    {
                      t = d_26;
                    }
                  t = p_33;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(h_25);
        }
      else
        {
          t = f_25;
          {
            ATerm i_26 = t;
            int j_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_5 (ATerm t)
                {
                  ATerm r_5 (ATerm t)
                  {
                    if(((i_33 != NULL) && (i_33 != t)))
                      _fail(t);
                    else
                      i_33 = t;
                    return(t);
                  }
                  t = Undefined_1_0(r_5, t);
                  return(t);
                }
                t = fetch_1_0(q_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_33)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_33)), term_k_26));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(j_26);
              }
            else
              {
                t = i_26;
              }
          }
        }
      j_33 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = j_33;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_150 (ATerm), ATerm x_150 (ATerm), ATerm y_150 (ATerm), ATerm z_150 (ATerm), ATerm t)
{
  ATerm s_33 = NULL;
  t = parse_options_1_0(w_150, t);
  s_33 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), s_33);
  t = s_33;
  t = y_150(t);
  {
    ATerm l_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_150, t);
        ;
        LocalPopChoice(n_26);
      }
    else
      {
        t = l_26;
        {
          ATerm o_26 = t;
          int r_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_150(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_26);
            }
          else
            {
              t = o_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = if_verbose2_1_0(y_5, t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_s_26;
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_t_26;
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL;
  t_33 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_10 = NULL;
        t = eval_config_0_0(t);
        s_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_10);
        t = s_10;
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
      }
    u_33 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, u_33));
    t = t_33;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm f_150 (ATerm), ATerm g_150 (ATerm), ATerm h_150 (ATerm), ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm x_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_150(t);
        ;
        LocalPopChoice(a_27);
      }
    else
      {
        t = x_26;
        {
          ATerm b_27 = t;
          int d_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(d_27);
            }
          else
            {
              t = b_27;
              {
                ATerm g_27 = t;
                int h_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(h_27);
                  }
                else
                  {
                    t = g_27;
                    {
                      ATerm i_27 = t;
                      int j_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(v_5, w_5, x_5, t);
                          ;
                          LocalPopChoice(j_27);
                        }
                      else
                        {
                          t = i_27;
                          {
                            ATerm k_27 = t;
                            int l_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(l_27);
                              }
                            else
                              {
                                t = k_27;
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
  ATerm u_5 (ATerm t)
  {
    ATerm v_33 = NULL,w_33 = NULL,v_10 = NULL;
    v_33 = t;
    {
      ATerm m_27 = t;
      int n_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((w_33 != NULL) && (w_33 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_33 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_5, t);
          ;
          LocalPopChoice(n_27);
        }
      else
        {
          t = m_27;
          t = term_o_27;
          w_33 = t;
        }
      t = not_null(w_33);
      t = ReadFromFile_0_0(t);
      v_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_33, v_10);
      t = apply_strategy_1_0(f_150, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(s_5, h_150, t_5, u_5, t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = _2_0(_id, b_6, t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = downup2_2_0(c_6, d_6, t);
  t = downup_1_0(e_6, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = repeat_1_0(Canon_0_0, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = repeat_1_0(Canon_0_0, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_6, _fail, default_usage_0_0, t);
  return(t);
}
