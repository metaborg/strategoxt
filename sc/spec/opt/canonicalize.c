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
ATerm term_u_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_z_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_i_41;
ATerm term_d_41;
ATerm term_y_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_y_38;
ATerm term_v_38;
ATerm term_n_38;
ATerm term_g_37;
ATerm term_d_37;
ATerm term_s_35;
ATerm term_p_35;
ATerm term_m_35;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_r_32;
ATerm term_h_31;
ATerm term_y_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_l_30;
ATerm term_o_26;
ATerm term_h_26;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_t_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
void init_constant_terms (void)
{
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Op_2, term_y_24, (ATerm) ATempty);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_ConstType_1, term_z_24);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_30);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_CallT_3, term_q_30, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_30);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_CallT_3, term_t_30, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_32);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_32);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_33);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_33);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_33);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_39);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym__3, term_n_38, term_p_41, term_u_19);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm r_8 (ATerm d_7, ATerm f_7, ATerm h_7, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm a_130 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm v_13 (ATerm);
ATerm w_13 (ATerm);
ATerm x_13 (ATerm);
ATerm z_13 (ATerm);
ATerm a_14 (ATerm);
ATerm b_14 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm c_14 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm y_127 (ATerm), ATerm);
ATerm downup_1_0 (ATerm y_128 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm o_130 (ATerm), ATerm);
ATerm CreateDef2_0_0 (ATerm);
ATerm SVar_1_0 (ATerm o_110 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm);
ATerm h_25 (ATerm n_20, ATerm o_20, ATerm p_20, ATerm q_20, ATerm);
ATerm i_25 (ATerm y_20, ATerm z_20, ATerm a_21, ATerm b_21, ATerm);
ATerm j_25 (ATerm h_21, ATerm i_21, ATerm j_21, ATerm k_21, ATerm);
ATerm k_25 (ATerm q_21, ATerm r_21, ATerm s_21, ATerm t_21, ATerm);
ATerm l_25 (ATerm r_22, ATerm s_22, ATerm t_22, ATerm u_22, ATerm);
ATerm j_14 (ATerm);
ATerm l_14 (ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm r_14 (ATerm);
ATerm s_14 (ATerm);
ATerm t_14 (ATerm);
ATerm u_14 (ATerm);
ATerm v_14 (ATerm);
ATerm w_14 (ATerm);
ATerm x_14 (ATerm);
ATerm y_14 (ATerm);
ATerm z_14 (ATerm);
ATerm a_15 (ATerm);
ATerm b_15 (ATerm);
ATerm Canon_0_0 (ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm f_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm k_15 (ATerm);
ATerm LiftCallArgs_0_0 (ATerm);
ATerm genzip_4_0 (ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t_136 (ATerm), ATerm u_136 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm p_26 (ATerm j_26, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm f_107 (ATerm), ATerm);
ATerm l_15 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm o_15 (ATerm);
ATerm p_15 (ATerm);
ATerm q_15 (ATerm);
ATerm r_15 (ATerm);
ATerm s_15 (ATerm);
ATerm t_15 (ATerm);
ATerm u_15 (ATerm);
ATerm v_15 (ATerm);
ATerm w_15 (ATerm);
ATerm x_15 (ATerm);
ATerm y_15 (ATerm);
ATerm z_15 (ATerm);
ATerm d_16 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm downup2_2_0 (ATerm b_129 (ATerm), ATerm c_129 (ATerm), ATerm);
ATerm _2_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm u_146 (ATerm), ATerm);
ATerm i_16 (ATerm);
ATerm j_16 (ATerm);
ATerm k_16 (ATerm);
ATerm l_16 (ATerm);
ATerm m_16 (ATerm);
ATerm n_16 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm w_149 (ATerm), ATerm);
ATerm m_30 (ATerm g_30, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_16 (ATerm);
ATerm p_16 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm y_134 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm e_135 (ATerm), ATerm);
ATerm r_16 (ATerm);
ATerm s_16 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm u_16 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm f_148 (ATerm), ATerm);
ATerm v_16 (ATerm);
ATerm w_16 (ATerm);
ATerm x_16 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm y_16 (ATerm);
ATerm z_16 (ATerm);
ATerm a_17 (ATerm);
ATerm b_17 (ATerm);
ATerm d_17 (ATerm);
ATerm f_17 (ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm i_17 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm m_17 (ATerm);
ATerm n_17 (ATerm);
ATerm o_17 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm p_140 (ATerm), ATerm q_140 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_17 (ATerm);
ATerm s_17 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_148 (ATerm), ATerm);
ATerm t_17 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm u_17 (ATerm);
ATerm need_help_1_0 (ATerm u_150 (ATerm), ATerm);
ATerm map_1_0 (ATerm n_134 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm p_114 (ATerm), ATerm);
ATerm w_17 (ATerm);
ATerm z_17 (ATerm);
ATerm d_18 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm q_114 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm e_18 (ATerm);
ATerm f_18 (ATerm);
ATerm k_18 (ATerm);
ATerm l_18 (ATerm);
ATerm n_18 (ATerm);
ATerm v_18 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm);
ATerm w_18 (ATerm);
ATerm parse_options_p__1_0 (ATerm x_152 (ATerm), ATerm);
ATerm a_19 (ATerm);
ATerm b_19 (ATerm);
ATerm c_19 (ATerm);
ATerm d_19 (ATerm);
ATerm parse_options_1_0 (ATerm w_152 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm w_150 (ATerm), ATerm x_150 (ATerm), ATerm y_150 (ATerm), ATerm z_150 (ATerm), ATerm);
ATerm h_19 (ATerm);
ATerm j_19 (ATerm);
ATerm k_19 (ATerm);
ATerm l_19 (ATerm);
ATerm m_19 (ATerm);
ATerm iowrap_3_0 (ATerm f_150 (ATerm), ATerm g_150 (ATerm), ATerm h_150 (ATerm), ATerm);
ATerm o_19 (ATerm);
ATerm p_19 (ATerm);
ATerm q_19 (ATerm);
ATerm r_19 (ATerm);
ATerm s_19 (ATerm);
ATerm t_19 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,h_0 = NULL,j_0 = NULL,m_0 = NULL,o_0 = NULL,r_0 = NULL,s_0 = NULL;
  b_0 = t;
  t = term_u_19;
  t = whoami_0_0(t);
  f_0 = t;
  m_0 = t;
  t = term_v_19;
  h_0 = t;
  t = m_0;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_19), f_0), term_w_19);
  j_0 = t;
  t = SSL_printnl(h_0, j_0);
  s_0 = t;
  t = term_y_19;
  r_0 = t;
  t = SSL_exit(r_0);
  t = b_0;
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,t_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL;
  if(match_cons(t, sym__2))
    {
      t_0 = ATgetArgument(t, 0);
      v_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_0;
  if(match_cons(t, sym_Build_1))
    {
      ATerm z_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_0;
  if(match_cons(t, sym_Where_1))
    {
      w_0 = ATgetArgument(t, 0);
      t = w_0;
      if(match_cons(t, sym_Prim_2))
        {
          p_0 = ATgetArgument(t, 0);
          q_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, p_0, q_0);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          w_0 = ATgetArgument(t, 0);
          x_0 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, w_0, x_0);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              w_0 = ATgetArgument(t, 0);
              x_0 = ATgetArgument(t, 1);
              y_0 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, w_0, x_0, y_0);
        }
    }
  return(t);
}
ATerm j_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_20 = ATgetArgument(t, 0);
      if(((ATgetType(a_20) != AT_LIST) || !(ATisEmpty(a_20))))
        _fail(t);
      {
        ATerm b_20 = ATgetArgument(t, 1);
        if(((ATgetType(b_20) != AT_LIST) || !(ATisEmpty(b_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm n_1 = NULL,r_1 = NULL,w_1 = NULL,c_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_20 = ATgetArgument(t, 0);
      if(((ATgetType(c_20) == AT_LIST) && !(ATisEmpty(c_20))))
        {
          n_1 = ATgetFirst((ATermList) c_20);
          w_1 = (ATerm) ATgetNext((ATermList) c_20);
        }
      else
        _fail(t);
      {
        ATerm d_20 = ATgetArgument(t, 1);
        if(((ATgetType(d_20) == AT_LIST) && !(ATisEmpty(d_20))))
          {
            r_1 = ATgetFirst((ATermList) d_20);
            c_2 = (ATerm) ATgetNext((ATermList) d_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_1, r_1), (ATerm) ATmakeAppl(sym__2, w_1, c_2));
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm d_2 = NULL,i_2 = NULL;
  if(match_cons(t, sym__2))
    {
      d_2 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_2), d_2);
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm m_2 = NULL,p_2 = NULL;
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      p_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_2), (ATerm) ATmakeAppl(sym_Match_1, p_2));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm i_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_20 = ATgetArgument(t, 0);
      if(match_cons(e_20, sym_Build_1))
        {
          ATerm g_20 = ATgetArgument(e_20, 0);
          if(match_cons(g_20, sym_Op_2))
            {
              k_1 = ATgetArgument(g_20, 0);
              i_1 = ATgetArgument(g_20, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm f_20 = ATgetArgument(t, 1);
        if(match_cons(f_20, sym_Match_1))
          {
            ATerm h_20 = ATgetArgument(f_20, 0);
            if(match_cons(h_20, sym_Op_2))
              {
                if((k_1 != ATgetArgument(h_20, 0)))
                  {
                    _fail(ATgetArgument(h_20, 0));
                  }
                l_1 = ATgetArgument(h_20, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, i_1, l_1);
  t = genzip_4_0(j_13, k_13, l_13, m_13, t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_1), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, k_1, i_1)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm q_2 = NULL,s_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_20 = ATgetArgument(t, 0);
      if(match_cons(i_20, sym_Build_1))
        {
          ATerm k_20 = ATgetArgument(i_20, 0);
          if(match_cons(k_20, sym_Op_2))
            {
              q_2 = ATgetArgument(k_20, 0);
              {
                ATerm l_20 = ATgetArgument(k_20, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm j_20 = ATgetArgument(t, 1);
        if(match_cons(j_20, sym_Match_1))
          {
            ATerm m_20 = ATgetArgument(j_20, 0);
            if(match_cons(m_20, sym_Op_2))
              {
                s_2 = ATgetArgument(m_20, 0);
                {
                  ATerm r_20 = ATgetArgument(m_20, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, q_2, s_2);
  {
    ATerm s_20 = t;
    if((PushChoice() == 0))
      {
        ATerm t_2 = NULL;
        if(match_cons(t, sym__2))
          {
            t_2 = ATgetArgument(t, 0);
            if((t_2 != ATgetArgument(t, 1)))
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
        t = s_20;
      }
    t = term_t_20;
  }
  return(t);
}
ATerm r_8 (ATerm d_7, ATerm f_7, ATerm h_7, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, d_7, f_7);
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        {
          ATerm x_20 = t;
          int c_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(c_21);
            }
          else
            {
              t = x_20;
              {
                ATerm d_21 = t;
                int e_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_7 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm g_21 = ATgetArgument(t, 0);
                        ATerm l_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = d_7;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm m_21 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = f_7;
                    if(match_cons(t, sym_Build_1))
                      {
                        r_7 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Build_1, r_7);
                    ;
                    LocalPopChoice(e_21);
                  }
                else
                  {
                    t = d_21;
                    {
                      ATerm n_21 = t;
                      int p_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(p_21);
                        }
                      else
                        {
                          t = n_21;
                          {
                            ATerm v_7 = NULL,w_7 = NULL,y_7 = NULL,z_7 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm u_21 = ATgetArgument(t, 0);
                                ATerm v_21 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = d_7;
                            if(match_cons(t, sym_Match_1))
                              {
                                v_7 = ATgetArgument(t, 0);
                                t = f_7;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    y_7 = ATgetArgument(t, 0);
                                    t = y_7;
                                    if((v_7 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, v_7);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        y_7 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = v_7;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        w_7 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = y_7;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        z_7 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = z_7;
                                    if((w_7 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_7));
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    v_7 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = f_7;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    y_7 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = y_7;
                                if((v_7 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, v_7);
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
  ATerm f_8 = NULL,h_8 = NULL,j_8 = NULL,l_8 = NULL,m_8 = NULL;
  j_8 = t;
  if(match_cons(t, sym_Seq_2))
    {
      l_8 = ATgetArgument(t, 0);
      m_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_8;
  if(match_cons(t, sym_Seq_2))
    {
      f_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
      {
        ATerm w_21 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, l_8, f_8);
            {
              ATerm h_22 = t;
              int o_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(o_22);
                }
              else
                {
                  t = h_22;
                  {
                    ATerm p_22 = t;
                    int q_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(q_22);
                      }
                    else
                      {
                        t = p_22;
                        {
                          ATerm v_22 = t;
                          int w_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_1 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm x_22 = ATgetArgument(t, 0);
                                  ATerm h_23 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = l_8;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm i_23 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = f_8;
                              if(match_cons(t, sym_Build_1))
                                {
                                  t_1 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, t_1);
                              ;
                              LocalPopChoice(w_22);
                            }
                          else
                            {
                              t = v_22;
                              {
                                ATerm p_23 = t;
                                int q_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(q_23);
                                  }
                                else
                                  {
                                    t = p_23;
                                    {
                                      ATerm y_1 = NULL,z_1 = NULL,b_2 = NULL,e_2 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm b_24 = ATgetArgument(t, 0);
                                          ATerm c_24 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = l_8;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          y_1 = ATgetArgument(t, 0);
                                          t = f_8;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              b_2 = ATgetArgument(t, 0);
                                              t = b_2;
                                              if((y_1 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, y_1);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  b_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = y_1;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  z_1 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = b_2;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  e_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = e_2;
                                              if((z_1 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_1));
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              y_1 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = f_8;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              b_2 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = b_2;
                                          if((y_1 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, y_1);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              j_1 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, j_1, h_8);
            }
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = w_21;
            t = r_8(l_8, m_8, j_8, t);
          }
      }
    }
  else
    {
      t = r_8(l_8, m_8, j_8, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm a_130 (ATerm), ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_130(t);
        ;
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
        t = SRTS_one(t_8, t);
      }
    return(t);
  }
  t = t_8(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm g_24 = ATgetArgument(t, 0);
      if(((ATgetType(g_24) == AT_LIST) && !(ATisEmpty(g_24))))
        {
          ATerm i_24 = ATgetFirst((ATermList) g_24);
          if(match_cons(i_24, sym_SDefT_4))
            {
              v_8 = ATgetArgument(i_24, 0);
              {
                ATerm k_24 = ATgetArgument(i_24, 1);
                if(((ATgetType(k_24) != AT_LIST) || !(ATisEmpty(k_24))))
                  _fail(t);
              }
              {
                ATerm l_24 = ATgetArgument(i_24, 2);
                if(((ATgetType(l_24) != AT_LIST) || !(ATisEmpty(l_24))))
                  _fail(t);
              }
              u_8 = ATgetArgument(i_24, 3);
            }
          else
            _fail(t);
          {
            ATerm j_24 = (ATerm) ATgetNext((ATermList) g_24);
            if(((ATgetType(j_24) != AT_LIST) || !(ATisEmpty(j_24))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm h_24 = ATgetArgument(t, 1);
        if(match_cons(h_24, sym_CallT_3))
          {
            ATerm m_24 = ATgetArgument(h_24, 0);
            if(match_cons(m_24, sym_SVar_1))
              {
                if((v_8 != ATgetArgument(m_24, 0)))
                  {
                    _fail(ATgetArgument(m_24, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm o_24 = ATgetArgument(h_24, 1);
              if(((ATgetType(o_24) != AT_LIST) || !(ATisEmpty(o_24))))
                _fail(t);
            }
            {
              ATerm p_24 = ATgetArgument(h_24, 2);
              if(((ATgetType(p_24) != AT_LIST) || !(ATisEmpty(p_24))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_8;
  {
    ATerm q_24 = t;
    if((PushChoice() == 0))
      {
        ATerm p_13 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm r_24 = ATgetArgument(t, 0);
              if(match_cons(r_24, sym_SVar_1))
                {
                  if((v_8 != ATgetArgument(r_24, 0)))
                    {
                      _fail(ATgetArgument(r_24, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm s_24 = ATgetArgument(t, 1);
                if(((ATgetType(s_24) != AT_LIST) || !(ATisEmpty(s_24))))
                  _fail(t);
              }
              {
                ATerm t_24 = ATgetArgument(t, 2);
                if(((ATgetType(t_24) != AT_LIST) || !(ATisEmpty(t_24))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(p_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_24;
      }
    t = u_8;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,n_9 = NULL,o_9 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      n_9 = ATgetArgument(t, 0);
      t = n_9;
      if(match_cons(t, sym_Seq_2))
        {
          l_9 = ATgetArgument(t, 0);
          h_9 = ATgetArgument(t, 1);
          t = l_9;
          if(match_cons(t, sym_Where_1))
            {
              g_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_9;
          if(match_cons(t, sym_Seq_2))
            {
              i_9 = ATgetArgument(t, 0);
              k_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_9;
          if(match_cons(t, sym_Build_1))
            {
              j_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, g_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_9), k_9)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              l_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, l_9);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          n_9 = ATgetArgument(t, 0);
          t = n_9;
          if(match_cons(t, sym_Test_1))
            {
              l_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, l_9);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              n_9 = ATgetArgument(t, 0);
              t = n_9;
              if(match_cons(t, sym_Not_1))
                {
                  l_9 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, l_9);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  n_9 = ATgetArgument(t, 0);
                  o_9 = ATgetArgument(t, 1);
                  t = o_9;
                  if((n_9 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      n_9 = ATgetArgument(t, 0);
                      o_9 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = o_9;
                  if((n_9 != t))
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
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      m_10 = ATgetArgument(t, 0);
      p_10 = ATgetArgument(t, 1);
      t = m_10;
      if(match_cons(t, sym_LChoice_2))
        {
          n_10 = ATgetArgument(t, 0);
          o_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, n_10, (ATerm) ATmakeAppl(sym_LChoice_2, o_10, p_10));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          m_10 = ATgetArgument(t, 0);
          p_10 = ATgetArgument(t, 1);
          t = m_10;
          if(match_cons(t, sym_Seq_2))
            {
              n_10 = ATgetArgument(t, 0);
              o_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, (ATerm) ATmakeAppl(sym_Seq_2, o_10, p_10));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              m_10 = ATgetArgument(t, 0);
              p_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_10;
          if(match_cons(t, sym_Choice_2))
            {
              n_10 = ATgetArgument(t, 0);
              o_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, n_10, (ATerm) ATmakeAppl(sym_Choice_2, o_10, p_10));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm s_13 (ATerm t)
        {
          ATerm w_24 = t;
          int x_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(x_24);
            }
          else
            {
              t = w_24;
            }
          return(t);
        }
        t = Cons_2_0(_id, s_13, t);
      }
      ;
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
      {
        ATerm u_13 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, u_13, t);
      }
    }
  return(t);
}
ATerm v_13 (ATerm t)
{
  ATerm z_12 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_12, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_25), term_a_25));
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_13 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, b_13, term_a_25);
      ;
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
    }
  return(t);
}
ATerm x_13 (ATerm t)
{
  ATerm r_13 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_13, term_a_25);
  return(t);
}
ATerm z_13 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_13 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, t_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_25), term_a_25));
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
    }
  return(t);
}
ATerm a_14 (ATerm t)
{
  ATerm h_14 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_25), term_a_25));
  return(t);
}
ATerm b_14 (ATerm t)
{
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_14 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, n_14, term_a_25);
      ;
      LocalPopChoice(g_25);
    }
  else
    {
      t = f_25;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,a_12 = NULL,b_12 = NULL,d_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      d_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, d_12, e_12);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          d_12 = ATgetArgument(t, 0);
          t = d_12;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_11 = ATgetFirst((ATermList) t);
              v_11 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, u_11, (ATerm) ATmakeAppl(sym_LChoices_1, v_11));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_t_20;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              d_12 = ATgetArgument(t, 0);
              t = d_12;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_11 = ATgetFirst((ATermList) t);
                  v_11 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, u_11, (ATerm) ATmakeAppl(sym_Choices_1, v_11));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_t_20;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  d_12 = ATgetArgument(t, 0);
                  t = d_12;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_11 = ATgetFirst((ATermList) t);
                      v_11 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_11, (ATerm) ATmakeAppl(sym_Seqs_1, v_11));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_h_26;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_12 = ATgetArgument(t, 0);
                      e_12 = ATgetArgument(t, 1);
                      b_12 = ATgetArgument(t, 2);
                      a_12 = ATgetArgument(t, 3);
                      {
                        ATerm t_12 = NULL,u_12 = NULL;
                        t = e_12;
                        t = map1_1_0(v_13, t);
                        t_12 = t;
                        t = b_12;
                        t = map1_1_0(w_13, t);
                        u_12 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, d_12, t_12, u_12, a_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          d_12 = ATgetArgument(t, 0);
                          e_12 = ATgetArgument(t, 1);
                          b_12 = ATgetArgument(t, 2);
                          a_12 = ATgetArgument(t, 3);
                          {
                            ATerm i_26 = t;
                            int k_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm n_13 = NULL,o_13 = NULL;
                                t = b_12;
                                t = map1_1_0(x_13, t);
                                n_13 = t;
                                t = e_12;
                                t = map_1_0(z_13, t);
                                o_13 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, d_12, o_13, n_13, a_12);
                                ;
                                LocalPopChoice(k_26);
                              }
                            else
                              {
                                t = i_26;
                                {
                                  ATerm f_14 = NULL,g_14 = NULL;
                                  t = e_12;
                                  t = map1_1_0(a_14, t);
                                  f_14 = t;
                                  t = b_12;
                                  t = map_1_0(b_14, t);
                                  g_14 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, d_12, f_14, g_14, a_12);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              d_12 = ATgetArgument(t, 0);
                              e_12 = ATgetArgument(t, 1);
                              b_12 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, e_12, (ATerm) ATmakeAppl(sym_Op_2, term_o_26, (ATerm) ATinsert(ATinsert(ATempty, b_12), d_12)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  d_12 = ATgetArgument(t, 0);
                                  e_12 = ATgetArgument(t, 1);
                                  b_12 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, b_12)), d_12), (ATerm) ATmakeAppl(sym_Build_1, e_12)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      d_12 = ATgetArgument(t, 0);
                                      e_12 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, (ATerm) ATmakeAppl(sym_Match_1, e_12));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          d_12 = ATgetArgument(t, 0);
                                          e_12 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_12), e_12);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              d_12 = ATgetArgument(t, 0);
                                              e_12 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_12), d_12);
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
ATerm c_14 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      a_16 = ATgetArgument(t, 0);
      t = a_16;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_t_20;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          a_16 = ATgetArgument(t, 0);
          t = a_16;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_h_26;
        }
      else
        {
          ATerm u_26 = t;
          int v_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  a_16 = ATgetArgument(t, 0);
                  {
                    ATerm w_26 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(v_26);
              t = a_16;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_t_20;
            }
          else
            {
              t = u_26;
              {
                ATerm x_26 = t;
                int y_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm z_26 = ATgetArgument(t, 0);
                        b_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(y_26);
                    t = b_16;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_t_20;
                  }
                else
                  {
                    t = x_26;
                    {
                      ATerm a_27 = t;
                      int b_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm c_27 = ATgetArgument(t, 0);
                              b_16 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(b_27);
                          t = b_16;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_t_20;
                        }
                      else
                        {
                          t = a_27;
                          if(match_cons(t, sym_Some_1))
                            {
                              a_16 = ATgetArgument(t, 0);
                              t = a_16;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_t_20;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  a_16 = ATgetArgument(t, 0);
                                  t = a_16;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_t_20;
                                }
                              else
                                {
                                  ATerm d_27 = t;
                                  int e_27 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm f_27 = ATgetArgument(t, 0);
                                          b_16 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(e_27);
                                      t = b_16;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_t_20;
                                    }
                                  else
                                    {
                                      t = d_27;
                                      {
                                        ATerm g_27 = t;
                                        int h_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm i_27 = ATgetArgument(t, 0);
                                                b_16 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(h_27);
                                            t = b_16;
                                            t = fetch_1_0(c_14, t);
                                            t = term_t_20;
                                          }
                                        else
                                          {
                                            t = g_27;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                a_16 = ATgetArgument(t, 0);
                                                b_16 = ATgetArgument(t, 1);
                                                t = b_16;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = a_16;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm j_27 = t;
                                                        int k_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = b_16;
                                                            ;
                                                            LocalPopChoice(k_27);
                                                          }
                                                        else
                                                          {
                                                            t = j_27;
                                                            t = a_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = a_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = a_16;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = b_16;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    a_16 = ATgetArgument(t, 0);
                                                    b_16 = ATgetArgument(t, 1);
                                                    t = b_16;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = a_16;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm l_27 = t;
                                                            int m_27 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = b_16;
                                                                ;
                                                                LocalPopChoice(m_27);
                                                              }
                                                            else
                                                              {
                                                                t = l_27;
                                                                t = a_16;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = a_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = a_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = b_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        a_16 = ATgetArgument(t, 0);
                                                        t = a_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = term_t_20;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            a_16 = ATgetArgument(t, 0);
                                                            b_16 = ATgetArgument(t, 1);
                                                            c_16 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = c_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_16, b_16);
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
  ATerm c_17 = NULL,e_17 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      e_17 = ATgetArgument(t, 0);
      t = e_17;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_h_26;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          e_17 = ATgetArgument(t, 0);
          t = e_17;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_t_20;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              e_17 = ATgetArgument(t, 0);
              c_17 = ATgetArgument(t, 1);
              t = c_17;
              if(match_cons(t, sym_Id_0))
                {
                  t = e_17;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm n_27 = t;
                      int o_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = c_17;
                          ;
                          LocalPopChoice(o_27);
                        }
                      else
                        {
                          t = n_27;
                          t = e_17;
                        }
                    }
                  else
                    {
                      t = e_17;
                    }
                }
              else
                {
                  t = e_17;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = c_17;
                }
            }
          else
            {
              ATerm p_27 = t;
              int q_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      e_17 = ATgetArgument(t, 0);
                      {
                        ATerm r_27 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_27);
                  t = e_17;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_h_26;
                }
              else
                {
                  t = p_27;
                  {
                    ATerm s_27 = t;
                    int t_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm u_27 = ATgetArgument(t, 0);
                            c_17 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(t_27);
                        t = c_17;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_h_26;
                      }
                    else
                      {
                        t = s_27;
                        {
                          ATerm v_27 = t;
                          int w_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm x_27 = ATgetArgument(t, 0);
                                  c_17 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(w_27);
                              t = c_17;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_h_26;
                            }
                          else
                            {
                              t = v_27;
                              if(match_cons(t, sym_All_1))
                                {
                                  e_17 = ATgetArgument(t, 0);
                                  t = e_17;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_h_26;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      e_17 = ATgetArgument(t, 0);
                                      t = e_17;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_h_26;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          e_17 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = e_17;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_h_26;
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
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(z_27);
    }
  else
    {
      t = y_27;
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            {
              ATerm c_28 = t;
              int d_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
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
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(f_28);
                      }
                    else
                      {
                        t = e_28;
                        {
                          ATerm g_28 = t;
                          int h_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(h_28);
                            }
                          else
                            {
                              t = g_28;
                              {
                                ATerm i_28 = t;
                                int j_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_17 = NULL,q_17 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        p_17 = ATgetArgument(t, 0);
                                        q_17 = ATgetArgument(t, 1);
                                        t = p_17;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = q_17;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            p_17 = ATgetArgument(t, 0);
                                            q_17 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = p_17;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = q_17;
                                      }
                                    ;
                                    LocalPopChoice(j_28);
                                  }
                                else
                                  {
                                    t = i_28;
                                    {
                                      ATerm k_28 = t;
                                      int l_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(l_28);
                                        }
                                      else
                                        {
                                          t = k_28;
                                          {
                                            ATerm m_28 = t;
                                            int n_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(n_28);
                                              }
                                            else
                                              {
                                                t = m_28;
                                                {
                                                  ATerm x_17 = NULL,y_17 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      x_17 = ATgetArgument(t, 0);
                                                      y_17 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = x_17;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = y_17;
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
ATerm repeat_1_0 (ATerm y_127 (ATerm), ATerm t)
{
  ATerm a_18 (ATerm t)
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_127(t);
        t = a_18(t);
        ;
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
      }
    return(t);
  }
  t = a_18(t);
  return(t);
}
ATerm downup_1_0 (ATerm y_128 (ATerm), ATerm t)
{
  t = y_128(t);
  {
    ATerm d_14 (ATerm t)
    {
      t = downup_1_0(y_128, t);
      return(t);
    }
    t = SRTS_all(d_14, t);
    t = y_128(t);
  }
  return(t);
}
ATerm alltd_1_0 (ATerm o_130 (ATerm), ATerm t)
{
  ATerm x_18 (ATerm t)
  {
    ATerm u_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_130(t);
        ;
        LocalPopChoice(v_28);
      }
    else
      {
        t = u_28;
        t = SRTS_all(x_18, t);
      }
    return(t);
  }
  t = x_18(t);
  return(t);
}
ATerm CreateDef2_0_0 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL;
  b_18 = t;
  t = new_0_0(t);
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_18), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, c_18, (ATerm)ATempty, (ATerm)ATempty, b_18)));
  return(t);
}
ATerm SVar_1_0 (ATerm o_110 (ATerm), ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,u_0 = NULL,z_0 = NULL;
  j_18 = t;
  if(match_cons(t, sym_SVar_1))
    {
      h_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_18);
  g_18 = t;
  t = h_18;
  t = o_110(t);
  i_18 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, i_18);
  u_0 = t;
  t = SSLsetAnnotations(u_0, g_18);
  return(t);
}
ATerm CallT_3_0 (ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm t)
{
  ATerm m_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,a_1 = NULL,b_1 = NULL;
  u_18 = t;
  if(match_cons(t, sym_CallT_3))
    {
      o_18 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
      q_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_18);
  m_18 = t;
  t = o_18;
  t = t_110(t);
  r_18 = t;
  t = p_18;
  t = u_110(t);
  s_18 = t;
  t = q_18;
  t = v_110(t);
  t_18 = t;
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, r_18, s_18, t_18);
  a_1 = t;
  t = SSLsetAnnotations(a_1, m_18);
  return(t);
}
ATerm h_25 (ATerm n_20, ATerm o_20, ATerm p_20, ATerm q_20, ATerm t)
{
  ATerm u_20 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_20, o_20);
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_14 (ATerm t)
        {
          t = o_20;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm h_29 = ATgetArgument(t, 0);
            ATerm i_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_20;
        t = at_end_1_0(e_14, t);
        ;
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        {
          ATerm v_2 = NULL,c_1 = NULL,d_1 = NULL;
          d_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_20, o_20);
          c_1 = t;
          t = SSL_explode_term(c_1);
          if(match_cons(t, sym__2))
            {
              ATerm x_29 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_29) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              v_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_2;
          t = concat_0_0(t);
        }
      }
    u_20 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, u_20, p_20);
  }
  return(t);
}
ATerm i_25 (ATerm y_20, ATerm z_20, ATerm a_21, ATerm b_21, ATerm t)
{
  ATerm f_21 = NULL;
  t = z_20;
  {
    ATerm m_25 (ATerm t)
    {
      ATerm y_29 = t;
      int z_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_14 (ATerm t)
          {
            ATerm a_30 = t;
            int b_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = m_25(t);
                ;
                LocalPopChoice(b_30);
              }
            else
              {
                t = a_30;
              }
            return(t);
          }
          t = Cons_2_0(j_14, k_14, t);
          ;
          LocalPopChoice(z_29);
        }
      else
        {
          t = y_29;
          t = Cons_2_0(_id, m_25, t);
        }
      return(t);
    }
    t = m_25(t);
    f_21 = t;
    t = (ATerm) ATmakeAppl(sym_PrimT_3, y_20, f_21, a_21);
  }
  return(t);
}
ATerm j_25 (ATerm h_21, ATerm i_21, ATerm j_21, ATerm k_21, ATerm t)
{
  ATerm o_21 = NULL;
  t = i_21;
  {
    ATerm n_25 (ATerm t)
    {
      ATerm c_30 = t;
      int d_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_14 (ATerm t)
          {
            ATerm e_30 = t;
            int f_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = n_25(t);
                ;
                LocalPopChoice(f_30);
              }
            else
              {
                t = e_30;
              }
            return(t);
          }
          t = Cons_2_0(l_14, m_14, t);
          ;
          LocalPopChoice(d_30);
        }
      else
        {
          t = c_30;
          t = Cons_2_0(_id, n_25, t);
        }
      return(t);
    }
    t = n_25(t);
    o_21 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, h_21, o_21, j_21);
  }
  return(t);
}
ATerm k_25 (ATerm q_21, ATerm r_21, ATerm s_21, ATerm t_21, ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  t = r_21;
  t = genzip_4_0(o_14, p_14, q_14, r_14, t);
  if(match_cons(t, sym__2))
    {
      x_21 = ATgetArgument(t, 0);
      y_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_21;
  t = concat_0_0(t);
  z_21 = t;
  {
    ATerm h_30 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_30;
      }
    t = (ATerm) ATmakeAppl(sym_Let_2, z_21, (ATerm) ATmakeAppl(sym_PrimT_3, q_21, x_21, s_21));
  }
  return(t);
}
ATerm l_25 (ATerm r_22, ATerm s_22, ATerm t_22, ATerm u_22, ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  t = s_22;
  t = genzip_4_0(v_14, w_14, x_14, y_14, t);
  if(match_cons(t, sym__2))
    {
      y_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_22;
  t = concat_0_0(t);
  a_23 = t;
  {
    ATerm i_30 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_30;
      }
    t = (ATerm) ATmakeAppl(sym_Let_2, a_23, (ATerm) ATmakeAppl(sym_CallT_3, r_22, y_22, t_22));
  }
  return(t);
}
ATerm j_14 (ATerm t)
{
  if(match_cons(t, sym_Id_0))
    {
      t = term_r_30;
    }
  else
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_y_30;
    }
  return(t);
}
ATerm l_14 (ATerm t)
{
  if(match_cons(t, sym_Id_0))
    {
      t = term_r_30;
    }
  else
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_y_30;
    }
  return(t);
}
ATerm o_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_31;
  return(t);
}
ATerm p_14 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_22 = ATgetFirst((ATermList) t);
      b_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_22, b_22);
  return(t);
}
ATerm q_14 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_31 = ATgetArgument(t, 0);
      if(match_cons(i_31, sym__2))
        {
          c_22 = ATgetArgument(i_31, 0);
          e_22 = ATgetArgument(i_31, 1);
        }
      else
        _fail(t);
      {
        ATerm j_31 = ATgetArgument(t, 1);
        if(match_cons(j_31, sym__2))
          {
            d_22 = ATgetArgument(j_31, 0);
            f_22 = ATgetArgument(j_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_22), c_22), (ATerm) ATinsert(CheckATermList(f_22), e_22));
  return(t);
}
ATerm r_14 (ATerm t)
{
  ATerm k_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Id_0))
        {
          t = term_r_30;
        }
      else
        {
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_y_30;
        }
      ;
      LocalPopChoice(m_31);
    }
  else
    {
      t = k_31;
    }
  {
    ATerm n_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            i_22 = ATgetArgument(t, 0);
            j_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_22;
        if(match_cons(t, sym_CallT_3))
          {
            k_22 = ATgetArgument(t, 0);
            m_22 = ATgetArgument(t, 1);
            n_22 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = k_22;
        if(match_cons(t, sym_SVar_1))
          {
            l_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_22), (ATerm)ATempty, (ATerm) ATempty), i_22);
        ;
        LocalPopChoice(q_31);
      }
    else
      {
        t = n_31;
        {
          ATerm r_31 = t;
          int s_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_31 = t;
              if((PushChoice() == 0))
                {
                  t = CallT_3_0(s_14, t_14, u_14, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = t_31;
                }
              t = CreateDef2_0_0(t);
              ;
              LocalPopChoice(s_31);
            }
          else
            {
              t = r_31;
              {
                ATerm w_2 = NULL;
                w_2 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_2, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm s_14 (ATerm t)
{
  t = SVar_1_0(_id, t);
  return(t);
}
ATerm t_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm u_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm v_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_31;
  return(t);
}
ATerm w_14 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_23 = ATgetFirst((ATermList) t);
      c_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_23, c_23);
  return(t);
}
ATerm x_14 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_31 = ATgetArgument(t, 0);
      if(match_cons(u_31, sym__2))
        {
          d_23 = ATgetArgument(u_31, 0);
          f_23 = ATgetArgument(u_31, 1);
        }
      else
        _fail(t);
      {
        ATerm w_31 = ATgetArgument(t, 1);
        if(match_cons(w_31, sym__2))
          {
            e_23 = ATgetArgument(w_31, 0);
            g_23 = ATgetArgument(w_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_23), d_23), (ATerm) ATinsert(CheckATermList(g_23), f_23));
  return(t);
}
ATerm y_14 (ATerm t)
{
  ATerm a_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Id_0))
        {
          t = term_r_30;
        }
      else
        {
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_y_30;
        }
      ;
      LocalPopChoice(d_32);
    }
  else
    {
      t = a_32;
    }
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            j_23 = ATgetArgument(t, 0);
            k_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_23;
        if(match_cons(t, sym_CallT_3))
          {
            l_23 = ATgetArgument(t, 0);
            n_23 = ATgetArgument(t, 1);
            o_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = l_23;
        if(match_cons(t, sym_SVar_1))
          {
            m_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_23), (ATerm)ATempty, (ATerm) ATempty), j_23);
        ;
        LocalPopChoice(f_32);
      }
    else
      {
        t = e_32;
        {
          ATerm g_32 = t;
          int h_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_32 = t;
              if((PushChoice() == 0))
                {
                  t = CallT_3_0(z_14, a_15, b_15, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = i_32;
                }
              t = CreateDef2_0_0(t);
              ;
              LocalPopChoice(h_32);
            }
          else
            {
              t = g_32;
              {
                ATerm b_3 = NULL;
                b_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_3, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm z_14 (ATerm t)
{
  t = SVar_1_0(_id, t);
  return(t);
}
ATerm a_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm b_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm Canon_0_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,d_24 = NULL;
  y_23 = t;
  if(match_cons(t, sym_Rec_2))
    {
      z_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, z_23, (ATerm)ATempty, (ATerm)ATempty, a_24)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_23), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          z_23 = ATgetArgument(t, 0);
          a_24 = ATgetArgument(t, 1);
          d_24 = ATgetArgument(t, 2);
          r_23 = ATgetArgument(t, 3);
          {
            ATerm n_24 = NULL;
            t = a_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = d_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = r_23;
            if(match_cons(t, sym_Rec_2))
              {
                s_23 = ATgetArgument(t, 0);
                t_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_23;
            {
              ATerm c_15 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm j_32 = ATgetArgument(t, 0);
                    if(match_cons(j_32, sym_SVar_1))
                      {
                        if((s_23 != ATgetArgument(j_32, 0)))
                          {
                            _fail(ATgetArgument(j_32, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm k_32 = ATgetArgument(t, 1);
                      if(((ATgetType(k_32) != AT_LIST) || !(ATisEmpty(k_32))))
                        _fail(t);
                    }
                    {
                      ATerm l_32 = ATgetArgument(t, 2);
                      if(((ATgetType(l_32) != AT_LIST) || !(ATisEmpty(l_32))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_23), (ATerm)ATempty, (ATerm) ATempty);
                return(t);
              }
              t = alltd_1_0(c_15, t);
              n_24 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, z_23, (ATerm)ATempty, (ATerm)ATempty, n_24);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              z_23 = ATgetArgument(t, 0);
              a_24 = ATgetArgument(t, 1);
              t = a_24;
              if(match_cons(t, sym_Seq_2))
                {
                  w_23 = ATgetArgument(t, 0);
                  x_23 = ATgetArgument(t, 1);
                  t = z_23;
                  if(match_cons(t, sym_Where_1))
                    {
                      v_23 = ATgetArgument(t, 0);
                      t = w_23;
                      if(match_cons(t, sym_Build_1))
                        {
                          u_23 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_23), x_23));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = a_24;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      w_23 = ATgetArgument(t, 0);
                      t = z_23;
                      if(match_cons(t, sym_Where_1))
                        {
                          v_23 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_23, (ATerm) ATmakeAppl(sym_Build_1, w_23));
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = a_24;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Id_0))
                        {
                          t = z_23;
                          if(match_cons(t, sym_Id_0))
                            {
                              ATerm m_32 = t;
                              int n_32 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = z_23;
                                  ;
                                  LocalPopChoice(n_32);
                                }
                              else
                                {
                                  t = m_32;
                                  t = a_24;
                                }
                            }
                          else
                            {
                              t = z_23;
                            }
                        }
                      else
                        {
                          t = z_23;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = a_24;
                        }
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  z_23 = ATgetArgument(t, 0);
                  a_24 = ATgetArgument(t, 1);
                  t = a_24;
                  if(match_cons(t, sym_Scope_2))
                    {
                      w_23 = ATgetArgument(t, 0);
                      x_23 = ATgetArgument(t, 1);
                      t = z_23;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm p_32 = t;
                          int q_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = h_25(z_23, w_23, x_23, y_23, t);
                              ;
                              LocalPopChoice(q_32);
                            }
                          else
                            {
                              t = p_32;
                              t = a_24;
                            }
                        }
                      else
                        {
                          t = h_25(z_23, w_23, x_23, y_23, t);
                        }
                    }
                  else
                    {
                      t = z_23;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = a_24;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Thread_1))
                    {
                      z_23 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_32, (ATerm)ATinsert(ATempty, z_23), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          z_23 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_32, (ATerm)ATinsert(ATempty, z_23), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              z_23 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_CallT_3, term_b_33, (ATerm)ATinsert(ATempty, z_23), (ATerm) ATempty);
                            }
                          else
                            {
                              if(match_cons(t, sym_All_1))
                                {
                                  z_23 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_33, (ATerm)ATinsert(ATempty, z_23), (ATerm) ATempty);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Bagof_1))
                                    {
                                      z_23 = ATgetArgument(t, 0);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_33, (ATerm)ATinsert(ATempty, z_23), (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_PrimT_3))
                                        {
                                          z_23 = ATgetArgument(t, 0);
                                          a_24 = ATgetArgument(t, 1);
                                          d_24 = ATgetArgument(t, 2);
                                          {
                                            ATerm h_33 = t;
                                            int j_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = i_25(z_23, a_24, d_24, y_23, t);
                                                ;
                                                LocalPopChoice(j_33);
                                              }
                                            else
                                              {
                                                t = h_33;
                                                t = k_25(z_23, a_24, d_24, y_23, t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              z_23 = ATgetArgument(t, 0);
                                              a_24 = ATgetArgument(t, 1);
                                              d_24 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm n_33 = t;
                                            int r_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = j_25(z_23, a_24, d_24, y_23, t);
                                                ;
                                                LocalPopChoice(r_33);
                                              }
                                            else
                                              {
                                                t = n_33;
                                                t = l_25(z_23, a_24, d_24, y_23, t);
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
ATerm d_15 (ATerm t)
{
  ATerm s_33 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_33;
    }
  return(t);
}
ATerm e_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_31;
  return(t);
}
ATerm f_15 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_25 = ATgetFirst((ATermList) t);
      v_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_25, v_25);
  return(t);
}
ATerm g_15 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_33 = ATgetArgument(t, 0);
      if(match_cons(w_33, sym__2))
        {
          w_25 = ATgetArgument(w_33, 0);
          y_25 = ATgetArgument(w_33, 1);
        }
      else
        _fail(t);
      {
        ATerm x_33 = ATgetArgument(t, 1);
        if(match_cons(x_33, sym__2))
          {
            x_25 = ATgetArgument(x_33, 0);
            z_25 = ATgetArgument(x_33, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_25), w_25), (ATerm) ATinsert(CheckATermList(z_25), y_25));
  return(t);
}
ATerm h_15 (ATerm t)
{
  t = genzip_4_0(i_15, j_15, k_15, _id, t);
  return(t);
}
ATerm i_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_31;
  return(t);
}
ATerm j_15 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_26 = ATgetFirst((ATermList) t);
      b_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_26, b_26);
  return(t);
}
ATerm k_15 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_33 = ATgetArgument(t, 0);
      if(match_cons(z_33, sym__2))
        {
          c_26 = ATgetArgument(z_33, 0);
          e_26 = ATgetArgument(z_33, 1);
        }
      else
        _fail(t);
      {
        ATerm c_34 = ATgetArgument(t, 1);
        if(match_cons(c_34, sym__2))
          {
            d_26 = ATgetArgument(c_34, 0);
            f_26 = ATgetArgument(c_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_26), c_26), (ATerm) ATinsert(CheckATermList(f_26), e_26));
  return(t);
}
ATerm LiftCallArgs_0_0 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      o_25 = ATgetArgument(t, 0);
      p_25 = ATgetArgument(t, 1);
      q_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_25;
  t = fetch_1_0(d_15, t);
  t = q_25;
  t = genzip_4_0(e_15, f_15, g_15, LiftPrimArg_0_0, t);
  t = _2_0(concat_0_0, h_15, t);
  if(match_cons(t, sym__2))
    {
      r_25 = ATgetArgument(t, 0);
      {
        ATerm d_34 = ATgetArgument(t, 1);
        if(match_cons(d_34, sym__2))
          {
            s_25 = ATgetArgument(d_34, 0);
            t_25 = ATgetArgument(d_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, r_25, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_25), (ATerm) ATmakeAppl(sym_CallT_3, o_25, p_25, t_25)));
  return(t);
}
ATerm genzip_4_0 (ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t_136 (ATerm), ATerm u_136 (ATerm), ATerm t)
{
  ATerm g_26 (ATerm t)
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_136(t);
        ;
        LocalPopChoice(j_34);
      }
    else
      {
        t = i_34;
        t = s_136(t);
        t = _2_0(u_136, g_26, t);
        t = t_136(t);
      }
    return(t);
  }
  t = g_26(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm p_26 (ATerm j_26, ATerm t)
{
  ATerm l_26 = NULL;
  t = j_26;
  {
    ATerm k_34 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_34;
      }
    t = new_0_0(t);
    l_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, l_26), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_26), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_26)))), (ATerm) ATmakeAppl(sym_Var_1, l_26)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  m_26 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_26 = ATgetArgument(t, 0);
      {
        ATerm l_34 = t;
        int m_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_26(m_26, t);
            ;
            LocalPopChoice(m_34);
          }
        else
          {
            t = l_34;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_h_26, (ATerm) ATmakeAppl(sym_Var_1, n_26)));
          }
      }
    }
  else
    {
      t = p_26(m_26, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm f_107 (ATerm), ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,e_1 = NULL,f_1 = NULL;
  t_26 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_26);
  q_26 = t;
  t = r_26;
  t = f_107(t);
  s_26 = t;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_26);
  e_1 = t;
  t = SSLsetAnnotations(e_1, q_26);
  return(t);
}
ATerm l_15 (ATerm t)
{
  ATerm n_34 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_34;
    }
  return(t);
}
ATerm m_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_31;
  return(t);
}
ATerm n_15 (ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_3 = ATgetFirst((ATermList) t);
      r_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_3, r_3);
  return(t);
}
ATerm o_15 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_34 = ATgetArgument(t, 0);
      if(match_cons(o_34, sym__2))
        {
          s_3 = ATgetArgument(o_34, 0);
          u_3 = ATgetArgument(o_34, 1);
        }
      else
        _fail(t);
      {
        ATerm u_34 = ATgetArgument(t, 1);
        if(match_cons(u_34, sym__2))
          {
            t_3 = ATgetArgument(u_34, 0);
            v_3 = ATgetArgument(u_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_3), s_3), (ATerm) ATinsert(CheckATermList(v_3), u_3));
  return(t);
}
ATerm p_15 (ATerm t)
{
  t = genzip_4_0(q_15, r_15, s_15, _id, t);
  return(t);
}
ATerm q_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_31;
  return(t);
}
ATerm r_15 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_3 = ATgetFirst((ATermList) t);
      x_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_3, x_3);
  return(t);
}
ATerm s_15 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_34 = ATgetArgument(t, 0);
      if(match_cons(v_34, sym__2))
        {
          y_3 = ATgetArgument(v_34, 0);
          a_4 = ATgetArgument(v_34, 1);
        }
      else
        _fail(t);
      {
        ATerm w_34 = ATgetArgument(t, 1);
        if(match_cons(w_34, sym__2))
          {
            z_3 = ATgetArgument(w_34, 0);
            b_4 = ATgetArgument(w_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_3), y_3), (ATerm) ATinsert(CheckATermList(b_4), a_4));
  return(t);
}
ATerm t_15 (ATerm t)
{
  ATerm y_34 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_34;
    }
  return(t);
}
ATerm u_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_31;
  return(t);
}
ATerm v_15 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_4 = ATgetFirst((ATermList) t);
      u_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_4, u_4);
  return(t);
}
ATerm w_15 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,z_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_35 = ATgetArgument(t, 0);
      if(match_cons(c_35, sym__2))
        {
          v_4 = ATgetArgument(c_35, 0);
          x_4 = ATgetArgument(c_35, 1);
        }
      else
        _fail(t);
      {
        ATerm d_35 = ATgetArgument(t, 1);
        if(match_cons(d_35, sym__2))
          {
            w_4 = ATgetArgument(d_35, 0);
            z_4 = ATgetArgument(d_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_4), v_4), (ATerm) ATinsert(CheckATermList(z_4), x_4));
  return(t);
}
ATerm x_15 (ATerm t)
{
  t = genzip_4_0(y_15, z_15, d_16, _id, t);
  return(t);
}
ATerm y_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_31;
  return(t);
}
ATerm z_15 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_5 = ATgetFirst((ATermList) t);
      b_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_5, b_5);
  return(t);
}
ATerm d_16 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_35 = ATgetArgument(t, 0);
      if(match_cons(g_35, sym__2))
        {
          c_5 = ATgetArgument(g_35, 0);
          e_5 = ATgetArgument(g_35, 1);
        }
      else
        _fail(t);
      {
        ATerm h_35 = ATgetArgument(t, 1);
        if(match_cons(h_35, sym__2))
          {
            d_5 = ATgetArgument(h_35, 0);
            f_5 = ATgetArgument(h_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_5), c_5), (ATerm) ATinsert(CheckATermList(f_5), e_5));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  r_28 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      s_28 = ATgetArgument(t, 0);
      t_28 = ATgetArgument(t, 1);
      q_28 = ATgetArgument(t, 2);
      {
        ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL;
        t = q_28;
        t = fetch_1_0(l_15, t);
        t = q_28;
        t = genzip_4_0(m_15, n_15, o_15, LiftPrimArg_0_0, t);
        t = _2_0(concat_0_0, p_15, t);
        if(match_cons(t, sym__2))
          {
            n_3 = ATgetArgument(t, 0);
            {
              ATerm j_35 = ATgetArgument(t, 1);
              if(match_cons(j_35, sym__2))
                {
                  o_3 = ATgetArgument(j_35, 0);
                  p_3 = ATgetArgument(j_35, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, n_3, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_3), (ATerm) ATmakeAppl(sym_PrimT_3, s_28, t_28, p_3)));
      }
    }
  else
    {
      ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          s_28 = ATgetArgument(t, 0);
          t_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_28;
      t = fetch_1_0(t_15, t);
      t = t_28;
      t = genzip_4_0(u_15, v_15, w_15, LiftPrimArg_0_0, t);
      t = _2_0(concat_0_0, x_15, t);
      if(match_cons(t, sym__2))
        {
          q_4 = ATgetArgument(t, 0);
          {
            ATerm k_35 = ATgetArgument(t, 1);
            if(match_cons(k_35, sym__2))
              {
                r_4 = ATgetArgument(k_35, 0);
                s_4 = ATgetArgument(k_35, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, q_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_4), (ATerm) ATmakeAppl(sym_PrimT_3, s_28, (ATerm)ATempty, s_4)));
    }
  return(t);
}
ATerm downup2_2_0 (ATerm b_129 (ATerm), ATerm c_129 (ATerm), ATerm t)
{
  t = b_129(t);
  {
    ATerm e_16 (ATerm t)
    {
      t = downup2_2_0(b_129, c_129, t);
      return(t);
    }
    t = SRTS_all(e_16, t);
    t = c_129(t);
  }
  return(t);
}
ATerm _2_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,g_1 = NULL,h_1 = NULL;
  b_29 = t;
  if(match_cons(t, sym__2))
    {
      x_28 = ATgetArgument(t, 0);
      y_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_29);
  w_28 = t;
  t = x_28;
  t = o_101(t);
  z_28 = t;
  t = y_28;
  t = p_101(t);
  a_29 = t;
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
  g_1 = t;
  t = SSLsetAnnotations(g_1, w_28);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm u_146 (ATerm), ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  if(match_cons(t, sym__2))
    {
      e_29 = ATgetArgument(t, 0);
      f_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_29, term_m_35);
  t = open_stream_0_0(t);
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_29, f_29);
  t = u_146(t);
  t = fclose_0_0(t);
  t = f_29;
  return(t);
}
ATerm i_16 (ATerm t)
{
  t = fetch_1_0(k_16, t);
  return(t);
}
ATerm j_16 (ATerm t)
{
  t = WriteToFile_1_0(l_16, t);
  return(t);
}
ATerm k_16 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_35 = ATgetArgument(t, 0);
      if(match_cons(n_35, sym_Stream_1))
        {
          l_29 = ATgetArgument(n_35, 0);
        }
      else
        _fail(t);
      m_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(l_29, m_29);
  n_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_29);
  return(t);
}
ATerm m_16 (ATerm t)
{
  t = WriteToFile_1_0(n_16, t);
  return(t);
}
ATerm n_16 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,o_1 = NULL,p_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_35 = ATgetArgument(t, 0);
      if(match_cons(o_35, sym_Stream_1))
        {
          o_29 = ATgetArgument(o_35, 0);
        }
      else
        _fail(t);
      p_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(o_29, p_29);
  q_29 = t;
  p_1 = t;
  t = term_p_35;
  o_1 = t;
  t = SSL_fputc(o_1, q_29);
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_29);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  j_29 = t;
  {
    ATerm f_16 (ATerm t)
    {
      ATerm q_35 = t;
      int r_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_16 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((k_29 != NULL) && (k_29 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_16, t);
          ;
          LocalPopChoice(r_35);
        }
      else
        {
          t = q_35;
          t = term_s_35;
          if(((k_29 != NULL) && (k_29 != t)))
            _fail(t);
          else
            k_29 = t;
        }
      return(t);
    }
    t = _2_0(f_16, _id, t);
    t = j_29;
    {
      ATerm h_16 (ATerm t)
      {
        ATerm k_5 = NULL;
        k_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_29), k_5);
        return(t);
      }
      t = _2_0(_id, h_16, t);
      {
        ATerm t_35 = t;
        int u_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(i_16, j_16, t);
            ;
            LocalPopChoice(u_35);
          }
        else
          {
            t = t_35;
            t = _2_0(_id, m_16, t);
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
ATerm apply_strategy_1_0 (ATerm w_149 (ATerm), ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
  s_29 = t;
  t = dtime_0_0(t);
  t = s_29;
  t = w_149(t);
  t_29 = t;
  t = dtime_0_0(t);
  u_29 = t;
  t = t_29;
  if(match_cons(t, sym__2))
    {
      v_29 = ATgetArgument(t, 0);
      w_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_29), (ATerm) ATmakeAppl(sym_Runtime_1, u_29)), w_29);
  return(t);
}
ATerm m_30 (ATerm g_30, ATerm t)
{
  t = SSL_fclose(g_30);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  k_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_30 = ATgetArgument(t, 0);
      {
        ATerm v_35 = t;
        int z_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_30);
            ;
            LocalPopChoice(z_35);
          }
        else
          {
            t = v_35;
            t = m_30(k_30, t);
          }
      }
    }
  else
    {
      t = m_30(k_30, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_30 = NULL;
  t = SSL_stdin_stream();
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_30);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_30 = NULL;
  t = SSL_stdout_stream();
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_30);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_30 = NULL;
  t = SSL_stderr_stream();
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_30);
  return(t);
}
ATerm o_16 (ATerm t)
{
  ATerm x_30 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      x_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_30;
  return(t);
}
ATerm p_16 (ATerm t)
{
  ATerm c_31 = NULL;
  c_31 = t;
  t = SSL_is_string(c_31);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_36 = ATgetArgument(t, 0);
      ATerm c_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_5 = NULL,z_5 = NULL;
        y_5 = t;
        t = SSL_explode_term(y_5);
        if(match_cons(t, sym__2))
          {
            ATerm l_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_36) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_36 = ATgetArgument(t, 1);
              if(((ATgetType(m_36) == AT_LIST) && !(ATisEmpty(m_36))))
                {
                  z_5 = ATgetFirst((ATermList) m_36);
                  {
                    ATerm n_36 = (ATerm) ATgetNext((ATermList) m_36);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = z_5;
        if(match_cons(t, sym_stderr_0))
          {
            t = z_5;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = z_5;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = z_5;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(i_36);
      }
    else
      {
        t = e_36;
        {
          ATerm u_36 = t;
          int v_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
              t = _2_0(o_16, _id, t);
              if(match_cons(t, sym__2))
                {
                  u_30 = ATgetArgument(t, 0);
                  v_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(u_30, v_30);
              w_30 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, w_30);
              ;
              LocalPopChoice(v_36);
            }
          else
            {
              t = u_36;
              {
                ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
                t = _2_0(p_16, _id, t);
                if(match_cons(t, sym__2))
                  {
                    z_30 = ATgetArgument(t, 0);
                    a_31 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(z_30, a_31);
                b_31 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, b_31);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
  ATerm b_37 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_31 = NULL;
      g_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_31, term_d_37);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_37);
    }
  else
    {
      t = b_37;
      {
        ATerm a_6 = NULL,q_1 = NULL,s_1 = NULL,u_1 = NULL,v_1 = NULL;
        a_6 = t;
        t = term_g_37;
        u_1 = t;
        t = term_v_19;
        q_1 = t;
        t = u_1;
        v_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, a_6), term_g_37);
        s_1 = t;
        t = SSL_printnl(q_1, s_1);
        t = a_6;
        _fail(t);
      }
    }
  d_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(f_31);
  e_31 = t;
  t = d_31;
  t = fclose_0_0(t);
  t = e_31;
  return(t);
}
ATerm fetch_1_0 (ATerm y_134 (ATerm), ATerm t)
{
  ATerm l_31 (ATerm t)
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_134, _id, t);
        ;
        LocalPopChoice(i_37);
      }
    else
      {
        t = h_37;
        t = Cons_2_0(_id, l_31, t);
      }
    return(t);
  }
  t = l_31(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_37);
    }
  else
    {
      t = p_37;
      {
        ATerm o_31 = NULL,p_31 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_31 = ATgetFirst((ATermList) t);
            p_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_31;
        {
          ATerm q_16 (ATerm t)
          {
            t = p_31;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(q_16, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm e_135 (ATerm), ATerm t)
{
  ATerm v_31 (ATerm t)
  {
    ATerm r_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, v_31, t);
        ;
        LocalPopChoice(u_37);
      }
    else
      {
        t = r_37;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_135(t);
      }
    return(t);
  }
  t = v_31(t);
  return(t);
}
ATerm r_16 (ATerm t)
{
  ATerm y_31 = NULL;
  y_31 = t;
  t = SSL_explode_string(y_31);
  return(t);
}
ATerm s_16 (ATerm t)
{
  ATerm z_31 = NULL;
  z_31 = t;
  t = SSL_explode_string(z_31);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm x_31 = NULL;
  t = _2_0(r_16, s_16, t);
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_32 = NULL,c_32 = NULL;
        if(match_cons(t, sym__2))
          {
            b_32 = ATgetArgument(t, 0);
            c_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_32;
        {
          ATerm t_16 (ATerm t)
          {
            t = c_32;
            return(t);
          }
          t = at_end_1_0(t_16, t);
        }
        ;
        LocalPopChoice(y_37);
      }
    else
      {
        t = x_37;
        {
          ATerm k_6 = NULL,m_6 = NULL;
          k_6 = t;
          t = SSL_explode_term(k_6);
          if(match_cons(t, sym__2))
            {
              ATerm z_37 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_37) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              m_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_6;
          t = concat_0_0(t);
        }
      }
    x_31 = t;
    t = SSL_implode_string(x_31);
  }
  return(t);
}
ATerm u_16 (ATerm t)
{
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_38);
    }
  else
    {
      t = a_38;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_32 = NULL;
      o_32 = t;
      t = SSL_is_string(o_32);
      ;
      LocalPopChoice(h_38);
    }
  else
    {
      t = c_38;
      {
        ATerm i_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_16, t);
            ;
            LocalPopChoice(j_38);
          }
        else
          {
            t = i_38;
            {
              ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
              s_32 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_32 = ATgetArgument(t, 0);
                  t = t_32;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_32 = ATgetArgument(t, 0);
                      t = t_32;
                      {
                        ATerm k_38 = t;
                        int m_38 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm x_1 = NULL,a_2 = NULL;
                            a_2 = t;
                            t = term_n_38;
                            x_1 = t;
                            t = SSL_table_get(x_1, t_32);
                            {
                              ATerm t_38 = t;
                              int u_38 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm q_8 = NULL,f_2 = NULL,g_2 = NULL;
                                  t = eval_config_0_0(t);
                                  q_8 = t;
                                  g_2 = t;
                                  t = term_n_38;
                                  f_2 = t;
                                  t = SSL_table_put(f_2, t_32, q_8);
                                  t = q_8;
                                  ;
                                  LocalPopChoice(u_38);
                                }
                              else
                                {
                                  t = t_38;
                                }
                            }
                            ;
                            LocalPopChoice(m_38);
                          }
                        else
                          {
                            t = k_38;
                            {
                              ATerm h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL;
                              t = term_v_38;
                              k_2 = t;
                              t = term_v_19;
                              h_2 = t;
                              t = k_2;
                              l_2 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, t_32), term_v_38);
                              j_2 = t;
                              t = SSL_printnl(h_2, j_2);
                              t = t_32;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm y_32 = NULL,z_32 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_32 = ATgetArgument(t, 0);
                          u_32 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_32;
                      t = eval_config_0_0(t);
                      y_32 = t;
                      t = u_32;
                      t = eval_config_0_0(t);
                      z_32 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_32, z_32);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_148 (ATerm), ATerm t)
{
  ATerm w_38 = t;
  int x_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_33 = NULL,i_33 = NULL,n_2 = NULL,o_2 = NULL,r_2 = NULL,u_2 = NULL;
      e_33 = t;
      t = term_y_38;
      r_2 = t;
      t = term_n_38;
      n_2 = t;
      t = r_2;
      u_2 = t;
      t = term_y_38;
      o_2 = t;
      t = SSL_table_get(n_2, o_2);
      {
        ATerm z_38 = t;
        int a_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_9 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL;
            t = eval_config_0_0(t);
            b_9 = t;
            z_2 = t;
            t = term_n_38;
            x_2 = t;
            t = z_2;
            a_3 = t;
            t = term_y_38;
            y_2 = t;
            t = SSL_table_put(x_2, y_2, b_9);
            t = b_9;
            ;
            LocalPopChoice(a_39);
          }
        else
          {
            t = z_38;
          }
        i_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_33, term_b_39);
        t = geq_0_0(t);
        t = e_33;
        t = f_148(t);
      }
      ;
      LocalPopChoice(x_38);
    }
  else
    {
      t = w_38;
    }
  return(t);
}
ATerm v_16 (ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  if(match_string(t, "-k"))
    {
      t = k_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_33;
    }
  return(t);
}
ATerm w_16 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  l_33 = t;
  t = SSL_string_to_int(l_33);
  m_33 = t;
  e_3 = t;
  t = term_n_38;
  c_3 = t;
  t = e_3;
  f_3 = t;
  t = term_c_39;
  d_3 = t;
  t = SSL_table_put(c_3, d_3, m_33);
  t = l_33;
  return(t);
}
ATerm x_16 (ATerm t)
{
  t = term_d_39;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_16, w_16, x_16, t);
  return(t);
}
ATerm y_16 (ATerm t)
{
  ATerm o_33 = NULL;
  o_33 = t;
  if(match_string(t, "-S"))
    {
      t = o_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_33;
    }
  return(t);
}
ATerm z_16 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL;
  j_3 = t;
  t = term_n_38;
  g_3 = t;
  t = j_3;
  k_3 = t;
  t = term_y_38;
  h_3 = t;
  t = k_3;
  l_3 = t;
  t = term_e_39;
  i_3 = t;
  t = SSL_table_put(g_3, h_3, i_3);
  t = term_f_39;
  return(t);
}
ATerm a_17 (ATerm t)
{
  t = term_g_39;
  return(t);
}
ATerm b_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,m_3 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  p_33 = t;
  t = SSL_string_to_int(p_33);
  q_33 = t;
  d_4 = t;
  t = term_n_38;
  m_3 = t;
  t = d_4;
  e_4 = t;
  t = term_y_38;
  c_4 = t;
  t = SSL_table_put(m_3, c_4, q_33);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_33);
  return(t);
}
ATerm f_17 (ATerm t)
{
  t = term_h_39;
  return(t);
}
ATerm g_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
  i_4 = t;
  t = term_n_38;
  f_4 = t;
  t = i_4;
  j_4 = t;
  t = term_i_39;
  g_4 = t;
  t = j_4;
  k_4 = t;
  t = term_u_19;
  h_4 = t;
  t = SSL_table_put(f_4, g_4, h_4);
  t = term_j_39;
  return(t);
}
ATerm i_17 (ATerm t)
{
  t = term_k_39;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_16, z_16, a_17, t);
      ;
      LocalPopChoice(m_39);
    }
  else
    {
      t = l_39;
      {
        ATerm n_39 = t;
        int o_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_17, d_17, f_17, t);
            ;
            LocalPopChoice(o_39);
          }
        else
          {
            t = n_39;
            t = Option_3_0(g_17, h_17, i_17, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_33 = NULL;
      t = term_u_19;
      t = d_0(t);
      v_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_39, term_q_39, v_33);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm y_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_33 = ATgetFirst((ATermList) t);
          u_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_33;
      t = a_0(t);
      t = term_u_19;
      t = c_0(t);
      y_33 = t;
      t = (ATerm) ATinsert(CheckATermList(u_33), y_33);
    }
  return(t);
}
ATerm j_17 (ATerm t)
{
  ATerm a_34 = NULL;
  a_34 = t;
  if(match_string(t, "-o"))
    {
      t = a_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_34;
    }
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm b_34 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
  b_34 = t;
  n_4 = t;
  t = term_n_38;
  l_4 = t;
  t = n_4;
  o_4 = t;
  t = term_r_39;
  m_4 = t;
  t = SSL_table_put(l_4, m_4, b_34);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_34);
  return(t);
}
ATerm l_17 (ATerm t)
{
  t = term_s_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_17, k_17, l_17, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,p_4 = NULL,y_4 = NULL;
  if(match_cons(t, sym__3))
    {
      e_34 = ATgetArgument(t, 0);
      f_34 = ATgetArgument(t, 1);
      g_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_34, f_34);
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_39 = ATgetArgument(t, 0);
            ATerm w_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_34, f_34);
        ;
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
        t = (ATerm) ATempty;
      }
    h_34 = t;
    y_4 = t;
    t = (ATerm) ATinsert(CheckATermList(h_34), g_34);
    p_4 = t;
    t = SSL_table_put(e_34, f_34, p_4);
    t = (ATerm) ATmakeAppl(sym__3, e_34, f_34, g_34);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_34 = NULL;
      t = term_u_19;
      t = l_0(t);
      t_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_39, term_q_39, t_34);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm x_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_34 = ATgetFirst((ATermList) t);
          q_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_34 = ATgetFirst((ATermList) t);
          s_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_34;
      t = i_0(t);
      t = r_34;
      t = k_0(t);
      x_34 = t;
      t = (ATerm) ATinsert(CheckATermList(s_34), x_34);
    }
  return(t);
}
ATerm m_17 (ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  if(match_string(t, "-i"))
    {
      t = z_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_34;
    }
  return(t);
}
ATerm n_17 (ATerm t)
{
  ATerm a_35 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
  a_35 = t;
  i_5 = t;
  t = term_n_38;
  g_5 = t;
  t = i_5;
  j_5 = t;
  t = term_x_39;
  h_5 = t;
  t = SSL_table_put(g_5, h_5, a_35);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_35);
  return(t);
}
ATerm o_17 (ATerm t)
{
  t = term_y_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_17, n_17, o_17, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_35 = NULL,p_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,q_5 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_19;
  t = whoami_0_0(t);
  b_35 = t;
  n_5 = t;
  t = term_v_19;
  l_5 = t;
  t = n_5;
  o_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_39), b_35);
  m_5 = t;
  t = SSL_printnl(l_5, m_5);
  q_5 = t;
  t = term_y_19;
  p_5 = t;
  t = SSL_exit(p_5);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL;
  t = term_a_40;
  t_5 = t;
  t = term_n_38;
  r_5 = t;
  t = t_5;
  u_5 = t;
  t = term_a_40;
  s_5 = t;
  t = SSL_table_get(r_5, s_5);
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_9 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,b_6 = NULL;
        t = eval_config_0_0(t);
        f_9 = t;
        x_5 = t;
        t = term_n_38;
        v_5 = t;
        t = x_5;
        b_6 = t;
        t = term_a_40;
        w_5 = t;
        t = SSL_table_put(v_5, w_5, f_9);
        t = f_9;
        ;
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm p_140 (ATerm), ATerm q_140 (ATerm), ATerm t)
{
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_140(t);
      ;
      LocalPopChoice(e_40);
    }
  else
    {
      t = d_40;
      {
        ATerm e_35 = NULL,f_35 = NULL,i_35 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_35 = ATgetFirst((ATermList) t);
            f_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_35;
        t = foldr_2_0(p_140, q_140, t);
        i_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_35, i_35);
        t = q_140(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm r_17 (ATerm t)
{
  t = term_e_39;
  return(t);
}
ATerm s_17 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL;
  if(match_cons(t, sym__2))
    {
      a_10 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_10, b_10);
        ;
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        t = SSL_addr(a_10, b_10);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_35 = NULL,s_9 = NULL,t_9 = NULL;
  t = times_0_0(t);
  s_9 = t;
  t = SSL_explode_term(s_9);
  if(match_cons(t, sym__2))
    {
      ATerm h_40 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9;
  t = foldr_2_0(r_17, s_17, t);
  l_35 = t;
  t = SSL_TicksToSeconds(l_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
  w_35 = t;
  if(match_cons(t, sym__2))
    {
      x_35 = ATgetArgument(t, 0);
      y_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_35;
        if((x_35 != t))
          {
            _fail(t);
          }
        t = w_35;
        ;
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
        t = w_35;
        {
          ATerm k_40 = t;
          int l_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_35, y_35);
              ;
              LocalPopChoice(l_40);
            }
          else
            {
              t = k_40;
              t = SSL_gtr(x_35, y_35);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_35, y_35);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_148 (ATerm), ATerm t)
{
  ATerm m_40 = t;
  int n_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_36 = NULL,d_36 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
      b_36 = t;
      t = term_y_38;
      e_6 = t;
      t = term_n_38;
      c_6 = t;
      t = e_6;
      f_6 = t;
      t = term_y_38;
      d_6 = t;
      t = SSL_table_get(c_6, d_6);
      {
        ATerm o_40 = t;
        int p_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_10 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
            t = eval_config_0_0(t);
            x_10 = t;
            i_6 = t;
            t = term_n_38;
            g_6 = t;
            t = i_6;
            j_6 = t;
            t = term_y_38;
            h_6 = t;
            t = SSL_table_put(g_6, h_6, x_10);
            t = x_10;
            ;
            LocalPopChoice(p_40);
          }
        else
          {
            t = o_40;
          }
        d_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_36, term_y_19);
        t = geq_0_0(t);
        t = b_36;
        t = e_148(t);
      }
      ;
      LocalPopChoice(n_40);
    }
  else
    {
      t = m_40;
    }
  return(t);
}
ATerm t_17 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,l_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL;
  t = run_time_0_0(t);
  f_36 = t;
  t = term_u_19;
  t = whoami_0_0(t);
  g_36 = t;
  o_6 = t;
  t = term_v_19;
  l_6 = t;
  t = o_6;
  p_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_40), f_36), term_q_40), g_36);
  n_6 = t;
  t = SSL_printnl(l_6, n_6);
  t = (ATerm) ATmakeAppl(sym__2, term_v_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_40), f_36), term_q_40), g_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  t = report_run_time_0_0(t);
  r_6 = t;
  t = term_e_39;
  q_6 = t;
  t = SSL_exit(q_6);
  return(t);
}
ATerm u_17 (ATerm t)
{
  ATerm s_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(t_40);
    }
  else
    {
      t = s_40;
      {
        ATerm u_40 = t;
        int v_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(v_40);
          }
        else
          {
            t = u_40;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_150 (ATerm), ATerm t)
{
  ATerm w_40 = t;
  int x_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL;
      t = term_y_40;
      u_6 = t;
      t = term_n_38;
      s_6 = t;
      t = u_6;
      v_6 = t;
      t = term_y_40;
      t_6 = t;
      t = SSL_table_get(s_6, t_6);
      {
        ATerm z_40 = t;
        int a_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_11 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL;
            t = eval_config_0_0(t);
            h_11 = t;
            y_6 = t;
            t = term_n_38;
            w_6 = t;
            t = y_6;
            z_6 = t;
            t = term_y_40;
            x_6 = t;
            t = SSL_table_put(w_6, x_6, h_11);
            t = h_11;
            ;
            LocalPopChoice(a_41);
          }
        else
          {
            t = z_40;
          }
      }
      ;
      LocalPopChoice(x_40);
    }
  else
    {
      t = w_40;
      t = fetch_1_0(u_17, t);
    }
  t = u_150(t);
  return(t);
}
ATerm map_1_0 (ATerm n_134 (ATerm), ATerm t)
{
  ATerm h_36 (ATerm t)
  {
    ATerm b_41 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(c_41);
      }
    else
      {
        t = b_41;
        t = Cons_2_0(n_134, h_36, t);
      }
    return(t);
  }
  t = h_36(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_36 = ATgetFirst((ATermList) t);
      k_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_36 = NULL,p_36 = NULL;
        t = k_36;
        t = g_0(t);
        o_36 = t;
        t = j_36;
        t = e_0(t);
        p_36 = t;
        t = k_36;
        {
          ATerm v_17 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(o_36), p_36);
            return(t);
          }
          t = reverse_acc_2_0(e_0, v_17, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_19;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm p_114 (ATerm), ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,a_7 = NULL,b_7 = NULL;
  t_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_36);
  q_36 = t;
  t = r_36;
  t = p_114(t);
  s_36 = t;
  b_7 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_36);
  a_7 = t;
  t = SSLsetAnnotations(a_7, q_36);
  return(t);
}
ATerm w_17 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm z_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_18 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_36), term_d_41);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
  ATerm e_41 = t;
  int f_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_7 = NULL,e_7 = NULL,g_7 = NULL,i_7 = NULL;
      t = term_a_40;
      g_7 = t;
      t = term_n_38;
      c_7 = t;
      t = g_7;
      i_7 = t;
      t = term_a_40;
      e_7 = t;
      t = SSL_table_get(c_7, e_7);
      {
        ATerm g_41 = t;
        int h_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_11 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
            t = eval_config_0_0(t);
            l_11 = t;
            l_7 = t;
            t = term_n_38;
            j_7 = t;
            t = l_7;
            m_7 = t;
            t = term_a_40;
            k_7 = t;
            t = SSL_table_put(j_7, k_7, l_11);
            t = l_11;
            ;
            LocalPopChoice(h_41);
          }
        else
          {
            t = g_41;
          }
      }
      ;
      LocalPopChoice(f_41);
    }
  else
    {
      t = e_41;
      t = fetch_1_0(w_17, t);
    }
  t = term_i_41;
  t = echo_0_0(t);
  p_7 = t;
  t = term_p_39;
  n_7 = t;
  t = p_7;
  q_7 = t;
  t = term_q_39;
  o_7 = t;
  t = SSL_table_get(n_7, o_7);
  t = reverse_acc_2_0(_id, z_17, t);
  t = map_1_0(d_18, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm q_114 (ATerm), ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,s_7 = NULL,t_7 = NULL;
  a_37 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      y_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_37);
  x_36 = t;
  t = y_36;
  t = q_114(t);
  z_36 = t;
  t_7 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, z_36);
  s_7 = t;
  t = SSLsetAnnotations(s_7, x_36);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,u_7 = NULL,x_7 = NULL;
  e_37 = t;
  {
    ATerm j_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_41 = ATgetFirst((ATermList) t);
                ATerm m_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_37;
          }
        ;
        LocalPopChoice(k_41);
      }
    else
      {
        t = j_41;
        t = (ATerm) ATinsert(ATempty, e_37);
      }
    f_37 = t;
    x_7 = t;
    t = term_s_35;
    u_7 = t;
    t = SSL_printnl(u_7, f_37);
    t = e_37;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
  t = term_a_40;
  c_8 = t;
  t = term_n_38;
  a_8 = t;
  t = c_8;
  d_8 = t;
  t = term_a_40;
  b_8 = t;
  t = SSL_table_get(a_8, b_8);
  {
    ATerm n_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_11 = NULL,e_8 = NULL,g_8 = NULL,i_8 = NULL,k_8 = NULL;
        t = eval_config_0_0(t);
        p_11 = t;
        i_8 = t;
        t = term_n_38;
        e_8 = t;
        t = i_8;
        k_8 = t;
        t = term_a_40;
        g_8 = t;
        t = SSL_table_put(e_8, g_8, p_11);
        t = p_11;
        ;
        LocalPopChoice(o_41);
      }
    else
      {
        t = n_41;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm e_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_18 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL,s_8 = NULL,w_8 = NULL,x_8 = NULL;
  s_8 = t;
  t = term_n_38;
  n_8 = t;
  t = s_8;
  w_8 = t;
  t = term_p_41;
  o_8 = t;
  t = w_8;
  x_8 = t;
  t = term_u_19;
  p_8 = t;
  t = SSL_table_put(n_8, o_8, p_8);
  t = term_q_41;
  return(t);
}
ATerm k_18 (ATerm t)
{
  t = term_r_41;
  return(t);
}
ATerm l_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_18 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,m_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,u_9 = NULL,v_9 = NULL;
  c_9 = t;
  t = term_n_38;
  y_8 = t;
  t = c_9;
  d_9 = t;
  t = term_p_41;
  z_8 = t;
  t = d_9;
  e_9 = t;
  t = term_u_19;
  a_9 = t;
  t = SSL_table_put(y_8, z_8, a_9);
  r_9 = t;
  t = term_n_38;
  m_9 = t;
  t = r_9;
  u_9 = t;
  t = term_s_41;
  p_9 = t;
  t = u_9;
  v_9 = t;
  t = term_u_19;
  q_9 = t;
  t = SSL_table_put(m_9, p_9, q_9);
  t = term_t_41;
  return(t);
}
ATerm v_18 (ATerm t)
{
  t = term_u_41;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_18, f_18, k_18, t);
      ;
      LocalPopChoice(w_41);
    }
  else
    {
      t = v_41;
      t = Option_3_0(l_18, n_18, v_18, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,w_9 = NULL,x_9 = NULL;
  o_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_37 = ATgetFirst((ATermList) t);
      l_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_37);
  j_37 = t;
  t = k_37;
  t = d_106(t);
  m_37 = t;
  t = l_37;
  t = e_106(t);
  n_37 = t;
  x_9 = t;
  t = (ATerm) ATinsert(CheckATermList(n_37), m_37);
  w_9 = t;
  t = SSLsetAnnotations(w_9, j_37);
  return(t);
}
ATerm w_18 (ATerm t)
{
  ATerm t_37 = NULL,y_9 = NULL,z_9 = NULL,c_10 = NULL,d_10 = NULL;
  t_37 = t;
  c_10 = t;
  t = term_n_38;
  y_9 = t;
  t = c_10;
  d_10 = t;
  t = term_a_40;
  z_9 = t;
  t = SSL_table_put(y_9, z_9, t_37);
  t = (ATerm) ATmakeAppl(sym_Program_1, t_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_152 (ATerm), ATerm t)
{
  ATerm s_37 = NULL;
  s_37 = t;
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_41;
        t = x_152(t);
        ;
        LocalPopChoice(y_41);
      }
    else
      {
        t = x_41;
      }
    t = s_37;
    {
      ATerm y_18 (ATerm t)
      {
        ATerm a_42 = t;
        int b_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_42 = t;
            int d_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_42);
              }
            else
              {
                t = c_42;
                t = x_152(t);
                t = Cons_2_0(_id, y_18, t);
              }
            ;
            LocalPopChoice(b_42);
          }
        else
          {
            t = a_42;
            {
              ATerm v_37 = NULL,w_37 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_37 = ATgetFirst((ATermList) t);
                  w_37 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_37), (ATerm) ATmakeAppl(sym_Undefined_1, v_37));
            }
          }
        return(t);
      }
      t = Cons_2_0(w_18, y_18, t);
    }
  }
  return(t);
}
ATerm a_19 (ATerm t)
{
  ATerm g_38 = NULL;
  g_38 = t;
  if(match_string(t, "--help"))
    {
      t = g_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_38;
        }
    }
  return(t);
}
ATerm b_19 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
  r_10 = t;
  t = term_n_38;
  k_10 = t;
  t = r_10;
  s_10 = t;
  t = term_y_40;
  l_10 = t;
  t = s_10;
  t_10 = t;
  t = term_u_19;
  q_10 = t;
  t = SSL_table_put(k_10, l_10, q_10);
  t = term_e_42;
  return(t);
}
ATerm c_19 (ATerm t)
{
  t = term_f_42;
  return(t);
}
ATerm d_19 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_152 (ATerm), ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,c_12 = NULL,f_12 = NULL;
  d_38 = t;
  h_10 = t;
  t = term_p_39;
  e_10 = t;
  t = h_10;
  i_10 = t;
  t = term_q_39;
  f_10 = t;
  t = i_10;
  j_10 = t;
  t = (ATerm) ATempty;
  g_10 = t;
  t = SSL_table_put(e_10, f_10, g_10);
  t = d_38;
  {
    ATerm z_18 (ATerm t)
    {
      ATerm g_42 = t;
      int h_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_152(t);
          ;
          LocalPopChoice(h_42);
        }
      else
        {
          t = g_42;
          {
            ATerm i_42 = t;
            int j_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_19, b_19, c_19, t);
                ;
                LocalPopChoice(j_42);
              }
            else
              {
                t = i_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_18, t);
    {
      ATerm k_42 = t;
      int l_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_38 = NULL;
          l_38 = t;
          {
            ATerm m_42 = t;
            int n_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_11 = NULL,e_11 = NULL;
                t = l_38;
                {
                  ATerm o_42 = t;
                  int p_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,y_10 = NULL;
                      t = term_y_40;
                      w_10 = t;
                      t = term_n_38;
                      u_10 = t;
                      t = w_10;
                      y_10 = t;
                      t = term_y_40;
                      v_10 = t;
                      t = SSL_table_get(u_10, v_10);
                      {
                        ATerm q_42 = t;
                        int r_42 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_13 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
                            t = eval_config_0_0(t);
                            c_13 = t;
                            b_11 = t;
                            t = term_n_38;
                            z_10 = t;
                            t = b_11;
                            c_11 = t;
                            t = term_y_40;
                            a_11 = t;
                            t = SSL_table_put(z_10, a_11, c_13);
                            t = c_13;
                            ;
                            LocalPopChoice(r_42);
                          }
                        else
                          {
                            t = q_42;
                          }
                      }
                      ;
                      LocalPopChoice(p_42);
                    }
                  else
                    {
                      t = o_42;
                      t = fetch_1_0(d_19, t);
                    }
                  t = l_38;
                  t = default_system_usage_0_0(t);
                  e_11 = t;
                  t = term_e_39;
                  d_11 = t;
                  t = SSL_exit(d_11);
                }
                ;
                LocalPopChoice(n_42);
              }
            else
              {
                t = m_42;
                {
                  ATerm f_11 = NULL,g_11 = NULL,i_11 = NULL,j_11 = NULL,q_11 = NULL,r_11 = NULL;
                  t = term_p_41;
                  i_11 = t;
                  t = term_n_38;
                  f_11 = t;
                  t = i_11;
                  j_11 = t;
                  t = term_p_41;
                  g_11 = t;
                  t = SSL_table_get(f_11, g_11);
                  {
                    ATerm s_42 = t;
                    int t_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_13 = NULL,k_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
                        t = eval_config_0_0(t);
                        q_13 = t;
                        n_11 = t;
                        t = term_n_38;
                        k_11 = t;
                        t = n_11;
                        o_11 = t;
                        t = term_p_41;
                        m_11 = t;
                        t = SSL_table_put(k_11, m_11, q_13);
                        t = q_13;
                        ;
                        LocalPopChoice(t_42);
                      }
                    else
                      {
                        t = s_42;
                      }
                    t = l_38;
                    t = default_system_about_0_0(t);
                    r_11 = t;
                    t = term_e_39;
                    q_11 = t;
                    t = SSL_exit(q_11);
                  }
                }
              }
          }
          ;
          LocalPopChoice(l_42);
        }
      else
        {
          t = k_42;
          {
            ATerm u_42 = t;
            int v_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_11 = NULL,t_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
                ATerm e_19 (ATerm t)
                {
                  ATerm f_19 (ATerm t)
                  {
                    if(((e_38 != NULL) && (e_38 != t)))
                      _fail(t);
                    else
                      e_38 = t;
                    return(t);
                  }
                  t = Undefined_1_0(f_19, t);
                  return(t);
                }
                t = fetch_1_0(e_19, t);
                w_11 = t;
                t = term_v_19;
                s_11 = t;
                t = w_11;
                x_11 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_38)), term_w_42);
                t_11 = t;
                t = SSL_printnl(s_11, t_11);
                t = (ATerm) ATmakeAppl(sym__2, term_v_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_38)), term_w_42));
                t = default_system_usage_0_0(t);
                z_11 = t;
                t = term_y_19;
                y_11 = t;
                t = SSL_exit(y_11);
                ;
                LocalPopChoice(v_42);
              }
            else
              {
                t = u_42;
              }
          }
        }
      f_38 = t;
      f_12 = t;
      t = term_p_39;
      c_12 = t;
      t = SSL_table_destroy(c_12);
      t = f_38;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_150 (ATerm), ATerm x_150 (ATerm), ATerm y_150 (ATerm), ATerm z_150 (ATerm), ATerm t)
{
  ATerm o_38 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
  t = parse_options_1_0(w_150, t);
  o_38 = t;
  h_12 = t;
  t = term_x_42;
  g_12 = t;
  t = SSL_table_create(g_12);
  k_12 = t;
  t = term_x_42;
  i_12 = t;
  t = k_12;
  l_12 = t;
  t = term_y_42;
  j_12 = t;
  t = SSL_table_put(i_12, j_12, o_38);
  t = o_38;
  t = y_150(t);
  {
    ATerm z_42 = t;
    int a_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_150, t);
        ;
        LocalPopChoice(a_43);
      }
    else
      {
        t = z_42;
        {
          ATerm b_43 = t;
          int c_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_150(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_43);
            }
          else
            {
              t = b_43;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm h_19 (ATerm t)
{
  t = if_verbose2_1_0(m_19, t);
  return(t);
}
ATerm j_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_19 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
  p_12 = t;
  t = term_n_38;
  m_12 = t;
  t = p_12;
  q_12 = t;
  t = term_d_43;
  n_12 = t;
  t = q_12;
  r_12 = t;
  t = term_u_19;
  o_12 = t;
  t = SSL_table_put(m_12, n_12, o_12);
  t = term_e_43;
  return(t);
}
ATerm l_19 (ATerm t)
{
  t = term_f_43;
  return(t);
}
ATerm m_19 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,s_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
  p_38 = t;
  t = term_a_40;
  w_12 = t;
  t = term_n_38;
  s_12 = t;
  t = w_12;
  x_12 = t;
  t = term_a_40;
  v_12 = t;
  t = SSL_table_get(s_12, v_12);
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_13 = NULL,y_12 = NULL,a_13 = NULL,d_13 = NULL,e_13 = NULL;
        t = eval_config_0_0(t);
        y_13 = t;
        d_13 = t;
        t = term_n_38;
        y_12 = t;
        t = d_13;
        e_13 = t;
        t = term_a_40;
        a_13 = t;
        t = SSL_table_put(y_12, a_13, y_13);
        t = y_13;
        ;
        LocalPopChoice(h_43);
      }
    else
      {
        t = g_43;
      }
    q_38 = t;
    h_13 = t;
    t = term_v_19;
    f_13 = t;
    t = h_13;
    i_13 = t;
    t = (ATerm) ATinsert(ATempty, q_38);
    g_13 = t;
    t = SSL_printnl(f_13, g_13);
    t = p_38;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm f_150 (ATerm), ATerm g_150 (ATerm), ATerm h_150 (ATerm), ATerm t)
{
  ATerm g_19 (ATerm t)
  {
    ATerm i_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_150(t);
        ;
        LocalPopChoice(j_43);
      }
    else
      {
        t = i_43;
        {
          ATerm k_43 = t;
          int l_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(l_43);
            }
          else
            {
              t = k_43;
              {
                ATerm m_43 = t;
                int n_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(n_43);
                  }
                else
                  {
                    t = m_43;
                    {
                      ATerm o_43 = t;
                      int p_43 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(j_19, k_19, l_19, t);
                          ;
                          LocalPopChoice(p_43);
                        }
                      else
                        {
                          t = o_43;
                          {
                            ATerm q_43 = t;
                            int r_43 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(r_43);
                              }
                            else
                              {
                                t = q_43;
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
  ATerm i_19 (ATerm t)
  {
    ATerm r_38 = NULL,s_38 = NULL,i_14 = NULL;
    r_38 = t;
    {
      ATerm s_43 = t;
      int t_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_19 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((s_38 != NULL) && (s_38 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_38 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_19, t);
          ;
          LocalPopChoice(t_43);
        }
      else
        {
          t = s_43;
          t = term_u_43;
          s_38 = t;
        }
      t = not_null(s_38);
      t = ReadFromFile_0_0(t);
      i_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_38, i_14);
      t = apply_strategy_1_0(f_150, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(g_19, h_150, h_19, i_19, t);
  return(t);
}
ATerm o_19 (ATerm t)
{
  t = _2_0(_id, p_19, t);
  return(t);
}
ATerm p_19 (ATerm t)
{
  t = downup2_2_0(q_19, r_19, t);
  t = downup_1_0(t_19, t);
  return(t);
}
ATerm q_19 (ATerm t)
{
  t = repeat_1_0(s_19, t);
  return(t);
}
ATerm r_19 (ATerm t)
{
  t = repeat_1_0(Canon_0_0, t);
  return(t);
}
ATerm s_19 (ATerm t)
{
  ATerm v_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Canon_0_0(t);
      ;
      LocalPopChoice(w_43);
    }
  else
    {
      t = v_43;
      {
        ATerm x_43 = t;
        int y_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(y_43);
          }
        else
          {
            t = x_43;
            t = LiftCallArgs_0_0(t);
          }
      }
    }
  return(t);
}
ATerm t_19 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(o_19, _fail, default_usage_0_0, t);
  return(t);
}
