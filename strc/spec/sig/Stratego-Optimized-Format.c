#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
static Symbol sym_SVar_1;
static Symbol sym_GChoice_2;
static Symbol sym_Choice_2;
static Symbol sym_Thread_1;
static Symbol sym_All_1;
static Symbol sym_One_1;
static Symbol sym_Some_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
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
static Symbol sym_SDef_3;
static Symbol sym_FunType_2;
static Symbol sym_ConstType_1;
static Symbol sym_Sort_2;
static Symbol sym_SortVar_1;
static Symbol sym_Str_1;
static Symbol sym_Int_1;
static Symbol sym_Real_1;
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
static Symbol sym_SVar_1;
static Symbol sym_GChoice_2;
static Symbol sym_Choice_2;
static Symbol sym_Thread_1;
static Symbol sym_All_1;
static Symbol sym_One_1;
static Symbol sym_Some_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
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
static Symbol sym_SDef_3;
static Symbol sym_FunType_2;
static Symbol sym_ConstType_1;
static Symbol sym_Sort_2;
static Symbol sym_SortVar_1;
static Symbol sym_Undefined_0;
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
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_SortVar_1 = ATmakeSymbol("SortVar", 1, ATfalse);
  ATprotectSymbol(sym_SortVar_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
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
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_SortVar_1 = ATmakeSymbol("SortVar", 1, ATfalse);
  ATprotectSymbol(sym_SortVar_1);
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
static ATerm term_l_14;
static ATerm term_h_14;
static ATerm term_g_14;
static ATerm term_f_14;
static ATerm term_p_13;
static ATerm term_o_13;
static ATerm term_n_13;
static ATerm term_k_13;
static ATerm term_j_13;
static ATerm term_w_12;
static ATerm term_u_12;
static ATerm term_t_12;
static ATerm term_s_12;
static ATerm term_r_12;
static ATerm term_m_12;
static ATerm term_e_12;
static ATerm term_d_12;
static ATerm term_c_12;
static ATerm term_b_12;
static ATerm term_a_12;
static ATerm term_z_11;
static ATerm term_y_11;
static ATerm term_u_11;
static ATerm term_t_11;
static ATerm term_p_11;
static ATerm term_o_11;
static ATerm term_n_11;
static ATerm term_b_11;
static ATerm term_a_11;
static ATerm term_z_10;
static ATerm term_s_10;
static ATerm term_n_10;
static ATerm term_m_10;
static ATerm term_k_10;
static ATerm term_i_10;
static ATerm term_h_10;
static ATerm term_g_10;
static ATerm term_f_10;
static ATerm term_e_10;
static ATerm term_d_10;
static ATerm term_c_10;
static ATerm term_b_10;
static ATerm term_a_10;
static ATerm term_x_9;
static ATerm term_u_9;
static ATerm term_t_9;
static ATerm term_s_9;
static ATerm term_n_9;
static ATerm term_g_9;
static ATerm term_e_9;
static ATerm term_t_8;
static ATerm term_s_8;
static ATerm term_q_8;
static ATerm term_o_8;
static ATerm term_n_8;
static ATerm term_k_8;
static ATerm term_j_8;
static ATerm term_k_7;
static ATerm term_j_7;
static ATerm term_d_7;
static ATerm term_c_7;
static ATerm term_b_7;
static ATerm term_a_7;
static ATerm term_x_6;
static ATerm term_u_6;
static ATerm term_n_6;
static ATerm term_j_6;
static ATerm term_y_5;
static ATerm term_v_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym__2, term_a_7, term_b_7);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym__2, term_a_7, term_j_7);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__2, term_a_7, term_n_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym__2, term_a_7, term_s_8);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_t_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_d_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_e_9);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym__2, term_a_7, term_c_10);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_y_11, term_e_9);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, term_b_12, term_e_9);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_r_12, term_e_9);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym__3, term_s_9, term_t_9, (ATerm) ATempty);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__2, term_a_7, term_r_12);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__2, term_a_7, term_y_11);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__2, term_j_7, term_e_9);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm debug_1_0 (ATerm n_121 (ATerm), ATerm t);
ATerm type_expression_0_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm build_term_expression_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm match_term_expression_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm x_121 (ATerm), ATerm t);
static ATerm r_3 (ATerm p_57, ATerm q_57, ATerm t);
static ATerm s_3 (ATerm s_41, ATerm t_41, ATerm t);
static ATerm u_3 (ATerm p_121 (ATerm), ATerm y_275, ATerm y_41, ATerm t);
static ATerm t_3 (ATerm o_41, ATerm p_41, ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm output_1_0 (ATerm i_142 (ATerm), ATerm t);
static ATerm k_41 (ATerm e_41, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm v_3 (ATerm u_41, ATerm t);
static ATerm w_3 (ATerm v_55, ATerm w_55, ATerm t);
static ATerm x_3 (ATerm r_57, ATerm s_57, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm e_43 (ATerm b_42, ATerm t);
static ATerm f_43 (ATerm f_42, ATerm g_42, ATerm h_42, ATerm t);
static ATerm g_43 (ATerm p_42, ATerm q_42, ATerm r_42, ATerm t);
static ATerm y_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm j_142 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm default_system_usage_2_0 (ATerm h_144 (ATerm), ATerm i_144 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_4 (ATerm v_77, ATerm w_77, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_4 (ATerm b_63, ATerm c_63, ATerm a_63, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_3 (ATerm k_61, ATerm l_61, ATerm t);
ATerm foldr_2_0 (ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_139 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_4 (ATerm q_67, ATerm r_67, ATerm s_67, ATerm t);
ATerm lookup_table_0_1 (ATerm n_64, ATerm t);
ATerm new_hashtable_0_2 (ATerm y_67, ATerm z_67, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm b_4 (ATerm v_67, ATerm w_67, ATerm t);
static ATerm c_4 (ATerm a_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_122 (ATerm), ATerm t);
static ATerm j_4 (ATerm t_67, ATerm u_67, ATerm t);
static ATerm e_4 (ATerm u_64, ATerm v_64, ATerm t);
static ATerm r_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm c_144 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm parse_options_3_0 (ATerm z_143 (ATerm), ATerm a_144 (ATerm), ATerm b_144 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm c_142 (ATerm), ATerm d_142 (ATerm), ATerm e_142 (ATerm), ATerm f_142 (ATerm), ATerm g_142 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm n_121 (ATerm), ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,e_0 = NULL,h_0 = NULL;
  a_0 = t;
  t = n_121(t);
  b_0 = t;
  t = term_v_5;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), b_0);
  h_0 = t;
  t = SSL_printnl(e_0, h_0);
  t = a_0;
  return(t);
}
ATerm type_expression_0_0 (ATerm t)
{
  ATerm q_4 = NULL,s_4 = NULL,t_4 = NULL;
  q_4 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      s_4 = ATgetArgument(t, 0);
      {
        ATerm l_1 = NULL,o_1 = NULL,k_0 = NULL;
        t = SSLgetAnnotations(q_4);
        l_1 = t;
        t = s_4;
        {
          static ATerm f_3 (ATerm t);
          static ATerm f_3 (ATerm t)
          {
            ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL;
            d_3 = t;
            if(match_cons(t, sym_Sort_2))
              {
                e_3 = ATgetArgument(t, 0);
                c_3 = ATgetArgument(t, 1);
                {
                  ATerm q_3 = NULL,g_4 = NULL,m_4 = NULL,c_0 = NULL;
                  t = SSLgetAnnotations(d_3);
                  q_3 = t;
                  t = SSL_is_string(e_3);
                  g_4 = t;
                  t = c_3;
                  t = map_1_0(f_3, t);
                  m_4 = t;
                  t = (ATerm) ATmakeAppl(sym_Sort_2, g_4, m_4);
                  c_0 = t;
                  t = SSLsetAnnotations(c_0, q_3);
                }
              }
            else
              {
                ATerm d_5 = NULL,f_5 = NULL,i_0 = NULL;
                if(match_cons(t, sym_SortVar_1))
                  {
                    e_3 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_3);
                d_5 = t;
                t = SSL_is_string(e_3);
                f_5 = t;
                t = (ATerm) ATmakeAppl(sym_SortVar_1, f_5);
                i_0 = t;
                t = SSLsetAnnotations(i_0, d_5);
              }
            return(t);
          }
          t = f_3(t);
        }
        o_1 = t;
        t = (ATerm) ATmakeAppl(sym_ConstType_1, o_1);
        k_0 = t;
        t = SSLsetAnnotations(k_0, l_1);
      }
    }
  else
    {
      ATerm r_5 = NULL,w_5 = NULL,x_5 = NULL,m_0 = NULL;
      if(match_cons(t, sym_FunType_2))
        {
          s_4 = ATgetArgument(t, 0);
          t_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_4);
      r_5 = t;
      t = s_4;
      t = map_1_0(type_expression_0_0, t);
      w_5 = t;
      t = t_4;
      t = type_expression_0_0(t);
      x_5 = t;
      t = (ATerm) ATmakeAppl(sym_FunType_2, w_5, x_5);
      m_0 = t;
      t = SSLsetAnnotations(m_0, r_5);
    }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = term_y_5;
  return(t);
}
ATerm build_term_expression_0_0 (ATerm t)
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
      w_8 = t;
      if(match_cons(t, sym_Var_1))
        {
          x_8 = ATgetArgument(t, 0);
          {
            ATerm g_6 = NULL,i_6 = NULL,u_0 = NULL;
            t = SSLgetAnnotations(w_8);
            g_6 = t;
            t = SSL_is_string(x_8);
            i_6 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, i_6);
            u_0 = t;
            t = SSLsetAnnotations(u_0, g_6);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              x_8 = ATgetArgument(t, 0);
              {
                ATerm q_6 = NULL,i_7 = NULL,v_0 = NULL;
                t = SSLgetAnnotations(w_8);
                q_6 = t;
                t = SSL_is_int(x_8);
                i_7 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, i_7);
                v_0 = t;
                t = SSLsetAnnotations(v_0, q_6);
              }
            }
          else
            {
              if(match_cons(t, sym_Real_1))
                {
                  x_8 = ATgetArgument(t, 0);
                  {
                    ATerm p_7 = NULL,r_7 = NULL,w_0 = NULL;
                    t = SSLgetAnnotations(w_8);
                    p_7 = t;
                    t = SSL_is_real(x_8);
                    r_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Real_1, r_7);
                    w_0 = t;
                    t = SSLsetAnnotations(w_0, p_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      x_8 = ATgetArgument(t, 0);
                      {
                        ATerm d_8 = NULL,g_8 = NULL,x_0 = NULL;
                        t = SSLgetAnnotations(w_8);
                        d_8 = t;
                        t = SSL_is_string(x_8);
                        g_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Str_1, g_8);
                        x_0 = t;
                        t = SSLsetAnnotations(x_0, d_8);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          x_8 = ATgetArgument(t, 0);
                          v_8 = ATgetArgument(t, 1);
                          {
                            ATerm p_8 = NULL,u_8 = NULL,y_8 = NULL,y_0 = NULL;
                            t = SSLgetAnnotations(w_8);
                            p_8 = t;
                            t = SSL_is_string(x_8);
                            u_8 = t;
                            t = v_8;
                            t = map_1_0(build_term_expression_0_0, t);
                            y_8 = t;
                            t = (ATerm) ATmakeAppl(sym_Op_2, u_8, y_8);
                            y_0 = t;
                            t = SSLsetAnnotations(y_0, p_8);
                          }
                        }
                      else
                        {
                          ATerm m_9 = NULL,o_9 = NULL,z_0 = NULL;
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              x_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(w_8);
                          m_9 = t;
                          t = x_8;
                          t = build_term_expression_0_0(t);
                          o_9 = t;
                          t = (ATerm) ATmakeAppl(sym_BuildDefault_1, o_9);
                          z_0 = t;
                          t = SSLsetAnnotations(z_0, m_9);
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
      t = debug_1_0(n_0, t);
    }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_y_5;
  return(t);
}
ATerm match_term_expression_0_0 (ATerm t)
{
  ATerm c_6 = t;
  int d_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_13 = NULL,w_13 = NULL,a_14 = NULL;
      s_13 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = s_13;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              w_13 = ATgetArgument(t, 0);
              {
                ATerm j_10 = NULL,l_10 = NULL,g_1 = NULL;
                t = SSLgetAnnotations(s_13);
                j_10 = t;
                t = SSL_is_string(w_13);
                l_10 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, l_10);
                g_1 = t;
                t = SSLsetAnnotations(g_1, j_10);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  w_13 = ATgetArgument(t, 0);
                  {
                    ATerm u_10 = NULL,x_10 = NULL,h_1 = NULL;
                    t = SSLgetAnnotations(s_13);
                    u_10 = t;
                    t = SSL_is_int(w_13);
                    x_10 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, x_10);
                    h_1 = t;
                    t = SSLsetAnnotations(h_1, u_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      w_13 = ATgetArgument(t, 0);
                      {
                        ATerm e_11 = NULL,g_11 = NULL,i_1 = NULL;
                        t = SSLgetAnnotations(s_13);
                        e_11 = t;
                        t = SSL_is_real(w_13);
                        g_11 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, g_11);
                        i_1 = t;
                        t = SSLsetAnnotations(i_1, e_11);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          w_13 = ATgetArgument(t, 0);
                          {
                            ATerm r_11 = NULL,v_11 = NULL,n_1 = NULL;
                            t = SSLgetAnnotations(s_13);
                            r_11 = t;
                            t = SSL_is_string(w_13);
                            v_11 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, v_11);
                            n_1 = t;
                            t = SSLsetAnnotations(n_1, r_11);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Op_2))
                            {
                              w_13 = ATgetArgument(t, 0);
                              a_14 = ATgetArgument(t, 1);
                              {
                                ATerm f_12 = NULL,i_12 = NULL,j_12 = NULL,p_1 = NULL;
                                t = SSLgetAnnotations(s_13);
                                f_12 = t;
                                t = SSL_is_string(w_13);
                                i_12 = t;
                                t = a_14;
                                t = map_1_0(match_term_expression_0_0, t);
                                j_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Op_2, i_12, j_12);
                                p_1 = t;
                                t = SSLsetAnnotations(p_1, f_12);
                              }
                            }
                          else
                            {
                              ATerm v_12 = NULL,z_12 = NULL,b_13 = NULL,q_1 = NULL;
                              if(match_cons(t, sym_As_2))
                                {
                                  w_13 = ATgetArgument(t, 0);
                                  a_14 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(s_13);
                              v_12 = t;
                              t = w_13;
                              t = match_term_expression_0_0(t);
                              z_12 = t;
                              t = a_14;
                              t = match_term_expression_0_0(t);
                              b_13 = t;
                              t = (ATerm) ATmakeAppl(sym_As_2, z_12, b_13);
                              q_1 = t;
                              t = SSLsetAnnotations(q_1, v_12);
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(d_6);
    }
  else
    {
      t = c_6;
      t = debug_1_0(q_0, t);
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm f_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_24 = NULL;
      m_24 = t;
      t = SSL_is_string(m_24);
      LocalPopChoice(h_6);
    }
  else
    {
      t = f_6;
      t = map_1_0(t_0, t);
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm s_26 = NULL;
  s_26 = t;
  t = SSL_is_int(s_26);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,n_27 = NULL,o_27 = NULL,t_2 = NULL;
  o_27 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      e_27 = ATgetArgument(t, 0);
      g_27 = ATgetArgument(t, 1);
      h_27 = ATgetArgument(t, 2);
      i_27 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_27);
  d_27 = t;
  t = SSL_is_string(e_27);
  j_27 = t;
  t = g_27;
  t = map_1_0(b_1, t);
  k_27 = t;
  t = h_27;
  t = map_1_0(c_1, t);
  l_27 = t;
  t = i_27;
  t = strategy_expression_0_0(t);
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, j_27, k_27, l_27, n_27);
  t_2 = t;
  t = SSLsetAnnotations(t_2, d_27);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,r_2 = NULL;
  u_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      q_27 = ATgetArgument(t, 0);
      r_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_27);
  p_27 = t;
  t = SSL_is_string(q_27);
  s_27 = t;
  t = r_27;
  t = type_expression_0_0(t);
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_27, t_27);
  r_2 = t;
  t = SSLsetAnnotations(r_2, p_27);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,s_2 = NULL;
  b_28 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      w_27 = ATgetArgument(t, 0);
      y_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_28);
  v_27 = t;
  t = SSL_is_string(w_27);
  z_27 = t;
  t = y_27;
  t = type_expression_0_0(t);
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_27, a_28);
  s_2 = t;
  t = SSLsetAnnotations(s_2, v_27);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_j_6;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm k_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL;
      u_33 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = u_33;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = u_33;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  v_33 = ATgetArgument(t, 0);
                  {
                    ATerm u_13 = NULL,x_13 = NULL,y_1 = NULL;
                    t = SSLgetAnnotations(u_33);
                    u_13 = t;
                    t = v_33;
                    t = strategy_expression_0_0(t);
                    x_13 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, x_13);
                    y_1 = t;
                    t = SSLsetAnnotations(y_1, u_13);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      v_33 = ATgetArgument(t, 0);
                      w_33 = ATgetArgument(t, 1);
                      {
                        ATerm j_14 = NULL,p_14 = NULL,q_14 = NULL,z_1 = NULL;
                        t = SSLgetAnnotations(u_33);
                        j_14 = t;
                        t = v_33;
                        t = strategy_expression_0_0(t);
                        p_14 = t;
                        t = w_33;
                        t = strategy_expression_0_0(t);
                        q_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, p_14, q_14);
                        z_1 = t;
                        t = SSLsetAnnotations(z_1, j_14);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Choice_2))
                        {
                          v_33 = ATgetArgument(t, 0);
                          w_33 = ATgetArgument(t, 1);
                          {
                            ATerm y_14 = NULL,b_15 = NULL,c_15 = NULL,a_2 = NULL;
                            t = SSLgetAnnotations(u_33);
                            y_14 = t;
                            t = v_33;
                            t = strategy_expression_0_0(t);
                            b_15 = t;
                            t = w_33;
                            t = strategy_expression_0_0(t);
                            c_15 = t;
                            t = (ATerm) ATmakeAppl(sym_Choice_2, b_15, c_15);
                            a_2 = t;
                            t = SSLsetAnnotations(a_2, y_14);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LChoice_2))
                            {
                              v_33 = ATgetArgument(t, 0);
                              w_33 = ATgetArgument(t, 1);
                              {
                                ATerm k_15 = NULL,n_15 = NULL,o_15 = NULL,b_2 = NULL;
                                t = SSLgetAnnotations(u_33);
                                k_15 = t;
                                t = v_33;
                                t = strategy_expression_0_0(t);
                                n_15 = t;
                                t = w_33;
                                t = strategy_expression_0_0(t);
                                o_15 = t;
                                t = (ATerm) ATmakeAppl(sym_LChoice_2, n_15, o_15);
                                b_2 = t;
                                t = SSLsetAnnotations(b_2, k_15);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GuardedLChoice_3))
                                {
                                  v_33 = ATgetArgument(t, 0);
                                  w_33 = ATgetArgument(t, 1);
                                  t_33 = ATgetArgument(t, 2);
                                  {
                                    ATerm x_15 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,c_2 = NULL;
                                    t = SSLgetAnnotations(u_33);
                                    x_15 = t;
                                    t = v_33;
                                    t = strategy_expression_0_0(t);
                                    b_16 = t;
                                    t = w_33;
                                    t = strategy_expression_0_0(t);
                                    c_16 = t;
                                    t = t_33;
                                    t = strategy_expression_0_0(t);
                                    d_16 = t;
                                    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, b_16, c_16, d_16);
                                    c_2 = t;
                                    t = SSLsetAnnotations(c_2, x_15);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GChoice_2))
                                    {
                                      v_33 = ATgetArgument(t, 0);
                                      w_33 = ATgetArgument(t, 1);
                                      {
                                        ATerm m_16 = NULL,p_16 = NULL,q_16 = NULL,d_2 = NULL;
                                        t = SSLgetAnnotations(u_33);
                                        m_16 = t;
                                        t = v_33;
                                        t = strategy_expression_0_0(t);
                                        p_16 = t;
                                        t = w_33;
                                        t = strategy_expression_0_0(t);
                                        q_16 = t;
                                        t = (ATerm) ATmakeAppl(sym_GChoice_2, p_16, q_16);
                                        d_2 = t;
                                        t = SSLsetAnnotations(d_2, m_16);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LGChoice_2))
                                        {
                                          v_33 = ATgetArgument(t, 0);
                                          w_33 = ATgetArgument(t, 1);
                                          {
                                            ATerm y_16 = NULL,c_17 = NULL,d_17 = NULL,e_2 = NULL;
                                            t = SSLgetAnnotations(u_33);
                                            y_16 = t;
                                            t = v_33;
                                            t = strategy_expression_0_0(t);
                                            c_17 = t;
                                            t = w_33;
                                            t = strategy_expression_0_0(t);
                                            d_17 = t;
                                            t = (ATerm) ATmakeAppl(sym_LGChoice_2, c_17, d_17);
                                            e_2 = t;
                                            t = SSLsetAnnotations(e_2, y_16);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              v_33 = ATgetArgument(t, 0);
                                              w_33 = ATgetArgument(t, 1);
                                              t_33 = ATgetArgument(t, 2);
                                              {
                                                ATerm w_17 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,k_18 = NULL,l_18 = NULL,g_2 = NULL,f_2 = NULL;
                                                t = SSLgetAnnotations(u_33);
                                                w_17 = t;
                                                t = v_33;
                                                if(match_cons(t, sym_SVar_1))
                                                  {
                                                    e_18 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(v_33);
                                                d_18 = t;
                                                t = SSL_is_string(e_18);
                                                k_18 = t;
                                                t = (ATerm) ATmakeAppl(sym_SVar_1, k_18);
                                                f_2 = t;
                                                t = SSLsetAnnotations(f_2, d_18);
                                                l_18 = t;
                                                t = w_33;
                                                t = map_1_0(strategy_expression_0_0, t);
                                                b_18 = t;
                                                t = t_33;
                                                t = map_1_0(build_term_expression_0_0, t);
                                                c_18 = t;
                                                t = (ATerm) ATmakeAppl(sym_CallT_3, l_18, b_18, c_18);
                                                g_2 = t;
                                                t = SSLsetAnnotations(g_2, w_17);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_PrimT_3))
                                                {
                                                  v_33 = ATgetArgument(t, 0);
                                                  w_33 = ATgetArgument(t, 1);
                                                  t_33 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm l_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,h_2 = NULL;
                                                    t = SSLgetAnnotations(u_33);
                                                    l_19 = t;
                                                    t = SSL_is_string(v_33);
                                                    t_19 = t;
                                                    t = w_33;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    u_19 = t;
                                                    t = t_33;
                                                    t = map_1_0(build_term_expression_0_0, t);
                                                    v_19 = t;
                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, t_19, u_19, v_19);
                                                    h_2 = t;
                                                    t = SSLsetAnnotations(h_2, l_19);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      v_33 = ATgetArgument(t, 0);
                                                      w_33 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm j_20 = NULL,o_20 = NULL,p_20 = NULL,i_2 = NULL;
                                                        t = SSLgetAnnotations(u_33);
                                                        j_20 = t;
                                                        t = SSL_is_string(v_33);
                                                        o_20 = t;
                                                        t = w_33;
                                                        t = strategy_expression_0_0(t);
                                                        p_20 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, o_20, p_20);
                                                        i_2 = t;
                                                        t = SSLsetAnnotations(i_2, j_20);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          v_33 = ATgetArgument(t, 0);
                                                          w_33 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm b_21 = NULL,h_21 = NULL,j_21 = NULL,j_2 = NULL;
                                                            t = SSLgetAnnotations(u_33);
                                                            b_21 = t;
                                                            t = SSL_is_int(v_33);
                                                            h_21 = t;
                                                            t = w_33;
                                                            t = strategy_expression_0_0(t);
                                                            j_21 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, h_21, j_21);
                                                            j_2 = t;
                                                            t = SSLsetAnnotations(j_2, b_21);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_One_1))
                                                            {
                                                              v_33 = ATgetArgument(t, 0);
                                                              {
                                                                ATerm w_21 = NULL,y_21 = NULL,k_2 = NULL;
                                                                t = SSLgetAnnotations(u_33);
                                                                w_21 = t;
                                                                t = v_33;
                                                                t = strategy_expression_0_0(t);
                                                                y_21 = t;
                                                                t = (ATerm) ATmakeAppl(sym_One_1, y_21);
                                                                k_2 = t;
                                                                t = SSLsetAnnotations(k_2, w_21);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Some_1))
                                                                {
                                                                  v_33 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm g_22 = NULL,i_22 = NULL,l_2 = NULL;
                                                                    t = SSLgetAnnotations(u_33);
                                                                    g_22 = t;
                                                                    t = v_33;
                                                                    t = strategy_expression_0_0(t);
                                                                    i_22 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Some_1, i_22);
                                                                    l_2 = t;
                                                                    t = SSLsetAnnotations(l_2, g_22);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_All_1))
                                                                    {
                                                                      v_33 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm q_22 = NULL,s_22 = NULL,m_2 = NULL;
                                                                        t = SSLgetAnnotations(u_33);
                                                                        q_22 = t;
                                                                        t = v_33;
                                                                        t = strategy_expression_0_0(t);
                                                                        s_22 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_All_1, s_22);
                                                                        m_2 = t;
                                                                        t = SSLsetAnnotations(m_2, q_22);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Thread_1))
                                                                        {
                                                                          v_33 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm a_23 = NULL,d_23 = NULL,n_2 = NULL;
                                                                            t = SSLgetAnnotations(u_33);
                                                                            a_23 = t;
                                                                            t = v_33;
                                                                            t = strategy_expression_0_0(t);
                                                                            d_23 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_Thread_1, d_23);
                                                                            n_2 = t;
                                                                            t = SSLsetAnnotations(n_2, a_23);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Match_1))
                                                                            {
                                                                              v_33 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm k_23 = NULL,m_23 = NULL,o_2 = NULL;
                                                                                t = SSLgetAnnotations(u_33);
                                                                                k_23 = t;
                                                                                t = v_33;
                                                                                t = match_term_expression_0_0(t);
                                                                                m_23 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, m_23);
                                                                                o_2 = t;
                                                                                t = SSLsetAnnotations(o_2, k_23);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Build_1))
                                                                                {
                                                                                  v_33 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm t_23 = NULL,v_23 = NULL,p_2 = NULL;
                                                                                    t = SSLgetAnnotations(u_33);
                                                                                    t_23 = t;
                                                                                    t = v_33;
                                                                                    t = build_term_expression_0_0(t);
                                                                                    v_23 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, v_23);
                                                                                    p_2 = t;
                                                                                    t = SSLsetAnnotations(p_2, t_23);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Scope_2))
                                                                                    {
                                                                                      v_33 = ATgetArgument(t, 0);
                                                                                      w_33 = ATgetArgument(t, 1);
                                                                                      {
                                                                                        ATerm d_24 = NULL,g_24 = NULL,i_24 = NULL,q_2 = NULL;
                                                                                        t = SSLgetAnnotations(u_33);
                                                                                        d_24 = t;
                                                                                        t = v_33;
                                                                                        t = map_1_0(s_0, t);
                                                                                        g_24 = t;
                                                                                        t = w_33;
                                                                                        t = strategy_expression_0_0(t);
                                                                                        i_24 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, g_24, i_24);
                                                                                        q_2 = t;
                                                                                        t = SSLsetAnnotations(q_2, d_24);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      ATerm w_26 = NULL,a_27 = NULL,b_27 = NULL,u_2 = NULL;
                                                                                      if(match_cons(t, sym_Let_2))
                                                                                        {
                                                                                          v_33 = ATgetArgument(t, 0);
                                                                                          w_33 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = SSLgetAnnotations(u_33);
                                                                                      w_26 = t;
                                                                                      t = v_33;
                                                                                      t = map_1_0(a_1, t);
                                                                                      a_27 = t;
                                                                                      t = w_33;
                                                                                      t = strategy_expression_0_0(t);
                                                                                      b_27 = t;
                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, a_27, b_27);
                                                                                      u_2 = t;
                                                                                      t = SSLsetAnnotations(u_2, w_26);
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
      LocalPopChoice(m_6);
    }
  else
    {
      t = k_6;
      t = debug_1_0(d_1, t);
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,m_5 = NULL;
  z_28 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      u_28 = ATgetArgument(t, 0);
      v_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_28);
  t_28 = t;
  t = SSL_is_string(u_28);
  x_28 = t;
  t = v_28;
  t = type_expression_0_0(t);
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_28, y_28);
  m_5 = t;
  t = SSLsetAnnotations(m_5, t_28);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,z_30 = NULL,a_31 = NULL,p_5 = NULL;
  a_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      t_30 = ATgetArgument(t, 0);
      u_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_31);
  s_30 = t;
  t = SSL_is_string(t_30);
  v_30 = t;
  t = u_30;
  t = type_expression_0_0(t);
  z_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_30, z_30);
  p_5 = t;
  t = SSLsetAnnotations(p_5, s_30);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm b_31 = NULL,e_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,s_5 = NULL;
  j_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_31 = ATgetArgument(t, 0);
      g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_31);
  b_31 = t;
  t = SSL_is_string(e_31);
  h_31 = t;
  t = g_31;
  t = type_expression_0_0(t);
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_31, i_31);
  s_5 = t;
  t = SSLsetAnnotations(s_5, b_31);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,z_5 = NULL;
  o_33 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      h_33 = ATgetArgument(t, 0);
      i_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_33);
  g_33 = t;
  t = SSL_is_string(h_33);
  m_33 = t;
  t = i_33;
  t = type_expression_0_0(t);
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_33, n_33);
  z_5 = t;
  t = SSLsetAnnotations(z_5, g_33);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,y_33 = NULL,z_33 = NULL,b_34 = NULL,f_34 = NULL,e_6 = NULL;
  f_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      q_33 = ATgetArgument(t, 0);
      y_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_34);
  p_33 = t;
  t = SSL_is_string(q_33);
  z_33 = t;
  t = y_33;
  t = type_expression_0_0(t);
  b_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_33, b_34);
  e_6 = t;
  t = SSLsetAnnotations(e_6, p_33);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,q_39 = NULL,r_39 = NULL,x_40 = NULL,y_40 = NULL,o_6 = NULL;
  y_40 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_35 = ATgetArgument(t, 0);
      q_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_40);
  n_35 = t;
  t = SSL_is_string(o_35);
  r_39 = t;
  t = q_39;
  t = type_expression_0_0(t);
  x_40 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_39, x_40);
  o_6 = t;
  t = SSLsetAnnotations(o_6, n_35);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm z_40 = NULL,r_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,z_41 = NULL,r_6 = NULL;
  z_41 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      r_41 = ATgetArgument(t, 0);
      v_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_41);
  z_40 = t;
  t = SSL_is_string(r_41);
  w_41 = t;
  t = v_41;
  t = type_expression_0_0(t);
  x_41 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_41, x_41);
  r_6 = t;
  t = SSLsetAnnotations(r_6, z_40);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_n_6;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm p_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
      i_39 = t;
      if(match_cons(t, sym_SDef_3))
        {
          j_39 = ATgetArgument(t, 0);
          k_39 = ATgetArgument(t, 1);
          l_39 = ATgetArgument(t, 2);
          {
            ATerm k_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,n_5 = NULL;
            t = SSLgetAnnotations(i_39);
            k_28 = t;
            t = SSL_is_string(j_39);
            p_28 = t;
            t = k_39;
            t = map_1_0(e_1, t);
            q_28 = t;
            t = l_39;
            t = strategy_expression_0_0(t);
            r_28 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, p_28, q_28, r_28);
            n_5 = t;
            t = SSLsetAnnotations(n_5, k_28);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              j_39 = ATgetArgument(t, 0);
              k_39 = ATgetArgument(t, 1);
              l_39 = ATgetArgument(t, 2);
              h_39 = ATgetArgument(t, 3);
              {
                ATerm l_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,q_30 = NULL,u_5 = NULL;
                t = SSLgetAnnotations(i_39);
                l_29 = t;
                t = SSL_is_string(j_39);
                q_29 = t;
                t = k_39;
                t = map_1_0(f_1, t);
                r_29 = t;
                t = l_39;
                t = map_1_0(j_1, t);
                s_29 = t;
                t = h_39;
                t = strategy_expression_0_0(t);
                q_30 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, q_29, r_29, s_29, q_30);
                u_5 = t;
                t = SSLsetAnnotations(u_5, l_29);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  j_39 = ATgetArgument(t, 0);
                  k_39 = ATgetArgument(t, 1);
                  l_39 = ATgetArgument(t, 2);
                  h_39 = ATgetArgument(t, 3);
                  {
                    ATerm o_32 = NULL,w_32 = NULL,x_32 = NULL,d_33 = NULL,e_33 = NULL,l_6 = NULL;
                    t = SSLgetAnnotations(i_39);
                    o_32 = t;
                    t = SSL_is_string(j_39);
                    w_32 = t;
                    t = k_39;
                    t = map_1_0(k_1, t);
                    x_32 = t;
                    t = l_39;
                    t = map_1_0(m_1, t);
                    d_33 = t;
                    t = h_39;
                    t = strategy_expression_0_0(t);
                    e_33 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, w_32, x_32, d_33, e_33);
                    l_6 = t;
                    t = SSLsetAnnotations(l_6, o_32);
                  }
                }
              else
                {
                  ATerm t_34 = NULL,b_35 = NULL,k_35 = NULL,l_35 = NULL,s_6 = NULL;
                  if(match_cons(t, sym_ExtSDef_3))
                    {
                      j_39 = ATgetArgument(t, 0);
                      k_39 = ATgetArgument(t, 1);
                      l_39 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_39);
                  t_34 = t;
                  t = SSL_is_string(j_39);
                  b_35 = t;
                  t = k_39;
                  t = map_1_0(r_1, t);
                  k_35 = t;
                  t = l_39;
                  t = map_1_0(s_1, t);
                  l_35 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDef_3, b_35, k_35, l_35);
                  s_6 = t;
                  t = SSLsetAnnotations(s_6, t_34);
                }
            }
        }
      LocalPopChoice(t_6);
    }
  else
    {
      t = p_6;
      t = debug_1_0(t_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm x_121 (ATerm), ATerm t)
{
  static ATerm e_40 (ATerm t);
  static ATerm e_40 (ATerm t)
  {
    ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL;
    b_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_40;
      }
    else
      {
        ATerm m_44 = NULL,n_45 = NULL,z_45 = NULL,e_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_40 = ATgetFirst((ATermList) t);
            d_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_40);
        m_44 = t;
        t = c_40;
        t = x_121(t);
        n_45 = t;
        t = d_40;
        t = e_40(t);
        z_45 = t;
        t = (ATerm) ATinsert(CheckATermList(z_45), n_45);
        e_7 = t;
        t = SSLsetAnnotations(e_7, m_44);
      }
    return(t);
  }
  t = e_40(t);
  return(t);
}
static ATerm r_3 (ATerm p_57, ATerm q_57, ATerm t)
{
  ATerm g_40 = NULL;
  t = SSL_fputc(p_57, q_57);
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_40);
  return(t);
}
static ATerm s_3 (ATerm s_41, ATerm t_41, ATerm t)
{
  ATerm h_40 = NULL;
  t = SSL_write_term_to_stream_text(s_41, t_41);
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_40);
  return(t);
}
static ATerm u_3 (ATerm p_121 (ATerm), ATerm y_275, ATerm y_41, ATerm t)
{
  ATerm i_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_275, term_u_6);
  t = y_3(t);
  i_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_40, y_41);
  t = p_121(t);
  t = fclose_0_0(t);
  t = y_41;
  return(t);
}
static ATerm t_3 (ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm j_40 = NULL;
  t = SSL_write_term_to_stream_baf(o_41, p_41);
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_40);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_6 = ATgetArgument(t, 0);
      if(match_cons(v_6, sym_Stream_1))
        {
          q_40 = ATgetArgument(v_6, 0);
        }
      else
        _fail(t);
      r_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3(q_40, r_40, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if(match_cons(w_6, sym_Stream_1))
        {
          v_40 = ATgetArgument(w_6, 0);
        }
      else
        _fail(t);
      w_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_3(v_40, w_40, t);
  s_40 = t;
  t = term_x_6;
  t_40 = t;
  t = s_40;
  if(match_cons(t, sym_Stream_1))
    {
      u_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_6, s_40);
  t = r_3(t_40, u_40, t);
  return(t);
}
ATerm output_1_0 (ATerm i_142 (ATerm), ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL;
  t = i_142(t);
  l_40 = t;
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_40 = NULL,n_40 = NULL;
        t = term_a_7;
        m_40 = t;
        t = term_b_7;
        n_40 = t;
        t = term_c_7;
        t = e_4(m_40, n_40, t);
        LocalPopChoice(z_6);
      }
    else
      {
        t = y_6;
        t = term_d_7;
      }
  }
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_40, l_40);
  {
    ATerm f_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_40 = NULL,p_40 = NULL;
        t = term_a_7;
        o_40 = t;
        t = term_j_7;
        p_40 = t;
        t = term_k_7;
        t = e_4(o_40, p_40, t);
        t = (ATerm) ATmakeAppl(sym__2, k_40, l_40);
        LocalPopChoice(h_7);
        if(match_cons(t, sym__2))
          {
            ATerm m_7 = ATgetArgument(t, 0);
            ATerm n_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_3(u_1, k_40, l_40, t);
      }
    else
      {
        t = f_7;
        if(match_cons(t, sym__2))
          {
            ATerm o_7 = ATgetArgument(t, 0);
            ATerm q_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_3(v_1, k_40, l_40, t);
      }
  }
  return(t);
}
static ATerm k_41 (ATerm e_41, ATerm t)
{
  t = SSL_fclose(e_41);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL;
  i_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_41 = ATgetArgument(t, 0);
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_41);
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            t = k_41(i_41, t);
          }
      }
    }
  else
    {
      t = k_41(i_41, t);
    }
  return(t);
}
static ATerm v_3 (ATerm u_41, ATerm t)
{
  t = SSL_read_term_from_stream(u_41);
  return(t);
}
static ATerm w_3 (ATerm v_55, ATerm w_55, ATerm t)
{
  t = SSL_strcat(v_55, w_55);
  return(t);
}
static ATerm x_3 (ATerm r_57, ATerm s_57, ATerm t)
{
  ATerm l_41 = NULL;
  t = SSL_fopen(r_57, s_57);
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_41);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_41 = NULL;
  t = SSL_stdin_stream();
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_41);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_41 = NULL;
  t = SSL_stdout_stream();
  n_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_41);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_41 = NULL;
  t = SSL_stderr_stream();
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_41);
  return(t);
}
static ATerm e_43 (ATerm b_42, ATerm t)
{
  ATerm c_42 = NULL;
  t = SSL_explode_term(b_42);
  if(match_cons(t, sym__2))
    {
      ATerm u_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_7 = ATgetArgument(t, 1);
        if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
          {
            c_42 = ATgetFirst((ATermList) v_7);
            {
              ATerm x_7 = (ATerm) ATgetNext((ATermList) v_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_42;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_42;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_42;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_42;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm f_43 (ATerm f_42, ATerm g_42, ATerm h_42, ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL,n_42 = NULL,g_7 = NULL;
  t = SSLgetAnnotations(h_42);
  k_42 = t;
  t = f_42;
  if(match_cons(t, sym_Path_1))
    {
      n_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_42, g_42);
  g_7 = t;
  t = SSLsetAnnotations(g_7, k_42);
  if(match_cons(t, sym__2))
    {
      i_42 = ATgetArgument(t, 0);
      j_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3(i_42, j_42, t);
  return(t);
}
static ATerm g_43 (ATerm p_42, ATerm q_42, ATerm r_42, ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,x_42 = NULL,l_7 = NULL;
  t = SSLgetAnnotations(r_42);
  u_42 = t;
  t = SSL_is_string(p_42);
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_42, q_42);
  l_7 = t;
  t = SSLsetAnnotations(l_7, u_42);
  if(match_cons(t, sym__2))
    {
      s_42 = ATgetArgument(t, 0);
      t_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3(s_42, t_42, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm z_42 = NULL,c_43 = NULL,d_43 = NULL;
  z_42 = t;
  if(match_cons(t, sym__2))
    {
      c_43 = ATgetArgument(t, 0);
      d_43 = ATgetArgument(t, 1);
      {
        ATerm y_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_43(z_42, t);
            LocalPopChoice(z_7);
          }
        else
          {
            t = y_7;
            {
              ATerm a_8 = t;
              int c_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_43(c_43, d_43, z_42, t);
                  LocalPopChoice(c_8);
                }
              else
                {
                  t = a_8;
                  t = g_43(c_43, d_43, z_42, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_43(z_42, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,p_43 = NULL;
  p_43 = t;
  {
    ATerm e_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_43, term_j_8);
        t = y_3(t);
        LocalPopChoice(h_8);
      }
    else
      {
        t = e_8;
        {
          ATerm k_49 = NULL,i_50 = NULL;
          t = term_k_8;
          i_50 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_8, p_43);
          t = w_3(i_50, p_43, t);
          k_49 = t;
          t = SSL_perror(k_49);
          _fail(t);
        }
      }
  }
  j_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_3(k_43, t);
  i_43 = t;
  t = j_43;
  t = fclose_0_0(t);
  t = i_43;
  return(t);
}
ATerm input_1_0 (ATerm j_142 (ATerm), ATerm t)
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_43 = NULL,t_43 = NULL;
      t = term_a_7;
      s_43 = t;
      t = term_n_8;
      t_43 = t;
      t = term_o_8;
      t = e_4(s_43, t_43, t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      t = term_q_8;
    }
  t = ReadFromFile_0_0(t);
  t = j_142(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL;
  t = term_a_7;
  u_43 = t;
  t = term_s_8;
  v_43 = t;
  t = term_t_8;
  t = e_4(u_43, v_43, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
  x_43 = t;
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_43;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_9 = ATgetFirst((ATermList) t);
                ATerm c_9 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_43;
          }
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        t = (ATerm) ATinsert(ATempty, x_43);
      }
  }
  y_43 = t;
  t = term_d_7;
  z_43 = t;
  t = SSL_printnl(z_43, y_43);
  t = x_43;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_44 = ATgetFirst((ATermList) t);
      f_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_44 = NULL,k_44 = NULL;
        static ATerm w_1 (ATerm t);
        static ATerm w_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_44)), not_null(k_44));
          return(t);
        }
        t = f_44;
        t = r_0(t);
        if(((j_44 != NULL) && (j_44 != t)))
          _fail(t);
        else
          j_44 = t;
        t = e_44;
        t = p_0(t);
        if(((k_44 != NULL) && (k_44 != t)))
          _fail(t);
        else
          k_44 = t;
        t = f_44;
        t = reverse_acc_2_0(p_0, w_1, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_9;
      t = r_0(t);
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,w_7 = NULL;
  u_44 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_44);
  s_44 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_44);
  w_7 = t;
  t = SSLsetAnnotations(w_7, s_44);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm y_44 = NULL;
  y_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_44), term_g_9);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm h_144 (ATerm), ATerm i_144 (ATerm), ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_44 = NULL,r_44 = NULL;
      t = term_a_7;
      q_44 = t;
      t = term_s_8;
      r_44 = t;
      t = term_t_8;
      t = e_4(q_44, r_44, t);
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      t = fetch_1_0(x_1, t);
    }
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_144(t);
        t = echo_0_0(t);
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
      }
  }
  t = term_n_9;
  t = echo_0_0(t);
  t = term_s_9;
  o_44 = t;
  t = term_t_9;
  p_44 = t;
  t = term_u_9;
  t = e_4(o_44, p_44, t);
  t = reverse_acc_2_0(_id, v_2, t);
  t = map_1_0(w_2, t);
  {
    ATerm v_9 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_44 = NULL;
        t = i_144(t);
        z_44 = t;
        t = (ATerm) ATinsert(CheckATermList(z_44), term_x_9);
        t = echo_0_0(t);
        LocalPopChoice(w_9);
      }
    else
      {
        t = v_9;
      }
  }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,b_8 = NULL;
  h_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_45);
  f_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_45);
  b_8 = t;
  t = SSLsetAnnotations(b_8, f_45);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_45 = NULL;
  c_45 = t;
  {
    ATerm y_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_45 = NULL,e_45 = NULL;
        t = term_a_7;
        d_45 = t;
        t = term_s_8;
        e_45 = t;
        t = term_t_8;
        t = e_4(d_45, e_45, t);
        LocalPopChoice(z_9);
      }
    else
      {
        t = y_9;
        t = fetch_1_0(x_2, t);
      }
  }
  t = c_45;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm j_45 = NULL;
  j_45 = t;
  if(match_string(t, "-k"))
    {
      t = j_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_45;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  t = SSL_string_to_int(k_45);
  l_45 = t;
  t = term_a_10;
  m_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, l_45);
  t = h_4(m_45, l_45, t);
  t = k_45;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_b_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, z_2, a_3, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm o_45 = NULL;
  o_45 = t;
  if(match_string(t, "-S"))
    {
      t = o_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_45;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL;
  t = term_c_10;
  p_45 = t;
  t = term_d_10;
  q_45 = t;
  t = term_e_10;
  t = h_4(p_45, q_45, t);
  t = term_f_10;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_g_10;
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
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL;
  r_45 = t;
  t = SSL_string_to_int(r_45);
  s_45 = t;
  t = term_c_10;
  t_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, s_45);
  t = h_4(t_45, s_45, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_45);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_h_10;
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
  ATerm u_45 = NULL,v_45 = NULL;
  t = term_i_10;
  u_45 = t;
  t = term_e_9;
  v_45 = t;
  t = term_k_10;
  t = h_4(u_45, v_45, t);
  t = term_m_10;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_n_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_3, g_3, h_3, t);
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
            t = ArgOption_3_0(i_3, j_3, k_3, t);
            LocalPopChoice(r_10);
          }
        else
          {
            t = q_10;
            t = Option_3_0(l_3, m_3, n_3, t);
          }
      }
    }
  return(t);
}
static ATerm h_4 (ATerm v_77, ATerm w_77, ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL;
  t = term_a_7;
  w_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_7, v_77, w_77);
  t = lookup_table_0_1(w_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_4(v_77, w_77, x_45, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_7, v_77, w_77);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL;
      t = term_e_9;
      t = g_0(t);
      d_46 = t;
      t = term_s_9;
      e_46 = t;
      t = term_t_9;
      f_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_9, term_t_9, d_46);
      t = f_4(e_46, f_46, d_46, t);
      _fail(t);
    }
  else
    {
      ATerm i_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_46 = ATgetFirst((ATermList) t);
          c_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_46;
      t = d_0(t);
      t = term_e_9;
      t = f_0(t);
      i_46 = t;
      t = (ATerm) ATinsert(CheckATermList(c_46), i_46);
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm k_46 = NULL;
  k_46 = t;
  if(match_string(t, "-o"))
    {
      t = k_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_46;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL;
  l_46 = t;
  t = term_b_7;
  m_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_7, l_46);
  t = h_4(m_46, l_46, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_46);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_s_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_3, p_3, a_4, t);
  return(t);
}
static ATerm f_4 (ATerm b_63, ATerm c_63, ATerm a_63, ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  o_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_63, c_63);
  {
    ATerm t_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_10 = ATgetArgument(t, 0);
            ATerm y_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_63, c_63);
        t = e_4(b_63, c_63, t);
        LocalPopChoice(v_10);
      }
    else
      {
        t = t_10;
        t = (ATerm) ATempty;
      }
  }
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_63, c_63, (ATerm) ATinsert(CheckATermList(p_46), a_63));
  t = lookup_table_0_1(b_63, t);
  s_46 = t;
  t = (ATerm) ATinsert(CheckATermList(p_46), a_63);
  q_46 = t;
  t = s_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_4(c_63, q_46, r_46, t);
  t = o_46;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL;
      t = term_e_9;
      t = o_0(t);
      d_47 = t;
      t = term_s_9;
      e_47 = t;
      t = term_t_9;
      f_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_9, term_t_9, d_47);
      t = f_4(e_47, f_47, d_47, t);
      _fail(t);
    }
  else
    {
      ATerm j_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_46 = ATgetFirst((ATermList) t);
          a_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_47 = ATgetFirst((ATermList) t);
          c_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_46;
      t = j_0(t);
      t = b_47;
      t = l_0(t);
      j_47 = t;
      t = (ATerm) ATinsert(CheckATermList(c_47), j_47);
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm l_47 = NULL;
  l_47 = t;
  if(match_string(t, "-i"))
    {
      t = l_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_47;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL;
  m_47 = t;
  t = term_n_8;
  n_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_8, m_47);
  t = h_4(n_47, m_47, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_47);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_z_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_4, k_4, l_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_9;
  t = whoami_0_0(t);
  o_47 = t;
  t = term_v_5;
  q_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_11), o_47);
  r_47 = t;
  t = SSL_printnl(q_47, r_47);
  t = term_b_11;
  p_47 = t;
  t = SSL_exit(p_47);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL;
  t = term_a_7;
  s_47 = t;
  t = term_s_8;
  t_47 = t;
  t = term_t_8;
  t = e_4(s_47, t_47, t);
  return(t);
}
static ATerm z_3 (ATerm k_61, ATerm l_61, ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_61, l_61);
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      t = SSL_addr(k_61, l_61);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL;
  v_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_47;
      t = u_128(t);
    }
  else
    {
      ATerm a_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_47 = ATgetFirst((ATermList) t);
          x_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_47;
      t = foldr_2_0(u_128, v_128, t);
      a_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_47, a_48);
      t = v_128(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_d_10;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm y_51 = NULL,q_52 = NULL;
  if(match_cons(t, sym__2))
    {
      y_51 = ATgetArgument(t, 0);
      q_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(y_51, q_52, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_48 = NULL,k_50 = NULL,v_51 = NULL;
  t = times_0_0(t);
  v_51 = t;
  t = SSL_explode_term(v_51);
  if(match_cons(t, sym__2))
    {
      ATerm f_11 = ATgetArgument(t, 0);
      k_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_50;
  t = foldr_2_0(n_4, o_4, t);
  d_48 = t;
  t = SSL_TicksToSeconds(d_48);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL;
  o_48 = t;
  if(match_cons(t, sym__2))
    {
      p_48 = ATgetArgument(t, 0);
      q_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_48;
        if((p_48 != t))
          {
            _fail(t);
          }
        t = o_48;
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        t = (ATerm) ATmakeAppl(sym__2, p_48, q_48);
        {
          ATerm j_11 = t;
          int k_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_48, q_48);
              LocalPopChoice(k_11);
            }
          else
            {
              t = j_11;
              t = SSL_gtr(p_48, q_48);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_48, q_48);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_139 (ATerm), ATerm t)
{
  ATerm u_48 = NULL;
  u_48 = t;
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL;
        t = term_a_7;
        z_48 = t;
        t = term_c_10;
        a_49 = t;
        t = term_n_11;
        t = e_4(z_48, a_49, t);
        y_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_48, term_b_11);
        t = geq_0_0(t);
        t = u_48;
        t = e_139(t);
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = u_48;
      }
  }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,f_49 = NULL,g_49 = NULL;
  t = run_time_0_0(t);
  c_49 = t;
  t = term_e_9;
  t = whoami_0_0(t);
  d_49 = t;
  t = term_v_5;
  f_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_11), c_49), term_o_11), d_49);
  g_49 = t;
  t = SSL_printnl(f_49, g_49);
  t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_11), c_49), term_o_11), d_49));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_10;
  h_49 = t;
  t = SSL_exit(h_49);
  return(t);
}
static ATerm i_4 (ATerm q_67, ATerm r_67, ATerm s_67, ATerm t)
{
  ATerm i_49 = NULL;
  t = SSL_hashtable_put(s_67, q_67, r_67);
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_49);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_64, ATerm t)
{
  ATerm r_49 = NULL;
  t = table_hashtable_0_0(t);
  r_49 = t;
  {
    ATerm q_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_55 = NULL;
        t = r_49;
        if(match_cons(t, sym_Hashtable_1))
          {
            j_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_4(n_64, j_55, t);
        LocalPopChoice(s_11);
      }
    else
      {
        t = q_11;
        {
          ATerm o_55 = NULL;
          t = n_64;
          t = table_create_0_0(t);
          t = r_49;
          if(match_cons(t, sym_Hashtable_1))
            {
              o_55 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_4(n_64, o_55, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm y_67, ATerm z_67, ATerm t)
{
  ATerm u_49 = NULL;
  t = SSL_hashtable_create(y_67, z_67);
  u_49 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_49);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL,z_49 = NULL,a_50 = NULL;
  v_49 = t;
  t = term_t_11;
  z_49 = t;
  t = term_u_11;
  a_50 = t;
  t = v_49;
  t = new_hashtable_0_2(z_49, a_50, t);
  w_49 = t;
  t = v_49;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_4(v_49, w_49, x_49, t);
  t = v_49;
  return(t);
}
static ATerm b_4 (ATerm v_67, ATerm w_67, ATerm t)
{
  ATerm b_50 = NULL;
  t = SSL_hashtable_remove(w_67, v_67);
  b_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_50);
  return(t);
}
static ATerm c_4 (ATerm a_68, ATerm t)
{
  ATerm c_50 = NULL;
  t = SSL_hashtable_destroy(a_68);
  c_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_50);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm d_50 = NULL;
  t = SSL_table_hashtable();
  d_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_50);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
  e_50 = t;
  t = table_hashtable_0_0(t);
  f_50 = t;
  t = lookup_table_0_1(e_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_4(h_50, t);
  t = f_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_4(e_50, g_50, t);
  t = e_50;
  return(t);
}
ATerm fetch_1_0 (ATerm f_122 (ATerm), ATerm t)
{
  static ATerm e_51 (ATerm t);
  static ATerm e_51 (ATerm t)
  {
    ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
    b_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_51 = ATgetFirst((ATermList) t);
        d_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_11 = t;
      int x_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_55 = NULL,y_55 = NULL,f_8 = NULL;
          t = SSLgetAnnotations(b_51);
          t_55 = t;
          t = c_51;
          t = f_122(t);
          y_55 = t;
          t = (ATerm) ATinsert(CheckATermList(d_51), y_55);
          f_8 = t;
          t = SSLsetAnnotations(f_8, t_55);
          LocalPopChoice(x_11);
        }
      else
        {
          t = w_11;
          {
            ATerm g_56 = NULL,j_56 = NULL,i_8 = NULL;
            t = SSLgetAnnotations(b_51);
            g_56 = t;
            t = d_51;
            t = e_51(t);
            j_56 = t;
            t = (ATerm) ATinsert(CheckATermList(j_56), c_51);
            i_8 = t;
            t = SSLsetAnnotations(i_8, g_56);
          }
        }
    }
    return(t);
  }
  t = e_51(t);
  return(t);
}
static ATerm j_4 (ATerm t_67, ATerm u_67, ATerm t)
{
  t = SSL_hashtable_get(u_67, t_67);
  return(t);
}
static ATerm e_4 (ATerm u_64, ATerm v_64, ATerm t)
{
  ATerm h_51 = NULL;
  t = lookup_table_0_1(u_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_4(v_64, h_51, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL;
  t = term_y_11;
  j_51 = t;
  t = term_e_9;
  k_51 = t;
  t = term_z_11;
  t = h_4(j_51, k_51, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_a_12;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL;
  t = term_y_11;
  n_51 = t;
  t = term_e_9;
  o_51 = t;
  t = term_z_11;
  t = h_4(n_51, o_51, t);
  t = term_b_12;
  l_51 = t;
  t = term_e_9;
  m_51 = t;
  t = term_c_12;
  t = h_4(l_51, m_51, t);
  t = term_d_12;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_e_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_4, u_4, v_4, t);
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      t = Option_3_0(w_4, x_4, y_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,r_8 = NULL;
  u_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_51 = ATgetFirst((ATermList) t);
      r_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_51);
  p_51 = t;
  t = q_51;
  t = w_86(t);
  s_51 = t;
  t = r_51;
  t = x_86(t);
  t_51 = t;
  t = (ATerm) ATinsert(CheckATermList(t_51), s_51);
  r_8 = t;
  t = SSLsetAnnotations(r_8, p_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_144 (ATerm), ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,e_52 = NULL,f_52 = NULL,d_9 = NULL;
  z_51 = t;
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_12;
        t = c_144(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
      }
  }
  t = z_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_52 = ATgetFirst((ATermList) t);
      c_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_51);
  a_52 = t;
  t = term_s_8;
  f_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_8, b_52);
  t = h_4(f_52, b_52, t);
  t = c_52;
  {
    static ATerm p_52 (ATerm t);
    static ATerm p_52 (ATerm t)
    {
      ATerm n_12 = t;
      int o_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_12 = t;
          int q_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_52 = NULL;
              i_52 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_52;
              LocalPopChoice(q_12);
            }
          else
            {
              t = p_12;
              t = c_144(t);
              t = Cons_2_0(_id, p_52, t);
            }
          LocalPopChoice(o_12);
        }
      else
        {
          t = n_12;
          {
            ATerm l_52 = NULL,m_52 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_52 = ATgetFirst((ATermList) t);
                m_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(m_52), (ATerm) ATmakeAppl(sym_Undefined_1, l_52));
          }
        }
      return(t);
    }
    t = p_52(t);
  }
  e_52 = t;
  t = (ATerm) ATinsert(CheckATermList(e_52), (ATerm) ATmakeAppl(sym_Program_1, b_52));
  d_9 = t;
  t = SSLsetAnnotations(d_9, a_52);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm c_53 = NULL;
  c_53 = t;
  if(match_string(t, "--help"))
    {
      t = c_53;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_53;
        }
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL;
  t = term_r_12;
  d_53 = t;
  t = term_e_9;
  e_53 = t;
  t = term_s_12;
  t = h_4(d_53, e_53, t);
  t = term_t_12;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_u_12;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm z_143 (ATerm), ATerm a_144 (ATerm), ATerm b_144 (ATerm), ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL;
  w_52 = t;
  t = term_s_9;
  x_52 = t;
  t = term_w_12;
  t = lookup_table_0_1(x_52, t);
  b_53 = t;
  t = term_t_9;
  y_52 = t;
  t = (ATerm) ATempty;
  z_52 = t;
  t = b_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_4(y_52, z_52, a_53, t);
  t = w_52;
  {
    static ATerm z_4 (ATerm t);
    static ATerm z_4 (ATerm t)
    {
      ATerm x_12 = t;
      int y_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_143(t);
          LocalPopChoice(y_12);
        }
      else
        {
          t = x_12;
          {
            ATerm a_13 = t;
            int c_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_5, b_5, c_5, t);
                LocalPopChoice(c_13);
              }
            else
              {
                t = a_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_4, t);
  }
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_53 = NULL;
        p_53 = t;
        {
          ATerm f_13 = t;
          int g_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_56 = NULL;
              t = p_53;
              {
                ATerm h_13 = t;
                int i_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_56 = NULL,s_56 = NULL;
                    t = term_a_7;
                    r_56 = t;
                    t = term_r_12;
                    s_56 = t;
                    t = term_j_13;
                    t = e_4(r_56, s_56, t);
                    LocalPopChoice(i_13);
                  }
                else
                  {
                    t = h_13;
                    t = fetch_1_0(e_5, t);
                  }
              }
              t = p_53;
              t = a_144(t);
              t = term_d_10;
              q_56 = t;
              t = SSL_exit(q_56);
              LocalPopChoice(g_13);
            }
          else
            {
              t = f_13;
              {
                ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
                t = term_a_7;
                x_56 = t;
                t = term_y_11;
                y_56 = t;
                t = term_k_13;
                t = e_4(x_56, y_56, t);
                t = p_53;
                t = b_144(t);
                t = term_d_10;
                w_56 = t;
                t = SSL_exit(w_56);
              }
            }
        }
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        {
          ATerm l_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL;
              static ATerm g_5 (ATerm t);
              static ATerm g_5 (ATerm t)
              {
                ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,f_9 = NULL;
                v_53 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_53 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_53);
                t_53 = t;
                t = u_53;
                if(((u_52 != NULL) && (u_52 != t)))
                  _fail(t);
                else
                  u_52 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_53);
                f_9 = t;
                t = SSLsetAnnotations(f_9, t_53);
                return(t);
              }
              t = fetch_1_0(g_5, t);
              t = term_v_5;
              r_53 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_52)), term_n_13);
              s_53 = t;
              t = SSL_printnl(r_53, s_53);
              t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_52)), term_n_13));
              t = a_144(t);
              t = term_b_11;
              q_53 = t;
              t = SSL_exit(q_53);
              LocalPopChoice(m_13);
            }
          else
            {
              t = l_13;
            }
        }
      }
  }
  v_52 = t;
  t = term_s_9;
  t = table_destroy_0_0(t);
  t = v_52;
  return(t);
}
ATerm option_wrap_5_0 (ATerm c_142 (ATerm), ATerm d_142 (ATerm), ATerm e_142 (ATerm), ATerm f_142 (ATerm), ATerm g_142 (ATerm), ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL;
  t = parse_options_3_0(c_142, d_142, e_142, t);
  a_54 = t;
  t = term_o_13;
  t = table_create_0_0(t);
  t = term_o_13;
  b_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_13, term_p_13, a_54);
  t = lookup_table_0_1(b_54, t);
  e_54 = t;
  t = term_p_13;
  c_54 = t;
  t = e_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_4(c_54, a_54, d_54, t);
  t = a_54;
  t = f_142(t);
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_142(t);
        t = report_success_0_0(t);
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm t_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(v_13);
    }
  else
    {
      t = t_13;
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
            {
              ATerm b_14 = t;
              int c_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(j_5, k_5, l_5, t);
                  LocalPopChoice(c_14);
                }
              else
                {
                  t = b_14;
                  {
                    ATerm d_14 = t;
                    int e_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(e_14);
                      }
                    else
                      {
                        t = d_14;
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
static ATerm i_5 (ATerm t)
{
  t = input_1_0(o_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL;
  t = term_j_7;
  i_54 = t;
  t = term_e_9;
  j_54 = t;
  t = term_f_14;
  t = h_4(i_54, j_54, t);
  t = term_g_14;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_h_14;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = output_1_0(q_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm i_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_55 = NULL,d_55 = NULL,c_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,t_57 = NULL,r_9 = NULL,q_9 = NULL,p_9 = NULL,h_9 = NULL;
      c_55 = t;
      if(match_cons(t, sym_Specification_1))
        {
          d_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_55);
      c_57 = t;
      t = d_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_57 = ATgetFirst((ATermList) t);
          g_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_55);
      e_57 = t;
      t = g_57;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_57 = ATgetFirst((ATermList) t);
          k_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_57);
      i_57 = t;
      t = j_57;
      if(match_cons(t, sym_Strategies_1))
        {
          n_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_57);
      m_57 = t;
      t = n_57;
      t = map_1_0(strategy_definition_0_0, t);
      o_57 = t;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, o_57);
      h_9 = t;
      t = SSLsetAnnotations(h_9, m_57);
      t_57 = t;
      t = k_57;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(k_57), t_57);
      p_9 = t;
      t = SSLsetAnnotations(p_9, i_57);
      l_57 = t;
      t = (ATerm) ATinsert(CheckATermList(l_57), f_57);
      q_9 = t;
      t = SSLsetAnnotations(q_9, e_57);
      h_57 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, h_57);
      r_9 = t;
      t = SSLsetAnnotations(r_9, c_57);
      LocalPopChoice(k_14);
    }
  else
    {
      t = i_14;
      t = debug_1_0(t_5, t);
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_l_14;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(h_5, default_system_usage_0_0, default_system_about_0_0, _id, i_5, t);
  return(t);
}
