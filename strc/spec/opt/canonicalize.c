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
ATerm term_z_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_h_25;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_b_23;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_c_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_l_20;
ATerm term_e_20;
ATerm term_t_19;
ATerm term_p_19;
ATerm term_c_19;
ATerm term_u_18;
ATerm term_r_18;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_j_15;
ATerm term_e_12;
ATerm term_y_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_y_10;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_o_8;
void init_constant_terms (void)
{
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Sort_2, term_s_11, (ATerm) ATempty);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_t_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_CallT_3, term_q_15, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_CallT_3, term_t_15, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_16);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_c_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_p_21, term_o_8);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym__2, term_h_22, term_k_22);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym__2, term_g_24, term_o_8);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_j_24, term_o_8);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, term_u_23, term_o_8);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__2, term_s_27, term_o_8);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm topdown_1_0 (ATerm l_107 (ATerm), ATerm);
ATerm p_0 (ATerm);
ATerm u_4 (ATerm y_77, ATerm x_77, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm p_108 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm n_106 (ATerm), ATerm);
ATerm downup_1_0 (ATerm n_107 (ATerm), ATerm);
ATerm CreateDef2_0_0 (ATerm);
ATerm n_32 (ATerm e_32, ATerm);
ATerm conc_0_0 (ATerm);
ATerm alltd_1_0 (ATerm d_109 (ATerm), ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm Canon_0_0 (ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm e_6 (ATerm w_67, ATerm x_67, ATerm y_67, ATerm);
ATerm genzip_4_0 (ATerm f_115 (ATerm), ATerm g_115 (ATerm), ATerm h_115 (ATerm), ATerm i_115 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm s_113 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm v_46 (ATerm l_46, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm j_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm downup2_2_0 (ATerm q_107 (ATerm), ATerm r_107 (ATerm), ATerm);
ATerm k_6 (ATerm s_47, ATerm t_47, ATerm);
ATerm l_6 (ATerm g_51, ATerm h_51, ATerm);
ATerm n_6 (ATerm q_125 (ATerm), ATerm l_433, ATerm k_51, ATerm);
ATerm m_6 (ATerm c_51, ATerm d_51, ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm s_128 (ATerm), ATerm);
ATerm y_52 (ATerm n_52, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm o_6 (ATerm i_51, ATerm);
ATerm p_6 (ATerm u_47, ATerm v_47, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_54 (ATerm i_53, ATerm);
ATerm o_54 (ATerm m_53, ATerm n_53, ATerm o_53, ATerm);
ATerm p_54 (ATerm w_53, ATerm x_53, ATerm y_53, ATerm);
ATerm q_6 (ATerm);
ATerm z_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_113 (ATerm), ATerm);
ATerm j_6 (ATerm v_42, ATerm w_42, ATerm);
ATerm debug_1_0 (ATerm o_125 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm e_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_127 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm n_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm b_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm w_6 (ATerm j_52, ATerm k_52, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_6 (ATerm h_57, ATerm i_57, ATerm g_57, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm r_6 (ATerm g_45, ATerm h_45, ATerm);
ATerm foldr_2_0 (ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_127 (ATerm), ATerm);
ATerm s_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm t_5 (ATerm);
ATerm need_help_1_0 (ATerm q_129 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_113 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm t_6 (ATerm y_58, ATerm z_58, ATerm);
ATerm x_5 (ATerm);
ATerm a_6 (ATerm);
ATerm d_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_6 (ATerm);
ATerm s_6 (ATerm);
ATerm x_6 (ATerm);
ATerm z_6 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm t_131 (ATerm), ATerm);
ATerm e_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm parse_options_1_0 (ATerm s_131 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm v_129 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm s_7 (ATerm);
ATerm w_7 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm iowrap_3_0 (ATerm b_129 (ATerm), ATerm c_129 (ATerm), ATerm d_129 (ATerm), ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm n_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL,o_0 = NULL;
  b_0 = t;
  t = term_o_8;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_a_9;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_9), c_0), term_b_9);
  o_0 = t;
  t = SSL_printnl(f_0, o_0);
  t = term_d_9;
  e_0 = t;
  t = SSL_exit(e_0);
  t = b_0;
  return(t);
}
ATerm topdown_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(l_107, t);
    return(t);
  }
  t = l_107(t);
  t = SRTS_all(a_0, t);
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm f_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm i_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(h_9);
      {
        ATerm q_0 = NULL,r_0 = NULL;
        q_0 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm r_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        r_0 = t;
        t = SSLgetAnnotations(q_0);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_9 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) v_9) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_9 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(x_9) != AT_LIST) || !(ATisEmpty(x_9))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_0;
      }
    }
  else
    {
      t = f_9;
      {
        ATerm z_9 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm c_10 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) c_10) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm d_10 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(b_10);
            _fail(t);
          }
        else
          {
            t = z_9;
          }
      }
    }
  return(t);
}
ATerm u_4 (ATerm y_77, ATerm x_77, ATerm t)
{
  t = y_77;
  t = topdown_1_0(p_0, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, y_77);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      e_1 = ATgetArgument(t, 0);
      h_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_1;
  if(match_cons(t, sym_Match_1))
    {
      f_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_1;
  if(match_cons(t, sym_Var_1))
    {
      g_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_1;
  if(match_cons(t, sym_Seq_2))
    {
      i_1 = ATgetArgument(t, 0);
      c_1 = ATgetArgument(t, 1);
      t = i_1;
      if(match_cons(t, sym_Build_1))
        {
          j_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_1;
      if(match_cons(t, sym_Var_1))
        {
          b_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_1;
      if((g_1 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_1)), c_1);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          i_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_1;
      if(match_cons(t, sym_Var_1))
        {
          j_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_1;
      if((g_1 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_1));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL,r_2 = NULL,t_2 = NULL,u_2 = NULL,w_2 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      r_2 = ATgetArgument(t, 0);
      u_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_2;
  if(match_cons(t, sym_Build_1))
    {
      t_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_2;
  if(match_cons(t, sym_Seq_2))
    {
      w_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
      t = w_2;
      if(match_cons(t, sym_Match_1))
        {
          e_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_2;
      if((t_2 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_2), f_2);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          w_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_2;
      if((t_2 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, t_2);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      k_3 = ATgetArgument(t, 0);
      m_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_3;
  if(match_cons(t, sym_Match_1))
    {
      l_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_3;
  if(match_cons(t, sym_Seq_2))
    {
      n_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
      t = n_3;
      if(match_cons(t, sym_Match_1))
        {
          h_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_3;
      if((l_3 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_3), i_3);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          n_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_3;
      if((l_3 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, l_3);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm a_4 = NULL,c_4 = NULL,d_4 = NULL,g_4 = NULL,l_4 = NULL,m_4 = NULL,o_4 = NULL,p_4 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      g_4 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4;
  if(match_cons(t, sym_Build_1))
    {
      ATerm i_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_4;
  if(match_cons(t, sym_Seq_2))
    {
      m_4 = ATgetArgument(t, 0);
      o_4 = ATgetArgument(t, 1);
      t = m_4;
      if(match_cons(t, sym_PrimT_3))
        {
          a_4 = ATgetArgument(t, 0);
          c_4 = ATgetArgument(t, 1);
          d_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, a_4, c_4, d_4), o_4);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          m_4 = ATgetArgument(t, 0);
          o_4 = ATgetArgument(t, 1);
          p_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, m_4, o_4, p_4);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm z_5 = NULL,c_6 = NULL,v_6 = NULL,y_6 = NULL,a_7 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      v_6 = ATgetArgument(t, 0);
      y_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6;
  if(match_cons(t, sym_Build_1))
    {
      ATerm j_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6;
  if(match_cons(t, sym_Seq_2))
    {
      a_7 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
      t = a_7;
      if(match_cons(t, sym_Build_1))
        {
          z_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_5), c_6);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          a_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, a_7);
    }
  return(t);
}
ATerm s_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      if(((ATgetType(k_10) != AT_LIST) || !(ATisEmpty(k_10))))
        _fail(t);
      {
        ATerm l_10 = ATgetArgument(t, 1);
        if(((ATgetType(l_10) != AT_LIST) || !(ATisEmpty(l_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      if(((ATgetType(m_10) == AT_LIST) && !(ATisEmpty(m_10))))
        {
          q_8 = ATgetFirst((ATermList) m_10);
          r_8 = (ATerm) ATgetNext((ATermList) m_10);
        }
      else
        _fail(t);
      {
        ATerm n_10 = ATgetArgument(t, 1);
        if(((ATgetType(n_10) == AT_LIST) && !(ATisEmpty(n_10))))
          {
            s_8 = ATgetFirst((ATermList) n_10);
            t_8 = (ATerm) ATgetNext((ATermList) n_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_8, s_8), (ATerm) ATmakeAppl(sym__2, r_8, t_8));
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm u_8 = NULL,x_8 = NULL;
  if(match_cons(t, sym__2))
    {
      u_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_8), u_8);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL;
  if(match_cons(t, sym__2))
    {
      y_8 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_8), (ATerm) ATmakeAppl(sym_Match_1, z_8));
  return(t);
}
ATerm x_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      if(((ATgetType(o_10) != AT_LIST) || !(ATisEmpty(o_10))))
        _fail(t);
      {
        ATerm p_10 = ATgetArgument(t, 1);
        if(((ATgetType(p_10) != AT_LIST) || !(ATisEmpty(p_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_10 = ATgetArgument(t, 0);
      if(((ATgetType(q_10) == AT_LIST) && !(ATisEmpty(q_10))))
        {
          k_9 = ATgetFirst((ATermList) q_10);
          l_9 = (ATerm) ATgetNext((ATermList) q_10);
        }
      else
        _fail(t);
      {
        ATerm r_10 = ATgetArgument(t, 1);
        if(((ATgetType(r_10) == AT_LIST) && !(ATisEmpty(r_10))))
          {
            m_9 = ATgetFirst((ATermList) r_10);
            n_9 = (ATerm) ATgetNext((ATermList) r_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_9, m_9), (ATerm) ATmakeAppl(sym__2, l_9, n_9));
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL;
  if(match_cons(t, sym__2))
    {
      o_9 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_9), o_9);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_9), (ATerm) ATmakeAppl(sym_Match_1, t_9));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      x_7 = ATgetArgument(t, 0);
      b_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7;
  if(match_cons(t, sym_Build_1))
    {
      y_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7;
  if(match_cons(t, sym_Op_2))
    {
      z_7 = ATgetArgument(t, 0);
      a_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_8;
  if(match_cons(t, sym_Seq_2))
    {
      c_8 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
      {
        ATerm p_8 = NULL;
        t = c_8;
        if(match_cons(t, sym_Match_1))
          {
            d_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_8;
        if(match_cons(t, sym_Op_2))
          {
            t_7 = ATgetArgument(t, 0);
            u_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_7;
        if((z_7 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, a_8, u_7);
        t = genzip_4_0(s_0, t_0, u_0, v_0, t);
        p_8 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, z_7, a_8)), v_7));
      }
    }
  else
    {
      ATerm j_9 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          c_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_8;
      if(match_cons(t, sym_Op_2))
        {
          d_8 = ATgetArgument(t, 0);
          e_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_8;
      if((z_7 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, a_8, e_8);
      t = genzip_4_0(x_0, y_0, z_0, a_1, t);
      j_9 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_9), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, z_7, a_8)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm f_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,v_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL;
  p_11 = t;
  if(match_cons(t, sym_Seq_2))
    {
      q_11 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11;
  if(match_cons(t, sym_Build_1))
    {
      r_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11;
  if(match_cons(t, sym_Op_2))
    {
      v_11 = ATgetArgument(t, 0);
      {
        ATerm s_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_11;
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            a_12 = ATgetArgument(t, 0);
            {
              ATerm v_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(u_10);
        t = a_12;
        if(match_cons(t, sym_Match_1))
          {
            b_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_12;
        if(match_cons(t, sym_Op_2))
          {
            f_11 = ATgetArgument(t, 0);
            {
              ATerm w_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_11, f_11);
        {
          ATerm x_10 = t;
          if((PushChoice() == 0))
            {
              ATerm w_0 = NULL;
              if(match_cons(t, sym__2))
                {
                  w_0 = ATgetArgument(t, 0);
                  if((w_0 != ATgetArgument(t, 1)))
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
              t = x_10;
            }
          t = term_y_10;
        }
      }
    else
      {
        t = t_10;
        if(match_cons(t, sym_Match_1))
          {
            a_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_12;
        if(match_cons(t, sym_Op_2))
          {
            b_12 = ATgetArgument(t, 0);
            {
              ATerm z_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_11, b_12);
        {
          ATerm b_11 = t;
          if((PushChoice() == 0))
            {
              ATerm r_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  r_1 = ATgetArgument(t, 0);
                  if((r_1 != ATgetArgument(t, 1)))
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
              t = b_11;
            }
          t = term_y_10;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm p_108 (ATerm), ATerm t)
{
  ATerm i_12 (ATerm t)
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_108(t);
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        t = SRTS_one(i_12, t);
      }
    return(t);
  }
  t = i_12(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm k_13 = NULL,m_13 = NULL,n_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,b_14 = NULL;
  k_13 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_13 = ATgetArgument(t, 0);
      v_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_13;
  if(match_cons(t, sym_Let_2))
    {
      w_13 = ATgetArgument(t, 0);
      y_13 = ATgetArgument(t, 1);
      {
        ATerm i_14 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, m_13, w_13);
        t = conc_0_0(t);
        i_14 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, i_14, y_13);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          w_13 = ATgetArgument(t, 0);
          y_13 = ATgetArgument(t, 1);
          b_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_13 = ATgetFirst((ATermList) t);
          u_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_13;
      if(match_cons(t, sym_SDefT_4))
        {
          q_13 = ATgetArgument(t, 0);
          r_13 = ATgetArgument(t, 1);
          s_13 = ATgetArgument(t, 2);
          t_13 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = r_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_13;
      if(match_cons(t, sym_SVar_1))
        {
          x_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_13;
      if((q_13 != t))
        {
          _fail(t);
        }
      t = t_13;
      {
        ATerm e_11 = t;
        if((PushChoice() == 0))
          {
            ATerm d_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm g_11 = ATgetArgument(t, 0);
                  if(match_cons(g_11, sym_SVar_1))
                    {
                      if((q_13 != ATgetArgument(g_11, 0)))
                        {
                          _fail(ATgetArgument(g_11, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm i_11 = ATgetArgument(t, 1);
                    if(((ATgetType(i_11) != AT_LIST) || !(ATisEmpty(i_11))))
                      _fail(t);
                  }
                  {
                    ATerm j_11 = ATgetArgument(t, 2);
                    if(((ATgetType(j_11) != AT_LIST) || !(ATisEmpty(j_11))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(d_1, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_11;
          }
        t = t_13;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm v_14 = NULL,x_14 = NULL,y_14 = NULL,c_15 = NULL,d_15 = NULL,k_15 = NULL,m_15 = NULL,n_15 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      m_15 = ATgetArgument(t, 0);
      t = m_15;
      if(match_cons(t, sym_Seq_2))
        {
          k_15 = ATgetArgument(t, 0);
          x_14 = ATgetArgument(t, 1);
          t = k_15;
          if(match_cons(t, sym_Where_1))
            {
              v_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_14;
          if(match_cons(t, sym_Seq_2))
            {
              y_14 = ATgetArgument(t, 0);
              d_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_14;
          if(match_cons(t, sym_Build_1))
            {
              c_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, v_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_15), d_15)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              k_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, k_15);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          m_15 = ATgetArgument(t, 0);
          t = m_15;
          if(match_cons(t, sym_Test_1))
            {
              k_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, k_15);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              m_15 = ATgetArgument(t, 0);
              t = m_15;
              if(match_cons(t, sym_Not_1))
                {
                  k_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, k_15);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  m_15 = ATgetArgument(t, 0);
                  n_15 = ATgetArgument(t, 1);
                  t = n_15;
                  if((m_15 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      m_15 = ATgetArgument(t, 0);
                      n_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = n_15;
                  if((m_15 != t))
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
  ATerm k_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      k_16 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
      t = k_16;
      if(match_cons(t, sym_LChoice_2))
        {
          o_16 = ATgetArgument(t, 0);
          p_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, o_16, (ATerm) ATmakeAppl(sym_LChoice_2, p_16, q_16));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          k_16 = ATgetArgument(t, 0);
          q_16 = ATgetArgument(t, 1);
          t = k_16;
          if(match_cons(t, sym_Seq_2))
            {
              o_16 = ATgetArgument(t, 0);
              p_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, o_16, (ATerm) ATmakeAppl(sym_Seq_2, p_16, q_16));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              k_16 = ATgetArgument(t, 0);
              q_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_16;
          if(match_cons(t, sym_Choice_2))
            {
              o_16 = ATgetArgument(t, 0);
              p_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, o_16, (ATerm) ATmakeAppl(sym_Choice_2, p_16, q_16));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
  z_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_19 = ATgetFirst((ATermList) t);
      b_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,v_2 = NULL,z_2 = NULL,j_4 = NULL,i_4 = NULL;
        t = SSLgetAnnotations(z_18);
        o_2 = t;
        t = a_19;
        t = n_0(t);
        v_2 = t;
        t = (ATerm) ATinsert(CheckATermList(b_19), v_2);
        i_4 = t;
        t = SSLsetAnnotations(i_4, o_2);
        z_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_2 = ATgetFirst((ATermList) t);
            m_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_2);
        k_2 = t;
        t = m_2;
        {
          ATerm n_11 = t;
          int o_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(o_11);
            }
          else
            {
              t = n_11;
            }
          n_2 = t;
          t = (ATerm) ATinsert(CheckATermList(n_2), l_2);
          j_4 = t;
          t = SSLsetAnnotations(j_4, k_2);
        }
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        {
          ATerm u_3 = NULL,x_3 = NULL,k_4 = NULL;
          t = SSLgetAnnotations(z_18);
          u_3 = t;
          t = b_19;
          t = map1_1_0(n_0, t);
          x_3 = t;
          t = (ATerm) ATinsert(CheckATermList(x_3), a_19);
          k_4 = t;
          t = SSLsetAnnotations(k_4, u_3);
        }
      }
  }
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm e_21 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_11), term_u_11));
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm f_21 = NULL,j_21 = NULL;
  j_21 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_21 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, f_21, term_u_11);
    }
  else
    {
      t = j_21;
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm a_22 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_22, term_u_11);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL;
  c_22 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_22 = ATgetArgument(t, 0);
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, b_22, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_11), term_u_11));
            ;
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            t = c_22;
          }
      }
    }
  else
    {
      t = c_22;
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm v_22 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_22, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_11), term_u_11));
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL;
  x_22 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_22 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, w_22, term_u_11);
    }
  else
    {
      t = x_22;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,a_20 = NULL,b_20 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      a_20 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, a_20, b_20);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          a_20 = ATgetArgument(t, 0);
          t = a_20;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_19 = ATgetFirst((ATermList) t);
              w_19 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, v_19, (ATerm) ATmakeAppl(sym_LChoices_1, w_19));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_y_10;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              a_20 = ATgetArgument(t, 0);
              t = a_20;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_19 = ATgetFirst((ATermList) t);
                  w_19 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, v_19, (ATerm) ATmakeAppl(sym_Choices_1, w_19));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_y_10;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  a_20 = ATgetArgument(t, 0);
                  t = a_20;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_19 = ATgetFirst((ATermList) t);
                      w_19 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_19, (ATerm) ATmakeAppl(sym_Seqs_1, w_19));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_y_11;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_20 = ATgetArgument(t, 0);
                      b_20 = ATgetArgument(t, 1);
                      y_19 = ATgetArgument(t, 2);
                      x_19 = ATgetArgument(t, 3);
                      {
                        ATerm b_21 = NULL,d_21 = NULL;
                        t = b_20;
                        t = map1_1_0(k_1, t);
                        b_21 = t;
                        t = y_19;
                        t = map1_1_0(l_1, t);
                        d_21 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, a_20, b_21, d_21, x_19);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          a_20 = ATgetArgument(t, 0);
                          b_20 = ATgetArgument(t, 1);
                          y_19 = ATgetArgument(t, 2);
                          x_19 = ATgetArgument(t, 3);
                          {
                            ATerm c_12 = t;
                            int d_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm x_21 = NULL,z_21 = NULL;
                                t = y_19;
                                t = map1_1_0(m_1, t);
                                x_21 = t;
                                t = b_20;
                                t = map_1_0(n_1, t);
                                z_21 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, a_20, z_21, x_21, x_19);
                                ;
                                LocalPopChoice(d_12);
                              }
                            else
                              {
                                t = c_12;
                                {
                                  ATerm s_22 = NULL,u_22 = NULL;
                                  t = b_20;
                                  t = map1_1_0(o_1, t);
                                  s_22 = t;
                                  t = y_19;
                                  t = map_1_0(p_1, t);
                                  u_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, a_20, s_22, u_22, x_19);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              a_20 = ATgetArgument(t, 0);
                              b_20 = ATgetArgument(t, 1);
                              y_19 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, b_20, (ATerm) ATmakeAppl(sym_Op_2, term_e_12, (ATerm) ATinsert(ATinsert(ATempty, y_19), a_20)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  a_20 = ATgetArgument(t, 0);
                                  b_20 = ATgetArgument(t, 1);
                                  y_19 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, y_19)), a_20), (ATerm) ATmakeAppl(sym_Build_1, b_20)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      a_20 = ATgetArgument(t, 0);
                                      b_20 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_20, (ATerm) ATmakeAppl(sym_Match_1, b_20));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          a_20 = ATgetArgument(t, 0);
                                          b_20 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_20), b_20);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              a_20 = ATgetArgument(t, 0);
                                              b_20 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_20), a_20);
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
ATerm q_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm v_24 = NULL,x_24 = NULL,y_24 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      v_24 = ATgetArgument(t, 0);
      t = v_24;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_y_10;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          v_24 = ATgetArgument(t, 0);
          t = v_24;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_y_11;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              v_24 = ATgetArgument(t, 0);
              x_24 = ATgetArgument(t, 1);
              t = v_24;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_y_10;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  v_24 = ATgetArgument(t, 0);
                  x_24 = ATgetArgument(t, 1);
                  t = x_24;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_y_10;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      v_24 = ATgetArgument(t, 0);
                      x_24 = ATgetArgument(t, 1);
                      t = x_24;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_y_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          v_24 = ATgetArgument(t, 0);
                          t = v_24;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_y_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              v_24 = ATgetArgument(t, 0);
                              t = v_24;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_y_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  v_24 = ATgetArgument(t, 0);
                                  x_24 = ATgetArgument(t, 1);
                                  t = x_24;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_y_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      v_24 = ATgetArgument(t, 0);
                                      x_24 = ATgetArgument(t, 1);
                                      t = x_24;
                                      t = fetch_1_0(q_1, t);
                                      t = term_y_10;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          v_24 = ATgetArgument(t, 0);
                                          x_24 = ATgetArgument(t, 1);
                                          t = x_24;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = v_24;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = x_24;
                                                }
                                              else
                                                {
                                                  t = v_24;
                                                }
                                            }
                                          else
                                            {
                                              t = v_24;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = x_24;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              v_24 = ATgetArgument(t, 0);
                                              x_24 = ATgetArgument(t, 1);
                                              t = x_24;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = v_24;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = x_24;
                                                    }
                                                  else
                                                    {
                                                      t = v_24;
                                                    }
                                                }
                                              else
                                                {
                                                  t = v_24;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = x_24;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  v_24 = ATgetArgument(t, 0);
                                                  t = v_24;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_y_10;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      v_24 = ATgetArgument(t, 0);
                                                      x_24 = ATgetArgument(t, 1);
                                                      y_24 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = y_24;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_24, x_24);
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
  ATerm m_28 = NULL,x_28 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      x_28 = ATgetArgument(t, 0);
      t = x_28;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_y_11;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          x_28 = ATgetArgument(t, 0);
          t = x_28;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_y_10;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              x_28 = ATgetArgument(t, 0);
              m_28 = ATgetArgument(t, 1);
              t = m_28;
              if(match_cons(t, sym_Id_0))
                {
                  t = x_28;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = m_28;
                    }
                  else
                    {
                      t = x_28;
                    }
                }
              else
                {
                  t = x_28;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = m_28;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  x_28 = ATgetArgument(t, 0);
                  m_28 = ATgetArgument(t, 1);
                  t = x_28;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_y_11;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      x_28 = ATgetArgument(t, 0);
                      m_28 = ATgetArgument(t, 1);
                      t = m_28;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_y_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          x_28 = ATgetArgument(t, 0);
                          m_28 = ATgetArgument(t, 1);
                          t = m_28;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_y_11;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              x_28 = ATgetArgument(t, 0);
                              t = x_28;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_y_11;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  x_28 = ATgetArgument(t, 0);
                                  t = x_28;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_y_11;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      x_28 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = x_28;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_y_11;
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
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      {
        ATerm j_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(l_12);
          }
        else
          {
            t = j_12;
            {
              ATerm m_12 = t;
              int n_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(n_12);
                }
              else
                {
                  t = m_12;
                  {
                    ATerm o_12 = t;
                    int p_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(p_12);
                      }
                    else
                      {
                        t = o_12;
                        {
                          ATerm q_12 = t;
                          int r_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(r_12);
                            }
                          else
                            {
                              t = q_12;
                              {
                                ATerm s_12 = t;
                                int t_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_30 = NULL,l_30 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        j_30 = ATgetArgument(t, 0);
                                        l_30 = ATgetArgument(t, 1);
                                        t = j_30;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = l_30;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            j_30 = ATgetArgument(t, 0);
                                            l_30 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = j_30;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = l_30;
                                      }
                                    ;
                                    LocalPopChoice(t_12);
                                  }
                                else
                                  {
                                    t = s_12;
                                    {
                                      ATerm u_12 = t;
                                      int v_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(v_12);
                                        }
                                      else
                                        {
                                          t = u_12;
                                          {
                                            ATerm b_13 = t;
                                            int d_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
                                                LocalPopChoice(d_13);
                                              }
                                            else
                                              {
                                                t = b_13;
                                                {
                                                  ATerm e_13 = t;
                                                  int g_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
                                                      LocalPopChoice(g_13);
                                                    }
                                                  else
                                                    {
                                                      t = e_13;
                                                      {
                                                        ATerm h_13 = t;
                                                        int j_13 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            ;
                                                            LocalPopChoice(j_13);
                                                          }
                                                        else
                                                          {
                                                            t = h_13;
                                                            {
                                                              ATerm p_13 = t;
                                                              int z_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(z_13);
                                                                }
                                                              else
                                                                {
                                                                  t = p_13;
                                                                  {
                                                                    ATerm d_14 = t;
                                                                    int f_14 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(f_14);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_14;
                                                                        {
                                                                          ATerm g_14 = t;
                                                                          int j_14 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(j_14);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_14;
                                                                              {
                                                                                ATerm m_14 = t;
                                                                                int n_14 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(n_14);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_14;
                                                                                    {
                                                                                      ATerm r_30 = NULL,w_30 = NULL,y_30 = NULL,b_31 = NULL;
                                                                                      w_30 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          y_30 = ATgetArgument(t, 0);
                                                                                          b_31 = ATgetArgument(t, 1);
                                                                                          t = y_30;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              r_30 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = w_30;
                                                                                          t = u_4(r_30, b_31, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              y_30 = ATgetArgument(t, 0);
                                                                                              b_31 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = y_30;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = b_31;
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
ATerm repeat_1_0 (ATerm n_106 (ATerm), ATerm t)
{
  ATerm s_31 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_106(t);
        t = s_31(t);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
      }
    return(t);
  }
  t = s_31(t);
  return(t);
}
ATerm downup_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  t = n_107(t);
  {
    ATerm s_1 (ATerm t)
    {
      t = downup_1_0(n_107, t);
      return(t);
    }
    t = SRTS_all(s_1, t);
    t = n_107(t);
  }
  return(t);
}
ATerm CreateDef2_0_0 (ATerm t)
{
  ATerm t_31 = NULL,v_31 = NULL;
  t_31 = t;
  t = new_0_0(t);
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_31), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, v_31, (ATerm)ATempty, (ATerm)ATempty, t_31)));
  return(t);
}
ATerm n_32 (ATerm e_32, ATerm t)
{
  ATerm f_32 = NULL;
  t = SSL_explode_term(e_32);
  if(match_cons(t, sym__2))
    {
      ATerm e_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_32;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  k_32 = t;
  if(match_cons(t, sym__2))
    {
      i_32 = ATgetArgument(t, 0);
      j_32 = ATgetArgument(t, 1);
      {
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 (ATerm t)
            {
              t = j_32;
              return(t);
            }
            t = i_32;
            t = at_end_1_0(t_1, t);
            ;
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
            t = n_32(k_32, t);
          }
      }
    }
  else
    {
      t = n_32(k_32, t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm t_32 (ATerm t)
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_109(t);
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        t = SRTS_all(t_32, t);
      }
    return(t);
  }
  t = t_32(t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_15;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_12 = ATgetFirst((ATermList) t);
      a_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_12, a_13);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm c_13 = NULL,f_13 = NULL,i_13 = NULL,l_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_15 = ATgetArgument(t, 0);
      if(match_cons(l_15, sym__2))
        {
          c_13 = ATgetArgument(l_15, 0);
          f_13 = ATgetArgument(l_15, 1);
        }
      else
        _fail(t);
      {
        ATerm o_15 = ATgetArgument(t, 1);
        if(match_cons(o_15, sym__2))
          {
            i_13 = ATgetArgument(o_15, 0);
            l_13 = ATgetArgument(o_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_13), c_13), (ATerm) ATinsert(CheckATermList(l_13), f_13));
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm o_13 = NULL;
  o_13 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_r_15;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_v_15;
        }
      else
        {
          t = o_13;
        }
    }
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_14 = NULL,c_14 = NULL,e_14 = NULL,h_14 = NULL,k_14 = NULL,l_14 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            a_14 = ATgetArgument(t, 0);
            c_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_14;
        if(match_cons(t, sym_CallT_3))
          {
            e_14 = ATgetArgument(t, 0);
            k_14 = ATgetArgument(t, 1);
            l_14 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = e_14;
        if(match_cons(t, sym_SVar_1))
          {
            h_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_14), (ATerm)ATempty, (ATerm) ATempty), a_14);
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        {
          ATerm y_15 = t;
          int z_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_16 = t;
              if((PushChoice() == 0))
                {
                  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,w_14 = NULL,z_4 = NULL,y_4 = NULL;
                  w_14 = t;
                  if(match_cons(t, sym_CallT_3))
                    {
                      p_14 = ATgetArgument(t, 0);
                      q_14 = ATgetArgument(t, 1);
                      r_14 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_14);
                  o_14 = t;
                  t = p_14;
                  if(match_cons(t, sym_SVar_1))
                    {
                      t_14 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_14);
                  s_14 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, t_14);
                  y_4 = t;
                  t = SSLsetAnnotations(y_4, s_14);
                  u_14 = t;
                  t = q_14;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = r_14;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, u_14, q_14, r_14);
                  z_4 = t;
                  t = SSLsetAnnotations(z_4, o_14);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = a_16;
                }
              t = CreateDef2_0_0(t);
              ;
              LocalPopChoice(z_15);
            }
          else
            {
              t = y_15;
              {
                ATerm z_14 = NULL;
                z_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_14, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm z_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_15;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_20 = ATgetFirst((ATermList) t);
      s_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_20, s_20);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm t_20 = NULL,v_20 = NULL,g_21 = NULL,h_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_16 = ATgetArgument(t, 0);
      if(match_cons(b_16, sym__2))
        {
          t_20 = ATgetArgument(b_16, 0);
          v_20 = ATgetArgument(b_16, 1);
        }
      else
        _fail(t);
      {
        ATerm c_16 = ATgetArgument(t, 1);
        if(match_cons(c_16, sym__2))
          {
            g_21 = ATgetArgument(c_16, 0);
            h_21 = ATgetArgument(c_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_21), t_20), (ATerm) ATinsert(CheckATermList(h_21), v_20));
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm i_21 = NULL;
  i_21 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_r_15;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_v_15;
        }
      else
        {
          t = i_21;
        }
    }
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,f_22 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            o_21 = ATgetArgument(t, 0);
            t_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_21;
        if(match_cons(t, sym_CallT_3))
          {
            u_21 = ATgetArgument(t, 0);
            w_21 = ATgetArgument(t, 1);
            f_22 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = u_21;
        if(match_cons(t, sym_SVar_1))
          {
            v_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_21;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_21), (ATerm)ATempty, (ATerm) ATempty), o_21);
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
              ATerm h_16 = t;
              if((PushChoice() == 0))
                {
                  ATerm i_22 = NULL,j_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,a_23 = NULL,c_23 = NULL,e_5 = NULL,d_5 = NULL;
                  c_23 = t;
                  if(match_cons(t, sym_CallT_3))
                    {
                      j_22 = ATgetArgument(t, 0);
                      o_22 = ATgetArgument(t, 1);
                      p_22 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(c_23);
                  i_22 = t;
                  t = j_22;
                  if(match_cons(t, sym_SVar_1))
                    {
                      r_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_22);
                  q_22 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, r_22);
                  d_5 = t;
                  t = SSLsetAnnotations(d_5, q_22);
                  a_23 = t;
                  t = o_22;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = p_22;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, a_23, o_22, p_22);
                  e_5 = t;
                  t = SSLsetAnnotations(e_5, i_22);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = h_16;
                }
              t = CreateDef2_0_0(t);
              ;
              LocalPopChoice(g_16);
            }
          else
            {
              t = f_16;
              {
                ATerm d_23 = NULL;
                d_23 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_23, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm Canon_0_0 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
  h_42 = t;
  if(match_cons(t, sym_Rec_2))
    {
      i_42 = ATgetArgument(t, 0);
      j_42 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, i_42, (ATerm)ATempty, (ATerm)ATempty, j_42)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_42), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          i_42 = ATgetArgument(t, 0);
          j_42 = ATgetArgument(t, 1);
          k_42 = ATgetArgument(t, 2);
          a_42 = ATgetArgument(t, 3);
          {
            ATerm q_42 = NULL;
            t = j_42;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = k_42;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = a_42;
            if(match_cons(t, sym_Rec_2))
              {
                b_42 = ATgetArgument(t, 0);
                c_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_42;
            {
              ATerm u_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm i_16 = ATgetArgument(t, 0);
                    if(match_cons(i_16, sym_SVar_1))
                      {
                        if((b_42 != ATgetArgument(i_16, 0)))
                          {
                            _fail(ATgetArgument(i_16, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm j_16 = ATgetArgument(t, 1);
                      if(((ATgetType(j_16) != AT_LIST) || !(ATisEmpty(j_16))))
                        _fail(t);
                    }
                    {
                      ATerm l_16 = ATgetArgument(t, 2);
                      if(((ATgetType(l_16) != AT_LIST) || !(ATisEmpty(l_16))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_42), (ATerm)ATempty, (ATerm) ATempty);
                return(t);
              }
              t = alltd_1_0(u_1, t);
              q_42 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, i_42, (ATerm)ATempty, (ATerm)ATempty, q_42);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              i_42 = ATgetArgument(t, 0);
              j_42 = ATgetArgument(t, 1);
              t = j_42;
              if(match_cons(t, sym_Seq_2))
                {
                  f_42 = ATgetArgument(t, 0);
                  g_42 = ATgetArgument(t, 1);
                  t = i_42;
                  if(match_cons(t, sym_Where_1))
                    {
                      e_42 = ATgetArgument(t, 0);
                      t = f_42;
                      if(match_cons(t, sym_Build_1))
                        {
                          d_42 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_42, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_42), g_42));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = j_42;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      f_42 = ATgetArgument(t, 0);
                      t = i_42;
                      if(match_cons(t, sym_Where_1))
                        {
                          e_42 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_42, (ATerm) ATmakeAppl(sym_Build_1, f_42));
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = j_42;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Id_0))
                        {
                          t = i_42;
                          if(match_cons(t, sym_Id_0))
                            {
                              t = i_42;
                            }
                          else
                            {
                              t = i_42;
                            }
                        }
                      else
                        {
                          t = i_42;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = j_42;
                        }
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  i_42 = ATgetArgument(t, 0);
                  j_42 = ATgetArgument(t, 1);
                  t = j_42;
                  if(match_cons(t, sym_Scope_2))
                    {
                      f_42 = ATgetArgument(t, 0);
                      g_42 = ATgetArgument(t, 1);
                      t = i_42;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm m_16 = t;
                          int n_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_43 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, i_42, f_42);
                              t = conc_0_0(t);
                              i_43 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, i_43, g_42);
                              ;
                              LocalPopChoice(n_16);
                            }
                          else
                            {
                              t = m_16;
                              t = j_42;
                            }
                        }
                      else
                        {
                          ATerm n_43 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, i_42, f_42);
                          t = conc_0_0(t);
                          n_43 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, n_43, g_42);
                        }
                    }
                  else
                    {
                      t = i_42;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = j_42;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Thread_1))
                    {
                      i_42 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_s_16, (ATerm)ATinsert(ATempty, i_42), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          i_42 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_u_16, (ATerm)ATinsert(ATempty, i_42), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              i_42 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_CallT_3, term_w_16, (ATerm)ATinsert(ATempty, i_42), (ATerm) ATempty);
                            }
                          else
                            {
                              if(match_cons(t, sym_All_1))
                                {
                                  i_42 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_16, (ATerm)ATinsert(ATempty, i_42), (ATerm) ATempty);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Bagof_1))
                                    {
                                      i_42 = ATgetArgument(t, 0);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_a_17, (ATerm)ATinsert(ATempty, i_42), (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_PrimT_3))
                                        {
                                          i_42 = ATgetArgument(t, 0);
                                          j_42 = ATgetArgument(t, 1);
                                          k_42 = ATgetArgument(t, 2);
                                          {
                                            ATerm b_17 = t;
                                            int c_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm m_8 = NULL;
                                                t = j_42;
                                                {
                                                  ATerm h_10 (ATerm t)
                                                  {
                                                    ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
                                                    e_10 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        f_10 = ATgetFirst((ATermList) t);
                                                        g_10 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm d_17 = t;
                                                      int e_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_11 = NULL,h_11 = NULL,k_11 = NULL,w_4 = NULL;
                                                          t = SSLgetAnnotations(e_10);
                                                          a_11 = t;
                                                          t = f_10;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_r_15;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_v_15;
                                                            }
                                                          h_11 = t;
                                                          t = g_10;
                                                          {
                                                            ATerm f_17 = t;
                                                            int g_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = h_10(t);
                                                                ;
                                                                LocalPopChoice(g_17);
                                                              }
                                                            else
                                                              {
                                                                t = f_17;
                                                              }
                                                            k_11 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(k_11), h_11);
                                                            w_4 = t;
                                                            t = SSLsetAnnotations(w_4, a_11);
                                                          }
                                                          ;
                                                          LocalPopChoice(e_17);
                                                        }
                                                      else
                                                        {
                                                          t = d_17;
                                                          {
                                                            ATerm f_12 = NULL,k_12 = NULL,x_4 = NULL;
                                                            t = SSLgetAnnotations(e_10);
                                                            f_12 = t;
                                                            t = g_10;
                                                            t = h_10(t);
                                                            k_12 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(k_12), f_10);
                                                            x_4 = t;
                                                            t = SSLsetAnnotations(x_4, f_12);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = h_10(t);
                                                  m_8 = t;
                                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, i_42, m_8, k_42);
                                                }
                                                ;
                                                LocalPopChoice(c_17);
                                              }
                                            else
                                              {
                                                t = b_17;
                                                {
                                                  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL;
                                                  t = j_42;
                                                  t = genzip_4_0(v_1, w_1, x_1, y_1, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      w_12 = ATgetArgument(t, 0);
                                                      x_12 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = x_12;
                                                  t = concat_0_0(t);
                                                  y_12 = t;
                                                  {
                                                    ATerm h_17 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = h_17;
                                                      }
                                                    t = (ATerm) ATmakeAppl(sym_Let_2, y_12, (ATerm) ATmakeAppl(sym_PrimT_3, i_42, w_12, k_42));
                                                  }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              i_42 = ATgetArgument(t, 0);
                                              j_42 = ATgetArgument(t, 1);
                                              k_42 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm i_17 = t;
                                            int n_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm u_15 = NULL;
                                                t = j_42;
                                                {
                                                  ATerm m_17 (ATerm t)
                                                  {
                                                    ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
                                                    j_17 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        k_17 = ATgetFirst((ATermList) t);
                                                        l_17 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm o_17 = t;
                                                      int p_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_18 = NULL,w_18 = NULL,x_18 = NULL,a_5 = NULL;
                                                          t = SSLgetAnnotations(j_17);
                                                          p_18 = t;
                                                          t = k_17;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_r_15;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_v_15;
                                                            }
                                                          w_18 = t;
                                                          t = l_17;
                                                          {
                                                            ATerm q_17 = t;
                                                            int r_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = m_17(t);
                                                                ;
                                                                LocalPopChoice(r_17);
                                                              }
                                                            else
                                                              {
                                                                t = q_17;
                                                              }
                                                            x_18 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(x_18), w_18);
                                                            a_5 = t;
                                                            t = SSLsetAnnotations(a_5, p_18);
                                                          }
                                                          ;
                                                          LocalPopChoice(p_17);
                                                        }
                                                      else
                                                        {
                                                          t = o_17;
                                                          {
                                                            ATerm n_19 = NULL,q_19 = NULL,c_5 = NULL;
                                                            t = SSLgetAnnotations(j_17);
                                                            n_19 = t;
                                                            t = l_17;
                                                            t = m_17(t);
                                                            q_19 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(q_19), k_17);
                                                            c_5 = t;
                                                            t = SSLsetAnnotations(c_5, n_19);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = m_17(t);
                                                  u_15 = t;
                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, i_42, u_15, k_42);
                                                }
                                                ;
                                                LocalPopChoice(n_17);
                                              }
                                            else
                                              {
                                                t = i_17;
                                                {
                                                  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
                                                  t = j_42;
                                                  t = genzip_4_0(z_1, a_2, b_2, c_2, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      m_20 = ATgetArgument(t, 0);
                                                      n_20 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = n_20;
                                                  t = concat_0_0(t);
                                                  o_20 = t;
                                                  {
                                                    ATerm s_17 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = s_17;
                                                      }
                                                    t = (ATerm) ATmakeAppl(sym_Let_2, o_20, (ATerm) ATmakeAppl(sym_CallT_3, i_42, m_20, k_42));
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
ATerm d_2 (ATerm t)
{
  ATerm t_17 = t;
  if((PushChoice() == 0))
    {
      ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,q_5 = NULL;
      q_44 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_44);
      o_44 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, p_44);
      q_5 = t;
      t = SSLsetAnnotations(q_5, o_44);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_17;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_15;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_44 = ATgetFirst((ATermList) t);
      s_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_44, s_44);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_17 = ATgetArgument(t, 0);
      if(match_cons(u_17, sym__2))
        {
          t_44 = ATgetArgument(u_17, 0);
          u_44 = ATgetArgument(u_17, 1);
        }
      else
        _fail(t);
      {
        ATerm v_17 = ATgetArgument(t, 1);
        if(match_cons(v_17, sym__2))
          {
            v_44 = ATgetArgument(v_17, 0);
            w_44 = ATgetArgument(v_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_44), t_44), (ATerm) ATinsert(CheckATermList(w_44), u_44));
  return(t);
}
ATerm j_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_15;
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_44 = ATgetFirst((ATermList) t);
      y_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_44, y_44);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_17 = ATgetArgument(t, 0);
      if(match_cons(w_17, sym__2))
        {
          z_44 = ATgetArgument(w_17, 0);
          a_45 = ATgetArgument(w_17, 1);
        }
      else
        _fail(t);
      {
        ATerm x_17 = ATgetArgument(t, 1);
        if(match_cons(x_17, sym__2))
          {
            b_45 = ATgetArgument(x_17, 0);
            c_45 = ATgetArgument(x_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_45), z_44), (ATerm) ATinsert(CheckATermList(c_45), a_45));
  return(t);
}
ATerm e_6 (ATerm w_67, ATerm x_67, ATerm y_67, ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,r_5 = NULL;
  t = y_67;
  t = fetch_1_0(d_2, t);
  t = y_67;
  t = genzip_4_0(g_2, h_2, i_2, LiftPrimArg_0_0, t);
  n_44 = t;
  if(match_cons(t, sym__2))
    {
      j_44 = ATgetArgument(t, 0);
      k_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_44);
  i_44 = t;
  t = j_44;
  t = concat_0_0(t);
  l_44 = t;
  t = k_44;
  t = genzip_4_0(j_2, p_2, q_2, _id, t);
  m_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_44, m_44);
  r_5 = t;
  t = SSLsetAnnotations(r_5, i_44);
  if(match_cons(t, sym__2))
    {
      f_44 = ATgetArgument(t, 0);
      {
        ATerm y_17 = ATgetArgument(t, 1);
        if(match_cons(y_17, sym__2))
          {
            g_44 = ATgetArgument(y_17, 0);
            h_44 = ATgetArgument(y_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, f_44, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_44), (ATerm) ATmakeAppl(sym_CallT_3, w_67, x_67, h_44)));
  return(t);
}
ATerm genzip_4_0 (ATerm f_115 (ATerm), ATerm g_115 (ATerm), ATerm h_115 (ATerm), ATerm i_115 (ATerm), ATerm t)
{
  ATerm m_45 (ATerm t)
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_115(t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        {
          ATerm e_45 = NULL,f_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,u_5 = NULL;
          t = g_115(t);
          l_45 = t;
          if(match_cons(t, sym__2))
            {
              f_45 = ATgetArgument(t, 0);
              i_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_45);
          e_45 = t;
          t = f_45;
          t = i_115(t);
          j_45 = t;
          t = i_45;
          t = m_45(t);
          k_45 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_45, k_45);
          u_5 = t;
          t = SSLsetAnnotations(u_5, e_45);
          t = h_115(t);
        }
      }
    return(t);
  }
  t = m_45(t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_113 (ATerm), ATerm t)
{
  ATerm a_46 (ATerm t)
  {
    ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
    z_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_45 = ATgetFirst((ATermList) t);
        y_45 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_23 = NULL,b_24 = NULL,w_5 = NULL;
          t = SSLgetAnnotations(z_45);
          y_23 = t;
          t = y_45;
          t = a_46(t);
          b_24 = t;
          t = (ATerm) ATinsert(CheckATermList(b_24), x_45);
          w_5 = t;
          t = SSLsetAnnotations(w_5, y_23);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_45;
        t = s_113(t);
      }
    return(t);
  }
  t = a_46(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL;
  d_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_46;
    }
  else
    {
      ATerm s_2 (ATerm t)
      {
        t = not_null(f_46);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_46 = ATgetFirst((ATermList) t);
          if(((f_46 != NULL) && (f_46 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_46;
      t = at_end_1_0(s_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm v_46 (ATerm l_46, ATerm t)
{
  ATerm o_46 = NULL;
  t = l_46;
  {
    ATerm b_18 = t;
    if((PushChoice() == 0))
      {
        ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,y_5 = NULL;
        r_46 = t;
        if(match_cons(t, sym_Var_1))
          {
            q_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_46);
        p_46 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, q_46);
        y_5 = t;
        t = SSLsetAnnotations(y_5, p_46);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_18;
      }
    t = new_0_0(t);
    o_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, o_46), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_46), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_46)))), (ATerm) ATmakeAppl(sym_Var_1, o_46)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL;
  s_46 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_46 = ATgetArgument(t, 0);
      {
        ATerm c_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_46(s_46, t);
            ;
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_y_11, (ATerm) ATmakeAppl(sym_Var_1, t_46)));
          }
      }
    }
  else
    {
      t = v_46(s_46, t);
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm e_18 = t;
  if((PushChoice() == 0))
    {
      ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,b_6 = NULL;
      d_25 = t;
      if(match_cons(t, sym_Var_1))
        {
          c_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_25);
      b_25 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, c_25);
      b_6 = t;
      t = SSLsetAnnotations(b_6, b_25);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_18;
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_15;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm e_25 = NULL,i_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_25 = ATgetFirst((ATermList) t);
      i_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_25, i_25);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,o_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_18 = ATgetArgument(t, 0);
      if(match_cons(f_18, sym__2))
        {
          k_25 = ATgetArgument(f_18, 0);
          l_25 = ATgetArgument(f_18, 1);
        }
      else
        _fail(t);
      {
        ATerm g_18 = ATgetArgument(t, 1);
        if(match_cons(g_18, sym__2))
          {
            o_25 = ATgetArgument(g_18, 0);
            t_25 = ATgetArgument(g_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_25), k_25), (ATerm) ATinsert(CheckATermList(t_25), l_25));
  return(t);
}
ATerm c_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_15;
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm u_25 = NULL,w_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_25 = ATgetFirst((ATermList) t);
      w_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_25, w_25);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_18 = ATgetArgument(t, 0);
      if(match_cons(h_18, sym__2))
        {
          x_25 = ATgetArgument(h_18, 0);
          y_25 = ATgetArgument(h_18, 1);
        }
      else
        _fail(t);
      {
        ATerm i_18 = ATgetArgument(t, 1);
        if(match_cons(i_18, sym__2))
          {
            z_25 = ATgetArgument(i_18, 0);
            a_26 = ATgetArgument(i_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_25), x_25), (ATerm) ATinsert(CheckATermList(a_26), y_25));
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm j_18 = t;
  if((PushChoice() == 0))
    {
      ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,g_6 = NULL;
      w_26 = t;
      if(match_cons(t, sym_Var_1))
        {
          v_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_26);
      u_26 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, v_26);
      g_6 = t;
      t = SSLsetAnnotations(g_6, u_26);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_18;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_15;
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_26 = ATgetFirst((ATermList) t);
      y_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_26, y_26);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_18 = ATgetArgument(t, 0);
      if(match_cons(k_18, sym__2))
        {
          z_26 = ATgetArgument(k_18, 0);
          a_27 = ATgetArgument(k_18, 1);
        }
      else
        _fail(t);
      {
        ATerm l_18 = ATgetArgument(t, 1);
        if(match_cons(l_18, sym__2))
          {
            b_27 = ATgetArgument(l_18, 0);
            c_27 = ATgetArgument(l_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_27), z_26), (ATerm) ATinsert(CheckATermList(c_27), a_27));
  return(t);
}
ATerm p_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_15;
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_27 = ATgetFirst((ATermList) t);
      e_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_27, e_27);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_18 = ATgetArgument(t, 0);
      if(match_cons(m_18, sym__2))
        {
          f_27 = ATgetArgument(m_18, 0);
          g_27 = ATgetArgument(m_18, 1);
        }
      else
        _fail(t);
      {
        ATerm n_18 = ATgetArgument(t, 1);
        if(match_cons(n_18, sym__2))
          {
            h_27 = ATgetArgument(n_18, 0);
            i_27 = ATgetArgument(n_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_27), f_27), (ATerm) ATinsert(CheckATermList(i_27), g_27));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
  s_49 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      t_49 = ATgetArgument(t, 0);
      u_49 = ATgetArgument(t, 1);
      r_49 = ATgetArgument(t, 2);
      {
        ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,w_24 = NULL,a_25 = NULL,f_6 = NULL;
        t = r_49;
        t = fetch_1_0(x_2, t);
        t = r_49;
        t = genzip_4_0(y_2, a_3, b_3, LiftPrimArg_0_0, t);
        a_25 = t;
        if(match_cons(t, sym__2))
          {
            r_24 = ATgetArgument(t, 0);
            s_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_25);
        q_24 = t;
        t = r_24;
        t = concat_0_0(t);
        t_24 = t;
        t = s_24;
        t = genzip_4_0(c_3, d_3, e_3, _id, t);
        w_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_24, w_24);
        f_6 = t;
        t = SSLsetAnnotations(f_6, q_24);
        if(match_cons(t, sym__2))
          {
            n_24 = ATgetArgument(t, 0);
            {
              ATerm o_18 = ATgetArgument(t, 1);
              if(match_cons(o_18, sym__2))
                {
                  o_24 = ATgetArgument(o_18, 0);
                  p_24 = ATgetArgument(o_18, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, n_24, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_24), (ATerm) ATmakeAppl(sym_PrimT_3, t_49, u_49, p_24)));
      }
    }
  else
    {
      ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,h_6 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          t_49 = ATgetArgument(t, 0);
          u_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_49;
      t = fetch_1_0(f_3, t);
      t = u_49;
      t = genzip_4_0(g_3, j_3, o_3, LiftPrimArg_0_0, t);
      t_26 = t;
      if(match_cons(t, sym__2))
        {
          p_26 = ATgetArgument(t, 0);
          q_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_26);
      o_26 = t;
      t = p_26;
      t = concat_0_0(t);
      r_26 = t;
      t = q_26;
      t = genzip_4_0(p_3, q_3, r_3, _id, t);
      s_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_26, s_26);
      h_6 = t;
      t = SSLsetAnnotations(h_6, o_26);
      if(match_cons(t, sym__2))
        {
          l_26 = ATgetArgument(t, 0);
          {
            ATerm q_18 = ATgetArgument(t, 1);
            if(match_cons(q_18, sym__2))
              {
                m_26 = ATgetArgument(q_18, 0);
                n_26 = ATgetArgument(q_18, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, l_26, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_26), (ATerm) ATmakeAppl(sym_PrimT_3, t_49, (ATerm)ATempty, n_26)));
    }
  return(t);
}
ATerm downup2_2_0 (ATerm q_107 (ATerm), ATerm r_107 (ATerm), ATerm t)
{
  t = q_107(t);
  {
    ATerm s_3 (ATerm t)
    {
      t = downup2_2_0(q_107, r_107, t);
      return(t);
    }
    t = SRTS_all(s_3, t);
    t = r_107(t);
  }
  return(t);
}
ATerm k_6 (ATerm s_47, ATerm t_47, ATerm t)
{
  ATerm x_49 = NULL;
  t = SSL_fputc(s_47, t_47);
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_49);
  return(t);
}
ATerm l_6 (ATerm g_51, ATerm h_51, ATerm t)
{
  ATerm y_49 = NULL;
  t = SSL_write_term_to_stream_text(g_51, h_51);
  y_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_49);
  return(t);
}
ATerm n_6 (ATerm q_125 (ATerm), ATerm l_433, ATerm k_51, ATerm t)
{
  ATerm z_49 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_433, term_r_18);
  t = q_6(t);
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_49, k_51);
  t = q_125(t);
  t = fclose_0_0(t);
  t = k_51;
  return(t);
}
ATerm m_6 (ATerm c_51, ATerm d_51, ATerm t)
{
  ATerm a_50 = NULL;
  t = SSL_write_term_to_stream_baf(c_51, d_51);
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_50);
  return(t);
}
ATerm v_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      if(match_cons(s_18, sym_Stream_1))
        {
          a_28 = ATgetArgument(s_18, 0);
        }
      else
        _fail(t);
      b_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(a_28, b_28, t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_18 = ATgetArgument(t, 0);
      if(match_cons(t_18, sym_Stream_1))
        {
          q_28 = ATgetArgument(t_18, 0);
        }
      else
        _fail(t);
      r_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6(q_28, r_28, t);
  n_28 = t;
  t = term_u_18;
  o_28 = t;
  t = n_28;
  if(match_cons(t, sym_Stream_1))
    {
      p_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_18, n_28);
  t = k_6(o_28, p_28, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,v_51 = NULL,w_51 = NULL,g_7 = NULL,f_7 = NULL;
  f_50 = t;
  if(match_cons(t, sym__2))
    {
      m_50 = ATgetArgument(t, 0);
      n_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_50);
  l_50 = t;
  t = m_50;
  {
    ATerm v_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((e_50 != NULL) && (e_50 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(t_3, t);
        ;
        LocalPopChoice(y_18);
      }
    else
      {
        t = v_18;
        t = term_c_19;
        e_50 = t;
      }
    o_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_50, n_50);
    f_7 = t;
    t = SSLsetAnnotations(f_7, l_50);
    t = f_50;
    if(match_cons(t, sym__2))
      {
        h_50 = ATgetArgument(t, 0);
        i_50 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_50);
    g_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_50, (ATerm) ATmakeAppl(sym__2, not_null(e_50), i_50));
    g_7 = t;
    t = SSLsetAnnotations(g_7, g_50);
    k_50 = t;
    if(match_cons(t, sym__2))
      {
        v_51 = ATgetArgument(t, 0);
        w_51 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm d_19 = t;
      int e_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,h_7 = NULL;
          t = SSLgetAnnotations(k_50);
          p_27 = t;
          t = v_51;
          t = fetch_1_0(v_3, t);
          w_27 = t;
          t = w_51;
          if(match_cons(t, sym__2))
            {
              y_27 = ATgetArgument(t, 0);
              z_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_6(w_3, y_27, z_27, t);
          x_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_27, x_27);
          h_7 = t;
          t = SSLsetAnnotations(h_7, p_27);
          ;
          LocalPopChoice(e_19);
        }
      else
        {
          t = d_19;
          {
            ATerm g_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,i_7 = NULL;
            t = SSLgetAnnotations(k_50);
            g_28 = t;
            t = w_51;
            if(match_cons(t, sym__2))
              {
                k_28 = ATgetArgument(t, 0);
                l_28 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_6(y_3, k_28, l_28, t);
            j_28 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_51, j_28);
            i_7 = t;
            t = SSLsetAnnotations(i_7, g_28);
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
ATerm apply_strategy_1_0 (ATerm s_128 (ATerm), ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL;
  d_52 = t;
  t = dtime_0_0(t);
  t = d_52;
  t = s_128(t);
  c_52 = t;
  t = dtime_0_0(t);
  z_51 = t;
  t = c_52;
  if(match_cons(t, sym__2))
    {
      a_52 = ATgetArgument(t, 0);
      b_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_52), (ATerm) ATmakeAppl(sym_Runtime_1, z_51)), b_52);
  return(t);
}
ATerm y_52 (ATerm n_52, ATerm t)
{
  t = SSL_fclose(n_52);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL;
  r_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_52 = ATgetArgument(t, 0);
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_52);
            ;
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
            t = y_52(r_52, t);
          }
      }
    }
  else
    {
      t = y_52(r_52, t);
    }
  return(t);
}
ATerm o_6 (ATerm i_51, ATerm t)
{
  t = SSL_read_term_from_stream(i_51);
  return(t);
}
ATerm p_6 (ATerm u_47, ATerm v_47, ATerm t)
{
  ATerm z_52 = NULL;
  t = SSL_fopen(u_47, v_47);
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_52);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_53 = NULL;
  t = SSL_stdin_stream();
  a_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_53);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_53 = NULL;
  t = SSL_stdout_stream();
  b_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_53);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_53 = NULL;
  t = SSL_stderr_stream();
  c_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_53);
  return(t);
}
ATerm n_54 (ATerm i_53, ATerm t)
{
  ATerm j_53 = NULL;
  t = SSL_explode_term(i_53);
  if(match_cons(t, sym__2))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_19 = ATgetArgument(t, 1);
        if(((ATgetType(i_19) == AT_LIST) && !(ATisEmpty(i_19))))
          {
            j_53 = ATgetFirst((ATermList) i_19);
            {
              ATerm j_19 = (ATerm) ATgetNext((ATermList) i_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_53;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_53;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_53;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_53;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm o_54 (ATerm m_53, ATerm n_53, ATerm o_53, ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL,u_53 = NULL,n_7 = NULL;
  t = SSLgetAnnotations(o_53);
  r_53 = t;
  t = m_53;
  if(match_cons(t, sym_Path_1))
    {
      u_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_53, n_53);
  n_7 = t;
  t = SSLsetAnnotations(n_7, r_53);
  if(match_cons(t, sym__2))
    {
      p_53 = ATgetArgument(t, 0);
      q_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(p_53, q_53, t);
  return(t);
}
ATerm p_54 (ATerm w_53, ATerm x_53, ATerm y_53, ATerm t)
{
  ATerm z_53 = NULL,e_54 = NULL,f_54 = NULL,i_54 = NULL,o_7 = NULL;
  t = SSLgetAnnotations(y_53);
  f_54 = t;
  t = SSL_is_string(w_53);
  i_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_54, x_53);
  o_7 = t;
  t = SSLsetAnnotations(o_7, f_54);
  if(match_cons(t, sym__2))
    {
      z_53 = ATgetArgument(t, 0);
      e_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(z_53, e_54, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL;
  k_54 = t;
  if(match_cons(t, sym__2))
    {
      l_54 = ATgetArgument(t, 0);
      m_54 = ATgetArgument(t, 1);
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_54(k_54, t);
            ;
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            {
              ATerm m_19 = t;
              int o_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_54(l_54, m_54, k_54, t);
                  ;
                  LocalPopChoice(o_19);
                }
              else
                {
                  t = m_19;
                  t = p_54(l_54, m_54, k_54, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_54(k_54, t);
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL;
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_54 = NULL;
      t_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_54, term_t_19);
      t = q_6(t);
      ;
      LocalPopChoice(s_19);
    }
  else
    {
      t = r_19;
      t = debug_1_0(z_3, t);
      _fail(t);
    }
  r_54 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(s_54, t);
  q_54 = t;
  t = r_54;
  t = fclose_0_0(t);
  t = q_54;
  return(t);
}
ATerm fetch_1_0 (ATerm m_113 (ATerm), ATerm t)
{
  ATerm r_55 (ATerm t)
  {
    ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL;
    o_55 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_55 = ATgetFirst((ATermList) t);
        q_55 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_19 = t;
      int z_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_29 = NULL,n_29 = NULL,v_8 = NULL;
          t = SSLgetAnnotations(o_55);
          k_29 = t;
          t = p_55;
          t = m_113(t);
          n_29 = t;
          t = (ATerm) ATinsert(CheckATermList(q_55), n_29);
          v_8 = t;
          t = SSLsetAnnotations(v_8, k_29);
          ;
          LocalPopChoice(z_19);
        }
      else
        {
          t = u_19;
          {
            ATerm x_29 = NULL,a_30 = NULL,w_8 = NULL;
            t = SSLgetAnnotations(o_55);
            x_29 = t;
            t = q_55;
            t = r_55(t);
            a_30 = t;
            t = (ATerm) ATinsert(CheckATermList(a_30), p_55);
            w_8 = t;
            t = SSLsetAnnotations(w_8, x_29);
          }
        }
    }
    return(t);
  }
  t = r_55(t);
  return(t);
}
ATerm j_6 (ATerm v_42, ATerm w_42, ATerm t)
{
  t = SSL_strcat(v_42, w_42);
  return(t);
}
ATerm debug_1_0 (ATerm o_125 (ATerm), ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
  u_55 = t;
  t = o_125(t);
  v_55 = t;
  t = term_a_9;
  w_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_55), v_55);
  x_55 = t;
  t = SSL_printnl(w_55, x_55);
  t = u_55;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_e_20;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_56 = NULL;
      e_56 = t;
      t = SSL_is_string(e_56);
      ;
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      {
        ATerm h_20 = t;
        int i_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(b_4, t);
            ;
            LocalPopChoice(i_20);
          }
        else
          {
            t = h_20;
            {
              ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL;
              k_56 = t;
              if(match_cons(t, sym_Path_1))
                {
                  l_56 = ATgetArgument(t, 0);
                  t = l_56;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      l_56 = ATgetArgument(t, 0);
                      t = l_56;
                      {
                        ATerm j_20 = t;
                        int k_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_20);
                          }
                        else
                          {
                            t = j_20;
                            t = debug_1_0(e_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_56 = NULL,w_56 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          l_56 = ATgetArgument(t, 0);
                          m_56 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_56;
                      t = eval_config_0_0(t);
                      v_56 = t;
                      t = m_56;
                      t = eval_config_0_0(t);
                      w_56 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_56, w_56);
                      t = j_6(v_56, w_56, t);
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
  ATerm a_57 = NULL,b_57 = NULL;
  a_57 = t;
  t = term_l_20;
  b_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, a_57);
  t = t_6(b_57, a_57, t);
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_57 = NULL,d_57 = NULL;
        t = eval_config_0_0(t);
        c_57 = t;
        t = term_l_20;
        d_57 = t;
        t = SSL_table_put(d_57, a_57, c_57);
        t = c_57;
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_127 (ATerm), ATerm t)
{
  ATerm l_57 = NULL;
  l_57 = t;
  {
    ATerm u_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_57 = NULL;
        t = term_x_20;
        t = get_config_0_0(t);
        n_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_57, term_y_20);
        t = geq_0_0(t);
        t = l_57;
        t = b_127(t);
        ;
        LocalPopChoice(w_20);
      }
    else
      {
        t = u_20;
        t = l_57;
      }
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm q_57 = NULL;
  q_57 = t;
  if(match_string(t, "-k"))
    {
      t = q_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_57;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  r_57 = t;
  t = SSL_string_to_int(r_57);
  s_57 = t;
  t = term_z_20;
  t_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_20, s_57);
  t = w_6(t_57, s_57, t);
  t = r_57;
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_a_21;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_4, h_4, n_4, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm v_57 = NULL;
  v_57 = t;
  if(match_string(t, "-S"))
    {
      t = v_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_57;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL;
  t = term_x_20;
  w_57 = t;
  t = term_c_21;
  x_57 = t;
  t = term_k_21;
  t = w_6(w_57, x_57, t);
  t = term_l_21;
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL;
  y_57 = t;
  t = SSL_string_to_int(y_57);
  z_57 = t;
  t = term_x_20;
  a_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_20, z_57);
  t = w_6(a_58, z_57, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_57);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_n_21;
  return(t);
}
ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL;
  t = term_p_21;
  b_58 = t;
  t = term_o_8;
  c_58 = t;
  t = term_q_21;
  t = w_6(b_58, c_58, t);
  t = term_r_21;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_21 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_4, r_4, s_4, t);
      ;
      LocalPopChoice(d_22);
    }
  else
    {
      t = y_21;
      {
        ATerm e_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_4, v_4, b_5, t);
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = e_22;
            t = Option_3_0(f_5, g_5, h_5, t);
          }
      }
    }
  return(t);
}
ATerm w_6 (ATerm j_52, ATerm k_52, ATerm t)
{
  ATerm d_58 = NULL;
  t = term_l_20;
  d_58 = t;
  t = SSL_table_put(d_58, j_52, k_52);
  t = (ATerm) ATmakeAppl(sym__3, term_l_20, j_52, k_52);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
      t = term_o_8;
      t = h_0(t);
      i_58 = t;
      t = term_h_22;
      j_58 = t;
      t = term_k_22;
      k_58 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_22, term_k_22, i_58);
      t = u_6(j_58, k_58, i_58, t);
      _fail(t);
    }
  else
    {
      ATerm n_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_58 = ATgetFirst((ATermList) t);
          h_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_58;
      t = d_0(t);
      t = term_o_8;
      t = g_0(t);
      n_58 = t;
      t = (ATerm) ATinsert(CheckATermList(h_58), n_58);
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm p_58 = NULL;
  p_58 = t;
  if(match_string(t, "-o"))
    {
      t = p_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_58;
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL;
  q_58 = t;
  t = term_l_22;
  r_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_22, q_58);
  t = w_6(r_58, q_58, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_58);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_m_22;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_5, j_5, k_5, t);
  return(t);
}
ATerm u_6 (ATerm h_57, ATerm i_57, ATerm g_57, ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL;
  t_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_57, i_57);
  {
    ATerm n_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_22 = ATgetArgument(t, 0);
            ATerm z_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_57, i_57);
        t = t_6(h_57, i_57, t);
        ;
        LocalPopChoice(t_22);
      }
    else
      {
        t = n_22;
        t = (ATerm) ATempty;
      }
    u_58 = t;
    t = (ATerm) ATinsert(CheckATermList(u_58), g_57);
    v_58 = t;
    t = SSL_table_put(h_57, i_57, v_58);
    t = t_58;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL;
      t = term_o_8;
      t = m_0(t);
      i_59 = t;
      t = term_h_22;
      j_59 = t;
      t = term_k_22;
      k_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_22, term_k_22, i_59);
      t = u_6(j_59, k_59, i_59, t);
      _fail(t);
    }
  else
    {
      ATerm o_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_59 = ATgetFirst((ATermList) t);
          f_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_59;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_59 = ATgetFirst((ATermList) t);
          h_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_59;
      t = k_0(t);
      t = g_59;
      t = l_0(t);
      o_59 = t;
      t = (ATerm) ATinsert(CheckATermList(h_59), o_59);
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm q_59 = NULL;
  q_59 = t;
  if(match_string(t, "-i"))
    {
      t = q_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_59;
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm r_59 = NULL,s_59 = NULL;
  r_59 = t;
  t = term_b_23;
  s_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_23, r_59);
  t = w_6(s_59, r_59, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_59);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_e_23;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_5, m_5, n_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_8;
  t = whoami_0_0(t);
  t_59 = t;
  t = term_a_9;
  v_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_23), t_59);
  w_59 = t;
  t = SSL_printnl(v_59, w_59);
  t = term_d_9;
  u_59 = t;
  t = SSL_exit(u_59);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_23;
  t = get_config_0_0(t);
  return(t);
}
ATerm r_6 (ATerm g_45, ATerm h_45, ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_45, h_45);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      t = SSL_addr(g_45, h_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL;
  y_59 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_59;
      t = f_119(t);
    }
  else
    {
      ATerm d_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_59 = ATgetFirst((ATermList) t);
          a_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_60;
      t = foldr_2_0(f_119, g_119, t);
      d_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_59, d_60);
      t = g_119(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  if(match_cons(t, sym__2))
    {
      z_30 = ATgetArgument(t, 0);
      a_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(z_30, a_31, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_60 = NULL,t_30 = NULL,u_30 = NULL;
  t = times_0_0(t);
  u_30 = t;
  t = SSL_explode_term(u_30);
  if(match_cons(t, sym__2))
    {
      ATerm j_23 = ATgetArgument(t, 0);
      t_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_30;
  t = foldr_2_0(o_5, p_5, t);
  g_60 = t;
  t = SSL_TicksToSeconds(g_60);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL;
  r_60 = t;
  if(match_cons(t, sym__2))
    {
      s_60 = ATgetArgument(t, 0);
      t_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_60;
        if((s_60 != t))
          {
            _fail(t);
          }
        t = r_60;
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = (ATerm) ATmakeAppl(sym__2, s_60, t_60);
        {
          ATerm m_23 = t;
          int n_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_60, t_60);
              ;
              LocalPopChoice(n_23);
            }
          else
            {
              t = m_23;
              t = SSL_gtr(s_60, t_60);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_60, t_60);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_127 (ATerm), ATerm t)
{
  ATerm x_60 = NULL;
  x_60 = t;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_60 = NULL;
        t = term_x_20;
        t = get_config_0_0(t);
        z_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_60, term_d_9);
        t = geq_0_0(t);
        t = x_60;
        t = a_127(t);
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = x_60;
      }
  }
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL,e_61 = NULL,f_61 = NULL;
  t = run_time_0_0(t);
  b_61 = t;
  t = term_o_8;
  t = whoami_0_0(t);
  c_61 = t;
  t = term_a_9;
  e_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_23), b_61), term_q_23), c_61);
  f_61 = t;
  t = SSL_printnl(e_61, f_61);
  t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_23), b_61), term_q_23), c_61));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_61 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_21;
  g_61 = t;
  t = SSL_exit(g_61);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL;
  p_61 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_61;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_61 = ATgetArgument(t, 0);
          {
            ATerm u_31 = NULL,e_9 = NULL;
            t = SSLgetAnnotations(p_61);
            u_31 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_61);
            e_9 = t;
            t = SSLsetAnnotations(e_9, u_31);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_61;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_129 (ATerm), ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      t = fetch_1_0(t_5, t);
    }
  t = q_129(t);
  return(t);
}
ATerm map_1_0 (ATerm c_113 (ATerm), ATerm t)
{
  ATerm f_62 (ATerm t)
  {
    ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
    c_62 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_62;
      }
    else
      {
        ATerm d_32 = NULL,p_32 = NULL,q_32 = NULL,g_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_62 = ATgetFirst((ATermList) t);
            e_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_62);
        d_32 = t;
        t = d_62;
        t = c_113(t);
        p_32 = t;
        t = e_62;
        t = f_62(t);
        q_32 = t;
        t = (ATerm) ATinsert(CheckATermList(q_32), p_32);
        g_9 = t;
        t = SSLsetAnnotations(g_9, d_32);
      }
    return(t);
  }
  t = f_62(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_62 = ATgetFirst((ATermList) t);
      j_62 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_62 = NULL,x_62 = NULL;
        ATerm v_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_62)), not_null(x_62));
          return(t);
        }
        t = j_62;
        t = j_0(t);
        if(((n_62 != NULL) && (n_62 != t)))
          _fail(t);
        else
          n_62 = t;
        t = i_62;
        t = i_0(t);
        if(((x_62 != NULL) && (x_62 != t)))
          _fail(t);
        else
          x_62 = t;
        t = j_62;
        t = reverse_acc_2_0(i_0, v_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_8;
      t = j_0(t);
    }
  return(t);
}
ATerm t_6 (ATerm y_58, ATerm z_58, ATerm t)
{
  t = SSL_table_get(y_58, z_58);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL,q_9 = NULL;
  l_63 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_63);
  j_63 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_63);
  q_9 = t;
  t = SSLsetAnnotations(q_9, j_63);
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm n_63 = NULL;
  n_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_63), term_v_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_62 = NULL,i_63 = NULL;
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
      t = fetch_1_0(x_5, t);
    }
  t = term_z_23;
  t = echo_0_0(t);
  t = term_h_22;
  z_62 = t;
  t = term_k_22;
  i_63 = t;
  t = term_a_24;
  t = t_6(z_62, i_63, t);
  t = reverse_acc_2_0(_id, a_6, t);
  t = map_1_0(d_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL;
  p_63 = t;
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_63;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_24 = ATgetFirst((ATermList) t);
                ATerm f_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_63;
          }
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = (ATerm) ATinsert(ATempty, p_63);
      }
    q_63 = t;
    t = term_c_19;
    r_63 = t;
    t = SSL_printnl(r_63, q_63);
    t = p_63;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_23;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL;
  t = term_g_24;
  v_63 = t;
  t = term_o_8;
  w_63 = t;
  t = term_h_24;
  t = w_6(v_63, w_63, t);
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL;
  t = term_g_24;
  z_63 = t;
  t = term_o_8;
  a_64 = t;
  t = term_h_24;
  t = w_6(z_63, a_64, t);
  t = term_j_24;
  x_63 = t;
  t = term_o_8;
  y_63 = t;
  t = term_k_24;
  t = w_6(x_63, y_63, t);
  t = term_l_24;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_6, s_6, x_6, t);
      ;
      LocalPopChoice(z_24);
    }
  else
    {
      t = u_24;
      t = Option_3_0(z_6, b_7, c_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,u_9 = NULL;
  g_64 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_64 = ATgetFirst((ATermList) t);
      d_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_64);
  b_64 = t;
  t = c_64;
  t = m_84(t);
  e_64 = t;
  t = d_64;
  t = n_84(t);
  f_64 = t;
  t = (ATerm) ATinsert(CheckATermList(f_64), e_64);
  u_9 = t;
  t = SSLsetAnnotations(u_9, b_64);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_131 (ATerm), ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,q_64 = NULL,r_64 = NULL,w_9 = NULL;
  l_64 = t;
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_25;
        t = t_131(t);
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
      }
    t = l_64;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_64 = ATgetFirst((ATermList) t);
        o_64 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_64);
    m_64 = t;
    t = term_g_23;
    r_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_23, n_64);
    t = w_6(r_64, n_64, t);
    t = o_64;
    {
      ATerm b_65 (ATerm t)
      {
        ATerm j_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_25 = t;
            int p_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_64 = NULL;
                u_64 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = u_64;
                ;
                LocalPopChoice(p_25);
              }
            else
              {
                t = n_25;
                t = t_131(t);
                t = Cons_2_0(_id, b_65, t);
              }
            ;
            LocalPopChoice(m_25);
          }
        else
          {
            t = j_25;
            {
              ATerm x_64 = NULL,y_64 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_64 = ATgetFirst((ATermList) t);
                  y_64 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_64), (ATerm) ATmakeAppl(sym_Undefined_1, x_64));
            }
          }
        return(t);
      }
      t = b_65(t);
      q_64 = t;
      t = (ATerm) ATinsert(CheckATermList(q_64), (ATerm) ATmakeAppl(sym_Program_1, n_64));
      w_9 = t;
      t = SSLsetAnnotations(w_9, m_64);
    }
  }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm n_65 = NULL;
  n_65 = t;
  if(match_string(t, "--help"))
    {
      t = n_65;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_65;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_65;
        }
    }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL;
  t = term_u_23;
  o_65 = t;
  t = term_o_8;
  p_65 = t;
  t = term_q_25;
  t = w_6(o_65, p_65, t);
  t = term_r_25;
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_s_25;
  return(t);
}
ATerm l_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_131 (ATerm), ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL;
  i_65 = t;
  t = term_h_22;
  k_65 = t;
  t = term_k_22;
  l_65 = t;
  t = (ATerm) ATempty;
  m_65 = t;
  t = SSL_table_put(k_65, l_65, m_65);
  t = i_65;
  {
    ATerm d_7 (ATerm t)
    {
      ATerm v_25 = t;
      int b_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_131(t);
          ;
          LocalPopChoice(b_26);
        }
      else
        {
          t = v_25;
          {
            ATerm c_26 = t;
            int d_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(e_7, j_7, k_7, t);
                ;
                LocalPopChoice(d_26);
              }
            else
              {
                t = c_26;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_7, t);
    {
      ATerm e_26 = t;
      int f_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_65 = NULL;
          w_65 = t;
          {
            ATerm g_26 = t;
            int h_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_32 = NULL;
                t = w_65;
                {
                  ATerm i_26 = t;
                  int j_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_u_23;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_26);
                    }
                  else
                    {
                      t = i_26;
                      t = fetch_1_0(l_7, t);
                    }
                  t = w_65;
                  t = default_system_usage_0_0(t);
                  t = term_c_21;
                  y_32 = t;
                  t = SSL_exit(y_32);
                }
                ;
                LocalPopChoice(h_26);
              }
            else
              {
                t = g_26;
                {
                  ATerm c_33 = NULL;
                  t = term_g_24;
                  t = get_config_0_0(t);
                  t = w_65;
                  t = default_system_about_0_0(t);
                  t = term_c_21;
                  c_33 = t;
                  t = SSL_exit(c_33);
                }
              }
          }
          ;
          LocalPopChoice(f_26);
        }
      else
        {
          t = e_26;
          {
            ATerm k_26 = t;
            int j_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL;
                ATerm m_7 (ATerm t)
                {
                  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL,y_9 = NULL;
                  c_66 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      b_66 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(c_66);
                  a_66 = t;
                  t = b_66;
                  if(((g_65 != NULL) && (g_65 != t)))
                    _fail(t);
                  else
                    g_65 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, b_66);
                  y_9 = t;
                  t = SSLsetAnnotations(y_9, a_66);
                  return(t);
                }
                t = fetch_1_0(m_7, t);
                t = term_a_9;
                y_65 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_65)), term_k_27);
                z_65 = t;
                t = SSL_printnl(y_65, z_65);
                t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_65)), term_k_27));
                t = default_system_usage_0_0(t);
                t = term_d_9;
                x_65 = t;
                t = SSL_exit(x_65);
                ;
                LocalPopChoice(j_27);
              }
            else
              {
                t = k_26;
              }
          }
        }
      h_65 = t;
      t = term_h_22;
      j_65 = t;
      t = SSL_table_destroy(j_65);
      t = h_65;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm v_129 (ATerm), ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL;
  t = parse_options_1_0(s_129, t);
  h_66 = t;
  t = term_l_27;
  k_66 = t;
  t = SSL_table_create(k_66);
  t = term_l_27;
  i_66 = t;
  t = term_m_27;
  j_66 = t;
  t = SSL_table_put(i_66, j_66, h_66);
  t = h_66;
  t = u_129(t);
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_129, t);
        ;
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        {
          ATerm q_27 = t;
          int r_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_129(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_27);
            }
          else
            {
              t = q_27;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = if_verbose2_1_0(g_8, t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL;
  t = term_s_27;
  l_66 = t;
  t = term_o_8;
  m_66 = t;
  t = term_t_27;
  t = w_6(l_66, m_66, t);
  t = term_u_27;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL;
  n_66 = t;
  t = term_g_23;
  t = get_config_0_0(t);
  o_66 = t;
  t = term_a_9;
  p_66 = t;
  t = (ATerm) ATinsert(ATempty, o_66);
  q_66 = t;
  t = SSL_printnl(p_66, q_66);
  t = n_66;
  return(t);
}
ATerm iowrap_3_0 (ATerm b_129 (ATerm), ATerm c_129 (ATerm), ATerm d_129 (ATerm), ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_129(t);
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        {
          ATerm e_28 = t;
          int f_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(f_28);
            }
          else
            {
              t = e_28;
              {
                ATerm h_28 = t;
                int i_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(i_28);
                  }
                else
                  {
                    t = h_28;
                    {
                      ATerm s_28 = t;
                      int t_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(s_7, w_7, f_8, t);
                          ;
                          LocalPopChoice(t_28);
                        }
                      else
                        {
                          t = s_28;
                          {
                            ATerm u_28 = t;
                            int v_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(v_28);
                              }
                            else
                              {
                                t = u_28;
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
  ATerm r_7 (ATerm t)
  {
    ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL;
    s_66 = t;
    {
      ATerm w_28 = t;
      int y_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_66 != NULL) && (r_66 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_66 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_8, t);
          ;
          LocalPopChoice(y_28);
        }
      else
        {
          t = w_28;
          t = term_z_28;
          r_66 = t;
        }
      t = not_null(r_66);
      t = ReadFromFile_0_0(t);
      t_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_66, t_66);
      t = apply_strategy_1_0(b_129, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(p_7, d_129, q_7, r_7, t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_10 = NULL;
  z_66 = t;
  if(match_cons(t, sym__2))
    {
      w_66 = ATgetArgument(t, 0);
      x_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_66);
  v_66 = t;
  t = x_66;
  t = downup2_2_0(j_8, k_8, t);
  t = downup_1_0(n_8, t);
  y_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_66, y_66);
  a_10 = t;
  t = SSLsetAnnotations(a_10, v_66);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = repeat_1_0(l_8, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = repeat_1_0(Canon_0_0, t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Canon_0_0(t);
      ;
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      {
        ATerm c_29 = t;
        int d_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(d_29);
          }
        else
          {
            t = c_29;
            {
              ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL;
              a_67 = t;
              if(match_cons(t, sym_CallT_3))
                {
                  b_67 = ATgetArgument(t, 0);
                  c_67 = ATgetArgument(t, 1);
                  d_67 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = a_67;
              t = e_6(b_67, c_67, d_67, t);
            }
          }
      }
    }
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(i_8, _fail, default_usage_0_0, t);
  return(t);
}
