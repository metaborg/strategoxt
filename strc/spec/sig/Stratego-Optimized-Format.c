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
static ATerm term_n_14;
static ATerm term_k_14;
static ATerm term_j_14;
static ATerm term_h_14;
static ATerm term_s_13;
static ATerm term_q_13;
static ATerm term_p_13;
static ATerm term_m_13;
static ATerm term_l_13;
static ATerm term_y_12;
static ATerm term_x_12;
static ATerm term_v_12;
static ATerm term_u_12;
static ATerm term_t_12;
static ATerm term_o_12;
static ATerm term_h_12;
static ATerm term_f_12;
static ATerm term_e_12;
static ATerm term_d_12;
static ATerm term_c_12;
static ATerm term_b_12;
static ATerm term_a_12;
static ATerm term_x_11;
static ATerm term_w_11;
static ATerm term_s_11;
static ATerm term_r_11;
static ATerm term_p_11;
static ATerm term_d_11;
static ATerm term_c_11;
static ATerm term_b_11;
static ATerm term_u_10;
static ATerm term_p_10;
static ATerm term_o_10;
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
static ATerm term_v_9;
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
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_f_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_e_9);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym__2, term_a_7, term_e_10);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_e_9);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__2, term_d_12, term_e_9);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_e_9);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__3, term_s_9, term_t_9, (ATerm) ATempty);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__2, term_a_7, term_t_12);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__2, term_a_7, term_a_12);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__2, term_j_7, term_e_9);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm debug_1_0 (ATerm e_122 (ATerm), ATerm t);
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
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_122 (ATerm), ATerm t);
static ATerm s_3 (ATerm p_57, ATerm q_57, ATerm t);
static ATerm t_3 (ATerm s_41, ATerm t_41, ATerm t);
static ATerm v_3 (ATerm g_122 (ATerm), ATerm u_276, ATerm y_41, ATerm t);
static ATerm u_3 (ATerm o_41, ATerm p_41, ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm output_1_0 (ATerm z_142 (ATerm), ATerm t);
static ATerm l_41 (ATerm f_41, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_3 (ATerm u_41, ATerm t);
static ATerm x_3 (ATerm v_55, ATerm w_55, ATerm t);
static ATerm y_3 (ATerm r_57, ATerm s_57, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_43 (ATerm c_42, ATerm t);
static ATerm g_43 (ATerm g_42, ATerm h_42, ATerm i_42, ATerm t);
static ATerm h_43 (ATerm q_42, ATerm r_42, ATerm s_42, ATerm t);
static ATerm z_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm a_143 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm default_system_usage_2_0 (ATerm y_144 (ATerm), ATerm z_144 (ATerm), ATerm t);
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
static ATerm i_4 (ATerm v_77, ATerm w_77, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_4 (ATerm b_63, ATerm c_63, ATerm a_63, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_4 (ATerm k_61, ATerm l_61, ATerm t);
ATerm foldr_2_0 (ATerm l_129 (ATerm), ATerm m_129 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_139 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_4 (ATerm q_67, ATerm r_67, ATerm s_67, ATerm t);
ATerm lookup_table_0_1 (ATerm n_64, ATerm t);
ATerm new_hashtable_0_2 (ATerm y_67, ATerm z_67, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm c_4 (ATerm v_67, ATerm w_67, ATerm t);
static ATerm d_4 (ATerm a_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_122 (ATerm), ATerm t);
static ATerm k_4 (ATerm t_67, ATerm u_67, ATerm t);
static ATerm f_4 (ATerm u_64, ATerm v_64, ATerm t);
static ATerm q_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_144 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm parse_options_3_0 (ATerm q_144 (ATerm), ATerm r_144 (ATerm), ATerm s_144 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm t_142 (ATerm), ATerm u_142 (ATerm), ATerm v_142 (ATerm), ATerm w_142 (ATerm), ATerm x_142 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm e_122 (ATerm), ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,e_0 = NULL,h_0 = NULL;
  a_0 = t;
  t = e_122(t);
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
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  r_4 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      s_4 = ATgetArgument(t, 0);
      {
        ATerm l_1 = NULL,n_1 = NULL,k_0 = NULL;
        t = SSLgetAnnotations(r_4);
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
                  ATerm q_3 = NULL,e_4 = NULL,h_4 = NULL,c_0 = NULL;
                  t = SSLgetAnnotations(d_3);
                  q_3 = t;
                  t = SSL_is_string(e_3);
                  e_4 = t;
                  t = c_3;
                  t = map_1_0(f_3, t);
                  h_4 = t;
                  t = (ATerm) ATmakeAppl(sym_Sort_2, e_4, h_4);
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
        n_1 = t;
        t = (ATerm) ATmakeAppl(sym_ConstType_1, n_1);
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
      t = SSLgetAnnotations(r_4);
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
      ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
      x_8 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_8 = ATgetArgument(t, 0);
          {
            ATerm g_6 = NULL,i_6 = NULL,u_0 = NULL;
            t = SSLgetAnnotations(x_8);
            g_6 = t;
            t = SSL_is_string(y_8);
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
              y_8 = ATgetArgument(t, 0);
              {
                ATerm q_6 = NULL,i_7 = NULL,v_0 = NULL;
                t = SSLgetAnnotations(x_8);
                q_6 = t;
                t = SSL_is_int(y_8);
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
                  y_8 = ATgetArgument(t, 0);
                  {
                    ATerm p_7 = NULL,r_7 = NULL,w_0 = NULL;
                    t = SSLgetAnnotations(x_8);
                    p_7 = t;
                    t = SSL_is_real(y_8);
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
                      y_8 = ATgetArgument(t, 0);
                      {
                        ATerm c_8 = NULL,f_8 = NULL,x_0 = NULL;
                        t = SSLgetAnnotations(x_8);
                        c_8 = t;
                        t = SSL_is_string(y_8);
                        f_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Str_1, f_8);
                        x_0 = t;
                        t = SSLsetAnnotations(x_0, c_8);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          y_8 = ATgetArgument(t, 0);
                          w_8 = ATgetArgument(t, 1);
                          {
                            ATerm p_8 = NULL,u_8 = NULL,v_8 = NULL,y_0 = NULL;
                            t = SSLgetAnnotations(x_8);
                            p_8 = t;
                            t = SSL_is_string(y_8);
                            u_8 = t;
                            t = w_8;
                            t = map_1_0(build_term_expression_0_0, t);
                            v_8 = t;
                            t = (ATerm) ATmakeAppl(sym_Op_2, u_8, v_8);
                            y_0 = t;
                            t = SSLsetAnnotations(y_0, p_8);
                          }
                        }
                      else
                        {
                          ATerm m_9 = NULL,o_9 = NULL,z_0 = NULL;
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              y_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(x_8);
                          m_9 = t;
                          t = y_8;
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
      ATerm r_13 = NULL,v_13 = NULL,z_13 = NULL;
      r_13 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = r_13;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              v_13 = ATgetArgument(t, 0);
              {
                ATerm j_10 = NULL,l_10 = NULL,g_1 = NULL;
                t = SSLgetAnnotations(r_13);
                j_10 = t;
                t = SSL_is_string(v_13);
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
                  v_13 = ATgetArgument(t, 0);
                  {
                    ATerm v_10 = NULL,y_10 = NULL,h_1 = NULL;
                    t = SSLgetAnnotations(r_13);
                    v_10 = t;
                    t = SSL_is_int(v_13);
                    y_10 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, y_10);
                    h_1 = t;
                    t = SSLsetAnnotations(h_1, v_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      v_13 = ATgetArgument(t, 0);
                      {
                        ATerm f_11 = NULL,h_11 = NULL,i_1 = NULL;
                        t = SSLgetAnnotations(r_13);
                        f_11 = t;
                        t = SSL_is_real(v_13);
                        h_11 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, h_11);
                        i_1 = t;
                        t = SSLsetAnnotations(i_1, f_11);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          v_13 = ATgetArgument(t, 0);
                          {
                            ATerm q_11 = NULL,u_11 = NULL,o_1 = NULL;
                            t = SSLgetAnnotations(r_13);
                            q_11 = t;
                            t = SSL_is_string(v_13);
                            u_11 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, u_11);
                            o_1 = t;
                            t = SSLsetAnnotations(o_1, q_11);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Op_2))
                            {
                              v_13 = ATgetArgument(t, 0);
                              z_13 = ATgetArgument(t, 1);
                              {
                                ATerm g_12 = NULL,j_12 = NULL,k_12 = NULL,q_1 = NULL;
                                t = SSLgetAnnotations(r_13);
                                g_12 = t;
                                t = SSL_is_string(v_13);
                                j_12 = t;
                                t = z_13;
                                t = map_1_0(match_term_expression_0_0, t);
                                k_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Op_2, j_12, k_12);
                                q_1 = t;
                                t = SSLsetAnnotations(q_1, g_12);
                              }
                            }
                          else
                            {
                              ATerm w_12 = NULL,a_13 = NULL,b_13 = NULL,r_1 = NULL;
                              if(match_cons(t, sym_As_2))
                                {
                                  v_13 = ATgetArgument(t, 0);
                                  z_13 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(r_13);
                              w_12 = t;
                              t = v_13;
                              t = match_term_expression_0_0(t);
                              a_13 = t;
                              t = z_13;
                              t = match_term_expression_0_0(t);
                              b_13 = t;
                              t = (ATerm) ATmakeAppl(sym_As_2, a_13, b_13);
                              r_1 = t;
                              t = SSLsetAnnotations(r_1, w_12);
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
      ATerm n_24 = NULL;
      n_24 = t;
      t = SSL_is_string(n_24);
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
  ATerm t_26 = NULL;
  t_26 = t;
  t = SSL_is_int(t_26);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,p_27 = NULL,t_2 = NULL;
  p_27 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      f_27 = ATgetArgument(t, 0);
      g_27 = ATgetArgument(t, 1);
      i_27 = ATgetArgument(t, 2);
      j_27 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_27);
  e_27 = t;
  t = SSL_is_string(f_27);
  k_27 = t;
  t = g_27;
  t = map_1_0(b_1, t);
  l_27 = t;
  t = i_27;
  t = map_1_0(c_1, t);
  m_27 = t;
  t = j_27;
  t = strategy_expression_0_0(t);
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, k_27, l_27, m_27, n_27);
  t_2 = t;
  t = SSLsetAnnotations(t_2, e_27);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,r_2 = NULL;
  v_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      r_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_27);
  q_27 = t;
  t = SSL_is_string(r_27);
  t_27 = t;
  t = s_27;
  t = type_expression_0_0(t);
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_27, u_27);
  r_2 = t;
  t = SSLsetAnnotations(r_2, q_27);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,s_2 = NULL;
  c_28 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_27 = ATgetArgument(t, 0);
      y_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_28);
  w_27 = t;
  t = SSL_is_string(x_27);
  a_28 = t;
  t = y_27;
  t = type_expression_0_0(t);
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_28, b_28);
  s_2 = t;
  t = SSLsetAnnotations(s_2, w_27);
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
      ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL;
      v_33 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = v_33;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = v_33;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  w_33 = ATgetArgument(t, 0);
                  {
                    ATerm u_13 = NULL,x_13 = NULL,y_1 = NULL;
                    t = SSLgetAnnotations(v_33);
                    u_13 = t;
                    t = w_33;
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
                      w_33 = ATgetArgument(t, 0);
                      x_33 = ATgetArgument(t, 1);
                      {
                        ATerm i_14 = NULL,p_14 = NULL,q_14 = NULL,z_1 = NULL;
                        t = SSLgetAnnotations(v_33);
                        i_14 = t;
                        t = w_33;
                        t = strategy_expression_0_0(t);
                        p_14 = t;
                        t = x_33;
                        t = strategy_expression_0_0(t);
                        q_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, p_14, q_14);
                        z_1 = t;
                        t = SSLsetAnnotations(z_1, i_14);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Choice_2))
                        {
                          w_33 = ATgetArgument(t, 0);
                          x_33 = ATgetArgument(t, 1);
                          {
                            ATerm y_14 = NULL,b_15 = NULL,c_15 = NULL,a_2 = NULL;
                            t = SSLgetAnnotations(v_33);
                            y_14 = t;
                            t = w_33;
                            t = strategy_expression_0_0(t);
                            b_15 = t;
                            t = x_33;
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
                              w_33 = ATgetArgument(t, 0);
                              x_33 = ATgetArgument(t, 1);
                              {
                                ATerm k_15 = NULL,n_15 = NULL,o_15 = NULL,b_2 = NULL;
                                t = SSLgetAnnotations(v_33);
                                k_15 = t;
                                t = w_33;
                                t = strategy_expression_0_0(t);
                                n_15 = t;
                                t = x_33;
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
                                  w_33 = ATgetArgument(t, 0);
                                  x_33 = ATgetArgument(t, 1);
                                  u_33 = ATgetArgument(t, 2);
                                  {
                                    ATerm x_15 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,c_2 = NULL;
                                    t = SSLgetAnnotations(v_33);
                                    x_15 = t;
                                    t = w_33;
                                    t = strategy_expression_0_0(t);
                                    b_16 = t;
                                    t = x_33;
                                    t = strategy_expression_0_0(t);
                                    c_16 = t;
                                    t = u_33;
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
                                      w_33 = ATgetArgument(t, 0);
                                      x_33 = ATgetArgument(t, 1);
                                      {
                                        ATerm m_16 = NULL,p_16 = NULL,q_16 = NULL,d_2 = NULL;
                                        t = SSLgetAnnotations(v_33);
                                        m_16 = t;
                                        t = w_33;
                                        t = strategy_expression_0_0(t);
                                        p_16 = t;
                                        t = x_33;
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
                                          w_33 = ATgetArgument(t, 0);
                                          x_33 = ATgetArgument(t, 1);
                                          {
                                            ATerm z_16 = NULL,c_17 = NULL,d_17 = NULL,e_2 = NULL;
                                            t = SSLgetAnnotations(v_33);
                                            z_16 = t;
                                            t = w_33;
                                            t = strategy_expression_0_0(t);
                                            c_17 = t;
                                            t = x_33;
                                            t = strategy_expression_0_0(t);
                                            d_17 = t;
                                            t = (ATerm) ATmakeAppl(sym_LGChoice_2, c_17, d_17);
                                            e_2 = t;
                                            t = SSLsetAnnotations(e_2, z_16);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              w_33 = ATgetArgument(t, 0);
                                              x_33 = ATgetArgument(t, 1);
                                              u_33 = ATgetArgument(t, 2);
                                              {
                                                ATerm x_17 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,h_18 = NULL,n_18 = NULL,g_2 = NULL,f_2 = NULL;
                                                t = SSLgetAnnotations(v_33);
                                                x_17 = t;
                                                t = w_33;
                                                if(match_cons(t, sym_SVar_1))
                                                  {
                                                    f_18 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(w_33);
                                                e_18 = t;
                                                t = SSL_is_string(f_18);
                                                h_18 = t;
                                                t = (ATerm) ATmakeAppl(sym_SVar_1, h_18);
                                                f_2 = t;
                                                t = SSLsetAnnotations(f_2, e_18);
                                                n_18 = t;
                                                t = x_33;
                                                t = map_1_0(strategy_expression_0_0, t);
                                                c_18 = t;
                                                t = u_33;
                                                t = map_1_0(build_term_expression_0_0, t);
                                                d_18 = t;
                                                t = (ATerm) ATmakeAppl(sym_CallT_3, n_18, c_18, d_18);
                                                g_2 = t;
                                                t = SSLsetAnnotations(g_2, x_17);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_PrimT_3))
                                                {
                                                  w_33 = ATgetArgument(t, 0);
                                                  x_33 = ATgetArgument(t, 1);
                                                  u_33 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm i_19 = NULL,s_19 = NULL,u_19 = NULL,w_19 = NULL,h_2 = NULL;
                                                    t = SSLgetAnnotations(v_33);
                                                    i_19 = t;
                                                    t = SSL_is_string(w_33);
                                                    s_19 = t;
                                                    t = x_33;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    u_19 = t;
                                                    t = u_33;
                                                    t = map_1_0(build_term_expression_0_0, t);
                                                    w_19 = t;
                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, s_19, u_19, w_19);
                                                    h_2 = t;
                                                    t = SSLsetAnnotations(h_2, i_19);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      w_33 = ATgetArgument(t, 0);
                                                      x_33 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm k_20 = NULL,n_20 = NULL,o_20 = NULL,i_2 = NULL;
                                                        t = SSLgetAnnotations(v_33);
                                                        k_20 = t;
                                                        t = SSL_is_string(w_33);
                                                        n_20 = t;
                                                        t = x_33;
                                                        t = strategy_expression_0_0(t);
                                                        o_20 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, n_20, o_20);
                                                        i_2 = t;
                                                        t = SSLsetAnnotations(i_2, k_20);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          w_33 = ATgetArgument(t, 0);
                                                          x_33 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm a_21 = NULL,f_21 = NULL,j_21 = NULL,j_2 = NULL;
                                                            t = SSLgetAnnotations(v_33);
                                                            a_21 = t;
                                                            t = SSL_is_int(w_33);
                                                            f_21 = t;
                                                            t = x_33;
                                                            t = strategy_expression_0_0(t);
                                                            j_21 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, f_21, j_21);
                                                            j_2 = t;
                                                            t = SSLsetAnnotations(j_2, a_21);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_One_1))
                                                            {
                                                              w_33 = ATgetArgument(t, 0);
                                                              {
                                                                ATerm x_21 = NULL,z_21 = NULL,k_2 = NULL;
                                                                t = SSLgetAnnotations(v_33);
                                                                x_21 = t;
                                                                t = w_33;
                                                                t = strategy_expression_0_0(t);
                                                                z_21 = t;
                                                                t = (ATerm) ATmakeAppl(sym_One_1, z_21);
                                                                k_2 = t;
                                                                t = SSLsetAnnotations(k_2, x_21);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Some_1))
                                                                {
                                                                  w_33 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm h_22 = NULL,j_22 = NULL,l_2 = NULL;
                                                                    t = SSLgetAnnotations(v_33);
                                                                    h_22 = t;
                                                                    t = w_33;
                                                                    t = strategy_expression_0_0(t);
                                                                    j_22 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Some_1, j_22);
                                                                    l_2 = t;
                                                                    t = SSLsetAnnotations(l_2, h_22);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_All_1))
                                                                    {
                                                                      w_33 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm r_22 = NULL,t_22 = NULL,m_2 = NULL;
                                                                        t = SSLgetAnnotations(v_33);
                                                                        r_22 = t;
                                                                        t = w_33;
                                                                        t = strategy_expression_0_0(t);
                                                                        t_22 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_All_1, t_22);
                                                                        m_2 = t;
                                                                        t = SSLsetAnnotations(m_2, r_22);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Thread_1))
                                                                        {
                                                                          w_33 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm b_23 = NULL,e_23 = NULL,n_2 = NULL;
                                                                            t = SSLgetAnnotations(v_33);
                                                                            b_23 = t;
                                                                            t = w_33;
                                                                            t = strategy_expression_0_0(t);
                                                                            e_23 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_Thread_1, e_23);
                                                                            n_2 = t;
                                                                            t = SSLsetAnnotations(n_2, b_23);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Match_1))
                                                                            {
                                                                              w_33 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm l_23 = NULL,n_23 = NULL,o_2 = NULL;
                                                                                t = SSLgetAnnotations(v_33);
                                                                                l_23 = t;
                                                                                t = w_33;
                                                                                t = match_term_expression_0_0(t);
                                                                                n_23 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, n_23);
                                                                                o_2 = t;
                                                                                t = SSLsetAnnotations(o_2, l_23);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Build_1))
                                                                                {
                                                                                  w_33 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm u_23 = NULL,w_23 = NULL,p_2 = NULL;
                                                                                    t = SSLgetAnnotations(v_33);
                                                                                    u_23 = t;
                                                                                    t = w_33;
                                                                                    t = build_term_expression_0_0(t);
                                                                                    w_23 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, w_23);
                                                                                    p_2 = t;
                                                                                    t = SSLsetAnnotations(p_2, u_23);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Scope_2))
                                                                                    {
                                                                                      w_33 = ATgetArgument(t, 0);
                                                                                      x_33 = ATgetArgument(t, 1);
                                                                                      {
                                                                                        ATerm e_24 = NULL,h_24 = NULL,i_24 = NULL,q_2 = NULL;
                                                                                        t = SSLgetAnnotations(v_33);
                                                                                        e_24 = t;
                                                                                        t = w_33;
                                                                                        t = map_1_0(s_0, t);
                                                                                        h_24 = t;
                                                                                        t = x_33;
                                                                                        t = strategy_expression_0_0(t);
                                                                                        i_24 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, h_24, i_24);
                                                                                        q_2 = t;
                                                                                        t = SSLsetAnnotations(q_2, e_24);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      ATerm x_26 = NULL,b_27 = NULL,c_27 = NULL,u_2 = NULL;
                                                                                      if(match_cons(t, sym_Let_2))
                                                                                        {
                                                                                          w_33 = ATgetArgument(t, 0);
                                                                                          x_33 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = SSLgetAnnotations(v_33);
                                                                                      x_26 = t;
                                                                                      t = w_33;
                                                                                      t = map_1_0(a_1, t);
                                                                                      b_27 = t;
                                                                                      t = x_33;
                                                                                      t = strategy_expression_0_0(t);
                                                                                      c_27 = t;
                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, b_27, c_27);
                                                                                      u_2 = t;
                                                                                      t = SSLsetAnnotations(u_2, x_26);
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
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,z_28 = NULL,a_29 = NULL,m_5 = NULL;
  a_29 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      v_28 = ATgetArgument(t, 0);
      w_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_29);
  u_28 = t;
  t = SSL_is_string(v_28);
  x_28 = t;
  t = w_28;
  t = type_expression_0_0(t);
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_28, z_28);
  m_5 = t;
  t = SSLsetAnnotations(m_5, u_28);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,b_31 = NULL,q_5 = NULL;
  b_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      u_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_31);
  t_30 = t;
  t = SSL_is_string(u_30);
  w_30 = t;
  t = v_30;
  t = type_expression_0_0(t);
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_30, x_30);
  q_5 = t;
  t = SSLsetAnnotations(q_5, t_30);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,g_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,t_5 = NULL;
  k_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_31 = ATgetArgument(t, 0);
      g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_31);
  c_31 = t;
  t = SSL_is_string(d_31);
  i_31 = t;
  t = g_31;
  t = type_expression_0_0(t);
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_31, j_31);
  t_5 = t;
  t = SSLsetAnnotations(t_5, c_31);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,o_33 = NULL,p_33 = NULL,z_5 = NULL;
  p_33 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_33 = ATgetArgument(t, 0);
      j_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_33);
  h_33 = t;
  t = SSL_is_string(i_33);
  k_33 = t;
  t = j_33;
  t = type_expression_0_0(t);
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_33, o_33);
  z_5 = t;
  t = SSLsetAnnotations(z_5, h_33);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,a_34 = NULL,b_34 = NULL,d_34 = NULL,e_6 = NULL;
  d_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      r_33 = ATgetArgument(t, 0);
      s_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_34);
  q_33 = t;
  t = SSL_is_string(r_33);
  a_34 = t;
  t = s_33;
  t = type_expression_0_0(t);
  b_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_34, b_34);
  e_6 = t;
  t = SSLsetAnnotations(e_6, q_33);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,r_39 = NULL,s_39 = NULL,y_40 = NULL,p_6 = NULL;
  y_40 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_35 = ATgetArgument(t, 0);
      p_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_40);
  n_35 = t;
  t = SSL_is_string(o_35);
  r_39 = t;
  t = p_35;
  t = type_expression_0_0(t);
  s_39 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_39, s_39);
  p_6 = t;
  t = SSLsetAnnotations(p_6, n_35);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,z_41 = NULL,r_6 = NULL;
  z_41 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      a_41 = ATgetArgument(t, 0);
      v_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_41);
  z_40 = t;
  t = SSL_is_string(a_41);
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
  ATerm o_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL;
      j_39 = t;
      if(match_cons(t, sym_SDef_3))
        {
          k_39 = ATgetArgument(t, 0);
          l_39 = ATgetArgument(t, 1);
          m_39 = ATgetArgument(t, 2);
          {
            ATerm l_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,o_5 = NULL;
            t = SSLgetAnnotations(j_39);
            l_28 = t;
            t = SSL_is_string(k_39);
            q_28 = t;
            t = l_39;
            t = map_1_0(e_1, t);
            r_28 = t;
            t = m_39;
            t = strategy_expression_0_0(t);
            s_28 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, q_28, r_28, s_28);
            o_5 = t;
            t = SSLsetAnnotations(o_5, l_28);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              k_39 = ATgetArgument(t, 0);
              l_39 = ATgetArgument(t, 1);
              m_39 = ATgetArgument(t, 2);
              i_39 = ATgetArgument(t, 3);
              {
                ATerm l_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,u_5 = NULL;
                t = SSLgetAnnotations(j_39);
                l_29 = t;
                t = SSL_is_string(k_39);
                r_29 = t;
                t = l_39;
                t = map_1_0(f_1, t);
                s_29 = t;
                t = m_39;
                t = map_1_0(j_1, t);
                t_29 = t;
                t = i_39;
                t = strategy_expression_0_0(t);
                u_29 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, r_29, s_29, t_29, u_29);
                u_5 = t;
                t = SSLsetAnnotations(u_5, l_29);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  k_39 = ATgetArgument(t, 0);
                  l_39 = ATgetArgument(t, 1);
                  m_39 = ATgetArgument(t, 2);
                  i_39 = ATgetArgument(t, 3);
                  {
                    ATerm p_32 = NULL,w_32 = NULL,y_32 = NULL,z_32 = NULL,f_33 = NULL,l_6 = NULL;
                    t = SSLgetAnnotations(j_39);
                    p_32 = t;
                    t = SSL_is_string(k_39);
                    w_32 = t;
                    t = l_39;
                    t = map_1_0(k_1, t);
                    y_32 = t;
                    t = m_39;
                    t = map_1_0(m_1, t);
                    z_32 = t;
                    t = i_39;
                    t = strategy_expression_0_0(t);
                    f_33 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, w_32, y_32, z_32, f_33);
                    l_6 = t;
                    t = SSLsetAnnotations(l_6, p_32);
                  }
                }
              else
                {
                  ATerm u_34 = NULL,b_35 = NULL,d_35 = NULL,l_35 = NULL,s_6 = NULL;
                  if(match_cons(t, sym_ExtSDef_3))
                    {
                      k_39 = ATgetArgument(t, 0);
                      l_39 = ATgetArgument(t, 1);
                      m_39 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_39);
                  u_34 = t;
                  t = SSL_is_string(k_39);
                  b_35 = t;
                  t = l_39;
                  t = map_1_0(p_1, t);
                  d_35 = t;
                  t = m_39;
                  t = map_1_0(s_1, t);
                  l_35 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDef_3, b_35, d_35, l_35);
                  s_6 = t;
                  t = SSLsetAnnotations(s_6, u_34);
                }
            }
        }
      LocalPopChoice(t_6);
    }
  else
    {
      t = o_6;
      t = debug_1_0(t_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm o_122 (ATerm), ATerm t)
{
  static ATerm f_40 (ATerm t);
  static ATerm f_40 (ATerm t)
  {
    ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
    c_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_40;
      }
    else
      {
        ATerm m_44 = NULL,p_44 = NULL,m_45 = NULL,e_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_40 = ATgetFirst((ATermList) t);
            e_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_40);
        m_44 = t;
        t = d_40;
        t = o_122(t);
        p_44 = t;
        t = e_40;
        t = f_40(t);
        m_45 = t;
        t = (ATerm) ATinsert(CheckATermList(m_45), p_44);
        e_7 = t;
        t = SSLsetAnnotations(e_7, m_44);
      }
    return(t);
  }
  t = f_40(t);
  return(t);
}
static ATerm s_3 (ATerm p_57, ATerm q_57, ATerm t)
{
  ATerm h_40 = NULL;
  t = SSL_fputc(p_57, q_57);
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_40);
  return(t);
}
static ATerm t_3 (ATerm s_41, ATerm t_41, ATerm t)
{
  ATerm i_40 = NULL;
  t = SSL_write_term_to_stream_text(s_41, t_41);
  i_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_40);
  return(t);
}
static ATerm v_3 (ATerm g_122 (ATerm), ATerm u_276, ATerm y_41, ATerm t)
{
  ATerm j_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_276, term_u_6);
  t = z_3(t);
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_40, y_41);
  t = g_122(t);
  t = fclose_0_0(t);
  t = y_41;
  return(t);
}
static ATerm u_3 (ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm k_40 = NULL;
  t = SSL_write_term_to_stream_baf(o_41, p_41);
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_40);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_6 = ATgetArgument(t, 0);
      if(match_cons(v_6, sym_Stream_1))
        {
          r_40 = ATgetArgument(v_6, 0);
        }
      else
        _fail(t);
      s_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(r_40, s_40, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if(match_cons(w_6, sym_Stream_1))
        {
          w_40 = ATgetArgument(w_6, 0);
        }
      else
        _fail(t);
      x_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3(w_40, x_40, t);
  t_40 = t;
  t = term_x_6;
  u_40 = t;
  t = t_40;
  if(match_cons(t, sym_Stream_1))
    {
      v_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_6, t_40);
  t = s_3(u_40, v_40, t);
  return(t);
}
ATerm output_1_0 (ATerm z_142 (ATerm), ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL;
  t = z_142(t);
  m_40 = t;
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_40 = NULL,o_40 = NULL;
        t = term_a_7;
        n_40 = t;
        t = term_b_7;
        o_40 = t;
        t = term_c_7;
        t = f_4(n_40, o_40, t);
        LocalPopChoice(z_6);
      }
    else
      {
        t = y_6;
        t = term_d_7;
      }
  }
  l_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_40, m_40);
  {
    ATerm f_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_40 = NULL,q_40 = NULL;
        t = term_a_7;
        p_40 = t;
        t = term_j_7;
        q_40 = t;
        t = term_k_7;
        t = f_4(p_40, q_40, t);
        t = (ATerm) ATmakeAppl(sym__2, l_40, m_40);
        LocalPopChoice(h_7);
        if(match_cons(t, sym__2))
          {
            ATerm m_7 = ATgetArgument(t, 0);
            ATerm n_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_3(u_1, l_40, m_40, t);
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
        t = v_3(v_1, l_40, m_40, t);
      }
  }
  return(t);
}
static ATerm l_41 (ATerm f_41, ATerm t)
{
  t = SSL_fclose(f_41);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL;
  j_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_41 = ATgetArgument(t, 0);
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_41);
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            t = l_41(j_41, t);
          }
      }
    }
  else
    {
      t = l_41(j_41, t);
    }
  return(t);
}
static ATerm w_3 (ATerm u_41, ATerm t)
{
  t = SSL_read_term_from_stream(u_41);
  return(t);
}
static ATerm x_3 (ATerm v_55, ATerm w_55, ATerm t)
{
  t = SSL_strcat(v_55, w_55);
  return(t);
}
static ATerm y_3 (ATerm r_57, ATerm s_57, ATerm t)
{
  ATerm m_41 = NULL;
  t = SSL_fopen(r_57, s_57);
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_41);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_41 = NULL;
  t = SSL_stdin_stream();
  n_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_41);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_41 = NULL;
  t = SSL_stdout_stream();
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_41);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_41 = NULL;
  t = SSL_stderr_stream();
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_41);
  return(t);
}
static ATerm f_43 (ATerm c_42, ATerm t)
{
  ATerm d_42 = NULL;
  t = SSL_explode_term(c_42);
  if(match_cons(t, sym__2))
    {
      ATerm u_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_7 = ATgetArgument(t, 1);
        if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
          {
            d_42 = ATgetFirst((ATermList) v_7);
            {
              ATerm w_7 = (ATerm) ATgetNext((ATermList) v_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_42;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_42;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_42;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_42;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_43 (ATerm g_42, ATerm h_42, ATerm i_42, ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL,o_42 = NULL,g_7 = NULL;
  t = SSLgetAnnotations(i_42);
  l_42 = t;
  t = g_42;
  if(match_cons(t, sym_Path_1))
    {
      o_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_42, h_42);
  g_7 = t;
  t = SSLsetAnnotations(g_7, l_42);
  if(match_cons(t, sym__2))
    {
      j_42 = ATgetArgument(t, 0);
      k_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(j_42, k_42, t);
  return(t);
}
static ATerm h_43 (ATerm q_42, ATerm r_42, ATerm s_42, ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,y_42 = NULL,l_7 = NULL;
  t = SSLgetAnnotations(s_42);
  v_42 = t;
  t = SSL_is_string(q_42);
  y_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_42, r_42);
  l_7 = t;
  t = SSLsetAnnotations(l_7, v_42);
  if(match_cons(t, sym__2))
    {
      t_42 = ATgetArgument(t, 0);
      u_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(t_42, u_42, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL;
  c_43 = t;
  if(match_cons(t, sym__2))
    {
      d_43 = ATgetArgument(t, 0);
      e_43 = ATgetArgument(t, 1);
      {
        ATerm y_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_43(c_43, t);
            LocalPopChoice(z_7);
          }
        else
          {
            t = y_7;
            {
              ATerm a_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_43(d_43, e_43, c_43, t);
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = a_8;
                  t = h_43(d_43, e_43, c_43, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_43(c_43, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,q_43 = NULL;
  q_43 = t;
  {
    ATerm e_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_43, term_j_8);
        t = z_3(t);
        LocalPopChoice(h_8);
      }
    else
      {
        t = e_8;
        {
          ATerm z_48 = NULL,n_49 = NULL;
          t = term_k_8;
          n_49 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_8, q_43);
          t = x_3(n_49, q_43, t);
          z_48 = t;
          t = SSL_perror(z_48);
          _fail(t);
        }
      }
  }
  k_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_3(l_43, t);
  j_43 = t;
  t = k_43;
  t = fclose_0_0(t);
  t = j_43;
  return(t);
}
ATerm input_1_0 (ATerm a_143 (ATerm), ATerm t)
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_43 = NULL,u_43 = NULL;
      t = term_a_7;
      t_43 = t;
      t = term_n_8;
      u_43 = t;
      t = term_o_8;
      t = f_4(t_43, u_43, t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      t = term_q_8;
    }
  t = ReadFromFile_0_0(t);
  t = a_143(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL;
  t = term_a_7;
  v_43 = t;
  t = term_s_8;
  w_43 = t;
  t = term_t_8;
  t = f_4(v_43, w_43, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
  y_43 = t;
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_43;
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
            t = y_43;
          }
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        t = (ATerm) ATinsert(ATempty, y_43);
      }
  }
  z_43 = t;
  t = term_d_7;
  a_44 = t;
  t = SSL_printnl(a_44, z_43);
  t = y_43;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_44 = ATgetFirst((ATermList) t);
      g_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_44 = NULL,l_44 = NULL;
        static ATerm w_1 (ATerm t);
        static ATerm w_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_44)), not_null(l_44));
          return(t);
        }
        t = g_44;
        t = r_0(t);
        if(((k_44 != NULL) && (k_44 != t)))
          _fail(t);
        else
          k_44 = t;
        t = f_44;
        t = p_0(t);
        if(((l_44 != NULL) && (l_44 != t)))
          _fail(t);
        else
          l_44 = t;
        t = g_44;
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
  ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL,x_7 = NULL;
  w_44 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_44);
  u_44 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_44);
  x_7 = t;
  t = SSLsetAnnotations(x_7, u_44);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm a_45 = NULL;
  a_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_45), term_g_9);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm y_144 (ATerm), ATerm z_144 (ATerm), ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL;
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_44 = NULL,t_44 = NULL;
      t = term_a_7;
      s_44 = t;
      t = term_s_8;
      t_44 = t;
      t = term_t_8;
      t = f_4(s_44, t_44, t);
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
        t = y_144(t);
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
  q_44 = t;
  t = term_t_9;
  r_44 = t;
  t = term_u_9;
  t = f_4(q_44, r_44, t);
  t = reverse_acc_2_0(_id, v_2, t);
  t = map_1_0(w_2, t);
  t = term_v_9;
  t = echo_0_0(t);
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_144(t);
        {
          ATerm y_9 = t;
          int z_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_45 = NULL;
              b_45 = t;
              t = SSL_is_string(b_45);
              t = b_45;
              LocalPopChoice(z_9);
              {
                ATerm c_45 = NULL;
                c_45 = t;
                t = (ATerm) ATinsert(ATempty, c_45);
              }
            }
          else
            {
              t = y_9;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
      }
  }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL,b_8 = NULL;
  l_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_45);
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_45);
  b_8 = t;
  t = SSLsetAnnotations(b_8, j_45);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_45 = NULL;
  g_45 = t;
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_45 = NULL,i_45 = NULL;
        t = term_a_7;
        h_45 = t;
        t = term_s_8;
        i_45 = t;
        t = term_t_8;
        t = f_4(h_45, i_45, t);
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        t = fetch_1_0(x_2, t);
      }
  }
  t = g_45;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm n_45 = NULL;
  n_45 = t;
  if(match_string(t, "-k"))
    {
      t = n_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_45;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
  o_45 = t;
  t = SSL_string_to_int(o_45);
  p_45 = t;
  t = term_c_10;
  q_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, p_45);
  t = i_4(q_45, p_45, t);
  t = o_45;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_d_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, z_2, a_3, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm s_45 = NULL;
  s_45 = t;
  if(match_string(t, "-S"))
    {
      t = s_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_45;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL;
  t = term_e_10;
  t_45 = t;
  t = term_f_10;
  u_45 = t;
  t = term_g_10;
  t = i_4(t_45, u_45, t);
  t = term_h_10;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_i_10;
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
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL;
  v_45 = t;
  t = SSL_string_to_int(v_45);
  w_45 = t;
  t = term_e_10;
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, w_45);
  t = i_4(x_45, w_45, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_45);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_k_10;
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
  ATerm y_45 = NULL,z_45 = NULL;
  t = term_m_10;
  y_45 = t;
  t = term_e_9;
  z_45 = t;
  t = term_n_10;
  t = i_4(y_45, z_45, t);
  t = term_o_10;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_p_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_3, g_3, h_3, t);
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm s_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_3, j_3, k_3, t);
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
            t = Option_3_0(l_3, m_3, n_3, t);
          }
      }
    }
  return(t);
}
static ATerm i_4 (ATerm v_77, ATerm w_77, ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL;
  t = term_a_7;
  a_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_7, v_77, w_77);
  t = lookup_table_0_1(a_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_4(v_77, w_77, b_46, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_7, v_77, w_77);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
      t = term_e_9;
      t = g_0(t);
      h_46 = t;
      t = term_s_9;
      i_46 = t;
      t = term_t_9;
      j_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_9, term_t_9, h_46);
      t = g_4(i_46, j_46, h_46, t);
      _fail(t);
    }
  else
    {
      ATerm m_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_46 = ATgetFirst((ATermList) t);
          g_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_46;
      t = d_0(t);
      t = term_e_9;
      t = f_0(t);
      m_46 = t;
      t = (ATerm) ATinsert(CheckATermList(g_46), m_46);
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm o_46 = NULL;
  o_46 = t;
  if(match_string(t, "-o"))
    {
      t = o_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_46;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL;
  p_46 = t;
  t = term_b_7;
  q_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_7, p_46);
  t = i_4(q_46, p_46, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_46);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_3, p_3, r_3, t);
  return(t);
}
static ATerm g_4 (ATerm b_63, ATerm c_63, ATerm a_63, ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL;
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_63, c_63);
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_10 = ATgetArgument(t, 0);
            ATerm a_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_63, c_63);
        t = f_4(b_63, c_63, t);
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        t = (ATerm) ATempty;
      }
  }
  t_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_63, c_63, (ATerm) ATinsert(CheckATermList(t_46), a_63));
  t = lookup_table_0_1(b_63, t);
  w_46 = t;
  t = (ATerm) ATinsert(CheckATermList(t_46), a_63);
  u_46 = t;
  t = w_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_4(c_63, u_46, v_46, t);
  t = s_46;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL;
      t = term_e_9;
      t = o_0(t);
      h_47 = t;
      t = term_s_9;
      i_47 = t;
      t = term_t_9;
      j_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_9, term_t_9, h_47);
      t = g_4(i_47, j_47, h_47, t);
      _fail(t);
    }
  else
    {
      ATerm n_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_47 = ATgetFirst((ATermList) t);
          e_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_47 = ATgetFirst((ATermList) t);
          g_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_47;
      t = j_0(t);
      t = f_47;
      t = l_0(t);
      n_47 = t;
      t = (ATerm) ATinsert(CheckATermList(g_47), n_47);
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm p_47 = NULL;
  p_47 = t;
  if(match_string(t, "-i"))
    {
      t = p_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_47;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL;
  q_47 = t;
  t = term_n_8;
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_8, q_47);
  t = i_4(r_47, q_47, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_47);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_b_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_4, l_4, m_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_9;
  t = whoami_0_0(t);
  s_47 = t;
  t = term_v_5;
  u_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_11), s_47);
  v_47 = t;
  t = SSL_printnl(u_47, v_47);
  t = term_d_11;
  t_47 = t;
  t = SSL_exit(t_47);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL;
  t = term_a_7;
  w_47 = t;
  t = term_s_8;
  x_47 = t;
  t = term_t_8;
  t = f_4(w_47, x_47, t);
  return(t);
}
static ATerm a_4 (ATerm k_61, ATerm l_61, ATerm t)
{
  ATerm e_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_61, l_61);
      LocalPopChoice(g_11);
    }
  else
    {
      t = e_11;
      t = SSL_addr(k_61, l_61);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_129 (ATerm), ATerm m_129 (ATerm), ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL;
  z_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_47;
      t = l_129(t);
    }
  else
    {
      ATerm e_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_48 = ATgetFirst((ATermList) t);
          b_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_48;
      t = foldr_2_0(l_129, m_129, t);
      e_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_48, e_48);
      t = m_129(t);
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
  t = term_f_10;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL;
  if(match_cons(t, sym__2))
    {
      a_52 = ATgetArgument(t, 0);
      b_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(a_52, b_52, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_48 = NULL,m_50 = NULL,n_50 = NULL;
  t = times_0_0(t);
  n_50 = t;
  t = SSL_explode_term(n_50);
  if(match_cons(t, sym__2))
    {
      ATerm i_11 = ATgetArgument(t, 0);
      m_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_50;
  t = foldr_2_0(n_4, o_4, t);
  h_48 = t;
  t = SSL_TicksToSeconds(h_48);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
  s_48 = t;
  if(match_cons(t, sym__2))
    {
      t_48 = ATgetArgument(t, 0);
      u_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_48;
        if((t_48 != t))
          {
            _fail(t);
          }
        t = s_48;
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        t = (ATerm) ATmakeAppl(sym__2, t_48, u_48);
        {
          ATerm l_11 = t;
          int m_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_48, u_48);
              LocalPopChoice(m_11);
            }
          else
            {
              t = l_11;
              t = SSL_gtr(t_48, u_48);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_48, u_48);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_139 (ATerm), ATerm t)
{
  ATerm a_49 = NULL;
  a_49 = t;
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
        t = term_a_7;
        d_49 = t;
        t = term_e_10;
        e_49 = t;
        t = term_p_11;
        t = f_4(d_49, e_49, t);
        c_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_49, term_d_11);
        t = geq_0_0(t);
        t = a_49;
        t = v_139(t);
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        t = a_49;
      }
  }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,j_49 = NULL,k_49 = NULL;
  t = run_time_0_0(t);
  g_49 = t;
  t = term_e_9;
  t = whoami_0_0(t);
  h_49 = t;
  t = term_v_5;
  j_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_11), g_49), term_r_11), h_49);
  k_49 = t;
  t = SSL_printnl(j_49, k_49);
  t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_11), g_49), term_r_11), h_49));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_10;
  l_49 = t;
  t = SSL_exit(l_49);
  return(t);
}
static ATerm j_4 (ATerm q_67, ATerm r_67, ATerm s_67, ATerm t)
{
  ATerm m_49 = NULL;
  t = SSL_hashtable_put(s_67, q_67, r_67);
  m_49 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_49);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_64, ATerm t)
{
  ATerm v_49 = NULL;
  t = table_hashtable_0_0(t);
  v_49 = t;
  {
    ATerm t_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_55 = NULL;
        t = v_49;
        if(match_cons(t, sym_Hashtable_1))
          {
            l_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_4(n_64, l_55, t);
        LocalPopChoice(v_11);
      }
    else
      {
        t = t_11;
        {
          ATerm q_55 = NULL;
          t = n_64;
          t = table_create_0_0(t);
          t = v_49;
          if(match_cons(t, sym_Hashtable_1))
            {
              q_55 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_4(n_64, q_55, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm y_67, ATerm z_67, ATerm t)
{
  ATerm y_49 = NULL;
  t = SSL_hashtable_create(y_67, z_67);
  y_49 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_49);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,d_50 = NULL,e_50 = NULL;
  z_49 = t;
  t = term_w_11;
  d_50 = t;
  t = term_x_11;
  e_50 = t;
  t = z_49;
  t = new_hashtable_0_2(d_50, e_50, t);
  a_50 = t;
  t = z_49;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_4(z_49, a_50, b_50, t);
  t = z_49;
  return(t);
}
static ATerm c_4 (ATerm v_67, ATerm w_67, ATerm t)
{
  ATerm f_50 = NULL;
  t = SSL_hashtable_remove(w_67, v_67);
  f_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_50);
  return(t);
}
static ATerm d_4 (ATerm a_68, ATerm t)
{
  ATerm g_50 = NULL;
  t = SSL_hashtable_destroy(a_68);
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_50);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm h_50 = NULL;
  t = SSL_table_hashtable();
  h_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_50);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL;
  i_50 = t;
  t = table_hashtable_0_0(t);
  j_50 = t;
  t = lookup_table_0_1(i_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_4(l_50, t);
  t = j_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_4(i_50, k_50, t);
  t = i_50;
  return(t);
}
ATerm fetch_1_0 (ATerm w_122 (ATerm), ATerm t)
{
  static ATerm i_51 (ATerm t);
  static ATerm i_51 (ATerm t)
  {
    ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
    f_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_51 = ATgetFirst((ATermList) t);
        h_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_11 = t;
      int z_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_55 = NULL,a_56 = NULL,g_8 = NULL;
          t = SSLgetAnnotations(f_51);
          x_55 = t;
          t = g_51;
          t = w_122(t);
          a_56 = t;
          t = (ATerm) ATinsert(CheckATermList(h_51), a_56);
          g_8 = t;
          t = SSLsetAnnotations(g_8, x_55);
          LocalPopChoice(z_11);
        }
      else
        {
          t = y_11;
          {
            ATerm i_56 = NULL,l_56 = NULL,i_8 = NULL;
            t = SSLgetAnnotations(f_51);
            i_56 = t;
            t = h_51;
            t = i_51(t);
            l_56 = t;
            t = (ATerm) ATinsert(CheckATermList(l_56), g_51);
            i_8 = t;
            t = SSLsetAnnotations(i_8, i_56);
          }
        }
    }
    return(t);
  }
  t = i_51(t);
  return(t);
}
static ATerm k_4 (ATerm t_67, ATerm u_67, ATerm t)
{
  t = SSL_hashtable_get(u_67, t_67);
  return(t);
}
static ATerm f_4 (ATerm u_64, ATerm v_64, ATerm t)
{
  ATerm l_51 = NULL;
  t = lookup_table_0_1(u_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_4(v_64, l_51, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL;
  t = term_a_12;
  n_51 = t;
  t = term_e_9;
  o_51 = t;
  t = term_b_12;
  t = i_4(n_51, o_51, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_c_12;
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
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL;
  t = term_a_12;
  r_51 = t;
  t = term_e_9;
  s_51 = t;
  t = term_b_12;
  t = i_4(r_51, s_51, t);
  t = term_d_12;
  p_51 = t;
  t = term_e_9;
  q_51 = t;
  t = term_e_12;
  t = i_4(p_51, q_51, t);
  t = term_f_12;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_h_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_4, u_4, v_4, t);
      LocalPopChoice(l_12);
    }
  else
    {
      t = i_12;
      t = Option_3_0(w_4, x_4, y_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,r_8 = NULL;
  y_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_51 = ATgetFirst((ATermList) t);
      v_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_51);
  t_51 = t;
  t = u_51;
  t = n_87(t);
  w_51 = t;
  t = v_51;
  t = o_87(t);
  x_51 = t;
  t = (ATerm) ATinsert(CheckATermList(x_51), w_51);
  r_8 = t;
  t = SSLsetAnnotations(r_8, t_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_144 (ATerm), ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,i_52 = NULL,j_52 = NULL,d_9 = NULL;
  d_52 = t;
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_12;
        t = t_144(t);
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
      }
  }
  t = d_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_52 = ATgetFirst((ATermList) t);
      g_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_52);
  e_52 = t;
  t = term_s_8;
  j_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_8, f_52);
  t = i_4(j_52, f_52, t);
  t = g_52;
  {
    static ATerm t_52 (ATerm t);
    static ATerm t_52 (ATerm t)
    {
      ATerm p_12 = t;
      int q_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_52 = NULL;
              m_52 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_52;
              LocalPopChoice(s_12);
            }
          else
            {
              t = r_12;
              t = t_144(t);
              t = Cons_2_0(_id, t_52, t);
            }
          LocalPopChoice(q_12);
        }
      else
        {
          t = p_12;
          {
            ATerm p_52 = NULL,q_52 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_52 = ATgetFirst((ATermList) t);
                q_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_52), (ATerm) ATmakeAppl(sym_Undefined_1, p_52));
          }
        }
      return(t);
    }
    t = t_52(t);
  }
  i_52 = t;
  t = (ATerm) ATinsert(CheckATermList(i_52), (ATerm) ATmakeAppl(sym_Program_1, f_52));
  d_9 = t;
  t = SSLsetAnnotations(d_9, e_52);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm g_53 = NULL;
  g_53 = t;
  if(match_string(t, "--help"))
    {
      t = g_53;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_53;
        }
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL;
  t = term_t_12;
  h_53 = t;
  t = term_e_9;
  i_53 = t;
  t = term_u_12;
  t = i_4(h_53, i_53, t);
  t = term_v_12;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_x_12;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm q_144 (ATerm), ATerm r_144 (ATerm), ATerm s_144 (ATerm), ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL;
  a_53 = t;
  t = term_s_9;
  b_53 = t;
  t = term_y_12;
  t = lookup_table_0_1(b_53, t);
  f_53 = t;
  t = term_t_9;
  c_53 = t;
  t = (ATerm) ATempty;
  d_53 = t;
  t = f_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_4(c_53, d_53, e_53, t);
  t = a_53;
  {
    static ATerm z_4 (ATerm t);
    static ATerm z_4 (ATerm t)
    {
      ATerm z_12 = t;
      int c_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_144(t);
          LocalPopChoice(c_13);
        }
      else
        {
          t = z_12;
          {
            ATerm d_13 = t;
            int e_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_5, b_5, c_5, t);
                LocalPopChoice(e_13);
              }
            else
              {
                t = d_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_4, t);
  }
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_53 = NULL;
        t_53 = t;
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_56 = NULL;
              t = t_53;
              {
                ATerm j_13 = t;
                int k_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_56 = NULL,u_56 = NULL;
                    t = term_a_7;
                    t_56 = t;
                    t = term_t_12;
                    u_56 = t;
                    t = term_l_13;
                    t = f_4(t_56, u_56, t);
                    LocalPopChoice(k_13);
                  }
                else
                  {
                    t = j_13;
                    t = fetch_1_0(e_5, t);
                  }
              }
              t = t_53;
              t = r_144(t);
              t = term_f_10;
              s_56 = t;
              t = SSL_exit(s_56);
              LocalPopChoice(i_13);
            }
          else
            {
              t = h_13;
              {
                ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
                t = term_a_7;
                z_56 = t;
                t = term_a_12;
                a_57 = t;
                t = term_m_13;
                t = f_4(z_56, a_57, t);
                t = t_53;
                t = s_144(t);
                t = term_f_10;
                y_56 = t;
                t = SSL_exit(y_56);
              }
            }
        }
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL;
              static ATerm g_5 (ATerm t);
              static ATerm g_5 (ATerm t)
              {
                ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL,f_9 = NULL;
                z_53 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_53 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_53);
                x_53 = t;
                t = y_53;
                if(((y_52 != NULL) && (y_52 != t)))
                  _fail(t);
                else
                  y_52 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_53);
                f_9 = t;
                t = SSLsetAnnotations(f_9, x_53);
                return(t);
              }
              t = fetch_1_0(g_5, t);
              t = term_v_5;
              v_53 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_52)), term_p_13);
              w_53 = t;
              t = SSL_printnl(v_53, w_53);
              t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_52)), term_p_13));
              t = r_144(t);
              t = term_d_11;
              u_53 = t;
              t = SSL_exit(u_53);
              LocalPopChoice(o_13);
            }
          else
            {
              t = n_13;
            }
        }
      }
  }
  z_52 = t;
  t = term_s_9;
  t = table_destroy_0_0(t);
  t = z_52;
  return(t);
}
ATerm option_wrap_5_0 (ATerm t_142 (ATerm), ATerm u_142 (ATerm), ATerm v_142 (ATerm), ATerm w_142 (ATerm), ATerm x_142 (ATerm), ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  t = parse_options_3_0(t_142, u_142, v_142, t);
  e_54 = t;
  t = term_q_13;
  t = table_create_0_0(t);
  t = term_q_13;
  f_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_13, term_s_13, e_54);
  t = lookup_table_0_1(f_54, t);
  i_54 = t;
  t = term_s_13;
  g_54 = t;
  t = i_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_4(g_54, e_54, h_54, t);
  t = e_54;
  t = w_142(t);
  {
    ATerm t_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_142(t);
        t = report_success_0_0(t);
        LocalPopChoice(w_13);
      }
    else
      {
        t = t_13;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm y_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(a_14);
    }
  else
    {
      t = y_13;
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(j_5, k_5, l_5, t);
                  LocalPopChoice(e_14);
                }
              else
                {
                  t = d_14;
                  {
                    ATerm f_14 = t;
                    int g_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(g_14);
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
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = input_1_0(n_5, t);
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
  ATerm m_54 = NULL,n_54 = NULL;
  t = term_j_7;
  m_54 = t;
  t = term_e_9;
  n_54 = t;
  t = term_h_14;
  t = i_4(m_54, n_54, t);
  t = term_j_14;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_k_14;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = output_1_0(p_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm l_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_55 = NULL,h_55 = NULL,e_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,r_9 = NULL,q_9 = NULL,p_9 = NULL,h_9 = NULL;
      g_55 = t;
      if(match_cons(t, sym_Specification_1))
        {
          h_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_55);
      e_57 = t;
      t = h_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_57 = ATgetFirst((ATermList) t);
          i_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_55);
      g_57 = t;
      t = i_57;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_57 = ATgetFirst((ATermList) t);
          m_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_57);
      k_57 = t;
      t = l_57;
      if(match_cons(t, sym_Strategies_1))
        {
          t_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_57);
      o_57 = t;
      t = t_57;
      t = map_1_0(strategy_definition_0_0, t);
      u_57 = t;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, u_57);
      h_9 = t;
      t = SSLsetAnnotations(h_9, o_57);
      v_57 = t;
      t = m_57;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(m_57), v_57);
      p_9 = t;
      t = SSLsetAnnotations(p_9, k_57);
      n_57 = t;
      t = (ATerm) ATinsert(CheckATermList(n_57), h_57);
      q_9 = t;
      t = SSLsetAnnotations(q_9, g_57);
      j_57 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, j_57);
      r_9 = t;
      t = SSLsetAnnotations(r_9, e_57);
      LocalPopChoice(m_14);
    }
  else
    {
      t = l_14;
      t = debug_1_0(s_5, t);
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_n_14;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(h_5, default_system_usage_0_0, default_system_about_0_0, _id, i_5, t);
  return(t);
}
