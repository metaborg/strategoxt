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
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Explode_2;
Symbol sym_Anno_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_As_2;
Symbol sym_RDefT_4;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Call_2;
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
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Some_1;
Symbol sym_Undefined_0;
Symbol sym_Anno_2;
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
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
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
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_v_23;
ATerm term_i_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_y_20;
ATerm term_u_20;
ATerm term_p_20;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_w_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_k_13;
ATerm term_e_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_e_12;
ATerm term_x_11;
ATerm term_o_11;
ATerm term_e_10;
ATerm term_c_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_p_6;
void init_constant_terms (void)
{
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Op_2, term_x_7, (ATerm) ATempty);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_ConstType_1, term_y_7);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym__2, term_x_14, term_e_12);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_e_12);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_e_12);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_d_21, term_e_12);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__2, term_m_16, term_e_12);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm MatchSimplify_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BMF_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm s_116 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm F10_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm TransformingCongruence_0_0 (ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm genzip_4_0 (ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm);
ATerm zip_1_0 (ATerm f_120 (ATerm), ATerm);
ATerm TransformingAnnoCongruence_0_0 (ATerm);
ATerm As_2_0 (ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm);
ATerm Op_2_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm u_113 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm MatchingCongruence_0_0 (ATerm);
ATerm DefineCongruences_0_0 (ATerm);
ATerm repeat_1_0 (ATerm y_131 (ATerm), ATerm);
ATerm downup2_2_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm n_98 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm s_98 (ATerm), ATerm);
ATerm apply_to_bodies_1_0 (ATerm p_113 (ATerm), ATerm);
ATerm _2_0 (ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_122 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_138 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm j_137 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_140 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm v_136 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm d_126 (ATerm), ATerm e_126 (ATerm), ATerm);
ATerm crush_2_0 (ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_138 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm j_141 (ATerm), ATerm);
ATerm store_options_0_0 (ATerm);
ATerm map_1_0 (ATerm p_121 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm j_113 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm k_113 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm z_121 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm j_142 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm g_118 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm o_143 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm m_143 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm l_143 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_141 (ATerm), ATerm m_141 (ATerm), ATerm n_141 (ATerm), ATerm o_141 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm a_141 (ATerm), ATerm b_141 (ATerm), ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm w_140 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm s_140 (ATerm), ATerm t_140 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm p_140 (ATerm), ATerm);
ATerm define_congruences_comp_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm MatchSimplify_0_0 (ATerm t)
{
  ATerm l_1 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm c_6 = ATgetArgument(t, 0);
      if(!(match_cons(c_6, sym_Wld_0)))
        _fail(t);
      l_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_1;
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm s_1 = NULL,u_1 = NULL,z_1 = NULL,h_2 = NULL,i_2 = NULL,n_2 = NULL,r_2 = NULL;
  if(match_cons(t, sym__2))
    {
      z_1 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_1;
  if(match_cons(t, sym_Build_1))
    {
      ATerm d_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_2;
  if(match_cons(t, sym_Where_1))
    {
      i_2 = ATgetArgument(t, 0);
      t = i_2;
      if(match_cons(t, sym_Prim_2))
        {
          s_1 = ATgetArgument(t, 0);
          u_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          i_2 = ATgetArgument(t, 0);
          n_2 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, i_2, n_2);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              i_2 = ATgetArgument(t, 0);
              n_2 = ATgetArgument(t, 1);
              r_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,h_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_6 = ATgetArgument(t, 0);
      if(match_cons(e_6, sym_Build_1))
        {
          ATerm g_6 = ATgetArgument(e_6, 0);
          if(match_cons(g_6, sym_Op_2))
            {
              e_3 = ATgetArgument(g_6, 0);
              d_3 = ATgetArgument(g_6, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm f_6 = ATgetArgument(t, 1);
        if(match_cons(f_6, sym_Match_1))
          {
            ATerm h_6 = ATgetArgument(f_6, 0);
            if(match_cons(h_6, sym_Op_2))
              {
                if((e_3 != ATgetArgument(h_6, 0)))
                  {
                    _fail(ATgetArgument(h_6, 0));
                  }
                f_3 = ATgetArgument(h_6, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, d_3, f_3);
  {
    ATerm c_0 (ATerm t)
    {
      ATerm i_3 = NULL,j_3 = NULL;
      if(match_cons(t, sym__2))
        {
          i_3 = ATgetArgument(t, 0);
          j_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_3), (ATerm) ATmakeAppl(sym_Match_1, j_3));
      return(t);
    }
    t = zip_1_0(c_0, t);
    h_3 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_3), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, e_3, d_3)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_6 = ATgetArgument(t, 0);
      if(match_cons(i_6, sym_Build_1))
        {
          ATerm k_6 = ATgetArgument(i_6, 0);
          if(match_cons(k_6, sym_Op_2))
            {
              k_3 = ATgetArgument(k_6, 0);
              {
                ATerm l_6 = ATgetArgument(k_6, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm j_6 = ATgetArgument(t, 1);
        if(match_cons(j_6, sym_Match_1))
          {
            ATerm m_6 = ATgetArgument(j_6, 0);
            if(match_cons(m_6, sym_Op_2))
              {
                l_3 = ATgetArgument(m_6, 0);
                {
                  ATerm n_6 = ATgetArgument(m_6, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, k_3, l_3);
  {
    ATerm o_6 = t;
    if((PushChoice() == 0))
      {
        ATerm o_3 = NULL;
        if(match_cons(t, sym__2))
          {
            o_3 = ATgetArgument(t, 0);
            if((o_3 != ATgetArgument(t, 1)))
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
        t = o_6;
      }
    t = term_p_6;
  }
  return(t);
}
ATerm BMF_0_0 (ATerm t)
{
  ATerm q_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0_0(t);
      ;
      LocalPopChoice(r_6);
    }
  else
    {
      t = q_6;
      {
        ATerm t_6 = t;
        int v_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0_0(t);
            ;
            LocalPopChoice(v_6);
          }
        else
          {
            t = t_6;
            {
              ATerm w_6 = t;
              int x_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_4 = NULL,c_4 = NULL,d_4 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      a_4 = ATgetArgument(t, 0);
                      c_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = a_4;
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm y_6 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = c_4;
                  if(match_cons(t, sym_Build_1))
                    {
                      d_4 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  ;
                  LocalPopChoice(x_6);
                }
              else
                {
                  t = w_6;
                  {
                    ATerm z_6 = t;
                    int a_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0_0(t);
                        ;
                        LocalPopChoice(a_7);
                      }
                    else
                      {
                        t = z_6;
                        {
                          ATerm i_4 = NULL,j_4 = NULL,q_4 = NULL,x_4 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              i_4 = ATgetArgument(t, 0);
                              q_4 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = i_4;
                          if(match_cons(t, sym_Match_1))
                            {
                              j_4 = ATgetArgument(t, 0);
                              t = q_4;
                              if(match_cons(t, sym_Match_1))
                                {
                                  x_4 = ATgetArgument(t, 0);
                                  t = x_4;
                                  if((j_4 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, j_4);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      x_4 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = x_4;
                                  if((j_4 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, j_4);
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_Build_1))
                                {
                                  j_4 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = q_4;
                              if(match_cons(t, sym_Match_1))
                                {
                                  x_4 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = x_4;
                              if((j_4 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_Build_1, j_4);
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
  ATerm s_6 = NULL,u_6 = NULL,p_7 = NULL,q_7 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7;
  if(match_cons(t, sym_Seq_2))
    {
      s_6 = ATgetArgument(t, 0);
      u_6 = ATgetArgument(t, 1);
      {
        ATerm b_7 = t;
        int c_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_8 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, p_7, s_6);
            t = BMF_0_0(t);
            j_8 = t;
            t = (ATerm) ATmakeAppl(sym_Seq_2, j_8, u_6);
            ;
            LocalPopChoice(c_7);
          }
        else
          {
            t = b_7;
            t = (ATerm) ATmakeAppl(sym__2, p_7, q_7);
            t = BMF_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, p_7, q_7);
      t = BMF_0_0(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm s_116 (ATerm), ATerm t)
{
  ATerm z_8 (ATerm t)
  {
    ATerm d_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_116(t);
        ;
        LocalPopChoice(e_7);
      }
    else
      {
        t = d_7;
        t = SRTS_one(z_8, t);
      }
    return(t);
  }
  t = z_8(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm a_9 = NULL,c_9 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm f_7 = ATgetArgument(t, 0);
      if(((ATgetType(f_7) == AT_LIST) && !(ATisEmpty(f_7))))
        {
          ATerm h_7 = ATgetFirst((ATermList) f_7);
          if(match_cons(h_7, sym_SDefT_4))
            {
              c_9 = ATgetArgument(h_7, 0);
              {
                ATerm j_7 = ATgetArgument(h_7, 1);
                if(((ATgetType(j_7) != AT_LIST) || !(ATisEmpty(j_7))))
                  _fail(t);
              }
              {
                ATerm k_7 = ATgetArgument(h_7, 2);
                if(((ATgetType(k_7) != AT_LIST) || !(ATisEmpty(k_7))))
                  _fail(t);
              }
              a_9 = ATgetArgument(h_7, 3);
            }
          else
            _fail(t);
          {
            ATerm i_7 = (ATerm) ATgetNext((ATermList) f_7);
            if(((ATgetType(i_7) != AT_LIST) || !(ATisEmpty(i_7))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm g_7 = ATgetArgument(t, 1);
        if(match_cons(g_7, sym_CallT_3))
          {
            ATerm l_7 = ATgetArgument(g_7, 0);
            if(match_cons(l_7, sym_SVar_1))
              {
                if((c_9 != ATgetArgument(l_7, 0)))
                  {
                    _fail(ATgetArgument(l_7, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm m_7 = ATgetArgument(g_7, 1);
              if(((ATgetType(m_7) != AT_LIST) || !(ATisEmpty(m_7))))
                _fail(t);
            }
            {
              ATerm n_7 = ATgetArgument(g_7, 2);
              if(((ATgetType(n_7) != AT_LIST) || !(ATisEmpty(n_7))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_9;
  {
    ATerm o_7 = t;
    if((PushChoice() == 0))
      {
        ATerm e_0 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm r_7 = ATgetArgument(t, 0);
              if(match_cons(r_7, sym_SVar_1))
                {
                  if((c_9 != ATgetArgument(r_7, 0)))
                    {
                      _fail(ATgetArgument(r_7, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm s_7 = ATgetArgument(t, 1);
                if(((ATgetType(s_7) != AT_LIST) || !(ATisEmpty(s_7))))
                  _fail(t);
              }
              {
                ATerm t_7 = ATgetArgument(t, 2);
                if(((ATgetType(t_7) != AT_LIST) || !(ATisEmpty(t_7))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(e_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_7;
      }
    t = a_9;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,v_10 = NULL,w_10 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      v_10 = ATgetArgument(t, 0);
      t = v_10;
      if(match_cons(t, sym_Seq_2))
        {
          t_10 = ATgetArgument(t, 0);
          p_10 = ATgetArgument(t, 1);
          t = t_10;
          if(match_cons(t, sym_Where_1))
            {
              o_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_10;
          if(match_cons(t, sym_Seq_2))
            {
              q_10 = ATgetArgument(t, 0);
              s_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_10;
          if(match_cons(t, sym_Build_1))
            {
              r_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, o_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_10), s_10)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              t_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          v_10 = ATgetArgument(t, 0);
          t = v_10;
          if(match_cons(t, sym_Test_1))
            {
              t_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              v_10 = ATgetArgument(t, 0);
              t = v_10;
              if(match_cons(t, sym_Not_1))
                {
                  t_10 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, t_10);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  v_10 = ATgetArgument(t, 0);
                  w_10 = ATgetArgument(t, 1);
                  t = w_10;
                  if((v_10 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      v_10 = ATgetArgument(t, 0);
                      w_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = w_10;
                  if((v_10 != t))
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
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      p_11 = ATgetArgument(t, 0);
      s_11 = ATgetArgument(t, 1);
      t = p_11;
      if(match_cons(t, sym_LChoice_2))
        {
          q_11 = ATgetArgument(t, 0);
          r_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, q_11, (ATerm) ATmakeAppl(sym_LChoice_2, r_11, s_11));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          p_11 = ATgetArgument(t, 0);
          s_11 = ATgetArgument(t, 1);
          t = p_11;
          if(match_cons(t, sym_Seq_2))
            {
              q_11 = ATgetArgument(t, 0);
              r_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, q_11, (ATerm) ATmakeAppl(sym_Seq_2, r_11, s_11));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              p_11 = ATgetArgument(t, 0);
              s_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_11;
          if(match_cons(t, sym_Choice_2))
            {
              q_11 = ATgetArgument(t, 0);
              r_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, q_11, (ATerm) ATmakeAppl(sym_Choice_2, r_11, s_11));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm h_0 (ATerm t)
        {
          ATerm j_0 (ATerm t)
          {
            t = map1_1_0(n_0, t);
            return(t);
          }
          t = try_1_0(j_0, t);
          return(t);
        }
        t = Cons_2_0(_id, h_0, t);
      }
      ;
      LocalPopChoice(v_7);
    }
  else
    {
      t = u_7;
      {
        ATerm l_0 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, l_0, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,l_12 = NULL,m_12 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      l_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, l_12, m_12);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          l_12 = ATgetArgument(t, 0);
          t = l_12;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_12 = ATgetFirst((ATermList) t);
              h_12 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, g_12, (ATerm) ATmakeAppl(sym_LChoices_1, h_12));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_p_6;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              l_12 = ATgetArgument(t, 0);
              t = l_12;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_12 = ATgetFirst((ATermList) t);
                  h_12 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, g_12, (ATerm) ATmakeAppl(sym_Choices_1, h_12));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_p_6;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  l_12 = ATgetArgument(t, 0);
                  t = l_12;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_12 = ATgetFirst((ATermList) t);
                      h_12 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, (ATerm) ATmakeAppl(sym_Seqs_1, h_12));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_w_7;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_12 = ATgetArgument(t, 0);
                      m_12 = ATgetArgument(t, 1);
                      j_12 = ATgetArgument(t, 2);
                      i_12 = ATgetArgument(t, 3);
                      {
                        ATerm z_12 = NULL,a_13 = NULL;
                        t = m_12;
                        {
                          ATerm o_0 (ATerm t)
                          {
                            ATerm b_13 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                b_13 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_7), term_z_7));
                            return(t);
                          }
                          t = map1_1_0(o_0, t);
                          z_12 = t;
                          t = j_12;
                          {
                            ATerm p_0 (ATerm t)
                            {
                              ATerm q_0 (ATerm t)
                              {
                                ATerm c_13 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    c_13 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, c_13, term_z_7);
                                return(t);
                              }
                              t = try_1_0(q_0, t);
                              return(t);
                            }
                            t = map1_1_0(p_0, t);
                            a_13 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, l_12, z_12, a_13, i_12);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          l_12 = ATgetArgument(t, 0);
                          m_12 = ATgetArgument(t, 1);
                          j_12 = ATgetArgument(t, 2);
                          i_12 = ATgetArgument(t, 3);
                          {
                            ATerm a_8 = t;
                            int b_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_13 = NULL,i_13 = NULL;
                                t = j_12;
                                {
                                  ATerm r_0 (ATerm t)
                                  {
                                    ATerm l_13 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        l_13 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, l_13, term_z_7);
                                    return(t);
                                  }
                                  t = map1_1_0(r_0, t);
                                  h_13 = t;
                                  t = m_12;
                                  {
                                    ATerm s_0 (ATerm t)
                                    {
                                      ATerm t_0 (ATerm t)
                                      {
                                        ATerm m_13 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            m_13 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_7), term_z_7));
                                        return(t);
                                      }
                                      t = try_1_0(t_0, t);
                                      return(t);
                                    }
                                    t = map_1_0(s_0, t);
                                    i_13 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, l_12, i_13, h_13, i_12);
                                  }
                                }
                                ;
                                LocalPopChoice(b_8);
                              }
                            else
                              {
                                t = a_8;
                                {
                                  ATerm r_13 = NULL,s_13 = NULL;
                                  t = m_12;
                                  {
                                    ATerm u_0 (ATerm t)
                                    {
                                      ATerm t_13 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          t_13 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, t_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_7), term_z_7));
                                      return(t);
                                    }
                                    t = map1_1_0(u_0, t);
                                    r_13 = t;
                                    t = j_12;
                                    {
                                      ATerm v_0 (ATerm t)
                                      {
                                        ATerm w_0 (ATerm t)
                                        {
                                          ATerm u_13 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              u_13 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, u_13, term_z_7);
                                          return(t);
                                        }
                                        t = try_1_0(w_0, t);
                                        return(t);
                                      }
                                      t = map_1_0(v_0, t);
                                      s_13 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, l_12, r_13, s_13, i_12);
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
                              l_12 = ATgetArgument(t, 0);
                              m_12 = ATgetArgument(t, 1);
                              j_12 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, m_12, (ATerm) ATmakeAppl(sym_Op_2, term_c_8, (ATerm) ATinsert(ATinsert(ATempty, j_12), l_12)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  l_12 = ATgetArgument(t, 0);
                                  m_12 = ATgetArgument(t, 1);
                                  j_12 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, j_12)), l_12), (ATerm) ATmakeAppl(sym_Build_1, m_12)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      l_12 = ATgetArgument(t, 0);
                                      m_12 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_12, (ATerm) ATmakeAppl(sym_Match_1, m_12));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          l_12 = ATgetArgument(t, 0);
                                          m_12 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_12), m_12);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              l_12 = ATgetArgument(t, 0);
                                              m_12 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_12), l_12);
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
  ATerm h_14 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      ATerm d_8 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_14;
  {
    ATerm x_0 (ATerm t)
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      return(t);
    }
    t = fetch_1_0(x_0, t);
    t = term_p_6;
  }
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_15 = NULL,c_15 = NULL;
      if(match_cons(t, sym_Test_1))
        {
          b_15 = ATgetArgument(t, 0);
          t = b_15;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              b_15 = ATgetArgument(t, 0);
              t = b_15;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_w_7;
            }
          else
            {
              ATerm g_8 = t;
              int h_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      b_15 = ATgetArgument(t, 0);
                      {
                        ATerm i_8 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(h_8);
                  t = b_15;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                }
              else
                {
                  t = g_8;
                  {
                    ATerm k_8 = t;
                    int l_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm m_8 = ATgetArgument(t, 0);
                            c_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(l_8);
                        t = c_15;
                        if(!(match_cons(t, sym_Fail_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = k_8;
                        {
                          ATerm n_8 = t;
                          int o_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm p_8 = ATgetArgument(t, 0);
                                  c_15 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(o_8);
                              t = c_15;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = n_8;
                              if(match_cons(t, sym_Some_1))
                                {
                                  b_15 = ATgetArgument(t, 0);
                                  t = b_15;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_One_1))
                                    {
                                      b_15 = ATgetArgument(t, 0);
                                      t = b_15;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm q_8 = ATgetArgument(t, 0);
                                          c_15 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = c_15;
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
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      {
        ATerm r_8 = t;
        int s_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F10_0_0(t);
            ;
            LocalPopChoice(s_8);
          }
        else
          {
            t = r_8;
            {
              ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
              if(match_cons(t, sym_Choice_2))
                {
                  e_15 = ATgetArgument(t, 0);
                  f_15 = ATgetArgument(t, 1);
                  t = f_15;
                  if(match_cons(t, sym_Fail_0))
                    {
                      t = e_15;
                      if(match_cons(t, sym_Fail_0))
                        {
                          ATerm t_8 = t;
                          int u_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = f_15;
                              ;
                              LocalPopChoice(u_8);
                            }
                          else
                            {
                              t = t_8;
                              t = e_15;
                            }
                        }
                      else
                        {
                          t = e_15;
                        }
                    }
                  else
                    {
                      t = e_15;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = f_15;
                    }
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      e_15 = ATgetArgument(t, 0);
                      f_15 = ATgetArgument(t, 1);
                      t = f_15;
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = e_15;
                          if(match_cons(t, sym_Fail_0))
                            {
                              ATerm v_8 = t;
                              int w_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = f_15;
                                  ;
                                  LocalPopChoice(w_8);
                                }
                              else
                                {
                                  t = v_8;
                                  t = e_15;
                                }
                            }
                          else
                            {
                              t = e_15;
                            }
                        }
                      else
                        {
                          t = e_15;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = f_15;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Where_1))
                        {
                          e_15 = ATgetArgument(t, 0);
                          t = e_15;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_GuardedLChoice_3))
                            {
                              e_15 = ATgetArgument(t, 0);
                              f_15 = ATgetArgument(t, 1);
                              g_15 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = g_15;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_15, f_15);
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
  ATerm d_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      f_16 = ATgetArgument(t, 0);
      t = f_16;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          f_16 = ATgetArgument(t, 0);
          t = f_16;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_p_6;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              f_16 = ATgetArgument(t, 0);
              d_16 = ATgetArgument(t, 1);
              t = d_16;
              if(match_cons(t, sym_Id_0))
                {
                  t = f_16;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm x_8 = t;
                      int y_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = d_16;
                          ;
                          LocalPopChoice(y_8);
                        }
                      else
                        {
                          t = x_8;
                          t = f_16;
                        }
                    }
                  else
                    {
                      t = f_16;
                    }
                }
              else
                {
                  t = f_16;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = d_16;
                }
            }
          else
            {
              ATerm b_9 = t;
              int d_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      f_16 = ATgetArgument(t, 0);
                      {
                        ATerm e_9 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_9);
                  t = f_16;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = b_9;
                  {
                    ATerm f_9 = t;
                    int g_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm h_9 = ATgetArgument(t, 0);
                            d_16 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(g_9);
                        t = d_16;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = f_9;
                        {
                          ATerm i_9 = t;
                          int j_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm k_9 = ATgetArgument(t, 0);
                                  d_16 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(j_9);
                              t = d_16;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = i_9;
                              if(match_cons(t, sym_All_1))
                                {
                                  f_16 = ATgetArgument(t, 0);
                                  t = f_16;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      f_16 = ATgetArgument(t, 0);
                                      t = f_16;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          f_16 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = f_16;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_w_7;
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
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            {
              ATerm p_9 = t;
              int q_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(q_9);
                }
              else
                {
                  t = p_9;
                  {
                    ATerm r_9 = t;
                    int s_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(s_9);
                      }
                    else
                      {
                        t = r_9;
                        {
                          ATerm t_9 = t;
                          int u_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(u_9);
                            }
                          else
                            {
                              t = t_9;
                              {
                                ATerm v_9 = t;
                                int w_9 = stack_ptr;
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
                                    LocalPopChoice(w_9);
                                  }
                                else
                                  {
                                    t = v_9;
                                    {
                                      ATerm x_9 = t;
                                      int y_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(y_9);
                                        }
                                      else
                                        {
                                          t = x_9;
                                          {
                                            ATerm z_9 = t;
                                            int a_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(a_10);
                                              }
                                            else
                                              {
                                                t = z_9;
                                                t = MatchSimplify_0_0(t);
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
ATerm TransformingCongruence_0_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      s_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_16;
  t = map_1_0(new_0_0, t);
  u_16 = t;
  {
    ATerm y_0 (ATerm t)
    {
      ATerm e_17 = NULL;
      e_17 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_17);
      return(t);
    }
    t = map_1_0(y_0, t);
    v_16 = t;
    t = new_0_0(t);
    w_16 = t;
    t = t_16;
    t = map_1_0(new_0_0, t);
    x_16 = t;
    {
      ATerm z_0 (ATerm t)
      {
        ATerm f_17 = NULL;
        f_17 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, f_17);
        return(t);
      }
      t = map_1_0(z_0, t);
      y_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_16, x_16);
      t = zip_1_0(_id, t);
      z_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_16, t_16);
      {
        ATerm a_1 (ATerm t)
        {
          ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm b_10 = ATgetArgument(t, 0);
              if(match_cons(b_10, sym__2))
                {
                  g_17 = ATgetArgument(b_10, 0);
                  h_17 = ATgetArgument(b_10, 1);
                }
              else
                _fail(t);
              i_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, g_17)), (ATerm) ATmakeAppl(sym_Seq_2, i_17, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_17))));
          return(t);
        }
        t = zip_1_0(a_1, t);
        a_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_16, x_16);
        t = conc_0_0(t);
        b_17 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, s_16, v_16), (ATerm) ATmakeAppl(sym_Var_1, w_16)));
        t = Mapp2_0_0(t);
        c_17 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, s_16, y_16), (ATerm) ATmakeAppl(sym_Var_1, w_16)));
        t = Bapp2_0_0(t);
        d_17 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(b_17), w_16), (ATerm) ATmakeAppl(sym_Seq_2, c_17, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_17), d_17)));
      }
    }
  }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL;
  k_17 = t;
  if(match_cons(t, sym_Build_1))
    {
      l_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
        t = k_17;
        t = new_0_0(t);
        n_17 = t;
        t = l_17;
        {
          ATerm b_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                o_17 = ATgetArgument(t, 0);
                p_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, n_17);
            return(t);
          }
          t = pat_td_1_0(b_1, t);
          q_17 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_17), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_10, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_17)), not_null(o_17))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_17)))), (ATerm) ATmakeAppl(sym_Build_1, q_17)));
        }
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        {
          ATerm f_10 = t;
          int g_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
              t = k_17;
              t = new_0_0(t);
              s_17 = t;
              t = l_17;
              {
                ATerm c_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      t_17 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, s_17);
                  return(t);
                }
                t = pat_td_1_0(c_1, t);
                u_17 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_17), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_17), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_17)))), (ATerm) ATmakeAppl(sym_Build_1, u_17)));
              }
              ;
              LocalPopChoice(g_10);
            }
          else
            {
              t = f_10;
              {
                ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
                t = k_17;
                t = new_0_0(t);
                w_17 = t;
                t = l_17;
                {
                  ATerm d_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        x_17 = ATgetArgument(t, 0);
                        y_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, w_17);
                    return(t);
                  }
                  t = pat_td_1_0(d_1, t);
                  z_17 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_17), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(x_17), not_null(y_17), (ATerm) ATmakeAppl(sym_Var_1, w_17))), (ATerm) ATmakeAppl(sym_Build_1, z_17)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm t)
{
  ATerm a_18 (ATerm t)
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_120(t);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        t = b_120(t);
        t = _2_0(d_120, a_18, t);
        t = c_120(t);
      }
    return(t);
  }
  t = a_18(t);
  return(t);
}
ATerm zip_1_0 (ATerm f_120 (ATerm), ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm j_10 = ATgetArgument(t, 0);
        if(((ATgetType(j_10) != AT_LIST) || !(ATisEmpty(j_10))))
          _fail(t);
        {
          ATerm k_10 = ATgetArgument(t, 1);
          if(((ATgetType(k_10) != AT_LIST) || !(ATisEmpty(k_10))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm l_10 = ATgetArgument(t, 0);
        if(((ATgetType(l_10) == AT_LIST) && !(ATisEmpty(l_10))))
          {
            b_18 = ATgetFirst((ATermList) l_10);
            d_18 = (ATerm) ATgetNext((ATermList) l_10);
          }
        else
          _fail(t);
        {
          ATerm m_10 = ATgetArgument(t, 1);
          if(((ATgetType(m_10) == AT_LIST) && !(ATisEmpty(m_10))))
            {
              c_18 = ATgetFirst((ATermList) m_10);
              e_18 = (ATerm) ATgetNext((ATermList) m_10);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_18, c_18), (ATerm) ATmakeAppl(sym__2, d_18, e_18));
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    ATerm f_18 = NULL,g_18 = NULL;
    if(match_cons(t, sym__2))
      {
        f_18 = ATgetArgument(t, 0);
        g_18 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(g_18), f_18);
    return(t);
  }
  t = genzip_4_0(e_1, f_1, g_1, f_120, t);
  return(t);
}
ATerm TransformingAnnoCongruence_0_0 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  if(match_cons(t, sym_Call_2))
    {
      ATerm n_10 = ATgetArgument(t, 0);
      if(match_cons(n_10, sym_SVar_1))
        {
          ATerm x_10 = ATgetArgument(n_10, 0);
          if((ATgetSymbol((ATermAppl) x_10) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm u_10 = ATgetArgument(t, 1);
        if(((ATgetType(u_10) == AT_LIST) && !(ATisEmpty(u_10))))
          {
            ATerm y_10 = ATgetFirst((ATermList) u_10);
            if(match_cons(y_10, sym_Cong_2))
              {
                h_18 = ATgetArgument(y_10, 0);
                i_18 = ATgetArgument(y_10, 1);
              }
            else
              _fail(t);
            {
              ATerm z_10 = (ATerm) ATgetNext((ATermList) u_10);
              if(((ATgetType(z_10) == AT_LIST) && !(ATisEmpty(z_10))))
                {
                  j_18 = ATgetFirst((ATermList) z_10);
                  {
                    ATerm a_11 = (ATerm) ATgetNext((ATermList) z_10);
                    if(((ATgetType(a_11) != AT_LIST) || !(ATisEmpty(a_11))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_18), j_18);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_18 = ATgetFirst((ATermList) t);
      l_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm h_1 (ATerm t)
    {
      ATerm v_18 = NULL;
      v_18 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, v_18);
      return(t);
    }
    t = map_1_0(h_1, t);
    m_18 = t;
    t = (ATerm) ATinsert(CheckATermList(i_18), j_18);
    t = map_1_0(new_0_0, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_18 = ATgetFirst((ATermList) t);
        o_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_1 (ATerm t)
      {
        ATerm w_18 = NULL;
        w_18 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, w_18);
        return(t);
      }
      t = map_1_0(i_1, t);
      p_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_18, o_18);
      t = zip_1_0(_id, t);
      q_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_18, (ATerm) ATinsert(CheckATermList(i_18), j_18));
      {
        ATerm j_1 (ATerm t)
        {
          ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm b_11 = ATgetArgument(t, 0);
              if(match_cons(b_11, sym__2))
                {
                  x_18 = ATgetArgument(b_11, 0);
                  y_18 = ATgetArgument(b_11, 1);
                }
              else
                _fail(t);
              z_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, x_18)), (ATerm) ATmakeAppl(sym_Seq_2, z_18, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_18))));
          return(t);
        }
        t = zip_1_0(j_1, t);
        r_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_18, o_18);
        t = conc_0_0(t);
        s_18 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, h_18, m_18), (ATerm) ATmakeAppl(sym_Var_1, k_18)));
        t = Mapp2_0_0(t);
        t_18 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, h_18, p_18), (ATerm) ATmakeAppl(sym_Var_1, n_18)));
        t = Bapp2_0_0(t);
        u_18 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(s_18), n_18), k_18), (ATerm) ATmakeAppl(sym_Seq_2, t_18, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_18), u_18)));
      }
    }
  }
  return(t);
}
ATerm As_2_0 (ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym_As_2))
    {
      b_19 = ATgetArgument(t, 0);
      c_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_19);
  a_19 = t;
  t = b_19;
  t = c_100(t);
  d_19 = t;
  t = c_19;
  t = d_100(t);
  e_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, d_19, e_19), a_19);
  return(t);
}
ATerm PrimT_3_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
  q_19 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      k_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
      m_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_19);
  j_19 = t;
  t = k_19;
  t = b_104(t);
  n_19 = t;
  t = l_19;
  t = c_104(t);
  o_19 = t;
  t = m_19;
  t = d_104(t);
  p_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, n_19, o_19, p_19), j_19);
  return(t);
}
ATerm Explode_2_0 (ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
  z_19 = t;
  if(match_cons(t, sym_Explode_2))
    {
      v_19 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_19);
  u_19 = t;
  t = v_19;
  t = v_99(t);
  x_19 = t;
  t = w_19;
  t = w_99(t);
  y_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, x_19, y_19), u_19);
  return(t);
}
ATerm Op_2_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
  i_20 = t;
  if(match_cons(t, sym_Op_2))
    {
      e_20 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_20);
  d_20 = t;
  t = e_20;
  t = r_99(t);
  g_20 = t;
  t = f_20;
  t = s_99(t);
  h_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, g_20, h_20), d_20);
  return(t);
}
ATerm pat_td_1_0 (ATerm u_113 (ATerm), ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_113(t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              ATerm m_1 (ATerm t)
              {
                t = pat_td_1_0(u_113, t);
                return(t);
              }
              t = fetch_1_0(m_1, t);
              return(t);
            }
            t = Op_2_0(_id, k_1, t);
            ;
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            {
              ATerm g_11 = t;
              int h_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_1 (ATerm t)
                  {
                    t = pat_td_1_0(u_113, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, n_1, t);
                  ;
                  LocalPopChoice(h_11);
                }
              else
                {
                  t = g_11;
                  {
                    ATerm i_11 = t;
                    int j_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_1 (ATerm t)
                        {
                          t = pat_td_1_0(u_113, t);
                          return(t);
                        }
                        t = Explode_2_0(o_1, _id, t);
                        ;
                        LocalPopChoice(j_11);
                      }
                    else
                      {
                        t = i_11;
                        {
                          ATerm k_11 = t;
                          int l_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_1 (ATerm t)
                              {
                                ATerm q_1 (ATerm t)
                                {
                                  t = pat_td_1_0(u_113, t);
                                  return(t);
                                }
                                t = fetch_1_0(q_1, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, p_1, t);
                              ;
                              LocalPopChoice(l_11);
                            }
                          else
                            {
                              t = k_11;
                              {
                                ATerm r_1 (ATerm t)
                                {
                                  t = pat_td_1_0(u_113, t);
                                  return(t);
                                }
                                t = As_2_0(_id, r_1, t);
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
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL;
  n_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      o_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
        t = n_20;
        t = new_0_0(t);
        q_20 = t;
        t = o_20;
        {
          ATerm t_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                s_20 = ATgetArgument(t, 0);
                r_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, q_20), s_20);
            return(t);
          }
          t = pat_td_1_0(t_1, t);
          t_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_o_11, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_20))))));
        }
        ;
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        {
          ATerm t_11 = t;
          int u_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
              t = n_20;
              t = new_0_0(t);
              v_20 = t;
              t = o_20;
              {
                ATerm v_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      w_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, v_20);
                  return(t);
                }
                t = pat_td_1_0(v_1, t);
                x_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, v_20)), not_null(w_20))));
              }
              ;
              LocalPopChoice(u_11);
            }
          else
            {
              t = t_11;
              {
                ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
                t = n_20;
                t = new_0_0(t);
                z_20 = t;
                t = o_20;
                {
                  ATerm w_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        a_21 = ATgetArgument(t, 0);
                        b_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, z_20);
                    return(t);
                  }
                  t = pat_td_1_0(w_1, t);
                  c_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, z_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_21)), not_null(a_21)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm MatchingCongruence_0_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      i_21 = ATgetArgument(t, 0);
      j_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_21;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm v_11 = t;
      int w_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, i_21, (ATerm) ATempty));
          ;
          LocalPopChoice(w_11);
        }
      else
        {
          t = v_11;
          {
            ATerm n_21 = NULL;
            t = j_21;
            {
              ATerm x_1 (ATerm t)
              {
                ATerm o_21 = NULL;
                if(match_cons(t, sym_Match_1))
                  {
                    o_21 = ATgetArgument(t, 0);
                    t = o_21;
                  }
                else
                  {
                    if(!(match_cons(t, sym_Id_0)))
                      _fail(t);
                    t = term_x_11;
                  }
                return(t);
              }
              t = map_1_0(x_1, t);
              n_21 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, i_21, n_21));
              t = Mapp2_0_0(t);
            }
          }
        }
    }
  else
    {
      ATerm t_21 = NULL;
      t = j_21;
      {
        ATerm y_1 (ATerm t)
        {
          ATerm u_21 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              u_21 = ATgetArgument(t, 0);
              t = u_21;
            }
          else
            {
              if(!(match_cons(t, sym_Id_0)))
                _fail(t);
              t = term_x_11;
            }
          return(t);
        }
        t = map_1_0(y_1, t);
        t_21 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, i_21, t_21));
        t = Mapp2_0_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruences_0_0 (ATerm t)
{
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatchingCongruence_0_0(t);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TransformingAnnoCongruence_0_0(t);
            ;
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            t = TransformingCongruence_0_0(t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm y_131 (ATerm), ATerm t)
{
  ATerm x_21 (ATerm t)
  {
    ATerm a_2 (ATerm t)
    {
      t = y_131(t);
      t = x_21(t);
      return(t);
    }
    t = try_1_0(a_2, t);
    return(t);
  }
  t = x_21(t);
  return(t);
}
ATerm downup2_2_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm t)
{
  t = t_115(t);
  {
    ATerm b_2 (ATerm t)
    {
      t = downup2_2_0(t_115, u_115, t);
      return(t);
    }
    t = SRTS_all(b_2, t);
    t = u_115(t);
  }
  return(t);
}
ATerm SDefT_4_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
  h_22 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      z_21 = ATgetArgument(t, 0);
      a_22 = ATgetArgument(t, 1);
      b_22 = ATgetArgument(t, 2);
      c_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_22);
  y_21 = t;
  t = z_21;
  t = n_105(t);
  d_22 = t;
  t = a_22;
  t = o_105(t);
  e_22 = t;
  t = b_22;
  t = p_105(t);
  f_22 = t;
  t = c_22;
  t = q_105(t);
  g_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, d_22, e_22, f_22, g_22), y_21);
  return(t);
}
ATerm SDef_3_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL;
  s_22 = t;
  if(match_cons(t, sym_SDef_3))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
      o_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_22);
  l_22 = t;
  t = m_22;
  t = k_105(t);
  p_22 = t;
  t = n_22;
  t = l_105(t);
  q_22 = t;
  t = o_22;
  t = m_105(t);
  r_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, p_22, q_22, r_22), l_22);
  return(t);
}
ATerm Strategies_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  z_22 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_22);
  w_22 = t;
  t = x_22;
  t = n_98(t);
  y_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, y_22), w_22);
  return(t);
}
ATerm Specification_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
  g_23 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_23);
  d_23 = t;
  t = e_23;
  t = s_98(t);
  f_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, f_23), d_23);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm p_113 (ATerm), ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm d_2 (ATerm t)
    {
      ATerm e_2 (ATerm t)
      {
        ATerm g_2 (ATerm t)
        {
          ATerm j_2 (ATerm t)
          {
            ATerm c_12 = t;
            int d_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, p_113, t);
                ;
                LocalPopChoice(d_12);
              }
            else
              {
                t = c_12;
                t = SDefT_4_0(_id, _id, _id, p_113, t);
              }
            return(t);
          }
          t = map_1_0(j_2, t);
          return(t);
        }
        t = Strategies_1_0(g_2, t);
        return(t);
      }
      ATerm f_2 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Cons_2_0(e_2, f_2, t);
      return(t);
    }
    t = Cons_2_0(_id, d_2, t);
    return(t);
  }
  t = Specification_1_0(c_2, t);
  return(t);
}
ATerm _2_0 (ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
  p_23 = t;
  if(match_cons(t, sym__2))
    {
      l_23 = ATgetArgument(t, 0);
      m_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_23);
  k_23 = t;
  t = l_23;
  t = a_97(t);
  n_23 = t;
  t = m_23;
  t = b_97(t);
  o_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, n_23, o_23), k_23);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL;
  t_23 = t;
  t = term_e_12;
  t = whoami_0_0(t);
  u_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), u_23), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = t_23;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  w_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_23;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_23 = ATgetFirst((ATermList) t);
          y_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_23;
      {
        ATerm k_2 (ATerm t)
        {
          t = y_23;
          t = concat_0_0(t);
          return(t);
        }
        t = at_end_1_0(k_2, t);
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  c_24 = t;
  t = SSL_explode_term(c_24);
  if(match_cons(t, sym__2))
    {
      ATerm f_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_24;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_122 (ATerm), ATerm t)
{
  ATerm g_24 (ATerm t)
  {
    ATerm k_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_24, t);
        ;
        LocalPopChoice(n_12);
      }
    else
      {
        t = k_12;
        {
          ATerm f_24 = NULL;
          f_24 = t;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_24;
          t = f_122(t);
        }
      }
    return(t);
  }
  t = g_24(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL;
  if(match_cons(t, sym__2))
    {
      i_24 = ATgetArgument(t, 0);
      h_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_24;
  {
    ATerm l_2 (ATerm t)
    {
      t = h_24;
      return(t);
    }
    t = at_end_1_0(l_2, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm j_24 = NULL;
  ATerm m_2 (ATerm t)
  {
    ATerm k_24 = NULL;
    k_24 = t;
    t = SSL_explode_string(k_24);
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm l_24 = NULL;
    l_24 = t;
    t = SSL_explode_string(l_24);
    return(t);
  }
  t = _2_0(m_2, o_2, t);
  t = conc_0_0(t);
  j_24 = t;
  t = SSL_implode_string(j_24);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_25 (ATerm p_24, ATerm t)
      {
        t = SSL_is_string(p_24);
        return(t);
      }
      ATerm r_24 = NULL;
      r_24 = t;
      t = d_25(r_24, t);
      ;
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_2 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(p_2, t);
            ;
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            {
              ATerm e_25 (ATerm s_24, ATerm t_24, ATerm t)
              {
                t = s_24;
                {
                  ATerm u_12 = t;
                  int v_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(v_12);
                    }
                  else
                    {
                      t = u_12;
                      {
                        ATerm q_2 (ATerm t)
                        {
                          t = term_w_12;
                          return(t);
                        }
                        t = debug_1_0(q_2, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
              v_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_24 = ATgetArgument(t, 0);
                  t = w_24;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_24 = ATgetArgument(t, 0);
                      t = e_25(w_24, v_24, t);
                    }
                  else
                    {
                      ATerm b_25 = NULL,c_25 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_24 = ATgetArgument(t, 0);
                          x_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_24;
                      t = eval_config_0_0(t);
                      b_25 = t;
                      t = x_24;
                      t = eval_config_0_0(t);
                      c_25 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_25, c_25);
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
  ATerm f_25 = NULL;
  f_25 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_25);
  {
    ATerm s_2 (ATerm t)
    {
      ATerm g_25 = NULL;
      t = eval_config_0_0(t);
      g_25 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_25, g_25);
      t = g_25;
      return(t);
    }
    t = try_1_0(s_2, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_138 (ATerm), ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm h_25 = NULL,i_25 = NULL;
    h_25 = t;
    t = term_x_12;
    t = get_config_0_0(t);
    i_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_25, term_y_12);
    t = geq_0_0(t);
    t = h_25;
    t = n_138(t);
    return(t);
  }
  t = try_1_0(t_2, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm d_13 = ATgetArgument(t, 0);
        if(match_cons(d_13, sym_Stream_1))
          {
            j_25 = ATgetArgument(d_13, 0);
          }
        else
          _fail(t);
        k_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(j_25, k_25);
    l_25 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), l_25);
    m_25 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, m_25);
    return(t);
  }
  t = WriteToFile_1_0(u_2, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm j_137 (ATerm), ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
  if(match_cons(t, sym__2))
    {
      n_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_25, term_e_13);
  t = open_stream_0_0(t);
  p_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_25, o_25);
  t = j_137(t);
  t = fclose_0_0(t);
  t = o_25;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm f_13 = ATgetArgument(t, 0);
        if(match_cons(f_13, sym_Stream_1))
          {
            q_25 = ATgetArgument(f_13, 0);
          }
        else
          _fail(t);
        r_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(q_25, r_25);
    s_25 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, s_25);
    return(t);
  }
  t = WriteToFile_1_0(v_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  t_25 = t;
  {
    ATerm w_2 (ATerm t)
    {
      ATerm g_13 = t;
      int j_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                u_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(x_2, t);
          ;
          LocalPopChoice(j_13);
        }
      else
        {
          t = g_13;
          t = term_k_13;
          u_25 = t;
        }
      return(t);
    }
    t = _2_0(w_2, _id, t);
    t = t_25;
    {
      ATerm y_2 (ATerm t)
      {
        ATerm z_2 (ATerm t)
        {
          t = not_null(u_25);
          return(t);
        }
        t = split_2_0(z_2, _id, t);
        return(t);
      }
      t = _2_0(_id, y_2, t);
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              ATerm b_3 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(b_3, t);
              return(t);
            }
            t = _2_0(a_3, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
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
ATerm apply_strategy_1_0 (ATerm l_140 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  v_25 = t;
  t = dtime_0_0(t);
  t = v_25;
  t = l_140(t);
  w_25 = t;
  t = dtime_0_0(t);
  x_25 = t;
  t = w_25;
  if(match_cons(t, sym__2))
    {
      y_25 = ATgetArgument(t, 0);
      z_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_25), (ATerm) ATmakeAppl(sym_Runtime_1, x_25)), z_25);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_26 (ATerm d_26, ATerm e_26, ATerm t)
  {
    t = SSL_fclose(d_26);
    return(t);
  }
  ATerm n_26 (ATerm h_26, ATerm t)
  {
    t = SSL_fclose(h_26);
    return(t);
  }
  ATerm k_26 = NULL,l_26 = NULL;
  l_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_26 = ATgetArgument(t, 0);
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_26(k_26, l_26, t);
            ;
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            t = n_26(l_26, t);
          }
      }
    }
  else
    {
      t = n_26(l_26, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm v_136 (ATerm), ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL;
  o_26 = t;
  t = v_136(t);
  p_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_26), p_26));
  t = o_26;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_26 = NULL;
  t = SSL_stdin_stream();
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_26 = NULL;
  t = SSL_stdout_stream();
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_26);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_26 = NULL;
  t = SSL_stderr_stream();
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_26);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm u_26 = NULL;
  u_26 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_26;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_26;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_26;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL;
  v_26 = t;
  t = SSL_explode_term(v_26);
  if(match_cons(t, sym__2))
    {
      ATerm v_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_13 = ATgetArgument(t, 1);
        if(((ATgetType(w_13) == AT_LIST) && !(ATisEmpty(w_13))))
          {
            w_26 = ATgetFirst((ATermList) w_13);
            {
              ATerm x_13 = (ATerm) ATgetNext((ATermList) w_13);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_26;
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_13 = ATgetArgument(t, 0);
      ATerm z_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
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
              ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
              ATerm c_3 (ATerm t)
              {
                ATerm a_27 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    a_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_27;
                return(t);
              }
              t = _2_0(c_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  x_26 = ATgetArgument(t, 0);
                  y_26 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(x_26, y_26);
              z_26 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, z_26);
              ;
              LocalPopChoice(d_14);
            }
          else
            {
              t = c_14;
              {
                ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
                ATerm g_3 (ATerm t)
                {
                  ATerm e_27 = NULL;
                  e_27 = t;
                  t = SSL_is_string(e_27);
                  return(t);
                }
                t = _2_0(g_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    b_27 = ATgetArgument(t, 0);
                    c_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(b_27, c_27);
                d_27 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, d_27);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_27 = NULL;
      i_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_27, term_g_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        ATerm m_3 (ATerm t)
        {
          t = term_i_14;
          return(t);
        }
        t = debug_1_0(m_3, t);
        _fail(t);
      }
    }
  f_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(h_27);
  g_27 = t;
  t = f_27;
  t = fclose_0_0(t);
  t = g_27;
  return(t);
}
ATerm split_2_0 (ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
  k_27 = t;
  t = a_119(t);
  l_27 = t;
  t = k_27;
  t = b_119(t);
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  n_27 = t;
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_3 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              o_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(n_3, t);
        ;
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        t = term_l_14;
        o_27 = t;
      }
    t = n_27;
    {
      ATerm p_3 (ATerm t)
      {
        t = not_null(o_27);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, p_3, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm q_27 = NULL;
    q_27 = t;
    if(match_string(t, "-k"))
      {
        t = q_27;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = q_27;
      }
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    ATerm r_27 = NULL,s_27 = NULL;
    r_27 = t;
    t = SSL_string_to_int(r_27);
    s_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_14, s_27);
    t = set_config_0_0(t);
    t = r_27;
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    t = term_n_14;
    return(t);
  }
  t = ArgOption_3_0(q_3, r_3, s_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_3 (ATerm t)
      {
        ATerm u_27 = NULL;
        u_27 = t;
        if(match_string(t, "-S"))
          {
            t = u_27;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = u_27;
          }
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        t = term_r_14;
        t = set_config_0_0(t);
        t = term_s_14;
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        t = term_t_14;
        return(t);
      }
      t = Option_3_0(t_3, u_3, v_3, t);
      ;
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        ATerm u_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm x_3 (ATerm t)
            {
              ATerm v_27 = NULL,w_27 = NULL;
              v_27 = t;
              t = SSL_string_to_int(v_27);
              w_27 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_12, w_27);
              t = set_config_0_0(t);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, v_27);
              return(t);
            }
            ATerm y_3 (ATerm t)
            {
              t = term_w_14;
              return(t);
            }
            t = ArgOption_3_0(w_3, x_3, y_3, t);
            ;
            LocalPopChoice(v_14);
          }
        else
          {
            t = u_14;
            {
              ATerm z_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm b_4 (ATerm t)
              {
                t = term_y_14;
                t = set_config_0_0(t);
                t = term_z_14;
                return(t);
              }
              ATerm e_4 (ATerm t)
              {
                t = term_a_15;
                return(t);
              }
              t = Option_3_0(z_3, b_4, e_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm d_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(h_15);
    }
  else
    {
      t = d_15;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm y_27 = NULL;
    y_27 = t;
    if(match_string(t, "-o"))
      {
        t = y_27;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = y_27;
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    ATerm z_27 = NULL;
    z_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_15, z_27);
    t = set_config_0_0(t);
    t = (ATerm) ATmakeAppl(sym_Output_1, z_27);
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_j_15;
    return(t);
  }
  t = ArgOption_3_0(f_4, g_4, h_4, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      {
        ATerm k_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm l_4 (ATerm t)
        {
          t = term_n_15;
          t = set_config_0_0(t);
          t = term_o_15;
          return(t);
        }
        ATerm m_4 (ATerm t)
        {
          t = term_p_15;
          return(t);
        }
        t = Option_3_0(k_4, l_4, m_4, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  c_28 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = c_28;
      t = register_usage_1_0(m_0, t);
    }
  else
    {
      ATerm k_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_28 = ATgetFirst((ATermList) t);
          e_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_28 = ATgetFirst((ATermList) t);
          g_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_28;
      t = i_0(t);
      t = f_28;
      t = k_0(t);
      k_28 = t;
      t = (ATerm) ATinsert(CheckATermList(g_28), k_28);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm m_28 = NULL;
    m_28 = t;
    if(match_string(t, "-i"))
      {
        t = m_28;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = m_28;
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm n_28 = NULL;
    n_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_15, n_28);
    t = set_config_0_0(t);
    t = (ATerm) ATmakeAppl(sym_Input_1, n_28);
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = term_r_15;
    return(t);
  }
  t = ArgOption_3_0(n_4, o_4, p_4, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(t_15);
    }
  else
    {
      t = s_15;
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_12;
  t = whoami_0_0(t);
  o_28 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), o_28));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_w_15;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm d_126 (ATerm), ATerm e_126 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
  q_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_28;
      t = d_126(t);
    }
  else
    {
      ATerm v_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_28 = ATgetFirst((ATermList) t);
          s_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_28;
      t = foldr_2_0(d_126, e_126, t);
      v_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_28, v_28);
      t = e_126(t);
    }
  return(t);
}
ATerm crush_2_0 (ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL;
  w_28 = t;
  t = SSL_explode_term(w_28);
  if(match_cons(t, sym__2))
    {
      ATerm x_15 = ATgetArgument(t, 0);
      x_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_28;
  t = foldr_2_0(b_124, c_124, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_28 = NULL;
  t = times_0_0(t);
  {
    ATerm r_4 (ATerm t)
    {
      t = term_q_14;
      return(t);
    }
    ATerm s_4 (ATerm t)
    {
      ATerm z_28 = NULL,a_29 = NULL;
      if(match_cons(t, sym__2))
        {
          z_28 = ATgetArgument(t, 0);
          a_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm y_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(z_28, a_29);
            ;
            LocalPopChoice(z_15);
          }
        else
          {
            t = y_15;
            t = SSL_addr(z_28, a_29);
          }
      }
      return(t);
    }
    t = crush_2_0(r_4, s_4, t);
    y_28 = t;
    t = SSL_TicksToSeconds(y_28);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_29 (ATerm d_29, ATerm e_29, ATerm f_29, ATerm t)
  {
    t = f_29;
    {
      ATerm a_16 = t;
      int b_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_gti(d_29, e_29);
          ;
          LocalPopChoice(b_16);
        }
      else
        {
          t = a_16;
          t = SSL_gtr(d_29, e_29);
        }
      t = (ATerm) ATmakeAppl(sym__2, d_29, e_29);
    }
    return(t);
  }
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
  j_29 = t;
  if(match_cons(t, sym__2))
    {
      k_29 = ATgetArgument(t, 0);
      l_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_29;
        if((k_29 != t))
          {
            _fail(t);
          }
        t = j_29;
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = c_16;
        t = n_29(k_29, l_29, j_29, t);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_138 (ATerm), ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    ATerm o_29 = NULL,p_29 = NULL;
    o_29 = t;
    t = term_x_12;
    t = get_config_0_0(t);
    p_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_29, term_g_16);
    t = geq_0_0(t);
    t = o_29;
    t = m_138(t);
    return(t);
  }
  t = try_1_0(t_4, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm r_29 = NULL,s_29 = NULL;
    t = run_time_0_0(t);
    r_29 = t;
    t = term_e_12;
    t = whoami_0_0(t);
    s_29 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), r_29), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), s_29));
    t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_16), r_29), term_i_16), s_29));
    return(t);
  }
  t = if_verbose1_1_0(u_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm j_141 (ATerm), ATerm t)
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
      {
        ATerm v_4 (ATerm t)
        {
          ATerm n_16 = t;
          int q_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_29 = NULL;
              v_29 = t;
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              t = v_29;
              ;
              LocalPopChoice(q_16);
            }
          else
            {
              t = n_16;
              {
                ATerm r_16 = t;
                int j_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(j_17);
                  }
                else
                  {
                    t = r_16;
                    {
                      ATerm w_29 = NULL;
                      w_29 = t;
                      if(!(match_cons(t, sym_Version_0)))
                        _fail(t);
                      t = w_29;
                    }
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(v_4, t);
      }
    }
  t = j_141(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm x_29 = NULL;
  x_29 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), x_29);
  t = x_29;
  return(t);
}
ATerm map_1_0 (ATerm p_121 (ATerm), ATerm t)
{
  ATerm a_30 (ATerm t)
  {
    ATerm m_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_29 = NULL;
        z_29 = t;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_29;
        ;
        LocalPopChoice(r_17);
      }
    else
      {
        t = m_17;
        t = Cons_2_0(p_121, a_30, t);
      }
    return(t);
  }
  t = a_30(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_30 = ATgetFirst((ATermList) t);
      d_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_30 = NULL,i_30 = NULL;
        t = d_30;
        t = g_0(t);
        h_30 = t;
        t = c_30;
        t = f_0(t);
        i_30 = t;
        t = d_30;
        {
          ATerm w_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_30), i_30);
            return(t);
          }
          t = reverse_acc_2_0(f_0, w_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_12;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, y_4, t);
  return(t);
}
ATerm Program_1_0 (ATerm j_113 (ATerm), ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL;
  m_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_30);
  j_30 = t;
  t = k_30;
  t = j_113(t);
  l_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, l_30), j_30);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_17 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_19);
    }
  else
    {
      t = v_17;
      {
        ATerm z_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(z_4, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_h_19;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm a_5 (ATerm t)
    {
      ATerm q_30 = NULL;
      q_30 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, q_30), term_i_19);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(a_5, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm k_113 (ATerm), ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
  u_30 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      s_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_30);
  r_30 = t;
  t = s_30;
  t = k_113(t);
  t_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, t_30), r_30);
  return(t);
}
ATerm fetch_1_0 (ATerm z_121 (ATerm), ATerm t)
{
  ATerm y_30 (ATerm t)
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_121, _id, t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = Cons_2_0(_id, y_30, t);
      }
    return(t);
  }
  t = y_30(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm j_142 (ATerm), ATerm t)
{
  t = fetch_1_0(j_142, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL;
  a_31 = t;
  {
    ATerm t_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_20 = ATgetFirst((ATermList) t);
                ATerm c_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_31;
          }
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = t_19;
        t = (ATerm) ATinsert(ATempty, a_31);
      }
    b_31 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), b_31);
    t = a_31;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_15;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm g_118 (ATerm), ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_118(t);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        t = term_u_20;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        t = term_y_20;
        return(t);
      }
      t = Option_3_0(b_5, c_5, d_5, t);
      ;
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      {
        ATerm e_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_5 (ATerm t)
        {
          t = term_u_20;
          t = set_config_0_0(t);
          t = term_e_21;
          t = set_config_0_0(t);
          t = term_f_21;
          return(t);
        }
        ATerm g_5 (ATerm t)
        {
          t = term_g_21;
          return(t);
        }
        t = Option_3_0(e_5, f_5, g_5, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL;
  if(match_cons(t, sym__3))
    {
      h_31 = ATgetArgument(t, 0);
      i_31 = ATgetArgument(t, 1);
      j_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_31, i_31);
  {
    ATerm h_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_31 (ATerm t)
        {
          t = SSL_table_get(h_31, i_31);
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm l_21 = ATgetArgument(t, 0);
            ATerm m_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_31(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = h_21;
        t = (ATerm) ATempty;
      }
    k_31 = t;
    t = SSL_table_put(h_31, i_31, (ATerm) ATinsert(CheckATermList(k_31), j_31));
    t = (ATerm) ATmakeAppl(sym__3, h_31, i_31, j_31);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm o_143 (ATerm), ATerm t)
{
  ATerm p_31 = NULL;
  t = term_e_12;
  t = o_143(t);
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_21, term_q_21, p_31);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = r_31;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm w_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_31 = ATgetFirst((ATermList) t);
          t_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_31;
      t = a_0(t);
      t = term_e_12;
      t = b_0(t);
      w_31 = t;
      t = (ATerm) ATinsert(CheckATermList(t_31), w_31);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm y_31 = NULL;
    y_31 = t;
    if(match_string(t, "--help"))
      {
        t = y_31;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = y_31;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = y_31;
          }
      }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_r_21;
    t = set_config_0_0(t);
    t = term_s_21;
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_v_21;
    return(t);
  }
  t = Option_3_0(h_5, i_5, j_5, t);
  return(t);
}
ATerm Cons_2_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
  e_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_32 = ATgetFirst((ATermList) t);
      b_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_32);
  z_31 = t;
  t = a_32;
  t = j_98(t);
  c_32 = t;
  t = b_32;
  t = k_98(t);
  d_32 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(d_32), c_32), z_31);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL;
  if(match_cons(t, sym__2))
    {
      i_32 = ATgetArgument(t, 0);
      j_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), i_32, j_32);
  t = (ATerm) ATmakeAppl(sym__3, term_w_21, i_32, j_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_143 (ATerm), ATerm t)
{
  ATerm m_32 = NULL;
  m_32 = t;
  {
    ATerm k_5 (ATerm t)
    {
      t = term_i_22;
      t = m_143(t);
      return(t);
    }
    t = try_1_0(k_5, t);
    t = m_32;
    {
      ATerm l_5 (ATerm t)
      {
        ATerm n_32 = NULL;
        n_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_15, n_32);
        t = set_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, n_32);
        return(t);
      }
      ATerm m_5 (ATerm t)
      {
        ATerm j_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_22 = t;
            int u_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_32 = NULL;
                o_32 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = o_32;
                ;
                LocalPopChoice(u_22);
              }
            else
              {
                t = t_22;
                t = m_143(t);
                t = Cons_2_0(_id, m_5, t);
              }
            ;
            LocalPopChoice(k_22);
          }
        else
          {
            t = j_22;
            {
              ATerm q_32 = NULL,r_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_32 = ATgetFirst((ATermList) t);
                  r_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_32), (ATerm) ATmakeAppl(sym_Undefined_1, q_32));
            }
          }
        return(t);
      }
      t = Cons_2_0(l_5, m_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm l_143 (ATerm), ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = x_32;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm v_22 = t;
      int a_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_143(t);
          ;
          LocalPopChoice(a_23);
        }
      else
        {
          t = v_22;
          {
            ATerm b_23 = t;
            int c_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(c_23);
              }
            else
              {
                t = b_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_5, t);
    {
      ATerm o_5 (ATerm t)
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_33 (ATerm a_33, ATerm t)
            {
              t = a_33;
              {
                ATerm j_23 = t;
                int q_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_16;
                    t = get_config_0_0(t);
                    ;
                    LocalPopChoice(q_23);
                  }
                else
                  {
                    t = j_23;
                    {
                      ATerm p_5 (ATerm t)
                      {
                        if(!(match_cons(t, sym_Help_0)))
                          _fail(t);
                        return(t);
                      }
                      t = option_defined_1_0(p_5, t);
                    }
                  }
                t = a_33;
                t = system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(0));
              }
              return(t);
            }
            ATerm g_33 (ATerm c_33, ATerm t)
            {
              t = term_p_20;
              t = get_config_0_0(t);
              t = c_33;
              t = system_about_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(0));
              return(t);
            }
            ATerm e_33 = NULL;
            e_33 = t;
            {
              ATerm r_23 = t;
              int s_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_33(e_33, t);
                  ;
                  LocalPopChoice(s_23);
                }
              else
                {
                  t = r_23;
                  t = g_33(e_33, t);
                }
            }
            ;
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            {
              ATerm q_5 (ATerm t)
              {
                ATerm r_5 (ATerm t)
                {
                  y_32 = t;
                  return(t);
                }
                t = Undefined_1_0(r_5, t);
                return(t);
              }
              t = option_defined_1_0(q_5, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_32)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_32)), term_v_23));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(o_5, t);
      z_32 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = z_32;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_141 (ATerm), ATerm m_141 (ATerm), ATerm n_141 (ATerm), ATerm o_141 (ATerm), ATerm t)
{
  t = parse_options_1_0(l_141, t);
  t = store_options_0_0(t);
  t = n_141(t);
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_141, t);
        ;
        LocalPopChoice(a_24);
      }
    else
      {
        t = z_23;
        {
          ATerm b_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_141(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(e_24);
            }
          else
            {
              t = b_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm a_141 (ATerm), ATerm b_141 (ATerm), ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_141(t);
        ;
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(a_141, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(s_5, c_141, d_141, t_5, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm w_140 (ATerm), ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm v_5 (ATerm t)
    {
      ATerm h_33 = NULL,i_33 = NULL;
      h_33 = t;
      t = term_w_15;
      t = get_config_0_0(t);
      i_33 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, i_33));
      t = h_33;
      return(t);
    }
    t = if_verbose2_1_0(v_5, t);
    return(t);
  }
  t = iowrap_4_0(u_140, v_140, w_140, u_5, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm s_140 (ATerm), ATerm t_140 (ATerm), ATerm t)
{
  t = iowrap_3_0(s_140, t_140, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm p_140 (ATerm), ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    t = _2_0(_id, p_140, t);
    return(t);
  }
  t = iowrap_2_0(w_5, _fail, t);
  return(t);
}
ATerm define_congruences_comp_0_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm y_5 (ATerm t)
    {
      ATerm z_5 (ATerm t)
      {
        t = repeat_1_0(Simplify_0_0, t);
        return(t);
      }
      ATerm a_6 (ATerm t)
      {
        ATerm b_6 (ATerm t)
        {
          ATerm o_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = DefineCongruences_0_0(t);
              ;
              LocalPopChoice(q_24);
            }
          else
            {
              t = o_24;
              t = Simplify_0_0(t);
            }
          return(t);
        }
        t = repeat_1_0(b_6, t);
        return(t);
      }
      t = downup2_2_0(z_5, a_6, t);
      return(t);
    }
    t = apply_to_bodies_1_0(y_5, t);
    return(t);
  }
  t = iowrap_1_0(x_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = define_congruences_comp_0_0(t);
  return(t);
}
