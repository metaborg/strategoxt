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
Symbol sym_Cong_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Choice_2;
Symbol sym_GChoice_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Some_1;
Symbol sym_Undefined_0;
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
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
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
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
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
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_p_21;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_k_20;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_j_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_e_18;
ATerm term_w_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_h_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_g_14;
ATerm term_m_13;
ATerm term_b_13;
ATerm term_z_1;
void init_constant_terms (void)
{
  ATprotect(&(term_z_1));
  term_z_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym__3, term_r_18, term_s_18, term_z_1);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm Let_2_0 (ATerm d_73 (ATerm), ATerm e_73 (ATerm), ATerm);
ATerm k_0 (ATerm);
ATerm m_0 (ATerm);
ATerm n_0 (ATerm);
ATerm o_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm SVar_1_0 (ATerm c_73 (ATerm), ATerm);
ATerm Call_2_0 (ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm);
ATerm Where_1_0 (ATerm d_74 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm);
ATerm Build_1_0 (ATerm l_73 (ATerm), ATerm);
ATerm Op_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm);
ATerm Var_1_0 (ATerm t_69 (ATerm), ATerm);
ATerm As_2_0 (ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm q_70 (ATerm), ATerm);
ATerm Str_1_0 (ATerm x_69 (ATerm), ATerm);
ATerm Real_1_0 (ATerm w_69 (ATerm), ATerm);
ATerm Int_1_0 (ATerm v_69 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm match_term_exp_0_0 (ATerm);
ATerm Match_1_0 (ATerm k_73 (ATerm), ATerm);
ATerm Thread_1_0 (ATerm r_74 (ATerm), ATerm);
ATerm All_1_0 (ATerm q_74 (ATerm), ATerm);
ATerm Some_1_0 (ATerm o_74 (ATerm), ATerm);
ATerm One_1_0 (ATerm p_74 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm);
ATerm Path_2_0 (ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm);
ATerm LGChoice_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm);
ATerm Test_1_0 (ATerm e_74 (ATerm), ATerm);
ATerm Not_1_0 (ATerm c_74 (ATerm), ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm w_1 (ATerm);
ATerm a_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm p_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm z_2 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm list_1_0 (ATerm a_90 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm v_68 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm a_69 (ATerm), ATerm);
ATerm _2_0 (ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm m_102 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm o_105 (ATerm), ATerm);
ATerm t_28 (ATerm n_28, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_90 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm n_90 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm x_103 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm j_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_103 (ATerm), ATerm);
ATerm o_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm p_6 (ATerm);
ATerm need_help_1_0 (ATerm m_106 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_89 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm j_81 (ATerm), ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm k_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm c_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm p_108 (ATerm), ATerm);
ATerm h_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm p_7 (ATerm);
ATerm parse_options_1_0 (ATerm o_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm d_8 (ATerm);
ATerm iowrap_3_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_0 = NULL,l_0 = NULL;
  e_0 = t;
  t = term_z_1;
  t = whoami_0_0(t);
  l_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), l_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_0;
  return(t);
}
ATerm Let_2_0 (ATerm d_73 (ATerm), ATerm e_73 (ATerm), ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL,z_0 = NULL,b_1 = NULL;
  b_1 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_0 = ATgetArgument(t, 0);
      r_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_1);
  p_0 = t;
  t = q_0;
  t = d_73(t);
  s_0 = t;
  t = r_0;
  t = e_73(t);
  z_0 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, s_0, z_0), p_0);
  return(t);
}
ATerm k_0 (ATerm t)
{
  ATerm n_1 = NULL;
  n_1 = t;
  t = SSL_is_string(n_1);
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm r_1 = NULL;
  r_1 = t;
  t = SSL_is_int(r_1);
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm u_1 = NULL;
  u_1 = t;
  t = SSL_is_real(u_1);
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm v_1 = NULL;
  v_1 = t;
  t = SSL_is_string(v_1);
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = Var_1_0(v_0, t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm x_1 = NULL;
  x_1 = t;
  t = SSL_is_string(x_1);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm y_1 = NULL;
  y_1 = t;
  t = SSL_is_string(y_1);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = list_1_0(term_expression_0_0, t);
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(k_0, t);
            ;
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            {
              ATerm r_8 = t;
              int s_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1_0(m_0, t);
                  ;
                  LocalPopChoice(s_8);
                }
              else
                {
                  t = r_8;
                  {
                    ATerm t_8 = t;
                    int u_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1_0(n_0, t);
                        ;
                        LocalPopChoice(u_8);
                      }
                    else
                      {
                        t = t_8;
                        {
                          ATerm v_8 = t;
                          int w_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1_0(o_0, t);
                              ;
                              LocalPopChoice(w_8);
                            }
                          else
                            {
                              t = v_8;
                              {
                                ATerm x_8 = t;
                                int y_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1_0(term_expression_0_0, t);
                                    ;
                                    LocalPopChoice(y_8);
                                  }
                                else
                                  {
                                    t = x_8;
                                    {
                                      ATerm a_9 = t;
                                      int b_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = As_2_0(t_0, term_expression_0_0, t);
                                          ;
                                          LocalPopChoice(b_9);
                                        }
                                      else
                                        {
                                          t = a_9;
                                          {
                                            ATerm c_9 = t;
                                            int d_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Op_2_0(w_0, y_0, t);
                                                ;
                                                LocalPopChoice(d_9);
                                              }
                                            else
                                              {
                                                t = c_9;
                                                {
                                                  ATerm c_0 = NULL;
                                                  c_0 = t;
                                                  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_0), (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue))));
                                                  t = c_0;
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
ATerm SVar_1_0 (ATerm c_73 (ATerm), ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,e_2 = NULL,f_2 = NULL;
  f_2 = t;
  if(match_cons(t, sym_SVar_1))
    {
      c_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_2);
  b_2 = t;
  t = c_2;
  t = c_73(t);
  e_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, e_2), b_2);
  return(t);
}
ATerm Call_2_0 (ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,q_2 = NULL;
  q_2 = t;
  if(match_cons(t, sym_Call_2))
    {
      k_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_2);
  j_2 = t;
  t = k_2;
  t = f_73(t);
  m_2 = t;
  t = l_2;
  t = g_73(t);
  n_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, m_2, n_2), j_2);
  return(t);
}
ATerm PrimT_3_0 (ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  f_3 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      w_2 = ATgetArgument(t, 0);
      x_2 = ATgetArgument(t, 1);
      y_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_3);
  v_2 = t;
  t = w_2;
  t = j_74(t);
  c_3 = t;
  t = x_2;
  t = k_74(t);
  d_3 = t;
  t = y_2;
  t = l_74(t);
  e_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, c_3, d_3, e_3), v_2);
  return(t);
}
ATerm Where_1_0 (ATerm d_74 (ATerm), ATerm t)
{
  ATerm j_3 = NULL,m_3 = NULL,n_3 = NULL,v_3 = NULL;
  v_3 = t;
  if(match_cons(t, sym_Where_1))
    {
      m_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_3);
  j_3 = t;
  t = m_3;
  t = d_74(t);
  n_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, n_3), j_3);
  return(t);
}
ATerm Scope_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm t)
{
  ATerm x_5 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,k_6 = NULL,l_6 = NULL;
  l_6 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_6 = ATgetArgument(t, 0);
      h_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_6);
  x_5 = t;
  t = g_6;
  t = n_73(t);
  i_6 = t;
  t = h_6;
  t = o_73(t);
  k_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, i_6, k_6), x_5);
  return(t);
}
ATerm Build_1_0 (ATerm l_73 (ATerm), ATerm t)
{
  ATerm e_7 = NULL,j_7 = NULL,m_7 = NULL,n_7 = NULL;
  n_7 = t;
  if(match_cons(t, sym_Build_1))
    {
      j_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_7);
  e_7 = t;
  t = j_7;
  t = l_73(t);
  m_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, m_7), e_7);
  return(t);
}
ATerm Op_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,c_8 = NULL,e_8 = NULL;
  e_8 = t;
  if(match_cons(t, sym_Op_2))
    {
      x_7 = ATgetArgument(t, 0);
      y_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_8);
  w_7 = t;
  t = x_7;
  t = z_69(t);
  z_7 = t;
  t = y_7;
  t = a_70(t);
  c_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, z_7, c_8), w_7);
  return(t);
}
ATerm Var_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,g_9 = NULL,l_9 = NULL,o_9 = NULL;
  o_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_9);
  z_8 = t;
  t = g_9;
  t = t_69(t);
  l_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, l_9), z_8);
  return(t);
}
ATerm As_2_0 (ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm t)
{
  ATerm x_9 = NULL,c_10 = NULL,d_10 = NULL,f_10 = NULL,i_10 = NULL,j_10 = NULL;
  j_10 = t;
  if(match_cons(t, sym_As_2))
    {
      c_10 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_10);
  x_9 = t;
  t = c_10;
  t = k_70(t);
  f_10 = t;
  t = d_10;
  t = l_70(t);
  i_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, f_10, i_10), x_9);
  return(t);
}
ATerm BuildDefault_1_0 (ATerm q_70 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,x_10 = NULL,d_11 = NULL,i_11 = NULL;
  i_11 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      x_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_11);
  t_10 = t;
  t = x_10;
  t = q_70(t);
  d_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, d_11), t_10);
  return(t);
}
ATerm Str_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm m_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL;
  t_11 = t;
  if(match_cons(t, sym_Str_1))
    {
      r_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_11);
  m_11 = t;
  t = r_11;
  t = x_69(t);
  s_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, s_11), m_11);
  return(t);
}
ATerm Real_1_0 (ATerm w_69 (ATerm), ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,d_12 = NULL,e_12 = NULL;
  e_12 = t;
  if(match_cons(t, sym_Real_1))
    {
      z_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_12);
  y_11 = t;
  t = z_11;
  t = w_69(t);
  d_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, d_12), y_11);
  return(t);
}
ATerm Int_1_0 (ATerm v_69 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,l_12 = NULL,m_12 = NULL,p_12 = NULL;
  p_12 = t;
  if(match_cons(t, sym_Int_1))
    {
      l_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_12);
  i_12 = t;
  t = l_12;
  t = v_69(t);
  m_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, m_12), i_12);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm t_12 = NULL;
  t_12 = t;
  t = SSL_is_string(t_12);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm u_12 = NULL;
  u_12 = t;
  t = SSL_is_int(u_12);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm x_12 = NULL;
  x_12 = t;
  t = SSL_is_real(x_12);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm y_12 = NULL;
  y_12 = t;
  t = SSL_is_string(y_12);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = Var_1_0(i_1, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm d_13 = NULL;
  d_13 = t;
  t = SSL_is_string(d_13);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm e_13 = NULL;
  e_13 = t;
  t = SSL_is_string(e_13);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = list_1_0(match_term_exp_0_0, t);
  return(t);
}
ATerm match_term_exp_0_0 (ATerm t)
{
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      ;
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(a_1, t);
            ;
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            {
              ATerm j_9 = t;
              int k_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1_0(d_1, t);
                  ;
                  LocalPopChoice(k_9);
                }
              else
                {
                  t = j_9;
                  {
                    ATerm m_9 = t;
                    int n_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1_0(e_1, t);
                        ;
                        LocalPopChoice(n_9);
                      }
                    else
                      {
                        t = m_9;
                        {
                          ATerm p_9 = t;
                          int q_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1_0(g_1, t);
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
                                    t = BuildDefault_1_0(match_term_exp_0_0, t);
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
                                          t = As_2_0(h_1, match_term_exp_0_0, t);
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
                                                t = Op_2_0(j_1, k_1, t);
                                                ;
                                                LocalPopChoice(w_9);
                                              }
                                            else
                                              {
                                                t = v_9;
                                                {
                                                  ATerm u_0 = NULL;
                                                  u_0 = t;
                                                  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_0), (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue))));
                                                  t = u_0;
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
ATerm Match_1_0 (ATerm k_73 (ATerm), ATerm t)
{
  ATerm g_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
  k_13 = t;
  if(match_cons(t, sym_Match_1))
    {
      i_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_13);
  g_13 = t;
  t = i_13;
  t = k_73(t);
  j_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, j_13), g_13);
  return(t);
}
ATerm Thread_1_0 (ATerm r_74 (ATerm), ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,x_13 = NULL,f_14 = NULL;
  f_14 = t;
  if(match_cons(t, sym_Thread_1))
    {
      s_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_14);
  r_13 = t;
  t = s_13;
  t = r_74(t);
  x_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, x_13), r_13);
  return(t);
}
ATerm All_1_0 (ATerm q_74 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
  s_14 = t;
  if(match_cons(t, sym_All_1))
    {
      q_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_14);
  m_14 = t;
  t = q_14;
  t = q_74(t);
  r_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, r_14), m_14);
  return(t);
}
ATerm Some_1_0 (ATerm o_74 (ATerm), ATerm t)
{
  ATerm i_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  n_15 = t;
  if(match_cons(t, sym_Some_1))
    {
      l_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_15);
  i_15 = t;
  t = l_15;
  t = o_74(t);
  m_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, m_15), i_15);
  return(t);
}
ATerm One_1_0 (ATerm p_74 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,g_16 = NULL,j_16 = NULL,k_16 = NULL;
  k_16 = t;
  if(match_cons(t, sym_One_1))
    {
      g_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_16);
  e_16 = t;
  t = g_16;
  t = p_74(t);
  j_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, j_16), e_16);
  return(t);
}
ATerm Cong_2_0 (ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm t)
{
  ATerm t_16 = NULL,c_17 = NULL,e_17 = NULL,f_17 = NULL,h_17 = NULL,n_17 = NULL;
  n_17 = t;
  if(match_cons(t, sym_Cong_2))
    {
      c_17 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_17);
  t_16 = t;
  t = c_17;
  t = r_68(t);
  f_17 = t;
  t = e_17;
  t = s_68(t);
  h_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, f_17, h_17), t_16);
  return(t);
}
ATerm Path_2_0 (ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  a_18 = t;
  if(match_cons(t, sym_Path_2))
    {
      s_17 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_18);
  r_17 = t;
  t = s_17;
  t = m_74(t);
  y_17 = t;
  t = t_17;
  t = n_74(t);
  z_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, y_17, z_17), r_17);
  return(t);
}
ATerm Rec_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
  n_18 = t;
  if(match_cons(t, sym_Rec_2))
    {
      g_18 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_18);
  f_18 = t;
  t = g_18;
  t = a_74(t);
  l_18 = t;
  t = k_18;
  t = b_74(t);
  m_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, l_18, m_18), f_18);
  return(t);
}
ATerm CallT_3_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm t)
{
  ATerm t_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,c_19 = NULL,d_19 = NULL,i_19 = NULL;
  i_19 = t;
  if(match_cons(t, sym_CallT_3))
    {
      w_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
      y_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_19);
  t_18 = t;
  t = w_18;
  t = h_73(t);
  z_18 = t;
  t = x_18;
  t = i_73(t);
  c_19 = t;
  t = y_18;
  t = j_73(t);
  d_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, z_18, c_19, d_19), t_18);
  return(t);
}
ATerm LGChoice_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,o_19 = NULL,b_20 = NULL,m_20 = NULL,n_20 = NULL;
  n_20 = t;
  if(match_cons(t, sym_LGChoice_2))
    {
      m_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_20);
  l_19 = t;
  t = m_19;
  t = v_73(t);
  b_20 = t;
  t = o_19;
  t = w_73(t);
  m_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, b_20, m_20), l_19);
  return(t);
}
ATerm GChoice_2_0 (ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,b_21 = NULL,e_21 = NULL,f_21 = NULL;
  f_21 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      u_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_21);
  t_20 = t;
  t = u_20;
  t = v_72(t);
  b_21 = t;
  t = v_20;
  t = w_72(t);
  e_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, b_21, e_21), t_20);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,z_21 = NULL;
  z_21 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      l_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
      r_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_21);
  k_21 = t;
  t = l_21;
  t = x_73(t);
  s_21 = t;
  t = q_21;
  t = y_73(t);
  t_21 = t;
  t = r_21;
  t = z_73(t);
  u_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, s_21, t_21, u_21), k_21);
  return(t);
}
ATerm LChoice_2_0 (ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,k_22 = NULL,m_22 = NULL,q_22 = NULL;
  q_22 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      h_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_22);
  g_22 = t;
  t = h_22;
  t = t_73(t);
  k_22 = t;
  t = i_22;
  t = u_73(t);
  m_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, k_22, m_22), g_22);
  return(t);
}
ATerm Choice_2_0 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,h_23 = NULL,o_23 = NULL;
  o_23 = t;
  if(match_cons(t, sym_Choice_2))
    {
      y_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_23);
  x_22 = t;
  t = y_22;
  t = r_72(t);
  a_23 = t;
  t = z_22;
  t = s_72(t);
  h_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, a_23, h_23), x_22);
  return(t);
}
ATerm Seq_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
  w_23 = t;
  if(match_cons(t, sym_Seq_2))
    {
      s_23 = ATgetArgument(t, 0);
      t_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_23);
  r_23 = t;
  t = s_23;
  t = r_73(t);
  u_23 = t;
  t = t_23;
  t = s_73(t);
  v_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, u_23, v_23), r_23);
  return(t);
}
ATerm Test_1_0 (ATerm e_74 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL;
  e_24 = t;
  if(match_cons(t, sym_Test_1))
    {
      c_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_24);
  b_24 = t;
  t = c_24;
  t = e_74(t);
  d_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, d_24), b_24);
  return(t);
}
ATerm Not_1_0 (ATerm c_74 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  k_24 = t;
  if(match_cons(t, sym_Not_1))
    {
      i_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_24);
  h_24 = t;
  t = i_24;
  t = c_74(t);
  j_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, j_24), h_24);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = SVar_1_0(p_1, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = list_1_0(q_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = list_1_0(term_expression_0_0, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  t = SSL_is_string(n_24);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = CallT_3_0(s_1, t_1, w_1, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = SVar_1_0(a_2, t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm o_24 = NULL;
  o_24 = t;
  t = SSL_is_string(o_24);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm p_24 = NULL;
  p_24 = t;
  t = SSL_is_string(p_24);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  t = SSL_is_int(q_24);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  t = SSL_is_string(r_24);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = list_1_0(strategy_expression_0_0, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = list_1_0(t_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm s_24 = NULL;
  s_24 = t;
  t = SSL_is_string(s_24);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm t_24 = NULL;
  t_24 = t;
  t = SSL_is_string(t_24);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = list_1_0(h_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = list_1_0(term_expression_0_0, t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = Call_2_0(i_3, k_3, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = SVar_1_0(l_3, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  t = SSL_is_string(u_24);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = list_1_0(p_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3_0(q_3, r_3, strategy_expression_0_0, t);
      ;
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      t = SDefT_4_0(u_3, w_3, x_3, strategy_expression_0_0, t);
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  t = SSL_is_string(v_24);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = list_1_0(s_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = VarDec_2_0(t_3, _id, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  t = SSL_is_string(w_24);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  t = SSL_is_string(z_24);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = list_1_0(y_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = list_1_0(a_4, t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = VarDec_2_0(z_3, _id, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  t = SSL_is_string(a_25);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = VarDec_2_0(b_4, _id, t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm b_25 = NULL;
  b_25 = t;
  t = SSL_is_string(b_25);
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      ;
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      {
        ATerm e_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            ;
            LocalPopChoice(g_10);
          }
        else
          {
            t = e_10;
            {
              ATerm h_10 = t;
              int k_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1_0(strategy_expression_0_0, t);
                  ;
                  LocalPopChoice(k_10);
                }
              else
                {
                  t = h_10;
                  {
                    ATerm l_10 = t;
                    int m_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1_0(strategy_expression_0_0, t);
                        ;
                        LocalPopChoice(m_10);
                      }
                    else
                      {
                        t = l_10;
                        {
                          ATerm n_10 = t;
                          int o_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                              ;
                              LocalPopChoice(o_10);
                            }
                          else
                            {
                              t = n_10;
                              {
                                ATerm p_10 = t;
                                int q_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                    ;
                                    LocalPopChoice(q_10);
                                  }
                                else
                                  {
                                    t = p_10;
                                    {
                                      ATerm r_10 = t;
                                      int s_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                          ;
                                          LocalPopChoice(s_10);
                                        }
                                      else
                                        {
                                          t = r_10;
                                          {
                                            ATerm u_10 = t;
                                            int v_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3_0(strategy_expression_0_0, strategy_expression_0_0, strategy_expression_0_0, t);
                                                ;
                                                LocalPopChoice(v_10);
                                              }
                                            else
                                              {
                                                t = u_10;
                                                {
                                                  ATerm w_10 = t;
                                                  int y_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                      ;
                                                      LocalPopChoice(y_10);
                                                    }
                                                  else
                                                    {
                                                      t = w_10;
                                                      {
                                                        ATerm z_10 = t;
                                                        int a_11 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                            ;
                                                            LocalPopChoice(a_11);
                                                          }
                                                        else
                                                          {
                                                            t = z_10;
                                                            {
                                                              ATerm b_11 = t;
                                                              int c_11 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = CallT_3_0(l_1, m_1, o_1, t);
                                                                  ;
                                                                  LocalPopChoice(c_11);
                                                                }
                                                              else
                                                                {
                                                                  t = b_11;
                                                                  {
                                                                    ATerm e_11 = t;
                                                                    int f_11 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2_0(h_2, strategy_expression_0_0, t);
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
                                                                              t = Path_2_0(i_2, strategy_expression_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(h_11);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_11;
                                                                              {
                                                                                ATerm j_11 = t;
                                                                                int k_11 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Cong_2_0(p_2, r_2, t);
                                                                                    ;
                                                                                    LocalPopChoice(k_11);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_11;
                                                                                    {
                                                                                      ATerm l_11 = t;
                                                                                      int n_11 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1_0(strategy_expression_0_0, t);
                                                                                          ;
                                                                                          LocalPopChoice(n_11);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = l_11;
                                                                                          {
                                                                                            ATerm o_11 = t;
                                                                                            int p_11 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1_0(strategy_expression_0_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(p_11);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = o_11;
                                                                                                {
                                                                                                  ATerm q_11 = t;
                                                                                                  int u_11 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1_0(strategy_expression_0_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(u_11);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = q_11;
                                                                                                      {
                                                                                                        ATerm v_11 = t;
                                                                                                        int w_11 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1_0(strategy_expression_0_0, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(w_11);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = v_11;
                                                                                                            {
                                                                                                              ATerm x_11 = t;
                                                                                                              int a_12 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1_0(match_term_exp_0_0, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(a_12);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = x_11;
                                                                                                                  {
                                                                                                                    ATerm b_12 = t;
                                                                                                                    int c_12 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1_0(term_expression_0_0, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(c_12);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = b_12;
                                                                                                                        {
                                                                                                                          ATerm f_12 = t;
                                                                                                                          int g_12 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Scope_2_0(s_2, strategy_expression_0_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(g_12);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = f_12;
                                                                                                                              {
                                                                                                                                ATerm h_12 = t;
                                                                                                                                int j_12 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1_0(strategy_expression_0_0, t);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(j_12);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = h_12;
                                                                                                                                    {
                                                                                                                                      ATerm k_12 = t;
                                                                                                                                      int n_12 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = PrimT_3_0(u_2, z_2, g_3, t);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(n_12);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = k_12;
                                                                                                                                          {
                                                                                                                                            ATerm o_12 = t;
                                                                                                                                            int q_12 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = Let_2_0(o_3, strategy_expression_0_0, t);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(q_12);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = o_12;
                                                                                                                                                {
                                                                                                                                                  ATerm x_0 = NULL;
                                                                                                                                                  x_0 = t;
                                                                                                                                                  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_0), (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue))));
                                                                                                                                                  t = x_0;
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
      }
    }
  return(t);
}
ATerm VarDec_2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  i_25 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_25 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_25);
  d_25 = t;
  t = e_25;
  t = o_75(t);
  g_25 = t;
  t = f_25;
  t = p_75(t);
  h_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, g_25, h_25), d_25);
  return(t);
}
ATerm SDefT_4_0 (ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  u_25 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_25 = ATgetArgument(t, 0);
      n_25 = ATgetArgument(t, 1);
      o_25 = ATgetArgument(t, 2);
      p_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_25);
  l_25 = t;
  t = m_25;
  t = v_75(t);
  q_25 = t;
  t = n_25;
  t = w_75(t);
  r_25 = t;
  t = o_25;
  t = x_75(t);
  s_25 = t;
  t = p_25;
  t = y_75(t);
  t_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, q_25, r_25, s_25, t_25), l_25);
  return(t);
}
ATerm SDef_3_0 (ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
  e_26 = t;
  if(match_cons(t, sym_SDef_3))
    {
      y_25 = ATgetArgument(t, 0);
      z_25 = ATgetArgument(t, 1);
      a_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_26);
  x_25 = t;
  t = y_25;
  t = s_75(t);
  b_26 = t;
  t = z_25;
  t = t_75(t);
  c_26 = t;
  t = a_26;
  t = u_75(t);
  d_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, b_26, c_26, d_26), x_25);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm h_26 = NULL;
  h_26 = t;
  t = SSL_is_string(h_26);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = list_1_0(f_4, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = VarDec_2_0(g_4, _id, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm i_26 = NULL;
  i_26 = t;
  t = SSL_is_string(i_26);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm j_26 = NULL;
  j_26 = t;
  t = SSL_is_string(j_26);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = list_1_0(k_4, t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = list_1_0(n_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = VarDec_2_0(m_4, _id, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm k_26 = NULL;
  k_26 = t;
  t = SSL_is_string(k_26);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = VarDec_2_0(o_4, _id, t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm l_26 = NULL;
  l_26 = t;
  t = SSL_is_string(l_26);
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3_0(c_4, d_4, strategy_expression_0_0, t);
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      {
        ATerm v_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(h_4, i_4, j_4, strategy_expression_0_0, t);
            ;
            LocalPopChoice(w_12);
          }
        else
          {
            t = v_12;
            {
              ATerm c_1 = NULL;
              c_1 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_1), (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue))));
              t = c_1;
            }
          }
      }
    }
  return(t);
}
ATerm list_1_0 (ATerm a_90 (ATerm), ATerm t)
{
  ATerm m_26 (ATerm t)
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        t = Cons_2_0(a_90, m_26, t);
      }
    return(t);
  }
  t = m_26(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm v_68 (ATerm), ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
  q_26 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      o_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_26);
  n_26 = t;
  t = o_26;
  t = v_68(t);
  p_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, p_26), n_26);
  return(t);
}
ATerm Cons_2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  y_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_26 = ATgetFirst((ATermList) t);
      v_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_26);
  t_26 = t;
  t = u_26;
  t = n_68(t);
  w_26 = t;
  t = v_26;
  t = o_68(t);
  x_26 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(x_26), w_26), t_26);
  return(t);
}
ATerm Specification_1_0 (ATerm a_69 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
  e_27 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_27);
  b_27 = t;
  t = c_27;
  t = a_69(t);
  d_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, d_27), b_27);
  return(t);
}
ATerm _2_0 (ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL;
  m_27 = t;
  if(match_cons(t, sym__2))
    {
      i_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_27);
  h_27 = t;
  t = i_27;
  t = y_63(t);
  k_27 = t;
  t = j_27;
  t = z_63(t);
  l_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, k_27, l_27), h_27);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm m_102 (ATerm), ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
  if(match_cons(t, sym__2))
    {
      p_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_27, term_b_13);
  t = open_stream_0_0(t);
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_27, q_27);
  t = m_102(t);
  t = fclose_0_0(t);
  t = q_27;
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = fetch_1_0(z_4, t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = WriteToFile_1_0(a_5, t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_13 = ATgetArgument(t, 0);
      if(match_cons(c_13, sym_Stream_1))
        {
          u_27 = ATgetArgument(c_13, 0);
        }
      else
        _fail(t);
      v_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(u_27, v_27);
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_27);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = WriteToFile_1_0(c_5, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_13 = ATgetArgument(t, 0);
      if(match_cons(f_13, sym_Stream_1))
        {
          x_27 = ATgetArgument(f_13, 0);
        }
      else
        _fail(t);
      y_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(x_27, y_27);
  z_27 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), z_27);
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_28);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL;
  s_27 = t;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm h_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_4 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((t_27 != NULL) && (t_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_4, t);
          ;
          LocalPopChoice(l_13);
        }
      else
        {
          t = h_13;
          t = term_m_13;
          if(((t_27 != NULL) && (t_27 != t)))
            _fail(t);
          else
            t_27 = t;
        }
      return(t);
    }
    t = _2_0(r_4, _id, t);
    t = s_27;
    {
      ATerm u_4 (ATerm t)
      {
        ATerm f_1 = NULL;
        f_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), f_1);
        return(t);
      }
      t = _2_0(_id, u_4, t);
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(x_4, y_4, t);
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            t = _2_0(_id, b_5, t);
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
ATerm apply_strategy_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
  b_28 = t;
  t = dtime_0_0(t);
  t = b_28;
  t = o_105(t);
  c_28 = t;
  t = dtime_0_0(t);
  d_28 = t;
  t = c_28;
  if(match_cons(t, sym__2))
    {
      e_28 = ATgetArgument(t, 0);
      f_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_28), (ATerm) ATmakeAppl(sym_Runtime_1, d_28)), f_28);
  return(t);
}
ATerm t_28 (ATerm n_28, ATerm t)
{
  t = SSL_fclose(n_28);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  r_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_28 = ATgetArgument(t, 0);
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_28);
            ;
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            t = t_28(r_28, t);
          }
      }
    }
  else
    {
      t = t_28(r_28, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_28 = NULL;
  t = SSL_stdin_stream();
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_28);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_28 = NULL;
  t = SSL_stdout_stream();
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_28);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_28 = NULL;
  t = SSL_stderr_stream();
  w_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_28);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm e_29 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      e_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_29;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  t = SSL_is_string(i_29);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_13 = ATgetArgument(t, 0);
      ATerm u_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL,g_2 = NULL;
        d_2 = t;
        t = SSL_explode_term(d_2);
        if(match_cons(t, sym__2))
          {
            ATerm y_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_13 = ATgetArgument(t, 1);
              if(((ATgetType(z_13) == AT_LIST) && !(ATisEmpty(z_13))))
                {
                  g_2 = ATgetFirst((ATermList) z_13);
                  {
                    ATerm a_14 = (ATerm) ATgetNext((ATermList) z_13);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = g_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = g_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = g_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        {
          ATerm b_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
              t = _2_0(d_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_29 = ATgetArgument(t, 0);
                  c_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(b_29, c_29);
              d_29 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_29);
              ;
              LocalPopChoice(c_14);
            }
          else
            {
              t = b_14;
              {
                ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
                t = _2_0(e_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_29 = ATgetArgument(t, 0);
                    g_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(f_29, g_29);
                h_29 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_29);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_29 = NULL;
      m_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_29, term_g_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      {
        ATerm o_2 = NULL;
        o_2 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = o_2;
        _fail(t);
      }
    }
  j_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(l_29);
  k_29 = t;
  t = j_29;
  t = fclose_0_0(t);
  t = k_29;
  return(t);
}
ATerm fetch_1_0 (ATerm h_90 (ATerm), ATerm t)
{
  ATerm r_29 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(h_90, _id, t);
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = Cons_2_0(_id, r_29, t);
      }
    return(t);
  }
  t = r_29(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      {
        ATerm u_29 = NULL,v_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_29 = ATgetFirst((ATermList) t);
            v_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_29;
        {
          ATerm f_5 (ATerm t)
          {
            t = v_29;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(f_5, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_90 (ATerm), ATerm t)
{
  ATerm b_30 (ATerm t)
  {
    ATerm l_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, b_30, t);
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = l_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_90(t);
      }
    return(t);
  }
  t = b_30(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm e_30 = NULL;
  e_30 = t;
  t = SSL_explode_string(e_30);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm f_30 = NULL;
  f_30 = t;
  t = SSL_explode_string(f_30);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm d_30 = NULL;
  t = _2_0(g_5, h_5, t);
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_30 = NULL,i_30 = NULL;
        if(match_cons(t, sym__2))
          {
            h_30 = ATgetArgument(t, 0);
            i_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_30;
        {
          ATerm i_5 (ATerm t)
          {
            t = i_30;
            return(t);
          }
          t = at_end_1_0(i_5, t);
        }
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm a_3 = NULL,b_3 = NULL;
          a_3 = t;
          t = SSL_explode_term(a_3);
          if(match_cons(t, sym__2))
            {
              ATerm t_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_3;
          t = concat_0_0(t);
        }
      }
    d_30 = t;
    t = SSL_implode_string(d_30);
  }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_30 = NULL;
      q_30 = t;
      t = SSL_is_string(q_30);
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      {
        ATerm y_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_5, t);
            ;
            LocalPopChoice(z_14);
          }
        else
          {
            t = y_14;
            {
              ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
              u_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_30 = ATgetArgument(t, 0);
                  t = v_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_30 = ATgetArgument(t, 0);
                      t = v_30;
                      {
                        ATerm a_15 = t;
                        int b_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_30);
                            {
                              ATerm c_15 = t;
                              int d_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm e_4 = NULL;
                                  t = eval_config_0_0(t);
                                  e_4 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_30, e_4);
                                  t = e_4;
                                  ;
                                  LocalPopChoice(d_15);
                                }
                              else
                                {
                                  t = c_15;
                                }
                            }
                            ;
                            LocalPopChoice(b_15);
                          }
                        else
                          {
                            t = a_15;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_30), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = v_30;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_31 = NULL,b_31 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_30 = ATgetArgument(t, 0);
                          w_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_30;
                      t = eval_config_0_0(t);
                      a_31 = t;
                      t = w_30;
                      t = eval_config_0_0(t);
                      b_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_31, b_31);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_103 (ATerm), ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_31 = NULL,i_31 = NULL;
      g_31 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_4 = NULL;
            t = eval_config_0_0(t);
            l_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_4);
            t = l_4;
            ;
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
          }
        i_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_31, term_j_15);
        t = geq_0_0(t);
        t = g_31;
        t = x_103(t);
      }
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm k_31 = NULL;
  k_31 = t;
  if(match_string(t, "-k"))
    {
      t = k_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_31;
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL;
  l_31 = t;
  t = SSL_string_to_int(l_31);
  m_31 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), m_31);
  t = l_31;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_5, m_5, n_5, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm r_31 = NULL;
  r_31 = t;
  if(match_string(t, "-S"))
    {
      t = r_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_31;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_p_15;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_q_15;
  return(t);
}
ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL;
  s_31 = t;
  t = SSL_string_to_int(s_31);
  t_31 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_31);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_31);
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_r_15;
  return(t);
}
ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_s_15;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_t_15;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_5, q_5, r_5, t);
      ;
      LocalPopChoice(v_15);
    }
  else
    {
      t = u_15;
      {
        ATerm w_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_5, u_5, v_5, t);
            ;
            LocalPopChoice(x_15);
          }
        else
          {
            t = w_15;
            t = Option_3_0(y_5, z_5, a_6, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_31 = NULL;
      t = term_z_1;
      t = d_0(t);
      y_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_15, term_z_15, y_31);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm b_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_31 = ATgetFirst((ATermList) t);
          x_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_31;
      t = a_0(t);
      t = term_z_1;
      t = b_0(t);
      b_32 = t;
      t = (ATerm) ATinsert(CheckATermList(x_31), b_32);
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm d_32 = NULL;
  d_32 = t;
  if(match_string(t, "-o"))
    {
      t = d_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_32;
    }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), e_32);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_32);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_a_16;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_6, c_6, d_6, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  if(match_cons(t, sym__3))
    {
      j_32 = ATgetArgument(t, 0);
      k_32 = ATgetArgument(t, 1);
      l_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_32, k_32);
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_16 = ATgetArgument(t, 0);
            ATerm f_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_32, k_32);
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        t = (ATerm) ATempty;
      }
    m_32 = t;
    t = SSL_table_put(j_32, k_32, (ATerm) ATinsert(CheckATermList(m_32), l_32));
    t = (ATerm) ATmakeAppl(sym__3, j_32, k_32, l_32);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_32 = NULL;
      t = term_z_1;
      t = j_0(t);
      y_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_15, term_z_15, y_32);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_32 = ATgetFirst((ATermList) t);
          v_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_32 = ATgetFirst((ATermList) t);
          x_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_32;
      t = h_0(t);
      t = w_32;
      t = i_0(t);
      c_33 = t;
      t = (ATerm) ATinsert(CheckATermList(x_32), c_33);
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  if(match_string(t, "-i"))
    {
      t = e_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_33;
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm f_33 = NULL;
  f_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), f_33);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_33);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_h_16;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_6, f_6, j_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_1;
  t = whoami_0_0(t);
  g_33 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), g_33));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm i_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_4 = NULL;
        t = eval_config_0_0(t);
        p_4 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_4);
        t = p_4;
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = i_16;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_95(t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        ATerm j_33 = NULL,k_33 = NULL,n_33 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_33 = ATgetFirst((ATermList) t);
            k_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_33;
        t = foldr_2_0(y_95, z_95, t);
        n_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_33, n_33);
        t = z_95(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_o_15;
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(v_4, w_4);
        ;
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        t = SSL_addr(v_4, w_4);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_33 = NULL,q_4 = NULL,s_4 = NULL;
  t = times_0_0(t);
  q_4 = t;
  t = SSL_explode_term(q_4);
  if(match_cons(t, sym__2))
    {
      ATerm q_16 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4;
  t = foldr_2_0(m_6, n_6, t);
  q_33 = t;
  t = SSL_TicksToSeconds(q_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
  b_34 = t;
  if(match_cons(t, sym__2))
    {
      c_34 = ATgetArgument(t, 0);
      d_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_34;
        if((c_34 != t))
          {
            _fail(t);
          }
        t = b_34;
        ;
        LocalPopChoice(s_16);
      }
    else
      {
        t = r_16;
        t = b_34;
        {
          ATerm u_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_34, d_34);
              ;
              LocalPopChoice(v_16);
            }
          else
            {
              t = u_16;
              t = SSL_gtr(c_34, d_34);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_103 (ATerm), ATerm t)
{
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_34 = NULL,i_34 = NULL;
      g_34 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_5 = NULL;
            t = eval_config_0_0(t);
            k_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_5);
            t = k_5;
            ;
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
          }
        i_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_34, term_a_17);
        t = geq_0_0(t);
        t = g_34;
        t = w_103(t);
      }
      ;
      LocalPopChoice(x_16);
    }
  else
    {
      t = w_16;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL;
  t = run_time_0_0(t);
  k_34 = t;
  t = term_z_1;
  t = whoami_0_0(t);
  l_34 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), k_34), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), l_34));
  t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_17), k_34), term_d_17), l_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm i_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_106 (ATerm), ATerm t)
{
  ATerm m_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm p_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 = NULL;
            t = eval_config_0_0(t);
            o_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), o_5);
            t = o_5;
            ;
            LocalPopChoice(q_17);
          }
        else
          {
            t = p_17;
          }
      }
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = m_17;
      t = fetch_1_0(p_6, t);
    }
  t = m_106(t);
  return(t);
}
ATerm map_1_0 (ATerm w_89 (ATerm), ATerm t)
{
  ATerm m_34 (ATerm t)
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = Cons_2_0(w_89, m_34, t);
      }
    return(t);
  }
  t = m_34(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_34 = ATgetFirst((ATermList) t);
      p_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_34 = NULL,u_34 = NULL;
        t = p_34;
        t = g_0(t);
        t_34 = t;
        t = o_34;
        t = f_0(t);
        u_34 = t;
        t = p_34;
        {
          ATerm q_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(t_34), u_34);
            return(t);
          }
          t = reverse_acc_2_0(f_0, q_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_1;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
  y_34 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_34);
  v_34 = t;
  t = w_34;
  t = j_81(t);
  x_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, x_34), v_34);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm b_35 = NULL;
  b_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_35), term_w_17);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_17 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm c_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = NULL;
            t = eval_config_0_0(t);
            s_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_5);
            t = s_5;
            ;
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
          }
      }
      ;
      LocalPopChoice(b_18);
    }
  else
    {
      t = x_17;
      t = fetch_1_0(s_6, t);
    }
  t = term_e_18;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, t_6, t);
  t = map_1_0(u_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm k_81 (ATerm), ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  f_35 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      d_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_35);
  c_35 = t;
  t = d_35;
  t = k_81(t);
  e_35 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, e_35), c_35);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL;
  j_35 = t;
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_18 = ATgetFirst((ATermList) t);
                ATerm o_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_35;
          }
        ;
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        t = (ATerm) ATinsert(ATempty, j_35);
      }
    k_35 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), k_35);
    t = j_35;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_5 = NULL;
        t = eval_config_0_0(t);
        w_5 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_5);
        t = w_5;
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_u_18;
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_v_18;
  return(t);
}
ATerm y_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_a_19;
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_6, w_6, x_6, t);
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      t = Option_3_0(y_6, a_7, b_7, t);
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm q_35 = NULL;
  q_35 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_35);
  t = (ATerm) ATmakeAppl(sym_Program_1, q_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_108 (ATerm), ATerm t)
{
  ATerm p_35 = NULL;
  p_35 = t;
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_19;
        t = p_108(t);
        ;
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
      }
    t = p_35;
    {
      ATerm d_7 (ATerm t)
      {
        ATerm k_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_19 = t;
            int q_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(q_19);
              }
            else
              {
                t = p_19;
                t = p_108(t);
                t = Cons_2_0(_id, d_7, t);
              }
            ;
            LocalPopChoice(n_19);
          }
        else
          {
            t = k_19;
            {
              ATerm s_35 = NULL,t_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_35 = ATgetFirst((ATermList) t);
                  t_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_35), (ATerm) ATmakeAppl(sym_Undefined_1, s_35));
            }
          }
        return(t);
      }
      t = Cons_2_0(c_7, d_7, t);
    }
  }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm d_36 = NULL;
  d_36 = t;
  if(match_string(t, "--help"))
    {
      t = d_36;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_36;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_36;
        }
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_r_19;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_s_19;
  return(t);
}
ATerm p_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_108 (ATerm), ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = a_36;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm t_19 = t;
      int u_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_108(t);
          ;
          LocalPopChoice(u_19);
        }
      else
        {
          t = t_19;
          {
            ATerm v_19 = t;
            int w_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_7, k_7, l_7, t);
                ;
                LocalPopChoice(w_19);
              }
            else
              {
                t = v_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_7, t);
    {
      ATerm x_19 = t;
      int y_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_36 = NULL;
          i_36 = t;
          {
            ATerm z_19 = t;
            int a_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = i_36;
                {
                  ATerm c_20 = t;
                  int d_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm e_20 = t;
                        int f_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm r_6 = NULL;
                            t = eval_config_0_0(t);
                            r_6 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), r_6);
                            t = r_6;
                            ;
                            LocalPopChoice(f_20);
                          }
                        else
                          {
                            t = e_20;
                          }
                      }
                      ;
                      LocalPopChoice(d_20);
                    }
                  else
                    {
                      t = c_20;
                      t = fetch_1_0(p_7, t);
                    }
                  t = i_36;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(a_20);
              }
            else
              {
                t = z_19;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm g_20 = t;
                  int h_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_6 = NULL;
                      t = eval_config_0_0(t);
                      z_6 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), z_6);
                      t = z_6;
                      ;
                      LocalPopChoice(h_20);
                    }
                  else
                    {
                      t = g_20;
                    }
                  t = i_36;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(y_19);
        }
      else
        {
          t = x_19;
          {
            ATerm i_20 = t;
            int j_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_7 (ATerm t)
                {
                  ATerm r_7 (ATerm t)
                  {
                    if(((b_36 != NULL) && (b_36 != t)))
                      _fail(t);
                    else
                      b_36 = t;
                    return(t);
                  }
                  t = Undefined_1_0(r_7, t);
                  return(t);
                }
                t = fetch_1_0(q_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_36)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_36)), term_k_20));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(j_20);
              }
            else
              {
                t = i_20;
              }
          }
        }
      c_36 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = c_36;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm t)
{
  ATerm l_36 = NULL;
  t = parse_options_1_0(o_106, t);
  l_36 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), l_36);
  t = l_36;
  t = q_106(t);
  {
    ATerm l_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_106, t);
        ;
        LocalPopChoice(o_20);
      }
    else
      {
        t = l_20;
        {
          ATerm p_20 = t;
          int q_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_106(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_20);
            }
          else
            {
              t = p_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = if_verbose2_1_0(d_8, t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_r_20;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_s_20;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL;
  m_36 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_7 = NULL;
        t = eval_config_0_0(t);
        f_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_7);
        t = f_7;
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
      }
    n_36 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, n_36));
    t = m_36;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t)
{
  ATerm s_7 (ATerm t)
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_105(t);
        ;
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        {
          ATerm a_21 = t;
          int c_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(c_21);
            }
          else
            {
              t = a_21;
              {
                ATerm d_21 = t;
                int g_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(g_21);
                  }
                else
                  {
                    t = d_21;
                    {
                      ATerm h_21 = t;
                      int i_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(v_7, a_8, b_8, t);
                          ;
                          LocalPopChoice(i_21);
                        }
                      else
                        {
                          t = h_21;
                          {
                            ATerm j_21 = t;
                            int m_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(m_21);
                              }
                            else
                              {
                                t = j_21;
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
  ATerm u_7 (ATerm t)
  {
    ATerm o_36 = NULL,p_36 = NULL,i_7 = NULL;
    o_36 = t;
    {
      ATerm n_21 = t;
      int o_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((p_36 != NULL) && (p_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_36 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_8, t);
          ;
          LocalPopChoice(o_21);
        }
      else
        {
          t = n_21;
          t = term_p_21;
          p_36 = t;
        }
      t = not_null(p_36);
      t = ReadFromFile_0_0(t);
      i_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_36, i_7);
      t = apply_strategy_1_0(x_105, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(s_7, z_105, t_7, u_7, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = _2_0(_id, h_8, t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Specification_1_0(i_8, t);
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      {
        ATerm o_7 = NULL;
        o_7 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_7), (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue))));
        t = o_7;
      }
    }
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = Cons_2_0(_id, j_8, t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = Cons_2_0(k_8, l_8, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = Strategies_1_0(m_8, t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = list_1_0(strategy_definition_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_8, _fail, default_usage_0_0, t);
  return(t);
}
