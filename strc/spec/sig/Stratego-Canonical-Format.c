#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_SVar_1;
Symbol sym_VarDec_2;
Symbol sym_ExtSDef_3;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
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
Symbol sym_BuildDefault_1;
Symbol sym_As_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Str_1;
Symbol sym_Real_1;
Symbol sym_Int_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
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
Symbol sym_Hashtable_1;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_SVar_1;
Symbol sym_VarDec_2;
Symbol sym_ExtSDef_3;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
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
Symbol sym_BuildDefault_1;
Symbol sym_As_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Str_1;
Symbol sym_Real_1;
Symbol sym_Int_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Cong_2;
static void init_module_constructors (void)
{
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
}
ATerm term_r_15;
ATerm term_n_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_k_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_m_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_x_7;
ATerm term_t_7;
ATerm term_p_7;
ATerm term_l_7;
ATerm term_h_7;
ATerm term_d_7;
ATerm term_y_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_k_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_g_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym__2, term_g_9, term_l_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_k_6);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_x_10);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_u_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_b_10, term_c_10);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_k_6);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_k_6);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym__2, term_u_11, term_k_6);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__3, term_b_10, term_c_10, (ATerm) ATempty);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_x_12);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym__2, term_t_14, term_k_6);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm u_102 (ATerm), ATerm t);
static ATerm c_0 (ATerm t);
ATerm term_expression_0_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm match_term_exp_0_0 (ATerm t);
ATerm CallT_3_0 (ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm f_103 (ATerm), ATerm t);
static ATerm a_4 (ATerm y_39, ATerm z_39, ATerm t);
static ATerm b_4 (ATerm t_24, ATerm u_24, ATerm t);
static ATerm d_4 (ATerm w_102 (ATerm), ATerm q_156, ATerm z_24, ATerm t);
static ATerm c_4 (ATerm p_24, ATerm q_24, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm t_121 (ATerm), ATerm t);
static ATerm v_48 (ATerm p_48, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_4 (ATerm v_24, ATerm t);
static ATerm f_4 (ATerm r_38, ATerm s_38, ATerm t);
static ATerm g_4 (ATerm a_40, ATerm b_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_50 (ATerm f_49, ATerm t);
static ATerm h_50 (ATerm j_49, ATerm k_49, ATerm l_49, ATerm t);
static ATerm i_50 (ATerm t_49, ATerm u_49, ATerm v_49, ATerm t);
static ATerm h_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm p_103 (ATerm), ATerm t);
static ATerm m_4 (ATerm u_64, ATerm v_64, ATerm t);
ATerm if_verbose2_1_0 (ATerm c_120 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_4 (ATerm g_58, ATerm h_58, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_4 (ATerm b_63, ATerm c_63, ATerm a_63, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_4 (ATerm u_42, ATerm v_42, ATerm t);
ATerm foldr_2_0 (ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_120 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm need_help_1_0 (ATerm r_122 (ATerm), ATerm t);
static ATerm q_4 (ATerm t_67, ATerm u_67, ATerm v_67, ATerm t);
static ATerm r_4 (ATerm w_67, ATerm x_67, ATerm t);
ATerm lookup_table_0_1 (ATerm n_64, ATerm t);
ATerm new_hashtable_0_2 (ATerm b_68, ATerm c_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_4 (ATerm y_67, ATerm z_67, ATerm t);
static ATerm l_4 (ATerm d_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_124 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm parse_options_1_0 (ATerm t_124 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_122 (ATerm), ATerm u_122 (ATerm), ATerm v_122 (ATerm), ATerm w_122 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm iowrap_3_0 (ATerm c_122 (ATerm), ATerm d_122 (ATerm), ATerm e_122 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm r_6 (ATerm t);
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
  t = term_k_6;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_s_6;
  t_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_6), b_0), term_t_6);
  v_0 = t;
  t = SSL_printnl(t_0, v_0);
  t = term_w_6;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm u_102 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,n_1 = NULL,o_1 = NULL,q_1 = NULL;
  l_1 = t;
  t = u_102(t);
  n_1 = t;
  t = term_s_6;
  o_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_1), n_1);
  q_1 = t;
  t = SSL_printnl(o_1, q_1);
  t = l_1;
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = term_y_6;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
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
                ATerm i_0 = NULL,n_0 = NULL,b_2 = NULL;
                t = SSLgetAnnotations(h_6);
                i_0 = t;
                t = SSL_is_string(i_6);
                n_0 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, n_0);
                b_2 = t;
                t = SSLsetAnnotations(b_2, i_0);
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
      LocalPopChoice(c_7);
    }
  else
    {
      t = b_7;
      t = debug_1_0(c_0, t);
    }
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_d_7;
  return(t);
}
ATerm match_term_exp_0_0 (ATerm t)
{
  ATerm e_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_11 = NULL,v_11 = NULL,b_12 = NULL;
      p_11 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = p_11;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              v_11 = ATgetArgument(t, 0);
              {
                ATerm d_5 = NULL,i_5 = NULL,b_3 = NULL;
                t = SSLgetAnnotations(p_11);
                d_5 = t;
                t = SSL_is_string(v_11);
                i_5 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, i_5);
                b_3 = t;
                t = SSLsetAnnotations(b_3, d_5);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  v_11 = ATgetArgument(t, 0);
                  {
                    ATerm s_5 = NULL,q_6 = NULL,e_3 = NULL;
                    t = SSLgetAnnotations(p_11);
                    s_5 = t;
                    t = SSL_is_int(v_11);
                    q_6 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, q_6);
                    e_3 = t;
                    t = SSLsetAnnotations(e_3, s_5);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      v_11 = ATgetArgument(t, 0);
                      {
                        ATerm x_6 = NULL,a_7 = NULL,f_3 = NULL;
                        t = SSLgetAnnotations(p_11);
                        x_6 = t;
                        t = SSL_is_real(v_11);
                        a_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, a_7);
                        f_3 = t;
                        t = SSLsetAnnotations(f_3, x_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          v_11 = ATgetArgument(t, 0);
                          {
                            ATerm g_7 = NULL,i_7 = NULL,m_3 = NULL;
                            t = SSLgetAnnotations(p_11);
                            g_7 = t;
                            t = SSL_is_string(v_11);
                            i_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, i_7);
                            m_3 = t;
                            t = SSLsetAnnotations(m_3, g_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              v_11 = ATgetArgument(t, 0);
                              {
                                ATerm o_7 = NULL,q_7 = NULL,o_3 = NULL;
                                t = SSLgetAnnotations(p_11);
                                o_7 = t;
                                t = v_11;
                                t = match_term_exp_0_0(t);
                                q_7 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, q_7);
                                o_3 = t;
                                t = SSLsetAnnotations(o_3, o_7);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  v_11 = ATgetArgument(t, 0);
                                  b_12 = ATgetArgument(t, 1);
                                  {
                                    ATerm z_7 = NULL,c_8 = NULL,d_8 = NULL,g_8 = NULL,h_8 = NULL,j_8 = NULL,x_3 = NULL,p_3 = NULL;
                                    t = SSLgetAnnotations(p_11);
                                    z_7 = t;
                                    t = v_11;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        g_8 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(v_11);
                                    d_8 = t;
                                    t = SSL_is_string(g_8);
                                    h_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, h_8);
                                    p_3 = t;
                                    t = SSLsetAnnotations(p_3, d_8);
                                    j_8 = t;
                                    t = b_12;
                                    t = match_term_exp_0_0(t);
                                    c_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, j_8, c_8);
                                    x_3 = t;
                                    t = SSLsetAnnotations(x_3, z_7);
                                  }
                                }
                              else
                                {
                                  ATerm q_9 = NULL,u_9 = NULL,v_9 = NULL,o_4 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      v_11 = ATgetArgument(t, 0);
                                      b_12 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(p_11);
                                  q_9 = t;
                                  t = SSL_is_string(v_11);
                                  u_9 = t;
                                  t = b_12;
                                  t = map_1_0(match_term_exp_0_0, t);
                                  v_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, u_9, v_9);
                                  o_4 = t;
                                  t = SSLsetAnnotations(o_4, q_9);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(f_7);
    }
  else
    {
      t = e_7;
      t = debug_1_0(f_0, t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm t)
{
  ATerm d_13 = NULL,h_13 = NULL,t_13 = NULL,z_13 = NULL,b_14 = NULL,e_14 = NULL,f_14 = NULL,m_14 = NULL,g_5 = NULL;
  m_14 = t;
  if(match_cons(t, sym_CallT_3))
    {
      h_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
      z_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_14);
  d_13 = t;
  t = h_13;
  t = p_76(t);
  b_14 = t;
  t = t_13;
  t = q_76(t);
  e_14 = t;
  t = z_13;
  t = r_76(t);
  f_14 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, b_14, e_14, f_14);
  g_5 = t;
  t = SSLsetAnnotations(g_5, d_13);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = CallT_3_0(q_0, r_0, s_0, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,m_20 = NULL,o_20 = NULL,z_5 = NULL;
  o_20 = t;
  if(match_cons(t, sym_SVar_1))
    {
      k_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_20);
  j_20 = t;
  t = SSL_is_string(k_20);
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, m_20);
  z_5 = t;
  t = SSLsetAnnotations(z_5, j_20);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,s_20 = NULL,t_20 = NULL,a_6 = NULL;
  t_20 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_20);
  p_20 = t;
  t = SSL_is_string(q_20);
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_20);
  a_6 = t;
  t = SSLsetAnnotations(a_6, p_20);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm l_27 = NULL;
  l_27 = t;
  t = SSL_is_string(l_27);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,u_7 = NULL,z_6 = NULL;
  x_28 = t;
  if(match_cons(t, sym_CallT_3))
    {
      p_28 = ATgetArgument(t, 0);
      q_28 = ATgetArgument(t, 1);
      s_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_28);
  o_28 = t;
  t = p_28;
  if(match_cons(t, sym_SVar_1))
    {
      u_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_28);
  t_28 = t;
  t = SSL_is_string(u_28);
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, v_28);
  z_6 = t;
  t = SSLsetAnnotations(z_6, t_28);
  w_28 = t;
  t = q_28;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = s_28;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, w_28, q_28, s_28);
  u_7 = t;
  t = SSLsetAnnotations(u_7, o_28);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,y_7 = NULL;
  q_31 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_31);
  n_31 = t;
  t = SSL_is_string(o_31);
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_31);
  y_7 = t;
  t = SSLsetAnnotations(y_7, n_31);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm i_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  i_34 = t;
  if(match_cons(t, sym_SDef_3))
    {
      k_34 = ATgetArgument(t, 0);
      l_34 = ATgetArgument(t, 1);
      m_34 = ATgetArgument(t, 2);
      {
        ATerm w_36 = NULL,c_37 = NULL,e_37 = NULL,p_37 = NULL,i_8 = NULL;
        t = SSLgetAnnotations(i_34);
        w_36 = t;
        t = SSL_is_string(k_34);
        c_37 = t;
        t = l_34;
        t = map_1_0(c_1, t);
        e_37 = t;
        t = m_34;
        t = strategy_expression_0_0(t);
        p_37 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, c_37, e_37, p_37);
        i_8 = t;
        t = SSLsetAnnotations(i_8, w_36);
      }
    }
  else
    {
      ATerm o_39 = NULL,x_39 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,r_8 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          k_34 = ATgetArgument(t, 0);
          l_34 = ATgetArgument(t, 1);
          m_34 = ATgetArgument(t, 2);
          n_34 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_34);
      o_39 = t;
      t = SSL_is_string(k_34);
      x_39 = t;
      t = l_34;
      t = map_1_0(d_1, t);
      c_40 = t;
      t = m_34;
      t = map_1_0(e_1, t);
      d_40 = t;
      t = n_34;
      t = strategy_expression_0_0(t);
      e_40 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, x_39, c_40, d_40, e_40);
      r_8 = t;
      t = SSLsetAnnotations(r_8, o_39);
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm k_38 = NULL,m_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,f_8 = NULL;
  q_38 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      m_38 = ATgetArgument(t, 0);
      o_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_38);
  k_38 = t;
  t = SSL_is_string(m_38);
  p_38 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_38, o_38);
  f_8 = t;
  t = SSLsetAnnotations(f_8, k_38);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_8 = NULL;
  k_41 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_41 = ATgetArgument(t, 0);
      i_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_41);
  f_41 = t;
  t = SSL_is_string(g_41);
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_41, i_41);
  l_8 = t;
  t = SSLsetAnnotations(l_8, f_41);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,w_41 = NULL,o_8 = NULL;
  w_41 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      q_41 = ATgetArgument(t, 0);
      r_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_41);
  p_41 = t;
  t = SSL_is_string(q_41);
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_41, r_41);
  o_8 = t;
  t = SSLsetAnnotations(o_8, p_41);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_h_7;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_38 = NULL,n_38 = NULL,t_38 = NULL,w_38 = NULL;
      n_38 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = n_38;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = n_38;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  t_38 = ATgetArgument(t, 0);
                  {
                    ATerm y_14 = NULL,a_15 = NULL,k_5 = NULL;
                    t = SSLgetAnnotations(n_38);
                    y_14 = t;
                    t = t_38;
                    t = strategy_expression_0_0(t);
                    a_15 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, a_15);
                    k_5 = t;
                    t = SSLsetAnnotations(k_5, y_14);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      t_38 = ATgetArgument(t, 0);
                      {
                        ATerm g_15 = NULL,i_15 = NULL,l_5 = NULL;
                        t = SSLgetAnnotations(n_38);
                        g_15 = t;
                        t = t_38;
                        t = strategy_expression_0_0(t);
                        i_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, i_15);
                        l_5 = t;
                        t = SSLsetAnnotations(l_5, g_15);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          t_38 = ATgetArgument(t, 0);
                          w_38 = ATgetArgument(t, 1);
                          {
                            ATerm p_15 = NULL,s_15 = NULL,t_15 = NULL,o_5 = NULL;
                            t = SSLgetAnnotations(n_38);
                            p_15 = t;
                            t = t_38;
                            t = strategy_expression_0_0(t);
                            s_15 = t;
                            t = w_38;
                            t = strategy_expression_0_0(t);
                            t_15 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, s_15, t_15);
                            o_5 = t;
                            t = SSLsetAnnotations(o_5, p_15);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              t_38 = ATgetArgument(t, 0);
                              w_38 = ATgetArgument(t, 1);
                              {
                                ATerm b_16 = NULL,e_16 = NULL,f_16 = NULL,r_5 = NULL;
                                t = SSLgetAnnotations(n_38);
                                b_16 = t;
                                t = t_38;
                                t = strategy_expression_0_0(t);
                                e_16 = t;
                                t = w_38;
                                t = strategy_expression_0_0(t);
                                f_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, e_16, f_16);
                                r_5 = t;
                                t = SSLsetAnnotations(r_5, b_16);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  t_38 = ATgetArgument(t, 0);
                                  w_38 = ATgetArgument(t, 1);
                                  {
                                    ATerm n_16 = NULL,q_16 = NULL,r_16 = NULL,t_5 = NULL;
                                    t = SSLgetAnnotations(n_38);
                                    n_16 = t;
                                    t = t_38;
                                    t = strategy_expression_0_0(t);
                                    q_16 = t;
                                    t = w_38;
                                    t = strategy_expression_0_0(t);
                                    r_16 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, q_16, r_16);
                                    t_5 = t;
                                    t = SSLsetAnnotations(t_5, n_16);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      t_38 = ATgetArgument(t, 0);
                                      w_38 = ATgetArgument(t, 1);
                                      l_38 = ATgetArgument(t, 2);
                                      {
                                        ATerm a_17 = NULL,e_17 = NULL,h_17 = NULL,i_17 = NULL,v_5 = NULL;
                                        t = SSLgetAnnotations(n_38);
                                        a_17 = t;
                                        t = t_38;
                                        t = strategy_expression_0_0(t);
                                        e_17 = t;
                                        t = w_38;
                                        t = strategy_expression_0_0(t);
                                        h_17 = t;
                                        t = l_38;
                                        t = strategy_expression_0_0(t);
                                        i_17 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_17, h_17, i_17);
                                        v_5 = t;
                                        t = SSLsetAnnotations(v_5, a_17);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          t_38 = ATgetArgument(t, 0);
                                          w_38 = ATgetArgument(t, 1);
                                          {
                                            ATerm z_17 = NULL,c_18 = NULL,d_18 = NULL,w_5 = NULL;
                                            t = SSLgetAnnotations(n_38);
                                            z_17 = t;
                                            t = t_38;
                                            t = strategy_expression_0_0(t);
                                            c_18 = t;
                                            t = w_38;
                                            t = strategy_expression_0_0(t);
                                            d_18 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, c_18, d_18);
                                            w_5 = t;
                                            t = SSLsetAnnotations(w_5, z_17);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              t_38 = ATgetArgument(t, 0);
                                              w_38 = ATgetArgument(t, 1);
                                              {
                                                ATerm q_18 = NULL,u_18 = NULL,v_18 = NULL,x_5 = NULL;
                                                t = SSLgetAnnotations(n_38);
                                                q_18 = t;
                                                t = t_38;
                                                t = strategy_expression_0_0(t);
                                                u_18 = t;
                                                t = w_38;
                                                t = strategy_expression_0_0(t);
                                                v_18 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, u_18, v_18);
                                                x_5 = t;
                                                t = SSLsetAnnotations(x_5, q_18);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  t_38 = ATgetArgument(t, 0);
                                                  w_38 = ATgetArgument(t, 1);
                                                  l_38 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm p_19 = NULL,t_19 = NULL,u_19 = NULL,w_19 = NULL,x_19 = NULL,f_20 = NULL,g_20 = NULL,b_6 = NULL,y_5 = NULL;
                                                    t = SSLgetAnnotations(n_38);
                                                    p_19 = t;
                                                    t = t_38;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        x_19 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(t_38);
                                                    w_19 = t;
                                                    t = SSL_is_string(x_19);
                                                    f_20 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, f_20);
                                                    y_5 = t;
                                                    t = SSLsetAnnotations(y_5, w_19);
                                                    g_20 = t;
                                                    t = w_38;
                                                    t = map_1_0(k_0, t);
                                                    t_19 = t;
                                                    t = l_38;
                                                    t = map_1_0(u_0, t);
                                                    u_19 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, g_20, t_19, u_19);
                                                    b_6 = t;
                                                    t = SSLsetAnnotations(b_6, p_19);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      t_38 = ATgetArgument(t, 0);
                                                      w_38 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm i_21 = NULL,s_21 = NULL,t_21 = NULL,c_6 = NULL;
                                                        t = SSLgetAnnotations(n_38);
                                                        i_21 = t;
                                                        t = SSL_is_string(t_38);
                                                        s_21 = t;
                                                        t = w_38;
                                                        t = strategy_expression_0_0(t);
                                                        t_21 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, s_21, t_21);
                                                        c_6 = t;
                                                        t = SSLsetAnnotations(c_6, i_21);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          t_38 = ATgetArgument(t, 0);
                                                          w_38 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm n_22 = NULL,q_22 = NULL,s_22 = NULL,d_6 = NULL;
                                                            t = SSLgetAnnotations(n_38);
                                                            n_22 = t;
                                                            t = SSL_is_int(t_38);
                                                            q_22 = t;
                                                            t = w_38;
                                                            t = strategy_expression_0_0(t);
                                                            s_22 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, q_22, s_22);
                                                            d_6 = t;
                                                            t = SSLsetAnnotations(d_6, n_22);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              t_38 = ATgetArgument(t, 0);
                                                              w_38 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm e_23 = NULL,j_23 = NULL,k_23 = NULL,e_6 = NULL;
                                                                t = SSLgetAnnotations(n_38);
                                                                e_23 = t;
                                                                t = SSL_is_string(t_38);
                                                                j_23 = t;
                                                                t = w_38;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                k_23 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, j_23, k_23);
                                                                e_6 = t;
                                                                t = SSLsetAnnotations(e_6, e_23);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  t_38 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm v_23 = NULL,a_24 = NULL,f_6 = NULL;
                                                                    t = SSLgetAnnotations(n_38);
                                                                    v_23 = t;
                                                                    t = t_38;
                                                                    t = strategy_expression_0_0(t);
                                                                    a_24 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, a_24);
                                                                    f_6 = t;
                                                                    t = SSLsetAnnotations(f_6, v_23);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      t_38 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm m_24 = NULL,r_24 = NULL,g_6 = NULL;
                                                                        t = SSLgetAnnotations(n_38);
                                                                        m_24 = t;
                                                                        t = t_38;
                                                                        t = strategy_expression_0_0(t);
                                                                        r_24 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, r_24);
                                                                        g_6 = t;
                                                                        t = SSLsetAnnotations(g_6, m_24);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          t_38 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm c_25 = NULL,f_25 = NULL,l_6 = NULL;
                                                                            t = SSLgetAnnotations(n_38);
                                                                            c_25 = t;
                                                                            t = t_38;
                                                                            t = strategy_expression_0_0(t);
                                                                            f_25 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, f_25);
                                                                            l_6 = t;
                                                                            t = SSLsetAnnotations(l_6, c_25);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              t_38 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm m_25 = NULL,q_25 = NULL,m_6 = NULL;
                                                                                t = SSLgetAnnotations(n_38);
                                                                                m_25 = t;
                                                                                t = t_38;
                                                                                t = strategy_expression_0_0(t);
                                                                                q_25 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, q_25);
                                                                                m_6 = t;
                                                                                t = SSLsetAnnotations(m_6, m_25);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  t_38 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm d_26 = NULL,g_26 = NULL,n_6 = NULL;
                                                                                    t = SSLgetAnnotations(n_38);
                                                                                    d_26 = t;
                                                                                    t = t_38;
                                                                                    t = match_term_exp_0_0(t);
                                                                                    g_26 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, g_26);
                                                                                    n_6 = t;
                                                                                    t = SSLsetAnnotations(n_6, d_26);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      t_38 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm s_26 = NULL,v_26 = NULL,o_6 = NULL;
                                                                                        t = SSLgetAnnotations(n_38);
                                                                                        s_26 = t;
                                                                                        t = t_38;
                                                                                        t = term_expression_0_0(t);
                                                                                        v_26 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, v_26);
                                                                                        o_6 = t;
                                                                                        t = SSLsetAnnotations(o_6, s_26);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          t_38 = ATgetArgument(t, 0);
                                                                                          w_38 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm d_27 = NULL,g_27 = NULL,i_27 = NULL,p_6 = NULL;
                                                                                            t = SSLgetAnnotations(n_38);
                                                                                            d_27 = t;
                                                                                            t = t_38;
                                                                                            t = map_1_0(w_0, t);
                                                                                            g_27 = t;
                                                                                            t = w_38;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            i_27 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, g_27, i_27);
                                                                                            p_6 = t;
                                                                                            t = SSLsetAnnotations(p_6, d_27);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              t_38 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm r_27 = NULL,u_27 = NULL,u_6 = NULL;
                                                                                                t = SSLgetAnnotations(n_38);
                                                                                                r_27 = t;
                                                                                                t = t_38;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                u_27 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, u_27);
                                                                                                u_6 = t;
                                                                                                t = SSLsetAnnotations(u_6, r_27);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  t_38 = ATgetArgument(t, 0);
                                                                                                  w_38 = ATgetArgument(t, 1);
                                                                                                  l_38 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm f_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,e_8 = NULL;
                                                                                                    t = SSLgetAnnotations(n_38);
                                                                                                    f_28 = t;
                                                                                                    t = SSL_is_string(t_38);
                                                                                                    k_28 = t;
                                                                                                    t = w_38;
                                                                                                    t = map_1_0(y_0, t);
                                                                                                    l_28 = t;
                                                                                                    t = l_38;
                                                                                                    t = map_1_0(a_1, t);
                                                                                                    m_28 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, k_28, l_28, m_28);
                                                                                                    e_8 = t;
                                                                                                    t = SSLsetAnnotations(e_8, f_28);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm a_32 = NULL,d_32 = NULL,f_32 = NULL,s_8 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      t_38 = ATgetArgument(t, 0);
                                                                                                      w_38 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(n_38);
                                                                                                  a_32 = t;
                                                                                                  t = t_38;
                                                                                                  t = map_1_0(b_1, t);
                                                                                                  d_32 = t;
                                                                                                  t = w_38;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  f_32 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, d_32, f_32);
                                                                                                  s_8 = t;
                                                                                                  t = SSLsetAnnotations(s_8, a_32);
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
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      t = debug_1_0(g_1, t);
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm o_46 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,a_49 = NULL,l_10 = NULL;
  a_49 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_48 = ATgetArgument(t, 0);
      j_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_49);
  o_46 = t;
  t = SSL_is_string(i_48);
  k_48 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_48, j_48);
  l_10 = t;
  t = SSLsetAnnotations(l_10, o_46);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm b_55 = NULL,n_55 = NULL,a_56 = NULL,b_56 = NULL,n_56 = NULL,n_10 = NULL;
  n_56 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      n_55 = ATgetArgument(t, 0);
      a_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_56);
  b_55 = t;
  t = SSL_is_string(n_55);
  b_56 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_56, a_56);
  n_10 = t;
  t = SSLsetAnnotations(n_10, b_55);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm o_56 = NULL,m_57 = NULL,u_57 = NULL,e_58 = NULL,b_59 = NULL,o_10 = NULL;
  b_59 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      m_57 = ATgetArgument(t, 0);
      u_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_59);
  o_56 = t;
  t = SSL_is_string(m_57);
  e_58 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_58, u_57);
  o_10 = t;
  t = SSLsetAnnotations(o_10, o_56);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,q_10 = NULL;
  n_63 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_63 = ATgetArgument(t, 0);
      l_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_63);
  j_63 = t;
  t = SSL_is_string(k_63);
  m_63 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_63, l_63);
  q_10 = t;
  t = SSLsetAnnotations(q_10, j_63);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,r_10 = NULL;
  s_63 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      p_63 = ATgetArgument(t, 0);
      q_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_63);
  o_63 = t;
  t = SSL_is_string(p_63);
  r_63 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_63, q_63);
  r_10 = t;
  t = SSLsetAnnotations(r_10, o_63);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,m_64 = NULL,o_64 = NULL,p_64 = NULL,t_10 = NULL;
  p_64 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      l_64 = ATgetArgument(t, 0);
      m_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_64);
  k_64 = t;
  t = SSL_is_string(l_64);
  o_64 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, o_64, m_64);
  t_10 = t;
  t = SSLsetAnnotations(t_10, k_64);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,w_64 = NULL,u_10 = NULL;
  w_64 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      r_64 = ATgetArgument(t, 0);
      s_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_64);
  q_64 = t;
  t = SSL_is_string(r_64);
  t_64 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_64, s_64);
  u_10 = t;
  t = SSLsetAnnotations(u_10, q_64);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
      k_45 = t;
      if(match_cons(t, sym_SDef_3))
        {
          l_45 = ATgetArgument(t, 0);
          m_45 = ATgetArgument(t, 1);
          n_45 = ATgetArgument(t, 2);
          {
            ATerm e_42 = NULL,s_45 = NULL,t_45 = NULL,m_46 = NULL,m_10 = NULL;
            t = SSLgetAnnotations(k_45);
            e_42 = t;
            t = SSL_is_string(l_45);
            s_45 = t;
            t = m_45;
            t = map_1_0(i_1, t);
            t_45 = t;
            t = n_45;
            t = strategy_expression_0_0(t);
            m_46 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, s_45, t_45, m_46);
            m_10 = t;
            t = SSLsetAnnotations(m_10, e_42);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              l_45 = ATgetArgument(t, 0);
              m_45 = ATgetArgument(t, 1);
              n_45 = ATgetArgument(t, 2);
              j_45 = ATgetArgument(t, 3);
              {
                ATerm c_52 = NULL,q_53 = NULL,r_53 = NULL,e_54 = NULL,o_54 = NULL,p_10 = NULL;
                t = SSLgetAnnotations(k_45);
                c_52 = t;
                t = SSL_is_string(l_45);
                q_53 = t;
                t = m_45;
                t = map_1_0(j_1, t);
                r_53 = t;
                t = n_45;
                t = map_1_0(k_1, t);
                e_54 = t;
                t = j_45;
                t = strategy_expression_0_0(t);
                o_54 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, q_53, r_53, e_54, o_54);
                p_10 = t;
                t = SSLsetAnnotations(p_10, c_52);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  l_45 = ATgetArgument(t, 0);
                  m_45 = ATgetArgument(t, 1);
                  n_45 = ATgetArgument(t, 2);
                  j_45 = ATgetArgument(t, 3);
                  {
                    ATerm d_60 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,y_62 = NULL,s_10 = NULL;
                    t = SSLgetAnnotations(k_45);
                    d_60 = t;
                    t = SSL_is_string(l_45);
                    l_62 = t;
                    t = m_45;
                    t = map_1_0(m_1, t);
                    m_62 = t;
                    t = n_45;
                    t = map_1_0(p_1, t);
                    n_62 = t;
                    t = j_45;
                    t = strategy_expression_0_0(t);
                    y_62 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, l_62, m_62, n_62, y_62);
                    s_10 = t;
                    t = SSLsetAnnotations(s_10, d_60);
                  }
                }
              else
                {
                  ATerm c_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,v_10 = NULL;
                  if(match_cons(t, sym_ExtSDef_3))
                    {
                      l_45 = ATgetArgument(t, 0);
                      m_45 = ATgetArgument(t, 1);
                      n_45 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_45);
                  c_64 = t;
                  t = SSL_is_string(l_45);
                  g_64 = t;
                  t = m_45;
                  t = map_1_0(s_1, t);
                  h_64 = t;
                  t = n_45;
                  t = map_1_0(u_1, t);
                  i_64 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDef_3, g_64, h_64, i_64);
                  v_10 = t;
                  t = SSLsetAnnotations(v_10, c_64);
                }
            }
        }
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      t = debug_1_0(v_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm f_103 (ATerm), ATerm t)
{
  static ATerm g_46 (ATerm t)
  {
    ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL;
    d_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_46;
      }
    else
      {
        ATerm e_65 = NULL,h_65 = NULL,i_65 = NULL,h_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_46 = ATgetFirst((ATermList) t);
            f_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_46);
        e_65 = t;
        t = e_46;
        t = f_103(t);
        h_65 = t;
        t = f_46;
        t = g_46(t);
        i_65 = t;
        t = (ATerm) ATinsert(CheckATermList(i_65), h_65);
        h_11 = t;
        t = SSLsetAnnotations(h_11, e_65);
      }
    return(t);
  }
  t = g_46(t);
  return(t);
}
static ATerm a_4 (ATerm y_39, ATerm z_39, ATerm t)
{
  ATerm i_46 = NULL;
  t = SSL_fputc(y_39, z_39);
  i_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_46);
  return(t);
}
static ATerm b_4 (ATerm t_24, ATerm u_24, ATerm t)
{
  ATerm j_46 = NULL;
  t = SSL_write_term_to_stream_text(t_24, u_24);
  j_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_46);
  return(t);
}
static ATerm d_4 (ATerm w_102 (ATerm), ATerm q_156, ATerm z_24, ATerm t)
{
  ATerm k_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_156, term_p_7);
  t = h_4(t);
  k_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_46, z_24);
  t = w_102(t);
  t = fclose_0_0(t);
  t = z_24;
  return(t);
}
static ATerm c_4 (ATerm p_24, ATerm q_24, ATerm t)
{
  ATerm l_46 = NULL;
  t = SSL_write_term_to_stream_baf(p_24, q_24);
  l_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_46);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm w_65 = NULL,x_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_7 = ATgetArgument(t, 0);
      if(match_cons(r_7, sym_Stream_1))
        {
          w_65 = ATgetArgument(r_7, 0);
        }
      else
        _fail(t);
      x_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_4(w_65, x_65, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_7 = ATgetArgument(t, 0);
      if(match_cons(s_7, sym_Stream_1))
        {
          l_66 = ATgetArgument(s_7, 0);
        }
      else
        _fail(t);
      m_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(l_66, m_66, t);
  i_66 = t;
  t = term_t_7;
  j_66 = t;
  t = i_66;
  if(match_cons(t, sym_Stream_1))
    {
      k_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_7, i_66);
  t = a_4(j_66, k_66, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,z_47 = NULL,a_48 = NULL,k_11 = NULL,j_11 = NULL;
  q_46 = t;
  if(match_cons(t, sym__2))
    {
      x_46 = ATgetArgument(t, 0);
      y_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_46);
  w_46 = t;
  t = x_46;
  {
    ATerm v_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm w_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((p_46 != NULL) && (p_46 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(w_1, t);
        LocalPopChoice(w_7);
      }
    else
      {
        t = v_7;
        t = term_x_7;
        p_46 = t;
      }
  }
  z_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_46, y_46);
  j_11 = t;
  t = SSLsetAnnotations(j_11, w_46);
  t = q_46;
  if(match_cons(t, sym__2))
    {
      s_46 = ATgetArgument(t, 0);
      t_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_46);
  r_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_46, (ATerm) ATmakeAppl(sym__2, not_null(p_46), t_46));
  k_11 = t;
  t = SSLsetAnnotations(k_11, r_46);
  v_46 = t;
  if(match_cons(t, sym__2))
    {
      z_47 = ATgetArgument(t, 0);
      a_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_8 = t;
    int b_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,l_11 = NULL;
        t = SSLgetAnnotations(v_46);
        p_65 = t;
        t = z_47;
        t = fetch_1_0(x_1, t);
        s_65 = t;
        t = a_48;
        if(match_cons(t, sym__2))
          {
            u_65 = ATgetArgument(t, 0);
            v_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_4(y_1, u_65, v_65, t);
        t_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_65, t_65);
        l_11 = t;
        t = SSLsetAnnotations(l_11, p_65);
        LocalPopChoice(b_8);
      }
    else
      {
        t = a_8;
        {
          ATerm c_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,m_11 = NULL;
          t = SSLgetAnnotations(v_46);
          c_66 = t;
          t = a_48;
          if(match_cons(t, sym__2))
            {
              g_66 = ATgetArgument(t, 0);
              h_66 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_4(a_2, g_66, h_66, t);
          f_66 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_47, f_66);
          m_11 = t;
          t = SSLsetAnnotations(m_11, c_66);
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
ATerm apply_strategy_1_0 (ATerm t_121 (ATerm), ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
  h_48 = t;
  t = dtime_0_0(t);
  t = h_48;
  t = t_121(t);
  g_48 = t;
  t = dtime_0_0(t);
  d_48 = t;
  t = g_48;
  if(match_cons(t, sym__2))
    {
      e_48 = ATgetArgument(t, 0);
      f_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_48), (ATerm) ATmakeAppl(sym_Runtime_1, d_48)), f_48);
  return(t);
}
static ATerm v_48 (ATerm p_48, ATerm t)
{
  t = SSL_fclose(p_48);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  t_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_48 = ATgetArgument(t, 0);
      {
        ATerm k_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_48);
            LocalPopChoice(m_8);
          }
        else
          {
            t = k_8;
            t = v_48(t_48, t);
          }
      }
    }
  else
    {
      t = v_48(t_48, t);
    }
  return(t);
}
static ATerm e_4 (ATerm v_24, ATerm t)
{
  t = SSL_read_term_from_stream(v_24);
  return(t);
}
static ATerm f_4 (ATerm r_38, ATerm s_38, ATerm t)
{
  t = SSL_strcat(r_38, s_38);
  return(t);
}
static ATerm g_4 (ATerm a_40, ATerm b_40, ATerm t)
{
  ATerm w_48 = NULL;
  t = SSL_fopen(a_40, b_40);
  w_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_48);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_48 = NULL;
  t = SSL_stdin_stream();
  x_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_48);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_48 = NULL;
  t = SSL_stdout_stream();
  y_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_48);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_48 = NULL;
  t = SSL_stderr_stream();
  z_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_48);
  return(t);
}
static ATerm g_50 (ATerm f_49, ATerm t)
{
  ATerm g_49 = NULL;
  t = SSL_explode_term(f_49);
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_8 = ATgetArgument(t, 1);
        if(((ATgetType(p_8) == AT_LIST) && !(ATisEmpty(p_8))))
          {
            g_49 = ATgetFirst((ATermList) p_8);
            {
              ATerm q_8 = (ATerm) ATgetNext((ATermList) p_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_49;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_49;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_49;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_49;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_50 (ATerm j_49, ATerm k_49, ATerm l_49, ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL,r_49 = NULL,s_11 = NULL;
  t = SSLgetAnnotations(l_49);
  o_49 = t;
  t = j_49;
  if(match_cons(t, sym_Path_1))
    {
      r_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_49, k_49);
  s_11 = t;
  t = SSLsetAnnotations(s_11, o_49);
  if(match_cons(t, sym__2))
    {
      m_49 = ATgetArgument(t, 0);
      n_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(m_49, n_49, t);
  return(t);
}
static ATerm i_50 (ATerm t_49, ATerm u_49, ATerm v_49, ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,b_50 = NULL,t_11 = NULL;
  t = SSLgetAnnotations(v_49);
  y_49 = t;
  t = SSL_is_string(t_49);
  b_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_50, u_49);
  t_11 = t;
  t = SSLsetAnnotations(t_11, y_49);
  if(match_cons(t, sym__2))
    {
      w_49 = ATgetArgument(t, 0);
      x_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(w_49, x_49, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
  d_50 = t;
  if(match_cons(t, sym__2))
    {
      e_50 = ATgetArgument(t, 0);
      f_50 = ATgetArgument(t, 1);
      {
        ATerm t_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_50(d_50, t);
            LocalPopChoice(u_8);
          }
        else
          {
            t = t_8;
            {
              ATerm v_8 = t;
              int w_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_50(e_50, f_50, d_50, t);
                  LocalPopChoice(w_8);
                }
              else
                {
                  t = v_8;
                  t = i_50(e_50, f_50, d_50, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_50(d_50, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,r_50 = NULL;
  r_50 = t;
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_50, term_z_8);
        t = h_4(t);
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
        {
          ATerm x_66 = NULL,y_66 = NULL;
          t = term_a_9;
          y_66 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_9, r_50);
          t = f_4(y_66, r_50, t);
          x_66 = t;
          t = SSL_perror(x_66);
          _fail(t);
        }
      }
  }
  l_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_4(m_50, t);
  k_50 = t;
  t = l_50;
  t = fclose_0_0(t);
  t = k_50;
  return(t);
}
ATerm fetch_1_0 (ATerm p_103 (ATerm), ATerm t)
{
  static ATerm q_51 (ATerm t)
  {
    ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL;
    n_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_51 = ATgetFirst((ATermList) t);
        p_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_9 = t;
      int c_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_67 = NULL,g_67 = NULL,x_11 = NULL;
          t = SSLgetAnnotations(n_51);
          d_67 = t;
          t = o_51;
          t = p_103(t);
          g_67 = t;
          t = (ATerm) ATinsert(CheckATermList(p_51), g_67);
          x_11 = t;
          t = SSLsetAnnotations(x_11, d_67);
          LocalPopChoice(c_9);
        }
      else
        {
          t = b_9;
          {
            ATerm o_67 = NULL,r_67 = NULL,y_11 = NULL;
            t = SSLgetAnnotations(n_51);
            o_67 = t;
            t = p_51;
            t = q_51(t);
            r_67 = t;
            t = (ATerm) ATinsert(CheckATermList(r_67), o_51);
            y_11 = t;
            t = SSLsetAnnotations(y_11, o_67);
          }
        }
    }
    return(t);
  }
  t = q_51(t);
  return(t);
}
static ATerm m_4 (ATerm u_64, ATerm v_64, ATerm t)
{
  ATerm t_51 = NULL;
  t = lookup_table_0_1(u_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(v_64, t_51, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_120 (ATerm), ATerm t)
{
  ATerm w_51 = NULL;
  w_51 = t;
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
        t = term_f_9;
        z_51 = t;
        t = term_g_9;
        a_52 = t;
        t = term_h_9;
        t = m_4(z_51, a_52, t);
        y_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_51, term_i_9);
        t = geq_0_0(t);
        t = w_51;
        t = c_120(t);
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = w_51;
      }
  }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm d_52 = NULL;
  d_52 = t;
  if(match_string(t, "-k"))
    {
      t = d_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_52;
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
  e_52 = t;
  t = SSL_string_to_int(e_52);
  f_52 = t;
  t = term_j_9;
  g_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_9, f_52);
  t = p_4(g_52, f_52, t);
  t = e_52;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_2, i_2, j_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm i_52 = NULL;
  i_52 = t;
  if(match_string(t, "-S"))
    {
      t = i_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_52;
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL;
  t = term_g_9;
  j_52 = t;
  t = term_l_9;
  k_52 = t;
  t = term_m_9;
  t = p_4(j_52, k_52, t);
  t = term_n_9;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_o_9;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL;
  l_52 = t;
  t = SSL_string_to_int(l_52);
  m_52 = t;
  t = term_g_9;
  n_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_9, m_52);
  t = p_4(n_52, m_52, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_52);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_p_9;
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
  ATerm o_52 = NULL,p_52 = NULL;
  t = term_r_9;
  o_52 = t;
  t = term_k_6;
  p_52 = t;
  t = term_s_9;
  t = p_4(o_52, p_52, t);
  t = term_t_9;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_2, m_2, n_2, t);
      LocalPopChoice(y_9);
    }
  else
    {
      t = x_9;
      {
        ATerm z_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_2, s_2, t_2, t);
            LocalPopChoice(a_10);
          }
        else
          {
            t = z_9;
            t = Option_3_0(u_2, v_2, w_2, t);
          }
      }
    }
  return(t);
}
static ATerm p_4 (ATerm g_58, ATerm h_58, ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL;
  t = term_f_9;
  q_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_9, g_58, h_58);
  t = lookup_table_0_1(q_52, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(g_58, h_58, r_52, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_9, g_58, h_58);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
      t = term_k_6;
      t = h_0(t);
      x_52 = t;
      t = term_b_10;
      y_52 = t;
      t = term_c_10;
      z_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_10, term_c_10, x_52);
      t = n_4(y_52, z_52, x_52, t);
      _fail(t);
    }
  else
    {
      ATerm c_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_52 = ATgetFirst((ATermList) t);
          w_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_52;
      t = d_0(t);
      t = term_k_6;
      t = g_0(t);
      c_53 = t;
      t = (ATerm) ATinsert(CheckATermList(w_52), c_53);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm e_53 = NULL;
  e_53 = t;
  if(match_string(t, "-o"))
    {
      t = e_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_53;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL;
  f_53 = t;
  t = term_d_10;
  g_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_10, f_53);
  t = p_4(g_53, f_53, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_53);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_e_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_2, y_2, z_2, t);
  return(t);
}
static ATerm n_4 (ATerm b_63, ATerm c_63, ATerm a_63, ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL;
  i_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_63, c_63);
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_10 = ATgetArgument(t, 0);
            ATerm i_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_63, c_63);
        t = m_4(b_63, c_63, t);
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        t = (ATerm) ATempty;
      }
  }
  j_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_63, c_63, (ATerm) ATinsert(CheckATermList(j_53), a_63));
  t = lookup_table_0_1(b_63, t);
  m_53 = t;
  t = (ATerm) ATinsert(CheckATermList(j_53), a_63);
  k_53 = t;
  t = m_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(c_63, k_53, l_53, t);
  t = i_53;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
      t = term_k_6;
      t = p_0(t);
      x_53 = t;
      t = term_b_10;
      y_53 = t;
      t = term_c_10;
      z_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_10, term_c_10, x_53);
      t = n_4(y_53, z_53, x_53, t);
      _fail(t);
    }
  else
    {
      ATerm d_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_53 = ATgetFirst((ATermList) t);
          u_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_53 = ATgetFirst((ATermList) t);
          w_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_53;
      t = m_0(t);
      t = v_53;
      t = o_0(t);
      d_54 = t;
      t = (ATerm) ATinsert(CheckATermList(w_53), d_54);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm f_54 = NULL;
  f_54 = t;
  if(match_string(t, "-i"))
    {
      t = f_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_54;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL;
  g_54 = t;
  t = term_j_10;
  h_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, g_54);
  t = p_4(h_54, g_54, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_54);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, j_3, k_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_6;
  t = whoami_0_0(t);
  i_54 = t;
  t = term_s_6;
  k_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_10), i_54);
  l_54 = t;
  t = SSL_printnl(k_54, l_54);
  t = term_w_6;
  j_54 = t;
  t = SSL_exit(j_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL;
  t = term_f_9;
  m_54 = t;
  t = term_x_10;
  n_54 = t;
  t = term_y_10;
  t = m_4(m_54, n_54, t);
  return(t);
}
static ATerm i_4 (ATerm u_42, ATerm v_42, ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_42, v_42);
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      t = SSL_addr(u_42, v_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
  p_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_54;
      t = e_110(t);
    }
  else
    {
      ATerm u_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_54 = ATgetFirst((ATermList) t);
          r_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_54;
      t = foldr_2_0(e_110, f_110, t);
      u_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_54, u_54);
      t = f_110(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_l_9;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL;
  if(match_cons(t, sym__2))
    {
      k_68 = ATgetArgument(t, 0);
      l_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(k_68, l_68, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_54 = NULL,g_68 = NULL,h_68 = NULL;
  t = times_0_0(t);
  h_68 = t;
  t = SSL_explode_term(h_68);
  if(match_cons(t, sym__2))
    {
      ATerm b_11 = ATgetArgument(t, 0);
      g_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_68;
  t = foldr_2_0(l_3, n_3, t);
  x_54 = t;
  t = SSL_TicksToSeconds(x_54);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL;
  i_55 = t;
  if(match_cons(t, sym__2))
    {
      j_55 = ATgetArgument(t, 0);
      k_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_55;
        if((j_55 != t))
          {
            _fail(t);
          }
        t = i_55;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        t = (ATerm) ATmakeAppl(sym__2, j_55, k_55);
        {
          ATerm e_11 = t;
          int f_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_55, k_55);
              LocalPopChoice(f_11);
            }
          else
            {
              t = e_11;
              t = SSL_gtr(j_55, k_55);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_55, k_55);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_120 (ATerm), ATerm t)
{
  ATerm o_55 = NULL;
  o_55 = t;
  {
    ATerm g_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
        t = term_f_9;
        r_55 = t;
        t = term_g_9;
        s_55 = t;
        t = term_h_9;
        t = m_4(r_55, s_55, t);
        q_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_55, term_w_6);
        t = geq_0_0(t);
        t = o_55;
        t = b_120(t);
        LocalPopChoice(i_11);
      }
    else
      {
        t = g_11;
        t = o_55;
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,x_55 = NULL,y_55 = NULL;
  t = run_time_0_0(t);
  u_55 = t;
  t = term_k_6;
  t = whoami_0_0(t);
  v_55 = t;
  t = term_s_6;
  x_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_11), u_55), term_n_11), v_55);
  y_55 = t;
  t = SSL_printnl(x_55, y_55);
  t = (ATerm) ATmakeAppl(sym__2, term_s_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_11), u_55), term_n_11), v_55));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_9;
  z_55 = t;
  t = SSL_exit(z_55);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL;
  k_56 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_56;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_56 = ATgetArgument(t, 0);
          {
            ATerm x_68 = NULL,d_12 = NULL;
            t = SSLgetAnnotations(k_56);
            x_68 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_56);
            d_12 = t;
            t = SSLsetAnnotations(d_12, x_68);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_56;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_122 (ATerm), ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_56 = NULL,d_56 = NULL;
      t = term_f_9;
      c_56 = t;
      t = term_u_11;
      d_56 = t;
      t = term_w_11;
      t = m_4(c_56, d_56, t);
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      t = fetch_1_0(r_3, t);
    }
  t = r_122(t);
  return(t);
}
static ATerm q_4 (ATerm t_67, ATerm u_67, ATerm v_67, ATerm t)
{
  ATerm m_56 = NULL;
  t = SSL_hashtable_put(v_67, t_67, u_67);
  m_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_56);
  return(t);
}
static ATerm r_4 (ATerm w_67, ATerm x_67, ATerm t)
{
  t = SSL_hashtable_get(x_67, w_67);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_64, ATerm t)
{
  ATerm v_56 = NULL;
  t = table_hashtable_0_0(t);
  v_56 = t;
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_69 = NULL;
        t = v_56;
        if(match_cons(t, sym_Hashtable_1))
          {
            d_69 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_4(n_64, d_69, t);
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        {
          ATerm i_69 = NULL;
          t = n_64;
          t = table_create_0_0(t);
          t = v_56;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_4(n_64, i_69, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm b_68, ATerm c_68, ATerm t)
{
  ATerm y_56 = NULL;
  t = SSL_hashtable_create(b_68, c_68);
  y_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_56);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,d_57 = NULL,e_57 = NULL;
  z_56 = t;
  t = term_c_12;
  d_57 = t;
  t = term_e_12;
  e_57 = t;
  t = z_56;
  t = new_hashtable_0_2(d_57, e_57, t);
  a_57 = t;
  t = z_56;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(z_56, a_57, b_57, t);
  t = z_56;
  return(t);
}
static ATerm k_4 (ATerm y_67, ATerm z_67, ATerm t)
{
  ATerm f_57 = NULL;
  t = SSL_hashtable_remove(z_67, y_67);
  f_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_57);
  return(t);
}
static ATerm l_4 (ATerm d_68, ATerm t)
{
  ATerm g_57 = NULL;
  t = SSL_hashtable_destroy(d_68);
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_57);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm h_57 = NULL;
  t = SSL_table_hashtable();
  h_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_57);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL;
  i_57 = t;
  t = table_hashtable_0_0(t);
  j_57 = t;
  t = lookup_table_0_1(i_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_4(l_57, t);
  t = j_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_4(i_57, k_57, t);
  t = i_57;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_57 = ATgetFirst((ATermList) t);
      o_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_57 = NULL,t_57 = NULL;
        static ATerm s_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_57)), not_null(t_57));
          return(t);
        }
        t = o_57;
        t = l_0(t);
        if(((s_57 != NULL) && (s_57 != t)))
          _fail(t);
        else
          s_57 = t;
        t = n_57;
        t = j_0(t);
        if(((t_57 != NULL) && (t_57 != t)))
          _fail(t);
        else
          t_57 = t;
        t = o_57;
        t = reverse_acc_2_0(j_0, s_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_6;
      t = l_0(t);
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,f_12 = NULL;
  b_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_58);
  z_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_58);
  f_12 = t;
  t = SSLsetAnnotations(f_12, z_57);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm d_58 = NULL;
  d_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_58), term_g_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL;
  ATerm i_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_57 = NULL,y_57 = NULL;
      t = term_f_9;
      x_57 = t;
      t = term_x_10;
      y_57 = t;
      t = term_y_10;
      t = m_4(x_57, y_57, t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = i_12;
      t = fetch_1_0(u_3, t);
    }
  t = term_m_12;
  t = echo_0_0(t);
  t = term_b_10;
  v_57 = t;
  t = term_c_10;
  w_57 = t;
  t = term_s_12;
  t = m_4(v_57, w_57, t);
  t = reverse_acc_2_0(_id, v_3, t);
  t = map_1_0(z_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_58 = NULL,i_58 = NULL,j_58 = NULL;
  f_58 = t;
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_12 = ATgetFirst((ATermList) t);
                ATerm w_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_58;
          }
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        t = (ATerm) ATinsert(ATempty, f_58);
      }
  }
  i_58 = t;
  t = term_x_7;
  j_58 = t;
  t = SSL_printnl(j_58, i_58);
  t = f_58;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL;
  t = term_f_9;
  n_58 = t;
  t = term_x_10;
  o_58 = t;
  t = term_y_10;
  t = m_4(n_58, o_58, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  t = term_x_12;
  p_58 = t;
  t = term_k_6;
  q_58 = t;
  t = term_y_12;
  t = p_4(p_58, q_58, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_z_12;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL;
  t = term_x_12;
  t_58 = t;
  t = term_k_6;
  u_58 = t;
  t = term_y_12;
  t = p_4(t_58, u_58, t);
  t = term_a_13;
  r_58 = t;
  t = term_k_6;
  s_58 = t;
  t = term_b_13;
  t = p_4(r_58, s_58, t);
  t = term_c_13;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_e_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_4, s_4, t_4, t);
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      t = Option_3_0(u_4, v_4, w_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,h_12 = NULL;
  a_59 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_58 = ATgetFirst((ATermList) t);
      x_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_59);
  v_58 = t;
  t = w_58;
  t = y_80(t);
  y_58 = t;
  t = x_58;
  t = z_80(t);
  z_58 = t;
  t = (ATerm) ATinsert(CheckATermList(z_58), y_58);
  h_12 = t;
  t = SSLsetAnnotations(h_12, v_58);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_124 (ATerm), ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,k_59 = NULL,l_59 = NULL,j_12 = NULL;
  f_59 = t;
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_13;
        t = u_124(t);
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
      }
  }
  t = f_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_59 = ATgetFirst((ATermList) t);
      i_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_59);
  g_59 = t;
  t = term_x_10;
  l_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, h_59);
  t = p_4(l_59, h_59, t);
  t = i_59;
  {
    static ATerm z_59 (ATerm t)
    {
      ATerm l_13 = t;
      int m_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_59 = NULL;
              o_59 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_59;
              LocalPopChoice(o_13);
            }
          else
            {
              t = n_13;
              t = u_124(t);
              t = Cons_2_0(_id, z_59, t);
            }
          LocalPopChoice(m_13);
        }
      else
        {
          t = l_13;
          {
            ATerm r_59 = NULL,s_59 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_59 = ATgetFirst((ATermList) t);
                s_59 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_59), (ATerm) ATmakeAppl(sym_Undefined_1, r_59));
          }
        }
      return(t);
    }
    t = z_59(t);
  }
  k_59 = t;
  t = (ATerm) ATinsert(CheckATermList(k_59), (ATerm) ATmakeAppl(sym_Program_1, h_59));
  j_12 = t;
  t = SSLsetAnnotations(j_12, g_59);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm m_60 = NULL;
  m_60 = t;
  if(match_string(t, "--help"))
    {
      t = m_60;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_60;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_60;
        }
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL;
  t = term_u_11;
  n_60 = t;
  t = term_k_6;
  o_60 = t;
  t = term_p_13;
  t = p_4(n_60, o_60, t);
  t = term_q_13;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_124 (ATerm), ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL;
  g_60 = t;
  t = term_b_10;
  h_60 = t;
  t = term_s_13;
  t = lookup_table_0_1(h_60, t);
  l_60 = t;
  t = term_c_10;
  i_60 = t;
  t = (ATerm) ATempty;
  j_60 = t;
  t = l_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(i_60, j_60, k_60, t);
  t = g_60;
  {
    static ATerm x_4 (ATerm t)
    {
      ATerm u_13 = t;
      int v_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_124(t);
          LocalPopChoice(v_13);
        }
      else
        {
          t = u_13;
          {
            ATerm w_13 = t;
            int x_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_4, z_4, a_5, t);
                LocalPopChoice(x_13);
              }
            else
              {
                t = w_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_4, t);
  }
  {
    ATerm y_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_60 = NULL;
        z_60 = t;
        {
          ATerm c_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_69 = NULL;
              t = z_60;
              {
                ATerm g_14 = t;
                int h_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_69 = NULL,o_69 = NULL;
                    t = term_f_9;
                    n_69 = t;
                    t = term_u_11;
                    o_69 = t;
                    t = term_w_11;
                    t = m_4(n_69, o_69, t);
                    LocalPopChoice(h_14);
                  }
                else
                  {
                    t = g_14;
                    t = fetch_1_0(b_5, t);
                  }
              }
              t = z_60;
              t = default_system_usage_0_0(t);
              t = term_l_9;
              m_69 = t;
              t = SSL_exit(m_69);
              LocalPopChoice(d_14);
            }
          else
            {
              t = c_14;
              {
                ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL;
                t = term_f_9;
                t_69 = t;
                t = term_x_12;
                u_69 = t;
                t = term_i_14;
                t = m_4(t_69, u_69, t);
                t = z_60;
                t = default_system_about_0_0(t);
                t = term_l_9;
                s_69 = t;
                t = SSL_exit(s_69);
              }
            }
        }
        LocalPopChoice(a_14);
      }
    else
      {
        t = y_13;
        {
          ATerm j_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL;
              static ATerm c_5 (ATerm t)
              {
                ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,l_12 = NULL;
                f_61 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_61 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_61);
                d_61 = t;
                t = e_61;
                if(((e_60 != NULL) && (e_60 != t)))
                  _fail(t);
                else
                  e_60 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_61);
                l_12 = t;
                t = SSLsetAnnotations(l_12, d_61);
                return(t);
              }
              t = fetch_1_0(c_5, t);
              t = term_s_6;
              b_61 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_60)), term_l_14);
              c_61 = t;
              t = SSL_printnl(b_61, c_61);
              t = (ATerm) ATmakeAppl(sym__2, term_s_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_60)), term_l_14));
              t = default_system_usage_0_0(t);
              t = term_w_6;
              a_61 = t;
              t = SSL_exit(a_61);
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
            }
        }
      }
  }
  f_60 = t;
  t = term_b_10;
  t = table_destroy_0_0(t);
  t = f_60;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_122 (ATerm), ATerm u_122 (ATerm), ATerm v_122 (ATerm), ATerm w_122 (ATerm), ATerm t)
{
  ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL;
  t = parse_options_1_0(t_122, t);
  k_61 = t;
  t = term_n_14;
  t = table_create_0_0(t);
  t = term_n_14;
  l_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_14, term_o_14, k_61);
  t = lookup_table_0_1(l_61, t);
  o_61 = t;
  t = term_o_14;
  m_61 = t;
  t = o_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(m_61, k_61, n_61, t);
  t = k_61;
  t = v_122(t);
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_122, t);
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
              t = w_122(t);
              t = report_success_0_0(t);
              LocalPopChoice(s_14);
            }
          else
            {
              t = r_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = if_verbose2_1_0(p_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm p_61 = NULL,q_61 = NULL;
  t = term_t_14;
  p_61 = t;
  t = term_k_6;
  q_61 = t;
  t = term_u_14;
  t = p_4(p_61, q_61, t);
  t = term_v_14;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_w_14;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL;
  r_61 = t;
  t = term_f_9;
  v_61 = t;
  t = term_x_10;
  w_61 = t;
  t = term_y_10;
  t = m_4(v_61, w_61, t);
  s_61 = t;
  t = term_s_6;
  t_61 = t;
  t = (ATerm) ATinsert(ATempty, s_61);
  u_61 = t;
  t = SSL_printnl(t_61, u_61);
  t = r_61;
  return(t);
}
ATerm iowrap_3_0 (ATerm c_122 (ATerm), ATerm d_122 (ATerm), ATerm e_122 (ATerm), ATerm t)
{
  static ATerm e_5 (ATerm t)
  {
    ATerm x_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_122(t);
        LocalPopChoice(z_14);
      }
    else
      {
        t = x_14;
        {
          ATerm b_15 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(c_15);
            }
          else
            {
              t = b_15;
              {
                ATerm d_15 = t;
                int e_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(e_15);
                  }
                else
                  {
                    t = d_15;
                    {
                      ATerm f_15 = t;
                      int h_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(j_5, m_5, n_5, t);
                          LocalPopChoice(h_15);
                        }
                      else
                        {
                          t = f_15;
                          {
                            ATerm j_15 = t;
                            int k_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(k_15);
                              }
                            else
                              {
                                t = j_15;
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
  static ATerm h_5 (ATerm t)
  {
    ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
    y_61 = t;
    {
      ATerm l_15 = t;
      int m_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm q_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_61 != NULL) && (x_61 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_61 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_5, t);
          LocalPopChoice(m_15);
        }
      else
        {
          t = l_15;
          t = term_n_15;
          x_61 = t;
        }
    }
    t = not_null(x_61);
    t = ReadFromFile_0_0(t);
    z_61 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_61, z_61);
    t = apply_strategy_1_0(c_122, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(e_5, e_122, f_5, h_5, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,r_12 = NULL;
  g_62 = t;
  if(match_cons(t, sym__2))
    {
      d_62 = ATgetArgument(t, 0);
      e_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_62);
  c_62 = t;
  t = e_62;
  {
    ATerm o_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_63 = NULL,x_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,q_12 = NULL,p_12 = NULL,o_12 = NULL,n_12 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            g_63 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_62);
        x_69 = t;
        t = g_63;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_70 = ATgetFirst((ATermList) t);
            b_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_63);
        z_69 = t;
        t = b_70;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_70 = ATgetFirst((ATermList) t);
            f_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_70);
        d_70 = t;
        t = e_70;
        if(match_cons(t, sym_Strategies_1))
          {
            i_70 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_70);
        h_70 = t;
        t = i_70;
        t = map_1_0(strategy_definition_0_0, t);
        j_70 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, j_70);
        n_12 = t;
        t = SSLsetAnnotations(n_12, h_70);
        k_70 = t;
        t = f_70;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(f_70), k_70);
        o_12 = t;
        t = SSLsetAnnotations(o_12, d_70);
        g_70 = t;
        t = (ATerm) ATinsert(CheckATermList(g_70), a_70);
        p_12 = t;
        t = SSLsetAnnotations(p_12, z_69);
        c_70 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, c_70);
        q_12 = t;
        t = SSLsetAnnotations(q_12, x_69);
        LocalPopChoice(q_15);
      }
    else
      {
        t = o_15;
        t = debug_1_0(r_6, t);
      }
  }
  f_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_62, f_62);
  r_12 = t;
  t = SSLsetAnnotations(r_12, c_62);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_r_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(u_5, _fail, default_usage_0_0, t);
  return(t);
}
