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
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Explode_2;
Symbol sym_Anno_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_As_2;
Symbol sym_RDefT_4;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Call_2;
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
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Undefined_0;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
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
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
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
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
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
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_k_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_l_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_q_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_n_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_a_31;
ATerm term_x_30;
ATerm term_g_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_y_29;
ATerm term_v_29;
ATerm term_n_29;
ATerm term_k_29;
ATerm term_m_28;
ATerm term_g_24;
ATerm term_b_8;
ATerm term_w_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
void init_constant_terms (void)
{
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_Sort_2, term_m_7, (ATerm) ATempty);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_ConstType_1, term_n_7);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_n_31, term_o_31);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_31);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_f_31);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym__2, term_d_32, term_e_32);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__2, term_z_33, term_f_31);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym__2, term_d_34, term_f_31);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym__2, term_b_33, term_f_31);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_f_31);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm b_0 (ATerm);
ATerm c_0 (ATerm);
ATerm e_0 (ATerm);
ATerm o_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm topdown_1_0 (ATerm g_92 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm f_5 (ATerm n_69, ATerm m_69, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm k_93 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_12 (ATerm o_68, ATerm u_68, ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm at_end_1_0 (ATerm r_107 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm a_81 (ATerm s_80, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm j_12 (ATerm z_68, ATerm h_69, ATerm g_69, ATerm);
ATerm pat_td_1_0 (ATerm m_90 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm MatchingCongruence_0_0 (ATerm);
ATerm repeat_1_0 (ATerm a_102 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm h_92 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm define_congruences_0_0 (ATerm);
ATerm map_1_0 (ATerm b_107 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm);
ATerm k_12 (ATerm j_49, ATerm k_49, ATerm);
ATerm l_12 (ATerm x_52, ATerm y_52, ATerm);
ATerm n_12 (ATerm c_113 (ATerm), ATerm t_474, ATerm b_53, ATerm);
ATerm m_12 (ATerm t_52, ATerm u_52, ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm output_1_0 (ATerm l_117 (ATerm), ATerm);
ATerm m_89 (ATerm g_89, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm p_12 (ATerm z_52, ATerm);
ATerm q_12 (ATerm l_49, ATerm m_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_90 (ATerm w_89, ATerm);
ATerm a_91 (ATerm a_90, ATerm b_90, ATerm d_90, ATerm);
ATerm b_91 (ATerm l_90, ATerm n_90, ATerm o_90, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm m_117 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm y_12 (ATerm a_54, ATerm b_54, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm w_12 (ATerm y_58, ATerm z_58, ATerm x_58, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm r_12 (ATerm j_46, ATerm k_46, ATerm);
ATerm foldr_2_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_114 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm r_4 (ATerm);
ATerm need_help_1_0 (ATerm c_117 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm w_4 (ATerm);
ATerm y_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_107 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_12 (ATerm l_40, ATerm m_40, ATerm);
ATerm debug_1_0 (ATerm a_113 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm v_12 (ATerm p_60, ATerm q_60, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm g_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm u_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_119 (ATerm), ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm parse_options_1_0 (ATerm e_119 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm b_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_6 = ATgetArgument(t, 0);
      if(((ATgetType(n_6) != AT_LIST) || !(ATisEmpty(n_6))))
        _fail(t);
      {
        ATerm p_6 = ATgetArgument(t, 1);
        if(((ATgetType(p_6) != AT_LIST) || !(ATisEmpty(p_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_6 = ATgetArgument(t, 0);
      if(((ATgetType(q_6) == AT_LIST) && !(ATisEmpty(q_6))))
        {
          c_16 = ATgetFirst((ATermList) q_6);
          d_16 = (ATerm) ATgetNext((ATermList) q_6);
        }
      else
        _fail(t);
      {
        ATerm s_6 = ATgetArgument(t, 1);
        if(((ATgetType(s_6) == AT_LIST) && !(ATisEmpty(s_6))))
          {
            e_16 = ATgetFirst((ATermList) s_6);
            f_16 = (ATerm) ATgetNext((ATermList) s_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_16, e_16), (ATerm) ATmakeAppl(sym__2, d_16, f_16));
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm g_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym__2))
    {
      g_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_16), g_16);
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL;
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_16), (ATerm) ATmakeAppl(sym_Match_1, p_16));
  return(t);
}
ATerm p_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_6 = ATgetArgument(t, 0);
      if(((ATgetType(t_6) != AT_LIST) || !(ATisEmpty(t_6))))
        _fail(t);
      {
        ATerm u_6 = ATgetArgument(t, 1);
        if(((ATgetType(u_6) != AT_LIST) || !(ATisEmpty(u_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,o_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      if(((ATgetType(x_6) == AT_LIST) && !(ATisEmpty(x_6))))
        {
          k_25 = ATgetFirst((ATermList) x_6);
          l_25 = (ATerm) ATgetNext((ATermList) x_6);
        }
      else
        _fail(t);
      {
        ATerm y_6 = ATgetArgument(t, 1);
        if(((ATgetType(y_6) == AT_LIST) && !(ATisEmpty(y_6))))
          {
            m_25 = ATgetFirst((ATermList) y_6);
            o_25 = (ATerm) ATgetNext((ATermList) y_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_25, m_25), (ATerm) ATmakeAppl(sym__2, l_25, o_25));
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm p_25 = NULL,r_25 = NULL;
  if(match_cons(t, sym__2))
    {
      p_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_25), p_25);
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL;
  if(match_cons(t, sym__2))
    {
      w_26 = ATgetArgument(t, 0);
      x_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_26), (ATerm) ATmakeAppl(sym_Match_1, x_26));
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm z_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm b_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(a_7);
      {
        ATerm j_42 = NULL,k_42 = NULL;
        j_42 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm d_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        k_42 = t;
        t = SSLgetAnnotations(j_42);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_7 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) e_7) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_7 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(f_7) != AT_LIST) || !(ATisEmpty(f_7))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_42;
      }
    }
  else
    {
      t = z_6;
      {
        ATerm h_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm k_7 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) k_7) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm l_7 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_7);
            _fail(t);
          }
        else
          {
            t = h_7;
          }
      }
    }
  return(t);
}
ATerm v_0 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm h_54 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_54, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_7), term_o_7));
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm i_54 = NULL,o_54 = NULL;
  o_54 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_54 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, i_54, term_o_7);
    }
  else
    {
      t = o_54;
    }
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm a_55 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_55, term_o_7);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL;
  c_55 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_55 = ATgetArgument(t, 0);
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, b_55, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_7), term_o_7));
            ;
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            t = c_55;
          }
      }
    }
  else
    {
      t = c_55;
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm m_55 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_55, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_7), term_o_7));
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL;
  o_55 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_55 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, n_55, term_o_7);
    }
  else
    {
      t = o_55;
    }
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    ATerm q_5 = NULL,r_5 = NULL,t_5 = NULL,o_6 = NULL,v_6 = NULL,c_7 = NULL,m_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,z_8 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,s_9 = NULL;
    s_9 = t;
    if(match_cons(t, sym_Test_1))
      {
        p_9 = ATgetArgument(t, 0);
        t = p_9;
        if(match_cons(t, sym_Id_0))
          {
            ATerm s_7 = t;
            int t_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_w_7;
                t = a_0(t);
                ;
                LocalPopChoice(t_7);
              }
            else
              {
                t = s_7;
                {
                  ATerm x_7 = t;
                  int y_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_9 = NULL,m_10 = NULL,o_10 = NULL,z_10 = NULL,i_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
                      t = s_9;
                      t = new_0_0(t);
                      z_9 = t;
                      t = bottomup_1_0(a_0, t);
                      r_11 = t;
                      t = (ATerm) ATempty;
                      t = a_0(t);
                      s_11 = t;
                      t = (ATerm) ATinsert(CheckATermList(s_11), r_11);
                      t = a_0(t);
                      m_10 = t;
                      t = z_9;
                      t = bottomup_1_0(a_0, t);
                      q_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, q_11);
                      t = a_0(t);
                      p_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, p_11);
                      t = a_0(t);
                      z_10 = t;
                      t = p_9;
                      t = bottomup_1_0(a_0, t);
                      l_11 = t;
                      t = z_9;
                      t = bottomup_1_0(a_0, t);
                      o_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, o_11);
                      t = a_0(t);
                      n_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, n_11);
                      t = a_0(t);
                      m_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_11, m_11);
                      t = a_0(t);
                      i_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_10, i_11);
                      t = a_0(t);
                      o_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, o_10);
                      t = a_0(t);
                      ;
                      LocalPopChoice(y_7);
                    }
                  else
                    {
                      t = x_7;
                      t = s_9;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm z_7 = t;
                int a_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_b_8;
                    t = a_0(t);
                    ;
                    LocalPopChoice(a_8);
                  }
                else
                  {
                    t = z_7;
                    {
                      ATerm c_8 = t;
                      int d_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,h_12 = NULL,i_12 = NULL;
                          t = s_9;
                          t = new_0_0(t);
                          v_11 = t;
                          t = bottomup_1_0(a_0, t);
                          h_12 = t;
                          t = (ATerm) ATempty;
                          t = a_0(t);
                          i_12 = t;
                          t = (ATerm) ATinsert(CheckATermList(i_12), h_12);
                          t = a_0(t);
                          w_11 = t;
                          t = v_11;
                          t = bottomup_1_0(a_0, t);
                          f_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, f_12);
                          t = a_0(t);
                          e_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, e_12);
                          t = a_0(t);
                          y_11 = t;
                          t = p_9;
                          t = bottomup_1_0(a_0, t);
                          a_12 = t;
                          t = v_11;
                          t = bottomup_1_0(a_0, t);
                          d_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, d_12);
                          t = a_0(t);
                          c_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, c_12);
                          t = a_0(t);
                          b_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_12, b_12);
                          t = a_0(t);
                          z_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, z_11);
                          t = a_0(t);
                          x_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, w_11, x_11);
                          t = a_0(t);
                          ;
                          LocalPopChoice(d_8);
                        }
                      else
                        {
                          t = c_8;
                          t = s_9;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    m_9 = ATgetArgument(t, 0);
                    {
                      ATerm e_8 = t;
                      int f_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, m_9);
                          t = a_0(t);
                          ;
                          LocalPopChoice(f_8);
                        }
                      else
                        {
                          t = e_8;
                          {
                            ATerm i_8 = t;
                            int j_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm x_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
                                t = s_9;
                                t = new_0_0(t);
                                x_12 = t;
                                t = bottomup_1_0(a_0, t);
                                j_13 = t;
                                t = (ATerm) ATempty;
                                t = a_0(t);
                                k_13 = t;
                                t = (ATerm) ATinsert(CheckATermList(k_13), j_13);
                                t = a_0(t);
                                z_12 = t;
                                t = x_12;
                                t = bottomup_1_0(a_0, t);
                                i_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, i_13);
                                t = a_0(t);
                                h_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, h_13);
                                t = a_0(t);
                                b_13 = t;
                                t = p_9;
                                t = bottomup_1_0(a_0, t);
                                d_13 = t;
                                t = x_12;
                                t = bottomup_1_0(a_0, t);
                                g_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, g_13);
                                t = a_0(t);
                                f_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, f_13);
                                t = a_0(t);
                                e_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_13, e_13);
                                t = a_0(t);
                                c_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, b_13, c_13);
                                t = a_0(t);
                                a_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, z_12, a_13);
                                t = a_0(t);
                                ;
                                LocalPopChoice(j_8);
                              }
                            else
                              {
                                t = i_8;
                                t = s_9;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm n_8 = t;
                    int o_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
                        t = s_9;
                        t = new_0_0(t);
                        n_13 = t;
                        t = bottomup_1_0(a_0, t);
                        y_13 = t;
                        t = (ATerm) ATempty;
                        t = a_0(t);
                        z_13 = t;
                        t = (ATerm) ATinsert(CheckATermList(z_13), y_13);
                        t = a_0(t);
                        o_13 = t;
                        t = n_13;
                        t = bottomup_1_0(a_0, t);
                        x_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, x_13);
                        t = a_0(t);
                        w_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, w_13);
                        t = a_0(t);
                        q_13 = t;
                        t = p_9;
                        t = bottomup_1_0(a_0, t);
                        s_13 = t;
                        t = n_13;
                        t = bottomup_1_0(a_0, t);
                        v_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, v_13);
                        t = a_0(t);
                        u_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, u_13);
                        t = a_0(t);
                        t_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_13, t_13);
                        t = a_0(t);
                        r_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, q_13, r_13);
                        t = a_0(t);
                        p_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, o_13, p_13);
                        t = a_0(t);
                        ;
                        LocalPopChoice(o_8);
                      }
                    else
                      {
                        t = n_8;
                        t = s_9;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            p_9 = ATgetArgument(t, 0);
            t = p_9;
            if(match_cons(t, sym_Id_0))
              {
                ATerm s_8 = t;
                int t_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_b_8;
                    t = a_0(t);
                    ;
                    LocalPopChoice(t_8);
                  }
                else
                  {
                    t = s_8;
                    t = s_9;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm x_8 = t;
                    int y_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_w_7;
                        t = a_0(t);
                        ;
                        LocalPopChoice(y_8);
                      }
                    else
                      {
                        t = x_8;
                        t = s_9;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        m_9 = ATgetArgument(t, 0);
                        {
                          ATerm a_9 = t;
                          int b_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, m_9);
                              t = a_0(t);
                              ;
                              LocalPopChoice(b_9);
                            }
                          else
                            {
                              t = a_9;
                              t = s_9;
                            }
                        }
                      }
                    else
                      {
                        t = s_9;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                p_9 = ATgetArgument(t, 0);
                o_9 = ATgetArgument(t, 1);
                t = o_9;
                if(match_cons(t, sym_Id_0))
                  {
                    t = p_9;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = o_9;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = p_9;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                m_9 = ATgetArgument(t, 0);
                                n_9 = ATgetArgument(t, 1);
                                t = p_9;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    m_9 = ATgetArgument(t, 0);
                                    n_9 = ATgetArgument(t, 1);
                                    t = p_9;
                                  }
                                else
                                  {
                                    t = p_9;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        g_9 = ATgetArgument(t, 0);
                        h_9 = ATgetArgument(t, 1);
                        t = g_9;
                        if(match_cons(t, sym_Match_1))
                          {
                            f_9 = ATgetArgument(t, 0);
                            t = f_9;
                            if(match_cons(t, sym_Op_2))
                              {
                                w_8 = ATgetArgument(t, 0);
                                p_8 = ATgetArgument(t, 1);
                                t = p_9;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_9;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm c_9 = t;
                                        int d_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_b_8;
                                            t = a_0(t);
                                            ;
                                            LocalPopChoice(d_9);
                                          }
                                        else
                                          {
                                            t = c_9;
                                            t = s_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_9 = ATgetArgument(t, 0);
                                            n_9 = ATgetArgument(t, 1);
                                            {
                                              ATerm e_9 = t;
                                              int j_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm t_15 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                  t = a_0(t);
                                                  t_15 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, t_15);
                                                  t = a_0(t);
                                                  ;
                                                  LocalPopChoice(j_9);
                                                }
                                              else
                                                {
                                                  t = e_9;
                                                  t = s_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                m_9 = ATgetArgument(t, 0);
                                                t = m_9;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    z_8 = ATgetArgument(t, 0);
                                                    q_8 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm k_9 = t;
                                                      int l_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, z_8, w_8);
                                                          {
                                                            ATerm q_9 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm f_0 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    f_0 = ATgetArgument(t, 0);
                                                                    if((f_0 != ATgetArgument(t, 1)))
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
                                                                t = q_9;
                                                              }
                                                            t = term_b_8;
                                                            t = bottomup_1_0(a_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(l_9);
                                                        }
                                                      else
                                                        {
                                                          t = k_9;
                                                          {
                                                            ATerm r_9 = t;
                                                            int t_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm z_15 = NULL;
                                                                t = w_8;
                                                                if((z_8 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, q_8, p_8);
                                                                t = genzip_4_0(b_0, c_0, e_0, o_0, t);
                                                                z_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, z_8, q_8)), h_9));
                                                                t = bottomup_1_0(a_0, t);
                                                                ;
                                                                LocalPopChoice(t_9);
                                                              }
                                                            else
                                                              {
                                                                t = r_9;
                                                                {
                                                                  ATerm u_9 = t;
                                                                  int v_9 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm s_16 = NULL;
                                                                      t = f_9;
                                                                      if((m_9 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, m_9);
                                                                      t = a_0(t);
                                                                      s_16 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_16, h_9);
                                                                      t = a_0(t);
                                                                      ;
                                                                      LocalPopChoice(v_9);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = u_9;
                                                                      t = s_9;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm x_9 = t;
                                                    int y_9 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm y_16 = NULL;
                                                        t = f_9;
                                                        if((m_9 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, m_9);
                                                        t = a_0(t);
                                                        y_16 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_16, h_9);
                                                        t = a_0(t);
                                                        ;
                                                        LocalPopChoice(y_9);
                                                      }
                                                    else
                                                      {
                                                        t = x_9;
                                                        t = s_9;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    m_9 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm b_10 = t;
                                                      int c_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_17 = NULL;
                                                          t = f_9;
                                                          if((m_9 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, m_9);
                                                          t = a_0(t);
                                                          c_17 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_17, h_9);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(c_10);
                                                        }
                                                      else
                                                        {
                                                          t = b_10;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        n_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_10 = t;
                                                          int e_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_17 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              h_17 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, h_17);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(e_10);
                                                            }
                                                          else
                                                            {
                                                              t = d_10;
                                                              t = s_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = s_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = p_9;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_9;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm f_10 = t;
                                        int g_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_b_8;
                                            t = a_0(t);
                                            ;
                                            LocalPopChoice(g_10);
                                          }
                                        else
                                          {
                                            t = f_10;
                                            t = s_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_9 = ATgetArgument(t, 0);
                                            n_9 = ATgetArgument(t, 1);
                                            {
                                              ATerm h_10 = t;
                                              int j_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm w_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                  t = a_0(t);
                                                  w_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, w_17);
                                                  t = a_0(t);
                                                  ;
                                                  LocalPopChoice(j_10);
                                                }
                                              else
                                                {
                                                  t = h_10;
                                                  t = s_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                m_9 = ATgetArgument(t, 0);
                                                {
                                                  ATerm k_10 = t;
                                                  int n_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm c_18 = NULL;
                                                      t = f_9;
                                                      if((m_9 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, m_9);
                                                      t = a_0(t);
                                                      c_18 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_18, h_9);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(n_10);
                                                    }
                                                  else
                                                    {
                                                      t = k_10;
                                                      t = s_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    m_9 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm p_10 = t;
                                                      int q_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm m_18 = NULL;
                                                          t = f_9;
                                                          if((m_9 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_9);
                                                          t = a_0(t);
                                                          m_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_18, h_9);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(q_10);
                                                        }
                                                      else
                                                        {
                                                          t = p_10;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        n_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_10 = t;
                                                          int s_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_18 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              r_18 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, r_18);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(s_10);
                                                            }
                                                          else
                                                            {
                                                              t = r_10;
                                                              t = s_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = s_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Build_1))
                              {
                                f_9 = ATgetArgument(t, 0);
                                t = f_9;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    w_8 = ATgetArgument(t, 0);
                                    t = p_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_9;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm t_10 = t;
                                            int u_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_8;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(u_10);
                                              }
                                            else
                                              {
                                                t = t_10;
                                                t = s_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_9 = ATgetArgument(t, 0);
                                                n_9 = ATgetArgument(t, 1);
                                                {
                                                  ATerm v_10 = t;
                                                  int w_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_19 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                      t = a_0(t);
                                                      e_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, e_19);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(w_10);
                                                    }
                                                  else
                                                    {
                                                      t = v_10;
                                                      t = s_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm x_10 = t;
                                                int y_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm a_11 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(y_10);
                                                    {
                                                      ATerm b_11 = t;
                                                      int c_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_19 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_9);
                                                          t = a_0(t);
                                                          r_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_19, h_9);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(c_11);
                                                        }
                                                      else
                                                        {
                                                          t = b_11;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = x_10;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        t = m_9;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            z_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm e_11 = t;
                                                              int f_11 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm v_19 = NULL,y_19 = NULL;
                                                                  t = w_8;
                                                                  if((z_8 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, z_8);
                                                                  t = a_0(t);
                                                                  y_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, y_19);
                                                                  t = a_0(t);
                                                                  v_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_19, h_9);
                                                                  t = a_0(t);
                                                                  ;
                                                                  LocalPopChoice(f_11);
                                                                }
                                                              else
                                                                {
                                                                  t = e_11;
                                                                  t = s_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = s_9;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_9 = ATgetArgument(t, 0);
                                                            n_9 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm g_11 = t;
                                                              int j_11 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_20 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                                  t = a_0(t);
                                                                  k_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, k_20);
                                                                  t = a_0(t);
                                                                  ;
                                                                  LocalPopChoice(j_11);
                                                                }
                                                              else
                                                                {
                                                                  t = g_11;
                                                                  t = s_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = s_9;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_9;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm k_11 = t;
                                            int t_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_8;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(t_11);
                                              }
                                            else
                                              {
                                                t = k_11;
                                                t = s_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_9 = ATgetArgument(t, 0);
                                                n_9 = ATgetArgument(t, 1);
                                                {
                                                  ATerm u_11 = t;
                                                  int o_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_20 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                      t = a_0(t);
                                                      x_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, x_20);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(o_12);
                                                    }
                                                  else
                                                    {
                                                      t = u_11;
                                                      t = s_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm s_12 = t;
                                                int t_12 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm l_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(t_12);
                                                    {
                                                      ATerm m_13 = t;
                                                      int a_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_9);
                                                          t = a_0(t);
                                                          c_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_21, h_9);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(a_14);
                                                        }
                                                      else
                                                        {
                                                          t = m_13;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = s_12;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        n_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_14 = t;
                                                          int c_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_21 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              i_21 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, i_21);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(c_14);
                                                            }
                                                          else
                                                            {
                                                              t = b_14;
                                                              t = s_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = s_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_PrimT_3))
                                  {
                                    f_9 = ATgetArgument(t, 0);
                                    r_8 = ATgetArgument(t, 1);
                                    u_8 = ATgetArgument(t, 2);
                                    t = p_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_9;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm d_14 = t;
                                            int e_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_8;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(e_14);
                                              }
                                            else
                                              {
                                                t = d_14;
                                                t = s_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_9 = ATgetArgument(t, 0);
                                                n_9 = ATgetArgument(t, 1);
                                                {
                                                  ATerm f_14 = t;
                                                  int g_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm v_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                      t = a_0(t);
                                                      v_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, v_21);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(g_14);
                                                    }
                                                  else
                                                    {
                                                      t = f_14;
                                                      t = s_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm h_14 = t;
                                                int i_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm j_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(i_14);
                                                    {
                                                      ATerm k_14 = t;
                                                      int l_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, f_9, r_8, u_8);
                                                          t = a_0(t);
                                                          j_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_22, h_9);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(l_14);
                                                        }
                                                      else
                                                        {
                                                          t = k_14;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = h_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        n_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm m_14 = t;
                                                          int n_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              r_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, r_22);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(n_14);
                                                            }
                                                          else
                                                            {
                                                              t = m_14;
                                                              t = s_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = s_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_9;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm o_14 = t;
                                            int p_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_8;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(p_14);
                                              }
                                            else
                                              {
                                                t = o_14;
                                                t = s_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_9 = ATgetArgument(t, 0);
                                                n_9 = ATgetArgument(t, 1);
                                                {
                                                  ATerm q_14 = t;
                                                  int r_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                      t = a_0(t);
                                                      d_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, d_23);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(r_14);
                                                    }
                                                  else
                                                    {
                                                      t = q_14;
                                                      t = s_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    m_9 = ATgetArgument(t, 0);
                                                    n_9 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm s_14 = t;
                                                      int t_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm q_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                          t = a_0(t);
                                                          q_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, q_23);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(t_14);
                                                        }
                                                      else
                                                        {
                                                          t = s_14;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = s_9;
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            g_9 = ATgetArgument(t, 0);
                            t = g_9;
                            if(match_cons(t, sym_Op_2))
                              {
                                f_9 = ATgetArgument(t, 0);
                                r_8 = ATgetArgument(t, 1);
                                t = p_9;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_9;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm u_14 = t;
                                        int v_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_b_8;
                                            t = a_0(t);
                                            ;
                                            LocalPopChoice(v_14);
                                          }
                                        else
                                          {
                                            t = u_14;
                                            t = s_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_9 = ATgetArgument(t, 0);
                                            n_9 = ATgetArgument(t, 1);
                                            {
                                              ATerm w_14 = t;
                                              int x_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm c_25 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                  t = a_0(t);
                                                  c_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, c_25);
                                                  t = a_0(t);
                                                  ;
                                                  LocalPopChoice(x_14);
                                                }
                                              else
                                                {
                                                  t = w_14;
                                                  t = s_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                m_9 = ATgetArgument(t, 0);
                                                t = m_9;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    z_8 = ATgetArgument(t, 0);
                                                    q_8 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm z_14 = t;
                                                      int a_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, z_8, f_9);
                                                          {
                                                            ATerm b_15 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_0 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    u_0 = ATgetArgument(t, 0);
                                                                    if((u_0 != ATgetArgument(t, 1)))
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
                                                                t = b_15;
                                                              }
                                                            t = term_b_8;
                                                            t = bottomup_1_0(a_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(a_15);
                                                        }
                                                      else
                                                        {
                                                          t = z_14;
                                                          {
                                                            ATerm c_15 = t;
                                                            int d_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm i_25 = NULL;
                                                                t = f_9;
                                                                if((z_8 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, q_8, r_8);
                                                                t = genzip_4_0(p_0, q_0, r_0, s_0, t);
                                                                i_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, z_8, q_8)));
                                                                t = bottomup_1_0(a_0, t);
                                                                ;
                                                                LocalPopChoice(d_15);
                                                              }
                                                            else
                                                              {
                                                                t = c_15;
                                                                {
                                                                  ATerm e_15 = t;
                                                                  int g_15 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = g_9;
                                                                      if((m_9 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, m_9);
                                                                      t = a_0(t);
                                                                      ;
                                                                      LocalPopChoice(g_15);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = e_15;
                                                                      t = s_9;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm h_15 = t;
                                                    int i_15 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = g_9;
                                                        if((m_9 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, m_9);
                                                        t = a_0(t);
                                                        ;
                                                        LocalPopChoice(i_15);
                                                      }
                                                    else
                                                      {
                                                        t = h_15;
                                                        t = s_9;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    m_9 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_15 = t;
                                                      int m_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = g_9;
                                                          if((m_9 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, m_9);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(m_15);
                                                        }
                                                      else
                                                        {
                                                          t = k_15;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        n_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_15 = t;
                                                          int p_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              v_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, v_27);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(p_15);
                                                            }
                                                          else
                                                            {
                                                              t = n_15;
                                                              t = s_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = s_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = p_9;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_9;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm r_15 = t;
                                        int s_15 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_b_8;
                                            t = a_0(t);
                                            ;
                                            LocalPopChoice(s_15);
                                          }
                                        else
                                          {
                                            t = r_15;
                                            t = s_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_9 = ATgetArgument(t, 0);
                                            n_9 = ATgetArgument(t, 1);
                                            {
                                              ATerm u_15 = t;
                                              int v_15 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm l_28 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                  t = a_0(t);
                                                  l_28 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, l_28);
                                                  t = a_0(t);
                                                  ;
                                                  LocalPopChoice(v_15);
                                                }
                                              else
                                                {
                                                  t = u_15;
                                                  t = s_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                m_9 = ATgetArgument(t, 0);
                                                {
                                                  ATerm w_15 = t;
                                                  int x_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = g_9;
                                                      if((m_9 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, m_9);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(x_15);
                                                    }
                                                  else
                                                    {
                                                      t = w_15;
                                                      t = s_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    m_9 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm y_15 = t;
                                                      int a_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = g_9;
                                                          if((m_9 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_9);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(a_16);
                                                        }
                                                      else
                                                        {
                                                          t = y_15;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        n_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_16 = t;
                                                          int j_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              c_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, c_29);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(j_16);
                                                            }
                                                          else
                                                            {
                                                              t = i_16;
                                                              t = s_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = s_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Build_1))
                              {
                                g_9 = ATgetArgument(t, 0);
                                t = g_9;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    f_9 = ATgetArgument(t, 0);
                                    t = p_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_9;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm l_16 = t;
                                            int q_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_8;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(q_16);
                                              }
                                            else
                                              {
                                                t = l_16;
                                                t = s_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_9 = ATgetArgument(t, 0);
                                                n_9 = ATgetArgument(t, 1);
                                                {
                                                  ATerm r_16 = t;
                                                  int t_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                      t = a_0(t);
                                                      o_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, o_29);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(t_16);
                                                    }
                                                  else
                                                    {
                                                      t = r_16;
                                                      t = s_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm u_16 = t;
                                                int v_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm w_16 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(v_16);
                                                    {
                                                      ATerm z_16 = t;
                                                      int a_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, g_9);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(a_17);
                                                        }
                                                      else
                                                        {
                                                          t = z_16;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = u_16;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        t = m_9;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            z_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm b_17 = t;
                                                              int d_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_30 = NULL;
                                                                  t = f_9;
                                                                  if((z_8 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, z_8);
                                                                  t = a_0(t);
                                                                  b_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, b_30);
                                                                  t = a_0(t);
                                                                  ;
                                                                  LocalPopChoice(d_17);
                                                                }
                                                              else
                                                                {
                                                                  t = b_17;
                                                                  t = s_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = s_9;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_9 = ATgetArgument(t, 0);
                                                            n_9 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm e_17 = t;
                                                              int f_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm v_30 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                                  t = a_0(t);
                                                                  v_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, v_30);
                                                                  t = a_0(t);
                                                                  ;
                                                                  LocalPopChoice(f_17);
                                                                }
                                                              else
                                                                {
                                                                  t = e_17;
                                                                  t = s_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = s_9;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_9;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm g_17 = t;
                                            int i_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_8;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(i_17);
                                              }
                                            else
                                              {
                                                t = g_17;
                                                t = s_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_9 = ATgetArgument(t, 0);
                                                n_9 = ATgetArgument(t, 1);
                                                {
                                                  ATerm m_17 = t;
                                                  int n_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm k_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                      t = a_0(t);
                                                      k_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, k_31);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(n_17);
                                                    }
                                                  else
                                                    {
                                                      t = m_17;
                                                      t = s_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm o_17 = t;
                                                int p_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm q_17 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_17);
                                                    {
                                                      ATerm r_17 = t;
                                                      int s_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, g_9);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(s_17);
                                                        }
                                                      else
                                                        {
                                                          t = r_17;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = o_17;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        n_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_17 = t;
                                                          int u_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              b_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, b_32);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(u_17);
                                                            }
                                                          else
                                                            {
                                                              t = t_17;
                                                              t = s_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = s_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_PrimT_3))
                                  {
                                    g_9 = ATgetArgument(t, 0);
                                    h_9 = ATgetArgument(t, 1);
                                    v_8 = ATgetArgument(t, 2);
                                    t = p_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_9;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_17 = t;
                                            int x_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_8;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(x_17);
                                              }
                                            else
                                              {
                                                t = v_17;
                                                t = s_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_9 = ATgetArgument(t, 0);
                                                n_9 = ATgetArgument(t, 1);
                                                {
                                                  ATerm y_17 = t;
                                                  int z_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_32 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                      t = a_0(t);
                                                      m_32 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, m_32);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(z_17);
                                                    }
                                                  else
                                                    {
                                                      t = y_17;
                                                      t = s_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm a_18 = t;
                                                int b_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm d_18 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(b_18);
                                                    {
                                                      ATerm e_18 = t;
                                                      int f_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, g_9, h_9, v_8);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(f_18);
                                                        }
                                                      else
                                                        {
                                                          t = e_18;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_18;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        n_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_18 = t;
                                                          int h_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              i_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, i_33);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(h_18);
                                                            }
                                                          else
                                                            {
                                                              t = g_18;
                                                              t = s_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = s_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Let_2))
                                      {
                                        g_9 = ATgetArgument(t, 0);
                                        h_9 = ATgetArgument(t, 1);
                                        t = p_9;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = o_9;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm i_18 = t;
                                                int j_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_b_8;
                                                    t = a_0(t);
                                                    ;
                                                    LocalPopChoice(j_18);
                                                  }
                                                else
                                                  {
                                                    t = i_18;
                                                    {
                                                      ATerm k_18 = t;
                                                      int l_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_34 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, h_9);
                                                          t = a_0(t);
                                                          b_34 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, g_9, b_34);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(l_18);
                                                        }
                                                      else
                                                        {
                                                          t = k_18;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    m_9 = ATgetArgument(t, 0);
                                                    n_9 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm n_18 = t;
                                                      int o_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm m_34 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                          t = a_0(t);
                                                          m_34 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, m_34);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(o_18);
                                                        }
                                                      else
                                                        {
                                                          t = n_18;
                                                          {
                                                            ATerm p_18 = t;
                                                            int q_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm z_34 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, h_9);
                                                                t = a_0(t);
                                                                z_34 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, g_9, z_34);
                                                                t = a_0(t);
                                                                ;
                                                                LocalPopChoice(q_18);
                                                              }
                                                            else
                                                              {
                                                                t = p_18;
                                                                t = s_9;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        n_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_18 = t;
                                                          int t_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_35 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, h_9);
                                                              t = a_0(t);
                                                              j_35 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, g_9, j_35);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(t_18);
                                                            }
                                                          else
                                                            {
                                                              t = s_18;
                                                              {
                                                                ATerm u_18 = t;
                                                                int v_18 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm v_35 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                                    t = a_0(t);
                                                                    v_35 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, v_35);
                                                                    t = a_0(t);
                                                                    ;
                                                                    LocalPopChoice(v_18);
                                                                  }
                                                                else
                                                                  {
                                                                    t = u_18;
                                                                    t = s_9;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm w_18 = t;
                                                        int x_18 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm h_36 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, h_9);
                                                            t = a_0(t);
                                                            h_36 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, g_9, h_36);
                                                            t = a_0(t);
                                                            ;
                                                            LocalPopChoice(x_18);
                                                          }
                                                        else
                                                          {
                                                            t = w_18;
                                                            t = s_9;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            g_9 = ATgetArgument(t, 0);
                                            h_9 = ATgetArgument(t, 1);
                                            t = p_9;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = o_9;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm y_18 = t;
                                                    int z_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_b_8;
                                                        t = a_0(t);
                                                        ;
                                                        LocalPopChoice(z_18);
                                                      }
                                                    else
                                                      {
                                                        t = y_18;
                                                        {
                                                          ATerm a_19 = t;
                                                          int b_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, h_9);
                                                              t = a_0(t);
                                                              f_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_9, f_37);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(b_19);
                                                            }
                                                          else
                                                            {
                                                              t = a_19;
                                                              t = s_9;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        n_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_19 = t;
                                                          int d_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              n_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, n_37);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(d_19);
                                                            }
                                                          else
                                                            {
                                                              t = c_19;
                                                              {
                                                                ATerm f_19 = t;
                                                                int g_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm y_37 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, h_9);
                                                                    t = a_0(t);
                                                                    y_37 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, g_9, y_37);
                                                                    t = a_0(t);
                                                                    ;
                                                                    LocalPopChoice(g_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = f_19;
                                                                    t = s_9;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_9 = ATgetArgument(t, 0);
                                                            n_9 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm h_19 = t;
                                                              int i_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_38 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, h_9);
                                                                  t = a_0(t);
                                                                  f_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, g_9, f_38);
                                                                  t = a_0(t);
                                                                  ;
                                                                  LocalPopChoice(i_19);
                                                                }
                                                              else
                                                                {
                                                                  t = h_19;
                                                                  {
                                                                    ATerm j_19 = t;
                                                                    int k_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm l_38 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                                        t = a_0(t);
                                                                        l_38 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, l_38);
                                                                        t = a_0(t);
                                                                        ;
                                                                        LocalPopChoice(k_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_19;
                                                                        t = s_9;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm l_19 = t;
                                                            int m_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm t_38 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, h_9);
                                                                t = a_0(t);
                                                                t_38 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, g_9, t_38);
                                                                t = a_0(t);
                                                                ;
                                                                LocalPopChoice(m_19);
                                                              }
                                                            else
                                                              {
                                                                t = l_19;
                                                                t = s_9;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = p_9;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = o_9;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm n_19 = t;
                                                    int o_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_b_8;
                                                        t = a_0(t);
                                                        ;
                                                        LocalPopChoice(o_19);
                                                      }
                                                    else
                                                      {
                                                        t = n_19;
                                                        t = s_9;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        n_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_19 = t;
                                                          int q_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_39 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              f_39 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, f_39);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(q_19);
                                                            }
                                                          else
                                                            {
                                                              t = p_19;
                                                              t = s_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_9 = ATgetArgument(t, 0);
                                                            n_9 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm s_19 = t;
                                                              int t_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_39 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                                  t = a_0(t);
                                                                  m_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, m_39);
                                                                  t = a_0(t);
                                                                  ;
                                                                  LocalPopChoice(t_19);
                                                                }
                                                              else
                                                                {
                                                                  t = s_19;
                                                                  t = s_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = s_9;
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
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    p_9 = ATgetArgument(t, 0);
                    o_9 = ATgetArgument(t, 1);
                    t = o_9;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = p_9;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm u_19 = t;
                            int w_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_w_7;
                                t = a_0(t);
                                ;
                                LocalPopChoice(w_19);
                              }
                            else
                              {
                                t = u_19;
                                t = p_9;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = o_9;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    m_9 = ATgetArgument(t, 0);
                                    n_9 = ATgetArgument(t, 1);
                                    t = p_9;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        m_9 = ATgetArgument(t, 0);
                                        t = p_9;
                                      }
                                    else
                                      {
                                        t = p_9;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = p_9;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm x_19 = t;
                            int z_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_w_7;
                                t = a_0(t);
                                ;
                                LocalPopChoice(z_19);
                              }
                            else
                              {
                                t = x_19;
                                {
                                  ATerm a_20 = t;
                                  int b_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = o_9;
                                      if((p_9 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(b_20);
                                    }
                                  else
                                    {
                                      t = a_20;
                                      t = s_9;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = o_9;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    m_9 = ATgetArgument(t, 0);
                                    n_9 = ATgetArgument(t, 1);
                                    {
                                      ATerm c_20 = t;
                                      int d_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_41 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, n_9, o_9);
                                          t = a_0(t);
                                          w_41 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, m_9, w_41);
                                          t = a_0(t);
                                          ;
                                          LocalPopChoice(d_20);
                                        }
                                      else
                                        {
                                          t = c_20;
                                          {
                                            ATerm e_20 = t;
                                            int f_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = o_9;
                                                if((p_9 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(f_20);
                                              }
                                            else
                                              {
                                                t = e_20;
                                                t = s_9;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        m_9 = ATgetArgument(t, 0);
                                        {
                                          ATerm g_20 = t;
                                          int h_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_9;
                                              if((p_9 != t))
                                                {
                                                  _fail(t);
                                                }
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
                                                    t = m_9;
                                                    t = topdown_1_0(t_0, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, m_9);
                                                    t = bottomup_1_0(a_0, t);
                                                    ;
                                                    LocalPopChoice(j_20);
                                                  }
                                                else
                                                  {
                                                    t = i_20;
                                                    t = s_9;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm l_20 = t;
                                        int m_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = o_9;
                                            if((p_9 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(m_20);
                                          }
                                        else
                                          {
                                            t = l_20;
                                            t = s_9;
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        p_9 = ATgetArgument(t, 0);
                        o_9 = ATgetArgument(t, 1);
                        t = o_9;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = p_9;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm n_20 = t;
                                int o_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_w_7;
                                    t = a_0(t);
                                    ;
                                    LocalPopChoice(o_20);
                                  }
                                else
                                  {
                                    t = n_20;
                                    t = o_9;
                                  }
                              }
                            else
                              {
                                ATerm p_20 = t;
                                int q_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_w_7;
                                    t = a_0(t);
                                    ;
                                    LocalPopChoice(q_20);
                                  }
                                else
                                  {
                                    t = p_20;
                                    t = s_9;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = p_9;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm r_20 = t;
                                    int s_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_b_8;
                                        t = a_0(t);
                                        ;
                                        LocalPopChoice(s_20);
                                      }
                                    else
                                      {
                                        t = r_20;
                                        t = o_9;
                                      }
                                  }
                                else
                                  {
                                    ATerm t_20 = t;
                                    int u_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_b_8;
                                        t = a_0(t);
                                        ;
                                        LocalPopChoice(u_20);
                                      }
                                    else
                                      {
                                        t = t_20;
                                        t = s_9;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    g_9 = ATgetArgument(t, 0);
                                    h_9 = ATgetArgument(t, 1);
                                    t = p_9;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = o_9;
                                      }
                                    else
                                      {
                                        ATerm v_20 = t;
                                        int w_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm e_44 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, p_9, g_9);
                                            t = conc_0_0(t);
                                            e_44 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, e_44, h_9);
                                            t = bottomup_1_0(a_0, t);
                                            ;
                                            LocalPopChoice(w_20);
                                          }
                                        else
                                          {
                                            t = v_20;
                                            t = s_9;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_9;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = o_9;
                                      }
                                    else
                                      {
                                        t = s_9;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm y_20 = t;
                        int z_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm a_21 = ATgetArgument(t, 0);
                                o_9 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(z_20);
                            t = o_9;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm b_21 = t;
                                int d_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_w_7;
                                    t = a_0(t);
                                    ;
                                    LocalPopChoice(d_21);
                                  }
                                else
                                  {
                                    t = b_21;
                                    t = s_9;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm e_21 = t;
                                    int f_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_b_8;
                                        t = a_0(t);
                                        ;
                                        LocalPopChoice(f_21);
                                      }
                                    else
                                      {
                                        t = e_21;
                                        t = s_9;
                                      }
                                  }
                                else
                                  {
                                    t = s_9;
                                  }
                              }
                          }
                        else
                          {
                            t = y_20;
                            if(match_cons(t, sym_All_1))
                              {
                                p_9 = ATgetArgument(t, 0);
                                t = p_9;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm g_21 = t;
                                    int h_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_7;
                                        t = a_0(t);
                                        ;
                                        LocalPopChoice(h_21);
                                      }
                                    else
                                      {
                                        t = g_21;
                                        t = s_9;
                                      }
                                  }
                                else
                                  {
                                    t = s_9;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    p_9 = ATgetArgument(t, 0);
                                    t = p_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm j_21 = t;
                                        int k_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_7;
                                            t = a_0(t);
                                            ;
                                            LocalPopChoice(k_21);
                                          }
                                        else
                                          {
                                            t = j_21;
                                            {
                                              ATerm l_21 = t;
                                              int m_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,f_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL;
                                                  t = s_9;
                                                  t = new_0_0(t);
                                                  x_44 = t;
                                                  t = bottomup_1_0(a_0, t);
                                                  q_45 = t;
                                                  t = (ATerm) ATempty;
                                                  t = a_0(t);
                                                  r_45 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(r_45), q_45);
                                                  t = a_0(t);
                                                  y_44 = t;
                                                  t = x_44;
                                                  t = bottomup_1_0(a_0, t);
                                                  p_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, p_45);
                                                  t = a_0(t);
                                                  j_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, j_45);
                                                  t = a_0(t);
                                                  a_45 = t;
                                                  t = p_9;
                                                  t = bottomup_1_0(a_0, t);
                                                  c_45 = t;
                                                  t = x_44;
                                                  t = bottomup_1_0(a_0, t);
                                                  i_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, i_45);
                                                  t = a_0(t);
                                                  h_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, h_45);
                                                  t = a_0(t);
                                                  f_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_45, f_45);
                                                  t = a_0(t);
                                                  b_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_45, b_45);
                                                  t = a_0(t);
                                                  z_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, y_44, z_44);
                                                  t = a_0(t);
                                                  ;
                                                  LocalPopChoice(m_21);
                                                }
                                              else
                                                {
                                                  t = l_21;
                                                  t = s_9;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm n_21 = t;
                                            int o_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_8;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(o_21);
                                              }
                                            else
                                              {
                                                t = n_21;
                                                {
                                                  ATerm p_21 = t;
                                                  int q_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_46 = NULL,f_46 = NULL,i_46 = NULL,o_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL;
                                                      t = s_9;
                                                      t = new_0_0(t);
                                                      d_46 = t;
                                                      t = bottomup_1_0(a_0, t);
                                                      x_46 = t;
                                                      t = (ATerm) ATempty;
                                                      t = a_0(t);
                                                      y_46 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(y_46), x_46);
                                                      t = a_0(t);
                                                      f_46 = t;
                                                      t = d_46;
                                                      t = bottomup_1_0(a_0, t);
                                                      w_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, w_46);
                                                      t = a_0(t);
                                                      v_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, v_46);
                                                      t = a_0(t);
                                                      o_46 = t;
                                                      t = p_9;
                                                      t = bottomup_1_0(a_0, t);
                                                      r_46 = t;
                                                      t = d_46;
                                                      t = bottomup_1_0(a_0, t);
                                                      u_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, u_46);
                                                      t = a_0(t);
                                                      t_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, t_46);
                                                      t = a_0(t);
                                                      s_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_46, s_46);
                                                      t = a_0(t);
                                                      q_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_46, q_46);
                                                      t = a_0(t);
                                                      i_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, f_46, i_46);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(q_21);
                                                    }
                                                  else
                                                    {
                                                      t = p_21;
                                                      t = s_9;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_9 = ATgetArgument(t, 0);
                                                n_9 = ATgetArgument(t, 1);
                                                t = n_9;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    t_5 = ATgetArgument(t, 0);
                                                    v_6 = ATgetArgument(t, 1);
                                                    t = t_5;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        o_6 = ATgetArgument(t, 0);
                                                        t = m_9;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            z_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm r_21 = t;
                                                              int s_21 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, o_6);
                                                                  t = a_0(t);
                                                                  f_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_47, v_6);
                                                                  t = a_0(t);
                                                                  e_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_8, e_47);
                                                                  t = a_0(t);
                                                                  d_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, d_47);
                                                                  t = a_0(t);
                                                                  ;
                                                                  LocalPopChoice(s_21);
                                                                }
                                                              else
                                                                {
                                                                  t = r_21;
                                                                  {
                                                                    ATerm t_21 = t;
                                                                    int u_21 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
                                                                        t = s_9;
                                                                        t = new_0_0(t);
                                                                        h_47 = t;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        t_47 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = a_0(t);
                                                                        u_47 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(u_47), t_47);
                                                                        t = a_0(t);
                                                                        i_47 = t;
                                                                        t = h_47;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        s_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, s_47);
                                                                        t = a_0(t);
                                                                        r_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, r_47);
                                                                        t = a_0(t);
                                                                        k_47 = t;
                                                                        t = p_9;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        m_47 = t;
                                                                        t = h_47;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        q_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, q_47);
                                                                        t = a_0(t);
                                                                        o_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, o_47);
                                                                        t = a_0(t);
                                                                        n_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, m_47, n_47);
                                                                        t = a_0(t);
                                                                        l_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, k_47, l_47);
                                                                        t = a_0(t);
                                                                        j_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, i_47, j_47);
                                                                        t = a_0(t);
                                                                        ;
                                                                        LocalPopChoice(u_21);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_21;
                                                                        t = s_9;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm w_21 = t;
                                                            int x_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL;
                                                                t = s_9;
                                                                t = new_0_0(t);
                                                                x_47 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                i_48 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                j_48 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(j_48), i_48);
                                                                t = a_0(t);
                                                                y_47 = t;
                                                                t = x_47;
                                                                t = bottomup_1_0(a_0, t);
                                                                h_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, h_48);
                                                                t = a_0(t);
                                                                g_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, g_48);
                                                                t = a_0(t);
                                                                a_48 = t;
                                                                t = p_9;
                                                                t = bottomup_1_0(a_0, t);
                                                                c_48 = t;
                                                                t = x_47;
                                                                t = bottomup_1_0(a_0, t);
                                                                f_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, f_48);
                                                                t = a_0(t);
                                                                e_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, e_48);
                                                                t = a_0(t);
                                                                d_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_48, d_48);
                                                                t = a_0(t);
                                                                b_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_48, b_48);
                                                                t = a_0(t);
                                                                z_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, y_47, z_47);
                                                                t = a_0(t);
                                                                ;
                                                                LocalPopChoice(x_21);
                                                              }
                                                            else
                                                              {
                                                                t = w_21;
                                                                t = s_9;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = m_9;
                                                        {
                                                          ATerm y_21 = t;
                                                          int z_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL;
                                                              t = s_9;
                                                              t = new_0_0(t);
                                                              m_48 = t;
                                                              t = bottomup_1_0(a_0, t);
                                                              x_48 = t;
                                                              t = (ATerm) ATempty;
                                                              t = a_0(t);
                                                              y_48 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(y_48), x_48);
                                                              t = a_0(t);
                                                              n_48 = t;
                                                              t = m_48;
                                                              t = bottomup_1_0(a_0, t);
                                                              w_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, w_48);
                                                              t = a_0(t);
                                                              v_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, v_48);
                                                              t = a_0(t);
                                                              p_48 = t;
                                                              t = p_9;
                                                              t = bottomup_1_0(a_0, t);
                                                              r_48 = t;
                                                              t = m_48;
                                                              t = bottomup_1_0(a_0, t);
                                                              u_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, u_48);
                                                              t = a_0(t);
                                                              t_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, t_48);
                                                              t = a_0(t);
                                                              s_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, r_48, s_48);
                                                              t = a_0(t);
                                                              q_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_48, q_48);
                                                              t = a_0(t);
                                                              o_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, n_48, o_48);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(z_21);
                                                            }
                                                          else
                                                            {
                                                              t = y_21;
                                                              t = s_9;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = m_9;
                                                    {
                                                      ATerm a_22 = t;
                                                      int b_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL;
                                                          t = s_9;
                                                          t = new_0_0(t);
                                                          b_49 = t;
                                                          t = bottomup_1_0(a_0, t);
                                                          s_49 = t;
                                                          t = (ATerm) ATempty;
                                                          t = a_0(t);
                                                          t_49 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(t_49), s_49);
                                                          t = a_0(t);
                                                          c_49 = t;
                                                          t = b_49;
                                                          t = bottomup_1_0(a_0, t);
                                                          r_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, r_49);
                                                          t = a_0(t);
                                                          q_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, q_49);
                                                          t = a_0(t);
                                                          e_49 = t;
                                                          t = p_9;
                                                          t = bottomup_1_0(a_0, t);
                                                          g_49 = t;
                                                          t = b_49;
                                                          t = bottomup_1_0(a_0, t);
                                                          p_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, p_49);
                                                          t = a_0(t);
                                                          i_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_49);
                                                          t = a_0(t);
                                                          h_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_49, h_49);
                                                          t = a_0(t);
                                                          f_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_49, f_49);
                                                          t = a_0(t);
                                                          d_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, c_49, d_49);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(b_22);
                                                        }
                                                      else
                                                        {
                                                          t = a_22;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    m_9 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm c_22 = t;
                                                      int d_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, m_9);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(d_22);
                                                        }
                                                      else
                                                        {
                                                          t = c_22;
                                                          {
                                                            ATerm e_22 = t;
                                                            int f_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,k_50 = NULL,l_50 = NULL,n_50 = NULL;
                                                                t = s_9;
                                                                t = new_0_0(t);
                                                                z_49 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                l_50 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                n_50 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(n_50), l_50);
                                                                t = a_0(t);
                                                                a_50 = t;
                                                                t = z_49;
                                                                t = bottomup_1_0(a_0, t);
                                                                k_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, k_50);
                                                                t = a_0(t);
                                                                i_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, i_50);
                                                                t = a_0(t);
                                                                c_50 = t;
                                                                t = p_9;
                                                                t = bottomup_1_0(a_0, t);
                                                                e_50 = t;
                                                                t = z_49;
                                                                t = bottomup_1_0(a_0, t);
                                                                h_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, h_50);
                                                                t = a_0(t);
                                                                g_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, g_50);
                                                                t = a_0(t);
                                                                f_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, e_50, f_50);
                                                                t = a_0(t);
                                                                d_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_50, d_50);
                                                                t = a_0(t);
                                                                b_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, a_50, b_50);
                                                                t = a_0(t);
                                                                ;
                                                                LocalPopChoice(f_22);
                                                              }
                                                            else
                                                              {
                                                                t = e_22;
                                                                t = s_9;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm g_22 = t;
                                                    int h_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL;
                                                        t = s_9;
                                                        t = new_0_0(t);
                                                        r_50 = t;
                                                        t = bottomup_1_0(a_0, t);
                                                        c_51 = t;
                                                        t = (ATerm) ATempty;
                                                        t = a_0(t);
                                                        d_51 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(d_51), c_51);
                                                        t = a_0(t);
                                                        s_50 = t;
                                                        t = r_50;
                                                        t = bottomup_1_0(a_0, t);
                                                        b_51 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, b_51);
                                                        t = a_0(t);
                                                        a_51 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, a_51);
                                                        t = a_0(t);
                                                        u_50 = t;
                                                        t = p_9;
                                                        t = bottomup_1_0(a_0, t);
                                                        w_50 = t;
                                                        t = r_50;
                                                        t = bottomup_1_0(a_0, t);
                                                        z_50 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, z_50);
                                                        t = a_0(t);
                                                        y_50 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, y_50);
                                                        t = a_0(t);
                                                        x_50 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_50, x_50);
                                                        t = a_0(t);
                                                        v_50 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_50, v_50);
                                                        t = a_0(t);
                                                        t_50 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, s_50, t_50);
                                                        t = a_0(t);
                                                        ;
                                                        LocalPopChoice(h_22);
                                                      }
                                                    else
                                                      {
                                                        t = g_22;
                                                        t = s_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Match_1))
                                      {
                                        p_9 = ATgetArgument(t, 0);
                                        t = p_9;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm i_22 = t;
                                            int k_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_7;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(k_22);
                                              }
                                            else
                                              {
                                                t = i_22;
                                                t = s_9;
                                              }
                                          }
                                        else
                                          {
                                            t = s_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            p_9 = ATgetArgument(t, 0);
                                            t = p_9;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm l_22 = t;
                                                int m_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_b_8;
                                                    t = a_0(t);
                                                    ;
                                                    LocalPopChoice(m_22);
                                                  }
                                                else
                                                  {
                                                    t = l_22;
                                                    t = s_9;
                                                  }
                                              }
                                            else
                                              {
                                                t = s_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                p_9 = ATgetArgument(t, 0);
                                                t = p_9;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm n_22 = t;
                                                    int o_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_b_8;
                                                        t = a_0(t);
                                                        ;
                                                        LocalPopChoice(o_22);
                                                      }
                                                    else
                                                      {
                                                        t = n_22;
                                                        t = s_9;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = s_9;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm p_22 = t;
                                                int q_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm s_22 = ATgetArgument(t, 0);
                                                        o_9 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_22);
                                                    t = o_9;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm t_22 = t;
                                                        int u_22 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_b_8;
                                                            t = a_0(t);
                                                            ;
                                                            LocalPopChoice(u_22);
                                                          }
                                                        else
                                                          {
                                                            t = t_22;
                                                            t = s_9;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = s_9;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = p_22;
                                                    {
                                                      ATerm v_22 = t;
                                                      int w_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm x_22 = ATgetArgument(t, 0);
                                                              o_9 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(w_22);
                                                          {
                                                            ATerm y_22 = t;
                                                            int z_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = o_9;
                                                                t = fetch_1_0(v_0, t);
                                                                t = term_b_8;
                                                                t = bottomup_1_0(a_0, t);
                                                                ;
                                                                LocalPopChoice(z_22);
                                                              }
                                                            else
                                                              {
                                                                t = y_22;
                                                                t = s_9;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = v_22;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              p_9 = ATgetArgument(t, 0);
                                                              o_9 = ATgetArgument(t, 1);
                                                              t = o_9;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = p_9;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = o_9;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          m_9 = ATgetArgument(t, 0);
                                                                          n_9 = ATgetArgument(t, 1);
                                                                          t = p_9;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_9;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = p_9;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = o_9;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          m_9 = ATgetArgument(t, 0);
                                                                          n_9 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm a_23 = t;
                                                                            int b_23 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm j_52 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, n_9, o_9);
                                                                                t = a_0(t);
                                                                                j_52 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, m_9, j_52);
                                                                                t = a_0(t);
                                                                                ;
                                                                                LocalPopChoice(b_23);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = a_23;
                                                                                {
                                                                                  ATerm c_23 = t;
                                                                                  int e_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = o_9;
                                                                                      if((p_9 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(e_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = c_23;
                                                                                      t = s_9;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm f_23 = t;
                                                                          int g_23 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = o_9;
                                                                              if((p_9 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(g_23);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_23;
                                                                              t = s_9;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  p_9 = ATgetArgument(t, 0);
                                                                  o_9 = ATgetArgument(t, 1);
                                                                  r_5 = ATgetArgument(t, 2);
                                                                  t = r_5;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm h_23 = t;
                                                                      int i_23 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, o_9);
                                                                          t = a_0(t);
                                                                          ;
                                                                          LocalPopChoice(i_23);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = h_23;
                                                                          t = s_9;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = s_9;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      p_9 = ATgetArgument(t, 0);
                                                                      o_9 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm j_23 = t;
                                                                        int k_23 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, p_9, o_9);
                                                                            t = a_0(t);
                                                                            ;
                                                                            LocalPopChoice(k_23);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = j_23;
                                                                            t = s_9;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          p_9 = ATgetArgument(t, 0);
                                                                          t = p_9;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              m_9 = ATgetFirst((ATermList) t);
                                                                              n_9 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm l_23 = t;
                                                                                int m_23 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm e_53 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, n_9);
                                                                                    t = a_0(t);
                                                                                    e_53 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, m_9, e_53);
                                                                                    t = a_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(m_23);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_23;
                                                                                    t = s_9;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm n_23 = t;
                                                                                  int o_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_b_8;
                                                                                      t = a_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(o_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = n_23;
                                                                                      t = s_9;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = s_9;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              p_9 = ATgetArgument(t, 0);
                                                                              t = p_9;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  m_9 = ATgetFirst((ATermList) t);
                                                                                  n_9 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm p_23 = t;
                                                                                    int r_23 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm m_53 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, n_9);
                                                                                        t = a_0(t);
                                                                                        m_53 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, m_9, m_53);
                                                                                        t = a_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(r_23);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = p_23;
                                                                                        t = s_9;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm s_23 = t;
                                                                                      int t_23 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_b_8;
                                                                                          t = a_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(t_23);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_23;
                                                                                          t = s_9;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = s_9;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  p_9 = ATgetArgument(t, 0);
                                                                                  t = p_9;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      m_9 = ATgetFirst((ATermList) t);
                                                                                      n_9 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm u_23 = t;
                                                                                        int v_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm s_53 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, n_9);
                                                                                            t = a_0(t);
                                                                                            s_53 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, s_53);
                                                                                            t = a_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(v_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = u_23;
                                                                                            t = s_9;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm w_23 = t;
                                                                                          int x_23 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_w_7;
                                                                                              t = a_0(t);
                                                                                              ;
                                                                                              LocalPopChoice(x_23);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = w_23;
                                                                                              t = s_9;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_9;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_RDefT_4))
                                                                                    {
                                                                                      p_9 = ATgetArgument(t, 0);
                                                                                      o_9 = ATgetArgument(t, 1);
                                                                                      r_5 = ATgetArgument(t, 2);
                                                                                      q_5 = ATgetArgument(t, 3);
                                                                                      {
                                                                                        ATerm y_23 = t;
                                                                                        int z_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm e_54 = NULL,g_54 = NULL;
                                                                                            t = o_9;
                                                                                            t = map1_1_0(w_0, t);
                                                                                            e_54 = t;
                                                                                            t = r_5;
                                                                                            t = map1_1_0(x_0, t);
                                                                                            g_54 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, p_9, e_54, g_54, q_5);
                                                                                            t = bottomup_1_0(a_0, t);
                                                                                            ;
                                                                                            LocalPopChoice(z_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = y_23;
                                                                                            t = s_9;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefT_4))
                                                                                        {
                                                                                          p_9 = ATgetArgument(t, 0);
                                                                                          o_9 = ATgetArgument(t, 1);
                                                                                          r_5 = ATgetArgument(t, 2);
                                                                                          q_5 = ATgetArgument(t, 3);
                                                                                          {
                                                                                            ATerm a_24 = t;
                                                                                            int b_24 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm x_54 = NULL,z_54 = NULL;
                                                                                                t = r_5;
                                                                                                t = map1_1_0(y_0, t);
                                                                                                x_54 = t;
                                                                                                t = o_9;
                                                                                                t = map_1_0(z_0, t);
                                                                                                z_54 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, p_9, z_54, x_54, q_5);
                                                                                                t = bottomup_1_0(a_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(b_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = a_24;
                                                                                                {
                                                                                                  ATerm c_24 = t;
                                                                                                  int d_24 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm j_55 = NULL,l_55 = NULL;
                                                                                                      t = o_9;
                                                                                                      t = map1_1_0(a_1, t);
                                                                                                      j_55 = t;
                                                                                                      t = r_5;
                                                                                                      t = map_1_0(b_1, t);
                                                                                                      l_55 = t;
                                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, p_9, j_55, l_55, q_5);
                                                                                                      t = bottomup_1_0(a_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(d_24);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = c_24;
                                                                                                      t = s_9;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_InfixApp_3))
                                                                                            {
                                                                                              p_9 = ATgetArgument(t, 0);
                                                                                              o_9 = ATgetArgument(t, 1);
                                                                                              r_5 = ATgetArgument(t, 2);
                                                                                              {
                                                                                                ATerm e_24 = t;
                                                                                                int f_24 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL;
                                                                                                    t = term_g_24;
                                                                                                    t = bottomup_1_0(a_0, t);
                                                                                                    x_55 = t;
                                                                                                    t = (ATerm) ATempty;
                                                                                                    t = a_0(t);
                                                                                                    a_56 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(a_56), r_5);
                                                                                                    t = a_0(t);
                                                                                                    z_55 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(z_55), p_9);
                                                                                                    t = a_0(t);
                                                                                                    y_55 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, x_55, y_55);
                                                                                                    t = a_0(t);
                                                                                                    w_55 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_App_2, o_9, w_55);
                                                                                                    t = a_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(f_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = e_24;
                                                                                                    t = s_9;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_BAM_3))
                                                                                                {
                                                                                                  p_9 = ATgetArgument(t, 0);
                                                                                                  o_9 = ATgetArgument(t, 1);
                                                                                                  r_5 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm h_24 = t;
                                                                                                    int i_24 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, o_9);
                                                                                                        t = a_0(t);
                                                                                                        g_56 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, r_5);
                                                                                                        t = a_0(t);
                                                                                                        j_56 = t;
                                                                                                        t = (ATerm) ATempty;
                                                                                                        t = a_0(t);
                                                                                                        k_56 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(k_56), j_56);
                                                                                                        t = a_0(t);
                                                                                                        i_56 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(i_56), p_9);
                                                                                                        t = a_0(t);
                                                                                                        h_56 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(h_56), g_56);
                                                                                                        t = a_0(t);
                                                                                                        f_56 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, f_56);
                                                                                                        t = a_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(i_24);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = h_24;
                                                                                                        t = s_9;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                    {
                                                                                                      p_9 = ATgetArgument(t, 0);
                                                                                                      o_9 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm j_24 = t;
                                                                                                        int k_24 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm o_56 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, o_9);
                                                                                                            t = a_0(t);
                                                                                                            o_56 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, o_56);
                                                                                                            t = a_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(k_24);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = j_24;
                                                                                                            t = s_9;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_MA_2))
                                                                                                        {
                                                                                                          p_9 = ATgetArgument(t, 0);
                                                                                                          o_9 = ATgetArgument(t, 1);
                                                                                                          {
                                                                                                            ATerm l_24 = t;
                                                                                                            int m_24 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm s_56 = NULL;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, p_9);
                                                                                                                t = a_0(t);
                                                                                                                s_56 = t;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, s_56, o_9);
                                                                                                                t = a_0(t);
                                                                                                                ;
                                                                                                                LocalPopChoice(m_24);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = l_24;
                                                                                                                t = s_9;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_BA_2))
                                                                                                            {
                                                                                                              p_9 = ATgetArgument(t, 0);
                                                                                                              o_9 = ATgetArgument(t, 1);
                                                                                                              {
                                                                                                                ATerm n_24 = t;
                                                                                                                int o_24 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm w_56 = NULL;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, o_9);
                                                                                                                    t = a_0(t);
                                                                                                                    w_56 = t;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, w_56, p_9);
                                                                                                                    t = a_0(t);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(o_24);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = n_24;
                                                                                                                    t = s_9;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Let_2))
                                                                                                                {
                                                                                                                  p_9 = ATgetArgument(t, 0);
                                                                                                                  o_9 = ATgetArgument(t, 1);
                                                                                                                  t = o_9;
                                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                                    {
                                                                                                                      g_9 = ATgetArgument(t, 0);
                                                                                                                      h_9 = ATgetArgument(t, 1);
                                                                                                                      t = p_9;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = o_9;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          ATerm p_24 = t;
                                                                                                                          int q_24 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm i_57 = NULL;
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, p_9, g_9);
                                                                                                                              t = conc_0_0(t);
                                                                                                                              i_57 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Let_2, i_57, h_9);
                                                                                                                              t = bottomup_1_0(a_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(q_24);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = p_24;
                                                                                                                              t = s_9;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_CallT_3))
                                                                                                                        {
                                                                                                                          g_9 = ATgetArgument(t, 0);
                                                                                                                          h_9 = ATgetArgument(t, 1);
                                                                                                                          v_8 = ATgetArgument(t, 2);
                                                                                                                          t = v_8;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = h_9;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = g_9;
                                                                                                                                  if(match_cons(t, sym_SVar_1))
                                                                                                                                    {
                                                                                                                                      f_9 = ATgetArgument(t, 0);
                                                                                                                                      t = p_9;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = o_9;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              m_9 = ATgetFirst((ATermList) t);
                                                                                                                                              n_9 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                              t = n_9;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = m_9;
                                                                                                                                                  if(match_cons(t, sym_SDefT_4))
                                                                                                                                                    {
                                                                                                                                                      z_8 = ATgetArgument(t, 0);
                                                                                                                                                      q_8 = ATgetArgument(t, 1);
                                                                                                                                                      c_7 = ATgetArgument(t, 2);
                                                                                                                                                      m_8 = ATgetArgument(t, 3);
                                                                                                                                                      t = c_7;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                        {
                                                                                                                                                          t = q_8;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                            {
                                                                                                                                                              ATerm r_24 = t;
                                                                                                                                                              int s_24 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = f_9;
                                                                                                                                                                  if((z_8 != t))
                                                                                                                                                                    {
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    }
                                                                                                                                                                  t = m_8;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm t_24 = t;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm c_1 (ATerm t)
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_CallT_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm u_24 = ATgetArgument(t, 0);
                                                                                                                                                                              if(match_cons(u_24, sym_SVar_1))
                                                                                                                                                                                {
                                                                                                                                                                                  if((z_8 != ATgetArgument(u_24, 0)))
                                                                                                                                                                                    {
                                                                                                                                                                                      _fail(ATgetArgument(u_24, 0));
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              {
                                                                                                                                                                                ATerm v_24 = ATgetArgument(t, 1);
                                                                                                                                                                                if(((ATgetType(v_24) != AT_LIST) || !(ATisEmpty(v_24))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                              {
                                                                                                                                                                                ATerm w_24 = ATgetArgument(t, 2);
                                                                                                                                                                                if(((ATgetType(w_24) != AT_LIST) || !(ATisEmpty(w_24))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          return(t);
                                                                                                                                                                        }
                                                                                                                                                                        t = oncetd_1_0(c_1, t);
                                                                                                                                                                        PopChoice();
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = t_24;
                                                                                                                                                                      }
                                                                                                                                                                    t = m_8;
                                                                                                                                                                    t = bottomup_1_0(a_0, t);
                                                                                                                                                                  }
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(s_24);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = r_24;
                                                                                                                                                                  t = s_9;
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = s_9;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = s_9;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = s_9;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = s_9;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = s_9;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = p_9;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = o_9;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = s_9;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = p_9;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      t = o_9;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = s_9;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = p_9;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = o_9;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = s_9;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = p_9;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = o_9;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = s_9;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_As_2))
                                                                                                                    {
                                                                                                                      p_9 = ATgetArgument(t, 0);
                                                                                                                      o_9 = ATgetArgument(t, 1);
                                                                                                                      t = p_9;
                                                                                                                      if(match_cons(t, sym_Wld_0))
                                                                                                                        {
                                                                                                                          t = o_9;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = s_9;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = s_9;
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
  t = bottomup_1_0(a_0, t);
  return(t);
}
ATerm topdown_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    t = topdown_1_0(g_92, t);
    return(t);
  }
  t = g_92(t);
  t = SRTS_all(d_1, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm z_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(y_24);
      {
        ATerm t_58 = NULL,u_58 = NULL;
        t_58 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm a_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        u_58 = t;
        t = SSLgetAnnotations(t_58);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_25 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) b_25) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_25 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(d_25) != AT_LIST) || !(ATisEmpty(d_25))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_58;
      }
    }
  else
    {
      t = x_24;
      {
        ATerm e_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm g_25 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) g_25) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm h_25 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_25);
            _fail(t);
          }
        else
          {
            t = e_25;
          }
      }
    }
  return(t);
}
ATerm f_5 (ATerm n_69, ATerm m_69, ATerm t)
{
  t = n_69;
  t = topdown_1_0(e_1, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, n_69);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      k_59 = ATgetArgument(t, 0);
      n_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_59;
  if(match_cons(t, sym_Match_1))
    {
      l_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_59;
  if(match_cons(t, sym_Var_1))
    {
      m_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_59;
  if(match_cons(t, sym_Seq_2))
    {
      o_59 = ATgetArgument(t, 0);
      i_59 = ATgetArgument(t, 1);
      t = o_59;
      if(match_cons(t, sym_Build_1))
        {
          p_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_59;
      if(match_cons(t, sym_Var_1))
        {
          h_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_59;
      if((m_59 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_59)), i_59);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          o_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_59;
      if(match_cons(t, sym_Var_1))
        {
          p_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_59;
      if((m_59 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_59));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_60 = ATgetArgument(t, 0);
      c_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_60;
  if(match_cons(t, sym_Build_1))
    {
      b_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_60;
  if(match_cons(t, sym_Seq_2))
    {
      d_60 = ATgetArgument(t, 0);
      y_59 = ATgetArgument(t, 1);
      t = d_60;
      if(match_cons(t, sym_Match_1))
        {
          x_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_59;
      if((b_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_60), y_59);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          d_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_60;
      if((b_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, b_60);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm m_60 = NULL,n_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      r_60 = ATgetArgument(t, 0);
      t_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_60;
  if(match_cons(t, sym_Match_1))
    {
      s_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_60;
  if(match_cons(t, sym_Seq_2))
    {
      u_60 = ATgetArgument(t, 0);
      n_60 = ATgetArgument(t, 1);
      t = u_60;
      if(match_cons(t, sym_Match_1))
        {
          m_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_60;
      if((s_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_60), n_60);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          u_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_60;
      if((s_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, s_60);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL,g_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      g_61 = ATgetArgument(t, 0);
      i_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_61;
  if(match_cons(t, sym_Build_1))
    {
      ATerm j_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_61;
  if(match_cons(t, sym_Seq_2))
    {
      j_61 = ATgetArgument(t, 0);
      k_61 = ATgetArgument(t, 1);
      t = j_61;
      if(match_cons(t, sym_PrimT_3))
        {
          c_61 = ATgetArgument(t, 0);
          d_61 = ATgetArgument(t, 1);
          e_61 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, c_61, d_61, e_61), k_61);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          j_61 = ATgetArgument(t, 0);
          k_61 = ATgetArgument(t, 1);
          l_61 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, j_61, k_61, l_61);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL,b_62 = NULL,d_62 = NULL,e_62 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_62 = ATgetArgument(t, 0);
      d_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_62;
  if(match_cons(t, sym_Build_1))
    {
      ATerm n_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_62;
  if(match_cons(t, sym_Seq_2))
    {
      e_62 = ATgetArgument(t, 0);
      z_61 = ATgetArgument(t, 1);
      t = e_62;
      if(match_cons(t, sym_Build_1))
        {
          y_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_61), z_61);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          e_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, e_62);
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_25 = ATgetArgument(t, 0);
      if(((ATgetType(q_25) != AT_LIST) || !(ATisEmpty(q_25))))
        _fail(t);
      {
        ATerm s_25 = ATgetArgument(t, 1);
        if(((ATgetType(s_25) != AT_LIST) || !(ATisEmpty(s_25))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_25 = ATgetArgument(t, 0);
      if(((ATgetType(t_25) == AT_LIST) && !(ATisEmpty(t_25))))
        {
          h_63 = ATgetFirst((ATermList) t_25);
          i_63 = (ATerm) ATgetNext((ATermList) t_25);
        }
      else
        _fail(t);
      {
        ATerm u_25 = ATgetArgument(t, 1);
        if(((ATgetType(u_25) == AT_LIST) && !(ATisEmpty(u_25))))
          {
            j_63 = ATgetFirst((ATermList) u_25);
            k_63 = (ATerm) ATgetNext((ATermList) u_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_63, j_63), (ATerm) ATmakeAppl(sym__2, i_63, k_63));
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL;
  if(match_cons(t, sym__2))
    {
      l_63 = ATgetArgument(t, 0);
      m_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_63), l_63);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL;
  if(match_cons(t, sym__2))
    {
      n_63 = ATgetArgument(t, 0);
      o_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_63), (ATerm) ATmakeAppl(sym_Match_1, o_63));
  return(t);
}
ATerm j_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_25 = ATgetArgument(t, 0);
      if(((ATgetType(v_25) != AT_LIST) || !(ATisEmpty(v_25))))
        _fail(t);
      {
        ATerm w_25 = ATgetArgument(t, 1);
        if(((ATgetType(w_25) != AT_LIST) || !(ATisEmpty(w_25))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_25 = ATgetArgument(t, 0);
      if(((ATgetType(x_25) == AT_LIST) && !(ATisEmpty(x_25))))
        {
          t_63 = ATgetFirst((ATermList) x_25);
          u_63 = (ATerm) ATgetNext((ATermList) x_25);
        }
      else
        _fail(t);
      {
        ATerm y_25 = ATgetArgument(t, 1);
        if(((ATgetType(y_25) == AT_LIST) && !(ATisEmpty(y_25))))
          {
            v_63 = ATgetFirst((ATermList) y_25);
            w_63 = (ATerm) ATgetNext((ATermList) y_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_63, v_63), (ATerm) ATmakeAppl(sym__2, u_63, w_63));
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm x_63 = NULL,y_63 = NULL;
  if(match_cons(t, sym__2))
    {
      x_63 = ATgetArgument(t, 0);
      y_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_63), x_63);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL;
  if(match_cons(t, sym__2))
    {
      z_63 = ATgetArgument(t, 0);
      a_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_63), (ATerm) ATmakeAppl(sym_Match_1, a_64));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,b_63 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      t_62 = ATgetArgument(t, 0);
      x_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_62;
  if(match_cons(t, sym_Build_1))
    {
      u_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_62;
  if(match_cons(t, sym_Op_2))
    {
      v_62 = ATgetArgument(t, 0);
      w_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_62;
  if(match_cons(t, sym_Seq_2))
    {
      y_62 = ATgetArgument(t, 0);
      r_62 = ATgetArgument(t, 1);
      {
        ATerm g_63 = NULL;
        t = y_62;
        if(match_cons(t, sym_Match_1))
          {
            z_62 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_62;
        if(match_cons(t, sym_Op_2))
          {
            p_62 = ATgetArgument(t, 0);
            q_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_62;
        if((v_62 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, w_62, q_62);
        t = genzip_4_0(f_1, g_1, h_1, i_1, t);
        g_63 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_63), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, v_62, w_62)), r_62));
      }
    }
  else
    {
      ATerm s_63 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          y_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_62;
      if(match_cons(t, sym_Op_2))
        {
          z_62 = ATgetArgument(t, 0);
          b_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_62;
      if((v_62 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, w_62, b_63);
      t = genzip_4_0(j_1, k_1, l_1, n_1, t);
      s_63 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_63), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, v_62, w_62)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm x_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL;
  a_65 = t;
  if(match_cons(t, sym_Seq_2))
    {
      b_65 = ATgetArgument(t, 0);
      f_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_65;
  if(match_cons(t, sym_Build_1))
    {
      c_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_65;
  if(match_cons(t, sym_Op_2))
    {
      d_65 = ATgetArgument(t, 0);
      {
        ATerm z_25 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = f_65;
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            g_65 = ATgetArgument(t, 0);
            {
              ATerm c_26 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_26);
        t = g_65;
        if(match_cons(t, sym_Match_1))
          {
            h_65 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_65;
        if(match_cons(t, sym_Op_2))
          {
            x_64 = ATgetArgument(t, 0);
            {
              ATerm d_26 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_65, x_64);
        {
          ATerm e_26 = t;
          if((PushChoice() == 0))
            {
              ATerm m_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  m_1 = ATgetArgument(t, 0);
                  if((m_1 != ATgetArgument(t, 1)))
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
              t = e_26;
            }
          t = term_b_8;
        }
      }
    else
      {
        t = a_26;
        if(match_cons(t, sym_Match_1))
          {
            g_65 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_65;
        if(match_cons(t, sym_Op_2))
          {
            h_65 = ATgetArgument(t, 0);
            {
              ATerm f_26 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_65, h_65);
        {
          ATerm g_26 = t;
          if((PushChoice() == 0))
            {
              ATerm v_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  v_1 = ATgetArgument(t, 0);
                  if((v_1 != ATgetArgument(t, 1)))
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
              t = g_26;
            }
          t = term_b_8;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm k_93 (ATerm), ATerm t)
{
  ATerm l_65 (ATerm t)
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_93(t);
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = SRTS_one(l_65, t);
      }
    return(t);
  }
  t = l_65(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL;
  h_66 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_66 = ATgetArgument(t, 0);
      p_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_66;
  if(match_cons(t, sym_Let_2))
    {
      q_66 = ATgetArgument(t, 0);
      s_66 = ATgetArgument(t, 1);
      {
        ATerm x_66 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, i_66, q_66);
        t = conc_0_0(t);
        x_66 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_66, s_66);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          q_66 = ATgetArgument(t, 0);
          s_66 = ATgetArgument(t, 1);
          t_66 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_66;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_66 = ATgetFirst((ATermList) t);
          o_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_66;
      if(match_cons(t, sym_SDefT_4))
        {
          k_66 = ATgetArgument(t, 0);
          l_66 = ATgetArgument(t, 1);
          m_66 = ATgetArgument(t, 2);
          n_66 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = l_66;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_66;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_66;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_66;
      if(match_cons(t, sym_SVar_1))
        {
          r_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_66;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_66;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_66;
      if((k_66 != t))
        {
          _fail(t);
        }
      t = n_66;
      {
        ATerm j_26 = t;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm k_26 = ATgetArgument(t, 0);
                  if(match_cons(k_26, sym_SVar_1))
                    {
                      if((k_66 != ATgetArgument(k_26, 0)))
                        {
                          _fail(ATgetArgument(k_26, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm l_26 = ATgetArgument(t, 1);
                    if(((ATgetType(l_26) != AT_LIST) || !(ATisEmpty(l_26))))
                      _fail(t);
                  }
                  {
                    ATerm m_26 = ATgetArgument(t, 2);
                    if(((ATgetType(m_26) != AT_LIST) || !(ATisEmpty(m_26))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(o_1, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_26;
          }
        t = n_66;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,p_67 = NULL,q_67 = NULL,s_67 = NULL,t_67 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      s_67 = ATgetArgument(t, 0);
      t = s_67;
      if(match_cons(t, sym_Seq_2))
        {
          q_67 = ATgetArgument(t, 0);
          h_67 = ATgetArgument(t, 1);
          t = q_67;
          if(match_cons(t, sym_Where_1))
            {
              g_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_67;
          if(match_cons(t, sym_Seq_2))
            {
              i_67 = ATgetArgument(t, 0);
              p_67 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_67;
          if(match_cons(t, sym_Build_1))
            {
              j_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, g_67, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_67), p_67)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              q_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, q_67);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          s_67 = ATgetArgument(t, 0);
          t = s_67;
          if(match_cons(t, sym_Test_1))
            {
              q_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, q_67);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              s_67 = ATgetArgument(t, 0);
              t = s_67;
              if(match_cons(t, sym_Not_1))
                {
                  q_67 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, q_67);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  s_67 = ATgetArgument(t, 0);
                  t_67 = ATgetArgument(t, 1);
                  t = t_67;
                  if((s_67 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      s_67 = ATgetArgument(t, 0);
                      t_67 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = t_67;
                  if((s_67 != t))
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
  ATerm h_68 = NULL,i_68 = NULL,w_68 = NULL,x_68 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      h_68 = ATgetArgument(t, 0);
      x_68 = ATgetArgument(t, 1);
      t = h_68;
      if(match_cons(t, sym_LChoice_2))
        {
          i_68 = ATgetArgument(t, 0);
          w_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, i_68, (ATerm) ATmakeAppl(sym_LChoice_2, w_68, x_68));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          h_68 = ATgetArgument(t, 0);
          x_68 = ATgetArgument(t, 1);
          t = h_68;
          if(match_cons(t, sym_Seq_2))
            {
              i_68 = ATgetArgument(t, 0);
              w_68 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, i_68, (ATerm) ATmakeAppl(sym_Seq_2, w_68, x_68));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              h_68 = ATgetArgument(t, 0);
              x_68 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_68;
          if(match_cons(t, sym_Choice_2))
            {
              i_68 = ATgetArgument(t, 0);
              w_68 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, i_68, (ATerm) ATmakeAppl(sym_Choice_2, w_68, x_68));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL;
  y_71 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_71 = ATgetFirst((ATermList) t);
      a_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,t_2 = NULL,u_2 = NULL,v_4 = NULL,u_4 = NULL;
        t = SSLgetAnnotations(y_71);
        q_2 = t;
        t = z_71;
        t = n_0(t);
        t_2 = t;
        t = (ATerm) ATinsert(CheckATermList(a_72), t_2);
        u_4 = t;
        t = SSLsetAnnotations(u_4, q_2);
        u_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_2 = ATgetFirst((ATermList) t);
            o_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_2);
        m_2 = t;
        t = o_2;
        {
          ATerm p_26 = t;
          int q_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(q_26);
            }
          else
            {
              t = p_26;
            }
          p_2 = t;
          t = (ATerm) ATinsert(CheckATermList(p_2), n_2);
          v_4 = t;
          t = SSLsetAnnotations(v_4, m_2);
        }
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        {
          ATerm e_3 = NULL,h_3 = NULL,x_4 = NULL;
          t = SSLgetAnnotations(y_71);
          e_3 = t;
          t = a_72;
          t = map1_1_0(n_0, t);
          h_3 = t;
          t = (ATerm) ATinsert(CheckATermList(h_3), z_71);
          x_4 = t;
          t = SSLsetAnnotations(x_4, e_3);
        }
      }
  }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm i_73 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_73, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_7), term_o_7));
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL;
  k_73 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_73 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, j_73, term_o_7);
    }
  else
    {
      t = k_73;
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm u_73 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_73, term_o_7);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL;
  w_73 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_73 = ATgetArgument(t, 0);
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, v_73, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_7), term_o_7));
            ;
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            t = w_73;
          }
      }
    }
  else
    {
      t = w_73;
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm g_74 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_74, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_7), term_o_7));
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm h_74 = NULL,i_74 = NULL;
  i_74 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_74 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, h_74, term_o_7);
    }
  else
    {
      t = i_74;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,s_72 = NULL,t_72 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      s_72 = ATgetArgument(t, 0);
      t_72 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, s_72, t_72);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          s_72 = ATgetArgument(t, 0);
          t = s_72;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_72 = ATgetFirst((ATermList) t);
              o_72 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, n_72, (ATerm) ATmakeAppl(sym_LChoices_1, o_72));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_b_8;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              s_72 = ATgetArgument(t, 0);
              t = s_72;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_72 = ATgetFirst((ATermList) t);
                  o_72 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, n_72, (ATerm) ATmakeAppl(sym_Choices_1, o_72));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_b_8;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  s_72 = ATgetArgument(t, 0);
                  t = s_72;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_72 = ATgetFirst((ATermList) t);
                      o_72 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_72, (ATerm) ATmakeAppl(sym_Seqs_1, o_72));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_w_7;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_72 = ATgetArgument(t, 0);
                      t_72 = ATgetArgument(t, 1);
                      q_72 = ATgetArgument(t, 2);
                      p_72 = ATgetArgument(t, 3);
                      {
                        ATerm f_73 = NULL,h_73 = NULL;
                        t = t_72;
                        t = map1_1_0(p_1, t);
                        f_73 = t;
                        t = q_72;
                        t = map1_1_0(q_1, t);
                        h_73 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, s_72, f_73, h_73, p_72);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          s_72 = ATgetArgument(t, 0);
                          t_72 = ATgetArgument(t, 1);
                          q_72 = ATgetArgument(t, 2);
                          p_72 = ATgetArgument(t, 3);
                          {
                            ATerm t_26 = t;
                            int u_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm r_73 = NULL,t_73 = NULL;
                                t = q_72;
                                t = map1_1_0(r_1, t);
                                r_73 = t;
                                t = t_72;
                                t = map_1_0(s_1, t);
                                t_73 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_72, t_73, r_73, p_72);
                                ;
                                LocalPopChoice(u_26);
                              }
                            else
                              {
                                t = t_26;
                                {
                                  ATerm d_74 = NULL,f_74 = NULL;
                                  t = t_72;
                                  t = map1_1_0(t_1, t);
                                  d_74 = t;
                                  t = q_72;
                                  t = map_1_0(u_1, t);
                                  f_74 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, s_72, d_74, f_74, p_72);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              s_72 = ATgetArgument(t, 0);
                              t_72 = ATgetArgument(t, 1);
                              q_72 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, t_72, (ATerm) ATmakeAppl(sym_Op_2, term_g_24, (ATerm) ATinsert(ATinsert(ATempty, q_72), s_72)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  s_72 = ATgetArgument(t, 0);
                                  t_72 = ATgetArgument(t, 1);
                                  q_72 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, q_72)), s_72), (ATerm) ATmakeAppl(sym_Build_1, t_72)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      s_72 = ATgetArgument(t, 0);
                                      t_72 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_72, (ATerm) ATmakeAppl(sym_Match_1, t_72));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          s_72 = ATgetArgument(t, 0);
                                          t_72 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_72), t_72);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              s_72 = ATgetArgument(t, 0);
                                              t_72 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_72), s_72);
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
ATerm w_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      q_75 = ATgetArgument(t, 0);
      t = q_75;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_b_8;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          q_75 = ATgetArgument(t, 0);
          t = q_75;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_w_7;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              q_75 = ATgetArgument(t, 0);
              r_75 = ATgetArgument(t, 1);
              t = q_75;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_b_8;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  q_75 = ATgetArgument(t, 0);
                  r_75 = ATgetArgument(t, 1);
                  t = r_75;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_b_8;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      q_75 = ATgetArgument(t, 0);
                      r_75 = ATgetArgument(t, 1);
                      t = r_75;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_b_8;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          q_75 = ATgetArgument(t, 0);
                          t = q_75;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_b_8;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              q_75 = ATgetArgument(t, 0);
                              t = q_75;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_b_8;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  q_75 = ATgetArgument(t, 0);
                                  r_75 = ATgetArgument(t, 1);
                                  t = r_75;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_b_8;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      q_75 = ATgetArgument(t, 0);
                                      r_75 = ATgetArgument(t, 1);
                                      t = r_75;
                                      t = fetch_1_0(w_1, t);
                                      t = term_b_8;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          q_75 = ATgetArgument(t, 0);
                                          r_75 = ATgetArgument(t, 1);
                                          t = r_75;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = q_75;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = r_75;
                                                }
                                              else
                                                {
                                                  t = q_75;
                                                }
                                            }
                                          else
                                            {
                                              t = q_75;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = r_75;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              q_75 = ATgetArgument(t, 0);
                                              r_75 = ATgetArgument(t, 1);
                                              t = r_75;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = q_75;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = r_75;
                                                    }
                                                  else
                                                    {
                                                      t = q_75;
                                                    }
                                                }
                                              else
                                                {
                                                  t = q_75;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = r_75;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  q_75 = ATgetArgument(t, 0);
                                                  t = q_75;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_b_8;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      q_75 = ATgetArgument(t, 0);
                                                      r_75 = ATgetArgument(t, 1);
                                                      s_75 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = s_75;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_75, r_75);
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
  ATerm x_76 = NULL,z_76 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      z_76 = ATgetArgument(t, 0);
      t = z_76;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_w_7;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          z_76 = ATgetArgument(t, 0);
          t = z_76;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_b_8;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              z_76 = ATgetArgument(t, 0);
              x_76 = ATgetArgument(t, 1);
              t = x_76;
              if(match_cons(t, sym_Id_0))
                {
                  t = z_76;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = x_76;
                    }
                  else
                    {
                      t = z_76;
                    }
                }
              else
                {
                  t = z_76;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = x_76;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  z_76 = ATgetArgument(t, 0);
                  x_76 = ATgetArgument(t, 1);
                  t = z_76;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_w_7;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      z_76 = ATgetArgument(t, 0);
                      x_76 = ATgetArgument(t, 1);
                      t = x_76;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_w_7;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          z_76 = ATgetArgument(t, 0);
                          x_76 = ATgetArgument(t, 1);
                          t = x_76;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_w_7;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              z_76 = ATgetArgument(t, 0);
                              t = z_76;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_w_7;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  z_76 = ATgetArgument(t, 0);
                                  t = z_76;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_w_7;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      z_76 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = z_76;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_w_7;
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
  ATerm v_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = v_26;
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
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
                  t = HL_0_0(t);
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
                        t = AssociateR_0_0(t);
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
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(g_27);
                            }
                          else
                            {
                              t = f_27;
                              {
                                ATerm h_27 = t;
                                int i_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_77 = NULL,p_77 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        o_77 = ATgetArgument(t, 0);
                                        p_77 = ATgetArgument(t, 1);
                                        t = o_77;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = p_77;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            o_77 = ATgetArgument(t, 0);
                                            p_77 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = o_77;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = p_77;
                                      }
                                    ;
                                    LocalPopChoice(i_27);
                                  }
                                else
                                  {
                                    t = h_27;
                                    {
                                      ATerm j_27 = t;
                                      int k_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(k_27);
                                        }
                                      else
                                        {
                                          t = j_27;
                                          {
                                            ATerm l_27 = t;
                                            int m_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
                                                LocalPopChoice(m_27);
                                              }
                                            else
                                              {
                                                t = l_27;
                                                {
                                                  ATerm n_27 = t;
                                                  int o_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
                                                      LocalPopChoice(o_27);
                                                    }
                                                  else
                                                    {
                                                      t = n_27;
                                                      {
                                                        ATerm p_27 = t;
                                                        int q_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
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
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(s_27);
                                                                }
                                                              else
                                                                {
                                                                  t = r_27;
                                                                  {
                                                                    ATerm t_27 = t;
                                                                    int u_27 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(u_27);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_27;
                                                                        {
                                                                          ATerm w_27 = t;
                                                                          int x_27 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(x_27);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_27;
                                                                              {
                                                                                ATerm y_27 = t;
                                                                                int z_27 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(z_27);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = y_27;
                                                                                    {
                                                                                      ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL;
                                                                                      t_77 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          u_77 = ATgetArgument(t, 0);
                                                                                          v_77 = ATgetArgument(t, 1);
                                                                                          t = u_77;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              s_77 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = t_77;
                                                                                          t = f_5(s_77, v_77, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              u_77 = ATgetArgument(t, 0);
                                                                                              v_77 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = u_77;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = v_77;
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
ATerm x_1 (ATerm t)
{
  ATerm l_78 = NULL;
  l_78 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_78);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm m_78 = NULL;
  m_78 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_78);
  return(t);
}
ATerm z_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_28 = ATgetArgument(t, 0);
      if(((ATgetType(a_28) != AT_LIST) || !(ATisEmpty(a_28))))
        _fail(t);
      {
        ATerm b_28 = ATgetArgument(t, 1);
        if(((ATgetType(b_28) != AT_LIST) || !(ATisEmpty(b_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_28 = ATgetArgument(t, 0);
      if(((ATgetType(c_28) == AT_LIST) && !(ATisEmpty(c_28))))
        {
          n_78 = ATgetFirst((ATermList) c_28);
          o_78 = (ATerm) ATgetNext((ATermList) c_28);
        }
      else
        _fail(t);
      {
        ATerm d_28 = ATgetArgument(t, 1);
        if(((ATgetType(d_28) == AT_LIST) && !(ATisEmpty(d_28))))
          {
            p_78 = ATgetFirst((ATermList) d_28);
            q_78 = (ATerm) ATgetNext((ATermList) d_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_78, p_78), (ATerm) ATmakeAppl(sym__2, o_78, q_78));
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm r_78 = NULL,s_78 = NULL;
  if(match_cons(t, sym__2))
    {
      r_78 = ATgetArgument(t, 0);
      s_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_78), r_78);
  return(t);
}
ATerm c_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_28 = ATgetArgument(t, 0);
      if(((ATgetType(e_28) != AT_LIST) || !(ATisEmpty(e_28))))
        _fail(t);
      {
        ATerm f_28 = ATgetArgument(t, 1);
        if(((ATgetType(f_28) != AT_LIST) || !(ATisEmpty(f_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_28 = ATgetArgument(t, 0);
      if(((ATgetType(g_28) == AT_LIST) && !(ATisEmpty(g_28))))
        {
          u_78 = ATgetFirst((ATermList) g_28);
          v_78 = (ATerm) ATgetNext((ATermList) g_28);
        }
      else
        _fail(t);
      {
        ATerm h_28 = ATgetArgument(t, 1);
        if(((ATgetType(h_28) == AT_LIST) && !(ATisEmpty(h_28))))
          {
            w_78 = ATgetFirst((ATermList) h_28);
            x_78 = (ATerm) ATgetNext((ATermList) h_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_78, w_78), (ATerm) ATmakeAppl(sym__2, v_78, x_78));
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL;
  if(match_cons(t, sym__2))
    {
      y_78 = ATgetArgument(t, 0);
      z_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_78), y_78);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_28 = ATgetArgument(t, 0);
      if(match_cons(i_28, sym__2))
        {
          a_79 = ATgetArgument(i_28, 0);
          b_79 = ATgetArgument(i_28, 1);
        }
      else
        _fail(t);
      c_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, a_79)), (ATerm) ATmakeAppl(sym_Seq_2, c_79, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_79))));
  return(t);
}
ATerm g_12 (ATerm o_68, ATerm u_68, ATerm t)
{
  ATerm a_78 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL,k_78 = NULL;
  t = u_68;
  t = map_1_0(new_0_0, t);
  d_78 = t;
  t = map_1_0(x_1, t);
  a_78 = t;
  t = new_0_0(t);
  b_78 = t;
  t = u_68;
  t = map_1_0(new_0_0, t);
  e_78 = t;
  t = map_1_0(y_1, t);
  c_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_78, e_78);
  t = genzip_4_0(z_1, a_2, b_2, _id, t);
  k_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_78, u_68);
  t = genzip_4_0(c_2, d_2, e_2, f_2, t);
  f_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_78, e_78);
  t = conc_0_0(t);
  g_78 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, o_68, a_78), (ATerm) ATmakeAppl(sym_Var_1, b_78)));
  t = Mapp2_0_0(t);
  h_78 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, o_68, c_78), (ATerm) ATmakeAppl(sym_Var_1, b_78)));
  t = Bapp_0_0(t);
  i_78 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(g_78), b_78), (ATerm) ATmakeAppl(sym_Seq_2, h_78, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_78), i_78)));
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm e_79 = NULL,f_79 = NULL;
  e_79 = t;
  if(match_cons(t, sym_Build_1))
    {
      f_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_79 = NULL,h_79 = NULL,j_79 = NULL,k_79 = NULL;
        t = e_79;
        t = new_0_0(t);
        j_79 = t;
        t = f_79;
        {
          ATerm g_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((g_79 != NULL) && (g_79 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_79 = ATgetArgument(t, 0);
                if(((h_79 != NULL) && (h_79 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  h_79 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, j_79);
            return(t);
          }
          t = pat_td_1_0(g_2, t);
          k_79 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_79), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_m_28, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_79)), not_null(g_79))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_79)))), (ATerm) ATmakeAppl(sym_Build_1, k_79)));
        }
        ;
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        {
          ATerm n_28 = t;
          int o_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_79 = NULL,n_79 = NULL,o_79 = NULL;
              t = e_79;
              t = new_0_0(t);
              n_79 = t;
              t = f_79;
              {
                ATerm h_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((l_79 != NULL) && (l_79 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        l_79 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, n_79);
                  return(t);
                }
                t = pat_td_1_0(h_2, t);
                o_79 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_79), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_79), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_79)))), (ATerm) ATmakeAppl(sym_Build_1, o_79)));
              }
              ;
              LocalPopChoice(o_28);
            }
          else
            {
              t = n_28;
              {
                ATerm p_79 = NULL,q_79 = NULL,s_79 = NULL,t_79 = NULL;
                t = e_79;
                t = new_0_0(t);
                s_79 = t;
                t = f_79;
                {
                  ATerm i_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((p_79 != NULL) && (p_79 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          p_79 = ATgetArgument(t, 0);
                        if(((q_79 != NULL) && (q_79 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_79 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, s_79);
                    return(t);
                  }
                  t = pat_td_1_0(i_2, t);
                  t_79 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_79), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_79), not_null(q_79), (ATerm) ATmakeAppl(sym_Var_1, s_79))), (ATerm) ATmakeAppl(sym_Build_1, t_79)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm r_107 (ATerm), ATerm t)
{
  ATerm o_80 (ATerm t)
  {
    ATerm l_80 = NULL,m_80 = NULL,n_80 = NULL;
    n_80 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_80 = ATgetFirst((ATermList) t);
        m_80 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_3 = NULL,s_3 = NULL,c_5 = NULL;
          t = SSLgetAnnotations(n_80);
          p_3 = t;
          t = m_80;
          t = o_80(t);
          s_3 = t;
          t = (ATerm) ATinsert(CheckATermList(s_3), l_80);
          c_5 = t;
          t = SSLsetAnnotations(c_5, p_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_80;
        t = r_107(t);
      }
    return(t);
  }
  t = o_80(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL;
  v_79 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_79;
    }
  else
    {
      ATerm j_2 (ATerm t)
      {
        t = not_null(x_79);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_79 = ATgetFirst((ATermList) t);
          if(((x_79 != NULL) && (x_79 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_79;
      t = at_end_1_0(j_2, t);
    }
  return(t);
}
ATerm a_81 (ATerm s_80, ATerm t)
{
  ATerm t_80 = NULL;
  t = SSL_explode_term(s_80);
  if(match_cons(t, sym__2))
    {
      ATerm p_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_80;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_80 = NULL,w_80 = NULL,x_80 = NULL;
  x_80 = t;
  if(match_cons(t, sym__2))
    {
      v_80 = ATgetArgument(t, 0);
      w_80 = ATgetArgument(t, 1);
      {
        ATerm q_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              t = w_80;
              return(t);
            }
            t = v_80;
            t = at_end_1_0(k_2, t);
            ;
            LocalPopChoice(r_28);
          }
        else
          {
            t = q_28;
            t = a_81(x_80, t);
          }
      }
    }
  else
    {
      t = a_81(x_80, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm t)
{
  ATerm h_81 (ATerm t)
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_96(t);
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        {
          ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL,e_5 = NULL;
          t = t_96(t);
          g_81 = t;
          if(match_cons(t, sym__2))
            {
              c_81 = ATgetArgument(t, 0);
              d_81 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_81);
          b_81 = t;
          t = c_81;
          t = v_96(t);
          e_81 = t;
          t = d_81;
          t = h_81(t);
          f_81 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_81, f_81);
          e_5 = t;
          t = SSLsetAnnotations(e_5, b_81);
          t = u_96(t);
        }
      }
    return(t);
  }
  t = h_81(t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm v_81 = NULL;
  v_81 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_81);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm w_81 = NULL;
  w_81 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_81);
  return(t);
}
ATerm s_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_28 = ATgetArgument(t, 0);
      if(((ATgetType(u_28) != AT_LIST) || !(ATisEmpty(u_28))))
        _fail(t);
      {
        ATerm v_28 = ATgetArgument(t, 1);
        if(((ATgetType(v_28) != AT_LIST) || !(ATisEmpty(v_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_28 = ATgetArgument(t, 0);
      if(((ATgetType(w_28) == AT_LIST) && !(ATisEmpty(w_28))))
        {
          x_81 = ATgetFirst((ATermList) w_28);
          y_81 = (ATerm) ATgetNext((ATermList) w_28);
        }
      else
        _fail(t);
      {
        ATerm x_28 = ATgetArgument(t, 1);
        if(((ATgetType(x_28) == AT_LIST) && !(ATisEmpty(x_28))))
          {
            z_81 = ATgetFirst((ATermList) x_28);
            a_82 = (ATerm) ATgetNext((ATermList) x_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_81, z_81), (ATerm) ATmakeAppl(sym__2, y_81, a_82));
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm b_82 = NULL,c_82 = NULL;
  if(match_cons(t, sym__2))
    {
      b_82 = ATgetArgument(t, 0);
      c_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_82), b_82);
  return(t);
}
ATerm x_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_28 = ATgetArgument(t, 0);
      if(((ATgetType(y_28) != AT_LIST) || !(ATisEmpty(y_28))))
        _fail(t);
      {
        ATerm z_28 = ATgetArgument(t, 1);
        if(((ATgetType(z_28) != AT_LIST) || !(ATisEmpty(z_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_29 = ATgetArgument(t, 0);
      if(((ATgetType(a_29) == AT_LIST) && !(ATisEmpty(a_29))))
        {
          e_82 = ATgetFirst((ATermList) a_29);
          f_82 = (ATerm) ATgetNext((ATermList) a_29);
        }
      else
        _fail(t);
      {
        ATerm b_29 = ATgetArgument(t, 1);
        if(((ATgetType(b_29) == AT_LIST) && !(ATisEmpty(b_29))))
          {
            g_82 = ATgetFirst((ATermList) b_29);
            h_82 = (ATerm) ATgetNext((ATermList) b_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_82, g_82), (ATerm) ATmakeAppl(sym__2, f_82, h_82));
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm i_82 = NULL,j_82 = NULL;
  if(match_cons(t, sym__2))
    {
      i_82 = ATgetArgument(t, 0);
      j_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_82), i_82);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_29 = ATgetArgument(t, 0);
      if(match_cons(d_29, sym__2))
        {
          k_82 = ATgetArgument(d_29, 0);
          l_82 = ATgetArgument(d_29, 1);
        }
      else
        _fail(t);
      m_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, k_82)), (ATerm) ATmakeAppl(sym_Seq_2, m_82, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_82))));
  return(t);
}
ATerm j_12 (ATerm z_68, ATerm h_69, ATerm g_69, ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL,s_81 = NULL,u_81 = NULL;
  t = (ATerm) ATinsert(CheckATermList(h_69), g_69);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_81 = ATgetFirst((ATermList) t);
      n_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(l_2, t);
  k_81 = t;
  t = (ATerm) ATinsert(CheckATermList(h_69), g_69);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_81 = ATgetFirst((ATermList) t);
      o_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(r_2, t);
  m_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_81, o_81);
  t = genzip_4_0(s_2, v_2, w_2, _id, t);
  u_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_81, (ATerm) ATinsert(CheckATermList(h_69), g_69));
  t = genzip_4_0(x_2, y_2, z_2, a_3, t);
  p_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_81, o_81);
  t = conc_0_0(t);
  q_81 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, z_68, k_81), (ATerm) ATmakeAppl(sym_Var_1, j_81)));
  t = Mapp2_0_0(t);
  r_81 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, z_68, m_81), (ATerm) ATmakeAppl(sym_Var_1, l_81)));
  t = Bapp_0_0(t);
  s_81 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(q_81), l_81), j_81), (ATerm) ATmakeAppl(sym_Seq_2, r_81, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_81), s_81)));
  return(t);
}
ATerm pat_td_1_0 (ATerm m_90 (ATerm), ATerm t)
{
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_90(t);
      ;
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      {
        ATerm u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL;
        v_84 = t;
        if(match_cons(t, sym_Op_2))
          {
            w_84 = ATgetArgument(t, 0);
            x_84 = ATgetArgument(t, 1);
            {
              ATerm a_4 = NULL,d_4 = NULL,k_5 = NULL;
              t = SSLgetAnnotations(v_84);
              a_4 = t;
              t = x_84;
              {
                ATerm b_3 (ATerm t)
                {
                  t = pat_td_1_0(m_90, t);
                  return(t);
                }
                t = fetch_1_0(b_3, t);
                d_4 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, w_84, d_4);
                k_5 = t;
                t = SSLsetAnnotations(k_5, a_4);
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                w_84 = ATgetArgument(t, 0);
                x_84 = ATgetArgument(t, 1);
                {
                  ATerm g_29 = t;
                  int h_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_4 = NULL,o_4 = NULL,l_5 = NULL;
                      t = SSLgetAnnotations(v_84);
                      l_4 = t;
                      t = x_84;
                      t = pat_td_1_0(m_90, t);
                      o_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, w_84, o_4);
                      l_5 = t;
                      t = SSLsetAnnotations(l_5, l_4);
                      ;
                      LocalPopChoice(h_29);
                    }
                  else
                    {
                      t = g_29;
                      {
                        ATerm h_5 = NULL,s_5 = NULL,m_5 = NULL;
                        t = SSLgetAnnotations(v_84);
                        h_5 = t;
                        t = w_84;
                        t = pat_td_1_0(m_90, t);
                        s_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, s_5, x_84);
                        m_5 = t;
                        t = SSLsetAnnotations(m_5, h_5);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    w_84 = ATgetArgument(t, 0);
                    x_84 = ATgetArgument(t, 1);
                    u_84 = ATgetArgument(t, 2);
                    {
                      ATerm c_6 = NULL,g_6 = NULL,n_5 = NULL;
                      t = SSLgetAnnotations(v_84);
                      c_6 = t;
                      t = u_84;
                      {
                        ATerm c_3 (ATerm t)
                        {
                          t = pat_td_1_0(m_90, t);
                          return(t);
                        }
                        t = fetch_1_0(c_3, t);
                        g_6 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, w_84, x_84, g_6);
                        n_5 = t;
                        t = SSLsetAnnotations(n_5, c_6);
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        w_84 = ATgetArgument(t, 0);
                        x_84 = ATgetArgument(t, 1);
                        u_84 = ATgetArgument(t, 2);
                        {
                          ATerm r_6 = NULL,w_6 = NULL,o_5 = NULL;
                          t = SSLgetAnnotations(v_84);
                          r_6 = t;
                          t = u_84;
                          {
                            ATerm d_3 (ATerm t)
                            {
                              t = pat_td_1_0(m_90, t);
                              return(t);
                            }
                            t = fetch_1_0(d_3, t);
                            w_6 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, w_84, x_84, w_6);
                            o_5 = t;
                            t = SSLsetAnnotations(o_5, r_6);
                          }
                        }
                      }
                    else
                      {
                        ATerm g_7 = NULL,j_7 = NULL,p_5 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            w_84 = ATgetArgument(t, 0);
                            x_84 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(v_84);
                        g_7 = t;
                        t = x_84;
                        t = pat_td_1_0(m_90, t);
                        j_7 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, w_84, j_7);
                        p_5 = t;
                        t = SSLsetAnnotations(p_5, g_7);
                      }
                  }
              }
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
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm f_85 = NULL,g_85 = NULL;
  f_85 = t;
  if(match_cons(t, sym_Match_1))
    {
      g_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL,l_85 = NULL;
        t = f_85;
        t = new_0_0(t);
        k_85 = t;
        t = g_85;
        {
          ATerm f_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((i_85 != NULL) && (i_85 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_85 = ATgetArgument(t, 0);
                if(((j_85 != NULL) && (j_85 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  j_85 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, k_85), i_85);
            return(t);
          }
          t = pat_td_1_0(f_3, t);
          l_85 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_85), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_85), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_k_29, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_85))), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_85))))));
        }
        ;
        LocalPopChoice(j_29);
      }
    else
      {
        t = i_29;
        {
          ATerm l_29 = t;
          int m_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL;
              t = f_85;
              t = new_0_0(t);
              o_85 = t;
              t = g_85;
              {
                ATerm g_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((n_85 != NULL) && (n_85 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        n_85 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, o_85);
                  return(t);
                }
                t = pat_td_1_0(g_3, t);
                p_85 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_85), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_85), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_85)), not_null(n_85))));
              }
              ;
              LocalPopChoice(m_29);
            }
          else
            {
              t = l_29;
              {
                ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL;
                t = f_85;
                t = new_0_0(t);
                t_85 = t;
                t = g_85;
                {
                  ATerm i_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((s_85 != NULL) && (s_85 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          s_85 = ATgetArgument(t, 0);
                        if(((r_85 != NULL) && (r_85 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_85 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, t_85);
                    return(t);
                  }
                  t = pat_td_1_0(i_3, t);
                  u_85 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_85), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_85), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, t_85)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_85)), not_null(s_85)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm m_86 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      m_86 = ATgetArgument(t, 0);
      t = m_86;
    }
  else
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_n_29;
    }
  return(t);
}
ATerm MatchingCongruence_0_0 (ATerm t)
{
  ATerm a_86 = NULL,b_86 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      a_86 = ATgetArgument(t, 0);
      b_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_86;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, a_86, (ATerm) ATempty));
    }
  else
    {
      ATerm l_86 = NULL;
      t = b_86;
      t = map_1_0(j_3, t);
      l_86 = t;
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, a_86, l_86));
      t = Mapp2_0_0(t);
    }
  return(t);
}
ATerm repeat_1_0 (ATerm a_102 (ATerm), ATerm t)
{
  ATerm s_86 (ATerm t)
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_102(t);
        t = s_86(t);
        ;
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
      }
    return(t);
  }
  t = s_86(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    t = bottomup_1_0(h_92, t);
    return(t);
  }
  t = SRTS_all(k_3, t);
  t = h_92(t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = repeat_1_0(m_3, t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_29 = t;
      int u_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchingCongruence_0_0(t);
          ;
          LocalPopChoice(u_29);
        }
      else
        {
          t = t_29;
          {
            ATerm a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL;
            h_87 = t;
            if(match_cons(t, sym_Call_2))
              {
                i_87 = ATgetArgument(t, 0);
                j_87 = ATgetArgument(t, 1);
                t = i_87;
                if(match_cons(t, sym_SVar_1))
                  {
                    a_87 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_87;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                  _fail(t);
                t = j_87;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    b_87 = ATgetFirst((ATermList) t);
                    e_87 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_87;
                if(match_cons(t, sym_Cong_2))
                  {
                    c_87 = ATgetArgument(t, 0);
                    d_87 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_87;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_87 = ATgetFirst((ATermList) t);
                    g_87 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = g_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = h_87;
                t = j_12(c_87, d_87, f_87, t);
              }
            else
              {
                if(match_cons(t, sym_Cong_2))
                  {
                    i_87 = ATgetArgument(t, 0);
                    j_87 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_87;
                t = g_12(i_87, j_87, t);
              }
          }
        }
      ;
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm define_congruences_0_0 (ATerm t)
{
  t = bottomup_1_0(l_3, t);
  t = simplify_0_0(t);
  return(t);
}
ATerm map_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm e_88 (ATerm t)
  {
    ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL;
    b_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_88;
      }
    else
      {
        ATerm r_7 = NULL,u_7 = NULL,v_7 = NULL,y_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_88 = ATgetFirst((ATermList) t);
            d_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_88);
        r_7 = t;
        t = c_88;
        t = b_107(t);
        u_7 = t;
        t = d_88;
        t = e_88(t);
        v_7 = t;
        t = (ATerm) ATinsert(CheckATermList(v_7), u_7);
        y_14 = t;
        t = SSLsetAnnotations(y_14, r_7);
      }
    return(t);
  }
  t = e_88(t);
  return(t);
}
ATerm Cons_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL,f_15 = NULL;
  l_88 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_88 = ATgetFirst((ATermList) t);
      i_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_88);
  g_88 = t;
  t = h_88;
  t = b_76(t);
  j_88 = t;
  t = i_88;
  t = c_76(t);
  k_88 = t;
  t = (ATerm) ATinsert(CheckATermList(k_88), j_88);
  f_15 = t;
  t = SSLsetAnnotations(f_15, g_88);
  return(t);
}
ATerm k_12 (ATerm j_49, ATerm k_49, ATerm t)
{
  ATerm m_88 = NULL;
  t = SSL_fputc(j_49, k_49);
  m_88 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_88);
  return(t);
}
ATerm l_12 (ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm n_88 = NULL;
  t = SSL_write_term_to_stream_text(x_52, y_52);
  n_88 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_88);
  return(t);
}
ATerm n_12 (ATerm c_113 (ATerm), ATerm t_474, ATerm b_53, ATerm t)
{
  ATerm o_88 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_474, term_v_29);
  t = open_stream_0_0(t);
  o_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_88, b_53);
  t = c_113(t);
  t = fclose_0_0(t);
  t = b_53;
  return(t);
}
ATerm m_12 (ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm p_88 = NULL;
  t = SSL_write_term_to_stream_baf(t_52, u_52);
  p_88 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_88);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm s_88 = NULL,t_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_29 = ATgetArgument(t, 0);
      if(match_cons(w_29, sym_Stream_1))
        {
          s_88 = ATgetArgument(w_29, 0);
        }
      else
        _fail(t);
      t_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_12(s_88, t_88, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL,y_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_29 = ATgetArgument(t, 0);
      if(match_cons(x_29, sym_Stream_1))
        {
          x_88 = ATgetArgument(x_29, 0);
        }
      else
        _fail(t);
      y_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_12(x_88, y_88, t);
  u_88 = t;
  t = term_y_29;
  v_88 = t;
  t = u_88;
  if(match_cons(t, sym_Stream_1))
    {
      w_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_29, u_88);
  t = k_12(v_88, w_88, t);
  return(t);
}
ATerm output_1_0 (ATerm l_117 (ATerm), ATerm t)
{
  ATerm q_88 = NULL,r_88 = NULL;
  t = l_117(t);
  r_88 = t;
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_30;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        t = term_d_30;
      }
    q_88 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_88, r_88);
    {
      ATerm e_30 = t;
      int f_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_g_30;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, q_88, r_88);
          LocalPopChoice(f_30);
          if(match_cons(t, sym__2))
            {
              ATerm h_30 = ATgetArgument(t, 0);
              ATerm i_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_12(n_3, q_88, r_88, t);
        }
      else
        {
          t = e_30;
          if(match_cons(t, sym__2))
            {
              ATerm j_30 = ATgetArgument(t, 0);
              ATerm k_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_12(o_3, q_88, r_88, t);
        }
    }
  }
  return(t);
}
ATerm m_89 (ATerm g_89, ATerm t)
{
  t = SSL_fclose(g_89);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_89 = NULL,k_89 = NULL;
  k_89 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_89 = ATgetArgument(t, 0);
      {
        ATerm l_30 = t;
        int m_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_89);
            ;
            LocalPopChoice(m_30);
          }
        else
          {
            t = l_30;
            t = m_89(k_89, t);
          }
      }
    }
  else
    {
      t = m_89(k_89, t);
    }
  return(t);
}
ATerm p_12 (ATerm z_52, ATerm t)
{
  t = SSL_read_term_from_stream(z_52);
  return(t);
}
ATerm q_12 (ATerm l_49, ATerm m_49, ATerm t)
{
  ATerm n_89 = NULL;
  t = SSL_fopen(l_49, m_49);
  n_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_89);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_89 = NULL;
  t = SSL_stdin_stream();
  o_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_89);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_89 = NULL;
  t = SSL_stdout_stream();
  p_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_89);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_89 = NULL;
  t = SSL_stderr_stream();
  q_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_89);
  return(t);
}
ATerm z_90 (ATerm w_89, ATerm t)
{
  ATerm x_89 = NULL;
  t = SSL_explode_term(w_89);
  if(match_cons(t, sym__2))
    {
      ATerm n_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_30 = ATgetArgument(t, 1);
        if(((ATgetType(o_30) == AT_LIST) && !(ATisEmpty(o_30))))
          {
            x_89 = ATgetFirst((ATermList) o_30);
            {
              ATerm p_30 = (ATerm) ATgetNext((ATermList) o_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_89;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_89;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_89;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_89;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm a_91 (ATerm a_90, ATerm b_90, ATerm d_90, ATerm t)
{
  ATerm e_90 = NULL,f_90 = NULL,g_90 = NULL,j_90 = NULL,j_15 = NULL;
  t = SSLgetAnnotations(d_90);
  g_90 = t;
  t = a_90;
  if(match_cons(t, sym_Path_1))
    {
      j_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_90, b_90);
  j_15 = t;
  t = SSLsetAnnotations(j_15, g_90);
  if(match_cons(t, sym__2))
    {
      e_90 = ATgetArgument(t, 0);
      f_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_12(e_90, f_90, t);
  return(t);
}
ATerm b_91 (ATerm l_90, ATerm n_90, ATerm o_90, ATerm t)
{
  ATerm p_90 = NULL,q_90 = NULL,r_90 = NULL,u_90 = NULL,l_15 = NULL;
  t = SSLgetAnnotations(o_90);
  r_90 = t;
  t = SSL_is_string(l_90);
  u_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_90, n_90);
  l_15 = t;
  t = SSLsetAnnotations(l_15, r_90);
  if(match_cons(t, sym__2))
    {
      p_90 = ATgetArgument(t, 0);
      q_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_12(p_90, q_90, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm w_90 = NULL,x_90 = NULL,y_90 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_30 = ATgetArgument(t, 0);
      ATerm r_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  w_90 = t;
  if(match_cons(t, sym__2))
    {
      x_90 = ATgetArgument(t, 0);
      y_90 = ATgetArgument(t, 1);
      {
        ATerm s_30 = t;
        int t_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_90(w_90, t);
            ;
            LocalPopChoice(t_30);
          }
        else
          {
            t = s_30;
            {
              ATerm u_30 = t;
              int w_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_91(x_90, y_90, w_90, t);
                  ;
                  LocalPopChoice(w_30);
                }
              else
                {
                  t = u_30;
                  t = b_91(x_90, y_90, w_90, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_90(w_90, t);
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_x_30;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_91 = NULL,d_91 = NULL,e_91 = NULL;
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_91 = NULL;
      f_91 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_91, term_a_31);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      t = debug_1_0(q_3, t);
      _fail(t);
    }
  d_91 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_12(e_91, t);
  c_91 = t;
  t = d_91;
  t = fclose_0_0(t);
  t = c_91;
  return(t);
}
ATerm input_1_0 (ATerm m_117 (ATerm), ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      t = term_e_31;
    }
  t = ReadFromFile_0_0(t);
  t = m_117(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_91 = NULL,i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL;
  h_91 = t;
  t = term_f_31;
  t = whoami_0_0(t);
  i_91 = t;
  t = term_g_31;
  k_91 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_31), i_91), term_h_31);
  l_91 = t;
  t = SSL_printnl(k_91, l_91);
  t = term_j_31;
  j_91 = t;
  t = SSL_exit(j_91);
  t = h_91;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm n_91 = NULL;
  n_91 = t;
  if(match_string(t, "-k"))
    {
      t = n_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_91;
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL;
  o_91 = t;
  t = SSL_string_to_int(o_91);
  p_91 = t;
  t = term_l_31;
  q_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_31, p_91);
  t = y_12(q_91, p_91, t);
  t = o_91;
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, t_3, u_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm s_91 = NULL;
  s_91 = t;
  if(match_string(t, "-S"))
    {
      t = s_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_91;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm t_91 = NULL,u_91 = NULL;
  t = term_n_31;
  t_91 = t;
  t = term_o_31;
  u_91 = t;
  t = term_p_31;
  t = y_12(t_91, u_91, t);
  t = term_q_31;
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm y_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm v_91 = NULL,w_91 = NULL,x_91 = NULL;
  v_91 = t;
  t = SSL_string_to_int(v_91);
  w_91 = t;
  t = term_n_31;
  x_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_31, w_91);
  t = y_12(x_91, w_91, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_91);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm y_91 = NULL,z_91 = NULL;
  t = term_t_31;
  y_91 = t;
  t = term_f_31;
  z_91 = t;
  t = term_u_31;
  t = y_12(y_91, z_91, t);
  t = term_v_31;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_3, w_3, x_3, t);
      ;
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      {
        ATerm z_31 = t;
        int a_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_3, z_3, b_4, t);
            ;
            LocalPopChoice(a_32);
          }
        else
          {
            t = z_31;
            t = Option_3_0(c_4, e_4, f_4, t);
          }
      }
    }
  return(t);
}
ATerm y_12 (ATerm a_54, ATerm b_54, ATerm t)
{
  ATerm a_92 = NULL;
  t = term_c_32;
  a_92 = t;
  t = SSL_table_put(a_92, a_54, b_54);
  t = (ATerm) ATmakeAppl(sym__3, term_c_32, a_54, b_54);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm d_92 = NULL,e_92 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_92 = NULL,j_92 = NULL,k_92 = NULL;
      t = term_f_31;
      t = h_0(t);
      i_92 = t;
      t = term_d_32;
      j_92 = t;
      t = term_e_32;
      k_92 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_32, term_e_32, i_92);
      t = w_12(j_92, k_92, i_92, t);
      _fail(t);
    }
  else
    {
      ATerm n_92 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_92 = ATgetFirst((ATermList) t);
          e_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_92;
      t = d_0(t);
      t = term_f_31;
      t = g_0(t);
      n_92 = t;
      t = (ATerm) ATinsert(CheckATermList(e_92), n_92);
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm p_92 = NULL;
  p_92 = t;
  if(match_string(t, "-o"))
    {
      t = p_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_92;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm q_92 = NULL,r_92 = NULL;
  q_92 = t;
  t = term_c_30;
  r_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_30, q_92);
  t = y_12(r_92, q_92, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_92);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_f_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, h_4, i_4, t);
  return(t);
}
ATerm w_12 (ATerm y_58, ATerm z_58, ATerm x_58, ATerm t)
{
  ATerm t_92 = NULL,u_92 = NULL,v_92 = NULL;
  t_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_32 = ATgetArgument(t, 0);
            ATerm j_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
        t = v_12(y_58, z_58, t);
        ;
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
        t = (ATerm) ATempty;
      }
    u_92 = t;
    t = (ATerm) ATinsert(CheckATermList(u_92), x_58);
    v_92 = t;
    t = SSL_table_put(y_58, z_58, v_92);
    t = t_92;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL;
      t = term_f_31;
      t = m_0(t);
      g_93 = t;
      t = term_d_32;
      h_93 = t;
      t = term_e_32;
      i_93 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_32, term_e_32, g_93);
      t = w_12(h_93, i_93, g_93, t);
      _fail(t);
    }
  else
    {
      ATerm o_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_93 = ATgetFirst((ATermList) t);
          d_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_93;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_93 = ATgetFirst((ATermList) t);
          f_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_93;
      t = k_0(t);
      t = e_93;
      t = l_0(t);
      o_93 = t;
      t = (ATerm) ATinsert(CheckATermList(f_93), o_93);
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm q_93 = NULL;
  q_93 = t;
  if(match_string(t, "-i"))
    {
      t = q_93;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_93;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm r_93 = NULL,s_93 = NULL;
  r_93 = t;
  t = term_d_31;
  s_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_31, r_93);
  t = y_12(s_93, r_93, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_93);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, k_4, m_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_31;
  t = whoami_0_0(t);
  t_93 = t;
  t = term_g_31;
  v_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_32), t_93);
  w_93 = t;
  t = SSL_printnl(v_93, w_93);
  t = term_j_31;
  u_93 = t;
  t = SSL_exit(u_93);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_32;
  t = get_config_0_0(t);
  return(t);
}
ATerm r_12 (ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_46, k_46);
      ;
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      t = SSL_addr(j_46, k_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t)
{
  ATerm y_93 = NULL,z_93 = NULL,a_94 = NULL;
  y_93 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_93;
      t = r_105(t);
    }
  else
    {
      ATerm d_94 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_93 = ATgetFirst((ATermList) t);
          a_94 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_94;
      t = foldr_2_0(r_105, s_105, t);
      d_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_93, d_94);
      t = s_105(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_o_31;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL;
  if(match_cons(t, sym__2))
    {
      k_8 = ATgetArgument(t, 0);
      l_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_12(k_8, l_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_94 = NULL,g_8 = NULL,h_8 = NULL;
  t = times_0_0(t);
  h_8 = t;
  t = SSL_explode_term(h_8);
  if(match_cons(t, sym__2))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8;
  t = foldr_2_0(n_4, p_4, t);
  g_94 = t;
  t = SSL_TicksToSeconds(g_94);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL;
  s_94 = t;
  if(match_cons(t, sym__2))
    {
      t_94 = ATgetArgument(t, 0);
      u_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_94;
        if((t_94 != t))
          {
            _fail(t);
          }
        t = s_94;
        ;
        LocalPopChoice(s_32);
      }
    else
      {
        t = r_32;
        t = (ATerm) ATmakeAppl(sym__2, t_94, u_94);
        {
          ATerm t_32 = t;
          int u_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_94, u_94);
              ;
              LocalPopChoice(u_32);
            }
          else
            {
              t = t_32;
              t = SSL_gtr(t_94, u_94);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_94, u_94);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_114 (ATerm), ATerm t)
{
  ATerm y_94 = NULL;
  y_94 = t;
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_95 = NULL;
        t = term_n_31;
        t = get_config_0_0(t);
        a_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_95, term_j_31);
        t = geq_0_0(t);
        t = y_94;
        t = m_114(t);
        ;
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        t = y_94;
      }
  }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm c_95 = NULL,d_95 = NULL,f_95 = NULL,g_95 = NULL;
  t = run_time_0_0(t);
  c_95 = t;
  t = term_f_31;
  t = whoami_0_0(t);
  d_95 = t;
  t = term_g_31;
  f_95 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_32), c_95), term_x_32), d_95);
  g_95 = t;
  t = SSL_printnl(f_95, g_95);
  t = (ATerm) ATmakeAppl(sym__2, term_g_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_32), c_95), term_x_32), d_95));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_95 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_31;
  h_95 = t;
  t = SSL_exit(h_95);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm p_95 = NULL,q_95 = NULL;
  q_95 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_95;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_95 = ATgetArgument(t, 0);
          {
            ATerm i_9 = NULL,o_15 = NULL;
            t = SSLgetAnnotations(q_95);
            i_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_95);
            o_15 = t;
            t = SSLsetAnnotations(o_15, i_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_95;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_117 (ATerm), ATerm t)
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_33);
    }
  else
    {
      t = z_32;
      t = fetch_1_0(r_4, t);
    }
  t = c_117(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_95 = NULL,u_95 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_95 = ATgetFirst((ATermList) t);
      u_95 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_95 = NULL,z_95 = NULL;
        ATerm s_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_95)), not_null(z_95));
          return(t);
        }
        t = u_95;
        t = j_0(t);
        if(((y_95 != NULL) && (y_95 != t)))
          _fail(t);
        else
          y_95 = t;
        t = t_95;
        t = i_0(t);
        if(((z_95 != NULL) && (z_95 != t)))
          _fail(t);
        else
          z_95 = t;
        t = u_95;
        t = reverse_acc_2_0(i_0, s_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_31;
      t = j_0(t);
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm d_96 = NULL,e_96 = NULL,f_96 = NULL,q_15 = NULL;
  f_96 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_96);
  d_96 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_96);
  q_15 = t;
  t = SSLsetAnnotations(q_15, d_96);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm h_96 = NULL;
  h_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_96), term_c_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_96 = NULL,c_96 = NULL;
  ATerm d_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_33);
    }
  else
    {
      t = d_33;
      t = fetch_1_0(t_4, t);
    }
  t = term_f_33;
  t = echo_0_0(t);
  t = term_d_32;
  b_96 = t;
  t = term_e_32;
  c_96 = t;
  t = term_g_33;
  t = v_12(b_96, c_96, t);
  t = reverse_acc_2_0(_id, w_4, t);
  t = map_1_0(y_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm l_97 (ATerm t)
  {
    ATerm i_97 = NULL,j_97 = NULL,k_97 = NULL;
    i_97 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_97 = ATgetFirst((ATermList) t);
        k_97 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_33 = t;
      int j_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_9 = NULL,a_10 = NULL,b_16 = NULL;
          t = SSLgetAnnotations(i_97);
          w_9 = t;
          t = j_97;
          t = l_107(t);
          a_10 = t;
          t = (ATerm) ATinsert(CheckATermList(k_97), a_10);
          b_16 = t;
          t = SSLsetAnnotations(b_16, w_9);
          ;
          LocalPopChoice(j_33);
        }
      else
        {
          t = h_33;
          {
            ATerm i_10 = NULL,l_10 = NULL,h_16 = NULL;
            t = SSLgetAnnotations(i_97);
            i_10 = t;
            t = k_97;
            t = l_97(t);
            l_10 = t;
            t = (ATerm) ATinsert(CheckATermList(l_10), j_97);
            h_16 = t;
            t = SSLsetAnnotations(h_16, i_10);
          }
        }
    }
    return(t);
  }
  t = l_97(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_97 = NULL,q_97 = NULL,r_97 = NULL;
  p_97 = t;
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_97;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_33 = ATgetFirst((ATermList) t);
                ATerm n_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_97;
          }
        ;
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
        t = (ATerm) ATinsert(ATempty, p_97);
      }
    q_97 = t;
    t = term_d_30;
    r_97 = t;
    t = SSL_printnl(r_97, q_97);
    t = p_97;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm u_12 (ATerm l_40, ATerm m_40, ATerm t)
{
  t = SSL_strcat(l_40, m_40);
  return(t);
}
ATerm debug_1_0 (ATerm a_113 (ATerm), ATerm t)
{
  ATerm v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL;
  v_97 = t;
  t = a_113(t);
  w_97 = t;
  t = term_g_31;
  x_97 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_97), w_97);
  y_97 = t;
  t = SSL_printnl(x_97, y_97);
  t = v_97;
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(p_33);
    }
  else
    {
      t = o_33;
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_q_33;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_98 = NULL;
      f_98 = t;
      t = SSL_is_string(f_98);
      ;
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      {
        ATerm t_33 = t;
        int u_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_4, t);
            ;
            LocalPopChoice(u_33);
          }
        else
          {
            t = t_33;
            {
              ATerm l_98 = NULL,m_98 = NULL,o_98 = NULL;
              l_98 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_98 = ATgetArgument(t, 0);
                  t = m_98;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_98 = ATgetArgument(t, 0);
                      t = m_98;
                      {
                        ATerm v_33 = t;
                        int w_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(w_33);
                          }
                        else
                          {
                            t = v_33;
                            t = debug_1_0(a_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_98 = NULL,t_98 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_98 = ATgetArgument(t, 0);
                          o_98 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_98;
                      t = eval_config_0_0(t);
                      s_98 = t;
                      t = o_98;
                      t = eval_config_0_0(t);
                      t_98 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_98, t_98);
                      t = u_12(s_98, t_98, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_12 (ATerm p_60, ATerm q_60, ATerm t)
{
  t = SSL_table_get(p_60, q_60);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm x_98 = NULL,y_98 = NULL;
  x_98 = t;
  t = term_c_32;
  y_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_32, x_98);
  t = v_12(y_98, x_98, t);
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_98 = NULL,a_99 = NULL;
        t = eval_config_0_0(t);
        z_98 = t;
        t = term_c_32;
        a_99 = t;
        t = SSL_table_put(a_99, x_98, z_98);
        t = z_98;
        ;
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
      }
  }
  return(t);
}
ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm d_99 = NULL,e_99 = NULL;
  t = term_z_33;
  d_99 = t;
  t = term_f_31;
  e_99 = t;
  t = term_a_34;
  t = y_12(d_99, e_99, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_c_34;
  return(t);
}
ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm f_99 = NULL,g_99 = NULL,h_99 = NULL,i_99 = NULL;
  t = term_z_33;
  h_99 = t;
  t = term_f_31;
  i_99 = t;
  t = term_a_34;
  t = y_12(h_99, i_99, t);
  t = term_d_34;
  f_99 = t;
  t = term_f_31;
  g_99 = t;
  t = term_e_34;
  t = y_12(f_99, g_99, t);
  t = term_f_34;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_5, d_5, g_5, t);
      ;
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      t = Option_3_0(i_5, j_5, u_5, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_119 (ATerm), ATerm t)
{
  ATerm n_99 = NULL,o_99 = NULL,p_99 = NULL,q_99 = NULL,s_99 = NULL,t_99 = NULL,k_16 = NULL;
  n_99 = t;
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_34;
        t = f_119(t);
        ;
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
      }
    t = n_99;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_99 = ATgetFirst((ATermList) t);
        q_99 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_99);
    o_99 = t;
    t = term_n_32;
    t_99 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_32, p_99);
    t = y_12(t_99, p_99, t);
    t = q_99;
    {
      ATerm d_100 (ATerm t)
      {
        ATerm n_34 = t;
        int o_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_34 = t;
            int q_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_99 = NULL;
                w_99 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = w_99;
                ;
                LocalPopChoice(q_34);
              }
            else
              {
                t = p_34;
                t = f_119(t);
                t = Cons_2_0(_id, d_100, t);
              }
            ;
            LocalPopChoice(o_34);
          }
        else
          {
            t = n_34;
            {
              ATerm z_99 = NULL,a_100 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_99 = ATgetFirst((ATermList) t);
                  a_100 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_100), (ATerm) ATmakeAppl(sym_Undefined_1, z_99));
            }
          }
        return(t);
      }
      t = d_100(t);
      s_99 = t;
      t = (ATerm) ATinsert(CheckATermList(s_99), (ATerm) ATmakeAppl(sym_Program_1, p_99));
      k_16 = t;
      t = SSLsetAnnotations(k_16, o_99);
    }
  }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm p_100 = NULL;
  p_100 = t;
  if(match_string(t, "--help"))
    {
      t = p_100;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_100;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_100;
        }
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm q_100 = NULL,r_100 = NULL;
  t = term_b_33;
  q_100 = t;
  t = term_f_31;
  r_100 = t;
  t = term_r_34;
  t = y_12(q_100, r_100, t);
  t = term_s_34;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_t_34;
  return(t);
}
ATerm z_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_119 (ATerm), ATerm t)
{
  ATerm i_100 = NULL,j_100 = NULL,k_100 = NULL,l_100 = NULL,m_100 = NULL,n_100 = NULL,o_100 = NULL;
  k_100 = t;
  t = term_d_32;
  m_100 = t;
  t = term_e_32;
  n_100 = t;
  t = (ATerm) ATempty;
  o_100 = t;
  t = SSL_table_put(m_100, n_100, o_100);
  t = k_100;
  {
    ATerm v_5 (ATerm t)
    {
      ATerm u_34 = t;
      int v_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_119(t);
          ;
          LocalPopChoice(v_34);
        }
      else
        {
          t = u_34;
          {
            ATerm w_34 = t;
            int x_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_5, x_5, y_5, t);
                ;
                LocalPopChoice(x_34);
              }
            else
              {
                t = w_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_5, t);
    {
      ATerm y_34 = t;
      int a_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_100 = NULL;
          y_100 = t;
          {
            ATerm b_35 = t;
            int c_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_11 = NULL;
                t = y_100;
                {
                  ATerm d_35 = t;
                  int e_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_b_33;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(e_35);
                    }
                  else
                    {
                      t = d_35;
                      t = fetch_1_0(z_5, t);
                    }
                  t = y_100;
                  t = default_system_usage_0_0(t);
                  t = term_o_31;
                  d_11 = t;
                  t = SSL_exit(d_11);
                }
                ;
                LocalPopChoice(c_35);
              }
            else
              {
                t = b_35;
                {
                  ATerm h_11 = NULL;
                  t = term_z_33;
                  t = get_config_0_0(t);
                  t = y_100;
                  t = default_system_about_0_0(t);
                  t = term_o_31;
                  h_11 = t;
                  t = SSL_exit(h_11);
                }
              }
          }
          ;
          LocalPopChoice(a_35);
        }
      else
        {
          t = y_34;
          {
            ATerm f_35 = t;
            int g_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_100 = NULL,a_101 = NULL,b_101 = NULL;
                ATerm a_6 (ATerm t)
                {
                  ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL,n_16 = NULL;
                  e_101 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      d_101 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_101);
                  c_101 = t;
                  t = d_101;
                  if(((i_100 != NULL) && (i_100 != t)))
                    _fail(t);
                  else
                    i_100 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, d_101);
                  n_16 = t;
                  t = SSLsetAnnotations(n_16, c_101);
                  return(t);
                }
                t = fetch_1_0(a_6, t);
                t = term_g_31;
                a_101 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_100)), term_h_35);
                b_101 = t;
                t = SSL_printnl(a_101, b_101);
                t = (ATerm) ATmakeAppl(sym__2, term_g_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_100)), term_h_35));
                t = default_system_usage_0_0(t);
                t = term_j_31;
                z_100 = t;
                t = SSL_exit(z_100);
                ;
                LocalPopChoice(g_35);
              }
            else
              {
                t = f_35;
              }
          }
        }
      j_100 = t;
      t = term_d_32;
      l_100 = t;
      t = SSL_table_destroy(l_100);
      t = j_100;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm t)
{
  ATerm j_101 = NULL,k_101 = NULL,l_101 = NULL,m_101 = NULL;
  t = parse_options_1_0(e_117, t);
  j_101 = t;
  t = term_i_35;
  m_101 = t;
  t = SSL_table_create(m_101);
  t = term_i_35;
  k_101 = t;
  t = term_k_35;
  l_101 = t;
  t = SSL_table_put(k_101, l_101, j_101);
  t = j_101;
  t = g_117(t);
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_117, t);
        ;
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
        {
          ATerm n_35 = t;
          int o_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_117(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_35);
            }
          else
            {
              t = n_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm p_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(q_35);
    }
  else
    {
      t = p_35;
      {
        ATerm r_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(s_35);
          }
        else
          {
            t = r_35;
            {
              ATerm t_35 = t;
              int u_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(e_6, f_6, h_6, t);
                  ;
                  LocalPopChoice(u_35);
                }
              else
                {
                  t = t_35;
                  {
                    ATerm w_35 = t;
                    int x_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(x_35);
                      }
                    else
                      {
                        t = w_35;
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
ATerm d_6 (ATerm t)
{
  t = input_1_0(i_6, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm o_101 = NULL,p_101 = NULL;
  t = term_g_30;
  o_101 = t;
  t = term_f_31;
  p_101 = t;
  t = term_y_35;
  t = y_12(o_101, p_101, t);
  t = term_z_35;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_a_36;
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = output_1_0(j_6, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL,u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL,l_17 = NULL,k_17 = NULL;
  y_101 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_101);
  r_101 = t;
  t = s_101;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_101 = ATgetFirst((ATermList) t);
      v_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_101);
  t_101 = t;
  t = v_101;
  t = Cons_2_0(k_6, l_6, t);
  w_101 = t;
  t = (ATerm) ATinsert(CheckATermList(w_101), u_101);
  k_17 = t;
  t = SSLsetAnnotations(k_17, t_101);
  x_101 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_101);
  l_17 = t;
  t = SSLsetAnnotations(l_17, r_101);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm z_101 = NULL,c_102 = NULL,d_102 = NULL,e_102 = NULL,j_17 = NULL;
  e_102 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      c_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_102);
  z_101 = t;
  t = c_102;
  t = map_1_0(m_6, t);
  d_102 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, d_102);
  j_17 = t;
  t = SSLsetAnnotations(j_17, z_101);
  return(t);
}
ATerm l_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL,k_102 = NULL,l_102 = NULL,x_16 = NULL;
  l_102 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      g_102 = ATgetArgument(t, 0);
      h_102 = ATgetArgument(t, 1);
      i_102 = ATgetArgument(t, 2);
      j_102 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_102);
  f_102 = t;
  t = j_102;
  t = define_congruences_0_0(t);
  k_102 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, g_102, h_102, i_102, k_102);
  x_16 = t;
  t = SSLsetAnnotations(x_16, f_102);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(b_6, default_usage_0_0, _id, d_6, t);
  return(t);
}
