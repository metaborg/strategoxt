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
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
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
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
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
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_q_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_p_19;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_g_18;
ATerm term_w_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_c_17;
ATerm term_v_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_k_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_c_13;
ATerm term_b_12;
ATerm term_u_11;
ATerm term_u_2;
void init_constant_terms (void)
{
  ATprotect(&(term_u_2));
  term_u_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym__3, term_o_17, term_p_17, term_u_2);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm Let_2_0 (ATerm z_72 (ATerm), ATerm a_73 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm j_73 (ATerm), ATerm k_73 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm m_70 (ATerm), ATerm);
ATerm k_0 (ATerm);
ATerm m_0 (ATerm);
ATerm n_0 (ATerm);
ATerm o_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm build_term_expression_0_0 (ATerm);
ATerm Build_1_0 (ATerm h_73 (ATerm), ATerm);
ATerm As_2_0 (ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm);
ATerm Str_1_0 (ATerm t_69 (ATerm), ATerm);
ATerm Real_1_0 (ATerm s_69 (ATerm), ATerm);
ATerm Int_1_0 (ATerm r_69 (ATerm), ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm a_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm match_term_expression_0_0 (ATerm);
ATerm Match_1_0 (ATerm g_73 (ATerm), ATerm);
ATerm Thread_1_0 (ATerm n_74 (ATerm), ATerm);
ATerm All_1_0 (ATerm m_74 (ATerm), ATerm);
ATerm Some_1_0 (ATerm k_74 (ATerm), ATerm);
ATerm One_1_0 (ATerm l_74 (ATerm), ATerm);
ATerm Path_2_0 (ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm f_74 (ATerm), ATerm g_74 (ATerm), ATerm h_74 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm y_72 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm d_73 (ATerm), ATerm e_73 (ATerm), ATerm f_73 (ATerm), ATerm);
ATerm LGChoice_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm);
ATerm Not_1_0 (ATerm y_73 (ATerm), ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm w_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm o_2 (ATerm);
ATerm t_2 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm FunType_2_0 (ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm);
ATerm Var_1_0 (ATerm p_69 (ATerm), ATerm);
ATerm Op_2_0 (ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm);
ATerm ConstType_1_0 (ATerm c_69 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm h_3 (ATerm);
ATerm type_expression_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm list_1_0 (ATerm x_89 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm r_68 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm l_68 (ATerm), ATerm m_68 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm w_68 (ATerm), ATerm);
ATerm _2_0 (ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm j_102 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_105 (ATerm), ATerm);
ATerm o_27 (ATerm i_27, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm e_90 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm k_90 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm u_103 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm w_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm a_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_103 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm need_help_1_0 (ATerm j_106 (ATerm), ATerm);
ATerm map_1_0 (ATerm t_89 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm x_81 (ATerm), ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm y_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm l_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm m_108 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm parse_options_1_0 (ATerm l_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm iowrap_3_0 (ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm p_7 (ATerm);
ATerm u_7 (ATerm);
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
  t = term_u_2;
  t = whoami_0_0(t);
  l_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), l_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_0;
  return(t);
}
ATerm Let_2_0 (ATerm z_72 (ATerm), ATerm a_73 (ATerm), ATerm t)
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
  t = z_72(t);
  s_0 = t;
  t = r_0;
  t = a_73(t);
  z_0 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, s_0, z_0), p_0);
  return(t);
}
ATerm Scope_2_0 (ATerm j_73 (ATerm), ATerm k_73 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,r_1 = NULL,u_1 = NULL,v_1 = NULL,x_1 = NULL,y_1 = NULL;
  y_1 = t;
  if(match_cons(t, sym_Scope_2))
    {
      r_1 = ATgetArgument(t, 0);
      u_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_1);
  n_1 = t;
  t = r_1;
  t = j_73(t);
  v_1 = t;
  t = u_1;
  t = k_73(t);
  x_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, v_1, x_1), n_1);
  return(t);
}
ATerm BuildDefault_1_0 (ATerm m_70 (ATerm), ATerm t)
{
  ATerm c_2 = NULL,e_2 = NULL,f_2 = NULL,h_2 = NULL;
  h_2 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      e_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_2);
  c_2 = t;
  t = e_2;
  t = m_70(t);
  f_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, f_2), c_2);
  return(t);
}
ATerm k_0 (ATerm t)
{
  ATerm k_2 = NULL;
  k_2 = t;
  t = SSL_is_string(k_2);
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm l_2 = NULL;
  l_2 = t;
  t = SSL_is_int(l_2);
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm m_2 = NULL;
  m_2 = t;
  t = SSL_is_real(m_2);
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm n_2 = NULL;
  n_2 = t;
  t = SSL_is_string(n_2);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm s_2 = NULL;
  s_2 = t;
  t = SSL_is_string(s_2);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = list_1_0(build_term_expression_0_0, t);
  return(t);
}
ATerm build_term_expression_0_0 (ATerm t)
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(k_0, t);
      ;
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      {
        ATerm z_7 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Int_1_0(m_0, t);
            ;
            LocalPopChoice(b_8);
          }
        else
          {
            t = z_7;
            {
              ATerm c_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Real_1_0(n_0, t);
                  ;
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = c_8;
                  {
                    ATerm e_8 = t;
                    int f_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Str_1_0(o_0, t);
                        ;
                        LocalPopChoice(f_8);
                      }
                    else
                      {
                        t = e_8;
                        {
                          ATerm h_8 = t;
                          int i_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Op_2_0(t_0, v_0, t);
                              ;
                              LocalPopChoice(i_8);
                            }
                          else
                            {
                              t = h_8;
                              {
                                ATerm j_8 = t;
                                int k_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1_0(build_term_expression_0_0, t);
                                    ;
                                    LocalPopChoice(k_8);
                                  }
                                else
                                  {
                                    t = j_8;
                                    {
                                      ATerm c_0 = NULL;
                                      c_0 = t;
                                      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_0), (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue))));
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
  return(t);
}
ATerm Build_1_0 (ATerm h_73 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
  y_2 = t;
  if(match_cons(t, sym_Build_1))
    {
      w_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_2);
  v_2 = t;
  t = w_2;
  t = h_73(t);
  x_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, x_2), v_2);
  return(t);
}
ATerm As_2_0 (ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL;
  j_3 = t;
  if(match_cons(t, sym_As_2))
    {
      e_3 = ATgetArgument(t, 0);
      f_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_3);
  d_3 = t;
  t = e_3;
  t = g_70(t);
  g_3 = t;
  t = f_3;
  t = h_70(t);
  i_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, g_3, i_3), d_3);
  return(t);
}
ATerm Str_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm v_3 = NULL,j_4 = NULL,b_5 = NULL,n_5 = NULL;
  n_5 = t;
  if(match_cons(t, sym_Str_1))
    {
      j_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_5);
  v_3 = t;
  t = j_4;
  t = t_69(t);
  b_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, b_5), v_3);
  return(t);
}
ATerm Real_1_0 (ATerm s_69 (ATerm), ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,e_6 = NULL,k_6 = NULL;
  k_6 = t;
  if(match_cons(t, sym_Real_1))
    {
      c_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_6);
  b_6 = t;
  t = c_6;
  t = s_69(t);
  e_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, e_6), b_6);
  return(t);
}
ATerm Int_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
  i_7 = t;
  if(match_cons(t, sym_Int_1))
    {
      g_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_7);
  y_6 = t;
  t = g_7;
  t = r_69(t);
  h_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, h_7), y_6);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm q_7 = NULL;
  q_7 = t;
  t = SSL_is_string(q_7);
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm r_7 = NULL;
  r_7 = t;
  t = SSL_is_int(r_7);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm s_7 = NULL;
  s_7 = t;
  t = SSL_is_real(s_7);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm t_7 = NULL;
  t_7 = t;
  t = SSL_is_string(t_7);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm w_7 = NULL;
  w_7 = t;
  t = SSL_is_string(w_7);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = list_1_0(match_term_expression_0_0, t);
  return(t);
}
ATerm match_term_expression_0_0 (ATerm t)
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      ;
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      {
        ATerm o_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(w_0, t);
            ;
            LocalPopChoice(p_8);
          }
        else
          {
            t = o_8;
            {
              ATerm q_8 = t;
              int r_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1_0(x_0, t);
                  ;
                  LocalPopChoice(r_8);
                }
              else
                {
                  t = q_8;
                  {
                    ATerm s_8 = t;
                    int t_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1_0(y_0, t);
                        ;
                        LocalPopChoice(t_8);
                      }
                    else
                      {
                        t = s_8;
                        {
                          ATerm u_8 = t;
                          int v_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1_0(a_1, t);
                              ;
                              LocalPopChoice(v_8);
                            }
                          else
                            {
                              t = u_8;
                              {
                                ATerm x_8 = t;
                                int y_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Op_2_0(d_1, e_1, t);
                                    ;
                                    LocalPopChoice(y_8);
                                  }
                                else
                                  {
                                    t = x_8;
                                    {
                                      ATerm z_8 = t;
                                      int a_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = As_2_0(match_term_expression_0_0, match_term_expression_0_0, t);
                                          ;
                                          LocalPopChoice(a_9);
                                        }
                                      else
                                        {
                                          t = z_8;
                                          {
                                            ATerm u_0 = NULL;
                                            u_0 = t;
                                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_0), (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue))));
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
  return(t);
}
ATerm Match_1_0 (ATerm g_73 (ATerm), ATerm t)
{
  ATerm g_8 = NULL,n_8 = NULL,w_8 = NULL,f_9 = NULL;
  f_9 = t;
  if(match_cons(t, sym_Match_1))
    {
      n_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_9);
  g_8 = t;
  t = n_8;
  t = g_73(t);
  w_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, w_8), g_8);
  return(t);
}
ATerm Thread_1_0 (ATerm n_74 (ATerm), ATerm t)
{
  ATerm l_9 = NULL,r_9 = NULL,w_9 = NULL,x_9 = NULL;
  x_9 = t;
  if(match_cons(t, sym_Thread_1))
    {
      r_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_9);
  l_9 = t;
  t = r_9;
  t = n_74(t);
  w_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, w_9), l_9);
  return(t);
}
ATerm All_1_0 (ATerm m_74 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,h_10 = NULL,n_10 = NULL;
  n_10 = t;
  if(match_cons(t, sym_All_1))
    {
      f_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_10);
  e_10 = t;
  t = f_10;
  t = m_74(t);
  h_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, h_10), e_10);
  return(t);
}
ATerm Some_1_0 (ATerm k_74 (ATerm), ATerm t)
{
  ATerm c_11 = NULL,f_11 = NULL,g_11 = NULL,l_11 = NULL;
  l_11 = t;
  if(match_cons(t, sym_Some_1))
    {
      f_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_11);
  c_11 = t;
  t = f_11;
  t = k_74(t);
  g_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, g_11), c_11);
  return(t);
}
ATerm One_1_0 (ATerm l_74 (ATerm), ATerm t)
{
  ATerm o_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
  s_11 = t;
  if(match_cons(t, sym_One_1))
    {
      q_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_11);
  o_11 = t;
  t = q_11;
  t = l_74(t);
  r_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, r_11), o_11);
  return(t);
}
ATerm Path_2_0 (ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,c_12 = NULL,f_12 = NULL,g_12 = NULL,i_12 = NULL;
  i_12 = t;
  if(match_cons(t, sym_Path_2))
    {
      a_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_12);
  z_11 = t;
  t = a_12;
  t = i_74(t);
  f_12 = t;
  t = c_12;
  t = j_74(t);
  g_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, f_12, g_12), z_11);
  return(t);
}
ATerm Rec_2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,r_12 = NULL,s_12 = NULL,x_12 = NULL,y_12 = NULL;
  y_12 = t;
  if(match_cons(t, sym_Rec_2))
    {
      o_12 = ATgetArgument(t, 0);
      r_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_12);
  n_12 = t;
  t = o_12;
  t = w_73(t);
  s_12 = t;
  t = r_12;
  t = x_73(t);
  x_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, s_12, x_12), n_12);
  return(t);
}
ATerm PrimT_3_0 (ATerm f_74 (ATerm), ATerm g_74 (ATerm), ATerm h_74 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,d_13 = NULL,e_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,s_13 = NULL;
  s_13 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      d_13 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
      j_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_13);
  b_13 = t;
  t = d_13;
  t = f_74(t);
  k_13 = t;
  t = e_13;
  t = g_74(t);
  l_13 = t;
  t = j_13;
  t = h_74(t);
  m_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, k_13, l_13, m_13), b_13);
  return(t);
}
ATerm SVar_1_0 (ATerm y_72 (ATerm), ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,k_14 = NULL,l_14 = NULL;
  l_14 = t;
  if(match_cons(t, sym_SVar_1))
    {
      f_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_14);
  e_14 = t;
  t = f_14;
  t = y_72(t);
  k_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, k_14), e_14);
  return(t);
}
ATerm CallT_3_0 (ATerm d_73 (ATerm), ATerm e_73 (ATerm), ATerm f_73 (ATerm), ATerm t)
{
  ATerm s_14 = NULL,b_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,j_15 = NULL,o_15 = NULL,v_15 = NULL;
  v_15 = t;
  if(match_cons(t, sym_CallT_3))
    {
      b_15 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
      g_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_15);
  s_14 = t;
  t = b_15;
  t = d_73(t);
  h_15 = t;
  t = f_15;
  t = e_73(t);
  j_15 = t;
  t = g_15;
  t = f_73(t);
  o_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, h_15, j_15, o_15), s_14);
  return(t);
}
ATerm LGChoice_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,h_16 = NULL,i_16 = NULL,p_16 = NULL,y_16 = NULL;
  y_16 = t;
  if(match_cons(t, sym_LGChoice_2))
    {
      f_16 = ATgetArgument(t, 0);
      h_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_16);
  e_16 = t;
  t = f_16;
  t = r_73(t);
  i_16 = t;
  t = h_16;
  t = s_73(t);
  p_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, i_16, p_16), e_16);
  return(t);
}
ATerm GChoice_2_0 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm t)
{
  ATerm b_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,l_17 = NULL,m_17 = NULL;
  m_17 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      h_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_17);
  b_17 = t;
  t = h_17;
  t = r_72(t);
  j_17 = t;
  t = i_17;
  t = s_72(t);
  l_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, j_17, l_17), b_17);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,y_17 = NULL,z_17 = NULL,c_18 = NULL,e_18 = NULL,f_18 = NULL;
  f_18 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      u_17 = ATgetArgument(t, 0);
      v_17 = ATgetArgument(t, 1);
      y_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_18);
  t_17 = t;
  t = u_17;
  t = t_73(t);
  z_17 = t;
  t = v_17;
  t = u_73(t);
  c_18 = t;
  t = y_17;
  t = v_73(t);
  e_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, z_17, c_18, e_18), t_17);
  return(t);
}
ATerm LChoice_2_0 (ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
  t_18 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      l_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_18);
  k_18 = t;
  t = l_18;
  t = p_73(t);
  r_18 = t;
  t = q_18;
  t = q_73(t);
  s_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, r_18, s_18), k_18);
  return(t);
}
ATerm Choice_2_0 (ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
  g_19 = t;
  if(match_cons(t, sym_Choice_2))
    {
      c_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_19);
  b_19 = t;
  t = c_19;
  t = n_72(t);
  e_19 = t;
  t = d_19;
  t = o_72(t);
  f_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, e_19, f_19), b_19);
  return(t);
}
ATerm Seq_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,k_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
  o_20 = t;
  if(match_cons(t, sym_Seq_2))
    {
      h_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_20);
  g_20 = t;
  t = h_20;
  t = n_73(t);
  m_20 = t;
  t = k_20;
  t = o_73(t);
  n_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, m_20, n_20), g_20);
  return(t);
}
ATerm Not_1_0 (ATerm y_73 (ATerm), ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
  b_21 = t;
  if(match_cons(t, sym_Not_1))
    {
      z_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_21);
  y_20 = t;
  t = z_20;
  t = y_73(t);
  a_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, a_21), y_20);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = SVar_1_0(j_1, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = list_1_0(strategy_expression_0_0, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = list_1_0(build_term_expression_0_0, t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  t = SSL_is_string(l_21);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm m_21 = NULL;
  m_21 = t;
  t = SSL_is_string(m_21);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = list_1_0(strategy_expression_0_0, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = list_1_0(build_term_expression_0_0, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm n_21 = NULL;
  n_21 = t;
  t = SSL_is_string(n_21);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm s_21 = NULL;
  s_21 = t;
  t = SSL_is_int(s_21);
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = list_1_0(t_1, t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_22 = NULL;
      a_22 = t;
      t = SSL_is_string(a_22);
      ;
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      t = list_1_0(w_1, t);
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm b_22 = NULL;
  b_22 = t;
  t = SSL_is_int(b_22);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = list_1_0(a_2, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = SDefT_4_0(b_2, d_2, g_2, strategy_expression_0_0, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm c_22 = NULL;
  c_22 = t;
  t = SSL_is_string(c_22);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = list_1_0(i_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = list_1_0(o_2, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = VarDec_2_0(j_2, type_expression_0_0, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm e_22 = NULL;
  e_22 = t;
  t = SSL_is_string(e_22);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = VarDec_2_0(t_2, type_expression_0_0, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm f_22 = NULL;
  f_22 = t;
  t = SSL_is_string(f_22);
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      ;
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            ;
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            {
              ATerm i_9 = t;
              int j_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1_0(strategy_expression_0_0, t);
                  ;
                  LocalPopChoice(j_9);
                }
              else
                {
                  t = i_9;
                  {
                    ATerm k_9 = t;
                    int m_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Seq_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                        ;
                        LocalPopChoice(m_9);
                      }
                    else
                      {
                        t = k_9;
                        {
                          ATerm n_9 = t;
                          int o_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
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
                                    t = LChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                    ;
                                    LocalPopChoice(q_9);
                                  }
                                else
                                  {
                                    t = p_9;
                                    {
                                      ATerm s_9 = t;
                                      int t_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(strategy_expression_0_0, strategy_expression_0_0, strategy_expression_0_0, t);
                                          ;
                                          LocalPopChoice(t_9);
                                        }
                                      else
                                        {
                                          t = s_9;
                                          {
                                            ATerm u_9 = t;
                                            int v_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                ;
                                                LocalPopChoice(v_9);
                                              }
                                            else
                                              {
                                                t = u_9;
                                                {
                                                  ATerm y_9 = t;
                                                  int z_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = LGChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                      ;
                                                      LocalPopChoice(z_9);
                                                    }
                                                  else
                                                    {
                                                      t = y_9;
                                                      {
                                                        ATerm a_10 = t;
                                                        int b_10 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = CallT_3_0(g_1, h_1, i_1, t);
                                                            ;
                                                            LocalPopChoice(b_10);
                                                          }
                                                        else
                                                          {
                                                            t = a_10;
                                                            {
                                                              ATerm c_10 = t;
                                                              int d_10 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = PrimT_3_0(l_1, m_1, o_1, t);
                                                                  ;
                                                                  LocalPopChoice(d_10);
                                                                }
                                                              else
                                                                {
                                                                  t = c_10;
                                                                  {
                                                                    ATerm g_10 = t;
                                                                    int i_10 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2_0(p_1, strategy_expression_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(i_10);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_10;
                                                                        {
                                                                          ATerm j_10 = t;
                                                                          int k_10 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2_0(q_1, strategy_expression_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(k_10);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_10;
                                                                              {
                                                                                ATerm l_10 = t;
                                                                                int m_10 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = One_1_0(strategy_expression_0_0, t);
                                                                                    ;
                                                                                    LocalPopChoice(m_10);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_10;
                                                                                    {
                                                                                      ATerm o_10 = t;
                                                                                      int p_10 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Some_1_0(strategy_expression_0_0, t);
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
                                                                                                t = All_1_0(strategy_expression_0_0, t);
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
                                                                                                      t = Thread_1_0(strategy_expression_0_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(t_10);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = s_10;
                                                                                                      {
                                                                                                        ATerm u_10 = t;
                                                                                                        int v_10 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Match_1_0(match_term_expression_0_0, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(v_10);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = u_10;
                                                                                                            {
                                                                                                              ATerm w_10 = t;
                                                                                                              int x_10 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Build_1_0(build_term_expression_0_0, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(x_10);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = w_10;
                                                                                                                  {
                                                                                                                    ATerm y_10 = t;
                                                                                                                    int z_10 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Scope_2_0(s_1, strategy_expression_0_0, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(z_10);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = y_10;
                                                                                                                        {
                                                                                                                          ATerm a_11 = t;
                                                                                                                          int b_11 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Let_2_0(z_1, strategy_expression_0_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(b_11);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = a_11;
                                                                                                                              {
                                                                                                                                ATerm c_1 = NULL;
                                                                                                                                c_1 = t;
                                                                                                                                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_1), (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue))));
                                                                                                                                t = c_1;
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
ATerm FunType_2_0 (ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm t)
{
  ATerm m_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  u_22 = t;
  if(match_cons(t, sym_FunType_2))
    {
      q_22 = ATgetArgument(t, 0);
      r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_22);
  m_22 = t;
  t = q_22;
  t = d_69(t);
  s_22 = t;
  t = r_22;
  t = e_69(t);
  t_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunType_2, s_22, t_22), m_22);
  return(t);
}
ATerm Var_1_0 (ATerm p_69 (ATerm), ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  a_23 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_23);
  x_22 = t;
  t = y_22;
  t = p_69(t);
  z_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, z_22), x_22);
  return(t);
}
ATerm Op_2_0 (ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
  i_23 = t;
  if(match_cons(t, sym_Op_2))
    {
      e_23 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_23);
  d_23 = t;
  t = e_23;
  t = v_69(t);
  g_23 = t;
  t = f_23;
  t = w_69(t);
  h_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, g_23, h_23), d_23);
  return(t);
}
ATerm ConstType_1_0 (ATerm c_69 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  o_23 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      m_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_23);
  l_23 = t;
  t = m_23;
  t = c_69(t);
  n_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ConstType_1, n_23), l_23);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm r_23 = NULL;
  r_23 = t;
  t = SSL_is_string(r_23);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm t_23 = NULL;
  t_23 = t;
  t = SSL_is_string(t_23);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = list_1_0(type_expression_0_0, t);
  return(t);
}
ATerm type_expression_0_0 (ATerm t)
{
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_3 (ATerm t)
            {
              t = list_1_0(z_2, t);
              return(t);
            }
            t = Op_2_0(a_3, b_3, t);
            ;
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            t = Var_1_0(c_3, t);
          }
        return(t);
      }
      t = ConstType_1_0(z_2, t);
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      t = FunType_2_0(h_3, type_expression_0_0, t);
    }
  return(t);
}
ATerm VarDec_2_0 (ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  b_24 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_24);
  w_23 = t;
  t = x_23;
  t = k_75(t);
  z_23 = t;
  t = y_23;
  t = l_75(t);
  a_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, z_23, a_24), w_23);
  return(t);
}
ATerm SDefT_4_0 (ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  n_24 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      f_24 = ATgetArgument(t, 0);
      g_24 = ATgetArgument(t, 1);
      h_24 = ATgetArgument(t, 2);
      i_24 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_24);
  e_24 = t;
  t = f_24;
  t = r_75(t);
  j_24 = t;
  t = g_24;
  t = s_75(t);
  k_24 = t;
  t = h_24;
  t = t_75(t);
  l_24 = t;
  t = i_24;
  t = u_75(t);
  m_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, j_24, k_24, l_24, m_24), e_24);
  return(t);
}
ATerm SDef_3_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm t)
{
  ATerm q_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  z_24 = t;
  if(match_cons(t, sym_SDef_3))
    {
      t_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
      v_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_24);
  q_24 = t;
  t = t_24;
  t = o_75(t);
  w_24 = t;
  t = u_24;
  t = p_75(t);
  x_24 = t;
  t = v_24;
  t = q_75(t);
  y_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, w_24, x_24, y_24), q_24);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm c_25 = NULL;
  c_25 = t;
  t = SSL_is_string(c_25);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = list_1_0(o_3, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = VarDec_2_0(p_3, type_expression_0_0, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  t = SSL_is_string(d_25);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  t = SSL_is_string(e_25);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = list_1_0(t_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = list_1_0(w_3, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = VarDec_2_0(u_3, type_expression_0_0, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm f_25 = NULL;
  f_25 = t;
  t = SSL_is_string(f_25);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = VarDec_2_0(x_3, type_expression_0_0, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  t = SSL_is_string(g_25);
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3_0(m_3, n_3, strategy_expression_0_0, t);
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(q_3, r_3, s_3, strategy_expression_0_0, t);
            ;
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            {
              ATerm f_1 = NULL;
              f_1 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_1), (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue))));
              t = f_1;
            }
          }
      }
    }
  return(t);
}
ATerm list_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm h_25 (ATerm t)
  {
    ATerm p_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(t_11);
      }
    else
      {
        t = p_11;
        t = Cons_2_0(x_89, h_25, t);
      }
    return(t);
  }
  t = h_25(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm r_68 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
  l_25 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      j_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_25);
  i_25 = t;
  t = j_25;
  t = r_68(t);
  k_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, k_25), i_25);
  return(t);
}
ATerm Cons_2_0 (ATerm l_68 (ATerm), ATerm m_68 (ATerm), ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  t_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_25 = ATgetFirst((ATermList) t);
      q_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_25);
  o_25 = t;
  t = p_25;
  t = l_68(t);
  r_25 = t;
  t = q_25;
  t = m_68(t);
  s_25 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(s_25), r_25), o_25);
  return(t);
}
ATerm Specification_1_0 (ATerm w_68 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  z_25 = t;
  if(match_cons(t, sym_Specification_1))
    {
      x_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_25);
  w_25 = t;
  t = x_25;
  t = w_68(t);
  y_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, y_25), w_25);
  return(t);
}
ATerm _2_0 (ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
  h_26 = t;
  if(match_cons(t, sym__2))
    {
      d_26 = ATgetArgument(t, 0);
      e_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_26);
  c_26 = t;
  t = d_26;
  t = w_63(t);
  f_26 = t;
  t = e_26;
  t = x_63(t);
  g_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, f_26, g_26), c_26);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
  if(match_cons(t, sym__2))
    {
      k_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_26, term_u_11);
  t = open_stream_0_0(t);
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_26, l_26);
  t = j_102(t);
  t = fclose_0_0(t);
  t = l_26;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = fetch_1_0(d_4, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = WriteToFile_1_0(e_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_11 = ATgetArgument(t, 0);
      if(match_cons(v_11, sym_Stream_1))
        {
          p_26 = ATgetArgument(v_11, 0);
        }
      else
        _fail(t);
      q_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(p_26, q_26);
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_26);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = WriteToFile_1_0(g_4, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_11 = ATgetArgument(t, 0);
      if(match_cons(w_11, sym_Stream_1))
        {
          s_26 = ATgetArgument(w_11, 0);
        }
      else
        _fail(t);
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(s_26, t_26);
  u_26 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), u_26);
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_26);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL;
  n_26 = t;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm x_11 = t;
      int y_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((o_26 != NULL) && (o_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_3, t);
          ;
          LocalPopChoice(y_11);
        }
      else
        {
          t = x_11;
          t = term_b_12;
          if(((o_26 != NULL) && (o_26 != t)))
            _fail(t);
          else
            o_26 = t;
        }
      return(t);
    }
    t = _2_0(y_3, _id, t);
    t = n_26;
    {
      ATerm a_4 (ATerm t)
      {
        ATerm k_1 = NULL;
        k_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_26), k_1);
        return(t);
      }
      t = _2_0(_id, a_4, t);
      {
        ATerm d_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(b_4, c_4, t);
            ;
            LocalPopChoice(e_12);
          }
        else
          {
            t = d_12;
            t = _2_0(_id, f_4, t);
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
ATerm apply_strategy_1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL;
  w_26 = t;
  t = dtime_0_0(t);
  t = w_26;
  t = l_105(t);
  x_26 = t;
  t = dtime_0_0(t);
  y_26 = t;
  t = x_26;
  if(match_cons(t, sym__2))
    {
      z_26 = ATgetArgument(t, 0);
      a_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_26), (ATerm) ATmakeAppl(sym_Runtime_1, y_26)), a_27);
  return(t);
}
ATerm o_27 (ATerm i_27, ATerm t)
{
  t = SSL_fclose(i_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL;
  m_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_27 = ATgetArgument(t, 0);
      {
        ATerm h_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_27);
            ;
            LocalPopChoice(j_12);
          }
        else
          {
            t = h_12;
            t = o_27(m_27, t);
          }
      }
    }
  else
    {
      t = o_27(m_27, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_27 = NULL;
  t = SSL_stdin_stream();
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_27 = NULL;
  t = SSL_stdout_stream();
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_27 = NULL;
  t = SSL_stderr_stream();
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_27);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm z_27 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      z_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_27;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm d_28 = NULL;
  d_28 = t;
  t = SSL_is_string(d_28);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_12 = ATgetArgument(t, 0);
      ATerm l_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_2 = NULL,q_2 = NULL;
        p_2 = t;
        t = SSL_explode_term(p_2);
        if(match_cons(t, sym__2))
          {
            ATerm q_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_12) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_12 = ATgetArgument(t, 1);
              if(((ATgetType(t_12) == AT_LIST) && !(ATisEmpty(t_12))))
                {
                  q_2 = ATgetFirst((ATermList) t_12);
                  {
                    ATerm u_12 = (ATerm) ATgetNext((ATermList) t_12);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = q_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = q_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = q_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = m_12;
        {
          ATerm v_12 = t;
          int w_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
              t = _2_0(i_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_27 = ATgetArgument(t, 0);
                  x_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(w_27, x_27);
              y_27 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, y_27);
              ;
              LocalPopChoice(w_12);
            }
          else
            {
              t = v_12;
              {
                ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
                t = _2_0(k_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_28 = ATgetArgument(t, 0);
                    b_28 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(a_28, b_28);
                c_28 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, c_28);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_28 = NULL;
      h_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_28, term_c_13);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      {
        ATerm r_2 = NULL;
        r_2 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = r_2;
        _fail(t);
      }
    }
  e_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(g_28);
  f_28 = t;
  t = e_28;
  t = fclose_0_0(t);
  t = f_28;
  return(t);
}
ATerm fetch_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm m_28 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(e_90, _id, t);
        ;
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = Cons_2_0(_id, m_28, t);
      }
    return(t);
  }
  t = m_28(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      {
        ATerm p_28 = NULL,q_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_28 = ATgetFirst((ATermList) t);
            q_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_28;
        {
          ATerm l_4 (ATerm t)
          {
            t = q_28;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(l_4, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm k_90 (ATerm), ATerm t)
{
  ATerm w_28 (ATerm t)
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_28, t);
        ;
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_90(t);
      }
    return(t);
  }
  t = w_28(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm z_28 = NULL;
  z_28 = t;
  t = SSL_explode_string(z_28);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  t = SSL_explode_string(a_29);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm y_28 = NULL;
  t = _2_0(m_4, n_4, t);
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_29 = NULL,d_29 = NULL;
        if(match_cons(t, sym__2))
          {
            c_29 = ATgetArgument(t, 0);
            d_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_29;
        {
          ATerm o_4 (ATerm t)
          {
            t = d_29;
            return(t);
          }
          t = at_end_1_0(o_4, t);
        }
        ;
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        {
          ATerm k_3 = NULL,l_3 = NULL;
          k_3 = t;
          t = SSL_explode_term(k_3);
          if(match_cons(t, sym__2))
            {
              ATerm r_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_13) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              l_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_3;
          t = concat_0_0(t);
        }
      }
    y_28 = t;
    t = SSL_implode_string(y_28);
  }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_29 = NULL;
      l_29 = t;
      t = SSL_is_string(l_29);
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
            t = map_1_0(q_4, t);
            ;
            LocalPopChoice(y_13);
          }
        else
          {
            t = x_13;
            {
              ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
              p_29 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_29 = ATgetArgument(t, 0);
                  t = q_29;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_29 = ATgetArgument(t, 0);
                      t = q_29;
                      {
                        ATerm z_13 = t;
                        int a_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_29);
                            {
                              ATerm b_14 = t;
                              int c_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_4 = NULL;
                                  t = eval_config_0_0(t);
                                  h_4 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_29, h_4);
                                  t = h_4;
                                  ;
                                  LocalPopChoice(c_14);
                                }
                              else
                                {
                                  t = b_14;
                                }
                            }
                            ;
                            LocalPopChoice(a_14);
                          }
                        else
                          {
                            t = z_13;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_29), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = q_29;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_29 = NULL,w_29 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_29 = ATgetArgument(t, 0);
                          r_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_29;
                      t = eval_config_0_0(t);
                      v_29 = t;
                      t = r_29;
                      t = eval_config_0_0(t);
                      w_29 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_29, w_29);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_103 (ATerm), ATerm t)
{
  ATerm d_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_30 = NULL,d_30 = NULL;
      b_30 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 = NULL;
            t = eval_config_0_0(t);
            p_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_4);
            t = p_4;
            ;
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
          }
        d_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_30, term_j_14);
        t = geq_0_0(t);
        t = b_30;
        t = u_103(t);
      }
      ;
      LocalPopChoice(g_14);
    }
  else
    {
      t = d_14;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm f_30 = NULL;
  f_30 = t;
  if(match_string(t, "-k"))
    {
      t = f_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_30;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL;
  g_30 = t;
  t = SSL_string_to_int(g_30);
  h_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), h_30);
  t = g_30;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_m_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, w_4, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm j_30 = NULL;
  j_30 = t;
  if(match_string(t, "-S"))
    {
      t = j_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_30;
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_o_14;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_p_14;
  return(t);
}
ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL;
  k_30 = t;
  t = SSL_string_to_int(k_30);
  l_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_30);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_30);
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_q_14;
  return(t);
}
ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_r_14;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_t_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_4, a_5, c_5, t);
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
            t = ArgOption_3_0(d_5, e_5, f_5, t);
            ;
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
            t = Option_3_0(g_5, h_5, i_5, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_30 = NULL;
      t = term_u_2;
      t = d_0(t);
      q_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_14, term_z_14, q_30);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm t_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_30 = ATgetFirst((ATermList) t);
          p_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_30;
      t = a_0(t);
      t = term_u_2;
      t = b_0(t);
      t_30 = t;
      t = (ATerm) ATinsert(CheckATermList(p_30), t_30);
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm v_30 = NULL;
  v_30 = t;
  if(match_string(t, "-o"))
    {
      t = v_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_30;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm w_30 = NULL;
  w_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), w_30);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_30);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_a_15;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_5, k_5, l_5, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  if(match_cons(t, sym__3))
    {
      z_30 = ATgetArgument(t, 0);
      a_31 = ATgetArgument(t, 1);
      b_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_30, a_31);
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_15 = ATgetArgument(t, 0);
            ATerm i_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_30, a_31);
        ;
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
        t = (ATerm) ATempty;
      }
    c_31 = t;
    t = SSL_table_put(z_30, a_31, (ATerm) ATinsert(CheckATermList(c_31), b_31));
    t = (ATerm) ATmakeAppl(sym__3, z_30, a_31, b_31);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,p_31 = NULL,q_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_31 = NULL;
      t = term_u_2;
      t = j_0(t);
      r_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_14, term_z_14, r_31);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm v_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_31 = ATgetFirst((ATermList) t);
          l_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_31 = ATgetFirst((ATermList) t);
          q_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_31;
      t = h_0(t);
      t = p_31;
      t = i_0(t);
      v_31 = t;
      t = (ATerm) ATinsert(CheckATermList(q_31), v_31);
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm x_31 = NULL;
  x_31 = t;
  if(match_string(t, "-i"))
    {
      t = x_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_31;
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm y_31 = NULL;
  y_31 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), y_31);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_31);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, p_5, q_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_2;
  t = whoami_0_0(t);
  z_31 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), z_31));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_4 = NULL;
        t = eval_config_0_0(t);
        t_4 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_4);
        t = t_4;
        ;
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm t)
{
  ATerm n_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_95(t);
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = n_15;
      {
        ATerm c_32 = NULL,f_32 = NULL,i_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_32 = ATgetFirst((ATermList) t);
            f_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_32;
        t = foldr_2_0(v_95, w_95, t);
        i_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_32, i_32);
        t = w_95(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_n_14;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL;
  if(match_cons(t, sym__2))
    {
      y_4 = ATgetArgument(t, 0);
      z_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(y_4, z_4);
        ;
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
        t = SSL_addr(y_4, z_4);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_32 = NULL,u_4 = NULL,v_4 = NULL;
  t = times_0_0(t);
  u_4 = t;
  t = SSL_explode_term(u_4);
  if(match_cons(t, sym__2))
    {
      ATerm s_15 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4;
  t = foldr_2_0(r_5, t_5, t);
  l_32 = t;
  t = SSL_TicksToSeconds(l_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  w_32 = t;
  if(match_cons(t, sym__2))
    {
      x_32 = ATgetArgument(t, 0);
      y_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_32;
        if((x_32 != t))
          {
            _fail(t);
          }
        t = w_32;
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
        t = w_32;
        {
          ATerm w_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_32, y_32);
              ;
              LocalPopChoice(x_15);
            }
          else
            {
              t = w_15;
              t = SSL_gtr(x_32, y_32);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_32, y_32);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_103 (ATerm), ATerm t)
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_33 = NULL,d_33 = NULL;
      b_33 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm a_16 = t;
        int b_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 = NULL;
            t = eval_config_0_0(t);
            o_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_5);
            t = o_5;
            ;
            LocalPopChoice(b_16);
          }
        else
          {
            t = a_16;
          }
        d_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_33, term_c_16);
        t = geq_0_0(t);
        t = b_33;
        t = t_103(t);
      }
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL;
  t = run_time_0_0(t);
  f_33 = t;
  t = term_u_2;
  t = whoami_0_0(t);
  g_33 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), f_33), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), g_33));
  t = (ATerm) ATmakeAppl(sym__2, term_d_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_16), f_33), term_g_16), g_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
      {
        ATerm m_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(n_16);
          }
        else
          {
            t = m_16;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_106 (ATerm), ATerm t)
{
  ATerm o_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm r_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = NULL;
            t = eval_config_0_0(t);
            s_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_5);
            t = s_5;
            ;
            LocalPopChoice(s_16);
          }
        else
          {
            t = r_16;
          }
      }
      ;
      LocalPopChoice(q_16);
    }
  else
    {
      t = o_16;
      t = fetch_1_0(v_5, t);
    }
  t = j_106(t);
  return(t);
}
ATerm map_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm h_33 (ATerm t)
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        t = Cons_2_0(t_89, h_33, t);
      }
    return(t);
  }
  t = h_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_33 = ATgetFirst((ATermList) t);
      k_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_33 = NULL,p_33 = NULL;
        t = k_33;
        t = g_0(t);
        o_33 = t;
        t = j_33;
        t = f_0(t);
        p_33 = t;
        t = k_33;
        {
          ATerm x_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(o_33), p_33);
            return(t);
          }
          t = reverse_acc_2_0(f_0, x_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_2;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm x_81 (ATerm), ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
  t_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_33);
  q_33 = t;
  t = r_33;
  t = x_81(t);
  s_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, s_33), q_33);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm w_33 = NULL;
  w_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_33), term_v_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 = NULL;
            t = eval_config_0_0(t);
            w_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_5);
            t = w_5;
            ;
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
          }
      }
      ;
      LocalPopChoice(x_16);
    }
  else
    {
      t = w_16;
      t = fetch_1_0(y_5, t);
    }
  t = term_c_17;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, z_5, t);
  t = map_1_0(a_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm y_81 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
  a_34 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      y_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_34);
  x_33 = t;
  t = y_33;
  t = y_81(t);
  z_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, z_33), x_33);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL;
  e_34 = t;
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_17 = ATgetFirst((ATermList) t);
                ATerm g_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_34;
          }
        ;
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        t = (ATerm) ATinsert(ATempty, e_34);
      }
    f_34 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), f_34);
    t = e_34;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm k_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_6 = NULL;
        t = eval_config_0_0(t);
        f_6 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_6);
        t = f_6;
        ;
        LocalPopChoice(n_17);
      }
    else
      {
        t = k_17;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_17;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_r_17;
  return(t);
}
ATerm i_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_s_17;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_w_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_6, g_6, h_6, t);
      ;
      LocalPopChoice(a_18);
    }
  else
    {
      t = x_17;
      t = Option_3_0(i_6, j_6, l_6, t);
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm l_34 = NULL;
  l_34 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_34);
  t = (ATerm) ATmakeAppl(sym_Program_1, l_34);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm k_34 = NULL;
  k_34 = t;
  {
    ATerm b_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_18;
        t = m_108(t);
        ;
        LocalPopChoice(d_18);
      }
    else
      {
        t = b_18;
      }
    t = k_34;
    {
      ATerm n_6 (ATerm t)
      {
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_18 = t;
            int m_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(m_18);
              }
            else
              {
                t = j_18;
                t = m_108(t);
                t = Cons_2_0(_id, n_6, t);
              }
            ;
            LocalPopChoice(i_18);
          }
        else
          {
            t = h_18;
            {
              ATerm n_34 = NULL,o_34 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_34 = ATgetFirst((ATermList) t);
                  o_34 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_34), (ATerm) ATmakeAppl(sym_Undefined_1, n_34));
            }
          }
        return(t);
      }
      t = Cons_2_0(m_6, n_6, t);
    }
  }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm y_34 = NULL;
  y_34 = t;
  if(match_string(t, "--help"))
    {
      t = y_34;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_34;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_34;
        }
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_n_18;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_o_18;
  return(t);
}
ATerm s_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_108 (ATerm), ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = v_34;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm p_18 = t;
      int u_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_108(t);
          ;
          LocalPopChoice(u_18);
        }
      else
        {
          t = p_18;
          {
            ATerm v_18 = t;
            int w_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_6, q_6, r_6, t);
                ;
                LocalPopChoice(w_18);
              }
            else
              {
                t = v_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_6, t);
    {
      ATerm x_18 = t;
      int y_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_35 = NULL;
          d_35 = t;
          {
            ATerm z_18 = t;
            int a_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = d_35;
                {
                  ATerm h_19 = t;
                  int i_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm j_19 = t;
                        int k_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm w_6 = NULL;
                            t = eval_config_0_0(t);
                            w_6 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), w_6);
                            t = w_6;
                            ;
                            LocalPopChoice(k_19);
                          }
                        else
                          {
                            t = j_19;
                          }
                      }
                      ;
                      LocalPopChoice(i_19);
                    }
                  else
                    {
                      t = h_19;
                      t = fetch_1_0(s_6, t);
                    }
                  t = d_35;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(a_19);
              }
            else
              {
                t = z_18;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm l_19 = t;
                  int m_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_7 = NULL;
                      t = eval_config_0_0(t);
                      f_7 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), f_7);
                      t = f_7;
                      ;
                      LocalPopChoice(m_19);
                    }
                  else
                    {
                      t = l_19;
                    }
                  t = d_35;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(y_18);
        }
      else
        {
          t = x_18;
          {
            ATerm n_19 = t;
            int o_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_6 (ATerm t)
                {
                  ATerm u_6 (ATerm t)
                  {
                    if(((w_34 != NULL) && (w_34 != t)))
                      _fail(t);
                    else
                      w_34 = t;
                    return(t);
                  }
                  t = Undefined_1_0(u_6, t);
                  return(t);
                }
                t = fetch_1_0(t_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_34)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_d_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_34)), term_p_19));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(o_19);
              }
            else
              {
                t = n_19;
              }
          }
        }
      x_34 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = x_34;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm t)
{
  ATerm g_35 = NULL;
  t = parse_options_1_0(l_106, t);
  g_35 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), g_35);
  t = g_35;
  t = n_106(t);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_106, t);
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        {
          ATerm s_19 = t;
          int t_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_106(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_19);
            }
          else
            {
              t = s_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = if_verbose2_1_0(d_7, t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_u_19;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_v_19;
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL;
  h_35 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_7 = NULL;
        t = eval_config_0_0(t);
        o_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_7);
        t = o_7;
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
      }
    i_35 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, i_35));
    t = h_35;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_105(t);
        ;
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        {
          ATerm a_20 = t;
          int b_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(b_20);
            }
          else
            {
              t = a_20;
              {
                ATerm c_20 = t;
                int d_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(d_20);
                  }
                else
                  {
                    t = c_20;
                    {
                      ATerm e_20 = t;
                      int f_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(a_7, b_7, c_7, t);
                          ;
                          LocalPopChoice(f_20);
                        }
                      else
                        {
                          t = e_20;
                          {
                            ATerm i_20 = t;
                            int j_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(j_20);
                              }
                            else
                              {
                                t = i_20;
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
  ATerm z_6 (ATerm t)
  {
    ATerm j_35 = NULL,k_35 = NULL,v_7 = NULL;
    j_35 = t;
    {
      ATerm l_20 = t;
      int p_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((k_35 != NULL) && (k_35 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_35 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_7, t);
          ;
          LocalPopChoice(p_20);
        }
      else
        {
          t = l_20;
          t = term_q_20;
          k_35 = t;
        }
      t = not_null(k_35);
      t = ReadFromFile_0_0(t);
      v_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_35, v_7);
      t = apply_strategy_1_0(u_105, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(v_6, w_105, x_6, z_6, t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = _2_0(_id, k_7, t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Specification_1_0(l_7, t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm a_8 = NULL;
        a_8 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_8), (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue))));
        t = a_8;
      }
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = Cons_2_0(_id, m_7, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = Cons_2_0(n_7, p_7, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = Strategies_1_0(u_7, t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = list_1_0(strategy_definition_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(j_7, _fail, default_usage_0_0, t);
  return(t);
}
