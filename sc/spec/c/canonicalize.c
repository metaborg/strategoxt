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
ATerm term_d_27;
ATerm term_c_27;
ATerm term_j_26;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_q_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_n_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_i_17;
ATerm term_v_15;
ATerm term_q_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_x_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_l_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_b_7;
ATerm term_e_6;
void init_constant_terms (void)
{
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Op_2, term_a_10, (ATerm) ATempty);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_ConstType_1, term_b_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_CallT_3, term_m_13, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_CallT_3, term_p_13, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__3, term_e_23, term_f_23, term_e_6);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm u_129 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm s_127 (ATerm), ATerm);
ATerm downup_1_0 (ATerm s_128 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm i_130 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm CreateDef2_0_0 (ATerm);
ATerm SVar_1_0 (ATerm i_110 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm);
ATerm Canon_0_0 (ATerm);
ATerm downup2_2_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm);
ATerm _2_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm o_146 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm q_149 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_134 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_134 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm s_147 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm j_140 (ATerm), ATerm k_140 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_147 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm o_150 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_134 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm j_114 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm k_114 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm r_152 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm q_152 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm q_150 (ATerm), ATerm r_150 (ATerm), ATerm s_150 (ATerm), ATerm t_150 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm z_149 (ATerm), ATerm a_150 (ATerm), ATerm b_150 (ATerm), ATerm);
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
  t = term_e_6;
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
        }
    }
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm u_1 = NULL,z_1 = NULL,d_2 = NULL,g_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_6 = ATgetArgument(t, 0);
      if(match_cons(h_6, sym_Build_1))
        {
          ATerm j_6 = ATgetArgument(h_6, 0);
          if(match_cons(j_6, sym_Op_2))
            {
              z_1 = ATgetArgument(j_6, 0);
              u_1 = ATgetArgument(j_6, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm i_6 = ATgetArgument(t, 1);
        if(match_cons(i_6, sym_Match_1))
          {
            ATerm k_6 = ATgetArgument(i_6, 0);
            if(match_cons(k_6, sym_Op_2))
              {
                if((z_1 != ATgetArgument(k_6, 0)))
                  {
                    _fail(ATgetArgument(k_6, 0));
                  }
                d_2 = ATgetArgument(k_6, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, u_1, d_2);
  {
    ATerm h_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm l_6 = ATgetArgument(t, 0);
          if(((ATgetType(l_6) != AT_LIST) || !(ATisEmpty(l_6))))
            _fail(t);
          {
            ATerm m_6 = ATgetArgument(t, 1);
            if(((ATgetType(m_6) != AT_LIST) || !(ATisEmpty(m_6))))
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
      ATerm h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm n_6 = ATgetArgument(t, 0);
          if(((ATgetType(n_6) == AT_LIST) && !(ATisEmpty(n_6))))
            {
              h_2 = ATgetFirst((ATermList) n_6);
              k_2 = (ATerm) ATgetNext((ATermList) n_6);
            }
          else
            _fail(t);
          {
            ATerm r_6 = ATgetArgument(t, 1);
            if(((ATgetType(r_6) == AT_LIST) && !(ATisEmpty(r_6))))
              {
                j_2 = ATgetFirst((ATermList) r_6);
                l_2 = (ATerm) ATgetNext((ATermList) r_6);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_2, j_2), (ATerm) ATmakeAppl(sym__2, k_2, l_2));
      return(t);
    }
    ATerm l_0 (ATerm t)
    {
      ATerm n_2 = NULL,o_2 = NULL;
      if(match_cons(t, sym__2))
        {
          n_2 = ATgetArgument(t, 0);
          o_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(o_2), n_2);
      return(t);
    }
    ATerm o_0 (ATerm t)
    {
      ATerm q_2 = NULL,r_2 = NULL;
      if(match_cons(t, sym__2))
        {
          q_2 = ATgetArgument(t, 0);
          r_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_2), (ATerm) ATmakeAppl(sym_Match_1, r_2));
      return(t);
    }
    t = genzip_4_0(h_0, j_0, l_0, o_0, t);
    g_2 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_2), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, z_1, u_1)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_6 = ATgetArgument(t, 0);
      if(match_cons(t_6, sym_Build_1))
        {
          ATerm v_6 = ATgetArgument(t_6, 0);
          if(match_cons(v_6, sym_Op_2))
            {
              t_2 = ATgetArgument(v_6, 0);
              {
                ATerm w_6 = ATgetArgument(v_6, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm u_6 = ATgetArgument(t, 1);
        if(match_cons(u_6, sym_Match_1))
          {
            ATerm x_6 = ATgetArgument(u_6, 0);
            if(match_cons(x_6, sym_Op_2))
              {
                u_2 = ATgetArgument(x_6, 0);
                {
                  ATerm z_6 = ATgetArgument(x_6, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, t_2, u_2);
  {
    ATerm a_7 = t;
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
        t = a_7;
      }
    t = term_b_7;
  }
  return(t);
}
ATerm BuildMatch_0_0 (ATerm t)
{
  ATerm y_7 (ATerm p_6, ATerm q_6, ATerm s_6, ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, p_6, q_6);
    {
      ATerm c_7 = t;
      int e_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MisMatch_0_0(t);
          ;
          LocalPopChoice(e_7);
        }
      else
        {
          t = c_7;
          {
            ATerm f_7 = t;
            int g_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = BuildMatchFusion_0_0(t);
                ;
                LocalPopChoice(g_7);
              }
            else
              {
                t = f_7;
                {
                  ATerm i_7 = t;
                  int k_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_7 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          ATerm l_7 = ATgetArgument(t, 0);
                          ATerm m_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_6;
                      if(match_cons(t, sym_Build_1))
                        {
                          ATerm o_7 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = q_6;
                      if(match_cons(t, sym_Build_1))
                        {
                          d_7 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      ;
                      LocalPopChoice(k_7);
                    }
                  else
                    {
                      t = i_7;
                      {
                        ATerm r_7 = t;
                        int t_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = BuildPrim_0_0(t);
                            ;
                            LocalPopChoice(t_7);
                          }
                        else
                          {
                            t = r_7;
                            {
                              ATerm h_7 = NULL,j_7 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm v_7 = ATgetArgument(t, 0);
                                  ATerm w_7 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = p_6;
                              if(match_cons(t, sym_Match_1))
                                {
                                  h_7 = ATgetArgument(t, 0);
                                  t = q_6;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      j_7 = ATgetArgument(t, 0);
                                      t = j_7;
                                      if((h_7 != t))
                                        {
                                          _fail(t);
                                        }
                                      t = (ATerm) ATmakeAppl(sym_Match_1, h_7);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Build_1))
                                        {
                                          j_7 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = j_7;
                                      if((h_7 != t))
                                        {
                                          _fail(t);
                                        }
                                      t = (ATerm) ATmakeAppl(sym_Match_1, h_7);
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      h_7 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = q_6;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      j_7 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = j_7;
                                  if((h_7 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Build_1, h_7);
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
  ATerm n_7 = NULL,p_7 = NULL,q_7 = NULL,s_7 = NULL,u_7 = NULL;
  q_7 = t;
  if(match_cons(t, sym_Seq_2))
    {
      s_7 = ATgetArgument(t, 0);
      u_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7;
  if(match_cons(t, sym_Seq_2))
    {
      n_7 = ATgetArgument(t, 0);
      p_7 = ATgetArgument(t, 1);
      {
        ATerm x_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_1 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, s_7, n_7);
            {
              ATerm b_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = b_8;
                  {
                    ATerm f_8 = t;
                    int g_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(g_8);
                      }
                    else
                      {
                        t = f_8;
                        {
                          ATerm h_8 = t;
                          int i_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_1 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm k_8 = ATgetArgument(t, 0);
                                  ATerm l_8 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = s_7;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm m_8 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = n_7;
                              if(match_cons(t, sym_Build_1))
                                {
                                  l_1 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              ;
                              LocalPopChoice(i_8);
                            }
                          else
                            {
                              t = h_8;
                              {
                                ATerm n_8 = t;
                                int p_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(p_8);
                                  }
                                else
                                  {
                                    t = n_8;
                                    {
                                      ATerm q_1 = NULL,s_1 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm w_8 = ATgetArgument(t, 0);
                                          ATerm z_8 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = s_7;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          q_1 = ATgetArgument(t, 0);
                                          t = n_7;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              s_1 = ATgetArgument(t, 0);
                                              t = s_1;
                                              if((q_1 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, q_1);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  s_1 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = s_1;
                                              if((q_1 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, q_1);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              q_1 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = n_7;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              s_1 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = s_1;
                                          if((q_1 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, q_1);
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
              t = (ATerm) ATmakeAppl(sym_Seq_2, f_1, p_7);
            }
            ;
            LocalPopChoice(a_8);
          }
        else
          {
            t = x_7;
            t = y_7(s_7, u_7, q_7, t);
          }
      }
    }
  else
    {
      t = y_7(s_7, u_7, q_7, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm u_129 (ATerm), ATerm t)
{
  ATerm z_7 (ATerm t)
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_129(t);
        ;
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        t = SRTS_one(z_7, t);
      }
    return(t);
  }
  t = z_7(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm c_8 = NULL,e_8 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if(((ATgetType(c_9) == AT_LIST) && !(ATisEmpty(c_9))))
        {
          ATerm e_9 = ATgetFirst((ATermList) c_9);
          if(match_cons(e_9, sym_SDefT_4))
            {
              e_8 = ATgetArgument(e_9, 0);
              {
                ATerm g_9 = ATgetArgument(e_9, 1);
                if(((ATgetType(g_9) != AT_LIST) || !(ATisEmpty(g_9))))
                  _fail(t);
              }
              {
                ATerm h_9 = ATgetArgument(e_9, 2);
                if(((ATgetType(h_9) != AT_LIST) || !(ATisEmpty(h_9))))
                  _fail(t);
              }
              c_8 = ATgetArgument(e_9, 3);
            }
          else
            _fail(t);
          {
            ATerm f_9 = (ATerm) ATgetNext((ATermList) c_9);
            if(((ATgetType(f_9) != AT_LIST) || !(ATisEmpty(f_9))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm d_9 = ATgetArgument(t, 1);
        if(match_cons(d_9, sym_CallT_3))
          {
            ATerm i_9 = ATgetArgument(d_9, 0);
            if(match_cons(i_9, sym_SVar_1))
              {
                if((e_8 != ATgetArgument(i_9, 0)))
                  {
                    _fail(ATgetArgument(i_9, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm j_9 = ATgetArgument(d_9, 1);
              if(((ATgetType(j_9) != AT_LIST) || !(ATisEmpty(j_9))))
                _fail(t);
            }
            {
              ATerm l_9 = ATgetArgument(d_9, 2);
              if(((ATgetType(l_9) != AT_LIST) || !(ATisEmpty(l_9))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_8;
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
                  if((e_8 != ATgetArgument(o_9, 0)))
                    {
                      _fail(ATgetArgument(o_9, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm s_9 = ATgetArgument(t, 1);
                if(((ATgetType(s_9) != AT_LIST) || !(ATisEmpty(s_9))))
                  _fail(t);
              }
              {
                ATerm u_9 = ATgetArgument(t, 2);
                if(((ATgetType(u_9) != AT_LIST) || !(ATisEmpty(u_9))))
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
    t = c_8;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm o_8 = NULL,q_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,x_8 = NULL,y_8 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      x_8 = ATgetArgument(t, 0);
      t = x_8;
      if(match_cons(t, sym_Seq_2))
        {
          v_8 = ATgetArgument(t, 0);
          q_8 = ATgetArgument(t, 1);
          t = v_8;
          if(match_cons(t, sym_Where_1))
            {
              o_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_8;
          if(match_cons(t, sym_Seq_2))
            {
              s_8 = ATgetArgument(t, 0);
              u_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_8;
          if(match_cons(t, sym_Build_1))
            {
              t_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, o_8, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_8), u_8)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              v_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          x_8 = ATgetArgument(t, 0);
          t = x_8;
          if(match_cons(t, sym_Test_1))
            {
              v_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              x_8 = ATgetArgument(t, 0);
              t = x_8;
              if(match_cons(t, sym_Not_1))
                {
                  v_8 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, v_8);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  x_8 = ATgetArgument(t, 0);
                  y_8 = ATgetArgument(t, 1);
                  t = y_8;
                  if((x_8 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      x_8 = ATgetArgument(t, 0);
                      y_8 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = y_8;
                  if((x_8 != t))
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
  ATerm m_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      m_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
      t = m_9;
      if(match_cons(t, sym_LChoice_2))
        {
          p_9 = ATgetArgument(t, 0);
          q_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, p_9, (ATerm) ATmakeAppl(sym_LChoice_2, q_9, r_9));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          m_9 = ATgetArgument(t, 0);
          r_9 = ATgetArgument(t, 1);
          t = m_9;
          if(match_cons(t, sym_Seq_2))
            {
              p_9 = ATgetArgument(t, 0);
              q_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, (ATerm) ATmakeAppl(sym_Seq_2, q_9, r_9));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              m_9 = ATgetArgument(t, 0);
              r_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_9;
          if(match_cons(t, sym_Choice_2))
            {
              p_9 = ATgetArgument(t, 0);
              q_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, p_9, (ATerm) ATmakeAppl(sym_Choice_2, q_9, r_9));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm s_0 (ATerm t)
        {
          ATerm x_9 = t;
          int y_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(y_9);
            }
          else
            {
              t = x_9;
            }
          return(t);
        }
        t = Cons_2_0(_id, s_0, t);
      }
      ;
      LocalPopChoice(w_9);
    }
  else
    {
      t = v_9;
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
ATerm HL_0_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,b_11 = NULL,c_11 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      b_11 = ATgetArgument(t, 0);
      c_11 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, b_11, c_11);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          b_11 = ATgetArgument(t, 0);
          t = b_11;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_10 = ATgetFirst((ATermList) t);
              x_10 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, w_10, (ATerm) ATmakeAppl(sym_LChoices_1, x_10));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_b_7;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              b_11 = ATgetArgument(t, 0);
              t = b_11;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_10 = ATgetFirst((ATermList) t);
                  x_10 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, w_10, (ATerm) ATmakeAppl(sym_Choices_1, x_10));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_b_7;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  b_11 = ATgetArgument(t, 0);
                  t = b_11;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_10 = ATgetFirst((ATermList) t);
                      x_10 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_10, (ATerm) ATmakeAppl(sym_Seqs_1, x_10));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_z_9;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_11 = ATgetArgument(t, 0);
                      c_11 = ATgetArgument(t, 1);
                      z_10 = ATgetArgument(t, 2);
                      y_10 = ATgetArgument(t, 3);
                      {
                        ATerm v_11 = NULL,w_11 = NULL;
                        t = c_11;
                        {
                          ATerm z_0 (ATerm t)
                          {
                            ATerm x_11 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                x_11 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, x_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_10), term_c_10));
                            return(t);
                          }
                          t = map1_1_0(z_0, t);
                          v_11 = t;
                          t = z_10;
                          {
                            ATerm a_1 (ATerm t)
                            {
                              ATerm d_10 = t;
                              int e_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm a_12 = NULL;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      a_12 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_12, term_c_10);
                                  ;
                                  LocalPopChoice(e_10);
                                }
                              else
                                {
                                  t = d_10;
                                }
                              return(t);
                            }
                            t = map1_1_0(a_1, t);
                            w_11 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, b_11, v_11, w_11, y_10);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          b_11 = ATgetArgument(t, 0);
                          c_11 = ATgetArgument(t, 1);
                          z_10 = ATgetArgument(t, 2);
                          y_10 = ATgetArgument(t, 3);
                          {
                            ATerm f_10 = t;
                            int g_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm g_12 = NULL,h_12 = NULL;
                                t = z_10;
                                {
                                  ATerm b_1 (ATerm t)
                                  {
                                    ATerm i_12 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        i_12 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, i_12, term_c_10);
                                    return(t);
                                  }
                                  t = map1_1_0(b_1, t);
                                  g_12 = t;
                                  t = c_11;
                                  {
                                    ATerm c_1 (ATerm t)
                                    {
                                      ATerm h_10 = t;
                                      int i_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm k_12 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              k_12 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, k_12, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_10), term_c_10));
                                          ;
                                          LocalPopChoice(i_10);
                                        }
                                      else
                                        {
                                          t = h_10;
                                        }
                                      return(t);
                                    }
                                    t = map_1_0(c_1, t);
                                    h_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, b_11, h_12, g_12, y_10);
                                  }
                                }
                                ;
                                LocalPopChoice(g_10);
                              }
                            else
                              {
                                t = f_10;
                                {
                                  ATerm s_12 = NULL,t_12 = NULL;
                                  t = c_11;
                                  {
                                    ATerm d_1 (ATerm t)
                                    {
                                      ATerm u_12 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          u_12 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, u_12, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_10), term_c_10));
                                      return(t);
                                    }
                                    t = map1_1_0(d_1, t);
                                    s_12 = t;
                                    t = z_10;
                                    {
                                      ATerm e_1 (ATerm t)
                                      {
                                        ATerm j_10 = t;
                                        int k_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm w_12 = NULL;
                                            if(match_cons(t, sym_DefaultVarDec_1))
                                              {
                                                w_12 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_VarDec_2, w_12, term_c_10);
                                            ;
                                            LocalPopChoice(k_10);
                                          }
                                        else
                                          {
                                            t = j_10;
                                          }
                                        return(t);
                                      }
                                      t = map_1_0(e_1, t);
                                      t_12 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, b_11, s_12, t_12, y_10);
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
                              b_11 = ATgetArgument(t, 0);
                              c_11 = ATgetArgument(t, 1);
                              z_10 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, c_11, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, z_10), b_11)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  b_11 = ATgetArgument(t, 0);
                                  c_11 = ATgetArgument(t, 1);
                                  z_10 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, z_10)), b_11), (ATerm) ATmakeAppl(sym_Build_1, c_11)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      b_11 = ATgetArgument(t, 0);
                                      c_11 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_11, (ATerm) ATmakeAppl(sym_Match_1, c_11));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          b_11 = ATgetArgument(t, 0);
                                          c_11 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_11), c_11);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              b_11 = ATgetArgument(t, 0);
                                              c_11 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_11), b_11);
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
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      i_14 = ATgetArgument(t, 0);
      t = i_14;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          i_14 = ATgetArgument(t, 0);
          t = i_14;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_z_9;
        }
      else
        {
          ATerm m_10 = t;
          int n_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  i_14 = ATgetArgument(t, 0);
                  {
                    ATerm o_10 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(n_10);
              t = i_14;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
            }
          else
            {
              t = m_10;
              {
                ATerm p_10 = t;
                int q_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm r_10 = ATgetArgument(t, 0);
                        j_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(q_10);
                    t = j_14;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                  }
                else
                  {
                    t = p_10;
                    {
                      ATerm s_10 = t;
                      int t_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm u_10 = ATgetArgument(t, 0);
                              j_14 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(t_10);
                          t = j_14;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          t = s_10;
                          if(match_cons(t, sym_Some_1))
                            {
                              i_14 = ATgetArgument(t, 0);
                              t = i_14;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  i_14 = ATgetArgument(t, 0);
                                  t = i_14;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  ATerm v_10 = t;
                                  int a_11 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm d_11 = ATgetArgument(t, 0);
                                          j_14 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(a_11);
                                      t = j_14;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      t = v_10;
                                      {
                                        ATerm e_11 = t;
                                        int f_11 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm g_11 = ATgetArgument(t, 0);
                                                j_14 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(f_11);
                                            t = j_14;
                                            {
                                              ATerm g_1 (ATerm t)
                                              {
                                                if(!(match_cons(t, sym_Fail_0)))
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = fetch_1_0(g_1, t);
                                              t = term_b_7;
                                            }
                                          }
                                        else
                                          {
                                            t = e_11;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                i_14 = ATgetArgument(t, 0);
                                                j_14 = ATgetArgument(t, 1);
                                                t = j_14;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = i_14;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm h_11 = t;
                                                        int i_11 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = j_14;
                                                            ;
                                                            LocalPopChoice(i_11);
                                                          }
                                                        else
                                                          {
                                                            t = h_11;
                                                            t = i_14;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = i_14;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = i_14;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = j_14;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    i_14 = ATgetArgument(t, 0);
                                                    j_14 = ATgetArgument(t, 1);
                                                    t = j_14;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = i_14;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm j_11 = t;
                                                            int k_11 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = j_14;
                                                                ;
                                                                LocalPopChoice(k_11);
                                                              }
                                                            else
                                                              {
                                                                t = j_11;
                                                                t = i_14;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = i_14;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = i_14;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = j_14;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        i_14 = ATgetArgument(t, 0);
                                                        t = i_14;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            i_14 = ATgetArgument(t, 0);
                                                            j_14 = ATgetArgument(t, 1);
                                                            k_14 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = k_14;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_14, j_14);
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
  ATerm r_15 = NULL,t_15 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      t_15 = ATgetArgument(t, 0);
      t = t_15;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          t_15 = ATgetArgument(t, 0);
          t = t_15;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_b_7;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              t_15 = ATgetArgument(t, 0);
              r_15 = ATgetArgument(t, 1);
              t = r_15;
              if(match_cons(t, sym_Id_0))
                {
                  t = t_15;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm l_11 = t;
                      int m_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = r_15;
                          ;
                          LocalPopChoice(m_11);
                        }
                      else
                        {
                          t = l_11;
                          t = t_15;
                        }
                    }
                  else
                    {
                      t = t_15;
                    }
                }
              else
                {
                  t = t_15;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = r_15;
                }
            }
          else
            {
              ATerm n_11 = t;
              int o_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      t_15 = ATgetArgument(t, 0);
                      {
                        ATerm p_11 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(o_11);
                  t = t_15;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = n_11;
                  {
                    ATerm q_11 = t;
                    int r_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm s_11 = ATgetArgument(t, 0);
                            r_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(r_11);
                        t = r_15;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = q_11;
                        {
                          ATerm t_11 = t;
                          int u_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm y_11 = ATgetArgument(t, 0);
                                  r_15 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(u_11);
                              t = r_15;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = t_11;
                              if(match_cons(t, sym_All_1))
                                {
                                  t_15 = ATgetArgument(t, 0);
                                  t = t_15;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      t_15 = ATgetArgument(t, 0);
                                      t = t_15;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          t_15 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = t_15;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_z_9;
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
  ATerm z_11 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = z_11;
      {
        ATerm c_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
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
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(f_12);
                }
              else
                {
                  t = e_12;
                  {
                    ATerm j_12 = t;
                    int l_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(l_12);
                      }
                    else
                      {
                        t = j_12;
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
                                int p_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_16 = NULL,f_16 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        e_16 = ATgetArgument(t, 0);
                                        f_16 = ATgetArgument(t, 1);
                                        t = e_16;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = f_16;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            e_16 = ATgetArgument(t, 0);
                                            f_16 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = e_16;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = f_16;
                                      }
                                    ;
                                    LocalPopChoice(p_12);
                                  }
                                else
                                  {
                                    t = o_12;
                                    {
                                      ATerm q_12 = t;
                                      int r_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(r_12);
                                        }
                                      else
                                        {
                                          t = q_12;
                                          {
                                            ATerm v_12 = t;
                                            int x_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(x_12);
                                              }
                                            else
                                              {
                                                t = v_12;
                                                {
                                                  ATerm j_16 = NULL,k_16 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      j_16 = ATgetArgument(t, 0);
                                                      k_16 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = j_16;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = k_16;
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
ATerm repeat_1_0 (ATerm s_127 (ATerm), ATerm t)
{
  ATerm m_16 (ATerm t)
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_127(t);
        t = m_16(t);
        ;
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
      }
    return(t);
  }
  t = m_16(t);
  return(t);
}
ATerm downup_1_0 (ATerm s_128 (ATerm), ATerm t)
{
  t = s_128(t);
  {
    ATerm h_1 (ATerm t)
    {
      t = downup_1_0(s_128, t);
      return(t);
    }
    t = SRTS_all(h_1, t);
    t = s_128(t);
  }
  return(t);
}
ATerm alltd_1_0 (ATerm i_130 (ATerm), ATerm t)
{
  ATerm g_17 (ATerm t)
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_130(t);
        ;
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        t = SRTS_all(g_17, t);
      }
    return(t);
  }
  t = g_17(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm CreateDef2_0_0 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL;
  n_16 = t;
  t = new_0_0(t);
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_16), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, o_16, (ATerm)ATempty, (ATerm)ATempty, n_16)));
  return(t);
}
ATerm SVar_1_0 (ATerm i_110 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL;
  s_16 = t;
  if(match_cons(t, sym_SVar_1))
    {
      q_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_16);
  p_16 = t;
  t = q_16;
  t = i_110(t);
  r_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, r_16), p_16);
  return(t);
}
ATerm CallT_3_0 (ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
  c_17 = t;
  if(match_cons(t, sym_CallT_3))
    {
      w_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
      y_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_17);
  v_16 = t;
  t = w_16;
  t = n_110(t);
  z_16 = t;
  t = x_16;
  t = o_110(t);
  a_17 = t;
  t = y_16;
  t = p_110(t);
  b_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, z_16, a_17, b_17), v_16);
  return(t);
}
ATerm genzip_4_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm t)
{
  ATerm f_17 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_136(t);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = m_136(t);
        t = _2_0(o_136, f_17, t);
        t = n_136(t);
      }
    return(t);
  }
  t = f_17(t);
  return(t);
}
ATerm Canon_0_0 (ATerm t)
{
  ATerm i_23 (ATerm o_18, ATerm p_18, ATerm r_18, ATerm s_18, ATerm t)
  {
    ATerm w_18 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, o_18, p_18);
    {
      ATerm e_13 = t;
      int f_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm g_13 = ATgetArgument(t, 0);
              ATerm h_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_18;
          {
            ATerm i_1 (ATerm t)
            {
              t = p_18;
              return(t);
            }
            t = at_end_1_0(i_1, t);
          }
          ;
          LocalPopChoice(f_13);
        }
      else
        {
          t = e_13;
          {
            ATerm c_2 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_18, p_18));
            if(match_cons(t, sym__2))
              {
                ATerm i_13 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) i_13) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                c_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_2;
            t = concat_0_0(t);
          }
        }
      w_18 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, w_18, r_18);
    }
    return(t);
  }
  ATerm j_23 (ATerm a_19, ATerm b_19, ATerm c_19, ATerm d_19, ATerm t)
  {
    ATerm h_19 = NULL;
    t = b_19;
    {
      ATerm n_23 (ATerm t)
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 (ATerm t)
            {
              if(match_cons(t, sym_Id_0))
                {
                  t = term_n_13;
                }
              else
                {
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_q_13;
                }
              return(t);
            }
            ATerm k_1 (ATerm t)
            {
              ATerm r_13 = t;
              int s_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_23(t);
                  ;
                  LocalPopChoice(s_13);
                }
              else
                {
                  t = r_13;
                }
              return(t);
            }
            t = Cons_2_0(j_1, k_1, t);
            ;
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            t = Cons_2_0(_id, n_23, t);
          }
        return(t);
      }
      t = n_23(t);
      h_19 = t;
      t = (ATerm) ATmakeAppl(sym_PrimT_3, a_19, h_19, c_19);
    }
    return(t);
  }
  ATerm k_23 (ATerm j_19, ATerm k_19, ATerm l_19, ATerm m_19, ATerm t)
  {
    ATerm q_19 = NULL;
    t = k_19;
    {
      ATerm o_23 (ATerm t)
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              if(match_cons(t, sym_Id_0))
                {
                  t = term_n_13;
                }
              else
                {
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_q_13;
                }
              return(t);
            }
            ATerm n_1 (ATerm t)
            {
              ATerm v_13 = t;
              int w_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_23(t);
                  ;
                  LocalPopChoice(w_13);
                }
              else
                {
                  t = v_13;
                }
              return(t);
            }
            t = Cons_2_0(m_1, n_1, t);
            ;
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            t = Cons_2_0(_id, o_23, t);
          }
        return(t);
      }
      t = o_23(t);
      q_19 = t;
      t = (ATerm) ATmakeAppl(sym_CallT_3, j_19, q_19, l_19);
    }
    return(t);
  }
  ATerm l_23 (ATerm s_19, ATerm t_19, ATerm u_19, ATerm v_19, ATerm t)
  {
    ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
    t = t_19;
    {
      ATerm o_1 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = term_x_13;
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        ATerm e_20 = NULL,g_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_20 = ATgetFirst((ATermList) t);
            g_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_20, g_20);
        return(t);
      }
      ATerm r_1 (ATerm t)
      {
        ATerm h_20 = NULL,i_20 = NULL,l_20 = NULL,m_20 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_13 = ATgetArgument(t, 0);
            if(match_cons(y_13, sym__2))
              {
                h_20 = ATgetArgument(y_13, 0);
                l_20 = ATgetArgument(y_13, 1);
              }
            else
              _fail(t);
            {
              ATerm z_13 = ATgetArgument(t, 1);
              if(match_cons(z_13, sym__2))
                {
                  i_20 = ATgetArgument(z_13, 0);
                  m_20 = ATgetArgument(z_13, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_20), h_20), (ATerm) ATinsert(CheckATermList(m_20), l_20));
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Id_0))
              {
                t = term_n_13;
              }
            else
              {
                if(!(match_cons(t, sym_Fail_0)))
                  _fail(t);
                t = term_q_13;
              }
            ;
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
          }
        {
          ATerm c_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL;
              if(match_cons(t, sym_Let_2))
                {
                  r_20 = ATgetArgument(t, 0);
                  s_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_20;
              if(match_cons(t, sym_CallT_3))
                {
                  t_20 = ATgetArgument(t, 0);
                  v_20 = ATgetArgument(t, 1);
                  w_20 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = t_20;
              if(match_cons(t, sym_SVar_1))
                {
                  u_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = v_20;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_20;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_20), (ATerm)ATempty, (ATerm) ATempty), r_20);
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
                    ATerm g_14 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm v_1 (ATerm t)
                        {
                          t = SVar_1_0(_id, t);
                          return(t);
                        }
                        ATerm w_1 (ATerm t)
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          return(t);
                        }
                        ATerm x_1 (ATerm t)
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          return(t);
                        }
                        t = CallT_3_0(v_1, w_1, x_1, t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = g_14;
                      }
                    t = CreateDef2_0_0(t);
                    ;
                    LocalPopChoice(f_14);
                  }
                else
                  {
                    t = e_14;
                    {
                      ATerm e_2 = NULL;
                      e_2 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_2, (ATerm) ATempty);
                    }
                  }
              }
            }
        }
        return(t);
      }
      t = genzip_4_0(o_1, p_1, r_1, t_1, t);
      if(match_cons(t, sym__2))
        {
          z_19 = ATgetArgument(t, 0);
          a_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_20;
      t = concat_0_0(t);
      b_20 = t;
      {
        ATerm h_14 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_14;
          }
        t = (ATerm) ATmakeAppl(sym_Let_2, b_20, (ATerm) ATmakeAppl(sym_PrimT_3, s_19, z_19, u_19));
      }
    }
    return(t);
  }
  ATerm m_23 (ATerm z_20, ATerm a_21, ATerm b_21, ATerm c_21, ATerm t)
  {
    ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
    t = a_21;
    {
      ATerm y_1 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = term_x_13;
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        ATerm j_21 = NULL,k_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_21 = ATgetFirst((ATermList) t);
            k_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_21, k_21);
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_14 = ATgetArgument(t, 0);
            if(match_cons(l_14, sym__2))
              {
                l_21 = ATgetArgument(l_14, 0);
                n_21 = ATgetArgument(l_14, 1);
              }
            else
              _fail(t);
            {
              ATerm m_14 = ATgetArgument(t, 1);
              if(match_cons(m_14, sym__2))
                {
                  m_21 = ATgetArgument(m_14, 0);
                  o_21 = ATgetArgument(m_14, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_21), l_21), (ATerm) ATinsert(CheckATermList(o_21), n_21));
        return(t);
      }
      ATerm f_2 (ATerm t)
      {
        ATerm n_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Id_0))
              {
                t = term_n_13;
              }
            else
              {
                if(!(match_cons(t, sym_Fail_0)))
                  _fail(t);
                t = term_q_13;
              }
            ;
            LocalPopChoice(o_14);
          }
        else
          {
            t = n_14;
          }
        {
          ATerm p_14 = t;
          int q_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL;
              if(match_cons(t, sym_Let_2))
                {
                  r_21 = ATgetArgument(t, 0);
                  s_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_21;
              if(match_cons(t, sym_CallT_3))
                {
                  t_21 = ATgetArgument(t, 0);
                  v_21 = ATgetArgument(t, 1);
                  w_21 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = t_21;
              if(match_cons(t, sym_SVar_1))
                {
                  u_21 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = v_21;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_21;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_21), (ATerm)ATempty, (ATerm) ATempty), r_21);
              ;
              LocalPopChoice(q_14);
            }
          else
            {
              t = p_14;
              {
                ATerm r_14 = t;
                int s_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_14 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm i_2 (ATerm t)
                        {
                          t = SVar_1_0(_id, t);
                          return(t);
                        }
                        ATerm m_2 (ATerm t)
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          return(t);
                        }
                        ATerm p_2 (ATerm t)
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          return(t);
                        }
                        t = CallT_3_0(i_2, m_2, p_2, t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = t_14;
                      }
                    t = CreateDef2_0_0(t);
                    ;
                    LocalPopChoice(s_14);
                  }
                else
                  {
                    t = r_14;
                    {
                      ATerm s_2 = NULL;
                      s_2 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_2, (ATerm) ATempty);
                    }
                  }
              }
            }
        }
        return(t);
      }
      t = genzip_4_0(y_1, a_2, b_2, f_2, t);
      if(match_cons(t, sym__2))
        {
          g_21 = ATgetArgument(t, 0);
          h_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_21;
      t = concat_0_0(t);
      i_21 = t;
      {
        ATerm u_14 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_14;
          }
        t = (ATerm) ATmakeAppl(sym_Let_2, i_21, (ATerm) ATmakeAppl(sym_CallT_3, z_20, g_21, b_21));
      }
    }
    return(t);
  }
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
  g_22 = t;
  if(match_cons(t, sym_Rec_2))
    {
      h_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, h_22, (ATerm)ATempty, (ATerm)ATempty, i_22)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_22), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          h_22 = ATgetArgument(t, 0);
          i_22 = ATgetArgument(t, 1);
          j_22 = ATgetArgument(t, 2);
          z_21 = ATgetArgument(t, 3);
          {
            ATerm p_22 = NULL;
            t = i_22;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = j_22;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = z_21;
            if(match_cons(t, sym_Rec_2))
              {
                a_22 = ATgetArgument(t, 0);
                b_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_22;
            {
              ATerm w_2 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm v_14 = ATgetArgument(t, 0);
                    if(match_cons(v_14, sym_SVar_1))
                      {
                        if((a_22 != ATgetArgument(v_14, 0)))
                          {
                            _fail(ATgetArgument(v_14, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm w_14 = ATgetArgument(t, 1);
                      if(((ATgetType(w_14) != AT_LIST) || !(ATisEmpty(w_14))))
                        _fail(t);
                    }
                    {
                      ATerm x_14 = ATgetArgument(t, 2);
                      if(((ATgetType(x_14) != AT_LIST) || !(ATisEmpty(x_14))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_22), (ATerm)ATempty, (ATerm) ATempty);
                return(t);
              }
              t = alltd_1_0(w_2, t);
              p_22 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, h_22, (ATerm)ATempty, (ATerm)ATempty, p_22);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              h_22 = ATgetArgument(t, 0);
              i_22 = ATgetArgument(t, 1);
              t = i_22;
              if(match_cons(t, sym_Seq_2))
                {
                  e_22 = ATgetArgument(t, 0);
                  f_22 = ATgetArgument(t, 1);
                  t = h_22;
                  if(match_cons(t, sym_Where_1))
                    {
                      d_22 = ATgetArgument(t, 0);
                      t = e_22;
                      if(match_cons(t, sym_Build_1))
                        {
                          c_22 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_22), f_22));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = i_22;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      e_22 = ATgetArgument(t, 0);
                      t = h_22;
                      if(match_cons(t, sym_Where_1))
                        {
                          d_22 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_22, (ATerm) ATmakeAppl(sym_Build_1, e_22));
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = i_22;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Id_0))
                        {
                          t = h_22;
                          if(match_cons(t, sym_Id_0))
                            {
                              ATerm y_14 = t;
                              int z_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = h_22;
                                  ;
                                  LocalPopChoice(z_14);
                                }
                              else
                                {
                                  t = y_14;
                                  t = i_22;
                                }
                            }
                          else
                            {
                              t = h_22;
                            }
                        }
                      else
                        {
                          t = h_22;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = i_22;
                        }
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  h_22 = ATgetArgument(t, 0);
                  i_22 = ATgetArgument(t, 1);
                  t = i_22;
                  if(match_cons(t, sym_Scope_2))
                    {
                      e_22 = ATgetArgument(t, 0);
                      f_22 = ATgetArgument(t, 1);
                      t = h_22;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm a_15 = t;
                          int b_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = i_23(h_22, e_22, f_22, g_22, t);
                              ;
                              LocalPopChoice(b_15);
                            }
                          else
                            {
                              t = a_15;
                              t = i_22;
                            }
                        }
                      else
                        {
                          t = i_23(h_22, e_22, f_22, g_22, t);
                        }
                    }
                  else
                    {
                      t = h_22;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = i_22;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Thread_1))
                    {
                      h_22 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_15, (ATerm)ATinsert(ATempty, h_22), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          h_22 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_f_15, (ATerm)ATinsert(ATempty, h_22), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              h_22 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_15, (ATerm)ATinsert(ATempty, h_22), (ATerm) ATempty);
                            }
                          else
                            {
                              if(match_cons(t, sym_All_1))
                                {
                                  h_22 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_15, (ATerm)ATinsert(ATempty, h_22), (ATerm) ATempty);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Bagof_1))
                                    {
                                      h_22 = ATgetArgument(t, 0);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_15, (ATerm)ATinsert(ATempty, h_22), (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_PrimT_3))
                                        {
                                          h_22 = ATgetArgument(t, 0);
                                          i_22 = ATgetArgument(t, 1);
                                          j_22 = ATgetArgument(t, 2);
                                          {
                                            ATerm m_15 = t;
                                            int n_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = j_23(h_22, i_22, j_22, g_22, t);
                                                ;
                                                LocalPopChoice(n_15);
                                              }
                                            else
                                              {
                                                t = m_15;
                                                t = l_23(h_22, i_22, j_22, g_22, t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              h_22 = ATgetArgument(t, 0);
                                              i_22 = ATgetArgument(t, 1);
                                              j_22 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm o_15 = t;
                                            int p_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = k_23(h_22, i_22, j_22, g_22, t);
                                                ;
                                                LocalPopChoice(p_15);
                                              }
                                            else
                                              {
                                                t = o_15;
                                                t = m_23(h_22, i_22, j_22, g_22, t);
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
ATerm downup2_2_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm t)
{
  t = v_128(t);
  {
    ATerm x_2 (ATerm t)
    {
      t = downup2_2_0(v_128, w_128, t);
      return(t);
    }
    t = SRTS_all(x_2, t);
    t = w_128(t);
  }
  return(t);
}
ATerm _2_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
  u_23 = t;
  if(match_cons(t, sym__2))
    {
      q_23 = ATgetArgument(t, 0);
      r_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_23);
  p_23 = t;
  t = q_23;
  t = i_101(t);
  s_23 = t;
  t = r_23;
  t = j_101(t);
  t_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, s_23, t_23), p_23);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm o_146 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
  if(match_cons(t, sym__2))
    {
      y_23 = ATgetArgument(t, 0);
      z_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_23, term_q_15);
  t = open_stream_0_0(t);
  a_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_24, z_23);
  t = o_146(t);
  t = fclose_0_0(t);
  t = z_23;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL;
  b_24 = t;
  {
    ATerm y_2 (ATerm t)
    {
      ATerm s_15 = t;
      int u_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_24 != NULL) && (c_24 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_2, t);
          ;
          LocalPopChoice(u_15);
        }
      else
        {
          t = s_15;
          t = term_v_15;
          if(((c_24 != NULL) && (c_24 != t)))
            _fail(t);
          else
            c_24 = t;
        }
      return(t);
    }
    t = _2_0(y_2, _id, t);
    t = b_24;
    {
      ATerm b_3 (ATerm t)
      {
        ATerm a_3 = NULL;
        a_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_24), a_3);
        return(t);
      }
      t = _2_0(_id, b_3, t);
      {
        ATerm w_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_3 (ATerm t)
            {
              ATerm e_3 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(e_3, t);
              return(t);
            }
            ATerm d_3 (ATerm t)
            {
              ATerm f_3 (ATerm t)
              {
                ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm y_15 = ATgetArgument(t, 0);
                    if(match_cons(y_15, sym_Stream_1))
                      {
                        d_24 = ATgetArgument(y_15, 0);
                      }
                    else
                      _fail(t);
                    e_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(d_24, e_24);
                f_24 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, f_24);
                return(t);
              }
              t = WriteToFile_1_0(f_3, t);
              return(t);
            }
            t = _2_0(c_3, d_3, t);
            ;
            LocalPopChoice(x_15);
          }
        else
          {
            t = w_15;
            {
              ATerm g_3 (ATerm t)
              {
                ATerm h_3 (ATerm t)
                {
                  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm z_15 = ATgetArgument(t, 0);
                      if(match_cons(z_15, sym_Stream_1))
                        {
                          g_24 = ATgetArgument(z_15, 0);
                        }
                      else
                        _fail(t);
                      h_24 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(g_24, h_24);
                  i_24 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), i_24);
                  j_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, j_24);
                  return(t);
                }
                t = WriteToFile_1_0(h_3, t);
                return(t);
              }
              t = _2_0(_id, g_3, t);
            }
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
ATerm apply_strategy_1_0 (ATerm q_149 (ATerm), ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL;
  k_24 = t;
  t = dtime_0_0(t);
  t = k_24;
  t = q_149(t);
  l_24 = t;
  t = dtime_0_0(t);
  m_24 = t;
  t = l_24;
  if(match_cons(t, sym__2))
    {
      n_24 = ATgetArgument(t, 0);
      o_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_24), (ATerm) ATmakeAppl(sym_Runtime_1, m_24)), o_24);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_25 (ATerm w_24, ATerm t)
  {
    t = SSL_fclose(w_24);
    return(t);
  }
  ATerm z_24 = NULL,a_25 = NULL;
  a_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_24 = ATgetArgument(t, 0);
      {
        ATerm a_16 = t;
        int b_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_24);
            ;
            LocalPopChoice(b_16);
          }
        else
          {
            t = a_16;
            t = c_25(a_25, t);
          }
      }
    }
  else
    {
      t = c_25(a_25, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_25 = NULL;
  t = SSL_stdin_stream();
  d_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_25);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_25 = NULL;
  t = SSL_stdout_stream();
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_25);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_25 = NULL;
  t = SSL_stderr_stream();
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_25);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      ATerm d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_3 = NULL,m_3 = NULL;
        l_3 = t;
        t = SSL_explode_term(l_3);
        if(match_cons(t, sym__2))
          {
            ATerm i_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_16) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_16 = ATgetArgument(t, 1);
              if(((ATgetType(l_16) == AT_LIST) && !(ATisEmpty(l_16))))
                {
                  m_3 = ATgetFirst((ATermList) l_16);
                  {
                    ATerm t_16 = (ATerm) ATgetNext((ATermList) l_16);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = m_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = m_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = m_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        {
          ATerm u_16 = t;
          int d_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
              ATerm i_3 (ATerm t)
              {
                ATerm p_25 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    p_25 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = p_25;
                return(t);
              }
              t = _2_0(i_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  m_25 = ATgetArgument(t, 0);
                  n_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(m_25, n_25);
              o_25 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, o_25);
              ;
              LocalPopChoice(d_17);
            }
          else
            {
              t = u_16;
              {
                ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
                ATerm j_3 (ATerm t)
                {
                  ATerm t_25 = NULL;
                  t_25 = t;
                  t = SSL_is_string(t_25);
                  return(t);
                }
                t = _2_0(j_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    q_25 = ATgetArgument(t, 0);
                    r_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(q_25, r_25);
                s_25 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, s_25);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  ATerm e_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_25 = NULL;
      x_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_25, term_i_17);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = e_17;
      {
        ATerm n_3 = NULL;
        n_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = n_3;
        _fail(t);
      }
    }
  u_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(w_25);
  v_25 = t;
  t = u_25;
  t = fclose_0_0(t);
  t = v_25;
  return(t);
}
ATerm fetch_1_0 (ATerm s_134 (ATerm), ATerm t)
{
  ATerm c_26 (ATerm t)
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_134, _id, t);
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        t = Cons_2_0(_id, c_26, t);
      }
    return(t);
  }
  t = c_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_17);
    }
  else
    {
      t = l_17;
      {
        ATerm h_26 = NULL,i_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_26 = ATgetFirst((ATermList) t);
            i_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_26;
        {
          ATerm k_3 (ATerm t)
          {
            t = i_26;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_3, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_134 (ATerm), ATerm t)
{
  ATerm o_26 (ATerm t)
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, o_26, t);
        ;
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_134(t);
      }
    return(t);
  }
  t = o_26(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm q_26 = NULL;
  ATerm o_3 (ATerm t)
  {
    ATerm r_26 = NULL;
    r_26 = t;
    t = SSL_explode_string(r_26);
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm s_26 = NULL;
    s_26 = t;
    t = SSL_explode_string(s_26);
    return(t);
  }
  t = _2_0(o_3, p_3, t);
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL,v_26 = NULL;
        if(match_cons(t, sym__2))
          {
            u_26 = ATgetArgument(t, 0);
            v_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_26;
        {
          ATerm q_3 (ATerm t)
          {
            t = v_26;
            return(t);
          }
          t = at_end_1_0(q_3, t);
        }
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        {
          ATerm s_3 = NULL,t_3 = NULL;
          s_3 = t;
          t = SSL_explode_term(s_3);
          if(match_cons(t, sym__2))
            {
              ATerm r_17 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_17) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              t_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_3;
          t = concat_0_0(t);
        }
      }
    q_26 = t;
    t = SSL_implode_string(q_26);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_27 = NULL;
      g_27 = t;
      t = SSL_is_string(g_27);
      ;
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 (ATerm t)
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
            t = map_1_0(r_3, t);
            ;
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
            {
              ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
              k_27 = t;
              if(match_cons(t, sym_Path_1))
                {
                  l_27 = ATgetArgument(t, 0);
                  t = l_27;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      l_27 = ATgetArgument(t, 0);
                      t = l_27;
                      {
                        ATerm y_17 = t;
                        int z_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), l_27);
                            {
                              ATerm a_18 = t;
                              int b_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm j_4 = NULL;
                                  t = eval_config_0_0(t);
                                  j_4 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), l_27, j_4);
                                  t = j_4;
                                  ;
                                  LocalPopChoice(b_18);
                                }
                              else
                                {
                                  t = a_18;
                                }
                            }
                            ;
                            LocalPopChoice(z_17);
                          }
                        else
                          {
                            t = y_17;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_27), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = l_27;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm q_27 = NULL,r_27 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          l_27 = ATgetArgument(t, 0);
                          m_27 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_27;
                      t = eval_config_0_0(t);
                      q_27 = t;
                      t = m_27;
                      t = eval_config_0_0(t);
                      r_27 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_147 (ATerm), ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_27 = NULL,y_27 = NULL;
      w_27 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_4 = NULL;
            t = eval_config_0_0(t);
            q_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_4);
            t = q_4;
            ;
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
          }
        y_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_27, term_g_18);
        t = geq_0_0(t);
        t = w_27;
        t = s_147(t);
      }
      ;
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm a_28 = NULL;
    a_28 = t;
    if(match_string(t, "-k"))
      {
        t = a_28;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = a_28;
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    ATerm b_28 = NULL,c_28 = NULL;
    b_28 = t;
    t = SSL_string_to_int(b_28);
    c_28 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), c_28);
    t = b_28;
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_h_18;
    return(t);
  }
  t = ArgOption_3_0(u_3, v_3, w_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_3 (ATerm t)
      {
        ATerm e_28 = NULL;
        e_28 = t;
        if(match_string(t, "-S"))
          {
            t = e_28;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = e_28;
          }
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_l_18;
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        t = term_m_18;
        return(t);
      }
      t = Option_3_0(x_3, y_3, z_3, t);
      ;
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      {
        ATerm n_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm b_4 (ATerm t)
            {
              ATerm f_28 = NULL,g_28 = NULL;
              f_28 = t;
              t = SSL_string_to_int(f_28);
              g_28 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), g_28);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, f_28);
              return(t);
            }
            ATerm c_4 (ATerm t)
            {
              t = term_t_18;
              return(t);
            }
            t = ArgOption_3_0(a_4, b_4, c_4, t);
            ;
            LocalPopChoice(q_18);
          }
        else
          {
            t = n_18;
            {
              ATerm d_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm e_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_u_18;
                return(t);
              }
              ATerm f_4 (ATerm t)
              {
                t = term_v_18;
                return(t);
              }
              t = Option_3_0(d_4, e_4, f_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_28 = NULL;
      t = term_e_6;
      t = d_0(t);
      n_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_18, term_y_18, n_28);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm q_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_28 = ATgetFirst((ATermList) t);
          m_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_28;
      t = a_0(t);
      t = term_e_6;
      t = b_0(t);
      q_28 = t;
      t = (ATerm) ATinsert(CheckATermList(m_28), q_28);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm s_28 = NULL;
    s_28 = t;
    if(match_string(t, "-o"))
      {
        t = s_28;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = s_28;
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm t_28 = NULL;
    t_28 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), t_28);
    t = (ATerm) ATmakeAppl(sym_Output_1, t_28);
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_z_18;
    return(t);
  }
  t = ArgOption_3_0(g_4, h_4, i_4, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL;
  if(match_cons(t, sym__3))
    {
      w_28 = ATgetArgument(t, 0);
      x_28 = ATgetArgument(t, 1);
      y_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_28, x_28);
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_19 = ATgetArgument(t, 0);
            ATerm i_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_28, x_28);
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        t = (ATerm) ATempty;
      }
    z_28 = t;
    t = SSL_table_put(w_28, x_28, (ATerm) ATinsert(CheckATermList(z_28), y_28));
    t = (ATerm) ATmakeAppl(sym__3, w_28, x_28, y_28);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_29 = NULL;
      t = term_e_6;
      t = m_0(t);
      n_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_18, term_y_18, n_29);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm r_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_29 = ATgetFirst((ATermList) t);
          k_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_29 = ATgetFirst((ATermList) t);
          m_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_29;
      t = i_0(t);
      t = l_29;
      t = k_0(t);
      r_29 = t;
      t = (ATerm) ATinsert(CheckATermList(m_29), r_29);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm t_29 = NULL;
    t_29 = t;
    if(match_string(t, "-i"))
      {
        t = t_29;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = t_29;
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    ATerm u_29 = NULL;
    u_29 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), u_29);
    t = (ATerm) ATmakeAppl(sym_Input_1, u_29);
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_n_19;
    return(t);
  }
  t = ArgOption_3_0(k_4, l_4, m_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_6;
  t = whoami_0_0(t);
  v_29 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), v_29));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 = NULL;
        t = eval_config_0_0(t);
        u_4 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_4);
        t = u_4;
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm j_140 (ATerm), ATerm k_140 (ATerm), ATerm t)
{
  ATerm r_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_140(t);
      ;
      LocalPopChoice(w_19);
    }
  else
    {
      t = r_19;
      {
        ATerm y_29 = NULL,z_29 = NULL,c_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_29 = ATgetFirst((ATermList) t);
            z_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_29;
        t = foldr_2_0(j_140, k_140, t);
        c_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_29, c_30);
        t = k_140(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_30 = NULL,w_4 = NULL,x_4 = NULL;
  t = times_0_0(t);
  w_4 = t;
  t = SSL_explode_term(w_4);
  if(match_cons(t, sym__2))
    {
      ATerm x_19 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4;
  {
    ATerm n_4 (ATerm t)
    {
      t = term_k_18;
      return(t);
    }
    ATerm o_4 (ATerm t)
    {
      ATerm a_5 = NULL,b_5 = NULL;
      if(match_cons(t, sym__2))
        {
          a_5 = ATgetArgument(t, 0);
          b_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm y_19 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(a_5, b_5);
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = y_19;
            t = SSL_addr(a_5, b_5);
          }
      }
      return(t);
    }
    t = foldr_2_0(n_4, o_4, t);
    f_30 = t;
    t = SSL_TicksToSeconds(f_30);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
  q_30 = t;
  if(match_cons(t, sym__2))
    {
      r_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_30;
        if((r_30 != t))
          {
            _fail(t);
          }
        t = q_30;
        ;
        LocalPopChoice(f_20);
      }
    else
      {
        t = d_20;
        t = q_30;
        {
          ATerm j_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_30, s_30);
              ;
              LocalPopChoice(k_20);
            }
          else
            {
              t = j_20;
              t = SSL_gtr(r_30, s_30);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_30, s_30);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_147 (ATerm), ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_30 = NULL,x_30 = NULL;
      v_30 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_5 = NULL;
            t = eval_config_0_0(t);
            v_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_5);
            t = v_5;
            ;
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
          }
        x_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_30, term_x_20);
        t = geq_0_0(t);
        t = v_30;
        t = r_147(t);
      }
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    ATerm z_30 = NULL,a_31 = NULL;
    t = run_time_0_0(t);
    z_30 = t;
    t = term_e_6;
    t = whoami_0_0(t);
    a_31 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), z_30), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), a_31));
    t = (ATerm) ATmakeAppl(sym__2, term_y_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_21), z_30), term_d_21), a_31));
    return(t);
  }
  t = if_verbose1_1_0(p_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm o_150 (ATerm), ATerm t)
{
  ATerm f_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm q_21 = t;
        int x_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_6 = NULL;
            t = eval_config_0_0(t);
            f_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), f_6);
            t = f_6;
            ;
            LocalPopChoice(x_21);
          }
        else
          {
            t = q_21;
          }
      }
      ;
      LocalPopChoice(p_21);
    }
  else
    {
      t = f_21;
      {
        ATerm r_4 (ATerm t)
        {
          ATerm y_21 = t;
          int k_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(k_22);
            }
          else
            {
              t = y_21;
              {
                ATerm l_22 = t;
                int m_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(m_22);
                  }
                else
                  {
                    t = l_22;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(r_4, t);
      }
    }
  t = o_150(t);
  return(t);
}
ATerm map_1_0 (ATerm h_134 (ATerm), ATerm t)
{
  ATerm b_31 (ATerm t)
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        t = Cons_2_0(h_134, b_31, t);
      }
    return(t);
  }
  t = b_31(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_31 = ATgetFirst((ATermList) t);
      e_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_31 = NULL,j_31 = NULL;
        t = e_31;
        t = g_0(t);
        i_31 = t;
        t = d_31;
        t = f_0(t);
        j_31 = t;
        t = e_31;
        {
          ATerm s_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(i_31), j_31);
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
      t = term_e_6;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm j_114 (ATerm), ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  n_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_31);
  k_31 = t;
  t = l_31;
  t = j_114(t);
  m_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, m_31), k_31);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_6 = NULL;
            t = eval_config_0_0(t);
            o_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_6);
            t = o_6;
            ;
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
          }
      }
      ;
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      {
        ATerm t_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(t_4, t);
      }
    }
  t = term_u_22;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm v_4 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, v_4, t);
    {
      ATerm y_4 (ATerm t)
      {
        ATerm q_31 = NULL;
        q_31 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, q_31), term_v_22);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(y_4, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm k_114 (ATerm), ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
  u_31 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      s_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_31);
  r_31 = t;
  t = s_31;
  t = k_114(t);
  t_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, t_31), r_31);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  y_31 = t;
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_22 = ATgetFirst((ATermList) t);
                ATerm z_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_31;
          }
        ;
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        t = (ATerm) ATinsert(ATempty, y_31);
      }
    z_31 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), z_31);
    t = y_31;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_6 = NULL;
        t = eval_config_0_0(t);
        y_6 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_6);
        t = y_6;
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_g_23;
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        t = term_h_23;
        return(t);
      }
      t = Option_3_0(z_4, c_5, d_5, t);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm e_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_v_23;
          return(t);
        }
        ATerm g_5 (ATerm t)
        {
          t = term_w_23;
          return(t);
        }
        t = Option_3_0(e_5, f_5, g_5, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
  i_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_32 = ATgetFirst((ATermList) t);
      f_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_32);
  d_32 = t;
  t = e_32;
  t = x_105(t);
  g_32 = t;
  t = f_32;
  t = y_105(t);
  h_32 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(h_32), g_32), d_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_152 (ATerm), ATerm t)
{
  ATerm m_32 = NULL;
  m_32 = t;
  {
    ATerm x_23 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_24;
        t = r_152(t);
        ;
        LocalPopChoice(p_24);
      }
    else
      {
        t = x_23;
      }
    t = m_32;
    {
      ATerm h_5 (ATerm t)
      {
        ATerm n_32 = NULL;
        n_32 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_32);
        t = (ATerm) ATmakeAppl(sym_Program_1, n_32);
        return(t);
      }
      ATerm i_5 (ATerm t)
      {
        ATerm r_24 = t;
        int s_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_24 = t;
            int u_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(u_24);
              }
            else
              {
                t = t_24;
                t = r_152(t);
                t = Cons_2_0(_id, i_5, t);
              }
            ;
            LocalPopChoice(s_24);
          }
        else
          {
            t = r_24;
            {
              ATerm p_32 = NULL,q_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_32 = ATgetFirst((ATermList) t);
                  q_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_32), (ATerm) ATmakeAppl(sym_Undefined_1, p_32));
            }
          }
        return(t);
      }
      t = Cons_2_0(h_5, i_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm q_152 (ATerm), ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = x_32;
  {
    ATerm j_5 (ATerm t)
    {
      ATerm v_24 = t;
      int x_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_152(t);
          ;
          LocalPopChoice(x_24);
        }
      else
        {
          t = v_24;
          {
            ATerm y_24 = t;
            int b_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_5 (ATerm t)
                {
                  ATerm a_33 = NULL;
                  a_33 = t;
                  if(match_string(t, "--help"))
                    {
                      t = a_33;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = a_33;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = a_33;
                        }
                    }
                  return(t);
                }
                ATerm l_5 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_g_25;
                  return(t);
                }
                ATerm m_5 (ATerm t)
                {
                  t = term_h_25;
                  return(t);
                }
                t = Option_3_0(k_5, l_5, m_5, t);
                ;
                LocalPopChoice(b_25);
              }
            else
              {
                t = y_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_5, t);
    {
      ATerm i_25 = t;
      int j_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_33 = NULL;
          f_33 = t;
          {
            ATerm k_25 = t;
            int l_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = f_33;
                {
                  ATerm y_25 = t;
                  int z_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm a_26 = t;
                        int b_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm j_8 = NULL;
                            t = eval_config_0_0(t);
                            j_8 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), j_8);
                            t = j_8;
                            ;
                            LocalPopChoice(b_26);
                          }
                        else
                          {
                            t = a_26;
                          }
                      }
                      ;
                      LocalPopChoice(z_25);
                    }
                  else
                    {
                      t = y_25;
                      {
                        ATerm n_5 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(n_5, t);
                      }
                    }
                  t = f_33;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(l_25);
              }
            else
              {
                t = k_25;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm d_26 = t;
                  int e_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_8 = NULL;
                      t = eval_config_0_0(t);
                      r_8 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), r_8);
                      t = r_8;
                      ;
                      LocalPopChoice(e_26);
                    }
                  else
                    {
                      t = d_26;
                    }
                  t = f_33;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(j_25);
        }
      else
        {
          t = i_25;
          {
            ATerm f_26 = t;
            int g_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm p_5 (ATerm t)
                  {
                    if(((y_32 != NULL) && (y_32 != t)))
                      _fail(t);
                    else
                      y_32 = t;
                    return(t);
                  }
                  t = Undefined_1_0(p_5, t);
                  return(t);
                }
                t = fetch_1_0(o_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_32)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_y_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_32)), term_j_26));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(g_26);
              }
            else
              {
                t = f_26;
              }
          }
        }
      z_32 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = z_32;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_150 (ATerm), ATerm r_150 (ATerm), ATerm s_150 (ATerm), ATerm t_150 (ATerm), ATerm t)
{
  ATerm i_33 = NULL;
  t = parse_options_1_0(q_150, t);
  i_33 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), i_33);
  t = i_33;
  t = s_150(t);
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_150, t);
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        {
          ATerm m_26 = t;
          int n_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_150(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_26);
            }
          else
            {
              t = m_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm z_149 (ATerm), ATerm a_150 (ATerm), ATerm b_150 (ATerm), ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm p_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_150(t);
        ;
        LocalPopChoice(t_26);
      }
    else
      {
        t = p_26;
        {
          ATerm w_26 = t;
          int x_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(x_26);
            }
          else
            {
              t = w_26;
              {
                ATerm y_26 = t;
                int z_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(z_26);
                  }
                else
                  {
                    t = y_26;
                    {
                      ATerm a_27 = t;
                      int b_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_5 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm u_5 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_c_27;
                            return(t);
                          }
                          ATerm w_5 (ATerm t)
                          {
                            t = term_d_27;
                            return(t);
                          }
                          t = Option_3_0(t_5, u_5, w_5, t);
                          ;
                          LocalPopChoice(b_27);
                        }
                      else
                        {
                          t = a_27;
                          {
                            ATerm e_27 = t;
                            int f_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(f_27);
                              }
                            else
                              {
                                t = e_27;
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
  ATerm r_5 (ATerm t)
  {
    ATerm x_5 (ATerm t)
    {
      ATerm j_33 = NULL,k_33 = NULL;
      j_33 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm h_27 = t;
        int i_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_9 = NULL;
            t = eval_config_0_0(t);
            k_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_9);
            t = k_9;
            ;
            LocalPopChoice(i_27);
          }
        else
          {
            t = h_27;
          }
        k_33 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, k_33));
        t = j_33;
      }
      return(t);
    }
    t = if_verbose2_1_0(x_5, t);
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    ATerm l_33 = NULL,m_33 = NULL,t_9 = NULL;
    l_33 = t;
    {
      ATerm j_27 = t;
      int n_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((m_33 != NULL) && (m_33 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_33 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_5, t);
          ;
          LocalPopChoice(n_27);
        }
      else
        {
          t = j_27;
          t = term_o_27;
          m_33 = t;
        }
      t = not_null(m_33);
      t = ReadFromFile_0_0(t);
      t_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_33, t_9);
      t = apply_strategy_1_0(z_149, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(q_5, b_150, r_5, s_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm b_6 (ATerm t)
      {
        t = repeat_1_0(Canon_0_0, t);
        return(t);
      }
      ATerm c_6 (ATerm t)
      {
        t = repeat_1_0(Canon_0_0, t);
        return(t);
      }
      t = downup2_2_0(b_6, c_6, t);
      {
        ATerm d_6 (ATerm t)
        {
          t = repeat_1_0(Simplify_0_0, t);
          return(t);
        }
        t = downup_1_0(d_6, t);
      }
      return(t);
    }
    t = _2_0(_id, a_6, t);
    return(t);
  }
  t = iowrap_3_0(z_5, _fail, default_usage_0_0, t);
  return(t);
}
