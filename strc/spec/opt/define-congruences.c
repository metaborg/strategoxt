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
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_g_35;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_k_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_p_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_z_30;
ATerm term_v_30;
ATerm term_h_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_z_29;
ATerm term_v_29;
ATerm term_o_29;
ATerm term_l_29;
ATerm term_m_28;
ATerm term_h_24;
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
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_m_31);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_31);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym__2, term_r_31, term_e_31);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym__2, term_b_32, term_d_32);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__2, term_z_33, term_e_31);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__2, term_c_34, term_e_31);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym__2, term_a_33, term_e_31);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym__2, term_h_30, term_e_31);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
ATerm topdown_1_0 (ATerm h_92 (ATerm), ATerm);
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
ATerm oncetd_1_0 (ATerm l_93 (ATerm), ATerm);
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
ATerm r_12 (ATerm o_68, ATerm u_68, ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_107 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm b_81 (ATerm t_80, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm v_12 (ATerm z_68, ATerm h_69, ATerm g_69, ATerm);
ATerm pat_td_1_0 (ATerm n_90 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm MatchingCongruence_0_0 (ATerm);
ATerm repeat_1_0 (ATerm b_102 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm i_92 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm define_congruences_0_0 (ATerm);
ATerm map_1_0 (ATerm c_107 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm);
ATerm w_12 (ATerm j_49, ATerm k_49, ATerm);
ATerm x_12 (ATerm x_52, ATerm y_52, ATerm);
ATerm z_12 (ATerm d_113 (ATerm), ATerm v_477, ATerm b_53, ATerm);
ATerm y_12 (ATerm t_52, ATerm u_52, ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm output_1_0 (ATerm m_117 (ATerm), ATerm);
ATerm n_89 (ATerm h_89, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm a_13 (ATerm z_52, ATerm);
ATerm b_13 (ATerm l_49, ATerm m_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_91 (ATerm x_89, ATerm);
ATerm b_91 (ATerm b_90, ATerm d_90, ATerm e_90, ATerm);
ATerm c_91 (ATerm m_90, ATerm o_90, ATerm p_90, ATerm);
ATerm c_13 (ATerm);
ATerm q_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm n_117 (ATerm), ATerm);
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
ATerm k_13 (ATerm a_54, ATerm b_54, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm i_13 (ATerm y_58, ATerm z_58, ATerm x_58, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm d_13 (ATerm j_46, ATerm k_46, ATerm);
ATerm foldr_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_114 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm r_4 (ATerm);
ATerm need_help_1_0 (ATerm d_117 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm w_4 (ATerm);
ATerm y_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_107 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm g_13 (ATerm j_40, ATerm k_40, ATerm);
ATerm debug_1_0 (ATerm b_113 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm h_13 (ATerm p_60, ATerm q_60, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm g_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm u_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm g_119 (ATerm), ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm parse_options_1_0 (ATerm f_119 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm);
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
  ATerm t_15 = NULL,u_15 = NULL,x_15 = NULL,e_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_6 = ATgetArgument(t, 0);
      if(((ATgetType(q_6) == AT_LIST) && !(ATisEmpty(q_6))))
        {
          t_15 = ATgetFirst((ATermList) q_6);
          u_15 = (ATerm) ATgetNext((ATermList) q_6);
        }
      else
        _fail(t);
      {
        ATerm s_6 = ATgetArgument(t, 1);
        if(((ATgetType(s_6) == AT_LIST) && !(ATisEmpty(s_6))))
          {
            x_15 = ATgetFirst((ATermList) s_6);
            e_16 = (ATerm) ATgetNext((ATermList) s_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_15, x_15), (ATerm) ATmakeAppl(sym__2, u_15, e_16));
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_16), f_16);
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL;
  if(match_cons(t, sym__2))
    {
      h_16 = ATgetArgument(t, 0);
      i_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_16), (ATerm) ATmakeAppl(sym_Match_1, i_16));
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
  ATerm m_25 = NULL,n_25 = NULL,u_26 = NULL,d_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      if(((ATgetType(x_6) == AT_LIST) && !(ATisEmpty(x_6))))
        {
          m_25 = ATgetFirst((ATermList) x_6);
          n_25 = (ATerm) ATgetNext((ATermList) x_6);
        }
      else
        _fail(t);
      {
        ATerm y_6 = ATgetArgument(t, 1);
        if(((ATgetType(y_6) == AT_LIST) && !(ATisEmpty(y_6))))
          {
            u_26 = ATgetFirst((ATermList) y_6);
            d_27 = (ATerm) ATgetNext((ATermList) y_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_25, u_26), (ATerm) ATmakeAppl(sym__2, n_25, d_27));
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm e_27 = NULL,i_27 = NULL;
  if(match_cons(t, sym__2))
    {
      e_27 = ATgetArgument(t, 0);
      i_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_27), e_27);
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm j_27 = NULL,l_27 = NULL;
  if(match_cons(t, sym__2))
    {
      j_27 = ATgetArgument(t, 0);
      l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_27), (ATerm) ATmakeAppl(sym_Match_1, l_27));
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
        ATerm g_42 = NULL,i_42 = NULL;
        g_42 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm d_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        i_42 = t;
        t = SSLgetAnnotations(g_42);
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
        t = i_42;
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
  ATerm i_54 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_54, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_7), term_o_7));
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL;
  p_54 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      o_54 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, o_54, term_o_7);
    }
  else
    {
      t = p_54;
    }
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm b_55 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_55, term_o_7);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL;
  d_55 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      c_55 = ATgetArgument(t, 0);
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, c_55, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_7), term_o_7));
            ;
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            t = d_55;
          }
      }
    }
  else
    {
      t = d_55;
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm n_55 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_55, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_7), term_o_7));
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL;
  p_55 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      o_55 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, o_55, term_o_7);
    }
  else
    {
      t = p_55;
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
                          ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL;
                          t = s_9;
                          t = new_0_0(t);
                          v_11 = t;
                          t = bottomup_1_0(a_0, t);
                          g_12 = t;
                          t = (ATerm) ATempty;
                          t = a_0(t);
                          h_12 = t;
                          t = (ATerm) ATinsert(CheckATermList(h_12), g_12);
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
                                ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,e_13 = NULL,f_13 = NULL,j_13 = NULL,l_13 = NULL;
                                t = s_9;
                                t = new_0_0(t);
                                l_12 = t;
                                t = bottomup_1_0(a_0, t);
                                j_13 = t;
                                t = (ATerm) ATempty;
                                t = a_0(t);
                                l_13 = t;
                                t = (ATerm) ATinsert(CheckATermList(l_13), j_13);
                                t = a_0(t);
                                m_12 = t;
                                t = l_12;
                                t = bottomup_1_0(a_0, t);
                                f_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, f_13);
                                t = a_0(t);
                                e_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, e_13);
                                t = a_0(t);
                                o_12 = t;
                                t = p_9;
                                t = bottomup_1_0(a_0, t);
                                q_12 = t;
                                t = l_12;
                                t = bottomup_1_0(a_0, t);
                                u_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, u_12);
                                t = a_0(t);
                                t_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, t_12);
                                t = a_0(t);
                                s_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, q_12, s_12);
                                t = a_0(t);
                                p_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, o_12, p_12);
                                t = a_0(t);
                                n_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, m_12, n_12);
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
                        ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
                        t = s_9;
                        t = new_0_0(t);
                        o_13 = t;
                        t = bottomup_1_0(a_0, t);
                        z_13 = t;
                        t = (ATerm) ATempty;
                        t = a_0(t);
                        a_14 = t;
                        t = (ATerm) ATinsert(CheckATermList(a_14), z_13);
                        t = a_0(t);
                        p_13 = t;
                        t = o_13;
                        t = bottomup_1_0(a_0, t);
                        y_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, y_13);
                        t = a_0(t);
                        x_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, x_13);
                        t = a_0(t);
                        r_13 = t;
                        t = p_9;
                        t = bottomup_1_0(a_0, t);
                        t_13 = t;
                        t = o_13;
                        t = bottomup_1_0(a_0, t);
                        w_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, w_13);
                        t = a_0(t);
                        v_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, v_13);
                        t = a_0(t);
                        u_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_13, u_13);
                        t = a_0(t);
                        s_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, r_13, s_13);
                        t = a_0(t);
                        q_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, p_13, q_13);
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
                                                  ATerm j_15 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                  t = a_0(t);
                                                  j_15 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, j_15);
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
                                                                ATerm r_15 = NULL;
                                                                t = w_8;
                                                                if((z_8 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, q_8, p_8);
                                                                t = genzip_4_0(b_0, c_0, e_0, o_0, t);
                                                                r_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, z_8, q_8)), h_9));
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
                                                                      ATerm l_16 = NULL;
                                                                      t = f_9;
                                                                      if((m_9 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, m_9);
                                                                      t = a_0(t);
                                                                      l_16 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_16, h_9);
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
                                                        ATerm r_16 = NULL;
                                                        t = f_9;
                                                        if((m_9 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, m_9);
                                                        t = a_0(t);
                                                        r_16 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, r_16, h_9);
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
                                                          ATerm b_17 = NULL;
                                                          t = f_9;
                                                          if((m_9 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, m_9);
                                                          t = a_0(t);
                                                          b_17 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_17, h_9);
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
                                                              ATerm g_17 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              g_17 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, g_17);
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
                                                  ATerm r_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                  t = a_0(t);
                                                  r_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, r_17);
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
                                                      ATerm b_18 = NULL;
                                                      t = f_9;
                                                      if((m_9 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, m_9);
                                                      t = a_0(t);
                                                      b_18 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_18, h_9);
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
                                                          ATerm f_18 = NULL;
                                                          t = f_9;
                                                          if((m_9 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_9);
                                                          t = a_0(t);
                                                          f_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_18, h_9);
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
                                                              ATerm m_18 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              m_18 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, m_18);
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
                                                      ATerm b_19 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                      t = a_0(t);
                                                      b_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, b_19);
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
                                                          ATerm f_19 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_9);
                                                          t = a_0(t);
                                                          f_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_19, h_9);
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
                                                                  ATerm u_19 = NULL,z_19 = NULL;
                                                                  t = w_8;
                                                                  if((z_8 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, z_8);
                                                                  t = a_0(t);
                                                                  z_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, z_19);
                                                                  t = a_0(t);
                                                                  u_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_19, h_9);
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
                                                                  ATerm l_20 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                                  t = a_0(t);
                                                                  l_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, l_20);
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
                                                  int i_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm u_20 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                      t = a_0(t);
                                                      u_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, u_20);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(i_12);
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
                                                ATerm j_12 = t;
                                                int k_12 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm m_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(k_12);
                                                    {
                                                      ATerm n_13 = t;
                                                      int b_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm z_20 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_9);
                                                          t = a_0(t);
                                                          z_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_20, h_9);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(b_14);
                                                        }
                                                      else
                                                        {
                                                          t = n_13;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_12;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        n_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_14 = t;
                                                          int d_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_21 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              g_21 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, g_21);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(d_14);
                                                            }
                                                          else
                                                            {
                                                              t = c_14;
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
                                            ATerm e_14 = t;
                                            int f_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_8;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(f_14);
                                              }
                                            else
                                              {
                                                t = e_14;
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
                                                  ATerm g_14 = t;
                                                  int h_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                      t = a_0(t);
                                                      w_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, w_21);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(h_14);
                                                    }
                                                  else
                                                    {
                                                      t = g_14;
                                                      t = s_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm i_14 = t;
                                                int j_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm k_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(j_14);
                                                    {
                                                      ATerm l_14 = t;
                                                      int m_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm n_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, f_9, r_8, u_8);
                                                          t = a_0(t);
                                                          n_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_22, h_9);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(m_14);
                                                        }
                                                      else
                                                        {
                                                          t = l_14;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        n_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_14 = t;
                                                          int o_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              s_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, s_22);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(o_14);
                                                            }
                                                          else
                                                            {
                                                              t = n_14;
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
                                            ATerm p_14 = t;
                                            int q_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_8;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(q_14);
                                              }
                                            else
                                              {
                                                t = p_14;
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
                                                  ATerm r_14 = t;
                                                  int s_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                      t = a_0(t);
                                                      f_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, f_23);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(s_14);
                                                    }
                                                  else
                                                    {
                                                      t = r_14;
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
                                                      ATerm t_14 = t;
                                                      int u_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                          t = a_0(t);
                                                          a_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, a_24);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(u_14);
                                                        }
                                                      else
                                                        {
                                                          t = t_14;
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
                                        ATerm v_14 = t;
                                        int w_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_b_8;
                                            t = a_0(t);
                                            ;
                                            LocalPopChoice(w_14);
                                          }
                                        else
                                          {
                                            t = v_14;
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
                                              ATerm x_14 = t;
                                              int y_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm b_25 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                  t = a_0(t);
                                                  b_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, b_25);
                                                  t = a_0(t);
                                                  ;
                                                  LocalPopChoice(y_14);
                                                }
                                              else
                                                {
                                                  t = x_14;
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
                                                                  int f_15 = stack_ptr;
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
                                                                      LocalPopChoice(f_15);
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
                                                    ATerm g_15 = t;
                                                    int h_15 = stack_ptr;
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
                                                        LocalPopChoice(h_15);
                                                      }
                                                    else
                                                      {
                                                        t = g_15;
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
                                                      ATerm i_15 = t;
                                                      int l_15 = stack_ptr;
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
                                                          LocalPopChoice(l_15);
                                                        }
                                                      else
                                                        {
                                                          t = i_15;
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
                                                          ATerm m_15 = t;
                                                          int n_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              z_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, z_27);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(n_15);
                                                            }
                                                          else
                                                            {
                                                              t = m_15;
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
                                        ATerm o_15 = t;
                                        int p_15 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_b_8;
                                            t = a_0(t);
                                            ;
                                            LocalPopChoice(p_15);
                                          }
                                        else
                                          {
                                            t = o_15;
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
                                              ATerm q_15 = t;
                                              int v_15 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm r_28 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                  t = a_0(t);
                                                  r_28 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, r_28);
                                                  t = a_0(t);
                                                  ;
                                                  LocalPopChoice(v_15);
                                                }
                                              else
                                                {
                                                  t = q_15;
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
                                                  ATerm z_15 = t;
                                                  int a_16 = stack_ptr;
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
                                                      LocalPopChoice(a_16);
                                                    }
                                                  else
                                                    {
                                                      t = z_15;
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
                                                      ATerm c_16 = t;
                                                      int j_16 = stack_ptr;
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
                                                          LocalPopChoice(j_16);
                                                        }
                                                      else
                                                        {
                                                          t = c_16;
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
                                                          ATerm k_16 = t;
                                                          int m_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              c_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, c_29);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(m_16);
                                                            }
                                                          else
                                                            {
                                                              t = k_16;
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
                                            ATerm n_16 = t;
                                            int p_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_8;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(p_16);
                                              }
                                            else
                                              {
                                                t = n_16;
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
                                                  ATerm q_16 = t;
                                                  int s_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                      t = a_0(t);
                                                      w_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, w_29);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(s_16);
                                                    }
                                                  else
                                                    {
                                                      t = q_16;
                                                      t = s_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm t_16 = t;
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
                                                      ATerm y_16 = t;
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
                                                          t = y_16;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = t_16;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        t = m_9;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            z_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm c_17 = t;
                                                              int d_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm c_30 = NULL;
                                                                  t = f_9;
                                                                  if((z_8 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, z_8);
                                                                  t = a_0(t);
                                                                  c_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, c_30);
                                                                  t = a_0(t);
                                                                  ;
                                                                  LocalPopChoice(d_17);
                                                                }
                                                              else
                                                                {
                                                                  t = c_17;
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
                                                                  ATerm w_30 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                                  t = a_0(t);
                                                                  w_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, w_30);
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
                                            ATerm h_17 = t;
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
                                                t = h_17;
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
                                                  ATerm j_17 = t;
                                                  int l_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                      t = a_0(t);
                                                      t_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, t_31);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(l_17);
                                                    }
                                                  else
                                                    {
                                                      t = j_17;
                                                      t = s_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm m_17 = t;
                                                int n_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_17 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_17);
                                                    {
                                                      ATerm p_17 = t;
                                                      int q_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, g_9);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(q_17);
                                                        }
                                                      else
                                                        {
                                                          t = p_17;
                                                          t = s_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_17;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        n_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_17 = t;
                                                          int t_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              c_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, c_32);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(t_17);
                                                            }
                                                          else
                                                            {
                                                              t = s_17;
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
                                            ATerm u_17 = t;
                                            int y_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_8;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(y_17);
                                              }
                                            else
                                              {
                                                t = u_17;
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
                                                  ATerm z_17 = t;
                                                  int a_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm v_32 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                      t = a_0(t);
                                                      v_32 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, v_32);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(a_18);
                                                    }
                                                  else
                                                    {
                                                      t = z_17;
                                                      t = s_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm c_18 = t;
                                                int d_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm e_18 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_18);
                                                    {
                                                      ATerm g_18 = t;
                                                      int h_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, g_9, h_9, v_8);
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
                                                    t = c_18;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        n_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_18 = t;
                                                          int j_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              j_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, j_33);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(j_18);
                                                            }
                                                          else
                                                            {
                                                              t = i_18;
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
                                                ATerm k_18 = t;
                                                int l_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_b_8;
                                                    t = a_0(t);
                                                    ;
                                                    LocalPopChoice(l_18);
                                                  }
                                                else
                                                  {
                                                    t = k_18;
                                                    {
                                                      ATerm n_18 = t;
                                                      int o_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, h_9);
                                                          t = a_0(t);
                                                          x_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, g_9, x_33);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(o_18);
                                                        }
                                                      else
                                                        {
                                                          t = n_18;
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
                                                      ATerm p_18 = t;
                                                      int q_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm n_34 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                          t = a_0(t);
                                                          n_34 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, n_34);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(q_18);
                                                        }
                                                      else
                                                        {
                                                          t = p_18;
                                                          {
                                                            ATerm r_18 = t;
                                                            int s_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm y_34 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, h_9);
                                                                t = a_0(t);
                                                                y_34 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, g_9, y_34);
                                                                t = a_0(t);
                                                                ;
                                                                LocalPopChoice(s_18);
                                                              }
                                                            else
                                                              {
                                                                t = r_18;
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
                                                          ATerm t_18 = t;
                                                          int u_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_35 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, h_9);
                                                              t = a_0(t);
                                                              h_35 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, g_9, h_35);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(u_18);
                                                            }
                                                          else
                                                            {
                                                              t = t_18;
                                                              {
                                                                ATerm v_18 = t;
                                                                int w_18 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm v_35 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                                    t = a_0(t);
                                                                    v_35 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, v_35);
                                                                    t = a_0(t);
                                                                    ;
                                                                    LocalPopChoice(w_18);
                                                                  }
                                                                else
                                                                  {
                                                                    t = v_18;
                                                                    t = s_9;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm x_18 = t;
                                                        int y_18 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm h_36 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, h_9);
                                                            t = a_0(t);
                                                            h_36 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, g_9, h_36);
                                                            t = a_0(t);
                                                            ;
                                                            LocalPopChoice(y_18);
                                                          }
                                                        else
                                                          {
                                                            t = x_18;
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
                                                    ATerm z_18 = t;
                                                    int a_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_b_8;
                                                        t = a_0(t);
                                                        ;
                                                        LocalPopChoice(a_19);
                                                      }
                                                    else
                                                      {
                                                        t = z_18;
                                                        {
                                                          ATerm c_19 = t;
                                                          int d_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, h_9);
                                                              t = a_0(t);
                                                              e_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_9, e_37);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(d_19);
                                                            }
                                                          else
                                                            {
                                                              t = c_19;
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
                                                          ATerm e_19 = t;
                                                          int g_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              m_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, m_37);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(g_19);
                                                            }
                                                          else
                                                            {
                                                              t = e_19;
                                                              {
                                                                ATerm h_19 = t;
                                                                int i_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm s_37 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, h_9);
                                                                    t = a_0(t);
                                                                    s_37 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, g_9, s_37);
                                                                    t = a_0(t);
                                                                    ;
                                                                    LocalPopChoice(i_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = h_19;
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
                                                              ATerm j_19 = t;
                                                              int k_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm a_38 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, h_9);
                                                                  t = a_0(t);
                                                                  a_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, g_9, a_38);
                                                                  t = a_0(t);
                                                                  ;
                                                                  LocalPopChoice(k_19);
                                                                }
                                                              else
                                                                {
                                                                  t = j_19;
                                                                  {
                                                                    ATerm l_19 = t;
                                                                    int m_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm k_38 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                                        t = a_0(t);
                                                                        k_38 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, k_38);
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
                                                        else
                                                          {
                                                            ATerm n_19 = t;
                                                            int o_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm s_38 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, h_9);
                                                                t = a_0(t);
                                                                s_38 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, g_9, s_38);
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
                                                    ATerm p_19 = t;
                                                    int q_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_b_8;
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
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        m_9 = ATgetArgument(t, 0);
                                                        n_9 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_19 = t;
                                                          int s_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_39 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                              t = a_0(t);
                                                              f_39 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, f_39);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(s_19);
                                                            }
                                                          else
                                                            {
                                                              t = r_19;
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
                                                              ATerm t_19 = t;
                                                              int v_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_39 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_9, o_9);
                                                                  t = a_0(t);
                                                                  l_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_9, l_39);
                                                                  t = a_0(t);
                                                                  ;
                                                                  LocalPopChoice(v_19);
                                                                }
                                                              else
                                                                {
                                                                  t = t_19;
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
                            ATerm w_19 = t;
                            int x_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_w_7;
                                t = a_0(t);
                                ;
                                LocalPopChoice(x_19);
                              }
                            else
                              {
                                t = w_19;
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
                            ATerm y_19 = t;
                            int a_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_w_7;
                                t = a_0(t);
                                ;
                                LocalPopChoice(a_20);
                              }
                            else
                              {
                                t = y_19;
                                {
                                  ATerm b_20 = t;
                                  int c_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = o_9;
                                      if((p_9 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(c_20);
                                    }
                                  else
                                    {
                                      t = b_20;
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
                                      ATerm d_20 = t;
                                      int e_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm v_41 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, n_9, o_9);
                                          t = a_0(t);
                                          v_41 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, m_9, v_41);
                                          t = a_0(t);
                                          ;
                                          LocalPopChoice(e_20);
                                        }
                                      else
                                        {
                                          t = d_20;
                                          {
                                            ATerm f_20 = t;
                                            int g_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = o_9;
                                                if((p_9 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(g_20);
                                              }
                                            else
                                              {
                                                t = f_20;
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
                                          ATerm h_20 = t;
                                          int i_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_9;
                                              if((p_9 != t))
                                                {
                                                  _fail(t);
                                                }
                                              ;
                                              LocalPopChoice(i_20);
                                            }
                                          else
                                            {
                                              t = h_20;
                                              {
                                                ATerm j_20 = t;
                                                int k_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = m_9;
                                                    t = topdown_1_0(t_0, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, m_9);
                                                    t = bottomup_1_0(a_0, t);
                                                    ;
                                                    LocalPopChoice(k_20);
                                                  }
                                                else
                                                  {
                                                    t = j_20;
                                                    t = s_9;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm m_20 = t;
                                        int n_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = o_9;
                                            if((p_9 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(n_20);
                                          }
                                        else
                                          {
                                            t = m_20;
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
                                ATerm o_20 = t;
                                int p_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_w_7;
                                    t = a_0(t);
                                    ;
                                    LocalPopChoice(p_20);
                                  }
                                else
                                  {
                                    t = o_20;
                                    t = o_9;
                                  }
                              }
                            else
                              {
                                ATerm q_20 = t;
                                int r_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_w_7;
                                    t = a_0(t);
                                    ;
                                    LocalPopChoice(r_20);
                                  }
                                else
                                  {
                                    t = q_20;
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
                                    ATerm s_20 = t;
                                    int t_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_b_8;
                                        t = a_0(t);
                                        ;
                                        LocalPopChoice(t_20);
                                      }
                                    else
                                      {
                                        t = s_20;
                                        t = o_9;
                                      }
                                  }
                                else
                                  {
                                    ATerm v_20 = t;
                                    int w_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_b_8;
                                        t = a_0(t);
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
                                        ATerm x_20 = t;
                                        int y_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm u_43 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, p_9, g_9);
                                            t = conc_0_0(t);
                                            u_43 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, u_43, h_9);
                                            t = bottomup_1_0(a_0, t);
                                            ;
                                            LocalPopChoice(y_20);
                                          }
                                        else
                                          {
                                            t = x_20;
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
                        ATerm a_21 = t;
                        int b_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm c_21 = ATgetArgument(t, 0);
                                o_9 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(b_21);
                            t = o_9;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm d_21 = t;
                                int e_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_w_7;
                                    t = a_0(t);
                                    ;
                                    LocalPopChoice(e_21);
                                  }
                                else
                                  {
                                    t = d_21;
                                    t = s_9;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm f_21 = t;
                                    int h_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_b_8;
                                        t = a_0(t);
                                        ;
                                        LocalPopChoice(h_21);
                                      }
                                    else
                                      {
                                        t = f_21;
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
                            t = a_21;
                            if(match_cons(t, sym_All_1))
                              {
                                p_9 = ATgetArgument(t, 0);
                                t = p_9;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm i_21 = t;
                                    int j_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_7;
                                        t = a_0(t);
                                        ;
                                        LocalPopChoice(j_21);
                                      }
                                    else
                                      {
                                        t = i_21;
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
                                        ATerm k_21 = t;
                                        int l_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_7;
                                            t = a_0(t);
                                            ;
                                            LocalPopChoice(l_21);
                                          }
                                        else
                                          {
                                            t = k_21;
                                            {
                                              ATerm m_21 = t;
                                              int n_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm t_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,c_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL;
                                                  t = s_9;
                                                  t = new_0_0(t);
                                                  t_44 = t;
                                                  t = bottomup_1_0(a_0, t);
                                                  r_45 = t;
                                                  t = (ATerm) ATempty;
                                                  t = a_0(t);
                                                  s_45 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(s_45), r_45);
                                                  t = a_0(t);
                                                  w_44 = t;
                                                  t = t_44;
                                                  t = bottomup_1_0(a_0, t);
                                                  q_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_45);
                                                  t = a_0(t);
                                                  k_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, k_45);
                                                  t = a_0(t);
                                                  y_44 = t;
                                                  t = p_9;
                                                  t = bottomup_1_0(a_0, t);
                                                  g_45 = t;
                                                  t = t_44;
                                                  t = bottomup_1_0(a_0, t);
                                                  j_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, j_45);
                                                  t = a_0(t);
                                                  i_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, i_45);
                                                  t = a_0(t);
                                                  h_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_45, h_45);
                                                  t = a_0(t);
                                                  c_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_44, c_45);
                                                  t = a_0(t);
                                                  x_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_44, x_44);
                                                  t = a_0(t);
                                                  ;
                                                  LocalPopChoice(n_21);
                                                }
                                              else
                                                {
                                                  t = m_21;
                                                  t = s_9;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm o_21 = t;
                                            int p_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_8;
                                                t = a_0(t);
                                                ;
                                                LocalPopChoice(p_21);
                                              }
                                            else
                                              {
                                                t = o_21;
                                                {
                                                  ATerm q_21 = t;
                                                  int r_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_46 = NULL,g_46 = NULL,m_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
                                                      t = s_9;
                                                      t = new_0_0(t);
                                                      e_46 = t;
                                                      t = bottomup_1_0(a_0, t);
                                                      w_46 = t;
                                                      t = (ATerm) ATempty;
                                                      t = a_0(t);
                                                      x_46 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(x_46), w_46);
                                                      t = a_0(t);
                                                      g_46 = t;
                                                      t = e_46;
                                                      t = bottomup_1_0(a_0, t);
                                                      v_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, v_46);
                                                      t = a_0(t);
                                                      u_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, u_46);
                                                      t = a_0(t);
                                                      o_46 = t;
                                                      t = p_9;
                                                      t = bottomup_1_0(a_0, t);
                                                      q_46 = t;
                                                      t = e_46;
                                                      t = bottomup_1_0(a_0, t);
                                                      t_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, t_46);
                                                      t = a_0(t);
                                                      s_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, s_46);
                                                      t = a_0(t);
                                                      r_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_46, r_46);
                                                      t = a_0(t);
                                                      p_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_46, p_46);
                                                      t = a_0(t);
                                                      m_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, g_46, m_46);
                                                      t = a_0(t);
                                                      ;
                                                      LocalPopChoice(r_21);
                                                    }
                                                  else
                                                    {
                                                      t = q_21;
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
                                                              ATerm s_21 = t;
                                                              int t_21 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, o_6);
                                                                  t = a_0(t);
                                                                  g_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_47, v_6);
                                                                  t = a_0(t);
                                                                  f_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_8, f_47);
                                                                  t = a_0(t);
                                                                  e_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, e_47);
                                                                  t = a_0(t);
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
                                                                        ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
                                                                        t = s_9;
                                                                        t = new_0_0(t);
                                                                        i_47 = t;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        u_47 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = a_0(t);
                                                                        v_47 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(v_47), u_47);
                                                                        t = a_0(t);
                                                                        j_47 = t;
                                                                        t = i_47;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        t_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, t_47);
                                                                        t = a_0(t);
                                                                        s_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, s_47);
                                                                        t = a_0(t);
                                                                        l_47 = t;
                                                                        t = p_9;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        n_47 = t;
                                                                        t = i_47;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        r_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, r_47);
                                                                        t = a_0(t);
                                                                        q_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, q_47);
                                                                        t = a_0(t);
                                                                        o_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_47, o_47);
                                                                        t = a_0(t);
                                                                        m_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, l_47, m_47);
                                                                        t = a_0(t);
                                                                        k_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, j_47, k_47);
                                                                        t = a_0(t);
                                                                        ;
                                                                        LocalPopChoice(v_21);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_21;
                                                                        t = s_9;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm x_21 = t;
                                                            int y_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
                                                                t = s_9;
                                                                t = new_0_0(t);
                                                                y_47 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                j_48 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                k_48 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(k_48), j_48);
                                                                t = a_0(t);
                                                                z_47 = t;
                                                                t = y_47;
                                                                t = bottomup_1_0(a_0, t);
                                                                i_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, i_48);
                                                                t = a_0(t);
                                                                h_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, h_48);
                                                                t = a_0(t);
                                                                b_48 = t;
                                                                t = p_9;
                                                                t = bottomup_1_0(a_0, t);
                                                                d_48 = t;
                                                                t = y_47;
                                                                t = bottomup_1_0(a_0, t);
                                                                g_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, g_48);
                                                                t = a_0(t);
                                                                f_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, f_48);
                                                                t = a_0(t);
                                                                e_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_48, e_48);
                                                                t = a_0(t);
                                                                c_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, b_48, c_48);
                                                                t = a_0(t);
                                                                a_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, z_47, a_48);
                                                                t = a_0(t);
                                                                ;
                                                                LocalPopChoice(y_21);
                                                              }
                                                            else
                                                              {
                                                                t = x_21;
                                                                t = s_9;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = m_9;
                                                        {
                                                          ATerm z_21 = t;
                                                          int a_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL;
                                                              t = s_9;
                                                              t = new_0_0(t);
                                                              n_48 = t;
                                                              t = bottomup_1_0(a_0, t);
                                                              y_48 = t;
                                                              t = (ATerm) ATempty;
                                                              t = a_0(t);
                                                              z_48 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(z_48), y_48);
                                                              t = a_0(t);
                                                              o_48 = t;
                                                              t = n_48;
                                                              t = bottomup_1_0(a_0, t);
                                                              x_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, x_48);
                                                              t = a_0(t);
                                                              w_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, w_48);
                                                              t = a_0(t);
                                                              q_48 = t;
                                                              t = p_9;
                                                              t = bottomup_1_0(a_0, t);
                                                              s_48 = t;
                                                              t = n_48;
                                                              t = bottomup_1_0(a_0, t);
                                                              v_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, v_48);
                                                              t = a_0(t);
                                                              u_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, u_48);
                                                              t = a_0(t);
                                                              t_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_48, t_48);
                                                              t = a_0(t);
                                                              r_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_48, r_48);
                                                              t = a_0(t);
                                                              p_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, o_48, p_48);
                                                              t = a_0(t);
                                                              ;
                                                              LocalPopChoice(a_22);
                                                            }
                                                          else
                                                            {
                                                              t = z_21;
                                                              t = s_9;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = m_9;
                                                    {
                                                      ATerm b_22 = t;
                                                      int c_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,v_49 = NULL;
                                                          t = s_9;
                                                          t = new_0_0(t);
                                                          c_49 = t;
                                                          t = bottomup_1_0(a_0, t);
                                                          t_49 = t;
                                                          t = (ATerm) ATempty;
                                                          t = a_0(t);
                                                          v_49 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(v_49), t_49);
                                                          t = a_0(t);
                                                          d_49 = t;
                                                          t = c_49;
                                                          t = bottomup_1_0(a_0, t);
                                                          s_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, s_49);
                                                          t = a_0(t);
                                                          r_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, r_49);
                                                          t = a_0(t);
                                                          f_49 = t;
                                                          t = p_9;
                                                          t = bottomup_1_0(a_0, t);
                                                          h_49 = t;
                                                          t = c_49;
                                                          t = bottomup_1_0(a_0, t);
                                                          q_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, q_49);
                                                          t = a_0(t);
                                                          p_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, p_49);
                                                          t = a_0(t);
                                                          i_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_49, i_49);
                                                          t = a_0(t);
                                                          g_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_49, g_49);
                                                          t = a_0(t);
                                                          e_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, d_49, e_49);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(c_22);
                                                        }
                                                      else
                                                        {
                                                          t = b_22;
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
                                                      ATerm d_22 = t;
                                                      int e_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, m_9);
                                                          t = a_0(t);
                                                          ;
                                                          LocalPopChoice(e_22);
                                                        }
                                                      else
                                                        {
                                                          t = d_22;
                                                          {
                                                            ATerm f_22 = t;
                                                            int g_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,k_50 = NULL,l_50 = NULL,n_50 = NULL,o_50 = NULL;
                                                                t = s_9;
                                                                t = new_0_0(t);
                                                                a_50 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                n_50 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                o_50 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(o_50), n_50);
                                                                t = a_0(t);
                                                                b_50 = t;
                                                                t = a_50;
                                                                t = bottomup_1_0(a_0, t);
                                                                l_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, l_50);
                                                                t = a_0(t);
                                                                k_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, k_50);
                                                                t = a_0(t);
                                                                d_50 = t;
                                                                t = p_9;
                                                                t = bottomup_1_0(a_0, t);
                                                                f_50 = t;
                                                                t = a_50;
                                                                t = bottomup_1_0(a_0, t);
                                                                i_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, i_50);
                                                                t = a_0(t);
                                                                h_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, h_50);
                                                                t = a_0(t);
                                                                g_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, f_50, g_50);
                                                                t = a_0(t);
                                                                e_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_50, e_50);
                                                                t = a_0(t);
                                                                c_50 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, b_50, c_50);
                                                                t = a_0(t);
                                                                ;
                                                                LocalPopChoice(g_22);
                                                              }
                                                            else
                                                              {
                                                                t = f_22;
                                                                t = s_9;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm h_22 = t;
                                                    int i_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL;
                                                        t = s_9;
                                                        t = new_0_0(t);
                                                        s_50 = t;
                                                        t = bottomup_1_0(a_0, t);
                                                        d_51 = t;
                                                        t = (ATerm) ATempty;
                                                        t = a_0(t);
                                                        e_51 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(e_51), d_51);
                                                        t = a_0(t);
                                                        t_50 = t;
                                                        t = s_50;
                                                        t = bottomup_1_0(a_0, t);
                                                        c_51 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, c_51);
                                                        t = a_0(t);
                                                        b_51 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, b_51);
                                                        t = a_0(t);
                                                        v_50 = t;
                                                        t = p_9;
                                                        t = bottomup_1_0(a_0, t);
                                                        x_50 = t;
                                                        t = s_50;
                                                        t = bottomup_1_0(a_0, t);
                                                        a_51 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, a_51);
                                                        t = a_0(t);
                                                        z_50 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, z_50);
                                                        t = a_0(t);
                                                        y_50 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_50, y_50);
                                                        t = a_0(t);
                                                        w_50 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_50, w_50);
                                                        t = a_0(t);
                                                        u_50 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, t_50, u_50);
                                                        t = a_0(t);
                                                        ;
                                                        LocalPopChoice(i_22);
                                                      }
                                                    else
                                                      {
                                                        t = h_22;
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
                                            ATerm j_22 = t;
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
                                                t = j_22;
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
                                                    ATerm o_22 = t;
                                                    int p_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_b_8;
                                                        t = a_0(t);
                                                        ;
                                                        LocalPopChoice(p_22);
                                                      }
                                                    else
                                                      {
                                                        t = o_22;
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
                                                ATerm q_22 = t;
                                                int r_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm t_22 = ATgetArgument(t, 0);
                                                        o_9 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(r_22);
                                                    t = o_9;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm u_22 = t;
                                                        int v_22 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_b_8;
                                                            t = a_0(t);
                                                            ;
                                                            LocalPopChoice(v_22);
                                                          }
                                                        else
                                                          {
                                                            t = u_22;
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
                                                    t = q_22;
                                                    {
                                                      ATerm w_22 = t;
                                                      int x_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm y_22 = ATgetArgument(t, 0);
                                                              o_9 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(x_22);
                                                          {
                                                            ATerm z_22 = t;
                                                            int a_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = o_9;
                                                                t = fetch_1_0(v_0, t);
                                                                t = term_b_8;
                                                                t = bottomup_1_0(a_0, t);
                                                                ;
                                                                LocalPopChoice(a_23);
                                                              }
                                                            else
                                                              {
                                                                t = z_22;
                                                                t = s_9;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = w_22;
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
                                                                            ATerm b_23 = t;
                                                                            int c_23 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm k_52 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, n_9, o_9);
                                                                                t = a_0(t);
                                                                                k_52 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, m_9, k_52);
                                                                                t = a_0(t);
                                                                                ;
                                                                                LocalPopChoice(c_23);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = b_23;
                                                                                {
                                                                                  ATerm d_23 = t;
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
                                                                                      t = d_23;
                                                                                      t = s_9;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm g_23 = t;
                                                                          int h_23 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = o_9;
                                                                              if((p_9 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(h_23);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_23;
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
                                                                      ATerm i_23 = t;
                                                                      int j_23 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, o_9);
                                                                          t = a_0(t);
                                                                          ;
                                                                          LocalPopChoice(j_23);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = i_23;
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
                                                                        ATerm k_23 = t;
                                                                        int l_23 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, p_9, o_9);
                                                                            t = a_0(t);
                                                                            ;
                                                                            LocalPopChoice(l_23);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = k_23;
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
                                                                                ATerm m_23 = t;
                                                                                int n_23 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm f_53 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, n_9);
                                                                                    t = a_0(t);
                                                                                    f_53 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, m_9, f_53);
                                                                                    t = a_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(n_23);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_23;
                                                                                    t = s_9;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm o_23 = t;
                                                                                  int p_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_b_8;
                                                                                      t = a_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(p_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = o_23;
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
                                                                                    ATerm q_23 = t;
                                                                                    int r_23 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm n_53 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, n_9);
                                                                                        t = a_0(t);
                                                                                        n_53 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, m_9, n_53);
                                                                                        t = a_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(r_23);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = q_23;
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
                                                                                            ATerm t_53 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, n_9);
                                                                                            t = a_0(t);
                                                                                            t_53 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, m_9, t_53);
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
                                                                                            ATerm f_54 = NULL,h_54 = NULL;
                                                                                            t = o_9;
                                                                                            t = map1_1_0(w_0, t);
                                                                                            f_54 = t;
                                                                                            t = r_5;
                                                                                            t = map1_1_0(x_0, t);
                                                                                            h_54 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, p_9, f_54, h_54, q_5);
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
                                                                                            ATerm b_24 = t;
                                                                                            int c_24 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm y_54 = NULL,a_55 = NULL;
                                                                                                t = r_5;
                                                                                                t = map1_1_0(y_0, t);
                                                                                                y_54 = t;
                                                                                                t = o_9;
                                                                                                t = map_1_0(z_0, t);
                                                                                                a_55 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, p_9, a_55, y_54, q_5);
                                                                                                t = bottomup_1_0(a_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(c_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = b_24;
                                                                                                {
                                                                                                  ATerm d_24 = t;
                                                                                                  int e_24 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm k_55 = NULL,m_55 = NULL;
                                                                                                      t = o_9;
                                                                                                      t = map1_1_0(a_1, t);
                                                                                                      k_55 = t;
                                                                                                      t = r_5;
                                                                                                      t = map_1_0(b_1, t);
                                                                                                      m_55 = t;
                                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, p_9, k_55, m_55, q_5);
                                                                                                      t = bottomup_1_0(a_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(e_24);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = d_24;
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
                                                                                                ATerm f_24 = t;
                                                                                                int g_24 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL;
                                                                                                    t = term_h_24;
                                                                                                    t = bottomup_1_0(a_0, t);
                                                                                                    y_55 = t;
                                                                                                    t = (ATerm) ATempty;
                                                                                                    t = a_0(t);
                                                                                                    b_56 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(b_56), r_5);
                                                                                                    t = a_0(t);
                                                                                                    a_56 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(a_56), p_9);
                                                                                                    t = a_0(t);
                                                                                                    z_55 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, y_55, z_55);
                                                                                                    t = a_0(t);
                                                                                                    x_55 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_App_2, o_9, x_55);
                                                                                                    t = a_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(g_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = f_24;
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
                                                                                                    ATerm i_24 = t;
                                                                                                    int j_24 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, o_9);
                                                                                                        t = a_0(t);
                                                                                                        h_56 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, r_5);
                                                                                                        t = a_0(t);
                                                                                                        k_56 = t;
                                                                                                        t = (ATerm) ATempty;
                                                                                                        t = a_0(t);
                                                                                                        l_56 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(l_56), k_56);
                                                                                                        t = a_0(t);
                                                                                                        j_56 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(j_56), p_9);
                                                                                                        t = a_0(t);
                                                                                                        i_56 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(i_56), h_56);
                                                                                                        t = a_0(t);
                                                                                                        g_56 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, g_56);
                                                                                                        t = a_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(j_24);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = i_24;
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
                                                                                                        ATerm k_24 = t;
                                                                                                        int l_24 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm p_56 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, o_9);
                                                                                                            t = a_0(t);
                                                                                                            p_56 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, p_9, p_56);
                                                                                                            t = a_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(l_24);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_24;
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
                                                                                                            ATerm m_24 = t;
                                                                                                            int n_24 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm t_56 = NULL;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, p_9);
                                                                                                                t = a_0(t);
                                                                                                                t_56 = t;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_56, o_9);
                                                                                                                t = a_0(t);
                                                                                                                ;
                                                                                                                LocalPopChoice(n_24);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = m_24;
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
                                                                                                                ATerm o_24 = t;
                                                                                                                int p_24 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm x_56 = NULL;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, o_9);
                                                                                                                    t = a_0(t);
                                                                                                                    x_56 = t;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, x_56, p_9);
                                                                                                                    t = a_0(t);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(p_24);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = o_24;
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
                                                                                                                          ATerm q_24 = t;
                                                                                                                          int r_24 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm j_57 = NULL;
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, p_9, g_9);
                                                                                                                              t = conc_0_0(t);
                                                                                                                              j_57 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Let_2, j_57, h_9);
                                                                                                                              t = bottomup_1_0(a_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(r_24);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_24;
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
                                                                                                                                                              ATerm s_24 = t;
                                                                                                                                                              int t_24 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = f_9;
                                                                                                                                                                  if((z_8 != t))
                                                                                                                                                                    {
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    }
                                                                                                                                                                  t = m_8;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm u_24 = t;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm c_1 (ATerm t)
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_CallT_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm v_24 = ATgetArgument(t, 0);
                                                                                                                                                                              if(match_cons(v_24, sym_SVar_1))
                                                                                                                                                                                {
                                                                                                                                                                                  if((z_8 != ATgetArgument(v_24, 0)))
                                                                                                                                                                                    {
                                                                                                                                                                                      _fail(ATgetArgument(v_24, 0));
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              {
                                                                                                                                                                                ATerm w_24 = ATgetArgument(t, 1);
                                                                                                                                                                                if(((ATgetType(w_24) != AT_LIST) || !(ATisEmpty(w_24))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                              {
                                                                                                                                                                                ATerm x_24 = ATgetArgument(t, 2);
                                                                                                                                                                                if(((ATgetType(x_24) != AT_LIST) || !(ATisEmpty(x_24))))
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
                                                                                                                                                                        t = u_24;
                                                                                                                                                                      }
                                                                                                                                                                    t = m_8;
                                                                                                                                                                    t = bottomup_1_0(a_0, t);
                                                                                                                                                                  }
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(t_24);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = s_24;
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
ATerm topdown_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    t = topdown_1_0(h_92, t);
    return(t);
  }
  t = h_92(t);
  t = SRTS_all(d_1, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm a_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(z_24);
      {
        ATerm u_58 = NULL,w_58 = NULL;
        u_58 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm c_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        w_58 = t;
        t = SSLgetAnnotations(u_58);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_25 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) d_25) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_25 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(e_25) != AT_LIST) || !(ATisEmpty(e_25))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_58;
      }
    }
  else
    {
      t = y_24;
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm h_25 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) h_25) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm j_25 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(g_25);
            _fail(t);
          }
        else
          {
            t = f_25;
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
  ATerm i_59 = NULL,j_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      l_59 = ATgetArgument(t, 0);
      o_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_59;
  if(match_cons(t, sym_Match_1))
    {
      m_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_59;
  if(match_cons(t, sym_Var_1))
    {
      n_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_59;
  if(match_cons(t, sym_Seq_2))
    {
      p_59 = ATgetArgument(t, 0);
      j_59 = ATgetArgument(t, 1);
      t = p_59;
      if(match_cons(t, sym_Build_1))
        {
          q_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_59;
      if(match_cons(t, sym_Var_1))
        {
          i_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_59;
      if((n_59 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_59)), j_59);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          p_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_59;
      if(match_cons(t, sym_Var_1))
        {
          q_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_59;
      if((n_59 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_59));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_60 = ATgetArgument(t, 0);
      d_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_60;
  if(match_cons(t, sym_Build_1))
    {
      c_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_60;
  if(match_cons(t, sym_Seq_2))
    {
      e_60 = ATgetArgument(t, 0);
      z_59 = ATgetArgument(t, 1);
      t = e_60;
      if(match_cons(t, sym_Match_1))
        {
          y_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_59;
      if((c_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_60), z_59);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          e_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_60;
      if((c_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, c_60);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      s_60 = ATgetArgument(t, 0);
      u_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_60;
  if(match_cons(t, sym_Match_1))
    {
      t_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_60;
  if(match_cons(t, sym_Seq_2))
    {
      v_60 = ATgetArgument(t, 0);
      o_60 = ATgetArgument(t, 1);
      t = v_60;
      if(match_cons(t, sym_Match_1))
        {
          n_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_60;
      if((t_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_60), o_60);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          v_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_60;
      if((t_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, t_60);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,h_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      h_61 = ATgetArgument(t, 0);
      j_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_61;
  if(match_cons(t, sym_Build_1))
    {
      ATerm k_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_61;
  if(match_cons(t, sym_Seq_2))
    {
      k_61 = ATgetArgument(t, 0);
      l_61 = ATgetArgument(t, 1);
      t = k_61;
      if(match_cons(t, sym_PrimT_3))
        {
          d_61 = ATgetArgument(t, 0);
          e_61 = ATgetArgument(t, 1);
          f_61 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, d_61, e_61, f_61), l_61);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          k_61 = ATgetArgument(t, 0);
          l_61 = ATgetArgument(t, 1);
          m_61 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, k_61, l_61, m_61);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL,c_62 = NULL,e_62 = NULL,f_62 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_62 = ATgetArgument(t, 0);
      e_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_62;
  if(match_cons(t, sym_Build_1))
    {
      ATerm l_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_62;
  if(match_cons(t, sym_Seq_2))
    {
      f_62 = ATgetArgument(t, 0);
      a_62 = ATgetArgument(t, 1);
      t = f_62;
      if(match_cons(t, sym_Build_1))
        {
          z_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_61), a_62);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          f_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, f_62);
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_25 = ATgetArgument(t, 0);
      if(((ATgetType(o_25) != AT_LIST) || !(ATisEmpty(o_25))))
        _fail(t);
      {
        ATerm p_25 = ATgetArgument(t, 1);
        if(((ATgetType(p_25) != AT_LIST) || !(ATisEmpty(p_25))))
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
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_25 = ATgetArgument(t, 0);
      if(((ATgetType(q_25) == AT_LIST) && !(ATisEmpty(q_25))))
        {
          i_63 = ATgetFirst((ATermList) q_25);
          j_63 = (ATerm) ATgetNext((ATermList) q_25);
        }
      else
        _fail(t);
      {
        ATerm r_25 = ATgetArgument(t, 1);
        if(((ATgetType(r_25) == AT_LIST) && !(ATisEmpty(r_25))))
          {
            k_63 = ATgetFirst((ATermList) r_25);
            l_63 = (ATerm) ATgetNext((ATermList) r_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_63, k_63), (ATerm) ATmakeAppl(sym__2, j_63, l_63));
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL;
  if(match_cons(t, sym__2))
    {
      m_63 = ATgetArgument(t, 0);
      n_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_63), m_63);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL;
  if(match_cons(t, sym__2))
    {
      o_63 = ATgetArgument(t, 0);
      p_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_63), (ATerm) ATmakeAppl(sym_Match_1, p_63));
  return(t);
}
ATerm j_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_25 = ATgetArgument(t, 0);
      if(((ATgetType(s_25) != AT_LIST) || !(ATisEmpty(s_25))))
        _fail(t);
      {
        ATerm t_25 = ATgetArgument(t, 1);
        if(((ATgetType(t_25) != AT_LIST) || !(ATisEmpty(t_25))))
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
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_25 = ATgetArgument(t, 0);
      if(((ATgetType(u_25) == AT_LIST) && !(ATisEmpty(u_25))))
        {
          u_63 = ATgetFirst((ATermList) u_25);
          v_63 = (ATerm) ATgetNext((ATermList) u_25);
        }
      else
        _fail(t);
      {
        ATerm v_25 = ATgetArgument(t, 1);
        if(((ATgetType(v_25) == AT_LIST) && !(ATisEmpty(v_25))))
          {
            w_63 = ATgetFirst((ATermList) v_25);
            x_63 = (ATerm) ATgetNext((ATermList) v_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_63, w_63), (ATerm) ATmakeAppl(sym__2, v_63, x_63));
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm y_63 = NULL,z_63 = NULL;
  if(match_cons(t, sym__2))
    {
      y_63 = ATgetArgument(t, 0);
      z_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_63), y_63);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL;
  if(match_cons(t, sym__2))
    {
      a_64 = ATgetArgument(t, 0);
      b_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_64), (ATerm) ATmakeAppl(sym_Match_1, b_64));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,b_63 = NULL,c_63 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      u_62 = ATgetArgument(t, 0);
      y_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_62;
  if(match_cons(t, sym_Build_1))
    {
      v_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_62;
  if(match_cons(t, sym_Op_2))
    {
      w_62 = ATgetArgument(t, 0);
      x_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_62;
  if(match_cons(t, sym_Seq_2))
    {
      z_62 = ATgetArgument(t, 0);
      s_62 = ATgetArgument(t, 1);
      {
        ATerm h_63 = NULL;
        t = z_62;
        if(match_cons(t, sym_Match_1))
          {
            b_63 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_63;
        if(match_cons(t, sym_Op_2))
          {
            q_62 = ATgetArgument(t, 0);
            r_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_62;
        if((w_62 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, x_62, r_62);
        t = genzip_4_0(f_1, g_1, h_1, i_1, t);
        h_63 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_63), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, w_62, x_62)), s_62));
      }
    }
  else
    {
      ATerm t_63 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          z_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_62;
      if(match_cons(t, sym_Op_2))
        {
          b_63 = ATgetArgument(t, 0);
          c_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_63;
      if((w_62 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, x_62, c_63);
      t = genzip_4_0(j_1, k_1, l_1, n_1, t);
      t_63 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_63), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, w_62, x_62)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm y_64 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL;
  b_65 = t;
  if(match_cons(t, sym_Seq_2))
    {
      c_65 = ATgetArgument(t, 0);
      g_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_65;
  if(match_cons(t, sym_Build_1))
    {
      d_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_65;
  if(match_cons(t, sym_Op_2))
    {
      e_65 = ATgetArgument(t, 0);
      {
        ATerm w_25 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_65;
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            h_65 = ATgetArgument(t, 0);
            {
              ATerm z_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_25);
        t = h_65;
        if(match_cons(t, sym_Match_1))
          {
            i_65 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_65;
        if(match_cons(t, sym_Op_2))
          {
            y_64 = ATgetArgument(t, 0);
            {
              ATerm a_26 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_65, y_64);
        {
          ATerm b_26 = t;
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
              t = b_26;
            }
          t = term_b_8;
        }
      }
    else
      {
        t = x_25;
        if(match_cons(t, sym_Match_1))
          {
            h_65 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_65;
        if(match_cons(t, sym_Op_2))
          {
            i_65 = ATgetArgument(t, 0);
            {
              ATerm c_26 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_65, i_65);
        {
          ATerm d_26 = t;
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
              t = d_26;
            }
          t = term_b_8;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm l_93 (ATerm), ATerm t)
{
  ATerm m_65 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_93(t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = SRTS_one(m_65, t);
      }
    return(t);
  }
  t = m_65(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL;
  i_66 = t;
  if(match_cons(t, sym_Let_2))
    {
      j_66 = ATgetArgument(t, 0);
      q_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_66;
  if(match_cons(t, sym_Let_2))
    {
      r_66 = ATgetArgument(t, 0);
      t_66 = ATgetArgument(t, 1);
      {
        ATerm y_66 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, j_66, r_66);
        t = conc_0_0(t);
        y_66 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, y_66, t_66);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          r_66 = ATgetArgument(t, 0);
          t_66 = ATgetArgument(t, 1);
          u_66 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_66;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_66 = ATgetFirst((ATermList) t);
          p_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_66;
      if(match_cons(t, sym_SDefT_4))
        {
          l_66 = ATgetArgument(t, 0);
          m_66 = ATgetArgument(t, 1);
          n_66 = ATgetArgument(t, 2);
          o_66 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = m_66;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_66;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_66;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_66;
      if(match_cons(t, sym_SVar_1))
        {
          s_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_66;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_66;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_66;
      if((l_66 != t))
        {
          _fail(t);
        }
      t = o_66;
      {
        ATerm g_26 = t;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm h_26 = ATgetArgument(t, 0);
                  if(match_cons(h_26, sym_SVar_1))
                    {
                      if((l_66 != ATgetArgument(h_26, 0)))
                        {
                          _fail(ATgetArgument(h_26, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm i_26 = ATgetArgument(t, 1);
                    if(((ATgetType(i_26) != AT_LIST) || !(ATisEmpty(i_26))))
                      _fail(t);
                  }
                  {
                    ATerm j_26 = ATgetArgument(t, 2);
                    if(((ATgetType(j_26) != AT_LIST) || !(ATisEmpty(j_26))))
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
            t = g_26;
          }
        t = o_66;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm h_67 = NULL,i_67 = NULL,j_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,t_67 = NULL,u_67 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      t_67 = ATgetArgument(t, 0);
      t = t_67;
      if(match_cons(t, sym_Seq_2))
        {
          r_67 = ATgetArgument(t, 0);
          i_67 = ATgetArgument(t, 1);
          t = r_67;
          if(match_cons(t, sym_Where_1))
            {
              h_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_67;
          if(match_cons(t, sym_Seq_2))
            {
              j_67 = ATgetArgument(t, 0);
              q_67 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_67;
          if(match_cons(t, sym_Build_1))
            {
              p_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, h_67, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_67), q_67)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              r_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, r_67);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          t_67 = ATgetArgument(t, 0);
          t = t_67;
          if(match_cons(t, sym_Test_1))
            {
              r_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, r_67);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              t_67 = ATgetArgument(t, 0);
              t = t_67;
              if(match_cons(t, sym_Not_1))
                {
                  r_67 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, r_67);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  t_67 = ATgetArgument(t, 0);
                  u_67 = ATgetArgument(t, 1);
                  t = u_67;
                  if((t_67 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      t_67 = ATgetArgument(t, 0);
                      u_67 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_67;
                  if((t_67 != t))
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
  ATerm i_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      i_68 = ATgetArgument(t, 0);
      y_68 = ATgetArgument(t, 1);
      t = i_68;
      if(match_cons(t, sym_LChoice_2))
        {
          w_68 = ATgetArgument(t, 0);
          x_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, w_68, (ATerm) ATmakeAppl(sym_LChoice_2, x_68, y_68));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          i_68 = ATgetArgument(t, 0);
          y_68 = ATgetArgument(t, 1);
          t = i_68;
          if(match_cons(t, sym_Seq_2))
            {
              w_68 = ATgetArgument(t, 0);
              x_68 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, w_68, (ATerm) ATmakeAppl(sym_Seq_2, x_68, y_68));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              i_68 = ATgetArgument(t, 0);
              y_68 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_68;
          if(match_cons(t, sym_Choice_2))
            {
              w_68 = ATgetArgument(t, 0);
              x_68 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, w_68, (ATerm) ATmakeAppl(sym_Choice_2, x_68, y_68));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL,b_72 = NULL;
  z_71 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_72 = ATgetFirst((ATermList) t);
      b_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,t_2 = NULL,u_2 = NULL,v_4 = NULL,u_4 = NULL;
        t = SSLgetAnnotations(z_71);
        q_2 = t;
        t = a_72;
        t = n_0(t);
        t_2 = t;
        t = (ATerm) ATinsert(CheckATermList(b_72), t_2);
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
          ATerm m_26 = t;
          int n_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(n_26);
            }
          else
            {
              t = m_26;
            }
          p_2 = t;
          t = (ATerm) ATinsert(CheckATermList(p_2), n_2);
          v_4 = t;
          t = SSLsetAnnotations(v_4, m_2);
        }
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        {
          ATerm e_3 = NULL,h_3 = NULL,x_4 = NULL;
          t = SSLgetAnnotations(z_71);
          e_3 = t;
          t = b_72;
          t = map1_1_0(n_0, t);
          h_3 = t;
          t = (ATerm) ATinsert(CheckATermList(h_3), a_72);
          x_4 = t;
          t = SSLsetAnnotations(x_4, e_3);
        }
      }
  }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm j_73 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_73, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_7), term_o_7));
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm k_73 = NULL,l_73 = NULL;
  l_73 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_73 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, k_73, term_o_7);
    }
  else
    {
      t = l_73;
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm v_73 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_73, term_o_7);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL;
  x_73 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_73 = ATgetArgument(t, 0);
      {
        ATerm o_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, w_73, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_7), term_o_7));
            ;
            LocalPopChoice(p_26);
          }
        else
          {
            t = o_26;
            t = x_73;
          }
      }
    }
  else
    {
      t = x_73;
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm h_74 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_74, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_7), term_o_7));
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm i_74 = NULL,j_74 = NULL;
  j_74 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_74 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, i_74, term_o_7);
    }
  else
    {
      t = j_74;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,t_72 = NULL,u_72 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      t_72 = ATgetArgument(t, 0);
      u_72 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, t_72, u_72);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          t_72 = ATgetArgument(t, 0);
          t = t_72;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_72 = ATgetFirst((ATermList) t);
              p_72 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, o_72, (ATerm) ATmakeAppl(sym_LChoices_1, p_72));
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
              t_72 = ATgetArgument(t, 0);
              t = t_72;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_72 = ATgetFirst((ATermList) t);
                  p_72 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, o_72, (ATerm) ATmakeAppl(sym_Choices_1, p_72));
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
                  t_72 = ATgetArgument(t, 0);
                  t = t_72;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_72 = ATgetFirst((ATermList) t);
                      p_72 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_72, (ATerm) ATmakeAppl(sym_Seqs_1, p_72));
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
                      t_72 = ATgetArgument(t, 0);
                      u_72 = ATgetArgument(t, 1);
                      r_72 = ATgetArgument(t, 2);
                      q_72 = ATgetArgument(t, 3);
                      {
                        ATerm g_73 = NULL,i_73 = NULL;
                        t = u_72;
                        t = map1_1_0(p_1, t);
                        g_73 = t;
                        t = r_72;
                        t = map1_1_0(q_1, t);
                        i_73 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, t_72, g_73, i_73, q_72);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          t_72 = ATgetArgument(t, 0);
                          u_72 = ATgetArgument(t, 1);
                          r_72 = ATgetArgument(t, 2);
                          q_72 = ATgetArgument(t, 3);
                          {
                            ATerm q_26 = t;
                            int r_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm s_73 = NULL,u_73 = NULL;
                                t = r_72;
                                t = map1_1_0(r_1, t);
                                s_73 = t;
                                t = u_72;
                                t = map_1_0(s_1, t);
                                u_73 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, t_72, u_73, s_73, q_72);
                                ;
                                LocalPopChoice(r_26);
                              }
                            else
                              {
                                t = q_26;
                                {
                                  ATerm e_74 = NULL,g_74 = NULL;
                                  t = u_72;
                                  t = map1_1_0(t_1, t);
                                  e_74 = t;
                                  t = r_72;
                                  t = map_1_0(u_1, t);
                                  g_74 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, t_72, e_74, g_74, q_72);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              t_72 = ATgetArgument(t, 0);
                              u_72 = ATgetArgument(t, 1);
                              r_72 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, u_72, (ATerm) ATmakeAppl(sym_Op_2, term_h_24, (ATerm) ATinsert(ATinsert(ATempty, r_72), t_72)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  t_72 = ATgetArgument(t, 0);
                                  u_72 = ATgetArgument(t, 1);
                                  r_72 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, r_72)), t_72), (ATerm) ATmakeAppl(sym_Build_1, u_72)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      t_72 = ATgetArgument(t, 0);
                                      u_72 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_72, (ATerm) ATmakeAppl(sym_Match_1, u_72));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          t_72 = ATgetArgument(t, 0);
                                          u_72 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_72), u_72);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              t_72 = ATgetArgument(t, 0);
                                              u_72 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_72), t_72);
                                        }
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
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      r_75 = ATgetArgument(t, 0);
      t = r_75;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_b_8;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          r_75 = ATgetArgument(t, 0);
          t = r_75;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_w_7;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              r_75 = ATgetArgument(t, 0);
              s_75 = ATgetArgument(t, 1);
              t = r_75;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_b_8;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  r_75 = ATgetArgument(t, 0);
                  s_75 = ATgetArgument(t, 1);
                  t = s_75;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_b_8;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      r_75 = ATgetArgument(t, 0);
                      s_75 = ATgetArgument(t, 1);
                      t = s_75;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_b_8;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          r_75 = ATgetArgument(t, 0);
                          t = r_75;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_b_8;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              r_75 = ATgetArgument(t, 0);
                              t = r_75;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_b_8;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  r_75 = ATgetArgument(t, 0);
                                  s_75 = ATgetArgument(t, 1);
                                  t = s_75;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_b_8;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      r_75 = ATgetArgument(t, 0);
                                      s_75 = ATgetArgument(t, 1);
                                      t = s_75;
                                      t = fetch_1_0(w_1, t);
                                      t = term_b_8;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          r_75 = ATgetArgument(t, 0);
                                          s_75 = ATgetArgument(t, 1);
                                          t = s_75;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = r_75;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = s_75;
                                                }
                                              else
                                                {
                                                  t = r_75;
                                                }
                                            }
                                          else
                                            {
                                              t = r_75;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = s_75;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              r_75 = ATgetArgument(t, 0);
                                              s_75 = ATgetArgument(t, 1);
                                              t = s_75;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = r_75;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = s_75;
                                                    }
                                                  else
                                                    {
                                                      t = r_75;
                                                    }
                                                }
                                              else
                                                {
                                                  t = r_75;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = s_75;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  r_75 = ATgetArgument(t, 0);
                                                  t = r_75;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_b_8;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      r_75 = ATgetArgument(t, 0);
                                                      s_75 = ATgetArgument(t, 1);
                                                      t_75 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = t_75;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, r_75, s_75);
                                                }
                                            }
                                        }
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
  ATerm y_76 = NULL,a_77 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      a_77 = ATgetArgument(t, 0);
      t = a_77;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_w_7;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          a_77 = ATgetArgument(t, 0);
          t = a_77;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_b_8;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              a_77 = ATgetArgument(t, 0);
              y_76 = ATgetArgument(t, 1);
              t = y_76;
              if(match_cons(t, sym_Id_0))
                {
                  t = a_77;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = y_76;
                    }
                  else
                    {
                      t = a_77;
                    }
                }
              else
                {
                  t = a_77;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = y_76;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  a_77 = ATgetArgument(t, 0);
                  y_76 = ATgetArgument(t, 1);
                  t = a_77;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_w_7;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      a_77 = ATgetArgument(t, 0);
                      y_76 = ATgetArgument(t, 1);
                      t = y_76;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_w_7;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          a_77 = ATgetArgument(t, 0);
                          y_76 = ATgetArgument(t, 1);
                          t = y_76;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_w_7;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              a_77 = ATgetArgument(t, 0);
                              t = a_77;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_w_7;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  a_77 = ATgetArgument(t, 0);
                                  t = a_77;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_w_7;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      a_77 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_77;
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
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      {
        ATerm v_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            {
              ATerm x_26 = t;
              int y_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
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
                        t = AssociateR_0_0(t);
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
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(c_27);
                            }
                          else
                            {
                              t = b_27;
                              {
                                ATerm f_27 = t;
                                int g_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_77 = NULL,q_77 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        p_77 = ATgetArgument(t, 0);
                                        q_77 = ATgetArgument(t, 1);
                                        t = p_77;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = q_77;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            p_77 = ATgetArgument(t, 0);
                                            q_77 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = p_77;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = q_77;
                                      }
                                    ;
                                    LocalPopChoice(g_27);
                                  }
                                else
                                  {
                                    t = f_27;
                                    {
                                      ATerm h_27 = t;
                                      int k_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(k_27);
                                        }
                                      else
                                        {
                                          t = h_27;
                                          {
                                            ATerm m_27 = t;
                                            int n_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
                                                LocalPopChoice(n_27);
                                              }
                                            else
                                              {
                                                t = m_27;
                                                {
                                                  ATerm o_27 = t;
                                                  int p_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
                                                      LocalPopChoice(p_27);
                                                    }
                                                  else
                                                    {
                                                      t = o_27;
                                                      {
                                                        ATerm q_27 = t;
                                                        int r_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            ;
                                                            LocalPopChoice(r_27);
                                                          }
                                                        else
                                                          {
                                                            t = q_27;
                                                            {
                                                              ATerm s_27 = t;
                                                              int t_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(t_27);
                                                                }
                                                              else
                                                                {
                                                                  t = s_27;
                                                                  {
                                                                    ATerm u_27 = t;
                                                                    int v_27 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(v_27);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_27;
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
                                                                                int a_28 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(a_28);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = y_27;
                                                                                    {
                                                                                      ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL;
                                                                                      u_77 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          v_77 = ATgetArgument(t, 0);
                                                                                          w_77 = ATgetArgument(t, 1);
                                                                                          t = v_77;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              t_77 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = u_77;
                                                                                          t = f_5(t_77, w_77, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              v_77 = ATgetArgument(t, 0);
                                                                                              w_77 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = v_77;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = w_77;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm m_78 = NULL;
  m_78 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_78);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm n_78 = NULL;
  n_78 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_78);
  return(t);
}
ATerm z_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_28 = ATgetArgument(t, 0);
      if(((ATgetType(b_28) != AT_LIST) || !(ATisEmpty(b_28))))
        _fail(t);
      {
        ATerm c_28 = ATgetArgument(t, 1);
        if(((ATgetType(c_28) != AT_LIST) || !(ATisEmpty(c_28))))
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
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_28 = ATgetArgument(t, 0);
      if(((ATgetType(d_28) == AT_LIST) && !(ATisEmpty(d_28))))
        {
          o_78 = ATgetFirst((ATermList) d_28);
          p_78 = (ATerm) ATgetNext((ATermList) d_28);
        }
      else
        _fail(t);
      {
        ATerm e_28 = ATgetArgument(t, 1);
        if(((ATgetType(e_28) == AT_LIST) && !(ATisEmpty(e_28))))
          {
            q_78 = ATgetFirst((ATermList) e_28);
            r_78 = (ATerm) ATgetNext((ATermList) e_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_78, q_78), (ATerm) ATmakeAppl(sym__2, p_78, r_78));
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm s_78 = NULL,t_78 = NULL;
  if(match_cons(t, sym__2))
    {
      s_78 = ATgetArgument(t, 0);
      t_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_78), s_78);
  return(t);
}
ATerm c_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_28 = ATgetArgument(t, 0);
      if(((ATgetType(f_28) != AT_LIST) || !(ATisEmpty(f_28))))
        _fail(t);
      {
        ATerm g_28 = ATgetArgument(t, 1);
        if(((ATgetType(g_28) != AT_LIST) || !(ATisEmpty(g_28))))
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
  ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_28 = ATgetArgument(t, 0);
      if(((ATgetType(h_28) == AT_LIST) && !(ATisEmpty(h_28))))
        {
          v_78 = ATgetFirst((ATermList) h_28);
          w_78 = (ATerm) ATgetNext((ATermList) h_28);
        }
      else
        _fail(t);
      {
        ATerm i_28 = ATgetArgument(t, 1);
        if(((ATgetType(i_28) == AT_LIST) && !(ATisEmpty(i_28))))
          {
            x_78 = ATgetFirst((ATermList) i_28);
            y_78 = (ATerm) ATgetNext((ATermList) i_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_78, x_78), (ATerm) ATmakeAppl(sym__2, w_78, y_78));
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm z_78 = NULL,a_79 = NULL;
  if(match_cons(t, sym__2))
    {
      z_78 = ATgetArgument(t, 0);
      a_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_79), z_78);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_28 = ATgetArgument(t, 0);
      if(match_cons(j_28, sym__2))
        {
          b_79 = ATgetArgument(j_28, 0);
          c_79 = ATgetArgument(j_28, 1);
        }
      else
        _fail(t);
      d_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, b_79)), (ATerm) ATmakeAppl(sym_Seq_2, d_79, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_79))));
  return(t);
}
ATerm r_12 (ATerm o_68, ATerm u_68, ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL,l_78 = NULL;
  t = u_68;
  t = map_1_0(new_0_0, t);
  e_78 = t;
  t = map_1_0(x_1, t);
  b_78 = t;
  t = new_0_0(t);
  c_78 = t;
  t = u_68;
  t = map_1_0(new_0_0, t);
  f_78 = t;
  t = map_1_0(y_1, t);
  d_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_78, f_78);
  t = genzip_4_0(z_1, a_2, b_2, _id, t);
  l_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_78, u_68);
  t = genzip_4_0(c_2, d_2, e_2, f_2, t);
  g_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_78, f_78);
  t = conc_0_0(t);
  h_78 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, o_68, b_78), (ATerm) ATmakeAppl(sym_Var_1, c_78)));
  t = Mapp2_0_0(t);
  i_78 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, o_68, d_78), (ATerm) ATmakeAppl(sym_Var_1, c_78)));
  t = Bapp_0_0(t);
  j_78 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(h_78), c_78), (ATerm) ATmakeAppl(sym_Seq_2, i_78, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_78), j_78)));
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL;
  f_79 = t;
  if(match_cons(t, sym_Build_1))
    {
      g_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_79 = NULL,i_79 = NULL,k_79 = NULL,l_79 = NULL;
        t = f_79;
        t = new_0_0(t);
        k_79 = t;
        t = g_79;
        {
          ATerm g_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((h_79 != NULL) && (h_79 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_79 = ATgetArgument(t, 0);
                if(((i_79 != NULL) && (i_79 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  i_79 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, k_79);
            return(t);
          }
          t = pat_td_1_0(g_2, t);
          l_79 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_79), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_m_28, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_79)), not_null(h_79))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_79)))), (ATerm) ATmakeAppl(sym_Build_1, l_79)));
        }
        ;
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        {
          ATerm n_28 = t;
          int o_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_79 = NULL,o_79 = NULL,p_79 = NULL;
              t = f_79;
              t = new_0_0(t);
              o_79 = t;
              t = g_79;
              {
                ATerm h_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((m_79 != NULL) && (m_79 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_79 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, o_79);
                  return(t);
                }
                t = pat_td_1_0(h_2, t);
                p_79 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_79), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_79), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_79)))), (ATerm) ATmakeAppl(sym_Build_1, p_79)));
              }
              ;
              LocalPopChoice(o_28);
            }
          else
            {
              t = n_28;
              {
                ATerm q_79 = NULL,r_79 = NULL,t_79 = NULL,u_79 = NULL;
                t = f_79;
                t = new_0_0(t);
                t_79 = t;
                t = g_79;
                {
                  ATerm i_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((q_79 != NULL) && (q_79 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_79 = ATgetArgument(t, 0);
                        if(((r_79 != NULL) && (r_79 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_79 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, t_79);
                    return(t);
                  }
                  t = pat_td_1_0(i_2, t);
                  u_79 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_79), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(q_79), not_null(r_79), (ATerm) ATmakeAppl(sym_Var_1, t_79))), (ATerm) ATmakeAppl(sym_Build_1, u_79)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm s_107 (ATerm), ATerm t)
{
  ATerm p_80 (ATerm t)
  {
    ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL;
    o_80 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_80 = ATgetFirst((ATermList) t);
        n_80 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_3 = NULL,s_3 = NULL,c_5 = NULL;
          t = SSLgetAnnotations(o_80);
          p_3 = t;
          t = n_80;
          t = p_80(t);
          s_3 = t;
          t = (ATerm) ATinsert(CheckATermList(s_3), m_80);
          c_5 = t;
          t = SSLsetAnnotations(c_5, p_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_80;
        t = s_107(t);
      }
    return(t);
  }
  t = p_80(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL;
  w_79 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_79;
    }
  else
    {
      ATerm j_2 (ATerm t)
      {
        t = not_null(y_79);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_79 = ATgetFirst((ATermList) t);
          if(((y_79 != NULL) && (y_79 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_79;
      t = at_end_1_0(j_2, t);
    }
  return(t);
}
ATerm b_81 (ATerm t_80, ATerm t)
{
  ATerm u_80 = NULL;
  t = SSL_explode_term(t_80);
  if(match_cons(t, sym__2))
    {
      ATerm p_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_80;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL;
  y_80 = t;
  if(match_cons(t, sym__2))
    {
      w_80 = ATgetArgument(t, 0);
      x_80 = ATgetArgument(t, 1);
      {
        ATerm q_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              t = x_80;
              return(t);
            }
            t = w_80;
            t = at_end_1_0(k_2, t);
            ;
            LocalPopChoice(s_28);
          }
        else
          {
            t = q_28;
            t = b_81(y_80, t);
          }
      }
    }
  else
    {
      t = b_81(y_80, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm t)
{
  ATerm i_81 (ATerm t)
  {
    ATerm t_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_96(t);
        ;
        LocalPopChoice(u_28);
      }
    else
      {
        t = t_28;
        {
          ATerm c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL,e_5 = NULL;
          t = u_96(t);
          h_81 = t;
          if(match_cons(t, sym__2))
            {
              d_81 = ATgetArgument(t, 0);
              e_81 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_81);
          c_81 = t;
          t = d_81;
          t = w_96(t);
          f_81 = t;
          t = e_81;
          t = i_81(t);
          g_81 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_81, g_81);
          e_5 = t;
          t = SSLsetAnnotations(e_5, c_81);
          t = v_96(t);
        }
      }
    return(t);
  }
  t = i_81(t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm w_81 = NULL;
  w_81 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_81);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm x_81 = NULL;
  x_81 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_81);
  return(t);
}
ATerm s_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_28 = ATgetArgument(t, 0);
      if(((ATgetType(v_28) != AT_LIST) || !(ATisEmpty(v_28))))
        _fail(t);
      {
        ATerm w_28 = ATgetArgument(t, 1);
        if(((ATgetType(w_28) != AT_LIST) || !(ATisEmpty(w_28))))
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
  ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_28 = ATgetArgument(t, 0);
      if(((ATgetType(x_28) == AT_LIST) && !(ATisEmpty(x_28))))
        {
          y_81 = ATgetFirst((ATermList) x_28);
          z_81 = (ATerm) ATgetNext((ATermList) x_28);
        }
      else
        _fail(t);
      {
        ATerm y_28 = ATgetArgument(t, 1);
        if(((ATgetType(y_28) == AT_LIST) && !(ATisEmpty(y_28))))
          {
            a_82 = ATgetFirst((ATermList) y_28);
            b_82 = (ATerm) ATgetNext((ATermList) y_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_81, a_82), (ATerm) ATmakeAppl(sym__2, z_81, b_82));
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL;
  if(match_cons(t, sym__2))
    {
      c_82 = ATgetArgument(t, 0);
      d_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_82), c_82);
  return(t);
}
ATerm x_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_28 = ATgetArgument(t, 0);
      if(((ATgetType(z_28) != AT_LIST) || !(ATisEmpty(z_28))))
        _fail(t);
      {
        ATerm a_29 = ATgetArgument(t, 1);
        if(((ATgetType(a_29) != AT_LIST) || !(ATisEmpty(a_29))))
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
  ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_29 = ATgetArgument(t, 0);
      if(((ATgetType(b_29) == AT_LIST) && !(ATisEmpty(b_29))))
        {
          f_82 = ATgetFirst((ATermList) b_29);
          g_82 = (ATerm) ATgetNext((ATermList) b_29);
        }
      else
        _fail(t);
      {
        ATerm d_29 = ATgetArgument(t, 1);
        if(((ATgetType(d_29) == AT_LIST) && !(ATisEmpty(d_29))))
          {
            h_82 = ATgetFirst((ATermList) d_29);
            i_82 = (ATerm) ATgetNext((ATermList) d_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_82, h_82), (ATerm) ATmakeAppl(sym__2, g_82, i_82));
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL;
  if(match_cons(t, sym__2))
    {
      j_82 = ATgetArgument(t, 0);
      k_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_82), j_82);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_29 = ATgetArgument(t, 0);
      if(match_cons(e_29, sym__2))
        {
          l_82 = ATgetArgument(e_29, 0);
          m_82 = ATgetArgument(e_29, 1);
        }
      else
        _fail(t);
      n_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_82)), (ATerm) ATmakeAppl(sym_Seq_2, n_82, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_82))));
  return(t);
}
ATerm v_12 (ATerm z_68, ATerm h_69, ATerm g_69, ATerm t)
{
  ATerm k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL,v_81 = NULL;
  t = (ATerm) ATinsert(CheckATermList(h_69), g_69);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_81 = ATgetFirst((ATermList) t);
      o_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(l_2, t);
  l_81 = t;
  t = (ATerm) ATinsert(CheckATermList(h_69), g_69);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_81 = ATgetFirst((ATermList) t);
      p_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(r_2, t);
  n_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_81, p_81);
  t = genzip_4_0(s_2, v_2, w_2, _id, t);
  v_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_81, (ATerm) ATinsert(CheckATermList(h_69), g_69));
  t = genzip_4_0(x_2, y_2, z_2, a_3, t);
  q_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_81, p_81);
  t = conc_0_0(t);
  r_81 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, z_68, l_81), (ATerm) ATmakeAppl(sym_Var_1, k_81)));
  t = Mapp2_0_0(t);
  s_81 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, z_68, n_81), (ATerm) ATmakeAppl(sym_Var_1, m_81)));
  t = Bapp_0_0(t);
  t_81 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(r_81), m_81), k_81), (ATerm) ATmakeAppl(sym_Seq_2, s_81, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_81), t_81)));
  return(t);
}
ATerm pat_td_1_0 (ATerm n_90 (ATerm), ATerm t)
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_90(t);
      ;
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      {
        ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL;
        w_84 = t;
        if(match_cons(t, sym_Op_2))
          {
            x_84 = ATgetArgument(t, 0);
            y_84 = ATgetArgument(t, 1);
            {
              ATerm a_4 = NULL,d_4 = NULL,k_5 = NULL;
              t = SSLgetAnnotations(w_84);
              a_4 = t;
              t = y_84;
              {
                ATerm b_3 (ATerm t)
                {
                  t = pat_td_1_0(n_90, t);
                  return(t);
                }
                t = fetch_1_0(b_3, t);
                d_4 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, x_84, d_4);
                k_5 = t;
                t = SSLsetAnnotations(k_5, a_4);
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                x_84 = ATgetArgument(t, 0);
                y_84 = ATgetArgument(t, 1);
                {
                  ATerm h_29 = t;
                  int i_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_4 = NULL,o_4 = NULL,l_5 = NULL;
                      t = SSLgetAnnotations(w_84);
                      l_4 = t;
                      t = y_84;
                      t = pat_td_1_0(n_90, t);
                      o_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, x_84, o_4);
                      l_5 = t;
                      t = SSLsetAnnotations(l_5, l_4);
                      ;
                      LocalPopChoice(i_29);
                    }
                  else
                    {
                      t = h_29;
                      {
                        ATerm h_5 = NULL,s_5 = NULL,m_5 = NULL;
                        t = SSLgetAnnotations(w_84);
                        h_5 = t;
                        t = x_84;
                        t = pat_td_1_0(n_90, t);
                        s_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, s_5, y_84);
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
                    x_84 = ATgetArgument(t, 0);
                    y_84 = ATgetArgument(t, 1);
                    v_84 = ATgetArgument(t, 2);
                    {
                      ATerm c_6 = NULL,g_6 = NULL,n_5 = NULL;
                      t = SSLgetAnnotations(w_84);
                      c_6 = t;
                      t = v_84;
                      {
                        ATerm c_3 (ATerm t)
                        {
                          t = pat_td_1_0(n_90, t);
                          return(t);
                        }
                        t = fetch_1_0(c_3, t);
                        g_6 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, x_84, y_84, g_6);
                        n_5 = t;
                        t = SSLsetAnnotations(n_5, c_6);
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        x_84 = ATgetArgument(t, 0);
                        y_84 = ATgetArgument(t, 1);
                        v_84 = ATgetArgument(t, 2);
                        {
                          ATerm r_6 = NULL,w_6 = NULL,o_5 = NULL;
                          t = SSLgetAnnotations(w_84);
                          r_6 = t;
                          t = v_84;
                          {
                            ATerm d_3 (ATerm t)
                            {
                              t = pat_td_1_0(n_90, t);
                              return(t);
                            }
                            t = fetch_1_0(d_3, t);
                            w_6 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, x_84, y_84, w_6);
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
                            x_84 = ATgetArgument(t, 0);
                            y_84 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(w_84);
                        g_7 = t;
                        t = y_84;
                        t = pat_td_1_0(n_90, t);
                        j_7 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, x_84, j_7);
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
  ATerm g_85 = NULL,h_85 = NULL;
  g_85 = t;
  if(match_cons(t, sym_Match_1))
    {
      h_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL,m_85 = NULL;
        t = g_85;
        t = new_0_0(t);
        l_85 = t;
        t = h_85;
        {
          ATerm f_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((j_85 != NULL) && (j_85 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_85 = ATgetArgument(t, 0);
                if(((k_85 != NULL) && (k_85 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  k_85 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_85), j_85);
            return(t);
          }
          t = pat_td_1_0(f_3, t);
          m_85 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_85), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_85), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_29, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_85))), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_85))))));
        }
        ;
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        {
          ATerm m_29 = t;
          int n_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL;
              t = g_85;
              t = new_0_0(t);
              p_85 = t;
              t = h_85;
              {
                ATerm g_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((o_85 != NULL) && (o_85 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        o_85 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, p_85);
                  return(t);
                }
                t = pat_td_1_0(g_3, t);
                q_85 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_85), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_85), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, p_85)), not_null(o_85))));
              }
              ;
              LocalPopChoice(n_29);
            }
          else
            {
              t = m_29;
              {
                ATerm s_85 = NULL,t_85 = NULL,u_85 = NULL,v_85 = NULL;
                t = g_85;
                t = new_0_0(t);
                u_85 = t;
                t = h_85;
                {
                  ATerm i_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((t_85 != NULL) && (t_85 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          t_85 = ATgetArgument(t, 0);
                        if(((s_85 != NULL) && (s_85 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_85 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, u_85);
                    return(t);
                  }
                  t = pat_td_1_0(i_3, t);
                  v_85 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_85), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_85), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, u_85)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_85)), not_null(t_85)))));
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
  ATerm n_86 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      n_86 = ATgetArgument(t, 0);
      t = n_86;
    }
  else
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_o_29;
    }
  return(t);
}
ATerm MatchingCongruence_0_0 (ATerm t)
{
  ATerm b_86 = NULL,c_86 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      b_86 = ATgetArgument(t, 0);
      c_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_86;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, b_86, (ATerm) ATempty));
    }
  else
    {
      ATerm m_86 = NULL;
      t = c_86;
      t = map_1_0(j_3, t);
      m_86 = t;
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, b_86, m_86));
      t = Mapp2_0_0(t);
    }
  return(t);
}
ATerm repeat_1_0 (ATerm b_102 (ATerm), ATerm t)
{
  ATerm t_86 (ATerm t)
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_102(t);
        t = t_86(t);
        ;
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
      }
    return(t);
  }
  t = t_86(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    t = bottomup_1_0(i_92, t);
    return(t);
  }
  t = SRTS_all(k_3, t);
  t = i_92(t);
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
            ATerm b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL;
            i_87 = t;
            if(match_cons(t, sym_Call_2))
              {
                j_87 = ATgetArgument(t, 0);
                k_87 = ATgetArgument(t, 1);
                t = j_87;
                if(match_cons(t, sym_SVar_1))
                  {
                    b_87 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_87;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                  _fail(t);
                t = k_87;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    c_87 = ATgetFirst((ATermList) t);
                    f_87 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = c_87;
                if(match_cons(t, sym_Cong_2))
                  {
                    d_87 = ATgetArgument(t, 0);
                    e_87 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_87;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    g_87 = ATgetFirst((ATermList) t);
                    h_87 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = h_87;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = i_87;
                t = v_12(d_87, e_87, g_87, t);
              }
            else
              {
                if(match_cons(t, sym_Cong_2))
                  {
                    j_87 = ATgetArgument(t, 0);
                    k_87 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_87;
                t = r_12(j_87, k_87, t);
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
ATerm map_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm f_88 (ATerm t)
  {
    ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL;
    c_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_88;
      }
    else
      {
        ATerm r_7 = NULL,u_7 = NULL,v_7 = NULL,k_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_88 = ATgetFirst((ATermList) t);
            e_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_88);
        r_7 = t;
        t = d_88;
        t = c_107(t);
        u_7 = t;
        t = e_88;
        t = f_88(t);
        v_7 = t;
        t = (ATerm) ATinsert(CheckATermList(v_7), u_7);
        k_15 = t;
        t = SSLsetAnnotations(k_15, r_7);
      }
    return(t);
  }
  t = f_88(t);
  return(t);
}
ATerm Cons_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t)
{
  ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL,s_15 = NULL;
  m_88 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_88 = ATgetFirst((ATermList) t);
      j_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_88);
  h_88 = t;
  t = i_88;
  t = b_76(t);
  k_88 = t;
  t = j_88;
  t = c_76(t);
  l_88 = t;
  t = (ATerm) ATinsert(CheckATermList(l_88), k_88);
  s_15 = t;
  t = SSLsetAnnotations(s_15, h_88);
  return(t);
}
ATerm w_12 (ATerm j_49, ATerm k_49, ATerm t)
{
  ATerm n_88 = NULL;
  t = SSL_fputc(j_49, k_49);
  n_88 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_88);
  return(t);
}
ATerm x_12 (ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm o_88 = NULL;
  t = SSL_write_term_to_stream_text(x_52, y_52);
  o_88 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_88);
  return(t);
}
ATerm z_12 (ATerm d_113 (ATerm), ATerm v_477, ATerm b_53, ATerm t)
{
  ATerm p_88 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_477, term_v_29);
  t = c_13(t);
  p_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_88, b_53);
  t = d_113(t);
  t = fclose_0_0(t);
  t = b_53;
  return(t);
}
ATerm y_12 (ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm q_88 = NULL;
  t = SSL_write_term_to_stream_baf(t_52, u_52);
  q_88 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_88);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm t_88 = NULL,u_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_29 = ATgetArgument(t, 0);
      if(match_cons(x_29, sym_Stream_1))
        {
          t_88 = ATgetArgument(x_29, 0);
        }
      else
        _fail(t);
      u_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_12(t_88, u_88, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_29 = ATgetArgument(t, 0);
      if(match_cons(y_29, sym_Stream_1))
        {
          y_88 = ATgetArgument(y_29, 0);
        }
      else
        _fail(t);
      z_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_12(y_88, z_88, t);
  v_88 = t;
  t = term_z_29;
  w_88 = t;
  t = v_88;
  if(match_cons(t, sym_Stream_1))
    {
      x_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_29, v_88);
  t = w_12(w_88, x_88, t);
  return(t);
}
ATerm output_1_0 (ATerm m_117 (ATerm), ATerm t)
{
  ATerm r_88 = NULL,s_88 = NULL;
  t = m_117(t);
  s_88 = t;
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_30;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        t = term_e_30;
      }
    r_88 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_88, s_88);
    {
      ATerm f_30 = t;
      int g_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_h_30;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, r_88, s_88);
          LocalPopChoice(g_30);
          if(match_cons(t, sym__2))
            {
              ATerm i_30 = ATgetArgument(t, 0);
              ATerm j_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_12(n_3, r_88, s_88, t);
        }
      else
        {
          t = f_30;
          if(match_cons(t, sym__2))
            {
              ATerm k_30 = ATgetArgument(t, 0);
              ATerm l_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_12(o_3, r_88, s_88, t);
        }
    }
  }
  return(t);
}
ATerm n_89 (ATerm h_89, ATerm t)
{
  t = SSL_fclose(h_89);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_89 = NULL,l_89 = NULL;
  l_89 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_89 = ATgetArgument(t, 0);
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_89);
            ;
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
            t = n_89(l_89, t);
          }
      }
    }
  else
    {
      t = n_89(l_89, t);
    }
  return(t);
}
ATerm a_13 (ATerm z_52, ATerm t)
{
  t = SSL_read_term_from_stream(z_52);
  return(t);
}
ATerm b_13 (ATerm l_49, ATerm m_49, ATerm t)
{
  ATerm o_89 = NULL;
  t = SSL_fopen(l_49, m_49);
  o_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_89);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_89 = NULL;
  t = SSL_stdin_stream();
  p_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_89);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_89 = NULL;
  t = SSL_stdout_stream();
  q_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_89);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_89 = NULL;
  t = SSL_stderr_stream();
  r_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_89);
  return(t);
}
ATerm a_91 (ATerm x_89, ATerm t)
{
  ATerm y_89 = NULL;
  t = SSL_explode_term(x_89);
  if(match_cons(t, sym__2))
    {
      ATerm o_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_30 = ATgetArgument(t, 1);
        if(((ATgetType(p_30) == AT_LIST) && !(ATisEmpty(p_30))))
          {
            y_89 = ATgetFirst((ATermList) p_30);
            {
              ATerm q_30 = (ATerm) ATgetNext((ATermList) p_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_89;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_89;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_89;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_89;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_91 (ATerm b_90, ATerm d_90, ATerm e_90, ATerm t)
{
  ATerm f_90 = NULL,g_90 = NULL,h_90 = NULL,k_90 = NULL,w_15 = NULL;
  t = SSLgetAnnotations(e_90);
  h_90 = t;
  t = b_90;
  if(match_cons(t, sym_Path_1))
    {
      k_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_90, d_90);
  w_15 = t;
  t = SSLsetAnnotations(w_15, h_90);
  if(match_cons(t, sym__2))
    {
      f_90 = ATgetArgument(t, 0);
      g_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13(f_90, g_90, t);
  return(t);
}
ATerm c_91 (ATerm m_90, ATerm o_90, ATerm p_90, ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL,s_90 = NULL,v_90 = NULL,y_15 = NULL;
  t = SSLgetAnnotations(p_90);
  s_90 = t;
  t = SSL_is_string(m_90);
  v_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_90, o_90);
  y_15 = t;
  t = SSLsetAnnotations(y_15, s_90);
  if(match_cons(t, sym__2))
    {
      q_90 = ATgetArgument(t, 0);
      r_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13(q_90, r_90, t);
  return(t);
}
ATerm c_13 (ATerm t)
{
  ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL;
  x_90 = t;
  if(match_cons(t, sym__2))
    {
      y_90 = ATgetArgument(t, 0);
      z_90 = ATgetArgument(t, 1);
      {
        ATerm r_30 = t;
        int s_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_91(x_90, t);
            ;
            LocalPopChoice(s_30);
          }
        else
          {
            t = r_30;
            {
              ATerm t_30 = t;
              int u_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_91(y_90, z_90, x_90, t);
                  ;
                  LocalPopChoice(u_30);
                }
              else
                {
                  t = t_30;
                  t = c_91(y_90, z_90, x_90, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_91(x_90, t);
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_v_30;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_91 = NULL,e_91 = NULL,f_91 = NULL;
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_91 = NULL;
      g_91 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_91, term_z_30);
      t = c_13(t);
      ;
      LocalPopChoice(y_30);
    }
  else
    {
      t = x_30;
      t = debug_1_0(q_3, t);
      _fail(t);
    }
  e_91 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(f_91, t);
  d_91 = t;
  t = e_91;
  t = fclose_0_0(t);
  t = d_91;
  return(t);
}
ATerm input_1_0 (ATerm n_117 (ATerm), ATerm t)
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
      t = term_d_31;
    }
  t = ReadFromFile_0_0(t);
  t = n_117(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL,m_91 = NULL;
  i_91 = t;
  t = term_e_31;
  t = whoami_0_0(t);
  j_91 = t;
  t = term_f_31;
  l_91 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_31), j_91), term_g_31);
  m_91 = t;
  t = SSL_printnl(l_91, m_91);
  t = term_i_31;
  k_91 = t;
  t = SSL_exit(k_91);
  t = i_91;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm o_91 = NULL;
  o_91 = t;
  if(match_string(t, "-k"))
    {
      t = o_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_91;
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm p_91 = NULL,q_91 = NULL,r_91 = NULL;
  p_91 = t;
  t = SSL_string_to_int(p_91);
  q_91 = t;
  t = term_j_31;
  r_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_31, q_91);
  t = k_13(r_91, q_91, t);
  t = p_91;
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, t_3, u_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm t_91 = NULL;
  t_91 = t;
  if(match_string(t, "-S"))
    {
      t = t_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_91;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm u_91 = NULL,v_91 = NULL;
  t = term_l_31;
  u_91 = t;
  t = term_m_31;
  v_91 = t;
  t = term_n_31;
  t = k_13(u_91, v_91, t);
  t = term_o_31;
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_p_31;
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
  ATerm w_91 = NULL,x_91 = NULL,y_91 = NULL;
  w_91 = t;
  t = SSL_string_to_int(w_91);
  x_91 = t;
  t = term_l_31;
  y_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_31, x_91);
  t = k_13(y_91, x_91, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_91);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_q_31;
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
  ATerm z_91 = NULL,a_92 = NULL;
  t = term_r_31;
  z_91 = t;
  t = term_e_31;
  a_92 = t;
  t = term_s_31;
  t = k_13(z_91, a_92, t);
  t = term_u_31;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_v_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_3, w_3, x_3, t);
      ;
      LocalPopChoice(x_31);
    }
  else
    {
      t = w_31;
      {
        ATerm y_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_3, z_3, b_4, t);
            ;
            LocalPopChoice(z_31);
          }
        else
          {
            t = y_31;
            t = Option_3_0(c_4, e_4, f_4, t);
          }
      }
    }
  return(t);
}
ATerm k_13 (ATerm a_54, ATerm b_54, ATerm t)
{
  ATerm b_92 = NULL;
  t = term_a_32;
  b_92 = t;
  t = SSL_table_put(b_92, a_54, b_54);
  t = (ATerm) ATmakeAppl(sym__3, term_a_32, a_54, b_54);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm e_92 = NULL,g_92 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL;
      t = term_e_31;
      t = h_0(t);
      j_92 = t;
      t = term_b_32;
      k_92 = t;
      t = term_d_32;
      l_92 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_32, term_d_32, j_92);
      t = i_13(k_92, l_92, j_92, t);
      _fail(t);
    }
  else
    {
      ATerm o_92 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_92 = ATgetFirst((ATermList) t);
          g_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_92;
      t = d_0(t);
      t = term_e_31;
      t = g_0(t);
      o_92 = t;
      t = (ATerm) ATinsert(CheckATermList(g_92), o_92);
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm q_92 = NULL;
  q_92 = t;
  if(match_string(t, "-o"))
    {
      t = q_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_92;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm r_92 = NULL,s_92 = NULL;
  r_92 = t;
  t = term_d_30;
  s_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_30, r_92);
  t = k_13(s_92, r_92, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_92);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, h_4, i_4, t);
  return(t);
}
ATerm i_13 (ATerm y_58, ATerm z_58, ATerm x_58, ATerm t)
{
  ATerm u_92 = NULL,v_92 = NULL,w_92 = NULL;
  u_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_32 = ATgetArgument(t, 0);
            ATerm i_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
        t = h_13(y_58, z_58, t);
        ;
        LocalPopChoice(g_32);
      }
    else
      {
        t = f_32;
        t = (ATerm) ATempty;
      }
    v_92 = t;
    t = (ATerm) ATinsert(CheckATermList(v_92), x_58);
    w_92 = t;
    t = SSL_table_put(y_58, z_58, w_92);
    t = u_92;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL;
      t = term_e_31;
      t = m_0(t);
      h_93 = t;
      t = term_b_32;
      i_93 = t;
      t = term_d_32;
      j_93 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_32, term_d_32, h_93);
      t = i_13(i_93, j_93, h_93, t);
      _fail(t);
    }
  else
    {
      ATerm p_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_93 = ATgetFirst((ATermList) t);
          e_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_93;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_93 = ATgetFirst((ATermList) t);
          g_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_93;
      t = k_0(t);
      t = f_93;
      t = l_0(t);
      p_93 = t;
      t = (ATerm) ATinsert(CheckATermList(g_93), p_93);
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm r_93 = NULL;
  r_93 = t;
  if(match_string(t, "-i"))
    {
      t = r_93;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_93;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm s_93 = NULL,t_93 = NULL;
  s_93 = t;
  t = term_c_31;
  t_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_31, s_93);
  t = k_13(t_93, s_93, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_93);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, k_4, m_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_93 = NULL,v_93 = NULL,w_93 = NULL,x_93 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_31;
  t = whoami_0_0(t);
  u_93 = t;
  t = term_f_31;
  w_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_32), u_93);
  x_93 = t;
  t = SSL_printnl(w_93, x_93);
  t = term_i_31;
  v_93 = t;
  t = SSL_exit(v_93);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_32;
  t = get_config_0_0(t);
  return(t);
}
ATerm d_13 (ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_46, k_46);
      ;
      LocalPopChoice(n_32);
    }
  else
    {
      t = m_32;
      t = SSL_addr(j_46, k_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm t)
{
  ATerm z_93 = NULL,a_94 = NULL,b_94 = NULL;
  z_93 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_93;
      t = s_105(t);
    }
  else
    {
      ATerm e_94 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_94 = ATgetFirst((ATermList) t);
          b_94 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_94;
      t = foldr_2_0(s_105, t_105, t);
      e_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_94, e_94);
      t = t_105(t);
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
  t = term_m_31;
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
  t = d_13(k_8, l_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_94 = NULL,g_8 = NULL,h_8 = NULL;
  t = times_0_0(t);
  h_8 = t;
  t = SSL_explode_term(h_8);
  if(match_cons(t, sym__2))
    {
      ATerm o_32 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8;
  t = foldr_2_0(n_4, p_4, t);
  h_94 = t;
  t = SSL_TicksToSeconds(h_94);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL;
  t_94 = t;
  if(match_cons(t, sym__2))
    {
      u_94 = ATgetArgument(t, 0);
      v_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_94;
        if((u_94 != t))
          {
            _fail(t);
          }
        t = t_94;
        ;
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
        t = (ATerm) ATmakeAppl(sym__2, u_94, v_94);
        {
          ATerm r_32 = t;
          int s_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_94, v_94);
              ;
              LocalPopChoice(s_32);
            }
          else
            {
              t = r_32;
              t = SSL_gtr(u_94, v_94);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_94, v_94);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_114 (ATerm), ATerm t)
{
  ATerm z_94 = NULL;
  z_94 = t;
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_95 = NULL;
        t = term_l_31;
        t = get_config_0_0(t);
        b_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_95, term_i_31);
        t = geq_0_0(t);
        t = z_94;
        t = n_114(t);
        ;
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        t = z_94;
      }
  }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm d_95 = NULL,e_95 = NULL,g_95 = NULL,h_95 = NULL;
  t = run_time_0_0(t);
  d_95 = t;
  t = term_e_31;
  t = whoami_0_0(t);
  e_95 = t;
  t = term_f_31;
  g_95 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_32), d_95), term_w_32), e_95);
  h_95 = t;
  t = SSL_printnl(g_95, h_95);
  t = (ATerm) ATmakeAppl(sym__2, term_f_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_32), d_95), term_w_32), e_95));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_95 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_31;
  i_95 = t;
  t = SSL_exit(i_95);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm q_95 = NULL,r_95 = NULL;
  r_95 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_95;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_95 = ATgetArgument(t, 0);
          {
            ATerm i_9 = NULL,b_16 = NULL;
            t = SSLgetAnnotations(r_95);
            i_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_95);
            b_16 = t;
            t = SSLsetAnnotations(b_16, i_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_95;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_117 (ATerm), ATerm t)
{
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      t = fetch_1_0(r_4, t);
    }
  t = d_117(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_95 = ATgetFirst((ATermList) t);
      v_95 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_95 = NULL,a_96 = NULL;
        ATerm s_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_95)), not_null(a_96));
          return(t);
        }
        t = v_95;
        t = j_0(t);
        if(((z_95 != NULL) && (z_95 != t)))
          _fail(t);
        else
          z_95 = t;
        t = u_95;
        t = i_0(t);
        if(((a_96 != NULL) && (a_96 != t)))
          _fail(t);
        else
          a_96 = t;
        t = v_95;
        t = reverse_acc_2_0(i_0, s_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_31;
      t = j_0(t);
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm e_96 = NULL,f_96 = NULL,g_96 = NULL,d_16 = NULL;
  g_96 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_96);
  e_96 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_96);
  d_16 = t;
  t = SSLsetAnnotations(d_16, e_96);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm i_96 = NULL;
  i_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_96), term_b_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_96 = NULL,d_96 = NULL;
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      t = fetch_1_0(t_4, t);
    }
  t = term_e_33;
  t = echo_0_0(t);
  t = term_b_32;
  c_96 = t;
  t = term_d_32;
  d_96 = t;
  t = term_f_33;
  t = h_13(c_96, d_96, t);
  t = reverse_acc_2_0(_id, w_4, t);
  t = map_1_0(y_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm m_107 (ATerm), ATerm t)
{
  ATerm m_97 (ATerm t)
  {
    ATerm j_97 = NULL,k_97 = NULL,l_97 = NULL;
    j_97 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_97 = ATgetFirst((ATermList) t);
        l_97 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_33 = t;
      int h_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_9 = NULL,a_10 = NULL,o_16 = NULL;
          t = SSLgetAnnotations(j_97);
          w_9 = t;
          t = k_97;
          t = m_107(t);
          a_10 = t;
          t = (ATerm) ATinsert(CheckATermList(l_97), a_10);
          o_16 = t;
          t = SSLsetAnnotations(o_16, w_9);
          ;
          LocalPopChoice(h_33);
        }
      else
        {
          t = g_33;
          {
            ATerm i_10 = NULL,l_10 = NULL,u_16 = NULL;
            t = SSLgetAnnotations(j_97);
            i_10 = t;
            t = l_97;
            t = m_97(t);
            l_10 = t;
            t = (ATerm) ATinsert(CheckATermList(l_10), k_97);
            u_16 = t;
            t = SSLsetAnnotations(u_16, i_10);
          }
        }
    }
    return(t);
  }
  t = m_97(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL;
  q_97 = t;
  {
    ATerm i_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_97;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_33 = ATgetFirst((ATermList) t);
                ATerm m_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_97;
          }
        ;
        LocalPopChoice(k_33);
      }
    else
      {
        t = i_33;
        t = (ATerm) ATinsert(ATempty, q_97);
      }
    r_97 = t;
    t = term_e_30;
    s_97 = t;
    t = SSL_printnl(s_97, r_97);
    t = q_97;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm g_13 (ATerm j_40, ATerm k_40, ATerm t)
{
  t = SSL_strcat(j_40, k_40);
  return(t);
}
ATerm debug_1_0 (ATerm b_113 (ATerm), ATerm t)
{
  ATerm w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL;
  w_97 = t;
  t = b_113(t);
  x_97 = t;
  t = term_f_31;
  y_97 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_97), x_97);
  z_97 = t;
  t = SSL_printnl(y_97, z_97);
  t = w_97;
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_p_33;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_98 = NULL;
      g_98 = t;
      t = SSL_is_string(g_98);
      ;
      LocalPopChoice(r_33);
    }
  else
    {
      t = q_33;
      {
        ATerm s_33 = t;
        int t_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_4, t);
            ;
            LocalPopChoice(t_33);
          }
        else
          {
            t = s_33;
            {
              ATerm m_98 = NULL,o_98 = NULL,p_98 = NULL;
              m_98 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_98 = ATgetArgument(t, 0);
                  t = o_98;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_98 = ATgetArgument(t, 0);
                      t = o_98;
                      {
                        ATerm u_33 = t;
                        int v_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(v_33);
                          }
                        else
                          {
                            t = u_33;
                            t = debug_1_0(a_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_98 = NULL,u_98 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_98 = ATgetArgument(t, 0);
                          p_98 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_98;
                      t = eval_config_0_0(t);
                      t_98 = t;
                      t = p_98;
                      t = eval_config_0_0(t);
                      u_98 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_98, u_98);
                      t = g_13(t_98, u_98, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm h_13 (ATerm p_60, ATerm q_60, ATerm t)
{
  t = SSL_table_get(p_60, q_60);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL;
  y_98 = t;
  t = term_a_32;
  z_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_32, y_98);
  t = h_13(z_98, y_98, t);
  {
    ATerm w_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_99 = NULL,b_99 = NULL;
        t = eval_config_0_0(t);
        a_99 = t;
        t = term_a_32;
        b_99 = t;
        t = SSL_table_put(b_99, y_98, a_99);
        t = a_99;
        ;
        LocalPopChoice(y_33);
      }
    else
      {
        t = w_33;
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
  ATerm e_99 = NULL,f_99 = NULL;
  t = term_z_33;
  e_99 = t;
  t = term_e_31;
  f_99 = t;
  t = term_a_34;
  t = k_13(e_99, f_99, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_b_34;
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
  ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL,j_99 = NULL;
  t = term_z_33;
  i_99 = t;
  t = term_e_31;
  j_99 = t;
  t = term_a_34;
  t = k_13(i_99, j_99, t);
  t = term_c_34;
  g_99 = t;
  t = term_e_31;
  h_99 = t;
  t = term_d_34;
  t = k_13(g_99, h_99, t);
  t = term_e_34;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_5, d_5, g_5, t);
      ;
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      t = Option_3_0(i_5, j_5, u_5, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm o_99 = NULL,p_99 = NULL,q_99 = NULL,r_99 = NULL,t_99 = NULL,u_99 = NULL,x_16 = NULL;
  o_99 = t;
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_34;
        t = g_119(t);
        ;
        LocalPopChoice(j_34);
      }
    else
      {
        t = i_34;
      }
    t = o_99;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_99 = ATgetFirst((ATermList) t);
        r_99 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_99);
    p_99 = t;
    t = term_l_32;
    u_99 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_32, q_99);
    t = k_13(u_99, q_99, t);
    t = r_99;
    {
      ATerm e_100 (ATerm t)
      {
        ATerm l_34 = t;
        int m_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_34 = t;
            int p_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_99 = NULL;
                x_99 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_99;
                ;
                LocalPopChoice(p_34);
              }
            else
              {
                t = o_34;
                t = g_119(t);
                t = Cons_2_0(_id, e_100, t);
              }
            ;
            LocalPopChoice(m_34);
          }
        else
          {
            t = l_34;
            {
              ATerm a_100 = NULL,b_100 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_100 = ATgetFirst((ATermList) t);
                  b_100 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_100), (ATerm) ATmakeAppl(sym_Undefined_1, a_100));
            }
          }
        return(t);
      }
      t = e_100(t);
      t_99 = t;
      t = (ATerm) ATinsert(CheckATermList(t_99), (ATerm) ATmakeAppl(sym_Program_1, q_99));
      x_16 = t;
      t = SSLsetAnnotations(x_16, p_99);
    }
  }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm q_100 = NULL;
  q_100 = t;
  if(match_string(t, "--help"))
    {
      t = q_100;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_100;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_100;
        }
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm r_100 = NULL,s_100 = NULL;
  t = term_a_33;
  r_100 = t;
  t = term_e_31;
  s_100 = t;
  t = term_q_34;
  t = k_13(r_100, s_100, t);
  t = term_r_34;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_s_34;
  return(t);
}
ATerm z_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_119 (ATerm), ATerm t)
{
  ATerm j_100 = NULL,k_100 = NULL,l_100 = NULL,m_100 = NULL,n_100 = NULL,o_100 = NULL,p_100 = NULL;
  l_100 = t;
  t = term_b_32;
  n_100 = t;
  t = term_d_32;
  o_100 = t;
  t = (ATerm) ATempty;
  p_100 = t;
  t = SSL_table_put(n_100, o_100, p_100);
  t = l_100;
  {
    ATerm v_5 (ATerm t)
    {
      ATerm t_34 = t;
      int u_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_119(t);
          ;
          LocalPopChoice(u_34);
        }
      else
        {
          t = t_34;
          {
            ATerm v_34 = t;
            int w_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_5, x_5, y_5, t);
                ;
                LocalPopChoice(w_34);
              }
            else
              {
                t = v_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_5, t);
    {
      ATerm x_34 = t;
      int z_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_100 = NULL;
          z_100 = t;
          {
            ATerm a_35 = t;
            int b_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_11 = NULL;
                t = z_100;
                {
                  ATerm c_35 = t;
                  int d_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_a_33;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(d_35);
                    }
                  else
                    {
                      t = c_35;
                      t = fetch_1_0(z_5, t);
                    }
                  t = z_100;
                  t = default_system_usage_0_0(t);
                  t = term_m_31;
                  d_11 = t;
                  t = SSL_exit(d_11);
                }
                ;
                LocalPopChoice(b_35);
              }
            else
              {
                t = a_35;
                {
                  ATerm h_11 = NULL;
                  t = term_z_33;
                  t = get_config_0_0(t);
                  t = z_100;
                  t = default_system_about_0_0(t);
                  t = term_m_31;
                  h_11 = t;
                  t = SSL_exit(h_11);
                }
              }
          }
          ;
          LocalPopChoice(z_34);
        }
      else
        {
          t = x_34;
          {
            ATerm e_35 = t;
            int f_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_101 = NULL,b_101 = NULL,c_101 = NULL;
                ATerm a_6 (ATerm t)
                {
                  ATerm d_101 = NULL,e_101 = NULL,f_101 = NULL,z_16 = NULL;
                  f_101 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      e_101 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_101);
                  d_101 = t;
                  t = e_101;
                  if(((j_100 != NULL) && (j_100 != t)))
                    _fail(t);
                  else
                    j_100 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, e_101);
                  z_16 = t;
                  t = SSLsetAnnotations(z_16, d_101);
                  return(t);
                }
                t = fetch_1_0(a_6, t);
                t = term_f_31;
                b_101 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_100)), term_g_35);
                c_101 = t;
                t = SSL_printnl(b_101, c_101);
                t = (ATerm) ATmakeAppl(sym__2, term_f_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_100)), term_g_35));
                t = default_system_usage_0_0(t);
                t = term_i_31;
                a_101 = t;
                t = SSL_exit(a_101);
                ;
                LocalPopChoice(f_35);
              }
            else
              {
                t = e_35;
              }
          }
        }
      k_100 = t;
      t = term_b_32;
      m_100 = t;
      t = SSL_table_destroy(m_100);
      t = k_100;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm t)
{
  ATerm k_101 = NULL,l_101 = NULL,m_101 = NULL,n_101 = NULL;
  t = parse_options_1_0(f_117, t);
  k_101 = t;
  t = term_i_35;
  n_101 = t;
  t = SSL_table_create(n_101);
  t = term_i_35;
  l_101 = t;
  t = term_j_35;
  m_101 = t;
  t = SSL_table_put(l_101, m_101, k_101);
  t = k_101;
  t = h_117(t);
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_117, t);
        ;
        LocalPopChoice(l_35);
      }
    else
      {
        t = k_35;
        {
          ATerm m_35 = t;
          int n_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_117(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_35);
            }
          else
            {
              t = m_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm o_35 = t;
  int p_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(p_35);
    }
  else
    {
      t = o_35;
      {
        ATerm q_35 = t;
        int r_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(r_35);
          }
        else
          {
            t = q_35;
            {
              ATerm s_35 = t;
              int t_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(e_6, f_6, h_6, t);
                  ;
                  LocalPopChoice(t_35);
                }
              else
                {
                  t = s_35;
                  {
                    ATerm u_35 = t;
                    int w_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(w_35);
                      }
                    else
                      {
                        t = u_35;
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
  ATerm p_101 = NULL,q_101 = NULL;
  t = term_h_30;
  p_101 = t;
  t = term_e_31;
  q_101 = t;
  t = term_x_35;
  t = k_13(p_101, q_101, t);
  t = term_y_35;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_z_35;
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = output_1_0(j_6, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm s_101 = NULL,t_101 = NULL,u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL,z_101 = NULL,x_17 = NULL,w_17 = NULL;
  z_101 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_101);
  s_101 = t;
  t = t_101;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_101 = ATgetFirst((ATermList) t);
      w_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_101);
  u_101 = t;
  t = w_101;
  t = Cons_2_0(k_6, l_6, t);
  x_101 = t;
  t = (ATerm) ATinsert(CheckATermList(x_101), v_101);
  w_17 = t;
  t = SSLsetAnnotations(w_17, u_101);
  y_101 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_101);
  x_17 = t;
  t = SSLsetAnnotations(x_17, s_101);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm a_102 = NULL,d_102 = NULL,e_102 = NULL,f_102 = NULL,v_17 = NULL;
  f_102 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_102);
  a_102 = t;
  t = d_102;
  t = map_1_0(m_6, t);
  e_102 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, e_102);
  v_17 = t;
  t = SSLsetAnnotations(v_17, a_102);
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
  ATerm g_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL,k_102 = NULL,l_102 = NULL,m_102 = NULL,k_17 = NULL;
  m_102 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      h_102 = ATgetArgument(t, 0);
      i_102 = ATgetArgument(t, 1);
      j_102 = ATgetArgument(t, 2);
      k_102 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_102);
  g_102 = t;
  t = k_102;
  t = define_congruences_0_0(t);
  l_102 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, h_102, i_102, j_102, l_102);
  k_17 = t;
  t = SSLsetAnnotations(k_17, g_102);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(b_6, default_usage_0_0, _id, d_6, t);
  return(t);
}
