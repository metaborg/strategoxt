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
Symbol sym_SVar_1;
Symbol sym_GChoice_2;
Symbol sym_Choice_2;
Symbol sym_Thread_1;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
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
Symbol sym_SDef_3;
Symbol sym_FunType_2;
Symbol sym_ConstType_1;
Symbol sym_Sort_2;
Symbol sym_SortVar_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Some_1;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
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
Symbol sym_SVar_1;
Symbol sym_GChoice_2;
Symbol sym_Choice_2;
Symbol sym_Thread_1;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
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
Symbol sym_SDef_3;
Symbol sym_FunType_2;
Symbol sym_ConstType_1;
Symbol sym_Sort_2;
Symbol sym_SortVar_1;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
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
}
ATerm term_y_14;
ATerm term_v_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_u_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_q_7;
ATerm term_l_7;
ATerm term_i_7;
ATerm term_f_7;
ATerm term_c_7;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_c_6;
ATerm term_b_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_v_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym__2, term_v_8, term_a_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_b_6);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_p_10);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_m_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__2, term_x_9, term_a_10);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_g_12, term_b_6);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_b_6);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__2, term_m_11, term_b_6);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__3, term_x_9, term_a_10, (ATerm) ATempty);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_g_12);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_b_6);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm g_105 (ATerm), ATerm t);
ATerm type_expression_0_0 (ATerm t);
static ATerm p_0 (ATerm t);
ATerm build_term_expression_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm match_term_expression_0_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm r_105 (ATerm), ATerm t);
static ATerm a_4 (ATerm c_40, ATerm d_40, ATerm t);
static ATerm b_4 (ATerm h_24, ATerm i_24, ATerm t);
static ATerm d_4 (ATerm i_105 (ATerm), ATerm s_159, ATerm n_24, ATerm t);
static ATerm c_4 (ATerm d_24, ATerm e_24, ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm l_124 (ATerm), ATerm t);
static ATerm g_45 (ATerm a_45, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_4 (ATerm j_24, ATerm t);
static ATerm f_4 (ATerm g_38, ATerm h_38, ATerm t);
static ATerm g_4 (ATerm e_40, ATerm f_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_46 (ATerm q_45, ATerm t);
static ATerm s_46 (ATerm u_45, ATerm v_45, ATerm w_45, ATerm t);
static ATerm t_46 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm t);
static ATerm h_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm b_106 (ATerm), ATerm t);
static ATerm m_4 (ATerm q_57, ATerm r_57, ATerm t);
ATerm if_verbose2_1_0 (ATerm u_122 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_4 (ATerm h_66, ATerm i_66, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_4 (ATerm x_55, ATerm y_55, ATerm w_55, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_4 (ATerm y_42, ATerm z_42, ATerm t);
ATerm foldr_2_0 (ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_122 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm need_help_1_0 (ATerm j_125 (ATerm), ATerm t);
static ATerm q_4 (ATerm p_60, ATerm q_60, ATerm r_60, ATerm t);
static ATerm r_4 (ATerm s_60, ATerm t_60, ATerm t);
ATerm lookup_table_0_1 (ATerm j_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_60, ATerm y_60, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_4 (ATerm u_60, ATerm v_60, ATerm t);
static ATerm l_4 (ATerm z_60, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_127 (ATerm), ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm parse_options_1_0 (ATerm l_127 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm iowrap_3_0 (ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,e_0 = NULL,v_0 = NULL,i_1 = NULL;
  a_0 = t;
  t = term_b_6;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_c_6;
  v_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_6), b_0), term_e_6);
  i_1 = t;
  t = SSL_printnl(v_0, i_1);
  t = term_h_6;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm g_105 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,n_1 = NULL,o_1 = NULL,q_1 = NULL;
  l_1 = t;
  t = g_105(t);
  n_1 = t;
  t = term_c_6;
  o_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_1), n_1);
  q_1 = t;
  t = SSL_printnl(o_1, q_1);
  t = l_1;
  return(t);
}
ATerm type_expression_0_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      z_4 = ATgetArgument(t, 0);
      {
        ATerm j_1 = NULL,m_1 = NULL,k_0 = NULL;
        t = SSLgetAnnotations(y_4);
        j_1 = t;
        t = z_4;
        {
          static ATerm z_2 (ATerm t);
          static ATerm z_2 (ATerm t)
          {
            ATerm o_2 = NULL,v_2 = NULL,w_2 = NULL;
            v_2 = t;
            if(match_cons(t, sym_Sort_2))
              {
                w_2 = ATgetArgument(t, 0);
                o_2 = ATgetArgument(t, 1);
                {
                  ATerm m_3 = NULL,r_3 = NULL,s_3 = NULL,c_0 = NULL;
                  t = SSLgetAnnotations(v_2);
                  m_3 = t;
                  t = SSL_is_string(w_2);
                  r_3 = t;
                  t = o_2;
                  t = map_1_0(z_2, t);
                  s_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Sort_2, r_3, s_3);
                  c_0 = t;
                  t = SSLsetAnnotations(c_0, m_3);
                }
              }
            else
              {
                ATerm d_5 = NULL,h_5 = NULL,i_0 = NULL;
                if(match_cons(t, sym_SortVar_1))
                  {
                    w_2 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_2);
                d_5 = t;
                t = SSL_is_string(w_2);
                h_5 = t;
                t = (ATerm) ATmakeAppl(sym_SortVar_1, h_5);
                i_0 = t;
                t = SSLsetAnnotations(i_0, d_5);
              }
            return(t);
          }
          t = z_2(t);
        }
        m_1 = t;
        t = (ATerm) ATmakeAppl(sym_ConstType_1, m_1);
        k_0 = t;
        t = SSLsetAnnotations(k_0, j_1);
      }
    }
  else
    {
      ATerm q_5 = NULL,t_5 = NULL,u_5 = NULL,n_0 = NULL;
      if(match_cons(t, sym_FunType_2))
        {
          z_4 = ATgetArgument(t, 0);
          a_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_4);
      q_5 = t;
      t = z_4;
      t = map_1_0(type_expression_0_0, t);
      t_5 = t;
      t = a_5;
      t = type_expression_0_0(t);
      u_5 = t;
      t = (ATerm) ATmakeAppl(sym_FunType_2, t_5, u_5);
      n_0 = t;
      t = SSLsetAnnotations(n_0, q_5);
    }
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_i_6;
  return(t);
}
ATerm build_term_expression_0_0 (ATerm t)
{
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
      g_9 = t;
      if(match_cons(t, sym_Var_1))
        {
          h_9 = ATgetArgument(t, 0);
          {
            ATerm d_6 = NULL,g_6 = NULL,t_0 = NULL;
            t = SSLgetAnnotations(g_9);
            d_6 = t;
            t = SSL_is_string(h_9);
            g_6 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, g_6);
            t_0 = t;
            t = SSLsetAnnotations(t_0, d_6);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              h_9 = ATgetArgument(t, 0);
              {
                ATerm n_6 = NULL,p_6 = NULL,u_0 = NULL;
                t = SSLgetAnnotations(g_9);
                n_6 = t;
                t = SSL_is_int(h_9);
                p_6 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, p_6);
                u_0 = t;
                t = SSLsetAnnotations(u_0, n_6);
              }
            }
          else
            {
              if(match_cons(t, sym_Real_1))
                {
                  h_9 = ATgetArgument(t, 0);
                  {
                    ATerm n_7 = NULL,p_7 = NULL,w_0 = NULL;
                    t = SSLgetAnnotations(g_9);
                    n_7 = t;
                    t = SSL_is_real(h_9);
                    p_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Real_1, p_7);
                    w_0 = t;
                    t = SSLsetAnnotations(w_0, n_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      h_9 = ATgetArgument(t, 0);
                      {
                        ATerm w_7 = NULL,z_7 = NULL,x_0 = NULL;
                        t = SSLgetAnnotations(g_9);
                        w_7 = t;
                        t = SSL_is_string(h_9);
                        z_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Str_1, z_7);
                        x_0 = t;
                        t = SSLsetAnnotations(x_0, w_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          h_9 = ATgetArgument(t, 0);
                          f_9 = ATgetArgument(t, 1);
                          {
                            ATerm l_8 = NULL,p_8 = NULL,r_8 = NULL,y_0 = NULL;
                            t = SSLgetAnnotations(g_9);
                            l_8 = t;
                            t = SSL_is_string(h_9);
                            p_8 = t;
                            t = f_9;
                            t = map_1_0(build_term_expression_0_0, t);
                            r_8 = t;
                            t = (ATerm) ATmakeAppl(sym_Op_2, p_8, r_8);
                            y_0 = t;
                            t = SSLsetAnnotations(y_0, l_8);
                          }
                        }
                      else
                        {
                          ATerm q_9 = NULL,s_9 = NULL,z_0 = NULL;
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              h_9 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(g_9);
                          q_9 = t;
                          t = h_9;
                          t = build_term_expression_0_0(t);
                          s_9 = t;
                          t = (ATerm) ATmakeAppl(sym_BuildDefault_1, s_9);
                          z_0 = t;
                          t = SSLsetAnnotations(z_0, q_9);
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
      t = debug_1_0(p_0, t);
    }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_i_6;
  return(t);
}
ATerm match_term_expression_0_0 (ATerm t)
{
  ATerm l_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL;
      l_15 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = l_15;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              m_15 = ATgetArgument(t, 0);
              {
                ATerm y_9 = NULL,b_10 = NULL,r_1 = NULL;
                t = SSLgetAnnotations(l_15);
                y_9 = t;
                t = SSL_is_string(m_15);
                b_10 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, b_10);
                r_1 = t;
                t = SSLsetAnnotations(r_1, y_9);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  m_15 = ATgetArgument(t, 0);
                  {
                    ATerm l_10 = NULL,n_10 = NULL,s_1 = NULL;
                    t = SSLgetAnnotations(l_15);
                    l_10 = t;
                    t = SSL_is_int(m_15);
                    n_10 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, n_10);
                    s_1 = t;
                    t = SSLsetAnnotations(s_1, l_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      m_15 = ATgetArgument(t, 0);
                      {
                        ATerm x_10 = NULL,z_10 = NULL,t_1 = NULL;
                        t = SSLgetAnnotations(l_15);
                        x_10 = t;
                        t = SSL_is_real(m_15);
                        z_10 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, z_10);
                        t_1 = t;
                        t = SSLsetAnnotations(t_1, x_10);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          m_15 = ATgetArgument(t, 0);
                          {
                            ATerm g_11 = NULL,i_11 = NULL,u_1 = NULL;
                            t = SSLgetAnnotations(l_15);
                            g_11 = t;
                            t = SSL_is_string(m_15);
                            i_11 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, i_11);
                            u_1 = t;
                            t = SSLsetAnnotations(u_1, g_11);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Op_2))
                            {
                              m_15 = ATgetArgument(t, 0);
                              n_15 = ATgetArgument(t, 1);
                              {
                                ATerm u_11 = NULL,y_11 = NULL,z_11 = NULL,v_1 = NULL;
                                t = SSLgetAnnotations(l_15);
                                u_11 = t;
                                t = SSL_is_string(m_15);
                                y_11 = t;
                                t = n_15;
                                t = map_1_0(match_term_expression_0_0, t);
                                z_11 = t;
                                t = (ATerm) ATmakeAppl(sym_Op_2, y_11, z_11);
                                v_1 = t;
                                t = SSLsetAnnotations(v_1, u_11);
                              }
                            }
                          else
                            {
                              ATerm h_12 = NULL,l_12 = NULL,m_12 = NULL,w_1 = NULL;
                              if(match_cons(t, sym_As_2))
                                {
                                  m_15 = ATgetArgument(t, 0);
                                  n_15 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(l_15);
                              h_12 = t;
                              t = m_15;
                              t = match_term_expression_0_0(t);
                              l_12 = t;
                              t = n_15;
                              t = match_term_expression_0_0(t);
                              m_12 = t;
                              t = (ATerm) ATmakeAppl(sym_As_2, l_12, m_12);
                              w_1 = t;
                              t = SSLsetAnnotations(w_1, h_12);
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(o_6);
    }
  else
    {
      t = l_6;
      t = debug_1_0(q_0, t);
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm q_6 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_25 = NULL;
      c_25 = t;
      t = SSL_is_string(c_25);
      LocalPopChoice(b_7);
    }
  else
    {
      t = q_6;
      t = map_1_0(s_0, t);
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm n_25 = NULL;
  n_25 = t;
  t = SSL_is_int(n_25);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm z_25 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,c_3 = NULL;
  e_28 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      v_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
      x_27 = ATgetArgument(t, 2);
      y_27 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_28);
  z_25 = t;
  t = SSL_is_string(v_27);
  z_27 = t;
  t = w_27;
  t = map_1_0(b_1, t);
  a_28 = t;
  t = x_27;
  t = map_1_0(c_1, t);
  c_28 = t;
  t = y_27;
  t = strategy_expression_0_0(t);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, z_27, a_28, c_28, d_28);
  c_3 = t;
  t = SSLsetAnnotations(c_3, z_25);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,l_28 = NULL,a_3 = NULL;
  l_28 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_28);
  f_28 = t;
  t = SSL_is_string(g_28);
  i_28 = t;
  t = h_28;
  t = type_expression_0_0(t);
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_28, j_28);
  a_3 = t;
  t = SSLsetAnnotations(a_3, f_28);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,s_28 = NULL,b_3 = NULL;
  s_28 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      n_28 = ATgetArgument(t, 0);
      o_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_28);
  m_28 = t;
  t = SSL_is_string(n_28);
  p_28 = t;
  t = o_28;
  t = type_expression_0_0(t);
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_28, q_28);
  b_3 = t;
  t = SSLsetAnnotations(b_3, m_28);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_c_7;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_34 = NULL,v_34 = NULL,z_34 = NULL,c_35 = NULL;
      v_34 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = v_34;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = v_34;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  z_34 = ATgetArgument(t, 0);
                  {
                    ATerm d_13 = NULL,f_13 = NULL,d_2 = NULL;
                    t = SSLgetAnnotations(v_34);
                    d_13 = t;
                    t = z_34;
                    t = strategy_expression_0_0(t);
                    f_13 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, f_13);
                    d_2 = t;
                    t = SSLsetAnnotations(d_2, d_13);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      z_34 = ATgetArgument(t, 0);
                      c_35 = ATgetArgument(t, 1);
                      {
                        ATerm o_13 = NULL,u_13 = NULL,w_13 = NULL,e_2 = NULL;
                        t = SSLgetAnnotations(v_34);
                        o_13 = t;
                        t = z_34;
                        t = strategy_expression_0_0(t);
                        u_13 = t;
                        t = c_35;
                        t = strategy_expression_0_0(t);
                        w_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_13, w_13);
                        e_2 = t;
                        t = SSLsetAnnotations(e_2, o_13);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Choice_2))
                        {
                          z_34 = ATgetArgument(t, 0);
                          c_35 = ATgetArgument(t, 1);
                          {
                            ATerm h_14 = NULL,m_14 = NULL,n_14 = NULL,f_2 = NULL;
                            t = SSLgetAnnotations(v_34);
                            h_14 = t;
                            t = z_34;
                            t = strategy_expression_0_0(t);
                            m_14 = t;
                            t = c_35;
                            t = strategy_expression_0_0(t);
                            n_14 = t;
                            t = (ATerm) ATmakeAppl(sym_Choice_2, m_14, n_14);
                            f_2 = t;
                            t = SSLsetAnnotations(f_2, h_14);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LChoice_2))
                            {
                              z_34 = ATgetArgument(t, 0);
                              c_35 = ATgetArgument(t, 1);
                              {
                                ATerm d_15 = NULL,g_15 = NULL,i_15 = NULL,g_2 = NULL;
                                t = SSLgetAnnotations(v_34);
                                d_15 = t;
                                t = z_34;
                                t = strategy_expression_0_0(t);
                                g_15 = t;
                                t = c_35;
                                t = strategy_expression_0_0(t);
                                i_15 = t;
                                t = (ATerm) ATmakeAppl(sym_LChoice_2, g_15, i_15);
                                g_2 = t;
                                t = SSLsetAnnotations(g_2, d_15);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GuardedLChoice_3))
                                {
                                  z_34 = ATgetArgument(t, 0);
                                  c_35 = ATgetArgument(t, 1);
                                  t_34 = ATgetArgument(t, 2);
                                  {
                                    ATerm b_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,h_2 = NULL;
                                    t = SSLgetAnnotations(v_34);
                                    b_16 = t;
                                    t = z_34;
                                    t = strategy_expression_0_0(t);
                                    f_16 = t;
                                    t = c_35;
                                    t = strategy_expression_0_0(t);
                                    g_16 = t;
                                    t = t_34;
                                    t = strategy_expression_0_0(t);
                                    h_16 = t;
                                    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, f_16, g_16, h_16);
                                    h_2 = t;
                                    t = SSLsetAnnotations(h_2, b_16);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GChoice_2))
                                    {
                                      z_34 = ATgetArgument(t, 0);
                                      c_35 = ATgetArgument(t, 1);
                                      {
                                        ATerm q_16 = NULL,t_16 = NULL,u_16 = NULL,i_2 = NULL;
                                        t = SSLgetAnnotations(v_34);
                                        q_16 = t;
                                        t = z_34;
                                        t = strategy_expression_0_0(t);
                                        t_16 = t;
                                        t = c_35;
                                        t = strategy_expression_0_0(t);
                                        u_16 = t;
                                        t = (ATerm) ATmakeAppl(sym_GChoice_2, t_16, u_16);
                                        i_2 = t;
                                        t = SSLsetAnnotations(i_2, q_16);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LGChoice_2))
                                        {
                                          z_34 = ATgetArgument(t, 0);
                                          c_35 = ATgetArgument(t, 1);
                                          {
                                            ATerm c_17 = NULL,f_17 = NULL,g_17 = NULL,j_2 = NULL;
                                            t = SSLgetAnnotations(v_34);
                                            c_17 = t;
                                            t = z_34;
                                            t = strategy_expression_0_0(t);
                                            f_17 = t;
                                            t = c_35;
                                            t = strategy_expression_0_0(t);
                                            g_17 = t;
                                            t = (ATerm) ATmakeAppl(sym_LGChoice_2, f_17, g_17);
                                            j_2 = t;
                                            t = SSLsetAnnotations(j_2, c_17);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              z_34 = ATgetArgument(t, 0);
                                              c_35 = ATgetArgument(t, 1);
                                              t_34 = ATgetArgument(t, 2);
                                              {
                                                ATerm p_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,l_2 = NULL,k_2 = NULL;
                                                t = SSLgetAnnotations(v_34);
                                                p_17 = t;
                                                t = z_34;
                                                if(match_cons(t, sym_SVar_1))
                                                  {
                                                    w_17 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(z_34);
                                                v_17 = t;
                                                t = SSL_is_string(w_17);
                                                x_17 = t;
                                                t = (ATerm) ATmakeAppl(sym_SVar_1, x_17);
                                                k_2 = t;
                                                t = SSLsetAnnotations(k_2, v_17);
                                                y_17 = t;
                                                t = c_35;
                                                t = map_1_0(strategy_expression_0_0, t);
                                                t_17 = t;
                                                t = t_34;
                                                t = map_1_0(build_term_expression_0_0, t);
                                                u_17 = t;
                                                t = (ATerm) ATmakeAppl(sym_CallT_3, y_17, t_17, u_17);
                                                l_2 = t;
                                                t = SSLsetAnnotations(l_2, p_17);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_PrimT_3))
                                                {
                                                  z_34 = ATgetArgument(t, 0);
                                                  c_35 = ATgetArgument(t, 1);
                                                  t_34 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm j_18 = NULL,v_18 = NULL,w_18 = NULL,y_18 = NULL,m_2 = NULL;
                                                    t = SSLgetAnnotations(v_34);
                                                    j_18 = t;
                                                    t = SSL_is_string(z_34);
                                                    v_18 = t;
                                                    t = c_35;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    w_18 = t;
                                                    t = t_34;
                                                    t = map_1_0(build_term_expression_0_0, t);
                                                    y_18 = t;
                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, v_18, w_18, y_18);
                                                    m_2 = t;
                                                    t = SSLsetAnnotations(m_2, j_18);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      z_34 = ATgetArgument(t, 0);
                                                      c_35 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm l_19 = NULL,t_19 = NULL,u_19 = NULL,n_2 = NULL;
                                                        t = SSLgetAnnotations(v_34);
                                                        l_19 = t;
                                                        t = SSL_is_string(z_34);
                                                        t_19 = t;
                                                        t = c_35;
                                                        t = strategy_expression_0_0(t);
                                                        u_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, t_19, u_19);
                                                        n_2 = t;
                                                        t = SSLsetAnnotations(n_2, l_19);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          z_34 = ATgetArgument(t, 0);
                                                          c_35 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm o_20 = NULL,x_20 = NULL,y_20 = NULL,p_2 = NULL;
                                                            t = SSLgetAnnotations(v_34);
                                                            o_20 = t;
                                                            t = SSL_is_int(z_34);
                                                            x_20 = t;
                                                            t = c_35;
                                                            t = strategy_expression_0_0(t);
                                                            y_20 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, x_20, y_20);
                                                            p_2 = t;
                                                            t = SSLsetAnnotations(p_2, o_20);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_One_1))
                                                            {
                                                              z_34 = ATgetArgument(t, 0);
                                                              {
                                                                ATerm l_21 = NULL,n_21 = NULL,q_2 = NULL;
                                                                t = SSLgetAnnotations(v_34);
                                                                l_21 = t;
                                                                t = z_34;
                                                                t = strategy_expression_0_0(t);
                                                                n_21 = t;
                                                                t = (ATerm) ATmakeAppl(sym_One_1, n_21);
                                                                q_2 = t;
                                                                t = SSLsetAnnotations(q_2, l_21);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Some_1))
                                                                {
                                                                  z_34 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm u_21 = NULL,y_21 = NULL,r_2 = NULL;
                                                                    t = SSLgetAnnotations(v_34);
                                                                    u_21 = t;
                                                                    t = z_34;
                                                                    t = strategy_expression_0_0(t);
                                                                    y_21 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Some_1, y_21);
                                                                    r_2 = t;
                                                                    t = SSLsetAnnotations(r_2, u_21);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_All_1))
                                                                    {
                                                                      z_34 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm g_22 = NULL,k_22 = NULL,s_2 = NULL;
                                                                        t = SSLgetAnnotations(v_34);
                                                                        g_22 = t;
                                                                        t = z_34;
                                                                        t = strategy_expression_0_0(t);
                                                                        k_22 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_All_1, k_22);
                                                                        s_2 = t;
                                                                        t = SSLsetAnnotations(s_2, g_22);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Thread_1))
                                                                        {
                                                                          z_34 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm y_22 = NULL,c_23 = NULL,t_2 = NULL;
                                                                            t = SSLgetAnnotations(v_34);
                                                                            y_22 = t;
                                                                            t = z_34;
                                                                            t = strategy_expression_0_0(t);
                                                                            c_23 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_Thread_1, c_23);
                                                                            t_2 = t;
                                                                            t = SSLsetAnnotations(t_2, y_22);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Match_1))
                                                                            {
                                                                              z_34 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm j_23 = NULL,l_23 = NULL,u_2 = NULL;
                                                                                t = SSLgetAnnotations(v_34);
                                                                                j_23 = t;
                                                                                t = z_34;
                                                                                t = match_term_expression_0_0(t);
                                                                                l_23 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, l_23);
                                                                                u_2 = t;
                                                                                t = SSLsetAnnotations(u_2, j_23);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Build_1))
                                                                                {
                                                                                  z_34 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm s_23 = NULL,w_23 = NULL,x_2 = NULL;
                                                                                    t = SSLgetAnnotations(v_34);
                                                                                    s_23 = t;
                                                                                    t = z_34;
                                                                                    t = build_term_expression_0_0(t);
                                                                                    w_23 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, w_23);
                                                                                    x_2 = t;
                                                                                    t = SSLsetAnnotations(x_2, s_23);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Scope_2))
                                                                                    {
                                                                                      z_34 = ATgetArgument(t, 0);
                                                                                      c_35 = ATgetArgument(t, 1);
                                                                                      {
                                                                                        ATerm m_24 = NULL,t_24 = NULL,v_24 = NULL,y_2 = NULL;
                                                                                        t = SSLgetAnnotations(v_34);
                                                                                        m_24 = t;
                                                                                        t = z_34;
                                                                                        t = map_1_0(r_0, t);
                                                                                        t_24 = t;
                                                                                        t = c_35;
                                                                                        t = strategy_expression_0_0(t);
                                                                                        v_24 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, t_24, v_24);
                                                                                        y_2 = t;
                                                                                        t = SSLsetAnnotations(y_2, m_24);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      ATerm s_25 = NULL,w_25 = NULL,x_25 = NULL,d_3 = NULL;
                                                                                      if(match_cons(t, sym_Let_2))
                                                                                        {
                                                                                          z_34 = ATgetArgument(t, 0);
                                                                                          c_35 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = SSLgetAnnotations(v_34);
                                                                                      s_25 = t;
                                                                                      t = z_34;
                                                                                      t = map_1_0(a_1, t);
                                                                                      w_25 = t;
                                                                                      t = c_35;
                                                                                      t = strategy_expression_0_0(t);
                                                                                      x_25 = t;
                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, w_25, x_25);
                                                                                      d_3 = t;
                                                                                      t = SSLsetAnnotations(d_3, s_25);
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
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      t = debug_1_0(d_1, t);
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,m_6 = NULL;
  p_29 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      l_29 = ATgetArgument(t, 0);
      m_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_29);
  k_29 = t;
  t = SSL_is_string(l_29);
  n_29 = t;
  t = m_29;
  t = type_expression_0_0(t);
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_29, o_29);
  m_6 = t;
  t = SSLsetAnnotations(m_6, k_29);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,s_6 = NULL;
  s_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      n_30 = ATgetArgument(t, 0);
      o_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_30);
  m_30 = t;
  t = SSL_is_string(n_30);
  q_30 = t;
  t = o_30;
  t = type_expression_0_0(t);
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_30, r_30);
  s_6 = t;
  t = SSLsetAnnotations(s_6, m_30);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,t_6 = NULL;
  z_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      u_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_30);
  t_30 = t;
  t = SSL_is_string(u_30);
  x_30 = t;
  t = v_30;
  t = type_expression_0_0(t);
  y_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_30, y_30);
  t_6 = t;
  t = SSLsetAnnotations(t_6, t_30);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm y_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,v_6 = NULL;
  e_33 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      a_33 = ATgetArgument(t, 0);
      b_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_33);
  y_32 = t;
  t = SSL_is_string(a_33);
  c_33 = t;
  t = b_33;
  t = type_expression_0_0(t);
  d_33 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_33, d_33);
  v_6 = t;
  t = SSLsetAnnotations(v_6, y_32);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm f_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,m_33 = NULL,x_33 = NULL,w_6 = NULL;
  x_33 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_33 = ATgetArgument(t, 0);
      j_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_33);
  f_33 = t;
  t = SSL_is_string(i_33);
  k_33 = t;
  t = j_33;
  t = type_expression_0_0(t);
  m_33 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_33, m_33);
  w_6 = t;
  t = SSLsetAnnotations(w_6, f_33);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm b_35 = NULL,k_35 = NULL,l_35 = NULL,n_35 = NULL,u_35 = NULL,v_35 = NULL,y_6 = NULL;
  v_35 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_35 = ATgetArgument(t, 0);
      l_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_35);
  b_35 = t;
  t = SSL_is_string(k_35);
  n_35 = t;
  t = l_35;
  t = type_expression_0_0(t);
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_35, u_35);
  y_6 = t;
  t = SSLsetAnnotations(y_6, b_35);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm x_35 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,z_6 = NULL;
  f_36 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      b_36 = ATgetArgument(t, 0);
      c_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_36);
  x_35 = t;
  t = SSL_is_string(b_36);
  d_36 = t;
  t = c_36;
  t = type_expression_0_0(t);
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_36, e_36);
  z_6 = t;
  t = SSLsetAnnotations(z_6, x_35);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_f_7;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL;
      s_41 = t;
      if(match_cons(t, sym_SDef_3))
        {
          t_41 = ATgetArgument(t, 0);
          u_41 = ATgetArgument(t, 1);
          v_41 = ATgetArgument(t, 2);
          {
            ATerm b_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,r_6 = NULL;
            t = SSLgetAnnotations(s_41);
            b_29 = t;
            t = SSL_is_string(t_41);
            f_29 = t;
            t = u_41;
            t = map_1_0(e_1, t);
            g_29 = t;
            t = v_41;
            t = strategy_expression_0_0(t);
            h_29 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, f_29, g_29, h_29);
            r_6 = t;
            t = SSLsetAnnotations(r_6, b_29);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              t_41 = ATgetArgument(t, 0);
              u_41 = ATgetArgument(t, 1);
              v_41 = ATgetArgument(t, 2);
              r_41 = ATgetArgument(t, 3);
              {
                ATerm b_30 = NULL,g_30 = NULL,h_30 = NULL,j_30 = NULL,k_30 = NULL,u_6 = NULL;
                t = SSLgetAnnotations(s_41);
                b_30 = t;
                t = SSL_is_string(t_41);
                g_30 = t;
                t = u_41;
                t = map_1_0(f_1, t);
                h_30 = t;
                t = v_41;
                t = map_1_0(g_1, t);
                j_30 = t;
                t = r_41;
                t = strategy_expression_0_0(t);
                k_30 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, g_30, h_30, j_30, k_30);
                u_6 = t;
                t = SSLsetAnnotations(u_6, b_30);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  t_41 = ATgetArgument(t, 0);
                  u_41 = ATgetArgument(t, 1);
                  v_41 = ATgetArgument(t, 2);
                  r_41 = ATgetArgument(t, 3);
                  {
                    ATerm h_32 = NULL,p_32 = NULL,q_32 = NULL,u_32 = NULL,v_32 = NULL,x_6 = NULL;
                    t = SSLgetAnnotations(s_41);
                    h_32 = t;
                    t = SSL_is_string(t_41);
                    p_32 = t;
                    t = u_41;
                    t = map_1_0(h_1, t);
                    q_32 = t;
                    t = v_41;
                    t = map_1_0(k_1, t);
                    u_32 = t;
                    t = r_41;
                    t = strategy_expression_0_0(t);
                    v_32 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, p_32, q_32, u_32, v_32);
                    x_6 = t;
                    t = SSLsetAnnotations(x_6, h_32);
                  }
                }
              else
                {
                  ATerm q_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,a_7 = NULL;
                  if(match_cons(t, sym_ExtSDef_3))
                    {
                      t_41 = ATgetArgument(t, 0);
                      u_41 = ATgetArgument(t, 1);
                      v_41 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_41);
                  q_34 = t;
                  t = SSL_is_string(t_41);
                  w_34 = t;
                  t = u_41;
                  t = map_1_0(p_1, t);
                  x_34 = t;
                  t = v_41;
                  t = map_1_0(x_1, t);
                  y_34 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDef_3, w_34, x_34, y_34);
                  a_7 = t;
                  t = SSLsetAnnotations(a_7, q_34);
                }
            }
        }
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      t = debug_1_0(y_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  static ATerm o_42 (ATerm t);
  static ATerm o_42 (ATerm t)
  {
    ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
    l_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_42;
      }
    else
      {
        ATerm q_36 = NULL,t_36 = NULL,w_36 = NULL,e_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_42 = ATgetFirst((ATermList) t);
            n_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_42);
        q_36 = t;
        t = m_42;
        t = r_105(t);
        t_36 = t;
        t = n_42;
        t = o_42(t);
        w_36 = t;
        t = (ATerm) ATinsert(CheckATermList(w_36), t_36);
        e_8 = t;
        t = SSLsetAnnotations(e_8, q_36);
      }
    return(t);
  }
  t = o_42(t);
  return(t);
}
static ATerm a_4 (ATerm c_40, ATerm d_40, ATerm t)
{
  ATerm q_42 = NULL;
  t = SSL_fputc(c_40, d_40);
  q_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_42);
  return(t);
}
static ATerm b_4 (ATerm h_24, ATerm i_24, ATerm t)
{
  ATerm r_42 = NULL;
  t = SSL_write_term_to_stream_text(h_24, i_24);
  r_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_42);
  return(t);
}
static ATerm d_4 (ATerm i_105 (ATerm), ATerm s_159, ATerm n_24, ATerm t)
{
  ATerm s_42 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_159, term_i_7);
  t = h_4(t);
  s_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_42, n_24);
  t = i_105(t);
  t = fclose_0_0(t);
  t = n_24;
  return(t);
}
static ATerm c_4 (ATerm d_24, ATerm e_24, ATerm t)
{
  ATerm t_42 = NULL;
  t = SSL_write_term_to_stream_baf(d_24, e_24);
  t_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_42);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_7 = ATgetArgument(t, 0);
      if(match_cons(j_7, sym_Stream_1))
        {
          v_37 = ATgetArgument(j_7, 0);
        }
      else
        _fail(t);
      w_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_4(v_37, w_37, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm b_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,e_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_7 = ATgetArgument(t, 0);
      if(match_cons(k_7, sym_Stream_1))
        {
          w_42 = ATgetArgument(k_7, 0);
        }
      else
        _fail(t);
      e_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(w_42, e_44, t);
  b_42 = t;
  t = term_l_7;
  u_42 = t;
  t = b_42;
  if(match_cons(t, sym_Stream_1))
    {
      v_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_7, b_42);
  t = a_4(u_42, v_42, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_44 = NULL,l_44 = NULL,k_8 = NULL,g_8 = NULL;
  a_43 = t;
  if(match_cons(t, sym__2))
    {
      h_43 = ATgetArgument(t, 0);
      i_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_43);
  g_43 = t;
  t = h_43;
  {
    ATerm m_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_1 (ATerm t);
        static ATerm z_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((x_42 != NULL) && (x_42 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_42 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_1, t);
        LocalPopChoice(o_7);
      }
    else
      {
        t = m_7;
        t = term_q_7;
        x_42 = t;
      }
  }
  j_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_43, i_43);
  g_8 = t;
  t = SSLsetAnnotations(g_8, g_43);
  t = a_43;
  if(match_cons(t, sym__2))
    {
      c_43 = ATgetArgument(t, 0);
      d_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_43);
  b_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_43, (ATerm) ATmakeAppl(sym__2, not_null(x_42), d_43));
  k_8 = t;
  t = SSLsetAnnotations(k_8, b_43);
  f_43 = t;
  if(match_cons(t, sym__2))
    {
      k_44 = ATgetArgument(t, 0);
      l_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_7 = t;
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,n_8 = NULL;
        t = SSLgetAnnotations(f_43);
        i_37 = t;
        t = k_44;
        t = fetch_1_0(a_2, t);
        o_37 = t;
        t = l_44;
        if(match_cons(t, sym__2))
          {
            q_37 = ATgetArgument(t, 0);
            r_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_4(b_2, q_37, r_37, t);
        p_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        n_8 = t;
        t = SSLsetAnnotations(n_8, i_37);
        LocalPopChoice(s_7);
      }
    else
      {
        t = r_7;
        {
          ATerm f_38 = NULL,h_40 = NULL,m_40 = NULL,a_42 = NULL,q_8 = NULL;
          t = SSLgetAnnotations(f_43);
          f_38 = t;
          t = l_44;
          if(match_cons(t, sym__2))
            {
              m_40 = ATgetArgument(t, 0);
              a_42 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_4(c_2, m_40, a_42, t);
          h_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_44, h_40);
          q_8 = t;
          t = SSLsetAnnotations(q_8, f_38);
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
ATerm apply_strategy_1_0 (ATerm l_124 (ATerm), ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL;
  s_44 = t;
  t = dtime_0_0(t);
  t = s_44;
  t = l_124(t);
  r_44 = t;
  t = dtime_0_0(t);
  o_44 = t;
  t = r_44;
  if(match_cons(t, sym__2))
    {
      p_44 = ATgetArgument(t, 0);
      q_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_44), (ATerm) ATmakeAppl(sym_Runtime_1, o_44)), q_44);
  return(t);
}
static ATerm g_45 (ATerm a_45, ATerm t)
{
  t = SSL_fclose(a_45);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL;
  e_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_45 = ATgetArgument(t, 0);
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_45);
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            t = g_45(e_45, t);
          }
      }
    }
  else
    {
      t = g_45(e_45, t);
    }
  return(t);
}
static ATerm e_4 (ATerm j_24, ATerm t)
{
  t = SSL_read_term_from_stream(j_24);
  return(t);
}
static ATerm f_4 (ATerm g_38, ATerm h_38, ATerm t)
{
  t = SSL_strcat(g_38, h_38);
  return(t);
}
static ATerm g_4 (ATerm e_40, ATerm f_40, ATerm t)
{
  ATerm h_45 = NULL;
  t = SSL_fopen(e_40, f_40);
  h_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_45);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_45 = NULL;
  t = SSL_stdin_stream();
  i_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_45);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_45 = NULL;
  t = SSL_stdout_stream();
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_45);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_45 = NULL;
  t = SSL_stderr_stream();
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_45);
  return(t);
}
static ATerm r_46 (ATerm q_45, ATerm t)
{
  ATerm r_45 = NULL;
  t = SSL_explode_term(q_45);
  if(match_cons(t, sym__2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_7 = ATgetArgument(t, 1);
        if(((ATgetType(x_7) == AT_LIST) && !(ATisEmpty(x_7))))
          {
            r_45 = ATgetFirst((ATermList) x_7);
            {
              ATerm y_7 = (ATerm) ATgetNext((ATermList) x_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_45;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_45;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_45;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_45;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_46 (ATerm u_45, ATerm v_45, ATerm w_45, ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL,c_46 = NULL,b_9 = NULL;
  t = SSLgetAnnotations(w_45);
  z_45 = t;
  t = u_45;
  if(match_cons(t, sym_Path_1))
    {
      c_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_46, v_45);
  b_9 = t;
  t = SSLsetAnnotations(b_9, z_45);
  if(match_cons(t, sym__2))
    {
      x_45 = ATgetArgument(t, 0);
      y_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(x_45, y_45, t);
  return(t);
}
static ATerm t_46 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,m_46 = NULL,c_9 = NULL;
  t = SSLgetAnnotations(g_46);
  j_46 = t;
  t = SSL_is_string(e_46);
  m_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_46, f_46);
  c_9 = t;
  t = SSLsetAnnotations(c_9, j_46);
  if(match_cons(t, sym__2))
    {
      h_46 = ATgetArgument(t, 0);
      i_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(h_46, i_46, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  o_46 = t;
  if(match_cons(t, sym__2))
    {
      p_46 = ATgetArgument(t, 0);
      q_46 = ATgetArgument(t, 1);
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_46(o_46, t);
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
            {
              ATerm c_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_46(p_46, q_46, o_46, t);
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = c_8;
                  t = t_46(p_46, q_46, o_46, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_46(o_46, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,c_47 = NULL;
  c_47 = t;
  {
    ATerm f_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_47, term_i_8);
        t = h_4(t);
        LocalPopChoice(h_8);
      }
    else
      {
        t = f_8;
        {
          ATerm g_47 = NULL,h_47 = NULL;
          t = term_j_8;
          h_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_8, c_47);
          t = f_4(h_47, c_47, t);
          g_47 = t;
          t = SSL_perror(g_47);
          _fail(t);
        }
      }
  }
  w_46 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_4(x_46, t);
  v_46 = t;
  t = w_46;
  t = fclose_0_0(t);
  t = v_46;
  return(t);
}
ATerm fetch_1_0 (ATerm b_106 (ATerm), ATerm t)
{
  static ATerm b_48 (ATerm t);
  static ATerm b_48 (ATerm t)
  {
    ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL;
    y_47 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_47 = ATgetFirst((ATermList) t);
        a_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_8 = t;
      int o_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_49 = NULL,c_50 = NULL,j_9 = NULL;
          t = SSLgetAnnotations(y_47);
          o_49 = t;
          t = z_47;
          t = b_106(t);
          c_50 = t;
          t = (ATerm) ATinsert(CheckATermList(a_48), c_50);
          j_9 = t;
          t = SSLsetAnnotations(j_9, o_49);
          LocalPopChoice(o_8);
        }
      else
        {
          t = m_8;
          {
            ATerm y_52 = NULL,f_54 = NULL,k_9 = NULL;
            t = SSLgetAnnotations(y_47);
            y_52 = t;
            t = a_48;
            t = b_48(t);
            f_54 = t;
            t = (ATerm) ATinsert(CheckATermList(f_54), z_47);
            k_9 = t;
            t = SSLsetAnnotations(k_9, y_52);
          }
        }
    }
    return(t);
  }
  t = b_48(t);
  return(t);
}
static ATerm m_4 (ATerm q_57, ATerm r_57, ATerm t)
{
  ATerm e_48 = NULL;
  t = lookup_table_0_1(q_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(r_57, e_48, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_122 (ATerm), ATerm t)
{
  ATerm h_48 = NULL;
  h_48 = t;
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
        t = term_u_8;
        k_48 = t;
        t = term_v_8;
        l_48 = t;
        t = term_w_8;
        t = m_4(k_48, l_48, t);
        j_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_48, term_x_8);
        t = geq_0_0(t);
        t = h_48;
        t = u_122(t);
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        t = h_48;
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm o_48 = NULL;
  o_48 = t;
  if(match_string(t, "-k"))
    {
      t = o_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_48;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL;
  p_48 = t;
  t = SSL_string_to_int(p_48);
  q_48 = t;
  t = term_y_8;
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_8, q_48);
  t = p_4(r_48, q_48, t);
  t = p_48;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_3, f_3, g_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm t_48 = NULL;
  t_48 = t;
  if(match_string(t, "-S"))
    {
      t = t_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_48;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL;
  t = term_v_8;
  u_48 = t;
  t = term_a_9;
  v_48 = t;
  t = term_d_9;
  t = p_4(u_48, v_48, t);
  t = term_e_9;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_i_9;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL;
  w_48 = t;
  t = SSL_string_to_int(w_48);
  x_48 = t;
  t = term_v_8;
  y_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_8, x_48);
  t = p_4(y_48, x_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_48);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_l_9;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL;
  t = term_m_9;
  z_48 = t;
  t = term_b_6;
  a_49 = t;
  t = term_o_9;
  t = p_4(z_48, a_49, t);
  t = term_p_9;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_r_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, i_3, j_3, t);
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_3, l_3, n_3, t);
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
            t = Option_3_0(o_3, p_3, q_3, t);
          }
      }
    }
  return(t);
}
static ATerm p_4 (ATerm h_66, ATerm i_66, ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL;
  t = term_u_8;
  b_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_8, h_66, i_66);
  t = lookup_table_0_1(b_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(h_66, i_66, c_49, t);
  t = (ATerm) ATmakeAppl(sym__3, term_u_8, h_66, i_66);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
      t = term_b_6;
      t = g_0(t);
      i_49 = t;
      t = term_x_9;
      j_49 = t;
      t = term_a_10;
      k_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_9, term_a_10, i_49);
      t = n_4(j_49, k_49, i_49, t);
      _fail(t);
    }
  else
    {
      ATerm n_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_49 = ATgetFirst((ATermList) t);
          h_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_49;
      t = d_0(t);
      t = term_b_6;
      t = f_0(t);
      n_49 = t;
      t = (ATerm) ATinsert(CheckATermList(h_49), n_49);
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm p_49 = NULL;
  p_49 = t;
  if(match_string(t, "-o"))
    {
      t = p_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_49;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL;
  q_49 = t;
  t = term_c_10;
  r_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, q_49);
  t = p_4(r_49, q_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_49);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_e_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_3, u_3, v_3, t);
  return(t);
}
static ATerm n_4 (ATerm x_55, ATerm y_55, ATerm w_55, ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL;
  t_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_55, y_55);
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_10 = ATgetArgument(t, 0);
            ATerm j_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_55, y_55);
        t = m_4(x_55, y_55, t);
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        t = (ATerm) ATempty;
      }
  }
  u_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_55, y_55, (ATerm) ATinsert(CheckATermList(u_49), w_55));
  t = lookup_table_0_1(x_55, t);
  x_49 = t;
  t = (ATerm) ATinsert(CheckATermList(u_49), w_55);
  v_49 = t;
  t = x_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(y_55, v_49, w_49, t);
  t = t_49;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL;
      t = term_b_6;
      t = o_0(t);
      i_50 = t;
      t = term_x_9;
      j_50 = t;
      t = term_a_10;
      k_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_9, term_a_10, i_50);
      t = n_4(j_50, k_50, i_50, t);
      _fail(t);
    }
  else
    {
      ATerm o_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_50 = ATgetFirst((ATermList) t);
          f_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_50 = ATgetFirst((ATermList) t);
          h_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_50;
      t = l_0(t);
      t = g_50;
      t = m_0(t);
      o_50 = t;
      t = (ATerm) ATinsert(CheckATermList(h_50), o_50);
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm q_50 = NULL;
  q_50 = t;
  if(match_string(t, "-i"))
    {
      t = q_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_50;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL;
  r_50 = t;
  t = term_k_10;
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_10, r_50);
  t = p_4(s_50, r_50, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_50);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_m_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_3, x_3, y_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_6;
  t = whoami_0_0(t);
  t_50 = t;
  t = term_c_6;
  v_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_10), t_50);
  w_50 = t;
  t = SSL_printnl(v_50, w_50);
  t = term_h_6;
  u_50 = t;
  t = SSL_exit(u_50);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL;
  t = term_u_8;
  x_50 = t;
  t = term_p_10;
  y_50 = t;
  t = term_q_10;
  t = m_4(x_50, y_50, t);
  return(t);
}
static ATerm i_4 (ATerm y_42, ATerm z_42, ATerm t)
{
  ATerm s_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_42, z_42);
      LocalPopChoice(t_10);
    }
  else
    {
      t = s_10;
      t = SSL_addr(y_42, z_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
  a_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_51;
      t = q_112(t);
    }
  else
    {
      ATerm f_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_51 = ATgetFirst((ATermList) t);
          c_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_51;
      t = foldr_2_0(q_112, r_112, t);
      f_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_51, f_51);
      t = r_112(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm l_56 = NULL,k_57 = NULL;
  if(match_cons(t, sym__2))
    {
      l_56 = ATgetArgument(t, 0);
      k_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(l_56, k_57, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_51 = NULL,n_55 = NULL,i_56 = NULL;
  t = times_0_0(t);
  i_56 = t;
  t = SSL_explode_term(i_56);
  if(match_cons(t, sym__2))
    {
      ATerm u_10 = ATgetArgument(t, 0);
      n_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_55;
  t = foldr_2_0(z_3, j_4, t);
  i_51 = t;
  t = SSL_TicksToSeconds(i_51);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  t_51 = t;
  if(match_cons(t, sym__2))
    {
      u_51 = ATgetArgument(t, 0);
      v_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_51;
        if((u_51 != t))
          {
            _fail(t);
          }
        t = t_51;
        LocalPopChoice(y_10);
      }
    else
      {
        t = w_10;
        t = (ATerm) ATmakeAppl(sym__2, u_51, v_51);
        {
          ATerm a_11 = t;
          int b_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_51, v_51);
              LocalPopChoice(b_11);
            }
          else
            {
              t = a_11;
              t = SSL_gtr(u_51, v_51);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_51, v_51);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_122 (ATerm), ATerm t)
{
  ATerm z_51 = NULL;
  z_51 = t;
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
        t = term_u_8;
        c_52 = t;
        t = term_v_8;
        d_52 = t;
        t = term_w_8;
        t = m_4(c_52, d_52, t);
        b_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_52, term_h_6);
        t = geq_0_0(t);
        t = z_51;
        t = t_122(t);
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        t = z_51;
      }
  }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,i_52 = NULL,j_52 = NULL;
  t = run_time_0_0(t);
  f_52 = t;
  t = term_b_6;
  t = whoami_0_0(t);
  g_52 = t;
  t = term_c_6;
  i_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_11), f_52), term_f_11), g_52);
  j_52 = t;
  t = SSL_printnl(i_52, j_52);
  t = (ATerm) ATmakeAppl(sym__2, term_c_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_11), f_52), term_f_11), g_52));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_52 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_9;
  k_52 = t;
  t = SSL_exit(k_52);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL;
  v_52 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_52;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          u_52 = ATgetArgument(t, 0);
          {
            ATerm u_59 = NULL,n_9 = NULL;
            t = SSLgetAnnotations(v_52);
            u_59 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, u_52);
            n_9 = t;
            t = SSLsetAnnotations(n_9, u_59);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_52;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_125 (ATerm), ATerm t)
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_52 = NULL,o_52 = NULL;
      t = term_u_8;
      n_52 = t;
      t = term_m_11;
      o_52 = t;
      t = term_n_11;
      t = m_4(n_52, o_52, t);
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      t = fetch_1_0(s_4, t);
    }
  t = j_125(t);
  return(t);
}
static ATerm q_4 (ATerm p_60, ATerm q_60, ATerm r_60, ATerm t)
{
  ATerm x_52 = NULL;
  t = SSL_hashtable_put(r_60, p_60, q_60);
  x_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_52);
  return(t);
}
static ATerm r_4 (ATerm s_60, ATerm t_60, ATerm t)
{
  t = SSL_hashtable_get(t_60, s_60);
  return(t);
}
ATerm lookup_table_0_1 (ATerm j_57, ATerm t)
{
  ATerm g_53 = NULL;
  t = table_hashtable_0_0(t);
  g_53 = t;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_60 = NULL;
        t = g_53;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_60 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_4(j_57, a_60, t);
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        {
          ATerm f_60 = NULL;
          t = j_57;
          t = table_create_0_0(t);
          t = g_53;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_60 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_4(j_57, f_60, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_60, ATerm y_60, ATerm t)
{
  ATerm j_53 = NULL;
  t = SSL_hashtable_create(x_60, y_60);
  j_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_53);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,o_53 = NULL,p_53 = NULL;
  k_53 = t;
  t = term_s_11;
  o_53 = t;
  t = term_t_11;
  p_53 = t;
  t = k_53;
  t = new_hashtable_0_2(o_53, p_53, t);
  l_53 = t;
  t = k_53;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(k_53, l_53, m_53, t);
  t = k_53;
  return(t);
}
static ATerm k_4 (ATerm u_60, ATerm v_60, ATerm t)
{
  ATerm q_53 = NULL;
  t = SSL_hashtable_remove(v_60, u_60);
  q_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_53);
  return(t);
}
static ATerm l_4 (ATerm z_60, ATerm t)
{
  ATerm r_53 = NULL;
  t = SSL_hashtable_destroy(z_60);
  r_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_53);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm s_53 = NULL;
  t = SSL_table_hashtable();
  s_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_53);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL;
  t_53 = t;
  t = table_hashtable_0_0(t);
  u_53 = t;
  t = lookup_table_0_1(t_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_4(w_53, t);
  t = u_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_4(t_53, v_53, t);
  t = t_53;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_53 = ATgetFirst((ATermList) t);
      z_53 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_54 = NULL,e_54 = NULL;
        static ATerm t_4 (ATerm t);
        static ATerm t_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_54)), not_null(e_54));
          return(t);
        }
        t = z_53;
        t = j_0(t);
        if(((d_54 != NULL) && (d_54 != t)))
          _fail(t);
        else
          d_54 = t;
        t = y_53;
        t = h_0(t);
        if(((e_54 != NULL) && (e_54 != t)))
          _fail(t);
        else
          e_54 = t;
        t = z_53;
        t = reverse_acc_2_0(h_0, t_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_6;
      t = j_0(t);
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,z_9 = NULL;
  m_54 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_54);
  k_54 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_54);
  z_9 = t;
  t = SSLsetAnnotations(z_9, k_54);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm o_54 = NULL;
  o_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_54), term_v_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL;
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_54 = NULL,j_54 = NULL;
      t = term_u_8;
      i_54 = t;
      t = term_p_10;
      j_54 = t;
      t = term_q_10;
      t = m_4(i_54, j_54, t);
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      t = fetch_1_0(u_4, t);
    }
  t = term_a_12;
  t = echo_0_0(t);
  t = term_x_9;
  g_54 = t;
  t = term_a_10;
  h_54 = t;
  t = term_b_12;
  t = m_4(g_54, h_54, t);
  t = reverse_acc_2_0(_id, v_4, t);
  t = map_1_0(w_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL;
  q_54 = t;
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_54;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_12 = ATgetFirst((ATermList) t);
                ATerm f_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_54;
          }
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        t = (ATerm) ATinsert(ATempty, q_54);
      }
  }
  r_54 = t;
  t = term_q_7;
  s_54 = t;
  t = SSL_printnl(s_54, r_54);
  t = q_54;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL;
  t = term_u_8;
  w_54 = t;
  t = term_p_10;
  x_54 = t;
  t = term_q_10;
  t = m_4(w_54, x_54, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL;
  t = term_g_12;
  y_54 = t;
  t = term_b_6;
  z_54 = t;
  t = term_i_12;
  t = p_4(y_54, z_54, t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_j_12;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL;
  t = term_g_12;
  c_55 = t;
  t = term_b_6;
  d_55 = t;
  t = term_i_12;
  t = p_4(c_55, d_55, t);
  t = term_k_12;
  a_55 = t;
  t = term_b_6;
  b_55 = t;
  t = term_n_12;
  t = p_4(a_55, b_55, t);
  t = term_o_12;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_p_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_4, b_5, c_5, t);
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      t = Option_3_0(e_5, f_5, g_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL,d_10 = NULL;
  j_55 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_55 = ATgetFirst((ATermList) t);
      g_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_55);
  e_55 = t;
  t = f_55;
  t = u_83(t);
  h_55 = t;
  t = g_55;
  t = v_83(t);
  i_55 = t;
  t = (ATerm) ATinsert(CheckATermList(i_55), h_55);
  d_10 = t;
  t = SSLsetAnnotations(d_10, e_55);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_127 (ATerm), ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,t_55 = NULL,u_55 = NULL,h_10 = NULL;
  o_55 = t;
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_12;
        t = m_127(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
      }
  }
  t = o_55;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_55 = ATgetFirst((ATermList) t);
      r_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_55);
  p_55 = t;
  t = term_p_10;
  u_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_10, q_55);
  t = p_4(u_55, q_55, t);
  t = r_55;
  {
    static ATerm h_56 (ATerm t);
    static ATerm h_56 (ATerm t)
    {
      ATerm v_12 = t;
      int w_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_12 = t;
          int y_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_56 = NULL;
              a_56 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_56;
              LocalPopChoice(y_12);
            }
          else
            {
              t = x_12;
              t = m_127(t);
              t = Cons_2_0(_id, h_56, t);
            }
          LocalPopChoice(w_12);
        }
      else
        {
          t = v_12;
          {
            ATerm d_56 = NULL,e_56 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_56 = ATgetFirst((ATermList) t);
                e_56 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_56), (ATerm) ATmakeAppl(sym_Undefined_1, d_56));
          }
        }
      return(t);
    }
    t = h_56(t);
  }
  t_55 = t;
  t = (ATerm) ATinsert(CheckATermList(t_55), (ATerm) ATmakeAppl(sym_Program_1, q_55));
  h_10 = t;
  t = SSLsetAnnotations(h_10, p_55);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm u_56 = NULL;
  u_56 = t;
  if(match_string(t, "--help"))
    {
      t = u_56;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_56;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_56;
        }
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL;
  t = term_m_11;
  v_56 = t;
  t = term_b_6;
  w_56 = t;
  t = term_z_12;
  t = p_4(v_56, w_56, t);
  t = term_a_13;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_b_13;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_127 (ATerm), ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL;
  o_56 = t;
  t = term_x_9;
  p_56 = t;
  t = term_c_13;
  t = lookup_table_0_1(p_56, t);
  t_56 = t;
  t = term_a_10;
  q_56 = t;
  t = (ATerm) ATempty;
  r_56 = t;
  t = t_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(q_56, r_56, s_56, t);
  t = o_56;
  {
    static ATerm i_5 (ATerm t);
    static ATerm i_5 (ATerm t)
    {
      ATerm e_13 = t;
      int g_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_127(t);
          LocalPopChoice(g_13);
        }
      else
        {
          t = e_13;
          {
            ATerm h_13 = t;
            int i_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_5, k_5, l_5, t);
                LocalPopChoice(i_13);
              }
            else
              {
                t = h_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_5, t);
  }
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_57 = NULL;
        h_57 = t;
        {
          ATerm l_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_60 = NULL;
              t = h_57;
              {
                ATerm n_13 = t;
                int p_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_60 = NULL,l_60 = NULL;
                    t = term_u_8;
                    k_60 = t;
                    t = term_m_11;
                    l_60 = t;
                    t = term_n_11;
                    t = m_4(k_60, l_60, t);
                    LocalPopChoice(p_13);
                  }
                else
                  {
                    t = n_13;
                    t = fetch_1_0(m_5, t);
                  }
              }
              t = h_57;
              t = default_system_usage_0_0(t);
              t = term_a_9;
              j_60 = t;
              t = SSL_exit(j_60);
              LocalPopChoice(m_13);
            }
          else
            {
              t = l_13;
              {
                ATerm w_60 = NULL,a_61 = NULL,b_61 = NULL;
                t = term_u_8;
                a_61 = t;
                t = term_g_12;
                b_61 = t;
                t = term_q_13;
                t = m_4(a_61, b_61, t);
                t = h_57;
                t = default_system_about_0_0(t);
                t = term_a_9;
                w_60 = t;
                t = SSL_exit(w_60);
              }
            }
        }
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        {
          ATerm r_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_57 = NULL,n_57 = NULL,o_57 = NULL;
              static ATerm n_5 (ATerm t);
              static ATerm n_5 (ATerm t)
              {
                ATerm p_57 = NULL,s_57 = NULL,t_57 = NULL,r_10 = NULL;
                t_57 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_57 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_57);
                p_57 = t;
                t = s_57;
                if(((m_56 != NULL) && (m_56 != t)))
                  _fail(t);
                else
                  m_56 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_57);
                r_10 = t;
                t = SSLsetAnnotations(r_10, p_57);
                return(t);
              }
              t = fetch_1_0(n_5, t);
              t = term_c_6;
              n_57 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_56)), term_t_13);
              o_57 = t;
              t = SSL_printnl(n_57, o_57);
              t = (ATerm) ATmakeAppl(sym__2, term_c_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_56)), term_t_13));
              t = default_system_usage_0_0(t);
              t = term_h_6;
              i_57 = t;
              t = SSL_exit(i_57);
              LocalPopChoice(s_13);
            }
          else
            {
              t = r_13;
            }
        }
      }
  }
  n_56 = t;
  t = term_x_9;
  t = table_destroy_0_0(t);
  t = n_56;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL;
  t = parse_options_1_0(l_125, t);
  y_57 = t;
  t = term_v_13;
  t = table_create_0_0(t);
  t = term_v_13;
  z_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_13, term_x_13, y_57);
  t = lookup_table_0_1(z_57, t);
  c_58 = t;
  t = term_x_13;
  a_58 = t;
  t = c_58;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(a_58, y_57, b_58, t);
  t = y_57;
  t = n_125(t);
  {
    ATerm y_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_125, t);
        LocalPopChoice(z_13);
      }
    else
      {
        t = y_13;
        {
          ATerm a_14 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_125(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_14);
            }
          else
            {
              t = a_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = if_verbose2_1_0(x_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL;
  t = term_c_14;
  d_58 = t;
  t = term_b_6;
  e_58 = t;
  t = term_d_14;
  t = p_4(d_58, e_58, t);
  t = term_e_14;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_f_14;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL;
  f_58 = t;
  t = term_u_8;
  j_58 = t;
  t = term_p_10;
  k_58 = t;
  t = term_q_10;
  t = m_4(j_58, k_58, t);
  g_58 = t;
  t = term_c_6;
  h_58 = t;
  t = (ATerm) ATinsert(ATempty, g_58);
  i_58 = t;
  t = SSL_printnl(h_58, i_58);
  t = f_58;
  return(t);
}
ATerm iowrap_3_0 (ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm t)
{
  static ATerm o_5 (ATerm t);
  static ATerm r_5 (ATerm t);
  static ATerm o_5 (ATerm t)
  {
    ATerm g_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_124(t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = g_14;
        {
          ATerm j_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
              {
                ATerm l_14 = t;
                int o_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(o_14);
                  }
                else
                  {
                    t = l_14;
                    {
                      ATerm p_14 = t;
                      int q_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(s_5, v_5, w_5, t);
                          LocalPopChoice(q_14);
                        }
                      else
                        {
                          t = p_14;
                          {
                            ATerm r_14 = t;
                            int s_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(s_14);
                              }
                            else
                              {
                                t = r_14;
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
  static ATerm r_5 (ATerm t)
  {
    ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL;
    m_58 = t;
    {
      ATerm t_14 = t;
      int u_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm y_5 (ATerm t);
          static ATerm y_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((l_58 != NULL) && (l_58 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_58 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_5, t);
          LocalPopChoice(u_14);
        }
      else
        {
          t = t_14;
          t = term_v_14;
          l_58 = t;
        }
    }
    t = not_null(l_58);
    t = ReadFromFile_0_0(t);
    n_58 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_58, n_58);
    t = apply_strategy_1_0(u_124, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(o_5, w_124, p_5, r_5, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,p_11 = NULL;
  u_58 = t;
  if(match_cons(t, sym__2))
    {
      r_58 = ATgetArgument(t, 0);
      s_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_58);
  q_58 = t;
  t = s_58;
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_59 = NULL,e_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,o_11 = NULL,j_11 = NULL,c_11 = NULL,v_10 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            l_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_58);
        e_61 = t;
        t = l_59;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_61 = ATgetFirst((ATermList) t);
            i_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_59);
        g_61 = t;
        t = i_61;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_61 = ATgetFirst((ATermList) t);
            m_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_61);
        k_61 = t;
        t = l_61;
        if(match_cons(t, sym_Strategies_1))
          {
            p_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_61);
        o_61 = t;
        t = p_61;
        t = map_1_0(strategy_definition_0_0, t);
        q_61 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, q_61);
        v_10 = t;
        t = SSLsetAnnotations(v_10, o_61);
        r_61 = t;
        t = m_61;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(m_61), r_61);
        c_11 = t;
        t = SSLsetAnnotations(c_11, k_61);
        n_61 = t;
        t = (ATerm) ATinsert(CheckATermList(n_61), h_61);
        j_11 = t;
        t = SSLsetAnnotations(j_11, g_61);
        j_61 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, j_61);
        o_11 = t;
        t = SSLsetAnnotations(o_11, e_61);
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = debug_1_0(a_6, t);
      }
  }
  t_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_58, t_58);
  p_11 = t;
  t = SSLsetAnnotations(p_11, q_58);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_y_14;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(z_5, _fail, default_usage_0_0, t);
  return(t);
}
