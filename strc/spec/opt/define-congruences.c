#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Explode_2;
Symbol sym_Anno_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_As_2;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Undefined_0;
Symbol sym_Hashtable_1;
Symbol sym_Anno_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
}
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_s_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_z_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_p_28;
ATerm term_m_28;
ATerm term_e_28;
ATerm term_b_28;
ATerm term_e_27;
ATerm term_f_23;
ATerm term_q_6;
ATerm term_i_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_u_28);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_z_28);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_v_29);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_h_30);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__2, term_m_30, term_y_29);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_e_31);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_g_30);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_v_31);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_u_30, term_v_30);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_o_32, term_y_29);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym__2, term_r_32, term_y_29);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_y_29);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym__3, term_u_30, term_v_30, (ATerm) ATempty);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_o_32);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_z_28, term_y_29);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm simplify_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm v_106 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm g_5 (ATerm y_80, ATerm x_80, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm z_107 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm v_11 (ATerm z_79, ATerm f_80, ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm x_127 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm u_73 (ATerm l_73, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm z_11 (ATerm k_80, ATerm s_80, ATerm r_80, ATerm t);
ATerm pat_td_1_0 (ATerm b_105 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm MatchingCongruence_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm w_106 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm define_congruences_0_0 (ATerm t);
ATerm map_1_0 (ATerm g_127 (ATerm), ATerm t);
static ATerm a_12 (ATerm v_44, ATerm w_44, ATerm t);
static ATerm b_12 (ATerm w_49, ATerm x_49, ATerm t);
static ATerm d_12 (ATerm z_120 (ATerm), ATerm c_434, ATerm c_50, ATerm t);
static ATerm c_12 (ATerm s_49, ATerm t_49, ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm output_1_0 (ATerm f_134 (ATerm), ATerm t);
static ATerm n_84 (ATerm g_84, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_12 (ATerm y_49, ATerm t);
static ATerm f_12 (ATerm o_43, ATerm p_43, ATerm t);
static ATerm g_12 (ATerm x_44, ATerm y_44, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_85 (ATerm x_84, ATerm t);
static ATerm z_85 (ATerm b_85, ATerm c_85, ATerm d_85, ATerm t);
static ATerm a_86 (ATerm l_85, ATerm m_85, ATerm n_85, ATerm t);
static ATerm h_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm g_134 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_12 (ATerm q_48, ATerm r_48, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_12 (ATerm u_53, ATerm v_53, ATerm t_53, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_12 (ATerm c_51, ATerm d_51, ATerm t);
ATerm foldr_2_0 (ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_118 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm need_help_1_0 (ATerm w_133 (ATerm), ATerm t);
static ATerm r_12 (ATerm m_57, ATerm n_57, ATerm o_57, ATerm t);
ATerm lookup_table_0_1 (ATerm g_55, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_57, ATerm v_57, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_12 (ATerm r_57, ATerm s_57, ATerm t);
static ATerm l_12 (ATerm w_57, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_127 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm s_12 (ATerm p_57, ATerm q_57, ATerm t);
static ATerm n_12 (ATerm n_55, ATerm o_55, ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_135 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm parse_options_1_0 (ATerm y_135 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm y_133 (ATerm), ATerm z_133 (ATerm), ATerm a_134 (ATerm), ATerm b_134 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_5 = ATgetArgument(t, 0);
      if(((ATgetType(h_5) != AT_LIST) || !(ATisEmpty(h_5))))
        _fail(t);
      {
        ATerm j_5 = ATgetArgument(t, 1);
        if(((ATgetType(j_5) != AT_LIST) || !(ATisEmpty(j_5))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_5 = ATgetArgument(t, 0);
      if(((ATgetType(k_5) == AT_LIST) && !(ATisEmpty(k_5))))
        {
          o_15 = ATgetFirst((ATermList) k_5);
          p_15 = (ATerm) ATgetNext((ATermList) k_5);
        }
      else
        _fail(t);
      {
        ATerm l_5 = ATgetArgument(t, 1);
        if(((ATgetType(l_5) == AT_LIST) && !(ATisEmpty(l_5))))
          {
            q_15 = ATgetFirst((ATermList) l_5);
            r_15 = (ATerm) ATgetNext((ATermList) l_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_15, q_15), (ATerm) ATmakeAppl(sym__2, p_15, r_15));
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  if(match_cons(t, sym__2))
    {
      s_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_15), s_15);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm u_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_15), (ATerm) ATmakeAppl(sym_Match_1, x_15));
  return(t);
}
static ATerm o_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_5 = ATgetArgument(t, 0);
      if(((ATgetType(m_5) != AT_LIST) || !(ATisEmpty(m_5))))
        _fail(t);
      {
        ATerm n_5 = ATgetArgument(t, 1);
        if(((ATgetType(n_5) != AT_LIST) || !(ATisEmpty(n_5))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_5 = ATgetArgument(t, 0);
      if(((ATgetType(o_5) == AT_LIST) && !(ATisEmpty(o_5))))
        {
          j_24 = ATgetFirst((ATermList) o_5);
          k_24 = (ATerm) ATgetNext((ATermList) o_5);
        }
      else
        _fail(t);
      {
        ATerm p_5 = ATgetArgument(t, 1);
        if(((ATgetType(p_5) == AT_LIST) && !(ATisEmpty(p_5))))
          {
            l_24 = ATgetFirst((ATermList) p_5);
            m_24 = (ATerm) ATgetNext((ATermList) p_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_24, l_24), (ATerm) ATmakeAppl(sym__2, k_24, m_24));
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm n_24 = NULL,q_24 = NULL;
  if(match_cons(t, sym__2))
    {
      n_24 = ATgetArgument(t, 0);
      q_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_24), n_24);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm v_24 = NULL,x_24 = NULL;
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_24), (ATerm) ATmakeAppl(sym_Match_1, x_24));
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm t_5 = t;
  int v_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm w_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(v_5);
      {
        ATerm t_41 = NULL,w_41 = NULL;
        t_41 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm x_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        w_41 = t;
        t = SSLgetAnnotations(t_41);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_5 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) y_5) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_5 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(z_5) != AT_LIST) || !(ATisEmpty(z_5))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_41;
      }
    }
  else
    {
      t = t_5;
      {
        ATerm b_6 = t;
        int c_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm e_6 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) e_6) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm f_6 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(c_6);
            _fail(t);
          }
        else
          {
            t = b_6;
          }
      }
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL,u_5 = NULL,s_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,f_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,y_8 = NULL,a_9 = NULL;
    a_9 = t;
    if(match_cons(t, sym_Test_1))
      {
        y_8 = ATgetArgument(t, 0);
        t = y_8;
        if(match_cons(t, sym_Id_0))
          {
            ATerm g_6 = t;
            int h_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_i_6;
                t = a_0(t);
                LocalPopChoice(h_6);
              }
            else
              {
                t = g_6;
                {
                  ATerm j_6 = t;
                  int k_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_9 = NULL,u_9 = NULL,f_10 = NULL,o_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL;
                      t = a_9;
                      t = new_0_0(t);
                      s_9 = t;
                      t = bottomup_1_0(a_0, t);
                      y_10 = t;
                      t = (ATerm) ATempty;
                      t = a_0(t);
                      z_10 = t;
                      t = (ATerm) ATinsert(CheckATermList(z_10), y_10);
                      t = a_0(t);
                      u_9 = t;
                      t = s_9;
                      t = bottomup_1_0(a_0, t);
                      x_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, x_10);
                      t = a_0(t);
                      w_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, w_10);
                      t = a_0(t);
                      o_10 = t;
                      t = y_8;
                      t = bottomup_1_0(a_0, t);
                      s_10 = t;
                      t = s_9;
                      t = bottomup_1_0(a_0, t);
                      v_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, v_10);
                      t = a_0(t);
                      u_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, u_10);
                      t = a_0(t);
                      t_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_10, t_10);
                      t = a_0(t);
                      r_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_10, r_10);
                      t = a_0(t);
                      f_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, u_9, f_10);
                      t = a_0(t);
                      LocalPopChoice(k_6);
                    }
                  else
                    {
                      t = j_6;
                      t = a_9;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm m_6 = t;
                int n_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_q_6;
                    t = a_0(t);
                    LocalPopChoice(n_6);
                  }
                else
                  {
                    t = m_6;
                    {
                      ATerm r_6 = t;
                      int s_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
                          t = a_9;
                          t = new_0_0(t);
                          c_11 = t;
                          t = bottomup_1_0(a_0, t);
                          n_11 = t;
                          t = (ATerm) ATempty;
                          t = a_0(t);
                          o_11 = t;
                          t = (ATerm) ATinsert(CheckATermList(o_11), n_11);
                          t = a_0(t);
                          d_11 = t;
                          t = c_11;
                          t = bottomup_1_0(a_0, t);
                          m_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, m_11);
                          t = a_0(t);
                          l_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, l_11);
                          t = a_0(t);
                          f_11 = t;
                          t = y_8;
                          t = bottomup_1_0(a_0, t);
                          h_11 = t;
                          t = c_11;
                          t = bottomup_1_0(a_0, t);
                          k_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, k_11);
                          t = a_0(t);
                          j_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, j_11);
                          t = a_0(t);
                          i_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_11, i_11);
                          t = a_0(t);
                          g_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_11, g_11);
                          t = a_0(t);
                          e_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, d_11, e_11);
                          t = a_0(t);
                          LocalPopChoice(s_6);
                        }
                      else
                        {
                          t = r_6;
                          t = a_9;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    t_8 = ATgetArgument(t, 0);
                    {
                      ATerm t_6 = t;
                      int u_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, t_8);
                          t = a_0(t);
                          LocalPopChoice(u_6);
                        }
                      else
                        {
                          t = t_6;
                          {
                            ATerm v_6 = t;
                            int w_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,j_12 = NULL,m_12 = NULL,p_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
                                t = a_9;
                                t = new_0_0(t);
                                s_11 = t;
                                t = bottomup_1_0(a_0, t);
                                v_12 = t;
                                t = (ATerm) ATempty;
                                t = a_0(t);
                                w_12 = t;
                                t = (ATerm) ATinsert(CheckATermList(w_12), v_12);
                                t = a_0(t);
                                t_11 = t;
                                t = s_11;
                                t = bottomup_1_0(a_0, t);
                                u_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, u_12);
                                t = a_0(t);
                                t_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, t_12);
                                t = a_0(t);
                                w_11 = t;
                                t = y_8;
                                t = bottomup_1_0(a_0, t);
                                y_11 = t;
                                t = s_11;
                                t = bottomup_1_0(a_0, t);
                                p_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, p_12);
                                t = a_0(t);
                                m_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, m_12);
                                t = a_0(t);
                                j_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, j_12);
                                t = a_0(t);
                                x_11 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                t = a_0(t);
                                u_11 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, u_11);
                                t = a_0(t);
                                LocalPopChoice(w_6);
                              }
                            else
                              {
                                t = v_6;
                                t = a_9;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm x_6 = t;
                    int y_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
                        t = a_9;
                        t = new_0_0(t);
                        z_12 = t;
                        t = bottomup_1_0(a_0, t);
                        k_13 = t;
                        t = (ATerm) ATempty;
                        t = a_0(t);
                        l_13 = t;
                        t = (ATerm) ATinsert(CheckATermList(l_13), k_13);
                        t = a_0(t);
                        a_13 = t;
                        t = z_12;
                        t = bottomup_1_0(a_0, t);
                        j_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, j_13);
                        t = a_0(t);
                        i_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, i_13);
                        t = a_0(t);
                        c_13 = t;
                        t = y_8;
                        t = bottomup_1_0(a_0, t);
                        e_13 = t;
                        t = z_12;
                        t = bottomup_1_0(a_0, t);
                        h_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, h_13);
                        t = a_0(t);
                        g_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, g_13);
                        t = a_0(t);
                        f_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_13, f_13);
                        t = a_0(t);
                        d_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, c_13, d_13);
                        t = a_0(t);
                        b_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, a_13, b_13);
                        t = a_0(t);
                        LocalPopChoice(y_6);
                      }
                    else
                      {
                        t = x_6;
                        t = a_9;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            y_8 = ATgetArgument(t, 0);
            t = y_8;
            if(match_cons(t, sym_Id_0))
              {
                ATerm z_6 = t;
                int a_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_q_6;
                    t = a_0(t);
                    LocalPopChoice(a_7);
                  }
                else
                  {
                    t = z_6;
                    t = a_9;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm b_7 = t;
                    int e_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_i_6;
                        t = a_0(t);
                        LocalPopChoice(e_7);
                      }
                    else
                      {
                        t = b_7;
                        t = a_9;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        t_8 = ATgetArgument(t, 0);
                        {
                          ATerm i_7 = t;
                          int l_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, t_8);
                              t = a_0(t);
                              LocalPopChoice(l_7);
                            }
                          else
                            {
                              t = i_7;
                              t = a_9;
                            }
                        }
                      }
                    else
                      {
                        t = a_9;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                y_8 = ATgetArgument(t, 0);
                v_8 = ATgetArgument(t, 1);
                t = v_8;
                if(match_cons(t, sym_Id_0))
                  {
                    t = y_8;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = v_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = y_8;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                t_8 = ATgetArgument(t, 0);
                                u_8 = ATgetArgument(t, 1);
                                t = y_8;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    t_8 = ATgetArgument(t, 0);
                                    u_8 = ATgetArgument(t, 1);
                                    t = y_8;
                                  }
                                else
                                  {
                                    t = y_8;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        n_8 = ATgetArgument(t, 0);
                        s_8 = ATgetArgument(t, 1);
                        t = n_8;
                        if(match_cons(t, sym_Match_1))
                          {
                            m_8 = ATgetArgument(t, 0);
                            t = m_8;
                            if(match_cons(t, sym_Op_2))
                              {
                                f_8 = ATgetArgument(t, 0);
                                w_7 = ATgetArgument(t, 1);
                                t = y_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = v_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm m_7 = t;
                                        int n_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_6;
                                            t = a_0(t);
                                            LocalPopChoice(n_7);
                                          }
                                        else
                                          {
                                            t = m_7;
                                            t = a_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_8 = ATgetArgument(t, 0);
                                            u_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm o_7 = t;
                                              int p_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm b_15 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                  t = a_0(t);
                                                  b_15 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, b_15);
                                                  t = a_0(t);
                                                  LocalPopChoice(p_7);
                                                }
                                              else
                                                {
                                                  t = o_7;
                                                  t = a_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                t = t_8;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    l_8 = ATgetArgument(t, 0);
                                                    x_7 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm q_7 = t;
                                                      int r_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, l_8, f_8);
                                                          {
                                                            ATerm t_7 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm j_0 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    j_0 = ATgetArgument(t, 0);
                                                                    if((j_0 != ATgetArgument(t, 1)))
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
                                                                t = t_7;
                                                              }
                                                          }
                                                          t = term_q_6;
                                                          t = bottomup_1_0(a_0, t);
                                                          LocalPopChoice(r_7);
                                                        }
                                                      else
                                                        {
                                                          t = q_7;
                                                          {
                                                            ATerm u_7 = t;
                                                            int y_7 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm n_15 = NULL;
                                                                t = f_8;
                                                                if((l_8 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, x_7, w_7);
                                                                t = genzip_4_0(b_0, f_0, h_0, m_0, t);
                                                                n_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, l_8, x_7)), s_8));
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(y_7);
                                                              }
                                                            else
                                                              {
                                                                t = u_7;
                                                                {
                                                                  ATerm z_7 = t;
                                                                  int e_8 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm a_16 = NULL;
                                                                      t = m_8;
                                                                      if((t_8 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                                      t = a_0(t);
                                                                      a_16 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_16, s_8);
                                                                      t = a_0(t);
                                                                      LocalPopChoice(e_8);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = z_7;
                                                                      t = a_9;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm g_8 = t;
                                                    int h_8 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm e_16 = NULL;
                                                        t = m_8;
                                                        if((t_8 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                        t = a_0(t);
                                                        e_16 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_16, s_8);
                                                        t = a_0(t);
                                                        LocalPopChoice(h_8);
                                                      }
                                                    else
                                                      {
                                                        t = g_8;
                                                        t = a_9;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm i_8 = t;
                                                      int j_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_16 = NULL;
                                                          t = m_8;
                                                          if((t_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, t_8);
                                                          t = a_0(t);
                                                          o_16 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_16, s_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(j_8);
                                                        }
                                                      else
                                                        {
                                                          t = i_8;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_8 = t;
                                                          int p_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_16 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              t_16 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, t_16);
                                                              t = a_0(t);
                                                              LocalPopChoice(p_8);
                                                            }
                                                          else
                                                            {
                                                              t = o_8;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = y_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = v_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm q_8 = t;
                                        int r_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_6;
                                            t = a_0(t);
                                            LocalPopChoice(r_8);
                                          }
                                        else
                                          {
                                            t = q_8;
                                            t = a_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_8 = ATgetArgument(t, 0);
                                            u_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm x_8 = t;
                                              int z_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm k_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                  t = a_0(t);
                                                  k_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, k_17);
                                                  t = a_0(t);
                                                  LocalPopChoice(z_8);
                                                }
                                              else
                                                {
                                                  t = x_8;
                                                  t = a_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                {
                                                  ATerm b_9 = t;
                                                  int c_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_17 = NULL;
                                                      t = m_8;
                                                      if((t_8 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, t_8);
                                                      t = a_0(t);
                                                      o_17 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_17, s_8);
                                                      t = a_0(t);
                                                      LocalPopChoice(c_9);
                                                    }
                                                  else
                                                    {
                                                      t = b_9;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm e_9 = t;
                                                      int f_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_17 = NULL;
                                                          t = m_8;
                                                          if((t_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                          t = a_0(t);
                                                          u_17 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_17, s_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(f_9);
                                                        }
                                                      else
                                                        {
                                                          t = e_9;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_9 = t;
                                                          int i_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_18 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              b_18 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, b_18);
                                                              t = a_0(t);
                                                              LocalPopChoice(i_9);
                                                            }
                                                          else
                                                            {
                                                              t = g_9;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
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
                                m_8 = ATgetArgument(t, 0);
                                t = m_8;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    f_8 = ATgetArgument(t, 0);
                                    t = y_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm j_9 = t;
                                            int k_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_6;
                                                t = a_0(t);
                                                LocalPopChoice(k_9);
                                              }
                                            else
                                              {
                                                t = j_9;
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm l_9 = t;
                                                  int m_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm k_18 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                      t = a_0(t);
                                                      k_18 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, k_18);
                                                      t = a_0(t);
                                                      LocalPopChoice(m_9);
                                                    }
                                                  else
                                                    {
                                                      t = l_9;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm n_9 = t;
                                                int o_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm q_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_9);
                                                    {
                                                      ATerm r_9 = t;
                                                      int v_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_18 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_8);
                                                          t = a_0(t);
                                                          o_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_18, s_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(v_9);
                                                        }
                                                      else
                                                        {
                                                          t = r_9;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_9;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        t = t_8;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            l_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm w_9 = t;
                                                              int x_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_18 = NULL,y_18 = NULL;
                                                                  t = f_8;
                                                                  if((l_8 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, l_8);
                                                                  t = a_0(t);
                                                                  y_18 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, y_18);
                                                                  t = a_0(t);
                                                                  x_18 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_18, s_8);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(x_9);
                                                                }
                                                              else
                                                                {
                                                                  t = w_9;
                                                                  t = a_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = a_9;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            t_8 = ATgetArgument(t, 0);
                                                            u_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm y_9 = t;
                                                              int z_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_19 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                                  t = a_0(t);
                                                                  m_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, m_19);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(z_9);
                                                                }
                                                              else
                                                                {
                                                                  t = y_9;
                                                                  t = a_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = a_9;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = y_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm a_10 = t;
                                            int e_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_6;
                                                t = a_0(t);
                                                LocalPopChoice(e_10);
                                              }
                                            else
                                              {
                                                t = a_10;
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_10 = t;
                                                  int h_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_19 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                      t = a_0(t);
                                                      z_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, z_19);
                                                      t = a_0(t);
                                                      LocalPopChoice(h_10);
                                                    }
                                                  else
                                                    {
                                                      t = g_10;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm l_10 = t;
                                                int m_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm n_10 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_10);
                                                    {
                                                      ATerm p_10 = t;
                                                      int q_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_20 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_8);
                                                          t = a_0(t);
                                                          f_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_20, s_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(q_10);
                                                        }
                                                      else
                                                        {
                                                          t = p_10;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_10;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_11 = t;
                                                          int b_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              m_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, m_20);
                                                              t = a_0(t);
                                                              LocalPopChoice(b_11);
                                                            }
                                                          else
                                                            {
                                                              t = a_11;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
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
                                    m_8 = ATgetArgument(t, 0);
                                    a_8 = ATgetArgument(t, 1);
                                    b_8 = ATgetArgument(t, 2);
                                    t = y_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm p_11 = t;
                                            int q_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_6;
                                                t = a_0(t);
                                                LocalPopChoice(q_11);
                                              }
                                            else
                                              {
                                                t = p_11;
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm r_11 = t;
                                                  int x_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                      t = a_0(t);
                                                      f_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, f_21);
                                                      t = a_0(t);
                                                      LocalPopChoice(x_12);
                                                    }
                                                  else
                                                    {
                                                      t = r_11;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm y_12 = t;
                                                int m_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm n_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_13);
                                                    {
                                                      ATerm o_13 = t;
                                                      int p_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm n_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, m_8, a_8, b_8);
                                                          t = a_0(t);
                                                          n_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_21, s_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(p_13);
                                                        }
                                                      else
                                                        {
                                                          t = o_13;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = y_12;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_13 = t;
                                                          int r_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_21 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              v_21 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, v_21);
                                                              t = a_0(t);
                                                              LocalPopChoice(r_13);
                                                            }
                                                          else
                                                            {
                                                              t = q_13;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = y_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm s_13 = t;
                                            int t_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_6;
                                                t = a_0(t);
                                                LocalPopChoice(t_13);
                                              }
                                            else
                                              {
                                                t = s_13;
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm u_13 = t;
                                                  int v_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                      t = a_0(t);
                                                      w_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, w_22);
                                                      t = a_0(t);
                                                      LocalPopChoice(v_13);
                                                    }
                                                  else
                                                    {
                                                      t = u_13;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    u_8 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm w_13 = t;
                                                      int x_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                          t = a_0(t);
                                                          i_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, i_23);
                                                          t = a_0(t);
                                                          LocalPopChoice(x_13);
                                                        }
                                                      else
                                                        {
                                                          t = w_13;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_9;
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
                            n_8 = ATgetArgument(t, 0);
                            t = n_8;
                            if(match_cons(t, sym_Op_2))
                              {
                                m_8 = ATgetArgument(t, 0);
                                a_8 = ATgetArgument(t, 1);
                                t = y_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = v_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm y_13 = t;
                                        int z_13 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_6;
                                            t = a_0(t);
                                            LocalPopChoice(z_13);
                                          }
                                        else
                                          {
                                            t = y_13;
                                            t = a_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_8 = ATgetArgument(t, 0);
                                            u_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm a_14 = t;
                                              int b_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm b_24 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                  t = a_0(t);
                                                  b_24 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, b_24);
                                                  t = a_0(t);
                                                  LocalPopChoice(b_14);
                                                }
                                              else
                                                {
                                                  t = a_14;
                                                  t = a_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                t = t_8;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    l_8 = ATgetArgument(t, 0);
                                                    x_7 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm c_14 = t;
                                                      int d_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, l_8, m_8);
                                                          {
                                                            ATerm e_14 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm t_0 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    t_0 = ATgetArgument(t, 0);
                                                                    if((t_0 != ATgetArgument(t, 1)))
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
                                                                t = e_14;
                                                              }
                                                          }
                                                          t = term_q_6;
                                                          t = bottomup_1_0(a_0, t);
                                                          LocalPopChoice(d_14);
                                                        }
                                                      else
                                                        {
                                                          t = c_14;
                                                          {
                                                            ATerm f_14 = t;
                                                            int g_14 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm g_24 = NULL;
                                                                t = m_8;
                                                                if((l_8 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, x_7, a_8);
                                                                t = genzip_4_0(o_0, p_0, q_0, r_0, t);
                                                                g_24 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, l_8, x_7)));
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(g_14);
                                                              }
                                                            else
                                                              {
                                                                t = f_14;
                                                                {
                                                                  ATerm h_14 = t;
                                                                  int j_14 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = n_8;
                                                                      if((t_8 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                                      t = a_0(t);
                                                                      LocalPopChoice(j_14);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = h_14;
                                                                      t = a_9;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm k_14 = t;
                                                    int l_14 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = n_8;
                                                        if((t_8 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                        t = a_0(t);
                                                        LocalPopChoice(l_14);
                                                      }
                                                    else
                                                      {
                                                        t = k_14;
                                                        t = a_9;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm m_14 = t;
                                                      int n_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = n_8;
                                                          if((t_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, t_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(n_14);
                                                        }
                                                      else
                                                        {
                                                          t = m_14;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_14 = t;
                                                          int q_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_25 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              y_25 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, y_25);
                                                              t = a_0(t);
                                                              LocalPopChoice(q_14);
                                                            }
                                                          else
                                                            {
                                                              t = p_14;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = y_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = v_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm r_14 = t;
                                        int s_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_6;
                                            t = a_0(t);
                                            LocalPopChoice(s_14);
                                          }
                                        else
                                          {
                                            t = r_14;
                                            t = a_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_8 = ATgetArgument(t, 0);
                                            u_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm t_14 = t;
                                              int u_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm b_27 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                  t = a_0(t);
                                                  b_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, b_27);
                                                  t = a_0(t);
                                                  LocalPopChoice(u_14);
                                                }
                                              else
                                                {
                                                  t = t_14;
                                                  t = a_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                {
                                                  ATerm v_14 = t;
                                                  int w_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = n_8;
                                                      if((t_8 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, t_8);
                                                      t = a_0(t);
                                                      LocalPopChoice(w_14);
                                                    }
                                                  else
                                                    {
                                                      t = v_14;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm x_14 = t;
                                                      int y_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = n_8;
                                                          if((t_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(y_14);
                                                        }
                                                      else
                                                        {
                                                          t = x_14;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_14 = t;
                                                          int a_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_28 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              f_28 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, f_28);
                                                              t = a_0(t);
                                                              LocalPopChoice(a_15);
                                                            }
                                                          else
                                                            {
                                                              t = z_14;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
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
                                n_8 = ATgetArgument(t, 0);
                                t = n_8;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    m_8 = ATgetArgument(t, 0);
                                    t = y_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm c_15 = t;
                                            int d_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_6;
                                                t = a_0(t);
                                                LocalPopChoice(d_15);
                                              }
                                            else
                                              {
                                                t = c_15;
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm e_15 = t;
                                                  int f_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                      t = a_0(t);
                                                      q_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, q_28);
                                                      t = a_0(t);
                                                      LocalPopChoice(f_15);
                                                    }
                                                  else
                                                    {
                                                      t = e_15;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm g_15 = t;
                                                int h_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm i_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(h_15);
                                                    {
                                                      ATerm l_15 = t;
                                                      int m_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, n_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(m_15);
                                                        }
                                                      else
                                                        {
                                                          t = l_15;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = g_15;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        t = t_8;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            l_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm v_15 = t;
                                                              int y_15 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_29 = NULL;
                                                                  t = m_8;
                                                                  if((l_8 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, l_8);
                                                                  t = a_0(t);
                                                                  h_29 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, h_29);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(y_15);
                                                                }
                                                              else
                                                                {
                                                                  t = v_15;
                                                                  t = a_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = a_9;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            t_8 = ATgetArgument(t, 0);
                                                            u_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm z_15 = t;
                                                              int b_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_30 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                                  t = a_0(t);
                                                                  b_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, b_30);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(b_16);
                                                                }
                                                              else
                                                                {
                                                                  t = z_15;
                                                                  t = a_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = a_9;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = y_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm c_16 = t;
                                            int d_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_6;
                                                t = a_0(t);
                                                LocalPopChoice(d_16);
                                              }
                                            else
                                              {
                                                t = c_16;
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm f_16 = t;
                                                  int g_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                      t = a_0(t);
                                                      y_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, y_30);
                                                      t = a_0(t);
                                                      LocalPopChoice(g_16);
                                                    }
                                                  else
                                                    {
                                                      t = f_16;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm h_16 = t;
                                                int j_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm m_16 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(j_16);
                                                    {
                                                      ATerm n_16 = t;
                                                      int p_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, n_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(p_16);
                                                        }
                                                      else
                                                        {
                                                          t = n_16;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = h_16;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_16 = t;
                                                          int r_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              h_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, h_31);
                                                              t = a_0(t);
                                                              LocalPopChoice(r_16);
                                                            }
                                                          else
                                                            {
                                                              t = q_16;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
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
                                    n_8 = ATgetArgument(t, 0);
                                    s_8 = ATgetArgument(t, 1);
                                    c_8 = ATgetArgument(t, 2);
                                    t = y_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm s_16 = t;
                                            int u_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_6;
                                                t = a_0(t);
                                                LocalPopChoice(u_16);
                                              }
                                            else
                                              {
                                                t = s_16;
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm v_16 = t;
                                                  int w_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                      t = a_0(t);
                                                      x_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, x_31);
                                                      t = a_0(t);
                                                      LocalPopChoice(w_16);
                                                    }
                                                  else
                                                    {
                                                      t = v_16;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm y_16 = t;
                                                int z_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm a_17 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(z_16);
                                                    {
                                                      ATerm b_17 = t;
                                                      int c_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, n_8, s_8, c_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(c_17);
                                                        }
                                                      else
                                                        {
                                                          t = b_17;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = y_16;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm d_17 = t;
                                                          int f_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              n_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, n_32);
                                                              t = a_0(t);
                                                              LocalPopChoice(f_17);
                                                            }
                                                          else
                                                            {
                                                              t = d_17;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
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
                                        n_8 = ATgetArgument(t, 0);
                                        s_8 = ATgetArgument(t, 1);
                                        t = y_8;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = v_8;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm h_17 = t;
                                                int i_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_q_6;
                                                    t = a_0(t);
                                                    LocalPopChoice(i_17);
                                                  }
                                                else
                                                  {
                                                    t = h_17;
                                                    {
                                                      ATerm l_17 = t;
                                                      int m_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_8);
                                                          t = a_0(t);
                                                          u_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, n_8, u_33);
                                                          t = a_0(t);
                                                          LocalPopChoice(m_17);
                                                        }
                                                      else
                                                        {
                                                          t = l_17;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    u_8 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm n_17 = t;
                                                      int p_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_34 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                          t = a_0(t);
                                                          c_34 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, c_34);
                                                          t = a_0(t);
                                                          LocalPopChoice(p_17);
                                                        }
                                                      else
                                                        {
                                                          t = n_17;
                                                          {
                                                            ATerm q_17 = t;
                                                            int r_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm k_34 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_8);
                                                                t = a_0(t);
                                                                k_34 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, n_8, k_34);
                                                                t = a_0(t);
                                                                LocalPopChoice(r_17);
                                                              }
                                                            else
                                                              {
                                                                t = q_17;
                                                                t = a_9;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm v_17 = t;
                                                          int w_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_8);
                                                              t = a_0(t);
                                                              s_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, n_8, s_34);
                                                              t = a_0(t);
                                                              LocalPopChoice(w_17);
                                                            }
                                                          else
                                                            {
                                                              t = v_17;
                                                              {
                                                                ATerm x_17 = t;
                                                                int a_18 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm y_34 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                                    t = a_0(t);
                                                                    y_34 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, y_34);
                                                                    t = a_0(t);
                                                                    LocalPopChoice(a_18);
                                                                  }
                                                                else
                                                                  {
                                                                    t = x_17;
                                                                    t = a_9;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm c_18 = t;
                                                        int d_18 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm p_35 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_8);
                                                            t = a_0(t);
                                                            p_35 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, n_8, p_35);
                                                            t = a_0(t);
                                                            LocalPopChoice(d_18);
                                                          }
                                                        else
                                                          {
                                                            t = c_18;
                                                            t = a_9;
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
                                            n_8 = ATgetArgument(t, 0);
                                            s_8 = ATgetArgument(t, 1);
                                            t = y_8;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = v_8;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm e_18 = t;
                                                    int f_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_q_6;
                                                        t = a_0(t);
                                                        LocalPopChoice(f_18);
                                                      }
                                                    else
                                                      {
                                                        t = e_18;
                                                        {
                                                          ATerm g_18 = t;
                                                          int h_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_8);
                                                              t = a_0(t);
                                                              i_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, n_8, i_36);
                                                              t = a_0(t);
                                                              LocalPopChoice(h_18);
                                                            }
                                                          else
                                                            {
                                                              t = g_18;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_18 = t;
                                                          int j_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              p_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, p_36);
                                                              t = a_0(t);
                                                              LocalPopChoice(j_18);
                                                            }
                                                          else
                                                            {
                                                              t = i_18;
                                                              {
                                                                ATerm l_18 = t;
                                                                int m_18 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm w_36 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_8);
                                                                    t = a_0(t);
                                                                    w_36 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, n_8, w_36);
                                                                    t = a_0(t);
                                                                    LocalPopChoice(m_18);
                                                                  }
                                                                else
                                                                  {
                                                                    t = l_18;
                                                                    t = a_9;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            t_8 = ATgetArgument(t, 0);
                                                            u_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm n_18 = t;
                                                              int p_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm j_37 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_8);
                                                                  t = a_0(t);
                                                                  j_37 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, n_8, j_37);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(p_18);
                                                                }
                                                              else
                                                                {
                                                                  t = n_18;
                                                                  {
                                                                    ATerm q_18 = t;
                                                                    int r_18 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm p_37 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                                        t = a_0(t);
                                                                        p_37 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, p_37);
                                                                        t = a_0(t);
                                                                        LocalPopChoice(r_18);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_18;
                                                                        t = a_9;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm s_18 = t;
                                                            int t_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm c_38 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_8);
                                                                t = a_0(t);
                                                                c_38 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, n_8, c_38);
                                                                t = a_0(t);
                                                                LocalPopChoice(t_18);
                                                              }
                                                            else
                                                              {
                                                                t = s_18;
                                                                t = a_9;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = y_8;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = v_8;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm u_18 = t;
                                                    int v_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_q_6;
                                                        t = a_0(t);
                                                        LocalPopChoice(v_18);
                                                      }
                                                    else
                                                      {
                                                        t = u_18;
                                                        t = a_9;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_18 = t;
                                                          int z_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_38 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              n_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, n_38);
                                                              t = a_0(t);
                                                              LocalPopChoice(z_18);
                                                            }
                                                          else
                                                            {
                                                              t = w_18;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            t_8 = ATgetArgument(t, 0);
                                                            u_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm a_19 = t;
                                                              int b_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_38 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                                  t = a_0(t);
                                                                  t_38 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, t_38);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(b_19);
                                                                }
                                                              else
                                                                {
                                                                  t = a_19;
                                                                  t = a_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = a_9;
                                                          }
                                                      }
                                                  }
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
                    y_8 = ATgetArgument(t, 0);
                    v_8 = ATgetArgument(t, 1);
                    t = v_8;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = y_8;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm c_19 = t;
                            int d_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_i_6;
                                t = a_0(t);
                                LocalPopChoice(d_19);
                              }
                            else
                              {
                                t = c_19;
                                t = y_8;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = v_8;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    t_8 = ATgetArgument(t, 0);
                                    u_8 = ATgetArgument(t, 1);
                                    t = y_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        t_8 = ATgetArgument(t, 0);
                                        t = y_8;
                                      }
                                    else
                                      {
                                        t = y_8;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = y_8;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm e_19 = t;
                            int f_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_i_6;
                                t = a_0(t);
                                LocalPopChoice(f_19);
                              }
                            else
                              {
                                t = e_19;
                                {
                                  ATerm g_19 = t;
                                  int h_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = v_8;
                                      if((y_8 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(h_19);
                                    }
                                  else
                                    {
                                      t = g_19;
                                      t = a_9;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = v_8;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    t_8 = ATgetArgument(t, 0);
                                    u_8 = ATgetArgument(t, 1);
                                    {
                                      ATerm i_19 = t;
                                      int j_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_41 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, u_8, v_8);
                                          t = a_0(t);
                                          m_41 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, t_8, m_41);
                                          t = a_0(t);
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
                                                t = v_8;
                                                if((y_8 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(l_19);
                                              }
                                            else
                                              {
                                                t = k_19;
                                                t = a_9;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        t_8 = ATgetArgument(t, 0);
                                        {
                                          ATerm n_19 = t;
                                          int o_19 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = v_8;
                                              if((y_8 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(o_19);
                                            }
                                          else
                                            {
                                              t = n_19;
                                              {
                                                ATerm p_19 = t;
                                                int q_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = t_8;
                                                    t = topdown_1_0(s_0, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                    t = bottomup_1_0(a_0, t);
                                                    LocalPopChoice(q_19);
                                                  }
                                                else
                                                  {
                                                    t = p_19;
                                                    t = a_9;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm r_19 = t;
                                        int s_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = v_8;
                                            if((y_8 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(s_19);
                                          }
                                        else
                                          {
                                            t = r_19;
                                            t = a_9;
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
                        y_8 = ATgetArgument(t, 0);
                        v_8 = ATgetArgument(t, 1);
                        t = v_8;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = y_8;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm t_19 = t;
                                int u_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_i_6;
                                    t = a_0(t);
                                    LocalPopChoice(u_19);
                                  }
                                else
                                  {
                                    t = t_19;
                                    t = v_8;
                                  }
                              }
                            else
                              {
                                ATerm v_19 = t;
                                int w_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_i_6;
                                    t = a_0(t);
                                    LocalPopChoice(w_19);
                                  }
                                else
                                  {
                                    t = v_19;
                                    t = a_9;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = y_8;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm x_19 = t;
                                    int y_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_q_6;
                                        t = a_0(t);
                                        LocalPopChoice(y_19);
                                      }
                                    else
                                      {
                                        t = x_19;
                                        t = v_8;
                                      }
                                  }
                                else
                                  {
                                    ATerm a_20 = t;
                                    int b_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_q_6;
                                        t = a_0(t);
                                        LocalPopChoice(b_20);
                                      }
                                    else
                                      {
                                        t = a_20;
                                        t = a_9;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    n_8 = ATgetArgument(t, 0);
                                    s_8 = ATgetArgument(t, 1);
                                    t = y_8;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        ATerm c_20 = t;
                                        int d_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm y_43 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, y_8, n_8);
                                            t = conc_0_0(t);
                                            y_43 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, y_43, s_8);
                                            t = bottomup_1_0(a_0, t);
                                            LocalPopChoice(d_20);
                                          }
                                        else
                                          {
                                            t = c_20;
                                            t = a_9;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = y_8;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        t = a_9;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm e_20 = t;
                        int g_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm h_20 = ATgetArgument(t, 0);
                                v_8 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(g_20);
                            t = v_8;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm i_20 = t;
                                int j_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_i_6;
                                    t = a_0(t);
                                    LocalPopChoice(j_20);
                                  }
                                else
                                  {
                                    t = i_20;
                                    t = a_9;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm k_20 = t;
                                    int l_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_q_6;
                                        t = a_0(t);
                                        LocalPopChoice(l_20);
                                      }
                                    else
                                      {
                                        t = k_20;
                                        t = a_9;
                                      }
                                  }
                                else
                                  {
                                    t = a_9;
                                  }
                              }
                          }
                        else
                          {
                            t = e_20;
                            if(match_cons(t, sym_All_1))
                              {
                                y_8 = ATgetArgument(t, 0);
                                t = y_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm n_20 = t;
                                    int o_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_i_6;
                                        t = a_0(t);
                                        LocalPopChoice(o_20);
                                      }
                                    else
                                      {
                                        t = n_20;
                                        t = a_9;
                                      }
                                  }
                                else
                                  {
                                    t = a_9;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    y_8 = ATgetArgument(t, 0);
                                    t = y_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm p_20 = t;
                                        int q_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_i_6;
                                            t = a_0(t);
                                            LocalPopChoice(q_20);
                                          }
                                        else
                                          {
                                            t = p_20;
                                            {
                                              ATerm r_20 = t;
                                              int s_20 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm c_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL;
                                                  t = a_9;
                                                  t = new_0_0(t);
                                                  c_45 = t;
                                                  t = bottomup_1_0(a_0, t);
                                                  o_45 = t;
                                                  t = (ATerm) ATempty;
                                                  t = a_0(t);
                                                  p_45 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(p_45), o_45);
                                                  t = a_0(t);
                                                  e_45 = t;
                                                  t = c_45;
                                                  t = bottomup_1_0(a_0, t);
                                                  n_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, n_45);
                                                  t = a_0(t);
                                                  m_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, m_45);
                                                  t = a_0(t);
                                                  g_45 = t;
                                                  t = y_8;
                                                  t = bottomup_1_0(a_0, t);
                                                  i_45 = t;
                                                  t = c_45;
                                                  t = bottomup_1_0(a_0, t);
                                                  l_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, l_45);
                                                  t = a_0(t);
                                                  k_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, k_45);
                                                  t = a_0(t);
                                                  j_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_45, j_45);
                                                  t = a_0(t);
                                                  h_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_45, h_45);
                                                  t = a_0(t);
                                                  f_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_45, f_45);
                                                  t = a_0(t);
                                                  LocalPopChoice(s_20);
                                                }
                                              else
                                                {
                                                  t = r_20;
                                                  t = a_9;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm t_20 = t;
                                            int u_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_6;
                                                t = a_0(t);
                                                LocalPopChoice(u_20);
                                              }
                                            else
                                              {
                                                t = t_20;
                                                {
                                                  ATerm v_20 = t;
                                                  int w_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL;
                                                      t = a_9;
                                                      t = new_0_0(t);
                                                      s_45 = t;
                                                      t = bottomup_1_0(a_0, t);
                                                      f_46 = t;
                                                      t = (ATerm) ATempty;
                                                      t = a_0(t);
                                                      g_46 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(g_46), f_46);
                                                      t = a_0(t);
                                                      t_45 = t;
                                                      t = s_45;
                                                      t = bottomup_1_0(a_0, t);
                                                      e_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, e_46);
                                                      t = a_0(t);
                                                      d_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, d_46);
                                                      t = a_0(t);
                                                      v_45 = t;
                                                      t = y_8;
                                                      t = bottomup_1_0(a_0, t);
                                                      x_45 = t;
                                                      t = s_45;
                                                      t = bottomup_1_0(a_0, t);
                                                      c_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, c_46);
                                                      t = a_0(t);
                                                      b_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, b_46);
                                                      t = a_0(t);
                                                      y_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_45, y_45);
                                                      t = a_0(t);
                                                      w_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_45, w_45);
                                                      t = a_0(t);
                                                      u_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, t_45, u_45);
                                                      t = a_0(t);
                                                      LocalPopChoice(w_20);
                                                    }
                                                  else
                                                    {
                                                      t = v_20;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                t = u_8;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    r_5 = ATgetArgument(t, 0);
                                                    u_5 = ATgetArgument(t, 1);
                                                    t = r_5;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        s_5 = ATgetArgument(t, 0);
                                                        t = t_8;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            l_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm x_20 = t;
                                                              int y_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_46 = NULL,n_46 = NULL,o_46 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, s_5);
                                                                  t = a_0(t);
                                                                  o_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_46, u_5);
                                                                  t = a_0(t);
                                                                  n_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_8, n_46);
                                                                  t = a_0(t);
                                                                  l_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, l_46);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(y_20);
                                                                }
                                                              else
                                                                {
                                                                  t = x_20;
                                                                  {
                                                                    ATerm z_20 = t;
                                                                    int a_21 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
                                                                        t = a_9;
                                                                        t = new_0_0(t);
                                                                        q_46 = t;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        b_47 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = a_0(t);
                                                                        c_47 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(c_47), b_47);
                                                                        t = a_0(t);
                                                                        r_46 = t;
                                                                        t = q_46;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        a_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, a_47);
                                                                        t = a_0(t);
                                                                        z_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, z_46);
                                                                        t = a_0(t);
                                                                        t_46 = t;
                                                                        t = y_8;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        v_46 = t;
                                                                        t = q_46;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        y_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, y_46);
                                                                        t = a_0(t);
                                                                        x_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, x_46);
                                                                        t = a_0(t);
                                                                        w_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_46, w_46);
                                                                        t = a_0(t);
                                                                        u_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_46, u_46);
                                                                        t = a_0(t);
                                                                        s_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, r_46, s_46);
                                                                        t = a_0(t);
                                                                        LocalPopChoice(a_21);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_20;
                                                                        t = a_9;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm b_21 = t;
                                                            int c_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL;
                                                                t = a_9;
                                                                t = new_0_0(t);
                                                                f_47 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                q_47 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                r_47 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(r_47), q_47);
                                                                t = a_0(t);
                                                                g_47 = t;
                                                                t = f_47;
                                                                t = bottomup_1_0(a_0, t);
                                                                p_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, p_47);
                                                                t = a_0(t);
                                                                o_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, o_47);
                                                                t = a_0(t);
                                                                i_47 = t;
                                                                t = y_8;
                                                                t = bottomup_1_0(a_0, t);
                                                                k_47 = t;
                                                                t = f_47;
                                                                t = bottomup_1_0(a_0, t);
                                                                n_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, n_47);
                                                                t = a_0(t);
                                                                m_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, m_47);
                                                                t = a_0(t);
                                                                l_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, k_47, l_47);
                                                                t = a_0(t);
                                                                j_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_47, j_47);
                                                                t = a_0(t);
                                                                h_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, g_47, h_47);
                                                                t = a_0(t);
                                                                LocalPopChoice(c_21);
                                                              }
                                                            else
                                                              {
                                                                t = b_21;
                                                                t = a_9;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = t_8;
                                                        {
                                                          ATerm d_21 = t;
                                                          int e_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
                                                              t = a_9;
                                                              t = new_0_0(t);
                                                              v_47 = t;
                                                              t = bottomup_1_0(a_0, t);
                                                              g_48 = t;
                                                              t = (ATerm) ATempty;
                                                              t = a_0(t);
                                                              h_48 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(h_48), g_48);
                                                              t = a_0(t);
                                                              w_47 = t;
                                                              t = v_47;
                                                              t = bottomup_1_0(a_0, t);
                                                              f_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, f_48);
                                                              t = a_0(t);
                                                              e_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, e_48);
                                                              t = a_0(t);
                                                              y_47 = t;
                                                              t = y_8;
                                                              t = bottomup_1_0(a_0, t);
                                                              a_48 = t;
                                                              t = v_47;
                                                              t = bottomup_1_0(a_0, t);
                                                              d_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, d_48);
                                                              t = a_0(t);
                                                              c_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, c_48);
                                                              t = a_0(t);
                                                              b_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_48, b_48);
                                                              t = a_0(t);
                                                              z_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_47, z_47);
                                                              t = a_0(t);
                                                              x_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_47, x_47);
                                                              t = a_0(t);
                                                              LocalPopChoice(e_21);
                                                            }
                                                          else
                                                            {
                                                              t = d_21;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = t_8;
                                                    {
                                                      ATerm g_21 = t;
                                                      int h_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL;
                                                          t = a_9;
                                                          t = new_0_0(t);
                                                          k_48 = t;
                                                          t = bottomup_1_0(a_0, t);
                                                          x_48 = t;
                                                          t = (ATerm) ATempty;
                                                          t = a_0(t);
                                                          y_48 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(y_48), x_48);
                                                          t = a_0(t);
                                                          l_48 = t;
                                                          t = k_48;
                                                          t = bottomup_1_0(a_0, t);
                                                          w_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, w_48);
                                                          t = a_0(t);
                                                          v_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, v_48);
                                                          t = a_0(t);
                                                          n_48 = t;
                                                          t = y_8;
                                                          t = bottomup_1_0(a_0, t);
                                                          p_48 = t;
                                                          t = k_48;
                                                          t = bottomup_1_0(a_0, t);
                                                          u_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, u_48);
                                                          t = a_0(t);
                                                          t_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_48);
                                                          t = a_0(t);
                                                          s_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_48, s_48);
                                                          t = a_0(t);
                                                          o_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_48, o_48);
                                                          t = a_0(t);
                                                          m_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, l_48, m_48);
                                                          t = a_0(t);
                                                          LocalPopChoice(h_21);
                                                        }
                                                      else
                                                        {
                                                          t = g_21;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm i_21 = t;
                                                      int j_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, t_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(j_21);
                                                        }
                                                      else
                                                        {
                                                          t = i_21;
                                                          {
                                                            ATerm k_21 = t;
                                                            int l_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm c_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
                                                                t = a_9;
                                                                t = new_0_0(t);
                                                                c_49 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                o_49 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                p_49 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(p_49), o_49);
                                                                t = a_0(t);
                                                                e_49 = t;
                                                                t = c_49;
                                                                t = bottomup_1_0(a_0, t);
                                                                n_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, n_49);
                                                                t = a_0(t);
                                                                m_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, m_49);
                                                                t = a_0(t);
                                                                g_49 = t;
                                                                t = y_8;
                                                                t = bottomup_1_0(a_0, t);
                                                                i_49 = t;
                                                                t = c_49;
                                                                t = bottomup_1_0(a_0, t);
                                                                l_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, l_49);
                                                                t = a_0(t);
                                                                k_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, k_49);
                                                                t = a_0(t);
                                                                j_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_49, j_49);
                                                                t = a_0(t);
                                                                h_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, g_49, h_49);
                                                                t = a_0(t);
                                                                f_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, e_49, f_49);
                                                                t = a_0(t);
                                                                LocalPopChoice(l_21);
                                                              }
                                                            else
                                                              {
                                                                t = k_21;
                                                                t = a_9;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm m_21 = t;
                                                    int o_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm u_49 = NULL,v_49 = NULL,z_49 = NULL,a_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL;
                                                        t = a_9;
                                                        t = new_0_0(t);
                                                        u_49 = t;
                                                        t = bottomup_1_0(a_0, t);
                                                        k_50 = t;
                                                        t = (ATerm) ATempty;
                                                        t = a_0(t);
                                                        l_50 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(l_50), k_50);
                                                        t = a_0(t);
                                                        v_49 = t;
                                                        t = u_49;
                                                        t = bottomup_1_0(a_0, t);
                                                        j_50 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, j_50);
                                                        t = a_0(t);
                                                        i_50 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, i_50);
                                                        t = a_0(t);
                                                        a_50 = t;
                                                        t = y_8;
                                                        t = bottomup_1_0(a_0, t);
                                                        e_50 = t;
                                                        t = u_49;
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
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_50, d_50);
                                                        t = a_0(t);
                                                        z_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, v_49, z_49);
                                                        t = a_0(t);
                                                        LocalPopChoice(o_21);
                                                      }
                                                    else
                                                      {
                                                        t = m_21;
                                                        t = a_9;
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
                                        y_8 = ATgetArgument(t, 0);
                                        t = y_8;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm p_21 = t;
                                            int q_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_6;
                                                t = a_0(t);
                                                LocalPopChoice(q_21);
                                              }
                                            else
                                              {
                                                t = p_21;
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            t = a_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            y_8 = ATgetArgument(t, 0);
                                            t = y_8;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm r_21 = t;
                                                int s_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_q_6;
                                                    t = a_0(t);
                                                    LocalPopChoice(s_21);
                                                  }
                                                else
                                                  {
                                                    t = r_21;
                                                    t = a_9;
                                                  }
                                              }
                                            else
                                              {
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                y_8 = ATgetArgument(t, 0);
                                                t = y_8;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm t_21 = t;
                                                    int u_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_q_6;
                                                        t = a_0(t);
                                                        LocalPopChoice(u_21);
                                                      }
                                                    else
                                                      {
                                                        t = t_21;
                                                        t = a_9;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = a_9;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm w_21 = t;
                                                int x_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm y_21 = ATgetArgument(t, 0);
                                                        v_8 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(x_21);
                                                    t = v_8;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm z_21 = t;
                                                        int a_22 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_q_6;
                                                            t = a_0(t);
                                                            LocalPopChoice(a_22);
                                                          }
                                                        else
                                                          {
                                                            t = z_21;
                                                            t = a_9;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = w_21;
                                                    {
                                                      ATerm b_22 = t;
                                                      int c_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm d_22 = ATgetArgument(t, 0);
                                                              v_8 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(c_22);
                                                          {
                                                            ATerm e_22 = t;
                                                            int f_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = v_8;
                                                                t = fetch_1_0(u_0, t);
                                                                t = term_q_6;
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(f_22);
                                                              }
                                                            else
                                                              {
                                                                t = e_22;
                                                                t = a_9;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = b_22;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              y_8 = ATgetArgument(t, 0);
                                                              v_8 = ATgetArgument(t, 1);
                                                              t = v_8;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = y_8;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = v_8;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          t_8 = ATgetArgument(t, 0);
                                                                          u_8 = ATgetArgument(t, 1);
                                                                          t = y_8;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = y_8;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = y_8;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = v_8;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          t_8 = ATgetArgument(t, 0);
                                                                          u_8 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm g_22 = t;
                                                                            int h_22 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm u_51 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, u_8, v_8);
                                                                                t = a_0(t);
                                                                                u_51 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, t_8, u_51);
                                                                                t = a_0(t);
                                                                                LocalPopChoice(h_22);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = g_22;
                                                                                {
                                                                                  ATerm i_22 = t;
                                                                                  int j_22 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = v_8;
                                                                                      if((y_8 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(j_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = i_22;
                                                                                      t = a_9;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm k_22 = t;
                                                                          int l_22 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = v_8;
                                                                              if((y_8 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(l_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_22;
                                                                              t = a_9;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  y_8 = ATgetArgument(t, 0);
                                                                  v_8 = ATgetArgument(t, 1);
                                                                  q_5 = ATgetArgument(t, 2);
                                                                  t = q_5;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm m_22 = t;
                                                                      int n_22 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, v_8);
                                                                          t = a_0(t);
                                                                          LocalPopChoice(n_22);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = m_22;
                                                                          t = a_9;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = a_9;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      y_8 = ATgetArgument(t, 0);
                                                                      v_8 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm o_22 = t;
                                                                        int p_22 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, y_8, v_8);
                                                                            t = a_0(t);
                                                                            LocalPopChoice(p_22);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = o_22;
                                                                            t = a_9;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          y_8 = ATgetArgument(t, 0);
                                                                          t = y_8;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              t_8 = ATgetFirst((ATermList) t);
                                                                              u_8 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm q_22 = t;
                                                                                int r_22 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm k_52 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, u_8);
                                                                                    t = a_0(t);
                                                                                    k_52 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, t_8, k_52);
                                                                                    t = a_0(t);
                                                                                    LocalPopChoice(r_22);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_22;
                                                                                    t = a_9;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm s_22 = t;
                                                                                  int t_22 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_q_6;
                                                                                      t = a_0(t);
                                                                                      LocalPopChoice(t_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = s_22;
                                                                                      t = a_9;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = a_9;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              y_8 = ATgetArgument(t, 0);
                                                                              t = y_8;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  t_8 = ATgetFirst((ATermList) t);
                                                                                  u_8 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm u_22 = t;
                                                                                    int v_22 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm q_52 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, u_8);
                                                                                        t = a_0(t);
                                                                                        q_52 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, t_8, q_52);
                                                                                        t = a_0(t);
                                                                                        LocalPopChoice(v_22);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = u_22;
                                                                                        t = a_9;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm x_22 = t;
                                                                                      int y_22 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_q_6;
                                                                                          t = a_0(t);
                                                                                          LocalPopChoice(y_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_22;
                                                                                          t = a_9;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = a_9;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  y_8 = ATgetArgument(t, 0);
                                                                                  t = y_8;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      t_8 = ATgetFirst((ATermList) t);
                                                                                      u_8 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm z_22 = t;
                                                                                        int a_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm w_52 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, u_8);
                                                                                            t = a_0(t);
                                                                                            w_52 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, w_52);
                                                                                            t = a_0(t);
                                                                                            LocalPopChoice(a_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = z_22;
                                                                                            t = a_9;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm b_23 = t;
                                                                                          int c_23 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_i_6;
                                                                                              t = a_0(t);
                                                                                              LocalPopChoice(c_23);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = b_23;
                                                                                              t = a_9;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = a_9;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      y_8 = ATgetArgument(t, 0);
                                                                                      v_8 = ATgetArgument(t, 1);
                                                                                      q_5 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm d_23 = t;
                                                                                        int e_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL;
                                                                                            t = term_f_23;
                                                                                            t = bottomup_1_0(a_0, t);
                                                                                            e_53 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = a_0(t);
                                                                                            h_53 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(h_53), q_5);
                                                                                            t = a_0(t);
                                                                                            g_53 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(g_53), y_8);
                                                                                            t = a_0(t);
                                                                                            f_53 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, e_53, f_53);
                                                                                            t = a_0(t);
                                                                                            d_53 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, v_8, d_53);
                                                                                            t = a_0(t);
                                                                                            LocalPopChoice(e_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_23;
                                                                                            t = a_9;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          y_8 = ATgetArgument(t, 0);
                                                                                          v_8 = ATgetArgument(t, 1);
                                                                                          q_5 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm g_23 = t;
                                                                                            int h_23 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm m_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, v_8);
                                                                                                t = a_0(t);
                                                                                                o_53 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, q_5);
                                                                                                t = a_0(t);
                                                                                                r_53 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = a_0(t);
                                                                                                s_53 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(s_53), r_53);
                                                                                                t = a_0(t);
                                                                                                q_53 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(q_53), y_8);
                                                                                                t = a_0(t);
                                                                                                p_53 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(p_53), o_53);
                                                                                                t = a_0(t);
                                                                                                m_53 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, m_53);
                                                                                                t = a_0(t);
                                                                                                LocalPopChoice(h_23);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_23;
                                                                                                t = a_9;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              y_8 = ATgetArgument(t, 0);
                                                                                              v_8 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm j_23 = t;
                                                                                                int k_23 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm z_53 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, v_8);
                                                                                                    t = a_0(t);
                                                                                                    z_53 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, z_53);
                                                                                                    t = a_0(t);
                                                                                                    LocalPopChoice(k_23);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = j_23;
                                                                                                    t = a_9;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  y_8 = ATgetArgument(t, 0);
                                                                                                  v_8 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm l_23 = t;
                                                                                                    int m_23 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm d_54 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, y_8);
                                                                                                        t = a_0(t);
                                                                                                        d_54 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_54, v_8);
                                                                                                        t = a_0(t);
                                                                                                        LocalPopChoice(m_23);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = l_23;
                                                                                                        t = a_9;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      y_8 = ATgetArgument(t, 0);
                                                                                                      v_8 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm n_23 = t;
                                                                                                        int o_23 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm h_54 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, v_8);
                                                                                                            t = a_0(t);
                                                                                                            h_54 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, h_54, y_8);
                                                                                                            t = a_0(t);
                                                                                                            LocalPopChoice(o_23);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = n_23;
                                                                                                            t = a_9;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          y_8 = ATgetArgument(t, 0);
                                                                                                          v_8 = ATgetArgument(t, 1);
                                                                                                          t = v_8;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              n_8 = ATgetArgument(t, 0);
                                                                                                              s_8 = ATgetArgument(t, 1);
                                                                                                              t = y_8;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = v_8;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm p_23 = t;
                                                                                                                  int q_23 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm s_54 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, y_8, n_8);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      s_54 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, s_54, s_8);
                                                                                                                      t = bottomup_1_0(a_0, t);
                                                                                                                      LocalPopChoice(q_23);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = p_23;
                                                                                                                      t = a_9;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  n_8 = ATgetArgument(t, 0);
                                                                                                                  s_8 = ATgetArgument(t, 1);
                                                                                                                  c_8 = ATgetArgument(t, 2);
                                                                                                                  t = c_8;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = s_8;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = n_8;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              m_8 = ATgetArgument(t, 0);
                                                                                                                              t = y_8;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = v_8;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      t_8 = ATgetFirst((ATermList) t);
                                                                                                                                      u_8 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = u_8;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = t_8;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              l_8 = ATgetArgument(t, 0);
                                                                                                                                              x_7 = ATgetArgument(t, 1);
                                                                                                                                              s_7 = ATgetArgument(t, 2);
                                                                                                                                              v_7 = ATgetArgument(t, 3);
                                                                                                                                              t = s_7;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = x_7;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm r_23 = t;
                                                                                                                                                      int s_23 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = m_8;
                                                                                                                                                          if((l_8 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = v_7;
                                                                                                                                                          {
                                                                                                                                                            ATerm t_23 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm v_0 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm u_23 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(u_23, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((l_8 != ATgetArgument(u_23, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(u_23, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm v_23 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(v_23) != AT_LIST) || !(ATisEmpty(v_23))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm w_23 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(w_23) != AT_LIST) || !(ATisEmpty(w_23))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  return(t);
                                                                                                                                                                }
                                                                                                                                                                t = oncetd_1_0(v_0, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = t_23;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = v_7;
                                                                                                                                                          t = bottomup_1_0(a_0, t);
                                                                                                                                                          LocalPopChoice(s_23);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = r_23;
                                                                                                                                                          t = a_9;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = a_9;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = a_9;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = a_9;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = a_9;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = a_9;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = y_8;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = v_8;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = a_9;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = y_8;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = v_8;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = a_9;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = y_8;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = v_8;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = a_9;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = y_8;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = v_8;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = a_9;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              y_8 = ATgetArgument(t, 0);
                                                                                                              v_8 = ATgetArgument(t, 1);
                                                                                                              t = y_8;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = v_8;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = a_9;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = a_9;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
ATerm topdown_1_0 (ATerm v_106 (ATerm), ATerm t)
{
  static ATerm w_0 (ATerm t)
  {
    t = topdown_1_0(v_106, t);
    return(t);
  }
  t = v_106(t);
  t = SRTS_all(w_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm z_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(y_23);
      {
        ATerm g_56 = NULL,h_56 = NULL;
        g_56 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm a_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        h_56 = t;
        t = SSLgetAnnotations(g_56);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_24 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) c_24) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_24 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(d_24) != AT_LIST) || !(ATisEmpty(d_24))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_56;
      }
    }
  else
    {
      t = x_23;
      {
        ATerm e_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm h_24 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) h_24) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm i_24 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_24);
            _fail(t);
          }
        else
          {
            t = e_24;
          }
      }
    }
  return(t);
}
static ATerm g_5 (ATerm y_80, ATerm x_80, ATerm t)
{
  t = y_80;
  t = topdown_1_0(x_0, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, y_80);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      t_56 = ATgetArgument(t, 0);
      w_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_56;
  if(match_cons(t, sym_Match_1))
    {
      u_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_56;
  if(match_cons(t, sym_Var_1))
    {
      v_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_56;
  if(match_cons(t, sym_Seq_2))
    {
      x_56 = ATgetArgument(t, 0);
      r_56 = ATgetArgument(t, 1);
      t = x_56;
      if(match_cons(t, sym_Build_1))
        {
          y_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_56;
      if(match_cons(t, sym_Var_1))
        {
          q_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_56;
      if((v_56 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_56)), r_56);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          x_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_56;
      if(match_cons(t, sym_Var_1))
        {
          y_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_56;
      if((v_56 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_56));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,t_57 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      j_57 = ATgetArgument(t, 0);
      l_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_57;
  if(match_cons(t, sym_Build_1))
    {
      k_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_57;
  if(match_cons(t, sym_Seq_2))
    {
      t_57 = ATgetArgument(t, 0);
      h_57 = ATgetArgument(t, 1);
      t = t_57;
      if(match_cons(t, sym_Match_1))
        {
          g_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_57;
      if((k_57 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_57), h_57);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          t_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_57;
      if((k_57 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, k_57);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      h_58 = ATgetArgument(t, 0);
      j_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_58;
  if(match_cons(t, sym_Match_1))
    {
      i_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_58;
  if(match_cons(t, sym_Seq_2))
    {
      k_58 = ATgetArgument(t, 0);
      f_58 = ATgetArgument(t, 1);
      t = k_58;
      if(match_cons(t, sym_Match_1))
        {
          e_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_58;
      if((i_58 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_58), f_58);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          k_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_58;
      if((i_58 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, i_58);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,x_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      x_58 = ATgetArgument(t, 0);
      z_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_58;
  if(match_cons(t, sym_Build_1))
    {
      ATerm o_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_58;
  if(match_cons(t, sym_Seq_2))
    {
      a_59 = ATgetArgument(t, 0);
      b_59 = ATgetArgument(t, 1);
      t = a_59;
      if(match_cons(t, sym_PrimT_3))
        {
          s_58 = ATgetArgument(t, 0);
          t_58 = ATgetArgument(t, 1);
          u_58 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, s_58, t_58, u_58), b_59);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          a_59 = ATgetArgument(t, 0);
          b_59 = ATgetArgument(t, 1);
          c_59 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, a_59, b_59, c_59);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL,t_59 = NULL,v_59 = NULL,w_59 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      t_59 = ATgetArgument(t, 0);
      v_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_59;
  if(match_cons(t, sym_Build_1))
    {
      ATerm p_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_59;
  if(match_cons(t, sym_Seq_2))
    {
      w_59 = ATgetArgument(t, 0);
      r_59 = ATgetArgument(t, 1);
      t = w_59;
      if(match_cons(t, sym_Build_1))
        {
          q_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_59), r_59);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          w_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, w_59);
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_24 = ATgetArgument(t, 0);
      if(((ATgetType(r_24) != AT_LIST) || !(ATisEmpty(r_24))))
        _fail(t);
      {
        ATerm s_24 = ATgetArgument(t, 1);
        if(((ATgetType(s_24) != AT_LIST) || !(ATisEmpty(s_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_24 = ATgetArgument(t, 0);
      if(((ATgetType(t_24) == AT_LIST) && !(ATisEmpty(t_24))))
        {
          d_61 = ATgetFirst((ATermList) t_24);
          e_61 = (ATerm) ATgetNext((ATermList) t_24);
        }
      else
        _fail(t);
      {
        ATerm u_24 = ATgetArgument(t, 1);
        if(((ATgetType(u_24) == AT_LIST) && !(ATisEmpty(u_24))))
          {
            f_61 = ATgetFirst((ATermList) u_24);
            g_61 = (ATerm) ATgetNext((ATermList) u_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_61, f_61), (ATerm) ATmakeAppl(sym__2, e_61, g_61));
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL;
  if(match_cons(t, sym__2))
    {
      h_61 = ATgetArgument(t, 0);
      i_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_61), h_61);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL;
  if(match_cons(t, sym__2))
    {
      j_61 = ATgetArgument(t, 0);
      k_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_61), (ATerm) ATmakeAppl(sym_Match_1, k_61));
  return(t);
}
static ATerm c_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_24 = ATgetArgument(t, 0);
      if(((ATgetType(w_24) != AT_LIST) || !(ATisEmpty(w_24))))
        _fail(t);
      {
        ATerm y_24 = ATgetArgument(t, 1);
        if(((ATgetType(y_24) != AT_LIST) || !(ATisEmpty(y_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_24 = ATgetArgument(t, 0);
      if(((ATgetType(z_24) == AT_LIST) && !(ATisEmpty(z_24))))
        {
          r_61 = ATgetFirst((ATermList) z_24);
          s_61 = (ATerm) ATgetNext((ATermList) z_24);
        }
      else
        _fail(t);
      {
        ATerm a_25 = ATgetArgument(t, 1);
        if(((ATgetType(a_25) == AT_LIST) && !(ATisEmpty(a_25))))
          {
            t_61 = ATgetFirst((ATermList) a_25);
            u_61 = (ATerm) ATgetNext((ATermList) a_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_61, t_61), (ATerm) ATmakeAppl(sym__2, s_61, u_61));
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL;
  if(match_cons(t, sym__2))
    {
      v_61 = ATgetArgument(t, 0);
      w_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_61), v_61);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL;
  if(match_cons(t, sym__2))
    {
      x_61 = ATgetArgument(t, 0);
      y_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_61), (ATerm) ATmakeAppl(sym_Match_1, y_61));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      l_60 = ATgetArgument(t, 0);
      p_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_60;
  if(match_cons(t, sym_Build_1))
    {
      m_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_60;
  if(match_cons(t, sym_Op_2))
    {
      n_60 = ATgetArgument(t, 0);
      o_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_60;
  if(match_cons(t, sym_Seq_2))
    {
      q_60 = ATgetArgument(t, 0);
      j_60 = ATgetArgument(t, 1);
      {
        ATerm c_61 = NULL;
        t = q_60;
        if(match_cons(t, sym_Match_1))
          {
            r_60 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_60;
        if(match_cons(t, sym_Op_2))
          {
            h_60 = ATgetArgument(t, 0);
            i_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_60;
        if((n_60 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, o_60, i_60);
        t = genzip_4_0(y_0, z_0, a_1, b_1, t);
        c_61 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_61), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, n_60, o_60)), j_60));
      }
    }
  else
    {
      ATerm o_61 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          q_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_60;
      if(match_cons(t, sym_Op_2))
        {
          r_60 = ATgetArgument(t, 0);
          s_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_60;
      if((n_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, o_60, s_60);
      t = genzip_4_0(c_1, d_1, e_1, f_1, t);
      o_61 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_61), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, n_60, o_60)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm u_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL;
  x_62 = t;
  if(match_cons(t, sym_Seq_2))
    {
      y_62 = ATgetArgument(t, 0);
      c_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_62;
  if(match_cons(t, sym_Build_1))
    {
      z_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_62;
  if(match_cons(t, sym_Op_2))
    {
      a_63 = ATgetArgument(t, 0);
      {
        ATerm b_25 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_63;
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            d_63 = ATgetArgument(t, 0);
            {
              ATerm e_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_25);
        t = d_63;
        if(match_cons(t, sym_Match_1))
          {
            e_63 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_63;
        if(match_cons(t, sym_Op_2))
          {
            u_62 = ATgetArgument(t, 0);
            {
              ATerm f_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_63, u_62);
        {
          ATerm g_25 = t;
          if((PushChoice() == 0))
            {
              ATerm l_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  l_1 = ATgetArgument(t, 0);
                  if((l_1 != ATgetArgument(t, 1)))
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
              t = g_25;
            }
        }
        t = term_q_6;
      }
    else
      {
        t = c_25;
        if(match_cons(t, sym_Match_1))
          {
            d_63 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_63;
        if(match_cons(t, sym_Op_2))
          {
            e_63 = ATgetArgument(t, 0);
            {
              ATerm h_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_63, e_63);
        {
          ATerm i_25 = t;
          if((PushChoice() == 0))
            {
              ATerm u_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  u_1 = ATgetArgument(t, 0);
                  if((u_1 != ATgetArgument(t, 1)))
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
              t = i_25;
            }
        }
        t = term_q_6;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm z_107 (ATerm), ATerm t)
{
  static ATerm i_63 (ATerm t)
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_107(t);
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = SRTS_one(i_63, t);
      }
    return(t);
  }
  t = i_63(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL;
  b_64 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_64 = ATgetArgument(t, 0);
      j_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_64;
  if(match_cons(t, sym_Let_2))
    {
      k_64 = ATgetArgument(t, 0);
      m_64 = ATgetArgument(t, 1);
      {
        ATerm r_64 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, c_64, k_64);
        t = conc_0_0(t);
        r_64 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, r_64, m_64);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          k_64 = ATgetArgument(t, 0);
          m_64 = ATgetArgument(t, 1);
          n_64 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_64;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_64 = ATgetFirst((ATermList) t);
          i_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_64;
      if(match_cons(t, sym_SDefT_4))
        {
          e_64 = ATgetArgument(t, 0);
          f_64 = ATgetArgument(t, 1);
          g_64 = ATgetArgument(t, 2);
          h_64 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = f_64;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_64;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_64;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_64;
      if(match_cons(t, sym_SVar_1))
        {
          l_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_64;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_64;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_64;
      if((e_64 != t))
        {
          _fail(t);
        }
      t = h_64;
      {
        ATerm l_25 = t;
        if((PushChoice() == 0))
          {
            static ATerm g_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm m_25 = ATgetArgument(t, 0);
                  if(match_cons(m_25, sym_SVar_1))
                    {
                      if((e_64 != ATgetArgument(m_25, 0)))
                        {
                          _fail(ATgetArgument(m_25, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm n_25 = ATgetArgument(t, 1);
                    if(((ATgetType(n_25) != AT_LIST) || !(ATisEmpty(n_25))))
                      _fail(t);
                  }
                  {
                    ATerm o_25 = ATgetArgument(t, 2);
                    if(((ATgetType(o_25) != AT_LIST) || !(ATisEmpty(o_25))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(g_1, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_25;
          }
      }
      t = h_64;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,h_65 = NULL,i_65 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      h_65 = ATgetArgument(t, 0);
      t = h_65;
      if(match_cons(t, sym_Seq_2))
        {
          f_65 = ATgetArgument(t, 0);
          b_65 = ATgetArgument(t, 1);
          t = f_65;
          if(match_cons(t, sym_Where_1))
            {
              a_65 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_65;
          if(match_cons(t, sym_Seq_2))
            {
              c_65 = ATgetArgument(t, 0);
              e_65 = ATgetArgument(t, 1);
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
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, a_65, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_65), e_65)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              f_65 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, f_65);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          h_65 = ATgetArgument(t, 0);
          t = h_65;
          if(match_cons(t, sym_Test_1))
            {
              f_65 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, f_65);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              h_65 = ATgetArgument(t, 0);
              t = h_65;
              if(match_cons(t, sym_Not_1))
                {
                  f_65 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, f_65);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  h_65 = ATgetArgument(t, 0);
                  i_65 = ATgetArgument(t, 1);
                  t = i_65;
                  if((h_65 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      h_65 = ATgetArgument(t, 0);
                      i_65 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_65;
                  if((h_65 != t))
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
  ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      w_65 = ATgetArgument(t, 0);
      z_65 = ATgetArgument(t, 1);
      t = w_65;
      if(match_cons(t, sym_LChoice_2))
        {
          x_65 = ATgetArgument(t, 0);
          y_65 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, x_65, (ATerm) ATmakeAppl(sym_LChoice_2, y_65, z_65));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          w_65 = ATgetArgument(t, 0);
          z_65 = ATgetArgument(t, 1);
          t = w_65;
          if(match_cons(t, sym_Seq_2))
            {
              x_65 = ATgetArgument(t, 0);
              y_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, x_65, (ATerm) ATmakeAppl(sym_Seq_2, y_65, z_65));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              w_65 = ATgetArgument(t, 0);
              z_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_65;
          if(match_cons(t, sym_Choice_2))
            {
              x_65 = ATgetArgument(t, 0);
              y_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, x_65, (ATerm) ATmakeAppl(sym_Choice_2, y_65, z_65));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL,r_66 = NULL,s_66 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      r_66 = ATgetArgument(t, 0);
      s_66 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, r_66, s_66);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          r_66 = ATgetArgument(t, 0);
          t = r_66;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_66 = ATgetFirst((ATermList) t);
              o_66 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, n_66, (ATerm) ATmakeAppl(sym_LChoices_1, o_66));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_q_6;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              r_66 = ATgetArgument(t, 0);
              t = r_66;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_66 = ATgetFirst((ATermList) t);
                  o_66 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, n_66, (ATerm) ATmakeAppl(sym_Choices_1, o_66));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_q_6;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  r_66 = ATgetArgument(t, 0);
                  t = r_66;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_66 = ATgetFirst((ATermList) t);
                      o_66 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_66, (ATerm) ATmakeAppl(sym_Seqs_1, o_66));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_i_6;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      r_66 = ATgetArgument(t, 0);
                      s_66 = ATgetArgument(t, 1);
                      p_66 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, s_66, (ATerm) ATmakeAppl(sym_Op_2, term_f_23, (ATerm) ATinsert(ATinsert(ATempty, p_66), r_66)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          r_66 = ATgetArgument(t, 0);
                          s_66 = ATgetArgument(t, 1);
                          p_66 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, p_66)), r_66), (ATerm) ATmakeAppl(sym_Build_1, s_66)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              r_66 = ATgetArgument(t, 0);
                              s_66 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, r_66, (ATerm) ATmakeAppl(sym_Match_1, s_66));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  r_66 = ATgetArgument(t, 0);
                                  s_66 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_66), s_66);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      r_66 = ATgetArgument(t, 0);
                                      s_66 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_66), r_66);
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
static ATerm h_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      l_68 = ATgetArgument(t, 0);
      t = l_68;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_q_6;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          l_68 = ATgetArgument(t, 0);
          t = l_68;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_i_6;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              l_68 = ATgetArgument(t, 0);
              m_68 = ATgetArgument(t, 1);
              t = l_68;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_q_6;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  l_68 = ATgetArgument(t, 0);
                  m_68 = ATgetArgument(t, 1);
                  t = m_68;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_q_6;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      l_68 = ATgetArgument(t, 0);
                      m_68 = ATgetArgument(t, 1);
                      t = m_68;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_q_6;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          l_68 = ATgetArgument(t, 0);
                          t = l_68;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_q_6;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              l_68 = ATgetArgument(t, 0);
                              t = l_68;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_q_6;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  l_68 = ATgetArgument(t, 0);
                                  m_68 = ATgetArgument(t, 1);
                                  t = m_68;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_q_6;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      l_68 = ATgetArgument(t, 0);
                                      m_68 = ATgetArgument(t, 1);
                                      t = m_68;
                                      t = fetch_1_0(h_1, t);
                                      t = term_q_6;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          l_68 = ATgetArgument(t, 0);
                                          m_68 = ATgetArgument(t, 1);
                                          t = m_68;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = l_68;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = m_68;
                                                }
                                              else
                                                {
                                                  t = l_68;
                                                }
                                            }
                                          else
                                            {
                                              t = l_68;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = m_68;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              l_68 = ATgetArgument(t, 0);
                                              m_68 = ATgetArgument(t, 1);
                                              t = m_68;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = l_68;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = m_68;
                                                    }
                                                  else
                                                    {
                                                      t = l_68;
                                                    }
                                                }
                                              else
                                                {
                                                  t = l_68;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = m_68;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  l_68 = ATgetArgument(t, 0);
                                                  t = l_68;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_q_6;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      l_68 = ATgetArgument(t, 0);
                                                      m_68 = ATgetArgument(t, 1);
                                                      n_68 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = n_68;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_68, m_68);
                                                }
                                            }
                                        }
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
  ATerm q_69 = NULL,s_69 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      s_69 = ATgetArgument(t, 0);
      t = s_69;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_i_6;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          s_69 = ATgetArgument(t, 0);
          t = s_69;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_q_6;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              s_69 = ATgetArgument(t, 0);
              q_69 = ATgetArgument(t, 1);
              t = q_69;
              if(match_cons(t, sym_Id_0))
                {
                  t = s_69;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = q_69;
                    }
                  else
                    {
                      t = s_69;
                    }
                }
              else
                {
                  t = s_69;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = q_69;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  s_69 = ATgetArgument(t, 0);
                  q_69 = ATgetArgument(t, 1);
                  t = s_69;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_i_6;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      s_69 = ATgetArgument(t, 0);
                      q_69 = ATgetArgument(t, 1);
                      t = q_69;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_i_6;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          s_69 = ATgetArgument(t, 0);
                          q_69 = ATgetArgument(t, 1);
                          t = q_69;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_i_6;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              s_69 = ATgetArgument(t, 0);
                              t = s_69;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_i_6;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  s_69 = ATgetArgument(t, 0);
                                  t = s_69;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_i_6;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      s_69 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = s_69;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_i_6;
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
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      {
        ATerm r_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(s_25);
          }
        else
          {
            t = r_25;
            {
              ATerm t_25 = t;
              int u_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(u_25);
                }
              else
                {
                  t = t_25;
                  {
                    ATerm v_25 = t;
                    int w_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(w_25);
                      }
                    else
                      {
                        t = v_25;
                        {
                          ATerm x_25 = t;
                          int z_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(z_25);
                            }
                          else
                            {
                              t = x_25;
                              {
                                ATerm a_26 = t;
                                int b_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm h_70 = NULL,i_70 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        h_70 = ATgetArgument(t, 0);
                                        i_70 = ATgetArgument(t, 1);
                                        t = h_70;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = i_70;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            h_70 = ATgetArgument(t, 0);
                                            i_70 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = h_70;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = i_70;
                                      }
                                    LocalPopChoice(b_26);
                                  }
                                else
                                  {
                                    t = a_26;
                                    {
                                      ATerm c_26 = t;
                                      int d_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(d_26);
                                        }
                                      else
                                        {
                                          t = c_26;
                                          {
                                            ATerm e_26 = t;
                                            int f_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(f_26);
                                              }
                                            else
                                              {
                                                t = e_26;
                                                {
                                                  ATerm g_26 = t;
                                                  int h_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(h_26);
                                                    }
                                                  else
                                                    {
                                                      t = g_26;
                                                      {
                                                        ATerm i_26 = t;
                                                        int j_26 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(j_26);
                                                          }
                                                        else
                                                          {
                                                            t = i_26;
                                                            {
                                                              ATerm k_26 = t;
                                                              int l_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(l_26);
                                                                }
                                                              else
                                                                {
                                                                  t = k_26;
                                                                  {
                                                                    ATerm m_26 = t;
                                                                    int n_26 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(n_26);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_26;
                                                                        {
                                                                          ATerm o_26 = t;
                                                                          int p_26 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
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
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(r_26);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_26;
                                                                                    {
                                                                                      ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL;
                                                                                      m_70 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          n_70 = ATgetArgument(t, 0);
                                                                                          o_70 = ATgetArgument(t, 1);
                                                                                          t = n_70;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              l_70 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = m_70;
                                                                                          t = g_5(l_70, o_70, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              n_70 = ATgetArgument(t, 0);
                                                                                              o_70 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = n_70;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = o_70;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
static ATerm i_1 (ATerm t)
{
  ATerm e_71 = NULL;
  e_71 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_71);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm f_71 = NULL;
  f_71 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_71);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_26 = ATgetArgument(t, 0);
      if(((ATgetType(s_26) != AT_LIST) || !(ATisEmpty(s_26))))
        _fail(t);
      {
        ATerm t_26 = ATgetArgument(t, 1);
        if(((ATgetType(t_26) != AT_LIST) || !(ATisEmpty(t_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_26 = ATgetArgument(t, 0);
      if(((ATgetType(u_26) == AT_LIST) && !(ATisEmpty(u_26))))
        {
          g_71 = ATgetFirst((ATermList) u_26);
          h_71 = (ATerm) ATgetNext((ATermList) u_26);
        }
      else
        _fail(t);
      {
        ATerm v_26 = ATgetArgument(t, 1);
        if(((ATgetType(v_26) == AT_LIST) && !(ATisEmpty(v_26))))
          {
            i_71 = ATgetFirst((ATermList) v_26);
            j_71 = (ATerm) ATgetNext((ATermList) v_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_71, i_71), (ATerm) ATmakeAppl(sym__2, h_71, j_71));
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm k_71 = NULL,l_71 = NULL;
  if(match_cons(t, sym__2))
    {
      k_71 = ATgetArgument(t, 0);
      l_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_71), k_71);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_26 = ATgetArgument(t, 0);
      if(((ATgetType(w_26) != AT_LIST) || !(ATisEmpty(w_26))))
        _fail(t);
      {
        ATerm x_26 = ATgetArgument(t, 1);
        if(((ATgetType(x_26) != AT_LIST) || !(ATisEmpty(x_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_26 = ATgetArgument(t, 0);
      if(((ATgetType(y_26) == AT_LIST) && !(ATisEmpty(y_26))))
        {
          n_71 = ATgetFirst((ATermList) y_26);
          o_71 = (ATerm) ATgetNext((ATermList) y_26);
        }
      else
        _fail(t);
      {
        ATerm z_26 = ATgetArgument(t, 1);
        if(((ATgetType(z_26) == AT_LIST) && !(ATisEmpty(z_26))))
          {
            p_71 = ATgetFirst((ATermList) z_26);
            q_71 = (ATerm) ATgetNext((ATermList) z_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_71, p_71), (ATerm) ATmakeAppl(sym__2, o_71, q_71));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm r_71 = NULL,s_71 = NULL;
  if(match_cons(t, sym__2))
    {
      r_71 = ATgetArgument(t, 0);
      s_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_71), r_71);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_27 = ATgetArgument(t, 0);
      if(match_cons(a_27, sym__2))
        {
          t_71 = ATgetArgument(a_27, 0);
          u_71 = ATgetArgument(a_27, 1);
        }
      else
        _fail(t);
      v_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, t_71)), (ATerm) ATmakeAppl(sym_Seq_2, v_71, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_71))));
  return(t);
}
static ATerm v_11 (ATerm z_79, ATerm f_80, ATerm t)
{
  ATerm t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,d_71 = NULL;
  t = f_80;
  t = map_1_0(new_0_0, t);
  w_70 = t;
  t = map_1_0(i_1, t);
  t_70 = t;
  t = new_0_0(t);
  u_70 = t;
  t = f_80;
  t = map_1_0(new_0_0, t);
  x_70 = t;
  t = map_1_0(j_1, t);
  v_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_70, x_70);
  t = genzip_4_0(k_1, m_1, n_1, _id, t);
  d_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_71, f_80);
  t = genzip_4_0(o_1, p_1, q_1, r_1, t);
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_70, x_70);
  t = conc_0_0(t);
  z_70 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, z_79, t_70), (ATerm) ATmakeAppl(sym_Var_1, u_70)));
  t = Mapp2_0_0(t);
  a_71 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, z_79, v_70), (ATerm) ATmakeAppl(sym_Var_1, u_70)));
  t = Bapp_0_0(t);
  b_71 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(z_70), u_70), (ATerm) ATmakeAppl(sym_Seq_2, a_71, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_70), b_71)));
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL;
  x_71 = t;
  if(match_cons(t, sym_Build_1))
    {
      y_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_71 = NULL,a_72 = NULL,c_72 = NULL,d_72 = NULL;
        t = x_71;
        t = new_0_0(t);
        c_72 = t;
        t = y_71;
        {
          static ATerm s_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((z_71 != NULL) && (z_71 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_71 = ATgetArgument(t, 0);
                if(((a_72 != NULL) && (a_72 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  a_72 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, c_72);
            return(t);
          }
          t = pat_td_1_0(s_1, t);
        }
        d_72 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_72), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_27, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_72)), not_null(z_71))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_72)))), (ATerm) ATmakeAppl(sym_Build_1, d_72)));
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        {
          ATerm f_27 = t;
          int g_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_72 = NULL,g_72 = NULL,h_72 = NULL;
              t = x_71;
              t = new_0_0(t);
              g_72 = t;
              t = y_71;
              {
                static ATerm t_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((e_72 != NULL) && (e_72 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_72 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, g_72);
                  return(t);
                }
                t = pat_td_1_0(t_1, t);
              }
              h_72 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_72), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_72), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_72)))), (ATerm) ATmakeAppl(sym_Build_1, h_72)));
              LocalPopChoice(g_27);
            }
          else
            {
              t = f_27;
              {
                ATerm i_72 = NULL,j_72 = NULL,l_72 = NULL,m_72 = NULL;
                t = x_71;
                t = new_0_0(t);
                l_72 = t;
                t = y_71;
                {
                  static ATerm v_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((i_72 != NULL) && (i_72 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          i_72 = ATgetArgument(t, 0);
                        if(((j_72 != NULL) && (j_72 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_72 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, l_72);
                    return(t);
                  }
                  t = pat_td_1_0(v_1, t);
                }
                m_72 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_72), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_72), not_null(j_72), (ATerm) ATmakeAppl(sym_Var_1, l_72))), (ATerm) ATmakeAppl(sym_Build_1, m_72)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm x_127 (ATerm), ATerm t)
{
  static ATerm h_73 (ATerm t)
  {
    ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL;
    g_73 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_73 = ATgetFirst((ATermList) t);
        f_73 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_2 = NULL,o_2 = NULL,s_4 = NULL;
          t = SSLgetAnnotations(g_73);
          l_2 = t;
          t = f_73;
          t = h_73(t);
          o_2 = t;
          t = (ATerm) ATinsert(CheckATermList(o_2), e_73);
          s_4 = t;
          t = SSLsetAnnotations(s_4, l_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_73;
        t = x_127(t);
      }
    return(t);
  }
  t = h_73(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL;
  o_72 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_72;
    }
  else
    {
      static ATerm w_1 (ATerm t)
      {
        t = not_null(q_72);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_72 = ATgetFirst((ATermList) t);
          if(((q_72 != NULL) && (q_72 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_72;
      t = at_end_1_0(w_1, t);
    }
  return(t);
}
static ATerm u_73 (ATerm l_73, ATerm t)
{
  ATerm m_73 = NULL;
  t = SSL_explode_term(l_73);
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_73;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,r_73 = NULL;
  r_73 = t;
  if(match_cons(t, sym__2))
    {
      o_73 = ATgetArgument(t, 0);
      p_73 = ATgetArgument(t, 1);
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_1 (ATerm t)
            {
              t = p_73;
              return(t);
            }
            t = o_73;
            t = at_end_1_0(x_1, t);
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            t = u_73(r_73, t);
          }
      }
    }
  else
    {
      t = u_73(r_73, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm t)
{
  static ATerm b_74 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_111(t);
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        {
          ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,w_4 = NULL;
          t = i_111(t);
          a_74 = t;
          if(match_cons(t, sym__2))
            {
              w_73 = ATgetArgument(t, 0);
              x_73 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_74);
          v_73 = t;
          t = w_73;
          t = k_111(t);
          y_73 = t;
          t = x_73;
          t = b_74(t);
          z_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_73, z_73);
          w_4 = t;
          t = SSLsetAnnotations(w_4, v_73);
          t = j_111(t);
        }
      }
    return(t);
  }
  t = b_74(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm p_74 = NULL;
  p_74 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_74);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm q_74 = NULL;
  q_74 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_74);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_27 = ATgetArgument(t, 0);
      if(((ATgetType(m_27) != AT_LIST) || !(ATisEmpty(m_27))))
        _fail(t);
      {
        ATerm n_27 = ATgetArgument(t, 1);
        if(((ATgetType(n_27) != AT_LIST) || !(ATisEmpty(n_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      if(((ATgetType(o_27) == AT_LIST) && !(ATisEmpty(o_27))))
        {
          r_74 = ATgetFirst((ATermList) o_27);
          s_74 = (ATerm) ATgetNext((ATermList) o_27);
        }
      else
        _fail(t);
      {
        ATerm p_27 = ATgetArgument(t, 1);
        if(((ATgetType(p_27) == AT_LIST) && !(ATisEmpty(p_27))))
          {
            t_74 = ATgetFirst((ATermList) p_27);
            u_74 = (ATerm) ATgetNext((ATermList) p_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_74, t_74), (ATerm) ATmakeAppl(sym__2, s_74, u_74));
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL;
  if(match_cons(t, sym__2))
    {
      v_74 = ATgetArgument(t, 0);
      w_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_74), v_74);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_27 = ATgetArgument(t, 0);
      if(((ATgetType(q_27) != AT_LIST) || !(ATisEmpty(q_27))))
        _fail(t);
      {
        ATerm r_27 = ATgetArgument(t, 1);
        if(((ATgetType(r_27) != AT_LIST) || !(ATisEmpty(r_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_27 = ATgetArgument(t, 0);
      if(((ATgetType(s_27) == AT_LIST) && !(ATisEmpty(s_27))))
        {
          y_74 = ATgetFirst((ATermList) s_27);
          z_74 = (ATerm) ATgetNext((ATermList) s_27);
        }
      else
        _fail(t);
      {
        ATerm t_27 = ATgetArgument(t, 1);
        if(((ATgetType(t_27) == AT_LIST) && !(ATisEmpty(t_27))))
          {
            a_75 = ATgetFirst((ATermList) t_27);
            b_75 = (ATerm) ATgetNext((ATermList) t_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_74, a_75), (ATerm) ATmakeAppl(sym__2, z_74, b_75));
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm c_75 = NULL,d_75 = NULL;
  if(match_cons(t, sym__2))
    {
      c_75 = ATgetArgument(t, 0);
      d_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_75), c_75);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      if(match_cons(u_27, sym__2))
        {
          e_75 = ATgetArgument(u_27, 0);
          f_75 = ATgetArgument(u_27, 1);
        }
      else
        _fail(t);
      g_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, e_75)), (ATerm) ATmakeAppl(sym_Seq_2, g_75, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_75))));
  return(t);
}
static ATerm z_11 (ATerm k_80, ATerm s_80, ATerm r_80, ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,o_74 = NULL;
  t = (ATerm) ATinsert(CheckATermList(s_80), r_80);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_74 = ATgetFirst((ATermList) t);
      h_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(y_1, t);
  e_74 = t;
  t = (ATerm) ATinsert(CheckATermList(s_80), r_80);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_74 = ATgetFirst((ATermList) t);
      i_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(z_1, t);
  g_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_74, i_74);
  t = genzip_4_0(a_2, b_2, c_2, _id, t);
  o_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_74, (ATerm) ATinsert(CheckATermList(s_80), r_80));
  t = genzip_4_0(d_2, e_2, f_2, g_2, t);
  j_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_74, i_74);
  t = conc_0_0(t);
  k_74 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, k_80, e_74), (ATerm) ATmakeAppl(sym_Var_1, d_74)));
  t = Mapp2_0_0(t);
  l_74 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, k_80, g_74), (ATerm) ATmakeAppl(sym_Var_1, f_74)));
  t = Bapp_0_0(t);
  m_74 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(k_74), f_74), d_74), (ATerm) ATmakeAppl(sym_Seq_2, l_74, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_74), m_74)));
  return(t);
}
ATerm pat_td_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_105(t);
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      {
        ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL;
        q_77 = t;
        if(match_cons(t, sym_Op_2))
          {
            r_77 = ATgetArgument(t, 0);
            s_77 = ATgetArgument(t, 1);
            {
              ATerm w_2 = NULL,z_2 = NULL,z_4 = NULL;
              t = SSLgetAnnotations(q_77);
              w_2 = t;
              t = s_77;
              {
                static ATerm h_2 (ATerm t)
                {
                  t = pat_td_1_0(b_105, t);
                  return(t);
                }
                t = fetch_1_0(h_2, t);
              }
              z_2 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, r_77, z_2);
              z_4 = t;
              t = SSLsetAnnotations(z_4, w_2);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                r_77 = ATgetArgument(t, 0);
                s_77 = ATgetArgument(t, 1);
                {
                  ATerm x_27 = t;
                  int y_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_3 = NULL,k_3 = NULL,b_5 = NULL;
                      t = SSLgetAnnotations(q_77);
                      h_3 = t;
                      t = s_77;
                      t = pat_td_1_0(b_105, t);
                      k_3 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, r_77, k_3);
                      b_5 = t;
                      t = SSLsetAnnotations(b_5, h_3);
                      LocalPopChoice(y_27);
                    }
                  else
                    {
                      t = x_27;
                      {
                        ATerm s_3 = NULL,v_3 = NULL,c_5 = NULL;
                        t = SSLgetAnnotations(q_77);
                        s_3 = t;
                        t = r_77;
                        t = pat_td_1_0(b_105, t);
                        v_3 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, v_3, s_77);
                        c_5 = t;
                        t = SSLsetAnnotations(c_5, s_3);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    r_77 = ATgetArgument(t, 0);
                    s_77 = ATgetArgument(t, 1);
                    p_77 = ATgetArgument(t, 2);
                    {
                      ATerm e_4 = NULL,i_4 = NULL,d_5 = NULL;
                      t = SSLgetAnnotations(q_77);
                      e_4 = t;
                      t = p_77;
                      {
                        static ATerm i_2 (ATerm t)
                        {
                          t = pat_td_1_0(b_105, t);
                          return(t);
                        }
                        t = fetch_1_0(i_2, t);
                      }
                      i_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, r_77, s_77, i_4);
                      d_5 = t;
                      t = SSLsetAnnotations(d_5, e_4);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        r_77 = ATgetArgument(t, 0);
                        s_77 = ATgetArgument(t, 1);
                        p_77 = ATgetArgument(t, 2);
                        {
                          ATerm u_4 = NULL,i_5 = NULL,e_5 = NULL;
                          t = SSLgetAnnotations(q_77);
                          u_4 = t;
                          t = p_77;
                          {
                            static ATerm j_2 (ATerm t)
                            {
                              t = pat_td_1_0(b_105, t);
                              return(t);
                            }
                            t = fetch_1_0(j_2, t);
                          }
                          i_5 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, r_77, s_77, i_5);
                          e_5 = t;
                          t = SSLsetAnnotations(e_5, u_4);
                        }
                      }
                    else
                      {
                        ATerm a_6 = NULL,d_6 = NULL,f_5 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            r_77 = ATgetArgument(t, 0);
                            s_77 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(q_77);
                        a_6 = t;
                        t = s_77;
                        t = pat_td_1_0(b_105, t);
                        d_6 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, r_77, d_6);
                        f_5 = t;
                        t = SSLsetAnnotations(f_5, a_6);
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
  ATerm a_78 = NULL,b_78 = NULL;
  a_78 = t;
  if(match_cons(t, sym_Match_1))
    {
      b_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL;
        t = a_78;
        t = new_0_0(t);
        f_78 = t;
        t = b_78;
        {
          static ATerm k_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((d_78 != NULL) && (d_78 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_78 = ATgetArgument(t, 0);
                if(((e_78 != NULL) && (e_78 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  e_78 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_78), d_78);
            return(t);
          }
          t = pat_td_1_0(k_2, t);
        }
        g_78 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_78), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_28, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_78))), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_78))))));
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        {
          ATerm c_28 = t;
          int d_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL;
              t = a_78;
              t = new_0_0(t);
              k_78 = t;
              t = b_78;
              {
                static ATerm m_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((j_78 != NULL) && (j_78 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        j_78 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, k_78);
                  return(t);
                }
                t = pat_td_1_0(m_2, t);
              }
              l_78 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, k_78)), not_null(j_78))));
              LocalPopChoice(d_28);
            }
          else
            {
              t = c_28;
              {
                ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL;
                t = a_78;
                t = new_0_0(t);
                p_78 = t;
                t = b_78;
                {
                  static ATerm n_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((o_78 != NULL) && (o_78 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          o_78 = ATgetArgument(t, 0);
                        if(((n_78 != NULL) && (n_78 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          n_78 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_78);
                    return(t);
                  }
                  t = pat_td_1_0(n_2, t);
                }
                q_78 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, p_78)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_78)), not_null(o_78)))));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm n_79 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      n_79 = ATgetArgument(t, 0);
      t = n_79;
    }
  else
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_e_28;
    }
  return(t);
}
ATerm MatchingCongruence_0_0 (ATerm t)
{
  ATerm b_79 = NULL,c_79 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      b_79 = ATgetArgument(t, 0);
      c_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_79;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, b_79, (ATerm) ATempty));
    }
  else
    {
      ATerm m_79 = NULL;
      t = c_79;
      t = map_1_0(p_2, t);
      m_79 = t;
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, b_79, m_79));
      t = Mapp2_0_0(t);
    }
  return(t);
}
ATerm repeat_2_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm t)
{
  static ATerm q_79 (ATerm t)
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_116(t);
        t = q_79(t);
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        t = m_116(t);
      }
    return(t);
  }
  t = q_79(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  static ATerm q_2 (ATerm t)
  {
    t = bottomup_1_0(w_106, t);
    return(t);
  }
  t = SRTS_all(q_2, t);
  t = w_106(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = repeat_2_0(s_2, _id, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchingCongruence_0_0(t);
          LocalPopChoice(l_28);
        }
      else
        {
          t = k_28;
          {
            ATerm w_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL;
            f_81 = t;
            if(match_cons(t, sym_Call_2))
              {
                g_81 = ATgetArgument(t, 0);
                h_81 = ATgetArgument(t, 1);
                t = g_81;
                if(match_cons(t, sym_SVar_1))
                  {
                    w_80 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = w_80;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                  _fail(t);
                t = h_81;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    z_80 = ATgetFirst((ATermList) t);
                    c_81 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = z_80;
                if(match_cons(t, sym_Cong_2))
                  {
                    a_81 = ATgetArgument(t, 0);
                    b_81 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_81;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    d_81 = ATgetFirst((ATermList) t);
                    e_81 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = e_81;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_81;
                t = z_11(a_81, b_81, d_81, t);
              }
            else
              {
                if(match_cons(t, sym_Cong_2))
                  {
                    g_81 = ATgetArgument(t, 0);
                    h_81 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_81;
                t = v_11(g_81, h_81, t);
              }
          }
        }
      LocalPopChoice(j_28);
    }
  else
    {
      t = i_28;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm define_congruences_0_0 (ATerm t)
{
  t = bottomup_1_0(r_2, t);
  t = simplify_0_0(t);
  return(t);
}
ATerm map_1_0 (ATerm g_127 (ATerm), ATerm t)
{
  static ATerm g_83 (ATerm t)
  {
    ATerm d_83 = NULL,e_83 = NULL,f_83 = NULL;
    d_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_83;
      }
    else
      {
        ATerm l_6 = NULL,o_6 = NULL,p_6 = NULL,h_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_83 = ATgetFirst((ATermList) t);
            f_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_83);
        l_6 = t;
        t = e_83;
        t = g_127(t);
        o_6 = t;
        t = f_83;
        t = g_83(t);
        p_6 = t;
        t = (ATerm) ATinsert(CheckATermList(p_6), o_6);
        h_7 = t;
        t = SSLsetAnnotations(h_7, l_6);
      }
    return(t);
  }
  t = g_83(t);
  return(t);
}
static ATerm a_12 (ATerm v_44, ATerm w_44, ATerm t)
{
  ATerm i_83 = NULL;
  t = SSL_fputc(v_44, w_44);
  i_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_83);
  return(t);
}
static ATerm b_12 (ATerm w_49, ATerm x_49, ATerm t)
{
  ATerm j_83 = NULL;
  t = SSL_write_term_to_stream_text(w_49, x_49);
  j_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_83);
  return(t);
}
static ATerm d_12 (ATerm z_120 (ATerm), ATerm c_434, ATerm c_50, ATerm t)
{
  ATerm k_83 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_434, term_m_28);
  t = h_12(t);
  k_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_83, c_50);
  t = z_120(t);
  t = fclose_0_0(t);
  t = c_50;
  return(t);
}
static ATerm c_12 (ATerm s_49, ATerm t_49, ATerm t)
{
  ATerm l_83 = NULL;
  t = SSL_write_term_to_stream_baf(s_49, t_49);
  l_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_83);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm s_83 = NULL,t_83 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_28 = ATgetArgument(t, 0);
      if(match_cons(n_28, sym_Stream_1))
        {
          s_83 = ATgetArgument(n_28, 0);
        }
      else
        _fail(t);
      t_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_12(s_83, t_83, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_28 = ATgetArgument(t, 0);
      if(match_cons(o_28, sym_Stream_1))
        {
          x_83 = ATgetArgument(o_28, 0);
        }
      else
        _fail(t);
      y_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_12(x_83, y_83, t);
  u_83 = t;
  t = term_p_28;
  v_83 = t;
  t = u_83;
  if(match_cons(t, sym_Stream_1))
    {
      w_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_28, u_83);
  t = a_12(v_83, w_83, t);
  return(t);
}
ATerm output_1_0 (ATerm f_134 (ATerm), ATerm t)
{
  ATerm m_83 = NULL,n_83 = NULL;
  t = f_134(t);
  n_83 = t;
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_83 = NULL,p_83 = NULL;
        t = term_t_28;
        o_83 = t;
        t = term_u_28;
        p_83 = t;
        t = term_v_28;
        t = n_12(o_83, p_83, t);
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = term_w_28;
      }
  }
  m_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_83, n_83);
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_83 = NULL,r_83 = NULL;
        t = term_t_28;
        q_83 = t;
        t = term_z_28;
        r_83 = t;
        t = term_a_29;
        t = n_12(q_83, r_83, t);
        t = (ATerm) ATmakeAppl(sym__2, m_83, n_83);
        LocalPopChoice(y_28);
        if(match_cons(t, sym__2))
          {
            ATerm b_29 = ATgetArgument(t, 0);
            ATerm c_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_12(t_2, m_83, n_83, t);
      }
    else
      {
        t = x_28;
        if(match_cons(t, sym__2))
          {
            ATerm d_29 = ATgetArgument(t, 0);
            ATerm e_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_12(u_2, m_83, n_83, t);
      }
  }
  return(t);
}
static ATerm n_84 (ATerm g_84, ATerm t)
{
  t = SSL_fclose(g_84);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_84 = NULL,k_84 = NULL;
  k_84 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_84 = ATgetArgument(t, 0);
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_84);
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
            t = n_84(k_84, t);
          }
      }
    }
  else
    {
      t = n_84(k_84, t);
    }
  return(t);
}
static ATerm e_12 (ATerm y_49, ATerm t)
{
  t = SSL_read_term_from_stream(y_49);
  return(t);
}
static ATerm f_12 (ATerm o_43, ATerm p_43, ATerm t)
{
  t = SSL_strcat(o_43, p_43);
  return(t);
}
static ATerm g_12 (ATerm x_44, ATerm y_44, ATerm t)
{
  ATerm o_84 = NULL;
  t = SSL_fopen(x_44, y_44);
  o_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_84);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_84 = NULL;
  t = SSL_stdin_stream();
  p_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_84);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_84 = NULL;
  t = SSL_stdout_stream();
  q_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_84);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_84 = NULL;
  t = SSL_stderr_stream();
  r_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_84);
  return(t);
}
static ATerm y_85 (ATerm x_84, ATerm t)
{
  ATerm y_84 = NULL;
  t = SSL_explode_term(x_84);
  if(match_cons(t, sym__2))
    {
      ATerm i_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_29 = ATgetArgument(t, 1);
        if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
          {
            y_84 = ATgetFirst((ATermList) j_29);
            {
              ATerm k_29 = (ATerm) ATgetNext((ATermList) j_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_84;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_84;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_84;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_84;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_85 (ATerm b_85, ATerm c_85, ATerm d_85, ATerm t)
{
  ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL,j_85 = NULL,j_15 = NULL;
  t = SSLgetAnnotations(d_85);
  g_85 = t;
  t = b_85;
  if(match_cons(t, sym_Path_1))
    {
      j_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_85, c_85);
  j_15 = t;
  t = SSLsetAnnotations(j_15, g_85);
  if(match_cons(t, sym__2))
    {
      e_85 = ATgetArgument(t, 0);
      f_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12(e_85, f_85, t);
  return(t);
}
static ATerm a_86 (ATerm l_85, ATerm m_85, ATerm n_85, ATerm t)
{
  ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL,t_85 = NULL,k_15 = NULL;
  t = SSLgetAnnotations(n_85);
  q_85 = t;
  t = SSL_is_string(l_85);
  t_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_85, m_85);
  k_15 = t;
  t = SSLsetAnnotations(k_15, q_85);
  if(match_cons(t, sym__2))
    {
      o_85 = ATgetArgument(t, 0);
      p_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12(o_85, p_85, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm v_85 = NULL,w_85 = NULL,x_85 = NULL;
  v_85 = t;
  if(match_cons(t, sym__2))
    {
      w_85 = ATgetArgument(t, 0);
      x_85 = ATgetArgument(t, 1);
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_85(v_85, t);
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            {
              ATerm n_29 = t;
              int o_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_85(w_85, x_85, v_85, t);
                  LocalPopChoice(o_29);
                }
              else
                {
                  t = n_29;
                  t = a_86(w_85, x_85, v_85, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_85(v_85, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL,j_86 = NULL;
  j_86 = t;
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_86, term_r_29);
        t = h_12(t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        {
          ATerm c_7 = NULL,d_7 = NULL;
          t = term_s_29;
          d_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_29, j_86);
          t = f_12(d_7, j_86, t);
          c_7 = t;
          t = SSL_perror(c_7);
          _fail(t);
        }
      }
  }
  d_86 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_12(e_86, t);
  c_86 = t;
  t = d_86;
  t = fclose_0_0(t);
  t = c_86;
  return(t);
}
ATerm input_1_0 (ATerm g_134 (ATerm), ATerm t)
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_86 = NULL,n_86 = NULL;
      t = term_t_28;
      m_86 = t;
      t = term_v_29;
      n_86 = t;
      t = term_w_29;
      t = n_12(m_86, n_86, t);
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      t = term_x_29;
    }
  t = ReadFromFile_0_0(t);
  t = g_134(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_86 = NULL,p_86 = NULL,r_86 = NULL,s_86 = NULL,u_86 = NULL;
  o_86 = t;
  t = term_y_29;
  t = whoami_0_0(t);
  p_86 = t;
  t = term_z_29;
  s_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_30), p_86), term_a_30);
  u_86 = t;
  t = SSL_printnl(s_86, u_86);
  t = term_d_30;
  r_86 = t;
  t = SSL_exit(r_86);
  t = o_86;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm w_86 = NULL;
  w_86 = t;
  if(match_string(t, "-k"))
    {
      t = w_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_86;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm x_86 = NULL,y_86 = NULL,z_86 = NULL;
  x_86 = t;
  t = SSL_string_to_int(x_86);
  y_86 = t;
  t = term_e_30;
  z_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_30, y_86);
  t = q_12(z_86, y_86, t);
  t = x_86;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_f_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_2, x_2, y_2, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm b_87 = NULL;
  b_87 = t;
  if(match_string(t, "-S"))
    {
      t = b_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_87;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm c_87 = NULL,d_87 = NULL;
  t = term_g_30;
  c_87 = t;
  t = term_h_30;
  d_87 = t;
  t = term_i_30;
  t = q_12(c_87, d_87, t);
  t = term_j_30;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_k_30;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm e_87 = NULL,f_87 = NULL,g_87 = NULL;
  e_87 = t;
  t = SSL_string_to_int(e_87);
  f_87 = t;
  t = term_g_30;
  g_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_30, f_87);
  t = q_12(g_87, f_87, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_87);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_l_30;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm h_87 = NULL,i_87 = NULL;
  t = term_m_30;
  h_87 = t;
  t = term_y_29;
  i_87 = t;
  t = term_n_30;
  t = q_12(h_87, i_87, t);
  t = term_o_30;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_p_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_3, b_3, c_3, t);
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
      {
        ATerm s_30 = t;
        int t_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_3, e_3, f_3, t);
            LocalPopChoice(t_30);
          }
        else
          {
            t = s_30;
            t = Option_3_0(g_3, i_3, j_3, t);
          }
      }
    }
  return(t);
}
static ATerm q_12 (ATerm q_48, ATerm r_48, ATerm t)
{
  ATerm j_87 = NULL,k_87 = NULL;
  t = term_t_28;
  j_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_28, q_48, r_48);
  t = lookup_table_0_1(j_87, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(q_48, r_48, k_87, t);
  t = (ATerm) ATmakeAppl(sym__3, term_t_28, q_48, r_48);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL;
      t = term_y_29;
      t = e_0(t);
      q_87 = t;
      t = term_u_30;
      r_87 = t;
      t = term_v_30;
      s_87 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_30, term_v_30, q_87);
      t = o_12(r_87, s_87, q_87, t);
      _fail(t);
    }
  else
    {
      ATerm v_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_87 = ATgetFirst((ATermList) t);
          p_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_87;
      t = c_0(t);
      t = term_y_29;
      t = d_0(t);
      v_87 = t;
      t = (ATerm) ATinsert(CheckATermList(p_87), v_87);
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm x_87 = NULL;
  x_87 = t;
  if(match_string(t, "-o"))
    {
      t = x_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_87;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm y_87 = NULL,z_87 = NULL;
  y_87 = t;
  t = term_u_28;
  z_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_28, y_87);
  t = q_12(z_87, y_87, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_87);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_w_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_3, m_3, n_3, t);
  return(t);
}
static ATerm o_12 (ATerm u_53, ATerm v_53, ATerm t_53, ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL;
  b_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_53, v_53);
  {
    ATerm x_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_31 = ATgetArgument(t, 0);
            ATerm b_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_53, v_53);
        t = n_12(u_53, v_53, t);
        LocalPopChoice(z_30);
      }
    else
      {
        t = x_30;
        t = (ATerm) ATempty;
      }
  }
  c_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_53, v_53, (ATerm) ATinsert(CheckATermList(c_88), t_53));
  t = lookup_table_0_1(u_53, t);
  f_88 = t;
  t = (ATerm) ATinsert(CheckATermList(c_88), t_53);
  d_88 = t;
  t = f_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(v_53, d_88, e_88, t);
  t = b_88;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_88 = NULL,o_88 = NULL,p_88 = NULL,q_88 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL;
      t = term_y_29;
      t = n_0(t);
      r_88 = t;
      t = term_u_30;
      s_88 = t;
      t = term_v_30;
      t_88 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_30, term_v_30, r_88);
      t = o_12(s_88, t_88, r_88, t);
      _fail(t);
    }
  else
    {
      ATerm x_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_88 = ATgetFirst((ATermList) t);
          o_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_88;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_88 = ATgetFirst((ATermList) t);
          q_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_88;
      t = k_0(t);
      t = p_88;
      t = l_0(t);
      x_88 = t;
      t = (ATerm) ATinsert(CheckATermList(q_88), x_88);
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm z_88 = NULL;
  z_88 = t;
  if(match_string(t, "-i"))
    {
      t = z_88;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_88;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm a_89 = NULL,b_89 = NULL;
  a_89 = t;
  t = term_v_29;
  b_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_29, a_89);
  t = q_12(b_89, a_89, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_89);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_c_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_3, p_3, q_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_29;
  t = whoami_0_0(t);
  c_89 = t;
  t = term_z_29;
  e_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_31), c_89);
  f_89 = t;
  t = SSL_printnl(e_89, f_89);
  t = term_d_30;
  d_89 = t;
  t = SSL_exit(d_89);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm g_89 = NULL,h_89 = NULL;
  t = term_t_28;
  g_89 = t;
  t = term_e_31;
  h_89 = t;
  t = term_f_31;
  t = n_12(g_89, h_89, t);
  return(t);
}
static ATerm i_12 (ATerm c_51, ATerm d_51, ATerm t)
{
  ATerm g_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_51, d_51);
      LocalPopChoice(i_31);
    }
  else
    {
      t = g_31;
      t = SSL_addr(c_51, d_51);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm t)
{
  ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL;
  j_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_89;
      t = w_125(t);
    }
  else
    {
      ATerm o_89 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_89 = ATgetFirst((ATermList) t);
          l_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_89;
      t = foldr_2_0(w_125, x_125, t);
      o_89 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_89, o_89);
      t = x_125(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_h_30;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL;
  if(match_cons(t, sym__2))
    {
      j_7 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(j_7, k_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_89 = NULL,f_7 = NULL,g_7 = NULL;
  t = times_0_0(t);
  g_7 = t;
  t = SSL_explode_term(g_7);
  if(match_cons(t, sym__2))
    {
      ATerm j_31 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7;
  t = foldr_2_0(r_3, t_3, t);
  r_89 = t;
  t = SSL_TicksToSeconds(r_89);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_90 = NULL,d_90 = NULL,e_90 = NULL;
  c_90 = t;
  if(match_cons(t, sym__2))
    {
      d_90 = ATgetArgument(t, 0);
      e_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_90;
        if((d_90 != t))
          {
            _fail(t);
          }
        t = c_90;
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
        t = (ATerm) ATmakeAppl(sym__2, d_90, e_90);
        {
          ATerm m_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_90, e_90);
              LocalPopChoice(n_31);
            }
          else
            {
              t = m_31;
              t = SSL_gtr(d_90, e_90);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_90, e_90);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_118 (ATerm), ATerm t)
{
  ATerm i_90 = NULL;
  i_90 = t;
  {
    ATerm o_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_90 = NULL,l_90 = NULL,m_90 = NULL;
        t = term_t_28;
        l_90 = t;
        t = term_g_30;
        m_90 = t;
        t = term_q_31;
        t = n_12(l_90, m_90, t);
        k_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_90, term_d_30);
        t = geq_0_0(t);
        t = i_90;
        t = w_118(t);
        LocalPopChoice(p_31);
      }
    else
      {
        t = o_31;
        t = i_90;
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm o_90 = NULL,p_90 = NULL,r_90 = NULL,s_90 = NULL;
  t = run_time_0_0(t);
  o_90 = t;
  t = term_y_29;
  t = whoami_0_0(t);
  p_90 = t;
  t = term_z_29;
  r_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_31), o_90), term_r_31), p_90);
  s_90 = t;
  t = SSL_printnl(r_90, s_90);
  t = (ATerm) ATmakeAppl(sym__2, term_z_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_31), o_90), term_r_31), p_90));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_90 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_30;
  t_90 = t;
  t = SSL_exit(t_90);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm d_91 = NULL,e_91 = NULL;
  e_91 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_91;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_91 = ATgetArgument(t, 0);
          {
            ATerm d_8 = NULL,w_15 = NULL;
            t = SSLgetAnnotations(e_91);
            d_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_91);
            w_15 = t;
            t = SSLsetAnnotations(w_15, d_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_91;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_133 (ATerm), ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_90 = NULL,x_90 = NULL;
      t = term_t_28;
      w_90 = t;
      t = term_v_31;
      x_90 = t;
      t = term_w_31;
      t = n_12(w_90, x_90, t);
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      t = fetch_1_0(w_3, t);
    }
  t = w_133(t);
  return(t);
}
static ATerm r_12 (ATerm m_57, ATerm n_57, ATerm o_57, ATerm t)
{
  ATerm g_91 = NULL;
  t = SSL_hashtable_put(o_57, m_57, n_57);
  g_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_91);
  return(t);
}
ATerm lookup_table_0_1 (ATerm g_55, ATerm t)
{
  ATerm p_91 = NULL;
  t = table_hashtable_0_0(t);
  p_91 = t;
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_8 = NULL;
        t = p_91;
        if(match_cons(t, sym_Hashtable_1))
          {
            k_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_12(g_55, k_8, t);
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        {
          ATerm w_8 = NULL;
          t = g_55;
          t = table_create_0_0(t);
          t = p_91;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_12(g_55, w_8, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_57, ATerm v_57, ATerm t)
{
  ATerm s_91 = NULL;
  t = SSL_hashtable_create(u_57, v_57);
  s_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_91);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_91 = NULL,u_91 = NULL,v_91 = NULL,x_91 = NULL,a_92 = NULL;
  t_91 = t;
  t = term_a_32;
  x_91 = t;
  t = term_b_32;
  a_92 = t;
  t = t_91;
  t = new_hashtable_0_2(x_91, a_92, t);
  u_91 = t;
  t = t_91;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(t_91, u_91, v_91, t);
  t = t_91;
  return(t);
}
static ATerm k_12 (ATerm r_57, ATerm s_57, ATerm t)
{
  ATerm b_92 = NULL;
  t = SSL_hashtable_remove(s_57, r_57);
  b_92 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_92);
  return(t);
}
static ATerm l_12 (ATerm w_57, ATerm t)
{
  ATerm c_92 = NULL;
  t = SSL_hashtable_destroy(w_57);
  c_92 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_92);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm d_92 = NULL;
  t = SSL_table_hashtable();
  d_92 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_92);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL;
  e_92 = t;
  t = table_hashtable_0_0(t);
  f_92 = t;
  t = lookup_table_0_1(e_92, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_12(h_92, t);
  t = f_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_12(e_92, g_92, t);
  t = e_92;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm j_92 = NULL,k_92 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_92 = ATgetFirst((ATermList) t);
      k_92 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_92 = NULL,p_92 = NULL;
        static ATerm x_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_92)), not_null(p_92));
          return(t);
        }
        t = k_92;
        t = i_0(t);
        if(((o_92 != NULL) && (o_92 != t)))
          _fail(t);
        else
          o_92 = t;
        t = j_92;
        t = g_0(t);
        if(((p_92 != NULL) && (p_92 != t)))
          _fail(t);
        else
          p_92 = t;
        t = k_92;
        t = reverse_acc_2_0(g_0, x_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_29;
      t = i_0(t);
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL,i_16 = NULL;
  x_92 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_92);
  v_92 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_92);
  i_16 = t;
  t = SSLsetAnnotations(i_16, v_92);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm z_92 = NULL;
  z_92 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_92), term_c_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_92 = NULL,s_92 = NULL;
  ATerm d_32 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_92 = NULL,u_92 = NULL;
      t = term_t_28;
      t_92 = t;
      t = term_e_31;
      u_92 = t;
      t = term_f_31;
      t = n_12(t_92, u_92, t);
      LocalPopChoice(e_32);
    }
  else
    {
      t = d_32;
      t = fetch_1_0(y_3, t);
    }
  t = term_f_32;
  t = echo_0_0(t);
  t = term_u_30;
  r_92 = t;
  t = term_v_30;
  s_92 = t;
  t = term_g_32;
  t = n_12(r_92, s_92, t);
  t = reverse_acc_2_0(_id, z_3, t);
  t = map_1_0(a_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm q_127 (ATerm), ATerm t)
{
  static ATerm x_93 (ATerm t)
  {
    ATerm u_93 = NULL,v_93 = NULL,w_93 = NULL;
    u_93 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_93 = ATgetFirst((ATermList) t);
        w_93 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_32 = t;
      int i_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_9 = NULL,h_9 = NULL,k_16 = NULL;
          t = SSLgetAnnotations(u_93);
          d_9 = t;
          t = v_93;
          t = q_127(t);
          h_9 = t;
          t = (ATerm) ATinsert(CheckATermList(w_93), h_9);
          k_16 = t;
          t = SSLsetAnnotations(k_16, d_9);
          LocalPopChoice(i_32);
        }
      else
        {
          t = h_32;
          {
            ATerm p_9 = NULL,t_9 = NULL,l_16 = NULL;
            t = SSLgetAnnotations(u_93);
            p_9 = t;
            t = w_93;
            t = x_93(t);
            t_9 = t;
            t = (ATerm) ATinsert(CheckATermList(t_9), v_93);
            l_16 = t;
            t = SSLsetAnnotations(l_16, p_9);
          }
        }
    }
    return(t);
  }
  t = x_93(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_94 = NULL,c_94 = NULL,d_94 = NULL;
  b_94 = t;
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_94;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_32 = ATgetFirst((ATermList) t);
                ATerm m_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_94;
          }
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        t = (ATerm) ATinsert(ATempty, b_94);
      }
  }
  c_94 = t;
  t = term_w_28;
  d_94 = t;
  t = SSL_printnl(d_94, c_94);
  t = b_94;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_94 = NULL,i_94 = NULL;
  t = term_t_28;
  h_94 = t;
  t = term_e_31;
  i_94 = t;
  t = term_f_31;
  t = n_12(h_94, i_94, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm s_12 (ATerm p_57, ATerm q_57, ATerm t)
{
  t = SSL_hashtable_get(q_57, p_57);
  return(t);
}
static ATerm n_12 (ATerm n_55, ATerm o_55, ATerm t)
{
  ATerm j_94 = NULL;
  t = lookup_table_0_1(n_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_12(o_55, j_94, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL;
  t = term_o_32;
  l_94 = t;
  t = term_y_29;
  m_94 = t;
  t = term_p_32;
  t = q_12(l_94, m_94, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_q_32;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL;
  t = term_o_32;
  p_94 = t;
  t = term_y_29;
  q_94 = t;
  t = term_p_32;
  t = q_12(p_94, q_94, t);
  t = term_r_32;
  n_94 = t;
  t = term_y_29;
  o_94 = t;
  t = term_s_32;
  t = q_12(n_94, o_94, t);
  t = term_t_32;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_4, c_4, d_4, t);
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      t = Option_3_0(f_4, g_4, h_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm t)
{
  ATerm r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL,x_16 = NULL;
  w_94 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_94 = ATgetFirst((ATermList) t);
      t_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_94);
  r_94 = t;
  t = s_94;
  t = y_91(t);
  u_94 = t;
  t = t_94;
  t = z_91(t);
  v_94 = t;
  t = (ATerm) ATinsert(CheckATermList(v_94), u_94);
  x_16 = t;
  t = SSLsetAnnotations(x_16, r_94);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_135 (ATerm), ATerm t)
{
  ATerm b_95 = NULL,c_95 = NULL,d_95 = NULL,e_95 = NULL,g_95 = NULL,h_95 = NULL,e_17 = NULL;
  b_95 = t;
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_32;
        t = z_135(t);
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
      }
  }
  t = b_95;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_95 = ATgetFirst((ATermList) t);
      e_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_95);
  c_95 = t;
  t = term_e_31;
  h_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_31, d_95);
  t = q_12(h_95, d_95, t);
  t = e_95;
  {
    static ATerm r_95 (ATerm t)
    {
      ATerm a_33 = t;
      int b_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_33 = t;
          int d_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_95 = NULL;
              k_95 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_95;
              LocalPopChoice(d_33);
            }
          else
            {
              t = c_33;
              t = z_135(t);
              t = Cons_2_0(_id, r_95, t);
            }
          LocalPopChoice(b_33);
        }
      else
        {
          t = a_33;
          {
            ATerm n_95 = NULL,o_95 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_95 = ATgetFirst((ATermList) t);
                o_95 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_95), (ATerm) ATmakeAppl(sym_Undefined_1, n_95));
          }
        }
      return(t);
    }
    t = r_95(t);
  }
  g_95 = t;
  t = (ATerm) ATinsert(CheckATermList(g_95), (ATerm) ATmakeAppl(sym_Program_1, d_95));
  e_17 = t;
  t = SSLsetAnnotations(e_17, c_95);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm e_96 = NULL;
  e_96 = t;
  if(match_string(t, "--help"))
    {
      t = e_96;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_96;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_96;
        }
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm f_96 = NULL,g_96 = NULL;
  t = term_v_31;
  f_96 = t;
  t = term_y_29;
  g_96 = t;
  t = term_e_33;
  t = q_12(f_96, g_96, t);
  t = term_f_33;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_135 (ATerm), ATerm t)
{
  ATerm w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL;
  y_95 = t;
  t = term_u_30;
  z_95 = t;
  t = term_h_33;
  t = lookup_table_0_1(z_95, t);
  d_96 = t;
  t = term_v_30;
  a_96 = t;
  t = (ATerm) ATempty;
  b_96 = t;
  t = d_96;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(a_96, b_96, c_96, t);
  t = y_95;
  {
    static ATerm j_4 (ATerm t)
    {
      ATerm i_33 = t;
      int j_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_135(t);
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
                t = Option_3_0(k_4, l_4, m_4, t);
                LocalPopChoice(l_33);
              }
            else
              {
                t = k_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_4, t);
  }
  {
    ATerm m_33 = t;
    int n_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_96 = NULL;
        s_96 = t;
        {
          ATerm o_33 = t;
          int p_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_10 = NULL;
              t = s_96;
              {
                ATerm q_33 = t;
                int r_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_10 = NULL,d_10 = NULL;
                    t = term_t_28;
                    c_10 = t;
                    t = term_v_31;
                    d_10 = t;
                    t = term_w_31;
                    t = n_12(c_10, d_10, t);
                    LocalPopChoice(r_33);
                  }
                else
                  {
                    t = q_33;
                    t = fetch_1_0(n_4, t);
                  }
              }
              t = s_96;
              t = default_system_usage_0_0(t);
              t = term_h_30;
              b_10 = t;
              t = SSL_exit(b_10);
              LocalPopChoice(p_33);
            }
          else
            {
              t = o_33;
              {
                ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
                t = term_t_28;
                j_10 = t;
                t = term_o_32;
                k_10 = t;
                t = term_s_33;
                t = n_12(j_10, k_10, t);
                t = s_96;
                t = default_system_about_0_0(t);
                t = term_h_30;
                i_10 = t;
                t = SSL_exit(i_10);
              }
            }
        }
        LocalPopChoice(n_33);
      }
    else
      {
        t = m_33;
        {
          ATerm t_33 = t;
          int v_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_96 = NULL,u_96 = NULL,v_96 = NULL;
              static ATerm o_4 (ATerm t)
              {
                ATerm w_96 = NULL,x_96 = NULL,y_96 = NULL,g_17 = NULL;
                y_96 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_96 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_96);
                w_96 = t;
                t = x_96;
                if(((w_95 != NULL) && (w_95 != t)))
                  _fail(t);
                else
                  w_95 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_96);
                g_17 = t;
                t = SSLsetAnnotations(g_17, w_96);
                return(t);
              }
              t = fetch_1_0(o_4, t);
              t = term_z_29;
              u_96 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_95)), term_w_33);
              v_96 = t;
              t = SSL_printnl(u_96, v_96);
              t = (ATerm) ATmakeAppl(sym__2, term_z_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_95)), term_w_33));
              t = default_system_usage_0_0(t);
              t = term_d_30;
              t_96 = t;
              t = SSL_exit(t_96);
              LocalPopChoice(v_33);
            }
          else
            {
              t = t_33;
            }
        }
      }
  }
  x_95 = t;
  t = term_u_30;
  t = table_destroy_0_0(t);
  t = x_95;
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_133 (ATerm), ATerm z_133 (ATerm), ATerm a_134 (ATerm), ATerm b_134 (ATerm), ATerm t)
{
  ATerm d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL;
  t = parse_options_1_0(y_133, t);
  d_97 = t;
  t = term_x_33;
  t = table_create_0_0(t);
  t = term_x_33;
  e_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_33, term_y_33, d_97);
  t = lookup_table_0_1(e_97, t);
  h_97 = t;
  t = term_y_33;
  f_97 = t;
  t = h_97;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(f_97, d_97, g_97, t);
  t = d_97;
  t = a_134(t);
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_133, t);
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        {
          ATerm b_34 = t;
          int d_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_134(t);
              t = report_success_0_0(t);
              LocalPopChoice(d_34);
            }
          else
            {
              t = b_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      {
        ATerm g_34 = t;
        int h_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(h_34);
          }
        else
          {
            t = g_34;
            {
              ATerm i_34 = t;
              int j_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(r_4, t_4, v_4, t);
                  LocalPopChoice(j_34);
                }
              else
                {
                  t = i_34;
                  {
                    ATerm l_34 = t;
                    int m_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(m_34);
                      }
                    else
                      {
                        t = l_34;
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
static ATerm q_4 (ATerm t)
{
  t = input_1_0(x_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm m_97 = NULL,n_97 = NULL;
  t = term_z_28;
  m_97 = t;
  t = term_y_29;
  n_97 = t;
  t = term_n_34;
  t = q_12(m_97, n_97, t);
  t = term_o_34;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_p_34;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = output_1_0(y_4, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL,z_17 = NULL,y_17 = NULL,t_17 = NULL,s_17 = NULL;
  e_98 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_98);
  q_97 = t;
  t = r_97;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_97 = ATgetFirst((ATermList) t);
      u_97 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_97);
  s_97 = t;
  t = u_97;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_97 = ATgetFirst((ATermList) t);
      y_97 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_97);
  w_97 = t;
  t = x_97;
  if(match_cons(t, sym_Strategies_1))
    {
      b_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_97);
  a_98 = t;
  t = b_98;
  t = map_1_0(a_5, t);
  c_98 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, c_98);
  s_17 = t;
  t = SSLsetAnnotations(s_17, a_98);
  d_98 = t;
  t = y_97;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_97), d_98);
  t_17 = t;
  t = SSLsetAnnotations(t_17, w_97);
  z_97 = t;
  t = (ATerm) ATinsert(CheckATermList(z_97), t_97);
  y_17 = t;
  t = SSLsetAnnotations(y_17, s_97);
  v_97 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, v_97);
  z_17 = t;
  t = SSLsetAnnotations(z_17, q_97);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL,v_98 = NULL;
  v_98 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      r_98 = ATgetArgument(t, 0);
      s_98 = ATgetArgument(t, 1);
      t_98 = ATgetArgument(t, 2);
      u_98 = ATgetArgument(t, 3);
      {
        ATerm q_34 = t;
        int r_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_14 = NULL,o_14 = NULL,j_17 = NULL;
            t = SSLgetAnnotations(v_98);
            i_14 = t;
            t = u_98;
            t = define_congruences_0_0(t);
            o_14 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, r_98, s_98, t_98, o_14);
            j_17 = t;
            t = SSLsetAnnotations(j_17, i_14);
            LocalPopChoice(r_34);
          }
        else
          {
            t = q_34;
            t = v_98;
          }
      }
    }
  else
    {
      t = v_98;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(p_4, default_usage_0_0, _id, q_4, t);
  return(t);
}
