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
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Mod_2;
Symbol sym_VarDec_2;
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
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_r_40;
ATerm term_o_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_t_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_c_38;
ATerm term_x_37;
ATerm term_s_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_q_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_r_34;
ATerm term_m_34;
ATerm term_e_34;
ATerm term_c_33;
ATerm term_a_33;
ATerm term_v_31;
ATerm term_m_31;
ATerm term_h_31;
ATerm term_e_31;
ATerm term_v_30;
ATerm term_b_26;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_n_9;
void init_constant_terms (void)
{
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_35);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym__3, term_e_34, term_j_38, term_n_9);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm ConstType_1_0 (ATerm k_68 (ATerm), ATerm);
ATerm FunType_2_0 (ATerm l_68 (ATerm), ATerm m_68 (ATerm), ATerm);
ATerm Let_2_0 (ATerm h_72 (ATerm), ATerm i_72 (ATerm), ATerm);
ATerm Op_2_0 (ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm);
ATerm Var_1_0 (ATerm x_68 (ATerm), ATerm);
ATerm As_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm u_69 (ATerm), ATerm);
ATerm Str_1_0 (ATerm b_69 (ATerm), ATerm);
ATerm Real_1_0 (ATerm a_69 (ATerm), ATerm);
ATerm Int_1_0 (ATerm z_68 (ATerm), ATerm);
ATerm c_17 (ATerm);
ATerm e_17 (ATerm);
ATerm f_17 (ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm m_17 (ATerm);
ATerm o_17 (ATerm);
ATerm p_17 (ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm PrimT_3_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm);
ATerm Where_1_0 (ATerm h_73 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm);
ATerm Build_1_0 (ATerm p_72 (ATerm), ATerm);
ATerm Match_1_0 (ATerm o_72 (ATerm), ATerm);
ATerm Thread_1_0 (ATerm v_73 (ATerm), ATerm);
ATerm All_1_0 (ATerm u_73 (ATerm), ATerm);
ATerm Some_1_0 (ATerm s_73 (ATerm), ATerm);
ATerm One_1_0 (ATerm t_73 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm v_67 (ATerm), ATerm w_67 (ATerm), ATerm);
ATerm Path_2_0 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm e_73 (ATerm), ATerm f_73 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm g_72 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm l_72 (ATerm), ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm);
ATerm LGChoice_2_0 (ATerm z_72 (ATerm), ATerm a_73 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm z_71 (ATerm), ATerm a_72 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm);
ATerm Test_1_0 (ATerm i_73 (ATerm), ATerm);
ATerm Not_1_0 (ATerm g_73 (ATerm), ATerm);
ATerm q_17 (ATerm);
ATerm r_17 (ATerm);
ATerm s_17 (ATerm);
ATerm t_17 (ATerm);
ATerm y_17 (ATerm);
ATerm z_17 (ATerm);
ATerm a_18 (ATerm);
ATerm b_18 (ATerm);
ATerm c_18 (ATerm);
ATerm d_18 (ATerm);
ATerm f_18 (ATerm);
ATerm k_18 (ATerm);
ATerm l_18 (ATerm);
ATerm o_18 (ATerm);
ATerm p_18 (ATerm);
ATerm q_18 (ATerm);
ATerm s_18 (ATerm);
ATerm t_18 (ATerm);
ATerm x_18 (ATerm);
ATerm y_18 (ATerm);
ATerm z_18 (ATerm);
ATerm a_19 (ATerm);
ATerm b_19 (ATerm);
ATerm c_19 (ATerm);
ATerm d_19 (ATerm);
ATerm f_19 (ATerm);
ATerm g_19 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm);
ATerm Mod_2_0 (ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm);
ATerm h_19 (ATerm);
ATerm i_19 (ATerm);
ATerm j_19 (ATerm);
ATerm k_19 (ATerm);
ATerm l_19 (ATerm);
ATerm m_19 (ATerm);
ATerm o_19 (ATerm);
ATerm p_19 (ATerm);
ATerm q_19 (ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm list_1_0 (ATerm k_88 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm z_67 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm t_67 (ATerm), ATerm u_67 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm e_68 (ATerm), ATerm);
ATerm _2_0 (ATerm e_63 (ATerm), ATerm f_63 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm w_100 (ATerm), ATerm);
ATerm u_19 (ATerm);
ATerm v_19 (ATerm);
ATerm x_19 (ATerm);
ATerm y_19 (ATerm);
ATerm z_19 (ATerm);
ATerm a_20 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_103 (ATerm), ATerm);
ATerm s_28 (ATerm m_28, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_20 (ATerm);
ATerm g_20 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_88 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_88 (ATerm), ATerm);
ATerm i_20 (ATerm);
ATerm j_20 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm l_20 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm h_102 (ATerm), ATerm);
ATerm m_20 (ATerm);
ATerm n_20 (ATerm);
ATerm q_20 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm r_20 (ATerm);
ATerm s_20 (ATerm);
ATerm t_20 (ATerm);
ATerm w_20 (ATerm);
ATerm y_20 (ATerm);
ATerm z_20 (ATerm);
ATerm e_21 (ATerm);
ATerm f_21 (ATerm);
ATerm g_21 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm h_21 (ATerm);
ATerm i_21 (ATerm);
ATerm k_21 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm l_21 (ATerm);
ATerm m_21 (ATerm);
ATerm n_21 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_21 (ATerm);
ATerm p_21 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm g_102 (ATerm), ATerm);
ATerm t_21 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm v_21 (ATerm);
ATerm need_help_1_0 (ATerm w_104 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_88 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm n_80 (ATerm), ATerm);
ATerm y_21 (ATerm);
ATerm z_21 (ATerm);
ATerm b_22 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_80 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_22 (ATerm);
ATerm d_22 (ATerm);
ATerm e_22 (ATerm);
ATerm f_22 (ATerm);
ATerm g_22 (ATerm);
ATerm l_22 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm m_22 (ATerm);
ATerm parse_options_p__1_0 (ATerm z_106 (ATerm), ATerm);
ATerm q_22 (ATerm);
ATerm r_22 (ATerm);
ATerm s_22 (ATerm);
ATerm t_22 (ATerm);
ATerm parse_options_1_0 (ATerm y_106 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm);
ATerm y_22 (ATerm);
ATerm a_23 (ATerm);
ATerm b_23 (ATerm);
ATerm c_23 (ATerm);
ATerm d_23 (ATerm);
ATerm iowrap_3_0 (ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm);
ATerm f_23 (ATerm);
ATerm g_23 (ATerm);
ATerm h_23 (ATerm);
ATerm i_23 (ATerm);
ATerm j_23 (ATerm);
ATerm k_23 (ATerm);
ATerm l_23 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_0 = NULL,l_0 = NULL,k_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL,t_0 = NULL,u_0 = NULL;
  f_0 = t;
  t = term_n_9;
  t = whoami_0_0(t);
  l_0 = t;
  n_0 = t;
  t = term_n_23;
  k_0 = t;
  t = n_0;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_23), l_0), term_o_23);
  m_0 = t;
  t = SSL_printnl(k_0, m_0);
  u_0 = t;
  t = term_v_23;
  t_0 = t;
  t = SSL_exit(t_0);
  t = f_0;
  return(t);
}
ATerm ConstType_1_0 (ATerm k_68 (ATerm), ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL,v_0 = NULL,w_0 = NULL;
  s_0 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      q_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_0);
  p_0 = t;
  t = q_0;
  t = k_68(t);
  r_0 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, r_0);
  v_0 = t;
  t = SSLsetAnnotations(v_0, p_0);
  return(t);
}
ATerm FunType_2_0 (ATerm l_68 (ATerm), ATerm m_68 (ATerm), ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL,n_1 = NULL,r_1 = NULL,u_1 = NULL,v_1 = NULL,x_0 = NULL,z_0 = NULL;
  v_1 = t;
  if(match_cons(t, sym_FunType_2))
    {
      i_1 = ATgetArgument(t, 0);
      n_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_1);
  h_1 = t;
  t = i_1;
  t = l_68(t);
  r_1 = t;
  t = n_1;
  t = m_68(t);
  u_1 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, r_1, u_1);
  x_0 = t;
  t = SSLsetAnnotations(x_0, h_1);
  return(t);
}
ATerm Let_2_0 (ATerm h_72 (ATerm), ATerm i_72 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,b_2 = NULL,c_2 = NULL,e_2 = NULL,f_2 = NULL,h_2 = NULL,a_1 = NULL,b_1 = NULL;
  h_2 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_2 = ATgetArgument(t, 0);
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_2);
  z_1 = t;
  t = b_2;
  t = h_72(t);
  e_2 = t;
  t = c_2;
  t = i_72(t);
  f_2 = t;
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, e_2, f_2);
  a_1 = t;
  t = SSLsetAnnotations(a_1, z_1);
  return(t);
}
ATerm Op_2_0 (ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,q_2 = NULL,s_2 = NULL,c_1 = NULL,d_1 = NULL;
  s_2 = t;
  if(match_cons(t, sym_Op_2))
    {
      l_2 = ATgetArgument(t, 0);
      m_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_2);
  k_2 = t;
  t = l_2;
  t = d_69(t);
  n_2 = t;
  t = m_2;
  t = e_69(t);
  q_2 = t;
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, n_2, q_2);
  c_1 = t;
  t = SSLsetAnnotations(c_1, k_2);
  return(t);
}
ATerm Var_1_0 (ATerm x_68 (ATerm), ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,c_3 = NULL,e_1 = NULL,g_1 = NULL;
  c_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_3);
  w_2 = t;
  t = x_2;
  t = x_68(t);
  y_2 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_2);
  e_1 = t;
  t = SSLsetAnnotations(e_1, w_2);
  return(t);
}
ATerm As_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,m_3 = NULL,n_3 = NULL,j_1 = NULL,l_1 = NULL;
  n_3 = t;
  if(match_cons(t, sym_As_2))
    {
      g_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_3);
  f_3 = t;
  t = g_3;
  t = o_69(t);
  j_3 = t;
  t = i_3;
  t = p_69(t);
  m_3 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, j_3, m_3);
  j_1 = t;
  t = SSLsetAnnotations(j_1, f_3);
  return(t);
}
ATerm BuildDefault_1_0 (ATerm u_69 (ATerm), ATerm t)
{
  ATerm b_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,m_1 = NULL,o_1 = NULL;
  s_5 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      q_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_5);
  b_5 = t;
  t = q_5;
  t = u_69(t);
  r_5 = t;
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym_BuildDefault_1, r_5);
  m_1 = t;
  t = SSLsetAnnotations(m_1, b_5);
  return(t);
}
ATerm Str_1_0 (ATerm b_69 (ATerm), ATerm t)
{
  ATerm b_6 = NULL,k_6 = NULL,n_6 = NULL,o_6 = NULL,p_1 = NULL,q_1 = NULL;
  o_6 = t;
  if(match_cons(t, sym_Str_1))
    {
      k_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_6);
  b_6 = t;
  t = k_6;
  t = b_69(t);
  n_6 = t;
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, n_6);
  p_1 = t;
  t = SSLsetAnnotations(p_1, b_6);
  return(t);
}
ATerm Real_1_0 (ATerm a_69 (ATerm), ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL,g_7 = NULL,s_1 = NULL,t_1 = NULL;
  g_7 = t;
  if(match_cons(t, sym_Real_1))
    {
      b_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_7);
  a_7 = t;
  t = b_7;
  t = a_69(t);
  c_7 = t;
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_Real_1, c_7);
  s_1 = t;
  t = SSLsetAnnotations(s_1, a_7);
  return(t);
}
ATerm Int_1_0 (ATerm z_68 (ATerm), ATerm t)
{
  ATerm j_7 = NULL,m_7 = NULL,q_7 = NULL,b_8 = NULL,w_1 = NULL,x_1 = NULL;
  b_8 = t;
  if(match_cons(t, sym_Int_1))
    {
      m_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_8);
  j_7 = t;
  t = m_7;
  t = z_68(t);
  q_7 = t;
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, q_7);
  w_1 = t;
  t = SSLsetAnnotations(w_1, j_7);
  return(t);
}
ATerm c_17 (ATerm t)
{
  ATerm v_8 = NULL;
  v_8 = t;
  t = SSL_is_string(v_8);
  return(t);
}
ATerm e_17 (ATerm t)
{
  ATerm y_8 = NULL;
  y_8 = t;
  t = SSL_is_int(y_8);
  return(t);
}
ATerm f_17 (ATerm t)
{
  ATerm z_8 = NULL;
  z_8 = t;
  t = SSL_is_real(z_8);
  return(t);
}
ATerm g_17 (ATerm t)
{
  ATerm h_9 = NULL;
  h_9 = t;
  t = SSL_is_string(h_9);
  return(t);
}
ATerm h_17 (ATerm t)
{
  t = Var_1_0(m_17, t);
  return(t);
}
ATerm m_17 (ATerm t)
{
  ATerm i_9 = NULL;
  i_9 = t;
  t = SSL_is_string(i_9);
  return(t);
}
ATerm o_17 (ATerm t)
{
  ATerm m_9 = NULL;
  m_9 = t;
  t = SSL_is_string(m_9);
  return(t);
}
ATerm p_17 (ATerm t)
{
  t = list_1_0(term_expression_0_0, t);
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm g_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(c_17, t);
            ;
            LocalPopChoice(h_24);
          }
        else
          {
            t = g_24;
            {
              ATerm i_24 = t;
              int j_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1_0(e_17, t);
                  ;
                  LocalPopChoice(j_24);
                }
              else
                {
                  t = i_24;
                  {
                    ATerm k_24 = t;
                    int l_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1_0(f_17, t);
                        ;
                        LocalPopChoice(l_24);
                      }
                    else
                      {
                        t = k_24;
                        {
                          ATerm m_24 = t;
                          int y_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1_0(g_17, t);
                              ;
                              LocalPopChoice(y_24);
                            }
                          else
                            {
                              t = m_24;
                              {
                                ATerm z_24 = t;
                                int g_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1_0(term_expression_0_0, t);
                                    ;
                                    LocalPopChoice(g_25);
                                  }
                                else
                                  {
                                    t = z_24;
                                    {
                                      ATerm h_25 = t;
                                      int o_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = As_2_0(h_17, term_expression_0_0, t);
                                          ;
                                          LocalPopChoice(o_25);
                                        }
                                      else
                                        {
                                          t = h_25;
                                          {
                                            ATerm p_25 = t;
                                            int a_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Op_2_0(o_17, p_17, t);
                                                ;
                                                LocalPopChoice(a_26);
                                              }
                                            else
                                              {
                                                t = p_25;
                                                {
                                                  ATerm b_0 = NULL,y_1 = NULL,a_2 = NULL,d_2 = NULL,g_2 = NULL;
                                                  b_0 = t;
                                                  t = term_b_26;
                                                  d_2 = t;
                                                  t = term_n_23;
                                                  y_1 = t;
                                                  t = d_2;
                                                  g_2 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATempty, b_0), term_b_26);
                                                  a_2 = t;
                                                  t = SSL_printnl(y_1, a_2);
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
            }
          }
      }
    }
  return(t);
}
ATerm PrimT_3_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm t)
{
  ATerm p_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,d_10 = NULL,i_10 = NULL,n_10 = NULL,i_2 = NULL,j_2 = NULL;
  n_10 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      t_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
      v_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_10);
  p_9 = t;
  t = t_9;
  t = n_73(t);
  w_9 = t;
  t = u_9;
  t = o_73(t);
  d_10 = t;
  t = v_9;
  t = p_73(t);
  i_10 = t;
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, w_9, d_10, i_10);
  i_2 = t;
  t = SSLsetAnnotations(i_2, p_9);
  return(t);
}
ATerm Where_1_0 (ATerm h_73 (ATerm), ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,b_11 = NULL,c_11 = NULL,o_2 = NULL,u_2 = NULL;
  c_11 = t;
  if(match_cons(t, sym_Where_1))
    {
      x_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_11);
  w_10 = t;
  t = x_10;
  t = h_73(t);
  b_11 = t;
  u_2 = t;
  t = (ATerm) ATmakeAppl(sym_Where_1, b_11);
  o_2 = t;
  t = SSLsetAnnotations(o_2, w_10);
  return(t);
}
ATerm Scope_2_0 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,k_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,v_2 = NULL,z_2 = NULL;
  p_11 = t;
  if(match_cons(t, sym_Scope_2))
    {
      i_11 = ATgetArgument(t, 0);
      k_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_11);
  h_11 = t;
  t = i_11;
  t = r_72(t);
  n_11 = t;
  t = k_11;
  t = s_72(t);
  o_11 = t;
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, n_11, o_11);
  v_2 = t;
  t = SSLsetAnnotations(v_2, h_11);
  return(t);
}
ATerm Build_1_0 (ATerm p_72 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,y_11 = NULL,b_12 = NULL,a_3 = NULL,b_3 = NULL;
  b_12 = t;
  if(match_cons(t, sym_Build_1))
    {
      w_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_12);
  v_11 = t;
  t = w_11;
  t = p_72(t);
  y_11 = t;
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, y_11);
  a_3 = t;
  t = SSLsetAnnotations(a_3, v_11);
  return(t);
}
ATerm Match_1_0 (ATerm o_72 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,h_12 = NULL,i_12 = NULL,n_12 = NULL,d_3 = NULL,e_3 = NULL;
  n_12 = t;
  if(match_cons(t, sym_Match_1))
    {
      h_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_12);
  e_12 = t;
  t = h_12;
  t = o_72(t);
  i_12 = t;
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, i_12);
  d_3 = t;
  t = SSLsetAnnotations(d_3, e_12);
  return(t);
}
ATerm Thread_1_0 (ATerm v_73 (ATerm), ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,t_12 = NULL,u_12 = NULL,h_3 = NULL,o_3 = NULL;
  u_12 = t;
  if(match_cons(t, sym_Thread_1))
    {
      r_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_12);
  q_12 = t;
  t = r_12;
  t = v_73(t);
  t_12 = t;
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Thread_1, t_12);
  h_3 = t;
  t = SSLsetAnnotations(h_3, q_12);
  return(t);
}
ATerm All_1_0 (ATerm u_73 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,g_13 = NULL,p_13 = NULL,p_3 = NULL,q_3 = NULL;
  p_13 = t;
  if(match_cons(t, sym_All_1))
    {
      c_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_13);
  b_13 = t;
  t = c_13;
  t = u_73(t);
  g_13 = t;
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_All_1, g_13);
  p_3 = t;
  t = SSLsetAnnotations(p_3, b_13);
  return(t);
}
ATerm Some_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  ATerm v_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,r_3 = NULL,s_3 = NULL;
  c_14 = t;
  if(match_cons(t, sym_Some_1))
    {
      a_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_14);
  v_13 = t;
  t = a_14;
  t = s_73(t);
  b_14 = t;
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, b_14);
  r_3 = t;
  t = SSLsetAnnotations(r_3, v_13);
  return(t);
}
ATerm One_1_0 (ATerm t_73 (ATerm), ATerm t)
{
  ATerm p_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,t_3 = NULL,u_3 = NULL;
  x_14 = t;
  if(match_cons(t, sym_One_1))
    {
      v_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_14);
  p_14 = t;
  t = v_14;
  t = t_73(t);
  w_14 = t;
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym_One_1, w_14);
  t_3 = t;
  t = SSLsetAnnotations(t_3, p_14);
  return(t);
}
ATerm Cong_2_0 (ATerm v_67 (ATerm), ATerm w_67 (ATerm), ATerm t)
{
  ATerm l_15 = NULL,o_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,x_15 = NULL,v_3 = NULL,w_3 = NULL;
  x_15 = t;
  if(match_cons(t, sym_Cong_2))
    {
      o_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_15);
  l_15 = t;
  t = o_15;
  t = v_67(t);
  u_15 = t;
  t = t_15;
  t = w_67(t);
  v_15 = t;
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, u_15, v_15);
  v_3 = t;
  t = SSLsetAnnotations(v_3, l_15);
  return(t);
}
ATerm Path_2_0 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,r_16 = NULL,v_16 = NULL,x_16 = NULL,y_16 = NULL,x_3 = NULL,y_3 = NULL;
  y_16 = t;
  if(match_cons(t, sym_Path_2))
    {
      p_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_16);
  o_16 = t;
  t = p_16;
  t = q_73(t);
  v_16 = t;
  t = r_16;
  t = r_73(t);
  x_16 = t;
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym_Path_2, v_16, x_16);
  x_3 = t;
  t = SSLsetAnnotations(x_3, o_16);
  return(t);
}
ATerm Rec_2_0 (ATerm e_73 (ATerm), ATerm f_73 (ATerm), ATerm t)
{
  ATerm d_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,n_17 = NULL,z_3 = NULL,a_4 = NULL;
  n_17 = t;
  if(match_cons(t, sym_Rec_2))
    {
      i_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_17);
  d_17 = t;
  t = i_17;
  t = e_73(t);
  k_17 = t;
  t = j_17;
  t = f_73(t);
  l_17 = t;
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, k_17, l_17);
  z_3 = t;
  t = SSLsetAnnotations(z_3, d_17);
  return(t);
}
ATerm SVar_1_0 (ATerm g_72 (ATerm), ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,b_4 = NULL,c_4 = NULL;
  x_17 = t;
  if(match_cons(t, sym_SVar_1))
    {
      v_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_17);
  u_17 = t;
  t = v_17;
  t = g_72(t);
  w_17 = t;
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, w_17);
  b_4 = t;
  t = SSLsetAnnotations(b_4, u_17);
  return(t);
}
ATerm CallT_3_0 (ATerm l_72 (ATerm), ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm t)
{
  ATerm e_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,m_18 = NULL,n_18 = NULL,r_18 = NULL,d_4 = NULL,e_4 = NULL;
  r_18 = t;
  if(match_cons(t, sym_CallT_3))
    {
      g_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
      i_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_18);
  e_18 = t;
  t = g_18;
  t = l_72(t);
  j_18 = t;
  t = h_18;
  t = m_72(t);
  m_18 = t;
  t = i_18;
  t = n_72(t);
  n_18 = t;
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, j_18, m_18, n_18);
  d_4 = t;
  t = SSLsetAnnotations(d_4, e_18);
  return(t);
}
ATerm LGChoice_2_0 (ATerm z_72 (ATerm), ATerm a_73 (ATerm), ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,e_19 = NULL,n_19 = NULL,w_19 = NULL,f_4 = NULL,g_4 = NULL;
  w_19 = t;
  if(match_cons(t, sym_LGChoice_2))
    {
      v_18 = ATgetArgument(t, 0);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_19);
  u_18 = t;
  t = v_18;
  t = z_72(t);
  e_19 = t;
  t = w_18;
  t = a_73(t);
  n_19 = t;
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym_LGChoice_2, e_19, n_19);
  f_4 = t;
  t = SSLsetAnnotations(f_4, u_18);
  return(t);
}
ATerm GChoice_2_0 (ATerm z_71 (ATerm), ATerm a_72 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,o_20 = NULL,p_20 = NULL,i_4 = NULL,j_4 = NULL;
  p_20 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      d_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_20);
  c_20 = t;
  t = d_20;
  t = z_71(t);
  f_20 = t;
  t = e_20;
  t = a_72(t);
  o_20 = t;
  j_4 = t;
  t = (ATerm) ATmakeAppl(sym_GChoice_2, f_20, o_20);
  i_4 = t;
  t = SSLsetAnnotations(i_4, c_20);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,x_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,j_21 = NULL,k_4 = NULL,l_4 = NULL;
  j_21 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      v_20 = ATgetArgument(t, 0);
      x_20 = ATgetArgument(t, 1);
      a_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_21);
  u_20 = t;
  t = v_20;
  t = b_73(t);
  b_21 = t;
  t = x_20;
  t = c_73(t);
  c_21 = t;
  t = a_21;
  t = d_73(t);
  d_21 = t;
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, b_21, c_21, d_21);
  k_4 = t;
  t = SSLsetAnnotations(k_4, u_20);
  return(t);
}
ATerm LChoice_2_0 (ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,u_21 = NULL,w_21 = NULL,a_22 = NULL,m_4 = NULL,n_4 = NULL;
  a_22 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      r_21 = ATgetArgument(t, 0);
      s_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_22);
  q_21 = t;
  t = r_21;
  t = x_72(t);
  u_21 = t;
  t = s_21;
  t = y_72(t);
  w_21 = t;
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, u_21, w_21);
  m_4 = t;
  t = SSLsetAnnotations(m_4, q_21);
  return(t);
}
ATerm Choice_2_0 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,o_22 = NULL,x_22 = NULL,o_4 = NULL,q_4 = NULL;
  x_22 = t;
  if(match_cons(t, sym_Choice_2))
    {
      i_22 = ATgetArgument(t, 0);
      j_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_22);
  h_22 = t;
  t = i_22;
  t = v_71(t);
  k_22 = t;
  t = j_22;
  t = w_71(t);
  o_22 = t;
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, k_22, o_22);
  o_4 = t;
  t = SSLsetAnnotations(o_4, h_22);
  return(t);
}
ATerm Seq_2_0 (ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm t)
{
  ATerm m_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,r_4 = NULL,s_4 = NULL;
  t_23 = t;
  if(match_cons(t, sym_Seq_2))
    {
      p_23 = ATgetArgument(t, 0);
      q_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_23);
  m_23 = t;
  t = p_23;
  t = v_72(t);
  r_23 = t;
  t = q_23;
  t = w_72(t);
  s_23 = t;
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, r_23, s_23);
  r_4 = t;
  t = SSLsetAnnotations(r_4, m_23);
  return(t);
}
ATerm Test_1_0 (ATerm i_73 (ATerm), ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,w_4 = NULL,x_4 = NULL;
  z_23 = t;
  if(match_cons(t, sym_Test_1))
    {
      x_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_23);
  w_23 = t;
  t = x_23;
  t = i_73(t);
  y_23 = t;
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym_Test_1, y_23);
  w_4 = t;
  t = SSLsetAnnotations(w_4, w_23);
  return(t);
}
ATerm Not_1_0 (ATerm g_73 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,a_5 = NULL,c_5 = NULL;
  f_24 = t;
  if(match_cons(t, sym_Not_1))
    {
      d_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_24);
  c_24 = t;
  t = d_24;
  t = g_73(t);
  e_24 = t;
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, e_24);
  a_5 = t;
  t = SSLsetAnnotations(a_5, c_24);
  return(t);
}
ATerm q_17 (ATerm t)
{
  t = SVar_1_0(t_17, t);
  return(t);
}
ATerm r_17 (ATerm t)
{
  t = list_1_0(strategy_expression_0_0, t);
  return(t);
}
ATerm s_17 (ATerm t)
{
  t = list_1_0(term_expression_0_0, t);
  return(t);
}
ATerm t_17 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_24 = NULL;
      n_24 = t;
      t = SSL_is_string(n_24);
      ;
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      t = Mod_2_0(y_17, z_17, t);
    }
  return(t);
}
ATerm y_17 (ATerm t)
{
  ATerm o_24 = NULL;
  o_24 = t;
  t = SSL_is_string(o_24);
  return(t);
}
ATerm z_17 (ATerm t)
{
  ATerm p_24 = NULL;
  p_24 = t;
  t = SSL_is_string(p_24);
  return(t);
}
ATerm a_18 (ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  t = SSL_is_string(q_24);
  return(t);
}
ATerm b_18 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  t = SSL_is_int(r_24);
  return(t);
}
ATerm c_18 (ATerm t)
{
  ATerm s_24 = NULL;
  s_24 = t;
  t = SSL_is_string(s_24);
  return(t);
}
ATerm d_18 (ATerm t)
{
  t = list_1_0(strategy_expression_0_0, t);
  return(t);
}
ATerm f_18 (ATerm t)
{
  t = list_1_0(k_18, t);
  return(t);
}
ATerm k_18 (ATerm t)
{
  ATerm t_24 = NULL;
  t_24 = t;
  t = SSL_is_string(t_24);
  return(t);
}
ATerm l_18 (ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  t = SSL_is_string(u_24);
  return(t);
}
ATerm o_18 (ATerm t)
{
  t = list_1_0(strategy_expression_0_0, t);
  return(t);
}
ATerm p_18 (ATerm t)
{
  t = list_1_0(term_expression_0_0, t);
  return(t);
}
ATerm q_18 (ATerm t)
{
  t = list_1_0(s_18, t);
  return(t);
}
ATerm s_18 (ATerm t)
{
  t = SDefT_4_0(t_18, x_18, y_18, strategy_expression_0_0, t);
  return(t);
}
ATerm t_18 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  t = SSL_is_string(v_24);
  return(t);
}
ATerm x_18 (ATerm t)
{
  t = list_1_0(z_18, t);
  return(t);
}
ATerm y_18 (ATerm t)
{
  t = list_1_0(d_19, t);
  return(t);
}
ATerm z_18 (ATerm t)
{
  t = VarDec_2_0(a_19, b_19, t);
  return(t);
}
ATerm a_19 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  t = SSL_is_string(w_24);
  return(t);
}
ATerm b_19 (ATerm t)
{
  t = FunType_2_0(c_19, _id, t);
  return(t);
}
ATerm c_19 (ATerm t)
{
  t = list_1_0(_id, t);
  return(t);
}
ATerm d_19 (ATerm t)
{
  t = VarDec_2_0(f_19, g_19, t);
  return(t);
}
ATerm f_19 (ATerm t)
{
  ATerm x_24 = NULL;
  x_24 = t;
  t = SSL_is_string(x_24);
  return(t);
}
ATerm g_19 (ATerm t)
{
  t = ConstType_1_0(_id, t);
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm e_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      ;
      LocalPopChoice(k_26);
    }
  else
    {
      t = e_26;
      {
        ATerm q_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            ;
            LocalPopChoice(r_26);
          }
        else
          {
            t = q_26;
            {
              ATerm y_26 = t;
              int z_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1_0(strategy_expression_0_0, t);
                  ;
                  LocalPopChoice(z_26);
                }
              else
                {
                  t = y_26;
                  {
                    ATerm e_27 = t;
                    int f_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1_0(strategy_expression_0_0, t);
                        ;
                        LocalPopChoice(f_27);
                      }
                    else
                      {
                        t = e_27;
                        {
                          ATerm m_27 = t;
                          int n_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                              ;
                              LocalPopChoice(n_27);
                            }
                          else
                            {
                              t = m_27;
                              {
                                ATerm f_28 = t;
                                int g_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                    ;
                                    LocalPopChoice(g_28);
                                  }
                                else
                                  {
                                    t = f_28;
                                    {
                                      ATerm h_28 = t;
                                      int i_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                          ;
                                          LocalPopChoice(i_28);
                                        }
                                      else
                                        {
                                          t = h_28;
                                          {
                                            ATerm j_28 = t;
                                            int k_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3_0(strategy_expression_0_0, strategy_expression_0_0, strategy_expression_0_0, t);
                                                ;
                                                LocalPopChoice(k_28);
                                              }
                                            else
                                              {
                                                t = j_28;
                                                {
                                                  ATerm l_28 = t;
                                                  int n_28 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                      ;
                                                      LocalPopChoice(n_28);
                                                    }
                                                  else
                                                    {
                                                      t = l_28;
                                                      {
                                                        ATerm o_28 = t;
                                                        int r_28 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                            ;
                                                            LocalPopChoice(r_28);
                                                          }
                                                        else
                                                          {
                                                            t = o_28;
                                                            {
                                                              ATerm w_28 = t;
                                                              int x_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = CallT_3_0(q_17, r_17, s_17, t);
                                                                  ;
                                                                  LocalPopChoice(x_28);
                                                                }
                                                              else
                                                                {
                                                                  t = w_28;
                                                                  {
                                                                    ATerm y_28 = t;
                                                                    int z_28 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2_0(a_18, strategy_expression_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(z_28);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_28;
                                                                        {
                                                                          ATerm m_29 = t;
                                                                          int n_29 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2_0(b_18, strategy_expression_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(n_29);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = m_29;
                                                                              {
                                                                                ATerm o_29 = t;
                                                                                int p_29 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Cong_2_0(c_18, d_18, t);
                                                                                    ;
                                                                                    LocalPopChoice(p_29);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = o_29;
                                                                                    {
                                                                                      ATerm r_29 = t;
                                                                                      int s_29 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1_0(strategy_expression_0_0, t);
                                                                                          ;
                                                                                          LocalPopChoice(s_29);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = r_29;
                                                                                          {
                                                                                            ATerm v_29 = t;
                                                                                            int w_29 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1_0(strategy_expression_0_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(w_29);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = v_29;
                                                                                                {
                                                                                                  ATerm x_29 = t;
                                                                                                  int y_29 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1_0(strategy_expression_0_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(y_29);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = x_29;
                                                                                                      {
                                                                                                        ATerm z_29 = t;
                                                                                                        int b_30 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1_0(strategy_expression_0_0, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(b_30);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = z_29;
                                                                                                            {
                                                                                                              ATerm f_30 = t;
                                                                                                              int i_30 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1_0(term_expression_0_0, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(i_30);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = f_30;
                                                                                                                  {
                                                                                                                    ATerm j_30 = t;
                                                                                                                    int k_30 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1_0(term_expression_0_0, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(k_30);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = j_30;
                                                                                                                        {
                                                                                                                          ATerm l_30 = t;
                                                                                                                          int m_30 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Scope_2_0(f_18, strategy_expression_0_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(m_30);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = l_30;
                                                                                                                              {
                                                                                                                                ATerm n_30 = t;
                                                                                                                                int o_30 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1_0(strategy_expression_0_0, t);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(o_30);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = n_30;
                                                                                                                                    {
                                                                                                                                      ATerm q_30 = t;
                                                                                                                                      int r_30 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = PrimT_3_0(l_18, o_18, p_18, t);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(r_30);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = q_30;
                                                                                                                                          {
                                                                                                                                            ATerm s_30 = t;
                                                                                                                                            int u_30 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = Let_2_0(q_18, strategy_expression_0_0, t);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(u_30);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = s_30;
                                                                                                                                                {
                                                                                                                                                  ATerm y_0 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
                                                                                                                                                  y_0 = t;
                                                                                                                                                  t = term_v_30;
                                                                                                                                                  f_5 = t;
                                                                                                                                                  t = term_n_23;
                                                                                                                                                  d_5 = t;
                                                                                                                                                  t = f_5;
                                                                                                                                                  g_5 = t;
                                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATempty, y_0), term_v_30);
                                                                                                                                                  e_5 = t;
                                                                                                                                                  t = SSL_printnl(d_5, e_5);
                                                                                                                                                  t = y_0;
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
ATerm VarDec_2_0 (ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,h_5 = NULL,i_5 = NULL;
  f_25 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      b_25 = ATgetArgument(t, 0);
      c_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_25);
  a_25 = t;
  t = b_25;
  t = s_74(t);
  d_25 = t;
  t = c_25;
  t = t_74(t);
  e_25 = t;
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_25, e_25);
  h_5 = t;
  t = SSLsetAnnotations(h_5, a_25);
  return(t);
}
ATerm Mod_2_0 (ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,j_5 = NULL,k_5 = NULL;
  n_25 = t;
  if(match_cons(t, sym_Mod_2))
    {
      j_25 = ATgetArgument(t, 0);
      k_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_25);
  i_25 = t;
  t = j_25;
  t = k_74(t);
  l_25 = t;
  t = k_25;
  t = l_74(t);
  m_25 = t;
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym_Mod_2, l_25, m_25);
  j_5 = t;
  t = SSLsetAnnotations(j_5, i_25);
  return(t);
}
ATerm SDefT_4_0 (ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,l_5 = NULL,m_5 = NULL;
  z_25 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      r_25 = ATgetArgument(t, 0);
      s_25 = ATgetArgument(t, 1);
      t_25 = ATgetArgument(t, 2);
      u_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_25);
  q_25 = t;
  t = r_25;
  t = z_74(t);
  v_25 = t;
  t = s_25;
  t = a_75(t);
  w_25 = t;
  t = t_25;
  t = b_75(t);
  x_25 = t;
  t = u_25;
  t = c_75(t);
  y_25 = t;
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, v_25, w_25, x_25, y_25);
  l_5 = t;
  t = SSLsetAnnotations(l_5, q_25);
  return(t);
}
ATerm h_19 (ATerm t)
{
  ATerm w_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_26 = NULL;
      f_26 = t;
      t = SSL_is_string(f_26);
      ;
      LocalPopChoice(z_30);
    }
  else
    {
      t = w_30;
      t = Mod_2_0(k_19, l_19, t);
    }
  return(t);
}
ATerm i_19 (ATerm t)
{
  t = list_1_0(m_19, t);
  return(t);
}
ATerm j_19 (ATerm t)
{
  t = list_1_0(p_19, t);
  return(t);
}
ATerm k_19 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  t = SSL_is_string(g_26);
  return(t);
}
ATerm l_19 (ATerm t)
{
  ATerm h_26 = NULL;
  h_26 = t;
  t = SSL_is_string(h_26);
  return(t);
}
ATerm m_19 (ATerm t)
{
  t = VarDec_2_0(o_19, _id, t);
  return(t);
}
ATerm o_19 (ATerm t)
{
  ATerm i_26 = NULL;
  i_26 = t;
  t = SSL_is_string(i_26);
  return(t);
}
ATerm p_19 (ATerm t)
{
  t = VarDec_2_0(q_19, _id, t);
  return(t);
}
ATerm q_19 (ATerm t)
{
  ATerm j_26 = NULL;
  j_26 = t;
  t = SSL_is_string(j_26);
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDefT_4_0(h_19, i_19, j_19, strategy_expression_0_0, t);
      ;
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
      {
        ATerm f_1 = NULL,o_5 = NULL,p_5 = NULL,t_5 = NULL,u_5 = NULL;
        f_1 = t;
        t = term_e_31;
        t_5 = t;
        t = term_n_23;
        o_5 = t;
        t = t_5;
        u_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, f_1), term_e_31);
        p_5 = t;
        t = SSL_printnl(o_5, p_5);
        t = f_1;
      }
    }
  return(t);
}
ATerm list_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm l_26 (ATerm t)
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
        t = Cons_2_0(k_88, l_26, t);
      }
    return(t);
  }
  t = l_26(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm z_67 (ATerm), ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,v_5 = NULL,x_5 = NULL;
  p_26 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      n_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_26);
  m_26 = t;
  t = n_26;
  t = z_67(t);
  o_26 = t;
  x_5 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, o_26);
  v_5 = t;
  t = SSLsetAnnotations(v_5, m_26);
  return(t);
}
ATerm Cons_2_0 (ATerm t_67 (ATerm), ATerm u_67 (ATerm), ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_5 = NULL,z_5 = NULL;
  x_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_26 = ATgetFirst((ATermList) t);
      u_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_26);
  s_26 = t;
  t = t_26;
  t = t_67(t);
  v_26 = t;
  t = u_26;
  t = u_67(t);
  w_26 = t;
  z_5 = t;
  t = (ATerm) ATinsert(CheckATermList(w_26), v_26);
  y_5 = t;
  t = SSLsetAnnotations(y_5, s_26);
  return(t);
}
ATerm Specification_1_0 (ATerm e_68 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,c_6 = NULL,d_6 = NULL;
  d_27 = t;
  if(match_cons(t, sym_Specification_1))
    {
      b_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_27);
  a_27 = t;
  t = b_27;
  t = e_68(t);
  c_27 = t;
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, c_27);
  c_6 = t;
  t = SSLsetAnnotations(c_6, a_27);
  return(t);
}
ATerm _2_0 (ATerm e_63 (ATerm), ATerm f_63 (ATerm), ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,e_6 = NULL,g_6 = NULL;
  l_27 = t;
  if(match_cons(t, sym__2))
    {
      h_27 = ATgetArgument(t, 0);
      i_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_27);
  g_27 = t;
  t = h_27;
  t = e_63(t);
  j_27 = t;
  t = i_27;
  t = f_63(t);
  k_27 = t;
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_27, k_27);
  e_6 = t;
  t = SSLsetAnnotations(e_6, g_27);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm w_100 (ATerm), ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
  if(match_cons(t, sym__2))
    {
      o_27 = ATgetArgument(t, 0);
      p_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_27, term_h_31);
  t = open_stream_0_0(t);
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_27, p_27);
  t = w_100(t);
  t = fclose_0_0(t);
  t = p_27;
  return(t);
}
ATerm u_19 (ATerm t)
{
  t = fetch_1_0(x_19, t);
  return(t);
}
ATerm v_19 (ATerm t)
{
  t = WriteToFile_1_0(y_19, t);
  return(t);
}
ATerm x_19 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm y_19 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_31 = ATgetArgument(t, 0);
      if(match_cons(j_31, sym_Stream_1))
        {
          t_27 = ATgetArgument(j_31, 0);
        }
      else
        _fail(t);
      u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(t_27, u_27);
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_27);
  return(t);
}
ATerm z_19 (ATerm t)
{
  t = WriteToFile_1_0(a_20, t);
  return(t);
}
ATerm a_20 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,h_6 = NULL,i_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_31 = ATgetArgument(t, 0);
      if(match_cons(l_31, sym_Stream_1))
        {
          w_27 = ATgetArgument(l_31, 0);
        }
      else
        _fail(t);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(w_27, x_27);
  y_27 = t;
  i_6 = t;
  t = term_m_31;
  h_6 = t;
  t = SSL_fputc(h_6, y_27);
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_27);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL;
  r_27 = t;
  {
    ATerm r_19 (ATerm t)
    {
      ATerm n_31 = t;
      int r_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_19 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((s_27 != NULL) && (s_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_19, t);
          ;
          LocalPopChoice(r_31);
        }
      else
        {
          t = n_31;
          t = term_v_31;
          if(((s_27 != NULL) && (s_27 != t)))
            _fail(t);
          else
            s_27 = t;
        }
      return(t);
    }
    t = _2_0(r_19, _id, t);
    t = r_27;
    {
      ATerm t_19 (ATerm t)
      {
        ATerm k_1 = NULL;
        k_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_27), k_1);
        return(t);
      }
      t = _2_0(_id, t_19, t);
      {
        ATerm w_31 = t;
        int a_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(u_19, v_19, t);
            ;
            LocalPopChoice(a_32);
          }
        else
          {
            t = w_31;
            t = _2_0(_id, z_19, t);
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
ATerm apply_strategy_1_0 (ATerm y_103 (ATerm), ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
  a_28 = t;
  t = dtime_0_0(t);
  t = a_28;
  t = y_103(t);
  b_28 = t;
  t = dtime_0_0(t);
  c_28 = t;
  t = b_28;
  if(match_cons(t, sym__2))
    {
      d_28 = ATgetArgument(t, 0);
      e_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_28), (ATerm) ATmakeAppl(sym_Runtime_1, c_28)), e_28);
  return(t);
}
ATerm s_28 (ATerm m_28, ATerm t)
{
  t = SSL_fclose(m_28);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL;
  q_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_28 = ATgetArgument(t, 0);
      {
        ATerm b_32 = t;
        int d_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_28);
            ;
            LocalPopChoice(d_32);
          }
        else
          {
            t = b_32;
            t = s_28(q_28, t);
          }
      }
    }
  else
    {
      t = s_28(q_28, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_28 = NULL;
  t = SSL_stdin_stream();
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_28);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_28 = NULL;
  t = SSL_stdout_stream();
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_28);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_28 = NULL;
  t = SSL_stderr_stream();
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_28);
  return(t);
}
ATerm b_20 (ATerm t)
{
  ATerm d_29 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      d_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_29;
  return(t);
}
ATerm g_20 (ATerm t)
{
  ATerm h_29 = NULL;
  h_29 = t;
  t = SSL_is_string(h_29);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_32 = ATgetArgument(t, 0);
      ATerm h_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_2 = NULL,r_2 = NULL;
        p_2 = t;
        t = SSL_explode_term(p_2);
        if(match_cons(t, sym__2))
          {
            ATerm o_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_32) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_32 = ATgetArgument(t, 1);
              if(((ATgetType(p_32) == AT_LIST) && !(ATisEmpty(p_32))))
                {
                  r_2 = ATgetFirst((ATermList) p_32);
                  {
                    ATerm q_32 = (ATerm) ATgetNext((ATermList) p_32);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = r_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = r_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = r_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
        {
          ATerm r_32 = t;
          int s_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
              t = _2_0(b_20, _id, t);
              if(match_cons(t, sym__2))
                {
                  a_29 = ATgetArgument(t, 0);
                  b_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(a_29, b_29);
              c_29 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, c_29);
              ;
              LocalPopChoice(s_32);
            }
          else
            {
              t = r_32;
              {
                ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
                t = _2_0(g_20, _id, t);
                if(match_cons(t, sym__2))
                  {
                    e_29 = ATgetArgument(t, 0);
                    f_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(e_29, f_29);
                g_29 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, g_29);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_29 = NULL;
      l_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_29, term_a_33);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      {
        ATerm t_2 = NULL,j_6 = NULL,l_6 = NULL,m_6 = NULL,p_6 = NULL;
        t_2 = t;
        t = term_c_33;
        m_6 = t;
        t = term_n_23;
        j_6 = t;
        t = m_6;
        p_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, t_2), term_c_33);
        l_6 = t;
        t = SSL_printnl(j_6, l_6);
        t = t_2;
        _fail(t);
      }
    }
  i_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(k_29);
  j_29 = t;
  t = i_29;
  t = fclose_0_0(t);
  t = j_29;
  return(t);
}
ATerm fetch_1_0 (ATerm r_88 (ATerm), ATerm t)
{
  ATerm q_29 (ATerm t)
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_88, _id, t);
        ;
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        t = Cons_2_0(_id, q_29, t);
      }
    return(t);
  }
  t = q_29(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_33);
    }
  else
    {
      t = k_33;
      {
        ATerm t_29 = NULL,u_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_29 = ATgetFirst((ATermList) t);
            u_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_29;
        {
          ATerm h_20 (ATerm t)
          {
            t = u_29;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(h_20, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_88 (ATerm), ATerm t)
{
  ATerm a_30 (ATerm t)
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, a_30, t);
        ;
        LocalPopChoice(o_33);
      }
    else
      {
        t = n_33;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_88(t);
      }
    return(t);
  }
  t = a_30(t);
  return(t);
}
ATerm i_20 (ATerm t)
{
  ATerm d_30 = NULL;
  d_30 = t;
  t = SSL_explode_string(d_30);
  return(t);
}
ATerm j_20 (ATerm t)
{
  ATerm e_30 = NULL;
  e_30 = t;
  t = SSL_explode_string(e_30);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm c_30 = NULL;
  t = _2_0(i_20, j_20, t);
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_30 = NULL,h_30 = NULL;
        if(match_cons(t, sym__2))
          {
            g_30 = ATgetArgument(t, 0);
            h_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_30;
        {
          ATerm k_20 (ATerm t)
          {
            t = h_30;
            return(t);
          }
          t = at_end_1_0(k_20, t);
        }
        ;
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        {
          ATerm k_3 = NULL,l_3 = NULL;
          k_3 = t;
          t = SSL_explode_term(k_3);
          if(match_cons(t, sym__2))
            {
              ATerm s_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_33) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              l_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_3;
          t = concat_0_0(t);
        }
      }
    c_30 = t;
    t = SSL_implode_string(c_30);
  }
  return(t);
}
ATerm l_20 (ATerm t)
{
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(u_33);
    }
  else
    {
      t = t_33;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_30 = NULL;
      p_30 = t;
      t = SSL_is_string(p_30);
      ;
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      {
        ATerm x_33 = t;
        int y_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_20, t);
            ;
            LocalPopChoice(y_33);
          }
        else
          {
            t = x_33;
            {
              ATerm t_30 = NULL,x_30 = NULL,y_30 = NULL;
              t_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_30 = ATgetArgument(t, 0);
                  t = x_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_30 = ATgetArgument(t, 0);
                      t = x_30;
                      {
                        ATerm z_33 = t;
                        int d_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm q_6 = NULL,r_6 = NULL;
                            r_6 = t;
                            t = term_e_34;
                            q_6 = t;
                            t = SSL_table_get(q_6, x_30);
                            {
                              ATerm g_34 = t;
                              int i_34 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_4 = NULL,s_6 = NULL,t_6 = NULL;
                                  t = eval_config_0_0(t);
                                  h_4 = t;
                                  t_6 = t;
                                  t = term_e_34;
                                  s_6 = t;
                                  t = SSL_table_put(s_6, x_30, h_4);
                                  t = h_4;
                                  ;
                                  LocalPopChoice(i_34);
                                }
                              else
                                {
                                  t = g_34;
                                }
                            }
                            ;
                            LocalPopChoice(d_34);
                          }
                        else
                          {
                            t = z_33;
                            {
                              ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL;
                              t = term_m_34;
                              w_6 = t;
                              t = term_n_23;
                              u_6 = t;
                              t = w_6;
                              x_6 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, x_30), term_m_34);
                              v_6 = t;
                              t = SSL_printnl(u_6, v_6);
                              t = x_30;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm c_31 = NULL,d_31 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_30 = ATgetArgument(t, 0);
                          y_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_30;
                      t = eval_config_0_0(t);
                      c_31 = t;
                      t = y_30;
                      t = eval_config_0_0(t);
                      d_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_31, d_31);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_102 (ATerm), ATerm t)
{
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_31 = NULL,k_31 = NULL,y_6 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
      i_31 = t;
      t = term_r_34;
      e_7 = t;
      t = term_e_34;
      y_6 = t;
      t = e_7;
      f_7 = t;
      t = term_r_34;
      d_7 = t;
      t = SSL_table_get(y_6, d_7);
      {
        ATerm y_34 = t;
        int z_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 = NULL,h_7 = NULL,i_7 = NULL,k_7 = NULL,l_7 = NULL;
            t = eval_config_0_0(t);
            p_4 = t;
            k_7 = t;
            t = term_e_34;
            h_7 = t;
            t = k_7;
            l_7 = t;
            t = term_r_34;
            i_7 = t;
            t = SSL_table_put(h_7, i_7, p_4);
            t = p_4;
            ;
            LocalPopChoice(z_34);
          }
        else
          {
            t = y_34;
          }
        k_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_31, term_f_35);
        t = geq_0_0(t);
        t = i_31;
        t = h_102(t);
      }
      ;
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
    }
  return(t);
}
ATerm m_20 (ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  if(match_string(t, "-k"))
    {
      t = o_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_31;
    }
  return(t);
}
ATerm n_20 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,n_7 = NULL,p_7 = NULL,r_7 = NULL,s_7 = NULL;
  p_31 = t;
  t = SSL_string_to_int(p_31);
  q_31 = t;
  r_7 = t;
  t = term_e_34;
  n_7 = t;
  t = r_7;
  s_7 = t;
  t = term_g_35;
  p_7 = t;
  t = SSL_table_put(n_7, p_7, q_31);
  t = p_31;
  return(t);
}
ATerm q_20 (ATerm t)
{
  t = term_h_35;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_20, n_20, q_20, t);
  return(t);
}
ATerm r_20 (ATerm t)
{
  ATerm s_31 = NULL;
  s_31 = t;
  if(match_string(t, "-S"))
    {
      t = s_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_31;
    }
  return(t);
}
ATerm s_20 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,x_7 = NULL,y_7 = NULL,a_8 = NULL,c_8 = NULL;
  y_7 = t;
  t = term_e_34;
  u_7 = t;
  t = y_7;
  a_8 = t;
  t = term_r_34;
  v_7 = t;
  t = a_8;
  c_8 = t;
  t = term_k_35;
  x_7 = t;
  t = SSL_table_put(u_7, v_7, x_7);
  t = term_l_35;
  return(t);
}
ATerm t_20 (ATerm t)
{
  t = term_m_35;
  return(t);
}
ATerm w_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_20 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL;
  t_31 = t;
  t = SSL_string_to_int(t_31);
  u_31 = t;
  f_8 = t;
  t = term_e_34;
  d_8 = t;
  t = f_8;
  g_8 = t;
  t = term_r_34;
  e_8 = t;
  t = SSL_table_put(d_8, e_8, u_31);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_31);
  return(t);
}
ATerm z_20 (ATerm t)
{
  t = term_n_35;
  return(t);
}
ATerm e_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_21 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL;
  k_8 = t;
  t = term_e_34;
  h_8 = t;
  t = k_8;
  l_8 = t;
  t = term_q_35;
  i_8 = t;
  t = l_8;
  m_8 = t;
  t = term_n_9;
  j_8 = t;
  t = SSL_table_put(h_8, i_8, j_8);
  t = term_t_35;
  return(t);
}
ATerm g_21 (ATerm t)
{
  t = term_u_35;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_35 = t;
  int w_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_20, s_20, t_20, t);
      ;
      LocalPopChoice(w_35);
    }
  else
    {
      t = v_35;
      {
        ATerm x_35 = t;
        int y_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_20, y_20, z_20, t);
            ;
            LocalPopChoice(y_35);
          }
        else
          {
            t = x_35;
            t = Option_3_0(e_21, f_21, g_21, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_31 = NULL;
      t = term_n_9;
      t = d_0(t);
      z_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_36, term_e_36, z_31);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_31 = ATgetFirst((ATermList) t);
          y_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_31;
      t = a_0(t);
      t = term_n_9;
      t = c_0(t);
      c_32 = t;
      t = (ATerm) ATinsert(CheckATermList(y_31), c_32);
    }
  return(t);
}
ATerm h_21 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  if(match_string(t, "-o"))
    {
      t = e_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_32;
    }
  return(t);
}
ATerm i_21 (ATerm t)
{
  ATerm f_32 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL;
  f_32 = t;
  p_8 = t;
  t = term_e_34;
  n_8 = t;
  t = p_8;
  q_8 = t;
  t = term_f_36;
  o_8 = t;
  t = SSL_table_put(n_8, o_8, f_32);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_32);
  return(t);
}
ATerm k_21 (ATerm t)
{
  t = term_g_36;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_21, i_21, k_21, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,r_8 = NULL,s_8 = NULL;
  if(match_cons(t, sym__3))
    {
      i_32 = ATgetArgument(t, 0);
      j_32 = ATgetArgument(t, 1);
      k_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_32, j_32);
  {
    ATerm i_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_36 = ATgetArgument(t, 0);
            ATerm q_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_32, j_32);
        ;
        LocalPopChoice(j_36);
      }
    else
      {
        t = i_36;
        t = (ATerm) ATempty;
      }
    l_32 = t;
    s_8 = t;
    t = (ATerm) ATinsert(CheckATermList(l_32), k_32);
    r_8 = t;
    t = SSL_table_put(i_32, j_32, r_8);
    t = (ATerm) ATmakeAppl(sym__3, i_32, j_32, k_32);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_32 = NULL;
      t = term_n_9;
      t = j_0(t);
      x_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_36, term_e_36, x_32);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm b_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_32 = ATgetFirst((ATermList) t);
          u_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_32 = ATgetFirst((ATermList) t);
          w_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_32;
      t = h_0(t);
      t = v_32;
      t = i_0(t);
      b_33 = t;
      t = (ATerm) ATinsert(CheckATermList(w_32), b_33);
    }
  return(t);
}
ATerm l_21 (ATerm t)
{
  ATerm d_33 = NULL;
  d_33 = t;
  if(match_string(t, "-i"))
    {
      t = d_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_33;
    }
  return(t);
}
ATerm m_21 (ATerm t)
{
  ATerm e_33 = NULL,t_8 = NULL,u_8 = NULL,w_8 = NULL,x_8 = NULL;
  e_33 = t;
  w_8 = t;
  t = term_e_34;
  t_8 = t;
  t = w_8;
  x_8 = t;
  t = term_r_36;
  u_8 = t;
  t = SSL_table_put(t_8, u_8, e_33);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_33);
  return(t);
}
ATerm n_21 (ATerm t)
{
  t = term_s_36;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_21, m_21, n_21, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_33 = NULL,e_9 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,f_9 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_9;
  t = whoami_0_0(t);
  f_33 = t;
  c_9 = t;
  t = term_n_23;
  a_9 = t;
  t = c_9;
  d_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_36), f_33);
  b_9 = t;
  t = SSL_printnl(a_9, b_9);
  f_9 = t;
  t = term_v_23;
  e_9 = t;
  t = SSL_exit(e_9);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm g_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
  t = term_u_36;
  k_9 = t;
  t = term_e_34;
  g_9 = t;
  t = k_9;
  l_9 = t;
  t = term_u_36;
  j_9 = t;
  t = SSL_table_get(g_9, j_9);
  {
    ATerm v_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_4 = NULL,o_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL;
        t = eval_config_0_0(t);
        t_4 = t;
        r_9 = t;
        t = term_e_34;
        o_9 = t;
        t = r_9;
        s_9 = t;
        t = term_u_36;
        q_9 = t;
        t = SSL_table_put(o_9, q_9, t_4);
        t = t_4;
        ;
        LocalPopChoice(w_36);
      }
    else
      {
        t = v_36;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm t)
{
  ATerm x_36 = t;
  int y_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_94(t);
      ;
      LocalPopChoice(y_36);
    }
  else
    {
      t = x_36;
      {
        ATerm i_33 = NULL,j_33 = NULL,m_33 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_33 = ATgetFirst((ATermList) t);
            j_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_33;
        t = foldr_2_0(i_94, j_94, t);
        m_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_33, m_33);
        t = j_94(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_21 (ATerm t)
{
  t = term_k_35;
  return(t);
}
ATerm p_21 (ATerm t)
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
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(y_4, z_4);
        ;
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
        t = SSL_addr(y_4, z_4);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_33 = NULL,u_4 = NULL,v_4 = NULL;
  t = times_0_0(t);
  u_4 = t;
  t = SSL_explode_term(u_4);
  if(match_cons(t, sym__2))
    {
      ATerm b_37 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4;
  t = foldr_2_0(o_21, p_21, t);
  p_33 = t;
  t = SSL_TicksToSeconds(p_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
  a_34 = t;
  if(match_cons(t, sym__2))
    {
      b_34 = ATgetArgument(t, 0);
      c_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_34;
        if((b_34 != t))
          {
            _fail(t);
          }
        t = a_34;
        ;
        LocalPopChoice(d_37);
      }
    else
      {
        t = c_37;
        t = a_34;
        {
          ATerm e_37 = t;
          int f_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_34, c_34);
              ;
              LocalPopChoice(f_37);
            }
          else
            {
              t = e_37;
              t = SSL_gtr(b_34, c_34);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_34, c_34);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_102 (ATerm), ATerm t)
{
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_34 = NULL,h_34 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL;
      f_34 = t;
      t = term_r_34;
      z_9 = t;
      t = term_e_34;
      x_9 = t;
      t = z_9;
      a_10 = t;
      t = term_r_34;
      y_9 = t;
      t = SSL_table_get(x_9, y_9);
      {
        ATerm i_37 = t;
        int j_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_5 = NULL,b_10 = NULL,c_10 = NULL,e_10 = NULL,f_10 = NULL;
            t = eval_config_0_0(t);
            n_5 = t;
            e_10 = t;
            t = term_e_34;
            b_10 = t;
            t = e_10;
            f_10 = t;
            t = term_r_34;
            c_10 = t;
            t = SSL_table_put(b_10, c_10, n_5);
            t = n_5;
            ;
            LocalPopChoice(j_37);
          }
        else
          {
            t = i_37;
          }
        h_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_34, term_v_23);
        t = geq_0_0(t);
        t = f_34;
        t = g_102(t);
      }
      ;
      LocalPopChoice(h_37);
    }
  else
    {
      t = g_37;
    }
  return(t);
}
ATerm t_21 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,g_10 = NULL,h_10 = NULL,j_10 = NULL,k_10 = NULL;
  t = run_time_0_0(t);
  j_34 = t;
  t = term_n_9;
  t = whoami_0_0(t);
  k_34 = t;
  j_10 = t;
  t = term_n_23;
  g_10 = t;
  t = j_10;
  k_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_37), j_34), term_k_37), k_34);
  h_10 = t;
  t = SSL_printnl(g_10, h_10);
  t = (ATerm) ATmakeAppl(sym__2, term_n_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_37), j_34), term_k_37), k_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_21, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  t = report_run_time_0_0(t);
  m_10 = t;
  t = term_k_35;
  l_10 = t;
  t = SSL_exit(l_10);
  return(t);
}
ATerm v_21 (ATerm t)
{
  ATerm m_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(n_37);
    }
  else
    {
      t = m_37;
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(p_37);
          }
        else
          {
            t = o_37;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_104 (ATerm), ATerm t)
{
  ATerm q_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
      t = term_s_37;
      q_10 = t;
      t = term_e_34;
      o_10 = t;
      t = q_10;
      r_10 = t;
      t = term_s_37;
      p_10 = t;
      t = SSL_table_get(o_10, p_10);
      {
        ATerm t_37 = t;
        int u_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL;
            t = eval_config_0_0(t);
            w_5 = t;
            u_10 = t;
            t = term_e_34;
            s_10 = t;
            t = u_10;
            v_10 = t;
            t = term_s_37;
            t_10 = t;
            t = SSL_table_put(s_10, t_10, w_5);
            t = w_5;
            ;
            LocalPopChoice(u_37);
          }
        else
          {
            t = t_37;
          }
      }
      ;
      LocalPopChoice(r_37);
    }
  else
    {
      t = q_37;
      t = fetch_1_0(v_21, t);
    }
  t = w_104(t);
  return(t);
}
ATerm map_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm l_34 (ATerm t)
  {
    ATerm v_37 = t;
    int w_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(w_37);
      }
    else
      {
        t = v_37;
        t = Cons_2_0(g_88, l_34, t);
      }
    return(t);
  }
  t = l_34(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_34 = ATgetFirst((ATermList) t);
      o_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_34 = NULL,t_34 = NULL;
        t = o_34;
        t = g_0(t);
        s_34 = t;
        t = n_34;
        t = e_0(t);
        t_34 = t;
        t = o_34;
        {
          ATerm x_21 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(s_34), t_34);
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
      t = term_n_9;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm n_80 (ATerm), ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_10 = NULL,z_10 = NULL;
  x_34 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_34);
  u_34 = t;
  t = v_34;
  t = n_80(t);
  w_34 = t;
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_34);
  y_10 = t;
  t = SSLsetAnnotations(y_10, u_34);
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
ATerm b_22 (ATerm t)
{
  ATerm a_35 = NULL;
  a_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_35), term_x_37);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL;
  ATerm y_37 = t;
  int z_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
      t = term_u_36;
      e_11 = t;
      t = term_e_34;
      a_11 = t;
      t = e_11;
      f_11 = t;
      t = term_u_36;
      d_11 = t;
      t = SSL_table_get(a_11, d_11);
      {
        ATerm a_38 = t;
        int b_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_6 = NULL,g_11 = NULL,j_11 = NULL,l_11 = NULL,m_11 = NULL;
            t = eval_config_0_0(t);
            a_6 = t;
            l_11 = t;
            t = term_e_34;
            g_11 = t;
            t = l_11;
            m_11 = t;
            t = term_u_36;
            j_11 = t;
            t = SSL_table_put(g_11, j_11, a_6);
            t = a_6;
            ;
            LocalPopChoice(b_38);
          }
        else
          {
            t = a_38;
          }
      }
      ;
      LocalPopChoice(z_37);
    }
  else
    {
      t = y_37;
      t = fetch_1_0(y_21, t);
    }
  t = term_c_38;
  t = echo_0_0(t);
  s_11 = t;
  t = term_d_36;
  q_11 = t;
  t = s_11;
  t_11 = t;
  t = term_e_36;
  r_11 = t;
  t = SSL_table_get(q_11, r_11);
  t = reverse_acc_2_0(_id, z_21, t);
  t = map_1_0(b_22, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,u_11 = NULL,x_11 = NULL;
  e_35 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      c_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_35);
  b_35 = t;
  t = c_35;
  t = o_80(t);
  d_35 = t;
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, d_35);
  u_11 = t;
  t = SSLsetAnnotations(u_11, b_35);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,z_11 = NULL,a_12 = NULL;
  i_35 = t;
  {
    ATerm d_38 = t;
    int e_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_38 = ATgetFirst((ATermList) t);
                ATerm g_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_35;
          }
        ;
        LocalPopChoice(e_38);
      }
    else
      {
        t = d_38;
        t = (ATerm) ATinsert(ATempty, i_35);
      }
    j_35 = t;
    a_12 = t;
    t = term_v_31;
    z_11 = t;
    t = SSL_printnl(z_11, j_35);
    t = i_35;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,f_12 = NULL,g_12 = NULL;
  t = term_u_36;
  f_12 = t;
  t = term_e_34;
  c_12 = t;
  t = f_12;
  g_12 = t;
  t = term_u_36;
  d_12 = t;
  t = SSL_table_get(c_12, d_12);
  {
    ATerm h_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_6 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
        t = eval_config_0_0(t);
        f_6 = t;
        l_12 = t;
        t = term_e_34;
        j_12 = t;
        t = l_12;
        m_12 = t;
        t = term_u_36;
        k_12 = t;
        t = SSL_table_put(j_12, k_12, f_6);
        t = f_6;
        ;
        LocalPopChoice(i_38);
      }
    else
      {
        t = h_38;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm c_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_22 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,s_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
  v_12 = t;
  t = term_e_34;
  o_12 = t;
  t = v_12;
  w_12 = t;
  t = term_j_38;
  p_12 = t;
  t = w_12;
  x_12 = t;
  t = term_n_9;
  s_12 = t;
  t = SSL_table_put(o_12, p_12, s_12);
  t = term_k_38;
  return(t);
}
ATerm e_22 (ATerm t)
{
  t = term_l_38;
  return(t);
}
ATerm f_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_22 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
  d_13 = t;
  t = term_e_34;
  y_12 = t;
  t = d_13;
  e_13 = t;
  t = term_j_38;
  z_12 = t;
  t = e_13;
  f_13 = t;
  t = term_n_9;
  a_13 = t;
  t = SSL_table_put(y_12, z_12, a_13);
  k_13 = t;
  t = term_e_34;
  h_13 = t;
  t = k_13;
  l_13 = t;
  t = term_m_38;
  i_13 = t;
  t = l_13;
  m_13 = t;
  t = term_n_9;
  j_13 = t;
  t = SSL_table_put(h_13, i_13, j_13);
  t = term_n_38;
  return(t);
}
ATerm l_22 (ATerm t)
{
  t = term_o_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_38 = t;
  int q_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_22, d_22, e_22, t);
      ;
      LocalPopChoice(q_38);
    }
  else
    {
      t = p_38;
      t = Option_3_0(f_22, g_22, l_22, t);
    }
  return(t);
}
ATerm m_22 (ATerm t)
{
  ATerm p_35 = NULL,n_13 = NULL,o_13 = NULL,q_13 = NULL,r_13 = NULL;
  p_35 = t;
  q_13 = t;
  t = term_e_34;
  n_13 = t;
  t = q_13;
  r_13 = t;
  t = term_u_36;
  o_13 = t;
  t = SSL_table_put(n_13, o_13, p_35);
  t = (ATerm) ATmakeAppl(sym_Program_1, p_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_106 (ATerm), ATerm t)
{
  ATerm o_35 = NULL;
  o_35 = t;
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_38;
        t = z_106(t);
        ;
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
      }
    t = o_35;
    {
      ATerm n_22 (ATerm t)
      {
        ATerm u_38 = t;
        int v_38 = stack_ptr;
        if((PushChoice() == 0))
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
                t = z_106(t);
                t = Cons_2_0(_id, n_22, t);
              }
            ;
            LocalPopChoice(v_38);
          }
        else
          {
            t = u_38;
            {
              ATerm r_35 = NULL,s_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_35 = ATgetFirst((ATermList) t);
                  s_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(s_35), (ATerm) ATmakeAppl(sym_Undefined_1, r_35));
            }
          }
        return(t);
      }
      t = Cons_2_0(m_22, n_22, t);
    }
  }
  return(t);
}
ATerm q_22 (ATerm t)
{
  ATerm c_36 = NULL;
  c_36 = t;
  if(match_string(t, "--help"))
    {
      t = c_36;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_36;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_36;
        }
    }
  return(t);
}
ATerm r_22 (ATerm t)
{
  ATerm z_13 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
  f_14 = t;
  t = term_e_34;
  z_13 = t;
  t = f_14;
  g_14 = t;
  t = term_s_37;
  d_14 = t;
  t = g_14;
  h_14 = t;
  t = term_n_9;
  e_14 = t;
  t = SSL_table_put(z_13, d_14, e_14);
  t = term_y_38;
  return(t);
}
ATerm s_22 (ATerm t)
{
  t = term_z_38;
  return(t);
}
ATerm t_22 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,n_15 = NULL,p_15 = NULL;
  z_35 = t;
  w_13 = t;
  t = term_d_36;
  s_13 = t;
  t = w_13;
  x_13 = t;
  t = term_e_36;
  t_13 = t;
  t = x_13;
  y_13 = t;
  t = (ATerm) ATempty;
  u_13 = t;
  t = SSL_table_put(s_13, t_13, u_13);
  t = z_35;
  {
    ATerm p_22 (ATerm t)
    {
      ATerm a_39 = t;
      int b_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_106(t);
          ;
          LocalPopChoice(b_39);
        }
      else
        {
          t = a_39;
          {
            ATerm c_39 = t;
            int d_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_22, r_22, s_22, t);
                ;
                LocalPopChoice(d_39);
              }
            else
              {
                t = c_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_22, t);
    {
      ATerm e_39 = t;
      int f_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_36 = NULL;
          h_36 = t;
          {
            ATerm g_39 = t;
            int h_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_14 = NULL,s_14 = NULL;
                t = h_36;
                {
                  ATerm i_39 = t;
                  int j_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
                      t = term_s_37;
                      k_14 = t;
                      t = term_e_34;
                      i_14 = t;
                      t = k_14;
                      l_14 = t;
                      t = term_s_37;
                      j_14 = t;
                      t = SSL_table_get(i_14, j_14);
                      {
                        ATerm k_39 = t;
                        int l_39 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm z_6 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,q_14 = NULL;
                            t = eval_config_0_0(t);
                            z_6 = t;
                            o_14 = t;
                            t = term_e_34;
                            m_14 = t;
                            t = o_14;
                            q_14 = t;
                            t = term_s_37;
                            n_14 = t;
                            t = SSL_table_put(m_14, n_14, z_6);
                            t = z_6;
                            ;
                            LocalPopChoice(l_39);
                          }
                        else
                          {
                            t = k_39;
                          }
                      }
                      ;
                      LocalPopChoice(j_39);
                    }
                  else
                    {
                      t = i_39;
                      t = fetch_1_0(t_22, t);
                    }
                  t = h_36;
                  t = default_system_usage_0_0(t);
                  s_14 = t;
                  t = term_k_35;
                  r_14 = t;
                  t = SSL_exit(r_14);
                }
                ;
                LocalPopChoice(h_39);
              }
            else
              {
                t = g_39;
                {
                  ATerm t_14 = NULL,u_14 = NULL,y_14 = NULL,z_14 = NULL,e_15 = NULL,f_15 = NULL;
                  t = term_j_38;
                  y_14 = t;
                  t = term_e_34;
                  t_14 = t;
                  t = y_14;
                  z_14 = t;
                  t = term_j_38;
                  u_14 = t;
                  t = SSL_table_get(t_14, u_14);
                  {
                    ATerm m_39 = t;
                    int n_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_7 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL;
                        t = eval_config_0_0(t);
                        o_7 = t;
                        c_15 = t;
                        t = term_e_34;
                        a_15 = t;
                        t = c_15;
                        d_15 = t;
                        t = term_j_38;
                        b_15 = t;
                        t = SSL_table_put(a_15, b_15, o_7);
                        t = o_7;
                        ;
                        LocalPopChoice(n_39);
                      }
                    else
                      {
                        t = m_39;
                      }
                    t = h_36;
                    t = default_system_about_0_0(t);
                    f_15 = t;
                    t = term_k_35;
                    e_15 = t;
                    t = SSL_exit(e_15);
                  }
                }
              }
          }
          ;
          LocalPopChoice(f_39);
        }
      else
        {
          t = e_39;
          {
            ATerm o_39 = t;
            int p_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,m_15 = NULL;
                ATerm u_22 (ATerm t)
                {
                  ATerm v_22 (ATerm t)
                  {
                    if(((a_36 != NULL) && (a_36 != t)))
                      _fail(t);
                    else
                      a_36 = t;
                    return(t);
                  }
                  t = Undefined_1_0(v_22, t);
                  return(t);
                }
                t = fetch_1_0(u_22, t);
                i_15 = t;
                t = term_n_23;
                g_15 = t;
                t = i_15;
                j_15 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_36)), term_q_39);
                h_15 = t;
                t = SSL_printnl(g_15, h_15);
                t = (ATerm) ATmakeAppl(sym__2, term_n_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_36)), term_q_39));
                t = default_system_usage_0_0(t);
                m_15 = t;
                t = term_v_23;
                k_15 = t;
                t = SSL_exit(k_15);
                ;
                LocalPopChoice(p_39);
              }
            else
              {
                t = o_39;
              }
          }
        }
      b_36 = t;
      p_15 = t;
      t = term_d_36;
      n_15 = t;
      t = SSL_table_destroy(n_15);
      t = b_36;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t)
{
  ATerm k_36 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,w_15 = NULL,y_15 = NULL,z_15 = NULL;
  t = parse_options_1_0(y_104, t);
  k_36 = t;
  r_15 = t;
  t = term_r_39;
  q_15 = t;
  t = SSL_table_create(q_15);
  y_15 = t;
  t = term_r_39;
  s_15 = t;
  t = y_15;
  z_15 = t;
  t = term_s_39;
  w_15 = t;
  t = SSL_table_put(s_15, w_15, k_36);
  t = k_36;
  t = a_105(t);
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_104, t);
        ;
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
        {
          ATerm v_39 = t;
          int w_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_105(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_39);
            }
          else
            {
              t = v_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_22 (ATerm t)
{
  t = if_verbose2_1_0(d_23, t);
  return(t);
}
ATerm a_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_23 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  d_16 = t;
  t = term_e_34;
  a_16 = t;
  t = d_16;
  e_16 = t;
  t = term_x_39;
  b_16 = t;
  t = e_16;
  f_16 = t;
  t = term_n_9;
  c_16 = t;
  t = SSL_table_put(a_16, b_16, c_16);
  t = term_y_39;
  return(t);
}
ATerm c_23 (ATerm t)
{
  t = term_z_39;
  return(t);
}
ATerm d_23 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,q_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  l_36 = t;
  t = term_u_36;
  i_16 = t;
  t = term_e_34;
  g_16 = t;
  t = i_16;
  j_16 = t;
  t = term_u_36;
  h_16 = t;
  t = SSL_table_get(g_16, h_16);
  {
    ATerm a_40 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_7 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
        t = eval_config_0_0(t);
        t_7 = t;
        m_16 = t;
        t = term_e_34;
        k_16 = t;
        t = m_16;
        n_16 = t;
        t = term_u_36;
        l_16 = t;
        t = SSL_table_put(k_16, l_16, t_7);
        t = t_7;
        ;
        LocalPopChoice(b_40);
      }
    else
      {
        t = a_40;
      }
    m_36 = t;
    t_16 = t;
    t = term_n_23;
    q_16 = t;
    t = t_16;
    u_16 = t;
    t = (ATerm) ATinsert(ATempty, m_36);
    s_16 = t;
    t = SSL_printnl(q_16, s_16);
    t = l_36;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm t)
{
  ATerm w_22 (ATerm t)
  {
    ATerm c_40 = t;
    int d_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_104(t);
        ;
        LocalPopChoice(d_40);
      }
    else
      {
        t = c_40;
        {
          ATerm e_40 = t;
          int f_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(f_40);
            }
          else
            {
              t = e_40;
              {
                ATerm g_40 = t;
                int h_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
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
                          t = Option_3_0(a_23, b_23, c_23, t);
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
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(l_40);
                              }
                            else
                              {
                                t = k_40;
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
  ATerm z_22 (ATerm t)
  {
    ATerm n_36 = NULL,o_36 = NULL,w_7 = NULL;
    n_36 = t;
    {
      ATerm m_40 = t;
      int n_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_23 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_36 != NULL) && (o_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_36 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_23, t);
          ;
          LocalPopChoice(n_40);
        }
      else
        {
          t = m_40;
          t = term_o_40;
          o_36 = t;
        }
      t = not_null(o_36);
      t = ReadFromFile_0_0(t);
      w_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_36, w_7);
      t = apply_strategy_1_0(h_104, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(w_22, j_104, y_22, z_22, t);
  return(t);
}
ATerm f_23 (ATerm t)
{
  t = _2_0(_id, g_23, t);
  return(t);
}
ATerm g_23 (ATerm t)
{
  ATerm p_40 = t;
  int q_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Specification_1_0(h_23, t);
      ;
      LocalPopChoice(q_40);
    }
  else
    {
      t = p_40;
      {
        ATerm z_7 = NULL,w_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
        z_7 = t;
        t = term_r_40;
        a_17 = t;
        t = term_n_23;
        w_16 = t;
        t = a_17;
        b_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, z_7), term_r_40);
        z_16 = t;
        t = SSL_printnl(w_16, z_16);
        t = z_7;
      }
    }
  return(t);
}
ATerm h_23 (ATerm t)
{
  t = Cons_2_0(_id, i_23, t);
  return(t);
}
ATerm i_23 (ATerm t)
{
  t = Cons_2_0(j_23, k_23, t);
  return(t);
}
ATerm j_23 (ATerm t)
{
  t = Strategies_1_0(l_23, t);
  return(t);
}
ATerm k_23 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm l_23 (ATerm t)
{
  t = list_1_0(strategy_definition_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(f_23, _fail, default_usage_0_0, t);
  return(t);
}
