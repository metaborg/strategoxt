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
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
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
ATerm term_j_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_u_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_f_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_y_21;
ATerm term_r_21;
ATerm term_m_21;
ATerm term_j_21;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_y_13;
ATerm term_u_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_s_10;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
void init_constant_terms (void)
{
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Sort_2, term_y_12, (ATerm) ATempty);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_ConstType_1, term_a_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_CallT_3, term_q_16, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_CallT_3, term_t_16, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_18);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_22);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__3, term_y_21, term_k_25, term_d_9);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm l_11 (ATerm c_10, ATerm d_10, ATerm e_10, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm p_130 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm b_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm k_2 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm n_128 (ATerm), ATerm);
ATerm downup_1_0 (ATerm n_129 (ATerm), ATerm);
ATerm CreateDef2_0_0 (ATerm);
ATerm SVar_1_0 (ATerm d_111 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm);
ATerm z_23 (ATerm r_23, ATerm);
ATerm conc_0_0 (ATerm);
ATerm alltd_1_0 (ATerm d_131 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm Canon_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm LiftCallArgs_0_0 (ATerm);
ATerm genzip_4_0 (ATerm f_137 (ATerm), ATerm g_137 (ATerm), ATerm h_137 (ATerm), ATerm i_137 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm s_135 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm e_31 (ATerm y_30, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm u_107 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm r_4 (ATerm);
ATerm w_4 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm downup2_2_0 (ATerm q_129 (ATerm), ATerm r_129 (ATerm), ATerm);
ATerm _2_0 (ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm k_147 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_150 (ATerm), ATerm);
ATerm x_34 (ATerm r_34, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_135 (ATerm), ATerm);
ATerm debug_1_0 (ATerm i_147 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm v_148 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm f_141 (ATerm), ATerm g_141 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm u_148 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_6 (ATerm);
ATerm need_help_1_0 (ATerm k_151 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_135 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm e_115 (ATerm), ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm w_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm f_115 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm n_153 (ATerm), ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm parse_options_1_0 (ATerm m_153 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_151 (ATerm), ATerm n_151 (ATerm), ATerm o_151 (ATerm), ATerm p_151 (ATerm), ATerm);
ATerm b_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm iowrap_3_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm x_150 (ATerm), ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,h_0 = NULL,j_0 = NULL,l_0 = NULL;
  c_0 = t;
  t = term_d_9;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_e_9;
  h_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_9), e_0), term_f_9);
  j_0 = t;
  t = SSL_printnl(h_0, j_0);
  t = term_h_9;
  l_0 = t;
  t = SSL_exit(l_0);
  t = c_0;
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL,w_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym__2))
    {
      w_0 = ATgetArgument(t, 0);
      y_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_0;
  if(match_cons(t, sym_Build_1))
    {
      ATerm o_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_0;
  if(match_cons(t, sym_Where_1))
    {
      z_0 = ATgetArgument(t, 0);
      t = z_0;
      if(match_cons(t, sym_Prim_2))
        {
          t_0 = ATgetArgument(t, 0);
          u_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, t_0, u_0);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          z_0 = ATgetArgument(t, 0);
          a_1 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, z_0, a_1);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              z_0 = ATgetArgument(t, 0);
              a_1 = ATgetArgument(t, 1);
              b_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, z_0, a_1, b_1);
        }
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      if(((ATgetType(x_9) != AT_LIST) || !(ATisEmpty(x_9))))
        _fail(t);
      {
        ATerm z_9 = ATgetArgument(t, 1);
        if(((ATgetType(z_9) != AT_LIST) || !(ATisEmpty(z_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm x_1 = NULL,d_2 = NULL,e_2 = NULL,j_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_10 = ATgetArgument(t, 0);
      if(((ATgetType(a_10) == AT_LIST) && !(ATisEmpty(a_10))))
        {
          x_1 = ATgetFirst((ATermList) a_10);
          e_2 = (ATerm) ATgetNext((ATermList) a_10);
        }
      else
        _fail(t);
      {
        ATerm b_10 = ATgetArgument(t, 1);
        if(((ATgetType(b_10) == AT_LIST) && !(ATisEmpty(b_10))))
          {
            d_2 = ATgetFirst((ATermList) b_10);
            j_2 = (ATerm) ATgetNext((ATermList) b_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_1, d_2), (ATerm) ATmakeAppl(sym__2, e_2, j_2));
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm n_2 = NULL,q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      n_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_2), n_2);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm r_2 = NULL,t_2 = NULL;
  if(match_cons(t, sym__2))
    {
      r_2 = ATgetArgument(t, 0);
      t_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_2), (ATerm) ATmakeAppl(sym_Match_1, t_2));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL,t_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_10 = ATgetArgument(t, 0);
      if(match_cons(f_10, sym_Build_1))
        {
          ATerm h_10 = ATgetArgument(f_10, 0);
          if(match_cons(h_10, sym_Op_2))
            {
              n_1 = ATgetArgument(h_10, 0);
              m_1 = ATgetArgument(h_10, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm g_10 = ATgetArgument(t, 1);
        if(match_cons(g_10, sym_Match_1))
          {
            ATerm i_10 = ATgetArgument(g_10, 0);
            if(match_cons(i_10, sym_Op_2))
              {
                if((n_1 != ATgetArgument(i_10, 0)))
                  {
                    _fail(ATgetArgument(i_10, 0));
                  }
                o_1 = ATgetArgument(i_10, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, m_1, o_1);
  t = genzip_4_0(j_1, l_1, p_1, q_1, t);
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_1), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, n_1, m_1)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_10 = ATgetArgument(t, 0);
      if(match_cons(j_10, sym_Build_1))
        {
          ATerm l_10 = ATgetArgument(j_10, 0);
          if(match_cons(l_10, sym_Op_2))
            {
              u_2 = ATgetArgument(l_10, 0);
              {
                ATerm n_10 = ATgetArgument(l_10, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm k_10 = ATgetArgument(t, 1);
        if(match_cons(k_10, sym_Match_1))
          {
            ATerm p_10 = ATgetArgument(k_10, 0);
            if(match_cons(p_10, sym_Op_2))
              {
                v_2 = ATgetArgument(p_10, 0);
                {
                  ATerm q_10 = ATgetArgument(p_10, 1);
                }
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
  t = (ATerm) ATmakeAppl(sym__2, u_2, v_2);
  {
    ATerm r_10 = t;
    if((PushChoice() == 0))
      {
        ATerm x_2 = NULL;
        if(match_cons(t, sym__2))
          {
            x_2 = ATgetArgument(t, 0);
            if((x_2 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_10;
      }
    t = term_s_10;
  }
  return(t);
}
ATerm l_11 (ATerm c_10, ATerm d_10, ATerm e_10, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, c_10, d_10);
  {
    ATerm t_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = t_10;
        {
          ATerm z_10 = t;
          int a_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(a_11);
            }
          else
            {
              t = z_10;
              {
                ATerm b_11 = t;
                int h_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_10 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm i_11 = ATgetArgument(t, 0);
                        ATerm j_11 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = c_10;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm k_11 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = d_10;
                    if(match_cons(t, sym_Build_1))
                      {
                        o_10 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Build_1, o_10);
                    ;
                    LocalPopChoice(h_11);
                  }
                else
                  {
                    t = b_11;
                    {
                      ATerm n_11 = t;
                      int o_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(o_11);
                        }
                      else
                        {
                          t = n_11;
                          {
                            ATerm u_10 = NULL,v_10 = NULL,x_10 = NULL,y_10 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm p_11 = ATgetArgument(t, 0);
                                ATerm q_11 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = c_10;
                            if(match_cons(t, sym_Match_1))
                              {
                                u_10 = ATgetArgument(t, 0);
                                t = d_10;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    x_10 = ATgetArgument(t, 0);
                                    t = x_10;
                                    if((u_10 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, u_10);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        x_10 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = u_10;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        v_10 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = x_10;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        y_10 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = y_10;
                                    if((v_10 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_10));
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    u_10 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = d_10;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    x_10 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = x_10;
                                if((u_10 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, u_10);
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
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  e_11 = t;
  if(match_cons(t, sym_Seq_2))
    {
      f_11 = ATgetArgument(t, 0);
      g_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11;
  if(match_cons(t, sym_Seq_2))
    {
      c_11 = ATgetArgument(t, 0);
      d_11 = ATgetArgument(t, 1);
      {
        ATerm r_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, f_11, c_11);
            {
              ATerm v_11 = t;
              int w_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(w_11);
                }
              else
                {
                  t = v_11;
                  {
                    ATerm x_11 = t;
                    int y_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(y_11);
                      }
                    else
                      {
                        t = x_11;
                        {
                          ATerm z_11 = t;
                          int a_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_1 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm b_12 = ATgetArgument(t, 0);
                                  ATerm c_12 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = f_11;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm d_12 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = c_11;
                              if(match_cons(t, sym_Build_1))
                                {
                                  u_1 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, u_1);
                              ;
                              LocalPopChoice(a_12);
                            }
                          else
                            {
                              t = z_11;
                              {
                                ATerm e_12 = t;
                                int f_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(f_12);
                                  }
                                else
                                  {
                                    t = e_12;
                                    {
                                      ATerm z_1 = NULL,a_2 = NULL,c_2 = NULL,f_2 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm g_12 = ATgetArgument(t, 0);
                                          ATerm j_12 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = f_11;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          z_1 = ATgetArgument(t, 0);
                                          t = c_11;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              c_2 = ATgetArgument(t, 0);
                                              t = c_2;
                                              if((z_1 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, z_1);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  c_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = z_1;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  a_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = c_2;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  f_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = f_2;
                                              if((a_2 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_2));
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              z_1 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = c_11;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              c_2 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = c_2;
                                          if((z_1 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, z_1);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              k_1 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, k_1, d_11);
            }
            ;
            LocalPopChoice(u_11);
          }
        else
          {
            t = r_11;
            t = l_11(f_11, g_11, e_11, t);
          }
      }
    }
  else
    {
      t = l_11(f_11, g_11, e_11, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm p_130 (ATerm), ATerm t)
{
  ATerm m_11 (ATerm t)
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_130(t);
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        t = SRTS_one(m_11, t);
      }
    return(t);
  }
  t = m_11(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm z_12 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
  z_12 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_13;
  if(match_cons(t, sym_Let_2))
    {
      p_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
      {
        ATerm x_13 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, c_13, p_13);
        t = conc_0_0(t);
        x_13 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_13, r_13);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          p_13 = ATgetArgument(t, 0);
          r_13 = ATgetArgument(t, 1);
          s_13 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_13 = ATgetFirst((ATermList) t);
          l_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_13;
      if(match_cons(t, sym_SDefT_4))
        {
          e_13 = ATgetArgument(t, 0);
          f_13 = ATgetArgument(t, 1);
          j_13 = ATgetArgument(t, 2);
          k_13 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = f_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_13;
      if(match_cons(t, sym_SVar_1))
        {
          q_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_13;
      if((e_13 != t))
        {
          _fail(t);
        }
      t = k_13;
      {
        ATerm o_12 = t;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm p_12 = ATgetArgument(t, 0);
                  if(match_cons(p_12, sym_SVar_1))
                    {
                      if((e_13 != ATgetArgument(p_12, 0)))
                        {
                          _fail(ATgetArgument(p_12, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm q_12 = ATgetArgument(t, 1);
                    if(((ATgetType(q_12) != AT_LIST) || !(ATisEmpty(q_12))))
                      _fail(t);
                  }
                  {
                    ATerm r_12 = ATgetArgument(t, 2);
                    if(((ATgetType(r_12) != AT_LIST) || !(ATisEmpty(r_12))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(r_1, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_12;
          }
        t = k_13;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,n_14 = NULL,u_14 = NULL,v_14 = NULL,b_15 = NULL,d_15 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      b_15 = ATgetArgument(t, 0);
      t = b_15;
      if(match_cons(t, sym_Seq_2))
        {
          v_14 = ATgetArgument(t, 0);
          j_14 = ATgetArgument(t, 1);
          t = v_14;
          if(match_cons(t, sym_Where_1))
            {
              i_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_14;
          if(match_cons(t, sym_Seq_2))
            {
              k_14 = ATgetArgument(t, 0);
              u_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_14;
          if(match_cons(t, sym_Build_1))
            {
              n_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, i_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_14), u_14)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              v_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, v_14);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          b_15 = ATgetArgument(t, 0);
          t = b_15;
          if(match_cons(t, sym_Test_1))
            {
              v_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, v_14);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              b_15 = ATgetArgument(t, 0);
              t = b_15;
              if(match_cons(t, sym_Not_1))
                {
                  v_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, v_14);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  b_15 = ATgetArgument(t, 0);
                  d_15 = ATgetArgument(t, 1);
                  t = d_15;
                  if((b_15 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      b_15 = ATgetArgument(t, 0);
                      d_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = d_15;
                  if((b_15 != t))
                    {
                      _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      u_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
      t = u_15;
      if(match_cons(t, sym_LChoice_2))
        {
          v_15 = ATgetArgument(t, 0);
          w_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, v_15, (ATerm) ATmakeAppl(sym_LChoice_2, w_15, x_15));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          u_15 = ATgetArgument(t, 0);
          x_15 = ATgetArgument(t, 1);
          t = u_15;
          if(match_cons(t, sym_Seq_2))
            {
              v_15 = ATgetArgument(t, 0);
              w_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, v_15, (ATerm) ATmakeAppl(sym_Seq_2, w_15, x_15));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              u_15 = ATgetArgument(t, 0);
              x_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_15;
          if(match_cons(t, sym_Choice_2))
            {
              v_15 = ATgetArgument(t, 0);
              w_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, v_15, (ATerm) ATmakeAppl(sym_Choice_2, w_15, x_15));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm s_1 (ATerm t)
        {
          ATerm w_12 = t;
          int x_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(x_12);
            }
          else
            {
              t = w_12;
            }
          return(t);
        }
        t = Cons_2_0(_id, s_1, t);
      }
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = s_12;
      {
        ATerm v_1 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, v_1, t);
      }
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm o_18 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, o_18, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_13), term_b_13));
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_18 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, s_18, term_b_13);
      ;
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm a_19 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_19, term_b_13);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm i_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_19 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, c_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_13), term_b_13));
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = i_13;
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm m_19 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_13), term_b_13));
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm n_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_19 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, v_19, term_b_13);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = n_13;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,e_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      e_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, e_17, f_17);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          e_17 = ATgetArgument(t, 0);
          t = e_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_16 = ATgetFirst((ATermList) t);
              a_17 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, z_16, (ATerm) ATmakeAppl(sym_LChoices_1, a_17));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_s_10;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              e_17 = ATgetArgument(t, 0);
              t = e_17;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_16 = ATgetFirst((ATermList) t);
                  a_17 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, z_16, (ATerm) ATmakeAppl(sym_Choices_1, a_17));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_s_10;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  e_17 = ATgetArgument(t, 0);
                  t = e_17;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_16 = ATgetFirst((ATermList) t);
                      a_17 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_16, (ATerm) ATmakeAppl(sym_Seqs_1, a_17));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_u_13;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_17 = ATgetArgument(t, 0);
                      f_17 = ATgetArgument(t, 1);
                      c_17 = ATgetArgument(t, 2);
                      b_17 = ATgetArgument(t, 3);
                      {
                        ATerm i_18 = NULL,m_18 = NULL;
                        t = f_17;
                        t = map1_1_0(w_1, t);
                        i_18 = t;
                        t = c_17;
                        t = map1_1_0(y_1, t);
                        m_18 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, e_17, i_18, m_18, b_17);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          e_17 = ATgetArgument(t, 0);
                          f_17 = ATgetArgument(t, 1);
                          c_17 = ATgetArgument(t, 2);
                          b_17 = ATgetArgument(t, 3);
                          {
                            ATerm v_13 = t;
                            int w_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm y_18 = NULL,z_18 = NULL;
                                t = c_17;
                                t = map1_1_0(b_2, t);
                                y_18 = t;
                                t = f_17;
                                t = map_1_0(g_2, t);
                                z_18 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, e_17, z_18, y_18, b_17);
                                ;
                                LocalPopChoice(w_13);
                              }
                            else
                              {
                                t = v_13;
                                {
                                  ATerm k_19 = NULL,l_19 = NULL;
                                  t = f_17;
                                  t = map1_1_0(h_2, t);
                                  k_19 = t;
                                  t = c_17;
                                  t = map_1_0(i_2, t);
                                  l_19 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, e_17, k_19, l_19, b_17);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              e_17 = ATgetArgument(t, 0);
                              f_17 = ATgetArgument(t, 1);
                              c_17 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, f_17, (ATerm) ATmakeAppl(sym_Op_2, term_y_13, (ATerm) ATinsert(ATinsert(ATempty, c_17), e_17)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  e_17 = ATgetArgument(t, 0);
                                  f_17 = ATgetArgument(t, 1);
                                  c_17 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, c_17)), e_17), (ATerm) ATmakeAppl(sym_Build_1, f_17)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      e_17 = ATgetArgument(t, 0);
                                      f_17 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_17, (ATerm) ATmakeAppl(sym_Match_1, f_17));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          e_17 = ATgetArgument(t, 0);
                                          f_17 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_17), f_17);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              e_17 = ATgetArgument(t, 0);
                                              f_17 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_17), e_17);
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
ATerm k_2 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      b_21 = ATgetArgument(t, 0);
      t = b_21;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_s_10;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          b_21 = ATgetArgument(t, 0);
          t = b_21;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_u_13;
        }
      else
        {
          ATerm z_13 = t;
          int a_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  b_21 = ATgetArgument(t, 0);
                  {
                    ATerm c_14 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(a_14);
              t = b_21;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_s_10;
            }
          else
            {
              t = z_13;
              {
                ATerm d_14 = t;
                int e_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm g_14 = ATgetArgument(t, 0);
                        c_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(e_14);
                    t = c_21;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_s_10;
                  }
                else
                  {
                    t = d_14;
                    {
                      ATerm h_14 = t;
                      int l_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm o_14 = ATgetArgument(t, 0);
                              c_21 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(l_14);
                          t = c_21;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_s_10;
                        }
                      else
                        {
                          t = h_14;
                          if(match_cons(t, sym_Some_1))
                            {
                              b_21 = ATgetArgument(t, 0);
                              t = b_21;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_s_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  b_21 = ATgetArgument(t, 0);
                                  t = b_21;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_s_10;
                                }
                              else
                                {
                                  ATerm p_14 = t;
                                  int q_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm r_14 = ATgetArgument(t, 0);
                                          c_21 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(q_14);
                                      t = c_21;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_s_10;
                                    }
                                  else
                                    {
                                      t = p_14;
                                      {
                                        ATerm s_14 = t;
                                        int t_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm w_14 = ATgetArgument(t, 0);
                                                c_21 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(t_14);
                                            t = c_21;
                                            t = fetch_1_0(k_2, t);
                                            t = term_s_10;
                                          }
                                        else
                                          {
                                            t = s_14;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                b_21 = ATgetArgument(t, 0);
                                                c_21 = ATgetArgument(t, 1);
                                                t = c_21;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = b_21;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm x_14 = t;
                                                        int y_14 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = c_21;
                                                            ;
                                                            LocalPopChoice(y_14);
                                                          }
                                                        else
                                                          {
                                                            t = x_14;
                                                            t = b_21;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = b_21;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = b_21;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = c_21;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    b_21 = ATgetArgument(t, 0);
                                                    c_21 = ATgetArgument(t, 1);
                                                    t = c_21;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = b_21;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm z_14 = t;
                                                            int a_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = c_21;
                                                                ;
                                                                LocalPopChoice(a_15);
                                                              }
                                                            else
                                                              {
                                                                t = z_14;
                                                                t = b_21;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = b_21;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = b_21;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = c_21;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        b_21 = ATgetArgument(t, 0);
                                                        t = b_21;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = term_s_10;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            b_21 = ATgetArgument(t, 0);
                                                            c_21 = ATgetArgument(t, 1);
                                                            d_21 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = d_21;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_21, c_21);
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
ATerm ElimId_0_0 (ATerm t)
{
  ATerm b_22 = NULL,d_22 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      d_22 = ATgetArgument(t, 0);
      t = d_22;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_u_13;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          d_22 = ATgetArgument(t, 0);
          t = d_22;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_s_10;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              d_22 = ATgetArgument(t, 0);
              b_22 = ATgetArgument(t, 1);
              t = b_22;
              if(match_cons(t, sym_Id_0))
                {
                  t = d_22;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm c_15 = t;
                      int e_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = b_22;
                          ;
                          LocalPopChoice(e_15);
                        }
                      else
                        {
                          t = c_15;
                          t = d_22;
                        }
                    }
                  else
                    {
                      t = d_22;
                    }
                }
              else
                {
                  t = d_22;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = b_22;
                }
            }
          else
            {
              ATerm f_15 = t;
              int g_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      d_22 = ATgetArgument(t, 0);
                      {
                        ATerm h_15 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(g_15);
                  t = d_22;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_u_13;
                }
              else
                {
                  t = f_15;
                  {
                    ATerm i_15 = t;
                    int j_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm k_15 = ATgetArgument(t, 0);
                            b_22 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_15);
                        t = b_22;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_u_13;
                      }
                    else
                      {
                        t = i_15;
                        {
                          ATerm l_15 = t;
                          int m_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm n_15 = ATgetArgument(t, 0);
                                  b_22 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(m_15);
                              t = b_22;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_u_13;
                            }
                          else
                            {
                              t = l_15;
                              if(match_cons(t, sym_All_1))
                                {
                                  d_22 = ATgetArgument(t, 0);
                                  t = d_22;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_u_13;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      d_22 = ATgetArgument(t, 0);
                                      t = d_22;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_u_13;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          d_22 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = d_22;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_u_13;
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
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      {
        ATerm q_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
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
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = s_15;
                  {
                    ATerm y_15 = t;
                    int z_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(z_15);
                      }
                    else
                      {
                        t = y_15;
                        {
                          ATerm a_16 = t;
                          int b_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(b_16);
                            }
                          else
                            {
                              t = a_16;
                              {
                                ATerm c_16 = t;
                                int d_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_22 = NULL,p_22 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        o_22 = ATgetArgument(t, 0);
                                        p_22 = ATgetArgument(t, 1);
                                        t = o_22;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = p_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            o_22 = ATgetArgument(t, 0);
                                            p_22 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = o_22;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = p_22;
                                      }
                                    ;
                                    LocalPopChoice(d_16);
                                  }
                                else
                                  {
                                    t = c_16;
                                    {
                                      ATerm e_16 = t;
                                      int f_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
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
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(h_16);
                                              }
                                            else
                                              {
                                                t = g_16;
                                                {
                                                  ATerm t_22 = NULL,u_22 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      t_22 = ATgetArgument(t, 0);
                                                      u_22 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = t_22;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = u_22;
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
ATerm repeat_1_0 (ATerm n_128 (ATerm), ATerm t)
{
  ATerm w_22 (ATerm t)
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_128(t);
        t = w_22(t);
        ;
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
      }
    return(t);
  }
  t = w_22(t);
  return(t);
}
ATerm downup_1_0 (ATerm n_129 (ATerm), ATerm t)
{
  t = n_129(t);
  {
    ATerm l_2 (ATerm t)
    {
      t = downup_1_0(n_129, t);
      return(t);
    }
    t = SRTS_all(l_2, t);
    t = n_129(t);
  }
  return(t);
}
ATerm CreateDef2_0_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL;
  x_22 = t;
  t = new_0_0(t);
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_22), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, y_22, (ATerm)ATempty, (ATerm)ATempty, x_22)));
  return(t);
}
ATerm SVar_1_0 (ATerm d_111 (ATerm), ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,o_0 = NULL,p_0 = NULL;
  c_23 = t;
  if(match_cons(t, sym_SVar_1))
    {
      a_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_23);
  z_22 = t;
  t = a_23;
  t = d_111(t);
  b_23 = t;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, b_23);
  o_0 = t;
  t = SSLsetAnnotations(o_0, z_22);
  return(t);
}
ATerm CallT_3_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,q_0 = NULL,r_0 = NULL;
  m_23 = t;
  if(match_cons(t, sym_CallT_3))
    {
      g_23 = ATgetArgument(t, 0);
      h_23 = ATgetArgument(t, 1);
      i_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_23);
  f_23 = t;
  t = g_23;
  t = i_111(t);
  j_23 = t;
  t = h_23;
  t = j_111(t);
  k_23 = t;
  t = i_23;
  t = k_111(t);
  l_23 = t;
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, j_23, k_23, l_23);
  q_0 = t;
  t = SSLsetAnnotations(q_0, f_23);
  return(t);
}
ATerm z_23 (ATerm r_23, ATerm t)
{
  ATerm t_23 = NULL;
  t = SSL_explode_term(r_23);
  if(match_cons(t, sym__2))
    {
      ATerm k_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_23;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
  w_23 = t;
  if(match_cons(t, sym__2))
    {
      u_23 = ATgetArgument(t, 0);
      v_23 = ATgetArgument(t, 1);
      {
        ATerm l_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_2 (ATerm t)
            {
              t = v_23;
              return(t);
            }
            t = u_23;
            t = at_end_1_0(m_2, t);
            ;
            LocalPopChoice(m_16);
          }
        else
          {
            t = l_16;
            t = z_23(w_23, t);
          }
      }
    }
  else
    {
      t = z_23(w_23, t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm d_131 (ATerm), ATerm t)
{
  ATerm a_24 (ATerm t)
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_131(t);
        ;
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        t = SRTS_all(a_24, t);
      }
    return(t);
  }
  t = a_24(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  if(match_cons(t, sym_Id_0))
    {
      t = term_r_16;
    }
  else
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_u_16;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_v_16;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_4 = ATgetFirst((ATermList) t);
      q_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_4, q_4);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_16 = ATgetArgument(t, 0);
      if(match_cons(w_16, sym__2))
        {
          s_4 = ATgetArgument(w_16, 0);
          u_4 = ATgetArgument(w_16, 1);
        }
      else
        _fail(t);
      {
        ATerm x_16 = ATgetArgument(t, 1);
        if(match_cons(x_16, sym__2))
          {
            t_4 = ATgetArgument(x_16, 0);
            v_4 = ATgetArgument(x_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_4), s_4), (ATerm) ATinsert(CheckATermList(v_4), u_4));
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm y_16 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Id_0))
        {
          t = term_r_16;
        }
      else
        {
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_u_16;
        }
      ;
      LocalPopChoice(d_17);
    }
  else
    {
      t = y_16;
    }
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            y_4 = ATgetArgument(t, 0);
            z_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_4;
        if(match_cons(t, sym_CallT_3))
          {
            a_5 = ATgetArgument(t, 0);
            c_5 = ATgetArgument(t, 1);
            d_5 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = a_5;
        if(match_cons(t, sym_SVar_1))
          {
            b_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_5;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_5;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_5), (ATerm)ATempty, (ATerm) ATempty), y_4);
        ;
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        {
          ATerm i_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_17 = t;
              if((PushChoice() == 0))
                {
                  t = CallT_3_0(b_3, c_3, d_3, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = k_17;
                }
              t = CreateDef2_0_0(t);
              ;
              LocalPopChoice(j_17);
            }
          else
            {
              t = i_17;
              {
                ATerm l_5 = NULL;
                l_5 = t;
                t = (ATerm) ATmakeAppl(sym__2, l_5, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = SVar_1_0(_id, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  if(match_cons(t, sym_Id_0))
    {
      t = term_r_16;
    }
  else
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_u_16;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_v_16;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_7 = ATgetFirst((ATermList) t);
      b_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_7, b_7);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_17 = ATgetArgument(t, 0);
      if(match_cons(l_17, sym__2))
        {
          c_7 = ATgetArgument(l_17, 0);
          e_7 = ATgetArgument(l_17, 1);
        }
      else
        _fail(t);
      {
        ATerm m_17 = ATgetArgument(t, 1);
        if(match_cons(m_17, sym__2))
          {
            d_7 = ATgetArgument(m_17, 0);
            f_7 = ATgetArgument(m_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_7), c_7), (ATerm) ATinsert(CheckATermList(f_7), e_7));
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Id_0))
        {
          t = term_r_16;
        }
      else
        {
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_u_16;
        }
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
    }
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            i_7 = ATgetArgument(t, 0);
            j_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_7;
        if(match_cons(t, sym_CallT_3))
          {
            k_7 = ATgetArgument(t, 0);
            m_7 = ATgetArgument(t, 1);
            n_7 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = k_7;
        if(match_cons(t, sym_SVar_1))
          {
            l_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_7), (ATerm)ATempty, (ATerm) ATempty), i_7);
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        {
          ATerm r_17 = t;
          int s_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_17 = t;
              if((PushChoice() == 0))
                {
                  t = CallT_3_0(k_3, l_3, m_3, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = t_17;
                }
              t = CreateDef2_0_0(t);
              ;
              LocalPopChoice(s_17);
            }
          else
            {
              t = r_17;
              {
                ATerm u_7 = NULL;
                u_7 = t;
                t = (ATerm) ATmakeAppl(sym__2, u_7, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = SVar_1_0(_id, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm Canon_0_0 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
  f_28 = t;
  if(match_cons(t, sym_Rec_2))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, g_28, (ATerm)ATempty, (ATerm)ATempty, h_28)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_28), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          g_28 = ATgetArgument(t, 0);
          h_28 = ATgetArgument(t, 1);
          i_28 = ATgetArgument(t, 2);
          y_27 = ATgetArgument(t, 3);
          {
            ATerm o_28 = NULL;
            t = h_28;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = i_28;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_27;
            if(match_cons(t, sym_Rec_2))
              {
                z_27 = ATgetArgument(t, 0);
                a_28 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_28;
            {
              ATerm o_2 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm u_17 = ATgetArgument(t, 0);
                    if(match_cons(u_17, sym_SVar_1))
                      {
                        if((z_27 != ATgetArgument(u_17, 0)))
                          {
                            _fail(ATgetArgument(u_17, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm v_17 = ATgetArgument(t, 1);
                      if(((ATgetType(v_17) != AT_LIST) || !(ATisEmpty(v_17))))
                        _fail(t);
                    }
                    {
                      ATerm w_17 = ATgetArgument(t, 2);
                      if(((ATgetType(w_17) != AT_LIST) || !(ATisEmpty(w_17))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_28), (ATerm)ATempty, (ATerm) ATempty);
                return(t);
              }
              t = alltd_1_0(o_2, t);
              o_28 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, g_28, (ATerm)ATempty, (ATerm)ATempty, o_28);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              g_28 = ATgetArgument(t, 0);
              h_28 = ATgetArgument(t, 1);
              t = h_28;
              if(match_cons(t, sym_Seq_2))
                {
                  d_28 = ATgetArgument(t, 0);
                  e_28 = ATgetArgument(t, 1);
                  t = g_28;
                  if(match_cons(t, sym_Where_1))
                    {
                      c_28 = ATgetArgument(t, 0);
                      t = d_28;
                      if(match_cons(t, sym_Build_1))
                        {
                          b_28 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_28), e_28));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = h_28;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      d_28 = ATgetArgument(t, 0);
                      t = g_28;
                      if(match_cons(t, sym_Where_1))
                        {
                          c_28 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_28, (ATerm) ATmakeAppl(sym_Build_1, d_28));
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = h_28;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Id_0))
                        {
                          t = g_28;
                          if(match_cons(t, sym_Id_0))
                            {
                              ATerm x_17 = t;
                              int y_17 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = g_28;
                                  ;
                                  LocalPopChoice(y_17);
                                }
                              else
                                {
                                  t = x_17;
                                  t = h_28;
                                }
                            }
                          else
                            {
                              t = g_28;
                            }
                        }
                      else
                        {
                          t = g_28;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = h_28;
                        }
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  g_28 = ATgetArgument(t, 0);
                  h_28 = ATgetArgument(t, 1);
                  t = h_28;
                  if(match_cons(t, sym_Scope_2))
                    {
                      d_28 = ATgetArgument(t, 0);
                      e_28 = ATgetArgument(t, 1);
                      t = g_28;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm z_17 = t;
                          int a_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_29 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, g_28, d_28);
                              t = conc_0_0(t);
                              d_29 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, d_29, e_28);
                              ;
                              LocalPopChoice(a_18);
                            }
                          else
                            {
                              t = z_17;
                              t = h_28;
                            }
                        }
                      else
                        {
                          ATerm i_29 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, g_28, d_28);
                          t = conc_0_0(t);
                          i_29 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, i_29, e_28);
                        }
                    }
                  else
                    {
                      t = g_28;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = h_28;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Thread_1))
                    {
                      g_28 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_18, (ATerm)ATinsert(ATempty, g_28), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          g_28 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_e_18, (ATerm)ATinsert(ATempty, g_28), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              g_28 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_18, (ATerm)ATinsert(ATempty, g_28), (ATerm) ATempty);
                            }
                          else
                            {
                              if(match_cons(t, sym_All_1))
                                {
                                  g_28 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_18, (ATerm)ATinsert(ATempty, g_28), (ATerm) ATempty);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Bagof_1))
                                    {
                                      g_28 = ATgetArgument(t, 0);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_18, (ATerm)ATinsert(ATempty, g_28), (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_PrimT_3))
                                        {
                                          g_28 = ATgetArgument(t, 0);
                                          h_28 = ATgetArgument(t, 1);
                                          i_28 = ATgetArgument(t, 2);
                                          {
                                            ATerm n_18 = t;
                                            int p_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm w_3 = NULL;
                                                t = h_28;
                                                {
                                                  ATerm y_3 (ATerm t)
                                                  {
                                                    ATerm q_18 = t;
                                                    int r_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm s_2 (ATerm t)
                                                        {
                                                          ATerm t_18 = t;
                                                          int u_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = y_3(t);
                                                              ;
                                                              LocalPopChoice(u_18);
                                                            }
                                                          else
                                                            {
                                                              t = t_18;
                                                            }
                                                          return(t);
                                                        }
                                                        t = Cons_2_0(p_2, s_2, t);
                                                        ;
                                                        LocalPopChoice(r_18);
                                                      }
                                                    else
                                                      {
                                                        t = q_18;
                                                        t = Cons_2_0(_id, y_3, t);
                                                      }
                                                    return(t);
                                                  }
                                                  t = y_3(t);
                                                  w_3 = t;
                                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, g_28, w_3, i_28);
                                                }
                                                ;
                                                LocalPopChoice(p_18);
                                              }
                                            else
                                              {
                                                t = n_18;
                                                {
                                                  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
                                                  t = h_28;
                                                  t = genzip_4_0(w_2, y_2, z_2, a_3, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      m_4 = ATgetArgument(t, 0);
                                                      n_4 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = n_4;
                                                  t = concat_0_0(t);
                                                  o_4 = t;
                                                  {
                                                    ATerm v_18 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = v_18;
                                                      }
                                                    t = (ATerm) ATmakeAppl(sym_Let_2, o_4, (ATerm) ATmakeAppl(sym_PrimT_3, g_28, m_4, i_28));
                                                  }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              g_28 = ATgetArgument(t, 0);
                                              h_28 = ATgetArgument(t, 1);
                                              i_28 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm w_18 = t;
                                            int x_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm z_5 = NULL;
                                                t = h_28;
                                                {
                                                  ATerm b_6 (ATerm t)
                                                  {
                                                    ATerm b_19 = t;
                                                    int d_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm f_3 (ATerm t)
                                                        {
                                                          ATerm e_19 = t;
                                                          int f_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = b_6(t);
                                                              ;
                                                              LocalPopChoice(f_19);
                                                            }
                                                          else
                                                            {
                                                              t = e_19;
                                                            }
                                                          return(t);
                                                        }
                                                        t = Cons_2_0(e_3, f_3, t);
                                                        ;
                                                        LocalPopChoice(d_19);
                                                      }
                                                    else
                                                      {
                                                        t = b_19;
                                                        t = Cons_2_0(_id, b_6, t);
                                                      }
                                                    return(t);
                                                  }
                                                  t = b_6(t);
                                                  z_5 = t;
                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, g_28, z_5, i_28);
                                                }
                                                ;
                                                LocalPopChoice(x_18);
                                              }
                                            else
                                              {
                                                t = w_18;
                                                {
                                                  ATerm u_6 = NULL,v_6 = NULL,z_6 = NULL;
                                                  t = h_28;
                                                  t = genzip_4_0(g_3, h_3, i_3, j_3, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      u_6 = ATgetArgument(t, 0);
                                                      v_6 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = v_6;
                                                  t = concat_0_0(t);
                                                  z_6 = t;
                                                  {
                                                    ATerm g_19 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = g_19;
                                                      }
                                                    t = (ATerm) ATmakeAppl(sym_Let_2, z_6, (ATerm) ATmakeAppl(sym_CallT_3, g_28, u_6, i_28));
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
ATerm n_3 (ATerm t)
{
  ATerm h_19 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_19;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_v_16;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_30 = ATgetFirst((ATermList) t);
      c_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_30, c_30);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_19 = ATgetArgument(t, 0);
      if(match_cons(i_19, sym__2))
        {
          d_30 = ATgetArgument(i_19, 0);
          f_30 = ATgetArgument(i_19, 1);
        }
      else
        _fail(t);
      {
        ATerm j_19 = ATgetArgument(t, 1);
        if(match_cons(j_19, sym__2))
          {
            e_30 = ATgetArgument(j_19, 0);
            g_30 = ATgetArgument(j_19, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_30), d_30), (ATerm) ATinsert(CheckATermList(g_30), f_30));
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = genzip_4_0(s_3, t_3, u_3, _id, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_v_16;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_30 = ATgetFirst((ATermList) t);
      i_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_30, i_30);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_19 = ATgetArgument(t, 0);
      if(match_cons(n_19, sym__2))
        {
          j_30 = ATgetArgument(n_19, 0);
          l_30 = ATgetArgument(n_19, 1);
        }
      else
        _fail(t);
      {
        ATerm o_19 = ATgetArgument(t, 1);
        if(match_cons(o_19, sym__2))
          {
            k_30 = ATgetArgument(o_19, 0);
            m_30 = ATgetArgument(o_19, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_30), j_30), (ATerm) ATinsert(CheckATermList(m_30), l_30));
  return(t);
}
ATerm LiftCallArgs_0_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      v_29 = ATgetArgument(t, 0);
      w_29 = ATgetArgument(t, 1);
      x_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_29;
  t = fetch_1_0(n_3, t);
  t = x_29;
  t = genzip_4_0(o_3, p_3, q_3, LiftPrimArg_0_0, t);
  t = _2_0(concat_0_0, r_3, t);
  if(match_cons(t, sym__2))
    {
      y_29 = ATgetArgument(t, 0);
      {
        ATerm p_19 = ATgetArgument(t, 1);
        if(match_cons(p_19, sym__2))
          {
            z_29 = ATgetArgument(p_19, 0);
            a_30 = ATgetArgument(p_19, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, y_29, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_29), (ATerm) ATmakeAppl(sym_CallT_3, v_29, w_29, a_30)));
  return(t);
}
ATerm genzip_4_0 (ATerm f_137 (ATerm), ATerm g_137 (ATerm), ATerm h_137 (ATerm), ATerm i_137 (ATerm), ATerm t)
{
  ATerm n_30 (ATerm t)
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_137(t);
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = g_137(t);
        t = _2_0(i_137, n_30, t);
        t = h_137(t);
      }
    return(t);
  }
  t = n_30(t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_135 (ATerm), ATerm t)
{
  ATerm o_30 (ATerm t)
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, o_30, t);
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_135(t);
      }
    return(t);
  }
  t = o_30(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(w_19);
    }
  else
    {
      t = u_19;
      {
        ATerm r_30 = NULL,s_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_30 = ATgetFirst((ATermList) t);
            s_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_30;
        {
          ATerm v_3 (ATerm t)
          {
            t = s_30;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(v_3, t);
        }
      }
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm e_31 (ATerm y_30, ATerm t)
{
  ATerm a_31 = NULL;
  t = y_30;
  {
    ATerm x_19 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_19;
      }
    t = new_0_0(t);
    a_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, a_31), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_30), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_31)))), (ATerm) ATmakeAppl(sym_Var_1, a_31)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL;
  b_31 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_31 = ATgetArgument(t, 0);
      {
        ATerm y_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_31(b_31, t);
            ;
            LocalPopChoice(z_19);
          }
        else
          {
            t = y_19;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_u_13, (ATerm) ATmakeAppl(sym_Var_1, c_31)));
          }
      }
    }
  else
    {
      t = e_31(b_31, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm u_107 (ATerm), ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,s_0 = NULL,v_0 = NULL;
  i_31 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_31);
  f_31 = t;
  t = g_31;
  t = u_107(t);
  h_31 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_31);
  s_0 = t;
  t = SSLsetAnnotations(s_0, f_31);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm a_20 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_20;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_v_16;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_8 = ATgetFirst((ATermList) t);
      l_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_8, l_8);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_20 = ATgetArgument(t, 0);
      if(match_cons(b_20, sym__2))
        {
          m_8 = ATgetArgument(b_20, 0);
          o_8 = ATgetArgument(b_20, 1);
        }
      else
        _fail(t);
      {
        ATerm c_20 = ATgetArgument(t, 1);
        if(match_cons(c_20, sym__2))
          {
            n_8 = ATgetArgument(c_20, 0);
            p_8 = ATgetArgument(c_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_8), m_8), (ATerm) ATinsert(CheckATermList(p_8), o_8));
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = genzip_4_0(d_4, e_4, f_4, _id, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_v_16;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_8 = ATgetFirst((ATermList) t);
      r_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_8, r_8);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm s_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_20 = ATgetArgument(t, 0);
      if(match_cons(d_20, sym__2))
        {
          s_8 = ATgetArgument(d_20, 0);
          v_8 = ATgetArgument(d_20, 1);
        }
      else
        _fail(t);
      {
        ATerm e_20 = ATgetArgument(t, 1);
        if(match_cons(e_20, sym__2))
          {
            u_8 = ATgetArgument(e_20, 0);
            w_8 = ATgetArgument(e_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_8), s_8), (ATerm) ATinsert(CheckATermList(w_8), v_8));
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm f_20 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_20;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_v_16;
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_9 = ATgetFirst((ATermList) t);
      m_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_9, m_9);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm n_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_20 = ATgetArgument(t, 0);
      if(match_cons(g_20, sym__2))
        {
          n_9 = ATgetArgument(g_20, 0);
          q_9 = ATgetArgument(g_20, 1);
        }
      else
        _fail(t);
      {
        ATerm h_20 = ATgetArgument(t, 1);
        if(match_cons(h_20, sym__2))
          {
            p_9 = ATgetArgument(h_20, 0);
            r_9 = ATgetArgument(h_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_9), n_9), (ATerm) ATinsert(CheckATermList(r_9), q_9));
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = genzip_4_0(l_4, r_4, w_4, _id, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_v_16;
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_9 = ATgetFirst((ATermList) t);
      t_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_9, t_9);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,y_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_20 = ATgetArgument(t, 0);
      if(match_cons(i_20, sym__2))
        {
          u_9 = ATgetArgument(i_20, 0);
          w_9 = ATgetArgument(i_20, 1);
        }
      else
        _fail(t);
      {
        ATerm j_20 = ATgetArgument(t, 1);
        if(match_cons(j_20, sym__2))
          {
            v_9 = ATgetArgument(j_20, 0);
            y_9 = ATgetArgument(j_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_9), u_9), (ATerm) ATinsert(CheckATermList(y_9), w_9));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
  f_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      g_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
      e_33 = ATgetArgument(t, 2);
      {
        ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
        t = e_33;
        t = fetch_1_0(x_3, t);
        t = e_33;
        t = genzip_4_0(z_3, a_4, b_4, LiftPrimArg_0_0, t);
        t = _2_0(concat_0_0, c_4, t);
        if(match_cons(t, sym__2))
          {
            h_8 = ATgetArgument(t, 0);
            {
              ATerm k_20 = ATgetArgument(t, 1);
              if(match_cons(k_20, sym__2))
                {
                  i_8 = ATgetArgument(k_20, 0);
                  j_8 = ATgetArgument(k_20, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, h_8, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_8), (ATerm) ATmakeAppl(sym_PrimT_3, g_33, h_33, j_8)));
      }
    }
  else
    {
      ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          g_33 = ATgetArgument(t, 0);
          h_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_33;
      t = fetch_1_0(g_4, t);
      t = h_33;
      t = genzip_4_0(h_4, i_4, j_4, LiftPrimArg_0_0, t);
      t = _2_0(concat_0_0, k_4, t);
      if(match_cons(t, sym__2))
        {
          i_9 = ATgetArgument(t, 0);
          {
            ATerm l_20 = ATgetArgument(t, 1);
            if(match_cons(l_20, sym__2))
              {
                j_9 = ATgetArgument(l_20, 0);
                k_9 = ATgetArgument(l_20, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, i_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_9), (ATerm) ATmakeAppl(sym_PrimT_3, g_33, (ATerm)ATempty, k_9)));
    }
  return(t);
}
ATerm downup2_2_0 (ATerm q_129 (ATerm), ATerm r_129 (ATerm), ATerm t)
{
  t = q_129(t);
  {
    ATerm x_4 (ATerm t)
    {
      t = downup2_2_0(q_129, r_129, t);
      return(t);
    }
    t = SRTS_all(x_4, t);
    t = r_129(t);
  }
  return(t);
}
ATerm _2_0 (ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,x_0 = NULL,c_1 = NULL;
  p_33 = t;
  if(match_cons(t, sym__2))
    {
      l_33 = ATgetArgument(t, 0);
      m_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_33);
  k_33 = t;
  t = l_33;
  t = y_101(t);
  n_33 = t;
  t = m_33;
  t = z_101(t);
  o_33 = t;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_33, o_33);
  x_0 = t;
  t = SSLsetAnnotations(x_0, k_33);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm k_147 (ATerm), ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  if(match_cons(t, sym__2))
    {
      s_33 = ATgetArgument(t, 0);
      t_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_33, term_m_20);
  t = open_stream_0_0(t);
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_33, t_33);
  t = k_147(t);
  t = fclose_0_0(t);
  t = t_33;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = fetch_1_0(j_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = WriteToFile_1_0(k_5, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      if(match_cons(n_20, sym_Stream_1))
        {
          x_33 = ATgetArgument(n_20, 0);
        }
      else
        _fail(t);
      y_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(x_33, y_33);
  z_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_33);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = WriteToFile_1_0(n_5, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_20 = ATgetArgument(t, 0);
      if(match_cons(o_20, sym_Stream_1))
        {
          a_34 = ATgetArgument(o_20, 0);
        }
      else
        _fail(t);
      b_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(a_34, b_34);
  c_34 = t;
  t = term_p_20;
  d_34 = t;
  t = SSL_fputc(d_34, c_34);
  e_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_34);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL;
  v_33 = t;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm q_20 = t;
      int r_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_5 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((w_33 != NULL) && (w_33 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_33 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_5, t);
          ;
          LocalPopChoice(r_20);
        }
      else
        {
          t = q_20;
          t = term_s_20;
          if(((w_33 != NULL) && (w_33 != t)))
            _fail(t);
          else
            w_33 = t;
        }
      return(t);
    }
    t = _2_0(e_5, _id, t);
    t = v_33;
    {
      ATerm g_5 (ATerm t)
      {
        ATerm m_10 = NULL;
        m_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_33), m_10);
        return(t);
      }
      t = _2_0(_id, g_5, t);
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(h_5, i_5, t);
            ;
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            t = _2_0(_id, m_5, t);
          }
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
ATerm apply_strategy_1_0 (ATerm m_150 (ATerm), ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
  f_34 = t;
  t = dtime_0_0(t);
  t = f_34;
  t = m_150(t);
  g_34 = t;
  t = dtime_0_0(t);
  h_34 = t;
  t = g_34;
  if(match_cons(t, sym__2))
    {
      i_34 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_34), (ATerm) ATmakeAppl(sym_Runtime_1, h_34)), j_34);
  return(t);
}
ATerm x_34 (ATerm r_34, ATerm t)
{
  t = SSL_fclose(r_34);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL;
  v_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_34 = ATgetArgument(t, 0);
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_34);
            ;
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            t = x_34(v_34, t);
          }
      }
    }
  else
    {
      t = x_34(v_34, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_34 = NULL;
  t = SSL_stdin_stream();
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_34);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_34 = NULL;
  t = SSL_stdout_stream();
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_34);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_35 = NULL;
  t = SSL_stderr_stream();
  a_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_35);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm i_35 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      i_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_35;
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm m_35 = NULL;
  m_35 = t;
  t = SSL_is_string(m_35);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_20 = ATgetArgument(t, 0);
      ATerm y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_11 = NULL,t_11 = NULL;
        s_11 = t;
        t = SSL_explode_term(s_11);
        if(match_cons(t, sym__2))
          {
            ATerm e_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_21 = ATgetArgument(t, 1);
              if(((ATgetType(f_21) == AT_LIST) && !(ATisEmpty(f_21))))
                {
                  t_11 = ATgetFirst((ATermList) f_21);
                  {
                    ATerm g_21 = (ATerm) ATgetNext((ATermList) f_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = t_11;
        if(match_cons(t, sym_stderr_0))
          {
            t = t_11;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = t_11;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = t_11;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        {
          ATerm h_21 = t;
          int i_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
              t = _2_0(o_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  f_35 = ATgetArgument(t, 0);
                  g_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(f_35, g_35);
              h_35 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, h_35);
              ;
              LocalPopChoice(i_21);
            }
          else
            {
              t = h_21;
              {
                ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
                t = _2_0(p_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    j_35 = ATgetArgument(t, 0);
                    k_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(j_35, k_35);
                l_35 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, l_35);
              }
            }
        }
      }
  }
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_35 = NULL;
      q_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_35, term_m_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      t = debug_1_0(q_5, t);
      _fail(t);
    }
  n_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(p_35);
  o_35 = t;
  t = n_35;
  t = fclose_0_0(t);
  t = o_35;
  return(t);
}
ATerm fetch_1_0 (ATerm m_135 (ATerm), ATerm t)
{
  ATerm v_35 (ATerm t)
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_135, _id, t);
        ;
        LocalPopChoice(o_21);
      }
    else
      {
        t = n_21;
        t = Cons_2_0(_id, v_35, t);
      }
    return(t);
  }
  t = v_35(t);
  return(t);
}
ATerm debug_1_0 (ATerm i_147 (ATerm), ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
  w_35 = t;
  t = i_147(t);
  x_35 = t;
  t = term_e_9;
  y_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_35), x_35);
  z_35 = t;
  t = SSL_printnl(y_35, z_35);
  t = w_35;
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
    }
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_r_21;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_36 = NULL;
      g_36 = t;
      t = SSL_is_string(g_36);
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_5, t);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            {
              ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
              r_36 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_36 = ATgetArgument(t, 0);
                  t = s_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_36 = ATgetArgument(t, 0);
                      t = s_36;
                      {
                        ATerm w_21 = t;
                        int x_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(x_21);
                          }
                        else
                          {
                            t = w_21;
                            t = debug_1_0(s_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_12 = NULL,i_12 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_36 = ATgetArgument(t, 0);
                          t_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_36;
                      t = eval_config_0_0(t);
                      h_12 = t;
                      t = t_36;
                      t = eval_config_0_0(t);
                      i_12 = t;
                      t = SSL_strcat(h_12, i_12);
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
  ATerm y_36 = NULL,z_36 = NULL;
  y_36 = t;
  t = term_y_21;
  z_36 = t;
  t = SSL_table_get(z_36, y_36);
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_37 = NULL,b_37 = NULL;
        t = eval_config_0_0(t);
        a_37 = t;
        t = term_y_21;
        b_37 = t;
        t = SSL_table_put(b_37, y_36, a_37);
        t = a_37;
        ;
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_148 (ATerm), ATerm t)
{
  ATerm c_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_37 = NULL,e_37 = NULL;
      c_37 = t;
      t = term_f_22;
      t = get_config_0_0(t);
      e_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_37, term_g_22);
      t = geq_0_0(t);
      t = c_37;
      t = v_148(t);
      ;
      LocalPopChoice(e_22);
    }
  else
    {
      t = c_22;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm g_37 = NULL;
  g_37 = t;
  if(match_string(t, "-k"))
    {
      t = g_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_37;
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
  h_37 = t;
  t = SSL_string_to_int(h_37);
  i_37 = t;
  t = term_y_21;
  j_37 = t;
  t = term_h_22;
  k_37 = t;
  t = SSL_table_put(j_37, k_37, i_37);
  t = h_37;
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_i_22;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_5, u_5, v_5, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm m_37 = NULL;
  m_37 = t;
  if(match_string(t, "-S"))
    {
      t = m_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_37;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
  t = term_y_21;
  n_37 = t;
  t = term_f_22;
  o_37 = t;
  t = term_j_22;
  p_37 = t;
  t = SSL_table_put(n_37, o_37, p_37);
  t = term_k_22;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL;
  q_37 = t;
  t = SSL_string_to_int(q_37);
  r_37 = t;
  t = term_y_21;
  s_37 = t;
  t = term_f_22;
  t_37 = t;
  t = SSL_table_put(s_37, t_37, r_37);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_37);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_m_22;
  return(t);
}
ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  t = term_y_21;
  u_37 = t;
  t = term_n_22;
  v_37 = t;
  t = term_d_9;
  w_37 = t;
  t = SSL_table_put(u_37, v_37, w_37);
  t = term_q_22;
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_5, x_5, y_5, t);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = s_22;
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_6, c_6, d_6, t);
            ;
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            t = Option_3_0(e_6, f_6, g_6, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_38 = NULL;
      t = term_d_9;
      t = d_0(t);
      b_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_23, term_o_23, b_38);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm e_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_37 = ATgetFirst((ATermList) t);
          a_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_37;
      t = a_0(t);
      t = term_d_9;
      t = b_0(t);
      e_38 = t;
      t = (ATerm) ATinsert(CheckATermList(a_38), e_38);
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm g_38 = NULL;
  g_38 = t;
  if(match_string(t, "-o"))
    {
      t = g_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_38;
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
  h_38 = t;
  t = term_y_21;
  i_38 = t;
  t = term_p_23;
  j_38 = t;
  t = SSL_table_put(i_38, j_38, h_38);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_38);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_6, i_6, j_6, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL;
  if(match_cons(t, sym__3))
    {
      m_38 = ATgetArgument(t, 0);
      n_38 = ATgetArgument(t, 1);
      o_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_38, n_38);
  {
    ATerm s_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_23 = ATgetArgument(t, 0);
            ATerm b_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_38, n_38);
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = s_23;
        t = (ATerm) ATempty;
      }
    p_38 = t;
    t = (ATerm) ATinsert(CheckATermList(p_38), o_38);
    q_38 = t;
    t = SSL_table_put(m_38, n_38, q_38);
    t = (ATerm) ATmakeAppl(sym__3, m_38, n_38, o_38);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_39 = NULL;
      t = term_d_9;
      t = m_0(t);
      c_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_23, term_o_23, c_39);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_38 = ATgetFirst((ATermList) t);
          z_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_38;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_39 = ATgetFirst((ATermList) t);
          b_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_38;
      t = i_0(t);
      t = a_39;
      t = k_0(t);
      g_39 = t;
      t = (ATerm) ATinsert(CheckATermList(b_39), g_39);
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm i_39 = NULL;
  i_39 = t;
  if(match_string(t, "-i"))
    {
      t = i_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_39;
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL;
  j_39 = t;
  t = term_y_21;
  k_39 = t;
  t = term_c_24;
  l_39 = t;
  t = SSL_table_put(k_39, l_39, j_39);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_39);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_d_24;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_6, l_6, m_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_9;
  t = whoami_0_0(t);
  m_39 = t;
  t = term_e_9;
  n_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_24), m_39);
  o_39 = t;
  t = SSL_printnl(n_39, o_39);
  t = term_h_9;
  p_39 = t;
  t = SSL_exit(p_39);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_f_24;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm f_141 (ATerm), ATerm g_141 (ATerm), ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_141(t);
      ;
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm s_39 = NULL,t_39 = NULL,w_39 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_39 = ATgetFirst((ATermList) t);
            t_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_39;
        t = foldr_2_0(f_141, g_141, t);
        w_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_39, w_39);
        t = g_141(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL;
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(t_12, u_12);
        ;
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        t = SSL_addr(t_12, u_12);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_39 = NULL,m_12 = NULL,n_12 = NULL;
  t = times_0_0(t);
  m_12 = t;
  t = SSL_explode_term(m_12);
  if(match_cons(t, sym__2))
    {
      ATerm k_24 = ATgetArgument(t, 0);
      n_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12;
  t = foldr_2_0(n_6, o_6, t);
  z_39 = t;
  t = SSL_TicksToSeconds(z_39);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
  k_40 = t;
  if(match_cons(t, sym__2))
    {
      l_40 = ATgetArgument(t, 0);
      m_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_40;
        if((l_40 != t))
          {
            _fail(t);
          }
        t = k_40;
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        t = k_40;
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_40, m_40);
              ;
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
              t = SSL_gtr(l_40, m_40);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_40, m_40);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_148 (ATerm), ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_40 = NULL,r_40 = NULL;
      p_40 = t;
      t = term_f_22;
      t = get_config_0_0(t);
      r_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_40, term_h_9);
      t = geq_0_0(t);
      t = p_40;
      t = u_148(t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
  t = run_time_0_0(t);
  t_40 = t;
  t = term_d_9;
  t = whoami_0_0(t);
  u_40 = t;
  t = term_e_9;
  v_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_24), t_40), term_r_24), u_40);
  w_40 = t;
  t = SSL_printnl(v_40, w_40);
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_24), t_40), term_r_24), u_40));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_22;
  x_40 = t;
  t = SSL_exit(x_40);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm v_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(w_24);
          }
        else
          {
            t = v_24;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_151 (ATerm), ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
      t = fetch_1_0(q_6, t);
    }
  t = k_151(t);
  return(t);
}
ATerm map_1_0 (ATerm c_135 (ATerm), ATerm t)
{
  ATerm y_40 (ATerm t)
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        t = Cons_2_0(c_135, y_40, t);
      }
    return(t);
  }
  t = y_40(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_41 = ATgetFirst((ATermList) t);
      b_41 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_41 = NULL,g_41 = NULL;
        t = b_41;
        t = g_0(t);
        f_41 = t;
        t = a_41;
        t = f_0(t);
        g_41 = t;
        t = b_41;
        {
          ATerm r_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(f_41), g_41);
            return(t);
          }
          t = reverse_acc_2_0(f_0, r_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_9;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm e_115 (ATerm), ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,d_1 = NULL,e_1 = NULL;
  k_41 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_41);
  h_41 = t;
  t = i_41;
  t = e_115(t);
  j_41 = t;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_41);
  d_1 = t;
  t = SSLsetAnnotations(d_1, h_41);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm p_41 = NULL;
  p_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_41), term_c_25);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL;
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      t = fetch_1_0(s_6, t);
    }
  t = term_f_25;
  t = echo_0_0(t);
  t = term_n_23;
  n_41 = t;
  t = term_o_23;
  o_41 = t;
  t = SSL_table_get(n_41, o_41);
  t = reverse_acc_2_0(_id, t_6, t);
  t = map_1_0(w_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm f_115 (ATerm), ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,f_1 = NULL,g_1 = NULL;
  t_41 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      r_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_41);
  q_41 = t;
  t = r_41;
  t = f_115(t);
  s_41 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_41);
  f_1 = t;
  t = SSLsetAnnotations(f_1, q_41);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  x_41 = t;
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_41;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_25 = ATgetFirst((ATermList) t);
                ATerm j_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_41;
          }
        ;
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        t = (ATerm) ATinsert(ATempty, x_41);
      }
    y_41 = t;
    t = term_s_20;
    z_41 = t;
    t = SSL_printnl(z_41, y_41);
    t = x_41;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_f_24;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
  t = term_y_21;
  d_42 = t;
  t = term_k_25;
  e_42 = t;
  t = term_d_9;
  f_42 = t;
  t = SSL_table_put(d_42, e_42, f_42);
  t = term_l_25;
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_m_25;
  return(t);
}
ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL;
  t = term_y_21;
  g_42 = t;
  t = term_k_25;
  h_42 = t;
  t = term_d_9;
  i_42 = t;
  t = SSL_table_put(g_42, h_42, i_42);
  t = term_y_21;
  j_42 = t;
  t = term_n_25;
  k_42 = t;
  t = term_d_9;
  l_42 = t;
  t = SSL_table_put(j_42, k_42, l_42);
  t = term_o_25;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_p_25;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_6, y_6, g_7, t);
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      t = Option_3_0(h_7, o_7, p_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,h_1 = NULL,i_1 = NULL;
  r_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_42 = ATgetFirst((ATermList) t);
      o_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_42);
  m_42 = t;
  t = n_42;
  t = n_106(t);
  p_42 = t;
  t = o_42;
  t = o_106(t);
  q_42 = t;
  i_1 = t;
  t = (ATerm) ATinsert(CheckATermList(q_42), p_42);
  h_1 = t;
  t = SSLsetAnnotations(h_1, m_42);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
  w_42 = t;
  t = term_y_21;
  x_42 = t;
  t = term_f_24;
  y_42 = t;
  t = SSL_table_put(x_42, y_42, w_42);
  t = (ATerm) ATmakeAppl(sym_Program_1, w_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_153 (ATerm), ATerm t)
{
  ATerm v_42 = NULL;
  v_42 = t;
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_25;
        t = n_153(t);
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
      }
    t = v_42;
    {
      ATerm r_7 (ATerm t)
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_25 = t;
            int y_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(y_25);
              }
            else
              {
                t = x_25;
                t = n_153(t);
                t = Cons_2_0(_id, r_7, t);
              }
            ;
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            {
              ATerm a_43 = NULL,b_43 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_43 = ATgetFirst((ATermList) t);
                  b_43 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_43), (ATerm) ATmakeAppl(sym_Undefined_1, a_43));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_7, r_7, t);
    }
  }
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm p_43 = NULL;
  p_43 = t;
  if(match_string(t, "--help"))
    {
      t = p_43;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_43;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_43;
        }
    }
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL;
  t = term_y_21;
  q_43 = t;
  t = term_z_24;
  r_43 = t;
  t = term_d_9;
  s_43 = t;
  t = SSL_table_put(q_43, r_43, s_43);
  t = term_z_25;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm x_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_153 (ATerm), ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL;
  i_43 = t;
  t = term_n_23;
  j_43 = t;
  t = term_o_23;
  k_43 = t;
  t = (ATerm) ATempty;
  l_43 = t;
  t = SSL_table_put(j_43, k_43, l_43);
  t = i_43;
  {
    ATerm s_7 (ATerm t)
    {
      ATerm b_26 = t;
      int c_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_153(t);
          ;
          LocalPopChoice(c_26);
        }
      else
        {
          t = b_26;
          {
            ATerm d_26 = t;
            int e_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_7, v_7, w_7, t);
                ;
                LocalPopChoice(e_26);
              }
            else
              {
                t = d_26;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_7, t);
    {
      ATerm f_26 = t;
      int g_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_43 = NULL;
          z_43 = t;
          {
            ATerm h_26 = t;
            int i_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_14 = NULL;
                t = z_43;
                {
                  ATerm j_26 = t;
                  int k_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_z_24;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(k_26);
                    }
                  else
                    {
                      t = j_26;
                      t = fetch_1_0(x_7, t);
                    }
                  t = z_43;
                  t = default_system_usage_0_0(t);
                  t = term_j_22;
                  b_14 = t;
                  t = SSL_exit(b_14);
                }
                ;
                LocalPopChoice(i_26);
              }
            else
              {
                t = h_26;
                {
                  ATerm f_14 = NULL;
                  t = term_k_25;
                  t = get_config_0_0(t);
                  t = z_43;
                  t = default_system_about_0_0(t);
                  t = term_j_22;
                  f_14 = t;
                  t = SSL_exit(f_14);
                }
              }
          }
          ;
          LocalPopChoice(g_26);
        }
      else
        {
          t = f_26;
          {
            ATerm l_26 = t;
            int m_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
                ATerm y_7 (ATerm t)
                {
                  ATerm z_7 (ATerm t)
                  {
                    if(((m_43 != NULL) && (m_43 != t)))
                      _fail(t);
                    else
                      m_43 = t;
                    return(t);
                  }
                  t = Undefined_1_0(z_7, t);
                  return(t);
                }
                t = fetch_1_0(y_7, t);
                t = term_e_9;
                a_44 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_43)), term_n_26);
                b_44 = t;
                t = SSL_printnl(a_44, b_44);
                t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_43)), term_n_26));
                t = default_system_usage_0_0(t);
                t = term_h_9;
                c_44 = t;
                t = SSL_exit(c_44);
                ;
                LocalPopChoice(m_26);
              }
            else
              {
                t = l_26;
              }
          }
        }
      n_43 = t;
      t = term_n_23;
      o_43 = t;
      t = SSL_table_destroy(o_43);
      t = n_43;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_151 (ATerm), ATerm n_151 (ATerm), ATerm o_151 (ATerm), ATerm p_151 (ATerm), ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL;
  t = parse_options_1_0(m_151, t);
  f_44 = t;
  t = term_o_26;
  g_44 = t;
  t = SSL_table_create(g_44);
  t = term_o_26;
  h_44 = t;
  t = term_p_26;
  i_44 = t;
  t = SSL_table_put(h_44, i_44, f_44);
  t = f_44;
  t = o_151(t);
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_151, t);
        ;
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        {
          ATerm s_26 = t;
          int t_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_151(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_26);
            }
          else
            {
              t = s_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = if_verbose2_1_0(g_8, t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
  t = term_y_21;
  j_44 = t;
  t = term_u_26;
  k_44 = t;
  t = term_d_9;
  l_44 = t;
  t = SSL_table_put(j_44, k_44, l_44);
  t = term_v_26;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_w_26;
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL;
  m_44 = t;
  t = term_f_24;
  t = get_config_0_0(t);
  n_44 = t;
  t = term_e_9;
  o_44 = t;
  t = (ATerm) ATinsert(ATempty, n_44);
  p_44 = t;
  t = SSL_printnl(o_44, p_44);
  t = m_44;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm x_150 (ATerm), ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_150(t);
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        {
          ATerm z_26 = t;
          int a_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(a_27);
            }
          else
            {
              t = z_26;
              {
                ATerm b_27 = t;
                int c_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(c_27);
                  }
                else
                  {
                    t = b_27;
                    {
                      ATerm d_27 = t;
                      int e_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(d_8, e_8, f_8, t);
                          ;
                          LocalPopChoice(e_27);
                        }
                      else
                        {
                          t = d_27;
                          {
                            ATerm f_27 = t;
                            int g_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(g_27);
                              }
                            else
                              {
                                t = f_27;
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
  ATerm c_8 (ATerm t)
  {
    ATerm q_44 = NULL,r_44 = NULL,m_14 = NULL;
    q_44 = t;
    {
      ATerm h_27 = t;
      int i_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_44 != NULL) && (r_44 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_8, t);
          ;
          LocalPopChoice(i_27);
        }
      else
        {
          t = h_27;
          t = term_j_27;
          r_44 = t;
        }
      t = not_null(r_44);
      t = ReadFromFile_0_0(t);
      m_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_44, m_14);
      t = apply_strategy_1_0(v_150, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(a_8, x_150, b_8, c_8, t);
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = _2_0(_id, y_8, t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = downup2_2_0(z_8, a_9, t);
  t = downup_1_0(c_9, t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = repeat_1_0(b_9, t);
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = repeat_1_0(Canon_0_0, t);
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Canon_0_0(t);
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
      {
        ATerm m_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(n_27);
          }
        else
          {
            t = m_27;
            t = LiftCallArgs_0_0(t);
          }
      }
    }
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(x_8, _fail, default_usage_0_0, t);
  return(t);
}
