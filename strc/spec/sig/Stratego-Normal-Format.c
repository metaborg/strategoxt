#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_amb_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_BuildDefault_1;
static Symbol sym_As_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
static Symbol sym_Str_1;
static Symbol sym_Real_1;
static Symbol sym_Int_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_Mod_2;
static Symbol sym_SVar_1;
static Symbol sym_GChoice_2;
static Symbol sym_Choice_2;
static Symbol sym_Thread_1;
static Symbol sym_All_1;
static Symbol sym_One_1;
static Symbol sym_Some_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Test_1;
static Symbol sym_Where_1;
static Symbol sym_Not_1;
static Symbol sym_Rec_2;
static Symbol sym_GuardedLChoice_3;
static Symbol sym_LGChoice_2;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_Scope_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_Let_2;
static Symbol sym_Id_0;
static Symbol sym_Fail_0;
static Symbol sym_VarDec_2;
static Symbol sym_ExtSDef_3;
static Symbol sym_ExtSDefInl_4;
static Symbol sym_SDefT_4;
static Symbol sym_FunType_2;
static Symbol sym_ConstType_1;
static Symbol sym_Cong_2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_BuildDefault_1;
static Symbol sym_As_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
static Symbol sym_Str_1;
static Symbol sym_Real_1;
static Symbol sym_Int_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_Mod_2;
static Symbol sym_SVar_1;
static Symbol sym_GChoice_2;
static Symbol sym_Choice_2;
static Symbol sym_Thread_1;
static Symbol sym_All_1;
static Symbol sym_One_1;
static Symbol sym_Some_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Test_1;
static Symbol sym_Where_1;
static Symbol sym_Not_1;
static Symbol sym_Rec_2;
static Symbol sym_GuardedLChoice_3;
static Symbol sym_LGChoice_2;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_Scope_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_Let_2;
static Symbol sym_Id_0;
static Symbol sym_Fail_0;
static Symbol sym_VarDec_2;
static Symbol sym_ExtSDef_3;
static Symbol sym_ExtSDefInl_4;
static Symbol sym_SDefT_4;
static Symbol sym_FunType_2;
static Symbol sym_ConstType_1;
static Symbol sym_Defined_0;
static Symbol sym_Defined_1;
static Symbol sym_Defined_2;
static Symbol sym_Defined_3;
static Symbol sym_Defined_4;
static Symbol sym_Defined_5;
static Symbol sym_Defined_6;
static Symbol sym_Defined_7;
static Symbol sym_Defined_8;
static Symbol sym_Defined_9;
static Symbol sym_Defined_10;
static Symbol sym_Undefined_0;
static Symbol sym_Scopes_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Some_1;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Hashtable_1;
static Symbol sym_Var_1;
static Symbol sym_Path_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
static ATerm term_w_17;
static ATerm term_v_17;
static ATerm term_n_17;
static ATerm term_m_17;
static ATerm term_l_17;
static ATerm term_x_16;
static ATerm term_w_16;
static ATerm term_v_16;
static ATerm term_s_16;
static ATerm term_r_16;
static ATerm term_d_16;
static ATerm term_c_16;
static ATerm term_b_16;
static ATerm term_a_16;
static ATerm term_z_15;
static ATerm term_t_15;
static ATerm term_m_15;
static ATerm term_l_15;
static ATerm term_k_15;
static ATerm term_j_15;
static ATerm term_i_15;
static ATerm term_h_15;
static ATerm term_g_15;
static ATerm term_d_15;
static ATerm term_c_15;
static ATerm term_x_14;
static ATerm term_w_14;
static ATerm term_v_14;
static ATerm term_l_14;
static ATerm term_k_14;
static ATerm term_z_13;
static ATerm term_u_13;
static ATerm term_t_13;
static ATerm term_s_13;
static ATerm term_r_13;
static ATerm term_p_13;
static ATerm term_o_13;
static ATerm term_n_13;
static ATerm term_m_13;
static ATerm term_l_13;
static ATerm term_k_13;
static ATerm term_j_13;
static ATerm term_i_13;
static ATerm term_f_13;
static ATerm term_c_13;
static ATerm term_b_13;
static ATerm term_a_13;
static ATerm term_z_12;
static ATerm term_m_12;
static ATerm term_f_12;
static ATerm term_c_12;
static ATerm term_a_12;
static ATerm term_y_11;
static ATerm term_x_11;
static ATerm term_u_11;
static ATerm term_t_11;
static ATerm term_x_10;
static ATerm term_w_10;
static ATerm term_t_10;
static ATerm term_p_10;
static ATerm term_o_10;
static ATerm term_n_10;
static ATerm term_j_10;
static ATerm term_g_10;
static ATerm term_u_9;
static ATerm term_j_9;
static ATerm term_q_8;
static ATerm term_f_8;
static ATerm term_l_7;
static ATerm term_k_7;
static ATerm term_j_7;
static ATerm term_i_7;
static ATerm term_h_7;
static ATerm term_g_7;
static ATerm term_f_7;
static ATerm term_d_7;
static ATerm term_c_7;
static ATerm term_b_7;
static ATerm term_y_6;
static ATerm term_w_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("    - ", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentSDef", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_b_7);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("error: ambiguity in the definition of ", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol(". Alternatives: ", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("error: ambiguity in specification. Alternatives: ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("amb-error", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym__2, term_i_7, term_j_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_o_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_w_10);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_x_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_c_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_b_13);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_l_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_b_7);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_k_13);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_b_7);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_j_15, term_b_7);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__2, term_z_15, term_b_7);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__3, term_a_13, term_b_13, (ATerm) ATempty);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_z_15);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_g_15);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_b_7);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_i_7);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: not a stratego-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm b_5 (ATerm s_64, ATerm t_64, ATerm t);
ATerm debug_1_0 (ATerm e_121 (ATerm), ATerm t);
static ATerm l_4 (ATerm k_63, ATerm l_63, ATerm t);
static ATerm c_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm amb_error_0_0 (ATerm t);
ATerm list_1_0 (ATerm s_121 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
ATerm term_expression_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm m_4 (ATerm f_110 (ATerm), ATerm a_24, ATerm y_23, ATerm t);
static ATerm n_4 (ATerm e_63, ATerm f_63, ATerm t);
ATerm end_scope_1_0 (ATerm c_110 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_113 (ATerm), ATerm a_114 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm b_110 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_121 (ATerm), ATerm t);
static ATerm o_4 (ATerm n_57, ATerm o_57, ATerm t);
static ATerm p_4 (ATerm u_41, ATerm v_41, ATerm t);
static ATerm r_4 (ATerm g_121 (ATerm), ATerm l_278, ATerm a_42, ATerm t);
static ATerm q_4 (ATerm q_41, ATerm r_41, ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm output_1_0 (ATerm v_141 (ATerm), ATerm t);
static ATerm c_44 (ATerm w_43, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_4 (ATerm w_41, ATerm t);
static ATerm t_4 (ATerm t_55, ATerm u_55, ATerm t);
static ATerm u_4 (ATerm p_57, ATerm q_57, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_45 (ATerm m_44, ATerm t);
static ATerm o_45 (ATerm q_44, ATerm r_44, ATerm s_44, ATerm t);
static ATerm p_45 (ATerm a_45, ATerm b_45, ATerm c_45, ATerm t);
static ATerm v_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm w_141 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm default_system_usage_2_0 (ATerm u_143 (ATerm), ATerm v_143 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_5 (ATerm t_77, ATerm u_77, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_5 (ATerm z_62, ATerm a_63, ATerm y_62, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_4 (ATerm i_61, ATerm j_61, ATerm t);
ATerm foldr_2_0 (ATerm l_128 (ATerm), ATerm m_128 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_138 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm f_5 (ATerm o_67, ATerm p_67, ATerm q_67, ATerm t);
static ATerm g_5 (ATerm r_67, ATerm s_67, ATerm t);
ATerm lookup_table_0_1 (ATerm l_64, ATerm t);
ATerm new_hashtable_0_2 (ATerm w_67, ATerm x_67, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_4 (ATerm t_67, ATerm u_67, ATerm t);
static ATerm z_4 (ATerm y_67, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_121 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_143 (ATerm), ATerm t);
static ATerm i_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm parse_options_3_0 (ATerm m_143 (ATerm), ATerm n_143 (ATerm), ATerm o_143 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm p_141 (ATerm), ATerm q_141 (ATerm), ATerm r_141 (ATerm), ATerm s_141 (ATerm), ATerm t_141 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm b_5 (ATerm s_64, ATerm t_64, ATerm t)
{
  ATerm a_0 = NULL;
  t = lookup_table_0_1(s_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_5(t_64, a_0, t);
  return(t);
}
ATerm debug_1_0 (ATerm e_121 (ATerm), ATerm t)
{
  ATerm e_0 = NULL,i_0 = NULL,k_0 = NULL,q_0 = NULL;
  e_0 = t;
  t = e_121(t);
  i_0 = t;
  t = term_w_6;
  k_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_0), i_0);
  q_0 = t;
  t = SSL_printnl(k_0, q_0);
  t = e_0;
  return(t);
}
static ATerm l_4 (ATerm k_63, ATerm l_63, ATerm t)
{
  ATerm t_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_63, l_63);
  t = b_5(k_63, l_63, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_0 = ATgetFirst((ATermList) t);
      {
        ATerm x_6 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_0;
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = debug_1_0(s_0, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_y_6;
  return(t);
}
ATerm amb_error_0_0 (ATerm t)
{
  ATerm z_0 = NULL,b_1 = NULL,e_1 = NULL,f_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,o_0 = NULL;
  k_1 = t;
  if(match_cons(t, sym_amb_1))
    {
      i_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_1);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, i_1);
  o_0 = t;
  t = SSLsetAnnotations(o_0, h_1);
  j_1 = t;
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 = NULL,h_0 = NULL,m_0 = NULL;
        t = term_b_7;
        h_0 = t;
        t = term_c_7;
        m_0 = t;
        t = term_d_7;
        t = l_4(m_0, h_0, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_7 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_7) != ATmakeSymbol("b_0", 0, ATtrue)))
              _fail(t);
            l_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_is_string(l_1);
        z_0 = t;
        t = j_1;
        LocalPopChoice(a_7);
        {
          ATerm r_1 = NULL,t_1 = NULL,w_1 = NULL,x_1 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_7), z_0), term_f_7);
          x_1 = t;
          t = SSL_concat_strings(x_1);
          r_1 = t;
          t = term_w_6;
          t_1 = t;
          t = (ATerm) ATinsert(ATempty, r_1);
          w_1 = t;
          t = SSL_printnl(t_1, w_1);
          t = j_1;
        }
      }
    else
      {
        t = z_6;
        {
          ATerm c_2 = NULL,g_2 = NULL,i_2 = NULL,j_2 = NULL;
          t = (ATerm) ATinsert(ATempty, term_h_7);
          j_2 = t;
          t = SSL_concat_strings(j_2);
          c_2 = t;
          t = term_w_6;
          g_2 = t;
          t = (ATerm) ATinsert(ATempty, c_2);
          i_2 = t;
          t = SSL_printnl(g_2, i_2);
          t = j_1;
        }
      }
  }
  if(match_cons(t, sym_amb_1))
    {
      b_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_1;
  t = map_1_0(c_0, t);
  t = term_i_7;
  e_1 = t;
  t = term_j_7;
  f_1 = t;
  t = term_k_7;
  t = e_5(e_1, f_1, t);
  t = j_1;
  return(t);
}
ATerm list_1_0 (ATerm s_121 (ATerm), ATerm t)
{
  t = map_1_0(s_121, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_7 = NULL,v_7 = NULL,y_7 = NULL;
      u_7 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = u_7;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              v_7 = ATgetArgument(t, 0);
              {
                ATerm x_0 = NULL,a_1 = NULL,v_0 = NULL;
                t = SSLgetAnnotations(u_7);
                x_0 = t;
                t = SSL_is_string(v_7);
                a_1 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, a_1);
                v_0 = t;
                t = SSLsetAnnotations(v_0, x_0);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  v_7 = ATgetArgument(t, 0);
                  {
                    ATerm o_1 = NULL,q_1 = NULL,w_2 = NULL;
                    t = SSLgetAnnotations(u_7);
                    o_1 = t;
                    t = SSL_is_int(v_7);
                    q_1 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, q_1);
                    w_2 = t;
                    t = SSLsetAnnotations(w_2, o_1);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      v_7 = ATgetArgument(t, 0);
                      {
                        ATerm a_2 = NULL,d_2 = NULL,x_2 = NULL;
                        t = SSLgetAnnotations(u_7);
                        a_2 = t;
                        t = SSL_is_real(v_7);
                        d_2 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, d_2);
                        x_2 = t;
                        t = SSLsetAnnotations(x_2, a_2);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          v_7 = ATgetArgument(t, 0);
                          {
                            ATerm m_2 = NULL,o_2 = NULL,y_2 = NULL;
                            t = SSLgetAnnotations(u_7);
                            m_2 = t;
                            t = SSL_is_string(v_7);
                            o_2 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, o_2);
                            y_2 = t;
                            t = SSLsetAnnotations(y_2, m_2);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              v_7 = ATgetArgument(t, 0);
                              {
                                ATerm u_2 = NULL,b_3 = NULL,z_2 = NULL;
                                t = SSLgetAnnotations(u_7);
                                u_2 = t;
                                t = v_7;
                                t = term_expression_0_0(t);
                                b_3 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, b_3);
                                z_2 = t;
                                t = SSLsetAnnotations(z_2, u_2);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  v_7 = ATgetArgument(t, 0);
                                  y_7 = ATgetArgument(t, 1);
                                  {
                                    ATerm l_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,w_3 = NULL,x_3 = NULL,f_3 = NULL,a_3 = NULL;
                                    t = SSLgetAnnotations(u_7);
                                    l_3 = t;
                                    t = v_7;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        u_3 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(v_7);
                                    t_3 = t;
                                    t = SSL_is_string(u_3);
                                    w_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, w_3);
                                    a_3 = t;
                                    t = SSLsetAnnotations(a_3, t_3);
                                    x_3 = t;
                                    t = y_7;
                                    t = term_expression_0_0(t);
                                    s_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, x_3, s_3);
                                    f_3 = t;
                                    t = SSLsetAnnotations(f_3, l_3);
                                  }
                                }
                              else
                                {
                                  ATerm i_4 = NULL,x_4 = NULL,a_5 = NULL,g_3 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      v_7 = ATgetArgument(t, 0);
                                      y_7 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(u_7);
                                  i_4 = t;
                                  t = SSL_is_string(v_7);
                                  x_4 = t;
                                  t = y_7;
                                  t = map_1_0(term_expression_0_0, t);
                                  a_5 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, x_4, a_5);
                                  g_3 = t;
                                  t = SSLsetAnnotations(g_3, i_4);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      {
        ATerm o_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = amb_error_0_0(t);
            LocalPopChoice(z_7);
          }
        else
          {
            t = o_7;
            t = debug_1_0(u_0, t);
          }
      }
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  t = SSL_is_string(v_21);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,g_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,n_24 = NULL,o_24 = NULL,r_24 = NULL,k_6 = NULL;
  r_24 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      d_24 = ATgetArgument(t, 0);
      e_24 = ATgetArgument(t, 1);
      g_24 = ATgetArgument(t, 2);
      i_24 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_24);
  c_24 = t;
  t = SSL_is_string(d_24);
  j_24 = t;
  t = e_24;
  t = map_1_0(c_1, t);
  k_24 = t;
  t = g_24;
  t = map_1_0(d_1, t);
  n_24 = t;
  t = i_24;
  t = strategy_expression_0_0(t);
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, j_24, k_24, n_24, o_24);
  k_6 = t;
  t = SSLsetAnnotations(k_6, c_24);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,h_6 = NULL,g_6 = NULL;
  c_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      q_26 = ATgetArgument(t, 0);
      u_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_27);
  p_26 = t;
  t = SSL_is_string(q_26);
  v_26 = t;
  t = u_26;
  if(match_cons(t, sym_FunType_2))
    {
      x_26 = ATgetArgument(t, 0);
      z_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_26);
  w_26 = t;
  t = x_26;
  t = list_1_0(_id, t);
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, a_27, z_26);
  g_6 = t;
  t = SSLsetAnnotations(g_6, w_26);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_26, b_27);
  h_6 = t;
  t = SSLsetAnnotations(h_6, p_26);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,j_6 = NULL,i_6 = NULL;
  q_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_27);
  h_27 = t;
  t = SSL_is_string(i_27);
  m_27 = t;
  t = j_27;
  if(match_cons(t, sym_ConstType_1))
    {
      o_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_27);
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, o_27);
  i_6 = t;
  t = SSLsetAnnotations(i_6, n_27);
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_27, p_27);
  j_6 = t;
  t = SSLsetAnnotations(j_6, h_27);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_29 = NULL,t_29 = NULL,v_29 = NULL,w_29 = NULL;
      t_29 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = t_29;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = t_29;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  v_29 = ATgetArgument(t, 0);
                  {
                    ATerm k_8 = NULL,m_8 = NULL,h_4 = NULL;
                    t = SSLgetAnnotations(t_29);
                    k_8 = t;
                    t = v_29;
                    t = strategy_expression_0_0(t);
                    m_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, m_8);
                    h_4 = t;
                    t = SSLsetAnnotations(h_4, k_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      v_29 = ATgetArgument(t, 0);
                      {
                        ATerm s_8 = NULL,u_8 = NULL,d_5 = NULL;
                        t = SSLgetAnnotations(t_29);
                        s_8 = t;
                        t = v_29;
                        t = strategy_expression_0_0(t);
                        u_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, u_8);
                        d_5 = t;
                        t = SSLsetAnnotations(d_5, s_8);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          v_29 = ATgetArgument(t, 0);
                          w_29 = ATgetArgument(t, 1);
                          {
                            ATerm b_9 = NULL,e_9 = NULL,f_9 = NULL,j_5 = NULL;
                            t = SSLgetAnnotations(t_29);
                            b_9 = t;
                            t = v_29;
                            t = strategy_expression_0_0(t);
                            e_9 = t;
                            t = w_29;
                            t = strategy_expression_0_0(t);
                            f_9 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, e_9, f_9);
                            j_5 = t;
                            t = SSLsetAnnotations(j_5, b_9);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              v_29 = ATgetArgument(t, 0);
                              w_29 = ATgetArgument(t, 1);
                              {
                                ATerm n_9 = NULL,q_9 = NULL,r_9 = NULL,k_5 = NULL;
                                t = SSLgetAnnotations(t_29);
                                n_9 = t;
                                t = v_29;
                                t = strategy_expression_0_0(t);
                                q_9 = t;
                                t = w_29;
                                t = strategy_expression_0_0(t);
                                r_9 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, q_9, r_9);
                                k_5 = t;
                                t = SSLsetAnnotations(k_5, n_9);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  v_29 = ATgetArgument(t, 0);
                                  w_29 = ATgetArgument(t, 1);
                                  {
                                    ATerm z_9 = NULL,c_10 = NULL,d_10 = NULL,n_5 = NULL;
                                    t = SSLgetAnnotations(t_29);
                                    z_9 = t;
                                    t = v_29;
                                    t = strategy_expression_0_0(t);
                                    c_10 = t;
                                    t = w_29;
                                    t = strategy_expression_0_0(t);
                                    d_10 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, c_10, d_10);
                                    n_5 = t;
                                    t = SSLsetAnnotations(n_5, z_9);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      v_29 = ATgetArgument(t, 0);
                                      w_29 = ATgetArgument(t, 1);
                                      q_29 = ATgetArgument(t, 2);
                                      {
                                        ATerm m_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,o_5 = NULL;
                                        t = SSLgetAnnotations(t_29);
                                        m_10 = t;
                                        t = v_29;
                                        t = strategy_expression_0_0(t);
                                        q_10 = t;
                                        t = w_29;
                                        t = strategy_expression_0_0(t);
                                        r_10 = t;
                                        t = q_29;
                                        t = strategy_expression_0_0(t);
                                        s_10 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, q_10, r_10, s_10);
                                        o_5 = t;
                                        t = SSLsetAnnotations(o_5, m_10);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          v_29 = ATgetArgument(t, 0);
                                          w_29 = ATgetArgument(t, 1);
                                          {
                                            ATerm e_11 = NULL,r_11 = NULL,s_11 = NULL,p_5 = NULL;
                                            t = SSLgetAnnotations(t_29);
                                            e_11 = t;
                                            t = v_29;
                                            t = strategy_expression_0_0(t);
                                            r_11 = t;
                                            t = w_29;
                                            t = strategy_expression_0_0(t);
                                            s_11 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, r_11, s_11);
                                            p_5 = t;
                                            t = SSLsetAnnotations(p_5, e_11);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              v_29 = ATgetArgument(t, 0);
                                              w_29 = ATgetArgument(t, 1);
                                              {
                                                ATerm o_12 = NULL,x_12 = NULL,y_12 = NULL,q_5 = NULL;
                                                t = SSLgetAnnotations(t_29);
                                                o_12 = t;
                                                t = v_29;
                                                t = strategy_expression_0_0(t);
                                                x_12 = t;
                                                t = w_29;
                                                t = strategy_expression_0_0(t);
                                                y_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, x_12, y_12);
                                                q_5 = t;
                                                t = SSLsetAnnotations(q_5, o_12);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  v_29 = ATgetArgument(t, 0);
                                                  w_29 = ATgetArgument(t, 1);
                                                  q_29 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm q_13 = NULL,a_14 = NULL,b_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,i_14 = NULL,t_5 = NULL,s_5 = NULL;
                                                    t = SSLgetAnnotations(t_29);
                                                    q_13 = t;
                                                    t = v_29;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        e_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(v_29);
                                                    d_14 = t;
                                                    t = e_14;
                                                    {
                                                      ATerm i_8 = t;
                                                      int j_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = SSL_is_string(e_14);
                                                          LocalPopChoice(j_8);
                                                        }
                                                      else
                                                        {
                                                          t = i_8;
                                                          {
                                                            ATerm z_14 = NULL,a_15 = NULL,o_15 = NULL,s_15 = NULL,v_15 = NULL,r_5 = NULL;
                                                            if(match_cons(t, sym_Mod_2))
                                                              {
                                                                z_14 = ATgetArgument(t, 0);
                                                                a_15 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSLgetAnnotations(e_14);
                                                            o_15 = t;
                                                            t = SSL_is_string(z_14);
                                                            s_15 = t;
                                                            t = SSL_is_string(a_15);
                                                            v_15 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Mod_2, s_15, v_15);
                                                            r_5 = t;
                                                            t = SSLsetAnnotations(r_5, o_15);
                                                          }
                                                        }
                                                    }
                                                    f_14 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, f_14);
                                                    s_5 = t;
                                                    t = SSLsetAnnotations(s_5, d_14);
                                                    i_14 = t;
                                                    t = w_29;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    a_14 = t;
                                                    t = q_29;
                                                    t = map_1_0(term_expression_0_0, t);
                                                    b_14 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, i_14, a_14, b_14);
                                                    t_5 = t;
                                                    t = SSLsetAnnotations(t_5, q_13);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      v_29 = ATgetArgument(t, 0);
                                                      w_29 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm j_16 = NULL,n_16 = NULL,o_16 = NULL,u_5 = NULL;
                                                        t = SSLgetAnnotations(t_29);
                                                        j_16 = t;
                                                        t = SSL_is_string(v_29);
                                                        n_16 = t;
                                                        t = w_29;
                                                        t = strategy_expression_0_0(t);
                                                        o_16 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, n_16, o_16);
                                                        u_5 = t;
                                                        t = SSLsetAnnotations(u_5, j_16);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          v_29 = ATgetArgument(t, 0);
                                                          w_29 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm a_17 = NULL,e_17 = NULL,f_17 = NULL,v_5 = NULL;
                                                            t = SSLgetAnnotations(t_29);
                                                            a_17 = t;
                                                            t = SSL_is_int(v_29);
                                                            e_17 = t;
                                                            t = w_29;
                                                            t = strategy_expression_0_0(t);
                                                            f_17 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, e_17, f_17);
                                                            v_5 = t;
                                                            t = SSLsetAnnotations(v_5, a_17);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              v_29 = ATgetArgument(t, 0);
                                                              w_29 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm r_17 = NULL,y_17 = NULL,z_17 = NULL,w_5 = NULL;
                                                                t = SSLgetAnnotations(t_29);
                                                                r_17 = t;
                                                                t = SSL_is_string(v_29);
                                                                y_17 = t;
                                                                t = w_29;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                z_17 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, y_17, z_17);
                                                                w_5 = t;
                                                                t = SSLsetAnnotations(w_5, r_17);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  v_29 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm j_18 = NULL,m_18 = NULL,x_5 = NULL;
                                                                    t = SSLgetAnnotations(t_29);
                                                                    j_18 = t;
                                                                    t = v_29;
                                                                    t = strategy_expression_0_0(t);
                                                                    m_18 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, m_18);
                                                                    x_5 = t;
                                                                    t = SSLsetAnnotations(x_5, j_18);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      v_29 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm v_18 = NULL,x_18 = NULL,y_5 = NULL;
                                                                        t = SSLgetAnnotations(t_29);
                                                                        v_18 = t;
                                                                        t = v_29;
                                                                        t = strategy_expression_0_0(t);
                                                                        x_18 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, x_18);
                                                                        y_5 = t;
                                                                        t = SSLsetAnnotations(y_5, v_18);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          v_29 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm f_19 = NULL,j_19 = NULL,z_5 = NULL;
                                                                            t = SSLgetAnnotations(t_29);
                                                                            f_19 = t;
                                                                            t = v_29;
                                                                            t = strategy_expression_0_0(t);
                                                                            j_19 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, j_19);
                                                                            z_5 = t;
                                                                            t = SSLsetAnnotations(z_5, f_19);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              v_29 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm t_19 = NULL,w_19 = NULL,a_6 = NULL;
                                                                                t = SSLgetAnnotations(t_29);
                                                                                t_19 = t;
                                                                                t = v_29;
                                                                                t = strategy_expression_0_0(t);
                                                                                w_19 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, w_19);
                                                                                a_6 = t;
                                                                                t = SSLsetAnnotations(a_6, t_19);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  v_29 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm g_20 = NULL,i_20 = NULL,b_6 = NULL;
                                                                                    t = SSLgetAnnotations(t_29);
                                                                                    g_20 = t;
                                                                                    t = v_29;
                                                                                    t = term_expression_0_0(t);
                                                                                    i_20 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, i_20);
                                                                                    b_6 = t;
                                                                                    t = SSLsetAnnotations(b_6, g_20);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      v_29 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm v_20 = NULL,x_20 = NULL,c_6 = NULL;
                                                                                        t = SSLgetAnnotations(t_29);
                                                                                        v_20 = t;
                                                                                        t = v_29;
                                                                                        t = term_expression_0_0(t);
                                                                                        x_20 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, x_20);
                                                                                        c_6 = t;
                                                                                        t = SSLsetAnnotations(c_6, v_20);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          v_29 = ATgetArgument(t, 0);
                                                                                          w_29 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm f_21 = NULL,n_21 = NULL,r_21 = NULL,d_6 = NULL;
                                                                                            t = SSLgetAnnotations(t_29);
                                                                                            f_21 = t;
                                                                                            t = v_29;
                                                                                            t = map_1_0(w_0, t);
                                                                                            n_21 = t;
                                                                                            t = w_29;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            r_21 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, n_21, r_21);
                                                                                            d_6 = t;
                                                                                            t = SSLsetAnnotations(d_6, f_21);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              v_29 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm e_22 = NULL,h_22 = NULL,e_6 = NULL;
                                                                                                t = SSLgetAnnotations(t_29);
                                                                                                e_22 = t;
                                                                                                t = v_29;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                h_22 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, h_22);
                                                                                                e_6 = t;
                                                                                                t = SSLsetAnnotations(e_6, e_22);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  v_29 = ATgetArgument(t, 0);
                                                                                                  w_29 = ATgetArgument(t, 1);
                                                                                                  q_29 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm t_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,f_6 = NULL;
                                                                                                    t = SSLgetAnnotations(t_29);
                                                                                                    t_22 = t;
                                                                                                    t = SSL_is_string(v_29);
                                                                                                    z_22 = t;
                                                                                                    t = w_29;
                                                                                                    t = map_1_0(strategy_expression_0_0, t);
                                                                                                    a_23 = t;
                                                                                                    t = q_29;
                                                                                                    t = map_1_0(term_expression_0_0, t);
                                                                                                    b_23 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, z_22, a_23, b_23);
                                                                                                    f_6 = t;
                                                                                                    t = SSLsetAnnotations(f_6, t_22);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm u_23 = NULL,x_23 = NULL,z_23 = NULL,l_6 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      v_29 = ATgetArgument(t, 0);
                                                                                                      w_29 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(t_29);
                                                                                                  u_23 = t;
                                                                                                  t = v_29;
                                                                                                  t = map_1_0(y_0, t);
                                                                                                  x_23 = t;
                                                                                                  t = w_29;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  z_23 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, x_23, z_23);
                                                                                                  l_6 = t;
                                                                                                  t = SSLsetAnnotations(l_6, u_23);
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
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      {
        ATerm l_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = amb_error_0_0(t);
            LocalPopChoice(n_8);
          }
        else
          {
            t = l_8;
            t = debug_1_0(g_1, t);
          }
      }
    }
  return(t);
}
static ATerm m_4 (ATerm f_110 (ATerm), ATerm a_24, ATerm y_23, ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
  b_31 = t;
  t = f_110(t);
  y_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_30, a_24, y_23);
  t = c_5(y_30, a_24, y_23, t);
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_31 = NULL;
        t = term_q_8;
        g_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_30, term_q_8);
        t = b_5(y_30, g_31, t);
        {
          ATerm r_8 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_8;
            }
        }
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_30 = ATgetFirst((ATermList) t);
      a_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_30, term_q_8, (ATerm) ATinsert(CheckATermList(a_31), (ATerm) ATinsert(CheckATermList(z_30), a_24)));
  t = lookup_table_0_1(y_30, t);
  f_31 = t;
  t = term_q_8;
  c_31 = t;
  t = (ATerm) ATinsert(CheckATermList(a_31), (ATerm) ATinsert(CheckATermList(z_30), a_24));
  d_31 = t;
  t = f_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(c_31, d_31, e_31, t);
  t = b_31;
  return(t);
}
static ATerm n_4 (ATerm e_63, ATerm f_63, ATerm t)
{
  ATerm h_31 = NULL,n_31 = NULL;
  n_31 = t;
  {
    ATerm t_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_63, f_63);
        t = b_5(e_63, f_63, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_8 = ATgetFirst((ATermList) t);
            h_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_8);
        {
          ATerm o_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, e_63, f_63, h_31);
          t = lookup_table_0_1(e_63, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_5(f_63, h_31, o_31, t);
          t = (ATerm) ATmakeAppl(sym__3, e_63, f_63, h_31);
        }
      }
    else
      {
        t = t_8;
        {
          ATerm v_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, e_63, f_63);
          t = lookup_table_0_1(e_63, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_4(f_63, v_31, t);
          t = (ATerm) ATmakeAppl(sym__2, e_63, f_63);
        }
      }
  }
  t = n_31;
  return(t);
}
ATerm end_scope_1_0 (ATerm c_110 (ATerm), ATerm t)
{
  ATerm c_32 = NULL,m_32 = NULL,n_32 = NULL,t_32 = NULL,u_32 = NULL,z_32 = NULL,b_33 = NULL;
  t_32 = t;
  t = c_110(t);
  n_32 = t;
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_33 = NULL;
        t = term_q_8;
        g_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_32, term_q_8);
        t = b_5(n_32, g_33, t);
        {
          ATerm z_8 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_8;
            }
        }
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_32 = ATgetFirst((ATermList) t);
      c_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_32, term_q_8, c_32);
  t = lookup_table_0_1(n_32, t);
  b_33 = t;
  t = term_q_8;
  u_32 = t;
  t = b_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(u_32, c_32, z_32, t);
  t = m_32;
  {
    static ATerm m_1 (ATerm t);
    static ATerm m_1 (ATerm t)
    {
      ATerm i_33 = NULL;
      i_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_32, i_33);
      t = n_4(n_32, i_33, t);
      return(t);
    }
    t = map_1_0(m_1, t);
  }
  t = t_32;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_113 (ATerm), ATerm a_114 (ATerm), ATerm t)
{
  ATerm a_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_113(t);
      t = a_114(t);
      LocalPopChoice(c_9);
    }
  else
    {
      t = a_9;
      t = a_114(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,f_34 = NULL,h_34 = NULL,m_34 = NULL,o_34 = NULL,x_34 = NULL;
  a_34 = t;
  t = b_110(t);
  z_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_33, term_q_8);
  {
    ATerm d_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_35 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_9 = ATgetArgument(t, 0);
            ATerm i_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_8;
        b_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_33, term_q_8);
        t = b_5(z_33, b_35, t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = d_9;
        t = (ATerm) ATempty;
      }
  }
  f_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_33, term_q_8, (ATerm) ATinsert(CheckATermList(f_34), (ATerm) ATempty));
  t = lookup_table_0_1(z_33, t);
  x_34 = t;
  t = term_q_8;
  h_34 = t;
  t = (ATerm) ATinsert(CheckATermList(f_34), (ATerm) ATempty);
  m_34 = t;
  t = x_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(h_34, m_34, o_34, t);
  t = a_34;
  return(t);
}
ATerm scope_2_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm t)
{
  static ATerm n_1 (ATerm t);
  static ATerm n_1 (ATerm t)
  {
    t = end_scope_1_0(d_110, t);
    return(t);
  }
  t = begin_scope_1_0(d_110, t);
  t = restore_always_2_0(e_110, n_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_c_7;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_c_7;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,q_7 = NULL;
  o_41 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      l_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_41);
  k_41 = t;
  t = SSL_is_string(l_41);
  n_41 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_41, m_41);
  q_7 = t;
  t = SSLsetAnnotations(q_7, k_41);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm p_41 = NULL,s_41 = NULL,t_41 = NULL,x_41 = NULL,y_41 = NULL,r_7 = NULL;
  y_41 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_41 = ATgetArgument(t, 0);
      t_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_41);
  p_41 = t;
  t = SSL_is_string(s_41);
  x_41 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_41, t_41);
  r_7 = t;
  t = SSLsetAnnotations(r_7, p_41);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,a_33 = NULL,c_33 = NULL,d_33 = NULL,w_7 = NULL;
  d_33 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      y_32 = ATgetArgument(t, 0);
      a_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_33);
  x_32 = t;
  t = SSL_is_string(y_32);
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_33, a_33);
  w_7 = t;
  t = SSLsetAnnotations(w_7, x_32);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,h_33 = NULL,j_33 = NULL,k_33 = NULL,x_7 = NULL;
  k_33 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      f_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_33);
  e_33 = t;
  t = SSL_is_string(f_33);
  j_33 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_33, h_33);
  x_7 = t;
  t = SSLsetAnnotations(x_7, e_33);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,w_35 = NULL,c_8 = NULL;
  w_35 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_35 = ATgetArgument(t, 0);
      j_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_35);
  h_35 = t;
  t = SSL_is_string(i_35);
  k_35 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_35, j_35);
  c_8 = t;
  t = SSLsetAnnotations(c_8, h_35);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,d_8 = NULL;
  b_36 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      y_35 = ATgetArgument(t, 0);
      z_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_36);
  x_35 = t;
  t = SSL_is_string(y_35);
  a_36 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_36, z_35);
  d_8 = t;
  t = SSLsetAnnotations(d_8, x_35);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_j_9;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
      k_40 = t;
      {
        ATerm m_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                l_40 = ATgetArgument(t, 0);
                {
                  ATerm p_9 = ATgetArgument(t, 1);
                }
                {
                  ATerm s_9 = ATgetArgument(t, 2);
                }
                {
                  ATerm t_9 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_9);
            {
              static ATerm s_1 (ATerm t);
              static ATerm s_1 (ATerm t)
              {
                ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,s_7 = NULL;
                o_40 = t;
                t = term_b_7;
                p_40 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_9, l_40);
                q_40 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_b_7, (ATerm) ATmakeAppl(sym_Defined_2, term_u_9, l_40));
                t = m_4(u_1, p_40, q_40, t);
                t = o_40;
                if(match_cons(t, sym_SDefT_4))
                  {
                    s_40 = ATgetArgument(t, 0);
                    t_40 = ATgetArgument(t, 1);
                    u_40 = ATgetArgument(t, 2);
                    v_40 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_40);
                r_40 = t;
                t = s_40;
                {
                  ATerm v_9 = t;
                  int w_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_is_string(s_40);
                      LocalPopChoice(w_9);
                    }
                  else
                    {
                      t = v_9;
                      {
                        ATerm i_41 = NULL,j_41 = NULL,b_30 = NULL,k_31 = NULL,l_31 = NULL,p_7 = NULL;
                        if(match_cons(t, sym_Mod_2))
                          {
                            i_41 = ATgetArgument(t, 0);
                            j_41 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(s_40);
                        b_30 = t;
                        t = SSL_is_string(i_41);
                        k_31 = t;
                        t = SSL_is_string(j_41);
                        l_31 = t;
                        t = (ATerm) ATmakeAppl(sym_Mod_2, k_31, l_31);
                        p_7 = t;
                        t = SSLsetAnnotations(p_7, b_30);
                      }
                    }
                }
                w_40 = t;
                t = t_40;
                t = map_1_0(v_1, t);
                x_40 = t;
                t = u_40;
                t = map_1_0(y_1, t);
                y_40 = t;
                t = v_40;
                t = strategy_expression_0_0(t);
                z_40 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, w_40, x_40, y_40, z_40);
                s_7 = t;
                t = SSLsetAnnotations(s_7, r_40);
                return(t);
              }
              t = k_40;
              t = scope_2_0(p_1, s_1, t);
            }
          }
        else
          {
            t = m_9;
            if(match_cons(t, sym_ExtSDefInl_4))
              {
                l_40 = ATgetArgument(t, 0);
                m_40 = ATgetArgument(t, 1);
                n_40 = ATgetArgument(t, 2);
                j_40 = ATgetArgument(t, 3);
                {
                  ATerm x_31 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,a_8 = NULL;
                  t = SSLgetAnnotations(k_40);
                  x_31 = t;
                  t = l_40;
                  {
                    ATerm x_9 = t;
                    int y_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSL_is_string(l_40);
                        LocalPopChoice(y_9);
                      }
                    else
                      {
                        t = x_9;
                        {
                          ATerm v_32 = NULL,w_32 = NULL,t_33 = NULL,w_33 = NULL,x_33 = NULL,t_7 = NULL;
                          if(match_cons(t, sym_Mod_2))
                            {
                              v_32 = ATgetArgument(t, 0);
                              w_32 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(l_40);
                          t_33 = t;
                          t = SSL_is_string(v_32);
                          w_33 = t;
                          t = SSL_is_string(w_32);
                          x_33 = t;
                          t = (ATerm) ATmakeAppl(sym_Mod_2, w_33, x_33);
                          t_7 = t;
                          t = SSLsetAnnotations(t_7, t_33);
                        }
                      }
                  }
                  e_32 = t;
                  t = m_40;
                  t = map_1_0(z_1, t);
                  f_32 = t;
                  t = n_40;
                  t = map_1_0(b_2, t);
                  g_32 = t;
                  t = j_40;
                  t = strategy_expression_0_0(t);
                  h_32 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, e_32, f_32, g_32, h_32);
                  a_8 = t;
                  t = SSLsetAnnotations(a_8, x_31);
                }
              }
            else
              {
                ATerm i_34 = NULL,n_34 = NULL,p_34 = NULL,q_34 = NULL,e_8 = NULL;
                if(match_cons(t, sym_ExtSDef_3))
                  {
                    l_40 = ATgetArgument(t, 0);
                    m_40 = ATgetArgument(t, 1);
                    n_40 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_40);
                i_34 = t;
                t = l_40;
                {
                  ATerm a_10 = t;
                  int b_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_is_string(l_40);
                      LocalPopChoice(b_10);
                    }
                  else
                    {
                      t = a_10;
                      {
                        ATerm f_35 = NULL,g_35 = NULL,p_36 = NULL,b_37 = NULL,d_37 = NULL,b_8 = NULL;
                        if(match_cons(t, sym_Mod_2))
                          {
                            f_35 = ATgetArgument(t, 0);
                            g_35 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(l_40);
                        p_36 = t;
                        t = SSL_is_string(f_35);
                        b_37 = t;
                        t = SSL_is_string(g_35);
                        d_37 = t;
                        t = (ATerm) ATmakeAppl(sym_Mod_2, b_37, d_37);
                        b_8 = t;
                        t = SSLsetAnnotations(b_8, p_36);
                      }
                    }
                }
                n_34 = t;
                t = m_40;
                t = map_1_0(e_2, t);
                p_34 = t;
                t = n_40;
                t = map_1_0(f_2, t);
                q_34 = t;
                t = (ATerm) ATmakeAppl(sym_ExtSDef_3, n_34, p_34, q_34);
                e_8 = t;
                t = SSLsetAnnotations(e_8, i_34);
              }
          }
      }
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = amb_error_0_0(t);
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            t = debug_1_0(h_2, t);
          }
      }
    }
  return(t);
}
ATerm map_1_0 (ATerm o_121 (ATerm), ATerm t)
{
  static ATerm u_42 (ATerm t);
  static ATerm u_42 (ATerm t)
  {
    ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
    r_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_42;
      }
    else
      {
        ATerm t_37 = NULL,y_37 = NULL,z_37 = NULL,m_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_42 = ATgetFirst((ATermList) t);
            t_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_42);
        t_37 = t;
        t = s_42;
        t = o_121(t);
        y_37 = t;
        t = t_42;
        t = u_42(t);
        z_37 = t;
        t = (ATerm) ATinsert(CheckATermList(z_37), y_37);
        m_11 = t;
        t = SSLsetAnnotations(m_11, t_37);
      }
    return(t);
  }
  t = u_42(t);
  return(t);
}
static ATerm o_4 (ATerm n_57, ATerm o_57, ATerm t)
{
  ATerm w_42 = NULL;
  t = SSL_fputc(n_57, o_57);
  w_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_42);
  return(t);
}
static ATerm p_4 (ATerm u_41, ATerm v_41, ATerm t)
{
  ATerm x_42 = NULL;
  t = SSL_write_term_to_stream_text(u_41, v_41);
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_42);
  return(t);
}
static ATerm r_4 (ATerm g_121 (ATerm), ATerm l_278, ATerm a_42, ATerm t)
{
  ATerm y_42 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_278, term_g_10);
  t = v_4(t);
  y_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_42, a_42);
  t = g_121(t);
  t = fclose_0_0(t);
  t = a_42;
  return(t);
}
static ATerm q_4 (ATerm q_41, ATerm r_41, ATerm t)
{
  ATerm z_42 = NULL;
  t = SSL_write_term_to_stream_baf(q_41, r_41);
  z_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_42);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_10 = ATgetArgument(t, 0);
      if(match_cons(h_10, sym_Stream_1))
        {
          i_43 = ATgetArgument(h_10, 0);
        }
      else
        _fail(t);
      j_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(i_43, j_43, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_10 = ATgetArgument(t, 0);
      if(match_cons(i_10, sym_Stream_1))
        {
          n_43 = ATgetArgument(i_10, 0);
        }
      else
        _fail(t);
      o_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_4(n_43, o_43, t);
  k_43 = t;
  t = term_j_10;
  l_43 = t;
  t = k_43;
  if(match_cons(t, sym_Stream_1))
    {
      m_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, k_43);
  t = o_4(l_43, m_43, t);
  return(t);
}
ATerm output_1_0 (ATerm v_141 (ATerm), ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL;
  t = v_141(t);
  b_43 = t;
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_43 = NULL,f_43 = NULL;
        t = term_n_10;
        e_43 = t;
        t = term_o_10;
        f_43 = t;
        t = term_p_10;
        t = b_5(e_43, f_43, t);
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        t = term_t_10;
      }
  }
  a_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_43, b_43);
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_43 = NULL,h_43 = NULL;
        t = term_n_10;
        g_43 = t;
        t = term_w_10;
        h_43 = t;
        t = term_x_10;
        t = b_5(g_43, h_43, t);
        t = (ATerm) ATmakeAppl(sym__2, a_43, b_43);
        LocalPopChoice(v_10);
        if(match_cons(t, sym__2))
          {
            ATerm y_10 = ATgetArgument(t, 0);
            ATerm z_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_4(k_2, a_43, b_43, t);
      }
    else
      {
        t = u_10;
        if(match_cons(t, sym__2))
          {
            ATerm a_11 = ATgetArgument(t, 0);
            ATerm b_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_4(l_2, a_43, b_43, t);
      }
  }
  return(t);
}
static ATerm c_44 (ATerm w_43, ATerm t)
{
  t = SSL_fclose(w_43);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL;
  a_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_43 = ATgetArgument(t, 0);
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_43);
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            t = c_44(a_44, t);
          }
      }
    }
  else
    {
      t = c_44(a_44, t);
    }
  return(t);
}
static ATerm s_4 (ATerm w_41, ATerm t)
{
  t = SSL_read_term_from_stream(w_41);
  return(t);
}
static ATerm t_4 (ATerm t_55, ATerm u_55, ATerm t)
{
  t = SSL_strcat(t_55, u_55);
  return(t);
}
static ATerm u_4 (ATerm p_57, ATerm q_57, ATerm t)
{
  ATerm d_44 = NULL;
  t = SSL_fopen(p_57, q_57);
  d_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_44);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_44 = NULL;
  t = SSL_stdin_stream();
  e_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_44);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_44 = NULL;
  t = SSL_stdout_stream();
  f_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_44);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_44 = NULL;
  t = SSL_stderr_stream();
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_44);
  return(t);
}
static ATerm n_45 (ATerm m_44, ATerm t)
{
  ATerm n_44 = NULL;
  t = SSL_explode_term(m_44);
  if(match_cons(t, sym__2))
    {
      ATerm f_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_11 = ATgetArgument(t, 1);
        if(((ATgetType(g_11) == AT_LIST) && !(ATisEmpty(g_11))))
          {
            n_44 = ATgetFirst((ATermList) g_11);
            {
              ATerm h_11 = (ATerm) ATgetNext((ATermList) g_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_44;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_44;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_44;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_44;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_45 (ATerm q_44, ATerm r_44, ATerm s_44, ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,y_44 = NULL,o_11 = NULL;
  t = SSLgetAnnotations(s_44);
  v_44 = t;
  t = q_44;
  if(match_cons(t, sym_Path_1))
    {
      y_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_44, r_44);
  o_11 = t;
  t = SSLsetAnnotations(o_11, v_44);
  if(match_cons(t, sym__2))
    {
      t_44 = ATgetArgument(t, 0);
      u_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4(t_44, u_44, t);
  return(t);
}
static ATerm p_45 (ATerm a_45, ATerm b_45, ATerm c_45, ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL,i_45 = NULL,p_11 = NULL;
  t = SSLgetAnnotations(c_45);
  f_45 = t;
  t = SSL_is_string(a_45);
  i_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_45, b_45);
  p_11 = t;
  t = SSLsetAnnotations(p_11, f_45);
  if(match_cons(t, sym__2))
    {
      d_45 = ATgetArgument(t, 0);
      e_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4(d_45, e_45, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  if(match_cons(t, sym__2))
    {
      l_45 = ATgetArgument(t, 0);
      m_45 = ATgetArgument(t, 1);
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_45(k_45, t);
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
                  t = o_45(l_45, m_45, k_45, t);
                  LocalPopChoice(l_11);
                }
              else
                {
                  t = k_11;
                  t = p_45(l_45, m_45, k_45, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_45(k_45, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,y_45 = NULL;
  y_45 = t;
  {
    ATerm n_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_45, term_t_11);
        t = v_4(t);
        LocalPopChoice(q_11);
      }
    else
      {
        t = n_11;
        {
          ATerm v_38 = NULL,w_38 = NULL;
          t = term_u_11;
          w_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_11, y_45);
          t = t_4(w_38, y_45, t);
          v_38 = t;
          t = SSL_perror(v_38);
          _fail(t);
        }
      }
  }
  s_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_4(t_45, t);
  r_45 = t;
  t = s_45;
  t = fclose_0_0(t);
  t = r_45;
  return(t);
}
ATerm input_1_0 (ATerm w_141 (ATerm), ATerm t)
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_46 = NULL,c_46 = NULL;
      t = term_n_10;
      b_46 = t;
      t = term_x_11;
      c_46 = t;
      t = term_y_11;
      t = b_5(b_46, c_46, t);
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      t = term_a_12;
    }
  t = ReadFromFile_0_0(t);
  t = w_141(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL;
  t = term_n_10;
  d_46 = t;
  t = term_c_12;
  e_46 = t;
  t = term_f_12;
  t = b_5(d_46, e_46, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
  g_46 = t;
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_46;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_12 = ATgetFirst((ATermList) t);
                ATerm k_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_46;
          }
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        t = (ATerm) ATinsert(ATempty, g_46);
      }
  }
  h_46 = t;
  t = term_t_10;
  i_46 = t;
  t = SSL_printnl(i_46, h_46);
  t = g_46;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_46 = ATgetFirst((ATermList) t);
      o_46 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_46 = NULL,t_46 = NULL;
        static ATerm n_2 (ATerm t);
        static ATerm n_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_46)), not_null(t_46));
          return(t);
        }
        t = o_46;
        t = r_0(t);
        if(((s_46 != NULL) && (s_46 != t)))
          _fail(t);
        else
          s_46 = t;
        t = n_46;
        t = p_0(t);
        if(((t_46 != NULL) && (t_46 != t)))
          _fail(t);
        else
          t_46 = t;
        t = o_46;
        t = reverse_acc_2_0(p_0, n_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_7;
      t = r_0(t);
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL,z_11 = NULL;
  d_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_47);
  b_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_47);
  z_11 = t;
  t = SSLsetAnnotations(z_11, b_47);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm h_47 = NULL;
  h_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_47), term_m_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm u_143 (ATerm), ATerm v_143 (ATerm), ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL;
  ATerm n_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_46 = NULL,a_47 = NULL;
      t = term_n_10;
      z_46 = t;
      t = term_c_12;
      a_47 = t;
      t = term_f_12;
      t = b_5(z_46, a_47, t);
      LocalPopChoice(q_12);
    }
  else
    {
      t = n_12;
      t = fetch_1_0(p_2, t);
    }
  {
    ATerm r_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_143(t);
        t = echo_0_0(t);
        LocalPopChoice(v_12);
      }
    else
      {
        t = r_12;
      }
  }
  t = term_z_12;
  t = echo_0_0(t);
  t = term_a_13;
  x_46 = t;
  t = term_b_13;
  y_46 = t;
  t = term_c_13;
  t = b_5(x_46, y_46, t);
  t = reverse_acc_2_0(_id, q_2, t);
  t = map_1_0(r_2, t);
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_47 = NULL;
        t = v_143(t);
        i_47 = t;
        t = (ATerm) ATinsert(CheckATermList(i_47), term_f_13);
        t = echo_0_0(t);
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
      }
  }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL,b_12 = NULL;
  q_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_47);
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_47);
  b_12 = t;
  t = SSLsetAnnotations(b_12, o_47);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_47 = NULL;
  l_47 = t;
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_47 = NULL,n_47 = NULL;
        t = term_n_10;
        m_47 = t;
        t = term_c_12;
        n_47 = t;
        t = term_f_12;
        t = b_5(m_47, n_47, t);
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        t = fetch_1_0(s_2, t);
      }
  }
  t = l_47;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm s_47 = NULL;
  s_47 = t;
  if(match_string(t, "-k"))
    {
      t = s_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_47;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL;
  t_47 = t;
  t = SSL_string_to_int(t_47);
  u_47 = t;
  t = term_i_13;
  v_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_13, u_47);
  t = e_5(v_47, u_47, t);
  t = t_47;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_j_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_2, v_2, c_3, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm x_47 = NULL;
  x_47 = t;
  if(match_string(t, "-S"))
    {
      t = x_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_47;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL;
  t = term_k_13;
  y_47 = t;
  t = term_l_13;
  z_47 = t;
  t = term_m_13;
  t = e_5(y_47, z_47, t);
  t = term_n_13;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_o_13;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL;
  a_48 = t;
  t = SSL_string_to_int(a_48);
  b_48 = t;
  t = term_k_13;
  c_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_13, b_48);
  t = e_5(c_48, b_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_48);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_p_13;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL;
  t = term_r_13;
  d_48 = t;
  t = term_b_7;
  e_48 = t;
  t = term_s_13;
  t = e_5(d_48, e_48, t);
  t = term_t_13;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_u_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_3, e_3, h_3, t);
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
            t = ArgOption_3_0(i_3, j_3, k_3, t);
            LocalPopChoice(y_13);
          }
        else
          {
            t = x_13;
            t = Option_3_0(m_3, n_3, o_3, t);
          }
      }
    }
  return(t);
}
static ATerm e_5 (ATerm t_77, ATerm u_77, ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL;
  t = term_n_10;
  f_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_10, t_77, u_77);
  t = lookup_table_0_1(f_48, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(t_77, u_77, g_48, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_10, t_77, u_77);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL;
      t = term_b_7;
      t = g_0(t);
      m_48 = t;
      t = term_a_13;
      n_48 = t;
      t = term_b_13;
      o_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_13, term_b_13, m_48);
      t = c_5(n_48, o_48, m_48, t);
      _fail(t);
    }
  else
    {
      ATerm r_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_48 = ATgetFirst((ATermList) t);
          l_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_48;
      t = d_0(t);
      t = term_b_7;
      t = f_0(t);
      r_48 = t;
      t = (ATerm) ATinsert(CheckATermList(l_48), r_48);
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm t_48 = NULL;
  t_48 = t;
  if(match_string(t, "-o"))
    {
      t = t_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_48;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL;
  u_48 = t;
  t = term_o_10;
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_10, u_48);
  t = e_5(v_48, u_48, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_48);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_z_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_3, q_3, r_3, t);
  return(t);
}
static ATerm c_5 (ATerm z_62, ATerm a_63, ATerm y_62, ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL;
  z_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_62, a_63);
  {
    ATerm c_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_14 = ATgetArgument(t, 0);
            ATerm j_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_62, a_63);
        t = b_5(z_62, a_63, t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = c_14;
        t = (ATerm) ATempty;
      }
  }
  a_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_62, a_63, (ATerm) ATinsert(CheckATermList(a_49), y_62));
  t = lookup_table_0_1(z_62, t);
  d_49 = t;
  t = (ATerm) ATinsert(CheckATermList(a_49), y_62);
  b_49 = t;
  t = d_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(a_63, b_49, c_49, t);
  t = z_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
      t = term_b_7;
      t = n_0(t);
      o_49 = t;
      t = term_a_13;
      p_49 = t;
      t = term_b_13;
      q_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_13, term_b_13, o_49);
      t = c_5(p_49, q_49, o_49, t);
      _fail(t);
    }
  else
    {
      ATerm u_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_49 = ATgetFirst((ATermList) t);
          l_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_49 = ATgetFirst((ATermList) t);
          n_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_49;
      t = j_0(t);
      t = m_49;
      t = l_0(t);
      u_49 = t;
      t = (ATerm) ATinsert(CheckATermList(n_49), u_49);
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm w_49 = NULL;
  w_49 = t;
  if(match_string(t, "-i"))
    {
      t = w_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_49;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL;
  x_49 = t;
  t = term_x_11;
  y_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, x_49);
  t = e_5(y_49, x_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_49);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_k_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_3, y_3, z_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_7;
  t = whoami_0_0(t);
  z_49 = t;
  t = term_w_6;
  b_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_14), z_49);
  c_50 = t;
  t = SSL_printnl(b_50, c_50);
  t = term_j_7;
  a_50 = t;
  t = SSL_exit(a_50);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL;
  t = term_n_10;
  d_50 = t;
  t = term_c_12;
  e_50 = t;
  t = term_f_12;
  t = b_5(d_50, e_50, t);
  return(t);
}
static ATerm w_4 (ATerm i_61, ATerm j_61, ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_61, j_61);
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      t = SSL_addr(i_61, j_61);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_128 (ATerm), ATerm m_128 (ATerm), ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
  g_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_50;
      t = l_128(t);
    }
  else
    {
      ATerm l_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_50 = ATgetFirst((ATermList) t);
          i_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_50;
      t = foldr_2_0(l_128, m_128, t);
      l_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_50, l_50);
      t = m_128(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_l_13;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm n_39 = NULL,p_39 = NULL;
  if(match_cons(t, sym__2))
    {
      n_39 = ATgetArgument(t, 0);
      p_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4(n_39, p_39, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_50 = NULL,f_39 = NULL,h_39 = NULL;
  t = times_0_0(t);
  h_39 = t;
  t = SSL_explode_term(h_39);
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      f_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_39;
  t = foldr_2_0(a_4, b_4, t);
  o_50 = t;
  t = SSL_TicksToSeconds(o_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL;
  z_50 = t;
  if(match_cons(t, sym__2))
    {
      a_51 = ATgetArgument(t, 0);
      b_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_51;
        if((a_51 != t))
          {
            _fail(t);
          }
        t = z_50;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = (ATerm) ATmakeAppl(sym__2, a_51, b_51);
        {
          ATerm r_14 = t;
          int s_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_51, b_51);
              LocalPopChoice(s_14);
            }
          else
            {
              t = r_14;
              t = SSL_gtr(a_51, b_51);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_51, b_51);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_138 (ATerm), ATerm t)
{
  ATerm f_51 = NULL;
  f_51 = t;
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
        t = term_n_10;
        i_51 = t;
        t = term_k_13;
        j_51 = t;
        t = term_v_14;
        t = b_5(i_51, j_51, t);
        h_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_51, term_j_7);
        t = geq_0_0(t);
        t = f_51;
        t = r_138(t);
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = f_51;
      }
  }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,o_51 = NULL,p_51 = NULL;
  t = run_time_0_0(t);
  l_51 = t;
  t = term_b_7;
  t = whoami_0_0(t);
  m_51 = t;
  t = term_w_6;
  o_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_14), l_51), term_w_14), m_51);
  p_51 = t;
  t = SSL_printnl(o_51, p_51);
  t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_14), l_51), term_w_14), m_51));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_13;
  q_51 = t;
  t = SSL_exit(q_51);
  return(t);
}
static ATerm f_5 (ATerm o_67, ATerm p_67, ATerm q_67, ATerm t)
{
  ATerm r_51 = NULL;
  t = SSL_hashtable_put(q_67, o_67, p_67);
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_51);
  return(t);
}
static ATerm g_5 (ATerm r_67, ATerm s_67, ATerm t)
{
  t = SSL_hashtable_get(s_67, r_67);
  return(t);
}
ATerm lookup_table_0_1 (ATerm l_64, ATerm t)
{
  ATerm a_52 = NULL;
  t = table_hashtable_0_0(t);
  a_52 = t;
  {
    ATerm y_14 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_40 = NULL;
        t = a_52;
        if(match_cons(t, sym_Hashtable_1))
          {
            h_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_5(l_64, h_40, t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = y_14;
        {
          ATerm d_43 = NULL;
          t = l_64;
          t = table_create_0_0(t);
          t = a_52;
          if(match_cons(t, sym_Hashtable_1))
            {
              d_43 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_5(l_64, d_43, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_67, ATerm x_67, ATerm t)
{
  ATerm d_52 = NULL;
  t = SSL_hashtable_create(w_67, x_67);
  d_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_52);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,i_52 = NULL,j_52 = NULL;
  e_52 = t;
  t = term_c_15;
  i_52 = t;
  t = term_d_15;
  j_52 = t;
  t = e_52;
  t = new_hashtable_0_2(i_52, j_52, t);
  f_52 = t;
  t = e_52;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(e_52, f_52, g_52, t);
  t = e_52;
  return(t);
}
static ATerm y_4 (ATerm t_67, ATerm u_67, ATerm t)
{
  ATerm k_52 = NULL;
  t = SSL_hashtable_remove(u_67, t_67);
  k_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_52);
  return(t);
}
static ATerm z_4 (ATerm y_67, ATerm t)
{
  ATerm l_52 = NULL;
  t = SSL_hashtable_destroy(y_67);
  l_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_52);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm m_52 = NULL;
  t = SSL_table_hashtable();
  m_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_52);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL;
  n_52 = t;
  t = table_hashtable_0_0(t);
  o_52 = t;
  t = lookup_table_0_1(n_52, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_4(q_52, t);
  t = o_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_4(n_52, p_52, t);
  t = n_52;
  return(t);
}
ATerm fetch_1_0 (ATerm w_121 (ATerm), ATerm t)
{
  static ATerm n_53 (ATerm t);
  static ATerm n_53 (ATerm t)
  {
    ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL;
    k_53 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_53 = ATgetFirst((ATermList) t);
        m_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_15 = t;
      int f_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_44 = NULL,l_44 = NULL,d_12 = NULL;
          t = SSLgetAnnotations(k_53);
          i_44 = t;
          t = l_53;
          t = w_121(t);
          l_44 = t;
          t = (ATerm) ATinsert(CheckATermList(m_53), l_44);
          d_12 = t;
          t = SSLsetAnnotations(d_12, i_44);
          LocalPopChoice(f_15);
        }
      else
        {
          t = e_15;
          {
            ATerm w_47 = NULL,w_48 = NULL,e_12 = NULL;
            t = SSLgetAnnotations(k_53);
            w_47 = t;
            t = m_53;
            t = n_53(t);
            w_48 = t;
            t = (ATerm) ATinsert(CheckATermList(w_48), l_53);
            e_12 = t;
            t = SSLsetAnnotations(e_12, w_47);
          }
        }
    }
    return(t);
  }
  t = n_53(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL;
  t = term_g_15;
  q_53 = t;
  t = term_b_7;
  r_53 = t;
  t = term_h_15;
  t = e_5(q_53, r_53, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_i_15;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL;
  t = term_g_15;
  u_53 = t;
  t = term_b_7;
  v_53 = t;
  t = term_h_15;
  t = e_5(u_53, v_53, t);
  t = term_j_15;
  s_53 = t;
  t = term_b_7;
  t_53 = t;
  t = term_k_15;
  t = e_5(s_53, t_53, t);
  t = term_l_15;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_m_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_4, e_4, f_4, t);
      LocalPopChoice(p_15);
    }
  else
    {
      t = n_15;
      t = Option_3_0(g_4, j_4, k_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,j_12 = NULL;
  b_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_53 = ATgetFirst((ATermList) t);
      y_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_54);
  w_53 = t;
  t = x_53;
  t = v_86(t);
  z_53 = t;
  t = y_53;
  t = w_86(t);
  a_54 = t;
  t = (ATerm) ATinsert(CheckATermList(a_54), z_53);
  j_12 = t;
  t = SSLsetAnnotations(j_12, w_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_143 (ATerm), ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,l_54 = NULL,m_54 = NULL,l_12 = NULL;
  g_54 = t;
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_15;
        t = p_143(t);
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
      }
  }
  t = g_54;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_54 = ATgetFirst((ATermList) t);
      j_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_54);
  h_54 = t;
  t = term_c_12;
  m_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_12, i_54);
  t = e_5(m_54, i_54, t);
  t = j_54;
  {
    static ATerm w_54 (ATerm t);
    static ATerm w_54 (ATerm t)
    {
      ATerm u_15 = t;
      int w_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_54 = NULL;
              p_54 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_54;
              LocalPopChoice(y_15);
            }
          else
            {
              t = x_15;
              t = p_143(t);
              t = Cons_2_0(_id, w_54, t);
            }
          LocalPopChoice(w_15);
        }
      else
        {
          t = u_15;
          {
            ATerm s_54 = NULL,t_54 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_54 = ATgetFirst((ATermList) t);
                t_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_54), (ATerm) ATmakeAppl(sym_Undefined_1, s_54));
          }
        }
      return(t);
    }
    t = w_54(t);
  }
  l_54 = t;
  t = (ATerm) ATinsert(CheckATermList(l_54), (ATerm) ATmakeAppl(sym_Program_1, i_54));
  l_12 = t;
  t = SSLsetAnnotations(l_12, h_54);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm j_55 = NULL;
  j_55 = t;
  if(match_string(t, "--help"))
    {
      t = j_55;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_55;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_55;
        }
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL;
  t = term_z_15;
  k_55 = t;
  t = term_b_7;
  l_55 = t;
  t = term_a_16;
  t = e_5(k_55, l_55, t);
  t = term_b_16;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_c_16;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm m_143 (ATerm), ATerm n_143 (ATerm), ATerm o_143 (ATerm), ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
  d_55 = t;
  t = term_a_13;
  e_55 = t;
  t = term_d_16;
  t = lookup_table_0_1(e_55, t);
  i_55 = t;
  t = term_b_13;
  f_55 = t;
  t = (ATerm) ATempty;
  g_55 = t;
  t = i_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(f_55, g_55, h_55, t);
  t = d_55;
  {
    static ATerm h_5 (ATerm t);
    static ATerm h_5 (ATerm t)
    {
      ATerm e_16 = t;
      int f_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_143(t);
          LocalPopChoice(f_16);
        }
      else
        {
          t = e_16;
          {
            ATerm g_16 = t;
            int h_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_5, l_5, m_5, t);
                LocalPopChoice(h_16);
              }
            else
              {
                t = g_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_5, t);
  }
  {
    ATerm i_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_55 = NULL;
        y_55 = t;
        {
          ATerm l_16 = t;
          int m_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_50 = NULL;
              t = y_55;
              {
                ATerm p_16 = t;
                int q_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_50 = NULL,e_51 = NULL;
                    t = term_n_10;
                    s_50 = t;
                    t = term_z_15;
                    e_51 = t;
                    t = term_r_16;
                    t = b_5(s_50, e_51, t);
                    LocalPopChoice(q_16);
                  }
                else
                  {
                    t = p_16;
                    t = fetch_1_0(m_6, t);
                  }
              }
              t = y_55;
              t = n_143(t);
              t = term_l_13;
              r_50 = t;
              t = SSL_exit(r_50);
              LocalPopChoice(m_16);
            }
          else
            {
              t = l_16;
              {
                ATerm s_52 = NULL,t_52 = NULL,c_54 = NULL;
                t = term_n_10;
                t_52 = t;
                t = term_g_15;
                c_54 = t;
                t = term_s_16;
                t = b_5(t_52, c_54, t);
                t = y_55;
                t = o_143(t);
                t = term_l_13;
                s_52 = t;
                t = SSL_exit(s_52);
              }
            }
        }
        LocalPopChoice(k_16);
      }
    else
      {
        t = i_16;
        {
          ATerm t_16 = t;
          int u_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
              static ATerm n_6 (ATerm t);
              static ATerm n_6 (ATerm t)
              {
                ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,p_12 = NULL;
                e_56 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_56 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_56);
                c_56 = t;
                t = d_56;
                if(((b_55 != NULL) && (b_55 != t)))
                  _fail(t);
                else
                  b_55 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_56);
                p_12 = t;
                t = SSLsetAnnotations(p_12, c_56);
                return(t);
              }
              t = fetch_1_0(n_6, t);
              t = term_w_6;
              a_56 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_55)), term_v_16);
              b_56 = t;
              t = SSL_printnl(a_56, b_56);
              t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_55)), term_v_16));
              t = n_143(t);
              t = term_j_7;
              z_55 = t;
              t = SSL_exit(z_55);
              LocalPopChoice(u_16);
            }
          else
            {
              t = t_16;
            }
        }
      }
  }
  c_55 = t;
  t = term_a_13;
  t = table_destroy_0_0(t);
  t = c_55;
  return(t);
}
ATerm option_wrap_5_0 (ATerm p_141 (ATerm), ATerm q_141 (ATerm), ATerm r_141 (ATerm), ATerm s_141 (ATerm), ATerm t_141 (ATerm), ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL;
  t = parse_options_3_0(p_141, q_141, r_141, t);
  j_56 = t;
  t = term_w_16;
  t = table_create_0_0(t);
  t = term_w_16;
  k_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_16, term_x_16, j_56);
  t = lookup_table_0_1(k_56, t);
  n_56 = t;
  t = term_x_16;
  l_56 = t;
  t = n_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(l_56, j_56, m_56, t);
  t = j_56;
  t = s_141(t);
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_141(t);
        t = report_success_0_0(t);
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm d_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(g_17);
          }
        else
          {
            t = d_17;
            {
              ATerm h_17 = t;
              int i_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(q_6, r_6, s_6, t);
                  LocalPopChoice(i_17);
                }
              else
                {
                  t = h_17;
                  {
                    ATerm j_17 = t;
                    int k_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(k_17);
                      }
                    else
                      {
                        t = j_17;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = input_1_0(t_6, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL;
  t = term_w_10;
  s_56 = t;
  t = term_b_7;
  t_56 = t;
  t = term_l_17;
  t = e_5(s_56, t_56, t);
  t = term_m_17;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_n_17;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = output_1_0(u_6, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_57 = NULL,t_57 = NULL,x_54 = NULL,z_54 = NULL,a_55 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,r_57 = NULL,s_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,w_12 = NULL,u_12 = NULL,t_12 = NULL,s_12 = NULL;
      m_57 = t;
      if(match_cons(t, sym_Specification_1))
        {
          t_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_57);
      x_54 = t;
      t = t_57;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_55 = ATgetFirst((ATermList) t);
          o_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_57);
      z_54 = t;
      t = o_56;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_56 = ATgetFirst((ATermList) t);
          r_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_56);
      q_56 = t;
      t = r_56;
      if(match_cons(t, sym_Strategies_1))
        {
          b_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_56);
      a_58 = t;
      t = b_58;
      t = map_1_0(strategy_definition_0_0, t);
      c_58 = t;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, c_58);
      s_12 = t;
      t = SSLsetAnnotations(s_12, a_58);
      d_58 = t;
      t = r_57;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(r_57), d_58);
      t_12 = t;
      t = SSLsetAnnotations(t_12, q_56);
      s_57 = t;
      t = (ATerm) ATinsert(CheckATermList(s_57), a_55);
      u_12 = t;
      t = SSLsetAnnotations(u_12, z_54);
      p_56 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, p_56);
      w_12 = t;
      t = SSLsetAnnotations(w_12, x_54);
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      {
        ATerm q_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = amb_error_0_0(t);
            LocalPopChoice(s_17);
          }
        else
          {
            t = q_17;
            t = debug_1_0(v_6, t);
          }
      }
    }
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
        u_57 = t;
        t = term_n_10;
        v_57 = t;
        t = term_i_7;
        w_57 = t;
        t = term_v_17;
        t = b_5(v_57, w_57, t);
        t = u_57;
        LocalPopChoice(u_17);
        {
          ATerm x_57 = NULL;
          t = term_j_7;
          x_57 = t;
          t = SSL_exit(x_57);
        }
      }
    else
      {
        t = t_17;
      }
  }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_w_17;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(o_6, default_system_usage_0_0, default_system_about_0_0, _id, p_6, t);
  return(t);
}
