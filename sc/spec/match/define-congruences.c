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
ATerm term_m_24;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_t_21;
ATerm term_p_21;
ATerm term_m_20;
ATerm term_d_20;
ATerm term_i_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_q_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_y_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_s_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_k_13;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_e_11;
ATerm term_x_8;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_i_7;
void init_constant_terms (void)
{
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_Op_2, term_q_8, (ATerm) ATempty);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_ConstType_1, term_r_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__3, term_p_21, term_t_21, term_k_13);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm Optimize_0_0 (ATerm);
ATerm downup_1_0 (ATerm g_114 (ATerm), ATerm);
ATerm simplify_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BMF_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm i_115 (ATerm), ATerm);
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
ATerm genzip_4_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm);
ATerm zip_1_0 (ATerm v_118 (ATerm), ATerm);
ATerm TransformingAnnoCongruence_0_0 (ATerm);
ATerm As_2_0 (ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm l_103 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm);
ATerm Op_2_0 (ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm k_112 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm MatchingCongruence_0_0 (ATerm);
ATerm DefineCongruences_0_0 (ATerm);
ATerm repeat_1_0 (ATerm p_130 (ATerm), ATerm);
ATerm downup2_2_0 (ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm v_97 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm a_98 (ATerm), ATerm);
ATerm apply_to_bodies_1_0 (ATerm f_112 (ATerm), ATerm);
ATerm _2_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm w_120 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_137 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm a_136 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm c_139 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm m_135 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm);
ATerm crush_2_0 (ATerm s_122 (ATerm), ATerm t_122 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_137 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm a_140 (ATerm), ATerm);
ATerm map_1_0 (ATerm f_120 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm z_111 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm a_112 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm q_120 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm a_141 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm w_116 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm f_142 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_142 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm c_142 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm f_140 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm u_139 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm l_139 (ATerm), ATerm m_139 (ATerm), ATerm n_139 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm j_139 (ATerm), ATerm k_139 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm g_139 (ATerm), ATerm);
ATerm define_congruences_comp_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      l_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_1)), (ATerm) ATmakeAppl(sym_Seq_2, l_1, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_1)))));
  return(t);
}
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      n_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_1)), (ATerm) ATmakeAppl(sym_Seq_2, n_1, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_1)))));
  return(t);
}
ATerm FuseScope_0_0 (ATerm t)
{
  ATerm p_1 = NULL,r_1 = NULL,t_1 = NULL,u_1 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      p_1 = ATgetArgument(t, 0);
      {
        ATerm m_6 = ATgetArgument(t, 1);
        if(match_cons(m_6, sym_Scope_2))
          {
            r_1 = ATgetArgument(m_6, 0);
            t_1 = ATgetArgument(m_6, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_1, r_1);
  t = conc_0_0(t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_1, t_1);
  return(t);
}
ATerm Optimize_0_0 (ATerm t)
{
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(o_6);
    }
  else
    {
      t = n_6;
      {
        ATerm p_6 = t;
        int q_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 = NULL,e_2 = NULL,k_2 = NULL,l_2 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                c_2 = ATgetArgument(t, 0);
                e_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_2;
            if(match_cons(t, sym_Let_2))
              {
                k_2 = ATgetArgument(t, 0);
                l_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, k_2, (ATerm) ATmakeAppl(sym_Seq_2, c_2, l_2));
            ;
            LocalPopChoice(q_6);
          }
        else
          {
            t = p_6;
            {
              ATerm r_6 = t;
              int s_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(s_6);
                }
              else
                {
                  t = r_6;
                  {
                    ATerm t_6 = t;
                    int u_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(u_6);
                      }
                    else
                      {
                        t = t_6;
                        t = TestSavesCurrentTerm_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm downup_1_0 (ATerm g_114 (ATerm), ATerm t)
{
  t = g_114(t);
  {
    ATerm c_0 (ATerm t)
    {
      t = downup_1_0(g_114, t);
      return(t);
    }
    t = SRTS_all(c_0, t);
    t = g_114(t);
  }
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    t = repeat_1_0(Optimize_0_0, t);
    return(t);
  }
  t = downup_1_0(h_0, t);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,i_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL;
  if(match_cons(t, sym__2))
    {
      i_3 = ATgetArgument(t, 0);
      l_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_3;
  if(match_cons(t, sym_Build_1))
    {
      ATerm v_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_3;
  if(match_cons(t, sym_Where_1))
    {
      m_3 = ATgetArgument(t, 0);
      t = m_3;
      if(match_cons(t, sym_Prim_2))
        {
          f_3 = ATgetArgument(t, 0);
          g_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          m_3 = ATgetArgument(t, 0);
          n_3 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, m_3, n_3);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              m_3 = ATgetArgument(t, 0);
              n_3 = ATgetArgument(t, 1);
              o_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if(match_cons(w_6, sym_Build_1))
        {
          ATerm y_6 = ATgetArgument(w_6, 0);
          if(match_cons(y_6, sym_Op_2))
            {
              c_4 = ATgetArgument(y_6, 0);
              b_4 = ATgetArgument(y_6, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm x_6 = ATgetArgument(t, 1);
        if(match_cons(x_6, sym_Match_1))
          {
            ATerm z_6 = ATgetArgument(x_6, 0);
            if(match_cons(z_6, sym_Op_2))
              {
                if((c_4 != ATgetArgument(z_6, 0)))
                  {
                    _fail(ATgetArgument(z_6, 0));
                  }
                d_4 = ATgetArgument(z_6, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, b_4, d_4);
  {
    ATerm j_0 (ATerm t)
    {
      ATerm f_4 = NULL,g_4 = NULL;
      if(match_cons(t, sym__2))
        {
          f_4 = ATgetArgument(t, 0);
          g_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_4), (ATerm) ATmakeAppl(sym_Match_1, g_4));
      return(t);
    }
    t = zip_1_0(j_0, t);
    e_4 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_4), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_4, b_4)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_7 = ATgetArgument(t, 0);
      if(match_cons(a_7, sym_Build_1))
        {
          ATerm d_7 = ATgetArgument(a_7, 0);
          if(match_cons(d_7, sym_Op_2))
            {
              h_4 = ATgetArgument(d_7, 0);
              {
                ATerm e_7 = ATgetArgument(d_7, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm c_7 = ATgetArgument(t, 1);
        if(match_cons(c_7, sym_Match_1))
          {
            ATerm f_7 = ATgetArgument(c_7, 0);
            if(match_cons(f_7, sym_Op_2))
              {
                i_4 = ATgetArgument(f_7, 0);
                {
                  ATerm g_7 = ATgetArgument(f_7, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, h_4, i_4);
  {
    ATerm h_7 = t;
    if((PushChoice() == 0))
      {
        ATerm l_4 = NULL;
        if(match_cons(t, sym__2))
          {
            l_4 = ATgetArgument(t, 0);
            if((l_4 != ATgetArgument(t, 1)))
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
        t = h_7;
      }
    t = term_i_7;
  }
  return(t);
}
ATerm BMF_0_0 (ATerm t)
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0_0(t);
      ;
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0_0(t);
            ;
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            {
              ATerm n_7 = t;
              int o_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_7 = NULL,x_7 = NULL,y_7 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      b_7 = ATgetArgument(t, 0);
                      x_7 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = b_7;
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm p_7 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = x_7;
                  if(match_cons(t, sym_Build_1))
                    {
                      y_7 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  ;
                  LocalPopChoice(o_7);
                }
              else
                {
                  t = n_7;
                  {
                    ATerm q_7 = t;
                    int r_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0_0(t);
                        ;
                        LocalPopChoice(r_7);
                      }
                    else
                      {
                        t = q_7;
                        {
                          ATerm m_8 = NULL,n_8 = NULL,s_8 = NULL,t_8 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              m_8 = ATgetArgument(t, 0);
                              s_8 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = m_8;
                          if(match_cons(t, sym_Match_1))
                            {
                              n_8 = ATgetArgument(t, 0);
                              t = s_8;
                              if(match_cons(t, sym_Match_1))
                                {
                                  t_8 = ATgetArgument(t, 0);
                                  t = t_8;
                                  if((n_8 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, n_8);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      t_8 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = t_8;
                                  if((n_8 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, n_8);
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_Build_1))
                                {
                                  n_8 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = s_8;
                              if(match_cons(t, sym_Match_1))
                                {
                                  t_8 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = t_8;
                              if((n_8 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_Build_1, n_8);
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
  ATerm l_9 = NULL,t_9 = NULL,y_9 = NULL,z_9 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9;
  if(match_cons(t, sym_Seq_2))
    {
      l_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_10 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, y_9, l_9);
            t = BMF_0_0(t);
            u_10 = t;
            t = (ATerm) ATmakeAppl(sym_Seq_2, u_10, t_9);
            ;
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            t = (ATerm) ATmakeAppl(sym__2, y_9, z_9);
            t = BMF_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, y_9, z_9);
      t = BMF_0_0(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm i_115 (ATerm), ATerm t)
{
  ATerm z_10 (ATerm t)
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_115(t);
        ;
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        t = SRTS_one(z_10, t);
      }
    return(t);
  }
  t = z_10(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm w_7 = ATgetArgument(t, 0);
      if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
        {
          ATerm a_8 = ATgetFirst((ATermList) w_7);
          if(match_cons(a_8, sym_SDefT_4))
            {
              b_11 = ATgetArgument(a_8, 0);
              {
                ATerm c_8 = ATgetArgument(a_8, 1);
                if(((ATgetType(c_8) != AT_LIST) || !(ATisEmpty(c_8))))
                  _fail(t);
              }
              {
                ATerm d_8 = ATgetArgument(a_8, 2);
                if(((ATgetType(d_8) != AT_LIST) || !(ATisEmpty(d_8))))
                  _fail(t);
              }
              a_11 = ATgetArgument(a_8, 3);
            }
          else
            _fail(t);
          {
            ATerm b_8 = (ATerm) ATgetNext((ATermList) w_7);
            if(((ATgetType(b_8) != AT_LIST) || !(ATisEmpty(b_8))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm z_7 = ATgetArgument(t, 1);
        if(match_cons(z_7, sym_CallT_3))
          {
            ATerm e_8 = ATgetArgument(z_7, 0);
            if(match_cons(e_8, sym_SVar_1))
              {
                if((b_11 != ATgetArgument(e_8, 0)))
                  {
                    _fail(ATgetArgument(e_8, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm f_8 = ATgetArgument(z_7, 1);
              if(((ATgetType(f_8) != AT_LIST) || !(ATisEmpty(f_8))))
                _fail(t);
            }
            {
              ATerm g_8 = ATgetArgument(z_7, 2);
              if(((ATgetType(g_8) != AT_LIST) || !(ATisEmpty(g_8))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_11;
  {
    ATerm h_8 = t;
    if((PushChoice() == 0))
      {
        ATerm l_0 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm i_8 = ATgetArgument(t, 0);
              if(match_cons(i_8, sym_SVar_1))
                {
                  if((b_11 != ATgetArgument(i_8, 0)))
                    {
                      _fail(ATgetArgument(i_8, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm j_8 = ATgetArgument(t, 1);
                if(((ATgetType(j_8) != AT_LIST) || !(ATisEmpty(j_8))))
                  _fail(t);
              }
              {
                ATerm k_8 = ATgetArgument(t, 2);
                if(((ATgetType(k_8) != AT_LIST) || !(ATisEmpty(k_8))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(l_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_8;
      }
    t = a_11;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,v_11 = NULL,w_11 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      v_11 = ATgetArgument(t, 0);
      t = v_11;
      if(match_cons(t, sym_Seq_2))
        {
          t_11 = ATgetArgument(t, 0);
          n_11 = ATgetArgument(t, 1);
          t = t_11;
          if(match_cons(t, sym_Where_1))
            {
              m_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_11;
          if(match_cons(t, sym_Seq_2))
            {
              o_11 = ATgetArgument(t, 0);
              s_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_11;
          if(match_cons(t, sym_Build_1))
            {
              r_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, m_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_11), s_11)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              t_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          v_11 = ATgetArgument(t, 0);
          t = v_11;
          if(match_cons(t, sym_Test_1))
            {
              t_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              v_11 = ATgetArgument(t, 0);
              t = v_11;
              if(match_cons(t, sym_Not_1))
                {
                  t_11 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, t_11);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  v_11 = ATgetArgument(t, 0);
                  w_11 = ATgetArgument(t, 1);
                  t = w_11;
                  if((v_11 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      v_11 = ATgetArgument(t, 0);
                      w_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = w_11;
                  if((v_11 != t))
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
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      k_12 = ATgetArgument(t, 0);
      n_12 = ATgetArgument(t, 1);
      t = k_12;
      if(match_cons(t, sym_LChoice_2))
        {
          l_12 = ATgetArgument(t, 0);
          m_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, l_12, (ATerm) ATmakeAppl(sym_LChoice_2, m_12, n_12));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          k_12 = ATgetArgument(t, 0);
          n_12 = ATgetArgument(t, 1);
          t = k_12;
          if(match_cons(t, sym_Seq_2))
            {
              l_12 = ATgetArgument(t, 0);
              m_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, l_12, (ATerm) ATmakeAppl(sym_Seq_2, m_12, n_12));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              k_12 = ATgetArgument(t, 0);
              n_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_12;
          if(match_cons(t, sym_Choice_2))
            {
              l_12 = ATgetArgument(t, 0);
              m_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, l_12, (ATerm) ATmakeAppl(sym_Choice_2, m_12, n_12));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm o_0 (ATerm t)
        {
          ATerm p_0 (ATerm t)
          {
            t = map1_1_0(n_0, t);
            return(t);
          }
          t = try_1_0(p_0, t);
          return(t);
        }
        t = Cons_2_0(_id, o_0, t);
      }
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = l_8;
      {
        ATerm q_0 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, q_0, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,g_13 = NULL,h_13 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      g_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, g_13, h_13);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          g_13 = ATgetArgument(t, 0);
          t = g_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_13 = ATgetFirst((ATermList) t);
              c_13 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, b_13, (ATerm) ATmakeAppl(sym_LChoices_1, c_13));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_i_7;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              g_13 = ATgetArgument(t, 0);
              t = g_13;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_13 = ATgetFirst((ATermList) t);
                  c_13 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, b_13, (ATerm) ATmakeAppl(sym_Choices_1, c_13));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_i_7;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  g_13 = ATgetArgument(t, 0);
                  t = g_13;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      b_13 = ATgetFirst((ATermList) t);
                      c_13 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_13, (ATerm) ATmakeAppl(sym_Seqs_1, c_13));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_p_8;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_13 = ATgetArgument(t, 0);
                      h_13 = ATgetArgument(t, 1);
                      e_13 = ATgetArgument(t, 2);
                      d_13 = ATgetArgument(t, 3);
                      {
                        ATerm w_13 = NULL,x_13 = NULL;
                        t = h_13;
                        {
                          ATerm r_0 (ATerm t)
                          {
                            ATerm y_13 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                y_13 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, y_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_8), term_u_8));
                            return(t);
                          }
                          t = map1_1_0(r_0, t);
                          w_13 = t;
                          t = e_13;
                          {
                            ATerm s_0 (ATerm t)
                            {
                              ATerm t_0 (ATerm t)
                              {
                                ATerm z_13 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    z_13 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, z_13, term_u_8);
                                return(t);
                              }
                              t = try_1_0(t_0, t);
                              return(t);
                            }
                            t = map1_1_0(s_0, t);
                            x_13 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, g_13, w_13, x_13, d_13);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          g_13 = ATgetArgument(t, 0);
                          h_13 = ATgetArgument(t, 1);
                          e_13 = ATgetArgument(t, 2);
                          d_13 = ATgetArgument(t, 3);
                          {
                            ATerm v_8 = t;
                            int w_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm e_14 = NULL,f_14 = NULL;
                                t = e_13;
                                {
                                  ATerm u_0 (ATerm t)
                                  {
                                    ATerm g_14 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        g_14 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, g_14, term_u_8);
                                    return(t);
                                  }
                                  t = map1_1_0(u_0, t);
                                  e_14 = t;
                                  t = h_13;
                                  {
                                    ATerm v_0 (ATerm t)
                                    {
                                      ATerm y_0 (ATerm t)
                                      {
                                        ATerm h_14 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            h_14 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_8), term_u_8));
                                        return(t);
                                      }
                                      t = try_1_0(y_0, t);
                                      return(t);
                                    }
                                    t = map_1_0(v_0, t);
                                    f_14 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, g_13, f_14, e_14, d_13);
                                  }
                                }
                                ;
                                LocalPopChoice(w_8);
                              }
                            else
                              {
                                t = v_8;
                                {
                                  ATerm m_14 = NULL,n_14 = NULL;
                                  t = h_13;
                                  {
                                    ATerm z_0 (ATerm t)
                                    {
                                      ATerm o_14 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          o_14 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, o_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_8), term_u_8));
                                      return(t);
                                    }
                                    t = map1_1_0(z_0, t);
                                    m_14 = t;
                                    t = e_13;
                                    {
                                      ATerm a_1 (ATerm t)
                                      {
                                        ATerm b_1 (ATerm t)
                                        {
                                          ATerm p_14 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              p_14 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, p_14, term_u_8);
                                          return(t);
                                        }
                                        t = try_1_0(b_1, t);
                                        return(t);
                                      }
                                      t = map_1_0(a_1, t);
                                      n_14 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, g_13, m_14, n_14, d_13);
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
                              g_13 = ATgetArgument(t, 0);
                              h_13 = ATgetArgument(t, 1);
                              e_13 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, h_13, (ATerm) ATmakeAppl(sym_Op_2, term_x_8, (ATerm) ATinsert(ATinsert(ATempty, e_13), g_13)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  g_13 = ATgetArgument(t, 0);
                                  h_13 = ATgetArgument(t, 1);
                                  e_13 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, e_13)), g_13), (ATerm) ATmakeAppl(sym_Build_1, h_13)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      g_13 = ATgetArgument(t, 0);
                                      h_13 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_13, (ATerm) ATmakeAppl(sym_Match_1, h_13));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          g_13 = ATgetArgument(t, 0);
                                          h_13 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_13), h_13);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              g_13 = ATgetArgument(t, 0);
                                              h_13 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_13), g_13);
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
  ATerm c_15 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      ATerm y_8 = ATgetArgument(t, 0);
      c_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_15;
  {
    ATerm c_1 (ATerm t)
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      return(t);
    }
    t = fetch_1_0(c_1, t);
    t = term_i_7;
  }
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_15 = NULL,x_15 = NULL;
      if(match_cons(t, sym_Test_1))
        {
          w_15 = ATgetArgument(t, 0);
          t = w_15;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              w_15 = ATgetArgument(t, 0);
              t = w_15;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_p_8;
            }
          else
            {
              ATerm b_9 = t;
              int c_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      w_15 = ATgetArgument(t, 0);
                      {
                        ATerm d_9 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_9);
                  t = w_15;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                }
              else
                {
                  t = b_9;
                  {
                    ATerm e_9 = t;
                    int f_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm g_9 = ATgetArgument(t, 0);
                            x_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(f_9);
                        t = x_15;
                        if(!(match_cons(t, sym_Fail_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = e_9;
                        {
                          ATerm h_9 = t;
                          int i_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm j_9 = ATgetArgument(t, 0);
                                  x_15 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(i_9);
                              t = x_15;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = h_9;
                              if(match_cons(t, sym_Some_1))
                                {
                                  w_15 = ATgetArgument(t, 0);
                                  t = w_15;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_One_1))
                                    {
                                      w_15 = ATgetArgument(t, 0);
                                      t = w_15;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm k_9 = ATgetArgument(t, 0);
                                          x_15 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = x_15;
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
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F10_0_0(t);
            ;
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            {
              ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
              if(match_cons(t, sym_Choice_2))
                {
                  z_15 = ATgetArgument(t, 0);
                  a_16 = ATgetArgument(t, 1);
                  t = a_16;
                  if(match_cons(t, sym_Fail_0))
                    {
                      t = z_15;
                      if(match_cons(t, sym_Fail_0))
                        {
                          ATerm o_9 = t;
                          int p_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = a_16;
                              ;
                              LocalPopChoice(p_9);
                            }
                          else
                            {
                              t = o_9;
                              t = z_15;
                            }
                        }
                      else
                        {
                          t = z_15;
                        }
                    }
                  else
                    {
                      t = z_15;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = a_16;
                    }
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      z_15 = ATgetArgument(t, 0);
                      a_16 = ATgetArgument(t, 1);
                      t = a_16;
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = z_15;
                          if(match_cons(t, sym_Fail_0))
                            {
                              ATerm q_9 = t;
                              int r_9 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = a_16;
                                  ;
                                  LocalPopChoice(r_9);
                                }
                              else
                                {
                                  t = q_9;
                                  t = z_15;
                                }
                            }
                          else
                            {
                              t = z_15;
                            }
                        }
                      else
                        {
                          t = z_15;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = a_16;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Where_1))
                        {
                          z_15 = ATgetArgument(t, 0);
                          t = z_15;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_GuardedLChoice_3))
                            {
                              z_15 = ATgetArgument(t, 0);
                              a_16 = ATgetArgument(t, 1);
                              b_16 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = b_16;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_15, a_16);
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
  ATerm y_16 = NULL,a_17 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      a_17 = ATgetArgument(t, 0);
      t = a_17;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          a_17 = ATgetArgument(t, 0);
          t = a_17;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_i_7;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              a_17 = ATgetArgument(t, 0);
              y_16 = ATgetArgument(t, 1);
              t = y_16;
              if(match_cons(t, sym_Id_0))
                {
                  t = a_17;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm s_9 = t;
                      int u_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_16;
                          ;
                          LocalPopChoice(u_9);
                        }
                      else
                        {
                          t = s_9;
                          t = a_17;
                        }
                    }
                  else
                    {
                      t = a_17;
                    }
                }
              else
                {
                  t = a_17;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = y_16;
                }
            }
          else
            {
              ATerm v_9 = t;
              int w_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      a_17 = ATgetArgument(t, 0);
                      {
                        ATerm x_9 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(w_9);
                  t = a_17;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = v_9;
                  {
                    ATerm a_10 = t;
                    int b_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm c_10 = ATgetArgument(t, 0);
                            y_16 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(b_10);
                        t = y_16;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = a_10;
                        {
                          ATerm d_10 = t;
                          int e_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm f_10 = ATgetArgument(t, 0);
                                  y_16 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(e_10);
                              t = y_16;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = d_10;
                              if(match_cons(t, sym_All_1))
                                {
                                  a_17 = ATgetArgument(t, 0);
                                  t = a_17;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      a_17 = ATgetArgument(t, 0);
                                      t = a_17;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          a_17 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = a_17;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_p_8;
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
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            {
              ATerm k_10 = t;
              int l_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
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
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(n_10);
                      }
                    else
                      {
                        t = m_10;
                        {
                          ATerm o_10 = t;
                          int p_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(p_10);
                            }
                          else
                            {
                              t = o_10;
                              {
                                ATerm q_10 = t;
                                int r_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_17 = NULL,k_17 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        j_17 = ATgetArgument(t, 0);
                                        k_17 = ATgetArgument(t, 1);
                                        t = j_17;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = k_17;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            j_17 = ATgetArgument(t, 0);
                                            k_17 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = j_17;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = k_17;
                                      }
                                    ;
                                    LocalPopChoice(r_10);
                                  }
                                else
                                  {
                                    t = q_10;
                                    {
                                      ATerm s_10 = t;
                                      int t_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(t_10);
                                        }
                                      else
                                        {
                                          t = s_10;
                                          {
                                            ATerm v_10 = t;
                                            int w_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(w_10);
                                              }
                                            else
                                              {
                                                t = v_10;
                                                {
                                                  ATerm e_0 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      ATerm x_10 = ATgetArgument(t, 0);
                                                      if(!(match_cons(x_10, sym_Wld_0)))
                                                        _fail(t);
                                                      e_0 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = e_0;
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
ATerm TransformingCongruence_0_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      n_17 = ATgetArgument(t, 0);
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_17;
  t = map_1_0(new_0_0, t);
  p_17 = t;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm z_17 = NULL;
      z_17 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, z_17);
      return(t);
    }
    t = map_1_0(d_1, t);
    q_17 = t;
    t = new_0_0(t);
    r_17 = t;
    t = o_17;
    t = map_1_0(new_0_0, t);
    s_17 = t;
    {
      ATerm e_1 (ATerm t)
      {
        ATerm a_18 = NULL;
        a_18 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, a_18);
        return(t);
      }
      t = map_1_0(e_1, t);
      t_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_17, s_17);
      t = zip_1_0(_id, t);
      u_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_17, o_17);
      {
        ATerm f_1 (ATerm t)
        {
          ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm y_10 = ATgetArgument(t, 0);
              if(match_cons(y_10, sym__2))
                {
                  b_18 = ATgetArgument(y_10, 0);
                  c_18 = ATgetArgument(y_10, 1);
                }
              else
                _fail(t);
              d_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, b_18)), (ATerm) ATmakeAppl(sym_Seq_2, d_18, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_18))));
          return(t);
        }
        t = zip_1_0(f_1, t);
        v_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_17, s_17);
        t = conc_0_0(t);
        w_17 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, n_17, q_17), (ATerm) ATmakeAppl(sym_Var_1, r_17)));
        t = Mapp2_0_0(t);
        x_17 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, n_17, t_17), (ATerm) ATmakeAppl(sym_Var_1, r_17)));
        t = Bapp2_0_0(t);
        y_17 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(w_17), r_17), (ATerm) ATmakeAppl(sym_Seq_2, x_17, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_17), y_17)));
      }
    }
  }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL;
  f_18 = t;
  if(match_cons(t, sym_Build_1))
    {
      g_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
        t = f_18;
        t = new_0_0(t);
        i_18 = t;
        t = g_18;
        {
          ATerm g_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                j_18 = ATgetArgument(t, 0);
                k_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, i_18);
            return(t);
          }
          t = pat_td_1_0(g_1, t);
          l_18 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_11, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_18)), not_null(j_18))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_18)))), (ATerm) ATmakeAppl(sym_Build_1, l_18)));
        }
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        {
          ATerm f_11 = t;
          int g_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
              t = f_18;
              t = new_0_0(t);
              n_18 = t;
              t = g_18;
              {
                ATerm h_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      o_18 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, n_18);
                  return(t);
                }
                t = pat_td_1_0(h_1, t);
                p_18 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_18), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_18)))), (ATerm) ATmakeAppl(sym_Build_1, p_18)));
              }
              ;
              LocalPopChoice(g_11);
            }
          else
            {
              t = f_11;
              {
                ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
                t = f_18;
                t = new_0_0(t);
                r_18 = t;
                t = g_18;
                {
                  ATerm i_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        s_18 = ATgetArgument(t, 0);
                        t_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_18);
                    return(t);
                  }
                  t = pat_td_1_0(i_1, t);
                  u_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_18), not_null(t_18), (ATerm) ATmakeAppl(sym_Var_1, r_18))), (ATerm) ATmakeAppl(sym_Build_1, u_18)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t)
{
  ATerm v_18 (ATerm t)
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_118(t);
        ;
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        t = r_118(t);
        t = _2_0(t_118, v_18, t);
        t = s_118(t);
      }
    return(t);
  }
  t = v_18(t);
  return(t);
}
ATerm zip_1_0 (ATerm v_118 (ATerm), ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm j_11 = ATgetArgument(t, 0);
        if(((ATgetType(j_11) != AT_LIST) || !(ATisEmpty(j_11))))
          _fail(t);
        {
          ATerm k_11 = ATgetArgument(t, 1);
          if(((ATgetType(k_11) != AT_LIST) || !(ATisEmpty(k_11))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm l_11 = ATgetArgument(t, 0);
        if(((ATgetType(l_11) == AT_LIST) && !(ATisEmpty(l_11))))
          {
            w_18 = ATgetFirst((ATermList) l_11);
            y_18 = (ATerm) ATgetNext((ATermList) l_11);
          }
        else
          _fail(t);
        {
          ATerm p_11 = ATgetArgument(t, 1);
          if(((ATgetType(p_11) == AT_LIST) && !(ATisEmpty(p_11))))
            {
              x_18 = ATgetFirst((ATermList) p_11);
              z_18 = (ATerm) ATgetNext((ATermList) p_11);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_18, x_18), (ATerm) ATmakeAppl(sym__2, y_18, z_18));
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    ATerm a_19 = NULL,b_19 = NULL;
    if(match_cons(t, sym__2))
      {
        a_19 = ATgetArgument(t, 0);
        b_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(b_19), a_19);
    return(t);
  }
  t = genzip_4_0(j_1, k_1, q_1, v_118, t);
  return(t);
}
ATerm TransformingAnnoCongruence_0_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  if(match_cons(t, sym_Call_2))
    {
      ATerm q_11 = ATgetArgument(t, 0);
      if(match_cons(q_11, sym_SVar_1))
        {
          ATerm x_11 = ATgetArgument(q_11, 0);
          if((ATgetSymbol((ATermAppl) x_11) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm u_11 = ATgetArgument(t, 1);
        if(((ATgetType(u_11) == AT_LIST) && !(ATisEmpty(u_11))))
          {
            ATerm y_11 = ATgetFirst((ATermList) u_11);
            if(match_cons(y_11, sym_Cong_2))
              {
                c_19 = ATgetArgument(y_11, 0);
                d_19 = ATgetArgument(y_11, 1);
              }
            else
              _fail(t);
            {
              ATerm z_11 = (ATerm) ATgetNext((ATermList) u_11);
              if(((ATgetType(z_11) == AT_LIST) && !(ATisEmpty(z_11))))
                {
                  e_19 = ATgetFirst((ATermList) z_11);
                  {
                    ATerm a_12 = (ATerm) ATgetNext((ATermList) z_11);
                    if(((ATgetType(a_12) != AT_LIST) || !(ATisEmpty(a_12))))
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
  t = (ATerm) ATinsert(CheckATermList(d_19), e_19);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_19 = ATgetFirst((ATermList) t);
      g_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm s_1 (ATerm t)
    {
      ATerm q_19 = NULL;
      q_19 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, q_19);
      return(t);
    }
    t = map_1_0(s_1, t);
    h_19 = t;
    t = (ATerm) ATinsert(CheckATermList(d_19), e_19);
    t = map_1_0(new_0_0, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_19 = ATgetFirst((ATermList) t);
        j_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_1 (ATerm t)
      {
        ATerm r_19 = NULL;
        r_19 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, r_19);
        return(t);
      }
      t = map_1_0(v_1, t);
      k_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_19, j_19);
      t = zip_1_0(_id, t);
      l_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_19, (ATerm) ATinsert(CheckATermList(d_19), e_19));
      {
        ATerm w_1 (ATerm t)
        {
          ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm b_12 = ATgetArgument(t, 0);
              if(match_cons(b_12, sym__2))
                {
                  s_19 = ATgetArgument(b_12, 0);
                  t_19 = ATgetArgument(b_12, 1);
                }
              else
                _fail(t);
              u_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_19)), (ATerm) ATmakeAppl(sym_Seq_2, u_19, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_19))));
          return(t);
        }
        t = zip_1_0(w_1, t);
        m_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_19, j_19);
        t = conc_0_0(t);
        n_19 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, c_19, h_19), (ATerm) ATmakeAppl(sym_Var_1, f_19)));
        t = Mapp2_0_0(t);
        o_19 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, c_19, k_19), (ATerm) ATmakeAppl(sym_Var_1, i_19)));
        t = Bapp2_0_0(t);
        p_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(n_19), i_19), f_19), (ATerm) ATmakeAppl(sym_Seq_2, o_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_19), p_19)));
      }
    }
  }
  return(t);
}
ATerm As_2_0 (ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
  a_20 = t;
  if(match_cons(t, sym_As_2))
    {
      w_19 = ATgetArgument(t, 0);
      x_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_20);
  v_19 = t;
  t = w_19;
  t = k_99(t);
  y_19 = t;
  t = x_19;
  t = l_99(t);
  z_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, y_19, z_19), v_19);
  return(t);
}
ATerm PrimT_3_0 (ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm l_103 (ATerm), ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
  l_20 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      f_20 = ATgetArgument(t, 0);
      g_20 = ATgetArgument(t, 1);
      h_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_20);
  e_20 = t;
  t = f_20;
  t = j_103(t);
  i_20 = t;
  t = g_20;
  t = k_103(t);
  j_20 = t;
  t = h_20;
  t = l_103(t);
  k_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, i_20, j_20, k_20), e_20);
  return(t);
}
ATerm Explode_2_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
  u_20 = t;
  if(match_cons(t, sym_Explode_2))
    {
      q_20 = ATgetArgument(t, 0);
      r_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_20);
  p_20 = t;
  t = q_20;
  t = d_99(t);
  s_20 = t;
  t = r_20;
  t = e_99(t);
  t_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, s_20, t_20), p_20);
  return(t);
}
ATerm Op_2_0 (ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
  d_21 = t;
  if(match_cons(t, sym_Op_2))
    {
      z_20 = ATgetArgument(t, 0);
      a_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_21);
  y_20 = t;
  t = z_20;
  t = z_98(t);
  b_21 = t;
  t = a_21;
  t = a_99(t);
  c_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, b_21, c_21), y_20);
  return(t);
}
ATerm pat_td_1_0 (ATerm k_112 (ATerm), ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_112(t);
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
            ATerm x_1 (ATerm t)
            {
              ATerm y_1 (ATerm t)
              {
                t = pat_td_1_0(k_112, t);
                return(t);
              }
              t = fetch_1_0(y_1, t);
              return(t);
            }
            t = Op_2_0(_id, x_1, t);
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
                  ATerm z_1 (ATerm t)
                  {
                    t = pat_td_1_0(k_112, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, z_1, t);
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
                        ATerm a_2 (ATerm t)
                        {
                          t = pat_td_1_0(k_112, t);
                          return(t);
                        }
                        t = Explode_2_0(a_2, _id, t);
                        ;
                        LocalPopChoice(j_12);
                      }
                    else
                      {
                        t = i_12;
                        {
                          ATerm o_12 = t;
                          int p_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_2 (ATerm t)
                              {
                                ATerm d_2 (ATerm t)
                                {
                                  t = pat_td_1_0(k_112, t);
                                  return(t);
                                }
                                t = fetch_1_0(d_2, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, b_2, t);
                              ;
                              LocalPopChoice(p_12);
                            }
                          else
                            {
                              t = o_12;
                              {
                                ATerm f_2 (ATerm t)
                                {
                                  t = pat_td_1_0(k_112, t);
                                  return(t);
                                }
                                t = As_2_0(_id, f_2, t);
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
  ATerm i_21 = NULL,j_21 = NULL;
  i_21 = t;
  if(match_cons(t, sym_Match_1))
    {
      j_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL;
        t = i_21;
        t = new_0_0(t);
        l_21 = t;
        t = j_21;
        {
          ATerm g_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                n_21 = ATgetArgument(t, 0);
                m_21 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_21), n_21);
            return(t);
          }
          t = pat_td_1_0(g_2, t);
          o_21 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_21), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_s_12, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_21))), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_21))))));
        }
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        {
          ATerm t_12 = t;
          int u_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
              t = i_21;
              t = new_0_0(t);
              q_21 = t;
              t = j_21;
              {
                ATerm h_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      r_21 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, q_21);
                  return(t);
                }
                t = pat_td_1_0(h_2, t);
                s_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, q_21)), not_null(r_21))));
              }
              ;
              LocalPopChoice(u_12);
            }
          else
            {
              t = t_12;
              {
                ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
                t = i_21;
                t = new_0_0(t);
                u_21 = t;
                t = j_21;
                {
                  ATerm i_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        v_21 = ATgetArgument(t, 0);
                        w_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, u_21);
                    return(t);
                  }
                  t = pat_td_1_0(i_2, t);
                  x_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, u_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_21)), not_null(v_21)))));
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
  ATerm d_22 = NULL,e_22 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      d_22 = ATgetArgument(t, 0);
      e_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_22;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm v_12 = t;
      int w_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, d_22, (ATerm) ATempty));
          ;
          LocalPopChoice(w_12);
        }
      else
        {
          t = v_12;
          {
            ATerm i_22 = NULL;
            t = e_22;
            {
              ATerm j_2 (ATerm t)
              {
                ATerm j_22 = NULL;
                if(match_cons(t, sym_Match_1))
                  {
                    j_22 = ATgetArgument(t, 0);
                    t = j_22;
                  }
                else
                  {
                    if(!(match_cons(t, sym_Id_0)))
                      _fail(t);
                    t = term_x_12;
                  }
                return(t);
              }
              t = map_1_0(j_2, t);
              i_22 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, d_22, i_22));
              t = Mapp2_0_0(t);
            }
          }
        }
    }
  else
    {
      ATerm o_22 = NULL;
      t = e_22;
      {
        ATerm m_2 (ATerm t)
        {
          ATerm p_22 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              p_22 = ATgetArgument(t, 0);
              t = p_22;
            }
          else
            {
              if(!(match_cons(t, sym_Id_0)))
                _fail(t);
              t = term_x_12;
            }
          return(t);
        }
        t = map_1_0(m_2, t);
        o_22 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, d_22, o_22));
        t = Mapp2_0_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruences_0_0 (ATerm t)
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatchingCongruence_0_0(t);
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm a_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TransformingAnnoCongruence_0_0(t);
            ;
            LocalPopChoice(f_13);
          }
        else
          {
            t = a_13;
            t = TransformingCongruence_0_0(t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm p_130 (ATerm), ATerm t)
{
  ATerm s_22 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      t = p_130(t);
      t = s_22(t);
      return(t);
    }
    t = try_1_0(n_2, t);
    return(t);
  }
  t = s_22(t);
  return(t);
}
ATerm downup2_2_0 (ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm t)
{
  t = j_114(t);
  {
    ATerm o_2 (ATerm t)
    {
      t = downup2_2_0(j_114, k_114, t);
      return(t);
    }
    t = SRTS_all(o_2, t);
    t = k_114(t);
  }
  return(t);
}
ATerm SDefT_4_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  c_23 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      u_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
      w_22 = ATgetArgument(t, 2);
      x_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_23);
  t_22 = t;
  t = u_22;
  t = v_104(t);
  y_22 = t;
  t = v_22;
  t = w_104(t);
  z_22 = t;
  t = w_22;
  t = x_104(t);
  a_23 = t;
  t = x_22;
  t = y_104(t);
  b_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, y_22, z_22, a_23, b_23), t_22);
  return(t);
}
ATerm SDef_3_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL;
  n_23 = t;
  if(match_cons(t, sym_SDef_3))
    {
      h_23 = ATgetArgument(t, 0);
      i_23 = ATgetArgument(t, 1);
      j_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_23);
  g_23 = t;
  t = h_23;
  t = s_104(t);
  k_23 = t;
  t = i_23;
  t = t_104(t);
  l_23 = t;
  t = j_23;
  t = u_104(t);
  m_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, k_23, l_23, m_23), g_23);
  return(t);
}
ATerm Strategies_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
  u_23 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      s_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_23);
  r_23 = t;
  t = s_23;
  t = v_97(t);
  t_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, t_23), r_23);
  return(t);
}
ATerm Specification_1_0 (ATerm a_98 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  b_24 = t;
  if(match_cons(t, sym_Specification_1))
    {
      z_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_24);
  y_23 = t;
  t = z_23;
  t = a_98(t);
  a_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, a_24), y_23);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm f_112 (ATerm), ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm q_2 (ATerm t)
    {
      ATerm r_2 (ATerm t)
      {
        ATerm t_2 (ATerm t)
        {
          ATerm u_2 (ATerm t)
          {
            ATerm i_13 = t;
            int j_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, f_112, t);
                ;
                LocalPopChoice(j_13);
              }
            else
              {
                t = i_13;
                t = SDefT_4_0(_id, _id, _id, f_112, t);
              }
            return(t);
          }
          t = map_1_0(u_2, t);
          return(t);
        }
        t = Strategies_1_0(t_2, t);
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Cons_2_0(r_2, s_2, t);
      return(t);
    }
    t = Cons_2_0(_id, q_2, t);
    return(t);
  }
  t = Specification_1_0(p_2, t);
  return(t);
}
ATerm _2_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  k_24 = t;
  if(match_cons(t, sym__2))
    {
      g_24 = ATgetArgument(t, 0);
      h_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_24);
  f_24 = t;
  t = g_24;
  t = i_96(t);
  i_24 = t;
  t = h_24;
  t = j_96(t);
  j_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, i_24, j_24), f_24);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL;
  o_24 = t;
  t = term_k_13;
  t = whoami_0_0(t);
  p_24 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), p_24), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = o_24;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm s_24 = NULL,t_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_24 = ATgetFirst((ATermList) t);
            t_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_24;
        {
          ATerm v_2 (ATerm t)
          {
            t = t_24;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(v_2, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  x_24 = t;
  t = SSL_explode_term(x_24);
  if(match_cons(t, sym__2))
    {
      ATerm n_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_24;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm w_120 (ATerm), ATerm t)
{
  ATerm z_24 (ATerm t)
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_24, t);
        ;
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_120(t);
      }
    return(t);
  }
  t = z_24(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL;
  if(match_cons(t, sym__2))
    {
      b_25 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_25;
  {
    ATerm w_2 (ATerm t)
    {
      t = a_25;
      return(t);
    }
    t = at_end_1_0(w_2, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm c_25 = NULL;
  ATerm x_2 (ATerm t)
  {
    ATerm d_25 = NULL;
    d_25 = t;
    t = SSL_explode_string(d_25);
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm e_25 = NULL;
    e_25 = t;
    t = SSL_explode_string(e_25);
    return(t);
  }
  t = _2_0(x_2, y_2, t);
  t = conc_0_0(t);
  c_25 = t;
  t = SSL_implode_string(c_25);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_25 = NULL;
      k_25 = t;
      t = SSL_is_string(k_25);
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
            ATerm z_2 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(z_2, t);
            ;
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            {
              ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
              o_25 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_25 = ATgetArgument(t, 0);
                  t = p_25;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_25 = ATgetArgument(t, 0);
                      t = p_25;
                      {
                        ATerm a_14 = t;
                        int b_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_14);
                          }
                        else
                          {
                            t = a_14;
                            {
                              ATerm a_3 (ATerm t)
                              {
                                t = term_c_14;
                                return(t);
                              }
                              t = debug_1_0(a_3, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm u_25 = NULL,v_25 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_25 = ATgetArgument(t, 0);
                          q_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_25;
                      t = eval_config_0_0(t);
                      u_25 = t;
                      t = q_25;
                      t = eval_config_0_0(t);
                      v_25 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_25, v_25);
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
  ATerm y_25 = NULL;
  y_25 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_25);
  {
    ATerm b_3 (ATerm t)
    {
      ATerm z_25 = NULL;
      t = eval_config_0_0(t);
      z_25 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_25, z_25);
      t = z_25;
      return(t);
    }
    t = try_1_0(b_3, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_137 (ATerm), ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm a_26 = NULL,b_26 = NULL;
    a_26 = t;
    t = term_d_14;
    t = get_config_0_0(t);
    b_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_26, term_i_14);
    t = geq_0_0(t);
    t = a_26;
    t = e_137(t);
    return(t);
  }
  t = try_1_0(c_3, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm j_14 = ATgetArgument(t, 0);
        if(match_cons(j_14, sym_Stream_1))
          {
            c_26 = ATgetArgument(j_14, 0);
          }
        else
          _fail(t);
        d_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(c_26, d_26);
    e_26 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), e_26);
    f_26 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, f_26);
    return(t);
  }
  t = WriteToFile_1_0(d_3, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm a_136 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  if(match_cons(t, sym__2))
    {
      g_26 = ATgetArgument(t, 0);
      h_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_26, term_k_14);
  t = open_stream_0_0(t);
  i_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_26, h_26);
  t = a_136(t);
  t = fclose_0_0(t);
  t = h_26;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm l_14 = ATgetArgument(t, 0);
        if(match_cons(l_14, sym_Stream_1))
          {
            j_26 = ATgetArgument(l_14, 0);
          }
        else
          _fail(t);
        k_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(j_26, k_26);
    l_26 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, l_26);
    return(t);
  }
  t = WriteToFile_1_0(e_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  m_26 = t;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm q_14 = t;
      int r_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                n_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(j_3, t);
          ;
          LocalPopChoice(r_14);
        }
      else
        {
          t = q_14;
          t = term_s_14;
          n_26 = t;
        }
      return(t);
    }
    t = _2_0(h_3, _id, t);
    t = m_26;
    {
      ATerm k_3 (ATerm t)
      {
        ATerm p_3 (ATerm t)
        {
          t = not_null(n_26);
          return(t);
        }
        t = split_2_0(p_3, _id, t);
        return(t);
      }
      t = _2_0(_id, k_3, t);
      {
        ATerm t_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 (ATerm t)
            {
              ATerm r_3 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(r_3, t);
              return(t);
            }
            t = _2_0(q_3, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(u_14);
          }
        else
          {
            t = t_14;
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
ATerm apply_strategy_1_0 (ATerm c_139 (ATerm), ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
  o_26 = t;
  t = dtime_0_0(t);
  t = o_26;
  t = c_139(t);
  p_26 = t;
  t = dtime_0_0(t);
  q_26 = t;
  t = p_26;
  if(match_cons(t, sym__2))
    {
      r_26 = ATgetArgument(t, 0);
      s_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_26), (ATerm) ATmakeAppl(sym_Runtime_1, q_26)), s_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_27 (ATerm a_27, ATerm t)
  {
    t = SSL_fclose(a_27);
    return(t);
  }
  ATerm d_27 = NULL,e_27 = NULL;
  e_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_27 = ATgetArgument(t, 0);
      {
        ATerm v_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_27);
            ;
            LocalPopChoice(w_14);
          }
        else
          {
            t = v_14;
            t = g_27(e_27, t);
          }
      }
    }
  else
    {
      t = g_27(e_27, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm m_135 (ATerm), ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL;
  h_27 = t;
  t = m_135(t);
  i_27 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_27), i_27));
  t = h_27;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_27 = NULL;
  t = SSL_stdin_stream();
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_27 = NULL;
  t = SSL_stdout_stream();
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_27 = NULL;
  t = SSL_stderr_stream();
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_27);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm n_27 = NULL;
  n_27 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_14 = ATgetArgument(t, 0);
      ATerm y_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_0 = NULL,x_0 = NULL;
        w_0 = t;
        t = SSL_explode_term(w_0);
        if(match_cons(t, sym__2))
          {
            ATerm b_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_15) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_15 = ATgetArgument(t, 1);
              if(((ATgetType(d_15) == AT_LIST) && !(ATisEmpty(d_15))))
                {
                  x_0 = ATgetFirst((ATermList) d_15);
                  {
                    ATerm e_15 = (ATerm) ATgetNext((ATermList) d_15);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_0;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        {
          ATerm f_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
              ATerm s_3 (ATerm t)
              {
                ATerm t_27 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    t_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = t_27;
                return(t);
              }
              t = _2_0(s_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  q_27 = ATgetArgument(t, 0);
                  r_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(q_27, r_27);
              s_27 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, s_27);
              ;
              LocalPopChoice(g_15);
            }
          else
            {
              t = f_15;
              {
                ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
                ATerm t_3 (ATerm t)
                {
                  ATerm x_27 = NULL;
                  x_27 = t;
                  t = SSL_is_string(x_27);
                  return(t);
                }
                t = _2_0(t_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    u_27 = ATgetArgument(t, 0);
                    v_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(u_27, v_27);
                w_27 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, w_27);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL;
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_28 = NULL;
      b_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_28, term_j_15);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      {
        ATerm u_3 (ATerm t)
        {
          t = term_k_15;
          return(t);
        }
        t = debug_1_0(u_3, t);
        _fail(t);
      }
    }
  y_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(a_28);
  z_27 = t;
  t = y_27;
  t = fclose_0_0(t);
  t = z_27;
  return(t);
}
ATerm split_2_0 (ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
  d_28 = t;
  t = q_117(t);
  e_28 = t;
  t = d_28;
  t = r_117(t);
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_28, f_28);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL;
  g_28 = t;
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_3 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              h_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(v_3, t);
        ;
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
        t = term_n_15;
        h_28 = t;
      }
    t = g_28;
    {
      ATerm w_3 (ATerm t)
      {
        t = not_null(h_28);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, w_3, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm j_28 = NULL;
    j_28 = t;
    if(match_string(t, "-k"))
      {
        t = j_28;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = j_28;
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    ATerm k_28 = NULL,l_28 = NULL;
    k_28 = t;
    t = SSL_string_to_int(k_28);
    l_28 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), l_28);
    t = k_28;
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_o_15;
    return(t);
  }
  t = ArgOption_3_0(x_3, y_3, z_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_4 (ATerm t)
      {
        ATerm n_28 = NULL;
        n_28 = t;
        if(match_string(t, "-S"))
          {
            t = n_28;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = n_28;
          }
        return(t);
      }
      ATerm j_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_s_15;
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        t = term_t_15;
        return(t);
      }
      t = Option_3_0(a_4, j_4, k_4, t);
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              ATerm o_28 = NULL,p_28 = NULL;
              o_28 = t;
              t = SSL_string_to_int(o_28);
              p_28 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_28);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, o_28);
              return(t);
            }
            ATerm o_4 (ATerm t)
            {
              t = term_y_15;
              return(t);
            }
            t = ArgOption_3_0(m_4, n_4, o_4, t);
            ;
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
            {
              ATerm p_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_c_16;
                return(t);
              }
              ATerm r_4 (ATerm t)
              {
                t = term_d_16;
                return(t);
              }
              t = Option_3_0(p_4, q_4, r_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(f_16);
    }
  else
    {
      t = e_16;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm r_28 = NULL;
    r_28 = t;
    if(match_string(t, "-o"))
      {
        t = r_28;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = r_28;
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    ATerm s_28 = NULL;
    s_28 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), s_28);
    t = (ATerm) ATmakeAppl(sym_Output_1, s_28);
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_g_16;
    return(t);
  }
  t = ArgOption_3_0(s_4, t_4, u_4, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      {
        ATerm w_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm x_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_j_16;
          return(t);
        }
        ATerm y_4 (ATerm t)
        {
          t = term_k_16;
          return(t);
        }
        t = Option_3_0(w_4, x_4, y_4, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL;
  v_28 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = v_28;
      t = register_usage_1_0(m_0, t);
    }
  else
    {
      ATerm d_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_28 = ATgetFirst((ATermList) t);
          x_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_28 = ATgetFirst((ATermList) t);
          z_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_28;
      t = i_0(t);
      t = y_28;
      t = k_0(t);
      d_29 = t;
      t = (ATerm) ATinsert(CheckATermList(z_28), d_29);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm f_29 = NULL;
    f_29 = t;
    if(match_string(t, "-i"))
      {
        t = f_29;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = f_29;
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    ATerm g_29 = NULL;
    g_29 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), g_29);
    t = (ATerm) ATmakeAppl(sym_Input_1, g_29);
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_l_16;
    return(t);
  }
  t = ArgOption_3_0(z_4, a_5, b_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(p_16);
          }
        else
          {
            t = o_16;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_13;
  t = whoami_0_0(t);
  h_29 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), h_29));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_16;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm t)
{
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_124(t);
      ;
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      {
        ATerm k_29 = NULL,l_29 = NULL,o_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_29 = ATgetFirst((ATermList) t);
            l_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_29;
        t = foldr_2_0(u_124, v_124, t);
        o_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_29, o_29);
        t = v_124(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm s_122 (ATerm), ATerm t_122 (ATerm), ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL;
  p_29 = t;
  t = SSL_explode_term(p_29);
  if(match_cons(t, sym__2))
    {
      ATerm t_16 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_29;
  t = foldr_2_0(s_122, t_122, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_29 = NULL;
  t = times_0_0(t);
  {
    ATerm c_5 (ATerm t)
    {
      t = term_r_15;
      return(t);
    }
    ATerm d_5 (ATerm t)
    {
      ATerm s_29 = NULL,t_29 = NULL;
      if(match_cons(t, sym__2))
        {
          s_29 = ATgetArgument(t, 0);
          t_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm u_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(s_29, t_29);
            ;
            LocalPopChoice(v_16);
          }
        else
          {
            t = u_16;
            t = SSL_addr(s_29, t_29);
          }
      }
      return(t);
    }
    t = crush_2_0(c_5, d_5, t);
    r_29 = t;
    t = SSL_TicksToSeconds(r_29);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  c_30 = t;
  if(match_cons(t, sym__2))
    {
      d_30 = ATgetArgument(t, 0);
      e_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_30;
        if((d_30 != t))
          {
            _fail(t);
          }
        t = c_30;
        ;
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
        t = c_30;
        {
          ATerm z_16 = t;
          int b_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_30, e_30);
              ;
              LocalPopChoice(b_17);
            }
          else
            {
              t = z_16;
              t = SSL_gtr(d_30, e_30);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_30, e_30);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_137 (ATerm), ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm h_30 = NULL,i_30 = NULL;
    h_30 = t;
    t = term_d_14;
    t = get_config_0_0(t);
    i_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_30, term_c_17);
    t = geq_0_0(t);
    t = h_30;
    t = d_137(t);
    return(t);
  }
  t = try_1_0(e_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm k_30 = NULL,l_30 = NULL;
    t = run_time_0_0(t);
    k_30 = t;
    t = term_k_13;
    t = whoami_0_0(t);
    l_30 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), k_30), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), l_30));
    t = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_17), k_30), term_e_17), l_30));
    return(t);
  }
  t = if_verbose1_1_0(f_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm a_140 (ATerm), ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm g_5 (ATerm t)
        {
          ATerm l_17 = t;
          int m_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(m_17);
            }
          else
            {
              t = l_17;
              {
                ATerm e_18 = t;
                int h_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(h_18);
                  }
                else
                  {
                    t = e_18;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(g_5, t);
      }
    }
  t = a_140(t);
  return(t);
}
ATerm map_1_0 (ATerm f_120 (ATerm), ATerm t)
{
  ATerm n_30 (ATerm t)
  {
    ATerm m_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = m_18;
        t = Cons_2_0(f_120, n_30, t);
      }
    return(t);
  }
  t = n_30(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_30 = ATgetFirst((ATermList) t);
      q_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_30 = NULL,v_30 = NULL;
        t = q_30;
        t = g_0(t);
        u_30 = t;
        t = p_30;
        t = f_0(t);
        v_30 = t;
        t = q_30;
        {
          ATerm h_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(u_30), v_30);
            return(t);
          }
          t = reverse_acc_2_0(f_0, h_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_13;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, i_5, t);
  return(t);
}
ATerm Program_1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL;
  z_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_30);
  w_30 = t;
  t = x_30;
  t = z_111(t);
  y_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, y_30), w_30);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
      {
        ATerm j_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(j_5, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_d_20;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm k_5 (ATerm t)
    {
      ATerm d_31 = NULL;
      d_31 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, d_31), term_m_20);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(k_5, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm a_112 (ATerm), ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  h_31 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      f_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_31);
  e_31 = t;
  t = f_31;
  t = a_112(t);
  g_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, g_31), e_31);
  return(t);
}
ATerm fetch_1_0 (ATerm q_120 (ATerm), ATerm t)
{
  ATerm l_31 (ATerm t)
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(q_120, _id, t);
        ;
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        t = Cons_2_0(_id, l_31, t);
      }
    return(t);
  }
  t = l_31(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm a_141 (ATerm), ATerm t)
{
  t = fetch_1_0(a_141, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL;
  n_31 = t;
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_20 = ATgetFirst((ATermList) t);
                ATerm e_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_31;
          }
        ;
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        t = (ATerm) ATinsert(ATempty, n_31);
      }
    o_31 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), o_31);
    t = n_31;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_16;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm w_116 (ATerm), ATerm t)
{
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_116(t);
      ;
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm m_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_y_21;
        return(t);
      }
      ATerm n_5 (ATerm t)
      {
        t = term_z_21;
        return(t);
      }
      t = Option_3_0(l_5, m_5, n_5, t);
      ;
      LocalPopChoice(k_21);
    }
  else
    {
      t = h_21;
      {
        ATerm o_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm p_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_a_22;
          return(t);
        }
        ATerm q_5 (ATerm t)
        {
          t = term_b_22;
          return(t);
        }
        t = Option_3_0(o_5, p_5, q_5, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
  if(match_cons(t, sym__3))
    {
      u_31 = ATgetArgument(t, 0);
      v_31 = ATgetArgument(t, 1);
      w_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_31, v_31);
  {
    ATerm c_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_22 = ATgetArgument(t, 0);
            ATerm h_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_31, v_31);
        ;
        LocalPopChoice(f_22);
      }
    else
      {
        t = c_22;
        t = (ATerm) ATempty;
      }
    x_31 = t;
    t = SSL_table_put(u_31, v_31, (ATerm) ATinsert(CheckATermList(x_31), w_31));
    t = (ATerm) ATmakeAppl(sym__3, u_31, v_31, w_31);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm f_142 (ATerm), ATerm t)
{
  ATerm c_32 = NULL;
  t = term_k_13;
  t = f_142(t);
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_22, term_l_22, c_32);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
  e_32 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = e_32;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm j_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_32 = ATgetFirst((ATermList) t);
          g_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_32;
      t = a_0(t);
      t = term_k_13;
      t = b_0(t);
      j_32 = t;
      t = (ATerm) ATinsert(CheckATermList(g_32), j_32);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm l_32 = NULL;
    l_32 = t;
    if(match_string(t, "--help"))
      {
        t = l_32;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = l_32;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = l_32;
          }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_m_22;
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_n_22;
    return(t);
  }
  t = Option_3_0(r_5, s_5, t_5, t);
  return(t);
}
ATerm Cons_2_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  r_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_32 = ATgetFirst((ATermList) t);
      o_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_32);
  m_32 = t;
  t = n_32;
  t = r_97(t);
  p_32 = t;
  t = o_32;
  t = s_97(t);
  q_32 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(q_32), p_32), m_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_142 (ATerm), ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  {
    ATerm u_5 (ATerm t)
    {
      t = term_q_22;
      t = d_142(t);
      return(t);
    }
    t = try_1_0(u_5, t);
    t = y_32;
    {
      ATerm v_5 (ATerm t)
      {
        ATerm z_32 = NULL;
        z_32 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_32);
        t = (ATerm) ATmakeAppl(sym_Program_1, z_32);
        return(t);
      }
      ATerm w_5 (ATerm t)
      {
        ATerm r_22 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_23 = t;
            int f_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(f_23);
              }
            else
              {
                t = e_23;
                t = d_142(t);
                t = Cons_2_0(_id, w_5, t);
              }
            ;
            LocalPopChoice(d_23);
          }
        else
          {
            t = r_22;
            {
              ATerm b_33 = NULL,c_33 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_33 = ATgetFirst((ATermList) t);
                  c_33 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_33), (ATerm) ATmakeAppl(sym_Undefined_1, b_33));
            }
          }
        return(t);
      }
      t = Cons_2_0(v_5, w_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm c_142 (ATerm), ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = i_33;
  {
    ATerm x_5 (ATerm t)
    {
      ATerm o_23 = t;
      int p_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_142(t);
          ;
          LocalPopChoice(p_23);
        }
      else
        {
          t = o_23;
          {
            ATerm q_23 = t;
            int v_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(v_23);
              }
            else
              {
                t = q_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_5, t);
    {
      ATerm y_5 (ATerm t)
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_33 = NULL;
            p_33 = t;
            {
              ATerm c_24 = t;
              int d_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_33;
                  {
                    ATerm e_24 = t;
                    int l_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_i_17;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(l_24);
                      }
                    else
                      {
                        t = e_24;
                        {
                          ATerm z_5 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(z_5, t);
                        }
                      }
                    t = p_33;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(d_24);
                }
              else
                {
                  t = c_24;
                  t = term_t_21;
                  t = get_config_0_0(t);
                  t = p_33;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
            {
              ATerm a_6 (ATerm t)
              {
                ATerm b_6 (ATerm t)
                {
                  j_33 = t;
                  return(t);
                }
                t = Undefined_1_0(b_6, t);
                return(t);
              }
              t = option_defined_1_0(a_6, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_33)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_33)), term_m_24));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(y_5, t);
      k_33 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = k_33;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm f_140 (ATerm), ATerm t)
{
  ATerm v_4 = NULL;
  t = parse_options_1_0(c_140, t);
  v_4 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), v_4);
  t = v_4;
  t = e_140(t);
  {
    ATerm n_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_140, t);
        ;
        LocalPopChoice(q_24);
      }
    else
      {
        t = n_24;
        {
          ATerm r_24 = t;
          int u_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_140(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_24);
            }
          else
            {
              t = r_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm u_139 (ATerm), ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_139(t);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(r_139, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(c_6, t_139, u_139, d_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm l_139 (ATerm), ATerm m_139 (ATerm), ATerm n_139 (ATerm), ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm f_6 (ATerm t)
    {
      ATerm s_33 = NULL,t_33 = NULL;
      s_33 = t;
      t = term_q_16;
      t = get_config_0_0(t);
      t_33 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, t_33));
      t = s_33;
      return(t);
    }
    t = if_verbose2_1_0(f_6, t);
    return(t);
  }
  t = iowrap_4_0(l_139, m_139, n_139, e_6, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm j_139 (ATerm), ATerm k_139 (ATerm), ATerm t)
{
  t = iowrap_3_0(j_139, k_139, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm g_139 (ATerm), ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    t = _2_0(_id, g_139, t);
    return(t);
  }
  t = iowrap_2_0(g_6, _fail, t);
  return(t);
}
ATerm define_congruences_comp_0_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm i_6 (ATerm t)
    {
      ATerm j_6 (ATerm t)
      {
        t = repeat_1_0(Simplify_0_0, t);
        return(t);
      }
      ATerm k_6 (ATerm t)
      {
        ATerm l_6 (ATerm t)
        {
          ATerm f_25 = t;
          int g_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = DefineCongruences_0_0(t);
              ;
              LocalPopChoice(g_25);
            }
          else
            {
              t = f_25;
              t = Simplify_0_0(t);
            }
          return(t);
        }
        t = repeat_1_0(l_6, t);
        return(t);
      }
      t = downup2_2_0(j_6, k_6, t);
      t = simplify_0_0(t);
      return(t);
    }
    t = apply_to_bodies_1_0(i_6, t);
    return(t);
  }
  t = iowrap_1_0(h_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = define_congruences_comp_0_0(t);
  return(t);
}
