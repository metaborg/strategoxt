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
ATerm term_o_14;
ATerm term_l_14;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_c_13;
ATerm term_y_12;
ATerm term_v_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_k_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_i_7;
ATerm term_t_6;
ATerm term_q_6;
ATerm term_f_6;
ATerm term_z_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_r_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_k_8);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_u_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_y_8);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_8);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym__2, term_g_9, term_r_5);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_r_5);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_r_5);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__2, term_x_11, term_r_5);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__3, term_p_9, term_q_9, (ATerm) ATempty);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_x_11);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_w_10);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_r_5);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm f_108 (ATerm), ATerm t);
ATerm list_1_0 (ATerm u_108 (ATerm), ATerm t);
static ATerm c_0 (ATerm t);
ATerm term_expression_0_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_108 (ATerm), ATerm t);
static ATerm r_3 (ATerm f_51, ATerm g_51, ATerm t);
static ATerm s_3 (ATerm k_35, ATerm l_35, ATerm t);
static ATerm u_3 (ATerm h_108 (ATerm), ATerm k_230, ATerm q_35, ATerm t);
static ATerm t_3 (ATerm g_35, ATerm h_35, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm e_126 (ATerm), ATerm t);
static ATerm w_41 (ATerm q_41, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm v_3 (ATerm m_35, ATerm t);
static ATerm w_3 (ATerm j_49, ATerm k_49, ATerm t);
static ATerm x_3 (ATerm h_51, ATerm i_51, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_43 (ATerm g_42, ATerm t);
static ATerm k_43 (ATerm k_42, ATerm l_42, ATerm m_42, ATerm t);
static ATerm l_43 (ATerm w_42, ATerm x_42, ATerm y_42, ATerm t);
static ATerm y_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_109 (ATerm), ATerm t);
static ATerm d_4 (ATerm f_58, ATerm g_58, ATerm t);
ATerm if_verbose2_1_0 (ATerm n_124 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_4 (ATerm d_70, ATerm e_70, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_4 (ATerm m_56, ATerm n_56, ATerm l_56, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_3 (ATerm v_54, ATerm w_54, ATerm t);
ATerm foldr_2_0 (ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_124 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm h_4 (ATerm e_61, ATerm f_61, ATerm g_61, ATerm t);
static ATerm i_4 (ATerm h_61, ATerm i_61, ATerm t);
ATerm lookup_table_0_1 (ATerm y_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_61, ATerm n_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm b_4 (ATerm j_61, ATerm k_61, ATerm t);
static ATerm c_4 (ATerm o_61, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_129 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm parse_options_3_0 (ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm k_127 (ATerm), ATerm l_127 (ATerm), ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm o_127 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm iowrap_3_0 (ATerm n_126 (ATerm), ATerm o_126 (ATerm), ATerm p_126 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,e_0 = NULL,r_0 = NULL,t_0 = NULL;
  a_0 = t;
  t = term_r_5;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_s_5;
  r_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_5), b_0), term_t_5);
  t_0 = t;
  t = SSL_printnl(r_0, t_0);
  t = term_v_5;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm f_108 (ATerm), ATerm t)
{
  ATerm j_1 = NULL,l_1 = NULL,m_1 = NULL,o_1 = NULL;
  j_1 = t;
  t = f_108(t);
  l_1 = t;
  t = term_s_5;
  m_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_1), l_1);
  o_1 = t;
  t = SSL_printnl(m_1, o_1);
  t = j_1;
  return(t);
}
ATerm list_1_0 (ATerm u_108 (ATerm), ATerm t)
{
  t = map_1_0(u_108, t);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = term_w_5;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm x_5 = t;
  int y_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_6 = NULL,j_6 = NULL,k_6 = NULL;
      e_6 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = e_6;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              j_6 = ATgetArgument(t, 0);
              {
                ATerm k_0 = NULL,n_0 = NULL,o_0 = NULL;
                t = SSLgetAnnotations(e_6);
                k_0 = t;
                t = SSL_is_string(j_6);
                n_0 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, n_0);
                o_0 = t;
                t = SSLsetAnnotations(o_0, k_0);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  j_6 = ATgetArgument(t, 0);
                  {
                    ATerm w_0 = NULL,y_0 = NULL,z_1 = NULL;
                    t = SSLgetAnnotations(e_6);
                    w_0 = t;
                    t = SSL_is_int(j_6);
                    y_0 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, y_0);
                    z_1 = t;
                    t = SSLsetAnnotations(z_1, w_0);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      j_6 = ATgetArgument(t, 0);
                      {
                        ATerm e_1 = NULL,g_1 = NULL,a_2 = NULL;
                        t = SSLgetAnnotations(e_6);
                        e_1 = t;
                        t = SSL_is_real(j_6);
                        g_1 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, g_1);
                        a_2 = t;
                        t = SSLsetAnnotations(a_2, e_1);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          j_6 = ATgetArgument(t, 0);
                          {
                            ATerm q_1 = NULL,s_1 = NULL,c_2 = NULL;
                            t = SSLgetAnnotations(e_6);
                            q_1 = t;
                            t = SSL_is_string(j_6);
                            s_1 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, s_1);
                            c_2 = t;
                            t = SSLsetAnnotations(c_2, q_1);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              j_6 = ATgetArgument(t, 0);
                              {
                                ATerm y_1 = NULL,h_2 = NULL,d_2 = NULL;
                                t = SSLgetAnnotations(e_6);
                                y_1 = t;
                                t = j_6;
                                t = term_expression_0_0(t);
                                h_2 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, h_2);
                                d_2 = t;
                                t = SSLsetAnnotations(d_2, y_1);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  j_6 = ATgetArgument(t, 0);
                                  k_6 = ATgetArgument(t, 1);
                                  {
                                    ATerm p_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,f_2 = NULL,e_2 = NULL;
                                    t = SSLgetAnnotations(e_6);
                                    p_2 = t;
                                    t = j_6;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        a_3 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(j_6);
                                    z_2 = t;
                                    t = SSL_is_string(a_3);
                                    b_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, b_3);
                                    e_2 = t;
                                    t = SSLsetAnnotations(e_2, z_2);
                                    c_3 = t;
                                    t = k_6;
                                    t = term_expression_0_0(t);
                                    y_2 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, c_3, y_2);
                                    f_2 = t;
                                    t = SSLsetAnnotations(f_2, p_2);
                                  }
                                }
                              else
                                {
                                  ATerm n_3 = NULL,a_4 = NULL,f_4 = NULL,g_2 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      j_6 = ATgetArgument(t, 0);
                                      k_6 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(e_6);
                                  n_3 = t;
                                  t = SSL_is_string(j_6);
                                  a_4 = t;
                                  t = k_6;
                                  t = map_1_0(term_expression_0_0, t);
                                  f_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, a_4, f_4);
                                  g_2 = t;
                                  t = SSLsetAnnotations(g_2, n_3);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(y_5);
    }
  else
    {
      t = x_5;
      t = debug_1_0(c_0, t);
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm y_19 = NULL;
  y_19 = t;
  t = SSL_is_string(y_19);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,v_22 = NULL,w_22 = NULL,l_5 = NULL;
  w_22 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      n_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
      p_22 = ATgetArgument(t, 2);
      q_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_22);
  m_22 = t;
  t = SSL_is_string(n_22);
  r_22 = t;
  t = o_22;
  t = map_1_0(p_0, t);
  s_22 = t;
  t = p_22;
  t = map_1_0(q_0, t);
  t_22 = t;
  t = q_22;
  t = strategy_expression_0_0(t);
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, r_22, s_22, t_22, v_22);
  l_5 = t;
  t = SSLsetAnnotations(l_5, m_22);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm p_26 = NULL,r_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,y_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,i_5 = NULL,h_5 = NULL;
  c_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      r_26 = ATgetArgument(t, 0);
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_27);
  p_26 = t;
  t = SSL_is_string(r_26);
  u_26 = t;
  t = t_26;
  if(match_cons(t, sym_FunType_2))
    {
      w_26 = ATgetArgument(t, 0);
      y_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_26);
  v_26 = t;
  t = w_26;
  t = list_1_0(_id, t);
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, a_27, y_26);
  h_5 = t;
  t = SSLsetAnnotations(h_5, v_26);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_26, b_27);
  i_5 = t;
  t = SSLsetAnnotations(i_5, p_26);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,k_5 = NULL,j_5 = NULL;
  n_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_27 = ATgetArgument(t, 0);
      h_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_27);
  f_27 = t;
  t = SSL_is_string(g_27);
  i_27 = t;
  t = h_27;
  if(match_cons(t, sym_ConstType_1))
    {
      l_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_27);
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, l_27);
  j_5 = t;
  t = SSLsetAnnotations(j_5, j_27);
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_27, m_27);
  k_5 = t;
  t = SSLsetAnnotations(k_5, f_27);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_z_5;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
      u_29 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = u_29;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = u_29;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  v_29 = ATgetArgument(t, 0);
                  {
                    ATerm j_7 = NULL,l_7 = NULL,f_3 = NULL;
                    t = SSLgetAnnotations(u_29);
                    j_7 = t;
                    t = v_29;
                    t = strategy_expression_0_0(t);
                    l_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, l_7);
                    f_3 = t;
                    t = SSLsetAnnotations(f_3, j_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      v_29 = ATgetArgument(t, 0);
                      {
                        ATerm t_7 = NULL,v_7 = NULL,g_3 = NULL;
                        t = SSLgetAnnotations(u_29);
                        t_7 = t;
                        t = v_29;
                        t = strategy_expression_0_0(t);
                        v_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, v_7);
                        g_3 = t;
                        t = SSLsetAnnotations(g_3, t_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          v_29 = ATgetArgument(t, 0);
                          w_29 = ATgetArgument(t, 1);
                          {
                            ATerm c_8 = NULL,f_8 = NULL,g_8 = NULL,p_3 = NULL;
                            t = SSLgetAnnotations(u_29);
                            c_8 = t;
                            t = v_29;
                            t = strategy_expression_0_0(t);
                            f_8 = t;
                            t = w_29;
                            t = strategy_expression_0_0(t);
                            g_8 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, f_8, g_8);
                            p_3 = t;
                            t = SSLsetAnnotations(p_3, c_8);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              v_29 = ATgetArgument(t, 0);
                              w_29 = ATgetArgument(t, 1);
                              {
                                ATerm o_8 = NULL,r_8 = NULL,s_8 = NULL,j_4 = NULL;
                                t = SSLgetAnnotations(u_29);
                                o_8 = t;
                                t = v_29;
                                t = strategy_expression_0_0(t);
                                r_8 = t;
                                t = w_29;
                                t = strategy_expression_0_0(t);
                                s_8 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, r_8, s_8);
                                j_4 = t;
                                t = SSLsetAnnotations(j_4, o_8);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  v_29 = ATgetArgument(t, 0);
                                  w_29 = ATgetArgument(t, 1);
                                  {
                                    ATerm a_9 = NULL,d_9 = NULL,e_9 = NULL,k_4 = NULL;
                                    t = SSLgetAnnotations(u_29);
                                    a_9 = t;
                                    t = v_29;
                                    t = strategy_expression_0_0(t);
                                    d_9 = t;
                                    t = w_29;
                                    t = strategy_expression_0_0(t);
                                    e_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, d_9, e_9);
                                    k_4 = t;
                                    t = SSLsetAnnotations(k_4, a_9);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      v_29 = ATgetArgument(t, 0);
                                      w_29 = ATgetArgument(t, 1);
                                      l_29 = ATgetArgument(t, 2);
                                      {
                                        ATerm n_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,n_4 = NULL;
                                        t = SSLgetAnnotations(u_29);
                                        n_9 = t;
                                        t = v_29;
                                        t = strategy_expression_0_0(t);
                                        r_9 = t;
                                        t = w_29;
                                        t = strategy_expression_0_0(t);
                                        s_9 = t;
                                        t = l_29;
                                        t = strategy_expression_0_0(t);
                                        t_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, r_9, s_9, t_9);
                                        n_4 = t;
                                        t = SSLsetAnnotations(n_4, n_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          v_29 = ATgetArgument(t, 0);
                                          w_29 = ATgetArgument(t, 1);
                                          {
                                            ATerm c_10 = NULL,g_10 = NULL,h_10 = NULL,o_4 = NULL;
                                            t = SSLgetAnnotations(u_29);
                                            c_10 = t;
                                            t = v_29;
                                            t = strategy_expression_0_0(t);
                                            g_10 = t;
                                            t = w_29;
                                            t = strategy_expression_0_0(t);
                                            h_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, g_10, h_10);
                                            o_4 = t;
                                            t = SSLsetAnnotations(o_4, c_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              v_29 = ATgetArgument(t, 0);
                                              w_29 = ATgetArgument(t, 1);
                                              {
                                                ATerm t_10 = NULL,z_10 = NULL,a_11 = NULL,p_4 = NULL;
                                                t = SSLgetAnnotations(u_29);
                                                t_10 = t;
                                                t = v_29;
                                                t = strategy_expression_0_0(t);
                                                z_10 = t;
                                                t = w_29;
                                                t = strategy_expression_0_0(t);
                                                a_11 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, z_10, a_11);
                                                p_4 = t;
                                                t = SSLsetAnnotations(p_4, t_10);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  v_29 = ATgetArgument(t, 0);
                                                  w_29 = ATgetArgument(t, 1);
                                                  l_29 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm l_11 = NULL,q_11 = NULL,r_11 = NULL,t_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,t_4 = NULL,r_4 = NULL;
                                                    t = SSLgetAnnotations(u_29);
                                                    l_11 = t;
                                                    t = v_29;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        y_11 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(v_29);
                                                    t_11 = t;
                                                    t = y_11;
                                                    {
                                                      ATerm c_6 = t;
                                                      int d_6 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = SSL_is_string(y_11);
                                                          LocalPopChoice(d_6);
                                                        }
                                                      else
                                                        {
                                                          t = c_6;
                                                          {
                                                            ATerm m_12 = NULL,n_12 = NULL,x_12 = NULL,d_13 = NULL,e_13 = NULL,q_4 = NULL;
                                                            if(match_cons(t, sym_Mod_2))
                                                              {
                                                                m_12 = ATgetArgument(t, 0);
                                                                n_12 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSLgetAnnotations(y_11);
                                                            x_12 = t;
                                                            t = SSL_is_string(m_12);
                                                            d_13 = t;
                                                            t = SSL_is_string(n_12);
                                                            e_13 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Mod_2, d_13, e_13);
                                                            q_4 = t;
                                                            t = SSLsetAnnotations(q_4, x_12);
                                                          }
                                                        }
                                                    }
                                                    z_11 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, z_11);
                                                    r_4 = t;
                                                    t = SSLsetAnnotations(r_4, t_11);
                                                    a_12 = t;
                                                    t = w_29;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    q_11 = t;
                                                    t = l_29;
                                                    t = map_1_0(term_expression_0_0, t);
                                                    r_11 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, a_12, q_11, r_11);
                                                    t_4 = t;
                                                    t = SSLsetAnnotations(t_4, l_11);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      v_29 = ATgetArgument(t, 0);
                                                      w_29 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm l_13 = NULL,p_13 = NULL,q_13 = NULL,v_4 = NULL;
                                                        t = SSLgetAnnotations(u_29);
                                                        l_13 = t;
                                                        t = SSL_is_string(v_29);
                                                        p_13 = t;
                                                        t = w_29;
                                                        t = strategy_expression_0_0(t);
                                                        q_13 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, p_13, q_13);
                                                        v_4 = t;
                                                        t = SSLsetAnnotations(v_4, l_13);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          v_29 = ATgetArgument(t, 0);
                                                          w_29 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm c_14 = NULL,g_14 = NULL,i_14 = NULL,w_4 = NULL;
                                                            t = SSLgetAnnotations(u_29);
                                                            c_14 = t;
                                                            t = SSL_is_int(v_29);
                                                            g_14 = t;
                                                            t = w_29;
                                                            t = strategy_expression_0_0(t);
                                                            i_14 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, g_14, i_14);
                                                            w_4 = t;
                                                            t = SSLsetAnnotations(w_4, c_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              v_29 = ATgetArgument(t, 0);
                                                              w_29 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm u_14 = NULL,f_15 = NULL,i_15 = NULL,x_4 = NULL;
                                                                t = SSLgetAnnotations(u_29);
                                                                u_14 = t;
                                                                t = SSL_is_string(v_29);
                                                                f_15 = t;
                                                                t = w_29;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                i_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, f_15, i_15);
                                                                x_4 = t;
                                                                t = SSLsetAnnotations(x_4, u_14);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  v_29 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm u_15 = NULL,x_15 = NULL,y_4 = NULL;
                                                                    t = SSLgetAnnotations(u_29);
                                                                    u_15 = t;
                                                                    t = v_29;
                                                                    t = strategy_expression_0_0(t);
                                                                    x_15 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, x_15);
                                                                    y_4 = t;
                                                                    t = SSLsetAnnotations(y_4, u_15);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      v_29 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm i_16 = NULL,n_16 = NULL,z_4 = NULL;
                                                                        t = SSLgetAnnotations(u_29);
                                                                        i_16 = t;
                                                                        t = v_29;
                                                                        t = strategy_expression_0_0(t);
                                                                        n_16 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, n_16);
                                                                        z_4 = t;
                                                                        t = SSLsetAnnotations(z_4, i_16);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          v_29 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm y_16 = NULL,a_17 = NULL,a_5 = NULL;
                                                                            t = SSLgetAnnotations(u_29);
                                                                            y_16 = t;
                                                                            t = v_29;
                                                                            t = strategy_expression_0_0(t);
                                                                            a_17 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, a_17);
                                                                            a_5 = t;
                                                                            t = SSLsetAnnotations(a_5, y_16);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              v_29 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm i_17 = NULL,n_17 = NULL,b_5 = NULL;
                                                                                t = SSLgetAnnotations(u_29);
                                                                                i_17 = t;
                                                                                t = v_29;
                                                                                t = strategy_expression_0_0(t);
                                                                                n_17 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, n_17);
                                                                                b_5 = t;
                                                                                t = SSLsetAnnotations(b_5, i_17);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  v_29 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm t_17 = NULL,w_17 = NULL,c_5 = NULL;
                                                                                    t = SSLgetAnnotations(u_29);
                                                                                    t_17 = t;
                                                                                    t = v_29;
                                                                                    t = term_expression_0_0(t);
                                                                                    w_17 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, w_17);
                                                                                    c_5 = t;
                                                                                    t = SSLsetAnnotations(c_5, t_17);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      v_29 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm k_18 = NULL,o_18 = NULL,d_5 = NULL;
                                                                                        t = SSLgetAnnotations(u_29);
                                                                                        k_18 = t;
                                                                                        t = v_29;
                                                                                        t = term_expression_0_0(t);
                                                                                        o_18 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, o_18);
                                                                                        d_5 = t;
                                                                                        t = SSLsetAnnotations(d_5, k_18);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          v_29 = ATgetArgument(t, 0);
                                                                                          w_29 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm g_19 = NULL,r_19 = NULL,s_19 = NULL,e_5 = NULL;
                                                                                            t = SSLgetAnnotations(u_29);
                                                                                            g_19 = t;
                                                                                            t = v_29;
                                                                                            t = map_1_0(i_0, t);
                                                                                            r_19 = t;
                                                                                            t = w_29;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            s_19 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, r_19, s_19);
                                                                                            e_5 = t;
                                                                                            t = SSLsetAnnotations(e_5, g_19);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              v_29 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm m_20 = NULL,o_20 = NULL,f_5 = NULL;
                                                                                                t = SSLgetAnnotations(u_29);
                                                                                                m_20 = t;
                                                                                                t = v_29;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                o_20 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, o_20);
                                                                                                f_5 = t;
                                                                                                t = SSLsetAnnotations(f_5, m_20);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  v_29 = ATgetArgument(t, 0);
                                                                                                  w_29 = ATgetArgument(t, 1);
                                                                                                  l_29 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm a_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,g_5 = NULL;
                                                                                                    t = SSLgetAnnotations(u_29);
                                                                                                    a_21 = t;
                                                                                                    t = SSL_is_string(v_29);
                                                                                                    h_21 = t;
                                                                                                    t = w_29;
                                                                                                    t = map_1_0(strategy_expression_0_0, t);
                                                                                                    i_21 = t;
                                                                                                    t = l_29;
                                                                                                    t = map_1_0(term_expression_0_0, t);
                                                                                                    j_21 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, h_21, i_21, j_21);
                                                                                                    g_5 = t;
                                                                                                    t = SSLsetAnnotations(g_5, a_21);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm a_22 = NULL,i_22 = NULL,j_22 = NULL,m_5 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      v_29 = ATgetArgument(t, 0);
                                                                                                      w_29 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(u_29);
                                                                                                  a_22 = t;
                                                                                                  t = v_29;
                                                                                                  t = map_1_0(m_0, t);
                                                                                                  i_22 = t;
                                                                                                  t = w_29;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  j_22 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, i_22, j_22);
                                                                                                  m_5 = t;
                                                                                                  t = SSLsetAnnotations(m_5, a_22);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(b_6);
    }
  else
    {
      t = a_6;
      t = debug_1_0(s_0, t);
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,v_6 = NULL;
  g_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_31 = ATgetArgument(t, 0);
      e_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_31);
  c_31 = t;
  t = SSL_is_string(d_31);
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_31, e_31);
  v_6 = t;
  t = SSLsetAnnotations(v_6, c_31);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,w_6 = NULL;
  l_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_31 = ATgetArgument(t, 0);
      j_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_31);
  h_31 = t;
  t = SSL_is_string(i_31);
  k_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_31, j_31);
  w_6 = t;
  t = SSLsetAnnotations(w_6, h_31);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,z_6 = NULL;
  h_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      b_34 = ATgetArgument(t, 0);
      f_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_34);
  a_34 = t;
  t = SSL_is_string(b_34);
  g_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_34, f_34);
  z_6 = t;
  t = SSLsetAnnotations(z_6, a_34);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,r_34 = NULL,s_34 = NULL,u_34 = NULL,a_7 = NULL;
  u_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      j_34 = ATgetArgument(t, 0);
      r_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_34);
  i_34 = t;
  t = SSL_is_string(j_34);
  s_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_34, r_34);
  a_7 = t;
  t = SSLsetAnnotations(a_7, i_34);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,y_44 = NULL,f_45 = NULL,o_45 = NULL,d_7 = NULL;
  o_45 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      z_43 = ATgetArgument(t, 0);
      y_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_45);
  y_43 = t;
  t = SSL_is_string(z_43);
  f_45 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_45, y_44);
  d_7 = t;
  t = SSLsetAnnotations(d_7, y_43);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm t_45 = NULL,f_46 = NULL,p_46 = NULL,t_46 = NULL,c_47 = NULL,e_7 = NULL;
  c_47 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      f_46 = ATgetArgument(t, 0);
      p_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_47);
  t_45 = t;
  t = SSL_is_string(f_46);
  t_46 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_46, p_46);
  e_7 = t;
  t = SSLsetAnnotations(e_7, t_45);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_f_6;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm g_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL;
      j_38 = t;
      if(match_cons(t, sym_SDefT_4))
        {
          k_38 = ATgetArgument(t, 0);
          l_38 = ATgetArgument(t, 1);
          m_38 = ATgetArgument(t, 2);
          i_38 = ATgetArgument(t, 3);
          {
            ATerm f_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,x_6 = NULL;
            t = SSLgetAnnotations(j_38);
            f_29 = t;
            t = k_38;
            {
              ATerm i_6 = t;
              int l_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_is_string(k_38);
                  LocalPopChoice(l_6);
                }
              else
                {
                  t = i_6;
                  {
                    ATerm y_30 = NULL,b_31 = NULL,u_31 = NULL,x_31 = NULL,y_31 = NULL,u_6 = NULL;
                    if(match_cons(t, sym_Mod_2))
                      {
                        y_30 = ATgetArgument(t, 0);
                        b_31 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(k_38);
                    u_31 = t;
                    t = SSL_is_string(y_30);
                    x_31 = t;
                    t = SSL_is_string(b_31);
                    y_31 = t;
                    t = (ATerm) ATmakeAppl(sym_Mod_2, x_31, y_31);
                    u_6 = t;
                    t = SSLsetAnnotations(u_6, u_31);
                  }
                }
            }
            m_29 = t;
            t = l_38;
            t = map_1_0(u_0, t);
            n_29 = t;
            t = m_38;
            t = map_1_0(v_0, t);
            o_29 = t;
            t = i_38;
            t = strategy_expression_0_0(t);
            p_29 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, m_29, n_29, o_29, p_29);
            x_6 = t;
            t = SSLsetAnnotations(x_6, f_29);
          }
        }
      else
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              k_38 = ATgetArgument(t, 0);
              l_38 = ATgetArgument(t, 1);
              m_38 = ATgetArgument(t, 2);
              i_38 = ATgetArgument(t, 3);
              {
                ATerm r_32 = NULL,y_32 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,b_7 = NULL;
                t = SSLgetAnnotations(j_38);
                r_32 = t;
                t = k_38;
                {
                  ATerm m_6 = t;
                  int n_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_is_string(k_38);
                      LocalPopChoice(n_6);
                    }
                  else
                    {
                      t = m_6;
                      {
                        ATerm y_33 = NULL,z_33 = NULL,p_35 = NULL,t_35 = NULL,x_35 = NULL,y_6 = NULL;
                        if(match_cons(t, sym_Mod_2))
                          {
                            y_33 = ATgetArgument(t, 0);
                            z_33 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(k_38);
                        p_35 = t;
                        t = SSL_is_string(y_33);
                        t_35 = t;
                        t = SSL_is_string(z_33);
                        x_35 = t;
                        t = (ATerm) ATmakeAppl(sym_Mod_2, t_35, x_35);
                        y_6 = t;
                        t = SSLsetAnnotations(y_6, p_35);
                      }
                    }
                }
                y_32 = t;
                t = l_38;
                t = map_1_0(x_0, t);
                e_33 = t;
                t = m_38;
                t = map_1_0(z_0, t);
                f_33 = t;
                t = i_38;
                t = strategy_expression_0_0(t);
                g_33 = t;
                t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, y_32, e_33, f_33, g_33);
                b_7 = t;
                t = SSLsetAnnotations(b_7, r_32);
              }
            }
          else
            {
              ATerm i_36 = NULL,o_39 = NULL,p_39 = NULL,j_41 = NULL,f_7 = NULL;
              if(match_cons(t, sym_ExtSDef_3))
                {
                  k_38 = ATgetArgument(t, 0);
                  l_38 = ATgetArgument(t, 1);
                  m_38 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_38);
              i_36 = t;
              t = k_38;
              {
                ATerm o_6 = t;
                int p_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_is_string(k_38);
                    LocalPopChoice(p_6);
                  }
                else
                  {
                    t = o_6;
                    {
                      ATerm m_43 = NULL,x_43 = NULL,q_49 = NULL,c_51 = NULL,d_51 = NULL,c_7 = NULL;
                      if(match_cons(t, sym_Mod_2))
                        {
                          m_43 = ATgetArgument(t, 0);
                          x_43 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(k_38);
                      q_49 = t;
                      t = SSL_is_string(m_43);
                      c_51 = t;
                      t = SSL_is_string(x_43);
                      d_51 = t;
                      t = (ATerm) ATmakeAppl(sym_Mod_2, c_51, d_51);
                      c_7 = t;
                      t = SSLsetAnnotations(c_7, q_49);
                    }
                  }
              }
              o_39 = t;
              t = l_38;
              t = map_1_0(a_1, t);
              p_39 = t;
              t = m_38;
              t = map_1_0(b_1, t);
              j_41 = t;
              t = (ATerm) ATmakeAppl(sym_ExtSDef_3, o_39, p_39, j_41);
              f_7 = t;
              t = SSLsetAnnotations(f_7, i_36);
            }
        }
      LocalPopChoice(h_6);
    }
  else
    {
      t = g_6;
      t = debug_1_0(c_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm q_108 (ATerm), ATerm t)
{
  static ATerm h_39 (ATerm t);
  static ATerm h_39 (ATerm t)
  {
    ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
    e_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_39;
      }
    else
      {
        ATerm e_52 = NULL,d_54 = NULL,d_55 = NULL,i_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_39 = ATgetFirst((ATermList) t);
            g_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_39);
        e_52 = t;
        t = f_39;
        t = q_108(t);
        d_54 = t;
        t = g_39;
        t = h_39(t);
        d_55 = t;
        t = (ATerm) ATinsert(CheckATermList(d_55), d_54);
        i_11 = t;
        t = SSLsetAnnotations(i_11, e_52);
      }
    return(t);
  }
  t = h_39(t);
  return(t);
}
static ATerm r_3 (ATerm f_51, ATerm g_51, ATerm t)
{
  ATerm j_39 = NULL;
  t = SSL_fputc(f_51, g_51);
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_39);
  return(t);
}
static ATerm s_3 (ATerm k_35, ATerm l_35, ATerm t)
{
  ATerm k_39 = NULL;
  t = SSL_write_term_to_stream_text(k_35, l_35);
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_39);
  return(t);
}
static ATerm u_3 (ATerm h_108 (ATerm), ATerm k_230, ATerm q_35, ATerm t)
{
  ATerm l_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_230, term_q_6);
  t = y_3(t);
  l_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_39, q_35);
  t = h_108(t);
  t = fclose_0_0(t);
  t = q_35;
  return(t);
}
static ATerm t_3 (ATerm g_35, ATerm h_35, ATerm t)
{
  ATerm m_39 = NULL;
  t = SSL_write_term_to_stream_baf(g_35, h_35);
  m_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_39);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_6 = ATgetArgument(t, 0);
      if(match_cons(r_6, sym_Stream_1))
        {
          r_55 = ATgetArgument(r_6, 0);
        }
      else
        _fail(t);
      s_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3(r_55, s_55, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_6 = ATgetArgument(t, 0);
      if(match_cons(s_6, sym_Stream_1))
        {
          g_56 = ATgetArgument(s_6, 0);
        }
      else
        _fail(t);
      h_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_3(g_56, h_56, t);
  d_56 = t;
  t = term_t_6;
  e_56 = t;
  t = d_56;
  if(match_cons(t, sym_Stream_1))
    {
      f_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_6, d_56);
  t = r_3(e_56, f_56, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,a_41 = NULL,b_41 = NULL,u_11 = NULL,s_11 = NULL;
  r_39 = t;
  if(match_cons(t, sym__2))
    {
      y_39 = ATgetArgument(t, 0);
      z_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_39);
  x_39 = t;
  t = y_39;
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm d_1 (ATerm t);
        static ATerm d_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((q_39 != NULL) && (q_39 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(d_1, t);
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        t = term_i_7;
        q_39 = t;
      }
  }
  a_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_40, z_39);
  s_11 = t;
  t = SSLsetAnnotations(s_11, x_39);
  t = r_39;
  if(match_cons(t, sym__2))
    {
      t_39 = ATgetArgument(t, 0);
      u_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_39);
  s_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_39, (ATerm) ATmakeAppl(sym__2, not_null(q_39), u_39));
  u_11 = t;
  t = SSLsetAnnotations(u_11, s_39);
  w_39 = t;
  if(match_cons(t, sym__2))
    {
      a_41 = ATgetArgument(t, 0);
      b_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,v_11 = NULL;
        t = SSLgetAnnotations(w_39);
        k_55 = t;
        t = a_41;
        t = fetch_1_0(f_1, t);
        n_55 = t;
        t = b_41;
        if(match_cons(t, sym__2))
          {
            p_55 = ATgetArgument(t, 0);
            q_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_3(h_1, p_55, q_55, t);
        o_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_55, o_55);
        v_11 = t;
        t = SSLsetAnnotations(v_11, k_55);
        LocalPopChoice(m_7);
      }
    else
      {
        t = k_7;
        {
          ATerm x_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,w_11 = NULL;
          t = SSLgetAnnotations(w_39);
          x_55 = t;
          t = b_41;
          if(match_cons(t, sym__2))
            {
              b_56 = ATgetArgument(t, 0);
              c_56 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_3(i_1, b_56, c_56, t);
          a_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_41, a_56);
          w_11 = t;
          t = SSLsetAnnotations(w_11, x_55);
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
ATerm apply_strategy_1_0 (ATerm e_126 (ATerm), ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL;
  i_41 = t;
  t = dtime_0_0(t);
  t = i_41;
  t = e_126(t);
  h_41 = t;
  t = dtime_0_0(t);
  e_41 = t;
  t = h_41;
  if(match_cons(t, sym__2))
    {
      f_41 = ATgetArgument(t, 0);
      g_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_41), (ATerm) ATmakeAppl(sym_Runtime_1, e_41)), g_41);
  return(t);
}
static ATerm w_41 (ATerm q_41, ATerm t)
{
  t = SSL_fclose(q_41);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL;
  u_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_41 = ATgetArgument(t, 0);
      {
        ATerm n_7 = t;
        int o_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_41);
            LocalPopChoice(o_7);
          }
        else
          {
            t = n_7;
            t = w_41(u_41, t);
          }
      }
    }
  else
    {
      t = w_41(u_41, t);
    }
  return(t);
}
static ATerm v_3 (ATerm m_35, ATerm t)
{
  t = SSL_read_term_from_stream(m_35);
  return(t);
}
static ATerm w_3 (ATerm j_49, ATerm k_49, ATerm t)
{
  t = SSL_strcat(j_49, k_49);
  return(t);
}
static ATerm x_3 (ATerm h_51, ATerm i_51, ATerm t)
{
  ATerm x_41 = NULL;
  t = SSL_fopen(h_51, i_51);
  x_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_41);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_41 = NULL;
  t = SSL_stdin_stream();
  y_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_41);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_41 = NULL;
  t = SSL_stdout_stream();
  z_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_41);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_42 = NULL;
  t = SSL_stderr_stream();
  a_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_42);
  return(t);
}
static ATerm j_43 (ATerm g_42, ATerm t)
{
  ATerm h_42 = NULL;
  t = SSL_explode_term(g_42);
  if(match_cons(t, sym__2))
    {
      ATerm p_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_7 = ATgetArgument(t, 1);
        if(((ATgetType(q_7) == AT_LIST) && !(ATisEmpty(q_7))))
          {
            h_42 = ATgetFirst((ATermList) q_7);
            {
              ATerm r_7 = (ATerm) ATgetNext((ATermList) q_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_42;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_42;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_42;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_42;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_43 (ATerm k_42, ATerm l_42, ATerm m_42, ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,r_42 = NULL,u_42 = NULL,f_12 = NULL;
  t = SSLgetAnnotations(m_42);
  r_42 = t;
  t = k_42;
  if(match_cons(t, sym_Path_1))
    {
      u_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_42, l_42);
  f_12 = t;
  t = SSLsetAnnotations(f_12, r_42);
  if(match_cons(t, sym__2))
    {
      n_42 = ATgetArgument(t, 0);
      o_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3(n_42, o_42, t);
  return(t);
}
static ATerm l_43 (ATerm w_42, ATerm x_42, ATerm y_42, ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,e_43 = NULL,g_12 = NULL;
  t = SSLgetAnnotations(y_42);
  b_43 = t;
  t = SSL_is_string(w_42);
  e_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_43, x_42);
  g_12 = t;
  t = SSLsetAnnotations(g_12, b_43);
  if(match_cons(t, sym__2))
    {
      z_42 = ATgetArgument(t, 0);
      a_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3(z_42, a_43, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
  g_43 = t;
  if(match_cons(t, sym__2))
    {
      h_43 = ATgetArgument(t, 0);
      i_43 = ATgetArgument(t, 1);
      {
        ATerm s_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_43(g_43, t);
            LocalPopChoice(u_7);
          }
        else
          {
            t = s_7;
            {
              ATerm w_7 = t;
              int x_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_43(h_43, i_43, g_43, t);
                  LocalPopChoice(x_7);
                }
              else
                {
                  t = w_7;
                  t = l_43(h_43, i_43, g_43, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_43(g_43, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,u_43 = NULL;
  u_43 = t;
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_43, term_a_8);
        t = y_3(t);
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        {
          ATerm v_56 = NULL,w_56 = NULL;
          t = term_b_8;
          w_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_8, u_43);
          t = w_3(w_56, u_43, t);
          v_56 = t;
          t = SSL_perror(v_56);
          _fail(t);
        }
      }
  }
  o_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_3(p_43, t);
  n_43 = t;
  t = o_43;
  t = fclose_0_0(t);
  t = n_43;
  return(t);
}
ATerm fetch_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  static ATerm t_44 (ATerm t);
  static ATerm t_44 (ATerm t)
  {
    ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
    q_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_44 = ATgetFirst((ATermList) t);
        s_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_8 = t;
      int e_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_57 = NULL,e_57 = NULL,j_12 = NULL;
          t = SSLgetAnnotations(q_44);
          b_57 = t;
          t = r_44;
          t = a_109(t);
          e_57 = t;
          t = (ATerm) ATinsert(CheckATermList(s_44), e_57);
          j_12 = t;
          t = SSLsetAnnotations(j_12, b_57);
          LocalPopChoice(e_8);
        }
      else
        {
          t = d_8;
          {
            ATerm m_57 = NULL,p_57 = NULL,k_12 = NULL;
            t = SSLgetAnnotations(q_44);
            m_57 = t;
            t = s_44;
            t = t_44(t);
            p_57 = t;
            t = (ATerm) ATinsert(CheckATermList(p_57), r_44);
            k_12 = t;
            t = SSLsetAnnotations(k_12, m_57);
          }
        }
    }
    return(t);
  }
  t = t_44(t);
  return(t);
}
static ATerm d_4 (ATerm f_58, ATerm g_58, ATerm t)
{
  ATerm w_44 = NULL;
  t = lookup_table_0_1(f_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_4(g_58, w_44, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_124 (ATerm), ATerm t)
{
  ATerm z_44 = NULL;
  z_44 = t;
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL;
        t = term_j_8;
        c_45 = t;
        t = term_k_8;
        d_45 = t;
        t = term_l_8;
        t = d_4(c_45, d_45, t);
        b_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_45, term_m_8);
        t = geq_0_0(t);
        t = z_44;
        t = n_124(t);
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        t = z_44;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
  g_45 = t;
  {
    ATerm n_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_45;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_8 = ATgetFirst((ATermList) t);
                ATerm t_8 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_45;
          }
        LocalPopChoice(p_8);
      }
    else
      {
        t = n_8;
        t = (ATerm) ATinsert(ATempty, g_45);
      }
  }
  h_45 = t;
  t = term_i_7;
  i_45 = t;
  t = SSL_printnl(i_45, h_45);
  t = g_45;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL;
  t = term_j_8;
  m_45 = t;
  t = term_u_8;
  n_45 = t;
  t = term_v_8;
  t = d_4(m_45, n_45, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm p_45 = NULL;
  p_45 = t;
  if(match_string(t, "-k"))
    {
      t = p_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_45;
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL;
  q_45 = t;
  t = SSL_string_to_int(q_45);
  r_45 = t;
  t = term_w_8;
  s_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_8, r_45);
  t = g_4(s_45, r_45, t);
  t = q_45;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_x_8;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_1, n_1, p_1, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm u_45 = NULL;
  u_45 = t;
  if(match_string(t, "-S"))
    {
      t = u_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_45;
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL;
  t = term_k_8;
  v_45 = t;
  t = term_y_8;
  w_45 = t;
  t = term_z_8;
  t = g_4(v_45, w_45, t);
  t = term_b_9;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_c_9;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
  x_45 = t;
  t = SSL_string_to_int(x_45);
  y_45 = t;
  t = term_k_8;
  z_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_8, y_45);
  t = g_4(z_45, y_45, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_45);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_f_9;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL;
  t = term_g_9;
  a_46 = t;
  t = term_r_5;
  b_46 = t;
  t = term_h_9;
  t = g_4(a_46, b_46, t);
  t = term_i_9;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_j_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_1, t_1, u_1, t);
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      {
        ATerm m_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_1, w_1, x_1, t);
            LocalPopChoice(o_9);
          }
        else
          {
            t = m_9;
            t = Option_3_0(b_2, i_2, j_2, t);
          }
      }
    }
  return(t);
}
static ATerm g_4 (ATerm d_70, ATerm e_70, ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL;
  t = term_j_8;
  c_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, d_70, e_70);
  t = lookup_table_0_1(c_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_4(d_70, e_70, d_46, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, d_70, e_70);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL;
      t = term_r_5;
      t = g_0(t);
      j_46 = t;
      t = term_p_9;
      k_46 = t;
      t = term_q_9;
      l_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_9, term_q_9, j_46);
      t = e_4(k_46, l_46, j_46, t);
      _fail(t);
    }
  else
    {
      ATerm o_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_46 = ATgetFirst((ATermList) t);
          i_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_46;
      t = d_0(t);
      t = term_r_5;
      t = f_0(t);
      o_46 = t;
      t = (ATerm) ATinsert(CheckATermList(i_46), o_46);
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm q_46 = NULL;
  q_46 = t;
  if(match_string(t, "-o"))
    {
      t = q_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_46;
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL;
  r_46 = t;
  t = term_u_9;
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_9, r_46);
  t = g_4(s_46, r_46, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_46);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_v_9;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_2, l_2, m_2, t);
  return(t);
}
static ATerm e_4 (ATerm m_56, ATerm n_56, ATerm l_56, ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL;
  u_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_56, n_56);
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_9 = ATgetArgument(t, 0);
            ATerm z_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_56, n_56);
        t = d_4(m_56, n_56, t);
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        t = (ATerm) ATempty;
      }
  }
  v_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_56, n_56, (ATerm) ATinsert(CheckATermList(v_46), l_56));
  t = lookup_table_0_1(m_56, t);
  y_46 = t;
  t = (ATerm) ATinsert(CheckATermList(v_46), l_56);
  w_46 = t;
  t = y_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_4(n_56, w_46, x_46, t);
  t = u_46;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL;
      t = term_r_5;
      t = l_0(t);
      j_47 = t;
      t = term_p_9;
      k_47 = t;
      t = term_q_9;
      l_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_9, term_q_9, j_47);
      t = e_4(k_47, l_47, j_47, t);
      _fail(t);
    }
  else
    {
      ATerm p_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_47 = ATgetFirst((ATermList) t);
          g_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_47 = ATgetFirst((ATermList) t);
          i_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_47;
      t = h_0(t);
      t = h_47;
      t = j_0(t);
      p_47 = t;
      t = (ATerm) ATinsert(CheckATermList(i_47), p_47);
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm r_47 = NULL;
  r_47 = t;
  if(match_string(t, "-i"))
    {
      t = r_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_47;
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL;
  s_47 = t;
  t = term_a_10;
  t_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, s_47);
  t = g_4(t_47, s_47, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_47);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_b_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_2, o_2, q_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_5;
  t = whoami_0_0(t);
  u_47 = t;
  t = term_s_5;
  w_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_10), u_47);
  x_47 = t;
  t = SSL_printnl(w_47, x_47);
  t = term_v_5;
  v_47 = t;
  t = SSL_exit(v_47);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL;
  t = term_j_8;
  y_47 = t;
  t = term_u_8;
  z_47 = t;
  t = term_v_8;
  t = d_4(y_47, z_47, t);
  return(t);
}
static ATerm z_3 (ATerm v_54, ATerm w_54, ATerm t)
{
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_54, w_54);
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      t = SSL_addr(v_54, w_54);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL;
  b_48 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_48;
      t = p_115(t);
    }
  else
    {
      ATerm g_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_48 = ATgetFirst((ATermList) t);
          d_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_48;
      t = foldr_2_0(p_115, q_115, t);
      g_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_48, g_48);
      t = q_115(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_y_8;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL;
  if(match_cons(t, sym__2))
    {
      z_57 = ATgetArgument(t, 0);
      a_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(z_57, a_58, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_48 = NULL,u_57 = NULL,v_57 = NULL;
  t = times_0_0(t);
  v_57 = t;
  t = SSL_explode_term(v_57);
  if(match_cons(t, sym__2))
    {
      ATerm i_10 = ATgetArgument(t, 0);
      u_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_57;
  t = foldr_2_0(r_2, s_2, t);
  j_48 = t;
  t = SSL_TicksToSeconds(j_48);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL;
  u_48 = t;
  if(match_cons(t, sym__2))
    {
      v_48 = ATgetArgument(t, 0);
      w_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_48;
        if((v_48 != t))
          {
            _fail(t);
          }
        t = u_48;
        LocalPopChoice(k_10);
      }
    else
      {
        t = j_10;
        t = (ATerm) ATmakeAppl(sym__2, v_48, w_48);
        {
          ATerm l_10 = t;
          int m_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_48, w_48);
              LocalPopChoice(m_10);
            }
          else
            {
              t = l_10;
              t = SSL_gtr(v_48, w_48);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_48, w_48);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_124 (ATerm), ATerm t)
{
  ATerm a_49 = NULL;
  a_49 = t;
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
        t = term_j_8;
        d_49 = t;
        t = term_k_8;
        e_49 = t;
        t = term_l_8;
        t = d_4(d_49, e_49, t);
        c_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_49, term_v_5);
        t = geq_0_0(t);
        t = a_49;
        t = m_124(t);
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        t = a_49;
      }
  }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,l_49 = NULL,m_49 = NULL;
  t = run_time_0_0(t);
  g_49 = t;
  t = term_r_5;
  t = whoami_0_0(t);
  h_49 = t;
  t = term_s_5;
  l_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_10), g_49), term_p_10), h_49);
  m_49 = t;
  t = SSL_printnl(l_49, m_49);
  t = (ATerm) ATmakeAppl(sym__2, term_s_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_10), g_49), term_p_10), h_49));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_8;
  n_49 = t;
  t = SSL_exit(n_49);
  return(t);
}
static ATerm h_4 (ATerm e_61, ATerm f_61, ATerm g_61, ATerm t)
{
  ATerm o_49 = NULL;
  t = SSL_hashtable_put(g_61, e_61, f_61);
  o_49 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_49);
  return(t);
}
static ATerm i_4 (ATerm h_61, ATerm i_61, ATerm t)
{
  t = SSL_hashtable_get(i_61, h_61);
  return(t);
}
ATerm lookup_table_0_1 (ATerm y_57, ATerm t)
{
  ATerm x_49 = NULL;
  t = table_hashtable_0_0(t);
  x_49 = t;
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_58 = NULL;
        t = x_49;
        if(match_cons(t, sym_Hashtable_1))
          {
            n_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_4(y_57, n_58, t);
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        {
          ATerm s_58 = NULL;
          t = y_57;
          t = table_create_0_0(t);
          t = x_49;
          if(match_cons(t, sym_Hashtable_1))
            {
              s_58 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_4(y_57, s_58, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_61, ATerm n_61, ATerm t)
{
  ATerm a_50 = NULL;
  t = SSL_hashtable_create(m_61, n_61);
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_50);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL,f_50 = NULL,g_50 = NULL;
  b_50 = t;
  t = term_u_10;
  f_50 = t;
  t = term_v_10;
  g_50 = t;
  t = b_50;
  t = new_hashtable_0_2(f_50, g_50, t);
  c_50 = t;
  t = b_50;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_4(b_50, c_50, d_50, t);
  t = b_50;
  return(t);
}
static ATerm b_4 (ATerm j_61, ATerm k_61, ATerm t)
{
  ATerm h_50 = NULL;
  t = SSL_hashtable_remove(k_61, j_61);
  h_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_50);
  return(t);
}
static ATerm c_4 (ATerm o_61, ATerm t)
{
  ATerm i_50 = NULL;
  t = SSL_hashtable_destroy(o_61);
  i_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_50);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm j_50 = NULL;
  t = SSL_table_hashtable();
  j_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_50);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
  k_50 = t;
  t = table_hashtable_0_0(t);
  l_50 = t;
  t = lookup_table_0_1(k_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_4(n_50, t);
  t = l_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_4(k_50, m_50, t);
  t = k_50;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL;
  t = term_w_10;
  o_50 = t;
  t = term_r_5;
  p_50 = t;
  t = term_x_10;
  t = g_4(o_50, p_50, t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_y_10;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL;
  t = term_w_10;
  s_50 = t;
  t = term_r_5;
  t_50 = t;
  t = term_x_10;
  t = g_4(s_50, t_50, t);
  t = term_b_11;
  q_50 = t;
  t = term_r_5;
  r_50 = t;
  t = term_c_11;
  t = g_4(q_50, r_50, t);
  t = term_d_11;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_2, v_2, w_2, t);
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      t = Option_3_0(x_2, d_3, e_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,w_12 = NULL;
  z_50 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_50 = ATgetFirst((ATermList) t);
      w_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_50);
  u_50 = t;
  t = v_50;
  t = j_85(t);
  x_50 = t;
  t = w_50;
  t = k_85(t);
  y_50 = t;
  t = (ATerm) ATinsert(CheckATermList(y_50), x_50);
  w_12 = t;
  t = SSLsetAnnotations(w_12, u_50);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_129 (ATerm), ATerm t)
{
  ATerm e_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,p_51 = NULL,q_51 = NULL,a_13 = NULL;
  e_51 = t;
  {
    ATerm h_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_11;
        t = k_129(t);
        LocalPopChoice(j_11);
      }
    else
      {
        t = h_11;
      }
  }
  t = e_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_51 = ATgetFirst((ATermList) t);
      n_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_51);
  l_51 = t;
  t = term_u_8;
  q_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, m_51);
  t = g_4(q_51, m_51, t);
  t = n_51;
  {
    static ATerm a_52 (ATerm t);
    static ATerm a_52 (ATerm t)
    {
      ATerm m_11 = t;
      int n_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_11 = t;
          int p_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_51 = NULL;
              t_51 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_51;
              LocalPopChoice(p_11);
            }
          else
            {
              t = o_11;
              t = k_129(t);
              t = Cons_2_0(_id, a_52, t);
            }
          LocalPopChoice(n_11);
        }
      else
        {
          t = m_11;
          {
            ATerm w_51 = NULL,x_51 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_51 = ATgetFirst((ATermList) t);
                x_51 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_51), (ATerm) ATmakeAppl(sym_Undefined_1, w_51));
          }
        }
      return(t);
    }
    t = a_52(t);
  }
  p_51 = t;
  t = (ATerm) ATinsert(CheckATermList(p_51), (ATerm) ATmakeAppl(sym_Program_1, m_51));
  a_13 = t;
  t = SSLsetAnnotations(a_13, l_51);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm o_52 = NULL;
  o_52 = t;
  if(match_string(t, "--help"))
    {
      t = o_52;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_52;
        }
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL;
  t = term_x_11;
  p_52 = t;
  t = term_r_5;
  q_52 = t;
  t = term_b_12;
  t = g_4(p_52, q_52, t);
  t = term_c_12;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_d_12;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL;
  h_52 = t;
  t = term_p_9;
  i_52 = t;
  t = term_e_12;
  t = lookup_table_0_1(i_52, t);
  n_52 = t;
  t = term_q_9;
  k_52 = t;
  t = (ATerm) ATempty;
  l_52 = t;
  t = n_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_4(k_52, l_52, m_52, t);
  t = h_52;
  {
    static ATerm h_3 (ATerm t);
    static ATerm h_3 (ATerm t)
    {
      ATerm h_12 = t;
      int i_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_129(t);
          LocalPopChoice(i_12);
        }
      else
        {
          t = h_12;
          {
            ATerm l_12 = t;
            int o_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_3, j_3, k_3, t);
                LocalPopChoice(o_12);
              }
            else
              {
                t = l_12;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_3, t);
  }
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_53 = NULL;
        b_53 = t;
        {
          ATerm r_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_58 = NULL;
              t = b_53;
              {
                ATerm t_12 = t;
                int u_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_58 = NULL,y_58 = NULL;
                    t = term_j_8;
                    x_58 = t;
                    t = term_x_11;
                    y_58 = t;
                    t = term_v_12;
                    t = d_4(x_58, y_58, t);
                    LocalPopChoice(u_12);
                  }
                else
                  {
                    t = t_12;
                    t = fetch_1_0(l_3, t);
                  }
              }
              t = b_53;
              t = i_129(t);
              t = term_y_8;
              w_58 = t;
              t = SSL_exit(w_58);
              LocalPopChoice(s_12);
            }
          else
            {
              t = r_12;
              {
                ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL;
                t = term_j_8;
                d_59 = t;
                t = term_w_10;
                e_59 = t;
                t = term_y_12;
                t = d_4(d_59, e_59, t);
                t = b_53;
                t = j_129(t);
                t = term_y_8;
                c_59 = t;
                t = SSL_exit(c_59);
              }
            }
        }
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        {
          ATerm z_12 = t;
          int b_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL;
              static ATerm m_3 (ATerm t);
              static ATerm m_3 (ATerm t)
              {
                ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,i_13 = NULL;
                h_53 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_53 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_53);
                f_53 = t;
                t = g_53;
                if(((f_52 != NULL) && (f_52 != t)))
                  _fail(t);
                else
                  f_52 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_53);
                i_13 = t;
                t = SSLsetAnnotations(i_13, f_53);
                return(t);
              }
              t = fetch_1_0(m_3, t);
              t = term_s_5;
              d_53 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_52)), term_c_13);
              e_53 = t;
              t = SSL_printnl(d_53, e_53);
              t = (ATerm) ATmakeAppl(sym__2, term_s_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_52)), term_c_13));
              t = i_129(t);
              t = term_v_5;
              c_53 = t;
              t = SSL_exit(c_53);
              LocalPopChoice(b_13);
            }
          else
            {
              t = z_12;
            }
        }
      }
  }
  g_52 = t;
  t = term_p_9;
  t = table_destroy_0_0(t);
  t = g_52;
  return(t);
}
ATerm option_wrap_5_0 (ATerm k_127 (ATerm), ATerm l_127 (ATerm), ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm o_127 (ATerm), ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
  t = parse_options_3_0(k_127, l_127, m_127, t);
  m_53 = t;
  t = term_f_13;
  t = table_create_0_0(t);
  t = term_f_13;
  n_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_13, term_g_13, m_53);
  t = lookup_table_0_1(n_53, t);
  q_53 = t;
  t = term_g_13;
  o_53 = t;
  t = q_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_4(o_53, m_53, p_53, t);
  t = m_53;
  t = n_127(t);
  {
    ATerm h_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_127(t);
        t = report_success_0_0(t);
        LocalPopChoice(j_13);
      }
    else
      {
        t = h_13;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = if_verbose2_1_0(n_5, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL;
  t = term_k_13;
  r_53 = t;
  t = term_r_5;
  s_53 = t;
  t = term_m_13;
  t = g_4(r_53, s_53, t);
  t = term_n_13;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_o_13;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL;
  t_53 = t;
  t = term_j_8;
  x_53 = t;
  t = term_u_8;
  y_53 = t;
  t = term_v_8;
  t = d_4(x_53, y_53, t);
  u_53 = t;
  t = term_s_5;
  v_53 = t;
  t = (ATerm) ATinsert(ATempty, u_53);
  w_53 = t;
  t = SSL_printnl(v_53, w_53);
  t = t_53;
  return(t);
}
ATerm iowrap_3_0 (ATerm n_126 (ATerm), ATerm o_126 (ATerm), ATerm p_126 (ATerm), ATerm t)
{
  static ATerm o_3 (ATerm t);
  static ATerm l_4 (ATerm t);
  static ATerm o_3 (ATerm t)
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_126(t);
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
              t = input_option_0_0(t);
              LocalPopChoice(v_13);
            }
          else
            {
              t = u_13;
              {
                ATerm x_13 = t;
                int z_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(z_13);
                  }
                else
                  {
                    t = x_13;
                    {
                      ATerm a_14 = t;
                      int e_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(m_4, s_4, u_4, t);
                          LocalPopChoice(e_14);
                        }
                      else
                        {
                          t = a_14;
                          {
                            ATerm f_14 = t;
                            int h_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(h_14);
                              }
                            else
                              {
                                t = f_14;
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
  static ATerm l_4 (ATerm t)
  {
    ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
    a_54 = t;
    {
      ATerm j_14 = t;
      int k_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm o_5 (ATerm t);
          static ATerm o_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((z_53 != NULL) && (z_53 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_53 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_5, t);
          LocalPopChoice(k_14);
        }
      else
        {
          t = j_14;
          t = term_l_14;
          z_53 = t;
        }
    }
    t = not_null(z_53);
    t = ReadFromFile_0_0(t);
    b_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_54, b_54);
    t = apply_strategy_1_0(n_126, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(o_3, p_126, default_system_about_0_0, q_3, l_4, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL,d_14 = NULL;
  i_54 = t;
  if(match_cons(t, sym__2))
    {
      f_54 = ATgetArgument(t, 0);
      g_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_54);
  e_54 = t;
  t = g_54;
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_55 = NULL,h_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,b_14 = NULL,y_13 = NULL,w_13 = NULL,r_13 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            b_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_54);
        h_59 = t;
        t = b_55;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_59 = ATgetFirst((ATermList) t);
            l_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_55);
        j_59 = t;
        t = l_59;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_59 = ATgetFirst((ATermList) t);
            p_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_59);
        n_59 = t;
        t = o_59;
        if(match_cons(t, sym_Strategies_1))
          {
            s_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_59);
        r_59 = t;
        t = s_59;
        t = map_1_0(strategy_definition_0_0, t);
        t_59 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, t_59);
        r_13 = t;
        t = SSLsetAnnotations(r_13, r_59);
        u_59 = t;
        t = p_59;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(p_59), u_59);
        w_13 = t;
        t = SSLsetAnnotations(w_13, n_59);
        q_59 = t;
        t = (ATerm) ATinsert(CheckATermList(q_59), k_59);
        y_13 = t;
        t = SSLsetAnnotations(y_13, j_59);
        m_59 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, m_59);
        b_14 = t;
        t = SSLsetAnnotations(b_14, h_59);
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = debug_1_0(q_5, t);
      }
  }
  h_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_54, h_54);
  d_14 = t;
  t = SSLsetAnnotations(d_14, e_54);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_o_14;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(p_5, _fail, default_usage_0_0, t);
  return(t);
}
