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
Symbol sym_Undefined_0;
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
ATerm term_i_15;
ATerm term_e_15;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_t_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_q_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_r_7;
ATerm term_n_7;
ATerm term_j_7;
ATerm term_o_6;
ATerm term_g_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym__2, term_r_8, term_u_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_z_8);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_8);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_y_5);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_r_8, term_e_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_r_8, term_w_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_r_9);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_y_5);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, term_b_12, term_y_5);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_y_5);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__3, term_q_9, term_r_9, (ATerm) ATempty);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym__2, term_r_8, term_t_11);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_y_5);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm t_104 (ATerm), ATerm t);
ATerm list_1_0 (ATerm i_105 (ATerm), ATerm t);
static ATerm c_0 (ATerm t);
ATerm term_expression_0_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm e_105 (ATerm), ATerm t);
static ATerm a_4 (ATerm x_39, ATerm y_39, ATerm t);
static ATerm b_4 (ATerm c_24, ATerm d_24, ATerm t);
static ATerm d_4 (ATerm v_104 (ATerm), ATerm c_159, ATerm i_24, ATerm t);
static ATerm c_4 (ATerm y_23, ATerm z_23, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm y_123 (ATerm), ATerm t);
static ATerm a_43 (ATerm s_42, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_4 (ATerm e_24, ATerm t);
static ATerm f_4 (ATerm b_38, ATerm c_38, ATerm t);
static ATerm g_4 (ATerm z_39, ATerm a_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_44 (ATerm k_43, ATerm t);
static ATerm n_44 (ATerm o_43, ATerm p_43, ATerm q_43, ATerm t);
static ATerm o_44 (ATerm y_43, ATerm a_44, ATerm b_44, ATerm t);
static ATerm h_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_105 (ATerm), ATerm t);
static ATerm m_4 (ATerm l_57, ATerm m_57, ATerm t);
ATerm if_verbose2_1_0 (ATerm h_122 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_4 (ATerm c_66, ATerm d_66, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_4 (ATerm s_55, ATerm t_55, ATerm r_55, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm n_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_4 (ATerm t_42, ATerm u_42, ATerm t);
ATerm foldr_2_0 (ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_122 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm need_help_1_0 (ATerm w_124 (ATerm), ATerm t);
static ATerm q_4 (ATerm k_60, ATerm l_60, ATerm m_60, ATerm t);
static ATerm r_4 (ATerm n_60, ATerm o_60, ATerm t);
ATerm lookup_table_0_1 (ATerm e_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm s_60, ATerm t_60, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_4 (ATerm p_60, ATerm q_60, ATerm t);
static ATerm l_4 (ATerm u_60, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_126 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm parse_options_1_0 (ATerm y_126 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm b_125 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm iowrap_3_0 (ATerm h_124 (ATerm), ATerm i_124 (ATerm), ATerm j_124 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,e_0 = NULL,t_0 = NULL,v_0 = NULL;
  a_0 = t;
  t = term_y_5;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_z_5;
  t_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_6), b_0), term_a_6);
  v_0 = t;
  t = SSL_printnl(t_0, v_0);
  t = term_c_6;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm t_104 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,n_1 = NULL,o_1 = NULL,q_1 = NULL;
  l_1 = t;
  t = t_104(t);
  n_1 = t;
  t = term_z_5;
  o_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_1), n_1);
  q_1 = t;
  t = SSL_printnl(o_1, q_1);
  t = l_1;
  return(t);
}
ATerm list_1_0 (ATerm i_105 (ATerm), ATerm t)
{
  t = map_1_0(i_105, t);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = term_d_6;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm e_6 = t;
  int f_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
      h_6 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = h_6;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              i_6 = ATgetArgument(t, 0);
              {
                ATerm k_0 = NULL,p_0 = NULL,b_2 = NULL;
                t = SSLgetAnnotations(h_6);
                k_0 = t;
                t = SSL_is_string(i_6);
                p_0 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, p_0);
                b_2 = t;
                t = SSLsetAnnotations(b_2, k_0);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  i_6 = ATgetArgument(t, 0);
                  {
                    ATerm x_0 = NULL,z_0 = NULL,c_2 = NULL;
                    t = SSLgetAnnotations(h_6);
                    x_0 = t;
                    t = SSL_is_int(i_6);
                    z_0 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, z_0);
                    c_2 = t;
                    t = SSLsetAnnotations(c_2, x_0);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      i_6 = ATgetArgument(t, 0);
                      {
                        ATerm f_1 = NULL,h_1 = NULL,d_2 = NULL;
                        t = SSLgetAnnotations(h_6);
                        f_1 = t;
                        t = SSL_is_real(i_6);
                        h_1 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, h_1);
                        d_2 = t;
                        t = SSLsetAnnotations(d_2, f_1);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          i_6 = ATgetArgument(t, 0);
                          {
                            ATerm r_1 = NULL,t_1 = NULL,e_2 = NULL;
                            t = SSLgetAnnotations(h_6);
                            r_1 = t;
                            t = SSL_is_string(i_6);
                            t_1 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, t_1);
                            e_2 = t;
                            t = SSLsetAnnotations(e_2, r_1);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              i_6 = ATgetArgument(t, 0);
                              {
                                ATerm z_1 = NULL,g_2 = NULL,f_2 = NULL;
                                t = SSLgetAnnotations(h_6);
                                z_1 = t;
                                t = i_6;
                                t = term_expression_0_0(t);
                                g_2 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, g_2);
                                f_2 = t;
                                t = SSLsetAnnotations(f_2, z_1);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  i_6 = ATgetArgument(t, 0);
                                  j_6 = ATgetArgument(t, 1);
                                  {
                                    ATerm o_2 = NULL,c_3 = NULL,d_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,p_2 = NULL,k_2 = NULL;
                                    t = SSLgetAnnotations(h_6);
                                    o_2 = t;
                                    t = i_6;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        g_3 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(i_6);
                                    d_3 = t;
                                    t = SSL_is_string(g_3);
                                    h_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, h_3);
                                    k_2 = t;
                                    t = SSLsetAnnotations(k_2, d_3);
                                    i_3 = t;
                                    t = j_6;
                                    t = term_expression_0_0(t);
                                    c_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, i_3, c_3);
                                    p_2 = t;
                                    t = SSLsetAnnotations(p_2, o_2);
                                  }
                                }
                              else
                                {
                                  ATerm t_3 = NULL,w_3 = NULL,y_3 = NULL,q_2 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      i_6 = ATgetArgument(t, 0);
                                      j_6 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(h_6);
                                  t_3 = t;
                                  t = SSL_is_string(i_6);
                                  w_3 = t;
                                  t = j_6;
                                  t = map_1_0(term_expression_0_0, t);
                                  y_3 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, w_3, y_3);
                                  q_2 = t;
                                  t = SSLsetAnnotations(q_2, t_3);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(f_6);
    }
  else
    {
      t = e_6;
      t = debug_1_0(c_0, t);
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  t = SSL_is_string(u_19);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,x_22 = NULL,y_22 = NULL,n_5 = NULL;
  y_22 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
      q_22 = ATgetArgument(t, 2);
      r_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_22);
  l_22 = t;
  t = SSL_is_string(m_22);
  s_22 = t;
  t = n_22;
  t = map_1_0(q_0, t);
  t_22 = t;
  t = q_22;
  t = map_1_0(r_0, t);
  u_22 = t;
  t = r_22;
  t = strategy_expression_0_0(t);
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, s_22, t_22, u_22, x_22);
  n_5 = t;
  t = SSLsetAnnotations(n_5, l_22);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm i_25 = NULL,m_25 = NULL,n_25 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,q_27 = NULL,r_27 = NULL,k_5 = NULL,j_5 = NULL;
  r_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      m_25 = ATgetArgument(t, 0);
      n_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_27);
  i_25 = t;
  t = SSL_is_string(m_25);
  j_27 = t;
  t = n_25;
  if(match_cons(t, sym_FunType_2))
    {
      l_27 = ATgetArgument(t, 0);
      m_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_25);
  k_27 = t;
  t = l_27;
  t = list_1_0(_id, t);
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, n_27, m_27);
  j_5 = t;
  t = SSLsetAnnotations(j_5, k_27);
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_27, q_27);
  k_5 = t;
  t = SSLsetAnnotations(k_5, i_25);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm v_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,c_28 = NULL,e_28 = NULL,f_28 = NULL,m_5 = NULL,l_5 = NULL;
  f_28 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_27 = ATgetArgument(t, 0);
      y_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_28);
  v_27 = t;
  t = SSL_is_string(x_27);
  z_27 = t;
  t = y_27;
  if(match_cons(t, sym_ConstType_1))
    {
      c_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_27);
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, c_28);
  l_5 = t;
  t = SSLsetAnnotations(l_5, a_28);
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_27, e_28);
  m_5 = t;
  t = SSLsetAnnotations(m_5, v_27);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_g_6;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_28 = NULL,v_28 = NULL,a_29 = NULL,c_29 = NULL;
      v_28 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = v_28;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = v_28;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  a_29 = ATgetArgument(t, 0);
                  {
                    ATerm m_7 = NULL,o_7 = NULL,b_3 = NULL;
                    t = SSLgetAnnotations(v_28);
                    m_7 = t;
                    t = a_29;
                    t = strategy_expression_0_0(t);
                    o_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, o_7);
                    b_3 = t;
                    t = SSLsetAnnotations(b_3, m_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      a_29 = ATgetArgument(t, 0);
                      {
                        ATerm u_7 = NULL,w_7 = NULL,e_3 = NULL;
                        t = SSLgetAnnotations(v_28);
                        u_7 = t;
                        t = a_29;
                        t = strategy_expression_0_0(t);
                        w_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, w_7);
                        e_3 = t;
                        t = SSLsetAnnotations(e_3, u_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          a_29 = ATgetArgument(t, 0);
                          c_29 = ATgetArgument(t, 1);
                          {
                            ATerm d_8 = NULL,g_8 = NULL,h_8 = NULL,f_3 = NULL;
                            t = SSLgetAnnotations(v_28);
                            d_8 = t;
                            t = a_29;
                            t = strategy_expression_0_0(t);
                            g_8 = t;
                            t = c_29;
                            t = strategy_expression_0_0(t);
                            h_8 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, g_8, h_8);
                            f_3 = t;
                            t = SSLsetAnnotations(f_3, d_8);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              a_29 = ATgetArgument(t, 0);
                              c_29 = ATgetArgument(t, 1);
                              {
                                ATerm p_8 = NULL,s_8 = NULL,t_8 = NULL,m_3 = NULL;
                                t = SSLgetAnnotations(v_28);
                                p_8 = t;
                                t = a_29;
                                t = strategy_expression_0_0(t);
                                s_8 = t;
                                t = c_29;
                                t = strategy_expression_0_0(t);
                                t_8 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, s_8, t_8);
                                m_3 = t;
                                t = SSLsetAnnotations(m_3, p_8);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  a_29 = ATgetArgument(t, 0);
                                  c_29 = ATgetArgument(t, 1);
                                  {
                                    ATerm b_9 = NULL,e_9 = NULL,f_9 = NULL,o_3 = NULL;
                                    t = SSLgetAnnotations(v_28);
                                    b_9 = t;
                                    t = a_29;
                                    t = strategy_expression_0_0(t);
                                    e_9 = t;
                                    t = c_29;
                                    t = strategy_expression_0_0(t);
                                    f_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, e_9, f_9);
                                    o_3 = t;
                                    t = SSLsetAnnotations(o_3, b_9);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      a_29 = ATgetArgument(t, 0);
                                      c_29 = ATgetArgument(t, 1);
                                      u_28 = ATgetArgument(t, 2);
                                      {
                                        ATerm o_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,p_3 = NULL;
                                        t = SSLgetAnnotations(v_28);
                                        o_9 = t;
                                        t = a_29;
                                        t = strategy_expression_0_0(t);
                                        s_9 = t;
                                        t = c_29;
                                        t = strategy_expression_0_0(t);
                                        t_9 = t;
                                        t = u_28;
                                        t = strategy_expression_0_0(t);
                                        u_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, s_9, t_9, u_9);
                                        p_3 = t;
                                        t = SSLsetAnnotations(p_3, o_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          a_29 = ATgetArgument(t, 0);
                                          c_29 = ATgetArgument(t, 1);
                                          {
                                            ATerm h_10 = NULL,k_10 = NULL,n_10 = NULL,x_3 = NULL;
                                            t = SSLgetAnnotations(v_28);
                                            h_10 = t;
                                            t = a_29;
                                            t = strategy_expression_0_0(t);
                                            k_10 = t;
                                            t = c_29;
                                            t = strategy_expression_0_0(t);
                                            n_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, k_10, n_10);
                                            x_3 = t;
                                            t = SSLsetAnnotations(x_3, h_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              a_29 = ATgetArgument(t, 0);
                                              c_29 = ATgetArgument(t, 1);
                                              {
                                                ATerm z_10 = NULL,c_11 = NULL,g_11 = NULL,o_4 = NULL;
                                                t = SSLgetAnnotations(v_28);
                                                z_10 = t;
                                                t = a_29;
                                                t = strategy_expression_0_0(t);
                                                c_11 = t;
                                                t = c_29;
                                                t = strategy_expression_0_0(t);
                                                g_11 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, c_11, g_11);
                                                o_4 = t;
                                                t = SSLsetAnnotations(o_4, z_10);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  a_29 = ATgetArgument(t, 0);
                                                  c_29 = ATgetArgument(t, 1);
                                                  u_28 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm r_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,f_12 = NULL,g_12 = NULL,w_4 = NULL,t_4 = NULL;
                                                    t = SSLgetAnnotations(v_28);
                                                    r_11 = t;
                                                    t = a_29;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        z_11 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(a_29);
                                                    y_11 = t;
                                                    t = z_11;
                                                    {
                                                      ATerm m_6 = t;
                                                      int n_6 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = SSL_is_string(z_11);
                                                          LocalPopChoice(n_6);
                                                        }
                                                      else
                                                        {
                                                          t = m_6;
                                                          {
                                                            ATerm r_12 = NULL,s_12 = NULL,c_13 = NULL,i_13 = NULL,j_13 = NULL,s_4 = NULL;
                                                            if(match_cons(t, sym_Mod_2))
                                                              {
                                                                r_12 = ATgetArgument(t, 0);
                                                                s_12 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSLgetAnnotations(z_11);
                                                            c_13 = t;
                                                            t = SSL_is_string(r_12);
                                                            i_13 = t;
                                                            t = SSL_is_string(s_12);
                                                            j_13 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Mod_2, i_13, j_13);
                                                            s_4 = t;
                                                            t = SSLsetAnnotations(s_4, c_13);
                                                          }
                                                        }
                                                    }
                                                    f_12 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, f_12);
                                                    t_4 = t;
                                                    t = SSLsetAnnotations(t_4, y_11);
                                                    g_12 = t;
                                                    t = c_29;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    w_11 = t;
                                                    t = u_28;
                                                    t = map_1_0(term_expression_0_0, t);
                                                    x_11 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, g_12, w_11, x_11);
                                                    w_4 = t;
                                                    t = SSLsetAnnotations(w_4, r_11);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      a_29 = ATgetArgument(t, 0);
                                                      c_29 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm r_13 = NULL,v_13 = NULL,w_13 = NULL,x_4 = NULL;
                                                        t = SSLgetAnnotations(v_28);
                                                        r_13 = t;
                                                        t = SSL_is_string(a_29);
                                                        v_13 = t;
                                                        t = c_29;
                                                        t = strategy_expression_0_0(t);
                                                        w_13 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, v_13, w_13);
                                                        x_4 = t;
                                                        t = SSLsetAnnotations(x_4, r_13);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          a_29 = ATgetArgument(t, 0);
                                                          c_29 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm h_14 = NULL,m_14 = NULL,n_14 = NULL,y_4 = NULL;
                                                            t = SSLgetAnnotations(v_28);
                                                            h_14 = t;
                                                            t = SSL_is_int(a_29);
                                                            m_14 = t;
                                                            t = c_29;
                                                            t = strategy_expression_0_0(t);
                                                            n_14 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, m_14, n_14);
                                                            y_4 = t;
                                                            t = SSLsetAnnotations(y_4, h_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              a_29 = ATgetArgument(t, 0);
                                                              c_29 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm a_15 = NULL,f_15 = NULL,j_15 = NULL,z_4 = NULL;
                                                                t = SSLgetAnnotations(v_28);
                                                                a_15 = t;
                                                                t = SSL_is_string(a_29);
                                                                f_15 = t;
                                                                t = c_29;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                j_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, f_15, j_15);
                                                                z_4 = t;
                                                                t = SSLsetAnnotations(z_4, a_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  a_29 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm s_15 = NULL,v_15 = NULL,a_5 = NULL;
                                                                    t = SSLgetAnnotations(v_28);
                                                                    s_15 = t;
                                                                    t = a_29;
                                                                    t = strategy_expression_0_0(t);
                                                                    v_15 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, v_15);
                                                                    a_5 = t;
                                                                    t = SSLsetAnnotations(a_5, s_15);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      a_29 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm j_16 = NULL,n_16 = NULL,b_5 = NULL;
                                                                        t = SSLgetAnnotations(v_28);
                                                                        j_16 = t;
                                                                        t = a_29;
                                                                        t = strategy_expression_0_0(t);
                                                                        n_16 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, n_16);
                                                                        b_5 = t;
                                                                        t = SSLsetAnnotations(b_5, j_16);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          a_29 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm y_16 = NULL,a_17 = NULL,c_5 = NULL;
                                                                            t = SSLgetAnnotations(v_28);
                                                                            y_16 = t;
                                                                            t = a_29;
                                                                            t = strategy_expression_0_0(t);
                                                                            a_17 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, a_17);
                                                                            c_5 = t;
                                                                            t = SSLsetAnnotations(c_5, y_16);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              a_29 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm i_17 = NULL,n_17 = NULL,d_5 = NULL;
                                                                                t = SSLgetAnnotations(v_28);
                                                                                i_17 = t;
                                                                                t = a_29;
                                                                                t = strategy_expression_0_0(t);
                                                                                n_17 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, n_17);
                                                                                d_5 = t;
                                                                                t = SSLsetAnnotations(d_5, i_17);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  a_29 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm v_17 = NULL,x_17 = NULL,e_5 = NULL;
                                                                                    t = SSLgetAnnotations(v_28);
                                                                                    v_17 = t;
                                                                                    t = a_29;
                                                                                    t = term_expression_0_0(t);
                                                                                    x_17 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, x_17);
                                                                                    e_5 = t;
                                                                                    t = SSLsetAnnotations(e_5, v_17);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      a_29 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm s_18 = NULL,u_18 = NULL,f_5 = NULL;
                                                                                        t = SSLgetAnnotations(v_28);
                                                                                        s_18 = t;
                                                                                        t = a_29;
                                                                                        t = term_expression_0_0(t);
                                                                                        u_18 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, u_18);
                                                                                        f_5 = t;
                                                                                        t = SSLsetAnnotations(f_5, s_18);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          a_29 = ATgetArgument(t, 0);
                                                                                          c_29 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm j_19 = NULL,o_19 = NULL,r_19 = NULL,g_5 = NULL;
                                                                                            t = SSLgetAnnotations(v_28);
                                                                                            j_19 = t;
                                                                                            t = a_29;
                                                                                            t = map_1_0(i_0, t);
                                                                                            o_19 = t;
                                                                                            t = c_29;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            r_19 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, o_19, r_19);
                                                                                            g_5 = t;
                                                                                            t = SSLsetAnnotations(g_5, j_19);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              a_29 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm g_20 = NULL,j_20 = NULL,h_5 = NULL;
                                                                                                t = SSLgetAnnotations(v_28);
                                                                                                g_20 = t;
                                                                                                t = a_29;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                j_20 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, j_20);
                                                                                                h_5 = t;
                                                                                                t = SSLsetAnnotations(h_5, g_20);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  a_29 = ATgetArgument(t, 0);
                                                                                                  c_29 = ATgetArgument(t, 1);
                                                                                                  u_28 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm g_21 = NULL,n_21 = NULL,p_21 = NULL,q_21 = NULL,i_5 = NULL;
                                                                                                    t = SSLgetAnnotations(v_28);
                                                                                                    g_21 = t;
                                                                                                    t = SSL_is_string(a_29);
                                                                                                    n_21 = t;
                                                                                                    t = c_29;
                                                                                                    t = map_1_0(strategy_expression_0_0, t);
                                                                                                    p_21 = t;
                                                                                                    t = u_28;
                                                                                                    t = map_1_0(term_expression_0_0, t);
                                                                                                    q_21 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, n_21, p_21, q_21);
                                                                                                    i_5 = t;
                                                                                                    t = SSLsetAnnotations(i_5, g_21);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm d_22 = NULL,g_22 = NULL,h_22 = NULL,o_5 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      a_29 = ATgetArgument(t, 0);
                                                                                                      c_29 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(v_28);
                                                                                                  d_22 = t;
                                                                                                  t = a_29;
                                                                                                  t = map_1_0(n_0, t);
                                                                                                  g_22 = t;
                                                                                                  t = c_29;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  h_22 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, g_22, h_22);
                                                                                                  o_5 = t;
                                                                                                  t = SSLsetAnnotations(o_5, d_22);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(l_6);
    }
  else
    {
      t = k_6;
      t = debug_1_0(s_0, t);
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,h_31 = NULL,x_6 = NULL;
  h_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      v_30 = ATgetArgument(t, 0);
      w_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_31);
  u_30 = t;
  t = SSL_is_string(v_30);
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_30, w_30);
  x_6 = t;
  t = SSLsetAnnotations(x_6, u_30);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm i_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,y_6 = NULL;
  s_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      p_31 = ATgetArgument(t, 0);
      q_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_31);
  i_31 = t;
  t = SSL_is_string(p_31);
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_31, q_31);
  y_6 = t;
  t = SSLsetAnnotations(y_6, i_31);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,p_34 = NULL,r_34 = NULL,b_7 = NULL;
  r_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      m_34 = ATgetArgument(t, 0);
      n_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_34);
  l_34 = t;
  t = SSL_is_string(m_34);
  p_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_34, n_34);
  b_7 = t;
  t = SSLsetAnnotations(b_7, l_34);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,v_34 = NULL,w_34 = NULL,f_35 = NULL,c_7 = NULL;
  f_35 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      t_34 = ATgetArgument(t, 0);
      v_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_35);
  s_34 = t;
  t = SSL_is_string(t_34);
  w_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_34, v_34);
  c_7 = t;
  t = SSLsetAnnotations(c_7, s_34);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm d_38 = NULL,o_39 = NULL,p_39 = NULL,b_40 = NULL,c_40 = NULL,f_7 = NULL;
  c_40 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_39 = ATgetArgument(t, 0);
      p_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_40);
  d_38 = t;
  t = SSL_is_string(o_39);
  b_40 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_40, p_39);
  f_7 = t;
  t = SSLsetAnnotations(f_7, d_38);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm h_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,l_42 = NULL,g_7 = NULL;
  l_42 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      p_40 = ATgetArgument(t, 0);
      q_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_42);
  h_40 = t;
  t = SSL_is_string(p_40);
  r_40 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_40, q_40);
  g_7 = t;
  t = SSLsetAnnotations(g_7, h_40);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_o_6;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
      e_39 = t;
      if(match_cons(t, sym_SDefT_4))
        {
          f_39 = ATgetArgument(t, 0);
          g_39 = ATgetArgument(t, 1);
          h_39 = ATgetArgument(t, 2);
          d_39 = ATgetArgument(t, 3);
          {
            ATerm t_29 = NULL,z_29 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,z_6 = NULL;
            t = SSLgetAnnotations(e_39);
            t_29 = t;
            t = f_39;
            {
              ATerm r_6 = t;
              int s_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_is_string(f_39);
                  LocalPopChoice(s_6);
                }
              else
                {
                  t = r_6;
                  {
                    ATerm s_30 = NULL,t_30 = NULL,b_32 = NULL,e_32 = NULL,i_32 = NULL,w_6 = NULL;
                    if(match_cons(t, sym_Mod_2))
                      {
                        s_30 = ATgetArgument(t, 0);
                        t_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(f_39);
                    b_32 = t;
                    t = SSL_is_string(s_30);
                    e_32 = t;
                    t = SSL_is_string(t_30);
                    i_32 = t;
                    t = (ATerm) ATmakeAppl(sym_Mod_2, e_32, i_32);
                    w_6 = t;
                    t = SSLsetAnnotations(w_6, b_32);
                  }
                }
            }
            z_29 = t;
            t = g_39;
            t = map_1_0(u_0, t);
            c_30 = t;
            t = h_39;
            t = map_1_0(w_0, t);
            d_30 = t;
            t = d_39;
            t = strategy_expression_0_0(t);
            e_30 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, z_29, c_30, d_30, e_30);
            z_6 = t;
            t = SSLsetAnnotations(z_6, t_29);
          }
        }
      else
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              f_39 = ATgetArgument(t, 0);
              g_39 = ATgetArgument(t, 1);
              h_39 = ATgetArgument(t, 2);
              d_39 = ATgetArgument(t, 3);
              {
                ATerm v_32 = NULL,a_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,d_7 = NULL;
                t = SSLgetAnnotations(e_39);
                v_32 = t;
                t = f_39;
                {
                  ATerm t_6 = t;
                  int u_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_is_string(f_39);
                      LocalPopChoice(u_6);
                    }
                  else
                    {
                      t = t_6;
                      {
                        ATerm e_34 = NULL,k_34 = NULL,z_35 = NULL,f_36 = NULL,g_36 = NULL,a_7 = NULL;
                        if(match_cons(t, sym_Mod_2))
                          {
                            e_34 = ATgetArgument(t, 0);
                            k_34 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(f_39);
                        z_35 = t;
                        t = SSL_is_string(e_34);
                        f_36 = t;
                        t = SSL_is_string(k_34);
                        g_36 = t;
                        t = (ATerm) ATmakeAppl(sym_Mod_2, f_36, g_36);
                        a_7 = t;
                        t = SSLsetAnnotations(a_7, z_35);
                      }
                    }
                }
                a_33 = t;
                t = g_39;
                t = map_1_0(y_0, t);
                d_33 = t;
                t = h_39;
                t = map_1_0(a_1, t);
                e_33 = t;
                t = d_39;
                t = strategy_expression_0_0(t);
                f_33 = t;
                t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, a_33, d_33, e_33, f_33);
                d_7 = t;
                t = SSLsetAnnotations(d_7, v_32);
              }
            }
          else
            {
              ATerm y_36 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,h_7 = NULL;
              if(match_cons(t, sym_ExtSDef_3))
                {
                  f_39 = ATgetArgument(t, 0);
                  g_39 = ATgetArgument(t, 1);
                  h_39 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_39);
              y_36 = t;
              t = f_39;
              {
                ATerm v_6 = t;
                int i_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_is_string(f_39);
                    LocalPopChoice(i_7);
                  }
                else
                  {
                    t = v_6;
                    {
                      ATerm y_37 = NULL,a_38 = NULL,z_43 = NULL,b_45 = NULL,c_45 = NULL,e_7 = NULL;
                      if(match_cons(t, sym_Mod_2))
                        {
                          y_37 = ATgetArgument(t, 0);
                          a_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(f_39);
                      z_43 = t;
                      t = SSL_is_string(y_37);
                      b_45 = t;
                      t = SSL_is_string(a_38);
                      c_45 = t;
                      t = (ATerm) ATmakeAppl(sym_Mod_2, b_45, c_45);
                      e_7 = t;
                      t = SSLsetAnnotations(e_7, z_43);
                    }
                  }
              }
              d_37 = t;
              t = g_39;
              t = map_1_0(b_1, t);
              e_37 = t;
              t = h_39;
              t = map_1_0(c_1, t);
              f_37 = t;
              t = (ATerm) ATmakeAppl(sym_ExtSDef_3, d_37, e_37, f_37);
              h_7 = t;
              t = SSLsetAnnotations(h_7, y_36);
            }
        }
      LocalPopChoice(q_6);
    }
  else
    {
      t = p_6;
      t = debug_1_0(d_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm e_105 (ATerm), ATerm t)
{
  static ATerm j_40 (ATerm t);
  static ATerm j_40 (ATerm t)
  {
    ATerm f_40 = NULL,g_40 = NULL,i_40 = NULL;
    f_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_40;
      }
    else
      {
        ATerm n_47 = NULL,k_48 = NULL,u_48 = NULL,d_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_40 = ATgetFirst((ATermList) t);
            i_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_40);
        n_47 = t;
        t = g_40;
        t = e_105(t);
        k_48 = t;
        t = i_40;
        t = j_40(t);
        u_48 = t;
        t = (ATerm) ATinsert(CheckATermList(u_48), k_48);
        d_11 = t;
        t = SSLsetAnnotations(d_11, n_47);
      }
    return(t);
  }
  t = j_40(t);
  return(t);
}
static ATerm a_4 (ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm l_40 = NULL;
  t = SSL_fputc(x_39, y_39);
  l_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_40);
  return(t);
}
static ATerm b_4 (ATerm c_24, ATerm d_24, ATerm t)
{
  ATerm m_40 = NULL;
  t = SSL_write_term_to_stream_text(c_24, d_24);
  m_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_40);
  return(t);
}
static ATerm d_4 (ATerm v_104 (ATerm), ATerm c_159, ATerm i_24, ATerm t)
{
  ATerm n_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_159, term_j_7);
  t = h_4(t);
  n_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_40, i_24);
  t = v_104(t);
  t = fclose_0_0(t);
  t = i_24;
  return(t);
}
static ATerm c_4 (ATerm y_23, ATerm z_23, ATerm t)
{
  ATerm o_40 = NULL;
  t = SSL_write_term_to_stream_baf(y_23, z_23);
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_40);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm i_53 = NULL,a_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_7 = ATgetArgument(t, 0);
      if(match_cons(k_7, sym_Stream_1))
        {
          i_53 = ATgetArgument(k_7, 0);
        }
      else
        _fail(t);
      a_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_4(i_53, a_54, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL,n_57 = NULL,o_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_7 = ATgetArgument(t, 0);
      if(match_cons(l_7, sym_Stream_1))
        {
          n_57 = ATgetArgument(l_7, 0);
        }
      else
        _fail(t);
      o_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(n_57, o_57, t);
  i_57 = t;
  t = term_n_7;
  j_57 = t;
  t = i_57;
  if(match_cons(t, sym_Stream_1))
    {
      k_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_7, i_57);
  t = a_4(j_57, k_57, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,c_42 = NULL,d_42 = NULL,j_11 = NULL,f_11 = NULL;
  t_40 = t;
  if(match_cons(t, sym__2))
    {
      a_41 = ATgetArgument(t, 0);
      b_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_40);
  z_40 = t;
  t = a_41;
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm e_1 (ATerm t);
        static ATerm e_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((s_40 != NULL) && (s_40 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(e_1, t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        t = term_r_7;
        s_40 = t;
      }
  }
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_41, b_41);
  f_11 = t;
  t = SSLsetAnnotations(f_11, z_40);
  t = t_40;
  if(match_cons(t, sym__2))
    {
      v_40 = ATgetArgument(t, 0);
      w_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_40);
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_40, (ATerm) ATmakeAppl(sym__2, not_null(s_40), w_40));
  j_11 = t;
  t = SSLsetAnnotations(j_11, u_40);
  y_40 = t;
  if(match_cons(t, sym__2))
    {
      c_42 = ATgetArgument(t, 0);
      d_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_50 = NULL,k_52 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,q_11 = NULL;
        t = SSLgetAnnotations(y_40);
        u_50 = t;
        t = c_42;
        t = fetch_1_0(g_1, t);
        k_52 = t;
        t = d_42;
        if(match_cons(t, sym__2))
          {
            g_53 = ATgetArgument(t, 0);
            h_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_4(i_1, g_53, h_53, t);
        f_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_52, f_53);
        q_11 = t;
        t = SSLsetAnnotations(q_11, u_50);
        LocalPopChoice(t_7);
      }
    else
      {
        t = s_7;
        {
          ATerm e_56 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,v_11 = NULL;
          t = SSLgetAnnotations(y_40);
          e_56 = t;
          t = d_42;
          if(match_cons(t, sym__2))
            {
              g_57 = ATgetArgument(t, 0);
              h_57 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_4(j_1, g_57, h_57, t);
          f_57 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_42, f_57);
          v_11 = t;
          t = SSLsetAnnotations(v_11, e_56);
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
ATerm apply_strategy_1_0 (ATerm y_123 (ATerm), ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
  k_42 = t;
  t = dtime_0_0(t);
  t = k_42;
  t = y_123(t);
  j_42 = t;
  t = dtime_0_0(t);
  g_42 = t;
  t = j_42;
  if(match_cons(t, sym__2))
    {
      h_42 = ATgetArgument(t, 0);
      i_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_42), (ATerm) ATmakeAppl(sym_Runtime_1, g_42)), i_42);
  return(t);
}
static ATerm a_43 (ATerm s_42, ATerm t)
{
  t = SSL_fclose(s_42);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL;
  y_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_42 = ATgetArgument(t, 0);
      {
        ATerm v_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_42);
            LocalPopChoice(x_7);
          }
        else
          {
            t = v_7;
            t = a_43(y_42, t);
          }
      }
    }
  else
    {
      t = a_43(y_42, t);
    }
  return(t);
}
static ATerm e_4 (ATerm e_24, ATerm t)
{
  t = SSL_read_term_from_stream(e_24);
  return(t);
}
static ATerm f_4 (ATerm b_38, ATerm c_38, ATerm t)
{
  t = SSL_strcat(b_38, c_38);
  return(t);
}
static ATerm g_4 (ATerm z_39, ATerm a_40, ATerm t)
{
  ATerm b_43 = NULL;
  t = SSL_fopen(z_39, a_40);
  b_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_43);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_43 = NULL;
  t = SSL_stdin_stream();
  c_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_43);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_43 = NULL;
  t = SSL_stdout_stream();
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_43);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_43 = NULL;
  t = SSL_stderr_stream();
  e_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_43);
  return(t);
}
static ATerm m_44 (ATerm k_43, ATerm t)
{
  ATerm l_43 = NULL;
  t = SSL_explode_term(k_43);
  if(match_cons(t, sym__2))
    {
      ATerm y_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_7 = ATgetArgument(t, 1);
        if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
          {
            l_43 = ATgetFirst((ATermList) z_7);
            {
              ATerm a_8 = (ATerm) ATgetNext((ATermList) z_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_43;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_43;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_43;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_43;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_44 (ATerm o_43, ATerm p_43, ATerm q_43, ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,w_43 = NULL,e_12 = NULL;
  t = SSLgetAnnotations(q_43);
  t_43 = t;
  t = o_43;
  if(match_cons(t, sym_Path_1))
    {
      w_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_43, p_43);
  e_12 = t;
  t = SSLsetAnnotations(e_12, t_43);
  if(match_cons(t, sym__2))
    {
      r_43 = ATgetArgument(t, 0);
      s_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(r_43, s_43, t);
  return(t);
}
static ATerm o_44 (ATerm y_43, ATerm a_44, ATerm b_44, ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,h_44 = NULL,i_12 = NULL;
  t = SSLgetAnnotations(b_44);
  e_44 = t;
  t = SSL_is_string(y_43);
  h_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_44, a_44);
  i_12 = t;
  t = SSLsetAnnotations(i_12, e_44);
  if(match_cons(t, sym__2))
    {
      c_44 = ATgetArgument(t, 0);
      d_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(c_44, d_44, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
  j_44 = t;
  if(match_cons(t, sym__2))
    {
      k_44 = ATgetArgument(t, 0);
      l_44 = ATgetArgument(t, 1);
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_44(j_44, t);
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            {
              ATerm e_8 = t;
              int f_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_44(k_44, l_44, j_44, t);
                  LocalPopChoice(f_8);
                }
              else
                {
                  t = e_8;
                  t = o_44(k_44, l_44, j_44, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_44(j_44, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,x_44 = NULL;
  x_44 = t;
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_44, term_k_8);
        t = h_4(t);
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        {
          ATerm z_57 = NULL,a_58 = NULL;
          t = term_l_8;
          a_58 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_8, x_44);
          t = f_4(a_58, x_44, t);
          z_57 = t;
          t = SSL_perror(z_57);
          _fail(t);
        }
      }
  }
  r_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_4(s_44, t);
  q_44 = t;
  t = r_44;
  t = fclose_0_0(t);
  t = q_44;
  return(t);
}
ATerm fetch_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  static ATerm w_45 (ATerm t);
  static ATerm w_45 (ATerm t)
  {
    ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
    t_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_45 = ATgetFirst((ATermList) t);
        v_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_8 = t;
      int n_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_58 = NULL,i_58 = NULL,l_12 = NULL;
          t = SSLgetAnnotations(t_45);
          f_58 = t;
          t = u_45;
          t = o_105(t);
          i_58 = t;
          t = (ATerm) ATinsert(CheckATermList(v_45), i_58);
          l_12 = t;
          t = SSLsetAnnotations(l_12, f_58);
          LocalPopChoice(n_8);
        }
      else
        {
          t = m_8;
          {
            ATerm q_58 = NULL,t_58 = NULL,m_12 = NULL;
            t = SSLgetAnnotations(t_45);
            q_58 = t;
            t = v_45;
            t = w_45(t);
            t_58 = t;
            t = (ATerm) ATinsert(CheckATermList(t_58), u_45);
            m_12 = t;
            t = SSLsetAnnotations(m_12, q_58);
          }
        }
    }
    return(t);
  }
  t = w_45(t);
  return(t);
}
static ATerm m_4 (ATerm l_57, ATerm m_57, ATerm t)
{
  ATerm z_45 = NULL;
  t = lookup_table_0_1(l_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(m_57, z_45, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_122 (ATerm), ATerm t)
{
  ATerm c_46 = NULL;
  c_46 = t;
  {
    ATerm o_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL;
        t = term_r_8;
        f_46 = t;
        t = term_u_8;
        g_46 = t;
        t = term_v_8;
        t = m_4(f_46, g_46, t);
        e_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_46, term_w_8);
        t = geq_0_0(t);
        t = c_46;
        t = h_122(t);
        LocalPopChoice(q_8);
      }
    else
      {
        t = o_8;
        t = c_46;
      }
  }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm j_46 = NULL;
  j_46 = t;
  if(match_string(t, "-k"))
    {
      t = j_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_46;
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
  k_46 = t;
  t = SSL_string_to_int(k_46);
  l_46 = t;
  t = term_x_8;
  m_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_8, l_46);
  t = p_4(m_46, l_46, t);
  t = k_46;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_y_8;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_1, m_1, p_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm o_46 = NULL;
  o_46 = t;
  if(match_string(t, "-S"))
    {
      t = o_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_46;
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL;
  t = term_u_8;
  p_46 = t;
  t = term_z_8;
  q_46 = t;
  t = term_a_9;
  t = p_4(p_46, q_46, t);
  t = term_c_9;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_d_9;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
  r_46 = t;
  t = SSL_string_to_int(r_46);
  s_46 = t;
  t = term_u_8;
  t_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, s_46);
  t = p_4(t_46, s_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_46);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_g_9;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL;
  t = term_h_9;
  u_46 = t;
  t = term_y_5;
  v_46 = t;
  t = term_i_9;
  t = p_4(u_46, v_46, t);
  t = term_j_9;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_1, u_1, v_1, t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      {
        ATerm n_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_1, x_1, y_1, t);
            LocalPopChoice(p_9);
          }
        else
          {
            t = n_9;
            t = Option_3_0(a_2, h_2, i_2, t);
          }
      }
    }
  return(t);
}
static ATerm p_4 (ATerm c_66, ATerm d_66, ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL;
  t = term_r_8;
  w_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_8, c_66, d_66);
  t = lookup_table_0_1(w_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(c_66, d_66, x_46, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_8, c_66, d_66);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL;
      t = term_y_5;
      t = g_0(t);
      d_47 = t;
      t = term_q_9;
      e_47 = t;
      t = term_r_9;
      f_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_9, term_r_9, d_47);
      t = n_4(e_47, f_47, d_47, t);
      _fail(t);
    }
  else
    {
      ATerm i_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_47 = ATgetFirst((ATermList) t);
          c_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_47;
      t = d_0(t);
      t = term_y_5;
      t = f_0(t);
      i_47 = t;
      t = (ATerm) ATinsert(CheckATermList(c_47), i_47);
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm k_47 = NULL;
  k_47 = t;
  if(match_string(t, "-o"))
    {
      t = k_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_47;
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL;
  l_47 = t;
  t = term_v_9;
  m_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_9, l_47);
  t = p_4(m_47, l_47, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_47);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_2, l_2, m_2, t);
  return(t);
}
static ATerm n_4 (ATerm s_55, ATerm t_55, ATerm r_55, ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL;
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_55, t_55);
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_9 = ATgetArgument(t, 0);
            ATerm a_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_55, t_55);
        t = m_4(s_55, t_55, t);
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        t = (ATerm) ATempty;
      }
  }
  p_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_55, t_55, (ATerm) ATinsert(CheckATermList(p_47), r_55));
  t = lookup_table_0_1(s_55, t);
  s_47 = t;
  t = (ATerm) ATinsert(CheckATermList(p_47), r_55);
  q_47 = t;
  t = s_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(t_55, q_47, r_47, t);
  t = o_47;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
      t = term_y_5;
      t = o_0(t);
      d_48 = t;
      t = term_q_9;
      e_48 = t;
      t = term_r_9;
      f_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_9, term_r_9, d_48);
      t = n_4(e_48, f_48, d_48, t);
      _fail(t);
    }
  else
    {
      ATerm j_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_47 = ATgetFirst((ATermList) t);
          a_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_48 = ATgetFirst((ATermList) t);
          c_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_47;
      t = l_0(t);
      t = b_48;
      t = m_0(t);
      j_48 = t;
      t = (ATerm) ATinsert(CheckATermList(c_48), j_48);
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm l_48 = NULL;
  l_48 = t;
  if(match_string(t, "-i"))
    {
      t = l_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_48;
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL;
  m_48 = t;
  t = term_b_10;
  n_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_10, m_48);
  t = p_4(n_48, m_48, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_48);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_c_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_2, r_2, s_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_5;
  t = whoami_0_0(t);
  o_48 = t;
  t = term_z_5;
  q_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_10), o_48);
  r_48 = t;
  t = SSL_printnl(q_48, r_48);
  t = term_c_6;
  p_48 = t;
  t = SSL_exit(p_48);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  t = term_r_8;
  s_48 = t;
  t = term_e_10;
  t_48 = t;
  t = term_f_10;
  t = m_4(s_48, t_48, t);
  return(t);
}
static ATerm i_4 (ATerm t_42, ATerm u_42, ATerm t)
{
  ATerm g_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_42, u_42);
      LocalPopChoice(i_10);
    }
  else
    {
      t = g_10;
      t = SSL_addr(t_42, u_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
  v_48 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_48;
      t = d_112(t);
    }
  else
    {
      ATerm a_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_48 = ATgetFirst((ATermList) t);
          x_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_48;
      t = foldr_2_0(d_112, e_112, t);
      a_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_48, a_49);
      t = e_112(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_z_8;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL;
  if(match_cons(t, sym__2))
    {
      c_59 = ATgetArgument(t, 0);
      d_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(c_59, d_59, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_49 = NULL,y_58 = NULL,z_58 = NULL;
  t = times_0_0(t);
  z_58 = t;
  t = SSL_explode_term(z_58);
  if(match_cons(t, sym__2))
    {
      ATerm j_10 = ATgetArgument(t, 0);
      y_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_58;
  t = foldr_2_0(t_2, u_2, t);
  d_49 = t;
  t = SSL_TicksToSeconds(d_49);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
  o_49 = t;
  if(match_cons(t, sym__2))
    {
      p_49 = ATgetArgument(t, 0);
      q_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_49;
        if((p_49 != t))
          {
            _fail(t);
          }
        t = o_49;
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        t = (ATerm) ATmakeAppl(sym__2, p_49, q_49);
        {
          ATerm o_10 = t;
          int p_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_49, q_49);
              LocalPopChoice(p_10);
            }
          else
            {
              t = o_10;
              t = SSL_gtr(p_49, q_49);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_49, q_49);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_122 (ATerm), ATerm t)
{
  ATerm u_49 = NULL;
  u_49 = t;
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
        t = term_r_8;
        x_49 = t;
        t = term_u_8;
        y_49 = t;
        t = term_v_8;
        t = m_4(x_49, y_49, t);
        w_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_49, term_c_6);
        t = geq_0_0(t);
        t = u_49;
        t = g_122(t);
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        t = u_49;
      }
  }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL,d_50 = NULL,e_50 = NULL;
  t = run_time_0_0(t);
  a_50 = t;
  t = term_y_5;
  t = whoami_0_0(t);
  b_50 = t;
  t = term_z_5;
  d_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_10), a_50), term_s_10), b_50);
  e_50 = t;
  t = SSL_printnl(d_50, e_50);
  t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_10), a_50), term_s_10), b_50));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_8;
  f_50 = t;
  t = SSL_exit(f_50);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL;
  q_50 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_50;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_50 = ATgetArgument(t, 0);
          {
            ATerm p_59 = NULL,p_12 = NULL;
            t = SSLgetAnnotations(q_50);
            p_59 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_50);
            p_12 = t;
            t = SSLsetAnnotations(p_12, p_59);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_50;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_124 (ATerm), ATerm t)
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_50 = NULL,j_50 = NULL;
      t = term_r_8;
      i_50 = t;
      t = term_w_10;
      j_50 = t;
      t = term_x_10;
      t = m_4(i_50, j_50, t);
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      t = fetch_1_0(w_2, t);
    }
  t = w_124(t);
  return(t);
}
static ATerm q_4 (ATerm k_60, ATerm l_60, ATerm m_60, ATerm t)
{
  ATerm s_50 = NULL;
  t = SSL_hashtable_put(m_60, k_60, l_60);
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_50);
  return(t);
}
static ATerm r_4 (ATerm n_60, ATerm o_60, ATerm t)
{
  t = SSL_hashtable_get(o_60, n_60);
  return(t);
}
ATerm lookup_table_0_1 (ATerm e_57, ATerm t)
{
  ATerm b_51 = NULL;
  t = table_hashtable_0_0(t);
  b_51 = t;
  {
    ATerm y_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_59 = NULL;
        t = b_51;
        if(match_cons(t, sym_Hashtable_1))
          {
            v_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_4(e_57, v_59, t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = y_10;
        {
          ATerm a_60 = NULL;
          t = e_57;
          t = table_create_0_0(t);
          t = b_51;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_60 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_4(e_57, a_60, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm s_60, ATerm t_60, ATerm t)
{
  ATerm e_51 = NULL;
  t = SSL_hashtable_create(s_60, t_60);
  e_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_51);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,j_51 = NULL,k_51 = NULL;
  f_51 = t;
  t = term_b_11;
  j_51 = t;
  t = term_e_11;
  k_51 = t;
  t = f_51;
  t = new_hashtable_0_2(j_51, k_51, t);
  g_51 = t;
  t = f_51;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(f_51, g_51, h_51, t);
  t = f_51;
  return(t);
}
static ATerm k_4 (ATerm p_60, ATerm q_60, ATerm t)
{
  ATerm l_51 = NULL;
  t = SSL_hashtable_remove(q_60, p_60);
  l_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_51);
  return(t);
}
static ATerm l_4 (ATerm u_60, ATerm t)
{
  ATerm m_51 = NULL;
  t = SSL_hashtable_destroy(u_60);
  m_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_51);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm n_51 = NULL;
  t = SSL_table_hashtable();
  n_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_51);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL;
  o_51 = t;
  t = table_hashtable_0_0(t);
  p_51 = t;
  t = lookup_table_0_1(o_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_4(r_51, t);
  t = p_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_4(o_51, q_51, t);
  t = o_51;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_51 = ATgetFirst((ATermList) t);
      u_51 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_51 = NULL,z_51 = NULL;
        static ATerm x_2 (ATerm t);
        static ATerm x_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_51)), not_null(z_51));
          return(t);
        }
        t = u_51;
        t = j_0(t);
        if(((y_51 != NULL) && (y_51 != t)))
          _fail(t);
        else
          y_51 = t;
        t = t_51;
        t = h_0(t);
        if(((z_51 != NULL) && (z_51 != t)))
          _fail(t);
        else
          z_51 = t;
        t = u_51;
        t = reverse_acc_2_0(h_0, x_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_5;
      t = j_0(t);
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL,u_12 = NULL;
  h_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_52);
  f_52 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_52);
  u_12 = t;
  t = SSLsetAnnotations(u_12, f_52);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm j_52 = NULL;
  j_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_52), term_h_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL;
  ATerm i_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_52 = NULL,e_52 = NULL;
      t = term_r_8;
      d_52 = t;
      t = term_e_10;
      e_52 = t;
      t = term_f_10;
      t = m_4(d_52, e_52, t);
      LocalPopChoice(k_11);
    }
  else
    {
      t = i_11;
      t = fetch_1_0(y_2, t);
    }
  t = term_l_11;
  t = echo_0_0(t);
  t = term_q_9;
  b_52 = t;
  t = term_r_9;
  c_52 = t;
  t = term_m_11;
  t = m_4(b_52, c_52, t);
  t = reverse_acc_2_0(_id, z_2, t);
  t = map_1_0(a_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL;
  l_52 = t;
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_52;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_11 = ATgetFirst((ATermList) t);
                ATerm s_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_52;
          }
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        t = (ATerm) ATinsert(ATempty, l_52);
      }
  }
  m_52 = t;
  t = term_r_7;
  n_52 = t;
  t = SSL_printnl(n_52, m_52);
  t = l_52;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL;
  t = term_r_8;
  r_52 = t;
  t = term_e_10;
  s_52 = t;
  t = term_f_10;
  t = m_4(r_52, s_52, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL;
  t = term_t_11;
  t_52 = t;
  t = term_y_5;
  u_52 = t;
  t = term_u_11;
  t = p_4(t_52, u_52, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_a_12;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL;
  t = term_t_11;
  x_52 = t;
  t = term_y_5;
  y_52 = t;
  t = term_u_11;
  t = p_4(x_52, y_52, t);
  t = term_b_12;
  v_52 = t;
  t = term_y_5;
  w_52 = t;
  t = term_c_12;
  t = p_4(v_52, w_52, t);
  t = term_d_12;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_h_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_3, k_3, l_3, t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      t = Option_3_0(n_3, q_3, r_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,d_13 = NULL;
  e_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_53 = ATgetFirst((ATermList) t);
      b_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_53);
  z_52 = t;
  t = a_53;
  t = p_83(t);
  c_53 = t;
  t = b_53;
  t = q_83(t);
  d_53 = t;
  t = (ATerm) ATinsert(CheckATermList(d_53), c_53);
  d_13 = t;
  t = SSLsetAnnotations(d_13, z_52);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_126 (ATerm), ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,o_53 = NULL,p_53 = NULL,h_13 = NULL;
  j_53 = t;
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_12;
        t = z_126(t);
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
      }
  }
  t = j_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_53 = ATgetFirst((ATermList) t);
      m_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_53);
  k_53 = t;
  t = term_e_10;
  p_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, l_53);
  t = p_4(p_53, l_53, t);
  t = m_53;
  {
    static ATerm z_53 (ATerm t);
    static ATerm z_53 (ATerm t)
    {
      ATerm t_12 = t;
      int v_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_12 = t;
          int x_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_53 = NULL;
              s_53 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_53;
              LocalPopChoice(x_12);
            }
          else
            {
              t = w_12;
              t = z_126(t);
              t = Cons_2_0(_id, z_53, t);
            }
          LocalPopChoice(v_12);
        }
      else
        {
          t = t_12;
          {
            ATerm v_53 = NULL,w_53 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_53 = ATgetFirst((ATermList) t);
                w_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_53), (ATerm) ATmakeAppl(sym_Undefined_1, v_53));
          }
        }
      return(t);
    }
    t = z_53(t);
  }
  o_53 = t;
  t = (ATerm) ATinsert(CheckATermList(o_53), (ATerm) ATmakeAppl(sym_Program_1, l_53));
  h_13 = t;
  t = SSLsetAnnotations(h_13, k_53);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm m_54 = NULL;
  m_54 = t;
  if(match_string(t, "--help"))
    {
      t = m_54;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_54;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_54;
        }
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL;
  t = term_w_10;
  n_54 = t;
  t = term_y_5;
  o_54 = t;
  t = term_y_12;
  t = p_4(n_54, o_54, t);
  t = term_z_12;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_a_13;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_126 (ATerm), ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL;
  g_54 = t;
  t = term_q_9;
  h_54 = t;
  t = term_b_13;
  t = lookup_table_0_1(h_54, t);
  l_54 = t;
  t = term_r_9;
  i_54 = t;
  t = (ATerm) ATempty;
  j_54 = t;
  t = l_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(i_54, j_54, k_54, t);
  t = g_54;
  {
    static ATerm s_3 (ATerm t);
    static ATerm s_3 (ATerm t)
    {
      ATerm e_13 = t;
      int f_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_126(t);
          LocalPopChoice(f_13);
        }
      else
        {
          t = e_13;
          {
            ATerm g_13 = t;
            int k_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_3, v_3, z_3, t);
                LocalPopChoice(k_13);
              }
            else
              {
                t = g_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_3, t);
  }
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_54 = NULL;
        z_54 = t;
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_60 = NULL;
              t = z_54;
              {
                ATerm q_13 = t;
                int s_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_60 = NULL,g_60 = NULL;
                    t = term_r_8;
                    f_60 = t;
                    t = term_w_10;
                    g_60 = t;
                    t = term_x_10;
                    t = m_4(f_60, g_60, t);
                    LocalPopChoice(s_13);
                  }
                else
                  {
                    t = q_13;
                    t = fetch_1_0(j_4, t);
                  }
              }
              t = z_54;
              t = default_system_usage_0_0(t);
              t = term_z_8;
              e_60 = t;
              t = SSL_exit(e_60);
              LocalPopChoice(o_13);
            }
          else
            {
              t = n_13;
              {
                ATerm r_60 = NULL,v_60 = NULL,w_60 = NULL;
                t = term_r_8;
                v_60 = t;
                t = term_t_11;
                w_60 = t;
                t = term_t_13;
                t = m_4(v_60, w_60, t);
                t = z_54;
                t = default_system_about_0_0(t);
                t = term_z_8;
                r_60 = t;
                t = SSL_exit(r_60);
              }
            }
        }
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        {
          ATerm u_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL;
              static ATerm u_4 (ATerm t);
              static ATerm u_4 (ATerm t)
              {
                ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL,p_13 = NULL;
                f_55 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_55 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_55);
                d_55 = t;
                t = e_55;
                if(((e_54 != NULL) && (e_54 != t)))
                  _fail(t);
                else
                  e_54 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_55);
                p_13 = t;
                t = SSLsetAnnotations(p_13, d_55);
                return(t);
              }
              t = fetch_1_0(u_4, t);
              t = term_z_5;
              b_55 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_54)), term_y_13);
              c_55 = t;
              t = SSL_printnl(b_55, c_55);
              t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_54)), term_y_13));
              t = default_system_usage_0_0(t);
              t = term_c_6;
              a_55 = t;
              t = SSL_exit(a_55);
              LocalPopChoice(x_13);
            }
          else
            {
              t = u_13;
            }
        }
      }
  }
  f_54 = t;
  t = term_q_9;
  t = table_destroy_0_0(t);
  t = f_54;
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm b_125 (ATerm), ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL;
  t = parse_options_1_0(y_124, t);
  k_55 = t;
  t = term_a_14;
  t = table_create_0_0(t);
  t = term_a_14;
  l_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_14, term_b_14, k_55);
  t = lookup_table_0_1(l_55, t);
  o_55 = t;
  t = term_b_14;
  m_55 = t;
  t = o_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(m_55, k_55, n_55, t);
  t = k_55;
  t = a_125(t);
  {
    ATerm c_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_124, t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = c_14;
        {
          ATerm g_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_125(t);
              t = report_success_0_0(t);
              LocalPopChoice(j_14);
            }
          else
            {
              t = g_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = if_verbose2_1_0(u_5, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL;
  t = term_l_14;
  p_55 = t;
  t = term_y_5;
  q_55 = t;
  t = term_o_14;
  t = p_4(p_55, q_55, t);
  t = term_p_14;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_q_14;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL;
  u_55 = t;
  t = term_r_8;
  y_55 = t;
  t = term_e_10;
  z_55 = t;
  t = term_f_10;
  t = m_4(y_55, z_55, t);
  v_55 = t;
  t = term_z_5;
  w_55 = t;
  t = (ATerm) ATinsert(ATempty, v_55);
  x_55 = t;
  t = SSL_printnl(w_55, x_55);
  t = u_55;
  return(t);
}
ATerm iowrap_3_0 (ATerm h_124 (ATerm), ATerm i_124 (ATerm), ATerm j_124 (ATerm), ATerm t)
{
  static ATerm v_4 (ATerm t);
  static ATerm q_5 (ATerm t);
  static ATerm v_4 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_124(t);
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        {
          ATerm t_14 = t;
          int u_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(u_14);
            }
          else
            {
              t = t_14;
              {
                ATerm v_14 = t;
                int w_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(w_14);
                  }
                else
                  {
                    t = v_14;
                    {
                      ATerm x_14 = t;
                      int y_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(r_5, s_5, t_5, t);
                          LocalPopChoice(y_14);
                        }
                      else
                        {
                          t = x_14;
                          {
                            ATerm z_14 = t;
                            int b_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(b_15);
                              }
                            else
                              {
                                t = z_14;
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
  static ATerm q_5 (ATerm t)
  {
    ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL;
    b_56 = t;
    {
      ATerm c_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm v_5 (ATerm t);
          static ATerm v_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_56 != NULL) && (a_56 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_56 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_5, t);
          LocalPopChoice(d_15);
        }
      else
        {
          t = c_15;
          t = term_e_15;
          a_56 = t;
        }
    }
    t = not_null(a_56);
    t = ReadFromFile_0_0(t);
    c_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_56, c_56);
    t = apply_strategy_1_0(h_124, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(v_4, j_124, p_5, q_5, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,k_14 = NULL;
  j_56 = t;
  if(match_cons(t, sym__2))
    {
      g_56 = ATgetArgument(t, 0);
      h_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_56);
  f_56 = t;
  t = h_56;
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_57 = NULL,z_60 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,i_14 = NULL,f_14 = NULL,d_14 = NULL,z_13 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            a_57 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_56);
        z_60 = t;
        t = a_57;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_61 = ATgetFirst((ATermList) t);
            d_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_57);
        b_61 = t;
        t = d_61;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_61 = ATgetFirst((ATermList) t);
            h_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_61);
        f_61 = t;
        t = g_61;
        if(match_cons(t, sym_Strategies_1))
          {
            k_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_61);
        j_61 = t;
        t = k_61;
        t = map_1_0(strategy_definition_0_0, t);
        l_61 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, l_61);
        z_13 = t;
        t = SSLsetAnnotations(z_13, j_61);
        m_61 = t;
        t = h_61;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_61), m_61);
        d_14 = t;
        t = SSLsetAnnotations(d_14, f_61);
        i_61 = t;
        t = (ATerm) ATinsert(CheckATermList(i_61), c_61);
        f_14 = t;
        t = SSLsetAnnotations(f_14, b_61);
        e_61 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, e_61);
        i_14 = t;
        t = SSLsetAnnotations(i_14, z_60);
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        t = debug_1_0(x_5, t);
      }
  }
  i_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_56, i_56);
  k_14 = t;
  t = SSLsetAnnotations(k_14, f_56);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_i_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(w_5, _fail, default_usage_0_0, t);
  return(t);
}
