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
Symbol sym_Prim_2;
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
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_m_32;
ATerm term_h_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_m_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_b_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_n_28;
ATerm term_k_28;
ATerm term_s_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_k_27;
ATerm term_h_27;
ATerm term_i_26;
ATerm term_o_25;
ATerm term_g_9;
ATerm term_b_9;
ATerm term_t_8;
ATerm term_p_8;
ATerm term_o_8;
void init_constant_terms (void)
{
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Sort_2, term_o_8, (ATerm) ATempty);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_ConstType_1, term_p_8);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_a_29, term_b_29);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_29);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym__2, term_h_29, term_s_28);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym__2, term_u_29, term_v_29);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__2, term_w_31, term_s_28);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym__2, term_z_31, term_s_28);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym__2, term_x_30, term_s_28);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_s_27, term_s_28);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm bottomup_1_0 (ATerm f_114 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm i_115 (ATerm), ATerm);
ATerm u_0 (ATerm h_0, ATerm);
ATerm conc_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm Anno__Cong_____2_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm);
ATerm o_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm a_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm z_1 (ATerm);
ATerm c_2 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_11 (ATerm f_45, ATerm g_45, ATerm h_45, ATerm);
ATerm genzip_4_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm w_125 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm t_58 (ATerm j_58, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm topdown_1_0 (ATerm e_114 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_125 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm);
ATerm t_11 (ATerm b_74, ATerm c_74, ATerm);
ATerm u_11 (ATerm p_77, ATerm q_77, ATerm);
ATerm x_11 (ATerm m_135 (ATerm), ATerm t_555, ATerm t_77, ATerm);
ATerm v_11 (ATerm l_77, ATerm m_77, ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm output_1_0 (ATerm v_139 (ATerm), ATerm);
ATerm z_63 (ATerm t_63, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm y_11 (ATerm r_77, ATerm);
ATerm z_11 (ATerm d_74, ATerm e_74, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm m_65 (ATerm j_64, ATerm);
ATerm n_65 (ATerm n_64, ATerm o_64, ATerm p_64, ATerm);
ATerm o_65 (ATerm x_64, ATerm y_64, ATerm z_64, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm w_139 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm h_12 (ATerm s_78, ATerm t_78, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm f_12 (ATerm f_69, ATerm g_69, ATerm e_69, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_12 (ATerm j_67, ATerm k_67, ATerm);
ATerm foldr_2_0 (ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_136 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm need_help_1_0 (ATerm m_139 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm q_125 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm d_12 (ATerm c_60, ATerm d_60, ATerm);
ATerm debug_1_0 (ATerm k_135 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm e_12 (ATerm w_70, ATerm x_70, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm p_141 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm parse_options_1_0 (ATerm o_141 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_139 (ATerm), ATerm p_139 (ATerm), ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm f_114 (ATerm), ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = bottomup_1_0(f_114, t);
    return(t);
  }
  t = SRTS_all(c_0, t);
  t = f_114(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm i_115 (ATerm), ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm u_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_115(t);
        ;
        LocalPopChoice(v_6);
      }
    else
      {
        t = u_6;
        t = SRTS_one(b_1, t);
      }
    return(t);
  }
  t = b_1(t);
  return(t);
}
ATerm u_0 (ATerm h_0, ATerm t)
{
  ATerm l_0 = NULL;
  t = SSL_explode_term(h_0);
  if(match_cons(t, sym__2))
    {
      ATerm u_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_0;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL;
  if(((r_0 != NULL) && (r_0 != t)))
    _fail(t);
  else
    r_0 = t;
  if(match_cons(t, sym__2))
    {
      p_0 = ATgetArgument(t, 0);
      q_0 = ATgetArgument(t, 1);
      {
        ATerm v_7 = t;
        int w_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
            {
              t = not_null(q_0);
              return(t);
            }
            t = not_null(p_0);
            t = at_end_1_0(e_0, t);
            ;
            LocalPopChoice(w_7);
          }
        else
          {
            t = v_7;
            t = u_0(not_null(r_0), t);
          }
      }
    }
  else
    {
      t = u_0(not_null(r_0), t);
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
  u_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_2 = ATgetFirst((ATermList) t);
      w_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm x_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,l_1 = NULL,n_1 = NULL,k_1 = NULL,h_1 = NULL;
        t = SSLgetAnnotations(u_2);
        g_1 = t;
        t = v_2;
        t = n_0(t);
        l_1 = t;
        t = (ATerm) ATinsert(CheckATermList(w_2), l_1);
        h_1 = t;
        t = SSLsetAnnotations(h_1, g_1);
        n_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_1 = ATgetFirst((ATermList) t);
            e_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_1);
        c_1 = t;
        t = e_1;
        {
          ATerm z_7 = t;
          int a_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(a_8);
            }
          else
            {
              t = z_7;
            }
          f_1 = t;
          t = (ATerm) ATinsert(CheckATermList(f_1), d_1);
          k_1 = t;
          t = SSLsetAnnotations(k_1, c_1);
        }
        ;
        LocalPopChoice(y_7);
      }
    else
      {
        t = x_7;
        {
          ATerm g_2 = NULL,y_2 = NULL,m_1 = NULL;
          t = SSLgetAnnotations(u_2);
          g_2 = t;
          t = w_2;
          t = map1_1_0(n_0, t);
          y_2 = t;
          t = (ATerm) ATinsert(CheckATermList(y_2), v_2);
          m_1 = t;
          t = SSLsetAnnotations(m_1, g_2);
        }
      }
  }
  return(t);
}
ATerm Anno__Cong_____2_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL;
  z_0 = t;
  v_0 = t;
  t = SSLgetAnnotations(z_0);
  x_0 = t;
  t = v_0;
  t = f_112(t);
  w_0 = t;
  t = x_0;
  t = g_112(t);
  y_0 = t;
  t = SSLsetAnnotations(w_0, y_0);
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,h_3 = NULL,y_1 = NULL;
      y_12 = t;
      if(match_cons(t, sym_Op_2))
        {
          z_12 = ATgetArgument(t, 0);
          a_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_12);
      h_3 = t;
      t = z_12;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Op_2, z_12, a_13);
      y_1 = t;
      t = SSLsetAnnotations(y_1, h_3);
      ;
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
      t = Anno__Cong_____2_0(s_0, t_0, t);
    }
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,a_2 = NULL;
  d_13 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_13);
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_13);
  a_2 = t;
  t = SSLsetAnnotations(a_2, b_13);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
  l_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_13;
    }
  else
    {
      ATerm r_3 = NULL,b_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_13 = ATgetFirst((ATermList) t);
          n_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_13);
      r_3 = t;
      t = m_13;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      t = n_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(n_13), m_13);
      b_2 = t;
      t = SSLsetAnnotations(b_2, r_3);
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_8 = ATgetArgument(t, 0);
      if(((ATgetType(g_8) != AT_LIST) || !(ATisEmpty(g_8))))
        _fail(t);
      {
        ATerm h_8 = ATgetArgument(t, 1);
        if(((ATgetType(h_8) != AT_LIST) || !(ATisEmpty(h_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_8 = ATgetArgument(t, 0);
      if(((ATgetType(i_8) == AT_LIST) && !(ATisEmpty(i_8))))
        {
          t_20 = ATgetFirst((ATermList) i_8);
          u_20 = (ATerm) ATgetNext((ATermList) i_8);
        }
      else
        _fail(t);
      {
        ATerm j_8 = ATgetArgument(t, 1);
        if(((ATgetType(j_8) == AT_LIST) && !(ATisEmpty(j_8))))
          {
            v_20 = ATgetFirst((ATermList) j_8);
            w_20 = (ATerm) ATgetNext((ATermList) j_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_20, v_20), (ATerm) ATmakeAppl(sym__2, u_20, w_20));
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  if(match_cons(t, sym__2))
    {
      d_21 = ATgetArgument(t, 0);
      e_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_21), d_21);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm f_21 = NULL,l_21 = NULL;
  if(match_cons(t, sym__2))
    {
      f_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_21), (ATerm) ATmakeAppl(sym_Match_1, l_21));
  return(t);
}
ATerm p_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      if(((ATgetType(k_8) != AT_LIST) || !(ATisEmpty(k_8))))
        _fail(t);
      {
        ATerm l_8 = ATgetArgument(t, 1);
        if(((ATgetType(l_8) != AT_LIST) || !(ATisEmpty(l_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,w_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_8 = ATgetArgument(t, 0);
      if(((ATgetType(m_8) == AT_LIST) && !(ATisEmpty(m_8))))
        {
          p_29 = ATgetFirst((ATermList) m_8);
          q_29 = (ATerm) ATgetNext((ATermList) m_8);
        }
      else
        _fail(t);
      {
        ATerm n_8 = ATgetArgument(t, 1);
        if(((ATgetType(n_8) == AT_LIST) && !(ATisEmpty(n_8))))
          {
            r_29 = ATgetFirst((ATermList) n_8);
            w_29 = (ATerm) ATgetNext((ATermList) n_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_29, r_29), (ATerm) ATmakeAppl(sym__2, q_29, w_29));
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL;
  if(match_cons(t, sym__2))
    {
      x_29 = ATgetArgument(t, 0);
      y_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_29), x_29);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  if(match_cons(t, sym__2))
    {
      z_29 = ATgetArgument(t, 0);
      a_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_29), (ATerm) ATmakeAppl(sym_Match_1, a_30));
  return(t);
}
ATerm t_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm z_51 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_51, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_8), term_t_8));
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL;
  b_52 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_52 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, a_52, term_t_8);
    }
  else
    {
      t = b_52;
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm n_52 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_52, term_t_8);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL;
  p_52 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      o_52 = ATgetArgument(t, 0);
      {
        ATerm w_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, o_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_8), term_t_8));
            ;
            LocalPopChoice(x_8);
          }
        else
          {
            t = w_8;
            t = p_52;
          }
      }
    }
  else
    {
      t = p_52;
    }
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm z_52 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_8), term_t_8));
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL;
  b_53 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_53 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, a_53, term_t_8);
    }
  else
    {
      t = b_53;
    }
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm j_0 (ATerm t)
  {
    ATerm z_55 (ATerm p_12, ATerm t)
    {
      t = p_12;
      {
        ATerm y_8 = t;
        if((PushChoice() == 0))
          {
            t = oncetd_1_0(o_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_8;
          }
        t = (ATerm) ATmakeAppl(sym_Build_1, p_12);
        t = bottomup_1_0(j_0, t);
      }
      return(t);
    }
    ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL;
    j_14 = t;
    if(match_cons(t, sym_Test_1))
      {
        i_14 = ATgetArgument(t, 0);
        t = i_14;
        if(match_cons(t, sym_Id_0))
          {
            ATerm z_8 = t;
            int a_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_b_9;
                t = j_0(t);
                ;
                LocalPopChoice(a_9);
              }
            else
              {
                t = z_8;
                {
                  ATerm c_9 = t;
                  int d_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
                      t = j_14;
                      t = new_0_0(t);
                      l_14 = t;
                      t = bottomup_1_0(j_0, t);
                      w_14 = t;
                      t = (ATerm) ATempty;
                      t = j_0(t);
                      x_14 = t;
                      t = (ATerm) ATinsert(CheckATermList(x_14), w_14);
                      t = j_0(t);
                      m_14 = t;
                      t = l_14;
                      t = bottomup_1_0(j_0, t);
                      v_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, v_14);
                      t = j_0(t);
                      u_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, u_14);
                      t = j_0(t);
                      o_14 = t;
                      t = i_14;
                      t = bottomup_1_0(j_0, t);
                      q_14 = t;
                      t = l_14;
                      t = bottomup_1_0(j_0, t);
                      t_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, t_14);
                      t = j_0(t);
                      s_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, s_14);
                      t = j_0(t);
                      r_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_14, r_14);
                      t = j_0(t);
                      p_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_14, p_14);
                      t = j_0(t);
                      n_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, m_14, n_14);
                      t = j_0(t);
                      ;
                      LocalPopChoice(d_9);
                    }
                  else
                    {
                      t = c_9;
                      t = j_14;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm e_9 = t;
                int f_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_g_9;
                    t = j_0(t);
                    ;
                    LocalPopChoice(f_9);
                  }
                else
                  {
                    t = e_9;
                    {
                      ATerm i_9 = t;
                      int j_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_15 = NULL,k_15 = NULL,m_15 = NULL,n_15 = NULL,r_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
                          t = j_14;
                          t = new_0_0(t);
                          e_15 = t;
                          t = bottomup_1_0(j_0, t);
                          a_16 = t;
                          t = (ATerm) ATempty;
                          t = j_0(t);
                          b_16 = t;
                          t = (ATerm) ATinsert(CheckATermList(b_16), a_16);
                          t = j_0(t);
                          k_15 = t;
                          t = e_15;
                          t = bottomup_1_0(j_0, t);
                          z_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, z_15);
                          t = j_0(t);
                          y_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, y_15);
                          t = j_0(t);
                          n_15 = t;
                          t = i_14;
                          t = bottomup_1_0(j_0, t);
                          u_15 = t;
                          t = e_15;
                          t = bottomup_1_0(j_0, t);
                          x_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, x_15);
                          t = j_0(t);
                          w_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, w_15);
                          t = j_0(t);
                          v_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_15, v_15);
                          t = j_0(t);
                          r_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_15, r_15);
                          t = j_0(t);
                          m_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, k_15, m_15);
                          t = j_0(t);
                          ;
                          LocalPopChoice(j_9);
                        }
                      else
                        {
                          t = i_9;
                          t = j_14;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    f_14 = ATgetArgument(t, 0);
                    {
                      ATerm k_9 = t;
                      int l_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, f_14);
                          t = j_0(t);
                          ;
                          LocalPopChoice(l_9);
                        }
                      else
                        {
                          t = k_9;
                          {
                            ATerm m_9 = t;
                            int n_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm i_16 = NULL,j_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,s_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,b_17 = NULL;
                                t = j_14;
                                t = new_0_0(t);
                                i_16 = t;
                                t = bottomup_1_0(j_0, t);
                                x_16 = t;
                                t = (ATerm) ATempty;
                                t = j_0(t);
                                b_17 = t;
                                t = (ATerm) ATinsert(CheckATermList(b_17), x_16);
                                t = j_0(t);
                                j_16 = t;
                                t = i_16;
                                t = bottomup_1_0(j_0, t);
                                w_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, w_16);
                                t = j_0(t);
                                v_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, v_16);
                                t = j_0(t);
                                m_16 = t;
                                t = i_14;
                                t = bottomup_1_0(j_0, t);
                                o_16 = t;
                                t = i_16;
                                t = bottomup_1_0(j_0, t);
                                u_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, u_16);
                                t = j_0(t);
                                s_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, s_16);
                                t = j_0(t);
                                p_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, o_16, p_16);
                                t = j_0(t);
                                n_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, m_16, n_16);
                                t = j_0(t);
                                l_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, j_16, l_16);
                                t = j_0(t);
                                ;
                                LocalPopChoice(n_9);
                              }
                            else
                              {
                                t = m_9;
                                t = j_14;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm o_9 = t;
                    int q_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,r_17 = NULL,t_17 = NULL,a_18 = NULL;
                        t = j_14;
                        t = new_0_0(t);
                        f_17 = t;
                        t = bottomup_1_0(j_0, t);
                        t_17 = t;
                        t = (ATerm) ATempty;
                        t = j_0(t);
                        a_18 = t;
                        t = (ATerm) ATinsert(CheckATermList(a_18), t_17);
                        t = j_0(t);
                        g_17 = t;
                        t = f_17;
                        t = bottomup_1_0(j_0, t);
                        r_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, r_17);
                        t = j_0(t);
                        o_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, o_17);
                        t = j_0(t);
                        i_17 = t;
                        t = i_14;
                        t = bottomup_1_0(j_0, t);
                        k_17 = t;
                        t = f_17;
                        t = bottomup_1_0(j_0, t);
                        n_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, n_17);
                        t = j_0(t);
                        m_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, m_17);
                        t = j_0(t);
                        l_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, k_17, l_17);
                        t = j_0(t);
                        j_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_17, j_17);
                        t = j_0(t);
                        h_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, g_17, h_17);
                        t = j_0(t);
                        ;
                        LocalPopChoice(q_9);
                      }
                    else
                      {
                        t = o_9;
                        t = j_14;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            i_14 = ATgetArgument(t, 0);
            t = i_14;
            if(match_cons(t, sym_Id_0))
              {
                ATerm r_9 = t;
                int t_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_g_9;
                    t = j_0(t);
                    ;
                    LocalPopChoice(t_9);
                  }
                else
                  {
                    t = r_9;
                    t = j_14;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm u_9 = t;
                    int v_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_b_9;
                        t = j_0(t);
                        ;
                        LocalPopChoice(v_9);
                      }
                    else
                      {
                        t = u_9;
                        t = j_14;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        f_14 = ATgetArgument(t, 0);
                        {
                          ATerm w_9 = t;
                          int x_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, f_14);
                              t = j_0(t);
                              ;
                              LocalPopChoice(x_9);
                            }
                          else
                            {
                              t = w_9;
                              t = j_14;
                            }
                        }
                      }
                    else
                      {
                        t = j_14;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                i_14 = ATgetArgument(t, 0);
                h_14 = ATgetArgument(t, 1);
                t = h_14;
                if(match_cons(t, sym_Id_0))
                  {
                    t = i_14;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = h_14;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = i_14;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                f_14 = ATgetArgument(t, 0);
                                g_14 = ATgetArgument(t, 1);
                                t = i_14;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    f_14 = ATgetArgument(t, 0);
                                    g_14 = ATgetArgument(t, 1);
                                    t = i_14;
                                  }
                                else
                                  {
                                    t = i_14;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        d_14 = ATgetArgument(t, 0);
                        e_14 = ATgetArgument(t, 1);
                        t = d_14;
                        if(match_cons(t, sym_Match_1))
                          {
                            c_14 = ATgetArgument(t, 0);
                            t = c_14;
                            if(match_cons(t, sym_Op_2))
                              {
                                a_14 = ATgetArgument(t, 0);
                                v_13 = ATgetArgument(t, 1);
                                t = i_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm y_9 = t;
                                        int z_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_g_9;
                                            t = j_0(t);
                                            ;
                                            LocalPopChoice(z_9);
                                          }
                                        else
                                          {
                                            t = y_9;
                                            t = j_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_14 = ATgetArgument(t, 0);
                                            g_14 = ATgetArgument(t, 1);
                                            {
                                              ATerm b_10 = t;
                                              int c_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm g_20 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                  t = j_0(t);
                                                  g_20 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, g_20);
                                                  t = j_0(t);
                                                  ;
                                                  LocalPopChoice(c_10);
                                                }
                                              else
                                                {
                                                  t = b_10;
                                                  t = j_14;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                f_14 = ATgetArgument(t, 0);
                                                t = f_14;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    b_14 = ATgetArgument(t, 0);
                                                    w_13 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm e_10 = t;
                                                      int f_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, b_14, a_14);
                                                          {
                                                            ATerm g_10 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm c_4 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    c_4 = ATgetArgument(t, 0);
                                                                    if((c_4 != ATgetArgument(t, 1)))
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
                                                                t = g_10;
                                                              }
                                                            t = term_g_9;
                                                            t = bottomup_1_0(j_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(f_10);
                                                        }
                                                      else
                                                        {
                                                          t = e_10;
                                                          {
                                                            ATerm h_10 = t;
                                                            int i_10 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm s_20 = NULL;
                                                                t = a_14;
                                                                if((b_14 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, w_13, v_13);
                                                                t = genzip_4_0(a_1, i_1, j_1, o_1, t);
                                                                s_20 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, b_14, w_13)), e_14));
                                                                t = bottomup_1_0(j_0, t);
                                                                ;
                                                                LocalPopChoice(i_10);
                                                              }
                                                            else
                                                              {
                                                                t = h_10;
                                                                {
                                                                  ATerm j_10 = t;
                                                                  int k_10 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm p_21 = NULL;
                                                                      t = c_14;
                                                                      if((f_14 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, f_14);
                                                                      t = j_0(t);
                                                                      p_21 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_21, e_14);
                                                                      t = j_0(t);
                                                                      ;
                                                                      LocalPopChoice(k_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = j_10;
                                                                      t = j_14;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm l_10 = t;
                                                    int m_10 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm b_22 = NULL;
                                                        t = c_14;
                                                        if((f_14 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_14);
                                                        t = j_0(t);
                                                        b_22 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_22, e_14);
                                                        t = j_0(t);
                                                        ;
                                                        LocalPopChoice(m_10);
                                                      }
                                                    else
                                                      {
                                                        t = l_10;
                                                        t = j_14;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    f_14 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm n_10 = t;
                                                      int o_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm g_22 = NULL;
                                                          t = c_14;
                                                          if((f_14 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_14);
                                                          t = j_0(t);
                                                          g_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_22, e_14);
                                                          t = j_0(t);
                                                          ;
                                                          LocalPopChoice(o_10);
                                                        }
                                                      else
                                                        {
                                                          t = n_10;
                                                          t = j_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_14 = ATgetArgument(t, 0);
                                                        g_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_10 = t;
                                                          int q_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                              t = j_0(t);
                                                              l_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_14, l_22);
                                                              t = j_0(t);
                                                              ;
                                                              LocalPopChoice(q_10);
                                                            }
                                                          else
                                                            {
                                                              t = p_10;
                                                              t = j_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = i_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm r_10 = t;
                                        int t_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_g_9;
                                            t = j_0(t);
                                            ;
                                            LocalPopChoice(t_10);
                                          }
                                        else
                                          {
                                            t = r_10;
                                            t = j_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_14 = ATgetArgument(t, 0);
                                            g_14 = ATgetArgument(t, 1);
                                            {
                                              ATerm u_10 = t;
                                              int v_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm a_23 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                  t = j_0(t);
                                                  a_23 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, a_23);
                                                  t = j_0(t);
                                                  ;
                                                  LocalPopChoice(v_10);
                                                }
                                              else
                                                {
                                                  t = u_10;
                                                  t = j_14;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                f_14 = ATgetArgument(t, 0);
                                                {
                                                  ATerm x_10 = t;
                                                  int y_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_23 = NULL;
                                                      t = c_14;
                                                      if((f_14 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, f_14);
                                                      t = j_0(t);
                                                      f_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_23, e_14);
                                                      t = j_0(t);
                                                      ;
                                                      LocalPopChoice(y_10);
                                                    }
                                                  else
                                                    {
                                                      t = x_10;
                                                      t = j_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    f_14 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm z_10 = t;
                                                      int a_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm k_23 = NULL;
                                                          t = c_14;
                                                          if((f_14 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_14);
                                                          t = j_0(t);
                                                          k_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_23, e_14);
                                                          t = j_0(t);
                                                          ;
                                                          LocalPopChoice(a_11);
                                                        }
                                                      else
                                                        {
                                                          t = z_10;
                                                          t = j_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_14 = ATgetArgument(t, 0);
                                                        g_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_11 = t;
                                                          int e_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                              t = j_0(t);
                                                              y_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_14, y_23);
                                                              t = j_0(t);
                                                              ;
                                                              LocalPopChoice(e_11);
                                                            }
                                                          else
                                                            {
                                                              t = c_11;
                                                              t = j_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_14;
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
                                c_14 = ATgetArgument(t, 0);
                                t = c_14;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    a_14 = ATgetArgument(t, 0);
                                    t = i_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_11 = t;
                                            int i_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_9;
                                                t = j_0(t);
                                                ;
                                                LocalPopChoice(i_11);
                                              }
                                            else
                                              {
                                                t = h_11;
                                                t = j_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_14 = ATgetArgument(t, 0);
                                                g_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm k_11 = t;
                                                  int m_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                      t = j_0(t);
                                                      j_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, j_24);
                                                      t = j_0(t);
                                                      ;
                                                      LocalPopChoice(m_11);
                                                    }
                                                  else
                                                    {
                                                      t = k_11;
                                                      t = j_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm p_11 = t;
                                                int r_11 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm w_11 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(r_11);
                                                    {
                                                      ATerm c_12 = t;
                                                      int l_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_14);
                                                          t = j_0(t);
                                                          u_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_24, e_14);
                                                          t = j_0(t);
                                                          ;
                                                          LocalPopChoice(l_12);
                                                        }
                                                      else
                                                        {
                                                          t = c_12;
                                                          t = j_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = p_11;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        f_14 = ATgetArgument(t, 0);
                                                        t = f_14;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            b_14 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm m_12 = t;
                                                              int n_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_24 = NULL,z_24 = NULL;
                                                                  t = a_14;
                                                                  if((b_14 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, b_14);
                                                                  t = j_0(t);
                                                                  z_24 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, z_24);
                                                                  t = j_0(t);
                                                                  y_24 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_24, e_14);
                                                                  t = j_0(t);
                                                                  ;
                                                                  LocalPopChoice(n_12);
                                                                }
                                                              else
                                                                {
                                                                  t = m_12;
                                                                  t = j_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_14;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_14 = ATgetArgument(t, 0);
                                                            g_14 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm o_12 = t;
                                                              int q_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_25 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                                  t = j_0(t);
                                                                  h_25 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_14, h_25);
                                                                  t = j_0(t);
                                                                  ;
                                                                  LocalPopChoice(q_12);
                                                                }
                                                              else
                                                                {
                                                                  t = o_12;
                                                                  t = j_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_14;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm r_12 = t;
                                            int s_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_9;
                                                t = j_0(t);
                                                ;
                                                LocalPopChoice(s_12);
                                              }
                                            else
                                              {
                                                t = r_12;
                                                t = j_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_14 = ATgetArgument(t, 0);
                                                g_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm t_12 = t;
                                                  int u_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm v_25 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                      t = j_0(t);
                                                      v_25 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, v_25);
                                                      t = j_0(t);
                                                      ;
                                                      LocalPopChoice(u_12);
                                                    }
                                                  else
                                                    {
                                                      t = t_12;
                                                      t = j_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm v_12 = t;
                                                int w_12 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm x_12 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(w_12);
                                                    {
                                                      ATerm e_13 = t;
                                                      int f_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm d_26 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_14);
                                                          t = j_0(t);
                                                          d_26 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_26, e_14);
                                                          t = j_0(t);
                                                          ;
                                                          LocalPopChoice(f_13);
                                                        }
                                                      else
                                                        {
                                                          t = e_13;
                                                          t = j_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = v_12;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_14 = ATgetArgument(t, 0);
                                                        g_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_13 = t;
                                                          int h_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                              t = j_0(t);
                                                              n_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_14, n_26);
                                                              t = j_0(t);
                                                              ;
                                                              LocalPopChoice(h_13);
                                                            }
                                                          else
                                                            {
                                                              t = g_13;
                                                              t = j_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_14;
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
                                    c_14 = ATgetArgument(t, 0);
                                    x_13 = ATgetArgument(t, 1);
                                    y_13 = ATgetArgument(t, 2);
                                    t = i_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm i_13 = t;
                                            int j_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_9;
                                                t = j_0(t);
                                                ;
                                                LocalPopChoice(j_13);
                                              }
                                            else
                                              {
                                                t = i_13;
                                                t = j_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_14 = ATgetArgument(t, 0);
                                                g_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm k_13 = t;
                                                  int k_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                      t = j_0(t);
                                                      a_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, a_27);
                                                      t = j_0(t);
                                                      ;
                                                      LocalPopChoice(k_14);
                                                    }
                                                  else
                                                    {
                                                      t = k_13;
                                                      t = j_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm y_14 = t;
                                                int z_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm a_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(z_14);
                                                    {
                                                      ATerm b_15 = t;
                                                      int c_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm m_27 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, c_14, x_13, y_13);
                                                          t = j_0(t);
                                                          m_27 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_27, e_14);
                                                          t = j_0(t);
                                                          ;
                                                          LocalPopChoice(c_15);
                                                        }
                                                      else
                                                        {
                                                          t = b_15;
                                                          t = j_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = y_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_14 = ATgetArgument(t, 0);
                                                        g_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_15 = t;
                                                          int f_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                              t = j_0(t);
                                                              w_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_14, w_27);
                                                              t = j_0(t);
                                                              ;
                                                              LocalPopChoice(f_15);
                                                            }
                                                          else
                                                            {
                                                              t = d_15;
                                                              t = j_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm g_15 = t;
                                            int h_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_9;
                                                t = j_0(t);
                                                ;
                                                LocalPopChoice(h_15);
                                              }
                                            else
                                              {
                                                t = g_15;
                                                t = j_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_14 = ATgetArgument(t, 0);
                                                g_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm i_15 = t;
                                                  int j_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm i_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                      t = j_0(t);
                                                      i_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, i_28);
                                                      t = j_0(t);
                                                      ;
                                                      LocalPopChoice(j_15);
                                                    }
                                                  else
                                                    {
                                                      t = i_15;
                                                      t = j_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    f_14 = ATgetArgument(t, 0);
                                                    g_14 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm l_15 = t;
                                                      int o_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_28 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                          t = j_0(t);
                                                          t_28 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, f_14, t_28);
                                                          t = j_0(t);
                                                          ;
                                                          LocalPopChoice(o_15);
                                                        }
                                                      else
                                                        {
                                                          t = l_15;
                                                          t = j_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_14;
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
                            d_14 = ATgetArgument(t, 0);
                            t = d_14;
                            if(match_cons(t, sym_Op_2))
                              {
                                c_14 = ATgetArgument(t, 0);
                                x_13 = ATgetArgument(t, 1);
                                t = i_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm p_15 = t;
                                        int q_15 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_g_9;
                                            t = j_0(t);
                                            ;
                                            LocalPopChoice(q_15);
                                          }
                                        else
                                          {
                                            t = p_15;
                                            t = j_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_14 = ATgetArgument(t, 0);
                                            g_14 = ATgetArgument(t, 1);
                                            {
                                              ATerm s_15 = t;
                                              int t_15 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm g_29 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                  t = j_0(t);
                                                  g_29 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, g_29);
                                                  t = j_0(t);
                                                  ;
                                                  LocalPopChoice(t_15);
                                                }
                                              else
                                                {
                                                  t = s_15;
                                                  t = j_14;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                f_14 = ATgetArgument(t, 0);
                                                t = f_14;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    b_14 = ATgetArgument(t, 0);
                                                    w_13 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm c_16 = t;
                                                      int d_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, b_14, c_14);
                                                          {
                                                            ATerm e_16 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm j_4 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    j_4 = ATgetArgument(t, 0);
                                                                    if((j_4 != ATgetArgument(t, 1)))
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
                                                                t = e_16;
                                                              }
                                                            t = term_g_9;
                                                            t = bottomup_1_0(j_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(d_16);
                                                        }
                                                      else
                                                        {
                                                          t = c_16;
                                                          {
                                                            ATerm f_16 = t;
                                                            int g_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_29 = NULL;
                                                                t = c_14;
                                                                if((b_14 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, w_13, x_13);
                                                                t = genzip_4_0(p_1, q_1, r_1, s_1, t);
                                                                o_29 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_29), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, b_14, w_13)));
                                                                t = bottomup_1_0(j_0, t);
                                                                ;
                                                                LocalPopChoice(g_16);
                                                              }
                                                            else
                                                              {
                                                                t = f_16;
                                                                {
                                                                  ATerm h_16 = t;
                                                                  int k_16 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = d_14;
                                                                      if((f_14 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, f_14);
                                                                      t = j_0(t);
                                                                      ;
                                                                      LocalPopChoice(k_16);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = h_16;
                                                                      t = j_14;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm q_16 = t;
                                                    int r_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = d_14;
                                                        if((f_14 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_14);
                                                        t = j_0(t);
                                                        ;
                                                        LocalPopChoice(r_16);
                                                      }
                                                    else
                                                      {
                                                        t = q_16;
                                                        t = j_14;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    f_14 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm t_16 = t;
                                                      int y_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = d_14;
                                                          if((f_14 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_14);
                                                          t = j_0(t);
                                                          ;
                                                          LocalPopChoice(y_16);
                                                        }
                                                      else
                                                        {
                                                          t = t_16;
                                                          t = j_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_14 = ATgetArgument(t, 0);
                                                        g_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_16 = t;
                                                          int a_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                              t = j_0(t);
                                                              s_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_14, s_30);
                                                              t = j_0(t);
                                                              ;
                                                              LocalPopChoice(a_17);
                                                            }
                                                          else
                                                            {
                                                              t = z_16;
                                                              t = j_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = i_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm c_17 = t;
                                        int d_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_g_9;
                                            t = j_0(t);
                                            ;
                                            LocalPopChoice(d_17);
                                          }
                                        else
                                          {
                                            t = c_17;
                                            t = j_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_14 = ATgetArgument(t, 0);
                                            g_14 = ATgetArgument(t, 1);
                                            {
                                              ATerm e_17 = t;
                                              int p_17 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm f_31 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                  t = j_0(t);
                                                  f_31 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, f_31);
                                                  t = j_0(t);
                                                  ;
                                                  LocalPopChoice(p_17);
                                                }
                                              else
                                                {
                                                  t = e_17;
                                                  t = j_14;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                f_14 = ATgetArgument(t, 0);
                                                {
                                                  ATerm q_17 = t;
                                                  int s_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = d_14;
                                                      if((f_14 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, f_14);
                                                      t = j_0(t);
                                                      ;
                                                      LocalPopChoice(s_17);
                                                    }
                                                  else
                                                    {
                                                      t = q_17;
                                                      t = j_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    f_14 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm u_17 = t;
                                                      int v_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = d_14;
                                                          if((f_14 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_14);
                                                          t = j_0(t);
                                                          ;
                                                          LocalPopChoice(v_17);
                                                        }
                                                      else
                                                        {
                                                          t = u_17;
                                                          t = j_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_14 = ATgetArgument(t, 0);
                                                        g_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_17 = t;
                                                          int x_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                              t = j_0(t);
                                                              s_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_14, s_31);
                                                              t = j_0(t);
                                                              ;
                                                              LocalPopChoice(x_17);
                                                            }
                                                          else
                                                            {
                                                              t = w_17;
                                                              t = j_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_14;
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
                                d_14 = ATgetArgument(t, 0);
                                t = d_14;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    c_14 = ATgetArgument(t, 0);
                                    t = i_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm y_17 = t;
                                            int z_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_9;
                                                t = j_0(t);
                                                ;
                                                LocalPopChoice(z_17);
                                              }
                                            else
                                              {
                                                t = y_17;
                                                t = j_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_14 = ATgetArgument(t, 0);
                                                g_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm b_18 = t;
                                                  int c_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_32 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                      t = j_0(t);
                                                      n_32 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, n_32);
                                                      t = j_0(t);
                                                      ;
                                                      LocalPopChoice(c_18);
                                                    }
                                                  else
                                                    {
                                                      t = b_18;
                                                      t = j_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm d_18 = t;
                                                int e_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm f_18 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(e_18);
                                                    {
                                                      ATerm g_18 = t;
                                                      int h_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_14);
                                                          t = j_0(t);
                                                          ;
                                                          LocalPopChoice(h_18);
                                                        }
                                                      else
                                                        {
                                                          t = g_18;
                                                          t = j_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = d_18;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        f_14 = ATgetArgument(t, 0);
                                                        t = f_14;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            b_14 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm i_18 = t;
                                                              int j_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_32 = NULL;
                                                                  t = c_14;
                                                                  if((b_14 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, b_14);
                                                                  t = j_0(t);
                                                                  s_32 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, s_32);
                                                                  t = j_0(t);
                                                                  ;
                                                                  LocalPopChoice(j_18);
                                                                }
                                                              else
                                                                {
                                                                  t = i_18;
                                                                  t = j_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_14;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_14 = ATgetArgument(t, 0);
                                                            g_14 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm k_18 = t;
                                                              int l_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_32 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                                  t = j_0(t);
                                                                  y_32 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_14, y_32);
                                                                  t = j_0(t);
                                                                  ;
                                                                  LocalPopChoice(l_18);
                                                                }
                                                              else
                                                                {
                                                                  t = k_18;
                                                                  t = j_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_14;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm m_18 = t;
                                            int n_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_9;
                                                t = j_0(t);
                                                ;
                                                LocalPopChoice(n_18);
                                              }
                                            else
                                              {
                                                t = m_18;
                                                t = j_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_14 = ATgetArgument(t, 0);
                                                g_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm o_18 = t;
                                                  int p_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_33 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                      t = j_0(t);
                                                      h_33 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, h_33);
                                                      t = j_0(t);
                                                      ;
                                                      LocalPopChoice(p_18);
                                                    }
                                                  else
                                                    {
                                                      t = o_18;
                                                      t = j_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm q_18 = t;
                                                int r_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm s_18 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(r_18);
                                                    {
                                                      ATerm t_18 = t;
                                                      int u_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_14);
                                                          t = j_0(t);
                                                          ;
                                                          LocalPopChoice(u_18);
                                                        }
                                                      else
                                                        {
                                                          t = t_18;
                                                          t = j_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = q_18;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_14 = ATgetArgument(t, 0);
                                                        g_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm v_18 = t;
                                                          int w_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                              t = j_0(t);
                                                              q_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_14, q_33);
                                                              t = j_0(t);
                                                              ;
                                                              LocalPopChoice(w_18);
                                                            }
                                                          else
                                                            {
                                                              t = v_18;
                                                              t = j_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_14;
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
                                    d_14 = ATgetArgument(t, 0);
                                    e_14 = ATgetArgument(t, 1);
                                    z_13 = ATgetArgument(t, 2);
                                    t = i_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_18 = t;
                                            int y_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_9;
                                                t = j_0(t);
                                                ;
                                                LocalPopChoice(y_18);
                                              }
                                            else
                                              {
                                                t = x_18;
                                                t = j_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_14 = ATgetArgument(t, 0);
                                                g_14 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_18 = t;
                                                  int a_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_34 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                      t = j_0(t);
                                                      g_34 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, g_34);
                                                      t = j_0(t);
                                                      ;
                                                      LocalPopChoice(a_19);
                                                    }
                                                  else
                                                    {
                                                      t = z_18;
                                                      t = j_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm b_19 = t;
                                                int c_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm d_19 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(c_19);
                                                    {
                                                      ATerm e_19 = t;
                                                      int f_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, d_14, e_14, z_13);
                                                          t = j_0(t);
                                                          ;
                                                          LocalPopChoice(f_19);
                                                        }
                                                      else
                                                        {
                                                          t = e_19;
                                                          t = j_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_19;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_14 = ATgetArgument(t, 0);
                                                        g_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_19 = t;
                                                          int h_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                              t = j_0(t);
                                                              z_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_14, z_34);
                                                              t = j_0(t);
                                                              ;
                                                              LocalPopChoice(h_19);
                                                            }
                                                          else
                                                            {
                                                              t = g_19;
                                                              t = j_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_14;
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
                                        d_14 = ATgetArgument(t, 0);
                                        e_14 = ATgetArgument(t, 1);
                                        t = i_14;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = h_14;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm i_19 = t;
                                                int j_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_g_9;
                                                    t = j_0(t);
                                                    ;
                                                    LocalPopChoice(j_19);
                                                  }
                                                else
                                                  {
                                                    t = i_19;
                                                    {
                                                      ATerm k_19 = t;
                                                      int l_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_35 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_14, e_14);
                                                          t = j_0(t);
                                                          t_35 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, d_14, t_35);
                                                          t = j_0(t);
                                                          ;
                                                          LocalPopChoice(l_19);
                                                        }
                                                      else
                                                        {
                                                          t = k_19;
                                                          t = j_14;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    f_14 = ATgetArgument(t, 0);
                                                    g_14 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm m_19 = t;
                                                      int n_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_36 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                          t = j_0(t);
                                                          a_36 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, a_36);
                                                          t = j_0(t);
                                                          ;
                                                          LocalPopChoice(n_19);
                                                        }
                                                      else
                                                        {
                                                          t = m_19;
                                                          {
                                                            ATerm o_19 = t;
                                                            int p_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm h_36 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_14, e_14);
                                                                t = j_0(t);
                                                                h_36 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, d_14, h_36);
                                                                t = j_0(t);
                                                                ;
                                                                LocalPopChoice(p_19);
                                                              }
                                                            else
                                                              {
                                                                t = o_19;
                                                                t = j_14;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_14 = ATgetArgument(t, 0);
                                                        g_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_19 = t;
                                                          int r_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_14, e_14);
                                                              t = j_0(t);
                                                              q_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, d_14, q_36);
                                                              t = j_0(t);
                                                              ;
                                                              LocalPopChoice(r_19);
                                                            }
                                                          else
                                                            {
                                                              t = q_19;
                                                              {
                                                                ATerm s_19 = t;
                                                                int t_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm w_36 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                                    t = j_0(t);
                                                                    w_36 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, f_14, w_36);
                                                                    t = j_0(t);
                                                                    ;
                                                                    LocalPopChoice(t_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = s_19;
                                                                    t = j_14;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm u_19 = t;
                                                        int v_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm b_37 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, i_14, e_14);
                                                            t = j_0(t);
                                                            b_37 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, d_14, b_37);
                                                            t = j_0(t);
                                                            ;
                                                            LocalPopChoice(v_19);
                                                          }
                                                        else
                                                          {
                                                            t = u_19;
                                                            t = j_14;
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
                                            d_14 = ATgetArgument(t, 0);
                                            e_14 = ATgetArgument(t, 1);
                                            t = i_14;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = h_14;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm w_19 = t;
                                                    int x_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_g_9;
                                                        t = j_0(t);
                                                        ;
                                                        LocalPopChoice(x_19);
                                                      }
                                                    else
                                                      {
                                                        t = w_19;
                                                        {
                                                          ATerm y_19 = t;
                                                          int z_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_14, e_14);
                                                              t = j_0(t);
                                                              r_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, d_14, r_37);
                                                              t = j_0(t);
                                                              ;
                                                              LocalPopChoice(z_19);
                                                            }
                                                          else
                                                            {
                                                              t = y_19;
                                                              t = j_14;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        f_14 = ATgetArgument(t, 0);
                                                        g_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_20 = t;
                                                          int b_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                              t = j_0(t);
                                                              w_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, w_37);
                                                              t = j_0(t);
                                                              ;
                                                              LocalPopChoice(b_20);
                                                            }
                                                          else
                                                            {
                                                              t = a_20;
                                                              {
                                                                ATerm c_20 = t;
                                                                int d_20 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm c_38 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, i_14, e_14);
                                                                    t = j_0(t);
                                                                    c_38 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, d_14, c_38);
                                                                    t = j_0(t);
                                                                    ;
                                                                    LocalPopChoice(d_20);
                                                                  }
                                                                else
                                                                  {
                                                                    t = c_20;
                                                                    t = j_14;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_14 = ATgetArgument(t, 0);
                                                            g_14 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm e_20 = t;
                                                              int f_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_38 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_14, e_14);
                                                                  t = j_0(t);
                                                                  h_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, d_14, h_38);
                                                                  t = j_0(t);
                                                                  ;
                                                                  LocalPopChoice(f_20);
                                                                }
                                                              else
                                                                {
                                                                  t = e_20;
                                                                  {
                                                                    ATerm h_20 = t;
                                                                    int i_20 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm l_38 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                                        t = j_0(t);
                                                                        l_38 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, f_14, l_38);
                                                                        t = j_0(t);
                                                                        ;
                                                                        LocalPopChoice(i_20);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_20;
                                                                        t = j_14;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm j_20 = t;
                                                            int k_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm r_38 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_14, e_14);
                                                                t = j_0(t);
                                                                r_38 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, d_14, r_38);
                                                                t = j_0(t);
                                                                ;
                                                                LocalPopChoice(k_20);
                                                              }
                                                            else
                                                              {
                                                                t = j_20;
                                                                t = j_14;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = i_14;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = h_14;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm l_20 = t;
                                                    int m_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_g_9;
                                                        t = j_0(t);
                                                        ;
                                                        LocalPopChoice(m_20);
                                                      }
                                                    else
                                                      {
                                                        t = l_20;
                                                        t = j_14;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        f_14 = ATgetArgument(t, 0);
                                                        g_14 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_20 = t;
                                                          int o_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_39 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                              t = j_0(t);
                                                              b_39 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, b_39);
                                                              t = j_0(t);
                                                              ;
                                                              LocalPopChoice(o_20);
                                                            }
                                                          else
                                                            {
                                                              t = n_20;
                                                              t = j_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_14 = ATgetArgument(t, 0);
                                                            g_14 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm p_20 = t;
                                                              int q_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_39 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_14, h_14);
                                                                  t = j_0(t);
                                                                  h_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_14, h_39);
                                                                  t = j_0(t);
                                                                  ;
                                                                  LocalPopChoice(q_20);
                                                                }
                                                              else
                                                                {
                                                                  t = p_20;
                                                                  t = j_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_14;
                                                          }
                                                      }
                                                  }
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
                    i_14 = ATgetArgument(t, 0);
                    h_14 = ATgetArgument(t, 1);
                    t = h_14;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = i_14;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm r_20 = t;
                            int x_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_b_9;
                                t = j_0(t);
                                ;
                                LocalPopChoice(x_20);
                              }
                            else
                              {
                                t = r_20;
                                t = i_14;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = h_14;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    f_14 = ATgetArgument(t, 0);
                                    g_14 = ATgetArgument(t, 1);
                                    t = i_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        f_14 = ATgetArgument(t, 0);
                                        t = i_14;
                                      }
                                    else
                                      {
                                        t = i_14;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = i_14;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm y_20 = t;
                            int z_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_b_9;
                                t = j_0(t);
                                ;
                                LocalPopChoice(z_20);
                              }
                            else
                              {
                                t = y_20;
                                {
                                  ATerm a_21 = t;
                                  int b_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = h_14;
                                      if((i_14 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(b_21);
                                    }
                                  else
                                    {
                                      t = a_21;
                                      t = j_14;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = h_14;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    f_14 = ATgetArgument(t, 0);
                                    g_14 = ATgetArgument(t, 1);
                                    {
                                      ATerm c_21 = t;
                                      int g_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm z_40 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, g_14, h_14);
                                          t = j_0(t);
                                          z_40 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, f_14, z_40);
                                          t = j_0(t);
                                          ;
                                          LocalPopChoice(g_21);
                                        }
                                      else
                                        {
                                          t = c_21;
                                          {
                                            ATerm h_21 = t;
                                            int i_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = h_14;
                                                if((i_14 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(i_21);
                                              }
                                            else
                                              {
                                                t = h_21;
                                                t = j_14;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        f_14 = ATgetArgument(t, 0);
                                        {
                                          ATerm j_21 = t;
                                          int k_21 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = h_14;
                                              if((i_14 != t))
                                                {
                                                  _fail(t);
                                                }
                                              ;
                                              LocalPopChoice(k_21);
                                            }
                                          else
                                            {
                                              t = j_21;
                                              {
                                                ATerm m_21 = t;
                                                int n_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = z_55(f_14, t);
                                                    ;
                                                    LocalPopChoice(n_21);
                                                  }
                                                else
                                                  {
                                                    t = m_21;
                                                    t = j_14;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm o_21 = t;
                                        int q_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = h_14;
                                            if((i_14 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(q_21);
                                          }
                                        else
                                          {
                                            t = o_21;
                                            t = j_14;
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
                        i_14 = ATgetArgument(t, 0);
                        h_14 = ATgetArgument(t, 1);
                        t = h_14;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = i_14;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm r_21 = t;
                                int s_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_b_9;
                                    t = j_0(t);
                                    ;
                                    LocalPopChoice(s_21);
                                  }
                                else
                                  {
                                    t = r_21;
                                    t = h_14;
                                  }
                              }
                            else
                              {
                                ATerm t_21 = t;
                                int u_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_b_9;
                                    t = j_0(t);
                                    ;
                                    LocalPopChoice(u_21);
                                  }
                                else
                                  {
                                    t = t_21;
                                    t = j_14;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = i_14;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm v_21 = t;
                                    int w_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_g_9;
                                        t = j_0(t);
                                        ;
                                        LocalPopChoice(w_21);
                                      }
                                    else
                                      {
                                        t = v_21;
                                        t = h_14;
                                      }
                                  }
                                else
                                  {
                                    ATerm x_21 = t;
                                    int y_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_g_9;
                                        t = j_0(t);
                                        ;
                                        LocalPopChoice(y_21);
                                      }
                                    else
                                      {
                                        t = x_21;
                                        t = j_14;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    d_14 = ATgetArgument(t, 0);
                                    e_14 = ATgetArgument(t, 1);
                                    t = i_14;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = h_14;
                                      }
                                    else
                                      {
                                        ATerm z_21 = t;
                                        int a_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm a_42 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, i_14, d_14);
                                            t = conc_0_0(t);
                                            a_42 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, a_42, e_14);
                                            t = bottomup_1_0(j_0, t);
                                            ;
                                            LocalPopChoice(a_22);
                                          }
                                        else
                                          {
                                            t = z_21;
                                            t = j_14;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_14;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = h_14;
                                      }
                                    else
                                      {
                                        t = j_14;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm c_22 = t;
                        int d_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm e_22 = ATgetArgument(t, 0);
                                h_14 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(d_22);
                            t = h_14;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm f_22 = t;
                                int h_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_b_9;
                                    t = j_0(t);
                                    ;
                                    LocalPopChoice(h_22);
                                  }
                                else
                                  {
                                    t = f_22;
                                    t = j_14;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm i_22 = t;
                                    int j_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_g_9;
                                        t = j_0(t);
                                        ;
                                        LocalPopChoice(j_22);
                                      }
                                    else
                                      {
                                        t = i_22;
                                        t = j_14;
                                      }
                                  }
                                else
                                  {
                                    t = j_14;
                                  }
                              }
                          }
                        else
                          {
                            t = c_22;
                            if(match_cons(t, sym_All_1))
                              {
                                i_14 = ATgetArgument(t, 0);
                                t = i_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm k_22 = t;
                                    int m_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_b_9;
                                        t = j_0(t);
                                        ;
                                        LocalPopChoice(m_22);
                                      }
                                    else
                                      {
                                        t = k_22;
                                        t = j_14;
                                      }
                                  }
                                else
                                  {
                                    t = j_14;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    i_14 = ATgetArgument(t, 0);
                                    t = i_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm n_22 = t;
                                        int o_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_b_9;
                                            t = j_0(t);
                                            ;
                                            LocalPopChoice(o_22);
                                          }
                                        else
                                          {
                                            t = n_22;
                                            {
                                              ATerm p_22 = t;
                                              int q_22 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm t_42 = NULL,v_42 = NULL,w_42 = NULL,z_42 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,p_43 = NULL;
                                                  t = j_14;
                                                  t = new_0_0(t);
                                                  t_42 = t;
                                                  t = bottomup_1_0(j_0, t);
                                                  l_43 = t;
                                                  t = (ATerm) ATempty;
                                                  t = j_0(t);
                                                  p_43 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(p_43), l_43);
                                                  t = j_0(t);
                                                  v_42 = t;
                                                  t = t_42;
                                                  t = bottomup_1_0(j_0, t);
                                                  k_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, k_43);
                                                  t = j_0(t);
                                                  j_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, j_43);
                                                  t = j_0(t);
                                                  z_42 = t;
                                                  t = i_14;
                                                  t = bottomup_1_0(j_0, t);
                                                  d_43 = t;
                                                  t = t_42;
                                                  t = bottomup_1_0(j_0, t);
                                                  i_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, i_43);
                                                  t = j_0(t);
                                                  f_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, f_43);
                                                  t = j_0(t);
                                                  e_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_43, e_43);
                                                  t = j_0(t);
                                                  c_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_42, c_43);
                                                  t = j_0(t);
                                                  w_42 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, v_42, w_42);
                                                  t = j_0(t);
                                                  ;
                                                  LocalPopChoice(q_22);
                                                }
                                              else
                                                {
                                                  t = p_22;
                                                  t = j_14;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm r_22 = t;
                                            int s_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_9;
                                                t = j_0(t);
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
                                                      ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL;
                                                      t = j_14;
                                                      t = new_0_0(t);
                                                      v_43 = t;
                                                      t = bottomup_1_0(j_0, t);
                                                      g_44 = t;
                                                      t = (ATerm) ATempty;
                                                      t = j_0(t);
                                                      h_44 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(h_44), g_44);
                                                      t = j_0(t);
                                                      w_43 = t;
                                                      t = v_43;
                                                      t = bottomup_1_0(j_0, t);
                                                      f_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, f_44);
                                                      t = j_0(t);
                                                      e_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, e_44);
                                                      t = j_0(t);
                                                      y_43 = t;
                                                      t = i_14;
                                                      t = bottomup_1_0(j_0, t);
                                                      a_44 = t;
                                                      t = v_43;
                                                      t = bottomup_1_0(j_0, t);
                                                      d_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, d_44);
                                                      t = j_0(t);
                                                      c_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, c_44);
                                                      t = j_0(t);
                                                      b_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_44, b_44);
                                                      t = j_0(t);
                                                      z_43 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_43, z_43);
                                                      t = j_0(t);
                                                      x_43 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, w_43, x_43);
                                                      t = j_0(t);
                                                      ;
                                                      LocalPopChoice(u_22);
                                                    }
                                                  else
                                                    {
                                                      t = t_22;
                                                      t = j_14;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_14 = ATgetArgument(t, 0);
                                                g_14 = ATgetArgument(t, 1);
                                                t = g_14;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    q_13 = ATgetArgument(t, 0);
                                                    s_13 = ATgetArgument(t, 1);
                                                    t = q_13;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        r_13 = ATgetArgument(t, 0);
                                                        t = f_14;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            b_14 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm v_22 = t;
                                                              int w_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, r_13);
                                                                  t = j_0(t);
                                                                  o_44 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_44, s_13);
                                                                  t = j_0(t);
                                                                  n_44 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, n_44);
                                                                  t = j_0(t);
                                                                  m_44 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, m_44);
                                                                  t = j_0(t);
                                                                  ;
                                                                  LocalPopChoice(w_22);
                                                                }
                                                              else
                                                                {
                                                                  t = v_22;
                                                                  {
                                                                    ATerm x_22 = t;
                                                                    int y_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
                                                                        t = j_14;
                                                                        t = new_0_0(t);
                                                                        q_44 = t;
                                                                        t = bottomup_1_0(j_0, t);
                                                                        v_45 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = j_0(t);
                                                                        w_45 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(w_45), v_45);
                                                                        t = j_0(t);
                                                                        r_44 = t;
                                                                        t = q_44;
                                                                        t = bottomup_1_0(j_0, t);
                                                                        u_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, u_45);
                                                                        t = j_0(t);
                                                                        t_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, t_45);
                                                                        t = j_0(t);
                                                                        t_44 = t;
                                                                        t = i_14;
                                                                        t = bottomup_1_0(j_0, t);
                                                                        p_45 = t;
                                                                        t = q_44;
                                                                        t = bottomup_1_0(j_0, t);
                                                                        s_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, s_45);
                                                                        t = j_0(t);
                                                                        r_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, r_45);
                                                                        t = j_0(t);
                                                                        q_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, p_45, q_45);
                                                                        t = j_0(t);
                                                                        o_45 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_44, o_45);
                                                                        t = j_0(t);
                                                                        s_44 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, r_44, s_44);
                                                                        t = j_0(t);
                                                                        ;
                                                                        LocalPopChoice(y_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_22;
                                                                        t = j_14;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm z_22 = t;
                                                            int b_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL;
                                                                t = j_14;
                                                                t = new_0_0(t);
                                                                z_45 = t;
                                                                t = bottomup_1_0(j_0, t);
                                                                k_46 = t;
                                                                t = (ATerm) ATempty;
                                                                t = j_0(t);
                                                                l_46 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(l_46), k_46);
                                                                t = j_0(t);
                                                                a_46 = t;
                                                                t = z_45;
                                                                t = bottomup_1_0(j_0, t);
                                                                j_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, j_46);
                                                                t = j_0(t);
                                                                i_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, i_46);
                                                                t = j_0(t);
                                                                c_46 = t;
                                                                t = i_14;
                                                                t = bottomup_1_0(j_0, t);
                                                                e_46 = t;
                                                                t = z_45;
                                                                t = bottomup_1_0(j_0, t);
                                                                h_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, h_46);
                                                                t = j_0(t);
                                                                g_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, g_46);
                                                                t = j_0(t);
                                                                f_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, e_46, f_46);
                                                                t = j_0(t);
                                                                d_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_46, d_46);
                                                                t = j_0(t);
                                                                b_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, a_46, b_46);
                                                                t = j_0(t);
                                                                ;
                                                                LocalPopChoice(b_23);
                                                              }
                                                            else
                                                              {
                                                                t = z_22;
                                                                t = j_14;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = f_14;
                                                        {
                                                          ATerm c_23 = t;
                                                          int d_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL;
                                                              t = j_14;
                                                              t = new_0_0(t);
                                                              o_46 = t;
                                                              t = bottomup_1_0(j_0, t);
                                                              z_46 = t;
                                                              t = (ATerm) ATempty;
                                                              t = j_0(t);
                                                              a_47 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(a_47), z_46);
                                                              t = j_0(t);
                                                              p_46 = t;
                                                              t = o_46;
                                                              t = bottomup_1_0(j_0, t);
                                                              y_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, y_46);
                                                              t = j_0(t);
                                                              x_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, x_46);
                                                              t = j_0(t);
                                                              r_46 = t;
                                                              t = i_14;
                                                              t = bottomup_1_0(j_0, t);
                                                              t_46 = t;
                                                              t = o_46;
                                                              t = bottomup_1_0(j_0, t);
                                                              w_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, w_46);
                                                              t = j_0(t);
                                                              v_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, v_46);
                                                              t = j_0(t);
                                                              u_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_46, u_46);
                                                              t = j_0(t);
                                                              s_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, r_46, s_46);
                                                              t = j_0(t);
                                                              q_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, p_46, q_46);
                                                              t = j_0(t);
                                                              ;
                                                              LocalPopChoice(d_23);
                                                            }
                                                          else
                                                            {
                                                              t = c_23;
                                                              t = j_14;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = f_14;
                                                    {
                                                      ATerm e_23 = t;
                                                      int g_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,q_47 = NULL;
                                                          t = j_14;
                                                          t = new_0_0(t);
                                                          d_47 = t;
                                                          t = bottomup_1_0(j_0, t);
                                                          o_47 = t;
                                                          t = (ATerm) ATempty;
                                                          t = j_0(t);
                                                          q_47 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(q_47), o_47);
                                                          t = j_0(t);
                                                          e_47 = t;
                                                          t = d_47;
                                                          t = bottomup_1_0(j_0, t);
                                                          n_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, n_47);
                                                          t = j_0(t);
                                                          m_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, m_47);
                                                          t = j_0(t);
                                                          g_47 = t;
                                                          t = i_14;
                                                          t = bottomup_1_0(j_0, t);
                                                          i_47 = t;
                                                          t = d_47;
                                                          t = bottomup_1_0(j_0, t);
                                                          l_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, l_47);
                                                          t = j_0(t);
                                                          k_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, k_47);
                                                          t = j_0(t);
                                                          j_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_47, j_47);
                                                          t = j_0(t);
                                                          h_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_47, h_47);
                                                          t = j_0(t);
                                                          f_47 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, e_47, f_47);
                                                          t = j_0(t);
                                                          ;
                                                          LocalPopChoice(g_23);
                                                        }
                                                      else
                                                        {
                                                          t = e_23;
                                                          t = j_14;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    f_14 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm h_23 = t;
                                                      int i_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, f_14);
                                                          t = j_0(t);
                                                          ;
                                                          LocalPopChoice(i_23);
                                                        }
                                                      else
                                                        {
                                                          t = h_23;
                                                          {
                                                            ATerm j_23 = t;
                                                            int l_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm v_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,f_48 = NULL,g_48 = NULL,i_48 = NULL,j_48 = NULL,l_48 = NULL,p_48 = NULL;
                                                                t = j_14;
                                                                t = new_0_0(t);
                                                                v_47 = t;
                                                                t = bottomup_1_0(j_0, t);
                                                                l_48 = t;
                                                                t = (ATerm) ATempty;
                                                                t = j_0(t);
                                                                p_48 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(p_48), l_48);
                                                                t = j_0(t);
                                                                y_47 = t;
                                                                t = v_47;
                                                                t = bottomup_1_0(j_0, t);
                                                                j_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, j_48);
                                                                t = j_0(t);
                                                                i_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, i_48);
                                                                t = j_0(t);
                                                                a_48 = t;
                                                                t = i_14;
                                                                t = bottomup_1_0(j_0, t);
                                                                c_48 = t;
                                                                t = v_47;
                                                                t = bottomup_1_0(j_0, t);
                                                                g_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, g_48);
                                                                t = j_0(t);
                                                                f_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, f_48);
                                                                t = j_0(t);
                                                                d_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_48, d_48);
                                                                t = j_0(t);
                                                                b_48 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_48, b_48);
                                                                t = j_0(t);
                                                                z_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, y_47, z_47);
                                                                t = j_0(t);
                                                                ;
                                                                LocalPopChoice(l_23);
                                                              }
                                                            else
                                                              {
                                                                t = j_23;
                                                                t = j_14;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm m_23 = t;
                                                    int n_23 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL;
                                                        t = j_14;
                                                        t = new_0_0(t);
                                                        s_48 = t;
                                                        t = bottomup_1_0(j_0, t);
                                                        d_49 = t;
                                                        t = (ATerm) ATempty;
                                                        t = j_0(t);
                                                        e_49 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(e_49), d_49);
                                                        t = j_0(t);
                                                        t_48 = t;
                                                        t = s_48;
                                                        t = bottomup_1_0(j_0, t);
                                                        c_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, c_49);
                                                        t = j_0(t);
                                                        b_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, b_49);
                                                        t = j_0(t);
                                                        v_48 = t;
                                                        t = i_14;
                                                        t = bottomup_1_0(j_0, t);
                                                        x_48 = t;
                                                        t = s_48;
                                                        t = bottomup_1_0(j_0, t);
                                                        a_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, a_49);
                                                        t = j_0(t);
                                                        z_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, z_48);
                                                        t = j_0(t);
                                                        y_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_48, y_48);
                                                        t = j_0(t);
                                                        w_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_48, w_48);
                                                        t = j_0(t);
                                                        u_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, t_48, u_48);
                                                        t = j_0(t);
                                                        ;
                                                        LocalPopChoice(n_23);
                                                      }
                                                    else
                                                      {
                                                        t = m_23;
                                                        t = j_14;
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
                                        i_14 = ATgetArgument(t, 0);
                                        t = i_14;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm o_23 = t;
                                            int p_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_b_9;
                                                t = j_0(t);
                                                ;
                                                LocalPopChoice(p_23);
                                              }
                                            else
                                              {
                                                t = o_23;
                                                t = j_14;
                                              }
                                          }
                                        else
                                          {
                                            t = j_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            i_14 = ATgetArgument(t, 0);
                                            t = i_14;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm q_23 = t;
                                                int r_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_g_9;
                                                    t = j_0(t);
                                                    ;
                                                    LocalPopChoice(r_23);
                                                  }
                                                else
                                                  {
                                                    t = q_23;
                                                    t = j_14;
                                                  }
                                              }
                                            else
                                              {
                                                t = j_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                i_14 = ATgetArgument(t, 0);
                                                t = i_14;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm s_23 = t;
                                                    int t_23 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_g_9;
                                                        t = j_0(t);
                                                        ;
                                                        LocalPopChoice(t_23);
                                                      }
                                                    else
                                                      {
                                                        t = s_23;
                                                        t = j_14;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = j_14;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm u_23 = t;
                                                int v_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm w_23 = ATgetArgument(t, 0);
                                                        h_14 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(v_23);
                                                    t = h_14;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm x_23 = t;
                                                        int z_23 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_g_9;
                                                            t = j_0(t);
                                                            ;
                                                            LocalPopChoice(z_23);
                                                          }
                                                        else
                                                          {
                                                            t = x_23;
                                                            t = j_14;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = j_14;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = u_23;
                                                    {
                                                      ATerm a_24 = t;
                                                      int b_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm c_24 = ATgetArgument(t, 0);
                                                              h_14 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(b_24);
                                                          {
                                                            ATerm d_24 = t;
                                                            int e_24 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = h_14;
                                                                t = fetch_1_0(t_1, t);
                                                                t = term_g_9;
                                                                t = bottomup_1_0(j_0, t);
                                                                ;
                                                                LocalPopChoice(e_24);
                                                              }
                                                            else
                                                              {
                                                                t = d_24;
                                                                t = j_14;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = a_24;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              i_14 = ATgetArgument(t, 0);
                                                              h_14 = ATgetArgument(t, 1);
                                                              t = h_14;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = i_14;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = h_14;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          f_14 = ATgetArgument(t, 0);
                                                                          g_14 = ATgetArgument(t, 1);
                                                                          t = i_14;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = i_14;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = i_14;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = h_14;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          f_14 = ATgetArgument(t, 0);
                                                                          g_14 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm f_24 = t;
                                                                            int g_24 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm k_50 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, g_14, h_14);
                                                                                t = j_0(t);
                                                                                k_50 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, f_14, k_50);
                                                                                t = j_0(t);
                                                                                ;
                                                                                LocalPopChoice(g_24);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = f_24;
                                                                                {
                                                                                  ATerm h_24 = t;
                                                                                  int i_24 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = h_14;
                                                                                      if((i_14 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(i_24);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = h_24;
                                                                                      t = j_14;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm k_24 = t;
                                                                          int l_24 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = h_14;
                                                                              if((i_14 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(l_24);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_24;
                                                                              t = j_14;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  i_14 = ATgetArgument(t, 0);
                                                                  h_14 = ATgetArgument(t, 1);
                                                                  p_13 = ATgetArgument(t, 2);
                                                                  t = p_13;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm m_24 = t;
                                                                      int n_24 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_14, h_14);
                                                                          t = j_0(t);
                                                                          ;
                                                                          LocalPopChoice(n_24);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = m_24;
                                                                          t = j_14;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = j_14;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      i_14 = ATgetArgument(t, 0);
                                                                      h_14 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm o_24 = t;
                                                                        int p_24 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, i_14, h_14);
                                                                            t = j_0(t);
                                                                            ;
                                                                            LocalPopChoice(p_24);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = o_24;
                                                                            t = j_14;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          i_14 = ATgetArgument(t, 0);
                                                                          t = i_14;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              f_14 = ATgetFirst((ATermList) t);
                                                                              g_14 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm q_24 = t;
                                                                                int r_24 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm a_51 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, g_14);
                                                                                    t = j_0(t);
                                                                                    a_51 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, f_14, a_51);
                                                                                    t = j_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(r_24);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_24;
                                                                                    t = j_14;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm s_24 = t;
                                                                                  int t_24 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_g_9;
                                                                                      t = j_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(t_24);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = s_24;
                                                                                      t = j_14;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = j_14;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              i_14 = ATgetArgument(t, 0);
                                                                              t = i_14;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  f_14 = ATgetFirst((ATermList) t);
                                                                                  g_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm v_24 = t;
                                                                                    int w_24 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm g_51 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, g_14);
                                                                                        t = j_0(t);
                                                                                        g_51 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, f_14, g_51);
                                                                                        t = j_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(w_24);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = v_24;
                                                                                        t = j_14;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm x_24 = t;
                                                                                      int a_25 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_g_9;
                                                                                          t = j_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(a_25);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_24;
                                                                                          t = j_14;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_14;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  i_14 = ATgetArgument(t, 0);
                                                                                  t = i_14;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      f_14 = ATgetFirst((ATermList) t);
                                                                                      g_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm b_25 = t;
                                                                                        int c_25 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm o_51 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, g_14);
                                                                                            t = j_0(t);
                                                                                            o_51 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, o_51);
                                                                                            t = j_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(c_25);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = b_25;
                                                                                            t = j_14;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm d_25 = t;
                                                                                          int e_25 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_b_9;
                                                                                              t = j_0(t);
                                                                                              ;
                                                                                              LocalPopChoice(e_25);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = d_25;
                                                                                              t = j_14;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_14;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_RDefT_4))
                                                                                    {
                                                                                      i_14 = ATgetArgument(t, 0);
                                                                                      h_14 = ATgetArgument(t, 1);
                                                                                      p_13 = ATgetArgument(t, 2);
                                                                                      o_13 = ATgetArgument(t, 3);
                                                                                      {
                                                                                        ATerm f_25 = t;
                                                                                        int g_25 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm w_51 = NULL,y_51 = NULL;
                                                                                            t = h_14;
                                                                                            t = map1_1_0(u_1, t);
                                                                                            w_51 = t;
                                                                                            t = p_13;
                                                                                            t = map1_1_0(v_1, t);
                                                                                            y_51 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, i_14, w_51, y_51, o_13);
                                                                                            t = bottomup_1_0(j_0, t);
                                                                                            ;
                                                                                            LocalPopChoice(g_25);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = f_25;
                                                                                            t = j_14;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefT_4))
                                                                                        {
                                                                                          i_14 = ATgetArgument(t, 0);
                                                                                          h_14 = ATgetArgument(t, 1);
                                                                                          p_13 = ATgetArgument(t, 2);
                                                                                          o_13 = ATgetArgument(t, 3);
                                                                                          {
                                                                                            ATerm i_25 = t;
                                                                                            int j_25 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm k_52 = NULL,m_52 = NULL;
                                                                                                t = p_13;
                                                                                                t = map1_1_0(w_1, t);
                                                                                                k_52 = t;
                                                                                                t = h_14;
                                                                                                t = map_1_0(x_1, t);
                                                                                                m_52 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, i_14, m_52, k_52, o_13);
                                                                                                t = bottomup_1_0(j_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(j_25);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = i_25;
                                                                                                {
                                                                                                  ATerm k_25 = t;
                                                                                                  int l_25 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm w_52 = NULL,y_52 = NULL;
                                                                                                      t = h_14;
                                                                                                      t = map1_1_0(z_1, t);
                                                                                                      w_52 = t;
                                                                                                      t = p_13;
                                                                                                      t = map_1_0(c_2, t);
                                                                                                      y_52 = t;
                                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, i_14, w_52, y_52, o_13);
                                                                                                      t = bottomup_1_0(j_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(l_25);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = k_25;
                                                                                                      t = j_14;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_InfixApp_3))
                                                                                            {
                                                                                              i_14 = ATgetArgument(t, 0);
                                                                                              h_14 = ATgetArgument(t, 1);
                                                                                              p_13 = ATgetArgument(t, 2);
                                                                                              {
                                                                                                ATerm m_25 = t;
                                                                                                int n_25 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL;
                                                                                                    t = term_o_25;
                                                                                                    t = bottomup_1_0(j_0, t);
                                                                                                    k_53 = t;
                                                                                                    t = (ATerm) ATempty;
                                                                                                    t = j_0(t);
                                                                                                    n_53 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(n_53), p_13);
                                                                                                    t = j_0(t);
                                                                                                    m_53 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(m_53), i_14);
                                                                                                    t = j_0(t);
                                                                                                    l_53 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, k_53, l_53);
                                                                                                    t = j_0(t);
                                                                                                    j_53 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_App_2, h_14, j_53);
                                                                                                    t = j_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(n_25);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = m_25;
                                                                                                    t = j_14;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_BAM_3))
                                                                                                {
                                                                                                  i_14 = ATgetArgument(t, 0);
                                                                                                  h_14 = ATgetArgument(t, 1);
                                                                                                  p_13 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm p_25 = t;
                                                                                                    int q_25 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, h_14);
                                                                                                        t = j_0(t);
                                                                                                        t_53 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, p_13);
                                                                                                        t = j_0(t);
                                                                                                        w_53 = t;
                                                                                                        t = (ATerm) ATempty;
                                                                                                        t = j_0(t);
                                                                                                        x_53 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(x_53), w_53);
                                                                                                        t = j_0(t);
                                                                                                        v_53 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(v_53), i_14);
                                                                                                        t = j_0(t);
                                                                                                        u_53 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(u_53), t_53);
                                                                                                        t = j_0(t);
                                                                                                        s_53 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, s_53);
                                                                                                        t = j_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(q_25);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = p_25;
                                                                                                        t = j_14;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                    {
                                                                                                      i_14 = ATgetArgument(t, 0);
                                                                                                      h_14 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm r_25 = t;
                                                                                                        int s_25 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm b_54 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, h_14);
                                                                                                            t = j_0(t);
                                                                                                            b_54 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, i_14, b_54);
                                                                                                            t = j_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(s_25);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = r_25;
                                                                                                            t = j_14;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_MA_2))
                                                                                                        {
                                                                                                          i_14 = ATgetArgument(t, 0);
                                                                                                          h_14 = ATgetArgument(t, 1);
                                                                                                          {
                                                                                                            ATerm t_25 = t;
                                                                                                            int u_25 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm f_54 = NULL;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, i_14);
                                                                                                                t = j_0(t);
                                                                                                                f_54 = t;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, f_54, h_14);
                                                                                                                t = j_0(t);
                                                                                                                ;
                                                                                                                LocalPopChoice(u_25);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = t_25;
                                                                                                                t = j_14;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_BA_2))
                                                                                                            {
                                                                                                              i_14 = ATgetArgument(t, 0);
                                                                                                              h_14 = ATgetArgument(t, 1);
                                                                                                              {
                                                                                                                ATerm w_25 = t;
                                                                                                                int x_25 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm j_54 = NULL;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, h_14);
                                                                                                                    t = j_0(t);
                                                                                                                    j_54 = t;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, j_54, i_14);
                                                                                                                    t = j_0(t);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(x_25);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = w_25;
                                                                                                                    t = j_14;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Let_2))
                                                                                                                {
                                                                                                                  i_14 = ATgetArgument(t, 0);
                                                                                                                  h_14 = ATgetArgument(t, 1);
                                                                                                                  t = h_14;
                                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                                    {
                                                                                                                      d_14 = ATgetArgument(t, 0);
                                                                                                                      e_14 = ATgetArgument(t, 1);
                                                                                                                      t = i_14;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = h_14;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          ATerm y_25 = t;
                                                                                                                          int z_25 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm u_54 = NULL;
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, i_14, d_14);
                                                                                                                              t = conc_0_0(t);
                                                                                                                              u_54 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Let_2, u_54, e_14);
                                                                                                                              t = bottomup_1_0(j_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(z_25);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = y_25;
                                                                                                                              t = j_14;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_CallT_3))
                                                                                                                        {
                                                                                                                          d_14 = ATgetArgument(t, 0);
                                                                                                                          e_14 = ATgetArgument(t, 1);
                                                                                                                          z_13 = ATgetArgument(t, 2);
                                                                                                                          t = z_13;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = e_14;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = d_14;
                                                                                                                                  if(match_cons(t, sym_SVar_1))
                                                                                                                                    {
                                                                                                                                      c_14 = ATgetArgument(t, 0);
                                                                                                                                      t = i_14;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = h_14;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              f_14 = ATgetFirst((ATermList) t);
                                                                                                                                              g_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                              t = g_14;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = f_14;
                                                                                                                                                  if(match_cons(t, sym_SDefT_4))
                                                                                                                                                    {
                                                                                                                                                      b_14 = ATgetArgument(t, 0);
                                                                                                                                                      w_13 = ATgetArgument(t, 1);
                                                                                                                                                      t_13 = ATgetArgument(t, 2);
                                                                                                                                                      u_13 = ATgetArgument(t, 3);
                                                                                                                                                      t = t_13;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                        {
                                                                                                                                                          t = w_13;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                            {
                                                                                                                                                              ATerm a_26 = t;
                                                                                                                                                              int b_26 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = c_14;
                                                                                                                                                                  if((b_14 != t))
                                                                                                                                                                    {
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    }
                                                                                                                                                                  t = u_13;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm c_26 = t;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm d_2 (ATerm t)
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_CallT_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm e_26 = ATgetArgument(t, 0);
                                                                                                                                                                              if(match_cons(e_26, sym_SVar_1))
                                                                                                                                                                                {
                                                                                                                                                                                  if(((b_14 != NULL) && (b_14 != ATgetArgument(e_26, 0))))
                                                                                                                                                                                    _fail(ATgetArgument(e_26, 0));
                                                                                                                                                                                  else
                                                                                                                                                                                    b_14 = ATgetArgument(e_26, 0);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              {
                                                                                                                                                                                ATerm f_26 = ATgetArgument(t, 1);
                                                                                                                                                                                if(((ATgetType(f_26) != AT_LIST) || !(ATisEmpty(f_26))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                              {
                                                                                                                                                                                ATerm g_26 = ATgetArgument(t, 2);
                                                                                                                                                                                if(((ATgetType(g_26) != AT_LIST) || !(ATisEmpty(g_26))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          return(t);
                                                                                                                                                                        }
                                                                                                                                                                        t = oncetd_1_0(d_2, t);
                                                                                                                                                                        PopChoice();
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = c_26;
                                                                                                                                                                      }
                                                                                                                                                                    t = not_null(u_13);
                                                                                                                                                                    t = bottomup_1_0(j_0, t);
                                                                                                                                                                  }
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(b_26);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = a_26;
                                                                                                                                                                  t = j_14;
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = j_14;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = j_14;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = j_14;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = j_14;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = j_14;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = i_14;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = h_14;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = j_14;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = i_14;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      t = h_14;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = j_14;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = i_14;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = h_14;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = j_14;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = i_14;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = h_14;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_14;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_As_2))
                                                                                                                    {
                                                                                                                      i_14 = ATgetArgument(t, 0);
                                                                                                                      h_14 = ATgetArgument(t, 1);
                                                                                                                      t = i_14;
                                                                                                                      if(match_cons(t, sym_Wld_0))
                                                                                                                        {
                                                                                                                          t = h_14;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = j_14;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = j_14;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
  t = bottomup_1_0(j_0, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm h_26 = t;
  if((PushChoice() == 0))
    {
      ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL,h_2 = NULL;
      p_56 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_56);
      n_56 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_56);
      h_2 = t;
      t = SSLsetAnnotations(h_2, n_56);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_26;
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_26;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_56 = ATgetFirst((ATermList) t);
      r_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_56, r_56);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      if(match_cons(j_26, sym__2))
        {
          s_56 = ATgetArgument(j_26, 0);
          t_56 = ATgetArgument(j_26, 1);
        }
      else
        _fail(t);
      {
        ATerm k_26 = ATgetArgument(t, 1);
        if(match_cons(k_26, sym__2))
          {
            u_56 = ATgetArgument(k_26, 0);
            v_56 = ATgetArgument(k_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_56), s_56), (ATerm) ATinsert(CheckATermList(v_56), t_56));
  return(t);
}
ATerm m_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_26;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_56 = ATgetFirst((ATermList) t);
      x_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_56, x_56);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_26 = ATgetArgument(t, 0);
      if(match_cons(l_26, sym__2))
        {
          y_56 = ATgetArgument(l_26, 0);
          z_56 = ATgetArgument(l_26, 1);
        }
      else
        _fail(t);
      {
        ATerm m_26 = ATgetArgument(t, 1);
        if(match_cons(m_26, sym__2))
          {
            a_57 = ATgetArgument(m_26, 0);
            b_57 = ATgetArgument(m_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_57), y_56), (ATerm) ATinsert(CheckATermList(b_57), z_56));
  return(t);
}
ATerm q_11 (ATerm f_45, ATerm g_45, ATerm h_45, ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,i_2 = NULL;
  t = h_45;
  t = fetch_1_0(e_2, t);
  t = h_45;
  t = genzip_4_0(f_2, j_2, k_2, LiftPrimArg_0_0, t);
  m_56 = t;
  if(match_cons(t, sym__2))
    {
      i_56 = ATgetArgument(t, 0);
      j_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_56);
  h_56 = t;
  t = i_56;
  t = concat_0_0(t);
  k_56 = t;
  t = j_56;
  t = genzip_4_0(m_2, n_2, p_2, _id, t);
  l_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_56, l_56);
  i_2 = t;
  t = SSLsetAnnotations(i_2, h_56);
  if(match_cons(t, sym__2))
    {
      e_56 = ATgetArgument(t, 0);
      {
        ATerm o_26 = ATgetArgument(t, 1);
        if(match_cons(o_26, sym__2))
          {
            f_56 = ATgetArgument(o_26, 0);
            g_56 = ATgetArgument(o_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, e_56, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_56), (ATerm) ATmakeAppl(sym_CallT_3, f_45, g_45, g_56)));
  return(t);
}
ATerm genzip_4_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t)
{
  ATerm j_57 (ATerm t)
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_118(t);
        ;
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        {
          ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,l_2 = NULL;
          t = r_118(t);
          i_57 = t;
          if(match_cons(t, sym__2))
            {
              e_57 = ATgetArgument(t, 0);
              f_57 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_57);
          d_57 = t;
          t = e_57;
          t = t_118(t);
          g_57 = t;
          t = f_57;
          t = j_57(t);
          h_57 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_57, h_57);
          l_2 = t;
          t = SSLsetAnnotations(l_2, d_57);
          t = s_118(t);
        }
      }
    return(t);
  }
  t = j_57(t);
  return(t);
}
ATerm at_end_1_0 (ATerm w_125 (ATerm), ATerm t)
{
  ATerm y_57 (ATerm t)
  {
    ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL;
    x_57 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_57 = ATgetFirst((ATermList) t);
        w_57 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_4 = NULL,c_5 = NULL,o_2 = NULL;
          t = SSLgetAnnotations(x_57);
          z_4 = t;
          t = w_57;
          t = y_57(t);
          c_5 = t;
          t = (ATerm) ATinsert(CheckATermList(c_5), v_57);
          o_2 = t;
          t = SSLsetAnnotations(o_2, z_4);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_57;
        t = w_125(t);
      }
    return(t);
  }
  t = y_57(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL;
  b_58 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_58;
    }
  else
    {
      ATerm q_2 (ATerm t)
      {
        t = not_null(d_58);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((c_58 != NULL) && (c_58 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            c_58 = ATgetFirst((ATermList) t);
          if(((d_58 != NULL) && (d_58 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(c_58);
      t = at_end_1_0(q_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm t_58 (ATerm j_58, ATerm t)
{
  ATerm l_58 = NULL;
  t = j_58;
  {
    ATerm r_26 = t;
    if((PushChoice() == 0))
      {
        ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL,r_2 = NULL;
        o_58 = t;
        if(match_cons(t, sym_Var_1))
          {
            n_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_58);
        m_58 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, n_58);
        r_2 = t;
        t = SSLsetAnnotations(r_2, m_58);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_26;
      }
    t = new_0_0(t);
    l_58 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, l_58), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_58), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_58)))), (ATerm) ATmakeAppl(sym_Var_1, l_58)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  p_58 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_58 = ATgetArgument(t, 0);
      {
        ATerm s_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_58(p_58, t);
            ;
            LocalPopChoice(t_26);
          }
        else
          {
            t = s_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATmakeAppl(sym_Var_1, q_58)));
          }
      }
    }
  else
    {
      t = t_58(p_58, t);
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm u_26 = t;
  if((PushChoice() == 0))
    {
      ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,t_2 = NULL;
      z_5 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_5);
      x_5 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_5);
      t_2 = t;
      t = SSLsetAnnotations(t_2, x_5);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_26;
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_26;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_6 = ATgetFirst((ATermList) t);
      b_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_6, b_6);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_26 = ATgetArgument(t, 0);
      if(match_cons(v_26, sym__2))
        {
          c_6 = ATgetArgument(v_26, 0);
          d_6 = ATgetArgument(v_26, 1);
        }
      else
        _fail(t);
      {
        ATerm w_26 = ATgetArgument(t, 1);
        if(match_cons(w_26, sym__2))
          {
            e_6 = ATgetArgument(w_26, 0);
            f_6 = ATgetArgument(w_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_6), c_6), (ATerm) ATinsert(CheckATermList(f_6), d_6));
  return(t);
}
ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_26;
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_6 = ATgetFirst((ATermList) t);
      h_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_6, h_6);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_26 = ATgetArgument(t, 0);
      if(match_cons(x_26, sym__2))
        {
          i_6 = ATgetArgument(x_26, 0);
          j_6 = ATgetArgument(x_26, 1);
        }
      else
        _fail(t);
      {
        ATerm y_26 = ATgetArgument(t, 1);
        if(match_cons(y_26, sym__2))
          {
            k_6 = ATgetArgument(y_26, 0);
            l_6 = ATgetArgument(y_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_6), i_6), (ATerm) ATinsert(CheckATermList(l_6), j_6));
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm z_26 = t;
  if((PushChoice() == 0))
    {
      ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,z_2 = NULL;
      h_7 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_7);
      f_7 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_7);
      z_2 = t;
      t = SSLsetAnnotations(z_2, f_7);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_26;
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_26;
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_7 = ATgetFirst((ATermList) t);
      j_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_7, j_7);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_27 = ATgetArgument(t, 0);
      if(match_cons(b_27, sym__2))
        {
          k_7 = ATgetArgument(b_27, 0);
          l_7 = ATgetArgument(b_27, 1);
        }
      else
        _fail(t);
      {
        ATerm c_27 = ATgetArgument(t, 1);
        if(match_cons(c_27, sym__2))
          {
            m_7 = ATgetArgument(c_27, 0);
            n_7 = ATgetArgument(c_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_7), k_7), (ATerm) ATinsert(CheckATermList(n_7), l_7));
  return(t);
}
ATerm l_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_i_26;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_7 = ATgetFirst((ATermList) t);
      p_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_7, p_7);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if(match_cons(d_27, sym__2))
        {
          q_7 = ATgetArgument(d_27, 0);
          r_7 = ATgetArgument(d_27, 1);
        }
      else
        _fail(t);
      {
        ATerm e_27 = ATgetArgument(t, 1);
        if(match_cons(e_27, sym__2))
          {
            s_7 = ATgetArgument(e_27, 0);
            t_7 = ATgetArgument(e_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_7), q_7), (ATerm) ATinsert(CheckATermList(t_7), r_7));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL;
  t_61 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      u_61 = ATgetArgument(t, 0);
      v_61 = ATgetArgument(t, 1);
      s_61 = ATgetArgument(t, 2);
      {
        ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_2 = NULL;
        t = s_61;
        t = fetch_1_0(s_2, t);
        t = s_61;
        t = genzip_4_0(a_3, b_3, c_3, LiftPrimArg_0_0, t);
        w_5 = t;
        if(match_cons(t, sym__2))
          {
            s_5 = ATgetArgument(t, 0);
            t_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_5);
        r_5 = t;
        t = s_5;
        t = concat_0_0(t);
        u_5 = t;
        t = t_5;
        t = genzip_4_0(d_3, e_3, f_3, _id, t);
        v_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_5, v_5);
        x_2 = t;
        t = SSLsetAnnotations(x_2, r_5);
        if(match_cons(t, sym__2))
          {
            o_5 = ATgetArgument(t, 0);
            {
              ATerm f_27 = ATgetArgument(t, 1);
              if(match_cons(f_27, sym__2))
                {
                  p_5 = ATgetArgument(f_27, 0);
                  q_5 = ATgetArgument(f_27, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_5, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_5), (ATerm) ATmakeAppl(sym_PrimT_3, u_61, v_61, q_5)));
      }
    }
  else
    {
      ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,s_8 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          u_61 = ATgetArgument(t, 0);
          v_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_61;
      t = fetch_1_0(g_3, t);
      t = v_61;
      t = genzip_4_0(i_3, j_3, k_3, LiftPrimArg_0_0, t);
      e_7 = t;
      if(match_cons(t, sym__2))
        {
          a_7 = ATgetArgument(t, 0);
          b_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_7);
      z_6 = t;
      t = a_7;
      t = concat_0_0(t);
      c_7 = t;
      t = b_7;
      t = genzip_4_0(l_3, m_3, n_3, _id, t);
      d_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_7, d_7);
      s_8 = t;
      t = SSLsetAnnotations(s_8, z_6);
      if(match_cons(t, sym__2))
        {
          w_6 = ATgetArgument(t, 0);
          {
            ATerm g_27 = ATgetArgument(t, 1);
            if(match_cons(g_27, sym__2))
              {
                x_6 = ATgetArgument(g_27, 0);
                y_6 = ATgetArgument(g_27, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, w_6, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_6), (ATerm) ATmakeAppl(sym_PrimT_3, u_61, (ATerm)ATempty, y_6)));
    }
  return(t);
}
ATerm topdown_1_0 (ATerm e_114 (ATerm), ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    t = topdown_1_0(e_114, t);
    return(t);
  }
  t = e_114(t);
  t = SRTS_all(o_3, t);
  return(t);
}
ATerm map_1_0 (ATerm g_125 (ATerm), ATerm t)
{
  ATerm o_62 (ATerm t)
  {
    ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL;
    l_62 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_62;
      }
    else
      {
        ATerm b_8 = NULL,e_8 = NULL,f_8 = NULL,b_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_62 = ATgetFirst((ATermList) t);
            n_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_62);
        b_8 = t;
        t = m_62;
        t = g_125(t);
        e_8 = t;
        t = n_62;
        t = o_62(t);
        f_8 = t;
        t = (ATerm) ATinsert(CheckATermList(f_8), e_8);
        b_11 = t;
        t = SSLsetAnnotations(b_11, b_8);
      }
    return(t);
  }
  t = o_62(t);
  return(t);
}
ATerm Cons_2_0 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,d_11 = NULL;
  v_62 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_62 = ATgetFirst((ATermList) t);
      s_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_62);
  q_62 = t;
  t = r_62;
  t = z_97(t);
  t_62 = t;
  t = s_62;
  t = a_98(t);
  u_62 = t;
  t = (ATerm) ATinsert(CheckATermList(u_62), t_62);
  d_11 = t;
  t = SSLsetAnnotations(d_11, q_62);
  return(t);
}
ATerm t_11 (ATerm b_74, ATerm c_74, ATerm t)
{
  ATerm w_62 = NULL;
  t = SSL_fputc(b_74, c_74);
  w_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_62);
  return(t);
}
ATerm u_11 (ATerm p_77, ATerm q_77, ATerm t)
{
  ATerm y_62 = NULL;
  t = SSL_write_term_to_stream_text(p_77, q_77);
  y_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_62);
  return(t);
}
ATerm x_11 (ATerm m_135 (ATerm), ATerm t_555, ATerm t_77, ATerm t)
{
  ATerm z_62 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_555, term_h_27);
  t = open_stream_0_0(t);
  z_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_62, t_77);
  t = m_135(t);
  t = fclose_0_0(t);
  t = t_77;
  return(t);
}
ATerm v_11 (ATerm l_77, ATerm m_77, ATerm t)
{
  ATerm b_63 = NULL;
  t = SSL_write_term_to_stream_baf(l_77, m_77);
  b_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_63);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_27 = ATgetArgument(t, 0);
      if(match_cons(i_27, sym_Stream_1))
        {
          f_63 = ATgetArgument(i_27, 0);
        }
      else
        _fail(t);
      g_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_11(f_63, g_63, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_27 = ATgetArgument(t, 0);
      if(match_cons(j_27, sym_Stream_1))
        {
          k_63 = ATgetArgument(j_27, 0);
        }
      else
        _fail(t);
      l_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_11(k_63, l_63, t);
  h_63 = t;
  t = term_k_27;
  i_63 = t;
  t = h_63;
  if(match_cons(t, sym_Stream_1))
    {
      j_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_27, h_63);
  t = t_11(i_63, j_63, t);
  return(t);
}
ATerm output_1_0 (ATerm v_139 (ATerm), ATerm t)
{
  ATerm c_63 = NULL,e_63 = NULL;
  t = v_139(t);
  e_63 = t;
  {
    ATerm l_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_27;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(n_27);
      }
    else
      {
        t = l_27;
        t = term_p_27;
      }
    c_63 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_63, e_63);
    {
      ATerm q_27 = t;
      int r_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_s_27;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, c_63, e_63);
          LocalPopChoice(r_27);
          if(match_cons(t, sym__2))
            {
              ATerm t_27 = ATgetArgument(t, 0);
              ATerm u_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_11(p_3, c_63, e_63, t);
        }
      else
        {
          t = q_27;
          if(match_cons(t, sym__2))
            {
              ATerm v_27 = ATgetArgument(t, 0);
              ATerm x_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_11(q_3, c_63, e_63, t);
        }
    }
  }
  return(t);
}
ATerm z_63 (ATerm t_63, ATerm t)
{
  t = SSL_fclose(t_63);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL;
  x_63 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_63 = ATgetArgument(t, 0);
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_63);
            ;
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
            t = z_63(x_63, t);
          }
      }
    }
  else
    {
      t = z_63(x_63, t);
    }
  return(t);
}
ATerm y_11 (ATerm r_77, ATerm t)
{
  t = SSL_read_term_from_stream(r_77);
  return(t);
}
ATerm z_11 (ATerm d_74, ATerm e_74, ATerm t)
{
  ATerm a_64 = NULL;
  t = SSL_fopen(d_74, e_74);
  a_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_64);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_64 = NULL;
  t = SSL_stdin_stream();
  b_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_64);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_64 = NULL;
  t = SSL_stdout_stream();
  c_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_64);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_64 = NULL;
  t = SSL_stderr_stream();
  d_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_64);
  return(t);
}
ATerm m_65 (ATerm j_64, ATerm t)
{
  ATerm k_64 = NULL;
  t = SSL_explode_term(j_64);
  if(match_cons(t, sym__2))
    {
      ATerm a_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_28 = ATgetArgument(t, 1);
        if(((ATgetType(b_28) == AT_LIST) && !(ATisEmpty(b_28))))
          {
            k_64 = ATgetFirst((ATermList) b_28);
            {
              ATerm c_28 = (ATerm) ATgetNext((ATermList) b_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_64;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_64;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_64;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_64;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm n_65 (ATerm n_64, ATerm o_64, ATerm p_64, ATerm t)
{
  ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL,v_64 = NULL,f_11 = NULL;
  t = SSLgetAnnotations(p_64);
  s_64 = t;
  t = n_64;
  if(match_cons(t, sym_Path_1))
    {
      v_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_64, o_64);
  f_11 = t;
  t = SSLsetAnnotations(f_11, s_64);
  if(match_cons(t, sym__2))
    {
      q_64 = ATgetArgument(t, 0);
      r_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_11(q_64, r_64, t);
  return(t);
}
ATerm o_65 (ATerm x_64, ATerm y_64, ATerm z_64, ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL,c_65 = NULL,h_65 = NULL,g_11 = NULL;
  t = SSLgetAnnotations(z_64);
  c_65 = t;
  t = SSL_is_string(x_64);
  h_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_65, y_64);
  g_11 = t;
  t = SSLsetAnnotations(g_11, c_65);
  if(match_cons(t, sym__2))
    {
      a_65 = ATgetArgument(t, 0);
      b_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_11(a_65, b_65, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_28 = ATgetArgument(t, 0);
      ATerm e_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  j_65 = t;
  if(match_cons(t, sym__2))
    {
      k_65 = ATgetArgument(t, 0);
      l_65 = ATgetArgument(t, 1);
      {
        ATerm f_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_65(j_65, t);
            ;
            LocalPopChoice(g_28);
          }
        else
          {
            t = f_28;
            {
              ATerm h_28 = t;
              int j_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_65(k_65, l_65, j_65, t);
                  ;
                  LocalPopChoice(j_28);
                }
              else
                {
                  t = h_28;
                  t = o_65(k_65, l_65, j_65, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_65(j_65, t);
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_k_28;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL;
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_65 = NULL;
      s_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_65, term_n_28);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      t = debug_1_0(s_3, t);
      _fail(t);
    }
  q_65 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_11(r_65, t);
  p_65 = t;
  t = q_65;
  t = fclose_0_0(t);
  t = p_65;
  return(t);
}
ATerm input_1_0 (ATerm w_139 (ATerm), ATerm t)
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      t = term_r_28;
    }
  t = ReadFromFile_0_0(t);
  t = w_139(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL;
  u_65 = t;
  t = term_s_28;
  t = whoami_0_0(t);
  v_65 = t;
  t = term_u_28;
  x_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_28), v_65), term_v_28);
  y_65 = t;
  t = SSL_printnl(x_65, y_65);
  t = term_x_28;
  w_65 = t;
  t = SSL_exit(w_65);
  t = u_65;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm a_66 = NULL;
  a_66 = t;
  if(match_string(t, "-k"))
    {
      t = a_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_66;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
  b_66 = t;
  t = SSL_string_to_int(b_66);
  c_66 = t;
  t = term_y_28;
  d_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_28, c_66);
  t = h_12(d_66, c_66, t);
  t = b_66;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_3, u_3, v_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm f_66 = NULL;
  f_66 = t;
  if(match_string(t, "-S"))
    {
      t = f_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_66;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL;
  t = term_a_29;
  g_66 = t;
  t = term_b_29;
  h_66 = t;
  t = term_c_29;
  t = h_12(g_66, h_66, t);
  t = term_d_29;
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_e_29;
  return(t);
}
ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL;
  i_66 = t;
  t = SSL_string_to_int(i_66);
  j_66 = t;
  t = term_a_29;
  k_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_29, j_66);
  t = h_12(k_66, j_66, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_66);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm d_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL;
  t = term_h_29;
  l_66 = t;
  t = term_s_28;
  m_66 = t;
  t = term_i_29;
  t = h_12(l_66, m_66, t);
  t = term_j_29;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_3, x_3, y_3, t);
      ;
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
      {
        ATerm n_29 = t;
        int s_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_3, a_4, b_4, t);
            ;
            LocalPopChoice(s_29);
          }
        else
          {
            t = n_29;
            t = Option_3_0(d_4, e_4, f_4, t);
          }
      }
    }
  return(t);
}
ATerm h_12 (ATerm s_78, ATerm t_78, ATerm t)
{
  ATerm n_66 = NULL;
  t = term_t_29;
  n_66 = t;
  t = SSL_table_put(n_66, s_78, t_78);
  t = (ATerm) ATmakeAppl(sym__3, term_t_29, s_78, t_78);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_66 = NULL,r_66 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL;
      t = term_s_28;
      t = d_0(t);
      s_66 = t;
      t = term_u_29;
      t_66 = t;
      t = term_v_29;
      u_66 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_29, term_v_29, s_66);
      t = f_12(t_66, u_66, s_66, t);
      _fail(t);
    }
  else
    {
      ATerm x_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_66 = ATgetFirst((ATermList) t);
          r_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_66;
      t = a_0(t);
      t = term_s_28;
      t = b_0(t);
      x_66 = t;
      t = (ATerm) ATinsert(CheckATermList(r_66), x_66);
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm z_66 = NULL;
  z_66 = t;
  if(match_string(t, "-o"))
    {
      t = z_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_66;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL;
  a_67 = t;
  t = term_o_27;
  b_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_27, a_67);
  t = h_12(b_67, a_67, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_67);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_b_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, h_4, i_4, t);
  return(t);
}
ATerm f_12 (ATerm f_69, ATerm g_69, ATerm e_69, ATerm t)
{
  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL;
  d_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_69, g_69);
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_30 = ATgetArgument(t, 0);
            ATerm f_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_69, g_69);
        t = e_12(f_69, g_69, t);
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        t = (ATerm) ATempty;
      }
    e_67 = t;
    t = (ATerm) ATinsert(CheckATermList(e_67), e_69);
    f_67 = t;
    t = SSL_table_put(f_69, g_69, f_67);
    t = d_67;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL;
      t = term_s_28;
      t = m_0(t);
      s_67 = t;
      t = term_u_29;
      t_67 = t;
      t = term_v_29;
      u_67 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_29, term_v_29, s_67);
      t = f_12(t_67, u_67, s_67, t);
      _fail(t);
    }
  else
    {
      ATerm y_67 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_67 = ATgetFirst((ATermList) t);
          p_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_67;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_67 = ATgetFirst((ATermList) t);
          r_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_67;
      t = i_0(t);
      t = q_67;
      t = k_0(t);
      y_67 = t;
      t = (ATerm) ATinsert(CheckATermList(r_67), y_67);
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm a_68 = NULL;
  a_68 = t;
  if(match_string(t, "-i"))
    {
      t = a_68;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_68;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL;
  b_68 = t;
  t = term_q_28;
  c_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_28, b_68);
  t = h_12(c_68, b_68, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_68);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, l_4, m_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_28;
  t = whoami_0_0(t);
  d_68 = t;
  t = term_u_28;
  f_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_30), d_68);
  g_68 = t;
  t = SSL_printnl(f_68, g_68);
  t = term_x_28;
  e_68 = t;
  t = SSL_exit(e_68);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_30;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_12 (ATerm j_67, ATerm k_67, ATerm t)
{
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_67, k_67);
      ;
      LocalPopChoice(k_30);
    }
  else
    {
      t = j_30;
      t = SSL_addr(j_67, k_67);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm t)
{
  ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL;
  i_68 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_68;
      t = y_127(t);
    }
  else
    {
      ATerm n_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_68 = ATgetFirst((ATermList) t);
          k_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_68;
      t = foldr_2_0(y_127, z_127, t);
      n_68 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_68, n_68);
      t = z_127(t);
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
  t = term_b_29;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      u_8 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(u_8, v_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_68 = NULL,q_8 = NULL,r_8 = NULL;
  t = times_0_0(t);
  r_8 = t;
  t = SSL_explode_term(r_8);
  if(match_cons(t, sym__2))
    {
      ATerm l_30 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8;
  t = foldr_2_0(n_4, o_4, t);
  r_68 = t;
  t = SSL_TicksToSeconds(r_68);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_69 = NULL,d_69 = NULL,h_69 = NULL;
  c_69 = t;
  if(match_cons(t, sym__2))
    {
      d_69 = ATgetArgument(t, 0);
      h_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_69;
        if((d_69 != t))
          {
            _fail(t);
          }
        t = c_69;
        ;
        LocalPopChoice(n_30);
      }
    else
      {
        t = m_30;
        t = (ATerm) ATmakeAppl(sym__2, d_69, h_69);
        {
          ATerm o_30 = t;
          int p_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_69, h_69);
              ;
              LocalPopChoice(p_30);
            }
          else
            {
              t = o_30;
              t = SSL_gtr(d_69, h_69);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_69, h_69);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_136 (ATerm), ATerm t)
{
  ATerm l_69 = NULL;
  l_69 = t;
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_69 = NULL;
        t = term_a_29;
        t = get_config_0_0(t);
        n_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_69, term_x_28);
        t = geq_0_0(t);
        t = l_69;
        t = w_136(t);
        ;
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        t = l_69;
      }
  }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,s_69 = NULL,t_69 = NULL;
  t = run_time_0_0(t);
  p_69 = t;
  t = term_s_28;
  t = whoami_0_0(t);
  q_69 = t;
  t = term_u_28;
  s_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_30), p_69), term_t_30), q_69);
  t_69 = t;
  t = SSL_printnl(s_69, t_69);
  t = (ATerm) ATmakeAppl(sym__2, term_u_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_30), p_69), term_t_30), q_69));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_69 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_29;
  u_69 = t;
  t = SSL_exit(u_69);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL;
  d_70 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_70;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_70 = ATgetArgument(t, 0);
          {
            ATerm h_9 = NULL,j_11 = NULL;
            t = SSLgetAnnotations(d_70);
            h_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_70);
            j_11 = t;
            t = SSLsetAnnotations(j_11, h_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_70;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_139 (ATerm), ATerm t)
{
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      t = fetch_1_0(q_4, t);
    }
  t = m_139(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_70 = ATgetFirst((ATermList) t);
      h_70 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_70 = NULL,m_70 = NULL;
        ATerm r_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_70)), not_null(m_70));
          return(t);
        }
        t = not_null(h_70);
        t = g_0(t);
        if(((l_70 != NULL) && (l_70 != t)))
          _fail(t);
        else
          l_70 = t;
        t = not_null(g_70);
        t = f_0(t);
        if(((m_70 != NULL) && (m_70 != t)))
          _fail(t);
        else
          m_70 = t;
        t = not_null(h_70);
        t = reverse_acc_2_0(f_0, r_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_28;
      t = g_0(t);
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL,l_11 = NULL;
  s_70 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_70);
  q_70 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_70);
  l_11 = t;
  t = SSLsetAnnotations(l_11, q_70);
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm u_70 = NULL;
  u_70 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_70), term_y_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL;
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
      t = fetch_1_0(s_4, t);
    }
  t = term_b_31;
  t = echo_0_0(t);
  t = term_u_29;
  o_70 = t;
  t = term_v_29;
  p_70 = t;
  t = term_c_31;
  t = e_12(o_70, p_70, t);
  t = reverse_acc_2_0(_id, t_4, t);
  t = map_1_0(u_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm q_125 (ATerm), ATerm t)
{
  ATerm u_71 (ATerm t)
  {
    ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL;
    r_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_71 = ATgetFirst((ATermList) t);
        t_71 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_9 = NULL,s_9 = NULL,n_11 = NULL;
          t = SSLgetAnnotations(r_71);
          p_9 = t;
          t = s_71;
          t = q_125(t);
          s_9 = t;
          t = (ATerm) ATinsert(CheckATermList(t_71), s_9);
          n_11 = t;
          t = SSLsetAnnotations(n_11, p_9);
          ;
          LocalPopChoice(e_31);
        }
      else
        {
          t = d_31;
          {
            ATerm a_10 = NULL,d_10 = NULL,o_11 = NULL;
            t = SSLgetAnnotations(r_71);
            a_10 = t;
            t = t_71;
            t = u_71(t);
            d_10 = t;
            t = (ATerm) ATinsert(CheckATermList(d_10), s_71);
            o_11 = t;
            t = SSLsetAnnotations(o_11, a_10);
          }
        }
    }
    return(t);
  }
  t = u_71(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL;
  y_71 = t;
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_71;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_31 = ATgetFirst((ATermList) t);
                ATerm j_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_71;
          }
        ;
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        t = (ATerm) ATinsert(ATempty, y_71);
      }
    z_71 = t;
    t = term_p_27;
    a_72 = t;
    t = SSL_printnl(a_72, z_71);
    t = y_71;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_30;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm d_12 (ATerm c_60, ATerm d_60, ATerm t)
{
  t = SSL_strcat(c_60, d_60);
  return(t);
}
ATerm debug_1_0 (ATerm k_135 (ATerm), ATerm t)
{
  ATerm e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL;
  e_72 = t;
  t = k_135(t);
  f_72 = t;
  t = term_u_28;
  g_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_72), f_72);
  h_72 = t;
  t = SSL_printnl(g_72, h_72);
  t = e_72;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_72 = NULL;
      o_72 = t;
      t = SSL_is_string(o_72);
      ;
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      {
        ATerm p_31 = t;
        int q_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_4, t);
            ;
            LocalPopChoice(q_31);
          }
        else
          {
            t = p_31;
            {
              ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL;
              u_72 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_72 = ATgetArgument(t, 0);
                  t = v_72;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_72 = ATgetArgument(t, 0);
                      t = v_72;
                      {
                        ATerm r_31 = t;
                        int t_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(t_31);
                          }
                        else
                          {
                            t = r_31;
                            t = debug_1_0(w_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_73 = NULL,b_73 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_72 = ATgetArgument(t, 0);
                          w_72 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_72;
                      t = eval_config_0_0(t);
                      a_73 = t;
                      t = w_72;
                      t = eval_config_0_0(t);
                      b_73 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_73, b_73);
                      t = d_12(a_73, b_73, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm e_12 (ATerm w_70, ATerm x_70, ATerm t)
{
  t = SSL_table_get(w_70, x_70);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL;
  f_73 = t;
  t = term_t_29;
  g_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_29, f_73);
  t = e_12(g_73, f_73, t);
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_73 = NULL,i_73 = NULL;
        t = eval_config_0_0(t);
        h_73 = t;
        t = term_t_29;
        i_73 = t;
        t = SSL_table_put(i_73, f_73, h_73);
        t = h_73;
        ;
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
      }
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL;
  t = term_w_31;
  l_73 = t;
  t = term_s_28;
  m_73 = t;
  t = term_x_31;
  t = h_12(l_73, m_73, t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL;
  t = term_w_31;
  p_73 = t;
  t = term_s_28;
  q_73 = t;
  t = term_x_31;
  t = h_12(p_73, q_73, t);
  t = term_z_31;
  n_73 = t;
  t = term_s_28;
  o_73 = t;
  t = term_a_32;
  t = h_12(n_73, o_73, t);
  t = term_b_32;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_32 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_4, y_4, a_5, t);
      ;
      LocalPopChoice(e_32);
    }
  else
    {
      t = d_32;
      t = Option_3_0(b_5, d_5, e_5, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_141 (ATerm), ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,a_74 = NULL,h_74 = NULL,s_11 = NULL;
  if(((v_73 != NULL) && (v_73 != t)))
    _fail(t);
  else
    v_73 = t;
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_32;
        t = p_141(t);
        ;
        LocalPopChoice(g_32);
      }
    else
      {
        t = f_32;
      }
    t = not_null(v_73);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((x_73 != NULL) && (x_73 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          x_73 = ATgetFirst((ATermList) t);
        if(((y_73 != NULL) && (y_73 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          y_73 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(v_73));
    if(((w_73 != NULL) && (w_73 != t)))
      _fail(t);
    else
      w_73 = t;
    t = term_i_30;
    if(((h_74 != NULL) && (h_74 != t)))
      _fail(t);
    else
      h_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_30, not_null(x_73));
    t = h_12(not_null(h_74), not_null(x_73), t);
    t = not_null(y_73);
    {
      ATerm r_74 (ATerm t)
      {
        ATerm i_32 = t;
        int j_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_32 = t;
            int l_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_74 = NULL;
                k_74 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_74;
                ;
                LocalPopChoice(l_32);
              }
            else
              {
                t = k_32;
                t = p_141(t);
                t = Cons_2_0(_id, r_74, t);
              }
            ;
            LocalPopChoice(j_32);
          }
        else
          {
            t = i_32;
            {
              ATerm n_74 = NULL,o_74 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_74 = ATgetFirst((ATermList) t);
                  o_74 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_74), (ATerm) ATmakeAppl(sym_Undefined_1, n_74));
            }
          }
        return(t);
      }
      t = r_74(t);
      if(((a_74 != NULL) && (a_74 != t)))
        _fail(t);
      else
        a_74 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(a_74)), (ATerm) ATmakeAppl(sym_Program_1, not_null(x_73)));
      if(((s_11 != NULL) && (s_11 != t)))
        _fail(t);
      else
        s_11 = t;
      t = SSLsetAnnotations(not_null(s_11), not_null(w_73));
    }
  }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm d_75 = NULL;
  d_75 = t;
  if(match_string(t, "--help"))
    {
      t = d_75;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_75;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_75;
        }
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL;
  t = term_x_30;
  e_75 = t;
  t = term_s_28;
  f_75 = t;
  t = term_m_32;
  t = h_12(e_75, f_75, t);
  t = term_o_32;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm j_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_141 (ATerm), ATerm t)
{
  ATerm w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL;
  if(((y_74 != NULL) && (y_74 != t)))
    _fail(t);
  else
    y_74 = t;
  t = term_u_29;
  if(((a_75 != NULL) && (a_75 != t)))
    _fail(t);
  else
    a_75 = t;
  t = term_v_29;
  if(((b_75 != NULL) && (b_75 != t)))
    _fail(t);
  else
    b_75 = t;
  t = (ATerm) ATempty;
  if(((c_75 != NULL) && (c_75 != t)))
    _fail(t);
  else
    c_75 = t;
  t = SSL_table_put(not_null(a_75), not_null(b_75), not_null(c_75));
  t = not_null(y_74);
  {
    ATerm f_5 (ATerm t)
    {
      ATerm q_32 = t;
      int r_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_141(t);
          ;
          LocalPopChoice(r_32);
        }
      else
        {
          t = q_32;
          {
            ATerm t_32 = t;
            int u_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_5, h_5, i_5, t);
                ;
                LocalPopChoice(u_32);
              }
            else
              {
                t = t_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_5, t);
    {
      ATerm v_32 = t;
      int w_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_75 = NULL;
          m_75 = t;
          {
            ATerm x_32 = t;
            int z_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_10 = NULL;
                t = m_75;
                {
                  ATerm a_33 = t;
                  int b_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_x_30;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(b_33);
                    }
                  else
                    {
                      t = a_33;
                      t = fetch_1_0(j_5, t);
                    }
                  t = m_75;
                  t = default_system_usage_0_0(t);
                  t = term_b_29;
                  s_10 = t;
                  t = SSL_exit(s_10);
                }
                ;
                LocalPopChoice(z_32);
              }
            else
              {
                t = x_32;
                {
                  ATerm w_10 = NULL;
                  t = term_w_31;
                  t = get_config_0_0(t);
                  t = m_75;
                  t = default_system_about_0_0(t);
                  t = term_b_29;
                  w_10 = t;
                  t = SSL_exit(w_10);
                }
              }
          }
          ;
          LocalPopChoice(w_32);
        }
      else
        {
          t = v_32;
          {
            ATerm c_33 = t;
            int d_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_75 = NULL,o_75 = NULL,p_75 = NULL;
                ATerm k_5 (ATerm t)
                {
                  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,b_12 = NULL;
                  s_75 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      r_75 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_75);
                  q_75 = t;
                  t = r_75;
                  if(((w_74 != NULL) && (w_74 != t)))
                    _fail(t);
                  else
                    w_74 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_75);
                  b_12 = t;
                  t = SSLsetAnnotations(b_12, q_75);
                  return(t);
                }
                t = fetch_1_0(k_5, t);
                t = term_u_28;
                if(((o_75 != NULL) && (o_75 != t)))
                  _fail(t);
                else
                  o_75 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_74)), term_e_33);
                if(((p_75 != NULL) && (p_75 != t)))
                  _fail(t);
                else
                  p_75 = t;
                t = SSL_printnl(not_null(o_75), not_null(p_75));
                t = (ATerm) ATmakeAppl(sym__2, term_u_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_74)), term_e_33));
                t = default_system_usage_0_0(t);
                t = term_x_28;
                if(((n_75 != NULL) && (n_75 != t)))
                  _fail(t);
                else
                  n_75 = t;
                t = SSL_exit(not_null(n_75));
                ;
                LocalPopChoice(d_33);
              }
            else
              {
                t = c_33;
              }
          }
        }
      if(((x_74 != NULL) && (x_74 != t)))
        _fail(t);
      else
        x_74 = t;
      t = term_u_29;
      if(((z_74 != NULL) && (z_74 != t)))
        _fail(t);
      else
        z_74 = t;
      t = SSL_table_destroy(not_null(z_74));
      t = not_null(x_74);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_139 (ATerm), ATerm p_139 (ATerm), ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL;
  t = parse_options_1_0(o_139, t);
  x_75 = t;
  t = term_f_33;
  a_76 = t;
  t = SSL_table_create(a_76);
  t = term_f_33;
  y_75 = t;
  t = term_g_33;
  z_75 = t;
  t = SSL_table_put(y_75, z_75, x_75);
  t = x_75;
  t = q_139(t);
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_139, t);
        ;
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
        {
          ATerm k_33 = t;
          int l_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_139(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(l_33);
            }
          else
            {
              t = k_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm m_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(n_33);
    }
  else
    {
      t = m_33;
      {
        ATerm o_33 = t;
        int p_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(p_33);
          }
        else
          {
            t = o_33;
            {
              ATerm r_33 = t;
              int s_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(n_5, m_6, n_6, t);
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
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(u_33);
                      }
                    else
                      {
                        t = t_33;
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
ATerm m_5 (ATerm t)
{
  t = input_1_0(o_6, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL;
  t = term_s_27;
  e_76 = t;
  t = term_s_28;
  f_76 = t;
  t = term_v_33;
  t = h_12(e_76, f_76, t);
  t = term_w_33;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_x_33;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = output_1_0(p_6, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,k_12 = NULL,j_12 = NULL;
  o_76 = t;
  if(match_cons(t, sym_Specification_1))
    {
      i_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_76);
  h_76 = t;
  t = i_76;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_76 = ATgetFirst((ATermList) t);
      l_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_76);
  j_76 = t;
  t = l_76;
  t = Cons_2_0(q_6, r_6, t);
  m_76 = t;
  t = (ATerm) ATinsert(CheckATermList(m_76), k_76);
  j_12 = t;
  t = SSLsetAnnotations(j_12, j_76);
  n_76 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, n_76);
  k_12 = t;
  t = SSLsetAnnotations(k_12, h_76);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,i_12 = NULL;
  s_76 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      q_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_76);
  p_76 = t;
  t = q_76;
  t = map_1_0(s_6, t);
  r_76 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, r_76);
  i_12 = t;
  t = SSLsetAnnotations(i_12, p_76);
  return(t);
}
ATerm r_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,g_12 = NULL;
  z_76 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      u_76 = ATgetArgument(t, 0);
      v_76 = ATgetArgument(t, 1);
      w_76 = ATgetArgument(t, 2);
      x_76 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_76);
  t_76 = t;
  t = x_76;
  t = topdown_1_0(t_6, t);
  t = simplify_0_0(t);
  y_76 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, u_76, v_76, w_76, y_76);
  g_12 = t;
  t = SSLsetAnnotations(g_12, t_76);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_34 = t;
      int b_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = LiftPrimArgs_0_0(t);
          ;
          LocalPopChoice(b_34);
        }
      else
        {
          t = a_34;
          {
            ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL;
            a_77 = t;
            if(match_cons(t, sym_CallT_3))
              {
                b_77 = ATgetArgument(t, 0);
                c_77 = ATgetArgument(t, 1);
                d_77 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = a_77;
            t = q_11(b_77, c_77, d_77, t);
          }
        }
      ;
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(l_5, default_usage_0_0, _id, m_5, t);
  return(t);
}
