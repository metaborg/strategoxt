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
ATerm debug_1_0 (ATerm e_108 (ATerm), ATerm t);
ATerm list_1_0 (ATerm t_108 (ATerm), ATerm t);
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
ATerm map_1_0 (ATerm p_108 (ATerm), ATerm t);
static ATerm a_4 (ATerm f_51, ATerm g_51, ATerm t);
static ATerm b_4 (ATerm k_35, ATerm l_35, ATerm t);
static ATerm d_4 (ATerm g_108 (ATerm), ATerm v_229, ATerm q_35, ATerm t);
static ATerm c_4 (ATerm g_35, ATerm h_35, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm d_126 (ATerm), ATerm t);
static ATerm n_42 (ATerm h_42, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_4 (ATerm m_35, ATerm t);
static ATerm f_4 (ATerm j_49, ATerm k_49, ATerm t);
static ATerm g_4 (ATerm h_51, ATerm i_51, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_44 (ATerm z_42, ATerm t);
static ATerm b_44 (ATerm d_43, ATerm e_43, ATerm f_43, ATerm t);
static ATerm c_44 (ATerm n_43, ATerm o_43, ATerm p_43, ATerm t);
static ATerm h_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_108 (ATerm), ATerm t);
static ATerm m_4 (ATerm f_58, ATerm g_58, ATerm t);
ATerm if_verbose2_1_0 (ATerm m_124 (ATerm), ATerm t);
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
static ATerm p_4 (ATerm d_70, ATerm e_70, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_4 (ATerm m_56, ATerm n_56, ATerm l_56, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm n_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_4 (ATerm v_54, ATerm w_54, ATerm t);
ATerm foldr_2_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_124 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm need_help_1_0 (ATerm b_127 (ATerm), ATerm t);
static ATerm q_4 (ATerm e_61, ATerm f_61, ATerm g_61, ATerm t);
static ATerm r_4 (ATerm h_61, ATerm i_61, ATerm t);
ATerm lookup_table_0_1 (ATerm y_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_61, ATerm n_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_4 (ATerm j_61, ATerm k_61, ATerm t);
static ATerm l_4 (ATerm o_61, ATerm t);
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
ATerm Cons_2_0 (ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_128 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm parse_options_1_0 (ATerm y_128 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_127 (ATerm), ATerm e_127 (ATerm), ATerm f_127 (ATerm), ATerm g_127 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm iowrap_3_0 (ATerm m_126 (ATerm), ATerm n_126 (ATerm), ATerm o_126 (ATerm), ATerm t);
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
ATerm debug_1_0 (ATerm e_108 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,n_1 = NULL,o_1 = NULL,q_1 = NULL;
  l_1 = t;
  t = e_108(t);
  n_1 = t;
  t = term_z_5;
  o_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_1), n_1);
  q_1 = t;
  t = SSL_printnl(o_1, q_1);
  t = l_1;
  return(t);
}
ATerm list_1_0 (ATerm t_108 (ATerm), ATerm t)
{
  t = map_1_0(t_108, t);
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
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,l_27 = NULL,k_5 = NULL,j_5 = NULL;
  l_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      a_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_27);
  z_26 = t;
  t = SSL_is_string(a_27);
  c_27 = t;
  t = b_27;
  if(match_cons(t, sym_FunType_2))
    {
      g_27 = ATgetArgument(t, 0);
      h_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_27);
  d_27 = t;
  t = g_27;
  t = list_1_0(_id, t);
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, i_27, h_27);
  j_5 = t;
  t = SSLsetAnnotations(j_5, d_27);
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_27, j_27);
  k_5 = t;
  t = SSLsetAnnotations(k_5, z_26);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,s_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,m_5 = NULL,l_5 = NULL;
  y_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      q_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_27);
  p_27 = t;
  t = SSL_is_string(q_27);
  u_27 = t;
  t = s_27;
  if(match_cons(t, sym_ConstType_1))
    {
      w_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_27);
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, w_27);
  l_5 = t;
  t = SSLsetAnnotations(l_5, v_27);
  x_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_27, x_27);
  m_5 = t;
  t = SSLsetAnnotations(m_5, p_27);
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
      ATerm l_28 = NULL,q_28 = NULL,s_28 = NULL,x_28 = NULL;
      q_28 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = q_28;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = q_28;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  s_28 = ATgetArgument(t, 0);
                  {
                    ATerm m_7 = NULL,o_7 = NULL,b_3 = NULL;
                    t = SSLgetAnnotations(q_28);
                    m_7 = t;
                    t = s_28;
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
                      s_28 = ATgetArgument(t, 0);
                      {
                        ATerm u_7 = NULL,w_7 = NULL,e_3 = NULL;
                        t = SSLgetAnnotations(q_28);
                        u_7 = t;
                        t = s_28;
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
                          s_28 = ATgetArgument(t, 0);
                          x_28 = ATgetArgument(t, 1);
                          {
                            ATerm d_8 = NULL,g_8 = NULL,h_8 = NULL,f_3 = NULL;
                            t = SSLgetAnnotations(q_28);
                            d_8 = t;
                            t = s_28;
                            t = strategy_expression_0_0(t);
                            g_8 = t;
                            t = x_28;
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
                              s_28 = ATgetArgument(t, 0);
                              x_28 = ATgetArgument(t, 1);
                              {
                                ATerm p_8 = NULL,s_8 = NULL,t_8 = NULL,m_3 = NULL;
                                t = SSLgetAnnotations(q_28);
                                p_8 = t;
                                t = s_28;
                                t = strategy_expression_0_0(t);
                                s_8 = t;
                                t = x_28;
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
                                  s_28 = ATgetArgument(t, 0);
                                  x_28 = ATgetArgument(t, 1);
                                  {
                                    ATerm b_9 = NULL,e_9 = NULL,f_9 = NULL,o_3 = NULL;
                                    t = SSLgetAnnotations(q_28);
                                    b_9 = t;
                                    t = s_28;
                                    t = strategy_expression_0_0(t);
                                    e_9 = t;
                                    t = x_28;
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
                                      s_28 = ATgetArgument(t, 0);
                                      x_28 = ATgetArgument(t, 1);
                                      l_28 = ATgetArgument(t, 2);
                                      {
                                        ATerm o_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,p_3 = NULL;
                                        t = SSLgetAnnotations(q_28);
                                        o_9 = t;
                                        t = s_28;
                                        t = strategy_expression_0_0(t);
                                        s_9 = t;
                                        t = x_28;
                                        t = strategy_expression_0_0(t);
                                        t_9 = t;
                                        t = l_28;
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
                                          s_28 = ATgetArgument(t, 0);
                                          x_28 = ATgetArgument(t, 1);
                                          {
                                            ATerm h_10 = NULL,k_10 = NULL,n_10 = NULL,x_3 = NULL;
                                            t = SSLgetAnnotations(q_28);
                                            h_10 = t;
                                            t = s_28;
                                            t = strategy_expression_0_0(t);
                                            k_10 = t;
                                            t = x_28;
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
                                              s_28 = ATgetArgument(t, 0);
                                              x_28 = ATgetArgument(t, 1);
                                              {
                                                ATerm z_10 = NULL,c_11 = NULL,g_11 = NULL,o_4 = NULL;
                                                t = SSLgetAnnotations(q_28);
                                                z_10 = t;
                                                t = s_28;
                                                t = strategy_expression_0_0(t);
                                                c_11 = t;
                                                t = x_28;
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
                                                  s_28 = ATgetArgument(t, 0);
                                                  x_28 = ATgetArgument(t, 1);
                                                  l_28 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm r_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,f_12 = NULL,g_12 = NULL,w_4 = NULL,t_4 = NULL;
                                                    t = SSLgetAnnotations(q_28);
                                                    r_11 = t;
                                                    t = s_28;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        z_11 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(s_28);
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
                                                    t = x_28;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    w_11 = t;
                                                    t = l_28;
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
                                                      s_28 = ATgetArgument(t, 0);
                                                      x_28 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm r_13 = NULL,v_13 = NULL,w_13 = NULL,x_4 = NULL;
                                                        t = SSLgetAnnotations(q_28);
                                                        r_13 = t;
                                                        t = SSL_is_string(s_28);
                                                        v_13 = t;
                                                        t = x_28;
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
                                                          s_28 = ATgetArgument(t, 0);
                                                          x_28 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm h_14 = NULL,m_14 = NULL,n_14 = NULL,y_4 = NULL;
                                                            t = SSLgetAnnotations(q_28);
                                                            h_14 = t;
                                                            t = SSL_is_int(s_28);
                                                            m_14 = t;
                                                            t = x_28;
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
                                                              s_28 = ATgetArgument(t, 0);
                                                              x_28 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm a_15 = NULL,f_15 = NULL,j_15 = NULL,z_4 = NULL;
                                                                t = SSLgetAnnotations(q_28);
                                                                a_15 = t;
                                                                t = SSL_is_string(s_28);
                                                                f_15 = t;
                                                                t = x_28;
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
                                                                  s_28 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm s_15 = NULL,v_15 = NULL,a_5 = NULL;
                                                                    t = SSLgetAnnotations(q_28);
                                                                    s_15 = t;
                                                                    t = s_28;
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
                                                                      s_28 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm j_16 = NULL,n_16 = NULL,b_5 = NULL;
                                                                        t = SSLgetAnnotations(q_28);
                                                                        j_16 = t;
                                                                        t = s_28;
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
                                                                          s_28 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm y_16 = NULL,a_17 = NULL,c_5 = NULL;
                                                                            t = SSLgetAnnotations(q_28);
                                                                            y_16 = t;
                                                                            t = s_28;
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
                                                                              s_28 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm i_17 = NULL,n_17 = NULL,d_5 = NULL;
                                                                                t = SSLgetAnnotations(q_28);
                                                                                i_17 = t;
                                                                                t = s_28;
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
                                                                                  s_28 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm v_17 = NULL,x_17 = NULL,e_5 = NULL;
                                                                                    t = SSLgetAnnotations(q_28);
                                                                                    v_17 = t;
                                                                                    t = s_28;
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
                                                                                      s_28 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm s_18 = NULL,u_18 = NULL,f_5 = NULL;
                                                                                        t = SSLgetAnnotations(q_28);
                                                                                        s_18 = t;
                                                                                        t = s_28;
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
                                                                                          s_28 = ATgetArgument(t, 0);
                                                                                          x_28 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm j_19 = NULL,o_19 = NULL,r_19 = NULL,g_5 = NULL;
                                                                                            t = SSLgetAnnotations(q_28);
                                                                                            j_19 = t;
                                                                                            t = s_28;
                                                                                            t = map_1_0(i_0, t);
                                                                                            o_19 = t;
                                                                                            t = x_28;
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
                                                                                              s_28 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm g_20 = NULL,j_20 = NULL,h_5 = NULL;
                                                                                                t = SSLgetAnnotations(q_28);
                                                                                                g_20 = t;
                                                                                                t = s_28;
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
                                                                                                  s_28 = ATgetArgument(t, 0);
                                                                                                  x_28 = ATgetArgument(t, 1);
                                                                                                  l_28 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm g_21 = NULL,n_21 = NULL,p_21 = NULL,q_21 = NULL,i_5 = NULL;
                                                                                                    t = SSLgetAnnotations(q_28);
                                                                                                    g_21 = t;
                                                                                                    t = SSL_is_string(s_28);
                                                                                                    n_21 = t;
                                                                                                    t = x_28;
                                                                                                    t = map_1_0(strategy_expression_0_0, t);
                                                                                                    p_21 = t;
                                                                                                    t = l_28;
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
                                                                                                      s_28 = ATgetArgument(t, 0);
                                                                                                      x_28 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(q_28);
                                                                                                  d_22 = t;
                                                                                                  t = s_28;
                                                                                                  t = map_1_0(n_0, t);
                                                                                                  g_22 = t;
                                                                                                  t = x_28;
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
  ATerm n_30 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,x_6 = NULL;
  h_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_31 = ATgetArgument(t, 0);
      f_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_31);
  n_30 = t;
  t = SSL_is_string(e_31);
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_31, f_31);
  x_6 = t;
  t = SSLsetAnnotations(x_6, n_30);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,y_6 = NULL;
  m_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      j_31 = ATgetArgument(t, 0);
      k_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_31);
  i_31 = t;
  t = SSL_is_string(j_31);
  l_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_31, k_31);
  y_6 = t;
  t = SSLsetAnnotations(y_6, i_31);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,j_34 = NULL,k_34 = NULL,t_34 = NULL,b_7 = NULL;
  t_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      h_34 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_34);
  g_34 = t;
  t = SSL_is_string(h_34);
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_34, j_34);
  b_7 = t;
  t = SSLsetAnnotations(b_7, g_34);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm u_34 = NULL,w_34 = NULL,d_35 = NULL,e_35 = NULL,i_35 = NULL,c_7 = NULL;
  i_35 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      w_34 = ATgetArgument(t, 0);
      d_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_35);
  u_34 = t;
  t = SSL_is_string(w_34);
  e_35 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_35, d_35);
  c_7 = t;
  t = SSLsetAnnotations(c_7, u_34);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm l_39 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,a_42 = NULL,f_7 = NULL;
  a_42 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_40 = ATgetArgument(t, 0);
      f_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_42);
  l_39 = t;
  t = SSL_is_string(e_40);
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_40, f_40);
  f_7 = t;
  t = SSLsetAnnotations(f_7, l_39);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,p_42 = NULL,q_42 = NULL,u_42 = NULL,g_7 = NULL;
  u_42 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      c_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_42);
  b_42 = t;
  t = SSL_is_string(c_42);
  q_42 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_42, p_42);
  g_7 = t;
  t = SSLsetAnnotations(g_7, b_42);
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
      ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
      a_39 = t;
      if(match_cons(t, sym_SDefT_4))
        {
          b_39 = ATgetArgument(t, 0);
          c_39 = ATgetArgument(t, 1);
          d_39 = ATgetArgument(t, 2);
          z_38 = ATgetArgument(t, 3);
          {
            ATerm n_29 = NULL,u_29 = NULL,v_29 = NULL,x_29 = NULL,z_29 = NULL,z_6 = NULL;
            t = SSLgetAnnotations(a_39);
            n_29 = t;
            t = b_39;
            {
              ATerm r_6 = t;
              int s_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_is_string(b_39);
                  LocalPopChoice(s_6);
                }
              else
                {
                  t = r_6;
                  {
                    ATerm l_30 = NULL,m_30 = NULL,x_31 = NULL,d_32 = NULL,e_32 = NULL,w_6 = NULL;
                    if(match_cons(t, sym_Mod_2))
                      {
                        l_30 = ATgetArgument(t, 0);
                        m_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(b_39);
                    x_31 = t;
                    t = SSL_is_string(l_30);
                    d_32 = t;
                    t = SSL_is_string(m_30);
                    e_32 = t;
                    t = (ATerm) ATmakeAppl(sym_Mod_2, d_32, e_32);
                    w_6 = t;
                    t = SSLsetAnnotations(w_6, x_31);
                  }
                }
            }
            u_29 = t;
            t = c_39;
            t = map_1_0(u_0, t);
            v_29 = t;
            t = d_39;
            t = map_1_0(w_0, t);
            x_29 = t;
            t = z_38;
            t = strategy_expression_0_0(t);
            z_29 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, u_29, v_29, x_29, z_29);
            z_6 = t;
            t = SSLsetAnnotations(z_6, n_29);
          }
        }
      else
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              b_39 = ATgetArgument(t, 0);
              c_39 = ATgetArgument(t, 1);
              d_39 = ATgetArgument(t, 2);
              z_38 = ATgetArgument(t, 3);
              {
                ATerm o_32 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,l_33 = NULL,d_7 = NULL;
                t = SSLgetAnnotations(a_39);
                o_32 = t;
                t = b_39;
                {
                  ATerm t_6 = t;
                  int u_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_is_string(b_39);
                      LocalPopChoice(u_6);
                    }
                  else
                    {
                      t = t_6;
                      {
                        ATerm d_34 = NULL,f_34 = NULL,b_36 = NULL,e_36 = NULL,m_36 = NULL,a_7 = NULL;
                        if(match_cons(t, sym_Mod_2))
                          {
                            d_34 = ATgetArgument(t, 0);
                            f_34 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(b_39);
                        b_36 = t;
                        t = SSL_is_string(d_34);
                        e_36 = t;
                        t = SSL_is_string(f_34);
                        m_36 = t;
                        t = (ATerm) ATmakeAppl(sym_Mod_2, e_36, m_36);
                        a_7 = t;
                        t = SSLsetAnnotations(a_7, b_36);
                      }
                    }
                }
                g_33 = t;
                t = c_39;
                t = map_1_0(y_0, t);
                h_33 = t;
                t = d_39;
                t = map_1_0(a_1, t);
                i_33 = t;
                t = z_38;
                t = strategy_expression_0_0(t);
                l_33 = t;
                t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, g_33, h_33, i_33, l_33);
                d_7 = t;
                t = SSLsetAnnotations(d_7, o_32);
              }
            }
          else
            {
              ATerm y_36 = NULL,d_37 = NULL,h_37 = NULL,i_37 = NULL,h_7 = NULL;
              if(match_cons(t, sym_ExtSDef_3))
                {
                  b_39 = ATgetArgument(t, 0);
                  c_39 = ATgetArgument(t, 1);
                  d_39 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_39);
              y_36 = t;
              t = b_39;
              {
                ATerm v_6 = t;
                int i_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_is_string(b_39);
                    LocalPopChoice(i_7);
                  }
                else
                  {
                    t = v_6;
                    {
                      ATerm z_37 = NULL,k_39 = NULL,q_44 = NULL,b_46 = NULL,n_46 = NULL,e_7 = NULL;
                      if(match_cons(t, sym_Mod_2))
                        {
                          z_37 = ATgetArgument(t, 0);
                          k_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(b_39);
                      q_44 = t;
                      t = SSL_is_string(z_37);
                      b_46 = t;
                      t = SSL_is_string(k_39);
                      n_46 = t;
                      t = (ATerm) ATmakeAppl(sym_Mod_2, b_46, n_46);
                      e_7 = t;
                      t = SSLsetAnnotations(e_7, q_44);
                    }
                  }
              }
              d_37 = t;
              t = c_39;
              t = map_1_0(b_1, t);
              h_37 = t;
              t = d_39;
              t = map_1_0(c_1, t);
              i_37 = t;
              t = (ATerm) ATmakeAppl(sym_ExtSDef_3, d_37, h_37, i_37);
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
ATerm map_1_0 (ATerm p_108 (ATerm), ATerm t)
{
  static ATerm y_39 (ATerm t);
  static ATerm y_39 (ATerm t)
  {
    ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
    v_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_39;
      }
    else
      {
        ATerm i_48 = NULL,h_49 = NULL,w_49 = NULL,d_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_39 = ATgetFirst((ATermList) t);
            x_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_39);
        i_48 = t;
        t = w_39;
        t = p_108(t);
        h_49 = t;
        t = x_39;
        t = y_39(t);
        w_49 = t;
        t = (ATerm) ATinsert(CheckATermList(w_49), h_49);
        d_11 = t;
        t = SSLsetAnnotations(d_11, i_48);
      }
    return(t);
  }
  t = y_39(t);
  return(t);
}
static ATerm a_4 (ATerm f_51, ATerm g_51, ATerm t)
{
  ATerm a_40 = NULL;
  t = SSL_fputc(f_51, g_51);
  a_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_40);
  return(t);
}
static ATerm b_4 (ATerm k_35, ATerm l_35, ATerm t)
{
  ATerm b_40 = NULL;
  t = SSL_write_term_to_stream_text(k_35, l_35);
  b_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_40);
  return(t);
}
static ATerm d_4 (ATerm g_108 (ATerm), ATerm v_229, ATerm q_35, ATerm t)
{
  ATerm c_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_229, term_j_7);
  t = h_4(t);
  c_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_40, q_35);
  t = g_108(t);
  t = fclose_0_0(t);
  t = q_35;
  return(t);
}
static ATerm c_4 (ATerm g_35, ATerm h_35, ATerm t)
{
  ATerm d_40 = NULL;
  t = SSL_write_term_to_stream_baf(g_35, h_35);
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_40);
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
  ATerm x_53 = NULL,y_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_7 = ATgetArgument(t, 0);
      if(match_cons(k_7, sym_Stream_1))
        {
          x_53 = ATgetArgument(k_7, 0);
        }
      else
        _fail(t);
      y_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_4(x_53, y_53, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_7 = ATgetArgument(t, 0);
      if(match_cons(l_7, sym_Stream_1))
        {
          k_57 = ATgetArgument(l_7, 0);
        }
      else
        _fail(t);
      l_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(k_57, l_57, t);
  h_57 = t;
  t = term_n_7;
  i_57 = t;
  t = h_57;
  if(match_cons(t, sym_Stream_1))
    {
      j_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_7, h_57);
  t = a_4(i_57, j_57, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,r_41 = NULL,s_41 = NULL,j_11 = NULL,f_11 = NULL;
  i_40 = t;
  if(match_cons(t, sym__2))
    {
      p_40 = ATgetArgument(t, 0);
      q_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_40);
  o_40 = t;
  t = p_40;
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
              if(((h_40 != NULL) && (h_40 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_40 = ATgetArgument(t, 0);
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
        h_40 = t;
      }
  }
  r_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_40, q_40);
  f_11 = t;
  t = SSLsetAnnotations(f_11, o_40);
  t = i_40;
  if(match_cons(t, sym__2))
    {
      k_40 = ATgetArgument(t, 0);
      l_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_40);
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_40, (ATerm) ATmakeAppl(sym__2, not_null(h_40), l_40));
  j_11 = t;
  t = SSLsetAnnotations(j_11, j_40);
  n_40 = t;
  if(match_cons(t, sym__2))
    {
      r_41 = ATgetArgument(t, 0);
      s_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_51 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL,q_11 = NULL;
        t = SSLgetAnnotations(n_40);
        w_51 = t;
        t = r_41;
        t = fetch_1_0(g_1, t);
        c_53 = t;
        t = s_41;
        if(match_cons(t, sym__2))
          {
            e_53 = ATgetArgument(t, 0);
            f_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_4(i_1, e_53, f_53, t);
        d_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_53, d_53);
        q_11 = t;
        t = SSLsetAnnotations(q_11, w_51);
        LocalPopChoice(t_7);
      }
    else
      {
        t = s_7;
        {
          ATerm b_56 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,v_11 = NULL;
          t = SSLgetAnnotations(n_40);
          b_56 = t;
          t = s_41;
          if(match_cons(t, sym__2))
            {
              f_57 = ATgetArgument(t, 0);
              g_57 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_4(j_1, f_57, g_57, t);
          e_57 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_41, e_57);
          v_11 = t;
          t = SSLsetAnnotations(v_11, b_56);
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
ATerm apply_strategy_1_0 (ATerm d_126 (ATerm), ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL;
  z_41 = t;
  t = dtime_0_0(t);
  t = z_41;
  t = d_126(t);
  y_41 = t;
  t = dtime_0_0(t);
  v_41 = t;
  t = y_41;
  if(match_cons(t, sym__2))
    {
      w_41 = ATgetArgument(t, 0);
      x_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_41), (ATerm) ATmakeAppl(sym_Runtime_1, v_41)), x_41);
  return(t);
}
static ATerm n_42 (ATerm h_42, ATerm t)
{
  t = SSL_fclose(h_42);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL;
  l_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_42 = ATgetArgument(t, 0);
      {
        ATerm v_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_42);
            LocalPopChoice(x_7);
          }
        else
          {
            t = v_7;
            t = n_42(l_42, t);
          }
      }
    }
  else
    {
      t = n_42(l_42, t);
    }
  return(t);
}
static ATerm e_4 (ATerm m_35, ATerm t)
{
  t = SSL_read_term_from_stream(m_35);
  return(t);
}
static ATerm f_4 (ATerm j_49, ATerm k_49, ATerm t)
{
  t = SSL_strcat(j_49, k_49);
  return(t);
}
static ATerm g_4 (ATerm h_51, ATerm i_51, ATerm t)
{
  ATerm o_42 = NULL;
  t = SSL_fopen(h_51, i_51);
  o_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_42);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_42 = NULL;
  t = SSL_stdin_stream();
  r_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_42);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_42 = NULL;
  t = SSL_stdout_stream();
  s_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_42);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_42 = NULL;
  t = SSL_stderr_stream();
  t_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_42);
  return(t);
}
static ATerm a_44 (ATerm z_42, ATerm t)
{
  ATerm a_43 = NULL;
  t = SSL_explode_term(z_42);
  if(match_cons(t, sym__2))
    {
      ATerm y_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_7 = ATgetArgument(t, 1);
        if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
          {
            a_43 = ATgetFirst((ATermList) z_7);
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
  t = a_43;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_43;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_43;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_43;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_44 (ATerm d_43, ATerm e_43, ATerm f_43, ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,l_43 = NULL,e_12 = NULL;
  t = SSLgetAnnotations(f_43);
  i_43 = t;
  t = d_43;
  if(match_cons(t, sym_Path_1))
    {
      l_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_43, e_43);
  e_12 = t;
  t = SSLsetAnnotations(e_12, i_43);
  if(match_cons(t, sym__2))
    {
      g_43 = ATgetArgument(t, 0);
      h_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(g_43, h_43, t);
  return(t);
}
static ATerm c_44 (ATerm n_43, ATerm o_43, ATerm p_43, ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,v_43 = NULL,i_12 = NULL;
  t = SSLgetAnnotations(p_43);
  s_43 = t;
  t = SSL_is_string(n_43);
  v_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_43, o_43);
  i_12 = t;
  t = SSLsetAnnotations(i_12, s_43);
  if(match_cons(t, sym__2))
    {
      q_43 = ATgetArgument(t, 0);
      r_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(q_43, r_43, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
  x_43 = t;
  if(match_cons(t, sym__2))
    {
      y_43 = ATgetArgument(t, 0);
      z_43 = ATgetArgument(t, 1);
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_44(x_43, t);
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
                  t = b_44(y_43, z_43, x_43, t);
                  LocalPopChoice(f_8);
                }
              else
                {
                  t = e_8;
                  t = c_44(y_43, z_43, x_43, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_44(x_43, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,l_44 = NULL;
  l_44 = t;
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_44, term_k_8);
        t = h_4(t);
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        {
          ATerm w_57 = NULL,x_57 = NULL;
          t = term_l_8;
          x_57 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_8, l_44);
          t = f_4(x_57, l_44, t);
          w_57 = t;
          t = SSL_perror(w_57);
          _fail(t);
        }
      }
  }
  f_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_4(g_44, t);
  e_44 = t;
  t = f_44;
  t = fclose_0_0(t);
  t = e_44;
  return(t);
}
ATerm fetch_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  static ATerm k_45 (ATerm t);
  static ATerm k_45 (ATerm t)
  {
    ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
    h_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_45 = ATgetFirst((ATermList) t);
        j_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_8 = t;
      int n_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_58 = NULL,i_58 = NULL,l_12 = NULL;
          t = SSLgetAnnotations(h_45);
          d_58 = t;
          t = i_45;
          t = z_108(t);
          i_58 = t;
          t = (ATerm) ATinsert(CheckATermList(j_45), i_58);
          l_12 = t;
          t = SSLsetAnnotations(l_12, d_58);
          LocalPopChoice(n_8);
        }
      else
        {
          t = m_8;
          {
            ATerm q_58 = NULL,t_58 = NULL,m_12 = NULL;
            t = SSLgetAnnotations(h_45);
            q_58 = t;
            t = j_45;
            t = k_45(t);
            t_58 = t;
            t = (ATerm) ATinsert(CheckATermList(t_58), i_45);
            m_12 = t;
            t = SSLsetAnnotations(m_12, q_58);
          }
        }
    }
    return(t);
  }
  t = k_45(t);
  return(t);
}
static ATerm m_4 (ATerm f_58, ATerm g_58, ATerm t)
{
  ATerm n_45 = NULL;
  t = lookup_table_0_1(f_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(g_58, n_45, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_124 (ATerm), ATerm t)
{
  ATerm q_45 = NULL;
  q_45 = t;
  {
    ATerm o_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
        t = term_r_8;
        t_45 = t;
        t = term_u_8;
        u_45 = t;
        t = term_v_8;
        t = m_4(t_45, u_45, t);
        s_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_45, term_w_8);
        t = geq_0_0(t);
        t = q_45;
        t = m_124(t);
        LocalPopChoice(q_8);
      }
    else
      {
        t = o_8;
        t = q_45;
      }
  }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm x_45 = NULL;
  x_45 = t;
  if(match_string(t, "-k"))
    {
      t = x_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_45;
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  y_45 = t;
  t = SSL_string_to_int(y_45);
  z_45 = t;
  t = term_x_8;
  a_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_8, z_45);
  t = p_4(a_46, z_45, t);
  t = y_45;
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
  ATerm c_46 = NULL;
  c_46 = t;
  if(match_string(t, "-S"))
    {
      t = c_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_46;
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL;
  t = term_u_8;
  d_46 = t;
  t = term_z_8;
  e_46 = t;
  t = term_a_9;
  t = p_4(d_46, e_46, t);
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
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
  f_46 = t;
  t = SSL_string_to_int(f_46);
  g_46 = t;
  t = term_u_8;
  h_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, g_46);
  t = p_4(h_46, g_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_46);
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
  ATerm i_46 = NULL,j_46 = NULL;
  t = term_h_9;
  i_46 = t;
  t = term_y_5;
  j_46 = t;
  t = term_i_9;
  t = p_4(i_46, j_46, t);
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
static ATerm p_4 (ATerm d_70, ATerm e_70, ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL;
  t = term_r_8;
  k_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_8, d_70, e_70);
  t = lookup_table_0_1(k_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(d_70, e_70, l_46, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_8, d_70, e_70);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
      t = term_y_5;
      t = g_0(t);
      r_46 = t;
      t = term_q_9;
      s_46 = t;
      t = term_r_9;
      t_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_9, term_r_9, r_46);
      t = n_4(s_46, t_46, r_46, t);
      _fail(t);
    }
  else
    {
      ATerm w_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_46 = ATgetFirst((ATermList) t);
          q_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_46;
      t = d_0(t);
      t = term_y_5;
      t = f_0(t);
      w_46 = t;
      t = (ATerm) ATinsert(CheckATermList(q_46), w_46);
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm y_46 = NULL;
  y_46 = t;
  if(match_string(t, "-o"))
    {
      t = y_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_46;
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL;
  z_46 = t;
  t = term_v_9;
  a_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_9, z_46);
  t = p_4(a_47, z_46, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_46);
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
static ATerm n_4 (ATerm m_56, ATerm n_56, ATerm l_56, ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  c_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_56, n_56);
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
        t = (ATerm) ATmakeAppl(sym__2, m_56, n_56);
        t = m_4(m_56, n_56, t);
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        t = (ATerm) ATempty;
      }
  }
  d_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_56, n_56, (ATerm) ATinsert(CheckATermList(d_47), l_56));
  t = lookup_table_0_1(m_56, t);
  g_47 = t;
  t = (ATerm) ATinsert(CheckATermList(d_47), l_56);
  e_47 = t;
  t = g_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(n_56, e_47, f_47, t);
  t = c_47;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
      t = term_y_5;
      t = o_0(t);
      r_47 = t;
      t = term_q_9;
      s_47 = t;
      t = term_r_9;
      t_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_9, term_r_9, r_47);
      t = n_4(s_47, t_47, r_47, t);
      _fail(t);
    }
  else
    {
      ATerm x_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_47 = ATgetFirst((ATermList) t);
          o_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_47 = ATgetFirst((ATermList) t);
          q_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_47;
      t = l_0(t);
      t = p_47;
      t = m_0(t);
      x_47 = t;
      t = (ATerm) ATinsert(CheckATermList(q_47), x_47);
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  if(match_string(t, "-i"))
    {
      t = z_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_47;
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL;
  a_48 = t;
  t = term_b_10;
  b_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_10, a_48);
  t = p_4(b_48, a_48, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_48);
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
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_5;
  t = whoami_0_0(t);
  c_48 = t;
  t = term_z_5;
  e_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_10), c_48);
  f_48 = t;
  t = SSL_printnl(e_48, f_48);
  t = term_c_6;
  d_48 = t;
  t = SSL_exit(d_48);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL;
  t = term_r_8;
  g_48 = t;
  t = term_e_10;
  h_48 = t;
  t = term_f_10;
  t = m_4(g_48, h_48, t);
  return(t);
}
static ATerm i_4 (ATerm v_54, ATerm w_54, ATerm t)
{
  ATerm g_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_54, w_54);
      LocalPopChoice(i_10);
    }
  else
    {
      t = g_10;
      t = SSL_addr(v_54, w_54);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
  j_48 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_48;
      t = o_115(t);
    }
  else
    {
      ATerm o_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_48 = ATgetFirst((ATermList) t);
          l_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_48;
      t = foldr_2_0(o_115, p_115, t);
      o_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_48, o_48);
      t = p_115(t);
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
  ATerm r_48 = NULL,y_58 = NULL,z_58 = NULL;
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
  r_48 = t;
  t = SSL_TicksToSeconds(r_48);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
  c_49 = t;
  if(match_cons(t, sym__2))
    {
      d_49 = ATgetArgument(t, 0);
      e_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_49;
        if((d_49 != t))
          {
            _fail(t);
          }
        t = c_49;
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        t = (ATerm) ATmakeAppl(sym__2, d_49, e_49);
        {
          ATerm o_10 = t;
          int p_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_49, e_49);
              LocalPopChoice(p_10);
            }
          else
            {
              t = o_10;
              t = SSL_gtr(d_49, e_49);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_49, e_49);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_124 (ATerm), ATerm t)
{
  ATerm i_49 = NULL;
  i_49 = t;
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL;
        t = term_r_8;
        n_49 = t;
        t = term_u_8;
        o_49 = t;
        t = term_v_8;
        t = m_4(n_49, o_49, t);
        m_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_49, term_c_6);
        t = geq_0_0(t);
        t = i_49;
        t = l_124(t);
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        t = i_49;
      }
  }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,t_49 = NULL,u_49 = NULL;
  t = run_time_0_0(t);
  q_49 = t;
  t = term_y_5;
  t = whoami_0_0(t);
  r_49 = t;
  t = term_z_5;
  t_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_10), q_49), term_s_10), r_49);
  u_49 = t;
  t = SSL_printnl(t_49, u_49);
  t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_10), q_49), term_s_10), r_49));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_8;
  v_49 = t;
  t = SSL_exit(v_49);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL;
  g_50 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = g_50;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_50 = ATgetArgument(t, 0);
          {
            ATerm p_59 = NULL,p_12 = NULL;
            t = SSLgetAnnotations(g_50);
            p_59 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_50);
            p_12 = t;
            t = SSLsetAnnotations(p_12, p_59);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = g_50;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_127 (ATerm), ATerm t)
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_49 = NULL,z_49 = NULL;
      t = term_r_8;
      y_49 = t;
      t = term_w_10;
      z_49 = t;
      t = term_x_10;
      t = m_4(y_49, z_49, t);
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      t = fetch_1_0(w_2, t);
    }
  t = b_127(t);
  return(t);
}
static ATerm q_4 (ATerm e_61, ATerm f_61, ATerm g_61, ATerm t)
{
  ATerm i_50 = NULL;
  t = SSL_hashtable_put(g_61, e_61, f_61);
  i_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_50);
  return(t);
}
static ATerm r_4 (ATerm h_61, ATerm i_61, ATerm t)
{
  t = SSL_hashtable_get(i_61, h_61);
  return(t);
}
ATerm lookup_table_0_1 (ATerm y_57, ATerm t)
{
  ATerm r_50 = NULL;
  t = table_hashtable_0_0(t);
  r_50 = t;
  {
    ATerm y_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_59 = NULL;
        t = r_50;
        if(match_cons(t, sym_Hashtable_1))
          {
            v_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_4(y_57, v_59, t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = y_10;
        {
          ATerm a_60 = NULL;
          t = y_57;
          t = table_create_0_0(t);
          t = r_50;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_60 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_4(y_57, a_60, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_61, ATerm n_61, ATerm t)
{
  ATerm u_50 = NULL;
  t = SSL_hashtable_create(m_61, n_61);
  u_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_50);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,z_50 = NULL,a_51 = NULL;
  v_50 = t;
  t = term_b_11;
  z_50 = t;
  t = term_e_11;
  a_51 = t;
  t = v_50;
  t = new_hashtable_0_2(z_50, a_51, t);
  w_50 = t;
  t = v_50;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(v_50, w_50, x_50, t);
  t = v_50;
  return(t);
}
static ATerm k_4 (ATerm j_61, ATerm k_61, ATerm t)
{
  ATerm b_51 = NULL;
  t = SSL_hashtable_remove(k_61, j_61);
  b_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_51);
  return(t);
}
static ATerm l_4 (ATerm o_61, ATerm t)
{
  ATerm c_51 = NULL;
  t = SSL_hashtable_destroy(o_61);
  c_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_51);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm d_51 = NULL;
  t = SSL_table_hashtable();
  d_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_51);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm e_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL;
  e_51 = t;
  t = table_hashtable_0_0(t);
  l_51 = t;
  t = lookup_table_0_1(e_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_4(n_51, t);
  t = l_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_4(e_51, m_51, t);
  t = e_51;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_51 = ATgetFirst((ATermList) t);
      q_51 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_51 = NULL,v_51 = NULL;
        static ATerm x_2 (ATerm t);
        static ATerm x_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_51)), not_null(v_51));
          return(t);
        }
        t = q_51;
        t = j_0(t);
        if(((u_51 != NULL) && (u_51 != t)))
          _fail(t);
        else
          u_51 = t;
        t = p_51;
        t = h_0(t);
        if(((v_51 != NULL) && (v_51 != t)))
          _fail(t);
        else
          v_51 = t;
        t = q_51;
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
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,u_12 = NULL;
  d_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_52);
  b_52 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_52);
  u_12 = t;
  t = SSLsetAnnotations(u_12, b_52);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm f_52 = NULL;
  f_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_52), term_h_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL;
  ATerm i_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_51 = NULL,a_52 = NULL;
      t = term_r_8;
      z_51 = t;
      t = term_e_10;
      a_52 = t;
      t = term_f_10;
      t = m_4(z_51, a_52, t);
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
  x_51 = t;
  t = term_r_9;
  y_51 = t;
  t = term_m_11;
  t = m_4(x_51, y_51, t);
  t = reverse_acc_2_0(_id, z_2, t);
  t = map_1_0(a_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,k_52 = NULL;
  h_52 = t;
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_52;
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
            t = h_52;
          }
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        t = (ATerm) ATinsert(ATempty, h_52);
      }
  }
  i_52 = t;
  t = term_r_7;
  k_52 = t;
  t = SSL_printnl(k_52, i_52);
  t = h_52;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL;
  t = term_r_8;
  o_52 = t;
  t = term_e_10;
  p_52 = t;
  t = term_f_10;
  t = m_4(o_52, p_52, t);
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
  ATerm q_52 = NULL,r_52 = NULL;
  t = term_t_11;
  q_52 = t;
  t = term_y_5;
  r_52 = t;
  t = term_u_11;
  t = p_4(q_52, r_52, t);
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
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL;
  t = term_t_11;
  u_52 = t;
  t = term_y_5;
  v_52 = t;
  t = term_u_11;
  t = p_4(u_52, v_52, t);
  t = term_b_12;
  s_52 = t;
  t = term_y_5;
  t_52 = t;
  t = term_c_12;
  t = p_4(s_52, t_52, t);
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
ATerm Cons_2_0 (ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,d_13 = NULL;
  b_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_52 = ATgetFirst((ATermList) t);
      y_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_53);
  w_52 = t;
  t = x_52;
  t = i_85(t);
  z_52 = t;
  t = y_52;
  t = j_85(t);
  a_53 = t;
  t = (ATerm) ATinsert(CheckATermList(a_53), z_52);
  d_13 = t;
  t = SSLsetAnnotations(d_13, w_52);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_128 (ATerm), ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,l_53 = NULL,m_53 = NULL,h_13 = NULL;
  g_53 = t;
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_12;
        t = z_128(t);
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
      }
  }
  t = g_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_53 = ATgetFirst((ATermList) t);
      j_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_53);
  h_53 = t;
  t = term_e_10;
  m_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, i_53);
  t = p_4(m_53, i_53, t);
  t = j_53;
  {
    static ATerm w_53 (ATerm t);
    static ATerm w_53 (ATerm t)
    {
      ATerm t_12 = t;
      int v_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_12 = t;
          int x_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_53 = NULL;
              p_53 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_53;
              LocalPopChoice(x_12);
            }
          else
            {
              t = w_12;
              t = z_128(t);
              t = Cons_2_0(_id, w_53, t);
            }
          LocalPopChoice(v_12);
        }
      else
        {
          t = t_12;
          {
            ATerm s_53 = NULL,t_53 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_53 = ATgetFirst((ATermList) t);
                t_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_53), (ATerm) ATmakeAppl(sym_Undefined_1, s_53));
          }
        }
      return(t);
    }
    t = w_53(t);
  }
  l_53 = t;
  t = (ATerm) ATinsert(CheckATermList(l_53), (ATerm) ATmakeAppl(sym_Program_1, i_53));
  h_13 = t;
  t = SSLsetAnnotations(h_13, h_53);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm j_54 = NULL;
  j_54 = t;
  if(match_string(t, "--help"))
    {
      t = j_54;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_54;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_54;
        }
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL;
  t = term_w_10;
  k_54 = t;
  t = term_y_5;
  l_54 = t;
  t = term_y_12;
  t = p_4(k_54, l_54, t);
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
ATerm parse_options_1_0 (ATerm y_128 (ATerm), ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  d_54 = t;
  t = term_q_9;
  e_54 = t;
  t = term_b_13;
  t = lookup_table_0_1(e_54, t);
  i_54 = t;
  t = term_r_9;
  f_54 = t;
  t = (ATerm) ATempty;
  g_54 = t;
  t = i_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(f_54, g_54, h_54, t);
  t = d_54;
  {
    static ATerm s_3 (ATerm t);
    static ATerm s_3 (ATerm t)
    {
      ATerm e_13 = t;
      int f_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_128(t);
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
        ATerm y_54 = NULL;
        y_54 = t;
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_60 = NULL;
              t = y_54;
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
              t = y_54;
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
                ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL;
                t = term_r_8;
                l_60 = t;
                t = term_t_11;
                m_60 = t;
                t = term_t_13;
                t = m_4(l_60, m_60, t);
                t = y_54;
                t = default_system_about_0_0(t);
                t = term_z_8;
                k_60 = t;
                t = SSL_exit(k_60);
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
              ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
              static ATerm u_4 (ATerm t);
              static ATerm u_4 (ATerm t)
              {
                ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL,p_13 = NULL;
                e_55 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_55 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_55);
                c_55 = t;
                t = d_55;
                if(((b_54 != NULL) && (b_54 != t)))
                  _fail(t);
                else
                  b_54 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_55);
                p_13 = t;
                t = SSLsetAnnotations(p_13, c_55);
                return(t);
              }
              t = fetch_1_0(u_4, t);
              t = term_z_5;
              a_55 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_54)), term_y_13);
              b_55 = t;
              t = SSL_printnl(a_55, b_55);
              t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_54)), term_y_13));
              t = default_system_usage_0_0(t);
              t = term_c_6;
              z_54 = t;
              t = SSL_exit(z_54);
              LocalPopChoice(x_13);
            }
          else
            {
              t = u_13;
            }
        }
      }
  }
  c_54 = t;
  t = term_q_9;
  t = table_destroy_0_0(t);
  t = c_54;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_127 (ATerm), ATerm e_127 (ATerm), ATerm f_127 (ATerm), ATerm g_127 (ATerm), ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL;
  t = parse_options_1_0(d_127, t);
  j_55 = t;
  t = term_a_14;
  t = table_create_0_0(t);
  t = term_a_14;
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_14, term_b_14, j_55);
  t = lookup_table_0_1(k_55, t);
  n_55 = t;
  t = term_b_14;
  l_55 = t;
  t = n_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(l_55, j_55, m_55, t);
  t = j_55;
  t = f_127(t);
  {
    ATerm c_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_127, t);
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
              t = g_127(t);
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
  ATerm o_55 = NULL,p_55 = NULL;
  t = term_l_14;
  o_55 = t;
  t = term_y_5;
  p_55 = t;
  t = term_o_14;
  t = p_4(o_55, p_55, t);
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
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL;
  q_55 = t;
  t = term_r_8;
  u_55 = t;
  t = term_e_10;
  v_55 = t;
  t = term_f_10;
  t = m_4(u_55, v_55, t);
  r_55 = t;
  t = term_z_5;
  s_55 = t;
  t = (ATerm) ATinsert(ATempty, r_55);
  t_55 = t;
  t = SSL_printnl(s_55, t_55);
  t = q_55;
  return(t);
}
ATerm iowrap_3_0 (ATerm m_126 (ATerm), ATerm n_126 (ATerm), ATerm o_126 (ATerm), ATerm t)
{
  static ATerm v_4 (ATerm t);
  static ATerm q_5 (ATerm t);
  static ATerm v_4 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_126(t);
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
    ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL;
    x_55 = t;
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
                if(((w_55 != NULL) && (w_55 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_55 = ATgetArgument(t, 0);
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
          w_55 = t;
        }
    }
    t = not_null(w_55);
    t = ReadFromFile_0_0(t);
    y_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_55, y_55);
    t = apply_strategy_1_0(m_126, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(v_4, o_126, p_5, q_5, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,k_14 = NULL;
  g_56 = t;
  if(match_cons(t, sym__2))
    {
      d_56 = ATgetArgument(t, 0);
      e_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_56);
  c_56 = t;
  t = e_56;
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_57 = NULL,p_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,i_14 = NULL,f_14 = NULL,d_14 = NULL,z_13 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            a_57 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_56);
        p_60 = t;
        t = a_57;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_60 = ATgetFirst((ATermList) t);
            t_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_57);
        r_60 = t;
        t = t_60;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_60 = ATgetFirst((ATermList) t);
            x_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_60);
        v_60 = t;
        t = w_60;
        if(match_cons(t, sym_Strategies_1))
          {
            a_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_60);
        z_60 = t;
        t = a_61;
        t = map_1_0(strategy_definition_0_0, t);
        b_61 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, b_61);
        z_13 = t;
        t = SSLsetAnnotations(z_13, z_60);
        c_61 = t;
        t = x_60;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(x_60), c_61);
        d_14 = t;
        t = SSLsetAnnotations(d_14, v_60);
        y_60 = t;
        t = (ATerm) ATinsert(CheckATermList(y_60), s_60);
        f_14 = t;
        t = SSLsetAnnotations(f_14, r_60);
        u_60 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, u_60);
        i_14 = t;
        t = SSLsetAnnotations(i_14, p_60);
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        t = debug_1_0(x_5, t);
      }
  }
  f_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_56, f_56);
  k_14 = t;
  t = SSLsetAnnotations(k_14, c_56);
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
