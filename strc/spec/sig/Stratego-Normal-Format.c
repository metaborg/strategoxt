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
Symbol sym_Undefined_0;
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
ATerm term_y_15;
ATerm term_w_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_t_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_p_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_m_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_z_7;
ATerm term_w_7;
ATerm term_x_6;
ATerm term_n_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("    - ", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: ambiguity in ast. Alternatives: ", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("amb-error", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym__2, term_f_6, term_g_6);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym__2, term_e_8, term_f_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__2, term_e_8, term_l_8);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym__2, term_e_8, term_o_9);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym__2, term_e_8, term_r_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_j_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_w_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_b_10);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__2, term_e_8, term_u_10);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__2, term_g_13, term_b_10);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__2, term_l_13, term_b_10);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_b_10);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__3, term_i_10, term_j_10, (ATerm) ATempty);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, term_e_8, term_z_13);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym__2, term_e_8, term_g_13);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_l_8, term_b_10);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym__2, term_e_8, term_f_6);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: not a stratego-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm j_4 (ATerm o_64, ATerm p_64, ATerm t);
ATerm debug_1_0 (ATerm q_119 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm e_0 (ATerm t);
ATerm amb_error_0_0 (ATerm t);
ATerm list_1_0 (ATerm e_120 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
ATerm term_expression_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm a_120 (ATerm), ATerm t);
static ATerm w_3 (ATerm j_57, ATerm k_57, ATerm t);
static ATerm x_3 (ATerm q_41, ATerm r_41, ATerm t);
static ATerm z_3 (ATerm s_119 (ATerm), ATerm j_274, ATerm w_41, ATerm t);
static ATerm y_3 (ATerm m_41, ATerm n_41, ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm output_1_0 (ATerm s_139 (ATerm), ATerm t);
static ATerm e_40 (ATerm y_39, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm a_4 (ATerm s_41, ATerm t);
static ATerm b_4 (ATerm p_55, ATerm q_55, ATerm t);
static ATerm c_4 (ATerm l_57, ATerm m_57, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_41 (ATerm o_40, ATerm t);
static ATerm x_41 (ATerm s_40, ATerm t_40, ATerm u_40, ATerm t);
static ATerm y_41 (ATerm c_41, ATerm d_41, ATerm e_41, ATerm t);
static ATerm d_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm t_139 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm default_system_usage_2_0 (ATerm r_141 (ATerm), ATerm s_141 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_4 (ATerm f_76, ATerm g_76, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm k_4 (ATerm v_62, ATerm w_62, ATerm u_62, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_4 (ATerm e_61, ATerm f_61, ATerm t);
ATerm foldr_2_0 (ATerm z_126 (ATerm), ATerm a_127 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm o_136 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm n_4 (ATerm g_67, ATerm h_67, ATerm i_67, ATerm t);
static ATerm o_4 (ATerm j_67, ATerm k_67, ATerm t);
ATerm lookup_table_0_1 (ATerm h_64, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_67, ATerm p_67, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm g_4 (ATerm l_67, ATerm m_67, ATerm t);
static ATerm h_4 (ATerm q_67, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_120 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm f_100 (ATerm), ATerm g_100 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_141 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm parse_options_3_0 (ATerm j_141 (ATerm), ATerm k_141 (ATerm), ATerm l_141 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm m_139 (ATerm), ATerm n_139 (ATerm), ATerm o_139 (ATerm), ATerm p_139 (ATerm), ATerm q_139 (ATerm), ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm j_4 (ATerm o_64, ATerm p_64, ATerm t)
{
  ATerm a_0 = NULL;
  t = lookup_table_0_1(o_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_4(p_64, a_0, t);
  return(t);
}
ATerm debug_1_0 (ATerm q_119 (ATerm), ATerm t)
{
  ATerm c_0 = NULL,i_0 = NULL,m_0 = NULL,n_0 = NULL;
  c_0 = t;
  t = q_119(t);
  i_0 = t;
  t = term_c_6;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_0), i_0);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  t = c_0;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = debug_1_0(e_0, t);
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_d_6;
  return(t);
}
ATerm amb_error_0_0 (ATerm t)
{
  ATerm r_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL,d_1 = NULL,f_1 = NULL,i_1 = NULL,d_2 = NULL;
  i_1 = t;
  if(match_cons(t, sym_amb_1))
    {
      d_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_1);
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, d_1);
  d_2 = t;
  t = SSLsetAnnotations(d_2, x_0);
  f_1 = t;
  t = term_c_6;
  v_0 = t;
  t = (ATerm) ATinsert(ATempty, term_e_6);
  w_0 = t;
  t = SSL_printnl(v_0, w_0);
  t = f_1;
  if(match_cons(t, sym_amb_1))
    {
      r_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_0;
  t = map_1_0(b_0, t);
  t = term_f_6;
  t_0 = t;
  t = term_g_6;
  u_0 = t;
  t = term_h_6;
  t = m_4(t_0, u_0, t);
  t = f_1;
  return(t);
}
ATerm list_1_0 (ATerm e_120 (ATerm), ATerm t)
{
  t = map_1_0(e_120, t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_i_6;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL;
      u_6 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = u_6;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              v_6 = ATgetArgument(t, 0);
              {
                ATerm k_0 = NULL,y_0 = NULL,f_2 = NULL;
                t = SSLgetAnnotations(u_6);
                k_0 = t;
                t = SSL_is_string(v_6);
                y_0 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, y_0);
                f_2 = t;
                t = SSLsetAnnotations(f_2, k_0);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  v_6 = ATgetArgument(t, 0);
                  {
                    ATerm g_1 = NULL,j_1 = NULL,h_2 = NULL;
                    t = SSLgetAnnotations(u_6);
                    g_1 = t;
                    t = SSL_is_int(v_6);
                    j_1 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, j_1);
                    h_2 = t;
                    t = SSLsetAnnotations(h_2, g_1);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      v_6 = ATgetArgument(t, 0);
                      {
                        ATerm p_1 = NULL,r_1 = NULL,i_2 = NULL;
                        t = SSLgetAnnotations(u_6);
                        p_1 = t;
                        t = SSL_is_real(v_6);
                        r_1 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, r_1);
                        i_2 = t;
                        t = SSLsetAnnotations(i_2, p_1);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          v_6 = ATgetArgument(t, 0);
                          {
                            ATerm x_1 = NULL,z_1 = NULL,j_2 = NULL;
                            t = SSLgetAnnotations(u_6);
                            x_1 = t;
                            t = SSL_is_string(v_6);
                            z_1 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, z_1);
                            j_2 = t;
                            t = SSLsetAnnotations(j_2, x_1);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              v_6 = ATgetArgument(t, 0);
                              {
                                ATerm q_2 = NULL,t_2 = NULL,k_2 = NULL;
                                t = SSLgetAnnotations(u_6);
                                q_2 = t;
                                t = v_6;
                                t = term_expression_0_0(t);
                                t_2 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, t_2);
                                k_2 = t;
                                t = SSLsetAnnotations(k_2, q_2);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  v_6 = ATgetArgument(t, 0);
                                  w_6 = ATgetArgument(t, 1);
                                  {
                                    ATerm g_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,o_3 = NULL,p_3 = NULL,m_2 = NULL,l_2 = NULL;
                                    t = SSLgetAnnotations(u_6);
                                    g_3 = t;
                                    t = v_6;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        l_3 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(v_6);
                                    k_3 = t;
                                    t = SSL_is_string(l_3);
                                    o_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, o_3);
                                    l_2 = t;
                                    t = SSLsetAnnotations(l_2, k_3);
                                    p_3 = t;
                                    t = w_6;
                                    t = term_expression_0_0(t);
                                    j_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, p_3, j_3);
                                    m_2 = t;
                                    t = SSLsetAnnotations(m_2, g_3);
                                  }
                                }
                              else
                                {
                                  ATerm p_4 = NULL,u_4 = NULL,y_4 = NULL,n_2 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      v_6 = ATgetArgument(t, 0);
                                      w_6 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(u_6);
                                  p_4 = t;
                                  t = SSL_is_string(v_6);
                                  u_4 = t;
                                  t = w_6;
                                  t = map_1_0(term_expression_0_0, t);
                                  y_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, u_4, y_4);
                                  n_2 = t;
                                  t = SSLsetAnnotations(n_2, p_4);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(k_6);
    }
  else
    {
      t = j_6;
      {
        ATerm l_6 = t;
        int m_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = amb_error_0_0(t);
            LocalPopChoice(m_6);
          }
        else
          {
            t = l_6;
            t = debug_1_0(h_0, t);
          }
      }
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  t = SSL_is_string(a_20);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,f_23 = NULL,g_23 = NULL,i_23 = NULL,m_23 = NULL,o_23 = NULL,p_23 = NULL,r_23 = NULL,t_23 = NULL,v_5 = NULL;
  t_23 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      b_23 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
      g_23 = ATgetArgument(t, 2);
      i_23 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_23);
  a_23 = t;
  t = SSL_is_string(b_23);
  m_23 = t;
  t = f_23;
  t = map_1_0(a_1, t);
  o_23 = t;
  t = g_23;
  t = map_1_0(b_1, t);
  p_23 = t;
  t = i_23;
  t = strategy_expression_0_0(t);
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, m_23, o_23, p_23, r_23);
  v_5 = t;
  t = SSLsetAnnotations(v_5, a_23);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,o_27 = NULL,q_27 = NULL,s_5 = NULL,r_5 = NULL;
  q_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_27 = ATgetArgument(t, 0);
      f_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_27);
  d_27 = t;
  t = SSL_is_string(e_27);
  g_27 = t;
  t = f_27;
  if(match_cons(t, sym_FunType_2))
    {
      k_27 = ATgetArgument(t, 0);
      l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_27);
  j_27 = t;
  t = k_27;
  t = list_1_0(_id, t);
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, m_27, l_27);
  r_5 = t;
  t = SSLsetAnnotations(r_5, j_27);
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_27, o_27);
  s_5 = t;
  t = SSLsetAnnotations(s_5, d_27);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm t_27 = NULL,v_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,u_5 = NULL,t_5 = NULL;
  c_28 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      v_27 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_28);
  t_27 = t;
  t = SSL_is_string(v_27);
  y_27 = t;
  t = x_27;
  if(match_cons(t, sym_ConstType_1))
    {
      a_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_27);
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, a_28);
  t_5 = t;
  t = SSLsetAnnotations(t_5, z_27);
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_27, b_28);
  u_5 = t;
  t = SSLsetAnnotations(u_5, t_27);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_n_6;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_28 = NULL,a_29 = NULL,c_29 = NULL,n_29 = NULL;
      a_29 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = a_29;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = a_29;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  c_29 = ATgetArgument(t, 0);
                  {
                    ATerm s_7 = NULL,u_7 = NULL,m_3 = NULL;
                    t = SSLgetAnnotations(a_29);
                    s_7 = t;
                    t = c_29;
                    t = strategy_expression_0_0(t);
                    u_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, u_7);
                    m_3 = t;
                    t = SSLsetAnnotations(m_3, s_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      c_29 = ATgetArgument(t, 0);
                      {
                        ATerm a_8 = NULL,c_8 = NULL,n_3 = NULL;
                        t = SSLgetAnnotations(a_29);
                        a_8 = t;
                        t = c_29;
                        t = strategy_expression_0_0(t);
                        c_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, c_8);
                        n_3 = t;
                        t = SSLsetAnnotations(n_3, a_8);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          c_29 = ATgetArgument(t, 0);
                          n_29 = ATgetArgument(t, 1);
                          {
                            ATerm j_8 = NULL,m_8 = NULL,n_8 = NULL,q_3 = NULL;
                            t = SSLgetAnnotations(a_29);
                            j_8 = t;
                            t = c_29;
                            t = strategy_expression_0_0(t);
                            m_8 = t;
                            t = n_29;
                            t = strategy_expression_0_0(t);
                            n_8 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, m_8, n_8);
                            q_3 = t;
                            t = SSLsetAnnotations(q_3, j_8);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              c_29 = ATgetArgument(t, 0);
                              n_29 = ATgetArgument(t, 1);
                              {
                                ATerm v_8 = NULL,y_8 = NULL,z_8 = NULL,i_4 = NULL;
                                t = SSLgetAnnotations(a_29);
                                v_8 = t;
                                t = c_29;
                                t = strategy_expression_0_0(t);
                                y_8 = t;
                                t = n_29;
                                t = strategy_expression_0_0(t);
                                z_8 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, y_8, z_8);
                                i_4 = t;
                                t = SSLsetAnnotations(i_4, v_8);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  c_29 = ATgetArgument(t, 0);
                                  n_29 = ATgetArgument(t, 1);
                                  {
                                    ATerm h_9 = NULL,k_9 = NULL,l_9 = NULL,r_4 = NULL;
                                    t = SSLgetAnnotations(a_29);
                                    h_9 = t;
                                    t = c_29;
                                    t = strategy_expression_0_0(t);
                                    k_9 = t;
                                    t = n_29;
                                    t = strategy_expression_0_0(t);
                                    l_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, k_9, l_9);
                                    r_4 = t;
                                    t = SSLsetAnnotations(r_4, h_9);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      c_29 = ATgetArgument(t, 0);
                                      n_29 = ATgetArgument(t, 1);
                                      v_28 = ATgetArgument(t, 2);
                                      {
                                        ATerm u_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,s_4 = NULL;
                                        t = SSLgetAnnotations(a_29);
                                        u_9 = t;
                                        t = c_29;
                                        t = strategy_expression_0_0(t);
                                        y_9 = t;
                                        t = n_29;
                                        t = strategy_expression_0_0(t);
                                        z_9 = t;
                                        t = v_28;
                                        t = strategy_expression_0_0(t);
                                        a_10 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_9, z_9, a_10);
                                        s_4 = t;
                                        t = SSLsetAnnotations(s_4, u_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          c_29 = ATgetArgument(t, 0);
                                          n_29 = ATgetArgument(t, 1);
                                          {
                                            ATerm o_10 = NULL,s_10 = NULL,v_10 = NULL,v_4 = NULL;
                                            t = SSLgetAnnotations(a_29);
                                            o_10 = t;
                                            t = c_29;
                                            t = strategy_expression_0_0(t);
                                            s_10 = t;
                                            t = n_29;
                                            t = strategy_expression_0_0(t);
                                            v_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, s_10, v_10);
                                            v_4 = t;
                                            t = SSLsetAnnotations(v_4, o_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              c_29 = ATgetArgument(t, 0);
                                              n_29 = ATgetArgument(t, 1);
                                              {
                                                ATerm i_11 = NULL,n_11 = NULL,o_11 = NULL,w_4 = NULL;
                                                t = SSLgetAnnotations(a_29);
                                                i_11 = t;
                                                t = c_29;
                                                t = strategy_expression_0_0(t);
                                                n_11 = t;
                                                t = n_29;
                                                t = strategy_expression_0_0(t);
                                                o_11 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, n_11, o_11);
                                                w_4 = t;
                                                t = SSLsetAnnotations(w_4, i_11);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  c_29 = ATgetArgument(t, 0);
                                                  n_29 = ATgetArgument(t, 1);
                                                  v_28 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm i_12 = NULL,m_12 = NULL,n_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,e_5 = NULL,z_4 = NULL;
                                                    t = SSLgetAnnotations(a_29);
                                                    i_12 = t;
                                                    t = c_29;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        s_12 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(c_29);
                                                    r_12 = t;
                                                    t = s_12;
                                                    {
                                                      ATerm q_6 = t;
                                                      int r_6 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = SSL_is_string(s_12);
                                                          LocalPopChoice(r_6);
                                                        }
                                                      else
                                                        {
                                                          t = q_6;
                                                          {
                                                            ATerm h_13 = NULL,i_13 = NULL,x_13 = NULL,d_14 = NULL,e_14 = NULL,x_4 = NULL;
                                                            if(match_cons(t, sym_Mod_2))
                                                              {
                                                                h_13 = ATgetArgument(t, 0);
                                                                i_13 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSLgetAnnotations(s_12);
                                                            x_13 = t;
                                                            t = SSL_is_string(h_13);
                                                            d_14 = t;
                                                            t = SSL_is_string(i_13);
                                                            e_14 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Mod_2, d_14, e_14);
                                                            x_4 = t;
                                                            t = SSLsetAnnotations(x_4, x_13);
                                                          }
                                                        }
                                                    }
                                                    t_12 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, t_12);
                                                    z_4 = t;
                                                    t = SSLsetAnnotations(z_4, r_12);
                                                    u_12 = t;
                                                    t = n_29;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    m_12 = t;
                                                    t = v_28;
                                                    t = map_1_0(term_expression_0_0, t);
                                                    n_12 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, u_12, m_12, n_12);
                                                    e_5 = t;
                                                    t = SSLsetAnnotations(e_5, i_12);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      c_29 = ATgetArgument(t, 0);
                                                      n_29 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm m_14 = NULL,r_14 = NULL,s_14 = NULL,f_5 = NULL;
                                                        t = SSLgetAnnotations(a_29);
                                                        m_14 = t;
                                                        t = SSL_is_string(c_29);
                                                        r_14 = t;
                                                        t = n_29;
                                                        t = strategy_expression_0_0(t);
                                                        s_14 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, r_14, s_14);
                                                        f_5 = t;
                                                        t = SSLsetAnnotations(f_5, m_14);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          c_29 = ATgetArgument(t, 0);
                                                          n_29 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm c_15 = NULL,i_15 = NULL,k_15 = NULL,g_5 = NULL;
                                                            t = SSLgetAnnotations(a_29);
                                                            c_15 = t;
                                                            t = SSL_is_int(c_29);
                                                            i_15 = t;
                                                            t = n_29;
                                                            t = strategy_expression_0_0(t);
                                                            k_15 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, i_15, k_15);
                                                            g_5 = t;
                                                            t = SSLsetAnnotations(g_5, c_15);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              c_29 = ATgetArgument(t, 0);
                                                              n_29 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm x_15 = NULL,b_16 = NULL,d_16 = NULL,h_5 = NULL;
                                                                t = SSLgetAnnotations(a_29);
                                                                x_15 = t;
                                                                t = SSL_is_string(c_29);
                                                                b_16 = t;
                                                                t = n_29;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                d_16 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, b_16, d_16);
                                                                h_5 = t;
                                                                t = SSLsetAnnotations(h_5, x_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  c_29 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm s_16 = NULL,u_16 = NULL,i_5 = NULL;
                                                                    t = SSLgetAnnotations(a_29);
                                                                    s_16 = t;
                                                                    t = c_29;
                                                                    t = strategy_expression_0_0(t);
                                                                    u_16 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, u_16);
                                                                    i_5 = t;
                                                                    t = SSLsetAnnotations(i_5, s_16);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      c_29 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm a_17 = NULL,h_17 = NULL,j_5 = NULL;
                                                                        t = SSLgetAnnotations(a_29);
                                                                        a_17 = t;
                                                                        t = c_29;
                                                                        t = strategy_expression_0_0(t);
                                                                        h_17 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, h_17);
                                                                        j_5 = t;
                                                                        t = SSLsetAnnotations(j_5, a_17);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          c_29 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm s_17 = NULL,y_17 = NULL,k_5 = NULL;
                                                                            t = SSLgetAnnotations(a_29);
                                                                            s_17 = t;
                                                                            t = c_29;
                                                                            t = strategy_expression_0_0(t);
                                                                            y_17 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, y_17);
                                                                            k_5 = t;
                                                                            t = SSLsetAnnotations(k_5, s_17);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              c_29 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm f_18 = NULL,i_18 = NULL,l_5 = NULL;
                                                                                t = SSLgetAnnotations(a_29);
                                                                                f_18 = t;
                                                                                t = c_29;
                                                                                t = strategy_expression_0_0(t);
                                                                                i_18 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, i_18);
                                                                                l_5 = t;
                                                                                t = SSLsetAnnotations(l_5, f_18);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  c_29 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm q_18 = NULL,s_18 = NULL,m_5 = NULL;
                                                                                    t = SSLgetAnnotations(a_29);
                                                                                    q_18 = t;
                                                                                    t = c_29;
                                                                                    t = term_expression_0_0(t);
                                                                                    s_18 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, s_18);
                                                                                    m_5 = t;
                                                                                    t = SSLsetAnnotations(m_5, q_18);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      c_29 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm y_18 = NULL,b_19 = NULL,n_5 = NULL;
                                                                                        t = SSLgetAnnotations(a_29);
                                                                                        y_18 = t;
                                                                                        t = c_29;
                                                                                        t = term_expression_0_0(t);
                                                                                        b_19 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, b_19);
                                                                                        n_5 = t;
                                                                                        t = SSLsetAnnotations(n_5, y_18);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          c_29 = ATgetArgument(t, 0);
                                                                                          n_29 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm t_19 = NULL,x_19 = NULL,y_19 = NULL,o_5 = NULL;
                                                                                            t = SSLgetAnnotations(a_29);
                                                                                            t_19 = t;
                                                                                            t = c_29;
                                                                                            t = map_1_0(s_0, t);
                                                                                            x_19 = t;
                                                                                            t = n_29;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            y_19 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, x_19, y_19);
                                                                                            o_5 = t;
                                                                                            t = SSLsetAnnotations(o_5, t_19);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              c_29 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm v_20 = NULL,y_20 = NULL,p_5 = NULL;
                                                                                                t = SSLgetAnnotations(a_29);
                                                                                                v_20 = t;
                                                                                                t = c_29;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                y_20 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, y_20);
                                                                                                p_5 = t;
                                                                                                t = SSLsetAnnotations(p_5, v_20);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  c_29 = ATgetArgument(t, 0);
                                                                                                  n_29 = ATgetArgument(t, 1);
                                                                                                  v_28 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm t_21 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,q_5 = NULL;
                                                                                                    t = SSLgetAnnotations(a_29);
                                                                                                    t_21 = t;
                                                                                                    t = SSL_is_string(c_29);
                                                                                                    c_22 = t;
                                                                                                    t = n_29;
                                                                                                    t = map_1_0(strategy_expression_0_0, t);
                                                                                                    d_22 = t;
                                                                                                    t = v_28;
                                                                                                    t = map_1_0(term_expression_0_0, t);
                                                                                                    e_22 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, c_22, d_22, e_22);
                                                                                                    q_5 = t;
                                                                                                    t = SSLsetAnnotations(q_5, t_21);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm q_22 = NULL,v_22 = NULL,w_22 = NULL,w_5 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      c_29 = ATgetArgument(t, 0);
                                                                                                      n_29 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(a_29);
                                                                                                  q_22 = t;
                                                                                                  t = c_29;
                                                                                                  t = map_1_0(z_0, t);
                                                                                                  v_22 = t;
                                                                                                  t = n_29;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  w_22 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, v_22, w_22);
                                                                                                  w_5 = t;
                                                                                                  t = SSLsetAnnotations(w_5, q_22);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(p_6);
    }
  else
    {
      t = o_6;
      {
        ATerm s_6 = t;
        int t_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = amb_error_0_0(t);
            LocalPopChoice(t_6);
          }
        else
          {
            t = s_6;
            t = debug_1_0(c_1, t);
          }
      }
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,f_7 = NULL;
  n_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_31);
  j_31 = t;
  t = SSL_is_string(k_31);
  m_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_31, l_31);
  f_7 = t;
  t = SSLsetAnnotations(f_7, j_31);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,g_7 = NULL;
  s_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      p_31 = ATgetArgument(t, 0);
      q_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_31);
  o_31 = t;
  t = SSL_is_string(p_31);
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_31, q_31);
  g_7 = t;
  t = SSLsetAnnotations(g_7, o_31);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,y_34 = NULL,z_34 = NULL,b_35 = NULL,j_7 = NULL;
  b_35 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      q_34 = ATgetArgument(t, 0);
      y_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_35);
  p_34 = t;
  t = SSL_is_string(q_34);
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_34, y_34);
  j_7 = t;
  t = SSLsetAnnotations(j_7, p_34);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL,j_35 = NULL,k_35 = NULL,k_7 = NULL;
  k_35 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_35 = ATgetArgument(t, 0);
      h_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_35);
  f_35 = t;
  t = SSL_is_string(g_35);
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_35, h_35);
  k_7 = t;
  t = SSLsetAnnotations(k_7, f_35);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm o_46 = NULL,a_47 = NULL,b_47 = NULL,n_47 = NULL,b_48 = NULL,n_7 = NULL;
  b_48 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      a_47 = ATgetArgument(t, 0);
      b_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_48);
  o_46 = t;
  t = SSL_is_string(a_47);
  n_47 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_47, b_47);
  n_7 = t;
  t = SSLsetAnnotations(n_7, o_46);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm c_48 = NULL,t_48 = NULL,u_48 = NULL,c_49 = NULL,d_49 = NULL,o_7 = NULL;
  d_49 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      t_48 = ATgetArgument(t, 0);
      u_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_49);
  c_48 = t;
  t = SSL_is_string(t_48);
  c_49 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_49, u_48);
  o_7 = t;
  t = SSLsetAnnotations(o_7, c_48);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_x_6;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm y_6 = t;
  int z_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL;
      a_38 = t;
      if(match_cons(t, sym_SDefT_4))
        {
          b_38 = ATgetArgument(t, 0);
          c_38 = ATgetArgument(t, 1);
          d_38 = ATgetArgument(t, 2);
          z_37 = ATgetArgument(t, 3);
          {
            ATerm r_29 = NULL,y_29 = NULL,a_30 = NULL,c_30 = NULL,d_30 = NULL,h_7 = NULL;
            t = SSLgetAnnotations(a_38);
            r_29 = t;
            t = b_38;
            {
              ATerm a_7 = t;
              int b_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_is_string(b_38);
                  LocalPopChoice(b_7);
                }
              else
                {
                  t = a_7;
                  {
                    ATerm p_30 = NULL,q_30 = NULL,b_32 = NULL,h_32 = NULL,i_32 = NULL,e_7 = NULL;
                    if(match_cons(t, sym_Mod_2))
                      {
                        p_30 = ATgetArgument(t, 0);
                        q_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(b_38);
                    b_32 = t;
                    t = SSL_is_string(p_30);
                    h_32 = t;
                    t = SSL_is_string(q_30);
                    i_32 = t;
                    t = (ATerm) ATmakeAppl(sym_Mod_2, h_32, i_32);
                    e_7 = t;
                    t = SSLsetAnnotations(e_7, b_32);
                  }
                }
            }
            y_29 = t;
            t = c_38;
            t = map_1_0(e_1, t);
            a_30 = t;
            t = d_38;
            t = map_1_0(h_1, t);
            c_30 = t;
            t = z_37;
            t = strategy_expression_0_0(t);
            d_30 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, y_29, a_30, c_30, d_30);
            h_7 = t;
            t = SSLsetAnnotations(h_7, r_29);
          }
        }
      else
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              b_38 = ATgetArgument(t, 0);
              c_38 = ATgetArgument(t, 1);
              d_38 = ATgetArgument(t, 2);
              z_37 = ATgetArgument(t, 3);
              {
                ATerm h_33 = NULL,q_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,l_7 = NULL;
                t = SSLgetAnnotations(a_38);
                h_33 = t;
                t = b_38;
                {
                  ATerm c_7 = t;
                  int d_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_is_string(b_38);
                      LocalPopChoice(d_7);
                    }
                  else
                    {
                      t = c_7;
                      {
                        ATerm n_34 = NULL,o_34 = NULL,z_35 = NULL,l_38 = NULL,r_39 = NULL,i_7 = NULL;
                        if(match_cons(t, sym_Mod_2))
                          {
                            n_34 = ATgetArgument(t, 0);
                            o_34 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(b_38);
                        z_35 = t;
                        t = SSL_is_string(n_34);
                        l_38 = t;
                        t = SSL_is_string(o_34);
                        r_39 = t;
                        t = (ATerm) ATmakeAppl(sym_Mod_2, l_38, r_39);
                        i_7 = t;
                        t = SSLsetAnnotations(i_7, z_35);
                      }
                    }
                }
                q_33 = t;
                t = c_38;
                t = map_1_0(k_1, t);
                s_33 = t;
                t = d_38;
                t = map_1_0(l_1, t);
                t_33 = t;
                t = z_37;
                t = strategy_expression_0_0(t);
                u_33 = t;
                t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, q_33, s_33, t_33, u_33);
                l_7 = t;
                t = SSLsetAnnotations(l_7, h_33);
              }
            }
          else
            {
              ATerm n_40 = NULL,v_42 = NULL,y_42 = NULL,z_42 = NULL,p_7 = NULL;
              if(match_cons(t, sym_ExtSDef_3))
                {
                  b_38 = ATgetArgument(t, 0);
                  c_38 = ATgetArgument(t, 1);
                  d_38 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_38);
              n_40 = t;
              t = b_38;
              {
                ATerm q_7 = t;
                int r_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_is_string(b_38);
                    LocalPopChoice(r_7);
                  }
                else
                  {
                    t = q_7;
                    {
                      ATerm r_45 = NULL,e_46 = NULL,k_51 = NULL,y_52 = NULL,z_52 = NULL,m_7 = NULL;
                      if(match_cons(t, sym_Mod_2))
                        {
                          r_45 = ATgetArgument(t, 0);
                          e_46 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(b_38);
                      k_51 = t;
                      t = SSL_is_string(r_45);
                      y_52 = t;
                      t = SSL_is_string(e_46);
                      z_52 = t;
                      t = (ATerm) ATmakeAppl(sym_Mod_2, y_52, z_52);
                      m_7 = t;
                      t = SSLsetAnnotations(m_7, k_51);
                    }
                  }
              }
              v_42 = t;
              t = c_38;
              t = map_1_0(m_1, t);
              y_42 = t;
              t = d_38;
              t = map_1_0(n_1, t);
              z_42 = t;
              t = (ATerm) ATmakeAppl(sym_ExtSDef_3, v_42, y_42, z_42);
              p_7 = t;
              t = SSLsetAnnotations(p_7, n_40);
            }
        }
      LocalPopChoice(z_6);
    }
  else
    {
      t = y_6;
      {
        ATerm t_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = amb_error_0_0(t);
            LocalPopChoice(v_7);
          }
        else
          {
            t = t_7;
            t = debug_1_0(o_1, t);
          }
      }
    }
  return(t);
}
ATerm map_1_0 (ATerm a_120 (ATerm), ATerm t)
{
  static ATerm y_38 (ATerm t);
  static ATerm y_38 (ATerm t)
  {
    ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
    v_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_38;
      }
    else
      {
        ATerm h_54 = NULL,k_54 = NULL,l_54 = NULL,g_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_38 = ATgetFirst((ATermList) t);
            x_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_38);
        h_54 = t;
        t = w_38;
        t = a_120(t);
        k_54 = t;
        t = x_38;
        t = y_38(t);
        l_54 = t;
        t = (ATerm) ATinsert(CheckATermList(l_54), k_54);
        g_11 = t;
        t = SSLsetAnnotations(g_11, h_54);
      }
    return(t);
  }
  t = y_38(t);
  return(t);
}
static ATerm w_3 (ATerm j_57, ATerm k_57, ATerm t)
{
  ATerm a_39 = NULL;
  t = SSL_fputc(j_57, k_57);
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_39);
  return(t);
}
static ATerm x_3 (ATerm q_41, ATerm r_41, ATerm t)
{
  ATerm b_39 = NULL;
  t = SSL_write_term_to_stream_text(q_41, r_41);
  b_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_39);
  return(t);
}
static ATerm z_3 (ATerm s_119 (ATerm), ATerm j_274, ATerm w_41, ATerm t)
{
  ATerm c_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_274, term_w_7);
  t = d_4(t);
  c_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_39, w_41);
  t = s_119(t);
  t = fclose_0_0(t);
  t = w_41;
  return(t);
}
static ATerm y_3 (ATerm m_41, ATerm n_41, ATerm t)
{
  ATerm d_39 = NULL;
  t = SSL_write_term_to_stream_baf(m_41, n_41);
  d_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_39);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_7 = ATgetArgument(t, 0);
      if(match_cons(x_7, sym_Stream_1))
        {
          k_39 = ATgetArgument(x_7, 0);
        }
      else
        _fail(t);
      l_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(k_39, l_39, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_7 = ATgetArgument(t, 0);
      if(match_cons(y_7, sym_Stream_1))
        {
          p_39 = ATgetArgument(y_7, 0);
        }
      else
        _fail(t);
      q_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3(p_39, q_39, t);
  m_39 = t;
  t = term_z_7;
  n_39 = t;
  t = m_39;
  if(match_cons(t, sym_Stream_1))
    {
      o_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_7, m_39);
  t = w_3(n_39, o_39, t);
  return(t);
}
ATerm output_1_0 (ATerm s_139 (ATerm), ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL;
  t = s_139(t);
  f_39 = t;
  {
    ATerm b_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_39 = NULL,h_39 = NULL;
        t = term_e_8;
        g_39 = t;
        t = term_f_8;
        h_39 = t;
        t = term_g_8;
        t = j_4(g_39, h_39, t);
        LocalPopChoice(d_8);
      }
    else
      {
        t = b_8;
        t = term_h_8;
      }
  }
  e_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_39, f_39);
  {
    ATerm i_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_39 = NULL,j_39 = NULL;
        t = term_e_8;
        i_39 = t;
        t = term_l_8;
        j_39 = t;
        t = term_o_8;
        t = j_4(i_39, j_39, t);
        t = (ATerm) ATmakeAppl(sym__2, e_39, f_39);
        LocalPopChoice(k_8);
        if(match_cons(t, sym__2))
          {
            ATerm p_8 = ATgetArgument(t, 0);
            ATerm q_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_3(q_1, e_39, f_39, t);
      }
    else
      {
        t = i_8;
        if(match_cons(t, sym__2))
          {
            ATerm r_8 = ATgetArgument(t, 0);
            ATerm s_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_3(s_1, e_39, f_39, t);
      }
  }
  return(t);
}
static ATerm e_40 (ATerm y_39, ATerm t)
{
  t = SSL_fclose(y_39);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL;
  c_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_40 = ATgetArgument(t, 0);
      {
        ATerm t_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_40);
            LocalPopChoice(u_8);
          }
        else
          {
            t = t_8;
            t = e_40(c_40, t);
          }
      }
    }
  else
    {
      t = e_40(c_40, t);
    }
  return(t);
}
static ATerm a_4 (ATerm s_41, ATerm t)
{
  t = SSL_read_term_from_stream(s_41);
  return(t);
}
static ATerm b_4 (ATerm p_55, ATerm q_55, ATerm t)
{
  t = SSL_strcat(p_55, q_55);
  return(t);
}
static ATerm c_4 (ATerm l_57, ATerm m_57, ATerm t)
{
  ATerm f_40 = NULL;
  t = SSL_fopen(l_57, m_57);
  f_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_40);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_40 = NULL;
  t = SSL_stdin_stream();
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_40);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_40 = NULL;
  t = SSL_stdout_stream();
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_40);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_40 = NULL;
  t = SSL_stderr_stream();
  i_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_40);
  return(t);
}
static ATerm u_41 (ATerm o_40, ATerm t)
{
  ATerm p_40 = NULL;
  t = SSL_explode_term(o_40);
  if(match_cons(t, sym__2))
    {
      ATerm w_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_8 = ATgetArgument(t, 1);
        if(((ATgetType(x_8) == AT_LIST) && !(ATisEmpty(x_8))))
          {
            p_40 = ATgetFirst((ATermList) x_8);
            {
              ATerm a_9 = (ATerm) ATgetNext((ATermList) x_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_40;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_40;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_40;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_40;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_41 (ATerm s_40, ATerm t_40, ATerm u_40, ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,a_41 = NULL,k_11 = NULL;
  t = SSLgetAnnotations(u_40);
  x_40 = t;
  t = s_40;
  if(match_cons(t, sym_Path_1))
    {
      a_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_41, t_40);
  k_11 = t;
  t = SSLsetAnnotations(k_11, x_40);
  if(match_cons(t, sym__2))
    {
      v_40 = ATgetArgument(t, 0);
      w_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_4(v_40, w_40, t);
  return(t);
}
static ATerm y_41 (ATerm c_41, ATerm d_41, ATerm e_41, ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,k_41 = NULL,q_11 = NULL;
  t = SSLgetAnnotations(e_41);
  h_41 = t;
  t = SSL_is_string(c_41);
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_41, d_41);
  q_11 = t;
  t = SSLsetAnnotations(q_11, h_41);
  if(match_cons(t, sym__2))
    {
      f_41 = ATgetArgument(t, 0);
      g_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_4(f_41, g_41, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,t_41 = NULL;
  o_41 = t;
  if(match_cons(t, sym__2))
    {
      p_41 = ATgetArgument(t, 0);
      t_41 = ATgetArgument(t, 1);
      {
        ATerm b_9 = t;
        int c_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_41(o_41, t);
            LocalPopChoice(c_9);
          }
        else
          {
            t = b_9;
            {
              ATerm d_9 = t;
              int e_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_41(p_41, t_41, o_41, t);
                  LocalPopChoice(e_9);
                }
              else
                {
                  t = d_9;
                  t = y_41(p_41, t_41, o_41, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_41(o_41, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,h_42 = NULL;
  h_42 = t;
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_42, term_i_9);
        t = d_4(t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        {
          ATerm y_54 = NULL,z_54 = NULL;
          t = term_j_9;
          z_54 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_9, h_42);
          t = b_4(z_54, h_42, t);
          y_54 = t;
          t = SSL_perror(y_54);
          _fail(t);
        }
      }
  }
  b_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_4(c_42, t);
  a_42 = t;
  t = b_42;
  t = fclose_0_0(t);
  t = a_42;
  return(t);
}
ATerm input_1_0 (ATerm t_139 (ATerm), ATerm t)
{
  ATerm m_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_42 = NULL,l_42 = NULL;
      t = term_e_8;
      k_42 = t;
      t = term_o_9;
      l_42 = t;
      t = term_p_9;
      t = j_4(k_42, l_42, t);
      LocalPopChoice(n_9);
    }
  else
    {
      t = m_9;
      t = term_q_9;
    }
  t = ReadFromFile_0_0(t);
  t = t_139(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  t = term_e_8;
  m_42 = t;
  t = term_r_9;
  n_42 = t;
  t = term_s_9;
  t = j_4(m_42, n_42, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
  p_42 = t;
  {
    ATerm t_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_42;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_9 = ATgetFirst((ATermList) t);
                ATerm x_9 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_42;
          }
        LocalPopChoice(v_9);
      }
    else
      {
        t = t_9;
        t = (ATerm) ATinsert(ATempty, p_42);
      }
  }
  q_42 = t;
  t = term_h_8;
  r_42 = t;
  t = SSL_printnl(r_42, q_42);
  t = p_42;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_42 = ATgetFirst((ATermList) t);
      x_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_43 = NULL,e_43 = NULL;
        static ATerm t_1 (ATerm t);
        static ATerm t_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_43)), not_null(e_43));
          return(t);
        }
        t = x_42;
        t = q_0(t);
        if(((d_43 != NULL) && (d_43 != t)))
          _fail(t);
        else
          d_43 = t;
        t = w_42;
        t = p_0(t);
        if(((e_43 != NULL) && (e_43 != t)))
          _fail(t);
        else
          e_43 = t;
        t = x_42;
        t = reverse_acc_2_0(p_0, t_1, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_10;
      t = q_0(t);
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,v_11 = NULL;
  o_43 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_43);
  m_43 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_43);
  v_11 = t;
  t = SSLsetAnnotations(v_11, m_43);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm s_43 = NULL;
  s_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_43), term_c_10);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm r_141 (ATerm), ATerm s_141 (ATerm), ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL;
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_43 = NULL,l_43 = NULL;
      t = term_e_8;
      k_43 = t;
      t = term_r_9;
      l_43 = t;
      t = term_s_9;
      t = j_4(k_43, l_43, t);
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      t = fetch_1_0(u_1, t);
    }
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_141(t);
        t = echo_0_0(t);
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
      }
  }
  t = term_h_10;
  t = echo_0_0(t);
  t = term_i_10;
  i_43 = t;
  t = term_j_10;
  j_43 = t;
  t = term_k_10;
  t = j_4(i_43, j_43, t);
  t = reverse_acc_2_0(_id, v_1, t);
  t = map_1_0(w_1, t);
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_43 = NULL;
        t = s_141(t);
        t_43 = t;
        t = (ATerm) ATinsert(CheckATermList(t_43), term_n_10);
        t = echo_0_0(t);
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,y_11 = NULL;
  b_44 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_44);
  z_43 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_44);
  y_11 = t;
  t = SSLsetAnnotations(y_11, z_43);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_43 = NULL;
  w_43 = t;
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_43 = NULL,y_43 = NULL;
        t = term_e_8;
        x_43 = t;
        t = term_r_9;
        y_43 = t;
        t = term_s_9;
        t = j_4(x_43, y_43, t);
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        t = fetch_1_0(y_1, t);
      }
  }
  t = w_43;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm d_44 = NULL;
  d_44 = t;
  if(match_string(t, "-k"))
    {
      t = d_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_44;
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
  e_44 = t;
  t = SSL_string_to_int(e_44);
  f_44 = t;
  t = term_r_10;
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_10, f_44);
  t = m_4(g_44, f_44, t);
  t = e_44;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_2, b_2, c_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm i_44 = NULL;
  i_44 = t;
  if(match_string(t, "-S"))
    {
      t = i_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_44;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL;
  t = term_u_10;
  j_44 = t;
  t = term_w_10;
  k_44 = t;
  t = term_x_10;
  t = m_4(j_44, k_44, t);
  t = term_y_10;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
  l_44 = t;
  t = SSL_string_to_int(l_44);
  m_44 = t;
  t = term_u_10;
  n_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_10, m_44);
  t = m_4(n_44, m_44, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_44);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_a_11;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  t = term_b_11;
  o_44 = t;
  t = term_b_10;
  p_44 = t;
  t = term_c_11;
  t = m_4(o_44, p_44, t);
  t = term_d_11;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_2, g_2, o_2, t);
      LocalPopChoice(h_11);
    }
  else
    {
      t = f_11;
      {
        ATerm j_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_2, r_2, s_2, t);
            LocalPopChoice(l_11);
          }
        else
          {
            t = j_11;
            t = Option_3_0(u_2, v_2, w_2, t);
          }
      }
    }
  return(t);
}
static ATerm m_4 (ATerm f_76, ATerm g_76, ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL;
  t = term_e_8;
  q_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_8, f_76, g_76);
  t = lookup_table_0_1(q_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_4(f_76, g_76, r_44, t);
  t = (ATerm) ATmakeAppl(sym__3, term_e_8, f_76, g_76);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
      t = term_b_10;
      t = g_0(t);
      x_44 = t;
      t = term_i_10;
      y_44 = t;
      t = term_j_10;
      z_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_10, term_j_10, x_44);
      t = k_4(y_44, z_44, x_44, t);
      _fail(t);
    }
  else
    {
      ATerm c_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_44 = ATgetFirst((ATermList) t);
          w_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_44;
      t = d_0(t);
      t = term_b_10;
      t = f_0(t);
      c_45 = t;
      t = (ATerm) ATinsert(CheckATermList(w_44), c_45);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm e_45 = NULL;
  e_45 = t;
  if(match_string(t, "-o"))
    {
      t = e_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_45;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL;
  f_45 = t;
  t = term_f_8;
  g_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_8, f_45);
  t = m_4(g_45, f_45, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_45);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_m_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_2, y_2, z_2, t);
  return(t);
}
static ATerm k_4 (ATerm v_62, ATerm w_62, ATerm u_62, ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL;
  i_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_62, w_62);
  {
    ATerm p_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_11 = ATgetArgument(t, 0);
            ATerm t_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_62, w_62);
        t = j_4(v_62, w_62, t);
        LocalPopChoice(r_11);
      }
    else
      {
        t = p_11;
        t = (ATerm) ATempty;
      }
  }
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_62, w_62, (ATerm) ATinsert(CheckATermList(j_45), u_62));
  t = lookup_table_0_1(v_62, t);
  m_45 = t;
  t = (ATerm) ATinsert(CheckATermList(j_45), u_62);
  k_45 = t;
  t = m_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_4(w_62, k_45, l_45, t);
  t = i_45;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
      t = term_b_10;
      t = o_0(t);
      x_45 = t;
      t = term_i_10;
      y_45 = t;
      t = term_j_10;
      z_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_10, term_j_10, x_45);
      t = k_4(y_45, z_45, x_45, t);
      _fail(t);
    }
  else
    {
      ATerm d_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_45 = ATgetFirst((ATermList) t);
          u_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_45 = ATgetFirst((ATermList) t);
          w_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_45;
      t = j_0(t);
      t = v_45;
      t = l_0(t);
      d_46 = t;
      t = (ATerm) ATinsert(CheckATermList(w_45), d_46);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm f_46 = NULL;
  f_46 = t;
  if(match_string(t, "-i"))
    {
      t = f_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_46;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL;
  g_46 = t;
  t = term_o_9;
  h_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_9, g_46);
  t = m_4(h_46, g_46, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_46);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_u_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, b_3, c_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_10;
  t = whoami_0_0(t);
  i_46 = t;
  t = term_c_6;
  k_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_11), i_46);
  l_46 = t;
  t = SSL_printnl(k_46, l_46);
  t = term_g_6;
  j_46 = t;
  t = SSL_exit(j_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL;
  t = term_e_8;
  m_46 = t;
  t = term_r_9;
  n_46 = t;
  t = term_s_9;
  t = j_4(m_46, n_46, t);
  return(t);
}
static ATerm e_4 (ATerm e_61, ATerm f_61, ATerm t)
{
  ATerm x_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_61, f_61);
      LocalPopChoice(z_11);
    }
  else
    {
      t = x_11;
      t = SSL_addr(e_61, f_61);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_126 (ATerm), ATerm a_127 (ATerm), ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
  p_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_46;
      t = z_126(t);
    }
  else
    {
      ATerm u_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_46 = ATgetFirst((ATermList) t);
          r_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_46;
      t = foldr_2_0(z_126, a_127, t);
      u_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_46, u_46);
      t = a_127(t);
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
  t = term_w_10;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL;
  if(match_cons(t, sym__2))
    {
      f_55 = ATgetArgument(t, 0);
      g_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4(f_55, g_55, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_46 = NULL,b_55 = NULL,c_55 = NULL;
  t = times_0_0(t);
  c_55 = t;
  t = SSL_explode_term(c_55);
  if(match_cons(t, sym__2))
    {
      ATerm b_12 = ATgetArgument(t, 0);
      b_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_55;
  t = foldr_2_0(d_3, e_3, t);
  x_46 = t;
  t = SSL_TicksToSeconds(x_46);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
  i_47 = t;
  if(match_cons(t, sym__2))
    {
      j_47 = ATgetArgument(t, 0);
      k_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_47;
        if((j_47 != t))
          {
            _fail(t);
          }
        t = i_47;
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        t = (ATerm) ATmakeAppl(sym__2, j_47, k_47);
        {
          ATerm f_12 = t;
          int g_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_47, k_47);
              LocalPopChoice(g_12);
            }
          else
            {
              t = f_12;
              t = SSL_gtr(j_47, k_47);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_47, k_47);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_136 (ATerm), ATerm t)
{
  ATerm o_47 = NULL;
  o_47 = t;
  {
    ATerm h_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL;
        t = term_e_8;
        r_47 = t;
        t = term_u_10;
        s_47 = t;
        t = term_k_12;
        t = j_4(r_47, s_47, t);
        q_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_47, term_g_6);
        t = geq_0_0(t);
        t = o_47;
        t = o_136(t);
        LocalPopChoice(j_12);
      }
    else
      {
        t = h_12;
        t = o_47;
      }
  }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,x_47 = NULL,y_47 = NULL;
  t = run_time_0_0(t);
  u_47 = t;
  t = term_b_10;
  t = whoami_0_0(t);
  v_47 = t;
  t = term_c_6;
  x_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_12), u_47), term_l_12), v_47);
  y_47 = t;
  t = SSL_printnl(x_47, y_47);
  t = (ATerm) ATmakeAppl(sym__2, term_c_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_12), u_47), term_l_12), v_47));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_10;
  z_47 = t;
  t = SSL_exit(z_47);
  return(t);
}
static ATerm n_4 (ATerm g_67, ATerm h_67, ATerm i_67, ATerm t)
{
  ATerm a_48 = NULL;
  t = SSL_hashtable_put(i_67, g_67, h_67);
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_48);
  return(t);
}
static ATerm o_4 (ATerm j_67, ATerm k_67, ATerm t)
{
  t = SSL_hashtable_get(k_67, j_67);
  return(t);
}
ATerm lookup_table_0_1 (ATerm h_64, ATerm t)
{
  ATerm j_48 = NULL;
  t = table_hashtable_0_0(t);
  j_48 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_55 = NULL;
        t = j_48;
        if(match_cons(t, sym_Hashtable_1))
          {
            t_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_4(h_64, t_55, t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        {
          ATerm y_55 = NULL;
          t = h_64;
          t = table_create_0_0(t);
          t = j_48;
          if(match_cons(t, sym_Hashtable_1))
            {
              y_55 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_4(h_64, y_55, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_67, ATerm p_67, ATerm t)
{
  ATerm m_48 = NULL;
  t = SSL_hashtable_create(o_67, p_67);
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_48);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,r_48 = NULL,s_48 = NULL;
  n_48 = t;
  t = term_y_12;
  r_48 = t;
  t = term_d_13;
  s_48 = t;
  t = n_48;
  t = new_hashtable_0_2(r_48, s_48, t);
  o_48 = t;
  t = n_48;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_4(n_48, o_48, p_48, t);
  t = n_48;
  return(t);
}
static ATerm g_4 (ATerm l_67, ATerm m_67, ATerm t)
{
  ATerm v_48 = NULL;
  t = SSL_hashtable_remove(m_67, l_67);
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_48);
  return(t);
}
static ATerm h_4 (ATerm q_67, ATerm t)
{
  ATerm w_48 = NULL;
  t = SSL_hashtable_destroy(q_67);
  w_48 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_48);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm x_48 = NULL;
  t = SSL_table_hashtable();
  x_48 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_48);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL;
  y_48 = t;
  t = table_hashtable_0_0(t);
  z_48 = t;
  t = lookup_table_0_1(y_48, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_4(b_49, t);
  t = z_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_4(y_48, a_49, t);
  t = y_48;
  return(t);
}
ATerm fetch_1_0 (ATerm k_120 (ATerm), ATerm t)
{
  static ATerm y_49 (ATerm t);
  static ATerm y_49 (ATerm t)
  {
    ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL;
    v_49 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_49 = ATgetFirst((ATermList) t);
        x_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_13 = t;
      int f_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_56 = NULL,g_56 = NULL,a_12 = NULL;
          t = SSLgetAnnotations(v_49);
          d_56 = t;
          t = w_49;
          t = k_120(t);
          g_56 = t;
          t = (ATerm) ATinsert(CheckATermList(x_49), g_56);
          a_12 = t;
          t = SSLsetAnnotations(a_12, d_56);
          LocalPopChoice(f_13);
        }
      else
        {
          t = e_13;
          {
            ATerm o_56 = NULL,r_56 = NULL,c_12 = NULL;
            t = SSLgetAnnotations(v_49);
            o_56 = t;
            t = x_49;
            t = y_49(t);
            r_56 = t;
            t = (ATerm) ATinsert(CheckATermList(r_56), w_49);
            c_12 = t;
            t = SSLsetAnnotations(c_12, o_56);
          }
        }
    }
    return(t);
  }
  t = y_49(t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL;
  t = term_g_13;
  b_50 = t;
  t = term_b_10;
  c_50 = t;
  t = term_j_13;
  t = m_4(b_50, c_50, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_k_13;
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
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
  t = term_g_13;
  f_50 = t;
  t = term_b_10;
  g_50 = t;
  t = term_j_13;
  t = m_4(f_50, g_50, t);
  t = term_l_13;
  d_50 = t;
  t = term_b_10;
  e_50 = t;
  t = term_m_13;
  t = m_4(d_50, e_50, t);
  t = term_n_13;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_o_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, i_3, r_3, t);
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      t = Option_3_0(s_3, t_3, u_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_100 (ATerm), ATerm g_100 (ATerm), ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,o_12 = NULL;
  m_50 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_50 = ATgetFirst((ATermList) t);
      j_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_50);
  h_50 = t;
  t = i_50;
  t = f_100(t);
  k_50 = t;
  t = j_50;
  t = g_100(t);
  l_50 = t;
  t = (ATerm) ATinsert(CheckATermList(l_50), k_50);
  o_12 = t;
  t = SSLsetAnnotations(o_12, h_50);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_141 (ATerm), ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,w_50 = NULL,x_50 = NULL,q_12 = NULL;
  r_50 = t;
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_13;
        t = m_141(t);
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
      }
  }
  t = r_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_50 = ATgetFirst((ATermList) t);
      u_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_50);
  s_50 = t;
  t = term_r_9;
  x_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, t_50);
  t = m_4(x_50, t_50, t);
  t = u_50;
  {
    static ATerm h_51 (ATerm t);
    static ATerm h_51 (ATerm t)
    {
      ATerm u_13 = t;
      int v_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_51 = NULL;
              a_51 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_51;
              LocalPopChoice(y_13);
            }
          else
            {
              t = w_13;
              t = m_141(t);
              t = Cons_2_0(_id, h_51, t);
            }
          LocalPopChoice(v_13);
        }
      else
        {
          t = u_13;
          {
            ATerm d_51 = NULL,e_51 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_51 = ATgetFirst((ATermList) t);
                e_51 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_51), (ATerm) ATmakeAppl(sym_Undefined_1, d_51));
          }
        }
      return(t);
    }
    t = h_51(t);
  }
  w_50 = t;
  t = (ATerm) ATinsert(CheckATermList(w_50), (ATerm) ATmakeAppl(sym_Program_1, t_50));
  q_12 = t;
  t = SSLsetAnnotations(q_12, s_50);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm u_51 = NULL;
  u_51 = t;
  if(match_string(t, "--help"))
    {
      t = u_51;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_51;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_51;
        }
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL;
  t = term_z_13;
  v_51 = t;
  t = term_b_10;
  w_51 = t;
  t = term_a_14;
  t = m_4(v_51, w_51, t);
  t = term_b_14;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm j_141 (ATerm), ATerm k_141 (ATerm), ATerm l_141 (ATerm), ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL;
  o_51 = t;
  t = term_i_10;
  p_51 = t;
  t = term_f_14;
  t = lookup_table_0_1(p_51, t);
  t_51 = t;
  t = term_j_10;
  q_51 = t;
  t = (ATerm) ATempty;
  r_51 = t;
  t = t_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_4(q_51, r_51, s_51, t);
  t = o_51;
  {
    static ATerm v_3 (ATerm t);
    static ATerm v_3 (ATerm t)
    {
      ATerm g_14 = t;
      int h_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_141(t);
          LocalPopChoice(h_14);
        }
      else
        {
          t = g_14;
          {
            ATerm i_14 = t;
            int j_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_4, l_4, q_4, t);
                LocalPopChoice(j_14);
              }
            else
              {
                t = i_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_3, t);
  }
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_52 = NULL;
        h_52 = t;
        {
          ATerm n_14 = t;
          int o_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_56 = NULL;
              t = h_52;
              {
                ATerm p_14 = t;
                int q_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_56 = NULL,a_57 = NULL;
                    t = term_e_8;
                    z_56 = t;
                    t = term_z_13;
                    a_57 = t;
                    t = term_t_14;
                    t = j_4(z_56, a_57, t);
                    LocalPopChoice(q_14);
                  }
                else
                  {
                    t = p_14;
                    t = fetch_1_0(t_4, t);
                  }
              }
              t = h_52;
              t = k_141(t);
              t = term_w_10;
              y_56 = t;
              t = SSL_exit(y_56);
              LocalPopChoice(o_14);
            }
          else
            {
              t = n_14;
              {
                ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL;
                t = term_e_8;
                f_57 = t;
                t = term_g_13;
                g_57 = t;
                t = term_u_14;
                t = j_4(f_57, g_57, t);
                t = h_52;
                t = l_141(t);
                t = term_w_10;
                e_57 = t;
                t = SSL_exit(e_57);
              }
            }
        }
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        {
          ATerm v_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
              static ATerm a_5 (ATerm t);
              static ATerm a_5 (ATerm t)
              {
                ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,x_12 = NULL;
                n_52 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_52 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_52);
                l_52 = t;
                t = m_52;
                if(((m_51 != NULL) && (m_51 != t)))
                  _fail(t);
                else
                  m_51 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_52);
                x_12 = t;
                t = SSLsetAnnotations(x_12, l_52);
                return(t);
              }
              t = fetch_1_0(a_5, t);
              t = term_c_6;
              j_52 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_51)), term_x_14);
              k_52 = t;
              t = SSL_printnl(j_52, k_52);
              t = (ATerm) ATmakeAppl(sym__2, term_c_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_51)), term_x_14));
              t = k_141(t);
              t = term_g_6;
              i_52 = t;
              t = SSL_exit(i_52);
              LocalPopChoice(w_14);
            }
          else
            {
              t = v_14;
            }
        }
      }
  }
  n_51 = t;
  t = term_i_10;
  t = table_destroy_0_0(t);
  t = n_51;
  return(t);
}
ATerm option_wrap_5_0 (ATerm m_139 (ATerm), ATerm n_139 (ATerm), ATerm o_139 (ATerm), ATerm p_139 (ATerm), ATerm q_139 (ATerm), ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
  t = parse_options_3_0(m_139, n_139, o_139, t);
  s_52 = t;
  t = term_y_14;
  t = table_create_0_0(t);
  t = term_y_14;
  t_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_14, term_z_14, s_52);
  t = lookup_table_0_1(t_52, t);
  w_52 = t;
  t = term_z_14;
  u_52 = t;
  t = w_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_4(u_52, s_52, v_52, t);
  t = s_52;
  t = p_139(t);
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_139(t);
        t = report_success_0_0(t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      {
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(d_5, x_5, y_5, t);
                  LocalPopChoice(j_15);
                }
              else
                {
                  t = h_15;
                  {
                    ATerm l_15 = t;
                    int m_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(m_15);
                      }
                    else
                      {
                        t = l_15;
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
static ATerm c_5 (ATerm t)
{
  t = input_1_0(z_5, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL;
  t = term_l_8;
  b_53 = t;
  t = term_b_10;
  c_53 = t;
  t = term_n_15;
  t = m_4(b_53, c_53, t);
  t = term_o_15;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_p_15;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = output_1_0(a_6, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_53 = NULL,w_53 = NULL,o_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_13 = NULL,b_13 = NULL,a_13 = NULL,z_12 = NULL;
      v_53 = t;
      if(match_cons(t, sym_Specification_1))
        {
          w_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_53);
      o_57 = t;
      t = w_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_57 = ATgetFirst((ATermList) t);
          s_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_53);
      q_57 = t;
      t = s_57;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_57 = ATgetFirst((ATermList) t);
          w_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_57);
      u_57 = t;
      t = v_57;
      if(match_cons(t, sym_Strategies_1))
        {
          z_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_57);
      y_57 = t;
      t = z_57;
      t = map_1_0(strategy_definition_0_0, t);
      a_58 = t;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, a_58);
      z_12 = t;
      t = SSLsetAnnotations(z_12, y_57);
      b_58 = t;
      t = w_57;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(w_57), b_58);
      a_13 = t;
      t = SSLsetAnnotations(a_13, u_57);
      x_57 = t;
      t = (ATerm) ATinsert(CheckATermList(x_57), r_57);
      b_13 = t;
      t = SSLsetAnnotations(b_13, q_57);
      t_57 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, t_57);
      c_13 = t;
      t = SSLsetAnnotations(c_13, o_57);
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      {
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = amb_error_0_0(t);
            LocalPopChoice(t_15);
          }
        else
          {
            t = s_15;
            t = debug_1_0(b_6, t);
          }
      }
    }
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
        x_53 = t;
        t = term_e_8;
        y_53 = t;
        t = term_f_6;
        z_53 = t;
        t = term_w_15;
        t = j_4(y_53, z_53, t);
        t = x_53;
        LocalPopChoice(v_15);
        {
          ATerm a_54 = NULL;
          t = term_g_6;
          a_54 = t;
          t = SSL_exit(a_54);
        }
      }
    else
      {
        t = u_15;
      }
  }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_y_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(b_5, default_system_usage_0_0, default_system_about_0_0, _id, c_5, t);
  return(t);
}
