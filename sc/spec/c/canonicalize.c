#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_As_2;
Symbol sym_RDefT_4;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_Bagof_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
Symbol sym_Some_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_Id_1;
Symbol sym_FunType_2;
Symbol sym_Undefined_0;
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_e_29;
ATerm term_t_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_k_23;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_v_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_s_14;
ATerm term_j_14;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_f_11;
void init_constant_terms (void)
{
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Op_2, term_k_13, (ATerm) ATempty);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_ConstType_1, term_l_13);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_CallT_3, term_o_18, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_CallT_3, term_r_18, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_20);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_b_23, term_q_24);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__2, term_x_24, term_d_22);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__2, term_j_25, term_d_22);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_b_27, term_c_27);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym__2, term_w_27, term_d_22);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_z_27, term_d_22);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym__2, term_n_26, term_d_22);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__3, term_b_27, term_c_27, (ATerm) ATempty);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm AsMatchWld_0_0 (ATerm);
ATerm MatchSimplify_0_0 (ATerm);
ATerm MatchBuildIdem_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm Zip3_0_0 (ATerm);
ATerm Zip2_0_0 (ATerm);
ATerm Zip1_0_0 (ATerm);
ATerm zip_1_0 (ATerm e_130 (ATerm), ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BMF_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm i_123 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm LetNoDefs_0_0 (ATerm);
ATerm EmptyScope_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm MkConstType_0_0 (ATerm);
ATerm MkFunType_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm F16_0_0 (ATerm);
ATerm F15_0_0 (ATerm);
ATerm F14_0_0 (ATerm);
ATerm F13_0_0 (ATerm);
ATerm F12_0_0 (ATerm);
ATerm F11_0_0 (ATerm);
ATerm F10_0_0 (ATerm);
ATerm F9_0_0 (ATerm);
ATerm F8_0_0 (ATerm);
ATerm F7_0_0 (ATerm);
ATerm F6_0_0 (ATerm);
ATerm F5_0_0 (ATerm);
ATerm F3_0_0 (ATerm);
ATerm F2_0_0 (ATerm);
ATerm F1_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm I16_0_0 (ATerm);
ATerm I12_0_0 (ATerm);
ATerm I10_0_0 (ATerm);
ATerm I9_0_0 (ATerm);
ATerm I8_0_0 (ATerm);
ATerm I7_0_0 (ATerm);
ATerm I4_0_0 (ATerm);
ATerm I3_0_0 (ATerm);
ATerm I2_0_0 (ATerm);
ATerm I1_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm downup_1_0 (ATerm g_122 (ATerm), ATerm);
ATerm simplify0_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm CreateDef2_0_0 (ATerm);
ATerm SVar_1_0 (ATerm w_103 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm);
ATerm CreateDef1_0_0 (ATerm);
ATerm CallFailFun_0_0 (ATerm);
ATerm CallIdFun_0_0 (ATerm);
ATerm UnZip2_0_0 (ATerm);
ATerm UnZip3_0_0 (ATerm);
ATerm UnZip1_0_0 (ATerm);
ATerm genzip_4_0 (ATerm z_129 (ATerm), ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm c_130 (ATerm), ATerm);
ATerm unzip_1_0 (ATerm j_130 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm w_123 (ATerm), ATerm);
ATerm Canon_0_0 (ATerm);
ATerm repeat_1_0 (ATerm g_121 (ATerm), ATerm);
ATerm downup2_2_0 (ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm);
ATerm _2_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm m_128 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm g_141 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm c_140 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_143 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm o_139 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm m_135 (ATerm), ATerm n_135 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm x_133 (ATerm), ATerm y_133 (ATerm), ATerm);
ATerm crush_2_0 (ATerm q_137 (ATerm), ATerm r_137 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_141 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm c_144 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm d_146 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_127 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm c_146 (ATerm), ATerm);
ATerm Program_1_0 (ATerm x_107 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm y_107 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_128 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm c_145 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm k_120 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm h_146 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_146 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm e_146 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_144 (ATerm), ATerm f_144 (ATerm), ATerm g_144 (ATerm), ATerm h_144 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm t_143 (ATerm), ATerm u_143 (ATerm), ATerm v_143 (ATerm), ATerm w_143 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm n_143 (ATerm), ATerm o_143 (ATerm), ATerm p_143 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm l_143 (ATerm), ATerm m_143 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm i_143 (ATerm), ATerm);
ATerm canonicalize_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm AsMatchWld_0_0 (ATerm t)
{
  ATerm r_96 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if(!(match_cons(y_9, sym_Wld_0)))
        _fail(t);
      if(((r_96 != NULL) && (r_96 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(r_96);
  return(t);
}
ATerm MatchSimplify_0_0 (ATerm t)
{
  t = AsMatchWld_0_0(t);
  return(t);
}
ATerm MatchBuildIdem_0_0 (ATerm t)
{
  ATerm a_98 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_9 = ATgetArgument(t, 0);
      if(match_cons(z_9, sym_Match_1))
        {
          if(((a_98 != NULL) && (a_98 != ATgetArgument(z_9, 0))))
            _fail(ATgetArgument(z_9, 0));
          else
            a_98 = ATgetArgument(z_9, 0);
        }
      else
        _fail(t);
      {
        ATerm a_10 = ATgetArgument(t, 1);
        if(match_cons(a_10, sym_Build_1))
          {
            if(((a_98 != NULL) && (a_98 != ATgetArgument(a_10, 0))))
              _fail(ATgetArgument(a_10, 0));
            else
              a_98 = ATgetArgument(a_10, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Match_1, not_null(a_98));
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm z_97 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_10 = ATgetArgument(t, 0);
      if(match_cons(b_10, sym_Build_1))
        {
          if(((z_97 != NULL) && (z_97 != ATgetArgument(b_10, 0))))
            _fail(ATgetArgument(b_10, 0));
          else
            z_97 = ATgetArgument(b_10, 0);
        }
      else
        _fail(t);
      {
        ATerm c_10 = ATgetArgument(t, 1);
        if(match_cons(c_10, sym_Match_1))
          {
            if(((z_97 != NULL) && (z_97 != ATgetArgument(c_10, 0))))
              _fail(ATgetArgument(c_10, 0));
            else
              z_97 = ATgetArgument(c_10, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(z_97));
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm y_97 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_10 = ATgetArgument(t, 0);
      if(match_cons(d_10, sym_Match_1))
        {
          if(((y_97 != NULL) && (y_97 != ATgetArgument(d_10, 0))))
            _fail(ATgetArgument(d_10, 0));
          else
            y_97 = ATgetArgument(d_10, 0);
        }
      else
        _fail(t);
      {
        ATerm e_10 = ATgetArgument(t, 1);
        if(match_cons(e_10, sym_Match_1))
          {
            if(((y_97 != NULL) && (y_97 != ATgetArgument(e_10, 0))))
              _fail(ATgetArgument(e_10, 0));
            else
              y_97 = ATgetArgument(e_10, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Match_1, not_null(y_97));
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_97 = NULL,w_97 = NULL,x_97 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm h_10 = ATgetArgument(t, 0);
          if(match_cons(h_10, sym_Build_1))
            {
              if(((v_97 != NULL) && (v_97 != ATgetArgument(h_10, 0))))
                _fail(ATgetArgument(h_10, 0));
              else
                v_97 = ATgetArgument(h_10, 0);
            }
          else
            _fail(t);
          {
            ATerm i_10 = ATgetArgument(t, 1);
            if(match_cons(i_10, sym_Where_1))
              {
                ATerm j_10 = ATgetArgument(i_10, 0);
                if(match_cons(j_10, sym_Prim_2))
                  {
                    if(((w_97 != NULL) && (w_97 != ATgetArgument(j_10, 0))))
                      _fail(ATgetArgument(j_10, 0));
                    else
                      w_97 = ATgetArgument(j_10, 0);
                    if(((x_97 != NULL) && (x_97 != ATgetArgument(j_10, 1))))
                      _fail(ATgetArgument(j_10, 1));
                    else
                      x_97 = ATgetArgument(j_10, 1);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(w_97), not_null(x_97));
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_97 = NULL,t_97 = NULL,u_97 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm m_10 = ATgetArgument(t, 0);
                if(match_cons(m_10, sym_Build_1))
                  {
                    if(((s_97 != NULL) && (s_97 != ATgetArgument(m_10, 0))))
                      _fail(ATgetArgument(m_10, 0));
                    else
                      s_97 = ATgetArgument(m_10, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm n_10 = ATgetArgument(t, 1);
                  if(match_cons(n_10, sym_Prim_2))
                    {
                      if(((t_97 != NULL) && (t_97 != ATgetArgument(n_10, 0))))
                        _fail(ATgetArgument(n_10, 0));
                      else
                        t_97 = ATgetArgument(n_10, 0);
                      if(((u_97 != NULL) && (u_97 != ATgetArgument(n_10, 1))))
                        _fail(ATgetArgument(n_10, 1));
                      else
                        u_97 = ATgetArgument(n_10, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(t_97), not_null(u_97));
            ;
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
              ATerm o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL;
              if(match_cons(t, sym__2))
                {
                  ATerm o_10 = ATgetArgument(t, 0);
                  if(match_cons(o_10, sym_Build_1))
                    {
                      if(((o_97 != NULL) && (o_97 != ATgetArgument(o_10, 0))))
                        _fail(ATgetArgument(o_10, 0));
                      else
                        o_97 = ATgetArgument(o_10, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm p_10 = ATgetArgument(t, 1);
                    if(match_cons(p_10, sym_PrimT_3))
                      {
                        if(((p_97 != NULL) && (p_97 != ATgetArgument(p_10, 0))))
                          _fail(ATgetArgument(p_10, 0));
                        else
                          p_97 = ATgetArgument(p_10, 0);
                        if(((q_97 != NULL) && (q_97 != ATgetArgument(p_10, 1))))
                          _fail(ATgetArgument(p_10, 1));
                        else
                          q_97 = ATgetArgument(p_10, 1);
                        if(((r_97 != NULL) && (r_97 != ATgetArgument(p_10, 2))))
                          _fail(ATgetArgument(p_10, 2));
                        else
                          r_97 = ATgetArgument(p_10, 2);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(p_97), not_null(q_97), not_null(r_97));
            }
          }
      }
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm m_97 = NULL,n_97 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_10 = ATgetArgument(t, 0);
      if(match_cons(q_10, sym_Build_1))
        {
          if(((m_97 != NULL) && (m_97 != ATgetArgument(q_10, 0))))
            _fail(ATgetArgument(q_10, 0));
          else
            m_97 = ATgetArgument(q_10, 0);
        }
      else
        _fail(t);
      {
        ATerm r_10 = ATgetArgument(t, 1);
        if(match_cons(r_10, sym_Build_1))
          {
            if(((n_97 != NULL) && (n_97 != ATgetArgument(r_10, 0))))
              _fail(ATgetArgument(r_10, 0));
            else
              n_97 = ATgetArgument(r_10, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(n_97));
  return(t);
}
ATerm Zip3_0_0 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_50 != NULL) && (c_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_50 = ATgetArgument(t, 0);
      if(((d_50 != NULL) && (d_50 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(d_50)), not_null(c_50));
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_10 = ATgetArgument(t, 0);
      if(((ATgetType(s_10) == AT_LIST) && !(ATisEmpty(s_10))))
        {
          if(((s_49 != NULL) && (s_49 != ATgetFirst((ATermList) s_10))))
            _fail(ATgetFirst((ATermList) s_10));
          else
            s_49 = ATgetFirst((ATermList) s_10);
          if(((u_49 != NULL) && (u_49 != (ATerm) ATgetNext((ATermList) s_10))))
            _fail((ATerm) ATgetNext((ATermList) s_10));
          else
            u_49 = (ATerm) ATgetNext((ATermList) s_10);
        }
      else
        _fail(t);
      {
        ATerm t_10 = ATgetArgument(t, 1);
        if(((ATgetType(t_10) == AT_LIST) && !(ATisEmpty(t_10))))
          {
            if(((t_49 != NULL) && (t_49 != ATgetFirst((ATermList) t_10))))
              _fail(ATgetFirst((ATermList) t_10));
            else
              t_49 = ATgetFirst((ATermList) t_10);
            if(((v_49 != NULL) && (v_49 != (ATerm) ATgetNext((ATermList) t_10))))
              _fail((ATerm) ATgetNext((ATermList) t_10));
            else
              v_49 = (ATerm) ATgetNext((ATermList) t_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(s_49), not_null(t_49)), (ATerm) ATmakeAppl(sym__2, not_null(u_49), not_null(v_49)));
  return(t);
}
ATerm Zip1_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_10 = ATgetArgument(t, 0);
      if(((ATgetType(u_10) != AT_LIST) || !(ATisEmpty(u_10))))
        _fail(t);
      {
        ATerm v_10 = ATgetArgument(t, 1);
        if(((ATgetType(v_10) != AT_LIST) || !(ATisEmpty(v_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm zip_1_0 (ATerm e_130 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, e_130, t);
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm h_97 = NULL,i_97 = NULL,j_97 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_10 = ATgetArgument(t, 0);
      if(match_cons(w_10, sym_Build_1))
        {
          ATerm y_10 = ATgetArgument(w_10, 0);
          if(match_cons(y_10, sym_Op_2))
            {
              if(((i_97 != NULL) && (i_97 != ATgetArgument(y_10, 0))))
                _fail(ATgetArgument(y_10, 0));
              else
                i_97 = ATgetArgument(y_10, 0);
              if(((j_97 != NULL) && (j_97 != ATgetArgument(y_10, 1))))
                _fail(ATgetArgument(y_10, 1));
              else
                j_97 = ATgetArgument(y_10, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm x_10 = ATgetArgument(t, 1);
        if(match_cons(x_10, sym_Match_1))
          {
            ATerm z_10 = ATgetArgument(x_10, 0);
            if(match_cons(z_10, sym_Op_2))
              {
                if(((i_97 != NULL) && (i_97 != ATgetArgument(z_10, 0))))
                  _fail(ATgetArgument(z_10, 0));
                else
                  i_97 = ATgetArgument(z_10, 0);
                if(((h_97 != NULL) && (h_97 != ATgetArgument(z_10, 1))))
                  _fail(ATgetArgument(z_10, 1));
                else
                  h_97 = ATgetArgument(z_10, 1);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm y_726 = NULL;
    ATerm b_0 = NULL;
    if(((b_0 != NULL) && (b_0 != t)))
      _fail(t);
    else
      b_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_97), not_null(h_97));
    {
      ATerm b_6 (ATerm t)
      {
        ATerm k_97 = NULL,l_97 = NULL;
        if(match_cons(t, sym__2))
          {
            if(((k_97 != NULL) && (k_97 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              k_97 = ATgetArgument(t, 0);
            if(((l_97 != NULL) && (l_97 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              l_97 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_97)), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_97)));
        return(t);
      }
      t = zip_1_0(b_6, t);
      if(((y_726 != NULL) && (y_726 != t)))
        _fail(t);
      else
        y_726 = t;
      t = not_null(b_0);
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(y_726)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(i_97), not_null(j_97))));
  }
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm m_45 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_45 != NULL) && (m_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_45 = ATgetArgument(t, 0);
      if(((m_45 != NULL) && (m_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_11 = ATgetArgument(t, 0);
      if(match_cons(a_11, sym_Build_1))
        {
          ATerm c_11 = ATgetArgument(a_11, 0);
          if(match_cons(c_11, sym_Op_2))
            {
              if(((f_97 != NULL) && (f_97 != ATgetArgument(c_11, 0))))
                _fail(ATgetArgument(c_11, 0));
              else
                f_97 = ATgetArgument(c_11, 0);
              if(((d_97 != NULL) && (d_97 != ATgetArgument(c_11, 1))))
                _fail(ATgetArgument(c_11, 1));
              else
                d_97 = ATgetArgument(c_11, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm b_11 = ATgetArgument(t, 1);
        if(match_cons(b_11, sym_Match_1))
          {
            ATerm d_11 = ATgetArgument(b_11, 0);
            if(match_cons(d_11, sym_Op_2))
              {
                if(((g_97 != NULL) && (g_97 != ATgetArgument(d_11, 0))))
                  _fail(ATgetArgument(d_11, 0));
                else
                  g_97 = ATgetArgument(d_11, 0);
                if(((e_97 != NULL) && (e_97 != ATgetArgument(d_11, 1))))
                  _fail(ATgetArgument(d_11, 1));
                else
                  e_97 = ATgetArgument(d_11, 1);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm f_0 = NULL;
    if(((f_0 != NULL) && (f_0 != t)))
      _fail(t);
    else
      f_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_97), not_null(g_97));
    {
      ATerm e_11 = t;
      if((PushChoice() == 0))
        {
          t = eq_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_11;
        }
      t = not_null(f_0);
    }
    t = term_f_11;
  }
  return(t);
}
ATerm BMF_0_0 (ATerm t)
{
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0_0(t);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0_0(t);
            ;
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
                  t = BuildBuild_0_0(t);
                  ;
                  LocalPopChoice(l_11);
                }
              else
                {
                  t = k_11;
                  {
                    ATerm m_11 = t;
                    int n_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0_0(t);
                        ;
                        LocalPopChoice(n_11);
                      }
                    else
                      {
                        t = m_11;
                        {
                          ATerm o_11 = t;
                          int p_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchIdem_0_0(t);
                              ;
                              LocalPopChoice(p_11);
                            }
                          else
                            {
                              t = o_11;
                              {
                                ATerm q_11 = t;
                                int r_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatchIdem_0_0(t);
                                    ;
                                    LocalPopChoice(r_11);
                                  }
                                else
                                  {
                                    t = q_11;
                                    t = MatchBuildIdem_0_0(t);
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
  return(t);
}
ATerm BuildMatch_0_0 (ATerm t)
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL;
      if(match_cons(t, sym_Seq_2))
        {
          if(((a_97 != NULL) && (a_97 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_97 = ATgetArgument(t, 0);
          {
            ATerm u_11 = ATgetArgument(t, 1);
            if(match_cons(u_11, sym_Seq_2))
              {
                if(((b_97 != NULL) && (b_97 != ATgetArgument(u_11, 0))))
                  _fail(ATgetArgument(u_11, 0));
                else
                  b_97 = ATgetArgument(u_11, 0);
                if(((z_96 != NULL) && (z_96 != ATgetArgument(u_11, 1))))
                  _fail(ATgetArgument(u_11, 1));
                else
                  z_96 = ATgetArgument(u_11, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm h_0 = NULL;
        if(((h_0 != NULL) && (h_0 != t)))
          _fail(t);
        else
          h_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_97), not_null(b_97));
        t = BMF_0_0(t);
        if(((c_97 != NULL) && (c_97 != t)))
          _fail(t);
        else
          c_97 = t;
        t = not_null(h_0);
        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_97), not_null(z_96));
      }
      ;
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      {
        ATerm w_96 = NULL,x_96 = NULL,y_96 = NULL;
        if(match_cons(t, sym_Seq_2))
          {
            if(((w_96 != NULL) && (w_96 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              w_96 = ATgetArgument(t, 0);
            if(((x_96 != NULL) && (x_96 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              x_96 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm j_0 = NULL;
          if(((j_0 != NULL) && (j_0 != t)))
            _fail(t);
          else
            j_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_96), not_null(x_96));
          t = BMF_0_0(t);
          if(((y_96 != NULL) && (y_96 != t)))
            _fail(t);
          else
            y_96 = t;
          t = not_null(j_0);
          t = not_null(y_96);
        }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm i_123 (ATerm), ATerm t)
{
  ATerm j_123 (ATerm t)
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_123(t);
        ;
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        t = SRTS_one(j_123, t);
      }
    return(t);
  }
  t = j_123(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm q_94 = NULL,r_94 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm x_11 = ATgetArgument(t, 0);
      if(((ATgetType(x_11) == AT_LIST) && !(ATisEmpty(x_11))))
        {
          ATerm z_11 = ATgetFirst((ATermList) x_11);
          if(match_cons(z_11, sym_SDefT_4))
            {
              if(((r_94 != NULL) && (r_94 != ATgetArgument(z_11, 0))))
                _fail(ATgetArgument(z_11, 0));
              else
                r_94 = ATgetArgument(z_11, 0);
              {
                ATerm b_12 = ATgetArgument(z_11, 1);
                if(((ATgetType(b_12) != AT_LIST) || !(ATisEmpty(b_12))))
                  _fail(t);
              }
              {
                ATerm c_12 = ATgetArgument(z_11, 2);
                if(((ATgetType(c_12) != AT_LIST) || !(ATisEmpty(c_12))))
                  _fail(t);
              }
              if(((q_94 != NULL) && (q_94 != ATgetArgument(z_11, 3))))
                _fail(ATgetArgument(z_11, 3));
              else
                q_94 = ATgetArgument(z_11, 3);
            }
          else
            _fail(t);
          {
            ATerm a_12 = (ATerm) ATgetNext((ATermList) x_11);
            if(((ATgetType(a_12) != AT_LIST) || !(ATisEmpty(a_12))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm y_11 = ATgetArgument(t, 1);
        if(match_cons(y_11, sym_CallT_3))
          {
            ATerm d_12 = ATgetArgument(y_11, 0);
            if(match_cons(d_12, sym_SVar_1))
              {
                if(((r_94 != NULL) && (r_94 != ATgetArgument(d_12, 0))))
                  _fail(ATgetArgument(d_12, 0));
                else
                  r_94 = ATgetArgument(d_12, 0);
              }
            else
              _fail(t);
            {
              ATerm e_12 = ATgetArgument(y_11, 1);
              if(((ATgetType(e_12) != AT_LIST) || !(ATisEmpty(e_12))))
                _fail(t);
            }
            {
              ATerm f_12 = ATgetArgument(y_11, 2);
              if(((ATgetType(f_12) != AT_LIST) || !(ATisEmpty(f_12))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm m_0 = NULL;
    if(((m_0 != NULL) && (m_0 != t)))
      _fail(t);
    else
      m_0 = t;
    t = not_null(q_94);
    {
      ATerm g_12 = t;
      if((PushChoice() == 0))
        {
          ATerm c_6 (ATerm t)
          {
            if(match_cons(t, sym_CallT_3))
              {
                ATerm h_12 = ATgetArgument(t, 0);
                if(match_cons(h_12, sym_SVar_1))
                  {
                    if(((r_94 != NULL) && (r_94 != ATgetArgument(h_12, 0))))
                      _fail(ATgetArgument(h_12, 0));
                    else
                      r_94 = ATgetArgument(h_12, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm i_12 = ATgetArgument(t, 1);
                  if(((ATgetType(i_12) != AT_LIST) || !(ATisEmpty(i_12))))
                    _fail(t);
                }
                {
                  ATerm j_12 = ATgetArgument(t, 2);
                  if(((ATgetType(j_12) != AT_LIST) || !(ATisEmpty(j_12))))
                    _fail(t);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(c_6, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_12;
        }
      t = not_null(m_0);
    }
    t = not_null(q_94);
  }
  return(t);
}
ATerm LetNoDefs_0_0 (ATerm t)
{
  ATerm p_94 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm k_12 = ATgetArgument(t, 0);
      if(((ATgetType(k_12) != AT_LIST) || !(ATisEmpty(k_12))))
        _fail(t);
      if(((p_94 != NULL) && (p_94 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(p_94);
  return(t);
}
ATerm EmptyScope_0_0 (ATerm t)
{
  ATerm r_90 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      ATerm l_12 = ATgetArgument(t, 0);
      if(((ATgetType(l_12) != AT_LIST) || !(ATisEmpty(l_12))))
        _fail(t);
      if(((r_90 != NULL) && (r_90 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(r_90);
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL;
      if(match_cons(t, sym_Where_1))
        {
          ATerm o_12 = ATgetArgument(t, 0);
          if(match_cons(o_12, sym_Seq_2))
            {
              ATerm p_12 = ATgetArgument(o_12, 0);
              if(match_cons(p_12, sym_Where_1))
                {
                  if(((b_80 != NULL) && (b_80 != ATgetArgument(p_12, 0))))
                    _fail(ATgetArgument(p_12, 0));
                  else
                    b_80 = ATgetArgument(p_12, 0);
                }
              else
                _fail(t);
              {
                ATerm q_12 = ATgetArgument(o_12, 1);
                if(match_cons(q_12, sym_Seq_2))
                  {
                    ATerm r_12 = ATgetArgument(q_12, 0);
                    if(match_cons(r_12, sym_Build_1))
                      {
                        if(((c_80 != NULL) && (c_80 != ATgetArgument(r_12, 0))))
                          _fail(ATgetArgument(r_12, 0));
                        else
                          c_80 = ATgetArgument(r_12, 0);
                      }
                    else
                      _fail(t);
                    if(((d_80 != NULL) && (d_80 != ATgetArgument(q_12, 1))))
                      _fail(ATgetArgument(q_12, 1));
                    else
                      d_80 = ATgetArgument(q_12, 1);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_80), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_80)), not_null(d_80))));
      ;
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_80 = NULL;
            if(match_cons(t, sym_Test_1))
              {
                ATerm u_12 = ATgetArgument(t, 0);
                if(match_cons(u_12, sym_Test_1))
                  {
                    if(((a_80 != NULL) && (a_80 != ATgetArgument(u_12, 0))))
                      _fail(ATgetArgument(u_12, 0));
                    else
                      a_80 = ATgetArgument(u_12, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Test_1, not_null(a_80));
            ;
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            {
              ATerm v_12 = t;
              int w_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_79 = NULL;
                  if(match_cons(t, sym_Not_1))
                    {
                      ATerm x_12 = ATgetArgument(t, 0);
                      if(match_cons(x_12, sym_Not_1))
                        {
                          if(((z_79 != NULL) && (z_79 != ATgetArgument(x_12, 0))))
                            _fail(ATgetArgument(x_12, 0));
                          else
                            z_79 = ATgetArgument(x_12, 0);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(z_79));
                  ;
                  LocalPopChoice(w_12);
                }
              else
                {
                  t = v_12;
                  {
                    ATerm y_12 = t;
                    int z_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_79 = NULL;
                        if(match_cons(t, sym_Where_1))
                          {
                            ATerm a_13 = ATgetArgument(t, 0);
                            if(match_cons(a_13, sym_Where_1))
                              {
                                if(((y_79 != NULL) && (y_79 != ATgetArgument(a_13, 0))))
                                  _fail(ATgetArgument(a_13, 0));
                                else
                                  y_79 = ATgetArgument(a_13, 0);
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_Where_1, not_null(y_79));
                        ;
                        LocalPopChoice(z_12);
                      }
                    else
                      {
                        t = y_12;
                        {
                          ATerm b_13 = t;
                          int c_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_79 = NULL;
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  if(((x_79 != NULL) && (x_79 != ATgetArgument(t, 0))))
                                    _fail(ATgetArgument(t, 0));
                                  else
                                    x_79 = ATgetArgument(t, 0);
                                  if(((x_79 != NULL) && (x_79 != ATgetArgument(t, 1))))
                                    _fail(ATgetArgument(t, 1));
                                  else
                                    x_79 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = not_null(x_79);
                              ;
                              LocalPopChoice(c_13);
                            }
                          else
                            {
                              t = b_13;
                              {
                                ATerm w_79 = NULL;
                                if(match_cons(t, sym_Choice_2))
                                  {
                                    if(((w_79 != NULL) && (w_79 != ATgetArgument(t, 0))))
                                      _fail(ATgetArgument(t, 0));
                                    else
                                      w_79 = ATgetArgument(t, 0);
                                    if(((w_79 != NULL) && (w_79 != ATgetArgument(t, 1))))
                                      _fail(ATgetArgument(t, 1));
                                    else
                                      w_79 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = not_null(w_79);
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
  return(t);
}
ATerm AssociateR_0_0 (ATerm t)
{
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_79 = NULL,r_79 = NULL,s_79 = NULL;
      if(match_cons(t, sym_LChoice_2))
        {
          ATerm f_13 = ATgetArgument(t, 0);
          if(match_cons(f_13, sym_LChoice_2))
            {
              if(((q_79 != NULL) && (q_79 != ATgetArgument(f_13, 0))))
                _fail(ATgetArgument(f_13, 0));
              else
                q_79 = ATgetArgument(f_13, 0);
              if(((r_79 != NULL) && (r_79 != ATgetArgument(f_13, 1))))
                _fail(ATgetArgument(f_13, 1));
              else
                r_79 = ATgetArgument(f_13, 1);
            }
          else
            _fail(t);
          if(((s_79 != NULL) && (s_79 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            s_79 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(q_79), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_79), not_null(s_79)));
      ;
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                ATerm i_13 = ATgetArgument(t, 0);
                if(match_cons(i_13, sym_Seq_2))
                  {
                    if(((n_79 != NULL) && (n_79 != ATgetArgument(i_13, 0))))
                      _fail(ATgetArgument(i_13, 0));
                    else
                      n_79 = ATgetArgument(i_13, 0);
                    if(((o_79 != NULL) && (o_79 != ATgetArgument(i_13, 1))))
                      _fail(ATgetArgument(i_13, 1));
                    else
                      o_79 = ATgetArgument(i_13, 1);
                  }
                else
                  _fail(t);
                if(((p_79 != NULL) && (p_79 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  p_79 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_79), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_79), not_null(p_79)));
            ;
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            {
              ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL;
              if(match_cons(t, sym_Choice_2))
                {
                  ATerm j_13 = ATgetArgument(t, 0);
                  if(match_cons(j_13, sym_Choice_2))
                    {
                      if(((k_79 != NULL) && (k_79 != ATgetArgument(j_13, 0))))
                        _fail(ATgetArgument(j_13, 0));
                      else
                        k_79 = ATgetArgument(j_13, 0);
                      if(((l_79 != NULL) && (l_79 != ATgetArgument(j_13, 1))))
                        _fail(ATgetArgument(j_13, 1));
                      else
                        l_79 = ATgetArgument(j_13, 1);
                    }
                  else
                    _fail(t);
                  if(((m_79 != NULL) && (m_79 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    m_79 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(k_79), (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_79), not_null(m_79)));
            }
          }
      }
    }
  return(t);
}
ATerm MkConstType_0_0 (ATerm t)
{
  ATerm y_85 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      if(((y_85 != NULL) && (y_85 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(y_85), term_m_13);
  return(t);
}
ATerm MkFunType_0_0 (ATerm t)
{
  ATerm x_85 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      if(((x_85 != NULL) && (x_85 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(x_85), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_13), term_m_13));
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm d_6 (ATerm t)
        {
          ATerm e_6 (ATerm t)
          {
            t = map1_1_0(n_0, t);
            return(t);
          }
          t = try_1_0(e_6, t);
          return(t);
        }
        t = Cons_2_0(_id, d_6, t);
      }
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
        ATerm f_6 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, f_6, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_86 = NULL,g_86 = NULL;
      if(match_cons(t, sym_Lets_2))
        {
          if(((f_86 != NULL) && (f_86 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            f_86 = ATgetArgument(t, 0);
          if(((g_86 != NULL) && (g_86 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            g_86 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(f_86), not_null(g_86));
      ;
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      {
        ATerm r_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_86 = NULL,e_86 = NULL;
            if(match_cons(t, sym_LChoices_1))
              {
                ATerm t_13 = ATgetArgument(t, 0);
                if(((ATgetType(t_13) == AT_LIST) && !(ATisEmpty(t_13))))
                  {
                    if(((d_86 != NULL) && (d_86 != ATgetFirst((ATermList) t_13))))
                      _fail(ATgetFirst((ATermList) t_13));
                    else
                      d_86 = ATgetFirst((ATermList) t_13);
                    if(((e_86 != NULL) && (e_86 != (ATerm) ATgetNext((ATermList) t_13))))
                      _fail((ATerm) ATgetNext((ATermList) t_13));
                    else
                      e_86 = (ATerm) ATgetNext((ATermList) t_13);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(d_86), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(e_86)));
            ;
            LocalPopChoice(s_13);
          }
        else
          {
            t = r_13;
            {
              ATerm u_13 = t;
              int v_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoices_1))
                    {
                      ATerm w_13 = ATgetArgument(t, 0);
                      if(((ATgetType(w_13) != AT_LIST) || !(ATisEmpty(w_13))))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = term_f_11;
                  ;
                  LocalPopChoice(v_13);
                }
              else
                {
                  t = u_13;
                  {
                    ATerm x_13 = t;
                    int y_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_86 = NULL,c_86 = NULL;
                        if(match_cons(t, sym_Choices_1))
                          {
                            ATerm z_13 = ATgetArgument(t, 0);
                            if(((ATgetType(z_13) == AT_LIST) && !(ATisEmpty(z_13))))
                              {
                                if(((b_86 != NULL) && (b_86 != ATgetFirst((ATermList) z_13))))
                                  _fail(ATgetFirst((ATermList) z_13));
                                else
                                  b_86 = ATgetFirst((ATermList) z_13);
                                if(((c_86 != NULL) && (c_86 != (ATerm) ATgetNext((ATermList) z_13))))
                                  _fail((ATerm) ATgetNext((ATermList) z_13));
                                else
                                  c_86 = (ATerm) ATgetNext((ATermList) z_13);
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(b_86), (ATerm) ATmakeAppl(sym_Choices_1, not_null(c_86)));
                        ;
                        LocalPopChoice(y_13);
                      }
                    else
                      {
                        t = x_13;
                        {
                          ATerm a_14 = t;
                          int b_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Choices_1))
                                {
                                  ATerm c_14 = ATgetArgument(t, 0);
                                  if(((ATgetType(c_14) != AT_LIST) || !(ATisEmpty(c_14))))
                                    _fail(t);
                                }
                              else
                                _fail(t);
                              t = term_f_11;
                              ;
                              LocalPopChoice(b_14);
                            }
                          else
                            {
                              t = a_14;
                              {
                                ATerm d_14 = t;
                                int e_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_85 = NULL,a_86 = NULL;
                                    if(match_cons(t, sym_Seqs_1))
                                      {
                                        ATerm f_14 = ATgetArgument(t, 0);
                                        if(((ATgetType(f_14) == AT_LIST) && !(ATisEmpty(f_14))))
                                          {
                                            if(((z_85 != NULL) && (z_85 != ATgetFirst((ATermList) f_14))))
                                              _fail(ATgetFirst((ATermList) f_14));
                                            else
                                              z_85 = ATgetFirst((ATermList) f_14);
                                            if(((a_86 != NULL) && (a_86 != (ATerm) ATgetNext((ATermList) f_14))))
                                              _fail((ATerm) ATgetNext((ATermList) f_14));
                                            else
                                              a_86 = (ATerm) ATgetNext((ATermList) f_14);
                                          }
                                        else
                                          _fail(t);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_85), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(a_86)));
                                    ;
                                    LocalPopChoice(e_14);
                                  }
                                else
                                  {
                                    t = d_14;
                                    {
                                      ATerm g_14 = t;
                                      int h_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_Seqs_1))
                                            {
                                              ATerm i_14 = ATgetArgument(t, 0);
                                              if(((ATgetType(i_14) != AT_LIST) || !(ATisEmpty(i_14))))
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                          t = term_j_14;
                                          ;
                                          LocalPopChoice(h_14);
                                        }
                                      else
                                        {
                                          t = g_14;
                                          {
                                            ATerm k_14 = t;
                                            int l_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL;
                                                if(match_cons(t, sym_RDefT_4))
                                                  {
                                                    if(((r_85 != NULL) && (r_85 != ATgetArgument(t, 0))))
                                                      _fail(ATgetArgument(t, 0));
                                                    else
                                                      r_85 = ATgetArgument(t, 0);
                                                    if(((t_85 != NULL) && (t_85 != ATgetArgument(t, 1))))
                                                      _fail(ATgetArgument(t, 1));
                                                    else
                                                      t_85 = ATgetArgument(t, 1);
                                                    if(((v_85 != NULL) && (v_85 != ATgetArgument(t, 2))))
                                                      _fail(ATgetArgument(t, 2));
                                                    else
                                                      v_85 = ATgetArgument(t, 2);
                                                    if(((s_85 != NULL) && (s_85 != ATgetArgument(t, 3))))
                                                      _fail(ATgetArgument(t, 3));
                                                    else
                                                      s_85 = ATgetArgument(t, 3);
                                                  }
                                                else
                                                  _fail(t);
                                                {
                                                  ATerm o_0 = NULL;
                                                  if(((o_0 != NULL) && (o_0 != t)))
                                                    _fail(t);
                                                  else
                                                    o_0 = t;
                                                  t = not_null(t_85);
                                                  t = map1_1_0(MkFunType_0_0, t);
                                                  if(((u_85 != NULL) && (u_85 != t)))
                                                    _fail(t);
                                                  else
                                                    u_85 = t;
                                                  t = not_null(v_85);
                                                  {
                                                    ATerm g_6 (ATerm t)
                                                    {
                                                      t = try_1_0(MkConstType_0_0, t);
                                                      return(t);
                                                    }
                                                    t = map1_1_0(g_6, t);
                                                    if(((w_85 != NULL) && (w_85 != t)))
                                                      _fail(t);
                                                    else
                                                      w_85 = t;
                                                    t = not_null(o_0);
                                                  }
                                                  t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(r_85), not_null(u_85), not_null(w_85), not_null(s_85));
                                                }
                                                ;
                                                LocalPopChoice(l_14);
                                              }
                                            else
                                              {
                                                t = k_14;
                                                {
                                                  ATerm m_14 = t;
                                                  int n_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL,o_85 = NULL,p_85 = NULL,q_85 = NULL;
                                                      if(match_cons(t, sym_SDefT_4))
                                                        {
                                                          if(((l_85 != NULL) && (l_85 != ATgetArgument(t, 0))))
                                                            _fail(ATgetArgument(t, 0));
                                                          else
                                                            l_85 = ATgetArgument(t, 0);
                                                          if(((p_85 != NULL) && (p_85 != ATgetArgument(t, 1))))
                                                            _fail(ATgetArgument(t, 1));
                                                          else
                                                            p_85 = ATgetArgument(t, 1);
                                                          if(((n_85 != NULL) && (n_85 != ATgetArgument(t, 2))))
                                                            _fail(ATgetArgument(t, 2));
                                                          else
                                                            n_85 = ATgetArgument(t, 2);
                                                          if(((m_85 != NULL) && (m_85 != ATgetArgument(t, 3))))
                                                            _fail(ATgetArgument(t, 3));
                                                          else
                                                            m_85 = ATgetArgument(t, 3);
                                                        }
                                                      else
                                                        _fail(t);
                                                      {
                                                        ATerm p_0 = NULL;
                                                        if(((p_0 != NULL) && (p_0 != t)))
                                                          _fail(t);
                                                        else
                                                          p_0 = t;
                                                        t = not_null(n_85);
                                                        t = map1_1_0(MkConstType_0_0, t);
                                                        if(((o_85 != NULL) && (o_85 != t)))
                                                          _fail(t);
                                                        else
                                                          o_85 = t;
                                                        t = not_null(p_85);
                                                        {
                                                          ATerm h_6 (ATerm t)
                                                          {
                                                            t = try_1_0(MkFunType_0_0, t);
                                                            return(t);
                                                          }
                                                          t = map_1_0(h_6, t);
                                                          if(((q_85 != NULL) && (q_85 != t)))
                                                            _fail(t);
                                                          else
                                                            q_85 = t;
                                                          t = not_null(p_0);
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(l_85), not_null(q_85), not_null(o_85), not_null(m_85));
                                                      }
                                                      ;
                                                      LocalPopChoice(n_14);
                                                    }
                                                  else
                                                    {
                                                      t = m_14;
                                                      {
                                                        ATerm o_14 = t;
                                                        int p_14 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL;
                                                            if(match_cons(t, sym_SDefT_4))
                                                              {
                                                                if(((f_85 != NULL) && (f_85 != ATgetArgument(t, 0))))
                                                                  _fail(ATgetArgument(t, 0));
                                                                else
                                                                  f_85 = ATgetArgument(t, 0);
                                                                if(((h_85 != NULL) && (h_85 != ATgetArgument(t, 1))))
                                                                  _fail(ATgetArgument(t, 1));
                                                                else
                                                                  h_85 = ATgetArgument(t, 1);
                                                                if(((j_85 != NULL) && (j_85 != ATgetArgument(t, 2))))
                                                                  _fail(ATgetArgument(t, 2));
                                                                else
                                                                  j_85 = ATgetArgument(t, 2);
                                                                if(((g_85 != NULL) && (g_85 != ATgetArgument(t, 3))))
                                                                  _fail(ATgetArgument(t, 3));
                                                                else
                                                                  g_85 = ATgetArgument(t, 3);
                                                              }
                                                            else
                                                              _fail(t);
                                                            {
                                                              ATerm q_0 = NULL;
                                                              if(((q_0 != NULL) && (q_0 != t)))
                                                                _fail(t);
                                                              else
                                                                q_0 = t;
                                                              t = not_null(h_85);
                                                              t = map1_1_0(MkFunType_0_0, t);
                                                              if(((i_85 != NULL) && (i_85 != t)))
                                                                _fail(t);
                                                              else
                                                                i_85 = t;
                                                              t = not_null(j_85);
                                                              {
                                                                ATerm i_6 (ATerm t)
                                                                {
                                                                  t = try_1_0(MkConstType_0_0, t);
                                                                  return(t);
                                                                }
                                                                t = map_1_0(i_6, t);
                                                                if(((k_85 != NULL) && (k_85 != t)))
                                                                  _fail(t);
                                                                else
                                                                  k_85 = t;
                                                                t = not_null(q_0);
                                                              }
                                                              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(f_85), not_null(i_85), not_null(k_85), not_null(g_85));
                                                            }
                                                            ;
                                                            LocalPopChoice(p_14);
                                                          }
                                                        else
                                                          {
                                                            t = o_14;
                                                            {
                                                              ATerm q_14 = t;
                                                              int r_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL;
                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                    {
                                                                      if(((d_85 != NULL) && (d_85 != ATgetArgument(t, 0))))
                                                                        _fail(ATgetArgument(t, 0));
                                                                      else
                                                                        d_85 = ATgetArgument(t, 0);
                                                                      if(((c_85 != NULL) && (c_85 != ATgetArgument(t, 1))))
                                                                        _fail(ATgetArgument(t, 1));
                                                                      else
                                                                        c_85 = ATgetArgument(t, 1);
                                                                      if(((e_85 != NULL) && (e_85 != ATgetArgument(t, 2))))
                                                                        _fail(ATgetArgument(t, 2));
                                                                      else
                                                                        e_85 = ATgetArgument(t, 2);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(c_85), (ATerm) ATmakeAppl(sym_Op_2, term_s_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_85)), not_null(d_85))));
                                                                  ;
                                                                  LocalPopChoice(r_14);
                                                                }
                                                              else
                                                                {
                                                                  t = q_14;
                                                                  {
                                                                    ATerm t_14 = t;
                                                                    int u_14 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL;
                                                                        if(match_cons(t, sym_BAM_3))
                                                                          {
                                                                            if(((a_85 != NULL) && (a_85 != ATgetArgument(t, 0))))
                                                                              _fail(ATgetArgument(t, 0));
                                                                            else
                                                                              a_85 = ATgetArgument(t, 0);
                                                                            if(((z_84 != NULL) && (z_84 != ATgetArgument(t, 1))))
                                                                              _fail(ATgetArgument(t, 1));
                                                                            else
                                                                              z_84 = ATgetArgument(t, 1);
                                                                            if(((b_85 != NULL) && (b_85 != ATgetArgument(t, 2))))
                                                                              _fail(ATgetArgument(t, 2));
                                                                            else
                                                                              b_85 = ATgetArgument(t, 2);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(b_85))), not_null(a_85)), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_84))));
                                                                        ;
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
                                                                              ATerm x_84 = NULL,y_84 = NULL;
                                                                              if(match_cons(t, sym_AM_2))
                                                                                {
                                                                                  if(((x_84 != NULL) && (x_84 != ATgetArgument(t, 0))))
                                                                                    _fail(ATgetArgument(t, 0));
                                                                                  else
                                                                                    x_84 = ATgetArgument(t, 0);
                                                                                  if(((y_84 != NULL) && (y_84 != ATgetArgument(t, 1))))
                                                                                    _fail(ATgetArgument(t, 1));
                                                                                  else
                                                                                    y_84 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_84), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_84)));
                                                                              ;
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
                                                                                    ATerm v_84 = NULL,w_84 = NULL;
                                                                                    if(match_cons(t, sym_MA_2))
                                                                                      {
                                                                                        if(((v_84 != NULL) && (v_84 != ATgetArgument(t, 0))))
                                                                                          _fail(ATgetArgument(t, 0));
                                                                                        else
                                                                                          v_84 = ATgetArgument(t, 0);
                                                                                        if(((w_84 != NULL) && (w_84 != ATgetArgument(t, 1))))
                                                                                          _fail(ATgetArgument(t, 1));
                                                                                        else
                                                                                          w_84 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_84)), not_null(w_84));
                                                                                    ;
                                                                                    LocalPopChoice(y_14);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = x_14;
                                                                                    {
                                                                                      ATerm t_84 = NULL,u_84 = NULL;
                                                                                      if(match_cons(t, sym_BA_2))
                                                                                        {
                                                                                          if(((u_84 != NULL) && (u_84 != ATgetArgument(t, 0))))
                                                                                            _fail(ATgetArgument(t, 0));
                                                                                          else
                                                                                            u_84 = ATgetArgument(t, 0);
                                                                                          if(((t_84 != NULL) && (t_84 != ATgetArgument(t, 1))))
                                                                                            _fail(ATgetArgument(t, 1));
                                                                                          else
                                                                                            t_84 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_84)), not_null(u_84));
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
                }
            }
          }
      }
    }
  return(t);
}
ATerm F16_0_0 (ATerm t)
{
  ATerm d_95 = NULL,e_95 = NULL;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      if(((d_95 != NULL) && (d_95 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_95 = ATgetArgument(t, 0);
      if(((e_95 != NULL) && (e_95 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_95 = ATgetArgument(t, 1);
      {
        ATerm z_14 = ATgetArgument(t, 2);
        if(!(match_cons(z_14, sym_Fail_0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_95), not_null(e_95));
  return(t);
}
ATerm F15_0_0 (ATerm t)
{
  if(match_cons(t, sym_Where_1))
    {
      ATerm a_15 = ATgetArgument(t, 0);
      if(!(match_cons(a_15, sym_Fail_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_f_11;
  return(t);
}
ATerm F14_0_0 (ATerm t)
{
  ATerm c_95 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      if(((c_95 != NULL) && (c_95 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_95 = ATgetArgument(t, 0);
      {
        ATerm b_15 = ATgetArgument(t, 1);
        if(!(match_cons(b_15, sym_Fail_0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(c_95);
  return(t);
}
ATerm F13_0_0 (ATerm t)
{
  ATerm b_95 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      ATerm c_15 = ATgetArgument(t, 0);
      if(!(match_cons(c_15, sym_Fail_0)))
        _fail(t);
      if(((b_95 != NULL) && (b_95 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(b_95);
  return(t);
}
ATerm F12_0_0 (ATerm t)
{
  ATerm a_95 = NULL;
  if(match_cons(t, sym_Choice_2))
    {
      if(((a_95 != NULL) && (a_95 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_95 = ATgetArgument(t, 0);
      {
        ATerm d_15 = ATgetArgument(t, 1);
        if(!(match_cons(d_15, sym_Fail_0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(a_95);
  return(t);
}
ATerm F11_0_0 (ATerm t)
{
  ATerm z_94 = NULL;
  if(match_cons(t, sym_Choice_2))
    {
      ATerm e_15 = ATgetArgument(t, 0);
      if(!(match_cons(e_15, sym_Fail_0)))
        _fail(t);
      if(((z_94 != NULL) && (z_94 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(z_94);
  return(t);
}
ATerm F10_0_0 (ATerm t)
{
  ATerm x_94 = NULL,y_94 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      if(((x_94 != NULL) && (x_94 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_94 = ATgetArgument(t, 0);
      if(((y_94 != NULL) && (y_94 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_0 = NULL;
    if(((r_0 != NULL) && (r_0 != t)))
      _fail(t);
    else
      r_0 = t;
    t = not_null(y_94);
    {
      ATerm j_6 (ATerm t)
      {
        if(!(match_cons(t, sym_Fail_0)))
          _fail(t);
        return(t);
      }
      t = fetch_1_0(j_6, t);
      t = not_null(r_0);
    }
    t = term_f_11;
  }
  return(t);
}
ATerm F9_0_0 (ATerm t)
{
  ATerm w_94 = NULL;
  if(match_cons(t, sym_Path_2))
    {
      if(((w_94 != NULL) && (w_94 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_94 = ATgetArgument(t, 0);
      {
        ATerm f_15 = ATgetArgument(t, 1);
        if(!(match_cons(f_15, sym_Fail_0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_f_11;
  return(t);
}
ATerm F8_0_0 (ATerm t)
{
  if(match_cons(t, sym_One_1))
    {
      ATerm g_15 = ATgetArgument(t, 0);
      if(!(match_cons(g_15, sym_Fail_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_f_11;
  return(t);
}
ATerm F7_0_0 (ATerm t)
{
  if(match_cons(t, sym_Some_1))
    {
      ATerm h_15 = ATgetArgument(t, 0);
      if(!(match_cons(h_15, sym_Fail_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_f_11;
  return(t);
}
ATerm F6_0_0 (ATerm t)
{
  ATerm v_94 = NULL;
  if(match_cons(t, sym_Rec_2))
    {
      if(((v_94 != NULL) && (v_94 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_94 = ATgetArgument(t, 0);
      {
        ATerm i_15 = ATgetArgument(t, 1);
        if(!(match_cons(i_15, sym_Fail_0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_f_11;
  return(t);
}
ATerm F5_0_0 (ATerm t)
{
  ATerm u_94 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      if(((u_94 != NULL) && (u_94 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_94 = ATgetArgument(t, 0);
      {
        ATerm j_15 = ATgetArgument(t, 1);
        if(!(match_cons(j_15, sym_Fail_0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_f_11;
  return(t);
}
ATerm F3_0_0 (ATerm t)
{
  ATerm s_94 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      ATerm k_15 = ATgetArgument(t, 0);
      if(!(match_cons(k_15, sym_Fail_0)))
        _fail(t);
      if(((s_94 != NULL) && (s_94 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_11;
  return(t);
}
ATerm F2_0_0 (ATerm t)
{
  if(match_cons(t, sym_Not_1))
    {
      ATerm l_15 = ATgetArgument(t, 0);
      if(!(match_cons(l_15, sym_Fail_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_j_14;
  return(t);
}
ATerm F1_0_0 (ATerm t)
{
  if(match_cons(t, sym_Test_1))
    {
      ATerm m_15 = ATgetArgument(t, 0);
      if(!(match_cons(m_15, sym_Fail_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_f_11;
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0_0(t);
      ;
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      {
        ATerm p_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0_0(t);
            ;
            LocalPopChoice(q_15);
          }
        else
          {
            t = p_15;
            {
              ATerm r_15 = t;
              int s_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0_0(t);
                  ;
                  LocalPopChoice(s_15);
                }
              else
                {
                  t = r_15;
                  {
                    ATerm t_15 = t;
                    int u_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0_0(t);
                        ;
                        LocalPopChoice(u_15);
                      }
                    else
                      {
                        t = t_15;
                        {
                          ATerm v_15 = t;
                          int w_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0_0(t);
                              ;
                              LocalPopChoice(w_15);
                            }
                          else
                            {
                              t = v_15;
                              {
                                ATerm x_15 = t;
                                int y_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0_0(t);
                                    ;
                                    LocalPopChoice(y_15);
                                  }
                                else
                                  {
                                    t = x_15;
                                    {
                                      ATerm z_15 = t;
                                      int a_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0_0(t);
                                          ;
                                          LocalPopChoice(a_16);
                                        }
                                      else
                                        {
                                          t = z_15;
                                          {
                                            ATerm b_16 = t;
                                            int c_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0_0(t);
                                                ;
                                                LocalPopChoice(c_16);
                                              }
                                            else
                                              {
                                                t = b_16;
                                                {
                                                  ATerm d_16 = t;
                                                  int e_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0_0(t);
                                                      ;
                                                      LocalPopChoice(e_16);
                                                    }
                                                  else
                                                    {
                                                      t = d_16;
                                                      {
                                                        ATerm f_16 = t;
                                                        int g_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0_0(t);
                                                            ;
                                                            LocalPopChoice(g_16);
                                                          }
                                                        else
                                                          {
                                                            t = f_16;
                                                            {
                                                              ATerm h_16 = t;
                                                              int i_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(i_16);
                                                                }
                                                              else
                                                                {
                                                                  t = h_16;
                                                                  {
                                                                    ATerm j_16 = t;
                                                                    int k_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(k_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_16;
                                                                        {
                                                                          ATerm l_16 = t;
                                                                          int m_16 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(m_16);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = l_16;
                                                                              {
                                                                                ATerm n_16 = t;
                                                                                int o_16 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = F15_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(o_16);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = n_16;
                                                                                    t = F16_0_0(t);
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
            }
          }
      }
    }
  return(t);
}
ATerm I16_0_0 (ATerm t)
{
  if(match_cons(t, sym_Match_1))
    {
      ATerm p_16 = ATgetArgument(t, 0);
      if(!(match_cons(p_16, sym_Wld_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_j_14;
  return(t);
}
ATerm I12_0_0 (ATerm t)
{
  if(match_cons(t, sym_Where_1))
    {
      ATerm q_16 = ATgetArgument(t, 0);
      if(!(match_cons(q_16, sym_Id_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_j_14;
  return(t);
}
ATerm I10_0_0 (ATerm t)
{
  if(match_cons(t, sym_All_1))
    {
      ATerm r_16 = ATgetArgument(t, 0);
      if(!(match_cons(r_16, sym_Id_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_j_14;
  return(t);
}
ATerm I9_0_0 (ATerm t)
{
  ATerm l_95 = NULL;
  if(match_cons(t, sym_Rec_2))
    {
      if(((l_95 != NULL) && (l_95 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_95 = ATgetArgument(t, 0);
      {
        ATerm s_16 = ATgetArgument(t, 1);
        if(!(match_cons(s_16, sym_Id_0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_j_14;
  return(t);
}
ATerm I8_0_0 (ATerm t)
{
  ATerm k_95 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      if(((k_95 != NULL) && (k_95 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_95 = ATgetArgument(t, 0);
      {
        ATerm t_16 = ATgetArgument(t, 1);
        if(!(match_cons(t_16, sym_Id_0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_j_14;
  return(t);
}
ATerm I7_0_0 (ATerm t)
{
  ATerm j_95 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      if(!(match_cons(u_16, sym_Id_0)))
        _fail(t);
      if(((j_95 != NULL) && (j_95 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_j_14;
  return(t);
}
ATerm I4_0_0 (ATerm t)
{
  ATerm g_95 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      if(((g_95 != NULL) && (g_95 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_95 = ATgetArgument(t, 0);
      {
        ATerm v_16 = ATgetArgument(t, 1);
        if(!(match_cons(v_16, sym_Id_0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(g_95);
  return(t);
}
ATerm I3_0_0 (ATerm t)
{
  ATerm f_95 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      ATerm w_16 = ATgetArgument(t, 0);
      if(!(match_cons(w_16, sym_Id_0)))
        _fail(t);
      if(((f_95 != NULL) && (f_95 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(f_95);
  return(t);
}
ATerm I2_0_0 (ATerm t)
{
  if(match_cons(t, sym_Not_1))
    {
      ATerm x_16 = ATgetArgument(t, 0);
      if(!(match_cons(x_16, sym_Id_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_f_11;
  return(t);
}
ATerm I1_0_0 (ATerm t)
{
  if(match_cons(t, sym_Test_1))
    {
      ATerm y_16 = ATgetArgument(t, 0);
      if(!(match_cons(y_16, sym_Id_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_j_14;
  return(t);
}
ATerm ElimId_0_0 (ATerm t)
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0_0(t);
      ;
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0_0(t);
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            {
              ATerm d_17 = t;
              int e_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0_0(t);
                  ;
                  LocalPopChoice(e_17);
                }
              else
                {
                  t = d_17;
                  {
                    ATerm f_17 = t;
                    int g_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0_0(t);
                        ;
                        LocalPopChoice(g_17);
                      }
                    else
                      {
                        t = f_17;
                        {
                          ATerm h_17 = t;
                          int i_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0_0(t);
                              ;
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
                                    t = I8_0_0(t);
                                    ;
                                    LocalPopChoice(k_17);
                                  }
                                else
                                  {
                                    t = j_17;
                                    {
                                      ATerm l_17 = t;
                                      int m_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0_0(t);
                                          ;
                                          LocalPopChoice(m_17);
                                        }
                                      else
                                        {
                                          t = l_17;
                                          {
                                            ATerm n_17 = t;
                                            int o_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0_0(t);
                                                ;
                                                LocalPopChoice(o_17);
                                              }
                                            else
                                              {
                                                t = n_17;
                                                {
                                                  ATerm p_17 = t;
                                                  int q_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0_0(t);
                                                      ;
                                                      LocalPopChoice(q_17);
                                                    }
                                                  else
                                                    {
                                                      t = p_17;
                                                      t = I16_0_0(t);
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
  return(t);
}
ATerm Simplify_0_0 (ATerm t)
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      {
        ATerm t_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            {
              ATerm v_17 = t;
              int w_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(w_17);
                }
              else
                {
                  t = v_17;
                  {
                    ATerm x_17 = t;
                    int y_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(y_17);
                      }
                    else
                      {
                        t = x_17;
                        {
                          ATerm z_17 = t;
                          int a_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(a_18);
                            }
                          else
                            {
                              t = z_17;
                              {
                                ATerm b_18 = t;
                                int c_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0_0(t);
                                    ;
                                    LocalPopChoice(c_18);
                                  }
                                else
                                  {
                                    t = b_18;
                                    {
                                      ATerm d_18 = t;
                                      int e_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetNoDefs_0_0(t);
                                          ;
                                          LocalPopChoice(e_18);
                                        }
                                      else
                                        {
                                          t = d_18;
                                          {
                                            ATerm f_18 = t;
                                            int g_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = LetHoist_0_0(t);
                                                ;
                                                LocalPopChoice(g_18);
                                              }
                                            else
                                              {
                                                t = f_18;
                                                {
                                                  ATerm h_18 = t;
                                                  int i_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatch_0_0(t);
                                                      ;
                                                      LocalPopChoice(i_18);
                                                    }
                                                  else
                                                    {
                                                      t = h_18;
                                                      t = MatchSimplify_0_0(t);
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
  return(t);
}
ATerm downup_1_0 (ATerm g_122 (ATerm), ATerm t)
{
  t = g_122(t);
  {
    ATerm k_6 (ATerm t)
    {
      t = downup_1_0(g_122, t);
      return(t);
    }
    t = SRTS_all(k_6, t);
    t = g_122(t);
  }
  return(t);
}
ATerm simplify0_0_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    t = repeat_1_0(Simplify_0_0, t);
    return(t);
  }
  t = downup_1_0(l_6, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm CreateDef2_0_0 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL;
  if(((g_44 != NULL) && (g_44 != t)))
    _fail(t);
  else
    g_44 = t;
  {
    ATerm s_0 = NULL;
    if(((s_0 != NULL) && (s_0 != t)))
      _fail(t);
    else
      s_0 = t;
    t = new_0_0(t);
    if(((h_44 != NULL) && (h_44 != t)))
      _fail(t);
    else
      h_44 = t;
    t = not_null(s_0);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_44)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(h_44), (ATerm)ATempty, (ATerm)ATempty, not_null(g_44))));
  }
  return(t);
}
ATerm SVar_1_0 (ATerm w_103 (ATerm), ATerm t)
{
  ATerm u_0 = NULL,t_0 = NULL,v_0 = NULL;
  ATerm w_0 = NULL;
  if(((w_0 != NULL) && (w_0 != t)))
    _fail(t);
  else
    w_0 = t;
  if(match_cons(t, sym_SVar_1))
    {
      if(((t_0 != NULL) && (t_0 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_0 = NULL;
    if(((y_0 != NULL) && (y_0 != t)))
      _fail(t);
    else
      y_0 = t;
    t = SSLgetAnnotations(not_null(w_0));
    if(((u_0 != NULL) && (u_0 != t)))
      _fail(t);
    else
      u_0 = t;
    t = not_null(y_0);
  }
  t = not_null(t_0);
  t = w_103(t);
  if(((v_0 != NULL) && (v_0 != t)))
    _fail(t);
  else
    v_0 = t;
  {
    ATerm x_0 = NULL;
    ATerm z_0 = NULL;
    if(((z_0 != NULL) && (z_0 != t)))
      _fail(t);
    else
      z_0 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(v_0)), not_null(u_0));
    if(((x_0 != NULL) && (x_0 != t)))
      _fail(t);
    else
      x_0 = t;
    t = not_null(z_0);
    t = not_null(x_0);
  }
  return(t);
}
ATerm CallT_3_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL;
  ATerm h_1 = NULL;
  if(((h_1 != NULL) && (h_1 != t)))
    _fail(t);
  else
    h_1 = t;
  if(match_cons(t, sym_CallT_3))
    {
      if(((a_1 != NULL) && (a_1 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_1 = ATgetArgument(t, 0);
      if(((b_1 != NULL) && (b_1 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_1 = ATgetArgument(t, 1);
      if(((c_1 != NULL) && (c_1 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        c_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm j_1 = NULL;
    if(((j_1 != NULL) && (j_1 != t)))
      _fail(t);
    else
      j_1 = t;
    t = SSLgetAnnotations(not_null(h_1));
    if(((d_1 != NULL) && (d_1 != t)))
      _fail(t);
    else
      d_1 = t;
    t = not_null(j_1);
  }
  t = not_null(a_1);
  t = b_104(t);
  if(((e_1 != NULL) && (e_1 != t)))
    _fail(t);
  else
    e_1 = t;
  t = not_null(b_1);
  t = c_104(t);
  if(((f_1 != NULL) && (f_1 != t)))
    _fail(t);
  else
    f_1 = t;
  t = not_null(c_1);
  t = d_104(t);
  if(((g_1 != NULL) && (g_1 != t)))
    _fail(t);
  else
    g_1 = t;
  {
    ATerm i_1 = NULL;
    ATerm k_1 = NULL;
    if(((k_1 != NULL) && (k_1 != t)))
      _fail(t);
    else
      k_1 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(e_1), not_null(f_1), not_null(g_1)), not_null(d_1));
    if(((i_1 != NULL) && (i_1 != t)))
      _fail(t);
    else
      i_1 = t;
    t = not_null(k_1);
    t = not_null(i_1);
  }
  return(t);
}
ATerm CreateDef1_0_0 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      if(((f_44 != NULL) && (f_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_44 = ATgetArgument(t, 0);
      {
        ATerm j_18 = ATgetArgument(t, 1);
        if(match_cons(j_18, sym_CallT_3))
          {
            ATerm k_18 = ATgetArgument(j_18, 0);
            if(match_cons(k_18, sym_SVar_1))
              {
                if(((e_44 != NULL) && (e_44 != ATgetArgument(k_18, 0))))
                  _fail(ATgetArgument(k_18, 0));
                else
                  e_44 = ATgetArgument(k_18, 0);
              }
            else
              _fail(t);
            {
              ATerm l_18 = ATgetArgument(j_18, 1);
              if(((ATgetType(l_18) != AT_LIST) || !(ATisEmpty(l_18))))
                _fail(t);
            }
            {
              ATerm m_18 = ATgetArgument(j_18, 2);
              if(((ATgetType(m_18) != AT_LIST) || !(ATisEmpty(m_18))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_44)), (ATerm)ATempty, (ATerm) ATempty), not_null(f_44));
  return(t);
}
ATerm CallFailFun_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  t = term_p_18;
  return(t);
}
ATerm CallIdFun_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Id_0)))
    _fail(t);
  t = term_s_18;
  return(t);
}
ATerm UnZip2_0_0 (ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_18 = ATgetArgument(t, 0);
      if(match_cons(t_18, sym__2))
        {
          if(((e_50 != NULL) && (e_50 != ATgetArgument(t_18, 0))))
            _fail(ATgetArgument(t_18, 0));
          else
            e_50 = ATgetArgument(t_18, 0);
          if(((g_50 != NULL) && (g_50 != ATgetArgument(t_18, 1))))
            _fail(ATgetArgument(t_18, 1));
          else
            g_50 = ATgetArgument(t_18, 1);
        }
      else
        _fail(t);
      {
        ATerm u_18 = ATgetArgument(t, 1);
        if(match_cons(u_18, sym__2))
          {
            if(((f_50 != NULL) && (f_50 != ATgetArgument(u_18, 0))))
              _fail(ATgetArgument(u_18, 0));
            else
              f_50 = ATgetArgument(u_18, 0);
            if(((h_50 != NULL) && (h_50 != ATgetArgument(u_18, 1))))
              _fail(ATgetArgument(u_18, 1));
            else
              h_50 = ATgetArgument(u_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_50)), not_null(e_50)), (ATerm) ATinsert(CheckATermList(not_null(h_50)), not_null(g_50)));
  return(t);
}
ATerm UnZip3_0_0 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((i_50 != NULL) && (i_50 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        i_50 = ATgetFirst((ATermList) t);
      if(((j_50 != NULL) && (j_50 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        j_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_50), not_null(j_50));
  return(t);
}
ATerm UnZip1_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_v_18;
  return(t);
}
ATerm genzip_4_0 (ATerm z_129 (ATerm), ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm c_130 (ATerm), ATerm t)
{
  ATerm d_130 (ATerm t)
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_129(t);
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = a_130(t);
        t = _2_0(c_130, d_130, t);
        t = b_130(t);
      }
    return(t);
  }
  t = d_130(t);
  return(t);
}
ATerm unzip_1_0 (ATerm j_130 (ATerm), ATerm t)
{
  t = genzip_4_0(UnZip1_0_0, UnZip3_0_0, UnZip2_0_0, j_130, t);
  return(t);
}
ATerm alltd_1_0 (ATerm w_123 (ATerm), ATerm t)
{
  ATerm x_123 (ATerm t)
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_123(t);
        ;
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        t = SRTS_all(x_123, t);
      }
    return(t);
  }
  t = x_123(t);
  return(t);
}
ATerm Canon_0_0 (ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_45 = NULL,k_45 = NULL;
      if(match_cons(t, sym_Rec_2))
        {
          if(((k_45 != NULL) && (k_45 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            k_45 = ATgetArgument(t, 0);
          if(((j_45 != NULL) && (j_45 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_45 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(k_45), (ATerm)ATempty, (ATerm)ATempty, not_null(j_45))), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_45)), (ATerm)ATempty, (ATerm) ATempty));
      ;
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                if(((h_45 != NULL) && (h_45 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_45 = ATgetArgument(t, 0);
                {
                  ATerm e_19 = ATgetArgument(t, 1);
                  if(((ATgetType(e_19) != AT_LIST) || !(ATisEmpty(e_19))))
                    _fail(t);
                }
                {
                  ATerm f_19 = ATgetArgument(t, 2);
                  if(((ATgetType(f_19) != AT_LIST) || !(ATisEmpty(f_19))))
                    _fail(t);
                }
                {
                  ATerm g_19 = ATgetArgument(t, 3);
                  if(match_cons(g_19, sym_Rec_2))
                    {
                      if(((g_45 != NULL) && (g_45 != ATgetArgument(g_19, 0))))
                        _fail(ATgetArgument(g_19, 0));
                      else
                        g_45 = ATgetArgument(g_19, 0);
                      if(((i_45 != NULL) && (i_45 != ATgetArgument(g_19, 1))))
                        _fail(ATgetArgument(g_19, 1));
                      else
                        i_45 = ATgetArgument(g_19, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            {
              ATerm v_178 = NULL;
              ATerm l_1 = NULL;
              if(((l_1 != NULL) && (l_1 != t)))
                _fail(t);
              else
                l_1 = t;
              t = not_null(i_45);
              {
                ATerm m_6 (ATerm t)
                {
                  if(match_cons(t, sym_CallT_3))
                    {
                      ATerm h_19 = ATgetArgument(t, 0);
                      if(match_cons(h_19, sym_SVar_1))
                        {
                          if(((g_45 != NULL) && (g_45 != ATgetArgument(h_19, 0))))
                            _fail(ATgetArgument(h_19, 0));
                          else
                            g_45 = ATgetArgument(h_19, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm i_19 = ATgetArgument(t, 1);
                        if(((ATgetType(i_19) != AT_LIST) || !(ATisEmpty(i_19))))
                          _fail(t);
                      }
                      {
                        ATerm j_19 = ATgetArgument(t, 2);
                        if(((ATgetType(j_19) != AT_LIST) || !(ATisEmpty(j_19))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_45)), (ATerm)ATempty, (ATerm) ATempty);
                  return(t);
                }
                t = alltd_1_0(m_6, t);
                if(((v_178 != NULL) && (v_178 != t)))
                  _fail(t);
                else
                  v_178 = t;
                t = not_null(l_1);
              }
              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(h_45), (ATerm)ATempty, (ATerm)ATempty, not_null(v_178));
            }
            ;
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            {
              ATerm k_19 = t;
              int l_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
                  if(match_cons(t, sym_Seq_2))
                    {
                      ATerm m_19 = ATgetArgument(t, 0);
                      if(match_cons(m_19, sym_Where_1))
                        {
                          if(((d_45 != NULL) && (d_45 != ATgetArgument(m_19, 0))))
                            _fail(ATgetArgument(m_19, 0));
                          else
                            d_45 = ATgetArgument(m_19, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm n_19 = ATgetArgument(t, 1);
                        if(match_cons(n_19, sym_Seq_2))
                          {
                            ATerm o_19 = ATgetArgument(n_19, 0);
                            if(match_cons(o_19, sym_Build_1))
                              {
                                if(((e_45 != NULL) && (e_45 != ATgetArgument(o_19, 0))))
                                  _fail(ATgetArgument(o_19, 0));
                                else
                                  e_45 = ATgetArgument(o_19, 0);
                              }
                            else
                              _fail(t);
                            if(((f_45 != NULL) && (f_45 != ATgetArgument(n_19, 1))))
                              _fail(ATgetArgument(n_19, 1));
                            else
                              f_45 = ATgetArgument(n_19, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_45)), not_null(f_45)));
                  ;
                  LocalPopChoice(l_19);
                }
              else
                {
                  t = k_19;
                  {
                    ATerm p_19 = t;
                    int q_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_45 = NULL,c_45 = NULL;
                        if(match_cons(t, sym_Seq_2))
                          {
                            ATerm r_19 = ATgetArgument(t, 0);
                            if(match_cons(r_19, sym_Where_1))
                              {
                                if(((b_45 != NULL) && (b_45 != ATgetArgument(r_19, 0))))
                                  _fail(ATgetArgument(r_19, 0));
                                else
                                  b_45 = ATgetArgument(r_19, 0);
                              }
                            else
                              _fail(t);
                            {
                              ATerm s_19 = ATgetArgument(t, 1);
                              if(match_cons(s_19, sym_Build_1))
                                {
                                  if(((c_45 != NULL) && (c_45 != ATgetArgument(s_19, 0))))
                                    _fail(ATgetArgument(s_19, 0));
                                  else
                                    c_45 = ATgetArgument(s_19, 0);
                                }
                              else
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_45), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_45)));
                        ;
                        LocalPopChoice(q_19);
                      }
                    else
                      {
                        t = p_19;
                        {
                          ATerm t_19 = t;
                          int u_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_45 = NULL;
                              if(match_cons(t, sym_Seq_2))
                                {
                                  if(((a_45 != NULL) && (a_45 != ATgetArgument(t, 0))))
                                    _fail(ATgetArgument(t, 0));
                                  else
                                    a_45 = ATgetArgument(t, 0);
                                  {
                                    ATerm v_19 = ATgetArgument(t, 1);
                                    if(!(match_cons(v_19, sym_Id_0)))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = not_null(a_45);
                              ;
                              LocalPopChoice(u_19);
                            }
                          else
                            {
                              t = t_19;
                              {
                                ATerm w_19 = t;
                                int x_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_44 = NULL;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        ATerm y_19 = ATgetArgument(t, 0);
                                        if(!(match_cons(y_19, sym_Id_0)))
                                          _fail(t);
                                        if(((z_44 != NULL) && (z_44 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          z_44 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = not_null(z_44);
                                    ;
                                    LocalPopChoice(x_19);
                                  }
                                else
                                  {
                                    t = w_19;
                                    {
                                      ATerm z_19 = t;
                                      int a_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL;
                                          if(match_cons(t, sym_Scope_2))
                                            {
                                              if(((w_44 != NULL) && (w_44 != ATgetArgument(t, 0))))
                                                _fail(ATgetArgument(t, 0));
                                              else
                                                w_44 = ATgetArgument(t, 0);
                                              {
                                                ATerm b_20 = ATgetArgument(t, 1);
                                                if(match_cons(b_20, sym_Scope_2))
                                                  {
                                                    if(((x_44 != NULL) && (x_44 != ATgetArgument(b_20, 0))))
                                                      _fail(ATgetArgument(b_20, 0));
                                                    else
                                                      x_44 = ATgetArgument(b_20, 0);
                                                    if(((y_44 != NULL) && (y_44 != ATgetArgument(b_20, 1))))
                                                      _fail(ATgetArgument(b_20, 1));
                                                    else
                                                      y_44 = ATgetArgument(b_20, 1);
                                                  }
                                                else
                                                  _fail(t);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm q_176 = NULL;
                                            ATerm m_1 = NULL;
                                            if(((m_1 != NULL) && (m_1 != t)))
                                              _fail(t);
                                            else
                                              m_1 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(w_44), not_null(x_44));
                                            t = conc_0_0(t);
                                            if(((q_176 != NULL) && (q_176 != t)))
                                              _fail(t);
                                            else
                                              q_176 = t;
                                            t = not_null(m_1);
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_176), not_null(y_44));
                                          }
                                          ;
                                          LocalPopChoice(a_20);
                                        }
                                      else
                                        {
                                          t = z_19;
                                          {
                                            ATerm c_20 = t;
                                            int d_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm v_44 = NULL;
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    ATerm e_20 = ATgetArgument(t, 0);
                                                    if(((ATgetType(e_20) != AT_LIST) || !(ATisEmpty(e_20))))
                                                      _fail(t);
                                                    if(((v_44 != NULL) && (v_44 != ATgetArgument(t, 1))))
                                                      _fail(ATgetArgument(t, 1));
                                                    else
                                                      v_44 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = not_null(v_44);
                                                ;
                                                LocalPopChoice(d_20);
                                              }
                                            else
                                              {
                                                t = c_20;
                                                {
                                                  ATerm f_20 = t;
                                                  int g_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm u_44 = NULL;
                                                      if(match_cons(t, sym_Thread_1))
                                                        {
                                                          if(((u_44 != NULL) && (u_44 != ATgetArgument(t, 0))))
                                                            _fail(ATgetArgument(t, 0));
                                                          else
                                                            u_44 = ATgetArgument(t, 0);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_i_20, (ATerm)ATinsert(ATempty, not_null(u_44)), (ATerm) ATempty);
                                                      ;
                                                      LocalPopChoice(g_20);
                                                    }
                                                  else
                                                    {
                                                      t = f_20;
                                                      {
                                                        ATerm j_20 = t;
                                                        int k_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm t_44 = NULL;
                                                            if(match_cons(t, sym_Some_1))
                                                              {
                                                                if(((t_44 != NULL) && (t_44 != ATgetArgument(t, 0))))
                                                                  _fail(ATgetArgument(t, 0));
                                                                else
                                                                  t_44 = ATgetArgument(t, 0);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_20, (ATerm)ATinsert(ATempty, not_null(t_44)), (ATerm) ATempty);
                                                            ;
                                                            LocalPopChoice(k_20);
                                                          }
                                                        else
                                                          {
                                                            t = j_20;
                                                            {
                                                              ATerm n_20 = t;
                                                              int o_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_44 = NULL;
                                                                  if(match_cons(t, sym_One_1))
                                                                    {
                                                                      if(((s_44 != NULL) && (s_44 != ATgetArgument(t, 0))))
                                                                        _fail(ATgetArgument(t, 0));
                                                                      else
                                                                        s_44 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_20, (ATerm)ATinsert(ATempty, not_null(s_44)), (ATerm) ATempty);
                                                                  ;
                                                                  LocalPopChoice(o_20);
                                                                }
                                                              else
                                                                {
                                                                  t = n_20;
                                                                  {
                                                                    ATerm r_20 = t;
                                                                    int s_20 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm r_44 = NULL;
                                                                        if(match_cons(t, sym_All_1))
                                                                          {
                                                                            if(((r_44 != NULL) && (r_44 != ATgetArgument(t, 0))))
                                                                              _fail(ATgetArgument(t, 0));
                                                                            else
                                                                              r_44 = ATgetArgument(t, 0);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        t = (ATerm) ATmakeAppl(sym_CallT_3, term_u_20, (ATerm)ATinsert(ATempty, not_null(r_44)), (ATerm) ATempty);
                                                                        ;
                                                                        LocalPopChoice(s_20);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_20;
                                                                        {
                                                                          ATerm v_20 = t;
                                                                          int w_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm q_44 = NULL;
                                                                              if(match_cons(t, sym_Bagof_1))
                                                                                {
                                                                                  if(((q_44 != NULL) && (q_44 != ATgetArgument(t, 0))))
                                                                                    _fail(ATgetArgument(t, 0));
                                                                                  else
                                                                                    q_44 = ATgetArgument(t, 0);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_20, (ATerm)ATinsert(ATempty, not_null(q_44)), (ATerm) ATempty);
                                                                              ;
                                                                              LocalPopChoice(w_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_20;
                                                                              {
                                                                                ATerm z_20 = t;
                                                                                int a_21 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL;
                                                                                    if(match_cons(t, sym_PrimT_3))
                                                                                      {
                                                                                        if(((m_44 != NULL) && (m_44 != ATgetArgument(t, 0))))
                                                                                          _fail(ATgetArgument(t, 0));
                                                                                        else
                                                                                          m_44 = ATgetArgument(t, 0);
                                                                                        if(((o_44 != NULL) && (o_44 != ATgetArgument(t, 1))))
                                                                                          _fail(ATgetArgument(t, 1));
                                                                                        else
                                                                                          o_44 = ATgetArgument(t, 1);
                                                                                        if(((n_44 != NULL) && (n_44 != ATgetArgument(t, 2))))
                                                                                          _fail(ATgetArgument(t, 2));
                                                                                        else
                                                                                          n_44 = ATgetArgument(t, 2);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    {
                                                                                      ATerm n_1 = NULL;
                                                                                      if(((n_1 != NULL) && (n_1 != t)))
                                                                                        _fail(t);
                                                                                      else
                                                                                        n_1 = t;
                                                                                      t = not_null(o_44);
                                                                                      {
                                                                                        ATerm j_120 (ATerm t)
                                                                                        {
                                                                                          ATerm b_21 = t;
                                                                                          int c_21 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              ATerm n_6 (ATerm t)
                                                                                              {
                                                                                                ATerm d_21 = t;
                                                                                                int e_21 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    t = CallIdFun_0_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(e_21);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = d_21;
                                                                                                    t = CallFailFun_0_0(t);
                                                                                                  }
                                                                                                return(t);
                                                                                              }
                                                                                              ATerm o_6 (ATerm t)
                                                                                              {
                                                                                                t = try_1_0(j_120, t);
                                                                                                return(t);
                                                                                              }
                                                                                              t = Cons_2_0(n_6, o_6, t);
                                                                                              ;
                                                                                              LocalPopChoice(c_21);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = b_21;
                                                                                              t = Cons_2_0(_id, j_120, t);
                                                                                            }
                                                                                          return(t);
                                                                                        }
                                                                                        t = j_120(t);
                                                                                        if(((p_44 != NULL) && (p_44 != t)))
                                                                                          _fail(t);
                                                                                        else
                                                                                          p_44 = t;
                                                                                        t = not_null(n_1);
                                                                                      }
                                                                                      t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(m_44), not_null(p_44), not_null(n_44));
                                                                                    }
                                                                                    ;
                                                                                    LocalPopChoice(a_21);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = z_20;
                                                                                    {
                                                                                      ATerm f_21 = t;
                                                                                      int g_21 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL;
                                                                                          if(match_cons(t, sym_CallT_3))
                                                                                            {
                                                                                              if(((i_44 != NULL) && (i_44 != ATgetArgument(t, 0))))
                                                                                                _fail(ATgetArgument(t, 0));
                                                                                              else
                                                                                                i_44 = ATgetArgument(t, 0);
                                                                                              if(((k_44 != NULL) && (k_44 != ATgetArgument(t, 1))))
                                                                                                _fail(ATgetArgument(t, 1));
                                                                                              else
                                                                                                k_44 = ATgetArgument(t, 1);
                                                                                              if(((j_44 != NULL) && (j_44 != ATgetArgument(t, 2))))
                                                                                                _fail(ATgetArgument(t, 2));
                                                                                              else
                                                                                                j_44 = ATgetArgument(t, 2);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          {
                                                                                            ATerm o_1 = NULL;
                                                                                            if(((o_1 != NULL) && (o_1 != t)))
                                                                                              _fail(t);
                                                                                            else
                                                                                              o_1 = t;
                                                                                            t = not_null(k_44);
                                                                                            {
                                                                                              ATerm i_120 (ATerm t)
                                                                                              {
                                                                                                ATerm h_21 = t;
                                                                                                int i_21 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm p_6 (ATerm t)
                                                                                                    {
                                                                                                      ATerm j_21 = t;
                                                                                                      int k_21 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = CallIdFun_0_0(t);
                                                                                                          ;
                                                                                                          LocalPopChoice(k_21);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = j_21;
                                                                                                          t = CallFailFun_0_0(t);
                                                                                                        }
                                                                                                      return(t);
                                                                                                    }
                                                                                                    ATerm q_6 (ATerm t)
                                                                                                    {
                                                                                                      t = try_1_0(i_120, t);
                                                                                                      return(t);
                                                                                                    }
                                                                                                    t = Cons_2_0(p_6, q_6, t);
                                                                                                    ;
                                                                                                    LocalPopChoice(i_21);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = h_21;
                                                                                                    t = Cons_2_0(_id, i_120, t);
                                                                                                  }
                                                                                                return(t);
                                                                                              }
                                                                                              t = i_120(t);
                                                                                              if(((l_44 != NULL) && (l_44 != t)))
                                                                                                _fail(t);
                                                                                              else
                                                                                                l_44 = t;
                                                                                              t = not_null(o_1);
                                                                                            }
                                                                                            t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(i_44), not_null(l_44), not_null(j_44));
                                                                                          }
                                                                                          ;
                                                                                          LocalPopChoice(g_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = f_21;
                                                                                          {
                                                                                            ATerm l_21 = t;
                                                                                            int m_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
                                                                                                if(match_cons(t, sym_PrimT_3))
                                                                                                  {
                                                                                                    if(((y_43 != NULL) && (y_43 != ATgetArgument(t, 0))))
                                                                                                      _fail(ATgetArgument(t, 0));
                                                                                                    else
                                                                                                      y_43 = ATgetArgument(t, 0);
                                                                                                    if(((a_44 != NULL) && (a_44 != ATgetArgument(t, 1))))
                                                                                                      _fail(ATgetArgument(t, 1));
                                                                                                    else
                                                                                                      a_44 = ATgetArgument(t, 1);
                                                                                                    if(((z_43 != NULL) && (z_43 != ATgetArgument(t, 2))))
                                                                                                      _fail(ATgetArgument(t, 2));
                                                                                                    else
                                                                                                      z_43 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                {
                                                                                                  ATerm p_1 = NULL;
                                                                                                  if(((p_1 != NULL) && (p_1 != t)))
                                                                                                    _fail(t);
                                                                                                  else
                                                                                                    p_1 = t;
                                                                                                  t = not_null(a_44);
                                                                                                  {
                                                                                                    ATerm r_6 (ATerm t)
                                                                                                    {
                                                                                                      ATerm s_6 (ATerm t)
                                                                                                      {
                                                                                                        ATerm n_21 = t;
                                                                                                        int o_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = CallIdFun_0_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(o_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = n_21;
                                                                                                            t = CallFailFun_0_0(t);
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = try_1_0(s_6, t);
                                                                                                      {
                                                                                                        ATerm p_21 = t;
                                                                                                        int q_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = CreateDef1_0_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(q_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = p_21;
                                                                                                            {
                                                                                                              ATerm r_21 = t;
                                                                                                              int s_21 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm t_21 = t;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm t_6 (ATerm t)
                                                                                                                      {
                                                                                                                        t = SVar_1_0(_id, t);
                                                                                                                        return(t);
                                                                                                                      }
                                                                                                                      t = CallT_3_0(t_6, Nil_0_0, Nil_0_0, t);
                                                                                                                      PopChoice();
                                                                                                                      _fail(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = t_21;
                                                                                                                    }
                                                                                                                  t = CreateDef2_0_0(t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(s_21);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = r_21;
                                                                                                                  {
                                                                                                                    ATerm u_6 (ATerm t)
                                                                                                                    {
                                                                                                                      t = (ATerm) ATempty;
                                                                                                                      return(t);
                                                                                                                    }
                                                                                                                    t = split_2_0(_id, u_6, t);
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                      return(t);
                                                                                                    }
                                                                                                    t = unzip_1_0(r_6, t);
                                                                                                    if(match_cons(t, sym__2))
                                                                                                      {
                                                                                                        if(((b_44 != NULL) && (b_44 != ATgetArgument(t, 0))))
                                                                                                          _fail(ATgetArgument(t, 0));
                                                                                                        else
                                                                                                          b_44 = ATgetArgument(t, 0);
                                                                                                        if(((c_44 != NULL) && (c_44 != ATgetArgument(t, 1))))
                                                                                                          _fail(ATgetArgument(t, 1));
                                                                                                        else
                                                                                                          c_44 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = not_null(c_44);
                                                                                                    t = concat_0_0(t);
                                                                                                    if(((d_44 != NULL) && (d_44 != t)))
                                                                                                      _fail(t);
                                                                                                    else
                                                                                                      d_44 = t;
                                                                                                    {
                                                                                                      ATerm u_21 = t;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = Nil_0_0(t);
                                                                                                          PopChoice();
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = u_21;
                                                                                                        }
                                                                                                      t = not_null(p_1);
                                                                                                    }
                                                                                                  }
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_44), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(y_43), not_null(b_44), not_null(z_43)));
                                                                                                }
                                                                                                ;
                                                                                                LocalPopChoice(m_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = l_21;
                                                                                                {
                                                                                                  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL;
                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                    {
                                                                                                      if(((s_43 != NULL) && (s_43 != ATgetArgument(t, 0))))
                                                                                                        _fail(ATgetArgument(t, 0));
                                                                                                      else
                                                                                                        s_43 = ATgetArgument(t, 0);
                                                                                                      if(((u_43 != NULL) && (u_43 != ATgetArgument(t, 1))))
                                                                                                        _fail(ATgetArgument(t, 1));
                                                                                                      else
                                                                                                        u_43 = ATgetArgument(t, 1);
                                                                                                      if(((t_43 != NULL) && (t_43 != ATgetArgument(t, 2))))
                                                                                                        _fail(ATgetArgument(t, 2));
                                                                                                      else
                                                                                                        t_43 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  {
                                                                                                    ATerm q_1 = NULL;
                                                                                                    if(((q_1 != NULL) && (q_1 != t)))
                                                                                                      _fail(t);
                                                                                                    else
                                                                                                      q_1 = t;
                                                                                                    t = not_null(u_43);
                                                                                                    {
                                                                                                      ATerm v_6 (ATerm t)
                                                                                                      {
                                                                                                        ATerm w_6 (ATerm t)
                                                                                                        {
                                                                                                          ATerm v_21 = t;
                                                                                                          int w_21 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = CallIdFun_0_0(t);
                                                                                                              ;
                                                                                                              LocalPopChoice(w_21);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = v_21;
                                                                                                              t = CallFailFun_0_0(t);
                                                                                                            }
                                                                                                          return(t);
                                                                                                        }
                                                                                                        t = try_1_0(w_6, t);
                                                                                                        {
                                                                                                          ATerm x_21 = t;
                                                                                                          int y_21 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = CreateDef1_0_0(t);
                                                                                                              ;
                                                                                                              LocalPopChoice(y_21);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = x_21;
                                                                                                              {
                                                                                                                ATerm z_21 = t;
                                                                                                                int a_22 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm b_22 = t;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm x_6 (ATerm t)
                                                                                                                        {
                                                                                                                          t = SVar_1_0(_id, t);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = CallT_3_0(x_6, Nil_0_0, Nil_0_0, t);
                                                                                                                        PopChoice();
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = b_22;
                                                                                                                      }
                                                                                                                    t = CreateDef2_0_0(t);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(a_22);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = z_21;
                                                                                                                    {
                                                                                                                      ATerm y_6 (ATerm t)
                                                                                                                      {
                                                                                                                        t = (ATerm) ATempty;
                                                                                                                        return(t);
                                                                                                                      }
                                                                                                                      t = split_2_0(_id, y_6, t);
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = unzip_1_0(v_6, t);
                                                                                                      if(match_cons(t, sym__2))
                                                                                                        {
                                                                                                          if(((v_43 != NULL) && (v_43 != ATgetArgument(t, 0))))
                                                                                                            _fail(ATgetArgument(t, 0));
                                                                                                          else
                                                                                                            v_43 = ATgetArgument(t, 0);
                                                                                                          if(((w_43 != NULL) && (w_43 != ATgetArgument(t, 1))))
                                                                                                            _fail(ATgetArgument(t, 1));
                                                                                                          else
                                                                                                            w_43 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = not_null(w_43);
                                                                                                      t = concat_0_0(t);
                                                                                                      if(((x_43 != NULL) && (x_43 != t)))
                                                                                                        _fail(t);
                                                                                                      else
                                                                                                        x_43 = t;
                                                                                                      {
                                                                                                        ATerm c_22 = t;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Nil_0_0(t);
                                                                                                            PopChoice();
                                                                                                            _fail(t);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = c_22;
                                                                                                          }
                                                                                                        t = not_null(q_1);
                                                                                                      }
                                                                                                    }
                                                                                                    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(x_43), (ATerm) ATmakeAppl(sym_CallT_3, not_null(s_43), not_null(v_43), not_null(t_43)));
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
  return(t);
}
ATerm repeat_1_0 (ATerm g_121 (ATerm), ATerm t)
{
  ATerm h_121 (ATerm t)
  {
    ATerm z_6 (ATerm t)
    {
      t = g_121(t);
      t = h_121(t);
      return(t);
    }
    t = try_1_0(z_6, t);
    return(t);
  }
  t = h_121(t);
  return(t);
}
ATerm downup2_2_0 (ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm t)
{
  t = j_122(t);
  {
    ATerm a_7 (ATerm t)
    {
      t = downup2_2_0(j_122, k_122, t);
      return(t);
    }
    t = SRTS_all(a_7, t);
    t = k_122(t);
  }
  return(t);
}
ATerm _2_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,r_1 = NULL,s_1 = NULL,u_1 = NULL,v_1 = NULL;
  ATerm w_1 = NULL;
  if(((w_1 != NULL) && (w_1 != t)))
    _fail(t);
  else
    w_1 = t;
  if(match_cons(t, sym__2))
    {
      if(((r_1 != NULL) && (r_1 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_1 = ATgetArgument(t, 0);
      if(((s_1 != NULL) && (s_1 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_1 = NULL;
    if(((y_1 != NULL) && (y_1 != t)))
      _fail(t);
    else
      y_1 = t;
    t = SSLgetAnnotations(not_null(w_1));
    if(((t_1 != NULL) && (t_1 != t)))
      _fail(t);
    else
      t_1 = t;
    t = not_null(y_1);
  }
  t = not_null(r_1);
  t = c_98(t);
  if(((u_1 != NULL) && (u_1 != t)))
    _fail(t);
  else
    u_1 = t;
  t = not_null(s_1);
  t = d_98(t);
  if(((v_1 != NULL) && (v_1 != t)))
    _fail(t);
  else
    v_1 = t;
  {
    ATerm x_1 = NULL;
    ATerm z_1 = NULL;
    if(((z_1 != NULL) && (z_1 != t)))
      _fail(t);
    else
      z_1 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(u_1), not_null(v_1)), not_null(t_1));
    if(((x_1 != NULL) && (x_1 != t)))
      _fail(t);
    else
      x_1 = t;
    t = not_null(z_1);
    t = not_null(x_1);
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_2 = NULL;
  if(((a_2 != NULL) && (a_2 != t)))
    _fail(t);
  else
    a_2 = t;
  {
    ATerm s_511 = NULL;
    ATerm b_2 = NULL;
    if(((b_2 != NULL) && (b_2 != t)))
      _fail(t);
    else
      b_2 = t;
    t = term_d_22;
    t = whoami_0_0(t);
    if(((s_511 != NULL) && (s_511 != t)))
      _fail(t);
    else
      s_511 = t;
    t = not_null(b_2);
    t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_22), not_null(s_511)), term_f_22));
    t = printnl_0_0(t);
    t = term_h_22;
    t = exit_0_0(t);
    t = not_null(a_2);
  }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_67 != NULL) && (x_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_67 = ATgetArgument(t, 0);
      if(((y_67 != NULL) && (y_67 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_2 = NULL;
    if(((c_2 != NULL) && (c_2 != t)))
      _fail(t);
    else
      c_2 = t;
    t = SSL_printnl(not_null(x_67), not_null(y_67));
    t = not_null(c_2);
  }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm t_59 = NULL;
  if(((t_59 != NULL) && (t_59 != t)))
    _fail(t);
  else
    t_59 = t;
  t = SSL_implode_string(not_null(t_59));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      {
        ATerm z_46 = NULL,a_47 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((z_46 != NULL) && (z_46 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              z_46 = ATgetFirst((ATermList) t);
            if(((a_47 != NULL) && (a_47 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              a_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(z_46);
        {
          ATerm b_7 (ATerm t)
          {
            t = not_null(a_47);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(b_7, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm y_46 = NULL;
  ATerm n_198 = NULL;
  if(((n_198 != NULL) && (n_198 != t)))
    _fail(t);
  else
    n_198 = t;
  {
    ATerm d_2 = NULL;
    if(((d_2 != NULL) && (d_2 != t)))
      _fail(t);
    else
      d_2 = t;
    t = not_null(n_198);
    {
      ATerm o_198 = NULL;
      if(((o_198 != NULL) && (o_198 != t)))
        _fail(t);
      else
        o_198 = t;
      t = SSL_explode_term(not_null(o_198));
      if(match_cons(t, sym__2))
        {
          ATerm k_22 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) k_22) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          if(((y_46 != NULL) && (y_46 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_46 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(d_2);
    }
  }
  t = not_null(y_46);
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_128 (ATerm), ATerm t)
{
  ATerm n_128 (ATerm t)
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_128, t);
        ;
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        t = Nil_0_0(t);
        t = m_128(t);
      }
    return(t);
  }
  t = n_128(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_46 != NULL) && (x_46 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_46 = ATgetArgument(t, 0);
      if(((w_46 != NULL) && (w_46 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(x_46);
  {
    ATerm c_7 (ATerm t)
    {
      t = not_null(w_46);
      return(t);
    }
    t = at_end_1_0(c_7, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(o_22);
    }
  else
    {
      t = n_22;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm u_59 = NULL;
  if(((u_59 != NULL) && (u_59 != t)))
    _fail(t);
  else
    u_59 = t;
  t = SSL_explode_string(not_null(u_59));
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      {
        ATerm r_22 = t;
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_7 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(d_7, t);
            ;
            LocalPopChoice(s_22);
          }
        else
          {
            t = r_22;
            {
              ATerm t_22 = t;
              int u_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_69 = NULL;
                  if(match_cons(t, sym_Path_1))
                    {
                      if(((t_69 != NULL) && (t_69 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        t_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(t_69);
                  ;
                  LocalPopChoice(u_22);
                }
              else
                {
                  t = t_22;
                  {
                    ATerm v_22 = t;
                    int w_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_69 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            if(((s_69 != NULL) && (s_69 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              s_69 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = not_null(s_69);
                        {
                          ATerm x_22 = t;
                          int y_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0_0(t);
                              ;
                              LocalPopChoice(y_22);
                            }
                          else
                            {
                              t = x_22;
                              {
                                ATerm e_7 (ATerm t)
                                {
                                  t = term_z_22;
                                  return(t);
                                }
                                t = debug_1_0(e_7, t);
                                _fail(t);
                              }
                            }
                        }
                        ;
                        LocalPopChoice(w_22);
                      }
                    else
                      {
                        t = v_22;
                        {
                          ATerm q_69 = NULL,r_69 = NULL;
                          if(match_cons(t, sym_Prefix_2))
                            {
                              if(((q_69 != NULL) && (q_69 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                q_69 = ATgetArgument(t, 0);
                              if(((r_69 != NULL) && (r_69 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                r_69 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          {
                            ATerm z_481 = NULL;
                            ATerm e_2 = NULL;
                            if(((e_2 != NULL) && (e_2 != t)))
                              _fail(t);
                            else
                              e_2 = t;
                            t = not_null(q_69);
                            t = eval_config_0_0(t);
                            if(((z_481 != NULL) && (z_481 != t)))
                              _fail(t);
                            else
                              z_481 = t;
                            t = not_null(e_2);
                            {
                              ATerm l_482 = NULL;
                              ATerm f_2 = NULL;
                              if(((f_2 != NULL) && (f_2 != t)))
                                _fail(t);
                              else
                                f_2 = t;
                              t = not_null(r_69);
                              t = eval_config_0_0(t);
                              if(((l_482 != NULL) && (l_482 != t)))
                                _fail(t);
                              else
                                l_482 = t;
                              t = not_null(f_2);
                              t = (ATerm) ATmakeAppl(sym__2, not_null(z_481), not_null(l_482));
                            }
                            t = conc_strings_0_0(t);
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
ATerm get_config_0_0 (ATerm t)
{
  ATerm p_69 = NULL;
  if(((p_69 != NULL) && (p_69 != t)))
    _fail(t);
  else
    p_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_23, not_null(p_69));
  t = table_get_0_0(t);
  {
    ATerm f_7 (ATerm t)
    {
      t = eval_config_0_0(t);
      {
        ATerm g_2 = NULL;
        if(((g_2 != NULL) && (g_2 != t)))
          _fail(t);
        else
          g_2 = t;
        {
          ATerm a_481 = NULL;
          ATerm h_2 = NULL;
          if(((h_2 != NULL) && (h_2 != t)))
            _fail(t);
          else
            h_2 = t;
          if(((a_481 != NULL) && (a_481 != t)))
            _fail(t);
          else
            a_481 = t;
          t = not_null(h_2);
          t = (ATerm) ATmakeAppl(sym__3, term_a_23, not_null(p_69), not_null(a_481));
          t = table_put_0_0(t);
          t = not_null(g_2);
        }
      }
      return(t);
    }
    t = try_1_0(f_7, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_141 (ATerm), ATerm t)
{
  ATerm g_7 (ATerm t)
  {
    ATerm i_2 = NULL;
    if(((i_2 != NULL) && (i_2 != t)))
      _fail(t);
    else
      i_2 = t;
    {
      ATerm h_463 = NULL;
      ATerm j_2 = NULL;
      if(((j_2 != NULL) && (j_2 != t)))
        _fail(t);
      else
        j_2 = t;
      t = term_b_23;
      t = get_config_0_0(t);
      if(((h_463 != NULL) && (h_463 != t)))
        _fail(t);
      else
        h_463 = t;
      t = not_null(j_2);
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_463), term_c_23);
      t = geq_0_0(t);
      t = not_null(i_2);
    }
    t = g_141(t);
    return(t);
  }
  t = try_1_0(g_7, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm p_64 = NULL,q_64 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_64 != NULL) && (p_64 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_64 = ATgetArgument(t, 0);
      {
        ATerm d_23 = ATgetArgument(t, 1);
        if(match_cons(d_23, sym_Stream_1))
          {
            if(((q_64 != NULL) && (q_64 != ATgetArgument(d_23, 0))))
              _fail(ATgetArgument(d_23, 0));
            else
              q_64 = ATgetArgument(d_23, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputc(not_null(p_64), not_null(q_64));
  {
    ATerm f_404 = NULL;
    ATerm k_2 = NULL;
    if(((k_2 != NULL) && (k_2 != t)))
      _fail(t);
    else
      k_2 = t;
    if(((f_404 != NULL) && (f_404 != t)))
      _fail(t);
    else
      f_404 = t;
    t = not_null(k_2);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_404));
  }
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_23 = ATgetArgument(t, 0);
      if(match_cons(e_23, sym_Stream_1))
        {
          if(((d_68 != NULL) && (d_68 != ATgetArgument(e_23, 0))))
            _fail(ATgetArgument(e_23, 0));
          else
            d_68 = ATgetArgument(e_23, 0);
        }
      else
        _fail(t);
      if(((e_68 != NULL) && (e_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(d_68), not_null(e_68));
  {
    ATerm t_446 = NULL;
    ATerm l_2 = NULL;
    if(((l_2 != NULL) && (l_2 != t)))
      _fail(t);
    else
      l_2 = t;
    if(((t_446 != NULL) && (t_446 != t)))
      _fail(t);
    else
      t_446 = t;
    t = not_null(l_2);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_446));
  }
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm h_448 = NULL;
      ATerm m_2 = NULL;
      if(((m_2 != NULL) && (m_2 != t)))
        _fail(t);
      else
        m_2 = t;
      if(((h_448 != NULL) && (h_448 != t)))
        _fail(t);
      else
        h_448 = t;
      t = not_null(m_2);
      t = (ATerm) ATmakeAppl(sym__2, term_f_23, not_null(h_448));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(h_7, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_23 = ATgetArgument(t, 0);
      if(match_cons(g_23, sym_Stream_1))
        {
          if(((z_67 != NULL) && (z_67 != ATgetArgument(g_23, 0))))
            _fail(ATgetArgument(g_23, 0));
          else
            z_67 = ATgetArgument(g_23, 0);
        }
      else
        _fail(t);
      if(((a_68 != NULL) && (a_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(z_67), not_null(a_68));
  {
    ATerm n_445 = NULL;
    ATerm n_2 = NULL;
    if(((n_2 != NULL) && (n_2 != t)))
      _fail(t);
    else
      n_2 = t;
    if(((n_445 != NULL) && (n_445 != t)))
      _fail(t);
    else
      n_445 = t;
    t = not_null(n_2);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_445));
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_140 (ATerm), ATerm t)
{
  ATerm h_68 = NULL;
  ATerm s_448 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_448 != NULL) && (s_448 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_448 = ATgetArgument(t, 0);
      if(((h_68 != NULL) && (h_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(s_448);
  {
    ATerm d_449 = NULL;
    ATerm o_2 = NULL;
    if(((o_2 != NULL) && (o_2 != t)))
      _fail(t);
    else
      o_2 = t;
    if(((d_449 != NULL) && (d_449 != t)))
      _fail(t);
    else
      d_449 = t;
    t = not_null(o_2);
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_449), term_h_23);
    t = open_stream_0_0(t);
    {
      ATerm o_449 = NULL;
      ATerm p_2 = NULL;
      if(((p_2 != NULL) && (p_2 != t)))
        _fail(t);
      else
        p_2 = t;
      if(((o_449 != NULL) && (o_449 != t)))
        _fail(t);
      else
        o_449 = t;
      t = not_null(p_2);
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_449), not_null(h_68));
      t = c_140(t);
      t = fclose_0_0(t);
      t = not_null(h_68);
    }
  }
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm c_71 = NULL;
  ATerm q_2 = NULL;
  if(((q_2 != NULL) && (q_2 != t)))
    _fail(t);
  else
    q_2 = t;
  {
    ATerm i_7 (ATerm t)
    {
      ATerm i_23 = t;
      int j_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_7 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_71 != NULL) && (c_71 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_71 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(j_7, t);
          ;
          LocalPopChoice(j_23);
        }
      else
        {
          t = i_23;
          t = term_k_23;
          if(((c_71 != NULL) && (c_71 != t)))
            _fail(t);
          else
            c_71 = t;
        }
      return(t);
    }
    t = _2_0(i_7, _id, t);
    t = not_null(q_2);
  }
  {
    ATerm k_7 (ATerm t)
    {
      ATerm l_7 (ATerm t)
      {
        t = not_null(c_71);
        return(t);
      }
      t = split_2_0(l_7, _id, t);
      return(t);
    }
    t = _2_0(_id, k_7, t);
    {
      ATerm l_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_7 (ATerm t)
          {
            ATerm n_7 (ATerm t)
            {
              if(!(match_cons(t, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1_0(n_7, t);
            return(t);
          }
          t = _2_0(m_7, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(m_23);
        }
      else
        {
          t = l_23;
          t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm e_143 (ATerm), ATerm t)
{
  ATerm z_70 = NULL;
  ATerm r_2 = NULL;
  if(((r_2 != NULL) && (r_2 != t)))
    _fail(t);
  else
    r_2 = t;
  t = dtime_0_0(t);
  t = not_null(r_2);
  t = e_143(t);
  {
    ATerm s_2 = NULL;
    if(((s_2 != NULL) && (s_2 != t)))
      _fail(t);
    else
      s_2 = t;
    t = dtime_0_0(t);
    if(((z_70 != NULL) && (z_70 != t)))
      _fail(t);
    else
      z_70 = t;
    t = not_null(s_2);
    {
      ATerm a_71 = NULL,b_71 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((a_71 != NULL) && (a_71 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_71 = ATgetArgument(t, 0);
          if(((b_71 != NULL) && (b_71 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            b_71 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_71)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_70))), not_null(b_71));
    }
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL;
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Stream_1))
        {
          if(((t_64 != NULL) && (t_64 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_fclose(not_null(t_64));
      ;
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      if(((u_64 != NULL) && (u_64 != t)))
        _fail(t);
      else
        u_64 = t;
      t = SSL_fclose(not_null(u_64));
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm f_68 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((f_68 != NULL) && (f_68 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(f_68));
  return(t);
}
ATerm debug_1_0 (ATerm o_139 (ATerm), ATerm t)
{
  ATerm t_2 = NULL;
  if(((t_2 != NULL) && (t_2 != t)))
    _fail(t);
  else
    t_2 = t;
  {
    ATerm p_439 = NULL;
    ATerm u_2 = NULL;
    if(((u_2 != NULL) && (u_2 != t)))
      _fail(t);
    else
      u_2 = t;
    t = o_139(t);
    if(((p_439 != NULL) && (p_439 != t)))
      _fail(t);
    else
      p_439 = t;
    t = not_null(u_2);
    {
      ATerm w_439 = NULL;
      ATerm v_2 = NULL;
      if(((v_2 != NULL) && (v_2 != t)))
        _fail(t);
      else
        v_2 = t;
      if(((w_439 != NULL) && (w_439 != t)))
        _fail(t);
      else
        w_439 = t;
      t = not_null(v_2);
      t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_439)), not_null(p_439)));
    }
    t = printnl_0_0(t);
    t = not_null(t_2);
  }
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_64 != NULL) && (r_64 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_64 = ATgetArgument(t, 0);
      if(((s_64 != NULL) && (s_64 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(r_64), not_null(s_64));
  {
    ATerm v_404 = NULL;
    ATerm w_2 = NULL;
    if(((w_2 != NULL) && (w_2 != t)))
      _fail(t);
    else
      w_2 = t;
    if(((v_404 != NULL) && (v_404 != t)))
      _fail(t);
    else
      v_404 = t;
    t = not_null(w_2);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_404));
  }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm s_59 = NULL;
  if(((s_59 != NULL) && (s_59 != t)))
    _fail(t);
  else
    s_59 = t;
  t = SSL_is_string(not_null(s_59));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  t = SSL_stdin_stream();
  {
    ATerm w_406 = NULL;
    ATerm x_2 = NULL;
    if(((x_2 != NULL) && (x_2 != t)))
      _fail(t);
    else
      x_2 = t;
    if(((w_406 != NULL) && (w_406 != t)))
      _fail(t);
    else
      w_406 = t;
    t = not_null(x_2);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_406));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  t = SSL_stdout_stream();
  {
    ATerm h_407 = NULL;
    ATerm y_2 = NULL;
    if(((y_2 != NULL) && (y_2 != t)))
      _fail(t);
    else
      y_2 = t;
    if(((h_407 != NULL) && (h_407 != t)))
      _fail(t);
    else
      h_407 = t;
    t = not_null(y_2);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_407));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  t = SSL_stderr_stream();
  {
    ATerm s_407 = NULL;
    ATerm z_2 = NULL;
    if(((z_2 != NULL) && (z_2 != t)))
      _fail(t);
    else
      z_2 = t;
    if(((s_407 != NULL) && (s_407 != t)))
      _fail(t);
    else
      s_407 = t;
    t = not_null(z_2);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_407));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_stderr_0)))
        _fail(t);
      t = stderr_stream_0_0(t);
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_stdout_0)))
              _fail(t);
            t = stdout_stream_0_0(t);
            ;
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = stdin_stream_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL;
  ATerm h_280 = NULL;
  if(((h_280 != NULL) && (h_280 != t)))
    _fail(t);
  else
    h_280 = t;
  {
    ATerm a_3 = NULL;
    if(((a_3 != NULL) && (a_3 != t)))
      _fail(t);
    else
      a_3 = t;
    t = not_null(h_280);
    {
      ATerm i_280 = NULL;
      if(((i_280 != NULL) && (i_280 != t)))
        _fail(t);
      else
        i_280 = t;
      t = SSL_explode_term(not_null(i_280));
      if(match_cons(t, sym__2))
        {
          ATerm t_23 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) t_23) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm u_23 = ATgetArgument(t, 1);
            if(((ATgetType(u_23) == AT_LIST) && !(ATisEmpty(u_23))))
              {
                if(((t_54 != NULL) && (t_54 != ATgetFirst((ATermList) u_23))))
                  _fail(ATgetFirst((ATermList) u_23));
                else
                  t_54 = ATgetFirst((ATermList) u_23);
                if(((s_54 != NULL) && (s_54 != (ATerm) ATgetNext((ATermList) u_23))))
                  _fail((ATerm) ATgetNext((ATermList) u_23));
                else
                  s_54 = (ATerm) ATgetNext((ATermList) u_23);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = not_null(a_3);
    }
  }
  t = not_null(t_54);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_23 = ATgetArgument(t, 0);
      ATerm w_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        {
          ATerm z_23 = t;
          int a_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_7 (ATerm t)
              {
                ATerm h_398 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    if(((h_398 != NULL) && (h_398 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      h_398 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = not_null(h_398);
                return(t);
              }
              t = _2_0(o_7, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(a_24);
            }
          else
            {
              t = z_23;
              t = _2_0(is_string_0_0, _id, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_68 = NULL;
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_447 = NULL;
      ATerm b_3 = NULL;
      if(((b_3 != NULL) && (b_3 != t)))
        _fail(t);
      else
        b_3 = t;
      if(((j_447 != NULL) && (j_447 != t)))
        _fail(t);
      else
        j_447 = t;
      t = not_null(b_3);
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_447), term_d_24);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
      {
        ATerm p_7 (ATerm t)
        {
          t = term_e_24;
          return(t);
        }
        t = debug_1_0(p_7, t);
        _fail(t);
      }
    }
  {
    ATerm c_3 = NULL;
    if(((c_3 != NULL) && (c_3 != t)))
      _fail(t);
    else
      c_3 = t;
    t = read_from_stream_0_0(t);
    if(((g_68 != NULL) && (g_68 != t)))
      _fail(t);
    else
      g_68 = t;
    t = not_null(c_3);
    t = fclose_0_0(t);
    t = not_null(g_68);
  }
  return(t);
}
ATerm split_2_0 (ATerm m_135 (ATerm), ATerm n_135 (ATerm), ATerm t)
{
  ATerm u_283 = NULL;
  ATerm d_3 = NULL;
  if(((d_3 != NULL) && (d_3 != t)))
    _fail(t);
  else
    d_3 = t;
  t = m_135(t);
  if(((u_283 != NULL) && (u_283 != t)))
    _fail(t);
  else
    u_283 = t;
  t = not_null(d_3);
  {
    ATerm b_284 = NULL;
    ATerm e_3 = NULL;
    if(((e_3 != NULL) && (e_3 != t)))
      _fail(t);
    else
      e_3 = t;
    t = n_135(t);
    if(((b_284 != NULL) && (b_284 != t)))
      _fail(t);
    else
      b_284 = t;
    t = not_null(e_3);
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_283), not_null(b_284));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm y_70 = NULL;
  ATerm f_3 = NULL;
  if(((f_3 != NULL) && (f_3 != t)))
    _fail(t);
  else
    f_3 = t;
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((y_70 != NULL) && (y_70 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_70 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(q_7, t);
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = term_h_24;
        if(((y_70 != NULL) && (y_70 != t)))
          _fail(t);
        else
          y_70 = t;
      }
    t = not_null(f_3);
  }
  {
    ATerm r_7 (ATerm t)
    {
      t = not_null(y_70);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, r_7, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm s_7 (ATerm t)
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-k", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    ATerm g_3 = NULL;
    if(((g_3 != NULL) && (g_3 != t)))
      _fail(t);
    else
      g_3 = t;
    {
      ATerm d_515 = NULL;
      ATerm h_3 = NULL;
      if(((h_3 != NULL) && (h_3 != t)))
        _fail(t);
      else
        h_3 = t;
      t = string_to_int_0_0(t);
      if(((d_515 != NULL) && (d_515 != t)))
        _fail(t);
      else
        d_515 = t;
      t = not_null(h_3);
      t = (ATerm) ATmakeAppl(sym__2, term_k_24, not_null(d_515));
      t = set_config_0_0(t);
      t = not_null(g_3);
    }
    return(t);
  }
  ATerm u_7 (ATerm t)
  {
    t = term_l_24;
    return(t);
  }
  t = ArgOption_3_0(s_7, t_7, u_7, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm u_61 = NULL;
  if(((u_61 != NULL) && (u_61 != t)))
    _fail(t);
  else
    u_61 = t;
  t = SSL_string_to_int(not_null(u_61));
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_7 (ATerm t)
      {
        ATerm o_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-S", 0, ATtrue)))
              _fail(t);
            ;
            LocalPopChoice(p_24);
          }
        else
          {
            t = o_24;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
          }
        return(t);
      }
      ATerm w_7 (ATerm t)
      {
        ATerm i_3 = NULL;
        if(((i_3 != NULL) && (i_3 != t)))
          _fail(t);
        else
          i_3 = t;
        t = term_r_24;
        t = set_config_0_0(t);
        t = not_null(i_3);
        t = term_s_24;
        return(t);
      }
      ATerm x_7 (ATerm t)
      {
        t = term_t_24;
        return(t);
      }
      t = Option_3_0(v_7, w_7, x_7, t);
      ;
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      {
        ATerm u_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_7 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm z_7 (ATerm t)
            {
              ATerm j_3 = NULL;
              if(((j_3 != NULL) && (j_3 != t)))
                _fail(t);
              else
                j_3 = t;
              {
                ATerm i_520 = NULL;
                ATerm k_3 = NULL;
                if(((k_3 != NULL) && (k_3 != t)))
                  _fail(t);
                else
                  k_3 = t;
                t = string_to_int_0_0(t);
                if(((i_520 != NULL) && (i_520 != t)))
                  _fail(t);
                else
                  i_520 = t;
                t = not_null(k_3);
                t = (ATerm) ATmakeAppl(sym__2, term_b_23, not_null(i_520));
                t = set_config_0_0(t);
                t = not_null(j_3);
              }
              {
                ATerm t_520 = NULL;
                ATerm l_3 = NULL;
                if(((l_3 != NULL) && (l_3 != t)))
                  _fail(t);
                else
                  l_3 = t;
                if(((t_520 != NULL) && (t_520 != t)))
                  _fail(t);
                else
                  t_520 = t;
                t = not_null(l_3);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_520));
              }
              return(t);
            }
            ATerm a_8 (ATerm t)
            {
              t = term_w_24;
              return(t);
            }
            t = ArgOption_3_0(y_7, z_7, a_8, t);
            ;
            LocalPopChoice(v_24);
          }
        else
          {
            t = u_24;
            {
              ATerm b_8 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm c_8 (ATerm t)
              {
                ATerm m_3 = NULL;
                if(((m_3 != NULL) && (m_3 != t)))
                  _fail(t);
                else
                  m_3 = t;
                t = term_y_24;
                t = set_config_0_0(t);
                t = not_null(m_3);
                t = term_z_24;
                return(t);
              }
              ATerm d_8 (ATerm t)
              {
                t = term_a_25;
                return(t);
              }
              t = Option_3_0(b_8, c_8, d_8, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm e_8 (ATerm t)
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-o", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm f_8 (ATerm t)
  {
    ATerm n_3 = NULL;
    if(((n_3 != NULL) && (n_3 != t)))
      _fail(t);
    else
      n_3 = t;
    {
      ATerm q_517 = NULL;
      ATerm o_3 = NULL;
      if(((o_3 != NULL) && (o_3 != t)))
        _fail(t);
      else
        o_3 = t;
      if(((q_517 != NULL) && (q_517 != t)))
        _fail(t);
      else
        q_517 = t;
      t = not_null(o_3);
      t = (ATerm) ATmakeAppl(sym__2, term_f_25, not_null(q_517));
      t = set_config_0_0(t);
      t = not_null(n_3);
    }
    {
      ATerm b_518 = NULL;
      ATerm p_3 = NULL;
      if(((p_3 != NULL) && (p_3 != t)))
        _fail(t);
      else
        p_3 = t;
      if(((b_518 != NULL) && (b_518 != t)))
        _fail(t);
      else
        b_518 = t;
      t = not_null(p_3);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_518));
    }
    return(t);
  }
  ATerm g_8 (ATerm t)
  {
    t = term_g_25;
    return(t);
  }
  t = ArgOption_3_0(e_8, f_8, g_8, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(i_25);
    }
  else
    {
      t = h_25;
      {
        ATerm h_8 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm i_8 (ATerm t)
        {
          ATerm q_3 = NULL;
          if(((q_3 != NULL) && (q_3 != t)))
            _fail(t);
          else
            q_3 = t;
          t = term_k_25;
          t = set_config_0_0(t);
          t = not_null(q_3);
          t = term_l_25;
          return(t);
        }
        ATerm j_8 (ATerm t)
        {
          t = term_m_25;
          return(t);
        }
        t = Option_3_0(h_8, i_8, j_8, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register-usage-info", 0, ATtrue)))
        _fail(t);
      t = register_usage_1_0(l_0, t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((s_73 != NULL) && (s_73 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              s_73 = ATgetFirst((ATermList) t);
            {
              ATerm p_25 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(p_25) == AT_LIST) && !(ATisEmpty(p_25))))
                {
                  if(((q_73 != NULL) && (q_73 != ATgetFirst((ATermList) p_25))))
                    _fail(ATgetFirst((ATermList) p_25));
                  else
                    q_73 = ATgetFirst((ATermList) p_25);
                  if(((r_73 != NULL) && (r_73 != (ATerm) ATgetNext((ATermList) p_25))))
                    _fail((ATerm) ATgetNext((ATermList) p_25));
                  else
                    r_73 = (ATerm) ATgetNext((ATermList) p_25);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        {
          ATerm r_3 = NULL;
          if(((r_3 != NULL) && (r_3 != t)))
            _fail(t);
          else
            r_3 = t;
          t = not_null(s_73);
          t = i_0(t);
          t = not_null(r_3);
          {
            ATerm y_554 = NULL;
            ATerm s_3 = NULL;
            if(((s_3 != NULL) && (s_3 != t)))
              _fail(t);
            else
              s_3 = t;
            t = not_null(q_73);
            t = k_0(t);
            if(((y_554 != NULL) && (y_554 != t)))
              _fail(t);
            else
              y_554 = t;
            t = not_null(s_3);
            t = (ATerm) ATinsert(CheckATermList(not_null(r_73)), not_null(y_554));
          }
        }
      }
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm k_8 (ATerm t)
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm l_8 (ATerm t)
  {
    ATerm t_3 = NULL;
    if(((t_3 != NULL) && (t_3 != t)))
      _fail(t);
    else
      t_3 = t;
    {
      ATerm g_516 = NULL;
      ATerm u_3 = NULL;
      if(((u_3 != NULL) && (u_3 != t)))
        _fail(t);
      else
        u_3 = t;
      if(((g_516 != NULL) && (g_516 != t)))
        _fail(t);
      else
        g_516 = t;
      t = not_null(u_3);
      t = (ATerm) ATmakeAppl(sym__2, term_s_25, not_null(g_516));
      t = set_config_0_0(t);
      t = not_null(t_3);
    }
    {
      ATerm r_516 = NULL;
      ATerm v_3 = NULL;
      if(((v_3 != NULL) && (v_3 != t)))
        _fail(t);
      else
        v_3 = t;
      if(((r_516 != NULL) && (r_516 != t)))
        _fail(t);
      else
        r_516 = t;
      t = not_null(v_3);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_516));
    }
    return(t);
  }
  ATerm m_8 (ATerm t)
  {
    t = term_t_25;
    return(t);
  }
  t = ArgOption_3_0(k_8, l_8, m_8, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      {
        ATerm w_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(x_25);
          }
        else
          {
            t = w_25;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  {
    ATerm z_512 = NULL;
    ATerm w_3 = NULL;
    if(((w_3 != NULL) && (w_3 != t)))
      _fail(t);
    else
      w_3 = t;
    t = term_d_22;
    t = whoami_0_0(t);
    if(((z_512 != NULL) && (z_512 != t)))
      _fail(t);
    else
      z_512 = t;
    t = not_null(w_3);
    t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATinsert(ATinsert(ATempty, term_y_25), not_null(z_512)));
    t = printnl_0_0(t);
    t = term_h_22;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_25;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm h_71 = NULL;
  if(((h_71 != NULL) && (h_71 != t)))
    _fail(t);
  else
    h_71 = t;
  t = SSL_TicksToSeconds(not_null(h_71));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_61 != NULL) && (z_61 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_61 = ATgetArgument(t, 0);
      if(((a_62 != NULL) && (a_62 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(z_61), not_null(a_62));
        ;
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = SSL_addr(not_null(z_61), not_null(a_62));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm x_133 (ATerm), ATerm y_133 (ATerm), ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = x_133(t);
      ;
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      {
        ATerm d_53 = NULL,e_53 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((d_53 != NULL) && (d_53 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              d_53 = ATgetFirst((ATermList) t);
            if(((e_53 != NULL) && (e_53 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              e_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_259 = NULL;
          ATerm x_3 = NULL;
          if(((x_3 != NULL) && (x_3 != t)))
            _fail(t);
          else
            x_3 = t;
          t = not_null(e_53);
          t = foldr_2_0(x_133, y_133, t);
          if(((y_259 != NULL) && (y_259 != t)))
            _fail(t);
          else
            y_259 = t;
          t = not_null(x_3);
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_53), not_null(y_259));
          t = y_133(t);
        }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm q_137 (ATerm), ATerm r_137 (ATerm), ATerm t)
{
  ATerm w_59 = NULL;
  ATerm x_350 = NULL;
  if(((x_350 != NULL) && (x_350 != t)))
    _fail(t);
  else
    x_350 = t;
  {
    ATerm y_3 = NULL;
    if(((y_3 != NULL) && (y_3 != t)))
      _fail(t);
    else
      y_3 = t;
    t = not_null(x_350);
    {
      ATerm y_350 = NULL;
      if(((y_350 != NULL) && (y_350 != t)))
        _fail(t);
      else
        y_350 = t;
      t = SSL_explode_term(not_null(y_350));
      if(match_cons(t, sym__2))
        {
          ATerm e_26 = ATgetArgument(t, 0);
          if(((w_59 != NULL) && (w_59 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            w_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(y_3);
    }
  }
  t = not_null(w_59);
  t = foldr_2_0(q_137, r_137, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  {
    ATerm n_8 (ATerm t)
    {
      t = term_q_24;
      return(t);
    }
    t = crush_2_0(n_8, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_62 != NULL) && (z_62 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_62 = ATgetArgument(t, 0);
      if(((a_63 != NULL) && (a_63 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_3 = NULL;
    if(((z_3 != NULL) && (z_3 != t)))
      _fail(t);
    else
      z_3 = t;
    {
      ATerm f_26 = t;
      int g_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_gti(not_null(z_62), not_null(a_63));
          ;
          LocalPopChoice(g_26);
        }
      else
        {
          t = f_26;
          t = SSL_gtr(not_null(z_62), not_null(a_63));
        }
      t = not_null(z_3);
    }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_63 = NULL;
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym__2))
        {
          if(((f_63 != NULL) && (f_63 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            f_63 = ATgetArgument(t, 0);
          if(((f_63 != NULL) && (f_63 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_141 (ATerm), ATerm t)
{
  ATerm o_8 (ATerm t)
  {
    ATerm a_4 = NULL;
    if(((a_4 != NULL) && (a_4 != t)))
      _fail(t);
    else
      a_4 = t;
    {
      ATerm r_462 = NULL;
      ATerm b_4 = NULL;
      if(((b_4 != NULL) && (b_4 != t)))
        _fail(t);
      else
        b_4 = t;
      t = term_b_23;
      t = get_config_0_0(t);
      if(((r_462 != NULL) && (r_462 != t)))
        _fail(t);
      else
        r_462 = t;
      t = not_null(b_4);
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_462), term_h_22);
      t = geq_0_0(t);
      t = not_null(a_4);
    }
    t = f_141(t);
    return(t);
  }
  t = try_1_0(o_8, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm p_8 (ATerm t)
  {
    ATerm s_513 = NULL;
    ATerm c_4 = NULL;
    if(((c_4 != NULL) && (c_4 != t)))
      _fail(t);
    else
      c_4 = t;
    t = run_time_0_0(t);
    if(((s_513 != NULL) && (s_513 != t)))
      _fail(t);
    else
      s_513 = t;
    t = not_null(c_4);
    {
      ATerm a_514 = NULL;
      ATerm d_4 = NULL;
      if(((d_4 != NULL) && (d_4 != t)))
        _fail(t);
      else
        d_4 = t;
      t = term_d_22;
      t = whoami_0_0(t);
      if(((a_514 != NULL) && (a_514 != t)))
        _fail(t);
      else
        a_514 = t;
      t = not_null(d_4);
      t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_26), not_null(s_513)), term_j_26), not_null(a_514)));
    }
    t = printnl_0_0(t);
    return(t);
  }
  t = if_verbose1_1_0(p_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_q_24;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1_0 (ATerm c_144 (ATerm), ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm q_8 (ATerm t)
        {
          ATerm o_26 = t;
          int p_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(p_26);
            }
          else
            {
              t = o_26;
              {
                ATerm q_26 = t;
                int r_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(r_26);
                  }
                else
                  {
                    t = q_26;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(q_8, t);
      }
    }
  t = c_144(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm p_75 = NULL;
  if(((p_75 != NULL) && (p_75 != t)))
    _fail(t);
  else
    p_75 = t;
  t = SSL_table_create(not_null(p_75));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm d_71 = NULL;
  if(((d_71 != NULL) && (d_71 != t)))
    _fail(t);
  else
    d_71 = t;
  {
    ATerm e_4 = NULL;
    if(((e_4 != NULL) && (e_4 != t)))
      _fail(t);
    else
      e_4 = t;
    t = term_s_26;
    t = table_create_0_0(t);
    t = (ATerm) ATmakeAppl(sym__3, term_s_26, term_t_26, not_null(d_71));
    t = table_put_0_0(t);
    t = not_null(e_4);
  }
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm q_75 = NULL;
  if(((q_75 != NULL) && (q_75 != t)))
    _fail(t);
  else
    q_75 = t;
  t = SSL_table_destroy(not_null(q_75));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm i_70 = NULL;
  if(((i_70 != NULL) && (i_70 != t)))
    _fail(t);
  else
    i_70 = t;
  t = SSL_exit(not_null(i_70));
  return(t);
}
ATerm long_description_1_0 (ATerm d_146 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm v_127 (ATerm), ATerm t)
{
  ATerm w_127 (ATerm t)
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = Cons_2_0(v_127, w_127, t);
      }
    return(t);
  }
  t = w_127(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_47 = NULL,q_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((p_47 != NULL) && (p_47 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            p_47 = ATgetFirst((ATermList) t);
          if(((q_47 != NULL) && (q_47 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(q_47);
      {
        ATerm r_47 = NULL;
        ATerm f_4 = NULL;
        if(((f_4 != NULL) && (f_4 != t)))
          _fail(t);
        else
          f_4 = t;
        {
          ATerm t_207 = NULL;
          ATerm g_4 = NULL;
          if(((g_4 != NULL) && (g_4 != t)))
            _fail(t);
          else
            g_4 = t;
          t = g_0(t);
          if(((t_207 != NULL) && (t_207 != t)))
            _fail(t);
          else
            t_207 = t;
          t = not_null(g_4);
          {
            ATerm b_208 = NULL;
            ATerm h_4 = NULL;
            if(((h_4 != NULL) && (h_4 != t)))
              _fail(t);
            else
              h_4 = t;
            t = not_null(p_47);
            t = e_0(t);
            if(((b_208 != NULL) && (b_208 != t)))
              _fail(t);
            else
              b_208 = t;
            t = not_null(h_4);
            t = (ATerm) ATinsert(CheckATermList(not_null(t_207)), not_null(b_208));
          }
          if(((r_47 != NULL) && (r_47 != t)))
            _fail(t);
          else
            r_47 = t;
          t = not_null(f_4);
        }
        {
          ATerm r_8 (ATerm t)
          {
            t = not_null(r_47);
            return(t);
          }
          t = reverse_acc_2_0(e_0, r_8, t);
        }
      }
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_22;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm s_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, s_8, t);
  return(t);
}
ATerm short_description_1_0 (ATerm c_146 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm x_107 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,i_4 = NULL,k_4 = NULL;
  ATerm l_4 = NULL;
  if(((l_4 != NULL) && (l_4 != t)))
    _fail(t);
  else
    l_4 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((i_4 != NULL) && (i_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_4 = NULL;
    if(((n_4 != NULL) && (n_4 != t)))
      _fail(t);
    else
      n_4 = t;
    t = SSLgetAnnotations(not_null(l_4));
    if(((j_4 != NULL) && (j_4 != t)))
      _fail(t);
    else
      j_4 = t;
    t = not_null(n_4);
  }
  t = not_null(i_4);
  t = x_107(t);
  if(((k_4 != NULL) && (k_4 != t)))
    _fail(t);
  else
    k_4 = t;
  {
    ATerm m_4 = NULL;
    ATerm o_4 = NULL;
    if(((o_4 != NULL) && (o_4 != t)))
      _fail(t);
    else
      o_4 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_4)), not_null(j_4));
    if(((m_4 != NULL) && (m_4 != t)))
      _fail(t);
    else
      m_4 = t;
    t = not_null(o_4);
    t = not_null(m_4);
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_74 = NULL;
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_25;
      t = get_config_0_0(t);
      if(((e_74 != NULL) && (e_74 != t)))
        _fail(t);
      else
        e_74 = t;
      ;
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm t_8 (ATerm t)
        {
          ATerm u_8 (ATerm t)
          {
            if(((e_74 != NULL) && (e_74 != t)))
              _fail(t);
            else
              e_74 = t;
            return(t);
          }
          t = Program_1_0(u_8, t);
          return(t);
        }
        t = option_defined_1_0(t_8, t);
      }
    }
  {
    ATerm v_8 (ATerm t)
    {
      ATerm w_8 (ATerm t)
      {
        t = not_null(e_74);
        return(t);
      }
      t = short_description_1_0(w_8, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(v_8, t);
    t = term_a_27;
    t = echo_0_0(t);
    t = term_d_27;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm x_8 (ATerm t)
      {
        ATerm s_564 = NULL;
        ATerm p_4 = NULL;
        if(((p_4 != NULL) && (p_4 != t)))
          _fail(t);
        else
          p_4 = t;
        if(((s_564 != NULL) && (s_564 != t)))
          _fail(t);
        else
          s_564 = t;
        t = not_null(p_4);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_564)), term_e_27);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(x_8, t);
      {
        ATerm y_8 (ATerm t)
        {
          ATerm d_565 = NULL;
          ATerm q_4 = NULL;
          if(((q_4 != NULL) && (q_4 != t)))
            _fail(t);
          else
            q_4 = t;
          {
            ATerm z_8 (ATerm t)
            {
              t = not_null(e_74);
              return(t);
            }
            t = long_description_1_0(z_8, t);
            if(((d_565 != NULL) && (d_565 != t)))
              _fail(t);
            else
              d_565 = t;
            t = not_null(q_4);
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(d_565)), term_f_27);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(y_8, t);
      }
    }
  }
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm y_107 (ATerm), ATerm t)
{
  ATerm s_4 = NULL,r_4 = NULL,t_4 = NULL;
  ATerm u_4 = NULL;
  if(((u_4 != NULL) && (u_4 != t)))
    _fail(t);
  else
    u_4 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((r_4 != NULL) && (r_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_4 = NULL;
    if(((w_4 != NULL) && (w_4 != t)))
      _fail(t);
    else
      w_4 = t;
    t = SSLgetAnnotations(not_null(u_4));
    if(((s_4 != NULL) && (s_4 != t)))
      _fail(t);
    else
      s_4 = t;
    t = not_null(w_4);
  }
  t = not_null(r_4);
  t = y_107(t);
  if(((t_4 != NULL) && (t_4 != t)))
    _fail(t);
  else
    t_4 = t;
  {
    ATerm v_4 = NULL;
    ATerm x_4 = NULL;
    if(((x_4 != NULL) && (x_4 != t)))
      _fail(t);
    else
      x_4 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_4)), not_null(s_4));
    if(((v_4 != NULL) && (v_4 != t)))
      _fail(t);
    else
      v_4 = t;
    t = not_null(x_4);
    t = not_null(v_4);
  }
  return(t);
}
ATerm fetch_1_0 (ATerm g_128 (ATerm), ATerm t)
{
  ATerm h_128 (ATerm t)
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_128, _id, t);
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = Cons_2_0(_id, h_128, t);
      }
    return(t);
  }
  t = h_128(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm c_145 (ATerm), ATerm t)
{
  t = fetch_1_0(c_145, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm m_27 = ATgetFirst((ATermList) t);
          ATerm n_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_4 = NULL;
  if(((y_4 != NULL) && (y_4 != t)))
    _fail(t);
  else
    y_4 = t;
  {
    ATerm q_436 = NULL;
    ATerm z_4 = NULL;
    if(((z_4 != NULL) && (z_4 != t)))
      _fail(t);
    else
      z_4 = t;
    {
      ATerm o_27 = t;
      int p_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_list_0_0(t);
          ;
          LocalPopChoice(p_27);
        }
      else
        {
          t = o_27;
          {
            ATerm s_436 = NULL;
            ATerm a_5 = NULL;
            if(((a_5 != NULL) && (a_5 != t)))
              _fail(t);
            else
              a_5 = t;
            if(((s_436 != NULL) && (s_436 != t)))
              _fail(t);
            else
              s_436 = t;
            t = not_null(a_5);
            t = (ATerm) ATinsert(ATempty, not_null(s_436));
          }
        }
      if(((q_436 != NULL) && (q_436 != t)))
        _fail(t);
      else
        q_436 = t;
      t = not_null(z_4);
    }
    t = (ATerm) ATmakeAppl(sym__2, term_k_23, not_null(q_436));
    t = printnl_0_0(t);
    t = not_null(y_4);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_25;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm k_120 (ATerm), ATerm t)
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_120(t);
      ;
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_9 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm b_9 (ATerm t)
      {
        t = term_x_27;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm c_9 (ATerm t)
      {
        t = term_y_27;
        return(t);
      }
      t = Option_3_0(a_9, b_9, c_9, t);
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
      {
        ATerm d_9 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm e_9 (ATerm t)
        {
          ATerm b_5 = NULL;
          if(((b_5 != NULL) && (b_5 != t)))
            _fail(t);
          else
            b_5 = t;
          t = term_x_27;
          t = set_config_0_0(t);
          t = term_a_28;
          t = set_config_0_0(t);
          t = not_null(b_5);
          t = term_b_28;
          return(t);
        }
        ATerm f_9 (ATerm t)
        {
          t = term_c_28;
          return(t);
        }
        t = Option_3_0(d_9, e_9, f_9, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm u_75 = NULL,v_75 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_75 != NULL) && (u_75 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_75 = ATgetArgument(t, 0);
      if(((v_75 != NULL) && (v_75 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(u_75), not_null(v_75));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((g_74 != NULL) && (g_74 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_74 = ATgetArgument(t, 0);
      if(((h_74 != NULL) && (h_74 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_74 = ATgetArgument(t, 1);
      if(((f_74 != NULL) && (f_74 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        f_74 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm c_5 = NULL;
    if(((c_5 != NULL) && (c_5 != t)))
      _fail(t);
    else
      c_5 = t;
    {
      ATerm y_567 = NULL;
      ATerm d_5 = NULL;
      if(((d_5 != NULL) && (d_5 != t)))
        _fail(t);
      else
        d_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_74), not_null(h_74));
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = table_get_0_0(t);
            ;
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
            t = (ATerm) ATempty;
          }
        if(((y_567 != NULL) && (y_567 != t)))
          _fail(t);
        else
          y_567 = t;
        t = not_null(d_5);
      }
      t = (ATerm) ATmakeAppl(sym__3, not_null(g_74), not_null(h_74), (ATerm) ATinsert(CheckATermList(not_null(y_567)), not_null(f_74)));
      t = table_put_0_0(t);
      t = not_null(c_5);
    }
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm h_146 (ATerm), ATerm t)
{
  ATerm d_563 = NULL;
  ATerm e_5 = NULL;
  if(((e_5 != NULL) && (e_5 != t)))
    _fail(t);
  else
    e_5 = t;
  t = term_d_22;
  t = h_146(t);
  if(((d_563 != NULL) && (d_563 != t)))
    _fail(t);
  else
    d_563 = t;
  t = not_null(e_5);
  t = (ATerm) ATmakeAppl(sym__3, term_b_27, term_c_27, not_null(d_563));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register-usage-info", 0, ATtrue)))
        _fail(t);
      t = register_usage_1_0(d_0, t);
      ;
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      {
        ATerm o_73 = NULL,p_73 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((p_73 != NULL) && (p_73 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              p_73 = ATgetFirst((ATermList) t);
            if(((o_73 != NULL) && (o_73 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              o_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_5 = NULL;
          if(((f_5 != NULL) && (f_5 != t)))
            _fail(t);
          else
            f_5 = t;
          t = not_null(p_73);
          t = a_0(t);
          t = not_null(f_5);
          {
            ATerm q_553 = NULL;
            ATerm g_5 = NULL;
            if(((g_5 != NULL) && (g_5 != t)))
              _fail(t);
            else
              g_5 = t;
            t = term_d_22;
            t = c_0(t);
            if(((q_553 != NULL) && (q_553 != t)))
              _fail(t);
            else
              q_553 = t;
            t = not_null(g_5);
            t = (ATerm) ATinsert(CheckATermList(not_null(o_73)), not_null(q_553));
          }
        }
      }
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm g_9 (ATerm t)
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        {
          ATerm j_28 = t;
          int k_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-h", 0, ATtrue)))
                _fail(t);
              ;
              LocalPopChoice(k_28);
            }
          else
            {
              t = j_28;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                _fail(t);
            }
        }
      }
    return(t);
  }
  ATerm h_9 (ATerm t)
  {
    t = term_l_28;
    t = set_config_0_0(t);
    t = term_m_28;
    return(t);
  }
  ATerm i_9 (ATerm t)
  {
    t = term_n_28;
    return(t);
  }
  t = Option_3_0(g_9, h_9, i_9, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm b_74 = NULL,c_74 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((b_74 != NULL) && (b_74 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        b_74 = ATgetFirst((ATermList) t);
      if(((c_74 != NULL) && (c_74 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        c_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(c_74)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_74)));
  return(t);
}
ATerm Cons_2_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm t)
{
  ATerm j_5 = NULL,h_5 = NULL,i_5 = NULL,k_5 = NULL,l_5 = NULL;
  ATerm m_5 = NULL;
  if(((m_5 != NULL) && (m_5 != t)))
    _fail(t);
  else
    m_5 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((h_5 != NULL) && (h_5 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        h_5 = ATgetFirst((ATermList) t);
      if(((i_5 != NULL) && (i_5 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        i_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm o_5 = NULL;
    if(((o_5 != NULL) && (o_5 != t)))
      _fail(t);
    else
      o_5 = t;
    t = SSLgetAnnotations(not_null(m_5));
    if(((j_5 != NULL) && (j_5 != t)))
      _fail(t);
    else
      j_5 = t;
    t = not_null(o_5);
  }
  t = not_null(h_5);
  t = l_99(t);
  if(((k_5 != NULL) && (k_5 != t)))
    _fail(t);
  else
    k_5 = t;
  t = not_null(i_5);
  t = m_99(t);
  if(((l_5 != NULL) && (l_5 != t)))
    _fail(t);
  else
    l_5 = t;
  {
    ATerm n_5 = NULL;
    ATerm p_5 = NULL;
    if(((p_5 != NULL) && (p_5 != t)))
      _fail(t);
    else
      p_5 = t;
    t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_5)), not_null(k_5)), not_null(j_5));
    if(((n_5 != NULL) && (n_5 != t)))
      _fail(t);
    else
      n_5 = t;
    t = not_null(p_5);
    t = not_null(n_5);
  }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm g_69 = NULL,h_69 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_69 != NULL) && (g_69 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_69 = ATgetArgument(t, 0);
      if(((h_69 != NULL) && (h_69 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_23, not_null(g_69), not_null(h_69));
  t = table_put_0_0(t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_146 (ATerm), ATerm t)
{
  ATerm q_5 = NULL;
  if(((q_5 != NULL) && (q_5 != t)))
    _fail(t);
  else
    q_5 = t;
  {
    ATerm j_9 (ATerm t)
    {
      t = term_o_28;
      t = f_146(t);
      return(t);
    }
    t = try_1_0(j_9, t);
    t = not_null(q_5);
  }
  {
    ATerm k_9 (ATerm t)
    {
      ATerm r_5 = NULL;
      if(((r_5 != NULL) && (r_5 != t)))
        _fail(t);
      else
        r_5 = t;
      {
        ATerm g_562 = NULL;
        ATerm s_5 = NULL;
        if(((s_5 != NULL) && (s_5 != t)))
          _fail(t);
        else
          s_5 = t;
        if(((g_562 != NULL) && (g_562 != t)))
          _fail(t);
        else
          g_562 = t;
        t = not_null(s_5);
        t = (ATerm) ATmakeAppl(sym__2, term_z_25, not_null(g_562));
        t = set_config_0_0(t);
        t = not_null(r_5);
      }
      {
        ATerm r_562 = NULL;
        ATerm t_5 = NULL;
        if(((t_5 != NULL) && (t_5 != t)))
          _fail(t);
        else
          t_5 = t;
        if(((r_562 != NULL) && (r_562 != t)))
          _fail(t);
        else
          r_562 = t;
        t = not_null(t_5);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_562));
      }
      return(t);
    }
    ATerm l_9 (ATerm t)
    {
      ATerm p_28 = t;
      int q_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_28 = t;
          int s_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(s_28);
            }
          else
            {
              t = r_28;
              t = f_146(t);
              t = Cons_2_0(_id, l_9, t);
            }
          ;
          LocalPopChoice(q_28);
        }
      else
        {
          t = p_28;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(k_9, l_9, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL,u_5 = NULL;
  if(((u_5 != NULL) && (u_5 != t)))
    _fail(t);
  else
    u_5 = t;
  if(match_cons(t, sym__3))
    {
      if(((r_75 != NULL) && (r_75 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_75 = ATgetArgument(t, 0);
      if(((s_75 != NULL) && (s_75 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_75 = ATgetArgument(t, 1);
      if(((t_75 != NULL) && (t_75 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        t_75 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(r_75), not_null(s_75), not_null(t_75));
  t = not_null(u_5);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_146 (ATerm), ATerm t)
{
  ATerm d_74 = NULL;
  ATerm v_5 = NULL;
  if(((v_5 != NULL) && (v_5 != t)))
    _fail(t);
  else
    v_5 = t;
  t = term_t_28;
  t = table_put_0_0(t);
  t = not_null(v_5);
  {
    ATerm m_9 (ATerm t)
    {
      ATerm u_28 = t;
      int v_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_146(t);
          ;
          LocalPopChoice(v_28);
        }
      else
        {
          t = u_28;
          {
            ATerm w_28 = t;
            int x_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(x_28);
              }
            else
              {
                t = w_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_9, t);
    {
      ATerm n_9 (ATerm t)
      {
        ATerm y_28 = t;
        int z_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 = NULL;
            if(((w_5 != NULL) && (w_5 != t)))
              _fail(t);
            else
              w_5 = t;
            {
              ATerm a_29 = t;
              int b_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_n_26;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(b_29);
                }
              else
                {
                  t = a_29;
                  t = option_defined_1_0(Help_0_0, t);
                }
              t = not_null(w_5);
            }
            t = system_usage_0_0(t);
            t = term_q_24;
            t = exit_0_0(t);
            ;
            LocalPopChoice(z_28);
          }
        else
          {
            t = y_28;
            {
              ATerm c_29 = t;
              int d_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_5 = NULL;
                  if(((x_5 != NULL) && (x_5 != t)))
                    _fail(t);
                  else
                    x_5 = t;
                  t = term_w_27;
                  t = get_config_0_0(t);
                  t = not_null(x_5);
                  t = system_about_0_0(t);
                  t = term_q_24;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(d_29);
                }
              else
                {
                  t = c_29;
                  {
                    ATerm o_9 (ATerm t)
                    {
                      ATerm p_9 (ATerm t)
                      {
                        if(((d_74 != NULL) && (d_74 != t)))
                          _fail(t);
                        else
                          d_74 = t;
                        return(t);
                      }
                      t = Undefined_1_0(p_9, t);
                      return(t);
                    }
                    t = option_defined_1_0(o_9, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_74)), term_e_29));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_h_22;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(n_9, t);
      {
        ATerm y_5 = NULL;
        if(((y_5 != NULL) && (y_5 != t)))
          _fail(t);
        else
          y_5 = t;
        t = term_b_27;
        t = table_destroy_0_0(t);
        t = not_null(y_5);
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_144 (ATerm), ATerm f_144 (ATerm), ATerm g_144 (ATerm), ATerm h_144 (ATerm), ATerm t)
{
  t = parse_options_1_0(e_144, t);
  t = store_options_0_0(t);
  t = g_144(t);
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_144, t);
        ;
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
        {
          ATerm h_29 = t;
          int i_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_144(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_29);
            }
          else
            {
              t = h_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm t_143 (ATerm), ATerm u_143 (ATerm), ATerm v_143 (ATerm), ATerm w_143 (ATerm), ATerm t)
{
  ATerm q_9 (ATerm t)
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_143(t);
        ;
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm r_9 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(t_143, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(q_9, v_143, w_143, r_9, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm n_143 (ATerm), ATerm o_143 (ATerm), ATerm p_143 (ATerm), ATerm t)
{
  ATerm s_9 (ATerm t)
  {
    ATerm t_9 (ATerm t)
    {
      ATerm z_5 = NULL;
      if(((z_5 != NULL) && (z_5 != t)))
        _fail(t);
      else
        z_5 = t;
      {
        ATerm y_510 = NULL;
        ATerm a_6 = NULL;
        if(((a_6 != NULL) && (a_6 != t)))
          _fail(t);
        else
          a_6 = t;
        t = term_z_25;
        t = get_config_0_0(t);
        if(((y_510 != NULL) && (y_510 != t)))
          _fail(t);
        else
          y_510 = t;
        t = not_null(a_6);
        t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATinsert(ATempty, not_null(y_510)));
        t = printnl_0_0(t);
        t = not_null(z_5);
      }
      return(t);
    }
    t = if_verbose2_1_0(t_9, t);
    return(t);
  }
  t = iowrap_4_0(n_143, o_143, p_143, s_9, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm l_143 (ATerm), ATerm m_143 (ATerm), ATerm t)
{
  t = iowrap_3_0(l_143, m_143, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm i_143 (ATerm), ATerm t)
{
  ATerm u_9 (ATerm t)
  {
    t = _2_0(_id, i_143, t);
    return(t);
  }
  t = iowrap_2_0(u_9, _fail, t);
  return(t);
}
ATerm canonicalize_0_0 (ATerm t)
{
  ATerm v_9 (ATerm t)
  {
    ATerm w_9 (ATerm t)
    {
      t = repeat_1_0(Canon_0_0, t);
      return(t);
    }
    ATerm x_9 (ATerm t)
    {
      t = repeat_1_0(Canon_0_0, t);
      return(t);
    }
    t = downup2_2_0(w_9, x_9, t);
    t = simplify0_0_0(t);
    return(t);
  }
  t = iowrap_1_0(v_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = canonicalize_0_0(t);
  return(t);
}
