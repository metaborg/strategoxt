#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_amb_1;
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_Some_1;
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
Symbol sym_Cong_2;
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_Some_1;
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
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Some_1;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
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
ATerm term_w_17;
ATerm term_v_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_s_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_z_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_n_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_u_9;
ATerm term_j_9;
ATerm term_q_8;
ATerm term_f_8;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_y_6;
ATerm term_w_6;
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
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_w_10);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_x_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_e_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_a_13);
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
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_b_7);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
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
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(117);
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
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__2, term_z_15, term_b_7);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__3, term_z_12, term_a_13, (ATerm) ATempty);
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
static ATerm b_5 (ATerm u_64, ATerm v_64, ATerm t);
ATerm debug_1_0 (ATerm w_119 (ATerm), ATerm t);
static ATerm l_4 (ATerm m_63, ATerm n_63, ATerm t);
static ATerm c_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm amb_error_0_0 (ATerm t);
ATerm list_1_0 (ATerm k_120 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
ATerm term_expression_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm m_4 (ATerm x_108 (ATerm), ATerm a_24, ATerm y_23, ATerm t);
static ATerm n_4 (ATerm g_63, ATerm h_63, ATerm t);
ATerm end_scope_1_0 (ATerm u_108 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm t_108 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm v_108 (ATerm), ATerm w_108 (ATerm), ATerm t);
static ATerm q_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm g_120 (ATerm), ATerm t);
static ATerm o_4 (ATerm p_57, ATerm q_57, ATerm t);
static ATerm p_4 (ATerm w_41, ATerm x_41, ATerm t);
static ATerm r_4 (ATerm y_119 (ATerm), ATerm o_276, ATerm c_42, ATerm t);
static ATerm q_4 (ATerm s_41, ATerm t_41, ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm output_1_0 (ATerm y_139 (ATerm), ATerm t);
static ATerm b_44 (ATerm v_43, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_4 (ATerm y_41, ATerm t);
static ATerm t_4 (ATerm v_55, ATerm w_55, ATerm t);
static ATerm u_4 (ATerm r_57, ATerm s_57, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_45 (ATerm l_44, ATerm t);
static ATerm n_45 (ATerm p_44, ATerm q_44, ATerm r_44, ATerm t);
static ATerm o_45 (ATerm z_44, ATerm a_45, ATerm b_45, ATerm t);
static ATerm v_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm z_139 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm default_system_usage_2_0 (ATerm x_141 (ATerm), ATerm y_141 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_5 (ATerm l_76, ATerm m_76, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_5 (ATerm b_63, ATerm c_63, ATerm a_63, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_4 (ATerm k_61, ATerm l_61, ATerm t);
ATerm foldr_2_0 (ATerm f_127 (ATerm), ATerm g_127 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm u_136 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm f_5 (ATerm m_67, ATerm n_67, ATerm o_67, ATerm t);
static ATerm g_5 (ATerm p_67, ATerm q_67, ATerm t);
ATerm lookup_table_0_1 (ATerm n_64, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_67, ATerm v_67, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_4 (ATerm r_67, ATerm s_67, ATerm t);
static ATerm z_4 (ATerm w_67, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_120 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_141 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm parse_options_3_0 (ATerm p_141 (ATerm), ATerm q_141 (ATerm), ATerm r_141 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm u_139 (ATerm), ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm t);
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
static ATerm b_5 (ATerm u_64, ATerm v_64, ATerm t)
{
  ATerm a_0 = NULL;
  t = lookup_table_0_1(u_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_5(v_64, a_0, t);
  return(t);
}
ATerm debug_1_0 (ATerm w_119 (ATerm), ATerm t)
{
  ATerm e_0 = NULL,i_0 = NULL,k_0 = NULL,o_0 = NULL;
  e_0 = t;
  t = w_119(t);
  i_0 = t;
  t = term_w_6;
  k_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_0), i_0);
  o_0 = t;
  t = SSL_printnl(k_0, o_0);
  t = e_0;
  return(t);
}
static ATerm l_4 (ATerm m_63, ATerm n_63, ATerm t)
{
  ATerm r_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_63, n_63);
  t = b_5(m_63, n_63, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_0 = ATgetFirst((ATermList) t);
      {
        ATerm x_6 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_0;
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = debug_1_0(t_0, t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = term_y_6;
  return(t);
}
ATerm amb_error_0_0 (ATerm t)
{
  ATerm v_0 = NULL,z_0 = NULL,b_1 = NULL,e_1 = NULL,f_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,s_0 = NULL;
  j_1 = t;
  if(match_cons(t, sym_amb_1))
    {
      h_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_1);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, h_1);
  s_0 = t;
  t = SSLsetAnnotations(s_0, f_1);
  i_1 = t;
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_1 = NULL,h_0 = NULL,m_0 = NULL;
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
            k_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_is_string(k_1);
        v_0 = t;
        t = i_1;
        LocalPopChoice(a_7);
        {
          ATerm l_1 = NULL,r_1 = NULL,t_1 = NULL,w_1 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_7), v_0), term_f_7);
          w_1 = t;
          t = SSL_concat_strings(w_1);
          l_1 = t;
          t = term_w_6;
          r_1 = t;
          t = (ATerm) ATinsert(ATempty, l_1);
          t_1 = t;
          t = SSL_printnl(r_1, t_1);
          t = i_1;
        }
      }
    else
      {
        t = z_6;
        {
          ATerm x_1 = NULL,c_2 = NULL,g_2 = NULL,i_2 = NULL;
          t = (ATerm) ATinsert(ATempty, term_h_7);
          i_2 = t;
          t = SSL_concat_strings(i_2);
          x_1 = t;
          t = term_w_6;
          c_2 = t;
          t = (ATerm) ATinsert(ATempty, x_1);
          g_2 = t;
          t = SSL_printnl(c_2, g_2);
          t = i_1;
        }
      }
  }
  if(match_cons(t, sym_amb_1))
    {
      z_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_0;
  t = map_1_0(c_0, t);
  t = term_i_7;
  b_1 = t;
  t = term_j_7;
  e_1 = t;
  t = term_k_7;
  t = e_5(b_1, e_1, t);
  t = i_1;
  return(t);
}
ATerm list_1_0 (ATerm k_120 (ATerm), ATerm t)
{
  t = map_1_0(k_120, t);
  return(t);
}
static ATerm w_0 (ATerm t)
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
      ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
      t_7 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = t_7;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              u_7 = ATgetArgument(t, 0);
              {
                ATerm y_0 = NULL,c_1 = NULL,u_0 = NULL;
                t = SSLgetAnnotations(t_7);
                y_0 = t;
                t = SSL_is_string(u_7);
                c_1 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, c_1);
                u_0 = t;
                t = SSLsetAnnotations(u_0, y_0);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  u_7 = ATgetArgument(t, 0);
                  {
                    ATerm p_1 = NULL,s_1 = NULL,v_2 = NULL;
                    t = SSLgetAnnotations(t_7);
                    p_1 = t;
                    t = SSL_is_int(u_7);
                    s_1 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, s_1);
                    v_2 = t;
                    t = SSLsetAnnotations(v_2, p_1);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      u_7 = ATgetArgument(t, 0);
                      {
                        ATerm b_2 = NULL,e_2 = NULL,w_2 = NULL;
                        t = SSLgetAnnotations(t_7);
                        b_2 = t;
                        t = SSL_is_real(u_7);
                        e_2 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, e_2);
                        w_2 = t;
                        t = SSLsetAnnotations(w_2, b_2);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          u_7 = ATgetArgument(t, 0);
                          {
                            ATerm m_2 = NULL,o_2 = NULL,x_2 = NULL;
                            t = SSLgetAnnotations(t_7);
                            m_2 = t;
                            t = SSL_is_string(u_7);
                            o_2 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, o_2);
                            x_2 = t;
                            t = SSLsetAnnotations(x_2, m_2);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              u_7 = ATgetArgument(t, 0);
                              {
                                ATerm u_2 = NULL,c_3 = NULL,y_2 = NULL;
                                t = SSLgetAnnotations(t_7);
                                u_2 = t;
                                t = u_7;
                                t = term_expression_0_0(t);
                                c_3 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, c_3);
                                y_2 = t;
                                t = SSLsetAnnotations(y_2, u_2);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  u_7 = ATgetArgument(t, 0);
                                  v_7 = ATgetArgument(t, 1);
                                  {
                                    ATerm o_3 = NULL,t_3 = NULL,u_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,a_3 = NULL,z_2 = NULL;
                                    t = SSLgetAnnotations(t_7);
                                    o_3 = t;
                                    t = u_7;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        w_3 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(u_7);
                                    u_3 = t;
                                    t = SSL_is_string(w_3);
                                    x_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, x_3);
                                    z_2 = t;
                                    t = SSLsetAnnotations(z_2, u_3);
                                    y_3 = t;
                                    t = v_7;
                                    t = term_expression_0_0(t);
                                    t_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, y_3, t_3);
                                    a_3 = t;
                                    t = SSLsetAnnotations(a_3, o_3);
                                  }
                                }
                              else
                                {
                                  ATerm j_4 = NULL,a_5 = NULL,h_5 = NULL,f_3 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      u_7 = ATgetArgument(t, 0);
                                      v_7 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(t_7);
                                  j_4 = t;
                                  t = SSL_is_string(u_7);
                                  a_5 = t;
                                  t = v_7;
                                  t = map_1_0(term_expression_0_0, t);
                                  h_5 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, a_5, h_5);
                                  f_3 = t;
                                  t = SSLsetAnnotations(f_3, j_4);
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
        int y_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = amb_error_0_0(t);
            LocalPopChoice(y_7);
          }
        else
          {
            t = o_7;
            t = debug_1_0(w_0, t);
          }
      }
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm w_21 = NULL;
  w_21 = t;
  t = SSL_is_string(w_21);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,g_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,n_24 = NULL,o_24 = NULL,r_24 = NULL,s_24 = NULL,k_6 = NULL;
  s_24 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      e_24 = ATgetArgument(t, 0);
      g_24 = ATgetArgument(t, 1);
      i_24 = ATgetArgument(t, 2);
      j_24 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_24);
  d_24 = t;
  t = SSL_is_string(e_24);
  k_24 = t;
  t = g_24;
  t = map_1_0(d_1, t);
  n_24 = t;
  t = i_24;
  t = map_1_0(g_1, t);
  o_24 = t;
  t = j_24;
  t = strategy_expression_0_0(t);
  r_24 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, k_24, n_24, o_24, r_24);
  k_6 = t;
  t = SSLsetAnnotations(k_6, d_24);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm q_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,h_6 = NULL,g_6 = NULL;
  d_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      u_26 = ATgetArgument(t, 0);
      v_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_27);
  q_26 = t;
  t = SSL_is_string(u_26);
  w_26 = t;
  t = v_26;
  if(match_cons(t, sym_FunType_2))
    {
      z_26 = ATgetArgument(t, 0);
      a_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_26);
  x_26 = t;
  t = z_26;
  t = list_1_0(_id, t);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, b_27, a_27);
  g_6 = t;
  t = SSLsetAnnotations(g_6, x_26);
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_26, c_27);
  h_6 = t;
  t = SSLsetAnnotations(h_6, q_26);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,t_27 = NULL,j_6 = NULL,i_6 = NULL;
  t_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      j_27 = ATgetArgument(t, 0);
      m_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_27);
  i_27 = t;
  t = SSL_is_string(j_27);
  n_27 = t;
  t = m_27;
  if(match_cons(t, sym_ConstType_1))
    {
      p_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_27);
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, p_27);
  i_6 = t;
  t = SSLsetAnnotations(i_6, o_27);
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_27, q_27);
  j_6 = t;
  t = SSLsetAnnotations(j_6, i_27);
  return(t);
}
static ATerm m_1 (ATerm t)
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
      ATerm p_29 = NULL,q_29 = NULL,t_29 = NULL,v_29 = NULL;
      q_29 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = q_29;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = q_29;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  t_29 = ATgetArgument(t, 0);
                  {
                    ATerm k_8 = NULL,m_8 = NULL,b_4 = NULL;
                    t = SSLgetAnnotations(q_29);
                    k_8 = t;
                    t = t_29;
                    t = strategy_expression_0_0(t);
                    m_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, m_8);
                    b_4 = t;
                    t = SSLsetAnnotations(b_4, k_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      t_29 = ATgetArgument(t, 0);
                      {
                        ATerm s_8 = NULL,u_8 = NULL,h_4 = NULL;
                        t = SSLgetAnnotations(q_29);
                        s_8 = t;
                        t = t_29;
                        t = strategy_expression_0_0(t);
                        u_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, u_8);
                        h_4 = t;
                        t = SSLsetAnnotations(h_4, s_8);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          t_29 = ATgetArgument(t, 0);
                          v_29 = ATgetArgument(t, 1);
                          {
                            ATerm b_9 = NULL,e_9 = NULL,f_9 = NULL,d_5 = NULL;
                            t = SSLgetAnnotations(q_29);
                            b_9 = t;
                            t = t_29;
                            t = strategy_expression_0_0(t);
                            e_9 = t;
                            t = v_29;
                            t = strategy_expression_0_0(t);
                            f_9 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, e_9, f_9);
                            d_5 = t;
                            t = SSLsetAnnotations(d_5, b_9);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              t_29 = ATgetArgument(t, 0);
                              v_29 = ATgetArgument(t, 1);
                              {
                                ATerm n_9 = NULL,q_9 = NULL,r_9 = NULL,j_5 = NULL;
                                t = SSLgetAnnotations(q_29);
                                n_9 = t;
                                t = t_29;
                                t = strategy_expression_0_0(t);
                                q_9 = t;
                                t = v_29;
                                t = strategy_expression_0_0(t);
                                r_9 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, q_9, r_9);
                                j_5 = t;
                                t = SSLsetAnnotations(j_5, n_9);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  t_29 = ATgetArgument(t, 0);
                                  v_29 = ATgetArgument(t, 1);
                                  {
                                    ATerm z_9 = NULL,c_10 = NULL,d_10 = NULL,k_5 = NULL;
                                    t = SSLgetAnnotations(q_29);
                                    z_9 = t;
                                    t = t_29;
                                    t = strategy_expression_0_0(t);
                                    c_10 = t;
                                    t = v_29;
                                    t = strategy_expression_0_0(t);
                                    d_10 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, c_10, d_10);
                                    k_5 = t;
                                    t = SSLsetAnnotations(k_5, z_9);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      t_29 = ATgetArgument(t, 0);
                                      v_29 = ATgetArgument(t, 1);
                                      p_29 = ATgetArgument(t, 2);
                                      {
                                        ATerm m_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,n_5 = NULL;
                                        t = SSLgetAnnotations(q_29);
                                        m_10 = t;
                                        t = t_29;
                                        t = strategy_expression_0_0(t);
                                        r_10 = t;
                                        t = v_29;
                                        t = strategy_expression_0_0(t);
                                        s_10 = t;
                                        t = p_29;
                                        t = strategy_expression_0_0(t);
                                        t_10 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, r_10, s_10, t_10);
                                        n_5 = t;
                                        t = SSLsetAnnotations(n_5, m_10);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          t_29 = ATgetArgument(t, 0);
                                          v_29 = ATgetArgument(t, 1);
                                          {
                                            ATerm l_11 = NULL,s_11 = NULL,t_11 = NULL,o_5 = NULL;
                                            t = SSLgetAnnotations(q_29);
                                            l_11 = t;
                                            t = t_29;
                                            t = strategy_expression_0_0(t);
                                            s_11 = t;
                                            t = v_29;
                                            t = strategy_expression_0_0(t);
                                            t_11 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, s_11, t_11);
                                            o_5 = t;
                                            t = SSLsetAnnotations(o_5, l_11);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              t_29 = ATgetArgument(t, 0);
                                              v_29 = ATgetArgument(t, 1);
                                              {
                                                ATerm q_12 = NULL,y_12 = NULL,d_13 = NULL,p_5 = NULL;
                                                t = SSLgetAnnotations(q_29);
                                                q_12 = t;
                                                t = t_29;
                                                t = strategy_expression_0_0(t);
                                                y_12 = t;
                                                t = v_29;
                                                t = strategy_expression_0_0(t);
                                                d_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, y_12, d_13);
                                                p_5 = t;
                                                t = SSLsetAnnotations(p_5, q_12);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  t_29 = ATgetArgument(t, 0);
                                                  v_29 = ATgetArgument(t, 1);
                                                  p_29 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm t_13 = NULL,b_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,i_14 = NULL,j_14 = NULL,t_5 = NULL,s_5 = NULL;
                                                    t = SSLgetAnnotations(q_29);
                                                    t_13 = t;
                                                    t = t_29;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        f_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(t_29);
                                                    e_14 = t;
                                                    t = f_14;
                                                    {
                                                      ATerm i_8 = t;
                                                      int j_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = SSL_is_string(f_14);
                                                          LocalPopChoice(j_8);
                                                        }
                                                      else
                                                        {
                                                          t = i_8;
                                                          {
                                                            ATerm a_15 = NULL,c_15 = NULL,p_15 = NULL,v_15 = NULL,w_15 = NULL,r_5 = NULL;
                                                            if(match_cons(t, sym_Mod_2))
                                                              {
                                                                a_15 = ATgetArgument(t, 0);
                                                                c_15 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSLgetAnnotations(f_14);
                                                            p_15 = t;
                                                            t = SSL_is_string(a_15);
                                                            v_15 = t;
                                                            t = SSL_is_string(c_15);
                                                            w_15 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Mod_2, v_15, w_15);
                                                            r_5 = t;
                                                            t = SSLsetAnnotations(r_5, p_15);
                                                          }
                                                        }
                                                    }
                                                    i_14 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, i_14);
                                                    s_5 = t;
                                                    t = SSLsetAnnotations(s_5, e_14);
                                                    j_14 = t;
                                                    t = v_29;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    b_14 = t;
                                                    t = p_29;
                                                    t = map_1_0(term_expression_0_0, t);
                                                    d_14 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, j_14, b_14, d_14);
                                                    t_5 = t;
                                                    t = SSLsetAnnotations(t_5, t_13);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      t_29 = ATgetArgument(t, 0);
                                                      v_29 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm l_16 = NULL,o_16 = NULL,p_16 = NULL,u_5 = NULL;
                                                        t = SSLgetAnnotations(q_29);
                                                        l_16 = t;
                                                        t = SSL_is_string(t_29);
                                                        o_16 = t;
                                                        t = v_29;
                                                        t = strategy_expression_0_0(t);
                                                        p_16 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, o_16, p_16);
                                                        u_5 = t;
                                                        t = SSLsetAnnotations(u_5, l_16);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          t_29 = ATgetArgument(t, 0);
                                                          v_29 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm b_17 = NULL,f_17 = NULL,g_17 = NULL,v_5 = NULL;
                                                            t = SSLgetAnnotations(q_29);
                                                            b_17 = t;
                                                            t = SSL_is_int(t_29);
                                                            f_17 = t;
                                                            t = v_29;
                                                            t = strategy_expression_0_0(t);
                                                            g_17 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, f_17, g_17);
                                                            v_5 = t;
                                                            t = SSLsetAnnotations(v_5, b_17);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              t_29 = ATgetArgument(t, 0);
                                                              v_29 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm u_17 = NULL,z_17 = NULL,a_18 = NULL,w_5 = NULL;
                                                                t = SSLgetAnnotations(q_29);
                                                                u_17 = t;
                                                                t = SSL_is_string(t_29);
                                                                z_17 = t;
                                                                t = v_29;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                a_18 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, z_17, a_18);
                                                                w_5 = t;
                                                                t = SSLsetAnnotations(w_5, u_17);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  t_29 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm k_18 = NULL,o_18 = NULL,x_5 = NULL;
                                                                    t = SSLgetAnnotations(q_29);
                                                                    k_18 = t;
                                                                    t = t_29;
                                                                    t = strategy_expression_0_0(t);
                                                                    o_18 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, o_18);
                                                                    x_5 = t;
                                                                    t = SSLsetAnnotations(x_5, k_18);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      t_29 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm w_18 = NULL,y_18 = NULL,y_5 = NULL;
                                                                        t = SSLgetAnnotations(q_29);
                                                                        w_18 = t;
                                                                        t = t_29;
                                                                        t = strategy_expression_0_0(t);
                                                                        y_18 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, y_18);
                                                                        y_5 = t;
                                                                        t = SSLsetAnnotations(y_5, w_18);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          t_29 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm i_19 = NULL,l_19 = NULL,z_5 = NULL;
                                                                            t = SSLgetAnnotations(q_29);
                                                                            i_19 = t;
                                                                            t = t_29;
                                                                            t = strategy_expression_0_0(t);
                                                                            l_19 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, l_19);
                                                                            z_5 = t;
                                                                            t = SSLsetAnnotations(z_5, i_19);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              t_29 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm u_19 = NULL,y_19 = NULL,a_6 = NULL;
                                                                                t = SSLgetAnnotations(q_29);
                                                                                u_19 = t;
                                                                                t = t_29;
                                                                                t = strategy_expression_0_0(t);
                                                                                y_19 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, y_19);
                                                                                a_6 = t;
                                                                                t = SSLsetAnnotations(a_6, u_19);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  t_29 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm h_20 = NULL,l_20 = NULL,b_6 = NULL;
                                                                                    t = SSLgetAnnotations(q_29);
                                                                                    h_20 = t;
                                                                                    t = t_29;
                                                                                    t = term_expression_0_0(t);
                                                                                    l_20 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, l_20);
                                                                                    b_6 = t;
                                                                                    t = SSLsetAnnotations(b_6, h_20);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      t_29 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm w_20 = NULL,z_20 = NULL,c_6 = NULL;
                                                                                        t = SSLgetAnnotations(q_29);
                                                                                        w_20 = t;
                                                                                        t = t_29;
                                                                                        t = term_expression_0_0(t);
                                                                                        z_20 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, z_20);
                                                                                        c_6 = t;
                                                                                        t = SSLsetAnnotations(c_6, w_20);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          t_29 = ATgetArgument(t, 0);
                                                                                          v_29 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm l_21 = NULL,r_21 = NULL,s_21 = NULL,d_6 = NULL;
                                                                                            t = SSLgetAnnotations(q_29);
                                                                                            l_21 = t;
                                                                                            t = t_29;
                                                                                            t = map_1_0(x_0, t);
                                                                                            r_21 = t;
                                                                                            t = v_29;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            s_21 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, r_21, s_21);
                                                                                            d_6 = t;
                                                                                            t = SSLsetAnnotations(d_6, l_21);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              t_29 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm g_22 = NULL,i_22 = NULL,e_6 = NULL;
                                                                                                t = SSLgetAnnotations(q_29);
                                                                                                g_22 = t;
                                                                                                t = t_29;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                i_22 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, i_22);
                                                                                                e_6 = t;
                                                                                                t = SSLsetAnnotations(e_6, g_22);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  t_29 = ATgetArgument(t, 0);
                                                                                                  v_29 = ATgetArgument(t, 1);
                                                                                                  p_29 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm u_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,f_6 = NULL;
                                                                                                    t = SSLgetAnnotations(q_29);
                                                                                                    u_22 = t;
                                                                                                    t = SSL_is_string(t_29);
                                                                                                    a_23 = t;
                                                                                                    t = v_29;
                                                                                                    t = map_1_0(strategy_expression_0_0, t);
                                                                                                    b_23 = t;
                                                                                                    t = p_29;
                                                                                                    t = map_1_0(term_expression_0_0, t);
                                                                                                    c_23 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, a_23, b_23, c_23);
                                                                                                    f_6 = t;
                                                                                                    t = SSLsetAnnotations(f_6, u_22);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm v_23 = NULL,z_23 = NULL,b_24 = NULL,l_6 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      t_29 = ATgetArgument(t, 0);
                                                                                                      v_29 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(q_29);
                                                                                                  v_23 = t;
                                                                                                  t = t_29;
                                                                                                  t = map_1_0(a_1, t);
                                                                                                  z_23 = t;
                                                                                                  t = v_29;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  b_24 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, z_23, b_24);
                                                                                                  l_6 = t;
                                                                                                  t = SSLsetAnnotations(l_6, v_23);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
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
            t = debug_1_0(m_1, t);
          }
      }
    }
  return(t);
}
static ATerm m_4 (ATerm x_108 (ATerm), ATerm a_24, ATerm y_23, ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
  a_31 = t;
  t = x_108(t);
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_30, a_24, y_23);
  t = c_5(x_30, a_24, y_23, t);
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_31 = NULL;
        t = term_q_8;
        f_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_30, term_q_8);
        t = b_5(x_30, f_31, t);
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
      y_30 = ATgetFirst((ATermList) t);
      z_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_30, term_q_8, (ATerm) ATinsert(CheckATermList(z_30), (ATerm) ATinsert(CheckATermList(y_30), a_24)));
  t = lookup_table_0_1(x_30, t);
  e_31 = t;
  t = term_q_8;
  b_31 = t;
  t = (ATerm) ATinsert(CheckATermList(z_30), (ATerm) ATinsert(CheckATermList(y_30), a_24));
  c_31 = t;
  t = e_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(b_31, c_31, d_31, t);
  t = a_31;
  return(t);
}
static ATerm n_4 (ATerm g_63, ATerm h_63, ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL;
  h_31 = t;
  {
    ATerm t_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_63, h_63);
        t = b_5(g_63, h_63, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_8 = ATgetFirst((ATermList) t);
            g_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_8);
        {
          ATerm n_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, g_63, h_63, g_31);
          t = lookup_table_0_1(g_63, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_5(h_63, g_31, n_31, t);
          t = (ATerm) ATmakeAppl(sym__3, g_63, h_63, g_31);
        }
      }
    else
      {
        t = t_8;
        {
          ATerm t_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, g_63, h_63);
          t = lookup_table_0_1(g_63, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_4(h_63, t_31, t);
          t = (ATerm) ATmakeAppl(sym__2, g_63, h_63);
        }
      }
  }
  t = h_31;
  return(t);
}
ATerm end_scope_1_0 (ATerm u_108 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,c_32 = NULL,m_32 = NULL,n_32 = NULL,t_32 = NULL,u_32 = NULL,z_32 = NULL;
  n_32 = t;
  t = u_108(t);
  m_32 = t;
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_33 = NULL;
        t = term_q_8;
        b_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_32, term_q_8);
        t = b_5(m_32, b_33, t);
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
      c_32 = ATgetFirst((ATermList) t);
      a_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_32, term_q_8, a_32);
  t = lookup_table_0_1(m_32, t);
  z_32 = t;
  t = term_q_8;
  t_32 = t;
  t = z_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(t_32, a_32, u_32, t);
  t = c_32;
  {
    static ATerm n_1 (ATerm t);
    static ATerm n_1 (ATerm t)
    {
      ATerm g_33 = NULL;
      g_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_32, g_33);
      t = n_4(m_32, g_33, t);
      return(t);
    }
    t = map_1_0(n_1, t);
  }
  t = n_32;
  return(t);
}
ATerm restore_always_2_0 (ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t)
{
  ATerm a_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_112(t);
      t = s_112(t);
      LocalPopChoice(c_9);
    }
  else
    {
      t = a_9;
      t = s_112(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_108 (ATerm), ATerm t)
{
  ATerm t_33 = NULL,z_33 = NULL,a_34 = NULL,f_34 = NULL,h_34 = NULL,m_34 = NULL,o_34 = NULL;
  z_33 = t;
  t = t_108(t);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_33, term_q_8);
  {
    ATerm d_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_35 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_9 = ATgetArgument(t, 0);
            ATerm i_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_8;
        a_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_33, term_q_8);
        t = b_5(t_33, a_35, t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = d_9;
        t = (ATerm) ATempty;
      }
  }
  a_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_33, term_q_8, (ATerm) ATinsert(CheckATermList(a_34), (ATerm) ATempty));
  t = lookup_table_0_1(t_33, t);
  o_34 = t;
  t = term_q_8;
  f_34 = t;
  t = (ATerm) ATinsert(CheckATermList(a_34), (ATerm) ATempty);
  h_34 = t;
  t = o_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(f_34, h_34, m_34, t);
  t = z_33;
  return(t);
}
ATerm scope_2_0 (ATerm v_108 (ATerm), ATerm w_108 (ATerm), ATerm t)
{
  static ATerm o_1 (ATerm t);
  static ATerm o_1 (ATerm t)
  {
    t = end_scope_1_0(v_108, t);
    return(t);
  }
  t = begin_scope_1_0(v_108, t);
  t = restore_always_2_0(w_108, o_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_c_7;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_c_7;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,q_7 = NULL;
  n_41 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_41 = ATgetArgument(t, 0);
      l_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_41);
  j_41 = t;
  t = SSL_is_string(k_41);
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_41, l_41);
  q_7 = t;
  t = SSLsetAnnotations(q_7, j_41);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,u_41 = NULL,r_7 = NULL;
  u_41 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      p_41 = ATgetArgument(t, 0);
      q_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_41);
  o_41 = t;
  t = SSL_is_string(p_41);
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_41, q_41);
  r_7 = t;
  t = SSLsetAnnotations(r_7, o_41);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm y_32 = NULL,a_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,x_7 = NULL;
  e_33 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      a_33 = ATgetArgument(t, 0);
      c_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_33);
  y_32 = t;
  t = SSL_is_string(a_33);
  d_33 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_33, c_33);
  x_7 = t;
  t = SSLsetAnnotations(x_7, y_32);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm f_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,z_7 = NULL;
  k_33 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      h_33 = ATgetArgument(t, 0);
      i_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_33);
  f_33 = t;
  t = SSL_is_string(h_33);
  j_33 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_33, i_33);
  z_7 = t;
  t = SSLsetAnnotations(z_7, f_33);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,w_35 = NULL,x_35 = NULL,c_8 = NULL;
  x_35 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_35 = ATgetArgument(t, 0);
      j_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_35);
  h_35 = t;
  t = SSL_is_string(i_35);
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_35, j_35);
  c_8 = t;
  t = SSLsetAnnotations(c_8, h_35);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,f_36 = NULL,d_8 = NULL;
  f_36 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      z_35 = ATgetArgument(t, 0);
      a_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_36);
  y_35 = t;
  t = SSL_is_string(z_35);
  b_36 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_36, a_36);
  d_8 = t;
  t = SSLsetAnnotations(d_8, y_35);
  return(t);
}
static ATerm j_2 (ATerm t)
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
      ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
      j_40 = t;
      {
        ATerm m_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                k_40 = ATgetArgument(t, 0);
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
              static ATerm u_1 (ATerm t);
              static ATerm u_1 (ATerm t)
              {
                ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,s_7 = NULL;
                n_40 = t;
                t = term_b_7;
                o_40 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_9, k_40);
                p_40 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_b_7, (ATerm) ATmakeAppl(sym_Defined_2, term_u_9, k_40));
                t = m_4(v_1, o_40, p_40, t);
                t = n_40;
                if(match_cons(t, sym_SDefT_4))
                  {
                    r_40 = ATgetArgument(t, 0);
                    s_40 = ATgetArgument(t, 1);
                    t_40 = ATgetArgument(t, 2);
                    u_40 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_40);
                q_40 = t;
                t = r_40;
                {
                  ATerm v_9 = t;
                  int w_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_is_string(r_40);
                      LocalPopChoice(w_9);
                    }
                  else
                    {
                      t = v_9;
                      {
                        ATerm h_41 = NULL,i_41 = NULL,i_31 = NULL,l_31 = NULL,m_31 = NULL,p_7 = NULL;
                        if(match_cons(t, sym_Mod_2))
                          {
                            h_41 = ATgetArgument(t, 0);
                            i_41 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(r_40);
                        i_31 = t;
                        t = SSL_is_string(h_41);
                        l_31 = t;
                        t = SSL_is_string(i_41);
                        m_31 = t;
                        t = (ATerm) ATmakeAppl(sym_Mod_2, l_31, m_31);
                        p_7 = t;
                        t = SSLsetAnnotations(p_7, i_31);
                      }
                    }
                }
                v_40 = t;
                t = s_40;
                t = map_1_0(y_1, t);
                w_40 = t;
                t = t_40;
                t = map_1_0(z_1, t);
                x_40 = t;
                t = u_40;
                t = strategy_expression_0_0(t);
                y_40 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, v_40, w_40, x_40, y_40);
                s_7 = t;
                t = SSLsetAnnotations(s_7, q_40);
                return(t);
              }
              t = j_40;
              t = scope_2_0(q_1, u_1, t);
            }
          }
        else
          {
            t = m_9;
            if(match_cons(t, sym_ExtSDefInl_4))
              {
                k_40 = ATgetArgument(t, 0);
                l_40 = ATgetArgument(t, 1);
                m_40 = ATgetArgument(t, 2);
                i_40 = ATgetArgument(t, 3);
                {
                  ATerm y_31 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,a_8 = NULL;
                  t = SSLgetAnnotations(j_40);
                  y_31 = t;
                  t = k_40;
                  {
                    ATerm x_9 = t;
                    int y_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSL_is_string(k_40);
                        LocalPopChoice(y_9);
                      }
                    else
                      {
                        t = x_9;
                        {
                          ATerm w_32 = NULL,x_32 = NULL,u_33 = NULL,x_33 = NULL,y_33 = NULL,w_7 = NULL;
                          if(match_cons(t, sym_Mod_2))
                            {
                              w_32 = ATgetArgument(t, 0);
                              x_32 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(k_40);
                          u_33 = t;
                          t = SSL_is_string(w_32);
                          x_33 = t;
                          t = SSL_is_string(x_32);
                          y_33 = t;
                          t = (ATerm) ATmakeAppl(sym_Mod_2, x_33, y_33);
                          w_7 = t;
                          t = SSLsetAnnotations(w_7, u_33);
                        }
                      }
                  }
                  f_32 = t;
                  t = l_40;
                  t = map_1_0(a_2, t);
                  g_32 = t;
                  t = m_40;
                  t = map_1_0(d_2, t);
                  h_32 = t;
                  t = i_40;
                  t = strategy_expression_0_0(t);
                  i_32 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, f_32, g_32, h_32, i_32);
                  a_8 = t;
                  t = SSLsetAnnotations(a_8, y_31);
                }
              }
            else
              {
                ATerm j_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,e_8 = NULL;
                if(match_cons(t, sym_ExtSDef_3))
                  {
                    k_40 = ATgetArgument(t, 0);
                    l_40 = ATgetArgument(t, 1);
                    m_40 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_40);
                j_34 = t;
                t = k_40;
                {
                  ATerm a_10 = t;
                  int b_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_is_string(k_40);
                      LocalPopChoice(b_10);
                    }
                  else
                    {
                      t = a_10;
                      {
                        ATerm f_35 = NULL,g_35 = NULL,r_36 = NULL,d_37 = NULL,k_37 = NULL,b_8 = NULL;
                        if(match_cons(t, sym_Mod_2))
                          {
                            f_35 = ATgetArgument(t, 0);
                            g_35 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(k_40);
                        r_36 = t;
                        t = SSL_is_string(f_35);
                        d_37 = t;
                        t = SSL_is_string(g_35);
                        k_37 = t;
                        t = (ATerm) ATmakeAppl(sym_Mod_2, d_37, k_37);
                        b_8 = t;
                        t = SSLsetAnnotations(b_8, r_36);
                      }
                    }
                }
                p_34 = t;
                t = l_40;
                t = map_1_0(f_2, t);
                q_34 = t;
                t = m_40;
                t = map_1_0(h_2, t);
                r_34 = t;
                t = (ATerm) ATmakeAppl(sym_ExtSDef_3, p_34, q_34, r_34);
                e_8 = t;
                t = SSLsetAnnotations(e_8, j_34);
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
            t = debug_1_0(j_2, t);
          }
      }
    }
  return(t);
}
ATerm map_1_0 (ATerm g_120 (ATerm), ATerm t)
{
  static ATerm t_42 (ATerm t);
  static ATerm t_42 (ATerm t)
  {
    ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
    q_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_42;
      }
    else
      {
        ATerm u_37 = NULL,z_37 = NULL,a_38 = NULL,k_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_42 = ATgetFirst((ATermList) t);
            s_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_42);
        u_37 = t;
        t = r_42;
        t = g_120(t);
        z_37 = t;
        t = s_42;
        t = t_42(t);
        a_38 = t;
        t = (ATerm) ATinsert(CheckATermList(a_38), z_37);
        k_11 = t;
        t = SSLsetAnnotations(k_11, u_37);
      }
    return(t);
  }
  t = t_42(t);
  return(t);
}
static ATerm o_4 (ATerm p_57, ATerm q_57, ATerm t)
{
  ATerm v_42 = NULL;
  t = SSL_fputc(p_57, q_57);
  v_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_42);
  return(t);
}
static ATerm p_4 (ATerm w_41, ATerm x_41, ATerm t)
{
  ATerm w_42 = NULL;
  t = SSL_write_term_to_stream_text(w_41, x_41);
  w_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_42);
  return(t);
}
static ATerm r_4 (ATerm y_119 (ATerm), ATerm o_276, ATerm c_42, ATerm t)
{
  ATerm x_42 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_276, term_g_10);
  t = v_4(t);
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_42, c_42);
  t = y_119(t);
  t = fclose_0_0(t);
  t = c_42;
  return(t);
}
static ATerm q_4 (ATerm s_41, ATerm t_41, ATerm t)
{
  ATerm y_42 = NULL;
  t = SSL_write_term_to_stream_baf(s_41, t_41);
  y_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_42);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_10 = ATgetArgument(t, 0);
      if(match_cons(h_10, sym_Stream_1))
        {
          h_43 = ATgetArgument(h_10, 0);
        }
      else
        _fail(t);
      i_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(h_43, i_43, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_10 = ATgetArgument(t, 0);
      if(match_cons(i_10, sym_Stream_1))
        {
          m_43 = ATgetArgument(i_10, 0);
        }
      else
        _fail(t);
      n_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_4(m_43, n_43, t);
  j_43 = t;
  t = term_j_10;
  k_43 = t;
  t = j_43;
  if(match_cons(t, sym_Stream_1))
    {
      l_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, j_43);
  t = o_4(k_43, l_43, t);
  return(t);
}
ATerm output_1_0 (ATerm y_139 (ATerm), ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  t = y_139(t);
  a_43 = t;
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_43 = NULL,c_43 = NULL;
        t = term_n_10;
        b_43 = t;
        t = term_o_10;
        c_43 = t;
        t = term_p_10;
        t = b_5(b_43, c_43, t);
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        t = term_q_10;
      }
  }
  z_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_42, a_43);
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_43 = NULL,g_43 = NULL;
        t = term_n_10;
        d_43 = t;
        t = term_w_10;
        g_43 = t;
        t = term_x_10;
        t = b_5(d_43, g_43, t);
        t = (ATerm) ATmakeAppl(sym__2, z_42, a_43);
        LocalPopChoice(v_10);
        if(match_cons(t, sym__2))
          {
            ATerm y_10 = ATgetArgument(t, 0);
            ATerm z_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_4(k_2, z_42, a_43, t);
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
        t = r_4(l_2, z_42, a_43, t);
      }
  }
  return(t);
}
static ATerm b_44 (ATerm v_43, ATerm t)
{
  t = SSL_fclose(v_43);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL;
  z_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_43 = ATgetArgument(t, 0);
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_43);
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            t = b_44(z_43, t);
          }
      }
    }
  else
    {
      t = b_44(z_43, t);
    }
  return(t);
}
static ATerm s_4 (ATerm y_41, ATerm t)
{
  t = SSL_read_term_from_stream(y_41);
  return(t);
}
static ATerm t_4 (ATerm v_55, ATerm w_55, ATerm t)
{
  t = SSL_strcat(v_55, w_55);
  return(t);
}
static ATerm u_4 (ATerm r_57, ATerm s_57, ATerm t)
{
  ATerm c_44 = NULL;
  t = SSL_fopen(r_57, s_57);
  c_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_44);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_44 = NULL;
  t = SSL_stdin_stream();
  d_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_44);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_44 = NULL;
  t = SSL_stdout_stream();
  e_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_44);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_44 = NULL;
  t = SSL_stderr_stream();
  f_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_44);
  return(t);
}
static ATerm m_45 (ATerm l_44, ATerm t)
{
  ATerm m_44 = NULL;
  t = SSL_explode_term(l_44);
  if(match_cons(t, sym__2))
    {
      ATerm e_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_11 = ATgetArgument(t, 1);
        if(((ATgetType(f_11) == AT_LIST) && !(ATisEmpty(f_11))))
          {
            m_44 = ATgetFirst((ATermList) f_11);
            {
              ATerm g_11 = (ATerm) ATgetNext((ATermList) f_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_44;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_44;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_44;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_44;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_45 (ATerm p_44, ATerm q_44, ATerm r_44, ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,x_44 = NULL,n_11 = NULL;
  t = SSLgetAnnotations(r_44);
  u_44 = t;
  t = p_44;
  if(match_cons(t, sym_Path_1))
    {
      x_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_44, q_44);
  n_11 = t;
  t = SSLsetAnnotations(n_11, u_44);
  if(match_cons(t, sym__2))
    {
      s_44 = ATgetArgument(t, 0);
      t_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4(s_44, t_44, t);
  return(t);
}
static ATerm o_45 (ATerm z_44, ATerm a_45, ATerm b_45, ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL,h_45 = NULL,o_11 = NULL;
  t = SSLgetAnnotations(b_45);
  e_45 = t;
  t = SSL_is_string(z_44);
  h_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, a_45);
  o_11 = t;
  t = SSLsetAnnotations(o_11, e_45);
  if(match_cons(t, sym__2))
    {
      c_45 = ATgetArgument(t, 0);
      d_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4(c_45, d_45, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
  j_45 = t;
  if(match_cons(t, sym__2))
    {
      k_45 = ATgetArgument(t, 0);
      l_45 = ATgetArgument(t, 1);
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_45(j_45, t);
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            {
              ATerm j_11 = t;
              int m_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_45(k_45, l_45, j_45, t);
                  LocalPopChoice(m_11);
                }
              else
                {
                  t = j_11;
                  t = o_45(k_45, l_45, j_45, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_45(j_45, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL,x_45 = NULL;
  x_45 = t;
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_45, term_r_11);
        t = v_4(t);
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        {
          ATerm w_38 = NULL,e_39 = NULL;
          t = term_u_11;
          e_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_11, x_45);
          t = t_4(e_39, x_45, t);
          w_38 = t;
          t = SSL_perror(w_38);
          _fail(t);
        }
      }
  }
  r_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_4(s_45, t);
  q_45 = t;
  t = r_45;
  t = fclose_0_0(t);
  t = q_45;
  return(t);
}
ATerm input_1_0 (ATerm z_139 (ATerm), ATerm t)
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_46 = NULL,b_46 = NULL;
      t = term_n_10;
      a_46 = t;
      t = term_x_11;
      b_46 = t;
      t = term_z_11;
      t = b_5(a_46, b_46, t);
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      t = term_b_12;
    }
  t = ReadFromFile_0_0(t);
  t = z_139(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL;
  t = term_n_10;
  c_46 = t;
  t = term_e_12;
  d_46 = t;
  t = term_f_12;
  t = b_5(c_46, d_46, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
  f_46 = t;
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_46;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_12 = ATgetFirst((ATermList) t);
                ATerm l_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_46;
          }
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        t = (ATerm) ATinsert(ATempty, f_46);
      }
  }
  g_46 = t;
  t = term_q_10;
  h_46 = t;
  t = SSL_printnl(h_46, g_46);
  t = f_46;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_46 = ATgetFirst((ATermList) t);
      n_46 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_46 = NULL,s_46 = NULL;
        static ATerm n_2 (ATerm t);
        static ATerm n_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_46)), not_null(s_46));
          return(t);
        }
        t = n_46;
        t = q_0(t);
        if(((r_46 != NULL) && (r_46 != t)))
          _fail(t);
        else
          r_46 = t;
        t = m_46;
        t = p_0(t);
        if(((s_46 != NULL) && (s_46 != t)))
          _fail(t);
        else
          s_46 = t;
        t = n_46;
        t = reverse_acc_2_0(p_0, n_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_7;
      t = q_0(t);
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,y_11 = NULL;
  c_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_47);
  a_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_47);
  y_11 = t;
  t = SSLsetAnnotations(y_11, a_47);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm g_47 = NULL;
  g_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_47), term_n_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm x_141 (ATerm), ATerm y_141 (ATerm), ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL;
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_46 = NULL,z_46 = NULL;
      t = term_n_10;
      y_46 = t;
      t = term_e_12;
      z_46 = t;
      t = term_f_12;
      t = b_5(y_46, z_46, t);
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      t = fetch_1_0(p_2, t);
    }
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_141(t);
        t = echo_0_0(t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
      }
  }
  t = term_x_12;
  t = echo_0_0(t);
  t = term_z_12;
  w_46 = t;
  t = term_a_13;
  x_46 = t;
  t = term_b_13;
  t = b_5(w_46, x_46, t);
  t = reverse_acc_2_0(_id, q_2, t);
  t = map_1_0(r_2, t);
  {
    ATerm c_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_47 = NULL;
        t = y_141(t);
        h_47 = t;
        t = (ATerm) ATinsert(CheckATermList(h_47), term_f_13);
        t = echo_0_0(t);
        LocalPopChoice(e_13);
      }
    else
      {
        t = c_13;
      }
  }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL,a_12 = NULL;
  p_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_47);
  n_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_47);
  a_12 = t;
  t = SSLsetAnnotations(a_12, n_47);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_47 = NULL;
  k_47 = t;
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_47 = NULL,m_47 = NULL;
        t = term_n_10;
        l_47 = t;
        t = term_e_12;
        m_47 = t;
        t = term_f_12;
        t = b_5(l_47, m_47, t);
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        t = fetch_1_0(s_2, t);
      }
  }
  t = k_47;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm r_47 = NULL;
  r_47 = t;
  if(match_string(t, "-k"))
    {
      t = r_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_47;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
  s_47 = t;
  t = SSL_string_to_int(s_47);
  t_47 = t;
  t = term_i_13;
  u_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_13, t_47);
  t = e_5(u_47, t_47, t);
  t = s_47;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_j_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_2, b_3, d_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm w_47 = NULL;
  w_47 = t;
  if(match_string(t, "-S"))
    {
      t = w_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_47;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL;
  t = term_k_13;
  x_47 = t;
  t = term_l_13;
  y_47 = t;
  t = term_m_13;
  t = e_5(x_47, y_47, t);
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
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL;
  z_47 = t;
  t = SSL_string_to_int(z_47);
  a_48 = t;
  t = term_k_13;
  b_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_13, a_48);
  t = e_5(b_48, a_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_47);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_p_13;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL;
  t = term_q_13;
  c_48 = t;
  t = term_b_7;
  d_48 = t;
  t = term_r_13;
  t = e_5(c_48, d_48, t);
  t = term_s_13;
  return(t);
}
static ATerm n_3 (ATerm t)
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
      t = Option_3_0(e_3, g_3, h_3, t);
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
            t = Option_3_0(l_3, m_3, n_3, t);
          }
      }
    }
  return(t);
}
static ATerm e_5 (ATerm l_76, ATerm m_76, ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL;
  t = term_n_10;
  e_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_10, l_76, m_76);
  t = lookup_table_0_1(e_48, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(l_76, m_76, f_48, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_10, l_76, m_76);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL;
      t = term_b_7;
      t = g_0(t);
      l_48 = t;
      t = term_z_12;
      m_48 = t;
      t = term_a_13;
      n_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_12, term_a_13, l_48);
      t = c_5(m_48, n_48, l_48, t);
      _fail(t);
    }
  else
    {
      ATerm q_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_48 = ATgetFirst((ATermList) t);
          k_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_48;
      t = d_0(t);
      t = term_b_7;
      t = f_0(t);
      q_48 = t;
      t = (ATerm) ATinsert(CheckATermList(k_48), q_48);
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm s_48 = NULL;
  s_48 = t;
  if(match_string(t, "-o"))
    {
      t = s_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_48;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL;
  t_48 = t;
  t = term_o_10;
  u_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_10, t_48);
  t = e_5(u_48, t_48, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_48);
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
static ATerm c_5 (ATerm b_63, ATerm c_63, ATerm a_63, ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,b_49 = NULL,c_49 = NULL;
  w_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_63, c_63);
  {
    ATerm a_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_14 = ATgetArgument(t, 0);
            ATerm h_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_63, c_63);
        t = b_5(b_63, c_63, t);
        LocalPopChoice(c_14);
      }
    else
      {
        t = a_14;
        t = (ATerm) ATempty;
      }
  }
  x_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_63, c_63, (ATerm) ATinsert(CheckATermList(x_48), a_63));
  t = lookup_table_0_1(b_63, t);
  c_49 = t;
  t = (ATerm) ATinsert(CheckATermList(x_48), a_63);
  y_48 = t;
  t = c_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(c_63, y_48, b_49, t);
  t = w_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL;
      t = term_b_7;
      t = n_0(t);
      n_49 = t;
      t = term_z_12;
      o_49 = t;
      t = term_a_13;
      p_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_12, term_a_13, n_49);
      t = c_5(o_49, p_49, n_49, t);
      _fail(t);
    }
  else
    {
      ATerm t_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_49 = ATgetFirst((ATermList) t);
          k_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_49 = ATgetFirst((ATermList) t);
          m_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_49;
      t = j_0(t);
      t = l_49;
      t = l_0(t);
      t_49 = t;
      t = (ATerm) ATinsert(CheckATermList(m_49), t_49);
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm v_49 = NULL;
  v_49 = t;
  if(match_string(t, "-i"))
    {
      t = v_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_49;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL;
  w_49 = t;
  t = term_x_11;
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, w_49);
  t = e_5(x_49, w_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_49);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_k_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_3, v_3, z_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_7;
  t = whoami_0_0(t);
  y_49 = t;
  t = term_w_6;
  a_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_14), y_49);
  b_50 = t;
  t = SSL_printnl(a_50, b_50);
  t = term_j_7;
  z_49 = t;
  t = SSL_exit(z_49);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL;
  t = term_n_10;
  c_50 = t;
  t = term_e_12;
  d_50 = t;
  t = term_f_12;
  t = b_5(c_50, d_50, t);
  return(t);
}
static ATerm w_4 (ATerm k_61, ATerm l_61, ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_61, l_61);
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      t = SSL_addr(k_61, l_61);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_127 (ATerm), ATerm g_127 (ATerm), ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL;
  f_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_50;
      t = f_127(t);
    }
  else
    {
      ATerm k_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_50 = ATgetFirst((ATermList) t);
          h_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_50;
      t = foldr_2_0(f_127, g_127, t);
      k_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_50, k_50);
      t = g_127(t);
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
static ATerm c_4 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL;
  if(match_cons(t, sym__2))
    {
      p_39 = ATgetArgument(t, 0);
      q_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4(p_39, q_39, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_50 = NULL,h_39 = NULL,l_39 = NULL;
  t = times_0_0(t);
  l_39 = t;
  t = SSL_explode_term(l_39);
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      h_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_39;
  t = foldr_2_0(a_4, c_4, t);
  n_50 = t;
  t = SSL_TicksToSeconds(n_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL;
  y_50 = t;
  if(match_cons(t, sym__2))
    {
      z_50 = ATgetArgument(t, 0);
      a_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_51;
        if((z_50 != t))
          {
            _fail(t);
          }
        t = y_50;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = (ATerm) ATmakeAppl(sym__2, z_50, a_51);
        {
          ATerm r_14 = t;
          int s_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_50, a_51);
              LocalPopChoice(s_14);
            }
          else
            {
              t = r_14;
              t = SSL_gtr(z_50, a_51);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, z_50, a_51);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_136 (ATerm), ATerm t)
{
  ATerm e_51 = NULL;
  e_51 = t;
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
        t = term_n_10;
        h_51 = t;
        t = term_k_13;
        i_51 = t;
        t = term_v_14;
        t = b_5(h_51, i_51, t);
        g_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_51, term_j_7);
        t = geq_0_0(t);
        t = e_51;
        t = u_136(t);
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = e_51;
      }
  }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,n_51 = NULL,o_51 = NULL;
  t = run_time_0_0(t);
  k_51 = t;
  t = term_b_7;
  t = whoami_0_0(t);
  l_51 = t;
  t = term_w_6;
  n_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_14), k_51), term_w_14), l_51);
  o_51 = t;
  t = SSL_printnl(n_51, o_51);
  t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_14), k_51), term_w_14), l_51));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_13;
  p_51 = t;
  t = SSL_exit(p_51);
  return(t);
}
static ATerm f_5 (ATerm m_67, ATerm n_67, ATerm o_67, ATerm t)
{
  ATerm q_51 = NULL;
  t = SSL_hashtable_put(o_67, m_67, n_67);
  q_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_51);
  return(t);
}
static ATerm g_5 (ATerm p_67, ATerm q_67, ATerm t)
{
  t = SSL_hashtable_get(q_67, p_67);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_64, ATerm t)
{
  ATerm z_51 = NULL;
  t = table_hashtable_0_0(t);
  z_51 = t;
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_42 = NULL;
        t = z_51;
        if(match_cons(t, sym_Hashtable_1))
          {
            b_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_5(n_64, b_42, t);
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        {
          ATerm o_43 = NULL;
          t = n_64;
          t = table_create_0_0(t);
          t = z_51;
          if(match_cons(t, sym_Hashtable_1))
            {
              o_43 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_5(n_64, o_43, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_67, ATerm v_67, ATerm t)
{
  ATerm c_52 = NULL;
  t = SSL_hashtable_create(u_67, v_67);
  c_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_52);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,h_52 = NULL,i_52 = NULL;
  d_52 = t;
  t = term_b_15;
  h_52 = t;
  t = term_d_15;
  i_52 = t;
  t = d_52;
  t = new_hashtable_0_2(h_52, i_52, t);
  e_52 = t;
  t = d_52;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(d_52, e_52, f_52, t);
  t = d_52;
  return(t);
}
static ATerm y_4 (ATerm r_67, ATerm s_67, ATerm t)
{
  ATerm j_52 = NULL;
  t = SSL_hashtable_remove(s_67, r_67);
  j_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_52);
  return(t);
}
static ATerm z_4 (ATerm w_67, ATerm t)
{
  ATerm k_52 = NULL;
  t = SSL_hashtable_destroy(w_67);
  k_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_52);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm l_52 = NULL;
  t = SSL_table_hashtable();
  l_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_52);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
  m_52 = t;
  t = table_hashtable_0_0(t);
  n_52 = t;
  t = lookup_table_0_1(m_52, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_4(p_52, t);
  t = n_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_4(m_52, o_52, t);
  t = m_52;
  return(t);
}
ATerm fetch_1_0 (ATerm q_120 (ATerm), ATerm t)
{
  static ATerm m_53 (ATerm t);
  static ATerm m_53 (ATerm t)
  {
    ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL;
    j_53 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_53 = ATgetFirst((ATermList) t);
        l_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_15 = t;
      int f_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_44 = NULL,p_45 = NULL,c_12 = NULL;
          t = SSLgetAnnotations(j_53);
          i_44 = t;
          t = k_53;
          t = q_120(t);
          p_45 = t;
          t = (ATerm) ATinsert(CheckATermList(l_53), p_45);
          c_12 = t;
          t = SSLsetAnnotations(c_12, i_44);
          LocalPopChoice(f_15);
        }
      else
        {
          t = e_15;
          {
            ATerm h_48 = NULL,z_48 = NULL,d_12 = NULL;
            t = SSLgetAnnotations(j_53);
            h_48 = t;
            t = l_53;
            t = m_53(t);
            z_48 = t;
            t = (ATerm) ATinsert(CheckATermList(z_48), k_53);
            d_12 = t;
            t = SSLsetAnnotations(d_12, h_48);
          }
        }
    }
    return(t);
  }
  t = m_53(t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL;
  t = term_g_15;
  p_53 = t;
  t = term_b_7;
  q_53 = t;
  t = term_h_15;
  t = e_5(p_53, q_53, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_i_15;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL;
  t = term_g_15;
  t_53 = t;
  t = term_b_7;
  u_53 = t;
  t = term_h_15;
  t = e_5(t_53, u_53, t);
  t = term_j_15;
  r_53 = t;
  t = term_b_7;
  s_53 = t;
  t = term_k_15;
  t = e_5(r_53, s_53, t);
  t = term_l_15;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_m_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_4, f_4, g_4, t);
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      t = Option_3_0(i_4, k_4, x_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,i_12 = NULL;
  a_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_53 = ATgetFirst((ATermList) t);
      x_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_54);
  v_53 = t;
  t = w_53;
  t = l_100(t);
  y_53 = t;
  t = x_53;
  t = m_100(t);
  z_53 = t;
  t = (ATerm) ATinsert(CheckATermList(z_53), y_53);
  i_12 = t;
  t = SSLsetAnnotations(i_12, v_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_141 (ATerm), ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL,k_54 = NULL,l_54 = NULL,k_12 = NULL;
  f_54 = t;
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_15;
        t = s_141(t);
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
      }
  }
  t = f_54;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_54 = ATgetFirst((ATermList) t);
      i_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_54);
  g_54 = t;
  t = term_e_12;
  l_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_12, h_54);
  t = e_5(l_54, h_54, t);
  t = i_54;
  {
    static ATerm v_54 (ATerm t);
    static ATerm v_54 (ATerm t)
    {
      ATerm t_15 = t;
      int u_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_54 = NULL;
              o_54 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_54;
              LocalPopChoice(y_15);
            }
          else
            {
              t = x_15;
              t = s_141(t);
              t = Cons_2_0(_id, v_54, t);
            }
          LocalPopChoice(u_15);
        }
      else
        {
          t = t_15;
          {
            ATerm r_54 = NULL,s_54 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_54 = ATgetFirst((ATermList) t);
                s_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_54), (ATerm) ATmakeAppl(sym_Undefined_1, r_54));
          }
        }
      return(t);
    }
    t = v_54(t);
  }
  k_54 = t;
  t = (ATerm) ATinsert(CheckATermList(k_54), (ATerm) ATmakeAppl(sym_Program_1, h_54));
  k_12 = t;
  t = SSLsetAnnotations(k_12, g_54);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm i_55 = NULL;
  i_55 = t;
  if(match_string(t, "--help"))
    {
      t = i_55;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_55;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_55;
        }
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL;
  t = term_z_15;
  j_55 = t;
  t = term_b_7;
  k_55 = t;
  t = term_a_16;
  t = e_5(j_55, k_55, t);
  t = term_b_16;
  return(t);
}
static ATerm q_5 (ATerm t)
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
ATerm parse_options_3_0 (ATerm p_141 (ATerm), ATerm q_141 (ATerm), ATerm r_141 (ATerm), ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL;
  c_55 = t;
  t = term_z_12;
  d_55 = t;
  t = term_d_16;
  t = lookup_table_0_1(d_55, t);
  h_55 = t;
  t = term_a_13;
  e_55 = t;
  t = (ATerm) ATempty;
  f_55 = t;
  t = h_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(e_55, f_55, g_55, t);
  t = c_55;
  {
    static ATerm i_5 (ATerm t);
    static ATerm i_5 (ATerm t)
    {
      ATerm e_16 = t;
      int f_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_141(t);
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
                t = Option_3_0(l_5, m_5, q_5, t);
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
    t = parse_options_p__1_0(i_5, t);
  }
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_55 = NULL;
        x_55 = t;
        {
          ATerm k_16 = t;
          int m_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_50 = NULL;
              t = x_55;
              {
                ATerm n_16 = t;
                int q_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_51 = NULL,r_51 = NULL;
                    t = term_n_10;
                    d_51 = t;
                    t = term_z_15;
                    r_51 = t;
                    t = term_r_16;
                    t = b_5(d_51, r_51, t);
                    LocalPopChoice(q_16);
                  }
                else
                  {
                    t = n_16;
                    t = fetch_1_0(m_6, t);
                  }
              }
              t = x_55;
              t = q_141(t);
              t = term_l_13;
              r_50 = t;
              t = SSL_exit(r_50);
              LocalPopChoice(m_16);
            }
          else
            {
              t = k_16;
              {
                ATerm s_52 = NULL,b_54 = NULL,c_54 = NULL;
                t = term_n_10;
                b_54 = t;
                t = term_g_15;
                c_54 = t;
                t = term_s_16;
                t = b_5(b_54, c_54, t);
                t = x_55;
                t = r_141(t);
                t = term_l_13;
                s_52 = t;
                t = SSL_exit(s_52);
              }
            }
        }
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        {
          ATerm t_16 = t;
          int u_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL;
              static ATerm n_6 (ATerm t);
              static ATerm n_6 (ATerm t)
              {
                ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,m_12 = NULL;
                d_56 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_56 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_56);
                b_56 = t;
                t = c_56;
                if(((a_55 != NULL) && (a_55 != t)))
                  _fail(t);
                else
                  a_55 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_56);
                m_12 = t;
                t = SSLsetAnnotations(m_12, b_56);
                return(t);
              }
              t = fetch_1_0(n_6, t);
              t = term_w_6;
              z_55 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_55)), term_v_16);
              a_56 = t;
              t = SSL_printnl(z_55, a_56);
              t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_55)), term_v_16));
              t = q_141(t);
              t = term_j_7;
              y_55 = t;
              t = SSL_exit(y_55);
              LocalPopChoice(u_16);
            }
          else
            {
              t = t_16;
            }
        }
      }
  }
  b_55 = t;
  t = term_z_12;
  t = table_destroy_0_0(t);
  t = b_55;
  return(t);
}
ATerm option_wrap_5_0 (ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm u_139 (ATerm), ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL;
  t = parse_options_3_0(s_139, t_139, u_139, t);
  i_56 = t;
  t = term_w_16;
  t = table_create_0_0(t);
  t = term_w_16;
  j_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_16, term_x_16, i_56);
  t = lookup_table_0_1(j_56, t);
  m_56 = t;
  t = term_x_16;
  k_56 = t;
  t = m_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(k_56, i_56, l_56, t);
  t = i_56;
  t = v_139(t);
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_139(t);
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
  ATerm a_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = a_17;
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(e_17);
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
  ATerm r_56 = NULL,s_56 = NULL;
  t = term_w_10;
  r_56 = t;
  t = term_b_7;
  s_56 = t;
  t = term_l_17;
  t = e_5(r_56, s_56, t);
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
      ATerm l_57 = NULL,m_57 = NULL,x_54 = NULL,z_54 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,t_57 = NULL,u_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,u_12 = NULL,t_12 = NULL,s_12 = NULL,r_12 = NULL;
      l_57 = t;
      if(match_cons(t, sym_Specification_1))
        {
          m_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_57);
      x_54 = t;
      t = m_57;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_56 = ATgetFirst((ATermList) t);
          o_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_57);
      z_54 = t;
      t = o_56;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_57 = ATgetFirst((ATermList) t);
          u_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_56);
      q_56 = t;
      t = t_57;
      if(match_cons(t, sym_Strategies_1))
        {
          b_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_57);
      a_58 = t;
      t = b_58;
      t = map_1_0(strategy_definition_0_0, t);
      c_58 = t;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, c_58);
      r_12 = t;
      t = SSLsetAnnotations(r_12, a_58);
      d_58 = t;
      t = u_57;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(u_57), d_58);
      s_12 = t;
      t = SSLsetAnnotations(s_12, q_56);
      z_57 = t;
      t = (ATerm) ATinsert(CheckATermList(z_57), n_56);
      t_12 = t;
      t = SSLsetAnnotations(t_12, z_54);
      p_56 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, p_56);
      u_12 = t;
      t = SSLsetAnnotations(u_12, x_54);
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      {
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = amb_error_0_0(t);
            LocalPopChoice(r_17);
          }
        else
          {
            t = q_17;
            t = debug_1_0(v_6, t);
          }
      }
    }
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_57 = NULL,o_57 = NULL,v_57 = NULL;
        n_57 = t;
        t = term_n_10;
        o_57 = t;
        t = term_i_7;
        v_57 = t;
        t = term_v_17;
        t = b_5(o_57, v_57, t);
        t = n_57;
        LocalPopChoice(t_17);
        {
          ATerm w_57 = NULL;
          t = term_j_7;
          w_57 = t;
          t = SSL_exit(w_57);
        }
      }
    else
      {
        t = s_17;
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
