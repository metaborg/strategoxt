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
ATerm term_v_40;
ATerm term_s_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_x_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_g_38;
ATerm term_b_38;
ATerm term_w_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_w_35;
ATerm term_t_35;
ATerm term_q_35;
ATerm term_m_34;
ATerm term_j_34;
ATerm term_z_32;
ATerm term_t_32;
ATerm term_q_32;
ATerm term_n_32;
ATerm term_a_32;
ATerm term_n_27;
ATerm term_a_26;
ATerm term_v_23;
ATerm term_g_22;
ATerm term_z_7;
ATerm term_u_2;
void init_constant_terms (void)
{
  ATprotect(&(term_u_2));
  term_u_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_36);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym__3, term_q_35, term_n_38, term_u_2);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm Let_2_0 (ATerm z_72 (ATerm), ATerm a_73 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm j_73 (ATerm), ATerm k_73 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm m_70 (ATerm), ATerm);
ATerm a_17 (ATerm);
ATerm c_17 (ATerm);
ATerm d_17 (ATerm);
ATerm e_17 (ATerm);
ATerm f_17 (ATerm);
ATerm g_17 (ATerm);
ATerm build_term_expression_0_0 (ATerm);
ATerm Build_1_0 (ATerm h_73 (ATerm), ATerm);
ATerm As_2_0 (ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm);
ATerm Str_1_0 (ATerm t_69 (ATerm), ATerm);
ATerm Real_1_0 (ATerm s_69 (ATerm), ATerm);
ATerm Int_1_0 (ATerm r_69 (ATerm), ATerm);
ATerm k_17 (ATerm);
ATerm n_17 (ATerm);
ATerm o_17 (ATerm);
ATerm p_17 (ATerm);
ATerm q_17 (ATerm);
ATerm r_17 (ATerm);
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
ATerm s_17 (ATerm);
ATerm w_17 (ATerm);
ATerm x_17 (ATerm);
ATerm a_18 (ATerm);
ATerm b_18 (ATerm);
ATerm d_18 (ATerm);
ATerm g_18 (ATerm);
ATerm h_18 (ATerm);
ATerm i_18 (ATerm);
ATerm j_18 (ATerm);
ATerm m_18 (ATerm);
ATerm n_18 (ATerm);
ATerm o_18 (ATerm);
ATerm p_18 (ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm w_18 (ATerm);
ATerm x_18 (ATerm);
ATerm y_18 (ATerm);
ATerm z_18 (ATerm);
ATerm a_19 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm FunType_2_0 (ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm);
ATerm Var_1_0 (ATerm p_69 (ATerm), ATerm);
ATerm Op_2_0 (ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm);
ATerm ConstType_1_0 (ATerm c_69 (ATerm), ATerm);
ATerm i_19 (ATerm);
ATerm k_19 (ATerm);
ATerm l_19 (ATerm);
ATerm type_expression_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm);
ATerm m_19 (ATerm);
ATerm n_19 (ATerm);
ATerm o_19 (ATerm);
ATerm p_19 (ATerm);
ATerm q_19 (ATerm);
ATerm r_19 (ATerm);
ATerm s_19 (ATerm);
ATerm t_19 (ATerm);
ATerm u_19 (ATerm);
ATerm v_19 (ATerm);
ATerm w_19 (ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm list_1_0 (ATerm x_89 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm r_68 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm l_68 (ATerm), ATerm m_68 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm w_68 (ATerm), ATerm);
ATerm _2_0 (ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm j_102 (ATerm), ATerm);
ATerm a_20 (ATerm);
ATerm b_20 (ATerm);
ATerm c_20 (ATerm);
ATerm d_20 (ATerm);
ATerm e_20 (ATerm);
ATerm f_20 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_105 (ATerm), ATerm);
ATerm o_27 (ATerm i_27, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_20 (ATerm);
ATerm j_20 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm e_90 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm k_90 (ATerm), ATerm);
ATerm p_20 (ATerm);
ATerm q_20 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm s_20 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm u_103 (ATerm), ATerm);
ATerm t_20 (ATerm);
ATerm u_20 (ATerm);
ATerm v_20 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_20 (ATerm);
ATerm x_20 (ATerm);
ATerm c_21 (ATerm);
ATerm d_21 (ATerm);
ATerm e_21 (ATerm);
ATerm f_21 (ATerm);
ATerm g_21 (ATerm);
ATerm h_21 (ATerm);
ATerm i_21 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm j_21 (ATerm);
ATerm k_21 (ATerm);
ATerm o_21 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm p_21 (ATerm);
ATerm q_21 (ATerm);
ATerm r_21 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_21 (ATerm);
ATerm u_21 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_103 (ATerm), ATerm);
ATerm v_21 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm w_21 (ATerm);
ATerm need_help_1_0 (ATerm j_106 (ATerm), ATerm);
ATerm map_1_0 (ATerm t_89 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm x_81 (ATerm), ATerm);
ATerm y_21 (ATerm);
ATerm z_21 (ATerm);
ATerm d_22 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm y_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm h_22 (ATerm);
ATerm i_22 (ATerm);
ATerm j_22 (ATerm);
ATerm k_22 (ATerm);
ATerm l_22 (ATerm);
ATerm n_22 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm o_22 (ATerm);
ATerm parse_options_p__1_0 (ATerm m_108 (ATerm), ATerm);
ATerm w_22 (ATerm);
ATerm b_23 (ATerm);
ATerm c_23 (ATerm);
ATerm j_23 (ATerm);
ATerm parse_options_1_0 (ATerm l_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm);
ATerm s_23 (ATerm);
ATerm c_24 (ATerm);
ATerm d_24 (ATerm);
ATerm o_24 (ATerm);
ATerm p_24 (ATerm);
ATerm iowrap_3_0 (ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm);
ATerm s_24 (ATerm);
ATerm a_25 (ATerm);
ATerm b_25 (ATerm);
ATerm m_25 (ATerm);
ATerm n_25 (ATerm);
ATerm u_25 (ATerm);
ATerm v_25 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_0 = NULL,l_0 = NULL,k_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL,t_0 = NULL,v_0 = NULL;
  f_0 = t;
  t = term_u_2;
  t = whoami_0_0(t);
  l_0 = t;
  n_0 = t;
  t = term_z_7;
  k_0 = t;
  t = n_0;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_23), l_0), term_g_22);
  m_0 = t;
  t = SSL_printnl(k_0, m_0);
  v_0 = t;
  t = term_a_26;
  t_0 = t;
  t = SSL_exit(t_0);
  t = f_0;
  return(t);
}
ATerm Let_2_0 (ATerm z_72 (ATerm), ATerm a_73 (ATerm), ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL,z_0 = NULL,b_1 = NULL,w_0 = NULL,x_0 = NULL;
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
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, s_0, z_0);
  w_0 = t;
  t = SSLsetAnnotations(w_0, p_0);
  return(t);
}
ATerm Scope_2_0 (ATerm j_73 (ATerm), ATerm k_73 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,r_1 = NULL,u_1 = NULL,v_1 = NULL,x_1 = NULL,y_1 = NULL,y_0 = NULL,a_1 = NULL;
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
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, v_1, x_1);
  y_0 = t;
  t = SSLsetAnnotations(y_0, n_1);
  return(t);
}
ATerm BuildDefault_1_0 (ATerm m_70 (ATerm), ATerm t)
{
  ATerm c_2 = NULL,e_2 = NULL,f_2 = NULL,h_2 = NULL,d_1 = NULL,e_1 = NULL;
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
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_BuildDefault_1, f_2);
  d_1 = t;
  t = SSLsetAnnotations(d_1, c_2);
  return(t);
}
ATerm a_17 (ATerm t)
{
  ATerm k_2 = NULL;
  k_2 = t;
  t = SSL_is_string(k_2);
  return(t);
}
ATerm c_17 (ATerm t)
{
  ATerm l_2 = NULL;
  l_2 = t;
  t = SSL_is_int(l_2);
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm m_2 = NULL;
  m_2 = t;
  t = SSL_is_real(m_2);
  return(t);
}
ATerm e_17 (ATerm t)
{
  ATerm n_2 = NULL;
  n_2 = t;
  t = SSL_is_string(n_2);
  return(t);
}
ATerm f_17 (ATerm t)
{
  ATerm s_2 = NULL;
  s_2 = t;
  t = SSL_is_string(s_2);
  return(t);
}
ATerm g_17 (ATerm t)
{
  t = list_1_0(build_term_expression_0_0, t);
  return(t);
}
ATerm build_term_expression_0_0 (ATerm t)
{
  ATerm b_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(a_17, t);
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = b_26;
      {
        ATerm j_26 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Int_1_0(c_17, t);
            ;
            LocalPopChoice(b_27);
          }
        else
          {
            t = j_26;
            {
              ATerm c_27 = t;
              int d_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Real_1_0(d_17, t);
                  ;
                  LocalPopChoice(d_27);
                }
              else
                {
                  t = c_27;
                  {
                    ATerm e_27 = t;
                    int f_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Str_1_0(e_17, t);
                        ;
                        LocalPopChoice(f_27);
                      }
                    else
                      {
                        t = e_27;
                        {
                          ATerm g_27 = t;
                          int h_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Op_2_0(f_17, g_17, t);
                              ;
                              LocalPopChoice(h_27);
                            }
                          else
                            {
                              t = g_27;
                              {
                                ATerm j_27 = t;
                                int k_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1_0(build_term_expression_0_0, t);
                                    ;
                                    LocalPopChoice(k_27);
                                  }
                                else
                                  {
                                    t = j_27;
                                    {
                                      ATerm b_0 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL;
                                      b_0 = t;
                                      t = term_n_27;
                                      i_1 = t;
                                      t = term_z_7;
                                      g_1 = t;
                                      t = i_1;
                                      j_1 = t;
                                      t = (ATerm) ATinsert(ATinsert(ATempty, b_0), term_n_27);
                                      h_1 = t;
                                      t = SSL_printnl(g_1, h_1);
                                      t = b_0;
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
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,l_1 = NULL,m_1 = NULL;
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
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, x_2);
  l_1 = t;
  t = SSLsetAnnotations(l_1, v_2);
  return(t);
}
ATerm As_2_0 (ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,o_1 = NULL,p_1 = NULL;
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
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, g_3, i_3);
  o_1 = t;
  t = SSLsetAnnotations(o_1, d_3);
  return(t);
}
ATerm Str_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm v_3 = NULL,j_4 = NULL,b_5 = NULL,n_5 = NULL,q_1 = NULL,s_1 = NULL;
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
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, b_5);
  q_1 = t;
  t = SSLsetAnnotations(q_1, v_3);
  return(t);
}
ATerm Real_1_0 (ATerm s_69 (ATerm), ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,e_6 = NULL,k_6 = NULL,t_1 = NULL,w_1 = NULL;
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
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym_Real_1, e_6);
  t_1 = t;
  t = SSLsetAnnotations(t_1, b_6);
  return(t);
}
ATerm Int_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,z_1 = NULL,a_2 = NULL;
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
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, h_7);
  z_1 = t;
  t = SSLsetAnnotations(z_1, y_6);
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm q_7 = NULL;
  q_7 = t;
  t = SSL_is_string(q_7);
  return(t);
}
ATerm n_17 (ATerm t)
{
  ATerm r_7 = NULL;
  r_7 = t;
  t = SSL_is_int(r_7);
  return(t);
}
ATerm o_17 (ATerm t)
{
  ATerm s_7 = NULL;
  s_7 = t;
  t = SSL_is_real(s_7);
  return(t);
}
ATerm p_17 (ATerm t)
{
  ATerm t_7 = NULL;
  t_7 = t;
  t = SSL_is_string(t_7);
  return(t);
}
ATerm q_17 (ATerm t)
{
  ATerm w_7 = NULL;
  w_7 = t;
  t = SSL_is_string(w_7);
  return(t);
}
ATerm r_17 (ATerm t)
{
  t = list_1_0(match_term_expression_0_0, t);
  return(t);
}
ATerm match_term_expression_0_0 (ATerm t)
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      ;
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
      {
        ATerm u_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(k_17, t);
            ;
            LocalPopChoice(v_27);
          }
        else
          {
            t = u_27;
            {
              ATerm i_28 = t;
              int j_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1_0(n_17, t);
                  ;
                  LocalPopChoice(j_28);
                }
              else
                {
                  t = i_28;
                  {
                    ATerm k_28 = t;
                    int l_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1_0(o_17, t);
                        ;
                        LocalPopChoice(l_28);
                      }
                    else
                      {
                        t = k_28;
                        {
                          ATerm n_28 = t;
                          int o_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1_0(p_17, t);
                              ;
                              LocalPopChoice(o_28);
                            }
                          else
                            {
                              t = n_28;
                              {
                                ATerm r_28 = t;
                                int s_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Op_2_0(q_17, r_17, t);
                                    ;
                                    LocalPopChoice(s_28);
                                  }
                                else
                                  {
                                    t = r_28;
                                    {
                                      ATerm t_28 = t;
                                      int u_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = As_2_0(match_term_expression_0_0, match_term_expression_0_0, t);
                                          ;
                                          LocalPopChoice(u_28);
                                        }
                                      else
                                        {
                                          t = t_28;
                                          {
                                            ATerm u_0 = NULL,b_2 = NULL,d_2 = NULL,g_2 = NULL,i_2 = NULL;
                                            u_0 = t;
                                            t = term_n_27;
                                            g_2 = t;
                                            t = term_z_7;
                                            b_2 = t;
                                            t = g_2;
                                            i_2 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, u_0), term_n_27);
                                            d_2 = t;
                                            t = SSL_printnl(b_2, d_2);
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
  ATerm g_8 = NULL,n_8 = NULL,w_8 = NULL,f_9 = NULL,j_2 = NULL,o_2 = NULL;
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
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, w_8);
  j_2 = t;
  t = SSLsetAnnotations(j_2, g_8);
  return(t);
}
ATerm Thread_1_0 (ATerm n_74 (ATerm), ATerm t)
{
  ATerm l_9 = NULL,r_9 = NULL,w_9 = NULL,x_9 = NULL,t_2 = NULL,z_2 = NULL;
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
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym_Thread_1, w_9);
  t_2 = t;
  t = SSLsetAnnotations(t_2, l_9);
  return(t);
}
ATerm All_1_0 (ATerm m_74 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,h_10 = NULL,n_10 = NULL,a_3 = NULL,b_3 = NULL;
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
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym_All_1, h_10);
  a_3 = t;
  t = SSLsetAnnotations(a_3, e_10);
  return(t);
}
ATerm Some_1_0 (ATerm k_74 (ATerm), ATerm t)
{
  ATerm c_11 = NULL,f_11 = NULL,g_11 = NULL,l_11 = NULL,c_3 = NULL,h_3 = NULL;
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
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, g_11);
  c_3 = t;
  t = SSLsetAnnotations(c_3, c_11);
  return(t);
}
ATerm One_1_0 (ATerm l_74 (ATerm), ATerm t)
{
  ATerm o_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,m_3 = NULL,n_3 = NULL;
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
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_One_1, r_11);
  m_3 = t;
  t = SSLsetAnnotations(m_3, o_11);
  return(t);
}
ATerm Path_2_0 (ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,c_12 = NULL,f_12 = NULL,g_12 = NULL,i_12 = NULL,o_3 = NULL,p_3 = NULL;
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
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym_Path_2, f_12, g_12);
  o_3 = t;
  t = SSLsetAnnotations(o_3, z_11);
  return(t);
}
ATerm Rec_2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,r_12 = NULL,s_12 = NULL,x_12 = NULL,y_12 = NULL,q_3 = NULL,r_3 = NULL;
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
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, s_12, x_12);
  q_3 = t;
  t = SSLsetAnnotations(q_3, n_12);
  return(t);
}
ATerm PrimT_3_0 (ATerm f_74 (ATerm), ATerm g_74 (ATerm), ATerm h_74 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,d_13 = NULL,e_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,s_13 = NULL,s_3 = NULL,t_3 = NULL;
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
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, k_13, l_13, m_13);
  s_3 = t;
  t = SSLsetAnnotations(s_3, b_13);
  return(t);
}
ATerm SVar_1_0 (ATerm y_72 (ATerm), ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,k_14 = NULL,l_14 = NULL,u_3 = NULL,w_3 = NULL;
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
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, k_14);
  u_3 = t;
  t = SSLsetAnnotations(u_3, e_14);
  return(t);
}
ATerm CallT_3_0 (ATerm d_73 (ATerm), ATerm e_73 (ATerm), ATerm f_73 (ATerm), ATerm t)
{
  ATerm s_14 = NULL,b_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,j_15 = NULL,o_15 = NULL,v_15 = NULL,x_3 = NULL,y_3 = NULL;
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
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, h_15, j_15, o_15);
  x_3 = t;
  t = SSLsetAnnotations(x_3, s_14);
  return(t);
}
ATerm LGChoice_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,h_16 = NULL,i_16 = NULL,p_16 = NULL,y_16 = NULL,z_3 = NULL,a_4 = NULL;
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
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym_LGChoice_2, i_16, p_16);
  z_3 = t;
  t = SSLsetAnnotations(z_3, e_16);
  return(t);
}
ATerm GChoice_2_0 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm t)
{
  ATerm b_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,l_17 = NULL,m_17 = NULL,b_4 = NULL,c_4 = NULL;
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
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym_GChoice_2, j_17, l_17);
  b_4 = t;
  t = SSLsetAnnotations(b_4, b_17);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,y_17 = NULL,z_17 = NULL,c_18 = NULL,e_18 = NULL,f_18 = NULL,d_4 = NULL,e_4 = NULL;
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
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_17, c_18, e_18);
  d_4 = t;
  t = SSLsetAnnotations(d_4, t_17);
  return(t);
}
ATerm LChoice_2_0 (ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,f_4 = NULL,g_4 = NULL;
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
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, r_18, s_18);
  f_4 = t;
  t = SSLsetAnnotations(f_4, k_18);
  return(t);
}
ATerm Choice_2_0 (ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,i_4 = NULL,k_4 = NULL;
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
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, e_19, f_19);
  i_4 = t;
  t = SSLsetAnnotations(i_4, b_19);
  return(t);
}
ATerm Seq_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,k_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,l_4 = NULL,m_4 = NULL;
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
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, m_20, n_20);
  l_4 = t;
  t = SSLsetAnnotations(l_4, g_20);
  return(t);
}
ATerm Not_1_0 (ATerm y_73 (ATerm), ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,n_4 = NULL,o_4 = NULL;
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
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, a_21);
  n_4 = t;
  t = SSLsetAnnotations(n_4, y_20);
  return(t);
}
ATerm s_17 (ATerm t)
{
  t = SVar_1_0(a_18, t);
  return(t);
}
ATerm w_17 (ATerm t)
{
  t = list_1_0(strategy_expression_0_0, t);
  return(t);
}
ATerm x_17 (ATerm t)
{
  t = list_1_0(build_term_expression_0_0, t);
  return(t);
}
ATerm a_18 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  t = SSL_is_string(l_21);
  return(t);
}
ATerm b_18 (ATerm t)
{
  ATerm m_21 = NULL;
  m_21 = t;
  t = SSL_is_string(m_21);
  return(t);
}
ATerm d_18 (ATerm t)
{
  t = list_1_0(strategy_expression_0_0, t);
  return(t);
}
ATerm g_18 (ATerm t)
{
  t = list_1_0(build_term_expression_0_0, t);
  return(t);
}
ATerm h_18 (ATerm t)
{
  ATerm n_21 = NULL;
  n_21 = t;
  t = SSL_is_string(n_21);
  return(t);
}
ATerm i_18 (ATerm t)
{
  ATerm s_21 = NULL;
  s_21 = t;
  t = SSL_is_int(s_21);
  return(t);
}
ATerm j_18 (ATerm t)
{
  t = list_1_0(m_18, t);
  return(t);
}
ATerm m_18 (ATerm t)
{
  ATerm v_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_22 = NULL;
      a_22 = t;
      t = SSL_is_string(a_22);
      ;
      LocalPopChoice(x_28);
    }
  else
    {
      t = v_28;
      t = list_1_0(n_18, t);
    }
  return(t);
}
ATerm n_18 (ATerm t)
{
  ATerm b_22 = NULL;
  b_22 = t;
  t = SSL_is_int(b_22);
  return(t);
}
ATerm o_18 (ATerm t)
{
  t = list_1_0(p_18, t);
  return(t);
}
ATerm p_18 (ATerm t)
{
  t = SDefT_4_0(u_18, v_18, w_18, strategy_expression_0_0, t);
  return(t);
}
ATerm u_18 (ATerm t)
{
  ATerm c_22 = NULL;
  c_22 = t;
  t = SSL_is_string(c_22);
  return(t);
}
ATerm v_18 (ATerm t)
{
  t = list_1_0(x_18, t);
  return(t);
}
ATerm w_18 (ATerm t)
{
  t = list_1_0(z_18, t);
  return(t);
}
ATerm x_18 (ATerm t)
{
  t = VarDec_2_0(y_18, type_expression_0_0, t);
  return(t);
}
ATerm y_18 (ATerm t)
{
  ATerm e_22 = NULL;
  e_22 = t;
  t = SSL_is_string(e_22);
  return(t);
}
ATerm z_18 (ATerm t)
{
  t = VarDec_2_0(a_19, type_expression_0_0, t);
  return(t);
}
ATerm a_19 (ATerm t)
{
  ATerm f_22 = NULL;
  f_22 = t;
  t = SSL_is_string(f_22);
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm b_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = b_29;
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            ;
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
            {
              ATerm h_29 = t;
              int i_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1_0(strategy_expression_0_0, t);
                  ;
                  LocalPopChoice(i_29);
                }
              else
                {
                  t = h_29;
                  {
                    ATerm j_29 = t;
                    int k_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Seq_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                        ;
                        LocalPopChoice(k_29);
                      }
                    else
                      {
                        t = j_29;
                        {
                          ATerm m_29 = t;
                          int n_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                              ;
                              LocalPopChoice(n_29);
                            }
                          else
                            {
                              t = m_29;
                              {
                                ATerm o_29 = t;
                                int s_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                    ;
                                    LocalPopChoice(s_29);
                                  }
                                else
                                  {
                                    t = o_29;
                                    {
                                      ATerm t_29 = t;
                                      int u_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(strategy_expression_0_0, strategy_expression_0_0, strategy_expression_0_0, t);
                                          ;
                                          LocalPopChoice(u_29);
                                        }
                                      else
                                        {
                                          t = t_29;
                                          {
                                            ATerm x_29 = t;
                                            int y_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                ;
                                                LocalPopChoice(y_29);
                                              }
                                            else
                                              {
                                                t = x_29;
                                                {
                                                  ATerm z_29 = t;
                                                  int a_30 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = LGChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                      ;
                                                      LocalPopChoice(a_30);
                                                    }
                                                  else
                                                    {
                                                      t = z_29;
                                                      {
                                                        ATerm c_30 = t;
                                                        int e_30 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = CallT_3_0(s_17, w_17, x_17, t);
                                                            ;
                                                            LocalPopChoice(e_30);
                                                          }
                                                        else
                                                          {
                                                            t = c_30;
                                                            {
                                                              ATerm i_30 = t;
                                                              int m_30 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = PrimT_3_0(b_18, d_18, g_18, t);
                                                                  ;
                                                                  LocalPopChoice(m_30);
                                                                }
                                                              else
                                                                {
                                                                  t = i_30;
                                                                  {
                                                                    ATerm n_30 = t;
                                                                    int r_30 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2_0(h_18, strategy_expression_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(r_30);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = n_30;
                                                                        {
                                                                          ATerm s_30 = t;
                                                                          int u_30 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2_0(i_18, strategy_expression_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(u_30);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_30;
                                                                              {
                                                                                ATerm x_30 = t;
                                                                                int y_30 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = One_1_0(strategy_expression_0_0, t);
                                                                                    ;
                                                                                    LocalPopChoice(y_30);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = x_30;
                                                                                    {
                                                                                      ATerm d_31 = t;
                                                                                      int e_31 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Some_1_0(strategy_expression_0_0, t);
                                                                                          ;
                                                                                          LocalPopChoice(e_31);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = d_31;
                                                                                          {
                                                                                            ATerm f_31 = t;
                                                                                            int g_31 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = All_1_0(strategy_expression_0_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(g_31);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = f_31;
                                                                                                {
                                                                                                  ATerm h_31 = t;
                                                                                                  int i_31 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Thread_1_0(strategy_expression_0_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(i_31);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = h_31;
                                                                                                      {
                                                                                                        ATerm j_31 = t;
                                                                                                        int m_31 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Match_1_0(match_term_expression_0_0, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(m_31);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = j_31;
                                                                                                            {
                                                                                                              ATerm n_31 = t;
                                                                                                              int o_31 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Build_1_0(build_term_expression_0_0, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(o_31);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = n_31;
                                                                                                                  {
                                                                                                                    ATerm s_31 = t;
                                                                                                                    int t_31 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Scope_2_0(j_18, strategy_expression_0_0, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(t_31);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = s_31;
                                                                                                                        {
                                                                                                                          ATerm u_31 = t;
                                                                                                                          int w_31 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Let_2_0(o_18, strategy_expression_0_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(w_31);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = u_31;
                                                                                                                              {
                                                                                                                                ATerm c_1 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,w_4 = NULL;
                                                                                                                                c_1 = t;
                                                                                                                                t = term_a_32;
                                                                                                                                s_4 = t;
                                                                                                                                t = term_z_7;
                                                                                                                                q_4 = t;
                                                                                                                                t = s_4;
                                                                                                                                w_4 = t;
                                                                                                                                t = (ATerm) ATinsert(ATinsert(ATempty, c_1), term_a_32);
                                                                                                                                r_4 = t;
                                                                                                                                t = SSL_printnl(q_4, r_4);
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
  ATerm m_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,x_4 = NULL,a_5 = NULL;
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
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, s_22, t_22);
  x_4 = t;
  t = SSLsetAnnotations(x_4, m_22);
  return(t);
}
ATerm Var_1_0 (ATerm p_69 (ATerm), ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,c_5 = NULL,d_5 = NULL;
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
  d_5 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_22);
  c_5 = t;
  t = SSLsetAnnotations(c_5, x_22);
  return(t);
}
ATerm Op_2_0 (ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,e_5 = NULL,f_5 = NULL;
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
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, g_23, h_23);
  e_5 = t;
  t = SSLsetAnnotations(e_5, d_23);
  return(t);
}
ATerm ConstType_1_0 (ATerm c_69 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,g_5 = NULL,h_5 = NULL;
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
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, n_23);
  g_5 = t;
  t = SSLsetAnnotations(g_5, l_23);
  return(t);
}
ATerm i_19 (ATerm t)
{
  ATerm r_23 = NULL;
  r_23 = t;
  t = SSL_is_string(r_23);
  return(t);
}
ATerm k_19 (ATerm t)
{
  ATerm t_23 = NULL;
  t_23 = t;
  t = SSL_is_string(t_23);
  return(t);
}
ATerm l_19 (ATerm t)
{
  t = list_1_0(type_expression_0_0, t);
  return(t);
}
ATerm type_expression_0_0 (ATerm t)
{
  ATerm b_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_19 (ATerm t)
      {
        ATerm e_32 = t;
        int g_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_19 (ATerm t)
            {
              t = list_1_0(h_19, t);
              return(t);
            }
            t = Op_2_0(i_19, j_19, t);
            ;
            LocalPopChoice(g_32);
          }
        else
          {
            t = e_32;
            t = Var_1_0(k_19, t);
          }
        return(t);
      }
      t = ConstType_1_0(h_19, t);
      ;
      LocalPopChoice(d_32);
    }
  else
    {
      t = b_32;
      t = FunType_2_0(l_19, type_expression_0_0, t);
    }
  return(t);
}
ATerm VarDec_2_0 (ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,i_5 = NULL,j_5 = NULL;
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
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_23, a_24);
  i_5 = t;
  t = SSLsetAnnotations(i_5, w_23);
  return(t);
}
ATerm SDefT_4_0 (ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,k_5 = NULL,l_5 = NULL;
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
  l_5 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, j_24, k_24, l_24, m_24);
  k_5 = t;
  t = SSLsetAnnotations(k_5, e_24);
  return(t);
}
ATerm SDef_3_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm t)
{
  ATerm q_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,m_5 = NULL,p_5 = NULL;
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
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, w_24, x_24, y_24);
  m_5 = t;
  t = SSLsetAnnotations(m_5, q_24);
  return(t);
}
ATerm m_19 (ATerm t)
{
  ATerm c_25 = NULL;
  c_25 = t;
  t = SSL_is_string(c_25);
  return(t);
}
ATerm n_19 (ATerm t)
{
  t = list_1_0(o_19, t);
  return(t);
}
ATerm o_19 (ATerm t)
{
  t = VarDec_2_0(p_19, type_expression_0_0, t);
  return(t);
}
ATerm p_19 (ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  t = SSL_is_string(d_25);
  return(t);
}
ATerm q_19 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  t = SSL_is_string(e_25);
  return(t);
}
ATerm r_19 (ATerm t)
{
  t = list_1_0(t_19, t);
  return(t);
}
ATerm s_19 (ATerm t)
{
  t = list_1_0(v_19, t);
  return(t);
}
ATerm t_19 (ATerm t)
{
  t = VarDec_2_0(u_19, type_expression_0_0, t);
  return(t);
}
ATerm u_19 (ATerm t)
{
  ATerm f_25 = NULL;
  f_25 = t;
  t = SSL_is_string(f_25);
  return(t);
}
ATerm v_19 (ATerm t)
{
  t = VarDec_2_0(w_19, type_expression_0_0, t);
  return(t);
}
ATerm w_19 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  t = SSL_is_string(g_25);
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm h_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3_0(m_19, n_19, strategy_expression_0_0, t);
      ;
      LocalPopChoice(j_32);
    }
  else
    {
      t = h_32;
      {
        ATerm k_32 = t;
        int m_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(q_19, r_19, s_19, strategy_expression_0_0, t);
            ;
            LocalPopChoice(m_32);
          }
        else
          {
            t = k_32;
            {
              ATerm f_1 = NULL,q_5 = NULL,r_5 = NULL,t_5 = NULL,u_5 = NULL;
              f_1 = t;
              t = term_n_32;
              t_5 = t;
              t = term_z_7;
              q_5 = t;
              t = t_5;
              u_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_1), term_n_32);
              r_5 = t;
              t = SSL_printnl(q_5, r_5);
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
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        t = Cons_2_0(x_89, h_25, t);
      }
    return(t);
  }
  t = h_25(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm r_68 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,v_5 = NULL,x_5 = NULL;
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
  x_5 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, k_25);
  v_5 = t;
  t = SSLsetAnnotations(v_5, i_25);
  return(t);
}
ATerm Cons_2_0 (ATerm l_68 (ATerm), ATerm m_68 (ATerm), ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,y_5 = NULL,z_5 = NULL;
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
  z_5 = t;
  t = (ATerm) ATinsert(CheckATermList(s_25), r_25);
  y_5 = t;
  t = SSLsetAnnotations(y_5, o_25);
  return(t);
}
ATerm Specification_1_0 (ATerm w_68 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_6 = NULL,d_6 = NULL;
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
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_25);
  a_6 = t;
  t = SSLsetAnnotations(a_6, w_25);
  return(t);
}
ATerm _2_0 (ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,g_6 = NULL,h_6 = NULL;
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
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_26, g_26);
  g_6 = t;
  t = SSLsetAnnotations(g_6, c_26);
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
  t = (ATerm) ATmakeAppl(sym__2, k_26, term_q_32);
  t = open_stream_0_0(t);
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_26, l_26);
  t = j_102(t);
  t = fclose_0_0(t);
  t = l_26;
  return(t);
}
ATerm a_20 (ATerm t)
{
  t = fetch_1_0(c_20, t);
  return(t);
}
ATerm b_20 (ATerm t)
{
  t = WriteToFile_1_0(d_20, t);
  return(t);
}
ATerm c_20 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm d_20 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_32 = ATgetArgument(t, 0);
      if(match_cons(r_32, sym_Stream_1))
        {
          p_26 = ATgetArgument(r_32, 0);
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
ATerm e_20 (ATerm t)
{
  t = WriteToFile_1_0(f_20, t);
  return(t);
}
ATerm f_20 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,i_6 = NULL,j_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_32 = ATgetArgument(t, 0);
      if(match_cons(s_32, sym_Stream_1))
        {
          s_26 = ATgetArgument(s_32, 0);
        }
      else
        _fail(t);
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(s_26, t_26);
  u_26 = t;
  j_6 = t;
  t = term_t_32;
  i_6 = t;
  t = SSL_fputc(i_6, u_26);
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_26);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL;
  n_26 = t;
  {
    ATerm x_19 (ATerm t)
    {
      ATerm u_32 = t;
      int v_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_19 (ATerm t)
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
          t = fetch_1_0(y_19, t);
          ;
          LocalPopChoice(v_32);
        }
      else
        {
          t = u_32;
          t = term_z_32;
          if(((o_26 != NULL) && (o_26 != t)))
            _fail(t);
          else
            o_26 = t;
        }
      return(t);
    }
    t = _2_0(x_19, _id, t);
    t = n_26;
    {
      ATerm z_19 (ATerm t)
      {
        ATerm k_1 = NULL;
        k_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_26), k_1);
        return(t);
      }
      t = _2_0(_id, z_19, t);
      {
        ATerm a_33 = t;
        int c_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(a_20, b_20, t);
            ;
            LocalPopChoice(c_33);
          }
        else
          {
            t = a_33;
            t = _2_0(_id, e_20, t);
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
        ATerm e_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_27);
            ;
            LocalPopChoice(i_33);
          }
        else
          {
            t = e_33;
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
ATerm i_20 (ATerm t)
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
ATerm j_20 (ATerm t)
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
      ATerm l_33 = ATgetArgument(t, 0);
      ATerm m_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_2 = NULL,q_2 = NULL;
        p_2 = t;
        t = SSL_explode_term(p_2);
        if(match_cons(t, sym__2))
          {
            ATerm v_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_33) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_34 = ATgetArgument(t, 1);
              if(((ATgetType(b_34) == AT_LIST) && !(ATisEmpty(b_34))))
                {
                  q_2 = ATgetFirst((ATermList) b_34);
                  {
                    ATerm c_34 = (ATerm) ATgetNext((ATermList) b_34);
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
        LocalPopChoice(u_33);
      }
    else
      {
        t = n_33;
        {
          ATerm d_34 = t;
          int g_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
              t = _2_0(i_20, _id, t);
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
              LocalPopChoice(g_34);
            }
          else
            {
              t = d_34;
              {
                ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
                t = _2_0(j_20, _id, t);
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
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_28 = NULL;
      h_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_28, term_j_34);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      {
        ATerm r_2 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL;
        r_2 = t;
        t = term_m_34;
        n_6 = t;
        t = term_z_7;
        l_6 = t;
        t = n_6;
        o_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, r_2), term_m_34);
        m_6 = t;
        t = SSL_printnl(l_6, m_6);
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
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(e_90, _id, t);
        ;
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        t = Cons_2_0(_id, m_28, t);
      }
    return(t);
  }
  t = m_28(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_34);
    }
  else
    {
      t = r_34;
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
          ATerm l_20 (ATerm t)
          {
            t = q_28;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(l_20, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm k_90 (ATerm), ATerm t)
{
  ATerm w_28 (ATerm t)
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_28, t);
        ;
        LocalPopChoice(u_34);
      }
    else
      {
        t = t_34;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_90(t);
      }
    return(t);
  }
  t = w_28(t);
  return(t);
}
ATerm p_20 (ATerm t)
{
  ATerm z_28 = NULL;
  z_28 = t;
  t = SSL_explode_string(z_28);
  return(t);
}
ATerm q_20 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  t = SSL_explode_string(a_29);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm y_28 = NULL;
  t = _2_0(p_20, q_20, t);
  {
    ATerm z_34 = t;
    int a_35 = stack_ptr;
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
          ATerm r_20 (ATerm t)
          {
            t = d_29;
            return(t);
          }
          t = at_end_1_0(r_20, t);
        }
        ;
        LocalPopChoice(a_35);
      }
    else
      {
        t = z_34;
        {
          ATerm k_3 = NULL,l_3 = NULL;
          k_3 = t;
          t = SSL_explode_term(k_3);
          if(match_cons(t, sym__2))
            {
              ATerm b_35 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_35) != ATmakeSymbol("", 0, ATtrue)))
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
ATerm s_20 (ATerm t)
{
  ATerm c_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_35);
    }
  else
    {
      t = c_35;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_29 = NULL;
      l_29 = t;
      t = SSL_is_string(l_29);
      ;
      LocalPopChoice(l_35);
    }
  else
    {
      t = f_35;
      {
        ATerm m_35 = t;
        int n_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_20, t);
            ;
            LocalPopChoice(n_35);
          }
        else
          {
            t = m_35;
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
                        ATerm o_35 = t;
                        int p_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_6 = NULL,q_6 = NULL;
                            q_6 = t;
                            t = term_q_35;
                            p_6 = t;
                            t = SSL_table_get(p_6, q_29);
                            {
                              ATerm r_35 = t;
                              int s_35 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_4 = NULL,r_6 = NULL,s_6 = NULL;
                                  t = eval_config_0_0(t);
                                  h_4 = t;
                                  s_6 = t;
                                  t = term_q_35;
                                  r_6 = t;
                                  t = SSL_table_put(r_6, q_29, h_4);
                                  t = h_4;
                                  ;
                                  LocalPopChoice(s_35);
                                }
                              else
                                {
                                  t = r_35;
                                }
                            }
                            ;
                            LocalPopChoice(p_35);
                          }
                        else
                          {
                            t = o_35;
                            {
                              ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,x_6 = NULL;
                              t = term_t_35;
                              v_6 = t;
                              t = term_z_7;
                              t_6 = t;
                              t = v_6;
                              x_6 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, q_29), term_t_35);
                              u_6 = t;
                              t = SSL_printnl(t_6, u_6);
                              t = q_29;
                              _fail(t);
                            }
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
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_30 = NULL,d_30 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL;
      b_30 = t;
      t = term_w_35;
      b_7 = t;
      t = term_q_35;
      z_6 = t;
      t = b_7;
      c_7 = t;
      t = term_w_35;
      a_7 = t;
      t = SSL_table_get(z_6, a_7);
      {
        ATerm x_35 = t;
        int y_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 = NULL,d_7 = NULL,e_7 = NULL,j_7 = NULL,k_7 = NULL;
            t = eval_config_0_0(t);
            p_4 = t;
            j_7 = t;
            t = term_q_35;
            d_7 = t;
            t = j_7;
            k_7 = t;
            t = term_w_35;
            e_7 = t;
            t = SSL_table_put(d_7, e_7, p_4);
            t = p_4;
            ;
            LocalPopChoice(y_35);
          }
        else
          {
            t = x_35;
          }
        d_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_30, term_z_35);
        t = geq_0_0(t);
        t = b_30;
        t = u_103(t);
      }
      ;
      LocalPopChoice(v_35);
    }
  else
    {
      t = u_35;
    }
  return(t);
}
ATerm t_20 (ATerm t)
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
ATerm u_20 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,p_7 = NULL;
  g_30 = t;
  t = SSL_string_to_int(g_30);
  h_30 = t;
  n_7 = t;
  t = term_q_35;
  l_7 = t;
  t = n_7;
  p_7 = t;
  t = term_a_36;
  m_7 = t;
  t = SSL_table_put(l_7, m_7, h_30);
  t = g_30;
  return(t);
}
ATerm v_20 (ATerm t)
{
  t = term_b_36;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_20, u_20, v_20, t);
  return(t);
}
ATerm w_20 (ATerm t)
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
ATerm x_20 (ATerm t)
{
  ATerm u_7 = NULL,x_7 = NULL,y_7 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
  b_8 = t;
  t = term_q_35;
  u_7 = t;
  t = b_8;
  c_8 = t;
  t = term_w_35;
  x_7 = t;
  t = c_8;
  d_8 = t;
  t = term_c_36;
  y_7 = t;
  t = SSL_table_put(u_7, x_7, y_7);
  t = term_d_36;
  return(t);
}
ATerm c_21 (ATerm t)
{
  t = term_e_36;
  return(t);
}
ATerm d_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_21 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,e_8 = NULL,f_8 = NULL,h_8 = NULL,i_8 = NULL;
  k_30 = t;
  t = SSL_string_to_int(k_30);
  l_30 = t;
  h_8 = t;
  t = term_q_35;
  e_8 = t;
  t = h_8;
  i_8 = t;
  t = term_w_35;
  f_8 = t;
  t = SSL_table_put(e_8, f_8, l_30);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_30);
  return(t);
}
ATerm f_21 (ATerm t)
{
  t = term_f_36;
  return(t);
}
ATerm g_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_21 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,o_8 = NULL,p_8 = NULL;
  m_8 = t;
  t = term_q_35;
  j_8 = t;
  t = m_8;
  o_8 = t;
  t = term_g_36;
  k_8 = t;
  t = o_8;
  p_8 = t;
  t = term_u_2;
  l_8 = t;
  t = SSL_table_put(j_8, k_8, l_8);
  t = term_h_36;
  return(t);
}
ATerm i_21 (ATerm t)
{
  t = term_i_36;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_20, x_20, c_21, t);
      ;
      LocalPopChoice(k_36);
    }
  else
    {
      t = j_36;
      {
        ATerm l_36 = t;
        int m_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_21, e_21, f_21, t);
            ;
            LocalPopChoice(m_36);
          }
        else
          {
            t = l_36;
            t = Option_3_0(g_21, h_21, i_21, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_30 = NULL;
      t = term_u_2;
      t = d_0(t);
      q_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_36, term_o_36, q_30);
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
      t = c_0(t);
      t_30 = t;
      t = (ATerm) ATinsert(CheckATermList(p_30), t_30);
    }
  return(t);
}
ATerm j_21 (ATerm t)
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
ATerm k_21 (ATerm t)
{
  ATerm w_30 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
  w_30 = t;
  s_8 = t;
  t = term_q_35;
  q_8 = t;
  t = s_8;
  t_8 = t;
  t = term_p_36;
  r_8 = t;
  t = SSL_table_put(q_8, r_8, w_30);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_30);
  return(t);
}
ATerm o_21 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_21, k_21, o_21, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,u_8 = NULL,v_8 = NULL;
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
    ATerm r_36 = t;
    int s_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_36 = ATgetArgument(t, 0);
            ATerm u_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_30, a_31);
        ;
        LocalPopChoice(s_36);
      }
    else
      {
        t = r_36;
        t = (ATerm) ATempty;
      }
    c_31 = t;
    v_8 = t;
    t = (ATerm) ATinsert(CheckATermList(c_31), b_31);
    u_8 = t;
    t = SSL_table_put(z_30, a_31, u_8);
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
      t = (ATerm) ATmakeAppl(sym__3, term_n_36, term_o_36, r_31);
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
ATerm p_21 (ATerm t)
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
ATerm q_21 (ATerm t)
{
  ATerm y_31 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
  y_31 = t;
  z_8 = t;
  t = term_q_35;
  x_8 = t;
  t = z_8;
  a_9 = t;
  t = term_v_36;
  y_8 = t;
  t = SSL_table_put(x_8, y_8, y_31);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_31);
  return(t);
}
ATerm r_21 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_21, q_21, r_21, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_31 = NULL,g_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,h_9 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_2;
  t = whoami_0_0(t);
  z_31 = t;
  d_9 = t;
  t = term_z_7;
  b_9 = t;
  t = d_9;
  e_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_36), z_31);
  c_9 = t;
  t = SSL_printnl(b_9, c_9);
  h_9 = t;
  t = term_a_26;
  g_9 = t;
  t = SSL_exit(g_9);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,m_9 = NULL;
  t = term_y_36;
  k_9 = t;
  t = term_q_35;
  i_9 = t;
  t = k_9;
  m_9 = t;
  t = term_y_36;
  j_9 = t;
  t = SSL_table_get(i_9, j_9);
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_4 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
        t = eval_config_0_0(t);
        t_4 = t;
        p_9 = t;
        t = term_q_35;
        n_9 = t;
        t = p_9;
        q_9 = t;
        t = term_y_36;
        o_9 = t;
        t = SSL_table_put(n_9, o_9, t_4);
        t = t_4;
        ;
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm t)
{
  ATerm b_37 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_95(t);
      ;
      LocalPopChoice(c_37);
    }
  else
    {
      t = b_37;
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
ATerm t_21 (ATerm t)
{
  t = term_c_36;
  return(t);
}
ATerm u_21 (ATerm t)
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
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(y_4, z_4);
        ;
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
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
      ATerm f_37 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4;
  t = foldr_2_0(t_21, u_21, t);
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
    ATerm g_37 = t;
    int h_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_32;
        if((x_32 != t))
          {
            _fail(t);
          }
        t = w_32;
        ;
        LocalPopChoice(h_37);
      }
    else
      {
        t = g_37;
        t = w_32;
        {
          ATerm i_37 = t;
          int j_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_32, y_32);
              ;
              LocalPopChoice(j_37);
            }
          else
            {
              t = i_37;
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
  ATerm k_37 = t;
  int l_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_33 = NULL,d_33 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
      b_33 = t;
      t = term_w_35;
      u_9 = t;
      t = term_q_35;
      s_9 = t;
      t = u_9;
      v_9 = t;
      t = term_w_35;
      t_9 = t;
      t = SSL_table_get(s_9, t_9);
      {
        ATerm m_37 = t;
        int n_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL;
            t = eval_config_0_0(t);
            o_5 = t;
            a_10 = t;
            t = term_q_35;
            y_9 = t;
            t = a_10;
            b_10 = t;
            t = term_w_35;
            z_9 = t;
            t = SSL_table_put(y_9, z_9, o_5);
            t = o_5;
            ;
            LocalPopChoice(n_37);
          }
        else
          {
            t = m_37;
          }
        d_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_33, term_a_26);
        t = geq_0_0(t);
        t = b_33;
        t = t_103(t);
      }
      ;
      LocalPopChoice(l_37);
    }
  else
    {
      t = k_37;
    }
  return(t);
}
ATerm v_21 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,c_10 = NULL,d_10 = NULL,g_10 = NULL,i_10 = NULL;
  t = run_time_0_0(t);
  f_33 = t;
  t = term_u_2;
  t = whoami_0_0(t);
  g_33 = t;
  g_10 = t;
  t = term_z_7;
  c_10 = t;
  t = g_10;
  i_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_37), f_33), term_o_37), g_33);
  d_10 = t;
  t = SSL_printnl(c_10, d_10);
  t = (ATerm) ATmakeAppl(sym__2, term_z_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_37), f_33), term_o_37), g_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_21, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL;
  t = report_run_time_0_0(t);
  k_10 = t;
  t = term_c_36;
  j_10 = t;
  t = SSL_exit(j_10);
  return(t);
}
ATerm w_21 (ATerm t)
{
  ATerm q_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(r_37);
    }
  else
    {
      t = q_37;
      {
        ATerm s_37 = t;
        int t_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(t_37);
          }
        else
          {
            t = s_37;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_106 (ATerm), ATerm t)
{
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_10 = NULL,m_10 = NULL,o_10 = NULL,p_10 = NULL;
      t = term_w_37;
      o_10 = t;
      t = term_q_35;
      l_10 = t;
      t = o_10;
      p_10 = t;
      t = term_w_37;
      m_10 = t;
      t = SSL_table_get(l_10, m_10);
      {
        ATerm x_37 = t;
        int y_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
            t = eval_config_0_0(t);
            s_5 = t;
            s_10 = t;
            t = term_q_35;
            q_10 = t;
            t = s_10;
            t_10 = t;
            t = term_w_37;
            r_10 = t;
            t = SSL_table_put(q_10, r_10, s_5);
            t = s_5;
            ;
            LocalPopChoice(y_37);
          }
        else
          {
            t = x_37;
          }
      }
      ;
      LocalPopChoice(v_37);
    }
  else
    {
      t = u_37;
      t = fetch_1_0(w_21, t);
    }
  t = j_106(t);
  return(t);
}
ATerm map_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm h_33 (ATerm t)
  {
    ATerm z_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_38);
      }
    else
      {
        t = z_37;
        t = Cons_2_0(t_89, h_33, t);
      }
    return(t);
  }
  t = h_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
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
        t = e_0(t);
        p_33 = t;
        t = k_33;
        {
          ATerm x_21 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(o_33), p_33);
            return(t);
          }
          t = reverse_acc_2_0(e_0, x_21, t);
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
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_10 = NULL,v_10 = NULL;
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
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_33);
  u_10 = t;
  t = SSLsetAnnotations(u_10, q_33);
  return(t);
}
ATerm y_21 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm z_21 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_22 (ATerm t)
{
  ATerm w_33 = NULL;
  w_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_33), term_b_38);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL;
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL;
      t = term_y_36;
      y_10 = t;
      t = term_q_35;
      w_10 = t;
      t = y_10;
      z_10 = t;
      t = term_y_36;
      x_10 = t;
      t = SSL_table_get(w_10, x_10);
      {
        ATerm e_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 = NULL,a_11 = NULL,b_11 = NULL,d_11 = NULL,e_11 = NULL;
            t = eval_config_0_0(t);
            w_5 = t;
            d_11 = t;
            t = term_q_35;
            a_11 = t;
            t = d_11;
            e_11 = t;
            t = term_y_36;
            b_11 = t;
            t = SSL_table_put(a_11, b_11, w_5);
            t = w_5;
            ;
            LocalPopChoice(f_38);
          }
        else
          {
            t = e_38;
          }
      }
      ;
      LocalPopChoice(d_38);
    }
  else
    {
      t = c_38;
      t = fetch_1_0(y_21, t);
    }
  t = term_g_38;
  t = echo_0_0(t);
  j_11 = t;
  t = term_n_36;
  h_11 = t;
  t = j_11;
  k_11 = t;
  t = term_o_36;
  i_11 = t;
  t = SSL_table_get(h_11, i_11);
  t = reverse_acc_2_0(_id, z_21, t);
  t = map_1_0(d_22, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm y_81 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,m_11 = NULL,n_11 = NULL;
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
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, z_33);
  m_11 = t;
  t = SSLsetAnnotations(m_11, x_33);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,p_11 = NULL,t_11 = NULL;
  e_34 = t;
  {
    ATerm h_38 = t;
    int i_38 = stack_ptr;
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
                ATerm j_38 = ATgetFirst((ATermList) t);
                ATerm k_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_34;
          }
        ;
        LocalPopChoice(i_38);
      }
    else
      {
        t = h_38;
        t = (ATerm) ATinsert(ATempty, e_34);
      }
    f_34 = t;
    t_11 = t;
    t = term_z_32;
    p_11 = t;
    t = SSL_printnl(p_11, f_34);
    t = e_34;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  t = term_y_36;
  w_11 = t;
  t = term_q_35;
  u_11 = t;
  t = w_11;
  x_11 = t;
  t = term_y_36;
  v_11 = t;
  t = SSL_table_get(u_11, v_11);
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_6 = NULL,y_11 = NULL,b_12 = NULL,d_12 = NULL,e_12 = NULL;
        t = eval_config_0_0(t);
        f_6 = t;
        d_12 = t;
        t = term_q_35;
        y_11 = t;
        t = d_12;
        e_12 = t;
        t = term_y_36;
        b_12 = t;
        t = SSL_table_put(y_11, b_12, f_6);
        t = f_6;
        ;
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm h_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_22 (ATerm t)
{
  ATerm h_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,p_12 = NULL;
  l_12 = t;
  t = term_q_35;
  h_12 = t;
  t = l_12;
  m_12 = t;
  t = term_n_38;
  j_12 = t;
  t = m_12;
  p_12 = t;
  t = term_u_2;
  k_12 = t;
  t = SSL_table_put(h_12, j_12, k_12);
  t = term_o_38;
  return(t);
}
ATerm j_22 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm k_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_22 (ATerm t)
{
  ATerm q_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,z_12 = NULL,a_13 = NULL,c_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
  v_12 = t;
  t = term_q_35;
  q_12 = t;
  t = v_12;
  w_12 = t;
  t = term_n_38;
  t_12 = t;
  t = w_12;
  z_12 = t;
  t = term_u_2;
  u_12 = t;
  t = SSL_table_put(q_12, t_12, u_12);
  g_13 = t;
  t = term_q_35;
  a_13 = t;
  t = g_13;
  h_13 = t;
  t = term_q_38;
  c_13 = t;
  t = h_13;
  i_13 = t;
  t = term_u_2;
  f_13 = t;
  t = SSL_table_put(a_13, c_13, f_13);
  t = term_r_38;
  return(t);
}
ATerm n_22 (ATerm t)
{
  t = term_s_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_38 = t;
  int u_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_22, i_22, j_22, t);
      ;
      LocalPopChoice(u_38);
    }
  else
    {
      t = t_38;
      t = Option_3_0(k_22, l_22, n_22, t);
    }
  return(t);
}
ATerm o_22 (ATerm t)
{
  ATerm l_34 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  l_34 = t;
  p_13 = t;
  t = term_q_35;
  n_13 = t;
  t = p_13;
  q_13 = t;
  t = term_y_36;
  o_13 = t;
  t = SSL_table_put(n_13, o_13, l_34);
  t = (ATerm) ATmakeAppl(sym_Program_1, l_34);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm k_34 = NULL;
  k_34 = t;
  {
    ATerm v_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_38;
        t = m_108(t);
        ;
        LocalPopChoice(w_38);
      }
    else
      {
        t = v_38;
      }
    t = k_34;
    {
      ATerm p_22 (ATerm t)
      {
        ATerm y_38 = t;
        int z_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_39 = t;
            int b_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(b_39);
              }
            else
              {
                t = a_39;
                t = m_108(t);
                t = Cons_2_0(_id, p_22, t);
              }
            ;
            LocalPopChoice(z_38);
          }
        else
          {
            t = y_38;
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
      t = Cons_2_0(o_22, p_22, t);
    }
  }
  return(t);
}
ATerm w_22 (ATerm t)
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
ATerm b_23 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
  b_14 = t;
  t = term_q_35;
  y_13 = t;
  t = b_14;
  c_14 = t;
  t = term_w_37;
  z_13 = t;
  t = c_14;
  d_14 = t;
  t = term_u_2;
  a_14 = t;
  t = SSL_table_put(y_13, z_13, a_14);
  t = term_c_39;
  return(t);
}
ATerm c_23 (ATerm t)
{
  t = term_d_39;
  return(t);
}
ATerm j_23 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_108 (ATerm), ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,r_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,p_15 = NULL,q_15 = NULL;
  v_34 = t;
  v_13 = t;
  t = term_n_36;
  r_13 = t;
  t = v_13;
  w_13 = t;
  t = term_o_36;
  t_13 = t;
  t = w_13;
  x_13 = t;
  t = (ATerm) ATempty;
  u_13 = t;
  t = SSL_table_put(r_13, t_13, u_13);
  t = v_34;
  {
    ATerm v_22 (ATerm t)
    {
      ATerm e_39 = t;
      int f_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_108(t);
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
                t = Option_3_0(w_22, b_23, c_23, t);
                ;
                LocalPopChoice(h_39);
              }
            else
              {
                t = g_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_22, t);
    {
      ATerm i_39 = t;
      int j_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_35 = NULL;
          d_35 = t;
          {
            ATerm k_39 = t;
            int l_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_14 = NULL,r_14 = NULL;
                t = d_35;
                {
                  ATerm m_39 = t;
                  int n_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL;
                      t = term_w_37;
                      i_14 = t;
                      t = term_q_35;
                      g_14 = t;
                      t = i_14;
                      j_14 = t;
                      t = term_w_37;
                      h_14 = t;
                      t = SSL_table_get(g_14, h_14);
                      {
                        ATerm o_39 = t;
                        int p_39 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm w_6 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
                            t = eval_config_0_0(t);
                            w_6 = t;
                            o_14 = t;
                            t = term_q_35;
                            m_14 = t;
                            t = o_14;
                            p_14 = t;
                            t = term_w_37;
                            n_14 = t;
                            t = SSL_table_put(m_14, n_14, w_6);
                            t = w_6;
                            ;
                            LocalPopChoice(p_39);
                          }
                        else
                          {
                            t = o_39;
                          }
                      }
                      ;
                      LocalPopChoice(n_39);
                    }
                  else
                    {
                      t = m_39;
                      t = fetch_1_0(j_23, t);
                    }
                  t = d_35;
                  t = default_system_usage_0_0(t);
                  r_14 = t;
                  t = term_c_36;
                  q_14 = t;
                  t = SSL_exit(q_14);
                }
                ;
                LocalPopChoice(l_39);
              }
            else
              {
                t = k_39;
                {
                  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,c_15 = NULL,d_15 = NULL;
                  t = term_n_38;
                  v_14 = t;
                  t = term_q_35;
                  t_14 = t;
                  t = v_14;
                  w_14 = t;
                  t = term_n_38;
                  u_14 = t;
                  t = SSL_table_get(t_14, u_14);
                  {
                    ATerm q_39 = t;
                    int r_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_7 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
                        t = eval_config_0_0(t);
                        f_7 = t;
                        z_14 = t;
                        t = term_q_35;
                        x_14 = t;
                        t = z_14;
                        a_15 = t;
                        t = term_n_38;
                        y_14 = t;
                        t = SSL_table_put(x_14, y_14, f_7);
                        t = f_7;
                        ;
                        LocalPopChoice(r_39);
                      }
                    else
                      {
                        t = q_39;
                      }
                    t = d_35;
                    t = default_system_about_0_0(t);
                    d_15 = t;
                    t = term_c_36;
                    c_15 = t;
                    t = SSL_exit(c_15);
                  }
                }
              }
          }
          ;
          LocalPopChoice(j_39);
        }
      else
        {
          t = i_39;
          {
            ATerm s_39 = t;
            int t_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_15 = NULL,i_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
                ATerm k_23 (ATerm t)
                {
                  ATerm p_23 (ATerm t)
                  {
                    if(((w_34 != NULL) && (w_34 != t)))
                      _fail(t);
                    else
                      w_34 = t;
                    return(t);
                  }
                  t = Undefined_1_0(p_23, t);
                  return(t);
                }
                t = fetch_1_0(k_23, t);
                k_15 = t;
                t = term_z_7;
                e_15 = t;
                t = k_15;
                l_15 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_34)), term_u_39);
                i_15 = t;
                t = SSL_printnl(e_15, i_15);
                t = (ATerm) ATmakeAppl(sym__2, term_z_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_34)), term_u_39));
                t = default_system_usage_0_0(t);
                n_15 = t;
                t = term_a_26;
                m_15 = t;
                t = SSL_exit(m_15);
                ;
                LocalPopChoice(t_39);
              }
            else
              {
                t = s_39;
              }
          }
        }
      x_34 = t;
      q_15 = t;
      t = term_n_36;
      p_15 = t;
      t = SSL_table_destroy(p_15);
      t = x_34;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm t)
{
  ATerm g_35 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,w_15 = NULL,x_15 = NULL;
  t = parse_options_1_0(l_106, t);
  g_35 = t;
  s_15 = t;
  t = term_v_39;
  r_15 = t;
  t = SSL_table_create(r_15);
  w_15 = t;
  t = term_v_39;
  t_15 = t;
  t = w_15;
  x_15 = t;
  t = term_w_39;
  u_15 = t;
  t = SSL_table_put(t_15, u_15, g_35);
  t = g_35;
  t = n_106(t);
  {
    ATerm x_39 = t;
    int y_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_106, t);
        ;
        LocalPopChoice(y_39);
      }
    else
      {
        t = x_39;
        {
          ATerm z_39 = t;
          int a_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_106(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_40);
            }
          else
            {
              t = z_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm s_23 (ATerm t)
{
  t = if_verbose2_1_0(p_24, t);
  return(t);
}
ATerm c_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_24 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
  b_16 = t;
  t = term_q_35;
  y_15 = t;
  t = b_16;
  c_16 = t;
  t = term_b_40;
  z_15 = t;
  t = c_16;
  d_16 = t;
  t = term_u_2;
  a_16 = t;
  t = SSL_table_put(y_15, z_15, a_16);
  t = term_c_40;
  return(t);
}
ATerm o_24 (ATerm t)
{
  t = term_d_40;
  return(t);
}
ATerm p_24 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,g_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  h_35 = t;
  t = term_y_36;
  k_16 = t;
  t = term_q_35;
  g_16 = t;
  t = k_16;
  l_16 = t;
  t = term_y_36;
  j_16 = t;
  t = SSL_table_get(g_16, j_16);
  {
    ATerm e_40 = t;
    int f_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_7 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,q_16 = NULL;
        t = eval_config_0_0(t);
        o_7 = t;
        o_16 = t;
        t = term_q_35;
        m_16 = t;
        t = o_16;
        q_16 = t;
        t = term_y_36;
        n_16 = t;
        t = SSL_table_put(m_16, n_16, o_7);
        t = o_7;
        ;
        LocalPopChoice(f_40);
      }
    else
      {
        t = e_40;
      }
    i_35 = t;
    t_16 = t;
    t = term_z_7;
    r_16 = t;
    t = t_16;
    u_16 = t;
    t = (ATerm) ATinsert(ATempty, i_35);
    s_16 = t;
    t = SSL_printnl(r_16, s_16);
    t = h_35;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm t)
{
  ATerm q_23 (ATerm t)
  {
    ATerm g_40 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_105(t);
        ;
        LocalPopChoice(h_40);
      }
    else
      {
        t = g_40;
        {
          ATerm i_40 = t;
          int j_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(j_40);
            }
          else
            {
              t = i_40;
              {
                ATerm k_40 = t;
                int l_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(l_40);
                  }
                else
                  {
                    t = k_40;
                    {
                      ATerm m_40 = t;
                      int n_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(c_24, d_24, o_24, t);
                          ;
                          LocalPopChoice(n_40);
                        }
                      else
                        {
                          t = m_40;
                          {
                            ATerm o_40 = t;
                            int p_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(p_40);
                              }
                            else
                              {
                                t = o_40;
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
  ATerm u_23 (ATerm t)
  {
    ATerm j_35 = NULL,k_35 = NULL,v_7 = NULL;
    j_35 = t;
    {
      ATerm q_40 = t;
      int r_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_24 (ATerm t)
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
          t = fetch_1_0(r_24, t);
          ;
          LocalPopChoice(r_40);
        }
      else
        {
          t = q_40;
          t = term_s_40;
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
  t = option_wrap_4_0(q_23, w_105, s_23, u_23, t);
  return(t);
}
ATerm s_24 (ATerm t)
{
  t = _2_0(_id, a_25, t);
  return(t);
}
ATerm a_25 (ATerm t)
{
  ATerm t_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Specification_1_0(b_25, t);
      ;
      LocalPopChoice(u_40);
    }
  else
    {
      t = t_40;
      {
        ATerm a_8 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,z_16 = NULL;
        a_8 = t;
        t = term_v_40;
        x_16 = t;
        t = term_z_7;
        v_16 = t;
        t = x_16;
        z_16 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, a_8), term_v_40);
        w_16 = t;
        t = SSL_printnl(v_16, w_16);
        t = a_8;
      }
    }
  return(t);
}
ATerm b_25 (ATerm t)
{
  t = Cons_2_0(_id, m_25, t);
  return(t);
}
ATerm m_25 (ATerm t)
{
  t = Cons_2_0(n_25, u_25, t);
  return(t);
}
ATerm n_25 (ATerm t)
{
  t = Strategies_1_0(v_25, t);
  return(t);
}
ATerm u_25 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm v_25 (ATerm t)
{
  t = list_1_0(strategy_definition_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(s_24, _fail, default_usage_0_0, t);
  return(t);
}
