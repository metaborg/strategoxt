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
ATerm term_a_29;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_a_26;
ATerm term_u_25;
ATerm term_s_25;
ATerm term_j_25;
ATerm term_a_25;
ATerm term_s_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_c_22;
ATerm term_v_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_d_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_p_20;
ATerm term_f_20;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_b_19;
ATerm term_t_18;
ATerm term_q_18;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_e_12;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_x_10;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_q_8;
void init_constant_terms (void)
{
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Sort_2, term_r_11, (ATerm) ATempty);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_CallT_3, term_p_15, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_CallT_3, term_s_15, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_16);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_g_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_q_8);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__2, term_i_22, term_j_22);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym__2, term_h_24, term_q_8);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym__2, term_k_24, term_q_8);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym__2, term_v_23, term_q_8);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_q_8);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm topdown_1_0 (ATerm f_107 (ATerm), ATerm);
ATerm p_0 (ATerm);
ATerm u_4 (ATerm t_77, ATerm s_77, ATerm);
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
ATerm oncetd_1_0 (ATerm j_108 (ATerm), ATerm);
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
ATerm repeat_1_0 (ATerm h_106 (ATerm), ATerm);
ATerm downup_1_0 (ATerm h_107 (ATerm), ATerm);
ATerm CreateDef2_0_0 (ATerm);
ATerm t_32 (ATerm d_32, ATerm);
ATerm conc_0_0 (ATerm);
ATerm alltd_1_0 (ATerm x_108 (ATerm), ATerm);
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
ATerm r_5 (ATerm r_67, ATerm s_67, ATerm t_67, ATerm);
ATerm genzip_4_0 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm m_113 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm u_46 (ATerm l_46, ATerm);
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
ATerm downup2_2_0 (ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm);
ATerm w_5 (ATerm p_47, ATerm q_47, ATerm);
ATerm x_5 (ATerm d_51, ATerm e_51, ATerm);
ATerm z_5 (ATerm k_125 (ATerm), ATerm d_429, ATerm h_51, ATerm);
ATerm y_5 (ATerm z_50, ATerm a_51, ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_128 (ATerm), ATerm);
ATerm x_52 (ATerm m_52, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm a_6 (ATerm f_51, ATerm);
ATerm b_6 (ATerm r_47, ATerm s_47, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm m_54 (ATerm h_53, ATerm);
ATerm n_54 (ATerm l_53, ATerm m_53, ATerm n_53, ATerm);
ATerm o_54 (ATerm v_53, ATerm w_53, ATerm b_54, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm g_113 (ATerm), ATerm);
ATerm v_5 (ATerm s_42, ATerm u_42, ATerm);
ATerm debug_1_0 (ATerm i_125 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm e_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm v_126 (ATerm), ATerm);
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
ATerm h_6 (ATerm g_52, ATerm h_52, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm f_6 (ATerm e_57, ATerm f_57, ATerm d_57, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_6 (ATerm d_45, ATerm e_45, ATerm);
ATerm foldr_2_0 (ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm u_126 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm need_help_1_0 (ATerm k_129 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_112 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm e_6 (ATerm v_58, ATerm w_58, ATerm);
ATerm j_6 (ATerm);
ATerm m_6 (ATerm);
ATerm p_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm n_131 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm parse_options_1_0 (ATerm m_131 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_129 (ATerm), ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm p_129 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm iowrap_3_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm x_128 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm b_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
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
  t = term_q_8;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_s_8;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), c_0), term_t_8);
  o_0 = t;
  t = SSL_printnl(f_0, o_0);
  t = term_v_8;
  e_0 = t;
  t = SSL_exit(e_0);
  t = b_0;
  return(t);
}
ATerm topdown_1_0 (ATerm f_107 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(f_107, t);
    return(t);
  }
  t = f_107(t);
  t = SRTS_all(a_0, t);
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm c_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm j_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(i_9);
      {
        ATerm q_0 = NULL,r_0 = NULL;
        q_0 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm k_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        r_0 = t;
        t = SSLgetAnnotations(q_0);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_9 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) l_9) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_9 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(w_9) != AT_LIST) || !(ATisEmpty(w_9))))
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
      t = c_9;
      {
        ATerm y_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm b_10 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) b_10) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm c_10 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(a_10);
            _fail(t);
          }
        else
          {
            t = y_9;
          }
      }
    }
  return(t);
}
ATerm u_4 (ATerm t_77, ATerm s_77, ATerm t)
{
  t = t_77;
  t = topdown_1_0(p_0, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, t_77);
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
      ATerm h_10 = ATgetArgument(t, 0);
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
  ATerm l_6 = NULL,o_6 = NULL,v_6 = NULL,x_6 = NULL,z_6 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      v_6 = ATgetArgument(t, 0);
      x_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6;
  if(match_cons(t, sym_Build_1))
    {
      ATerm i_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6;
  if(match_cons(t, sym_Seq_2))
    {
      z_6 = ATgetArgument(t, 0);
      o_6 = ATgetArgument(t, 1);
      t = z_6;
      if(match_cons(t, sym_Build_1))
        {
          l_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_6), o_6);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          z_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, z_6);
    }
  return(t);
}
ATerm s_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_10 = ATgetArgument(t, 0);
      if(((ATgetType(j_10) != AT_LIST) || !(ATisEmpty(j_10))))
        _fail(t);
      {
        ATerm k_10 = ATgetArgument(t, 1);
        if(((ATgetType(k_10) != AT_LIST) || !(ATisEmpty(k_10))))
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
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      if(((ATgetType(l_10) == AT_LIST) && !(ATisEmpty(l_10))))
        {
          x_8 = ATgetFirst((ATermList) l_10);
          y_8 = (ATerm) ATgetNext((ATermList) l_10);
        }
      else
        _fail(t);
      {
        ATerm m_10 = ATgetArgument(t, 1);
        if(((ATgetType(m_10) == AT_LIST) && !(ATisEmpty(m_10))))
          {
            z_8 = ATgetFirst((ATermList) m_10);
            a_9 = (ATerm) ATgetNext((ATermList) m_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_8, z_8), (ATerm) ATmakeAppl(sym__2, y_8, a_9));
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      d_9 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_9), d_9);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym__2))
    {
      f_9 = ATgetArgument(t, 0);
      g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_9), (ATerm) ATmakeAppl(sym_Match_1, g_9));
  return(t);
}
ATerm x_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_10 = ATgetArgument(t, 0);
      if(((ATgetType(n_10) != AT_LIST) || !(ATisEmpty(n_10))))
        _fail(t);
      {
        ATerm o_10 = ATgetArgument(t, 1);
        if(((ATgetType(o_10) != AT_LIST) || !(ATisEmpty(o_10))))
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
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      if(((ATgetType(p_10) == AT_LIST) && !(ATisEmpty(p_10))))
        {
          n_9 = ATgetFirst((ATermList) p_10);
          o_9 = (ATerm) ATgetNext((ATermList) p_10);
        }
      else
        _fail(t);
      {
        ATerm q_10 = ATgetArgument(t, 1);
        if(((ATgetType(q_10) == AT_LIST) && !(ATisEmpty(q_10))))
          {
            p_9 = ATgetFirst((ATermList) q_10);
            q_9 = (ATerm) ATgetNext((ATermList) q_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_9, p_9), (ATerm) ATmakeAppl(sym__2, o_9, q_9));
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      r_9 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_9), r_9);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_9), (ATerm) ATmakeAppl(sym_Match_1, u_9));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8;
  if(match_cons(t, sym_Build_1))
    {
      d_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8;
  if(match_cons(t, sym_Op_2))
    {
      e_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8;
  if(match_cons(t, sym_Seq_2))
    {
      j_8 = ATgetArgument(t, 0);
      a_8 = ATgetArgument(t, 1);
      {
        ATerm w_8 = NULL;
        t = j_8;
        if(match_cons(t, sym_Match_1))
          {
            k_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_8;
        if(match_cons(t, sym_Op_2))
          {
            y_7 = ATgetArgument(t, 0);
            z_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_7;
        if((e_8 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, f_8, z_7);
        t = genzip_4_0(s_0, t_0, u_0, v_0, t);
        w_8 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, e_8, f_8)), a_8));
      }
    }
  else
    {
      ATerm m_9 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          j_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_8;
      if(match_cons(t, sym_Op_2))
        {
          k_8 = ATgetArgument(t, 0);
          l_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_8;
      if((e_8 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, f_8, l_8);
      t = genzip_4_0(x_0, y_0, z_0, a_1, t);
      m_9 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_9), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, e_8, f_8)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm f_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,v_11 = NULL,y_11 = NULL,z_11 = NULL,b_12 = NULL;
  o_11 = t;
  if(match_cons(t, sym_Seq_2))
    {
      p_11 = ATgetArgument(t, 0);
      y_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11;
  if(match_cons(t, sym_Build_1))
    {
      q_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11;
  if(match_cons(t, sym_Op_2))
    {
      v_11 = ATgetArgument(t, 0);
      {
        ATerm r_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_11;
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            z_11 = ATgetArgument(t, 0);
            {
              ATerm u_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_10);
        t = z_11;
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
              ATerm v_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_11, f_11);
        {
          ATerm w_10 = t;
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
              t = w_10;
            }
          t = term_x_10;
        }
      }
    else
      {
        t = s_10;
        if(match_cons(t, sym_Match_1))
          {
            z_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_11;
        if(match_cons(t, sym_Op_2))
          {
            b_12 = ATgetArgument(t, 0);
            {
              ATerm y_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_11, b_12);
        {
          ATerm z_10 = t;
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
              t = z_10;
            }
          t = term_x_10;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm i_12 (ATerm t)
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_108(t);
        ;
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        t = SRTS_one(i_12, t);
      }
    return(t);
  }
  t = i_12(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,q_13 = NULL,r_13 = NULL,t_13 = NULL,u_13 = NULL,w_13 = NULL,x_13 = NULL,z_13 = NULL,a_14 = NULL;
  j_13 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_13 = ATgetArgument(t, 0);
      u_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_13;
  if(match_cons(t, sym_Let_2))
    {
      w_13 = ATgetArgument(t, 0);
      z_13 = ATgetArgument(t, 1);
      {
        ATerm g_14 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, k_13, w_13);
        t = conc_0_0(t);
        g_14 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, g_14, z_13);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          w_13 = ATgetArgument(t, 0);
          z_13 = ATgetArgument(t, 1);
          a_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_13 = ATgetFirst((ATermList) t);
          t_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_13;
      if(match_cons(t, sym_SDefT_4))
        {
          m_13 = ATgetArgument(t, 0);
          n_13 = ATgetArgument(t, 1);
          q_13 = ATgetArgument(t, 2);
          r_13 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = n_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_13;
      if(match_cons(t, sym_SVar_1))
        {
          x_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_13;
      if((m_13 != t))
        {
          _fail(t);
        }
      t = r_13;
      {
        ATerm d_11 = t;
        if((PushChoice() == 0))
          {
            ATerm d_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm e_11 = ATgetArgument(t, 0);
                  if(match_cons(e_11, sym_SVar_1))
                    {
                      if((m_13 != ATgetArgument(e_11, 0)))
                        {
                          _fail(ATgetArgument(e_11, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm g_11 = ATgetArgument(t, 1);
                    if(((ATgetType(g_11) != AT_LIST) || !(ATisEmpty(g_11))))
                      _fail(t);
                  }
                  {
                    ATerm h_11 = ATgetArgument(t, 2);
                    if(((ATgetType(h_11) != AT_LIST) || !(ATisEmpty(h_11))))
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
            t = d_11;
          }
        t = r_13;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL,a_15 = NULL,c_15 = NULL,g_15 = NULL,i_15 = NULL,j_15 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      i_15 = ATgetArgument(t, 0);
      t = i_15;
      if(match_cons(t, sym_Seq_2))
        {
          g_15 = ATgetArgument(t, 0);
          w_14 = ATgetArgument(t, 1);
          t = g_15;
          if(match_cons(t, sym_Where_1))
            {
              v_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_14;
          if(match_cons(t, sym_Seq_2))
            {
              x_14 = ATgetArgument(t, 0);
              c_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_14;
          if(match_cons(t, sym_Build_1))
            {
              a_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, v_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_15), c_15)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              g_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, g_15);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          i_15 = ATgetArgument(t, 0);
          t = i_15;
          if(match_cons(t, sym_Test_1))
            {
              g_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, g_15);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              i_15 = ATgetArgument(t, 0);
              t = i_15;
              if(match_cons(t, sym_Not_1))
                {
                  g_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, g_15);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  i_15 = ATgetArgument(t, 0);
                  j_15 = ATgetArgument(t, 1);
                  t = j_15;
                  if((i_15 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      i_15 = ATgetArgument(t, 0);
                      j_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = j_15;
                  if((i_15 != t))
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
  ATerm i_16 = NULL,j_16 = NULL,l_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      i_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
      t = i_16;
      if(match_cons(t, sym_LChoice_2))
        {
          j_16 = ATgetArgument(t, 0);
          l_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, j_16, (ATerm) ATmakeAppl(sym_LChoice_2, l_16, m_16));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          i_16 = ATgetArgument(t, 0);
          m_16 = ATgetArgument(t, 1);
          t = i_16;
          if(match_cons(t, sym_Seq_2))
            {
              j_16 = ATgetArgument(t, 0);
              l_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, j_16, (ATerm) ATmakeAppl(sym_Seq_2, l_16, m_16));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              i_16 = ATgetArgument(t, 0);
              m_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_16;
          if(match_cons(t, sym_Choice_2))
            {
              j_16 = ATgetArgument(t, 0);
              l_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, j_16, (ATerm) ATmakeAppl(sym_Choice_2, l_16, m_16));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_18 = ATgetFirst((ATermList) t);
      z_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,v_2 = NULL,z_2 = NULL,j_4 = NULL,i_4 = NULL;
        t = SSLgetAnnotations(x_18);
        o_2 = t;
        t = y_18;
        t = n_0(t);
        v_2 = t;
        t = (ATerm) ATinsert(CheckATermList(z_18), v_2);
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
          ATerm m_11 = t;
          int n_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(n_11);
            }
          else
            {
              t = m_11;
            }
          n_2 = t;
          t = (ATerm) ATinsert(CheckATermList(n_2), l_2);
          j_4 = t;
          t = SSLsetAnnotations(j_4, k_2);
        }
        ;
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
        {
          ATerm u_3 = NULL,x_3 = NULL,k_4 = NULL;
          t = SSLgetAnnotations(x_18);
          u_3 = t;
          t = z_18;
          t = map1_1_0(n_0, t);
          x_3 = t;
          t = (ATerm) ATinsert(CheckATermList(x_3), y_18);
          k_4 = t;
          t = SSLsetAnnotations(k_4, u_3);
        }
      }
  }
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm j_21 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_11), term_t_11));
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL;
  l_21 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_21 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, k_21, term_t_11);
    }
  else
    {
      t = l_21;
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm x_21 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_21, term_t_11);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm y_21 = NULL,d_22 = NULL;
  d_22 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_21 = ATgetArgument(t, 0);
      {
        ATerm u_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, y_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_11), term_t_11));
            ;
            LocalPopChoice(w_11);
          }
        else
          {
            t = u_11;
            t = d_22;
          }
      }
    }
  else
    {
      t = d_22;
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm p_22 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_22, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_11), term_t_11));
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL;
  r_22 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_22 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, q_22, term_t_11);
    }
  else
    {
      t = r_22;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,z_19 = NULL,a_20 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      z_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, z_19, a_20);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          z_19 = ATgetArgument(t, 0);
          t = z_19;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_19 = ATgetFirst((ATermList) t);
              r_19 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, q_19, (ATerm) ATmakeAppl(sym_LChoices_1, r_19));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_x_10;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              z_19 = ATgetArgument(t, 0);
              t = z_19;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_19 = ATgetFirst((ATermList) t);
                  r_19 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, q_19, (ATerm) ATmakeAppl(sym_Choices_1, r_19));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_x_10;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  z_19 = ATgetArgument(t, 0);
                  t = z_19;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_19 = ATgetFirst((ATermList) t);
                      r_19 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_19, (ATerm) ATmakeAppl(sym_Seqs_1, r_19));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_x_11;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_19 = ATgetArgument(t, 0);
                      a_20 = ATgetArgument(t, 1);
                      t_19 = ATgetArgument(t, 2);
                      s_19 = ATgetArgument(t, 3);
                      {
                        ATerm c_21 = NULL,i_21 = NULL;
                        t = a_20;
                        t = map1_1_0(k_1, t);
                        c_21 = t;
                        t = t_19;
                        t = map1_1_0(l_1, t);
                        i_21 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, z_19, c_21, i_21, s_19);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          z_19 = ATgetArgument(t, 0);
                          a_20 = ATgetArgument(t, 1);
                          t_19 = ATgetArgument(t, 2);
                          s_19 = ATgetArgument(t, 3);
                          {
                            ATerm a_12 = t;
                            int c_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm s_21 = NULL,w_21 = NULL;
                                t = t_19;
                                t = map1_1_0(m_1, t);
                                s_21 = t;
                                t = a_20;
                                t = map_1_0(n_1, t);
                                w_21 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_19, w_21, s_21, s_19);
                                ;
                                LocalPopChoice(c_12);
                              }
                            else
                              {
                                t = a_12;
                                {
                                  ATerm k_22 = NULL,m_22 = NULL;
                                  t = a_20;
                                  t = map1_1_0(o_1, t);
                                  k_22 = t;
                                  t = t_19;
                                  t = map_1_0(p_1, t);
                                  m_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, z_19, k_22, m_22, s_19);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              z_19 = ATgetArgument(t, 0);
                              a_20 = ATgetArgument(t, 1);
                              t_19 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, a_20, (ATerm) ATmakeAppl(sym_Op_2, term_e_12, (ATerm) ATinsert(ATinsert(ATempty, t_19), z_19)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  z_19 = ATgetArgument(t, 0);
                                  a_20 = ATgetArgument(t, 1);
                                  t_19 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, t_19)), z_19), (ATerm) ATmakeAppl(sym_Build_1, a_20)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      z_19 = ATgetArgument(t, 0);
                                      a_20 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_19, (ATerm) ATmakeAppl(sym_Match_1, a_20));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          z_19 = ATgetArgument(t, 0);
                                          a_20 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_19), a_20);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              z_19 = ATgetArgument(t, 0);
                                              a_20 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_20), z_19);
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
  ATerm u_24 = NULL,x_24 = NULL,y_24 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      u_24 = ATgetArgument(t, 0);
      t = u_24;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_x_10;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          u_24 = ATgetArgument(t, 0);
          t = u_24;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_x_11;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              u_24 = ATgetArgument(t, 0);
              x_24 = ATgetArgument(t, 1);
              t = u_24;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_x_10;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  u_24 = ATgetArgument(t, 0);
                  x_24 = ATgetArgument(t, 1);
                  t = x_24;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_x_10;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      u_24 = ATgetArgument(t, 0);
                      x_24 = ATgetArgument(t, 1);
                      t = x_24;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_x_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          u_24 = ATgetArgument(t, 0);
                          t = u_24;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_x_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              u_24 = ATgetArgument(t, 0);
                              t = u_24;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_x_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  u_24 = ATgetArgument(t, 0);
                                  x_24 = ATgetArgument(t, 1);
                                  t = x_24;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_x_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      u_24 = ATgetArgument(t, 0);
                                      x_24 = ATgetArgument(t, 1);
                                      t = x_24;
                                      t = fetch_1_0(q_1, t);
                                      t = term_x_10;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          u_24 = ATgetArgument(t, 0);
                                          x_24 = ATgetArgument(t, 1);
                                          t = x_24;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = u_24;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = x_24;
                                                }
                                              else
                                                {
                                                  t = u_24;
                                                }
                                            }
                                          else
                                            {
                                              t = u_24;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = x_24;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              u_24 = ATgetArgument(t, 0);
                                              x_24 = ATgetArgument(t, 1);
                                              t = x_24;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = u_24;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = x_24;
                                                    }
                                                  else
                                                    {
                                                      t = u_24;
                                                    }
                                                }
                                              else
                                                {
                                                  t = u_24;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = x_24;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  u_24 = ATgetArgument(t, 0);
                                                  t = u_24;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_x_10;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      u_24 = ATgetArgument(t, 0);
                                                      x_24 = ATgetArgument(t, 1);
                                                      y_24 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = y_24;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_24, x_24);
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
  ATerm v_28 = NULL,z_28 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      z_28 = ATgetArgument(t, 0);
      t = z_28;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_x_11;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          z_28 = ATgetArgument(t, 0);
          t = z_28;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_x_10;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              z_28 = ATgetArgument(t, 0);
              v_28 = ATgetArgument(t, 1);
              t = v_28;
              if(match_cons(t, sym_Id_0))
                {
                  t = z_28;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = v_28;
                    }
                  else
                    {
                      t = z_28;
                    }
                }
              else
                {
                  t = z_28;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = v_28;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  z_28 = ATgetArgument(t, 0);
                  v_28 = ATgetArgument(t, 1);
                  t = z_28;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_x_11;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      z_28 = ATgetArgument(t, 0);
                      v_28 = ATgetArgument(t, 1);
                      t = v_28;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_x_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          z_28 = ATgetArgument(t, 0);
                          v_28 = ATgetArgument(t, 1);
                          t = v_28;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_x_11;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              z_28 = ATgetArgument(t, 0);
                              t = z_28;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_x_11;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  z_28 = ATgetArgument(t, 0);
                                  t = z_28;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_x_11;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      z_28 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = z_28;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_x_11;
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
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm h_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(k_12);
          }
        else
          {
            t = h_12;
            {
              ATerm l_12 = t;
              int m_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(m_12);
                }
              else
                {
                  t = l_12;
                  {
                    ATerm n_12 = t;
                    int o_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(o_12);
                      }
                    else
                      {
                        t = n_12;
                        {
                          ATerm p_12 = t;
                          int q_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(q_12);
                            }
                          else
                            {
                              t = p_12;
                              {
                                ATerm r_12 = t;
                                int s_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_30 = NULL,o_30 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        m_30 = ATgetArgument(t, 0);
                                        o_30 = ATgetArgument(t, 1);
                                        t = m_30;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = o_30;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            m_30 = ATgetArgument(t, 0);
                                            o_30 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = m_30;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = o_30;
                                      }
                                    ;
                                    LocalPopChoice(s_12);
                                  }
                                else
                                  {
                                    t = r_12;
                                    {
                                      ATerm t_12 = t;
                                      int u_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(u_12);
                                        }
                                      else
                                        {
                                          t = t_12;
                                          {
                                            ATerm b_13 = t;
                                            int c_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
                                                LocalPopChoice(c_13);
                                              }
                                            else
                                              {
                                                t = b_13;
                                                {
                                                  ATerm d_13 = t;
                                                  int e_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
                                                      LocalPopChoice(e_13);
                                                    }
                                                  else
                                                    {
                                                      t = d_13;
                                                      {
                                                        ATerm f_13 = t;
                                                        int i_13 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            ;
                                                            LocalPopChoice(i_13);
                                                          }
                                                        else
                                                          {
                                                            t = f_13;
                                                            {
                                                              ATerm s_13 = t;
                                                              int v_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(v_13);
                                                                }
                                                              else
                                                                {
                                                                  t = s_13;
                                                                  {
                                                                    ATerm c_14 = t;
                                                                    int d_14 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(d_14);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_14;
                                                                        {
                                                                          ATerm f_14 = t;
                                                                          int i_14 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(i_14);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_14;
                                                                              {
                                                                                ATerm l_14 = t;
                                                                                int m_14 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(m_14);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_14;
                                                                                    {
                                                                                      ATerm u_30 = NULL,w_30 = NULL,x_30 = NULL,a_31 = NULL;
                                                                                      w_30 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          x_30 = ATgetArgument(t, 0);
                                                                                          a_31 = ATgetArgument(t, 1);
                                                                                          t = x_30;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              u_30 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = w_30;
                                                                                          t = u_4(u_30, a_31, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              x_30 = ATgetArgument(t, 0);
                                                                                              a_31 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = x_30;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = a_31;
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
ATerm repeat_1_0 (ATerm h_106 (ATerm), ATerm t)
{
  ATerm m_31 (ATerm t)
  {
    ATerm z_14 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_106(t);
        t = m_31(t);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = z_14;
      }
    return(t);
  }
  t = m_31(t);
  return(t);
}
ATerm downup_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  t = h_107(t);
  {
    ATerm s_1 (ATerm t)
    {
      t = downup_1_0(h_107, t);
      return(t);
    }
    t = SRTS_all(s_1, t);
    t = h_107(t);
  }
  return(t);
}
ATerm CreateDef2_0_0 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL;
  s_31 = t;
  t = new_0_0(t);
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, t_31), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, t_31, (ATerm)ATempty, (ATerm)ATempty, s_31)));
  return(t);
}
ATerm t_32 (ATerm d_32, ATerm t)
{
  ATerm e_32 = NULL;
  t = SSL_explode_term(d_32);
  if(match_cons(t, sym__2))
    {
      ATerm d_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_32;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
  j_32 = t;
  if(match_cons(t, sym__2))
    {
      h_32 = ATgetArgument(t, 0);
      i_32 = ATgetArgument(t, 1);
      {
        ATerm e_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 (ATerm t)
            {
              t = i_32;
              return(t);
            }
            t = h_32;
            t = at_end_1_0(t_1, t);
            ;
            LocalPopChoice(f_15);
          }
        else
          {
            t = e_15;
            t = t_32(j_32, t);
          }
      }
    }
  else
    {
      t = t_32(j_32, t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm u_32 (ATerm t)
  {
    ATerm h_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_108(t);
        ;
        LocalPopChoice(k_15);
      }
    else
      {
        t = h_15;
        t = SRTS_all(u_32, t);
      }
    return(t);
  }
  t = u_32(t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_15;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_12 = ATgetFirst((ATermList) t);
      z_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_12, z_12);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm a_13 = NULL,g_13 = NULL,h_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_15 = ATgetArgument(t, 0);
      if(match_cons(m_15, sym__2))
        {
          a_13 = ATgetArgument(m_15, 0);
          g_13 = ATgetArgument(m_15, 1);
        }
      else
        _fail(t);
      {
        ATerm n_15 = ATgetArgument(t, 1);
        if(match_cons(n_15, sym__2))
          {
            h_13 = ATgetArgument(n_15, 0);
            o_13 = ATgetArgument(n_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_13), a_13), (ATerm) ATinsert(CheckATermList(o_13), g_13));
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm p_13 = NULL;
  p_13 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_q_15;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_t_15;
        }
      else
        {
          t = p_13;
        }
    }
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_13 = NULL,b_14 = NULL,e_14 = NULL,h_14 = NULL,j_14 = NULL,k_14 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            y_13 = ATgetArgument(t, 0);
            b_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_14;
        if(match_cons(t, sym_CallT_3))
          {
            e_14 = ATgetArgument(t, 0);
            j_14 = ATgetArgument(t, 1);
            k_14 = ATgetArgument(t, 2);
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
        t = j_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_14), (ATerm)ATempty, (ATerm) ATempty), y_13);
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        {
          ATerm w_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_15 = t;
              if((PushChoice() == 0))
                {
                  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,z_4 = NULL,y_4 = NULL;
                  u_14 = t;
                  if(match_cons(t, sym_CallT_3))
                    {
                      o_14 = ATgetArgument(t, 0);
                      p_14 = ATgetArgument(t, 1);
                      q_14 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_14);
                  n_14 = t;
                  t = o_14;
                  if(match_cons(t, sym_SVar_1))
                    {
                      s_14 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_14);
                  r_14 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, s_14);
                  y_4 = t;
                  t = SSLsetAnnotations(y_4, r_14);
                  t_14 = t;
                  t = p_14;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = q_14;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, t_14, p_14, q_14);
                  z_4 = t;
                  t = SSLsetAnnotations(z_4, n_14);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = y_15;
                }
              t = CreateDef2_0_0(t);
              ;
              LocalPopChoice(x_15);
            }
          else
            {
              t = w_15;
              {
                ATerm y_14 = NULL;
                y_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, y_14, (ATerm) ATempty);
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
  t = term_l_15;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_20 = ATgetFirst((ATermList) t);
      r_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_20, r_20);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm s_20 = NULL,u_20 = NULL,y_20 = NULL,z_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_16 = ATgetArgument(t, 0);
      if(match_cons(a_16, sym__2))
        {
          s_20 = ATgetArgument(a_16, 0);
          u_20 = ATgetArgument(a_16, 1);
        }
      else
        _fail(t);
      {
        ATerm b_16 = ATgetArgument(t, 1);
        if(match_cons(b_16, sym__2))
          {
            y_20 = ATgetArgument(b_16, 0);
            z_20 = ATgetArgument(b_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_20), s_20), (ATerm) ATinsert(CheckATermList(z_20), u_20));
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm e_21 = NULL;
  e_21 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_q_15;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_t_15;
        }
      else
        {
          t = e_21;
        }
    }
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_21 = NULL,t_21 = NULL,u_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            h_21 = ATgetArgument(t, 0);
            t_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_21;
        if(match_cons(t, sym_CallT_3))
          {
            u_21 = ATgetArgument(t, 0);
            a_22 = ATgetArgument(t, 1);
            b_22 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = u_21;
        if(match_cons(t, sym_SVar_1))
          {
            z_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_21), (ATerm)ATempty, (ATerm) ATempty), h_21);
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
              ATerm g_16 = t;
              if((PushChoice() == 0))
                {
                  ATerm o_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,e_5 = NULL,d_5 = NULL;
                  j_23 = t;
                  if(match_cons(t, sym_CallT_3))
                    {
                      t_22 = ATgetArgument(t, 0);
                      u_22 = ATgetArgument(t, 1);
                      v_22 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_23);
                  o_22 = t;
                  t = t_22;
                  if(match_cons(t, sym_SVar_1))
                    {
                      h_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_22);
                  w_22 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, h_23);
                  d_5 = t;
                  t = SSLsetAnnotations(d_5, w_22);
                  i_23 = t;
                  t = u_22;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_22;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, i_23, u_22, v_22);
                  e_5 = t;
                  t = SSLsetAnnotations(e_5, o_22);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = g_16;
                }
              t = CreateDef2_0_0(t);
              ;
              LocalPopChoice(f_16);
            }
          else
            {
              t = e_16;
              {
                ATerm o_23 = NULL;
                o_23 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_23, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm Canon_0_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL;
  g_42 = t;
  if(match_cons(t, sym_Rec_2))
    {
      h_42 = ATgetArgument(t, 0);
      i_42 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, h_42, (ATerm)ATempty, (ATerm)ATempty, i_42)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_42), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          h_42 = ATgetArgument(t, 0);
          i_42 = ATgetArgument(t, 1);
          j_42 = ATgetArgument(t, 2);
          z_41 = ATgetArgument(t, 3);
          {
            ATerm p_42 = NULL;
            t = i_42;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = j_42;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = z_41;
            if(match_cons(t, sym_Rec_2))
              {
                a_42 = ATgetArgument(t, 0);
                b_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_42;
            {
              ATerm u_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm h_16 = ATgetArgument(t, 0);
                    if(match_cons(h_16, sym_SVar_1))
                      {
                        if((a_42 != ATgetArgument(h_16, 0)))
                          {
                            _fail(ATgetArgument(h_16, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm k_16 = ATgetArgument(t, 1);
                      if(((ATgetType(k_16) != AT_LIST) || !(ATisEmpty(k_16))))
                        _fail(t);
                    }
                    {
                      ATerm n_16 = ATgetArgument(t, 2);
                      if(((ATgetType(n_16) != AT_LIST) || !(ATisEmpty(n_16))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_42), (ATerm)ATempty, (ATerm) ATempty);
                return(t);
              }
              t = alltd_1_0(u_1, t);
              if(((p_42 != NULL) && (p_42 != t)))
                _fail(t);
              else
                p_42 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, h_42, (ATerm)ATempty, (ATerm)ATempty, p_42);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              h_42 = ATgetArgument(t, 0);
              i_42 = ATgetArgument(t, 1);
              t = i_42;
              if(match_cons(t, sym_Seq_2))
                {
                  e_42 = ATgetArgument(t, 0);
                  f_42 = ATgetArgument(t, 1);
                  t = h_42;
                  if(match_cons(t, sym_Where_1))
                    {
                      d_42 = ATgetArgument(t, 0);
                      t = e_42;
                      if(match_cons(t, sym_Build_1))
                        {
                          c_42 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_42, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_42), f_42));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = i_42;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      e_42 = ATgetArgument(t, 0);
                      t = h_42;
                      if(match_cons(t, sym_Where_1))
                        {
                          d_42 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_42, (ATerm) ATmakeAppl(sym_Build_1, e_42));
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = i_42;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Id_0))
                        {
                          t = h_42;
                          if(match_cons(t, sym_Id_0))
                            {
                              t = h_42;
                            }
                          else
                            {
                              t = h_42;
                            }
                        }
                      else
                        {
                          t = h_42;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = i_42;
                        }
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  h_42 = ATgetArgument(t, 0);
                  i_42 = ATgetArgument(t, 1);
                  t = i_42;
                  if(match_cons(t, sym_Scope_2))
                    {
                      e_42 = ATgetArgument(t, 0);
                      f_42 = ATgetArgument(t, 1);
                      t = h_42;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm o_16 = t;
                          int p_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_43 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, h_42, e_42);
                              t = conc_0_0(t);
                              h_43 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, h_43, f_42);
                              ;
                              LocalPopChoice(p_16);
                            }
                          else
                            {
                              t = o_16;
                              t = i_42;
                            }
                        }
                      else
                        {
                          ATerm m_43 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, h_42, e_42);
                          t = conc_0_0(t);
                          m_43 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, m_43, f_42);
                        }
                    }
                  else
                    {
                      t = h_42;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = i_42;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Thread_1))
                    {
                      h_42 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_r_16, (ATerm)ATinsert(ATempty, h_42), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          h_42 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_t_16, (ATerm)ATinsert(ATempty, h_42), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              h_42 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_16, (ATerm)ATinsert(ATempty, h_42), (ATerm) ATempty);
                            }
                          else
                            {
                              if(match_cons(t, sym_All_1))
                                {
                                  h_42 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_16, (ATerm)ATinsert(ATempty, h_42), (ATerm) ATempty);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Bagof_1))
                                    {
                                      h_42 = ATgetArgument(t, 0);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_16, (ATerm)ATinsert(ATempty, h_42), (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_PrimT_3))
                                        {
                                          h_42 = ATgetArgument(t, 0);
                                          i_42 = ATgetArgument(t, 1);
                                          j_42 = ATgetArgument(t, 2);
                                          {
                                            ATerm a_17 = t;
                                            int b_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm x_7 = NULL;
                                                t = i_42;
                                                {
                                                  ATerm g_10 (ATerm t)
                                                  {
                                                    ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
                                                    d_10 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        e_10 = ATgetFirst((ATermList) t);
                                                        f_10 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm c_17 = t;
                                                      int d_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_11 = NULL,i_11 = NULL,j_11 = NULL,w_4 = NULL;
                                                          t = SSLgetAnnotations(d_10);
                                                          a_11 = t;
                                                          t = e_10;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_q_15;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_t_15;
                                                            }
                                                          i_11 = t;
                                                          t = f_10;
                                                          {
                                                            ATerm e_17 = t;
                                                            int f_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = g_10(t);
                                                                ;
                                                                LocalPopChoice(f_17);
                                                              }
                                                            else
                                                              {
                                                                t = e_17;
                                                              }
                                                            j_11 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(j_11), i_11);
                                                            w_4 = t;
                                                            t = SSLsetAnnotations(w_4, a_11);
                                                          }
                                                          ;
                                                          LocalPopChoice(d_17);
                                                        }
                                                      else
                                                        {
                                                          t = c_17;
                                                          {
                                                            ATerm d_12 = NULL,j_12 = NULL,x_4 = NULL;
                                                            t = SSLgetAnnotations(d_10);
                                                            d_12 = t;
                                                            t = f_10;
                                                            t = g_10(t);
                                                            j_12 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(j_12), e_10);
                                                            x_4 = t;
                                                            t = SSLsetAnnotations(x_4, d_12);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = g_10(t);
                                                  if(((x_7 != NULL) && (x_7 != t)))
                                                    _fail(t);
                                                  else
                                                    x_7 = t;
                                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, h_42, x_7, j_42);
                                                }
                                                ;
                                                LocalPopChoice(b_17);
                                              }
                                            else
                                              {
                                                t = a_17;
                                                {
                                                  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
                                                  t = i_42;
                                                  t = genzip_4_0(v_1, w_1, x_1, y_1, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      v_12 = ATgetArgument(t, 0);
                                                      w_12 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = w_12;
                                                  t = concat_0_0(t);
                                                  x_12 = t;
                                                  {
                                                    ATerm g_17 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = g_17;
                                                      }
                                                    t = (ATerm) ATmakeAppl(sym_Let_2, x_12, (ATerm) ATmakeAppl(sym_PrimT_3, h_42, v_12, j_42));
                                                  }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              h_42 = ATgetArgument(t, 0);
                                              i_42 = ATgetArgument(t, 1);
                                              j_42 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm h_17 = t;
                                            int i_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm z_15 = NULL;
                                                t = i_42;
                                                {
                                                  ATerm u_17 (ATerm t)
                                                  {
                                                    ATerm n_17 = NULL,o_17 = NULL,q_17 = NULL;
                                                    n_17 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        o_17 = ATgetFirst((ATermList) t);
                                                        q_17 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm j_17 = t;
                                                      int k_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_18 = NULL,v_18 = NULL,w_18 = NULL,a_5 = NULL;
                                                          t = SSLgetAnnotations(n_17);
                                                          j_18 = t;
                                                          t = o_17;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_q_15;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_t_15;
                                                            }
                                                          v_18 = t;
                                                          t = q_17;
                                                          {
                                                            ATerm l_17 = t;
                                                            int m_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = u_17(t);
                                                                ;
                                                                LocalPopChoice(m_17);
                                                              }
                                                            else
                                                              {
                                                                t = l_17;
                                                              }
                                                            w_18 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(w_18), v_18);
                                                            a_5 = t;
                                                            t = SSLsetAnnotations(a_5, j_18);
                                                          }
                                                          ;
                                                          LocalPopChoice(k_17);
                                                        }
                                                      else
                                                        {
                                                          t = j_17;
                                                          {
                                                            ATerm m_19 = NULL,p_19 = NULL,c_5 = NULL;
                                                            t = SSLgetAnnotations(n_17);
                                                            m_19 = t;
                                                            t = q_17;
                                                            t = u_17(t);
                                                            p_19 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(p_19), o_17);
                                                            c_5 = t;
                                                            t = SSLsetAnnotations(c_5, m_19);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = u_17(t);
                                                  if(((z_15 != NULL) && (z_15 != t)))
                                                    _fail(t);
                                                  else
                                                    z_15 = t;
                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, h_42, z_15, j_42);
                                                }
                                                ;
                                                LocalPopChoice(i_17);
                                              }
                                            else
                                              {
                                                t = h_17;
                                                {
                                                  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
                                                  t = i_42;
                                                  t = genzip_4_0(z_1, a_2, b_2, c_2, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      l_20 = ATgetArgument(t, 0);
                                                      m_20 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = m_20;
                                                  t = concat_0_0(t);
                                                  n_20 = t;
                                                  {
                                                    ATerm p_17 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = p_17;
                                                      }
                                                    t = (ATerm) ATmakeAppl(sym_Let_2, n_20, (ATerm) ATmakeAppl(sym_CallT_3, h_42, l_20, j_42));
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
  ATerm r_17 = t;
  if((PushChoice() == 0))
    {
      ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_5 = NULL;
      p_44 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_44);
      n_44 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_44);
      q_5 = t;
      t = SSLsetAnnotations(q_5, n_44);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_17;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_15;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_44 = ATgetFirst((ATermList) t);
      r_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_44, r_44);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if(match_cons(s_17, sym__2))
        {
          s_44 = ATgetArgument(s_17, 0);
          t_44 = ATgetArgument(s_17, 1);
        }
      else
        _fail(t);
      {
        ATerm t_17 = ATgetArgument(t, 1);
        if(match_cons(t_17, sym__2))
          {
            u_44 = ATgetArgument(t_17, 0);
            v_44 = ATgetArgument(t_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_44), s_44), (ATerm) ATinsert(CheckATermList(v_44), t_44));
  return(t);
}
ATerm j_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_15;
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_44 = ATgetFirst((ATermList) t);
      x_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_44, x_44);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_17 = ATgetArgument(t, 0);
      if(match_cons(v_17, sym__2))
        {
          y_44 = ATgetArgument(v_17, 0);
          z_44 = ATgetArgument(v_17, 1);
        }
      else
        _fail(t);
      {
        ATerm w_17 = ATgetArgument(t, 1);
        if(match_cons(w_17, sym__2))
          {
            a_45 = ATgetArgument(w_17, 0);
            b_45 = ATgetArgument(w_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_45), y_44), (ATerm) ATinsert(CheckATermList(b_45), z_44));
  return(t);
}
ATerm r_5 (ATerm r_67, ATerm s_67, ATerm t_67, ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,s_5 = NULL;
  t = t_67;
  t = fetch_1_0(d_2, t);
  t = t_67;
  t = genzip_4_0(g_2, h_2, i_2, LiftPrimArg_0_0, t);
  m_44 = t;
  if(match_cons(t, sym__2))
    {
      i_44 = ATgetArgument(t, 0);
      j_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_44);
  h_44 = t;
  t = i_44;
  t = concat_0_0(t);
  k_44 = t;
  t = j_44;
  t = genzip_4_0(j_2, p_2, q_2, _id, t);
  l_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_44, l_44);
  s_5 = t;
  t = SSLsetAnnotations(s_5, h_44);
  if(match_cons(t, sym__2))
    {
      e_44 = ATgetArgument(t, 0);
      {
        ATerm x_17 = ATgetArgument(t, 1);
        if(match_cons(x_17, sym__2))
          {
            f_44 = ATgetArgument(x_17, 0);
            g_44 = ATgetArgument(x_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, e_44, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_44), (ATerm) ATmakeAppl(sym_CallT_3, r_67, s_67, g_44)));
  return(t);
}
ATerm genzip_4_0 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm t)
{
  ATerm l_45 (ATerm t)
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_114(t);
        ;
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
        {
          ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,d_6 = NULL;
          t = a_115(t);
          k_45 = t;
          if(match_cons(t, sym__2))
            {
              g_45 = ATgetArgument(t, 0);
              h_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_45);
          f_45 = t;
          t = g_45;
          t = c_115(t);
          i_45 = t;
          t = h_45;
          t = l_45(t);
          j_45 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_45, j_45);
          d_6 = t;
          t = SSLsetAnnotations(d_6, f_45);
          t = b_115(t);
        }
      }
    return(t);
  }
  t = l_45(t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_113 (ATerm), ATerm t)
{
  ATerm z_45 (ATerm t)
  {
    ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
    y_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_45 = ATgetFirst((ATermList) t);
        x_45 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_23 = NULL,a_24 = NULL,i_6 = NULL;
          t = SSLgetAnnotations(y_45);
          x_23 = t;
          t = x_45;
          t = z_45(t);
          a_24 = t;
          t = (ATerm) ATinsert(CheckATermList(a_24), w_45);
          i_6 = t;
          t = SSLsetAnnotations(i_6, x_23);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_45;
        t = m_113(t);
      }
    return(t);
  }
  t = z_45(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
  c_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_46;
    }
  else
    {
      ATerm s_2 (ATerm t)
      {
        t = not_null(e_46);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((d_46 != NULL) && (d_46 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            d_46 = ATgetFirst((ATermList) t);
          if(((e_46 != NULL) && (e_46 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_46;
      t = at_end_1_0(s_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm u_46 (ATerm l_46, ATerm t)
{
  ATerm n_46 = NULL;
  t = l_46;
  {
    ATerm a_18 = t;
    if((PushChoice() == 0))
      {
        ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,k_6 = NULL;
        q_46 = t;
        if(match_cons(t, sym_Var_1))
          {
            p_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_46);
        o_46 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, p_46);
        k_6 = t;
        t = SSLsetAnnotations(k_6, o_46);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_18;
      }
    t = new_0_0(t);
    n_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, n_46), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_46), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_46)))), (ATerm) ATmakeAppl(sym_Var_1, n_46)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL;
  r_46 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_46 = ATgetArgument(t, 0);
      {
        ATerm b_18 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_46(r_46, t);
            ;
            LocalPopChoice(c_18);
          }
        else
          {
            t = b_18;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATmakeAppl(sym_Var_1, s_46)));
          }
      }
    }
  else
    {
      t = u_46(r_46, t);
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm d_18 = t;
  if((PushChoice() == 0))
    {
      ATerm z_24 = NULL,d_25 = NULL,e_25 = NULL,n_6 = NULL;
      e_25 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_25);
      z_24 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_25);
      n_6 = t;
      t = SSLsetAnnotations(n_6, z_24);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_18;
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_15;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm f_25 = NULL,i_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_25 = ATgetFirst((ATermList) t);
      i_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_25, i_25);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_18 = ATgetArgument(t, 0);
      if(match_cons(e_18, sym__2))
        {
          o_25 = ATgetArgument(e_18, 0);
          p_25 = ATgetArgument(e_18, 1);
        }
      else
        _fail(t);
      {
        ATerm f_18 = ATgetArgument(t, 1);
        if(match_cons(f_18, sym__2))
          {
            q_25 = ATgetArgument(f_18, 0);
            r_25 = ATgetArgument(f_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_25), o_25), (ATerm) ATinsert(CheckATermList(r_25), p_25));
  return(t);
}
ATerm c_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_15;
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm t_25 = NULL,v_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_25 = ATgetFirst((ATermList) t);
      v_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_25, v_25);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_18 = ATgetArgument(t, 0);
      if(match_cons(g_18, sym__2))
        {
          w_25 = ATgetArgument(g_18, 0);
          x_25 = ATgetArgument(g_18, 1);
        }
      else
        _fail(t);
      {
        ATerm h_18 = ATgetArgument(t, 1);
        if(match_cons(h_18, sym__2))
          {
            y_25 = ATgetArgument(h_18, 0);
            z_25 = ATgetArgument(h_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_25), w_25), (ATerm) ATinsert(CheckATermList(z_25), x_25));
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm i_18 = t;
  if((PushChoice() == 0))
    {
      ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,r_6 = NULL;
      v_26 = t;
      if(match_cons(t, sym_Var_1))
        {
          u_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_26);
      t_26 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, u_26);
      r_6 = t;
      t = SSLsetAnnotations(r_6, t_26);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_18;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_15;
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_26 = ATgetFirst((ATermList) t);
      x_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_26, x_26);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_18 = ATgetArgument(t, 0);
      if(match_cons(k_18, sym__2))
        {
          y_26 = ATgetArgument(k_18, 0);
          z_26 = ATgetArgument(k_18, 1);
        }
      else
        _fail(t);
      {
        ATerm l_18 = ATgetArgument(t, 1);
        if(match_cons(l_18, sym__2))
          {
            a_27 = ATgetArgument(l_18, 0);
            b_27 = ATgetArgument(l_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_27), y_26), (ATerm) ATinsert(CheckATermList(b_27), z_26));
  return(t);
}
ATerm p_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_15;
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_27 = ATgetFirst((ATermList) t);
      d_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_27, d_27);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_18 = ATgetArgument(t, 0);
      if(match_cons(m_18, sym__2))
        {
          e_27 = ATgetArgument(m_18, 0);
          f_27 = ATgetArgument(m_18, 1);
        }
      else
        _fail(t);
      {
        ATerm n_18 = ATgetArgument(t, 1);
        if(match_cons(n_18, sym__2))
          {
            g_27 = ATgetArgument(n_18, 0);
            h_27 = ATgetArgument(n_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_27), e_27), (ATerm) ATinsert(CheckATermList(h_27), f_27));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL;
  r_49 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      s_49 = ATgetArgument(t, 0);
      t_49 = ATgetArgument(t, 1);
      q_49 = ATgetArgument(t, 2);
      {
        ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,t_24 = NULL,v_24 = NULL,w_24 = NULL,q_6 = NULL;
        t = q_49;
        t = fetch_1_0(x_2, t);
        t = q_49;
        t = genzip_4_0(y_2, a_3, b_3, LiftPrimArg_0_0, t);
        w_24 = t;
        if(match_cons(t, sym__2))
          {
            q_24 = ATgetArgument(t, 0);
            r_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_24);
        p_24 = t;
        t = q_24;
        t = concat_0_0(t);
        t_24 = t;
        t = r_24;
        t = genzip_4_0(c_3, d_3, e_3, _id, t);
        v_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_24, v_24);
        q_6 = t;
        t = SSLsetAnnotations(q_6, p_24);
        if(match_cons(t, sym__2))
          {
            m_24 = ATgetArgument(t, 0);
            {
              ATerm o_18 = ATgetArgument(t, 1);
              if(match_cons(o_18, sym__2))
                {
                  n_24 = ATgetArgument(o_18, 0);
                  o_24 = ATgetArgument(o_18, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, m_24, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_24), (ATerm) ATmakeAppl(sym_PrimT_3, s_49, t_49, o_24)));
      }
    }
  else
    {
      ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,s_6 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          s_49 = ATgetArgument(t, 0);
          t_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_49;
      t = fetch_1_0(f_3, t);
      t = t_49;
      t = genzip_4_0(g_3, j_3, o_3, LiftPrimArg_0_0, t);
      s_26 = t;
      if(match_cons(t, sym__2))
        {
          o_26 = ATgetArgument(t, 0);
          p_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_26);
      n_26 = t;
      t = o_26;
      t = concat_0_0(t);
      q_26 = t;
      t = p_26;
      t = genzip_4_0(p_3, q_3, r_3, _id, t);
      r_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_26, r_26);
      s_6 = t;
      t = SSLsetAnnotations(s_6, n_26);
      if(match_cons(t, sym__2))
        {
          k_26 = ATgetArgument(t, 0);
          {
            ATerm p_18 = ATgetArgument(t, 1);
            if(match_cons(p_18, sym__2))
              {
                l_26 = ATgetArgument(p_18, 0);
                m_26 = ATgetArgument(p_18, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, k_26, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_26), (ATerm) ATmakeAppl(sym_PrimT_3, s_49, (ATerm)ATempty, m_26)));
    }
  return(t);
}
ATerm downup2_2_0 (ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm t)
{
  t = k_107(t);
  {
    ATerm s_3 (ATerm t)
    {
      t = downup2_2_0(k_107, l_107, t);
      return(t);
    }
    t = SRTS_all(s_3, t);
    t = l_107(t);
  }
  return(t);
}
ATerm w_5 (ATerm p_47, ATerm q_47, ATerm t)
{
  ATerm w_49 = NULL;
  t = SSL_fputc(p_47, q_47);
  w_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_49);
  return(t);
}
ATerm x_5 (ATerm d_51, ATerm e_51, ATerm t)
{
  ATerm x_49 = NULL;
  t = SSL_write_term_to_stream_text(d_51, e_51);
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_49);
  return(t);
}
ATerm z_5 (ATerm k_125 (ATerm), ATerm d_429, ATerm h_51, ATerm t)
{
  ATerm y_49 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_429, term_q_18);
  t = open_stream_0_0(t);
  y_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_49, h_51);
  t = k_125(t);
  t = fclose_0_0(t);
  t = h_51;
  return(t);
}
ATerm y_5 (ATerm z_50, ATerm a_51, ATerm t)
{
  ATerm z_49 = NULL;
  t = SSL_write_term_to_stream_baf(z_50, a_51);
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_49);
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
  ATerm z_27 = NULL,a_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_18 = ATgetArgument(t, 0);
      if(match_cons(r_18, sym_Stream_1))
        {
          z_27 = ATgetArgument(r_18, 0);
        }
      else
        _fail(t);
      a_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(z_27, a_28, t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      if(match_cons(s_18, sym_Stream_1))
        {
          o_28 = ATgetArgument(s_18, 0);
        }
      else
        _fail(t);
      p_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(o_28, p_28, t);
  l_28 = t;
  t = term_t_18;
  m_28 = t;
  t = l_28;
  if(match_cons(t, sym_Stream_1))
    {
      n_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_18, l_28);
  t = w_5(m_28, n_28, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,u_51 = NULL,v_51 = NULL,f_7 = NULL,e_7 = NULL;
  e_50 = t;
  if(match_cons(t, sym__2))
    {
      l_50 = ATgetArgument(t, 0);
      m_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_50);
  k_50 = t;
  t = l_50;
  {
    ATerm u_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((d_50 != NULL) && (d_50 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(t_3, t);
        ;
        LocalPopChoice(a_19);
      }
    else
      {
        t = u_18;
        t = term_b_19;
        d_50 = t;
      }
    if(((n_50 != NULL) && (n_50 != t)))
      _fail(t);
    else
      n_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_50, m_50);
    if(((e_7 != NULL) && (e_7 != t)))
      _fail(t);
    else
      e_7 = t;
    t = SSLsetAnnotations(e_7, k_50);
    t = e_50;
    if(match_cons(t, sym__2))
      {
        if(((g_50 != NULL) && (g_50 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          g_50 = ATgetArgument(t, 0);
        if(((h_50 != NULL) && (h_50 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          h_50 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_50);
    if(((f_50 != NULL) && (f_50 != t)))
      _fail(t);
    else
      f_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_50, (ATerm) ATmakeAppl(sym__2, not_null(d_50), h_50));
    if(((f_7 != NULL) && (f_7 != t)))
      _fail(t);
    else
      f_7 = t;
    t = SSLsetAnnotations(f_7, f_50);
    if(((j_50 != NULL) && (j_50 != t)))
      _fail(t);
    else
      j_50 = t;
    if(match_cons(t, sym__2))
      {
        if(((u_51 != NULL) && (u_51 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_51 = ATgetArgument(t, 0);
        if(((v_51 != NULL) && (v_51 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          v_51 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm c_19 = t;
      int d_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,g_7 = NULL;
          t = SSLgetAnnotations(j_50);
          o_27 = t;
          t = u_51;
          t = fetch_1_0(v_3, t);
          v_27 = t;
          t = v_51;
          if(match_cons(t, sym__2))
            {
              x_27 = ATgetArgument(t, 0);
              y_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_5(w_3, x_27, y_27, t);
          w_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_27, w_27);
          g_7 = t;
          t = SSLsetAnnotations(g_7, o_27);
          ;
          LocalPopChoice(d_19);
        }
      else
        {
          t = c_19;
          {
            ATerm f_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,h_7 = NULL;
            t = SSLgetAnnotations(j_50);
            f_28 = t;
            t = v_51;
            if(match_cons(t, sym__2))
              {
                j_28 = ATgetArgument(t, 0);
                k_28 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_5(y_3, j_28, k_28, t);
            i_28 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_51, i_28);
            h_7 = t;
            t = SSLsetAnnotations(h_7, f_28);
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
ATerm apply_strategy_1_0 (ATerm m_128 (ATerm), ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL;
  c_52 = t;
  t = dtime_0_0(t);
  t = c_52;
  t = m_128(t);
  b_52 = t;
  t = dtime_0_0(t);
  y_51 = t;
  t = b_52;
  if(match_cons(t, sym__2))
    {
      z_51 = ATgetArgument(t, 0);
      a_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_51), (ATerm) ATmakeAppl(sym_Runtime_1, y_51)), a_52);
  return(t);
}
ATerm x_52 (ATerm m_52, ATerm t)
{
  t = SSL_fclose(m_52);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL;
  v_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_52 = ATgetArgument(t, 0);
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_52);
            ;
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            t = x_52(v_52, t);
          }
      }
    }
  else
    {
      t = x_52(v_52, t);
    }
  return(t);
}
ATerm a_6 (ATerm f_51, ATerm t)
{
  t = SSL_read_term_from_stream(f_51);
  return(t);
}
ATerm b_6 (ATerm r_47, ATerm s_47, ATerm t)
{
  ATerm y_52 = NULL;
  t = SSL_fopen(r_47, s_47);
  y_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_52);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_52 = NULL;
  t = SSL_stdin_stream();
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_52);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_53 = NULL;
  t = SSL_stdout_stream();
  a_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_53);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_53 = NULL;
  t = SSL_stderr_stream();
  b_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_53);
  return(t);
}
ATerm m_54 (ATerm h_53, ATerm t)
{
  ATerm i_53 = NULL;
  t = SSL_explode_term(h_53);
  if(match_cons(t, sym__2))
    {
      ATerm g_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_19 = ATgetArgument(t, 1);
        if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
          {
            i_53 = ATgetFirst((ATermList) h_19);
            {
              ATerm i_19 = (ATerm) ATgetNext((ATermList) h_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_53;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_53;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_53;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_53;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm n_54 (ATerm l_53, ATerm m_53, ATerm n_53, ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,t_53 = NULL,m_7 = NULL;
  t = SSLgetAnnotations(n_53);
  q_53 = t;
  t = l_53;
  if(match_cons(t, sym_Path_1))
    {
      t_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_53, m_53);
  m_7 = t;
  t = SSLsetAnnotations(m_7, q_53);
  if(match_cons(t, sym__2))
    {
      o_53 = ATgetArgument(t, 0);
      p_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(o_53, p_53, t);
  return(t);
}
ATerm o_54 (ATerm v_53, ATerm w_53, ATerm b_54, ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL,h_54 = NULL,n_7 = NULL;
  t = SSLgetAnnotations(b_54);
  e_54 = t;
  t = SSL_is_string(v_53);
  h_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_54, w_53);
  n_7 = t;
  t = SSLsetAnnotations(n_7, e_54);
  if(match_cons(t, sym__2))
    {
      c_54 = ATgetArgument(t, 0);
      d_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(c_54, d_54, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      ATerm k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  j_54 = t;
  if(match_cons(t, sym__2))
    {
      k_54 = ATgetArgument(t, 0);
      l_54 = ATgetArgument(t, 1);
      {
        ATerm l_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_54(j_54, t);
            ;
            LocalPopChoice(n_19);
          }
        else
          {
            t = l_19;
            {
              ATerm o_19 = t;
              int u_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_54(k_54, l_54, j_54, t);
                  ;
                  LocalPopChoice(u_19);
                }
              else
                {
                  t = o_19;
                  t = o_54(k_54, l_54, j_54, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_54(j_54, t);
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_v_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_54 = NULL;
      s_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_54, term_y_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      t = debug_1_0(z_3, t);
      _fail(t);
    }
  q_54 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(r_54, t);
  p_54 = t;
  t = q_54;
  t = fclose_0_0(t);
  t = p_54;
  return(t);
}
ATerm fetch_1_0 (ATerm g_113 (ATerm), ATerm t)
{
  ATerm q_55 (ATerm t)
  {
    ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL;
    n_55 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_55 = ATgetFirst((ATermList) t);
        p_55 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_20 = t;
      int c_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_29 = NULL,o_29 = NULL,g_8 = NULL;
          t = SSLgetAnnotations(n_55);
          e_29 = t;
          t = o_55;
          t = g_113(t);
          o_29 = t;
          t = (ATerm) ATinsert(CheckATermList(p_55), o_29);
          g_8 = t;
          t = SSLsetAnnotations(g_8, e_29);
          ;
          LocalPopChoice(c_20);
        }
      else
        {
          t = b_20;
          {
            ATerm w_29 = NULL,z_29 = NULL,h_8 = NULL;
            t = SSLgetAnnotations(n_55);
            w_29 = t;
            t = p_55;
            t = q_55(t);
            z_29 = t;
            t = (ATerm) ATinsert(CheckATermList(z_29), o_55);
            h_8 = t;
            t = SSLsetAnnotations(h_8, w_29);
          }
        }
    }
    return(t);
  }
  t = q_55(t);
  return(t);
}
ATerm v_5 (ATerm s_42, ATerm u_42, ATerm t)
{
  t = SSL_strcat(s_42, u_42);
  return(t);
}
ATerm debug_1_0 (ATerm i_125 (ATerm), ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL;
  t_55 = t;
  t = i_125(t);
  u_55 = t;
  t = term_s_8;
  v_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_55), u_55);
  w_55 = t;
  t = SSL_printnl(v_55, w_55);
  t = t_55;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_56 = NULL;
      d_56 = t;
      t = SSL_is_string(d_56);
      ;
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(b_4, t);
            ;
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            {
              ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL;
              j_56 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_56 = ATgetArgument(t, 0);
                  t = k_56;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_56 = ATgetArgument(t, 0);
                      t = k_56;
                      {
                        ATerm k_20 = t;
                        int o_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(o_20);
                          }
                        else
                          {
                            t = k_20;
                            t = debug_1_0(e_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_56 = NULL,v_56 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_56 = ATgetArgument(t, 0);
                          l_56 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_56;
                      t = eval_config_0_0(t);
                      u_56 = t;
                      t = l_56;
                      t = eval_config_0_0(t);
                      v_56 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_56, v_56);
                      t = v_5(u_56, v_56, t);
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
  ATerm z_56 = NULL,a_57 = NULL;
  z_56 = t;
  t = term_p_20;
  a_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, z_56);
  t = e_6(a_57, z_56, t);
  {
    ATerm t_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_57 = NULL,g_57 = NULL;
        t = eval_config_0_0(t);
        c_57 = t;
        t = term_p_20;
        g_57 = t;
        t = SSL_table_put(g_57, z_56, c_57);
        t = c_57;
        ;
        LocalPopChoice(v_20);
      }
    else
      {
        t = t_20;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_126 (ATerm), ATerm t)
{
  ATerm k_57 = NULL;
  k_57 = t;
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_57 = NULL;
        t = term_a_21;
        t = get_config_0_0(t);
        m_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_57, term_b_21);
        t = geq_0_0(t);
        t = k_57;
        t = v_126(t);
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        t = k_57;
      }
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm p_57 = NULL;
  p_57 = t;
  if(match_string(t, "-k"))
    {
      t = p_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_57;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL;
  q_57 = t;
  t = SSL_string_to_int(q_57);
  r_57 = t;
  t = term_d_21;
  s_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_21, r_57);
  t = h_6(s_57, r_57, t);
  t = q_57;
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_4, h_4, n_4, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm u_57 = NULL;
  u_57 = t;
  if(match_string(t, "-S"))
    {
      t = u_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_57;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL;
  t = term_a_21;
  v_57 = t;
  t = term_g_21;
  w_57 = t;
  t = term_m_21;
  t = h_6(v_57, w_57, t);
  t = term_n_21;
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_o_21;
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
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL;
  x_57 = t;
  t = SSL_string_to_int(x_57);
  y_57 = t;
  t = term_a_21;
  z_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, y_57);
  t = h_6(z_57, y_57, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_57);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_p_21;
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
  ATerm a_58 = NULL,b_58 = NULL;
  t = term_q_21;
  a_58 = t;
  t = term_q_8;
  b_58 = t;
  t = term_r_21;
  t = h_6(a_58, b_58, t);
  t = term_v_21;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_4, r_4, s_4, t);
      ;
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_4, v_4, b_5, t);
            ;
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            t = Option_3_0(f_5, g_5, h_5, t);
          }
      }
    }
  return(t);
}
ATerm h_6 (ATerm g_52, ATerm h_52, ATerm t)
{
  ATerm c_58 = NULL;
  t = term_p_20;
  c_58 = t;
  t = SSL_table_put(c_58, g_52, h_52);
  t = (ATerm) ATmakeAppl(sym__3, term_p_20, g_52, h_52);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL;
      t = term_q_8;
      t = h_0(t);
      h_58 = t;
      t = term_i_22;
      i_58 = t;
      t = term_j_22;
      j_58 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_22, term_j_22, h_58);
      t = f_6(i_58, j_58, h_58, t);
      _fail(t);
    }
  else
    {
      ATerm m_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_58 = ATgetFirst((ATermList) t);
          g_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_58;
      t = d_0(t);
      t = term_q_8;
      t = g_0(t);
      m_58 = t;
      t = (ATerm) ATinsert(CheckATermList(g_58), m_58);
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm o_58 = NULL;
  o_58 = t;
  if(match_string(t, "-o"))
    {
      t = o_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_58;
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  p_58 = t;
  t = term_l_22;
  q_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_22, p_58);
  t = h_6(q_58, p_58, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_58);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_5, j_5, k_5, t);
  return(t);
}
ATerm f_6 (ATerm e_57, ATerm f_57, ATerm d_57, ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL;
  s_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_57, f_57);
  {
    ATerm s_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_22 = ATgetArgument(t, 0);
            ATerm z_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_57, f_57);
        t = e_6(e_57, f_57, t);
        ;
        LocalPopChoice(x_22);
      }
    else
      {
        t = s_22;
        t = (ATerm) ATempty;
      }
    t_58 = t;
    t = (ATerm) ATinsert(CheckATermList(t_58), d_57);
    u_58 = t;
    t = SSL_table_put(e_57, f_57, u_58);
    t = s_58;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL;
      t = term_q_8;
      t = m_0(t);
      h_59 = t;
      t = term_i_22;
      i_59 = t;
      t = term_j_22;
      j_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_22, term_j_22, h_59);
      t = f_6(i_59, j_59, h_59, t);
      _fail(t);
    }
  else
    {
      ATerm n_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_59 = ATgetFirst((ATermList) t);
          e_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_59;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_59 = ATgetFirst((ATermList) t);
          g_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_59;
      t = k_0(t);
      t = f_59;
      t = l_0(t);
      n_59 = t;
      t = (ATerm) ATinsert(CheckATermList(g_59), n_59);
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm p_59 = NULL;
  p_59 = t;
  if(match_string(t, "-i"))
    {
      t = p_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_59;
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL;
  q_59 = t;
  t = term_a_23;
  r_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_23, q_59);
  t = h_6(r_59, q_59, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_59);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_b_23;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_5, m_5, n_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_8;
  t = whoami_0_0(t);
  s_59 = t;
  t = term_s_8;
  u_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_23), s_59);
  v_59 = t;
  t = SSL_printnl(u_59, v_59);
  t = term_v_8;
  t_59 = t;
  t = SSL_exit(t_59);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_23;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_6 (ATerm d_45, ATerm e_45, ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_45, e_45);
      ;
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      t = SSL_addr(d_45, e_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL;
  x_59 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_59;
      t = z_118(t);
    }
  else
    {
      ATerm c_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_59 = ATgetFirst((ATermList) t);
          z_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_59;
      t = foldr_2_0(z_118, a_119, t);
      c_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_59, c_60);
      t = a_119(t);
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
  t = term_g_21;
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  if(match_cons(t, sym__2))
    {
      y_30 = ATgetArgument(t, 0);
      z_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(y_30, z_30, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_60 = NULL,p_30 = NULL,q_30 = NULL;
  t = times_0_0(t);
  q_30 = t;
  t = SSL_explode_term(q_30);
  if(match_cons(t, sym__2))
    {
      ATerm g_23 = ATgetArgument(t, 0);
      p_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_30;
  t = foldr_2_0(o_5, p_5, t);
  f_60 = t;
  t = SSL_TicksToSeconds(f_60);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL;
  q_60 = t;
  if(match_cons(t, sym__2))
    {
      r_60 = ATgetArgument(t, 0);
      s_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_60;
        if((r_60 != t))
          {
            _fail(t);
          }
        t = q_60;
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = (ATerm) ATmakeAppl(sym__2, r_60, s_60);
        {
          ATerm m_23 = t;
          int n_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_60, s_60);
              ;
              LocalPopChoice(n_23);
            }
          else
            {
              t = m_23;
              t = SSL_gtr(r_60, s_60);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_60, s_60);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_126 (ATerm), ATerm t)
{
  ATerm w_60 = NULL;
  w_60 = t;
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_60 = NULL;
        t = term_a_21;
        t = get_config_0_0(t);
        y_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_60, term_v_8);
        t = geq_0_0(t);
        t = w_60;
        t = u_126(t);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = w_60;
      }
  }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL,d_61 = NULL,e_61 = NULL;
  t = run_time_0_0(t);
  a_61 = t;
  t = term_q_8;
  t = whoami_0_0(t);
  b_61 = t;
  t = term_s_8;
  d_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_23), a_61), term_r_23), b_61);
  e_61 = t;
  t = SSL_printnl(d_61, e_61);
  t = (ATerm) ATmakeAppl(sym__2, term_s_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_23), a_61), term_r_23), b_61));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_61 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_21;
  f_61 = t;
  t = SSL_exit(f_61);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL;
  o_61 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_61;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_61 = ATgetArgument(t, 0);
          {
            ATerm u_31 = NULL,p_8 = NULL;
            t = SSLgetAnnotations(o_61);
            u_31 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_61);
            p_8 = t;
            t = SSLsetAnnotations(p_8, u_31);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_61;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_129 (ATerm), ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      t = fetch_1_0(u_5, t);
    }
  t = k_129(t);
  return(t);
}
ATerm map_1_0 (ATerm w_112 (ATerm), ATerm t)
{
  ATerm e_62 (ATerm t)
  {
    ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL;
    b_62 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_62;
      }
    else
      {
        ATerm c_32 = NULL,l_32 = NULL,m_32 = NULL,r_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_62 = ATgetFirst((ATermList) t);
            d_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_62);
        c_32 = t;
        t = c_62;
        t = w_112(t);
        l_32 = t;
        t = d_62;
        t = e_62(t);
        m_32 = t;
        t = (ATerm) ATinsert(CheckATermList(m_32), l_32);
        r_8 = t;
        t = SSLsetAnnotations(r_8, c_32);
      }
    return(t);
  }
  t = e_62(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_62 = ATgetFirst((ATermList) t);
      i_62 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_62 = NULL,w_62 = NULL;
        ATerm g_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_62)), not_null(w_62));
          return(t);
        }
        t = i_62;
        t = j_0(t);
        if(((v_62 != NULL) && (v_62 != t)))
          _fail(t);
        else
          v_62 = t;
        t = h_62;
        t = i_0(t);
        if(((w_62 != NULL) && (w_62 != t)))
          _fail(t);
        else
          w_62 = t;
        t = i_62;
        t = reverse_acc_2_0(i_0, g_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_8;
      t = j_0(t);
    }
  return(t);
}
ATerm e_6 (ATerm v_58, ATerm w_58, ATerm t)
{
  t = SSL_table_get(v_58, w_58);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL,b_9 = NULL;
  k_63 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_63);
  i_63 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_63);
  b_9 = t;
  t = SSLsetAnnotations(b_9, i_63);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm m_63 = NULL;
  m_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_63), term_w_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL;
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      t = fetch_1_0(j_6, t);
    }
  t = term_b_24;
  t = echo_0_0(t);
  t = term_i_22;
  g_63 = t;
  t = term_j_22;
  h_63 = t;
  t = term_c_24;
  t = e_6(g_63, h_63, t);
  t = reverse_acc_2_0(_id, m_6, t);
  t = map_1_0(p_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL;
  o_63 = t;
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_63;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_24 = ATgetFirst((ATermList) t);
                ATerm g_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_63;
          }
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        t = (ATerm) ATinsert(ATempty, o_63);
      }
    p_63 = t;
    t = term_b_19;
    q_63 = t;
    t = SSL_printnl(q_63, p_63);
    t = o_63;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_23;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL;
  t = term_h_24;
  u_63 = t;
  t = term_q_8;
  v_63 = t;
  t = term_i_24;
  t = h_6(u_63, v_63, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_j_24;
  return(t);
}
ATerm y_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL;
  t = term_h_24;
  y_63 = t;
  t = term_q_8;
  z_63 = t;
  t = term_i_24;
  t = h_6(y_63, z_63, t);
  t = term_k_24;
  w_63 = t;
  t = term_q_8;
  x_63 = t;
  t = term_l_24;
  t = h_6(w_63, x_63, t);
  t = term_s_24;
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_6, u_6, w_6, t);
      ;
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      t = Option_3_0(y_6, a_7, b_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,h_9 = NULL;
  f_64 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_64 = ATgetFirst((ATermList) t);
      c_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_64);
  a_64 = t;
  t = b_64;
  t = h_84(t);
  d_64 = t;
  t = c_64;
  t = i_84(t);
  e_64 = t;
  t = (ATerm) ATinsert(CheckATermList(e_64), d_64);
  h_9 = t;
  t = SSLsetAnnotations(h_9, a_64);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_131 (ATerm), ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,p_64 = NULL,q_64 = NULL,v_9 = NULL;
  k_64 = t;
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_25;
        t = n_131(t);
        ;
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
      }
    t = k_64;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_64 = ATgetFirst((ATermList) t);
        n_64 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_64);
    l_64 = t;
    t = term_d_23;
    q_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_23, m_64);
    t = h_6(q_64, m_64, t);
    t = n_64;
    {
      ATerm a_65 (ATerm t)
      {
        ATerm k_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_25 = t;
            int n_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_64 = NULL;
                t_64 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_64;
                ;
                LocalPopChoice(n_25);
              }
            else
              {
                t = m_25;
                t = n_131(t);
                t = Cons_2_0(_id, a_65, t);
              }
            ;
            LocalPopChoice(l_25);
          }
        else
          {
            t = k_25;
            {
              ATerm w_64 = NULL,x_64 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_64 = ATgetFirst((ATermList) t);
                  x_64 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_64), (ATerm) ATmakeAppl(sym_Undefined_1, w_64));
            }
          }
        return(t);
      }
      t = a_65(t);
      if(((p_64 != NULL) && (p_64 != t)))
        _fail(t);
      else
        p_64 = t;
      t = (ATerm) ATinsert(CheckATermList(p_64), (ATerm) ATmakeAppl(sym_Program_1, m_64));
      if(((v_9 != NULL) && (v_9 != t)))
        _fail(t);
      else
        v_9 = t;
      t = SSLsetAnnotations(v_9, l_64);
    }
  }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm m_65 = NULL;
  m_65 = t;
  if(match_string(t, "--help"))
    {
      t = m_65;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_65;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_65;
        }
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL;
  t = term_v_23;
  n_65 = t;
  t = term_q_8;
  o_65 = t;
  t = term_s_25;
  t = h_6(n_65, o_65, t);
  t = term_u_25;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm k_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_131 (ATerm), ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL;
  h_65 = t;
  t = term_i_22;
  j_65 = t;
  t = term_j_22;
  k_65 = t;
  t = (ATerm) ATempty;
  l_65 = t;
  t = SSL_table_put(j_65, k_65, l_65);
  t = h_65;
  {
    ATerm c_7 (ATerm t)
    {
      ATerm b_26 = t;
      int c_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_131(t);
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
                t = Option_3_0(d_7, i_7, j_7, t);
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
    t = parse_options_p__1_0(c_7, t);
    {
      ATerm f_26 = t;
      int g_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_65 = NULL;
          v_65 = t;
          {
            ATerm h_26 = t;
            int i_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_32 = NULL;
                t = v_65;
                {
                  ATerm j_26 = t;
                  int i_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_v_23;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(i_27);
                    }
                  else
                    {
                      t = j_26;
                      t = fetch_1_0(k_7, t);
                    }
                  t = v_65;
                  t = default_system_usage_0_0(t);
                  t = term_g_21;
                  x_32 = t;
                  t = SSL_exit(x_32);
                }
                ;
                LocalPopChoice(i_26);
              }
            else
              {
                t = h_26;
                {
                  ATerm b_33 = NULL;
                  t = term_h_24;
                  t = get_config_0_0(t);
                  t = v_65;
                  t = default_system_about_0_0(t);
                  t = term_g_21;
                  b_33 = t;
                  t = SSL_exit(b_33);
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
            ATerm j_27 = t;
            int k_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL;
                ATerm l_7 (ATerm t)
                {
                  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL,x_9 = NULL;
                  b_66 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      a_66 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_66);
                  z_65 = t;
                  t = a_66;
                  if(((f_65 != NULL) && (f_65 != t)))
                    _fail(t);
                  else
                    f_65 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, a_66);
                  x_9 = t;
                  t = SSLsetAnnotations(x_9, z_65);
                  return(t);
                }
                t = fetch_1_0(l_7, t);
                t = term_s_8;
                if(((x_65 != NULL) && (x_65 != t)))
                  _fail(t);
                else
                  x_65 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_65)), term_l_27);
                if(((y_65 != NULL) && (y_65 != t)))
                  _fail(t);
                else
                  y_65 = t;
                t = SSL_printnl(x_65, y_65);
                t = (ATerm) ATmakeAppl(sym__2, term_s_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_65)), term_l_27));
                t = default_system_usage_0_0(t);
                t = term_v_8;
                if(((w_65 != NULL) && (w_65 != t)))
                  _fail(t);
                else
                  w_65 = t;
                t = SSL_exit(w_65);
                ;
                LocalPopChoice(k_27);
              }
            else
              {
                t = j_27;
              }
          }
        }
      if(((g_65 != NULL) && (g_65 != t)))
        _fail(t);
      else
        g_65 = t;
      t = term_i_22;
      if(((i_65 != NULL) && (i_65 != t)))
        _fail(t);
      else
        i_65 = t;
      t = SSL_table_destroy(i_65);
      t = g_65;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_129 (ATerm), ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm p_129 (ATerm), ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL;
  t = parse_options_1_0(m_129, t);
  g_66 = t;
  t = term_m_27;
  j_66 = t;
  t = SSL_table_create(j_66);
  t = term_m_27;
  h_66 = t;
  t = term_n_27;
  i_66 = t;
  t = SSL_table_put(h_66, i_66, g_66);
  t = g_66;
  t = o_129(t);
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_129, t);
        ;
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        {
          ATerm r_27 = t;
          int s_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_129(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_27);
            }
          else
            {
              t = r_27;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = if_verbose2_1_0(u_7, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL;
  t = term_t_27;
  k_66 = t;
  t = term_q_8;
  l_66 = t;
  t = term_u_27;
  t = h_6(k_66, l_66, t);
  t = term_b_28;
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_c_28;
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL;
  m_66 = t;
  t = term_d_23;
  t = get_config_0_0(t);
  n_66 = t;
  t = term_s_8;
  o_66 = t;
  t = (ATerm) ATinsert(ATempty, n_66);
  p_66 = t;
  t = SSL_printnl(o_66, p_66);
  t = m_66;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm x_128 (ATerm), ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_128(t);
        ;
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        {
          ATerm g_28 = t;
          int h_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(h_28);
            }
          else
            {
              t = g_28;
              {
                ATerm q_28 = t;
                int r_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(r_28);
                  }
                else
                  {
                    t = q_28;
                    {
                      ATerm s_28 = t;
                      int t_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(r_7, s_7, t_7, t);
                          ;
                          LocalPopChoice(t_28);
                        }
                      else
                        {
                          t = s_28;
                          {
                            ATerm u_28 = t;
                            int w_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(w_28);
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
  ATerm q_7 (ATerm t)
  {
    ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
    r_66 = t;
    {
      ATerm x_28 = t;
      int y_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((q_66 != NULL) && (q_66 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_66 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_7, t);
          ;
          LocalPopChoice(y_28);
        }
      else
        {
          t = x_28;
          t = term_a_29;
          q_66 = t;
        }
      t = not_null(q_66);
      t = ReadFromFile_0_0(t);
      if(((s_66 != NULL) && (s_66 != t)))
        _fail(t);
      else
        s_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_66, s_66);
      t = apply_strategy_1_0(v_128, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(o_7, x_128, p_7, q_7, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_9 = NULL;
  y_66 = t;
  if(match_cons(t, sym__2))
    {
      v_66 = ATgetArgument(t, 0);
      w_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_66);
  u_66 = t;
  t = w_66;
  t = downup2_2_0(b_8, m_8, t);
  t = downup_1_0(o_8, t);
  x_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_66, x_66);
  z_9 = t;
  t = SSLsetAnnotations(z_9, u_66);
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = repeat_1_0(n_8, t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = repeat_1_0(Canon_0_0, t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Canon_0_0(t);
      ;
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      {
        ATerm d_29 = t;
        int f_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(f_29);
          }
        else
          {
            t = d_29;
            {
              ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
              z_66 = t;
              if(match_cons(t, sym_CallT_3))
                {
                  a_67 = ATgetArgument(t, 0);
                  b_67 = ATgetArgument(t, 1);
                  c_67 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = z_66;
              t = r_5(a_67, b_67, c_67, t);
            }
          }
      }
    }
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(w_7, _fail, default_usage_0_0, t);
  return(t);
}
