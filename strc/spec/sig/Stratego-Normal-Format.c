#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_BuildDefault_1;
Symbol sym_As_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Str_1;
Symbol sym_Real_1;
Symbol sym_Int_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Mod_2;
Symbol sym_SVar_1;
Symbol sym_GChoice_2;
Symbol sym_Choice_2;
Symbol sym_Thread_1;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Test_1;
Symbol sym_Where_1;
Symbol sym_Not_1;
Symbol sym_Rec_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_LGChoice_2;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_VarDec_2;
Symbol sym_ExtSDef_3;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_FunType_2;
Symbol sym_ConstType_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Some_1;
Symbol sym_Undefined_0;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Hashtable_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
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
Symbol sym_Cong_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_BuildDefault_1;
Symbol sym_As_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Str_1;
Symbol sym_Real_1;
Symbol sym_Int_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Mod_2;
Symbol sym_SVar_1;
Symbol sym_GChoice_2;
Symbol sym_Choice_2;
Symbol sym_Thread_1;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Test_1;
Symbol sym_Where_1;
Symbol sym_Not_1;
Symbol sym_Rec_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_LGChoice_2;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_VarDec_2;
Symbol sym_ExtSDef_3;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_FunType_2;
Symbol sym_ConstType_1;
static void init_module_constructors (void)
{
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
}
ATerm term_s_15;
ATerm term_o_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_r_8;
ATerm term_l_8;
ATerm term_g_8;
ATerm term_p_7;
ATerm term_k_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_d_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_p_6;
ATerm term_l_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym__2, term_s_6, term_t_6);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym__2, term_y_6, term_z_6);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__2, term_s_6, term_v_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_h_10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_l_5);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_l_5);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_l_5);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__2, term_f_13, term_l_5);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__3, term_y_6, term_z_6, (ATerm) ATempty);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__2, term_s_6, term_f_13);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__2, term_s_6, term_m_12);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, term_o_14, term_l_5);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm c_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm f_131 (ATerm), ATerm g_131 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm g_109 (ATerm), ATerm t);
ATerm list_1_0 (ATerm v_109 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
ATerm term_expression_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm r_109 (ATerm), ATerm t);
static ATerm z_3 (ATerm o_50, ATerm p_50, ATerm t);
static ATerm a_4 (ATerm t_34, ATerm u_34, ATerm t);
static ATerm c_4 (ATerm i_109 (ATerm), ATerm e_236, ATerm z_34, ATerm t);
static ATerm b_4 (ATerm p_34, ATerm q_34, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm u_127 (ATerm), ATerm t);
static ATerm n_43 (ATerm h_43, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_4 (ATerm v_34, ATerm t);
static ATerm e_4 (ATerm s_48, ATerm t_48, ATerm t);
static ATerm f_4 (ATerm q_50, ATerm r_50, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_44 (ATerm x_43, ATerm t);
static ATerm z_44 (ATerm b_44, ATerm c_44, ATerm d_44, ATerm t);
static ATerm a_45 (ATerm l_44, ATerm m_44, ATerm n_44, ATerm t);
static ATerm g_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm b_110 (ATerm), ATerm t);
static ATerm l_4 (ATerm o_57, ATerm p_57, ATerm t);
ATerm if_verbose2_1_0 (ATerm d_126 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_4 (ATerm f_69, ATerm g_69, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_4 (ATerm v_55, ATerm w_55, ATerm u_55, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_4 (ATerm e_54, ATerm f_54, ATerm t);
ATerm foldr_2_0 (ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_126 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm p_4 (ATerm g_60, ATerm h_60, ATerm i_60, ATerm t);
static ATerm q_4 (ATerm j_60, ATerm k_60, ATerm t);
ATerm lookup_table_0_1 (ATerm h_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_60, ATerm p_60, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_4 (ATerm l_60, ATerm m_60, ATerm t);
static ATerm k_4 (ATerm q_60, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm a_131 (ATerm), ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm parse_options_3_0 (ATerm x_130 (ATerm), ATerm y_130 (ATerm), ATerm z_130 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm a_129 (ATerm), ATerm b_129 (ATerm), ATerm c_129 (ATerm), ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm iowrap_3_0 (ATerm d_128 (ATerm), ATerm e_128 (ATerm), ATerm f_128 (ATerm), ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,e_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_0 = ATgetFirst((ATermList) t);
      e_0 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_0 = NULL,r_0 = NULL;
        static ATerm a_0 (ATerm t);
        static ATerm a_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_0)), not_null(r_0));
          return(t);
        }
        t = e_0;
        t = o_0(t);
        if(((p_0 != NULL) && (p_0 != t)))
          _fail(t);
        else
          p_0 = t;
        t = b_0;
        t = m_0(t);
        if(((r_0 != NULL) && (r_0 != t)))
          _fail(t);
        else
          r_0 = t;
        t = e_0;
        t = reverse_acc_2_0(m_0, a_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_5;
      t = o_0(t);
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm r_1 = NULL,t_1 = NULL,u_1 = NULL,h_3 = NULL;
  u_1 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_1);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_1);
  h_3 = t;
  t = SSLsetAnnotations(h_3, r_1);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm a_2 = NULL;
  a_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_p_6);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm f_131 (ATerm), ATerm g_131 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,o_1 = NULL;
  ATerm q_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 = NULL,q_1 = NULL;
      t = term_s_6;
      p_1 = t;
      t = term_t_6;
      q_1 = t;
      t = term_u_6;
      t = l_4(p_1, q_1, t);
      LocalPopChoice(r_6);
    }
  else
    {
      t = q_6;
      t = fetch_1_0(c_0, t);
    }
  {
    ATerm v_6 = t;
    int w_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_131(t);
        t = echo_0_0(t);
        LocalPopChoice(w_6);
      }
    else
      {
        t = v_6;
      }
  }
  t = term_x_6;
  t = echo_0_0(t);
  t = term_y_6;
  b_1 = t;
  t = term_z_6;
  o_1 = t;
  t = term_a_7;
  t = l_4(b_1, o_1, t);
  t = reverse_acc_2_0(_id, i_0, t);
  t = map_1_0(k_0, t);
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL;
        t = g_131(t);
        b_2 = t;
        t = (ATerm) ATinsert(CheckATermList(b_2), term_d_7);
        t = echo_0_0(t);
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
      }
  }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm i_2 = NULL,k_2 = NULL,l_2 = NULL,l_3 = NULL;
  l_2 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_2);
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_2);
  l_3 = t;
  t = SSLsetAnnotations(l_3, i_2);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_2 = NULL;
  e_2 = t;
  {
    ATerm e_7 = t;
    int f_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_2 = NULL,h_2 = NULL;
        t = term_s_6;
        g_2 = t;
        t = term_t_6;
        h_2 = t;
        t = term_u_6;
        t = l_4(g_2, h_2, t);
        LocalPopChoice(f_7);
      }
    else
      {
        t = e_7;
        t = fetch_1_0(n_0, t);
      }
  }
  t = e_2;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
ATerm debug_1_0 (ATerm g_109 (ATerm), ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL;
  m_2 = t;
  t = g_109(t);
  n_2 = t;
  t = term_g_7;
  o_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_2), n_2);
  p_2 = t;
  t = SSL_printnl(o_2, p_2);
  t = m_2;
  return(t);
}
ATerm list_1_0 (ATerm v_109 (ATerm), ATerm t)
{
  t = map_1_0(v_109, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_h_7;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_8 = NULL,d_8 = NULL,f_8 = NULL;
      a_8 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = a_8;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              d_8 = ATgetArgument(t, 0);
              {
                ATerm q_0 = NULL,t_0 = NULL,o_3 = NULL;
                t = SSLgetAnnotations(a_8);
                q_0 = t;
                t = SSL_is_string(d_8);
                t_0 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, t_0);
                o_3 = t;
                t = SSLsetAnnotations(o_3, q_0);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  d_8 = ATgetArgument(t, 0);
                  {
                    ATerm z_0 = NULL,c_1 = NULL,w_3 = NULL;
                    t = SSLgetAnnotations(a_8);
                    z_0 = t;
                    t = SSL_is_int(d_8);
                    c_1 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, c_1);
                    w_3 = t;
                    t = SSLsetAnnotations(w_3, z_0);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      d_8 = ATgetArgument(t, 0);
                      {
                        ATerm i_1 = NULL,k_1 = NULL,r_4 = NULL;
                        t = SSLgetAnnotations(a_8);
                        i_1 = t;
                        t = SSL_is_real(d_8);
                        k_1 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, k_1);
                        r_4 = t;
                        t = SSLsetAnnotations(r_4, i_1);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          d_8 = ATgetArgument(t, 0);
                          {
                            ATerm z_1 = NULL,j_2 = NULL,s_4 = NULL;
                            t = SSLgetAnnotations(a_8);
                            z_1 = t;
                            t = SSL_is_string(d_8);
                            j_2 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, j_2);
                            s_4 = t;
                            t = SSLsetAnnotations(s_4, z_1);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              d_8 = ATgetArgument(t, 0);
                              {
                                ATerm v_2 = NULL,x_2 = NULL,v_4 = NULL;
                                t = SSLgetAnnotations(a_8);
                                v_2 = t;
                                t = d_8;
                                t = term_expression_0_0(t);
                                x_2 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, x_2);
                                v_4 = t;
                                t = SSLsetAnnotations(v_4, v_2);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  d_8 = ATgetArgument(t, 0);
                                  f_8 = ATgetArgument(t, 1);
                                  {
                                    ATerm e_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL,p_3 = NULL,q_3 = NULL,x_4 = NULL,w_4 = NULL;
                                    t = SSLgetAnnotations(a_8);
                                    e_3 = t;
                                    t = d_8;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        m_3 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(d_8);
                                    k_3 = t;
                                    t = SSL_is_string(m_3);
                                    p_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, p_3);
                                    w_4 = t;
                                    t = SSLsetAnnotations(w_4, k_3);
                                    q_3 = t;
                                    t = f_8;
                                    t = term_expression_0_0(t);
                                    j_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, q_3, j_3);
                                    x_4 = t;
                                    t = SSLsetAnnotations(x_4, e_3);
                                  }
                                }
                              else
                                {
                                  ATerm i_4 = NULL,u_4 = NULL,a_5 = NULL,y_4 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      d_8 = ATgetArgument(t, 0);
                                      f_8 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(a_8);
                                  i_4 = t;
                                  t = SSL_is_string(d_8);
                                  u_4 = t;
                                  t = f_8;
                                  t = map_1_0(term_expression_0_0, t);
                                  a_5 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, u_4, a_5);
                                  y_4 = t;
                                  t = SSLsetAnnotations(y_4, i_4);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      t = debug_1_0(s_0, t);
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm q_19 = NULL;
  q_19 = t;
  t = SSL_is_string(q_19);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,t_22 = NULL,u_22 = NULL,w_22 = NULL,a_23 = NULL,c_23 = NULL,d_23 = NULL,h_23 = NULL,i_23 = NULL,n_6 = NULL;
  i_23 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      p_22 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
      u_22 = ATgetArgument(t, 2);
      w_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_23);
  o_22 = t;
  t = SSL_is_string(p_22);
  a_23 = t;
  t = t_22;
  t = map_1_0(w_0, t);
  c_23 = t;
  t = u_22;
  t = map_1_0(x_0, t);
  d_23 = t;
  t = w_22;
  t = strategy_expression_0_0(t);
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, a_23, c_23, d_23, h_23);
  n_6 = t;
  t = SSLsetAnnotations(n_6, o_22);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm l_24 = NULL,o_24 = NULL,p_24 = NULL,s_24 = NULL,t_24 = NULL,x_24 = NULL,y_24 = NULL,b_25 = NULL,k_27 = NULL,l_27 = NULL,k_6 = NULL,j_6 = NULL;
  l_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_27);
  l_24 = t;
  t = SSL_is_string(o_24);
  s_24 = t;
  t = p_24;
  if(match_cons(t, sym_FunType_2))
    {
      x_24 = ATgetArgument(t, 0);
      y_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_24);
  t_24 = t;
  t = x_24;
  t = list_1_0(_id, t);
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, b_25, y_24);
  j_6 = t;
  t = SSLsetAnnotations(j_6, t_24);
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_24, k_27);
  k_6 = t;
  t = SSLsetAnnotations(k_6, l_24);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm o_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,w_27 = NULL,y_27 = NULL,z_27 = NULL,m_6 = NULL,l_6 = NULL;
  z_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      r_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_27);
  o_27 = t;
  t = SSL_is_string(r_27);
  t_27 = t;
  t = s_27;
  if(match_cons(t, sym_ConstType_1))
    {
      w_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_27);
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, w_27);
  l_6 = t;
  t = SSLsetAnnotations(l_6, u_27);
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_27, y_27);
  m_6 = t;
  t = SSLsetAnnotations(m_6, o_27);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_k_7;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm l_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
      h_31 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = h_31;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = h_31;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  i_31 = ATgetArgument(t, 0);
                  {
                    ATerm w_7 = NULL,z_7 = NULL,m_5 = NULL;
                    t = SSLgetAnnotations(h_31);
                    w_7 = t;
                    t = i_31;
                    t = strategy_expression_0_0(t);
                    z_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, z_7);
                    m_5 = t;
                    t = SSLsetAnnotations(m_5, w_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      i_31 = ATgetArgument(t, 0);
                      {
                        ATerm i_8 = NULL,k_8 = NULL,n_5 = NULL;
                        t = SSLgetAnnotations(h_31);
                        i_8 = t;
                        t = i_31;
                        t = strategy_expression_0_0(t);
                        k_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, k_8);
                        n_5 = t;
                        t = SSLsetAnnotations(n_5, i_8);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          i_31 = ATgetArgument(t, 0);
                          j_31 = ATgetArgument(t, 1);
                          {
                            ATerm y_8 = NULL,b_9 = NULL,d_9 = NULL,o_5 = NULL;
                            t = SSLgetAnnotations(h_31);
                            y_8 = t;
                            t = i_31;
                            t = strategy_expression_0_0(t);
                            b_9 = t;
                            t = j_31;
                            t = strategy_expression_0_0(t);
                            d_9 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, b_9, d_9);
                            o_5 = t;
                            t = SSLsetAnnotations(o_5, y_8);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              i_31 = ATgetArgument(t, 0);
                              j_31 = ATgetArgument(t, 1);
                              {
                                ATerm l_9 = NULL,o_9 = NULL,p_9 = NULL,p_5 = NULL;
                                t = SSLgetAnnotations(h_31);
                                l_9 = t;
                                t = i_31;
                                t = strategy_expression_0_0(t);
                                o_9 = t;
                                t = j_31;
                                t = strategy_expression_0_0(t);
                                p_9 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, o_9, p_9);
                                p_5 = t;
                                t = SSLsetAnnotations(p_5, l_9);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  i_31 = ATgetArgument(t, 0);
                                  j_31 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_9 = NULL,a_10 = NULL,b_10 = NULL,q_5 = NULL;
                                    t = SSLgetAnnotations(h_31);
                                    x_9 = t;
                                    t = i_31;
                                    t = strategy_expression_0_0(t);
                                    a_10 = t;
                                    t = j_31;
                                    t = strategy_expression_0_0(t);
                                    b_10 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, a_10, b_10);
                                    q_5 = t;
                                    t = SSLsetAnnotations(q_5, x_9);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      i_31 = ATgetArgument(t, 0);
                                      j_31 = ATgetArgument(t, 1);
                                      g_31 = ATgetArgument(t, 2);
                                      {
                                        ATerm k_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_5 = NULL;
                                        t = SSLgetAnnotations(h_31);
                                        k_10 = t;
                                        t = i_31;
                                        t = strategy_expression_0_0(t);
                                        o_10 = t;
                                        t = j_31;
                                        t = strategy_expression_0_0(t);
                                        p_10 = t;
                                        t = g_31;
                                        t = strategy_expression_0_0(t);
                                        q_10 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, o_10, p_10, q_10);
                                        r_5 = t;
                                        t = SSLsetAnnotations(r_5, k_10);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          i_31 = ATgetArgument(t, 0);
                                          j_31 = ATgetArgument(t, 1);
                                          {
                                            ATerm z_10 = NULL,c_11 = NULL,d_11 = NULL,s_5 = NULL;
                                            t = SSLgetAnnotations(h_31);
                                            z_10 = t;
                                            t = i_31;
                                            t = strategy_expression_0_0(t);
                                            c_11 = t;
                                            t = j_31;
                                            t = strategy_expression_0_0(t);
                                            d_11 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, c_11, d_11);
                                            s_5 = t;
                                            t = SSLsetAnnotations(s_5, z_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              i_31 = ATgetArgument(t, 0);
                                              j_31 = ATgetArgument(t, 1);
                                              {
                                                ATerm l_11 = NULL,o_11 = NULL,p_11 = NULL,t_5 = NULL;
                                                t = SSLgetAnnotations(h_31);
                                                l_11 = t;
                                                t = i_31;
                                                t = strategy_expression_0_0(t);
                                                o_11 = t;
                                                t = j_31;
                                                t = strategy_expression_0_0(t);
                                                p_11 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, o_11, p_11);
                                                t_5 = t;
                                                t = SSLsetAnnotations(t_5, l_11);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  i_31 = ATgetArgument(t, 0);
                                                  j_31 = ATgetArgument(t, 1);
                                                  g_31 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm y_11 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,h_12 = NULL,i_12 = NULL,w_5 = NULL,v_5 = NULL;
                                                    t = SSLgetAnnotations(h_31);
                                                    y_11 = t;
                                                    t = i_31;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(i_31);
                                                    e_12 = t;
                                                    t = f_12;
                                                    {
                                                      ATerm n_7 = t;
                                                      int o_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = SSL_is_string(f_12);
                                                          LocalPopChoice(o_7);
                                                        }
                                                      else
                                                        {
                                                          t = n_7;
                                                          {
                                                            ATerm y_12 = NULL,z_12 = NULL,j_13 = NULL,m_13 = NULL,n_13 = NULL,u_5 = NULL;
                                                            if(match_cons(t, sym_Mod_2))
                                                              {
                                                                y_12 = ATgetArgument(t, 0);
                                                                z_12 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSLgetAnnotations(f_12);
                                                            j_13 = t;
                                                            t = SSL_is_string(y_12);
                                                            m_13 = t;
                                                            t = SSL_is_string(z_12);
                                                            n_13 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Mod_2, m_13, n_13);
                                                            u_5 = t;
                                                            t = SSLsetAnnotations(u_5, j_13);
                                                          }
                                                        }
                                                    }
                                                    h_12 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, h_12);
                                                    v_5 = t;
                                                    t = SSLsetAnnotations(v_5, e_12);
                                                    i_12 = t;
                                                    t = j_31;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    c_12 = t;
                                                    t = g_31;
                                                    t = map_1_0(term_expression_0_0, t);
                                                    d_12 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, i_12, c_12, d_12);
                                                    w_5 = t;
                                                    t = SSLsetAnnotations(w_5, y_11);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      i_31 = ATgetArgument(t, 0);
                                                      j_31 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm w_13 = NULL,z_13 = NULL,b_14 = NULL,x_5 = NULL;
                                                        t = SSLgetAnnotations(h_31);
                                                        w_13 = t;
                                                        t = SSL_is_string(i_31);
                                                        z_13 = t;
                                                        t = j_31;
                                                        t = strategy_expression_0_0(t);
                                                        b_14 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, z_13, b_14);
                                                        x_5 = t;
                                                        t = SSLsetAnnotations(x_5, w_13);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          i_31 = ATgetArgument(t, 0);
                                                          j_31 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm l_14 = NULL,p_14 = NULL,r_14 = NULL,y_5 = NULL;
                                                            t = SSLgetAnnotations(h_31);
                                                            l_14 = t;
                                                            t = SSL_is_int(i_31);
                                                            p_14 = t;
                                                            t = j_31;
                                                            t = strategy_expression_0_0(t);
                                                            r_14 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, p_14, r_14);
                                                            y_5 = t;
                                                            t = SSLsetAnnotations(y_5, l_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              i_31 = ATgetArgument(t, 0);
                                                              j_31 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm e_15 = NULL,i_15 = NULL,k_15 = NULL,z_5 = NULL;
                                                                t = SSLgetAnnotations(h_31);
                                                                e_15 = t;
                                                                t = SSL_is_string(i_31);
                                                                i_15 = t;
                                                                t = j_31;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                k_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, i_15, k_15);
                                                                z_5 = t;
                                                                t = SSLsetAnnotations(z_5, e_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  i_31 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm c_16 = NULL,h_16 = NULL,a_6 = NULL;
                                                                    t = SSLgetAnnotations(h_31);
                                                                    c_16 = t;
                                                                    t = i_31;
                                                                    t = strategy_expression_0_0(t);
                                                                    h_16 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, h_16);
                                                                    a_6 = t;
                                                                    t = SSLsetAnnotations(a_6, c_16);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      i_31 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm q_16 = NULL,s_16 = NULL,b_6 = NULL;
                                                                        t = SSLgetAnnotations(h_31);
                                                                        q_16 = t;
                                                                        t = i_31;
                                                                        t = strategy_expression_0_0(t);
                                                                        s_16 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, s_16);
                                                                        b_6 = t;
                                                                        t = SSLsetAnnotations(b_6, q_16);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          i_31 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm d_17 = NULL,i_17 = NULL,c_6 = NULL;
                                                                            t = SSLgetAnnotations(h_31);
                                                                            d_17 = t;
                                                                            t = i_31;
                                                                            t = strategy_expression_0_0(t);
                                                                            i_17 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, i_17);
                                                                            c_6 = t;
                                                                            t = SSLsetAnnotations(c_6, d_17);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              i_31 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm u_17 = NULL,w_17 = NULL,d_6 = NULL;
                                                                                t = SSLgetAnnotations(h_31);
                                                                                u_17 = t;
                                                                                t = i_31;
                                                                                t = strategy_expression_0_0(t);
                                                                                w_17 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, w_17);
                                                                                d_6 = t;
                                                                                t = SSLsetAnnotations(d_6, u_17);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  i_31 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm f_18 = NULL,h_18 = NULL,e_6 = NULL;
                                                                                    t = SSLgetAnnotations(h_31);
                                                                                    f_18 = t;
                                                                                    t = i_31;
                                                                                    t = term_expression_0_0(t);
                                                                                    h_18 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, h_18);
                                                                                    e_6 = t;
                                                                                    t = SSLsetAnnotations(e_6, f_18);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      i_31 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm n_18 = NULL,q_18 = NULL,f_6 = NULL;
                                                                                        t = SSLgetAnnotations(h_31);
                                                                                        n_18 = t;
                                                                                        t = i_31;
                                                                                        t = term_expression_0_0(t);
                                                                                        q_18 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, q_18);
                                                                                        f_6 = t;
                                                                                        t = SSLsetAnnotations(f_6, n_18);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          i_31 = ATgetArgument(t, 0);
                                                                                          j_31 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm h_19 = NULL,l_19 = NULL,m_19 = NULL,g_6 = NULL;
                                                                                            t = SSLgetAnnotations(h_31);
                                                                                            h_19 = t;
                                                                                            t = i_31;
                                                                                            t = map_1_0(u_0, t);
                                                                                            l_19 = t;
                                                                                            t = j_31;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            m_19 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, l_19, m_19);
                                                                                            g_6 = t;
                                                                                            t = SSLsetAnnotations(g_6, h_19);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              i_31 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm c_20 = NULL,j_20 = NULL,h_6 = NULL;
                                                                                                t = SSLgetAnnotations(h_31);
                                                                                                c_20 = t;
                                                                                                t = i_31;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                j_20 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, j_20);
                                                                                                h_6 = t;
                                                                                                t = SSLsetAnnotations(h_6, c_20);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  i_31 = ATgetArgument(t, 0);
                                                                                                  j_31 = ATgetArgument(t, 1);
                                                                                                  g_31 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm c_21 = NULL,l_21 = NULL,p_21 = NULL,q_21 = NULL,i_6 = NULL;
                                                                                                    t = SSLgetAnnotations(h_31);
                                                                                                    c_21 = t;
                                                                                                    t = SSL_is_string(i_31);
                                                                                                    l_21 = t;
                                                                                                    t = j_31;
                                                                                                    t = map_1_0(strategy_expression_0_0, t);
                                                                                                    p_21 = t;
                                                                                                    t = g_31;
                                                                                                    t = map_1_0(term_expression_0_0, t);
                                                                                                    q_21 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, l_21, p_21, q_21);
                                                                                                    i_6 = t;
                                                                                                    t = SSLsetAnnotations(i_6, c_21);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm e_22 = NULL,j_22 = NULL,k_22 = NULL,o_6 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      i_31 = ATgetArgument(t, 0);
                                                                                                      j_31 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(h_31);
                                                                                                  e_22 = t;
                                                                                                  t = i_31;
                                                                                                  t = map_1_0(v_0, t);
                                                                                                  j_22 = t;
                                                                                                  t = j_31;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  k_22 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, j_22, k_22);
                                                                                                  o_6 = t;
                                                                                                  t = SSLsetAnnotations(o_6, e_22);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(m_7);
    }
  else
    {
      t = l_7;
      t = debug_1_0(y_0, t);
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm p_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,u_7 = NULL;
  u_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      r_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_30);
  p_30 = t;
  t = SSL_is_string(r_30);
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_30, s_30);
  u_7 = t;
  t = SSLsetAnnotations(u_7, p_30);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,y_31 = NULL,x_7 = NULL;
  y_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      w_30 = ATgetArgument(t, 0);
      x_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_31);
  v_30 = t;
  t = SSL_is_string(w_30);
  y_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_30, x_30);
  x_7 = t;
  t = SSLsetAnnotations(x_7, v_30);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm b_34 = NULL,d_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,p_8 = NULL;
  l_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_34 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_34);
  b_34 = t;
  t = SSL_is_string(d_34);
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_34, j_34);
  p_8 = t;
  t = SSLsetAnnotations(p_8, b_34);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm m_34 = NULL,o_34 = NULL,s_34 = NULL,w_34 = NULL,x_34 = NULL,t_8 = NULL;
  x_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_34 = ATgetArgument(t, 0);
      s_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_34);
  m_34 = t;
  t = SSL_is_string(o_34);
  w_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_34, s_34);
  t_8 = t;
  t = SSLsetAnnotations(t_8, m_34);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm q_37 = NULL,i_40 = NULL,j_40 = NULL,c_41 = NULL,d_41 = NULL,c_9 = NULL;
  d_41 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_40 = ATgetArgument(t, 0);
      j_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_41);
  q_37 = t;
  t = SSL_is_string(i_40);
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_41, j_40);
  c_9 = t;
  t = SSLsetAnnotations(c_9, q_37);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm e_41 = NULL,y_41 = NULL,z_41 = NULL,a_43 = NULL,b_43 = NULL,g_12 = NULL;
  b_43 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      y_41 = ATgetArgument(t, 0);
      z_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_43);
  e_41 = t;
  t = SSL_is_string(y_41);
  a_43 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_43, z_41);
  g_12 = t;
  t = SSLsetAnnotations(g_12, e_41);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_p_7;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
      y_39 = t;
      if(match_cons(t, sym_SDefT_4))
        {
          z_39 = ATgetArgument(t, 0);
          a_40 = ATgetArgument(t, 1);
          b_40 = ATgetArgument(t, 2);
          x_39 = ATgetArgument(t, 3);
          {
            ATerm p_29 = NULL,u_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,m_8 = NULL;
            t = SSLgetAnnotations(y_39);
            p_29 = t;
            t = z_39;
            {
              ATerm t_7 = t;
              int v_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_is_string(z_39);
                  LocalPopChoice(v_7);
                }
              else
                {
                  t = t_7;
                  {
                    ATerm m_30 = NULL,n_30 = NULL,k_32 = NULL,q_32 = NULL,s_32 = NULL,s_7 = NULL;
                    if(match_cons(t, sym_Mod_2))
                      {
                        m_30 = ATgetArgument(t, 0);
                        n_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(z_39);
                    k_32 = t;
                    t = SSL_is_string(m_30);
                    q_32 = t;
                    t = SSL_is_string(n_30);
                    s_32 = t;
                    t = (ATerm) ATmakeAppl(sym_Mod_2, q_32, s_32);
                    s_7 = t;
                    t = SSLsetAnnotations(s_7, k_32);
                  }
                }
            }
            u_29 = t;
            t = a_40;
            t = map_1_0(a_1, t);
            w_29 = t;
            t = b_40;
            t = map_1_0(d_1, t);
            x_29 = t;
            t = x_39;
            t = strategy_expression_0_0(t);
            y_29 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, u_29, w_29, x_29, y_29);
            m_8 = t;
            t = SSLsetAnnotations(m_8, p_29);
          }
        }
      else
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              z_39 = ATgetArgument(t, 0);
              a_40 = ATgetArgument(t, 1);
              b_40 = ATgetArgument(t, 2);
              x_39 = ATgetArgument(t, 3);
              {
                ATerm d_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,w_8 = NULL;
                t = SSLgetAnnotations(y_39);
                d_33 = t;
                t = z_39;
                {
                  ATerm y_7 = t;
                  int b_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_is_string(z_39);
                      LocalPopChoice(b_8);
                    }
                  else
                    {
                      t = y_7;
                      {
                        ATerm z_33 = NULL,a_34 = NULL,n_35 = NULL,t_35 = NULL,u_35 = NULL,o_8 = NULL;
                        if(match_cons(t, sym_Mod_2))
                          {
                            z_33 = ATgetArgument(t, 0);
                            a_34 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(z_39);
                        n_35 = t;
                        t = SSL_is_string(z_33);
                        t_35 = t;
                        t = SSL_is_string(a_34);
                        u_35 = t;
                        t = (ATerm) ATmakeAppl(sym_Mod_2, t_35, u_35);
                        o_8 = t;
                        t = SSLsetAnnotations(o_8, n_35);
                      }
                    }
                }
                i_33 = t;
                t = a_40;
                t = map_1_0(e_1, t);
                j_33 = t;
                t = b_40;
                t = map_1_0(f_1, t);
                k_33 = t;
                t = x_39;
                t = strategy_expression_0_0(t);
                l_33 = t;
                t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, i_33, j_33, k_33, l_33);
                w_8 = t;
                t = SSLsetAnnotations(w_8, d_33);
              }
            }
          else
            {
              ATerm n_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,k_12 = NULL;
              if(match_cons(t, sym_ExtSDef_3))
                {
                  z_39 = ATgetArgument(t, 0);
                  a_40 = ATgetArgument(t, 1);
                  b_40 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(y_39);
              n_36 = t;
              t = z_39;
              {
                ATerm c_8 = t;
                int e_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_is_string(z_39);
                    LocalPopChoice(e_8);
                  }
                else
                  {
                    t = c_8;
                    {
                      ATerm n_37 = NULL,p_37 = NULL,m_45 = NULL,n_46 = NULL,u_46 = NULL,x_8 = NULL;
                      if(match_cons(t, sym_Mod_2))
                        {
                          n_37 = ATgetArgument(t, 0);
                          p_37 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(z_39);
                      m_45 = t;
                      t = SSL_is_string(n_37);
                      n_46 = t;
                      t = SSL_is_string(p_37);
                      u_46 = t;
                      t = (ATerm) ATmakeAppl(sym_Mod_2, n_46, u_46);
                      x_8 = t;
                      t = SSLsetAnnotations(x_8, m_45);
                    }
                  }
              }
              s_36 = t;
              t = a_40;
              t = map_1_0(g_1, t);
              t_36 = t;
              t = b_40;
              t = map_1_0(h_1, t);
              u_36 = t;
              t = (ATerm) ATmakeAppl(sym_ExtSDef_3, s_36, t_36, u_36);
              k_12 = t;
              t = SSLsetAnnotations(k_12, n_36);
            }
        }
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      t = debug_1_0(j_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm r_109 (ATerm), ATerm t)
{
  static ATerm w_40 (ATerm t);
  static ATerm w_40 (ATerm t)
  {
    ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
    t_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_40;
      }
    else
      {
        ATerm r_48 = NULL,r_49 = NULL,d_50 = NULL,a_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_40 = ATgetFirst((ATermList) t);
            v_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_40);
        r_48 = t;
        t = u_40;
        t = r_109(t);
        r_49 = t;
        t = v_40;
        t = w_40(t);
        d_50 = t;
        t = (ATerm) ATinsert(CheckATermList(d_50), r_49);
        a_13 = t;
        t = SSLsetAnnotations(a_13, r_48);
      }
    return(t);
  }
  t = w_40(t);
  return(t);
}
static ATerm z_3 (ATerm o_50, ATerm p_50, ATerm t)
{
  ATerm y_40 = NULL;
  t = SSL_fputc(o_50, p_50);
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_40);
  return(t);
}
static ATerm a_4 (ATerm t_34, ATerm u_34, ATerm t)
{
  ATerm z_40 = NULL;
  t = SSL_write_term_to_stream_text(t_34, u_34);
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_40);
  return(t);
}
static ATerm c_4 (ATerm i_109 (ATerm), ATerm e_236, ATerm z_34, ATerm t)
{
  ATerm a_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_236, term_g_8);
  t = g_4(t);
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_41, z_34);
  t = i_109(t);
  t = fclose_0_0(t);
  t = z_34;
  return(t);
}
static ATerm b_4 (ATerm p_34, ATerm q_34, ATerm t)
{
  ATerm b_41 = NULL;
  t = SSL_write_term_to_stream_baf(p_34, q_34);
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_41);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if(match_cons(h_8, sym_Stream_1))
        {
          t_53 = ATgetArgument(h_8, 0);
        }
      else
        _fail(t);
      u_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(t_53, u_53, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,i_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_8 = ATgetArgument(t, 0);
      if(match_cons(j_8, sym_Stream_1))
        {
          g_57 = ATgetArgument(j_8, 0);
        }
      else
        _fail(t);
      i_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(g_57, i_57, t);
  d_57 = t;
  t = term_l_8;
  e_57 = t;
  t = d_57;
  if(match_cons(t, sym_Stream_1))
    {
      f_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_8, d_57);
  t = z_3(e_57, f_57, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,r_42 = NULL,s_42 = NULL,q_13 = NULL,i_13 = NULL;
  g_41 = t;
  if(match_cons(t, sym__2))
    {
      n_41 = ATgetArgument(t, 0);
      o_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_41);
  m_41 = t;
  t = n_41;
  {
    ATerm n_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm l_1 (ATerm t);
        static ATerm l_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((f_41 != NULL) && (f_41 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                f_41 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(l_1, t);
        LocalPopChoice(q_8);
      }
    else
      {
        t = n_8;
        t = term_r_8;
        f_41 = t;
      }
  }
  p_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_41, o_41);
  i_13 = t;
  t = SSLsetAnnotations(i_13, m_41);
  t = g_41;
  if(match_cons(t, sym__2))
    {
      i_41 = ATgetArgument(t, 0);
      j_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_41);
  h_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_41, (ATerm) ATmakeAppl(sym__2, not_null(f_41), j_41));
  q_13 = t;
  t = SSLsetAnnotations(q_13, h_41);
  l_41 = t;
  if(match_cons(t, sym__2))
    {
      r_42 = ATgetArgument(t, 0);
      s_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_51 = NULL,y_52 = NULL,z_52 = NULL,r_53 = NULL,s_53 = NULL,t_13 = NULL;
        t = SSLgetAnnotations(l_41);
        s_51 = t;
        t = r_42;
        t = fetch_1_0(m_1, t);
        y_52 = t;
        t = s_42;
        if(match_cons(t, sym__2))
          {
            r_53 = ATgetArgument(t, 0);
            s_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_4(n_1, r_53, s_53, t);
        z_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_52, z_52);
        t_13 = t;
        t = SSLsetAnnotations(t_13, s_51);
        LocalPopChoice(u_8);
      }
    else
      {
        t = s_8;
        {
          ATerm x_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,u_13 = NULL;
          t = SSLgetAnnotations(l_41);
          x_56 = t;
          t = s_42;
          if(match_cons(t, sym__2))
            {
              b_57 = ATgetArgument(t, 0);
              c_57 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_4(s_1, b_57, c_57, t);
          a_57 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_42, a_57);
          u_13 = t;
          t = SSLsetAnnotations(u_13, x_56);
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
ATerm apply_strategy_1_0 (ATerm u_127 (ATerm), ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL;
  z_42 = t;
  t = dtime_0_0(t);
  t = z_42;
  t = u_127(t);
  y_42 = t;
  t = dtime_0_0(t);
  v_42 = t;
  t = y_42;
  if(match_cons(t, sym__2))
    {
      w_42 = ATgetArgument(t, 0);
      x_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_42), (ATerm) ATmakeAppl(sym_Runtime_1, v_42)), x_42);
  return(t);
}
static ATerm n_43 (ATerm h_43, ATerm t)
{
  t = SSL_fclose(h_43);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL;
  l_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_43 = ATgetArgument(t, 0);
      {
        ATerm v_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_43);
            LocalPopChoice(z_8);
          }
        else
          {
            t = v_8;
            t = n_43(l_43, t);
          }
      }
    }
  else
    {
      t = n_43(l_43, t);
    }
  return(t);
}
static ATerm d_4 (ATerm v_34, ATerm t)
{
  t = SSL_read_term_from_stream(v_34);
  return(t);
}
static ATerm e_4 (ATerm s_48, ATerm t_48, ATerm t)
{
  t = SSL_strcat(s_48, t_48);
  return(t);
}
static ATerm f_4 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm o_43 = NULL;
  t = SSL_fopen(q_50, r_50);
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_43);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_43 = NULL;
  t = SSL_stdin_stream();
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_43);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_43 = NULL;
  t = SSL_stdout_stream();
  q_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_43);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_43 = NULL;
  t = SSL_stderr_stream();
  r_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_43);
  return(t);
}
static ATerm y_44 (ATerm x_43, ATerm t)
{
  ATerm y_43 = NULL;
  t = SSL_explode_term(x_43);
  if(match_cons(t, sym__2))
    {
      ATerm a_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_9 = ATgetArgument(t, 1);
        if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
          {
            y_43 = ATgetFirst((ATermList) e_9);
            {
              ATerm f_9 = (ATerm) ATgetNext((ATermList) e_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_43;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_43;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_43;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_43;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_44 (ATerm b_44, ATerm c_44, ATerm d_44, ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,j_44 = NULL,q_14 = NULL;
  t = SSLgetAnnotations(d_44);
  g_44 = t;
  t = b_44;
  if(match_cons(t, sym_Path_1))
    {
      j_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_44, c_44);
  q_14 = t;
  t = SSLsetAnnotations(q_14, g_44);
  if(match_cons(t, sym__2))
    {
      e_44 = ATgetArgument(t, 0);
      f_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_4(e_44, f_44, t);
  return(t);
}
static ATerm a_45 (ATerm l_44, ATerm m_44, ATerm n_44, ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,t_44 = NULL,s_14 = NULL;
  t = SSLgetAnnotations(n_44);
  q_44 = t;
  t = SSL_is_string(l_44);
  t_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_44, m_44);
  s_14 = t;
  t = SSLsetAnnotations(s_14, q_44);
  if(match_cons(t, sym__2))
    {
      o_44 = ATgetArgument(t, 0);
      p_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_4(o_44, p_44, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL;
  v_44 = t;
  if(match_cons(t, sym__2))
    {
      w_44 = ATgetArgument(t, 0);
      x_44 = ATgetArgument(t, 1);
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_44(v_44, t);
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
                  t = z_44(w_44, x_44, v_44, t);
                  LocalPopChoice(j_9);
                }
              else
                {
                  t = i_9;
                  t = a_45(w_44, x_44, v_44, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_44(v_44, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL,j_45 = NULL;
  j_45 = t;
  {
    ATerm k_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_45, term_n_9);
        t = g_4(t);
        LocalPopChoice(m_9);
      }
    else
      {
        t = k_9;
        {
          ATerm v_57 = NULL,w_57 = NULL;
          t = term_q_9;
          w_57 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_9, j_45);
          t = e_4(w_57, j_45, t);
          v_57 = t;
          t = SSL_perror(v_57);
          _fail(t);
        }
      }
  }
  d_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_4(e_45, t);
  c_45 = t;
  t = d_45;
  t = fclose_0_0(t);
  t = c_45;
  return(t);
}
ATerm fetch_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  static ATerm i_46 (ATerm t);
  static ATerm i_46 (ATerm t)
  {
    ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
    f_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_46 = ATgetFirst((ATermList) t);
        h_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_9 = t;
      int s_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_58 = NULL,e_58 = NULL,b_15 = NULL;
          t = SSLgetAnnotations(f_46);
          b_58 = t;
          t = g_46;
          t = b_110(t);
          e_58 = t;
          t = (ATerm) ATinsert(CheckATermList(h_46), e_58);
          b_15 = t;
          t = SSLsetAnnotations(b_15, b_58);
          LocalPopChoice(s_9);
        }
      else
        {
          t = r_9;
          {
            ATerm m_58 = NULL,p_58 = NULL,d_15 = NULL;
            t = SSLgetAnnotations(f_46);
            m_58 = t;
            t = h_46;
            t = i_46(t);
            p_58 = t;
            t = (ATerm) ATinsert(CheckATermList(p_58), g_46);
            d_15 = t;
            t = SSLsetAnnotations(d_15, m_58);
          }
        }
    }
    return(t);
  }
  t = i_46(t);
  return(t);
}
static ATerm l_4 (ATerm o_57, ATerm p_57, ATerm t)
{
  ATerm l_46 = NULL;
  t = lookup_table_0_1(o_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(p_57, l_46, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_126 (ATerm), ATerm t)
{
  ATerm o_46 = NULL;
  o_46 = t;
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL;
        t = term_s_6;
        r_46 = t;
        t = term_v_9;
        s_46 = t;
        t = term_w_9;
        t = l_4(r_46, s_46, t);
        q_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_46, term_y_9);
        t = geq_0_0(t);
        t = o_46;
        t = d_126(t);
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
        t = o_46;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
  v_46 = t;
  {
    ATerm z_9 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_46;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_10 = ATgetFirst((ATermList) t);
                ATerm e_10 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_46;
          }
        LocalPopChoice(c_10);
      }
    else
      {
        t = z_9;
        t = (ATerm) ATinsert(ATempty, v_46);
      }
  }
  w_46 = t;
  t = term_r_8;
  x_46 = t;
  t = SSL_printnl(x_46, w_46);
  t = v_46;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL;
  t = term_s_6;
  b_47 = t;
  t = term_t_6;
  c_47 = t;
  t = term_u_6;
  t = l_4(b_47, c_47, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm e_47 = NULL;
  e_47 = t;
  if(match_string(t, "-k"))
    {
      t = e_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_47;
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL;
  f_47 = t;
  t = SSL_string_to_int(f_47);
  g_47 = t;
  t = term_f_10;
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_10, g_47);
  t = o_4(h_47, g_47, t);
  t = f_47;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_1, w_1, x_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm j_47 = NULL;
  j_47 = t;
  if(match_string(t, "-S"))
    {
      t = j_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_47;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL;
  t = term_v_9;
  k_47 = t;
  t = term_h_10;
  l_47 = t;
  t = term_i_10;
  t = o_4(k_47, l_47, t);
  t = term_j_10;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_l_10;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
  m_47 = t;
  t = SSL_string_to_int(m_47);
  n_47 = t;
  t = term_v_9;
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_9, n_47);
  t = o_4(o_47, n_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_47);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_m_10;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL;
  t = term_n_10;
  p_47 = t;
  t = term_l_5;
  q_47 = t;
  t = term_r_10;
  t = o_4(p_47, q_47, t);
  t = term_s_10;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_1, c_2, d_2, t);
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
            t = ArgOption_3_0(f_2, q_2, r_2, t);
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
            t = Option_3_0(s_2, t_2, u_2, t);
          }
      }
    }
  return(t);
}
static ATerm o_4 (ATerm f_69, ATerm g_69, ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL;
  t = term_s_6;
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_6, f_69, g_69);
  t = lookup_table_0_1(r_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(f_69, g_69, s_47, t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_6, f_69, g_69);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL;
      t = term_l_5;
      t = g_0(t);
      y_47 = t;
      t = term_y_6;
      z_47 = t;
      t = term_z_6;
      a_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_6, term_z_6, y_47);
      t = m_4(z_47, a_48, y_47, t);
      _fail(t);
    }
  else
    {
      ATerm d_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_47 = ATgetFirst((ATermList) t);
          x_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_47;
      t = d_0(t);
      t = term_l_5;
      t = f_0(t);
      d_48 = t;
      t = (ATerm) ATinsert(CheckATermList(x_47), d_48);
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm f_48 = NULL;
  f_48 = t;
  if(match_string(t, "-o"))
    {
      t = f_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_48;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL;
  g_48 = t;
  t = term_y_10;
  h_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_10, g_48);
  t = o_4(h_48, g_48, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_48);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_2, y_2, z_2, t);
  return(t);
}
static ATerm m_4 (ATerm v_55, ATerm w_55, ATerm u_55, ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL;
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_55, w_55);
  {
    ATerm b_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_11 = ATgetArgument(t, 0);
            ATerm g_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_55, w_55);
        t = l_4(v_55, w_55, t);
        LocalPopChoice(e_11);
      }
    else
      {
        t = b_11;
        t = (ATerm) ATempty;
      }
  }
  k_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_55, w_55, (ATerm) ATinsert(CheckATermList(k_48), u_55));
  t = lookup_table_0_1(v_55, t);
  n_48 = t;
  t = (ATerm) ATinsert(CheckATermList(k_48), u_55);
  l_48 = t;
  t = n_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(w_55, l_48, m_48, t);
  t = j_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL;
      t = term_l_5;
      t = l_0(t);
      a_49 = t;
      t = term_y_6;
      b_49 = t;
      t = term_z_6;
      c_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_6, term_z_6, a_49);
      t = m_4(b_49, c_49, a_49, t);
      _fail(t);
    }
  else
    {
      ATerm g_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_48 = ATgetFirst((ATermList) t);
          x_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_48 = ATgetFirst((ATermList) t);
          z_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_48;
      t = h_0(t);
      t = y_48;
      t = j_0(t);
      g_49 = t;
      t = (ATerm) ATinsert(CheckATermList(z_48), g_49);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm i_49 = NULL;
  i_49 = t;
  if(match_string(t, "-i"))
    {
      t = i_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_49;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL;
  j_49 = t;
  t = term_h_11;
  k_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_11, j_49);
  t = o_4(k_49, j_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_49);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_i_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, b_3, c_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_5;
  t = whoami_0_0(t);
  l_49 = t;
  t = term_g_7;
  n_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_11), l_49);
  o_49 = t;
  t = SSL_printnl(n_49, o_49);
  t = term_k_11;
  m_49 = t;
  t = SSL_exit(m_49);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL;
  t = term_s_6;
  p_49 = t;
  t = term_t_6;
  q_49 = t;
  t = term_u_6;
  t = l_4(p_49, q_49, t);
  return(t);
}
static ATerm h_4 (ATerm e_54, ATerm f_54, ATerm t)
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_54, f_54);
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      t = SSL_addr(e_54, f_54);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
  s_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_49;
      t = q_116(t);
    }
  else
    {
      ATerm x_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_49 = ATgetFirst((ATermList) t);
          u_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_49;
      t = foldr_2_0(q_116, r_116, t);
      x_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_49, x_49);
      t = r_116(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_h_10;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm y_58 = NULL,z_58 = NULL;
  if(match_cons(t, sym__2))
    {
      y_58 = ATgetArgument(t, 0);
      z_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_4(y_58, z_58, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_50 = NULL,u_58 = NULL,v_58 = NULL;
  t = times_0_0(t);
  v_58 = t;
  t = SSL_explode_term(v_58);
  if(match_cons(t, sym__2))
    {
      ATerm q_11 = ATgetArgument(t, 0);
      u_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_58;
  t = foldr_2_0(d_3, f_3, t);
  a_50 = t;
  t = SSL_TicksToSeconds(a_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
  l_50 = t;
  if(match_cons(t, sym__2))
    {
      m_50 = ATgetArgument(t, 0);
      n_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_50;
        if((m_50 != t))
          {
            _fail(t);
          }
        t = l_50;
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = (ATerm) ATmakeAppl(sym__2, m_50, n_50);
        {
          ATerm t_11 = t;
          int u_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_50, n_50);
              LocalPopChoice(u_11);
            }
          else
            {
              t = t_11;
              t = SSL_gtr(m_50, n_50);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_50, n_50);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_126 (ATerm), ATerm t)
{
  ATerm x_50 = NULL;
  x_50 = t;
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL;
        t = term_s_6;
        a_51 = t;
        t = term_v_9;
        b_51 = t;
        t = term_w_9;
        t = l_4(a_51, b_51, t);
        z_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_50, term_k_11);
        t = geq_0_0(t);
        t = x_50;
        t = c_126(t);
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        t = x_50;
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,g_51 = NULL,h_51 = NULL;
  t = run_time_0_0(t);
  d_51 = t;
  t = term_l_5;
  t = whoami_0_0(t);
  e_51 = t;
  t = term_g_7;
  g_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_11), d_51), term_x_11), e_51);
  h_51 = t;
  t = SSL_printnl(g_51, h_51);
  t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_11), d_51), term_x_11), e_51));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_10;
  i_51 = t;
  t = SSL_exit(i_51);
  return(t);
}
static ATerm p_4 (ATerm g_60, ATerm h_60, ATerm i_60, ATerm t)
{
  ATerm j_51 = NULL;
  t = SSL_hashtable_put(i_60, g_60, h_60);
  j_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_51);
  return(t);
}
static ATerm q_4 (ATerm j_60, ATerm k_60, ATerm t)
{
  t = SSL_hashtable_get(k_60, j_60);
  return(t);
}
ATerm lookup_table_0_1 (ATerm h_57, ATerm t)
{
  ATerm t_51 = NULL;
  t = table_hashtable_0_0(t);
  t_51 = t;
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_59 = NULL;
        t = t_51;
        if(match_cons(t, sym_Hashtable_1))
          {
            k_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_4(h_57, k_59, t);
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        {
          ATerm p_59 = NULL;
          t = h_57;
          t = table_create_0_0(t);
          t = t_51;
          if(match_cons(t, sym_Hashtable_1))
            {
              p_59 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_4(h_57, p_59, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_60, ATerm p_60, ATerm t)
{
  ATerm w_51 = NULL;
  t = SSL_hashtable_create(o_60, p_60);
  w_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_51);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL,b_52 = NULL,c_52 = NULL;
  x_51 = t;
  t = term_j_12;
  b_52 = t;
  t = term_l_12;
  c_52 = t;
  t = x_51;
  t = new_hashtable_0_2(b_52, c_52, t);
  y_51 = t;
  t = x_51;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(x_51, y_51, z_51, t);
  t = x_51;
  return(t);
}
static ATerm j_4 (ATerm l_60, ATerm m_60, ATerm t)
{
  ATerm d_52 = NULL;
  t = SSL_hashtable_remove(m_60, l_60);
  d_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_52);
  return(t);
}
static ATerm k_4 (ATerm q_60, ATerm t)
{
  ATerm e_52 = NULL;
  t = SSL_hashtable_destroy(q_60);
  e_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_52);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_52 = NULL;
  t = SSL_table_hashtable();
  f_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_52);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL;
  g_52 = t;
  t = table_hashtable_0_0(t);
  h_52 = t;
  t = lookup_table_0_1(g_52, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_4(j_52, t);
  t = h_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_4(g_52, i_52, t);
  t = g_52;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL;
  t = term_m_12;
  k_52 = t;
  t = term_l_5;
  l_52 = t;
  t = term_n_12;
  t = o_4(k_52, l_52, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_o_12;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
  t = term_m_12;
  o_52 = t;
  t = term_l_5;
  p_52 = t;
  t = term_n_12;
  t = o_4(o_52, p_52, t);
  t = term_p_12;
  m_52 = t;
  t = term_l_5;
  n_52 = t;
  t = term_q_12;
  t = o_4(m_52, n_52, t);
  t = term_r_12;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_3, n_3, r_3, t);
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      t = Option_3_0(s_3, t_3, u_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,l_15 = NULL;
  v_52 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_52 = ATgetFirst((ATermList) t);
      s_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_52);
  q_52 = t;
  t = r_52;
  t = y_85(t);
  t_52 = t;
  t = s_52;
  t = z_85(t);
  u_52 = t;
  t = (ATerm) ATinsert(CheckATermList(u_52), t_52);
  l_15 = t;
  t = SSLsetAnnotations(l_15, q_52);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_131 (ATerm), ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,f_53 = NULL,g_53 = NULL,q_15 = NULL;
  a_53 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_12;
        t = a_131(t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
      }
  }
  t = a_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_53 = ATgetFirst((ATermList) t);
      d_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_53);
  b_53 = t;
  t = term_t_6;
  g_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_6, c_53);
  t = o_4(g_53, c_53, t);
  t = d_53;
  {
    static ATerm q_53 (ATerm t);
    static ATerm q_53 (ATerm t)
    {
      ATerm b_13 = t;
      int c_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_13 = t;
          int e_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_53 = NULL;
              j_53 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_53;
              LocalPopChoice(e_13);
            }
          else
            {
              t = d_13;
              t = a_131(t);
              t = Cons_2_0(_id, q_53, t);
            }
          LocalPopChoice(c_13);
        }
      else
        {
          t = b_13;
          {
            ATerm m_53 = NULL,n_53 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_53 = ATgetFirst((ATermList) t);
                n_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_53), (ATerm) ATmakeAppl(sym_Undefined_1, m_53));
          }
        }
      return(t);
    }
    t = q_53(t);
  }
  f_53 = t;
  t = (ATerm) ATinsert(CheckATermList(f_53), (ATerm) ATmakeAppl(sym_Program_1, c_53));
  q_15 = t;
  t = SSLsetAnnotations(q_15, b_53);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm d_54 = NULL;
  d_54 = t;
  if(match_string(t, "--help"))
    {
      t = d_54;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_54;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_54;
        }
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL;
  t = term_f_13;
  g_54 = t;
  t = term_l_5;
  h_54 = t;
  t = term_g_13;
  t = o_4(g_54, h_54, t);
  t = term_h_13;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_k_13;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm x_130 (ATerm), ATerm y_130 (ATerm), ATerm z_130 (ATerm), ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL;
  x_53 = t;
  t = term_y_6;
  y_53 = t;
  t = term_l_13;
  t = lookup_table_0_1(y_53, t);
  c_54 = t;
  t = term_z_6;
  z_53 = t;
  t = (ATerm) ATempty;
  a_54 = t;
  t = c_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(z_53, a_54, b_54, t);
  t = x_53;
  {
    static ATerm v_3 (ATerm t);
    static ATerm v_3 (ATerm t)
    {
      ATerm o_13 = t;
      int p_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_130(t);
          LocalPopChoice(p_13);
        }
      else
        {
          t = o_13;
          {
            ATerm r_13 = t;
            int s_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_3, y_3, n_4, t);
                LocalPopChoice(s_13);
              }
            else
              {
                t = r_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_3, t);
  }
  {
    ATerm v_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_54 = NULL;
        s_54 = t;
        {
          ATerm y_13 = t;
          int a_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_59 = NULL;
              t = s_54;
              {
                ATerm c_14 = t;
                int d_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_59 = NULL,v_59 = NULL;
                    t = term_s_6;
                    u_59 = t;
                    t = term_f_13;
                    v_59 = t;
                    t = term_e_14;
                    t = l_4(u_59, v_59, t);
                    LocalPopChoice(d_14);
                  }
                else
                  {
                    t = c_14;
                    t = fetch_1_0(t_4, t);
                  }
              }
              t = s_54;
              t = y_130(t);
              t = term_h_10;
              t_59 = t;
              t = SSL_exit(t_59);
              LocalPopChoice(a_14);
            }
          else
            {
              t = y_13;
              {
                ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL;
                t = term_s_6;
                a_60 = t;
                t = term_m_12;
                b_60 = t;
                t = term_f_14;
                t = l_4(a_60, b_60, t);
                t = s_54;
                t = z_130(t);
                t = term_h_10;
                z_59 = t;
                t = SSL_exit(z_59);
              }
            }
        }
        LocalPopChoice(x_13);
      }
    else
      {
        t = v_13;
        {
          ATerm g_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL;
              static ATerm z_4 (ATerm t);
              static ATerm z_4 (ATerm t)
              {
                ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL,t_15 = NULL;
                y_54 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_54 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_54);
                w_54 = t;
                t = x_54;
                if(((v_53 != NULL) && (v_53 != t)))
                  _fail(t);
                else
                  v_53 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_54);
                t_15 = t;
                t = SSLsetAnnotations(t_15, w_54);
                return(t);
              }
              t = fetch_1_0(z_4, t);
              t = term_g_7;
              u_54 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_53)), term_i_14);
              v_54 = t;
              t = SSL_printnl(u_54, v_54);
              t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_53)), term_i_14));
              t = y_130(t);
              t = term_k_11;
              t_54 = t;
              t = SSL_exit(t_54);
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
            }
        }
      }
  }
  w_53 = t;
  t = term_y_6;
  t = table_destroy_0_0(t);
  t = w_53;
  return(t);
}
ATerm option_wrap_5_0 (ATerm a_129 (ATerm), ATerm b_129 (ATerm), ATerm c_129 (ATerm), ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL;
  t = parse_options_3_0(a_129, b_129, c_129, t);
  d_55 = t;
  t = term_j_14;
  t = table_create_0_0(t);
  t = term_j_14;
  e_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_14, term_k_14, d_55);
  t = lookup_table_0_1(e_55, t);
  h_55 = t;
  t = term_k_14;
  f_55 = t;
  t = h_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(f_55, d_55, g_55, t);
  t = d_55;
  t = d_129(t);
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_129(t);
        t = report_success_0_0(t);
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = if_verbose2_1_0(h_5, t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL;
  t = term_o_14;
  i_55 = t;
  t = term_l_5;
  j_55 = t;
  t = term_t_14;
  t = o_4(i_55, j_55, t);
  t = term_u_14;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_v_14;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL;
  l_55 = t;
  t = term_s_6;
  p_55 = t;
  t = term_t_6;
  q_55 = t;
  t = term_u_6;
  t = l_4(p_55, q_55, t);
  m_55 = t;
  t = term_g_7;
  n_55 = t;
  t = (ATerm) ATinsert(ATempty, m_55);
  o_55 = t;
  t = SSL_printnl(n_55, o_55);
  t = l_55;
  return(t);
}
ATerm iowrap_3_0 (ATerm d_128 (ATerm), ATerm e_128 (ATerm), ATerm f_128 (ATerm), ATerm t)
{
  static ATerm b_5 (ATerm t);
  static ATerm d_5 (ATerm t);
  static ATerm b_5 (ATerm t)
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_128(t);
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
              t = input_option_0_0(t);
              LocalPopChoice(z_14);
            }
          else
            {
              t = y_14;
              {
                ATerm a_15 = t;
                int c_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(c_15);
                  }
                else
                  {
                    t = a_15;
                    {
                      ATerm f_15 = t;
                      int g_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(e_5, f_5, g_5, t);
                          LocalPopChoice(g_15);
                        }
                      else
                        {
                          t = f_15;
                          {
                            ATerm h_15 = t;
                            int j_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(j_15);
                              }
                            else
                              {
                                t = h_15;
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
  static ATerm d_5 (ATerm t)
  {
    ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL;
    s_55 = t;
    {
      ATerm m_15 = t;
      int n_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm i_5 (ATerm t);
          static ATerm i_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_55 != NULL) && (r_55 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_55 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_5, t);
          LocalPopChoice(n_15);
        }
      else
        {
          t = m_15;
          t = term_o_15;
          r_55 = t;
        }
    }
    t = not_null(r_55);
    t = ReadFromFile_0_0(t);
    t_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_55, t_55);
    t = apply_strategy_1_0(d_128, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(b_5, f_128, default_system_about_0_0, c_5, d_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,b_16 = NULL;
  d_56 = t;
  if(match_cons(t, sym__2))
    {
      a_56 = ATgetArgument(t, 0);
      b_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_56);
  z_55 = t;
  t = b_56;
  {
    ATerm p_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_56 = NULL,e_60 = NULL,n_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,a_16 = NULL,x_15 = NULL,w_15 = NULL,v_15 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            u_56 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_56);
        e_60 = t;
        t = u_56;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_60 = ATgetFirst((ATermList) t);
            s_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_56);
        n_60 = t;
        t = s_60;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_60 = ATgetFirst((ATermList) t);
            w_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_60);
        u_60 = t;
        t = v_60;
        if(match_cons(t, sym_Strategies_1))
          {
            z_60 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_60);
        y_60 = t;
        t = z_60;
        t = map_1_0(strategy_definition_0_0, t);
        a_61 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, a_61);
        v_15 = t;
        t = SSLsetAnnotations(v_15, y_60);
        b_61 = t;
        t = w_60;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(w_60), b_61);
        w_15 = t;
        t = SSLsetAnnotations(w_15, u_60);
        x_60 = t;
        t = (ATerm) ATinsert(CheckATermList(x_60), r_60);
        x_15 = t;
        t = SSLsetAnnotations(x_15, n_60);
        t_60 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, t_60);
        a_16 = t;
        t = SSLsetAnnotations(a_16, e_60);
        LocalPopChoice(r_15);
      }
    else
      {
        t = p_15;
        t = debug_1_0(k_5, t);
      }
  }
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_56, c_56);
  b_16 = t;
  t = SSLsetAnnotations(b_16, z_55);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(j_5, _fail, default_system_usage_0_0, t);
  return(t);
}
