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
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_g_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_i_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_d_27;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_i_26;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_g_24;
ATerm term_d_24;
ATerm term_l_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_e_23;
ATerm term_a_23;
ATerm term_f_22;
ATerm term_k_7;
ATerm term_e_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
void init_constant_terms (void)
{
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_Sort_2, term_v_6, (ATerm) ATempty);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_ConstType_1, term_w_6);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_v_24, term_w_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_24);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__2, term_b_25, term_n_24);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_n_25);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym__2, term_w_27, term_n_24);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_z_27, term_n_24);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym__2, term_n_26, term_n_24);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym__2, term_l_23, term_n_24);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm bottomup_1_0 (ATerm c_92 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm f_93 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm m_107 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm d_2 (ATerm s_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm topdown_1_0 (ATerm b_92 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm);
ATerm t_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm d_1 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm v_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm map_1_0 (ATerm w_106 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm);
ATerm m_11 (ATerm e_49, ATerm f_49, ATerm);
ATerm n_11 (ATerm s_52, ATerm t_52, ATerm);
ATerm p_11 (ATerm x_112 (ATerm), ATerm l_473, ATerm w_52, ATerm);
ATerm o_11 (ATerm o_52, ATerm p_52, ATerm);
ATerm j_2 (ATerm);
ATerm q_2 (ATerm);
ATerm output_1_0 (ATerm g_117 (ATerm), ATerm);
ATerm e_55 (ATerm y_54, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_11 (ATerm u_52, ATerm);
ATerm r_11 (ATerm g_49, ATerm h_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm r_56 (ATerm p_55, ATerm);
ATerm s_56 (ATerm t_55, ATerm u_55, ATerm v_55, ATerm);
ATerm t_56 (ATerm d_56, ATerm e_56, ATerm f_56, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm h_117 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm l_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm a_12 (ATerm v_53, ATerm w_53, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm y_11 (ATerm t_58, ATerm u_58, ATerm s_58, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm v_3 (ATerm);
ATerm a_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm t_11 (ATerm e_46, ATerm f_46, ATerm);
ATerm foldr_2_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_114 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm g_4 (ATerm);
ATerm need_help_1_0 (ATerm x_116 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm g_107 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_11 (ATerm g_40, ATerm h_40, ATerm);
ATerm debug_1_0 (ATerm v_112 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm x_11 (ATerm k_60, ATerm l_60, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm a_119 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm parse_options_1_0 (ATerm z_118 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_116 (ATerm), ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm l_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm c_92 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(c_92, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = c_92(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm p_0 = t;
    int m_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_93(t);
        ;
        LocalPopChoice(m_5);
      }
    else
      {
        t = p_0;
        t = SRTS_one(n_2, t);
      }
    return(t);
  }
  t = n_2(t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_107 (ATerm), ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm a_1 = NULL,b_1 = NULL,e_1 = NULL;
    e_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_1 = ATgetFirst((ATermList) t);
        b_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_1 = NULL,h_1 = NULL,s_0 = NULL;
          t = SSLgetAnnotations(e_1);
          c_1 = t;
          t = b_1;
          t = g_1(t);
          h_1 = t;
          t = (ATerm) ATinsert(CheckATermList(h_1), a_1);
          s_0 = t;
          t = SSLsetAnnotations(s_0, c_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_1;
        t = m_107(t);
      }
    return(t);
  }
  t = g_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
    }
  else
    {
      ATerm f_0 (ATerm t)
      {
        t = not_null(e_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((c_0 != NULL) && (c_0 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            c_0 = ATgetFirst((ATermList) t);
          if(((e_0 != NULL) && (e_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_0;
      t = at_end_1_0(f_0, t);
    }
  return(t);
}
ATerm d_2 (ATerm s_1, ATerm t)
{
  ATerm u_1 = NULL;
  t = SSL_explode_term(s_1);
  if(match_cons(t, sym__2))
    {
      ATerm p_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL;
  z_1 = t;
  if(match_cons(t, sym__2))
    {
      x_1 = ATgetArgument(t, 0);
      y_1 = ATgetArgument(t, 1);
      {
        ATerm q_5 = t;
        int r_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_0 (ATerm t)
            {
              t = y_1;
              return(t);
            }
            t = x_1;
            t = at_end_1_0(o_0, t);
            ;
            LocalPopChoice(r_5);
          }
        else
          {
            t = q_5;
            t = d_2(z_1, t);
          }
      }
    }
  else
    {
      t = d_2(z_1, t);
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,w_3 = NULL,x_3 = NULL;
  u_3 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_3 = ATgetFirst((ATermList) t);
      x_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm s_5 = t;
    int t_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_1 = NULL,r_1 = NULL,t_1 = NULL,w_1 = NULL,a_2 = NULL,o_2 = NULL,p_2 = NULL,v_0 = NULL,u_0 = NULL;
        t = SSLgetAnnotations(u_3);
        a_2 = t;
        t = w_3;
        t = n_0(t);
        o_2 = t;
        t = (ATerm) ATinsert(CheckATermList(x_3), o_2);
        u_0 = t;
        t = SSLsetAnnotations(u_0, a_2);
        p_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_1 = ATgetFirst((ATermList) t);
            t_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_2);
        q_1 = t;
        t = t_1;
        {
          ATerm u_5 = t;
          int v_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(v_5);
            }
          else
            {
              t = u_5;
            }
          w_1 = t;
          t = (ATerm) ATinsert(CheckATermList(w_1), r_1);
          v_0 = t;
          t = SSLsetAnnotations(v_0, q_1);
        }
        ;
        LocalPopChoice(t_5);
      }
    else
      {
        t = s_5;
        {
          ATerm b_4 = NULL,e_4 = NULL,w_0 = NULL;
          t = SSLgetAnnotations(u_3);
          b_4 = t;
          t = x_3;
          t = map1_1_0(n_0, t);
          e_4 = t;
          t = (ATerm) ATinsert(CheckATermList(e_4), w_3);
          w_0 = t;
          t = SSLsetAnnotations(w_0, b_4);
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
ATerm topdown_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    t = topdown_1_0(b_92, t);
    return(t);
  }
  t = b_92(t);
  t = SRTS_all(q_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm w_5 = t;
    int x_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_96(t);
        ;
        LocalPopChoice(x_5);
      }
    else
      {
        t = w_5;
        {
          ATerm e_2 = NULL,f_2 = NULL,h_2 = NULL,i_2 = NULL,k_2 = NULL,l_2 = NULL,j_1 = NULL;
          t = o_96(t);
          l_2 = t;
          if(match_cons(t, sym__2))
            {
              f_2 = ATgetArgument(t, 0);
              h_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_2);
          e_2 = t;
          t = f_2;
          t = q_96(t);
          i_2 = t;
          t = h_2;
          t = m_2(t);
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_2, k_2);
          j_1 = t;
          t = SSLsetAnnotations(j_1, e_2);
          t = p_96(t);
        }
      }
    return(t);
  }
  t = m_2(t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_5 = ATgetArgument(t, 0);
      if(((ATgetType(y_5) != AT_LIST) || !(ATisEmpty(y_5))))
        _fail(t);
      {
        ATerm b_6 = ATgetArgument(t, 1);
        if(((ATgetType(b_6) != AT_LIST) || !(ATisEmpty(b_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm i_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_6 = ATgetArgument(t, 0);
      if(((ATgetType(c_6) == AT_LIST) && !(ATisEmpty(c_6))))
        {
          i_21 = ATgetFirst((ATermList) c_6);
          k_21 = (ATerm) ATgetNext((ATermList) c_6);
        }
      else
        _fail(t);
      {
        ATerm f_6 = ATgetArgument(t, 1);
        if(((ATgetType(f_6) == AT_LIST) && !(ATisEmpty(f_6))))
          {
            l_21 = ATgetFirst((ATermList) f_6);
            m_21 = (ATerm) ATgetNext((ATermList) f_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_21, l_21), (ATerm) ATmakeAppl(sym__2, k_21, m_21));
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL;
  if(match_cons(t, sym__2))
    {
      n_21 = ATgetArgument(t, 0);
      o_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_21), n_21);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL;
  if(match_cons(t, sym__2))
    {
      p_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_21), (ATerm) ATmakeAppl(sym_Match_1, q_21));
  return(t);
}
ATerm d_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_6 = ATgetArgument(t, 0);
      if(((ATgetType(g_6) != AT_LIST) || !(ATisEmpty(g_6))))
        _fail(t);
      {
        ATerm h_6 = ATgetArgument(t, 1);
        if(((ATgetType(h_6) != AT_LIST) || !(ATisEmpty(h_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_6 = ATgetArgument(t, 0);
      if(((ATgetType(i_6) == AT_LIST) && !(ATisEmpty(i_6))))
        {
          n_27 = ATgetFirst((ATermList) i_6);
          o_27 = (ATerm) ATgetNext((ATermList) i_6);
        }
      else
        _fail(t);
      {
        ATerm j_6 = ATgetArgument(t, 1);
        if(((ATgetType(j_6) == AT_LIST) && !(ATisEmpty(j_6))))
          {
            p_27 = ATgetFirst((ATermList) j_6);
            q_27 = (ATerm) ATgetNext((ATermList) j_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_27, p_27), (ATerm) ATmakeAppl(sym__2, o_27, q_27));
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL;
  if(match_cons(t, sym__2))
    {
      r_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_27), r_27);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL;
  if(match_cons(t, sym__2))
    {
      t_27 = ATgetArgument(t, 0);
      u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_27), (ATerm) ATmakeAppl(sym_Match_1, u_27));
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm m_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(l_6);
      {
        ATerm y_38 = NULL,z_38 = NULL;
        y_38 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm n_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        z_38 = t;
        t = SSLgetAnnotations(y_38);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_6 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) o_6) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_6 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(p_6) != AT_LIST) || !(ATisEmpty(p_6))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = z_38;
      }
    }
  else
    {
      t = k_6;
      {
        ATerm r_6 = t;
        int s_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm t_6 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) t_6) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm u_6 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_6);
            _fail(t);
          }
        else
          {
            t = r_6;
          }
      }
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm j_48 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_48, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_6), term_x_6));
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm k_48 = NULL,m_48 = NULL;
  m_48 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_48 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, k_48, term_x_6);
    }
  else
    {
      t = m_48;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm x_48 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_48, term_x_6);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL;
  z_48 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_48 = ATgetArgument(t, 0);
      {
        ATerm z_6 = t;
        int a_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, y_48, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_6), term_x_6));
            ;
            LocalPopChoice(a_7);
          }
        else
          {
            t = z_6;
            t = z_48;
          }
      }
    }
  else
    {
      t = z_48;
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm p_49 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_49, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_6), term_x_6));
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL;
  r_49 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_49 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, q_49, term_x_6);
    }
  else
    {
      t = r_49;
    }
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
    c_14 = t;
    if(match_cons(t, sym_Test_1))
      {
        b_14 = ATgetArgument(t, 0);
        t = b_14;
        if(match_cons(t, sym_Id_0))
          {
            ATerm c_7 = t;
            int d_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_e_7;
                t = r_0(t);
                ;
                LocalPopChoice(d_7);
              }
            else
              {
                t = c_7;
                {
                  ATerm f_7 = t;
                  int g_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
                      t = c_14;
                      t = new_0_0(t);
                      e_14 = t;
                      t = bottomup_1_0(r_0, t);
                      p_14 = t;
                      t = (ATerm) ATempty;
                      t = r_0(t);
                      q_14 = t;
                      t = (ATerm) ATinsert(CheckATermList(q_14), p_14);
                      t = r_0(t);
                      f_14 = t;
                      t = e_14;
                      t = bottomup_1_0(r_0, t);
                      o_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, o_14);
                      t = r_0(t);
                      n_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, n_14);
                      t = r_0(t);
                      h_14 = t;
                      t = b_14;
                      t = bottomup_1_0(r_0, t);
                      j_14 = t;
                      t = e_14;
                      t = bottomup_1_0(r_0, t);
                      m_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, m_14);
                      t = r_0(t);
                      l_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, l_14);
                      t = r_0(t);
                      k_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_14, k_14);
                      t = r_0(t);
                      i_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_14, i_14);
                      t = r_0(t);
                      g_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, f_14, g_14);
                      t = r_0(t);
                      ;
                      LocalPopChoice(g_7);
                    }
                  else
                    {
                      t = f_7;
                      t = c_14;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm h_7 = t;
                int i_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_k_7;
                    t = r_0(t);
                    ;
                    LocalPopChoice(i_7);
                  }
                else
                  {
                    t = h_7;
                    {
                      ATerm l_7 = t;
                      int n_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_14 = NULL,x_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,q_15 = NULL,r_15 = NULL,x_15 = NULL,z_15 = NULL,a_16 = NULL;
                          t = c_14;
                          t = new_0_0(t);
                          v_14 = t;
                          t = bottomup_1_0(r_0, t);
                          z_15 = t;
                          t = (ATerm) ATempty;
                          t = r_0(t);
                          a_16 = t;
                          t = (ATerm) ATinsert(CheckATermList(a_16), z_15);
                          t = r_0(t);
                          x_14 = t;
                          t = v_14;
                          t = bottomup_1_0(r_0, t);
                          x_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, x_15);
                          t = r_0(t);
                          r_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, r_15);
                          t = r_0(t);
                          b_15 = t;
                          t = b_14;
                          t = bottomup_1_0(r_0, t);
                          j_15 = t;
                          t = v_14;
                          t = bottomup_1_0(r_0, t);
                          q_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, q_15);
                          t = r_0(t);
                          l_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, l_15);
                          t = r_0(t);
                          k_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_15, k_15);
                          t = r_0(t);
                          c_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_15, c_15);
                          t = r_0(t);
                          a_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, x_14, a_15);
                          t = r_0(t);
                          ;
                          LocalPopChoice(n_7);
                        }
                      else
                        {
                          t = l_7;
                          t = c_14;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    y_13 = ATgetArgument(t, 0);
                    {
                      ATerm o_7 = t;
                      int p_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, y_13);
                          t = r_0(t);
                          ;
                          LocalPopChoice(p_7);
                        }
                      else
                        {
                          t = o_7;
                          {
                            ATerm q_7 = t;
                            int r_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
                                t = c_14;
                                t = new_0_0(t);
                                j_16 = t;
                                t = bottomup_1_0(r_0, t);
                                g_17 = t;
                                t = (ATerm) ATempty;
                                t = r_0(t);
                                h_17 = t;
                                t = (ATerm) ATinsert(CheckATermList(h_17), g_17);
                                t = r_0(t);
                                k_16 = t;
                                t = j_16;
                                t = bottomup_1_0(r_0, t);
                                f_17 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, f_17);
                                t = r_0(t);
                                e_17 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, e_17);
                                t = r_0(t);
                                m_16 = t;
                                t = b_14;
                                t = bottomup_1_0(r_0, t);
                                o_16 = t;
                                t = j_16;
                                t = bottomup_1_0(r_0, t);
                                x_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, x_16);
                                t = r_0(t);
                                w_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, w_16);
                                t = r_0(t);
                                v_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, o_16, v_16);
                                t = r_0(t);
                                n_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, m_16, n_16);
                                t = r_0(t);
                                l_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, k_16, l_16);
                                t = r_0(t);
                                ;
                                LocalPopChoice(r_7);
                              }
                            else
                              {
                                t = q_7;
                                t = c_14;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm s_7 = t;
                    int t_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_17 = NULL,t_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,g_18 = NULL,i_18 = NULL;
                        t = c_14;
                        t = new_0_0(t);
                        o_17 = t;
                        t = bottomup_1_0(r_0, t);
                        g_18 = t;
                        t = (ATerm) ATempty;
                        t = r_0(t);
                        i_18 = t;
                        t = (ATerm) ATinsert(CheckATermList(i_18), g_18);
                        t = r_0(t);
                        t_17 = t;
                        t = o_17;
                        t = bottomup_1_0(r_0, t);
                        d_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, d_18);
                        t = r_0(t);
                        c_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, c_18);
                        t = r_0(t);
                        w_17 = t;
                        t = b_14;
                        t = bottomup_1_0(r_0, t);
                        y_17 = t;
                        t = o_17;
                        t = bottomup_1_0(r_0, t);
                        b_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, b_18);
                        t = r_0(t);
                        a_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, a_18);
                        t = r_0(t);
                        z_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_17, z_17);
                        t = r_0(t);
                        x_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_17, x_17);
                        t = r_0(t);
                        v_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, t_17, v_17);
                        t = r_0(t);
                        ;
                        LocalPopChoice(t_7);
                      }
                    else
                      {
                        t = s_7;
                        t = c_14;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            b_14 = ATgetArgument(t, 0);
            t = b_14;
            if(match_cons(t, sym_Id_0))
              {
                ATerm u_7 = t;
                int v_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_k_7;
                    t = r_0(t);
                    ;
                    LocalPopChoice(v_7);
                  }
                else
                  {
                    t = u_7;
                    t = c_14;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm w_7 = t;
                    int x_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_e_7;
                        t = r_0(t);
                        ;
                        LocalPopChoice(x_7);
                      }
                    else
                      {
                        t = w_7;
                        t = c_14;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        y_13 = ATgetArgument(t, 0);
                        {
                          ATerm y_7 = t;
                          int z_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, y_13);
                              t = r_0(t);
                              ;
                              LocalPopChoice(z_7);
                            }
                          else
                            {
                              t = y_7;
                              t = c_14;
                            }
                        }
                      }
                    else
                      {
                        t = c_14;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                b_14 = ATgetArgument(t, 0);
                a_14 = ATgetArgument(t, 1);
                t = a_14;
                if(match_cons(t, sym_Id_0))
                  {
                    t = b_14;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = a_14;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = b_14;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                y_13 = ATgetArgument(t, 0);
                                z_13 = ATgetArgument(t, 1);
                                t = b_14;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    y_13 = ATgetArgument(t, 0);
                                    z_13 = ATgetArgument(t, 1);
                                    t = b_14;
                                  }
                                else
                                  {
                                    t = b_14;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        w_13 = ATgetArgument(t, 0);
                        x_13 = ATgetArgument(t, 1);
                        t = w_13;
                        if(match_cons(t, sym_Match_1))
                          {
                            v_13 = ATgetArgument(t, 0);
                            t = v_13;
                            if(match_cons(t, sym_Op_2))
                              {
                                t_13 = ATgetArgument(t, 0);
                                o_13 = ATgetArgument(t, 1);
                                t = b_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = a_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm a_8 = t;
                                        int c_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_k_7;
                                            t = r_0(t);
                                            ;
                                            LocalPopChoice(c_8);
                                          }
                                        else
                                          {
                                            t = a_8;
                                            t = c_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            y_13 = ATgetArgument(t, 0);
                                            z_13 = ATgetArgument(t, 1);
                                            {
                                              ATerm d_8 = t;
                                              int e_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm o_20 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                  t = r_0(t);
                                                  o_20 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_13, o_20);
                                                  t = r_0(t);
                                                  ;
                                                  LocalPopChoice(e_8);
                                                }
                                              else
                                                {
                                                  t = d_8;
                                                  t = c_14;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                y_13 = ATgetArgument(t, 0);
                                                t = y_13;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    u_13 = ATgetArgument(t, 0);
                                                    p_13 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm g_8 = t;
                                                      int h_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, u_13, t_13);
                                                          {
                                                            ATerm i_8 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm n_4 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    n_4 = ATgetArgument(t, 0);
                                                                    if((n_4 != ATgetArgument(t, 1)))
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
                                                                t = i_8;
                                                              }
                                                            t = term_k_7;
                                                            t = bottomup_1_0(r_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(h_8);
                                                        }
                                                      else
                                                        {
                                                          t = g_8;
                                                          {
                                                            ATerm j_8 = t;
                                                            int k_8 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm e_21 = NULL;
                                                                t = t_13;
                                                                if((u_13 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, p_13, o_13);
                                                                t = genzip_4_0(t_0, x_0, y_0, z_0, t);
                                                                e_21 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, u_13, p_13)), x_13));
                                                                t = bottomup_1_0(r_0, t);
                                                                ;
                                                                LocalPopChoice(k_8);
                                                              }
                                                            else
                                                              {
                                                                t = j_8;
                                                                {
                                                                  ATerm l_8 = t;
                                                                  int m_8 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm t_21 = NULL;
                                                                      t = v_13;
                                                                      if((y_13 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, y_13);
                                                                      t = r_0(t);
                                                                      t_21 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_21, x_13);
                                                                      t = r_0(t);
                                                                      ;
                                                                      LocalPopChoice(m_8);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = l_8;
                                                                      t = c_14;
                                                                    }
                                                                }
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
                                                        ATerm x_21 = NULL;
                                                        t = v_13;
                                                        if((y_13 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, y_13);
                                                        t = r_0(t);
                                                        x_21 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_21, x_13);
                                                        t = r_0(t);
                                                        ;
                                                        LocalPopChoice(o_8);
                                                      }
                                                    else
                                                      {
                                                        t = n_8;
                                                        t = c_14;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    y_13 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm p_8 = t;
                                                      int q_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_22 = NULL;
                                                          t = v_13;
                                                          if((y_13 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, y_13);
                                                          t = r_0(t);
                                                          b_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_22, x_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(q_8);
                                                        }
                                                      else
                                                        {
                                                          t = p_8;
                                                          t = c_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        y_13 = ATgetArgument(t, 0);
                                                        z_13 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_8 = t;
                                                          int s_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                              t = r_0(t);
                                                              g_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, g_22);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(s_8);
                                                            }
                                                          else
                                                            {
                                                              t = r_8;
                                                              t = c_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = c_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = b_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = a_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm t_8 = t;
                                        int u_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_k_7;
                                            t = r_0(t);
                                            ;
                                            LocalPopChoice(u_8);
                                          }
                                        else
                                          {
                                            t = t_8;
                                            t = c_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            y_13 = ATgetArgument(t, 0);
                                            z_13 = ATgetArgument(t, 1);
                                            {
                                              ATerm v_8 = t;
                                              int w_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_22 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                  t = r_0(t);
                                                  p_22 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_13, p_22);
                                                  t = r_0(t);
                                                  ;
                                                  LocalPopChoice(w_8);
                                                }
                                              else
                                                {
                                                  t = v_8;
                                                  t = c_14;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                y_13 = ATgetArgument(t, 0);
                                                {
                                                  ATerm x_8 = t;
                                                  int y_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_22 = NULL;
                                                      t = v_13;
                                                      if((y_13 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, y_13);
                                                      t = r_0(t);
                                                      t_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_22, x_13);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(y_8);
                                                    }
                                                  else
                                                    {
                                                      t = x_8;
                                                      t = c_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    y_13 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm z_8 = t;
                                                      int a_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_22 = NULL;
                                                          t = v_13;
                                                          if((y_13 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, y_13);
                                                          t = r_0(t);
                                                          x_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, x_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(a_9);
                                                        }
                                                      else
                                                        {
                                                          t = z_8;
                                                          t = c_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        y_13 = ATgetArgument(t, 0);
                                                        z_13 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_9 = t;
                                                          int c_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                              t = r_0(t);
                                                              d_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, d_23);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(c_9);
                                                            }
                                                          else
                                                            {
                                                              t = b_9;
                                                              t = c_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = c_14;
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
                                v_13 = ATgetArgument(t, 0);
                                t = v_13;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    t_13 = ATgetArgument(t, 0);
                                    t = b_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = a_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm d_9 = t;
                                            int e_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(e_9);
                                              }
                                            else
                                              {
                                                t = d_9;
                                                t = c_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                y_13 = ATgetArgument(t, 0);
                                                z_13 = ATgetArgument(t, 1);
                                                {
                                                  ATerm f_9 = t;
                                                  int g_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                      t = r_0(t);
                                                      p_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_13, p_23);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(g_9);
                                                    }
                                                  else
                                                    {
                                                      t = f_9;
                                                      t = c_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm h_9 = t;
                                                int i_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm j_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(i_9);
                                                    {
                                                      ATerm k_9 = t;
                                                      int l_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, v_13);
                                                          t = r_0(t);
                                                          v_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_23, x_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(l_9);
                                                        }
                                                      else
                                                        {
                                                          t = k_9;
                                                          t = c_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = h_9;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        y_13 = ATgetArgument(t, 0);
                                                        t = y_13;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            u_13 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm m_9 = t;
                                                              int n_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_24 = NULL,i_24 = NULL;
                                                                  t = t_13;
                                                                  if((u_13 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, u_13);
                                                                  t = r_0(t);
                                                                  i_24 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, i_24);
                                                                  t = r_0(t);
                                                                  h_24 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_24, x_13);
                                                                  t = r_0(t);
                                                                  ;
                                                                  LocalPopChoice(n_9);
                                                                }
                                                              else
                                                                {
                                                                  t = m_9;
                                                                  t = c_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = c_14;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            y_13 = ATgetArgument(t, 0);
                                                            z_13 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm o_9 = t;
                                                              int p_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_24 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                                  t = r_0(t);
                                                                  o_24 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, o_24);
                                                                  t = r_0(t);
                                                                  ;
                                                                  LocalPopChoice(p_9);
                                                                }
                                                              else
                                                                {
                                                                  t = o_9;
                                                                  t = c_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = c_14;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = b_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = a_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm q_9 = t;
                                            int r_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(r_9);
                                              }
                                            else
                                              {
                                                t = q_9;
                                                t = c_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                y_13 = ATgetArgument(t, 0);
                                                z_13 = ATgetArgument(t, 1);
                                                {
                                                  ATerm s_9 = t;
                                                  int t_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_25 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                      t = r_0(t);
                                                      f_25 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_13, f_25);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(t_9);
                                                    }
                                                  else
                                                    {
                                                      t = s_9;
                                                      t = c_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm u_9 = t;
                                                int v_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm w_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(v_9);
                                                    {
                                                      ATerm x_9 = t;
                                                      int y_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_25 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, v_13);
                                                          t = r_0(t);
                                                          j_25 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_25, x_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(y_9);
                                                        }
                                                      else
                                                        {
                                                          t = x_9;
                                                          t = c_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = u_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        y_13 = ATgetArgument(t, 0);
                                                        z_13 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_9 = t;
                                                          int a_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_25 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                              t = r_0(t);
                                                              p_25 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, p_25);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(a_10);
                                                            }
                                                          else
                                                            {
                                                              t = z_9;
                                                              t = c_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = c_14;
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
                                    v_13 = ATgetArgument(t, 0);
                                    q_13 = ATgetArgument(t, 1);
                                    r_13 = ATgetArgument(t, 2);
                                    t = b_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = a_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm b_10 = t;
                                            int c_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(c_10);
                                              }
                                            else
                                              {
                                                t = b_10;
                                                t = c_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                y_13 = ATgetArgument(t, 0);
                                                z_13 = ATgetArgument(t, 1);
                                                {
                                                  ATerm d_10 = t;
                                                  int e_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_25 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                      t = r_0(t);
                                                      y_25 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_13, y_25);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(e_10);
                                                    }
                                                  else
                                                    {
                                                      t = d_10;
                                                      t = c_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm f_10 = t;
                                                int g_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm h_10 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(g_10);
                                                    {
                                                      ATerm i_10 = t;
                                                      int j_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_26 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, v_13, q_13, r_13);
                                                          t = r_0(t);
                                                          e_26 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_26, x_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(j_10);
                                                        }
                                                      else
                                                        {
                                                          t = i_10;
                                                          t = c_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = f_10;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        y_13 = ATgetArgument(t, 0);
                                                        z_13 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_10 = t;
                                                          int l_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                              t = r_0(t);
                                                              j_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, j_26);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(l_10);
                                                            }
                                                          else
                                                            {
                                                              t = k_10;
                                                              t = c_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = c_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = b_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = a_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm m_10 = t;
                                            int n_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(n_10);
                                              }
                                            else
                                              {
                                                t = m_10;
                                                t = c_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                y_13 = ATgetArgument(t, 0);
                                                z_13 = ATgetArgument(t, 1);
                                                {
                                                  ATerm o_10 = t;
                                                  int p_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_26 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                      t = r_0(t);
                                                      s_26 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_13, s_26);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(p_10);
                                                    }
                                                  else
                                                    {
                                                      t = o_10;
                                                      t = c_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    y_13 = ATgetArgument(t, 0);
                                                    z_13 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm q_10 = t;
                                                      int r_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_26 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                          t = r_0(t);
                                                          x_26 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, x_26);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(r_10);
                                                        }
                                                      else
                                                        {
                                                          t = q_10;
                                                          t = c_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = c_14;
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
                            w_13 = ATgetArgument(t, 0);
                            t = w_13;
                            if(match_cons(t, sym_Op_2))
                              {
                                v_13 = ATgetArgument(t, 0);
                                q_13 = ATgetArgument(t, 1);
                                t = b_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = a_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm s_10 = t;
                                        int t_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_k_7;
                                            t = r_0(t);
                                            ;
                                            LocalPopChoice(t_10);
                                          }
                                        else
                                          {
                                            t = s_10;
                                            t = c_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            y_13 = ATgetArgument(t, 0);
                                            z_13 = ATgetArgument(t, 1);
                                            {
                                              ATerm u_10 = t;
                                              int v_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm h_27 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                  t = r_0(t);
                                                  h_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_13, h_27);
                                                  t = r_0(t);
                                                  ;
                                                  LocalPopChoice(v_10);
                                                }
                                              else
                                                {
                                                  t = u_10;
                                                  t = c_14;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                y_13 = ATgetArgument(t, 0);
                                                t = y_13;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    u_13 = ATgetArgument(t, 0);
                                                    p_13 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm w_10 = t;
                                                      int x_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, u_13, v_13);
                                                          {
                                                            ATerm y_10 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_4 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    u_4 = ATgetArgument(t, 0);
                                                                    if((u_4 != ATgetArgument(t, 1)))
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
                                                                t = y_10;
                                                              }
                                                            t = term_k_7;
                                                            t = bottomup_1_0(r_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(x_10);
                                                        }
                                                      else
                                                        {
                                                          t = w_10;
                                                          {
                                                            ATerm z_10 = t;
                                                            int a_11 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm m_27 = NULL;
                                                                t = v_13;
                                                                if((u_13 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, p_13, q_13);
                                                                t = genzip_4_0(d_1, f_1, i_1, k_1, t);
                                                                m_27 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_27), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, u_13, p_13)));
                                                                t = bottomup_1_0(r_0, t);
                                                                ;
                                                                LocalPopChoice(a_11);
                                                              }
                                                            else
                                                              {
                                                                t = z_10;
                                                                {
                                                                  ATerm b_11 = t;
                                                                  int c_11 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = w_13;
                                                                      if((y_13 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, y_13);
                                                                      t = r_0(t);
                                                                      ;
                                                                      LocalPopChoice(c_11);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = b_11;
                                                                      t = c_14;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm d_11 = t;
                                                    int e_11 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = w_13;
                                                        if((y_13 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, y_13);
                                                        t = r_0(t);
                                                        ;
                                                        LocalPopChoice(e_11);
                                                      }
                                                    else
                                                      {
                                                        t = d_11;
                                                        t = c_14;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    y_13 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm f_11 = t;
                                                      int g_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = w_13;
                                                          if((y_13 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, y_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(g_11);
                                                        }
                                                      else
                                                        {
                                                          t = f_11;
                                                          t = c_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        y_13 = ATgetArgument(t, 0);
                                                        z_13 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_11 = t;
                                                          int i_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_28 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                              t = r_0(t);
                                                              e_28 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, e_28);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(i_11);
                                                            }
                                                          else
                                                            {
                                                              t = h_11;
                                                              t = c_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = c_14;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = b_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = a_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm j_11 = t;
                                        int k_11 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_k_7;
                                            t = r_0(t);
                                            ;
                                            LocalPopChoice(k_11);
                                          }
                                        else
                                          {
                                            t = j_11;
                                            t = c_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            y_13 = ATgetArgument(t, 0);
                                            z_13 = ATgetArgument(t, 1);
                                            {
                                              ATerm l_11 = t;
                                              int s_11 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm n_28 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                  t = r_0(t);
                                                  n_28 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_13, n_28);
                                                  t = r_0(t);
                                                  ;
                                                  LocalPopChoice(s_11);
                                                }
                                              else
                                                {
                                                  t = l_11;
                                                  t = c_14;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                y_13 = ATgetArgument(t, 0);
                                                {
                                                  ATerm u_11 = t;
                                                  int v_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = w_13;
                                                      if((y_13 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, y_13);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(v_11);
                                                    }
                                                  else
                                                    {
                                                      t = u_11;
                                                      t = c_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    y_13 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm z_11 = t;
                                                      int b_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = w_13;
                                                          if((y_13 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, y_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(b_12);
                                                        }
                                                      else
                                                        {
                                                          t = z_11;
                                                          t = c_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        y_13 = ATgetArgument(t, 0);
                                                        z_13 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_12 = t;
                                                          int d_12 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                              t = r_0(t);
                                                              f_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, f_29);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(d_12);
                                                            }
                                                          else
                                                            {
                                                              t = c_12;
                                                              t = c_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = c_14;
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
                                w_13 = ATgetArgument(t, 0);
                                t = w_13;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    v_13 = ATgetArgument(t, 0);
                                    t = b_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = a_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm e_12 = t;
                                            int f_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(f_12);
                                              }
                                            else
                                              {
                                                t = e_12;
                                                t = c_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                y_13 = ATgetArgument(t, 0);
                                                z_13 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_12 = t;
                                                  int h_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                      t = r_0(t);
                                                      x_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_13, x_29);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(h_12);
                                                    }
                                                  else
                                                    {
                                                      t = g_12;
                                                      t = c_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm i_12 = t;
                                                int j_12 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm k_12 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(j_12);
                                                    {
                                                      ATerm l_12 = t;
                                                      int m_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(m_12);
                                                        }
                                                      else
                                                        {
                                                          t = l_12;
                                                          t = c_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_12;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        y_13 = ATgetArgument(t, 0);
                                                        t = y_13;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            u_13 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm n_12 = t;
                                                              int o_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm g_30 = NULL;
                                                                  t = v_13;
                                                                  if((u_13 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, u_13);
                                                                  t = r_0(t);
                                                                  g_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, g_30);
                                                                  t = r_0(t);
                                                                  ;
                                                                  LocalPopChoice(o_12);
                                                                }
                                                              else
                                                                {
                                                                  t = n_12;
                                                                  t = c_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = c_14;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            y_13 = ATgetArgument(t, 0);
                                                            z_13 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm p_12 = t;
                                                              int q_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm q_30 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                                  t = r_0(t);
                                                                  q_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, q_30);
                                                                  t = r_0(t);
                                                                  ;
                                                                  LocalPopChoice(q_12);
                                                                }
                                                              else
                                                                {
                                                                  t = p_12;
                                                                  t = c_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = c_14;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = b_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = a_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm r_12 = t;
                                            int s_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(s_12);
                                              }
                                            else
                                              {
                                                t = r_12;
                                                t = c_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                y_13 = ATgetArgument(t, 0);
                                                z_13 = ATgetArgument(t, 1);
                                                {
                                                  ATerm t_12 = t;
                                                  int u_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm b_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                      t = r_0(t);
                                                      b_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_13, b_31);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(u_12);
                                                    }
                                                  else
                                                    {
                                                      t = t_12;
                                                      t = c_14;
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
                                                      ATerm y_12 = t;
                                                      int z_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(z_12);
                                                        }
                                                      else
                                                        {
                                                          t = y_12;
                                                          t = c_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = v_12;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        y_13 = ATgetArgument(t, 0);
                                                        z_13 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_13 = t;
                                                          int b_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                              t = r_0(t);
                                                              p_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, p_31);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(b_13);
                                                            }
                                                          else
                                                            {
                                                              t = a_13;
                                                              t = c_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = c_14;
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
                                    w_13 = ATgetArgument(t, 0);
                                    x_13 = ATgetArgument(t, 1);
                                    s_13 = ATgetArgument(t, 2);
                                    t = b_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = a_14;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm c_13 = t;
                                            int d_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(d_13);
                                              }
                                            else
                                              {
                                                t = c_13;
                                                t = c_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                y_13 = ATgetArgument(t, 0);
                                                z_13 = ATgetArgument(t, 1);
                                                {
                                                  ATerm e_13 = t;
                                                  int f_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_32 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                      t = r_0(t);
                                                      a_32 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_13, a_32);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(f_13);
                                                    }
                                                  else
                                                    {
                                                      t = e_13;
                                                      t = c_14;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm g_13 = t;
                                                int d_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm r_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_14);
                                                    {
                                                      ATerm s_14 = t;
                                                      int t_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, w_13, x_13, s_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(t_14);
                                                        }
                                                      else
                                                        {
                                                          t = s_14;
                                                          t = c_14;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = g_13;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        y_13 = ATgetArgument(t, 0);
                                                        z_13 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_14 = t;
                                                          int w_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                              t = r_0(t);
                                                              n_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, n_32);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(w_14);
                                                            }
                                                          else
                                                            {
                                                              t = u_14;
                                                              t = c_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = c_14;
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
                                        w_13 = ATgetArgument(t, 0);
                                        x_13 = ATgetArgument(t, 1);
                                        t = b_14;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = a_14;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm y_14 = t;
                                                int z_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_k_7;
                                                    t = r_0(t);
                                                    ;
                                                    LocalPopChoice(z_14);
                                                  }
                                                else
                                                  {
                                                    t = y_14;
                                                    {
                                                      ATerm d_15 = t;
                                                      int e_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, x_13);
                                                          t = r_0(t);
                                                          b_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, w_13, b_33);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(e_15);
                                                        }
                                                      else
                                                        {
                                                          t = d_15;
                                                          t = c_14;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    y_13 = ATgetArgument(t, 0);
                                                    z_13 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm f_15 = t;
                                                      int g_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                          t = r_0(t);
                                                          i_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_13, i_33);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(g_15);
                                                        }
                                                      else
                                                        {
                                                          t = f_15;
                                                          {
                                                            ATerm h_15 = t;
                                                            int i_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm m_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, x_13);
                                                                t = r_0(t);
                                                                m_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, w_13, m_33);
                                                                t = r_0(t);
                                                                ;
                                                                LocalPopChoice(i_15);
                                                              }
                                                            else
                                                              {
                                                                t = h_15;
                                                                t = c_14;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        y_13 = ATgetArgument(t, 0);
                                                        z_13 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm m_15 = t;
                                                          int n_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, x_13);
                                                              t = r_0(t);
                                                              r_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, w_13, r_33);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(n_15);
                                                            }
                                                          else
                                                            {
                                                              t = m_15;
                                                              {
                                                                ATerm o_15 = t;
                                                                int p_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm v_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                                    t = r_0(t);
                                                                    v_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, v_33);
                                                                    t = r_0(t);
                                                                    ;
                                                                    LocalPopChoice(p_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = o_15;
                                                                    t = c_14;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm s_15 = t;
                                                        int t_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm b_34 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, x_13);
                                                            t = r_0(t);
                                                            b_34 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, w_13, b_34);
                                                            t = r_0(t);
                                                            ;
                                                            LocalPopChoice(t_15);
                                                          }
                                                        else
                                                          {
                                                            t = s_15;
                                                            t = c_14;
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
                                            w_13 = ATgetArgument(t, 0);
                                            x_13 = ATgetArgument(t, 1);
                                            t = b_14;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = a_14;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm u_15 = t;
                                                    int v_15 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_k_7;
                                                        t = r_0(t);
                                                        ;
                                                        LocalPopChoice(v_15);
                                                      }
                                                    else
                                                      {
                                                        t = u_15;
                                                        {
                                                          ATerm w_15 = t;
                                                          int y_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, x_13);
                                                              t = r_0(t);
                                                              p_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_13, p_34);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(y_15);
                                                            }
                                                          else
                                                            {
                                                              t = w_15;
                                                              t = c_14;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        y_13 = ATgetArgument(t, 0);
                                                        z_13 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_16 = t;
                                                          int c_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                              t = r_0(t);
                                                              v_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_13, v_34);
                                                              t = r_0(t);
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
                                                                    ATerm c_35 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, x_13);
                                                                    t = r_0(t);
                                                                    c_35 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, w_13, c_35);
                                                                    t = r_0(t);
                                                                    ;
                                                                    LocalPopChoice(e_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = d_16;
                                                                    t = c_14;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            y_13 = ATgetArgument(t, 0);
                                                            z_13 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm f_16 = t;
                                                              int g_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm n_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, x_13);
                                                                  t = r_0(t);
                                                                  n_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_13, n_35);
                                                                  t = r_0(t);
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
                                                                        ATerm s_35 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                                        t = r_0(t);
                                                                        s_35 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, s_35);
                                                                        t = r_0(t);
                                                                        ;
                                                                        LocalPopChoice(i_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_16;
                                                                        t = c_14;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm p_16 = t;
                                                            int q_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm a_36 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, x_13);
                                                                t = r_0(t);
                                                                a_36 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, w_13, a_36);
                                                                t = r_0(t);
                                                                ;
                                                                LocalPopChoice(q_16);
                                                              }
                                                            else
                                                              {
                                                                t = p_16;
                                                                t = c_14;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = b_14;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = a_14;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm r_16 = t;
                                                    int s_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_k_7;
                                                        t = r_0(t);
                                                        ;
                                                        LocalPopChoice(s_16);
                                                      }
                                                    else
                                                      {
                                                        t = r_16;
                                                        t = c_14;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        y_13 = ATgetArgument(t, 0);
                                                        z_13 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_16 = t;
                                                          int u_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                              t = r_0(t);
                                                              j_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_13, j_36);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(u_16);
                                                            }
                                                          else
                                                            {
                                                              t = t_16;
                                                              t = c_14;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            y_13 = ATgetArgument(t, 0);
                                                            z_13 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm y_16 = t;
                                                              int z_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_36 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                                                                  t = r_0(t);
                                                                  o_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, y_13, o_36);
                                                                  t = r_0(t);
                                                                  ;
                                                                  LocalPopChoice(z_16);
                                                                }
                                                              else
                                                                {
                                                                  t = y_16;
                                                                  t = c_14;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = c_14;
                                                          }
                                                      }
                                                  }
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
                    b_14 = ATgetArgument(t, 0);
                    a_14 = ATgetArgument(t, 1);
                    t = a_14;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = b_14;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm a_17 = t;
                            int b_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_e_7;
                                t = r_0(t);
                                ;
                                LocalPopChoice(b_17);
                              }
                            else
                              {
                                t = a_17;
                                t = b_14;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = a_14;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    y_13 = ATgetArgument(t, 0);
                                    z_13 = ATgetArgument(t, 1);
                                    t = b_14;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        y_13 = ATgetArgument(t, 0);
                                        t = b_14;
                                      }
                                    else
                                      {
                                        t = b_14;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = b_14;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm c_17 = t;
                            int d_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_e_7;
                                t = r_0(t);
                                ;
                                LocalPopChoice(d_17);
                              }
                            else
                              {
                                t = c_17;
                                {
                                  ATerm i_17 = t;
                                  int j_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = a_14;
                                      if((b_14 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(j_17);
                                    }
                                  else
                                    {
                                      t = i_17;
                                      t = c_14;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = a_14;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    y_13 = ATgetArgument(t, 0);
                                    z_13 = ATgetArgument(t, 1);
                                    {
                                      ATerm k_17 = t;
                                      int l_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm t_38 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, z_13, a_14);
                                          t = r_0(t);
                                          t_38 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, y_13, t_38);
                                          t = r_0(t);
                                          ;
                                          LocalPopChoice(l_17);
                                        }
                                      else
                                        {
                                          t = k_17;
                                          {
                                            ATerm m_17 = t;
                                            int n_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = a_14;
                                                if((b_14 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(n_17);
                                              }
                                            else
                                              {
                                                t = m_17;
                                                t = c_14;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        y_13 = ATgetArgument(t, 0);
                                        {
                                          ATerm p_17 = t;
                                          int q_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = a_14;
                                              if((b_14 != t))
                                                {
                                                  _fail(t);
                                                }
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
                                                    t = y_13;
                                                    t = topdown_1_0(l_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, y_13);
                                                    t = bottomup_1_0(r_0, t);
                                                    ;
                                                    LocalPopChoice(s_17);
                                                  }
                                                else
                                                  {
                                                    t = r_17;
                                                    t = c_14;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm u_17 = t;
                                        int e_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = a_14;
                                            if((b_14 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(e_18);
                                          }
                                        else
                                          {
                                            t = u_17;
                                            t = c_14;
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
                        b_14 = ATgetArgument(t, 0);
                        a_14 = ATgetArgument(t, 1);
                        t = a_14;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = b_14;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm f_18 = t;
                                int h_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_e_7;
                                    t = r_0(t);
                                    ;
                                    LocalPopChoice(h_18);
                                  }
                                else
                                  {
                                    t = f_18;
                                    t = a_14;
                                  }
                              }
                            else
                              {
                                ATerm j_18 = t;
                                int k_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_e_7;
                                    t = r_0(t);
                                    ;
                                    LocalPopChoice(k_18);
                                  }
                                else
                                  {
                                    t = j_18;
                                    t = c_14;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = b_14;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm l_18 = t;
                                    int m_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_k_7;
                                        t = r_0(t);
                                        ;
                                        LocalPopChoice(m_18);
                                      }
                                    else
                                      {
                                        t = l_18;
                                        t = a_14;
                                      }
                                  }
                                else
                                  {
                                    ATerm n_18 = t;
                                    int o_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_k_7;
                                        t = r_0(t);
                                        ;
                                        LocalPopChoice(o_18);
                                      }
                                    else
                                      {
                                        t = n_18;
                                        t = c_14;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    w_13 = ATgetArgument(t, 0);
                                    x_13 = ATgetArgument(t, 1);
                                    t = b_14;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = a_14;
                                      }
                                    else
                                      {
                                        ATerm p_18 = t;
                                        int q_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm t_39 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, b_14, w_13);
                                            t = conc_0_0(t);
                                            t_39 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, t_39, x_13);
                                            t = bottomup_1_0(r_0, t);
                                            ;
                                            LocalPopChoice(q_18);
                                          }
                                        else
                                          {
                                            t = p_18;
                                            t = c_14;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = b_14;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = a_14;
                                      }
                                    else
                                      {
                                        t = c_14;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm r_18 = t;
                        int s_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm t_18 = ATgetArgument(t, 0);
                                a_14 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(s_18);
                            t = a_14;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm u_18 = t;
                                int v_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_e_7;
                                    t = r_0(t);
                                    ;
                                    LocalPopChoice(v_18);
                                  }
                                else
                                  {
                                    t = u_18;
                                    t = c_14;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm w_18 = t;
                                    int x_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_k_7;
                                        t = r_0(t);
                                        ;
                                        LocalPopChoice(x_18);
                                      }
                                    else
                                      {
                                        t = w_18;
                                        t = c_14;
                                      }
                                  }
                                else
                                  {
                                    t = c_14;
                                  }
                              }
                          }
                        else
                          {
                            t = r_18;
                            if(match_cons(t, sym_All_1))
                              {
                                b_14 = ATgetArgument(t, 0);
                                t = b_14;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm y_18 = t;
                                    int z_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_e_7;
                                        t = r_0(t);
                                        ;
                                        LocalPopChoice(z_18);
                                      }
                                    else
                                      {
                                        t = y_18;
                                        t = c_14;
                                      }
                                  }
                                else
                                  {
                                    t = c_14;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    b_14 = ATgetArgument(t, 0);
                                    t = b_14;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm a_19 = t;
                                        int b_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_7;
                                            t = r_0(t);
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
                                                  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
                                                  t = c_14;
                                                  t = new_0_0(t);
                                                  i_40 = t;
                                                  t = bottomup_1_0(r_0, t);
                                                  u_40 = t;
                                                  t = (ATerm) ATempty;
                                                  t = r_0(t);
                                                  v_40 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(v_40), u_40);
                                                  t = r_0(t);
                                                  j_40 = t;
                                                  t = i_40;
                                                  t = bottomup_1_0(r_0, t);
                                                  t_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, t_40);
                                                  t = r_0(t);
                                                  s_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, s_40);
                                                  t = r_0(t);
                                                  l_40 = t;
                                                  t = b_14;
                                                  t = bottomup_1_0(r_0, t);
                                                  n_40 = t;
                                                  t = i_40;
                                                  t = bottomup_1_0(r_0, t);
                                                  r_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, r_40);
                                                  t = r_0(t);
                                                  q_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, q_40);
                                                  t = r_0(t);
                                                  o_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_40, o_40);
                                                  t = r_0(t);
                                                  m_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_40, m_40);
                                                  t = r_0(t);
                                                  k_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, j_40, k_40);
                                                  t = r_0(t);
                                                  ;
                                                  LocalPopChoice(d_19);
                                                }
                                              else
                                                {
                                                  t = c_19;
                                                  t = c_14;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm e_19 = t;
                                            int f_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_k_7;
                                                t = r_0(t);
                                                ;
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
                                                      ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL;
                                                      t = c_14;
                                                      t = new_0_0(t);
                                                      a_41 = t;
                                                      t = bottomup_1_0(r_0, t);
                                                      l_41 = t;
                                                      t = (ATerm) ATempty;
                                                      t = r_0(t);
                                                      m_41 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(m_41), l_41);
                                                      t = r_0(t);
                                                      b_41 = t;
                                                      t = a_41;
                                                      t = bottomup_1_0(r_0, t);
                                                      k_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, k_41);
                                                      t = r_0(t);
                                                      j_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, j_41);
                                                      t = r_0(t);
                                                      d_41 = t;
                                                      t = b_14;
                                                      t = bottomup_1_0(r_0, t);
                                                      f_41 = t;
                                                      t = a_41;
                                                      t = bottomup_1_0(r_0, t);
                                                      i_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, i_41);
                                                      t = r_0(t);
                                                      h_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, h_41);
                                                      t = r_0(t);
                                                      g_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_41, g_41);
                                                      t = r_0(t);
                                                      e_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_41, e_41);
                                                      t = r_0(t);
                                                      c_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, b_41, c_41);
                                                      t = r_0(t);
                                                      ;
                                                      LocalPopChoice(h_19);
                                                    }
                                                  else
                                                    {
                                                      t = g_19;
                                                      t = c_14;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                y_13 = ATgetArgument(t, 0);
                                                z_13 = ATgetArgument(t, 1);
                                                t = z_13;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    j_13 = ATgetArgument(t, 0);
                                                    l_13 = ATgetArgument(t, 1);
                                                    t = j_13;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        k_13 = ATgetArgument(t, 0);
                                                        t = y_13;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            u_13 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm i_19 = t;
                                                              int j_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, k_13);
                                                                  t = r_0(t);
                                                                  t_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_41, l_13);
                                                                  t = r_0(t);
                                                                  s_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_13, s_41);
                                                                  t = r_0(t);
                                                                  r_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, r_41);
                                                                  t = r_0(t);
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
                                                                        ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
                                                                        t = c_14;
                                                                        t = new_0_0(t);
                                                                        v_41 = t;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        g_42 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = r_0(t);
                                                                        h_42 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(h_42), g_42);
                                                                        t = r_0(t);
                                                                        w_41 = t;
                                                                        t = v_41;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        f_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, f_42);
                                                                        t = r_0(t);
                                                                        e_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, e_42);
                                                                        t = r_0(t);
                                                                        y_41 = t;
                                                                        t = b_14;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        a_42 = t;
                                                                        t = v_41;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        d_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, d_42);
                                                                        t = r_0(t);
                                                                        c_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, c_42);
                                                                        t = r_0(t);
                                                                        b_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_42, b_42);
                                                                        t = r_0(t);
                                                                        z_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_41, z_41);
                                                                        t = r_0(t);
                                                                        x_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, w_41, x_41);
                                                                        t = r_0(t);
                                                                        ;
                                                                        LocalPopChoice(l_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = k_19;
                                                                        t = c_14;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm m_19 = t;
                                                            int n_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL;
                                                                t = c_14;
                                                                t = new_0_0(t);
                                                                p_42 = t;
                                                                t = bottomup_1_0(r_0, t);
                                                                a_43 = t;
                                                                t = (ATerm) ATempty;
                                                                t = r_0(t);
                                                                b_43 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(b_43), a_43);
                                                                t = r_0(t);
                                                                q_42 = t;
                                                                t = p_42;
                                                                t = bottomup_1_0(r_0, t);
                                                                z_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, z_42);
                                                                t = r_0(t);
                                                                y_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, y_42);
                                                                t = r_0(t);
                                                                s_42 = t;
                                                                t = b_14;
                                                                t = bottomup_1_0(r_0, t);
                                                                u_42 = t;
                                                                t = p_42;
                                                                t = bottomup_1_0(r_0, t);
                                                                x_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, x_42);
                                                                t = r_0(t);
                                                                w_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, w_42);
                                                                t = r_0(t);
                                                                v_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, u_42, v_42);
                                                                t = r_0(t);
                                                                t_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, s_42, t_42);
                                                                t = r_0(t);
                                                                r_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, q_42, r_42);
                                                                t = r_0(t);
                                                                ;
                                                                LocalPopChoice(n_19);
                                                              }
                                                            else
                                                              {
                                                                t = m_19;
                                                                t = c_14;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = y_13;
                                                        {
                                                          ATerm o_19 = t;
                                                          int p_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
                                                              t = c_14;
                                                              t = new_0_0(t);
                                                              g_43 = t;
                                                              t = bottomup_1_0(r_0, t);
                                                              r_43 = t;
                                                              t = (ATerm) ATempty;
                                                              t = r_0(t);
                                                              s_43 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(s_43), r_43);
                                                              t = r_0(t);
                                                              h_43 = t;
                                                              t = g_43;
                                                              t = bottomup_1_0(r_0, t);
                                                              q_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, q_43);
                                                              t = r_0(t);
                                                              p_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, p_43);
                                                              t = r_0(t);
                                                              j_43 = t;
                                                              t = b_14;
                                                              t = bottomup_1_0(r_0, t);
                                                              l_43 = t;
                                                              t = g_43;
                                                              t = bottomup_1_0(r_0, t);
                                                              o_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, o_43);
                                                              t = r_0(t);
                                                              n_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, n_43);
                                                              t = r_0(t);
                                                              m_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, l_43, m_43);
                                                              t = r_0(t);
                                                              k_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_43, k_43);
                                                              t = r_0(t);
                                                              i_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, h_43, i_43);
                                                              t = r_0(t);
                                                              ;
                                                              LocalPopChoice(p_19);
                                                            }
                                                          else
                                                            {
                                                              t = o_19;
                                                              t = c_14;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = y_13;
                                                    {
                                                      ATerm q_19 = t;
                                                      int r_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL;
                                                          t = c_14;
                                                          t = new_0_0(t);
                                                          v_43 = t;
                                                          t = bottomup_1_0(r_0, t);
                                                          g_44 = t;
                                                          t = (ATerm) ATempty;
                                                          t = r_0(t);
                                                          h_44 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(h_44), g_44);
                                                          t = r_0(t);
                                                          w_43 = t;
                                                          t = v_43;
                                                          t = bottomup_1_0(r_0, t);
                                                          f_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, f_44);
                                                          t = r_0(t);
                                                          e_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, e_44);
                                                          t = r_0(t);
                                                          y_43 = t;
                                                          t = b_14;
                                                          t = bottomup_1_0(r_0, t);
                                                          a_44 = t;
                                                          t = v_43;
                                                          t = bottomup_1_0(r_0, t);
                                                          d_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, d_44);
                                                          t = r_0(t);
                                                          c_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_44);
                                                          t = r_0(t);
                                                          b_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_44, b_44);
                                                          t = r_0(t);
                                                          z_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_43, z_43);
                                                          t = r_0(t);
                                                          x_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, w_43, x_43);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(r_19);
                                                        }
                                                      else
                                                        {
                                                          t = q_19;
                                                          t = c_14;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    y_13 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm s_19 = t;
                                                      int t_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, y_13);
                                                          t = r_0(t);
                                                          ;
                                                          LocalPopChoice(t_19);
                                                        }
                                                      else
                                                        {
                                                          t = s_19;
                                                          {
                                                            ATerm u_19 = t;
                                                            int v_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL;
                                                                t = c_14;
                                                                t = new_0_0(t);
                                                                l_44 = t;
                                                                t = bottomup_1_0(r_0, t);
                                                                w_44 = t;
                                                                t = (ATerm) ATempty;
                                                                t = r_0(t);
                                                                x_44 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(x_44), w_44);
                                                                t = r_0(t);
                                                                m_44 = t;
                                                                t = l_44;
                                                                t = bottomup_1_0(r_0, t);
                                                                v_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, v_44);
                                                                t = r_0(t);
                                                                u_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, u_44);
                                                                t = r_0(t);
                                                                o_44 = t;
                                                                t = b_14;
                                                                t = bottomup_1_0(r_0, t);
                                                                q_44 = t;
                                                                t = l_44;
                                                                t = bottomup_1_0(r_0, t);
                                                                t_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, t_44);
                                                                t = r_0(t);
                                                                s_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, s_44);
                                                                t = r_0(t);
                                                                r_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, q_44, r_44);
                                                                t = r_0(t);
                                                                p_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, o_44, p_44);
                                                                t = r_0(t);
                                                                n_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, m_44, n_44);
                                                                t = r_0(t);
                                                                ;
                                                                LocalPopChoice(v_19);
                                                              }
                                                            else
                                                              {
                                                                t = u_19;
                                                                t = c_14;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm w_19 = t;
                                                    int x_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL;
                                                        t = c_14;
                                                        t = new_0_0(t);
                                                        a_45 = t;
                                                        t = bottomup_1_0(r_0, t);
                                                        l_45 = t;
                                                        t = (ATerm) ATempty;
                                                        t = r_0(t);
                                                        m_45 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(m_45), l_45);
                                                        t = r_0(t);
                                                        b_45 = t;
                                                        t = a_45;
                                                        t = bottomup_1_0(r_0, t);
                                                        k_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, k_45);
                                                        t = r_0(t);
                                                        j_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, j_45);
                                                        t = r_0(t);
                                                        d_45 = t;
                                                        t = b_14;
                                                        t = bottomup_1_0(r_0, t);
                                                        f_45 = t;
                                                        t = a_45;
                                                        t = bottomup_1_0(r_0, t);
                                                        i_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, i_45);
                                                        t = r_0(t);
                                                        h_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, h_45);
                                                        t = r_0(t);
                                                        g_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_45, g_45);
                                                        t = r_0(t);
                                                        e_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_45, e_45);
                                                        t = r_0(t);
                                                        c_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, b_45, c_45);
                                                        t = r_0(t);
                                                        ;
                                                        LocalPopChoice(x_19);
                                                      }
                                                    else
                                                      {
                                                        t = w_19;
                                                        t = c_14;
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
                                        b_14 = ATgetArgument(t, 0);
                                        t = b_14;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm y_19 = t;
                                            int z_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_7;
                                                t = r_0(t);
                                                ;
                                                LocalPopChoice(z_19);
                                              }
                                            else
                                              {
                                                t = y_19;
                                                t = c_14;
                                              }
                                          }
                                        else
                                          {
                                            t = c_14;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            b_14 = ATgetArgument(t, 0);
                                            t = b_14;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm a_20 = t;
                                                int b_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_k_7;
                                                    t = r_0(t);
                                                    ;
                                                    LocalPopChoice(b_20);
                                                  }
                                                else
                                                  {
                                                    t = a_20;
                                                    t = c_14;
                                                  }
                                              }
                                            else
                                              {
                                                t = c_14;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                b_14 = ATgetArgument(t, 0);
                                                t = b_14;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm c_20 = t;
                                                    int d_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_k_7;
                                                        t = r_0(t);
                                                        ;
                                                        LocalPopChoice(d_20);
                                                      }
                                                    else
                                                      {
                                                        t = c_20;
                                                        t = c_14;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = c_14;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm e_20 = t;
                                                int f_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm g_20 = ATgetArgument(t, 0);
                                                        a_14 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(f_20);
                                                    t = a_14;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm h_20 = t;
                                                        int i_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_k_7;
                                                            t = r_0(t);
                                                            ;
                                                            LocalPopChoice(i_20);
                                                          }
                                                        else
                                                          {
                                                            t = h_20;
                                                            t = c_14;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = c_14;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = e_20;
                                                    {
                                                      ATerm j_20 = t;
                                                      int k_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm l_20 = ATgetArgument(t, 0);
                                                              a_14 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(k_20);
                                                          {
                                                            ATerm m_20 = t;
                                                            int n_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = a_14;
                                                                t = fetch_1_0(m_1, t);
                                                                t = term_k_7;
                                                                t = bottomup_1_0(r_0, t);
                                                                ;
                                                                LocalPopChoice(n_20);
                                                              }
                                                            else
                                                              {
                                                                t = m_20;
                                                                t = c_14;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = j_20;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              b_14 = ATgetArgument(t, 0);
                                                              a_14 = ATgetArgument(t, 1);
                                                              t = a_14;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = b_14;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = a_14;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          y_13 = ATgetArgument(t, 0);
                                                                          z_13 = ATgetArgument(t, 1);
                                                                          t = b_14;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = b_14;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = b_14;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = a_14;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          y_13 = ATgetArgument(t, 0);
                                                                          z_13 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm p_20 = t;
                                                                            int q_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm u_46 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, z_13, a_14);
                                                                                t = r_0(t);
                                                                                u_46 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, y_13, u_46);
                                                                                t = r_0(t);
                                                                                ;
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
                                                                                      t = a_14;
                                                                                      if((b_14 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(s_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = r_20;
                                                                                      t = c_14;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm t_20 = t;
                                                                          int u_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = a_14;
                                                                              if((b_14 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(u_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_20;
                                                                              t = c_14;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  b_14 = ATgetArgument(t, 0);
                                                                  a_14 = ATgetArgument(t, 1);
                                                                  i_13 = ATgetArgument(t, 2);
                                                                  t = i_13;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm v_20 = t;
                                                                      int w_20 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, a_14);
                                                                          t = r_0(t);
                                                                          ;
                                                                          LocalPopChoice(w_20);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = v_20;
                                                                          t = c_14;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = c_14;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      b_14 = ATgetArgument(t, 0);
                                                                      a_14 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm x_20 = t;
                                                                        int y_20 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, b_14, a_14);
                                                                            t = r_0(t);
                                                                            ;
                                                                            LocalPopChoice(y_20);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = x_20;
                                                                            t = c_14;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          b_14 = ATgetArgument(t, 0);
                                                                          t = b_14;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              y_13 = ATgetFirst((ATermList) t);
                                                                              z_13 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm z_20 = t;
                                                                                int a_21 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm i_47 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, z_13);
                                                                                    t = r_0(t);
                                                                                    i_47 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, y_13, i_47);
                                                                                    t = r_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(a_21);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = z_20;
                                                                                    t = c_14;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm b_21 = t;
                                                                                  int c_21 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_k_7;
                                                                                      t = r_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(c_21);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = b_21;
                                                                                      t = c_14;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = c_14;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              b_14 = ATgetArgument(t, 0);
                                                                              t = b_14;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  y_13 = ATgetFirst((ATermList) t);
                                                                                  z_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm d_21 = t;
                                                                                    int f_21 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm p_47 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, z_13);
                                                                                        t = r_0(t);
                                                                                        p_47 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, y_13, p_47);
                                                                                        t = r_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(f_21);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = d_21;
                                                                                        t = c_14;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm g_21 = t;
                                                                                      int h_21 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_k_7;
                                                                                          t = r_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(h_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = g_21;
                                                                                          t = c_14;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = c_14;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  b_14 = ATgetArgument(t, 0);
                                                                                  t = b_14;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      y_13 = ATgetFirst((ATermList) t);
                                                                                      z_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm j_21 = t;
                                                                                        int r_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm x_47 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, z_13);
                                                                                            t = r_0(t);
                                                                                            x_47 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, y_13, x_47);
                                                                                            t = r_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(r_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = j_21;
                                                                                            t = c_14;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm s_21 = t;
                                                                                          int u_21 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_e_7;
                                                                                              t = r_0(t);
                                                                                              ;
                                                                                              LocalPopChoice(u_21);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = s_21;
                                                                                              t = c_14;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = c_14;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_RDefT_4))
                                                                                    {
                                                                                      b_14 = ATgetArgument(t, 0);
                                                                                      a_14 = ATgetArgument(t, 1);
                                                                                      i_13 = ATgetArgument(t, 2);
                                                                                      h_13 = ATgetArgument(t, 3);
                                                                                      {
                                                                                        ATerm v_21 = t;
                                                                                        int w_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm e_48 = NULL,h_48 = NULL;
                                                                                            t = a_14;
                                                                                            t = map1_1_0(n_1, t);
                                                                                            e_48 = t;
                                                                                            t = i_13;
                                                                                            t = map1_1_0(o_1, t);
                                                                                            h_48 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, b_14, e_48, h_48, h_13);
                                                                                            t = bottomup_1_0(r_0, t);
                                                                                            ;
                                                                                            LocalPopChoice(w_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = v_21;
                                                                                            t = c_14;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefT_4))
                                                                                        {
                                                                                          b_14 = ATgetArgument(t, 0);
                                                                                          a_14 = ATgetArgument(t, 1);
                                                                                          i_13 = ATgetArgument(t, 2);
                                                                                          h_13 = ATgetArgument(t, 3);
                                                                                          {
                                                                                            ATerm y_21 = t;
                                                                                            int z_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm u_48 = NULL,w_48 = NULL;
                                                                                                t = i_13;
                                                                                                t = map1_1_0(p_1, t);
                                                                                                u_48 = t;
                                                                                                t = a_14;
                                                                                                t = map_1_0(v_1, t);
                                                                                                w_48 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, b_14, w_48, u_48, h_13);
                                                                                                t = bottomup_1_0(r_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(z_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = y_21;
                                                                                                {
                                                                                                  ATerm a_22 = t;
                                                                                                  int c_22 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm m_49 = NULL,o_49 = NULL;
                                                                                                      t = a_14;
                                                                                                      t = map1_1_0(b_2, t);
                                                                                                      m_49 = t;
                                                                                                      t = i_13;
                                                                                                      t = map_1_0(c_2, t);
                                                                                                      o_49 = t;
                                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, b_14, m_49, o_49, h_13);
                                                                                                      t = bottomup_1_0(r_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(c_22);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = a_22;
                                                                                                      t = c_14;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_InfixApp_3))
                                                                                            {
                                                                                              b_14 = ATgetArgument(t, 0);
                                                                                              a_14 = ATgetArgument(t, 1);
                                                                                              i_13 = ATgetArgument(t, 2);
                                                                                              {
                                                                                                ATerm d_22 = t;
                                                                                                int e_22 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL;
                                                                                                    t = term_f_22;
                                                                                                    t = bottomup_1_0(r_0, t);
                                                                                                    a_50 = t;
                                                                                                    t = (ATerm) ATempty;
                                                                                                    t = r_0(t);
                                                                                                    d_50 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(d_50), i_13);
                                                                                                    t = r_0(t);
                                                                                                    c_50 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(c_50), b_14);
                                                                                                    t = r_0(t);
                                                                                                    b_50 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, a_50, b_50);
                                                                                                    t = r_0(t);
                                                                                                    z_49 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_App_2, a_14, z_49);
                                                                                                    t = r_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(e_22);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = d_22;
                                                                                                    t = c_14;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_BAM_3))
                                                                                                {
                                                                                                  b_14 = ATgetArgument(t, 0);
                                                                                                  a_14 = ATgetArgument(t, 1);
                                                                                                  i_13 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm h_22 = t;
                                                                                                    int i_22 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, a_14);
                                                                                                        t = r_0(t);
                                                                                                        j_50 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, i_13);
                                                                                                        t = r_0(t);
                                                                                                        m_50 = t;
                                                                                                        t = (ATerm) ATempty;
                                                                                                        t = r_0(t);
                                                                                                        n_50 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(n_50), m_50);
                                                                                                        t = r_0(t);
                                                                                                        l_50 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(l_50), b_14);
                                                                                                        t = r_0(t);
                                                                                                        k_50 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(k_50), j_50);
                                                                                                        t = r_0(t);
                                                                                                        i_50 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, i_50);
                                                                                                        t = r_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(i_22);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = h_22;
                                                                                                        t = c_14;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                    {
                                                                                                      b_14 = ATgetArgument(t, 0);
                                                                                                      a_14 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm j_22 = t;
                                                                                                        int k_22 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm r_50 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, a_14);
                                                                                                            t = r_0(t);
                                                                                                            r_50 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, b_14, r_50);
                                                                                                            t = r_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(k_22);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = j_22;
                                                                                                            t = c_14;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_MA_2))
                                                                                                        {
                                                                                                          b_14 = ATgetArgument(t, 0);
                                                                                                          a_14 = ATgetArgument(t, 1);
                                                                                                          {
                                                                                                            ATerm l_22 = t;
                                                                                                            int m_22 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm v_50 = NULL;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, b_14);
                                                                                                                t = r_0(t);
                                                                                                                v_50 = t;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_50, a_14);
                                                                                                                t = r_0(t);
                                                                                                                ;
                                                                                                                LocalPopChoice(m_22);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = l_22;
                                                                                                                t = c_14;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_BA_2))
                                                                                                            {
                                                                                                              b_14 = ATgetArgument(t, 0);
                                                                                                              a_14 = ATgetArgument(t, 1);
                                                                                                              {
                                                                                                                ATerm n_22 = t;
                                                                                                                int o_22 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm a_51 = NULL;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, a_14);
                                                                                                                    t = r_0(t);
                                                                                                                    a_51 = t;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_51, b_14);
                                                                                                                    t = r_0(t);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(o_22);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = n_22;
                                                                                                                    t = c_14;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Let_2))
                                                                                                                {
                                                                                                                  b_14 = ATgetArgument(t, 0);
                                                                                                                  a_14 = ATgetArgument(t, 1);
                                                                                                                  t = a_14;
                                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                                    {
                                                                                                                      w_13 = ATgetArgument(t, 0);
                                                                                                                      x_13 = ATgetArgument(t, 1);
                                                                                                                      t = b_14;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = a_14;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          ATerm q_22 = t;
                                                                                                                          int r_22 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm m_51 = NULL;
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, b_14, w_13);
                                                                                                                              t = conc_0_0(t);
                                                                                                                              m_51 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Let_2, m_51, x_13);
                                                                                                                              t = bottomup_1_0(r_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(r_22);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_22;
                                                                                                                              t = c_14;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_CallT_3))
                                                                                                                        {
                                                                                                                          w_13 = ATgetArgument(t, 0);
                                                                                                                          x_13 = ATgetArgument(t, 1);
                                                                                                                          s_13 = ATgetArgument(t, 2);
                                                                                                                          t = s_13;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = x_13;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = w_13;
                                                                                                                                  if(match_cons(t, sym_SVar_1))
                                                                                                                                    {
                                                                                                                                      v_13 = ATgetArgument(t, 0);
                                                                                                                                      t = b_14;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = a_14;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              y_13 = ATgetFirst((ATermList) t);
                                                                                                                                              z_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                              t = z_13;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = y_13;
                                                                                                                                                  if(match_cons(t, sym_SDefT_4))
                                                                                                                                                    {
                                                                                                                                                      u_13 = ATgetArgument(t, 0);
                                                                                                                                                      p_13 = ATgetArgument(t, 1);
                                                                                                                                                      m_13 = ATgetArgument(t, 2);
                                                                                                                                                      n_13 = ATgetArgument(t, 3);
                                                                                                                                                      t = m_13;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                        {
                                                                                                                                                          t = p_13;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                            {
                                                                                                                                                              ATerm s_22 = t;
                                                                                                                                                              int u_22 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = v_13;
                                                                                                                                                                  if((u_13 != t))
                                                                                                                                                                    {
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    }
                                                                                                                                                                  t = n_13;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm v_22 = t;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm g_2 (ATerm t)
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_CallT_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm w_22 = ATgetArgument(t, 0);
                                                                                                                                                                              if(match_cons(w_22, sym_SVar_1))
                                                                                                                                                                                {
                                                                                                                                                                                  if((u_13 != ATgetArgument(w_22, 0)))
                                                                                                                                                                                    {
                                                                                                                                                                                      _fail(ATgetArgument(w_22, 0));
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              {
                                                                                                                                                                                ATerm y_22 = ATgetArgument(t, 1);
                                                                                                                                                                                if(((ATgetType(y_22) != AT_LIST) || !(ATisEmpty(y_22))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                              {
                                                                                                                                                                                ATerm z_22 = ATgetArgument(t, 2);
                                                                                                                                                                                if(((ATgetType(z_22) != AT_LIST) || !(ATisEmpty(z_22))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          return(t);
                                                                                                                                                                        }
                                                                                                                                                                        t = oncetd_1_0(g_2, t);
                                                                                                                                                                        PopChoice();
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = v_22;
                                                                                                                                                                      }
                                                                                                                                                                    t = n_13;
                                                                                                                                                                    t = bottomup_1_0(r_0, t);
                                                                                                                                                                  }
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(u_22);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = s_22;
                                                                                                                                                                  t = c_14;
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = c_14;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = c_14;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = c_14;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = c_14;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = c_14;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = b_14;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = a_14;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = c_14;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = b_14;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      t = a_14;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = c_14;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = b_14;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = a_14;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = c_14;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = b_14;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = a_14;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = c_14;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_As_2))
                                                                                                                    {
                                                                                                                      b_14 = ATgetArgument(t, 0);
                                                                                                                      a_14 = ATgetArgument(t, 1);
                                                                                                                      t = b_14;
                                                                                                                      if(match_cons(t, sym_Wld_0))
                                                                                                                        {
                                                                                                                          t = a_14;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = c_14;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = c_14;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
  t = bottomup_1_0(r_0, t);
  return(t);
}
ATerm map_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  ATerm p_53 (ATerm t)
  {
    ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL;
    m_53 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_53;
      }
    else
      {
        ATerm k_5 = NULL,n_5 = NULL,o_5 = NULL,u_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_53 = ATgetFirst((ATermList) t);
            o_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_53);
        k_5 = t;
        t = n_53;
        t = w_106(t);
        n_5 = t;
        t = o_53;
        t = p_53(t);
        o_5 = t;
        t = (ATerm) ATinsert(CheckATermList(o_5), n_5);
        u_2 = t;
        t = SSLsetAnnotations(u_2, k_5);
      }
    return(t);
  }
  t = p_53(t);
  return(t);
}
ATerm Cons_2_0 (ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,x_53 = NULL,y_53 = NULL,w_2 = NULL;
  y_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_53 = ATgetFirst((ATermList) t);
      t_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_53);
  r_53 = t;
  t = s_53;
  t = w_75(t);
  u_53 = t;
  t = t_53;
  t = x_75(t);
  x_53 = t;
  t = (ATerm) ATinsert(CheckATermList(x_53), u_53);
  w_2 = t;
  t = SSLsetAnnotations(w_2, r_53);
  return(t);
}
ATerm m_11 (ATerm e_49, ATerm f_49, ATerm t)
{
  ATerm z_53 = NULL;
  t = SSL_fputc(e_49, f_49);
  z_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_53);
  return(t);
}
ATerm n_11 (ATerm s_52, ATerm t_52, ATerm t)
{
  ATerm a_54 = NULL;
  t = SSL_write_term_to_stream_text(s_52, t_52);
  a_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_54);
  return(t);
}
ATerm p_11 (ATerm x_112 (ATerm), ATerm l_473, ATerm w_52, ATerm t)
{
  ATerm b_54 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_473, term_a_23);
  t = open_stream_0_0(t);
  b_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_54, w_52);
  t = x_112(t);
  t = fclose_0_0(t);
  t = w_52;
  return(t);
}
ATerm o_11 (ATerm o_52, ATerm p_52, ATerm t)
{
  ATerm c_54 = NULL;
  t = SSL_write_term_to_stream_baf(o_52, p_52);
  c_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_54);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_23 = ATgetArgument(t, 0);
      if(match_cons(b_23, sym_Stream_1))
        {
          k_54 = ATgetArgument(b_23, 0);
        }
      else
        _fail(t);
      l_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(k_54, l_54, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_23 = ATgetArgument(t, 0);
      if(match_cons(c_23, sym_Stream_1))
        {
          p_54 = ATgetArgument(c_23, 0);
        }
      else
        _fail(t);
      q_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(p_54, q_54, t);
  m_54 = t;
  t = term_e_23;
  n_54 = t;
  t = m_54;
  if(match_cons(t, sym_Stream_1))
    {
      o_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_23, m_54);
  t = m_11(n_54, o_54, t);
  return(t);
}
ATerm output_1_0 (ATerm g_117 (ATerm), ATerm t)
{
  ATerm d_54 = NULL,j_54 = NULL;
  t = g_117(t);
  j_54 = t;
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_23;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        t = term_i_23;
      }
    d_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_54, j_54);
    {
      ATerm j_23 = t;
      int k_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_l_23;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, d_54, j_54);
          LocalPopChoice(k_23);
          if(match_cons(t, sym__2))
            {
              ATerm m_23 = ATgetArgument(t, 0);
              ATerm n_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_11(j_2, d_54, j_54, t);
        }
      else
        {
          t = j_23;
          if(match_cons(t, sym__2))
            {
              ATerm o_23 = ATgetArgument(t, 0);
              ATerm q_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_11(q_2, d_54, j_54, t);
        }
    }
  }
  return(t);
}
ATerm e_55 (ATerm y_54, ATerm t)
{
  t = SSL_fclose(y_54);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL;
  c_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_55 = ATgetArgument(t, 0);
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_55);
            ;
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            t = e_55(c_55, t);
          }
      }
    }
  else
    {
      t = e_55(c_55, t);
    }
  return(t);
}
ATerm q_11 (ATerm u_52, ATerm t)
{
  t = SSL_read_term_from_stream(u_52);
  return(t);
}
ATerm r_11 (ATerm g_49, ATerm h_49, ATerm t)
{
  ATerm g_55 = NULL;
  t = SSL_fopen(g_49, h_49);
  g_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_55);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_55 = NULL;
  t = SSL_stdin_stream();
  h_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_55);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_55 = NULL;
  t = SSL_stdout_stream();
  i_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_55);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_55 = NULL;
  t = SSL_stderr_stream();
  j_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_55);
  return(t);
}
ATerm r_56 (ATerm p_55, ATerm t)
{
  ATerm q_55 = NULL;
  t = SSL_explode_term(p_55);
  if(match_cons(t, sym__2))
    {
      ATerm t_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_23 = ATgetArgument(t, 1);
        if(((ATgetType(u_23) == AT_LIST) && !(ATisEmpty(u_23))))
          {
            q_55 = ATgetFirst((ATermList) u_23);
            {
              ATerm w_23 = (ATerm) ATgetNext((ATermList) u_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_55;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_55;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_55;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_55;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm s_56 (ATerm t_55, ATerm u_55, ATerm v_55, ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL,b_56 = NULL,y_2 = NULL;
  t = SSLgetAnnotations(v_55);
  y_55 = t;
  t = t_55;
  if(match_cons(t, sym_Path_1))
    {
      b_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_56, u_55);
  y_2 = t;
  t = SSLsetAnnotations(y_2, y_55);
  if(match_cons(t, sym__2))
    {
      w_55 = ATgetArgument(t, 0);
      x_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(w_55, x_55, t);
  return(t);
}
ATerm t_56 (ATerm d_56, ATerm e_56, ATerm f_56, ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL,l_56 = NULL,z_2 = NULL;
  t = SSLgetAnnotations(f_56);
  i_56 = t;
  t = SSL_is_string(d_56);
  l_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_56, e_56);
  z_2 = t;
  t = SSLsetAnnotations(z_2, i_56);
  if(match_cons(t, sym__2))
    {
      g_56 = ATgetArgument(t, 0);
      h_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(g_56, h_56, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm n_56 = NULL,p_56 = NULL,q_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_23 = ATgetArgument(t, 0);
      ATerm y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  n_56 = t;
  if(match_cons(t, sym__2))
    {
      p_56 = ATgetArgument(t, 0);
      q_56 = ATgetArgument(t, 1);
      {
        ATerm z_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_56(n_56, t);
            ;
            LocalPopChoice(a_24);
          }
        else
          {
            t = z_23;
            {
              ATerm b_24 = t;
              int c_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_56(p_56, q_56, n_56, t);
                  ;
                  LocalPopChoice(c_24);
                }
              else
                {
                  t = b_24;
                  t = t_56(p_56, q_56, n_56, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_56(n_56, t);
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_d_24;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL;
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_56 = NULL;
      x_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_56, term_g_24);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      t = debug_1_0(r_2, t);
      _fail(t);
    }
  v_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11(w_56, t);
  u_56 = t;
  t = v_56;
  t = fclose_0_0(t);
  t = u_56;
  return(t);
}
ATerm input_1_0 (ATerm h_117 (ATerm), ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      t = term_m_24;
    }
  t = ReadFromFile_0_0(t);
  t = h_117(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL;
  z_56 = t;
  t = term_n_24;
  t = whoami_0_0(t);
  a_57 = t;
  t = term_p_24;
  c_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_24), a_57), term_q_24);
  d_57 = t;
  t = SSL_printnl(c_57, d_57);
  t = term_s_24;
  b_57 = t;
  t = SSL_exit(b_57);
  t = z_56;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm f_57 = NULL;
  f_57 = t;
  if(match_string(t, "-k"))
    {
      t = f_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_57;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL;
  g_57 = t;
  t = SSL_string_to_int(g_57);
  h_57 = t;
  t = term_t_24;
  i_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_24, h_57);
  t = a_12(i_57, h_57, t);
  t = g_57;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, v_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm k_57 = NULL;
  k_57 = t;
  if(match_string(t, "-S"))
    {
      t = k_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_57;
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL;
  t = term_v_24;
  l_57 = t;
  t = term_w_24;
  m_57 = t;
  t = term_x_24;
  t = a_12(l_57, m_57, t);
  t = term_y_24;
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm c_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL;
  n_57 = t;
  t = SSL_string_to_int(n_57);
  o_57 = t;
  t = term_v_24;
  p_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_24, o_57);
  t = a_12(p_57, o_57, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_57);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL;
  t = term_b_25;
  q_57 = t;
  t = term_n_24;
  r_57 = t;
  t = term_c_25;
  t = a_12(q_57, r_57, t);
  t = term_d_25;
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_e_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_2, a_3, b_3, t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        ATerm i_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_3, e_3, f_3, t);
            ;
            LocalPopChoice(k_25);
          }
        else
          {
            t = i_25;
            t = Option_3_0(h_3, i_3, l_3, t);
          }
      }
    }
  return(t);
}
ATerm a_12 (ATerm v_53, ATerm w_53, ATerm t)
{
  ATerm s_57 = NULL;
  t = term_l_25;
  s_57 = t;
  t = SSL_table_put(s_57, v_53, w_53);
  t = (ATerm) ATmakeAppl(sym__3, term_l_25, v_53, w_53);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL;
      t = term_n_24;
      t = h_0(t);
      y_57 = t;
      t = term_m_25;
      z_57 = t;
      t = term_n_25;
      a_58 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_25, term_n_25, y_57);
      t = y_11(z_57, a_58, y_57, t);
      _fail(t);
    }
  else
    {
      ATerm i_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_57 = ATgetFirst((ATermList) t);
          x_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_57;
      t = d_0(t);
      t = term_n_24;
      t = g_0(t);
      i_58 = t;
      t = (ATerm) ATinsert(CheckATermList(x_57), i_58);
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm k_58 = NULL;
  k_58 = t;
  if(match_string(t, "-o"))
    {
      t = k_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_58;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL;
  l_58 = t;
  t = term_h_23;
  m_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_23, l_58);
  t = a_12(m_58, l_58, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_58);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_3, o_3, q_3, t);
  return(t);
}
ATerm y_11 (ATerm t_58, ATerm u_58, ATerm s_58, ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL,r_58 = NULL;
  o_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_58, u_58);
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_25 = ATgetArgument(t, 0);
            ATerm t_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_58, u_58);
        t = x_11(t_58, u_58, t);
        ;
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = (ATerm) ATempty;
      }
    p_58 = t;
    t = (ATerm) ATinsert(CheckATermList(p_58), s_58);
    r_58 = t;
    t = SSL_table_put(t_58, u_58, r_58);
    t = o_58;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL;
      t = term_n_24;
      t = m_0(t);
      f_59 = t;
      t = term_m_25;
      g_59 = t;
      t = term_n_25;
      h_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_25, term_n_25, f_59);
      t = y_11(g_59, h_59, f_59, t);
      _fail(t);
    }
  else
    {
      ATerm l_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_59 = ATgetFirst((ATermList) t);
          c_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_59;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_59 = ATgetFirst((ATermList) t);
          e_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_59;
      t = k_0(t);
      t = d_59;
      t = l_0(t);
      l_59 = t;
      t = (ATerm) ATinsert(CheckATermList(e_59), l_59);
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm n_59 = NULL;
  n_59 = t;
  if(match_string(t, "-i"))
    {
      t = n_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_59;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL;
  p_59 = t;
  t = term_l_24;
  q_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_24, p_59);
  t = a_12(q_59, p_59, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_59);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, v_3, a_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_24;
  t = whoami_0_0(t);
  r_59 = t;
  t = term_p_24;
  t_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_25), r_59);
  u_59 = t;
  t = SSL_printnl(t_59, u_59);
  t = term_s_24;
  s_59 = t;
  t = SSL_exit(s_59);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_w_25;
  t = get_config_0_0(t);
  return(t);
}
ATerm t_11 (ATerm e_46, ATerm f_46, ATerm t)
{
  ATerm x_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_46, f_46);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = x_25;
      t = SSL_addr(e_46, f_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL;
  w_59 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_59;
      t = m_105(t);
    }
  else
    {
      ATerm b_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_59 = ATgetFirst((ATermList) t);
          y_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_59;
      t = foldr_2_0(m_105, n_105, t);
      b_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_59, b_60);
      t = n_105(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_w_24;
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL;
  if(match_cons(t, sym__2))
    {
      d_6 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_11(d_6, e_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_60 = NULL,z_5 = NULL,a_6 = NULL;
  t = times_0_0(t);
  a_6 = t;
  t = SSL_explode_term(a_6);
  if(match_cons(t, sym__2))
    {
      ATerm a_26 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5;
  t = foldr_2_0(c_4, d_4, t);
  e_60 = t;
  t = SSL_TicksToSeconds(e_60);
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
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_60;
        if((s_60 != t))
          {
            _fail(t);
          }
        t = r_60;
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = (ATerm) ATmakeAppl(sym__2, s_60, t_60);
        {
          ATerm d_26 = t;
          int f_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_60, t_60);
              ;
              LocalPopChoice(f_26);
            }
          else
            {
              t = d_26;
              t = SSL_gtr(s_60, t_60);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_60, t_60);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_114 (ATerm), ATerm t)
{
  ATerm x_60 = NULL;
  x_60 = t;
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_60 = NULL;
        t = term_v_24;
        t = get_config_0_0(t);
        z_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_60, term_s_24);
        t = geq_0_0(t);
        t = x_60;
        t = h_114(t);
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = x_60;
      }
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm b_61 = NULL,d_61 = NULL,f_61 = NULL,g_61 = NULL;
  t = run_time_0_0(t);
  b_61 = t;
  t = term_n_24;
  t = whoami_0_0(t);
  d_61 = t;
  t = term_p_24;
  f_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_26), b_61), term_i_26), d_61);
  g_61 = t;
  t = SSL_printnl(f_61, g_61);
  t = (ATerm) ATmakeAppl(sym__2, term_p_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_26), b_61), term_i_26), d_61));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_61 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_24;
  h_61 = t;
  t = SSL_exit(h_61);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm p_61 = NULL,q_61 = NULL;
  q_61 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_61;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_61 = ATgetArgument(t, 0);
          {
            ATerm q_6 = NULL,d_3 = NULL;
            t = SSLgetAnnotations(q_61);
            q_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_61);
            d_3 = t;
            t = SSLsetAnnotations(d_3, q_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_61;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_116 (ATerm), ATerm t)
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
      t = fetch_1_0(g_4, t);
    }
  t = x_116(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_61 = ATgetFirst((ATermList) t);
      u_61 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_61 = NULL,z_61 = NULL;
        ATerm h_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_61)), not_null(z_61));
          return(t);
        }
        t = u_61;
        t = j_0(t);
        if(((y_61 != NULL) && (y_61 != t)))
          _fail(t);
        else
          y_61 = t;
        t = t_61;
        t = i_0(t);
        if(((z_61 != NULL) && (z_61 != t)))
          _fail(t);
        else
          z_61 = t;
        t = u_61;
        t = reverse_acc_2_0(i_0, h_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_24;
      t = j_0(t);
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL,g_3 = NULL;
  f_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_62);
  d_62 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_62);
  g_3 = t;
  t = SSLsetAnnotations(g_3, d_62);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm h_62 = NULL;
  h_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_62), term_o_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL;
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      t = fetch_1_0(i_4, t);
    }
  t = term_r_26;
  t = echo_0_0(t);
  t = term_m_25;
  b_62 = t;
  t = term_n_25;
  c_62 = t;
  t = term_t_26;
  t = x_11(b_62, c_62, t);
  t = reverse_acc_2_0(_id, j_4, t);
  t = map_1_0(k_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_107 (ATerm), ATerm t)
{
  ATerm f_63 (ATerm t)
  {
    ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL;
    c_63 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_63 = ATgetFirst((ATermList) t);
        e_63 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_26 = t;
      int v_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_6 = NULL,b_7 = NULL,j_3 = NULL;
          t = SSLgetAnnotations(c_63);
          y_6 = t;
          t = d_63;
          t = g_107(t);
          b_7 = t;
          t = (ATerm) ATinsert(CheckATermList(e_63), b_7);
          j_3 = t;
          t = SSLsetAnnotations(j_3, y_6);
          ;
          LocalPopChoice(v_26);
        }
      else
        {
          t = u_26;
          {
            ATerm j_7 = NULL,m_7 = NULL,k_3 = NULL;
            t = SSLgetAnnotations(c_63);
            j_7 = t;
            t = e_63;
            t = f_63(t);
            m_7 = t;
            t = (ATerm) ATinsert(CheckATermList(m_7), d_63);
            k_3 = t;
            t = SSLsetAnnotations(k_3, j_7);
          }
        }
    }
    return(t);
  }
  t = f_63(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
  j_63 = t;
  {
    ATerm w_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_63;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_26 = ATgetFirst((ATermList) t);
                ATerm a_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_63;
          }
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = w_26;
        t = (ATerm) ATinsert(ATempty, j_63);
      }
    k_63 = t;
    t = term_i_23;
    l_63 = t;
    t = SSL_printnl(l_63, k_63);
    t = j_63;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_25;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_11 (ATerm g_40, ATerm h_40, ATerm t)
{
  t = SSL_strcat(g_40, h_40);
  return(t);
}
ATerm debug_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL;
  p_63 = t;
  t = v_112(t);
  q_63 = t;
  t = term_p_24;
  r_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_63), q_63);
  s_63 = t;
  t = SSL_printnl(r_63, s_63);
  t = p_63;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_63 = NULL;
      z_63 = t;
      t = SSL_is_string(z_63);
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      {
        ATerm g_27 = t;
        int i_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_4, t);
            ;
            LocalPopChoice(i_27);
          }
        else
          {
            t = g_27;
            {
              ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL;
              i_64 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_64 = ATgetArgument(t, 0);
                  t = j_64;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_64 = ATgetArgument(t, 0);
                      t = j_64;
                      {
                        ATerm j_27 = t;
                        int k_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_27);
                          }
                        else
                          {
                            t = j_27;
                            t = debug_1_0(m_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_64 = NULL,p_64 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_64 = ATgetArgument(t, 0);
                          k_64 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_64;
                      t = eval_config_0_0(t);
                      o_64 = t;
                      t = k_64;
                      t = eval_config_0_0(t);
                      p_64 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_64, p_64);
                      t = w_11(o_64, p_64, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm x_11 (ATerm k_60, ATerm l_60, ATerm t)
{
  t = SSL_table_get(k_60, l_60);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL;
  t_64 = t;
  t = term_l_25;
  u_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_25, t_64);
  t = x_11(u_64, t_64, t);
  {
    ATerm l_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_64 = NULL,w_64 = NULL;
        t = eval_config_0_0(t);
        v_64 = t;
        t = term_l_25;
        w_64 = t;
        t = SSL_table_put(w_64, t_64, v_64);
        t = v_64;
        ;
        LocalPopChoice(v_27);
      }
    else
      {
        t = l_27;
      }
  }
  return(t);
}
ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL;
  t = term_w_27;
  z_64 = t;
  t = term_n_24;
  a_65 = t;
  t = term_x_27;
  t = a_12(z_64, a_65, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_y_27;
  return(t);
}
ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL;
  t = term_w_27;
  d_65 = t;
  t = term_n_24;
  e_65 = t;
  t = term_x_27;
  t = a_12(d_65, e_65, t);
  t = term_z_27;
  b_65 = t;
  t = term_n_24;
  c_65 = t;
  t = term_a_28;
  t = a_12(b_65, c_65, t);
  t = term_b_28;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_c_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_4, p_4, q_4, t);
      ;
      LocalPopChoice(f_28);
    }
  else
    {
      t = d_28;
      t = Option_3_0(r_4, s_4, t_4, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_119 (ATerm), ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,o_65 = NULL,p_65 = NULL,n_3 = NULL;
  j_65 = t;
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_28;
        t = a_119(t);
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
      }
    t = j_65;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_65 = ATgetFirst((ATermList) t);
        m_65 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_65);
    k_65 = t;
    t = term_w_25;
    p_65 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_25, l_65);
    t = a_12(p_65, l_65, t);
    t = m_65;
    {
      ATerm z_65 (ATerm t)
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_28 = t;
            int m_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_65 = NULL;
                s_65 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = s_65;
                ;
                LocalPopChoice(m_28);
              }
            else
              {
                t = l_28;
                t = a_119(t);
                t = Cons_2_0(_id, z_65, t);
              }
            ;
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            {
              ATerm v_65 = NULL,w_65 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_65 = ATgetFirst((ATermList) t);
                  w_65 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_65), (ATerm) ATmakeAppl(sym_Undefined_1, v_65));
            }
          }
        return(t);
      }
      t = z_65(t);
      if(((o_65 != NULL) && (o_65 != t)))
        _fail(t);
      else
        o_65 = t;
      t = (ATerm) ATinsert(CheckATermList(o_65), (ATerm) ATmakeAppl(sym_Program_1, l_65));
      if(((n_3 != NULL) && (n_3 != t)))
        _fail(t);
      else
        n_3 = t;
      t = SSLsetAnnotations(n_3, k_65);
    }
  }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm l_66 = NULL;
  l_66 = t;
  if(match_string(t, "--help"))
    {
      t = l_66;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_66;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_66;
        }
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm m_66 = NULL,n_66 = NULL;
  t = term_n_26;
  m_66 = t;
  t = term_n_24;
  n_66 = t;
  t = term_o_28;
  t = a_12(m_66, n_66, t);
  t = term_p_28;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_q_28;
  return(t);
}
ATerm z_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL;
  g_66 = t;
  t = term_m_25;
  i_66 = t;
  t = term_n_25;
  j_66 = t;
  t = (ATerm) ATempty;
  k_66 = t;
  t = SSL_table_put(i_66, j_66, k_66);
  t = g_66;
  {
    ATerm v_4 (ATerm t)
    {
      ATerm r_28 = t;
      int s_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_118(t);
          ;
          LocalPopChoice(s_28);
        }
      else
        {
          t = r_28;
          {
            ATerm t_28 = t;
            int u_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_4, x_4, y_4, t);
                ;
                LocalPopChoice(u_28);
              }
            else
              {
                t = t_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_4, t);
    {
      ATerm v_28 = t;
      int w_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_66 = NULL;
          u_66 = t;
          {
            ATerm x_28 = t;
            int y_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_8 = NULL;
                t = u_66;
                {
                  ATerm z_28 = t;
                  int a_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_n_26;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(a_29);
                    }
                  else
                    {
                      t = z_28;
                      t = fetch_1_0(z_4, t);
                    }
                  t = u_66;
                  t = default_system_usage_0_0(t);
                  t = term_w_24;
                  b_8 = t;
                  t = SSL_exit(b_8);
                }
                ;
                LocalPopChoice(y_28);
              }
            else
              {
                t = x_28;
                {
                  ATerm f_8 = NULL;
                  t = term_w_27;
                  t = get_config_0_0(t);
                  t = u_66;
                  t = default_system_about_0_0(t);
                  t = term_w_24;
                  f_8 = t;
                  t = SSL_exit(f_8);
                }
              }
          }
          ;
          LocalPopChoice(w_28);
        }
      else
        {
          t = v_28;
          {
            ATerm b_29 = t;
            int c_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL;
                ATerm a_5 (ATerm t)
                {
                  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,p_3 = NULL;
                  a_67 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      z_66 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_67);
                  y_66 = t;
                  t = z_66;
                  if(((e_66 != NULL) && (e_66 != t)))
                    _fail(t);
                  else
                    e_66 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, z_66);
                  p_3 = t;
                  t = SSLsetAnnotations(p_3, y_66);
                  return(t);
                }
                t = fetch_1_0(a_5, t);
                t = term_p_24;
                if(((w_66 != NULL) && (w_66 != t)))
                  _fail(t);
                else
                  w_66 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_66)), term_d_29);
                if(((x_66 != NULL) && (x_66 != t)))
                  _fail(t);
                else
                  x_66 = t;
                t = SSL_printnl(w_66, x_66);
                t = (ATerm) ATmakeAppl(sym__2, term_p_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_66)), term_d_29));
                t = default_system_usage_0_0(t);
                t = term_s_24;
                if(((v_66 != NULL) && (v_66 != t)))
                  _fail(t);
                else
                  v_66 = t;
                t = SSL_exit(v_66);
                ;
                LocalPopChoice(c_29);
              }
            else
              {
                t = b_29;
              }
          }
        }
      if(((f_66 != NULL) && (f_66 != t)))
        _fail(t);
      else
        f_66 = t;
      t = term_m_25;
      if(((h_66 != NULL) && (h_66 != t)))
        _fail(t);
      else
        h_66 = t;
      t = SSL_table_destroy(h_66);
      t = f_66;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_116 (ATerm), ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm t)
{
  ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL;
  t = parse_options_1_0(z_116, t);
  f_67 = t;
  t = term_e_29;
  i_67 = t;
  t = SSL_table_create(i_67);
  t = term_e_29;
  g_67 = t;
  t = term_g_29;
  h_67 = t;
  t = SSL_table_put(g_67, h_67, f_67);
  t = f_67;
  t = b_117(t);
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_117, t);
        ;
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        {
          ATerm j_29 = t;
          int k_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_117(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_29);
            }
          else
            {
              t = j_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
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
            t = output_option_0_0(t);
            ;
            LocalPopChoice(o_29);
          }
        else
          {
            t = n_29;
            {
              ATerm p_29 = t;
              int q_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(d_5, e_5, f_5, t);
                  ;
                  LocalPopChoice(q_29);
                }
              else
                {
                  t = p_29;
                  {
                    ATerm r_29 = t;
                    int s_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(s_29);
                      }
                    else
                      {
                        t = r_29;
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
ATerm c_5 (ATerm t)
{
  t = input_1_0(g_5, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL;
  t = term_l_23;
  k_67 = t;
  t = term_n_24;
  l_67 = t;
  t = term_t_29;
  t = a_12(k_67, l_67, t);
  t = term_u_29;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_v_29;
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = output_1_0(h_5, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,z_3 = NULL,y_3 = NULL;
  u_67 = t;
  if(match_cons(t, sym_Specification_1))
    {
      o_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_67);
  n_67 = t;
  t = o_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_67 = ATgetFirst((ATermList) t);
      r_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_67);
  p_67 = t;
  t = r_67;
  t = Cons_2_0(i_5, j_5, t);
  s_67 = t;
  t = (ATerm) ATinsert(CheckATermList(s_67), q_67);
  y_3 = t;
  t = SSLsetAnnotations(y_3, p_67);
  t_67 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_67);
  z_3 = t;
  t = SSLsetAnnotations(z_3, n_67);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,t_3 = NULL;
  y_67 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      w_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_67);
  v_67 = t;
  t = w_67;
  t = map_1_0(l_5, t);
  x_67 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, x_67);
  t_3 = t;
  t = SSLsetAnnotations(t_3, v_67);
  return(t);
}
ATerm j_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,s_3 = NULL;
  f_68 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      a_68 = ATgetArgument(t, 0);
      b_68 = ATgetArgument(t, 1);
      c_68 = ATgetArgument(t, 2);
      d_68 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_68);
  z_67 = t;
  t = d_68;
  t = simplify_0_0(t);
  e_68 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, a_68, b_68, c_68, e_68);
  s_3 = t;
  t = SSLsetAnnotations(s_3, z_67);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(b_5, default_usage_0_0, _id, c_5, t);
  return(t);
}
