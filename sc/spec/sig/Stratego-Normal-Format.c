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
Symbol sym_Cong_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Choice_2;
Symbol sym_GChoice_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_LGChoice_2;
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
Symbol sym_Thread_1;
Symbol sym_Mod_2;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
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
Symbol sym_Runtime_1;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
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
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
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
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
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
ATerm term_w_30;
ATerm term_l_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_r_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_u_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_h_23;
ATerm term_c_23;
ATerm term_d_21;
void init_constant_terms (void)
{
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_l_24, term_a_26);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_26);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_h_26, term_n_23);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__2, term_t_26, term_n_23);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_u_28);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_n_23);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__2, term_r_29, term_n_23);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__2, term_c_28, term_n_23);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__3, term_t_28, term_u_28, (ATerm) ATempty);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm ConstType_1_0 (ATerm s_61 (ATerm), ATerm);
ATerm FunType_2_0 (ATerm t_61 (ATerm), ATerm u_61 (ATerm), ATerm);
ATerm Let_2_0 (ATerm p_65 (ATerm), ATerm q_65 (ATerm), ATerm);
ATerm Op_2_0 (ATerm l_62 (ATerm), ATerm m_62 (ATerm), ATerm);
ATerm Var_1_0 (ATerm f_62 (ATerm), ATerm);
ATerm As_2_0 (ATerm w_62 (ATerm), ATerm x_62 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm c_63 (ATerm), ATerm);
ATerm Str_1_0 (ATerm j_62 (ATerm), ATerm);
ATerm is_real_0_0 (ATerm);
ATerm Real_1_0 (ATerm i_62 (ATerm), ATerm);
ATerm Int_1_0 (ATerm h_62 (ATerm), ATerm);
ATerm Wld_0_0 (ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm PrimT_3_0 (ATerm v_66 (ATerm), ATerm w_66 (ATerm), ATerm x_66 (ATerm), ATerm);
ATerm Where_1_0 (ATerm p_66 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm z_65 (ATerm), ATerm a_66 (ATerm), ATerm);
ATerm Build_1_0 (ATerm x_65 (ATerm), ATerm);
ATerm Match_1_0 (ATerm w_65 (ATerm), ATerm);
ATerm Thread_1_0 (ATerm d_67 (ATerm), ATerm);
ATerm All_1_0 (ATerm c_67 (ATerm), ATerm);
ATerm Some_1_0 (ATerm a_67 (ATerm), ATerm);
ATerm One_1_0 (ATerm b_67 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm d_61 (ATerm), ATerm e_61 (ATerm), ATerm);
ATerm is_int_0_0 (ATerm);
ATerm Path_2_0 (ATerm y_66 (ATerm), ATerm z_66 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm m_66 (ATerm), ATerm n_66 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm o_65 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm t_65 (ATerm), ATerm u_65 (ATerm), ATerm v_65 (ATerm), ATerm);
ATerm LGChoice_2_0 (ATerm h_66 (ATerm), ATerm i_66 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm h_65 (ATerm), ATerm i_65 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm j_66 (ATerm), ATerm k_66 (ATerm), ATerm l_66 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm f_66 (ATerm), ATerm g_66 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm d_65 (ATerm), ATerm e_65 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm d_66 (ATerm), ATerm e_66 (ATerm), ATerm);
ATerm Test_1_0 (ATerm q_66 (ATerm), ATerm);
ATerm Not_1_0 (ATerm o_66 (ATerm), ATerm);
ATerm Fail_0_0 (ATerm);
ATerm Id_0_0 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm);
ATerm Mod_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm h_68 (ATerm), ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm list_1_0 (ATerm r_81 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm h_61 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm m_61 (ATerm), ATerm);
ATerm stratego_specification_0_0 (ATerm);
ATerm _2_0 (ATerm s_59 (ATerm), ATerm t_59 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm e_82 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_95 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm a_94 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm c_97 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm m_93 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm e_89 (ATerm), ATerm f_89 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm);
ATerm crush_2_0 (ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_95 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm a_98 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm b_100 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm a_100 (ATerm), ATerm);
ATerm Program_1_0 (ATerm v_73 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_73 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm y_81 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm a_99 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm d_74 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm f_100 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm b_61 (ATerm), ATerm c_61 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm d_100 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm c_100 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm g_97 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm ConstType_1_0 (ATerm s_61 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,m_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
  if(((p_3 != NULL) && (p_3 != t)))
    _fail(t);
  else
    p_3 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      if(((m_3 != NULL) && (m_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_13 = NULL;
    if(((j_13 != NULL) && (j_13 != t)))
      _fail(t);
    else
      j_13 = t;
    t = SSLgetAnnotations(not_null(p_3));
    if(((n_3 != NULL) && (n_3 != t)))
      _fail(t);
    else
      n_3 = t;
    t = not_null(j_13);
    t = not_null(m_3);
    t = s_61(t);
    if(((o_3 != NULL) && (o_3 != t)))
      _fail(t);
    else
      o_3 = t;
    {
      ATerm k_13 = NULL;
      if(((k_13 != NULL) && (k_13 != t)))
        _fail(t);
      else
        k_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ConstType_1, not_null(o_3)), not_null(n_3));
      if(((q_3 != NULL) && (q_3 != t)))
        _fail(t);
      else
        q_3 = t;
    }
  }
  return(t);
}
ATerm FunType_2_0 (ATerm t_61 (ATerm), ATerm u_61 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,r_3 = NULL,s_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
  if(((w_3 != NULL) && (w_3 != t)))
    _fail(t);
  else
    w_3 = t;
  if(match_cons(t, sym_FunType_2))
    {
      if(((r_3 != NULL) && (r_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_3 = ATgetArgument(t, 0);
      if(((s_3 != NULL) && (s_3 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_13 = NULL;
    if(((l_13 != NULL) && (l_13 != t)))
      _fail(t);
    else
      l_13 = t;
    t = SSLgetAnnotations(not_null(w_3));
    if(((t_3 != NULL) && (t_3 != t)))
      _fail(t);
    else
      t_3 = t;
    t = not_null(l_13);
    t = not_null(r_3);
    t = t_61(t);
    if(((u_3 != NULL) && (u_3 != t)))
      _fail(t);
    else
      u_3 = t;
    t = not_null(s_3);
    t = u_61(t);
    if(((v_3 != NULL) && (v_3 != t)))
      _fail(t);
    else
      v_3 = t;
    {
      ATerm m_13 = NULL;
      if(((m_13 != NULL) && (m_13 != t)))
        _fail(t);
      else
        m_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunType_2, not_null(u_3), not_null(v_3)), not_null(t_3));
      if(((x_3 != NULL) && (x_3 != t)))
        _fail(t);
      else
        x_3 = t;
    }
  }
  return(t);
}
ATerm Let_2_0 (ATerm p_65 (ATerm), ATerm q_65 (ATerm), ATerm t)
{
  ATerm a_4 = NULL,y_3 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  if(((d_4 != NULL) && (d_4 != t)))
    _fail(t);
  else
    d_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      if(((y_3 != NULL) && (y_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_3 = ATgetArgument(t, 0);
      if(((z_3 != NULL) && (z_3 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_13 = NULL;
    if(((n_13 != NULL) && (n_13 != t)))
      _fail(t);
    else
      n_13 = t;
    t = SSLgetAnnotations(not_null(d_4));
    if(((a_4 != NULL) && (a_4 != t)))
      _fail(t);
    else
      a_4 = t;
    t = not_null(n_13);
    t = not_null(y_3);
    t = p_65(t);
    if(((b_4 != NULL) && (b_4 != t)))
      _fail(t);
    else
      b_4 = t;
    t = not_null(z_3);
    t = q_65(t);
    if(((c_4 != NULL) && (c_4 != t)))
      _fail(t);
    else
      c_4 = t;
    {
      ATerm o_13 = NULL;
      if(((o_13 != NULL) && (o_13 != t)))
        _fail(t);
      else
        o_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(b_4), not_null(c_4)), not_null(a_4));
      if(((e_4 != NULL) && (e_4 != t)))
        _fail(t);
      else
        e_4 = t;
    }
  }
  return(t);
}
ATerm Op_2_0 (ATerm l_62 (ATerm), ATerm m_62 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,f_4 = NULL,g_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL;
  if(((k_4 != NULL) && (k_4 != t)))
    _fail(t);
  else
    k_4 = t;
  if(match_cons(t, sym_Op_2))
    {
      if(((f_4 != NULL) && (f_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_4 = ATgetArgument(t, 0);
      if(((g_4 != NULL) && (g_4 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_13 = NULL;
    if(((p_13 != NULL) && (p_13 != t)))
      _fail(t);
    else
      p_13 = t;
    t = SSLgetAnnotations(not_null(k_4));
    if(((h_4 != NULL) && (h_4 != t)))
      _fail(t);
    else
      h_4 = t;
    t = not_null(p_13);
    t = not_null(f_4);
    t = l_62(t);
    if(((i_4 != NULL) && (i_4 != t)))
      _fail(t);
    else
      i_4 = t;
    t = not_null(g_4);
    t = m_62(t);
    if(((j_4 != NULL) && (j_4 != t)))
      _fail(t);
    else
      j_4 = t;
    {
      ATerm q_13 = NULL;
      if(((q_13 != NULL) && (q_13 != t)))
        _fail(t);
      else
        q_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(i_4), not_null(j_4)), not_null(h_4));
      if(((l_4 != NULL) && (l_4 != t)))
        _fail(t);
      else
        l_4 = t;
    }
  }
  return(t);
}
ATerm Var_1_0 (ATerm f_62 (ATerm), ATerm t)
{
  ATerm n_4 = NULL,m_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
  if(((p_4 != NULL) && (p_4 != t)))
    _fail(t);
  else
    p_4 = t;
  if(match_cons(t, sym_Var_1))
    {
      if(((m_4 != NULL) && (m_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_13 = NULL;
    if(((r_13 != NULL) && (r_13 != t)))
      _fail(t);
    else
      r_13 = t;
    t = SSLgetAnnotations(not_null(p_4));
    if(((n_4 != NULL) && (n_4 != t)))
      _fail(t);
    else
      n_4 = t;
    t = not_null(r_13);
    t = not_null(m_4);
    t = f_62(t);
    if(((o_4 != NULL) && (o_4 != t)))
      _fail(t);
    else
      o_4 = t;
    {
      ATerm s_13 = NULL;
      if(((s_13 != NULL) && (s_13 != t)))
        _fail(t);
      else
        s_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(o_4)), not_null(n_4));
      if(((q_4 != NULL) && (q_4 != t)))
        _fail(t);
      else
        q_4 = t;
    }
  }
  return(t);
}
ATerm As_2_0 (ATerm w_62 (ATerm), ATerm x_62 (ATerm), ATerm t)
{
  ATerm t_4 = NULL,r_4 = NULL,s_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
  if(((w_4 != NULL) && (w_4 != t)))
    _fail(t);
  else
    w_4 = t;
  if(match_cons(t, sym_As_2))
    {
      if(((r_4 != NULL) && (r_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_4 = ATgetArgument(t, 0);
      if(((s_4 != NULL) && (s_4 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_13 = NULL;
    if(((t_13 != NULL) && (t_13 != t)))
      _fail(t);
    else
      t_13 = t;
    t = SSLgetAnnotations(not_null(w_4));
    if(((t_4 != NULL) && (t_4 != t)))
      _fail(t);
    else
      t_4 = t;
    t = not_null(t_13);
    t = not_null(r_4);
    t = w_62(t);
    if(((u_4 != NULL) && (u_4 != t)))
      _fail(t);
    else
      u_4 = t;
    t = not_null(s_4);
    t = x_62(t);
    if(((v_4 != NULL) && (v_4 != t)))
      _fail(t);
    else
      v_4 = t;
    {
      ATerm u_13 = NULL;
      if(((u_13 != NULL) && (u_13 != t)))
        _fail(t);
      else
        u_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(u_4), not_null(v_4)), not_null(t_4));
      if(((x_4 != NULL) && (x_4 != t)))
        _fail(t);
      else
        x_4 = t;
    }
  }
  return(t);
}
ATerm BuildDefault_1_0 (ATerm c_63 (ATerm), ATerm t)
{
  ATerm z_4 = NULL,y_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  if(((b_5 != NULL) && (b_5 != t)))
    _fail(t);
  else
    b_5 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      if(((y_4 != NULL) && (y_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_13 = NULL;
    if(((v_13 != NULL) && (v_13 != t)))
      _fail(t);
    else
      v_13 = t;
    t = SSLgetAnnotations(not_null(b_5));
    if(((z_4 != NULL) && (z_4 != t)))
      _fail(t);
    else
      z_4 = t;
    t = not_null(v_13);
    t = not_null(y_4);
    t = c_63(t);
    if(((a_5 != NULL) && (a_5 != t)))
      _fail(t);
    else
      a_5 = t;
    {
      ATerm w_13 = NULL;
      if(((w_13 != NULL) && (w_13 != t)))
        _fail(t);
      else
        w_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(a_5)), not_null(z_4));
      if(((c_5 != NULL) && (c_5 != t)))
        _fail(t);
      else
        c_5 = t;
    }
  }
  return(t);
}
ATerm Str_1_0 (ATerm j_62 (ATerm), ATerm t)
{
  ATerm e_5 = NULL,d_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL;
  if(((g_5 != NULL) && (g_5 != t)))
    _fail(t);
  else
    g_5 = t;
  if(match_cons(t, sym_Str_1))
    {
      if(((d_5 != NULL) && (d_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_13 = NULL;
    if(((x_13 != NULL) && (x_13 != t)))
      _fail(t);
    else
      x_13 = t;
    t = SSLgetAnnotations(not_null(g_5));
    if(((e_5 != NULL) && (e_5 != t)))
      _fail(t);
    else
      e_5 = t;
    t = not_null(x_13);
    t = not_null(d_5);
    t = j_62(t);
    if(((f_5 != NULL) && (f_5 != t)))
      _fail(t);
    else
      f_5 = t;
    {
      ATerm y_13 = NULL;
      if(((y_13 != NULL) && (y_13 != t)))
        _fail(t);
      else
        y_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(f_5)), not_null(e_5));
      if(((h_5 != NULL) && (h_5 != t)))
        _fail(t);
      else
        h_5 = t;
    }
  }
  return(t);
}
ATerm is_real_0_0 (ATerm t)
{
  ATerm d_44 = NULL;
  if(((d_44 != NULL) && (d_44 != t)))
    _fail(t);
  else
    d_44 = t;
  t = SSL_is_real(not_null(d_44));
  return(t);
}
ATerm Real_1_0 (ATerm i_62 (ATerm), ATerm t)
{
  ATerm j_5 = NULL,i_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL;
  if(((l_5 != NULL) && (l_5 != t)))
    _fail(t);
  else
    l_5 = t;
  if(match_cons(t, sym_Real_1))
    {
      if(((i_5 != NULL) && (i_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_13 = NULL;
    if(((z_13 != NULL) && (z_13 != t)))
      _fail(t);
    else
      z_13 = t;
    t = SSLgetAnnotations(not_null(l_5));
    if(((j_5 != NULL) && (j_5 != t)))
      _fail(t);
    else
      j_5 = t;
    t = not_null(z_13);
    t = not_null(i_5);
    t = i_62(t);
    if(((k_5 != NULL) && (k_5 != t)))
      _fail(t);
    else
      k_5 = t;
    {
      ATerm a_14 = NULL;
      if(((a_14 != NULL) && (a_14 != t)))
        _fail(t);
      else
        a_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(k_5)), not_null(j_5));
      if(((m_5 != NULL) && (m_5 != t)))
        _fail(t);
      else
        m_5 = t;
    }
  }
  return(t);
}
ATerm Int_1_0 (ATerm h_62 (ATerm), ATerm t)
{
  ATerm o_5 = NULL,n_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
  if(((q_5 != NULL) && (q_5 != t)))
    _fail(t);
  else
    q_5 = t;
  if(match_cons(t, sym_Int_1))
    {
      if(((n_5 != NULL) && (n_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_14 = NULL;
    if(((b_14 != NULL) && (b_14 != t)))
      _fail(t);
    else
      b_14 = t;
    t = SSLgetAnnotations(not_null(q_5));
    if(((o_5 != NULL) && (o_5 != t)))
      _fail(t);
    else
      o_5 = t;
    t = not_null(b_14);
    t = not_null(n_5);
    t = h_62(t);
    if(((p_5 != NULL) && (p_5 != t)))
      _fail(t);
    else
      p_5 = t;
    {
      ATerm c_14 = NULL;
      if(((c_14 != NULL) && (c_14 != t)))
        _fail(t);
      else
        c_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(p_5)), not_null(o_5));
      if(((r_5 != NULL) && (r_5 != t)))
        _fail(t);
      else
        r_5 = t;
    }
  }
  return(t);
}
ATerm Wld_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0_0(t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(is_string_0_0, t);
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
                  t = Int_1_0(is_int_0_0, t);
                  ;
                  LocalPopChoice(s_20);
                }
              else
                {
                  t = r_20;
                  {
                    ATerm t_20 = t;
                    int u_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1_0(is_real_0_0, t);
                        ;
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
                              t = Str_1_0(is_string_0_0, t);
                              ;
                              LocalPopChoice(w_20);
                            }
                          else
                            {
                              t = v_20;
                              {
                                ATerm x_20 = t;
                                int y_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1_0(term_expression_0_0, t);
                                    ;
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
                                          ATerm n_16 (ATerm t)
                                          {
                                            t = Var_1_0(is_string_0_0, t);
                                            return(t);
                                          }
                                          t = As_2_0(n_16, term_expression_0_0, t);
                                          ;
                                          LocalPopChoice(a_21);
                                        }
                                      else
                                        {
                                          t = z_20;
                                          {
                                            ATerm b_21 = t;
                                            int c_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm o_16 (ATerm t)
                                                {
                                                  t = list_1_0(term_expression_0_0, t);
                                                  return(t);
                                                }
                                                t = Op_2_0(is_string_0_0, o_16, t);
                                                ;
                                                LocalPopChoice(c_21);
                                              }
                                            else
                                              {
                                                t = b_21;
                                                {
                                                  ATerm p_16 (ATerm t)
                                                  {
                                                    t = term_d_21;
                                                    return(t);
                                                  }
                                                  t = debug_1_0(p_16, t);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm PrimT_3_0 (ATerm v_66 (ATerm), ATerm w_66 (ATerm), ATerm x_66 (ATerm), ATerm t)
{
  ATerm v_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL;
  if(((z_5 != NULL) && (z_5 != t)))
    _fail(t);
  else
    z_5 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      if(((s_5 != NULL) && (s_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_5 = ATgetArgument(t, 0);
      if(((t_5 != NULL) && (t_5 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_5 = ATgetArgument(t, 1);
      if(((u_5 != NULL) && (u_5 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        u_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm d_14 = NULL;
    if(((d_14 != NULL) && (d_14 != t)))
      _fail(t);
    else
      d_14 = t;
    t = SSLgetAnnotations(not_null(z_5));
    if(((v_5 != NULL) && (v_5 != t)))
      _fail(t);
    else
      v_5 = t;
    t = not_null(d_14);
    t = not_null(s_5);
    t = v_66(t);
    if(((w_5 != NULL) && (w_5 != t)))
      _fail(t);
    else
      w_5 = t;
    t = not_null(t_5);
    t = w_66(t);
    if(((x_5 != NULL) && (x_5 != t)))
      _fail(t);
    else
      x_5 = t;
    t = not_null(u_5);
    t = x_66(t);
    if(((y_5 != NULL) && (y_5 != t)))
      _fail(t);
    else
      y_5 = t;
    {
      ATerm e_14 = NULL;
      if(((e_14 != NULL) && (e_14 != t)))
        _fail(t);
      else
        e_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(w_5), not_null(x_5), not_null(y_5)), not_null(v_5));
      if(((a_6 != NULL) && (a_6 != t)))
        _fail(t);
      else
        a_6 = t;
    }
  }
  return(t);
}
ATerm Where_1_0 (ATerm p_66 (ATerm), ATerm t)
{
  ATerm c_6 = NULL,b_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
  if(((e_6 != NULL) && (e_6 != t)))
    _fail(t);
  else
    e_6 = t;
  if(match_cons(t, sym_Where_1))
    {
      if(((b_6 != NULL) && (b_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_14 = NULL;
    if(((f_14 != NULL) && (f_14 != t)))
      _fail(t);
    else
      f_14 = t;
    t = SSLgetAnnotations(not_null(e_6));
    if(((c_6 != NULL) && (c_6 != t)))
      _fail(t);
    else
      c_6 = t;
    t = not_null(f_14);
    t = not_null(b_6);
    t = p_66(t);
    if(((d_6 != NULL) && (d_6 != t)))
      _fail(t);
    else
      d_6 = t;
    {
      ATerm g_14 = NULL;
      if(((g_14 != NULL) && (g_14 != t)))
        _fail(t);
      else
        g_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(d_6)), not_null(c_6));
      if(((f_6 != NULL) && (f_6 != t)))
        _fail(t);
      else
        f_6 = t;
    }
  }
  return(t);
}
ATerm Scope_2_0 (ATerm z_65 (ATerm), ATerm a_66 (ATerm), ATerm t)
{
  ATerm i_6 = NULL,g_6 = NULL,h_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
  if(((l_6 != NULL) && (l_6 != t)))
    _fail(t);
  else
    l_6 = t;
  if(match_cons(t, sym_Scope_2))
    {
      if(((g_6 != NULL) && (g_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_6 = ATgetArgument(t, 0);
      if(((h_6 != NULL) && (h_6 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_14 = NULL;
    if(((h_14 != NULL) && (h_14 != t)))
      _fail(t);
    else
      h_14 = t;
    t = SSLgetAnnotations(not_null(l_6));
    if(((i_6 != NULL) && (i_6 != t)))
      _fail(t);
    else
      i_6 = t;
    t = not_null(h_14);
    t = not_null(g_6);
    t = z_65(t);
    if(((j_6 != NULL) && (j_6 != t)))
      _fail(t);
    else
      j_6 = t;
    t = not_null(h_6);
    t = a_66(t);
    if(((k_6 != NULL) && (k_6 != t)))
      _fail(t);
    else
      k_6 = t;
    {
      ATerm i_14 = NULL;
      if(((i_14 != NULL) && (i_14 != t)))
        _fail(t);
      else
        i_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(j_6), not_null(k_6)), not_null(i_6));
      if(((m_6 != NULL) && (m_6 != t)))
        _fail(t);
      else
        m_6 = t;
    }
  }
  return(t);
}
ATerm Build_1_0 (ATerm x_65 (ATerm), ATerm t)
{
  ATerm o_6 = NULL,n_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
  if(((q_6 != NULL) && (q_6 != t)))
    _fail(t);
  else
    q_6 = t;
  if(match_cons(t, sym_Build_1))
    {
      if(((n_6 != NULL) && (n_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_14 = NULL;
    if(((j_14 != NULL) && (j_14 != t)))
      _fail(t);
    else
      j_14 = t;
    t = SSLgetAnnotations(not_null(q_6));
    if(((o_6 != NULL) && (o_6 != t)))
      _fail(t);
    else
      o_6 = t;
    t = not_null(j_14);
    t = not_null(n_6);
    t = x_65(t);
    if(((p_6 != NULL) && (p_6 != t)))
      _fail(t);
    else
      p_6 = t;
    {
      ATerm k_14 = NULL;
      if(((k_14 != NULL) && (k_14 != t)))
        _fail(t);
      else
        k_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(p_6)), not_null(o_6));
      if(((r_6 != NULL) && (r_6 != t)))
        _fail(t);
      else
        r_6 = t;
    }
  }
  return(t);
}
ATerm Match_1_0 (ATerm w_65 (ATerm), ATerm t)
{
  ATerm t_6 = NULL,s_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL;
  if(((v_6 != NULL) && (v_6 != t)))
    _fail(t);
  else
    v_6 = t;
  if(match_cons(t, sym_Match_1))
    {
      if(((s_6 != NULL) && (s_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_14 = NULL;
    if(((l_14 != NULL) && (l_14 != t)))
      _fail(t);
    else
      l_14 = t;
    t = SSLgetAnnotations(not_null(v_6));
    if(((t_6 != NULL) && (t_6 != t)))
      _fail(t);
    else
      t_6 = t;
    t = not_null(l_14);
    t = not_null(s_6);
    t = w_65(t);
    if(((u_6 != NULL) && (u_6 != t)))
      _fail(t);
    else
      u_6 = t;
    {
      ATerm m_14 = NULL;
      if(((m_14 != NULL) && (m_14 != t)))
        _fail(t);
      else
        m_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(u_6)), not_null(t_6));
      if(((w_6 != NULL) && (w_6 != t)))
        _fail(t);
      else
        w_6 = t;
    }
  }
  return(t);
}
ATerm Thread_1_0 (ATerm d_67 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,x_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
  if(((a_7 != NULL) && (a_7 != t)))
    _fail(t);
  else
    a_7 = t;
  if(match_cons(t, sym_Thread_1))
    {
      if(((x_6 != NULL) && (x_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_14 = NULL;
    if(((n_14 != NULL) && (n_14 != t)))
      _fail(t);
    else
      n_14 = t;
    t = SSLgetAnnotations(not_null(a_7));
    if(((y_6 != NULL) && (y_6 != t)))
      _fail(t);
    else
      y_6 = t;
    t = not_null(n_14);
    t = not_null(x_6);
    t = d_67(t);
    if(((z_6 != NULL) && (z_6 != t)))
      _fail(t);
    else
      z_6 = t;
    {
      ATerm o_14 = NULL;
      if(((o_14 != NULL) && (o_14 != t)))
        _fail(t);
      else
        o_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(z_6)), not_null(y_6));
      if(((b_7 != NULL) && (b_7 != t)))
        _fail(t);
      else
        b_7 = t;
    }
  }
  return(t);
}
ATerm All_1_0 (ATerm c_67 (ATerm), ATerm t)
{
  ATerm d_7 = NULL,c_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
  if(((f_7 != NULL) && (f_7 != t)))
    _fail(t);
  else
    f_7 = t;
  if(match_cons(t, sym_All_1))
    {
      if(((c_7 != NULL) && (c_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_14 = NULL;
    if(((p_14 != NULL) && (p_14 != t)))
      _fail(t);
    else
      p_14 = t;
    t = SSLgetAnnotations(not_null(f_7));
    if(((d_7 != NULL) && (d_7 != t)))
      _fail(t);
    else
      d_7 = t;
    t = not_null(p_14);
    t = not_null(c_7);
    t = c_67(t);
    if(((e_7 != NULL) && (e_7 != t)))
      _fail(t);
    else
      e_7 = t;
    {
      ATerm q_14 = NULL;
      if(((q_14 != NULL) && (q_14 != t)))
        _fail(t);
      else
        q_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(e_7)), not_null(d_7));
      if(((g_7 != NULL) && (g_7 != t)))
        _fail(t);
      else
        g_7 = t;
    }
  }
  return(t);
}
ATerm Some_1_0 (ATerm a_67 (ATerm), ATerm t)
{
  ATerm i_7 = NULL,h_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL;
  if(((k_7 != NULL) && (k_7 != t)))
    _fail(t);
  else
    k_7 = t;
  if(match_cons(t, sym_Some_1))
    {
      if(((h_7 != NULL) && (h_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_14 = NULL;
    if(((r_14 != NULL) && (r_14 != t)))
      _fail(t);
    else
      r_14 = t;
    t = SSLgetAnnotations(not_null(k_7));
    if(((i_7 != NULL) && (i_7 != t)))
      _fail(t);
    else
      i_7 = t;
    t = not_null(r_14);
    t = not_null(h_7);
    t = a_67(t);
    if(((j_7 != NULL) && (j_7 != t)))
      _fail(t);
    else
      j_7 = t;
    {
      ATerm s_14 = NULL;
      if(((s_14 != NULL) && (s_14 != t)))
        _fail(t);
      else
        s_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(j_7)), not_null(i_7));
      if(((l_7 != NULL) && (l_7 != t)))
        _fail(t);
      else
        l_7 = t;
    }
  }
  return(t);
}
ATerm One_1_0 (ATerm b_67 (ATerm), ATerm t)
{
  ATerm n_7 = NULL,m_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
  if(((p_7 != NULL) && (p_7 != t)))
    _fail(t);
  else
    p_7 = t;
  if(match_cons(t, sym_One_1))
    {
      if(((m_7 != NULL) && (m_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_14 = NULL;
    if(((t_14 != NULL) && (t_14 != t)))
      _fail(t);
    else
      t_14 = t;
    t = SSLgetAnnotations(not_null(p_7));
    if(((n_7 != NULL) && (n_7 != t)))
      _fail(t);
    else
      n_7 = t;
    t = not_null(t_14);
    t = not_null(m_7);
    t = b_67(t);
    if(((o_7 != NULL) && (o_7 != t)))
      _fail(t);
    else
      o_7 = t;
    {
      ATerm u_14 = NULL;
      if(((u_14 != NULL) && (u_14 != t)))
        _fail(t);
      else
        u_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(o_7)), not_null(n_7));
      if(((q_7 != NULL) && (q_7 != t)))
        _fail(t);
      else
        q_7 = t;
    }
  }
  return(t);
}
ATerm Cong_2_0 (ATerm d_61 (ATerm), ATerm e_61 (ATerm), ATerm t)
{
  ATerm t_7 = NULL,r_7 = NULL,s_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
  if(((w_7 != NULL) && (w_7 != t)))
    _fail(t);
  else
    w_7 = t;
  if(match_cons(t, sym_Cong_2))
    {
      if(((r_7 != NULL) && (r_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_7 = ATgetArgument(t, 0);
      if(((s_7 != NULL) && (s_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_14 = NULL;
    if(((v_14 != NULL) && (v_14 != t)))
      _fail(t);
    else
      v_14 = t;
    t = SSLgetAnnotations(not_null(w_7));
    if(((t_7 != NULL) && (t_7 != t)))
      _fail(t);
    else
      t_7 = t;
    t = not_null(v_14);
    t = not_null(r_7);
    t = d_61(t);
    if(((u_7 != NULL) && (u_7 != t)))
      _fail(t);
    else
      u_7 = t;
    t = not_null(s_7);
    t = e_61(t);
    if(((v_7 != NULL) && (v_7 != t)))
      _fail(t);
    else
      v_7 = t;
    {
      ATerm w_14 = NULL;
      if(((w_14 != NULL) && (w_14 != t)))
        _fail(t);
      else
        w_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(u_7), not_null(v_7)), not_null(t_7));
      if(((x_7 != NULL) && (x_7 != t)))
        _fail(t);
      else
        x_7 = t;
    }
  }
  return(t);
}
ATerm is_int_0_0 (ATerm t)
{
  ATerm h_42 = NULL;
  if(((h_42 != NULL) && (h_42 != t)))
    _fail(t);
  else
    h_42 = t;
  t = SSL_is_int(not_null(h_42));
  return(t);
}
ATerm Path_2_0 (ATerm y_66 (ATerm), ATerm z_66 (ATerm), ATerm t)
{
  ATerm a_8 = NULL,y_7 = NULL,z_7 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  if(((d_8 != NULL) && (d_8 != t)))
    _fail(t);
  else
    d_8 = t;
  if(match_cons(t, sym_Path_2))
    {
      if(((y_7 != NULL) && (y_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_7 = ATgetArgument(t, 0);
      if(((z_7 != NULL) && (z_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_14 = NULL;
    if(((x_14 != NULL) && (x_14 != t)))
      _fail(t);
    else
      x_14 = t;
    t = SSLgetAnnotations(not_null(d_8));
    if(((a_8 != NULL) && (a_8 != t)))
      _fail(t);
    else
      a_8 = t;
    t = not_null(x_14);
    t = not_null(y_7);
    t = y_66(t);
    if(((b_8 != NULL) && (b_8 != t)))
      _fail(t);
    else
      b_8 = t;
    t = not_null(z_7);
    t = z_66(t);
    if(((c_8 != NULL) && (c_8 != t)))
      _fail(t);
    else
      c_8 = t;
    {
      ATerm y_14 = NULL;
      if(((y_14 != NULL) && (y_14 != t)))
        _fail(t);
      else
        y_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(b_8), not_null(c_8)), not_null(a_8));
      if(((e_8 != NULL) && (e_8 != t)))
        _fail(t);
      else
        e_8 = t;
    }
  }
  return(t);
}
ATerm Rec_2_0 (ATerm m_66 (ATerm), ATerm n_66 (ATerm), ATerm t)
{
  ATerm h_8 = NULL,f_8 = NULL,g_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL;
  if(((k_8 != NULL) && (k_8 != t)))
    _fail(t);
  else
    k_8 = t;
  if(match_cons(t, sym_Rec_2))
    {
      if(((f_8 != NULL) && (f_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_8 = ATgetArgument(t, 0);
      if(((g_8 != NULL) && (g_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_14 = NULL;
    if(((z_14 != NULL) && (z_14 != t)))
      _fail(t);
    else
      z_14 = t;
    t = SSLgetAnnotations(not_null(k_8));
    if(((h_8 != NULL) && (h_8 != t)))
      _fail(t);
    else
      h_8 = t;
    t = not_null(z_14);
    t = not_null(f_8);
    t = m_66(t);
    if(((i_8 != NULL) && (i_8 != t)))
      _fail(t);
    else
      i_8 = t;
    t = not_null(g_8);
    t = n_66(t);
    if(((j_8 != NULL) && (j_8 != t)))
      _fail(t);
    else
      j_8 = t;
    {
      ATerm a_15 = NULL;
      if(((a_15 != NULL) && (a_15 != t)))
        _fail(t);
      else
        a_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(i_8), not_null(j_8)), not_null(h_8));
      if(((l_8 != NULL) && (l_8 != t)))
        _fail(t);
      else
        l_8 = t;
    }
  }
  return(t);
}
ATerm SVar_1_0 (ATerm o_65 (ATerm), ATerm t)
{
  ATerm n_8 = NULL,m_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL;
  if(((p_8 != NULL) && (p_8 != t)))
    _fail(t);
  else
    p_8 = t;
  if(match_cons(t, sym_SVar_1))
    {
      if(((m_8 != NULL) && (m_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_15 = NULL;
    if(((b_15 != NULL) && (b_15 != t)))
      _fail(t);
    else
      b_15 = t;
    t = SSLgetAnnotations(not_null(p_8));
    if(((n_8 != NULL) && (n_8 != t)))
      _fail(t);
    else
      n_8 = t;
    t = not_null(b_15);
    t = not_null(m_8);
    t = o_65(t);
    if(((o_8 != NULL) && (o_8 != t)))
      _fail(t);
    else
      o_8 = t;
    {
      ATerm c_15 = NULL;
      if(((c_15 != NULL) && (c_15 != t)))
        _fail(t);
      else
        c_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(o_8)), not_null(n_8));
      if(((q_8 != NULL) && (q_8 != t)))
        _fail(t);
      else
        q_8 = t;
    }
  }
  return(t);
}
ATerm CallT_3_0 (ATerm t_65 (ATerm), ATerm u_65 (ATerm), ATerm v_65 (ATerm), ATerm t)
{
  ATerm u_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
  if(((y_8 != NULL) && (y_8 != t)))
    _fail(t);
  else
    y_8 = t;
  if(match_cons(t, sym_CallT_3))
    {
      if(((r_8 != NULL) && (r_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_8 = ATgetArgument(t, 0);
      if(((s_8 != NULL) && (s_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_8 = ATgetArgument(t, 1);
      if(((t_8 != NULL) && (t_8 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        t_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm d_15 = NULL;
    if(((d_15 != NULL) && (d_15 != t)))
      _fail(t);
    else
      d_15 = t;
    t = SSLgetAnnotations(not_null(y_8));
    if(((u_8 != NULL) && (u_8 != t)))
      _fail(t);
    else
      u_8 = t;
    t = not_null(d_15);
    t = not_null(r_8);
    t = t_65(t);
    if(((v_8 != NULL) && (v_8 != t)))
      _fail(t);
    else
      v_8 = t;
    t = not_null(s_8);
    t = u_65(t);
    if(((w_8 != NULL) && (w_8 != t)))
      _fail(t);
    else
      w_8 = t;
    t = not_null(t_8);
    t = v_65(t);
    if(((x_8 != NULL) && (x_8 != t)))
      _fail(t);
    else
      x_8 = t;
    {
      ATerm e_15 = NULL;
      if(((e_15 != NULL) && (e_15 != t)))
        _fail(t);
      else
        e_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(v_8), not_null(w_8), not_null(x_8)), not_null(u_8));
      if(((z_8 != NULL) && (z_8 != t)))
        _fail(t);
      else
        z_8 = t;
    }
  }
  return(t);
}
ATerm LGChoice_2_0 (ATerm h_66 (ATerm), ATerm i_66 (ATerm), ATerm t)
{
  ATerm c_9 = NULL,a_9 = NULL,b_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL;
  if(((f_9 != NULL) && (f_9 != t)))
    _fail(t);
  else
    f_9 = t;
  if(match_cons(t, sym_LGChoice_2))
    {
      if(((a_9 != NULL) && (a_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_9 = ATgetArgument(t, 0);
      if(((b_9 != NULL) && (b_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_15 = NULL;
    if(((f_15 != NULL) && (f_15 != t)))
      _fail(t);
    else
      f_15 = t;
    t = SSLgetAnnotations(not_null(f_9));
    if(((c_9 != NULL) && (c_9 != t)))
      _fail(t);
    else
      c_9 = t;
    t = not_null(f_15);
    t = not_null(a_9);
    t = h_66(t);
    if(((d_9 != NULL) && (d_9 != t)))
      _fail(t);
    else
      d_9 = t;
    t = not_null(b_9);
    t = i_66(t);
    if(((e_9 != NULL) && (e_9 != t)))
      _fail(t);
    else
      e_9 = t;
    {
      ATerm g_15 = NULL;
      if(((g_15 != NULL) && (g_15 != t)))
        _fail(t);
      else
        g_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(d_9), not_null(e_9)), not_null(c_9));
      if(((g_9 != NULL) && (g_9 != t)))
        _fail(t);
      else
        g_9 = t;
    }
  }
  return(t);
}
ATerm GChoice_2_0 (ATerm h_65 (ATerm), ATerm i_65 (ATerm), ATerm t)
{
  ATerm j_9 = NULL,h_9 = NULL,i_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL;
  if(((m_9 != NULL) && (m_9 != t)))
    _fail(t);
  else
    m_9 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      if(((h_9 != NULL) && (h_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_9 = ATgetArgument(t, 0);
      if(((i_9 != NULL) && (i_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_15 = NULL;
    if(((h_15 != NULL) && (h_15 != t)))
      _fail(t);
    else
      h_15 = t;
    t = SSLgetAnnotations(not_null(m_9));
    if(((j_9 != NULL) && (j_9 != t)))
      _fail(t);
    else
      j_9 = t;
    t = not_null(h_15);
    t = not_null(h_9);
    t = h_65(t);
    if(((k_9 != NULL) && (k_9 != t)))
      _fail(t);
    else
      k_9 = t;
    t = not_null(i_9);
    t = i_65(t);
    if(((l_9 != NULL) && (l_9 != t)))
      _fail(t);
    else
      l_9 = t;
    {
      ATerm i_15 = NULL;
      if(((i_15 != NULL) && (i_15 != t)))
        _fail(t);
      else
        i_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(k_9), not_null(l_9)), not_null(j_9));
      if(((n_9 != NULL) && (n_9 != t)))
        _fail(t);
      else
        n_9 = t;
    }
  }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm j_66 (ATerm), ATerm k_66 (ATerm), ATerm l_66 (ATerm), ATerm t)
{
  ATerm r_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL;
  if(((v_9 != NULL) && (v_9 != t)))
    _fail(t);
  else
    v_9 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      if(((o_9 != NULL) && (o_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_9 = ATgetArgument(t, 0);
      if(((p_9 != NULL) && (p_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_9 = ATgetArgument(t, 1);
      if(((q_9 != NULL) && (q_9 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        q_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm j_15 = NULL;
    if(((j_15 != NULL) && (j_15 != t)))
      _fail(t);
    else
      j_15 = t;
    t = SSLgetAnnotations(not_null(v_9));
    if(((r_9 != NULL) && (r_9 != t)))
      _fail(t);
    else
      r_9 = t;
    t = not_null(j_15);
    t = not_null(o_9);
    t = j_66(t);
    if(((s_9 != NULL) && (s_9 != t)))
      _fail(t);
    else
      s_9 = t;
    t = not_null(p_9);
    t = k_66(t);
    if(((t_9 != NULL) && (t_9 != t)))
      _fail(t);
    else
      t_9 = t;
    t = not_null(q_9);
    t = l_66(t);
    if(((u_9 != NULL) && (u_9 != t)))
      _fail(t);
    else
      u_9 = t;
    {
      ATerm k_15 = NULL;
      if(((k_15 != NULL) && (k_15 != t)))
        _fail(t);
      else
        k_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(s_9), not_null(t_9), not_null(u_9)), not_null(r_9));
      if(((w_9 != NULL) && (w_9 != t)))
        _fail(t);
      else
        w_9 = t;
    }
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm f_66 (ATerm), ATerm g_66 (ATerm), ATerm t)
{
  ATerm z_9 = NULL,x_9 = NULL,y_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
  if(((c_10 != NULL) && (c_10 != t)))
    _fail(t);
  else
    c_10 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      if(((x_9 != NULL) && (x_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_9 = ATgetArgument(t, 0);
      if(((y_9 != NULL) && (y_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_15 = NULL;
    if(((l_15 != NULL) && (l_15 != t)))
      _fail(t);
    else
      l_15 = t;
    t = SSLgetAnnotations(not_null(c_10));
    if(((z_9 != NULL) && (z_9 != t)))
      _fail(t);
    else
      z_9 = t;
    t = not_null(l_15);
    t = not_null(x_9);
    t = f_66(t);
    if(((a_10 != NULL) && (a_10 != t)))
      _fail(t);
    else
      a_10 = t;
    t = not_null(y_9);
    t = g_66(t);
    if(((b_10 != NULL) && (b_10 != t)))
      _fail(t);
    else
      b_10 = t;
    {
      ATerm m_15 = NULL;
      if(((m_15 != NULL) && (m_15 != t)))
        _fail(t);
      else
        m_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(a_10), not_null(b_10)), not_null(z_9));
      if(((d_10 != NULL) && (d_10 != t)))
        _fail(t);
      else
        d_10 = t;
    }
  }
  return(t);
}
ATerm Choice_2_0 (ATerm d_65 (ATerm), ATerm e_65 (ATerm), ATerm t)
{
  ATerm g_10 = NULL,e_10 = NULL,f_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
  if(((j_10 != NULL) && (j_10 != t)))
    _fail(t);
  else
    j_10 = t;
  if(match_cons(t, sym_Choice_2))
    {
      if(((e_10 != NULL) && (e_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_10 = ATgetArgument(t, 0);
      if(((f_10 != NULL) && (f_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_15 = NULL;
    if(((n_15 != NULL) && (n_15 != t)))
      _fail(t);
    else
      n_15 = t;
    t = SSLgetAnnotations(not_null(j_10));
    if(((g_10 != NULL) && (g_10 != t)))
      _fail(t);
    else
      g_10 = t;
    t = not_null(n_15);
    t = not_null(e_10);
    t = d_65(t);
    if(((h_10 != NULL) && (h_10 != t)))
      _fail(t);
    else
      h_10 = t;
    t = not_null(f_10);
    t = e_65(t);
    if(((i_10 != NULL) && (i_10 != t)))
      _fail(t);
    else
      i_10 = t;
    {
      ATerm o_15 = NULL;
      if(((o_15 != NULL) && (o_15 != t)))
        _fail(t);
      else
        o_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(h_10), not_null(i_10)), not_null(g_10));
      if(((k_10 != NULL) && (k_10 != t)))
        _fail(t);
      else
        k_10 = t;
    }
  }
  return(t);
}
ATerm Seq_2_0 (ATerm d_66 (ATerm), ATerm e_66 (ATerm), ATerm t)
{
  ATerm n_10 = NULL,l_10 = NULL,m_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
  if(((q_10 != NULL) && (q_10 != t)))
    _fail(t);
  else
    q_10 = t;
  if(match_cons(t, sym_Seq_2))
    {
      if(((l_10 != NULL) && (l_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_10 = ATgetArgument(t, 0);
      if(((m_10 != NULL) && (m_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_15 = NULL;
    if(((p_15 != NULL) && (p_15 != t)))
      _fail(t);
    else
      p_15 = t;
    t = SSLgetAnnotations(not_null(q_10));
    if(((n_10 != NULL) && (n_10 != t)))
      _fail(t);
    else
      n_10 = t;
    t = not_null(p_15);
    t = not_null(l_10);
    t = d_66(t);
    if(((o_10 != NULL) && (o_10 != t)))
      _fail(t);
    else
      o_10 = t;
    t = not_null(m_10);
    t = e_66(t);
    if(((p_10 != NULL) && (p_10 != t)))
      _fail(t);
    else
      p_10 = t;
    {
      ATerm q_15 = NULL;
      if(((q_15 != NULL) && (q_15 != t)))
        _fail(t);
      else
        q_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(o_10), not_null(p_10)), not_null(n_10));
      if(((r_10 != NULL) && (r_10 != t)))
        _fail(t);
      else
        r_10 = t;
    }
  }
  return(t);
}
ATerm Test_1_0 (ATerm q_66 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,s_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
  if(((v_10 != NULL) && (v_10 != t)))
    _fail(t);
  else
    v_10 = t;
  if(match_cons(t, sym_Test_1))
    {
      if(((s_10 != NULL) && (s_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_15 = NULL;
    if(((r_15 != NULL) && (r_15 != t)))
      _fail(t);
    else
      r_15 = t;
    t = SSLgetAnnotations(not_null(v_10));
    if(((t_10 != NULL) && (t_10 != t)))
      _fail(t);
    else
      t_10 = t;
    t = not_null(r_15);
    t = not_null(s_10);
    t = q_66(t);
    if(((u_10 != NULL) && (u_10 != t)))
      _fail(t);
    else
      u_10 = t;
    {
      ATerm s_15 = NULL;
      if(((s_15 != NULL) && (s_15 != t)))
        _fail(t);
      else
        s_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(u_10)), not_null(t_10));
      if(((w_10 != NULL) && (w_10 != t)))
        _fail(t);
      else
        w_10 = t;
    }
  }
  return(t);
}
ATerm Not_1_0 (ATerm o_66 (ATerm), ATerm t)
{
  ATerm y_10 = NULL,x_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
  if(((a_11 != NULL) && (a_11 != t)))
    _fail(t);
  else
    a_11 = t;
  if(match_cons(t, sym_Not_1))
    {
      if(((x_10 != NULL) && (x_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_15 = NULL;
    if(((t_15 != NULL) && (t_15 != t)))
      _fail(t);
    else
      t_15 = t;
    t = SSLgetAnnotations(not_null(a_11));
    if(((y_10 != NULL) && (y_10 != t)))
      _fail(t);
    else
      y_10 = t;
    t = not_null(t_15);
    t = not_null(x_10);
    t = o_66(t);
    if(((z_10 != NULL) && (z_10 != t)))
      _fail(t);
    else
      z_10 = t;
    {
      ATerm u_15 = NULL;
      if(((u_15 != NULL) && (u_15 != t)))
        _fail(t);
      else
        u_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(z_10)), not_null(y_10));
      if(((b_11 != NULL) && (b_11 != t)))
        _fail(t);
      else
        b_11 = t;
    }
  }
  return(t);
}
ATerm Fail_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0_0(t);
      ;
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0_0(t);
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            {
              ATerm i_21 = t;
              int j_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1_0(strategy_expression_0_0, t);
                  ;
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
                        t = Test_1_0(strategy_expression_0_0, t);
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
                              t = Seq_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                              ;
                              LocalPopChoice(n_21);
                            }
                          else
                            {
                              t = m_21;
                              {
                                ATerm o_21 = t;
                                int p_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
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
                                          t = LChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                          ;
                                          LocalPopChoice(r_21);
                                        }
                                      else
                                        {
                                          t = q_21;
                                          {
                                            ATerm s_21 = t;
                                            int t_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3_0(strategy_expression_0_0, strategy_expression_0_0, strategy_expression_0_0, t);
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
                                                      t = GChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                      ;
                                                      LocalPopChoice(v_21);
                                                    }
                                                  else
                                                    {
                                                      t = u_21;
                                                      {
                                                        ATerm w_21 = t;
                                                        int x_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                            ;
                                                            LocalPopChoice(x_21);
                                                          }
                                                        else
                                                          {
                                                            t = w_21;
                                                            {
                                                              ATerm y_21 = t;
                                                              int z_21 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm q_16 (ATerm t)
                                                                  {
                                                                    ATerm t_16 (ATerm t)
                                                                    {
                                                                      ATerm a_22 = t;
                                                                      int b_22 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = is_string_0_0(t);
                                                                          ;
                                                                          LocalPopChoice(b_22);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = a_22;
                                                                          t = Mod_2_0(is_string_0_0, is_string_0_0, t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = SVar_1_0(t_16, t);
                                                                    return(t);
                                                                  }
                                                                  ATerm r_16 (ATerm t)
                                                                  {
                                                                    t = list_1_0(strategy_expression_0_0, t);
                                                                    return(t);
                                                                  }
                                                                  ATerm s_16 (ATerm t)
                                                                  {
                                                                    t = list_1_0(term_expression_0_0, t);
                                                                    return(t);
                                                                  }
                                                                  t = CallT_3_0(q_16, r_16, s_16, t);
                                                                  ;
                                                                  LocalPopChoice(z_21);
                                                                }
                                                              else
                                                                {
                                                                  t = y_21;
                                                                  {
                                                                    ATerm c_22 = t;
                                                                    int d_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2_0(is_string_0_0, strategy_expression_0_0, t);
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
                                                                              t = Path_2_0(is_int_0_0, strategy_expression_0_0, t);
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
                                                                                    ATerm u_16 (ATerm t)
                                                                                    {
                                                                                      t = list_1_0(strategy_expression_0_0, t);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2_0(is_string_0_0, u_16, t);
                                                                                    ;
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
                                                                                          t = One_1_0(strategy_expression_0_0, t);
                                                                                          ;
                                                                                          LocalPopChoice(j_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_22;
                                                                                          {
                                                                                            ATerm k_22 = t;
                                                                                            int l_22 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1_0(strategy_expression_0_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(l_22);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = k_22;
                                                                                                {
                                                                                                  ATerm m_22 = t;
                                                                                                  int n_22 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1_0(strategy_expression_0_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(n_22);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = m_22;
                                                                                                      {
                                                                                                        ATerm o_22 = t;
                                                                                                        int p_22 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1_0(strategy_expression_0_0, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(p_22);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = o_22;
                                                                                                            {
                                                                                                              ATerm q_22 = t;
                                                                                                              int r_22 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1_0(term_expression_0_0, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(r_22);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = q_22;
                                                                                                                  {
                                                                                                                    ATerm s_22 = t;
                                                                                                                    int t_22 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1_0(term_expression_0_0, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(t_22);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = s_22;
                                                                                                                        {
                                                                                                                          ATerm u_22 = t;
                                                                                                                          int v_22 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm v_16 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1_0(is_string_0_0, t);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2_0(v_16, strategy_expression_0_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(v_22);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = u_22;
                                                                                                                              {
                                                                                                                                ATerm w_22 = t;
                                                                                                                                int x_22 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1_0(strategy_expression_0_0, t);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(x_22);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = w_22;
                                                                                                                                    {
                                                                                                                                      ATerm y_22 = t;
                                                                                                                                      int z_22 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm w_16 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1_0(strategy_expression_0_0, t);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          ATerm x_16 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1_0(term_expression_0_0, t);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = PrimT_3_0(is_string_0_0, w_16, x_16, t);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(z_22);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = y_22;
                                                                                                                                          {
                                                                                                                                            ATerm a_23 = t;
                                                                                                                                            int b_23 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm y_16 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm z_16 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    ATerm a_17 (ATerm t)
                                                                                                                                                    {
                                                                                                                                                      ATerm c_17 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        ATerm d_17 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          ATerm e_17 (ATerm t)
                                                                                                                                                          {
                                                                                                                                                            t = list_1_0(_id, t);
                                                                                                                                                            return(t);
                                                                                                                                                          }
                                                                                                                                                          t = FunType_2_0(e_17, _id, t);
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        t = VarDec_2_0(is_string_0_0, d_17, t);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = list_1_0(c_17, t);
                                                                                                                                                      return(t);
                                                                                                                                                    }
                                                                                                                                                    ATerm b_17 (ATerm t)
                                                                                                                                                    {
                                                                                                                                                      ATerm f_17 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        ATerm g_17 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          t = ConstType_1_0(_id, t);
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        t = VarDec_2_0(is_string_0_0, g_17, t);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = list_1_0(f_17, t);
                                                                                                                                                      return(t);
                                                                                                                                                    }
                                                                                                                                                    t = SDefT_4_0(is_string_0_0, a_17, b_17, strategy_expression_0_0, t);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1_0(z_16, t);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2_0(y_16, strategy_expression_0_0, t);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(b_23);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = a_23;
                                                                                                                                                {
                                                                                                                                                  ATerm h_17 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = term_c_23;
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = debug_1_0(h_17, t);
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm VarDec_2_0 (ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm t)
{
  ATerm e_11 = NULL,c_11 = NULL,d_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
  if(((h_11 != NULL) && (h_11 != t)))
    _fail(t);
  else
    h_11 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      if(((c_11 != NULL) && (c_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_11 = ATgetArgument(t, 0);
      if(((d_11 != NULL) && (d_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_15 = NULL;
    if(((v_15 != NULL) && (v_15 != t)))
      _fail(t);
    else
      v_15 = t;
    t = SSLgetAnnotations(not_null(h_11));
    if(((e_11 != NULL) && (e_11 != t)))
      _fail(t);
    else
      e_11 = t;
    t = not_null(v_15);
    t = not_null(c_11);
    t = a_68(t);
    if(((f_11 != NULL) && (f_11 != t)))
      _fail(t);
    else
      f_11 = t;
    t = not_null(d_11);
    t = b_68(t);
    if(((g_11 != NULL) && (g_11 != t)))
      _fail(t);
    else
      g_11 = t;
    {
      ATerm w_15 = NULL;
      if(((w_15 != NULL) && (w_15 != t)))
        _fail(t);
      else
        w_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(f_11), not_null(g_11)), not_null(e_11));
      if(((i_11 != NULL) && (i_11 != t)))
        _fail(t);
      else
        i_11 = t;
    }
  }
  return(t);
}
ATerm Mod_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm t)
{
  ATerm l_11 = NULL,j_11 = NULL,k_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL;
  if(((o_11 != NULL) && (o_11 != t)))
    _fail(t);
  else
    o_11 = t;
  if(match_cons(t, sym_Mod_2))
    {
      if(((j_11 != NULL) && (j_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_11 = ATgetArgument(t, 0);
      if(((k_11 != NULL) && (k_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_15 = NULL;
    if(((x_15 != NULL) && (x_15 != t)))
      _fail(t);
    else
      x_15 = t;
    t = SSLgetAnnotations(not_null(o_11));
    if(((l_11 != NULL) && (l_11 != t)))
      _fail(t);
    else
      l_11 = t;
    t = not_null(x_15);
    t = not_null(j_11);
    t = s_67(t);
    if(((m_11 != NULL) && (m_11 != t)))
      _fail(t);
    else
      m_11 = t;
    t = not_null(k_11);
    t = t_67(t);
    if(((n_11 != NULL) && (n_11 != t)))
      _fail(t);
    else
      n_11 = t;
    {
      ATerm y_15 = NULL;
      if(((y_15 != NULL) && (y_15 != t)))
        _fail(t);
      else
        y_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Mod_2, not_null(m_11), not_null(n_11)), not_null(l_11));
      if(((p_11 != NULL) && (p_11 != t)))
        _fail(t);
      else
        p_11 = t;
    }
  }
  return(t);
}
ATerm SDefT_4_0 (ATerm h_68 (ATerm), ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
  if(((z_11 != NULL) && (z_11 != t)))
    _fail(t);
  else
    z_11 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      if(((q_11 != NULL) && (q_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_11 = ATgetArgument(t, 0);
      if(((r_11 != NULL) && (r_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_11 = ATgetArgument(t, 1);
      if(((s_11 != NULL) && (s_11 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        s_11 = ATgetArgument(t, 2);
      if(((t_11 != NULL) && (t_11 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        t_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm z_15 = NULL;
    if(((z_15 != NULL) && (z_15 != t)))
      _fail(t);
    else
      z_15 = t;
    t = SSLgetAnnotations(not_null(z_11));
    if(((u_11 != NULL) && (u_11 != t)))
      _fail(t);
    else
      u_11 = t;
    t = not_null(z_15);
    t = not_null(q_11);
    t = h_68(t);
    if(((v_11 != NULL) && (v_11 != t)))
      _fail(t);
    else
      v_11 = t;
    t = not_null(r_11);
    t = i_68(t);
    if(((w_11 != NULL) && (w_11 != t)))
      _fail(t);
    else
      w_11 = t;
    t = not_null(s_11);
    t = j_68(t);
    if(((x_11 != NULL) && (x_11 != t)))
      _fail(t);
    else
      x_11 = t;
    t = not_null(t_11);
    t = k_68(t);
    if(((y_11 != NULL) && (y_11 != t)))
      _fail(t);
    else
      y_11 = t;
    {
      ATerm a_16 = NULL;
      if(((a_16 != NULL) && (a_16 != t)))
        _fail(t);
      else
        a_16 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(v_11), not_null(w_11), not_null(x_11), not_null(y_11)), not_null(u_11));
      if(((a_12 != NULL) && (a_12 != t)))
        _fail(t);
      else
        a_12 = t;
    }
  }
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_17 (ATerm t)
      {
        ATerm f_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_string_0_0(t);
            ;
            LocalPopChoice(g_23);
          }
        else
          {
            t = f_23;
            t = Mod_2_0(is_string_0_0, is_string_0_0, t);
          }
        return(t);
      }
      ATerm j_17 (ATerm t)
      {
        ATerm l_17 (ATerm t)
        {
          t = VarDec_2_0(is_string_0_0, _id, t);
          return(t);
        }
        t = list_1_0(l_17, t);
        return(t);
      }
      ATerm k_17 (ATerm t)
      {
        ATerm m_17 (ATerm t)
        {
          t = VarDec_2_0(is_string_0_0, _id, t);
          return(t);
        }
        t = list_1_0(m_17, t);
        return(t);
      }
      t = SDefT_4_0(i_17, j_17, k_17, strategy_expression_0_0, t);
      ;
      LocalPopChoice(e_23);
    }
  else
    {
      t = d_23;
      {
        ATerm n_17 (ATerm t)
        {
          t = term_h_23;
          return(t);
        }
        t = debug_1_0(n_17, t);
      }
    }
  return(t);
}
ATerm list_1_0 (ATerm r_81 (ATerm), ATerm t)
{
  ATerm s_81 (ATerm t)
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        t = Cons_2_0(r_81, s_81, t);
      }
    return(t);
  }
  t = s_81(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm h_61 (ATerm), ATerm t)
{
  ATerm c_12 = NULL,b_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      if(((b_12 != NULL) && (b_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_16 = NULL;
    if(((b_16 != NULL) && (b_16 != t)))
      _fail(t);
    else
      b_16 = t;
    t = SSLgetAnnotations(not_null(e_12));
    if(((c_12 != NULL) && (c_12 != t)))
      _fail(t);
    else
      c_12 = t;
    t = not_null(b_16);
    t = not_null(b_12);
    t = h_61(t);
    if(((d_12 != NULL) && (d_12 != t)))
      _fail(t);
    else
      d_12 = t;
    {
      ATerm c_16 = NULL;
      if(((c_16 != NULL) && (c_16 != t)))
        _fail(t);
      else
        c_16 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(d_12)), not_null(c_12));
      if(((f_12 != NULL) && (f_12 != t)))
        _fail(t);
      else
        f_12 = t;
    }
  }
  return(t);
}
ATerm Specification_1_0 (ATerm m_61 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,g_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
  if(((j_12 != NULL) && (j_12 != t)))
    _fail(t);
  else
    j_12 = t;
  if(match_cons(t, sym_Specification_1))
    {
      if(((g_12 != NULL) && (g_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_16 = NULL;
    if(((d_16 != NULL) && (d_16 != t)))
      _fail(t);
    else
      d_16 = t;
    t = SSLgetAnnotations(not_null(j_12));
    if(((h_12 != NULL) && (h_12 != t)))
      _fail(t);
    else
      h_12 = t;
    t = not_null(d_16);
    t = not_null(g_12);
    t = m_61(t);
    if(((i_12 != NULL) && (i_12 != t)))
      _fail(t);
    else
      i_12 = t;
    {
      ATerm e_16 = NULL;
      if(((e_16 != NULL) && (e_16 != t)))
        _fail(t);
      else
        e_16 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(i_12)), not_null(h_12));
      if(((k_12 != NULL) && (k_12 != t)))
        _fail(t);
      else
        k_12 = t;
    }
  }
  return(t);
}
ATerm stratego_specification_0_0 (ATerm t)
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_17 (ATerm t)
      {
        ATerm p_17 (ATerm t)
        {
          ATerm q_17 (ATerm t)
          {
            ATerm r_17 (ATerm t)
            {
              t = list_1_0(strategy_definition_0_0, t);
              return(t);
            }
            t = Strategies_1_0(r_17, t);
            return(t);
          }
          t = Cons_2_0(q_17, Nil_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, p_17, t);
        return(t);
      }
      t = Specification_1_0(o_17, t);
      ;
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      {
        ATerm s_17 (ATerm t)
        {
          t = term_m_23;
          return(t);
        }
        t = debug_1_0(s_17, t);
      }
    }
  return(t);
}
ATerm _2_0 (ATerm s_59 (ATerm), ATerm t_59 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,l_12 = NULL,m_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
  if(((q_12 != NULL) && (q_12 != t)))
    _fail(t);
  else
    q_12 = t;
  if(match_cons(t, sym__2))
    {
      if(((l_12 != NULL) && (l_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_12 = ATgetArgument(t, 0);
      if(((m_12 != NULL) && (m_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_16 = NULL;
    if(((f_16 != NULL) && (f_16 != t)))
      _fail(t);
    else
      f_16 = t;
    t = SSLgetAnnotations(not_null(q_12));
    if(((n_12 != NULL) && (n_12 != t)))
      _fail(t);
    else
      n_12 = t;
    t = not_null(f_16);
    t = not_null(l_12);
    t = s_59(t);
    if(((o_12 != NULL) && (o_12 != t)))
      _fail(t);
    else
      o_12 = t;
    t = not_null(m_12);
    t = t_59(t);
    if(((p_12 != NULL) && (p_12 != t)))
      _fail(t);
    else
      p_12 = t;
    {
      ATerm g_16 = NULL;
      if(((g_16 != NULL) && (g_16 != t)))
        _fail(t);
      else
        g_16 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_12), not_null(p_12)), not_null(n_12));
      if(((r_12 != NULL) && (r_12 != t)))
        _fail(t);
      else
        r_12 = t;
    }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,a_454 = NULL;
  if(((b_0 != NULL) && (b_0 != t)))
    _fail(t);
  else
    b_0 = t;
  if(((f_0 != NULL) && (f_0 != t)))
    _fail(t);
  else
    f_0 = t;
  t = term_n_23;
  t = whoami_0_0(t);
  if(((a_454 != NULL) && (a_454 != t)))
    _fail(t);
  else
    a_454 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_23), not_null(a_454)), term_p_23));
  t = printnl_0_0(t);
  t = term_r_23;
  t = exit_0_0(t);
  t = not_null(b_0);
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,k_0 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_48 != NULL) && (u_48 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_48 = ATgetArgument(t, 0);
      if(((v_48 != NULL) && (v_48 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((k_0 != NULL) && (k_0 != t)))
    _fail(t);
  else
    k_0 = t;
  t = SSL_printnl(not_null(u_48), not_null(v_48));
  t = not_null(k_0);
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm i_40 = NULL;
  if(((i_40 != NULL) && (i_40 != t)))
    _fail(t);
  else
    i_40 = t;
  t = SSL_implode_string(not_null(i_40));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      {
        ATerm o_27 = NULL,p_27 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((o_27 != NULL) && (o_27 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              o_27 = ATgetFirst((ATermList) t);
            if(((p_27 != NULL) && (p_27 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              p_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(o_27);
        {
          ATerm t_17 (ATerm t)
          {
            t = not_null(p_27);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(t_17, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm q_139 = NULL,l_0 = NULL,r_139 = NULL,n_27 = NULL;
  if(((q_139 != NULL) && (q_139 != t)))
    _fail(t);
  else
    q_139 = t;
  if(((l_0 != NULL) && (l_0 != t)))
    _fail(t);
  else
    l_0 = t;
  t = not_null(q_139);
  if(((r_139 != NULL) && (r_139 != t)))
    _fail(t);
  else
    r_139 = t;
  t = SSL_explode_term(not_null(r_139));
  if(match_cons(t, sym__2))
    {
      ATerm u_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((n_27 != NULL) && (n_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(n_27);
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_82 (ATerm), ATerm t)
{
  ATerm f_82 (ATerm t)
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_82, t);
        ;
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        t = Nil_0_0(t);
        t = e_82(t);
      }
    return(t);
  }
  t = f_82(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_27 != NULL) && (m_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_27 = ATgetArgument(t, 0);
      if(((l_27 != NULL) && (l_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(m_27);
  {
    ATerm u_17 (ATerm t)
    {
      t = not_null(l_27);
      return(t);
    }
    t = at_end_1_0(u_17, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm j_40 = NULL;
  if(((j_40 != NULL) && (j_40 != t)))
    _fail(t);
  else
    j_40 = t;
  t = SSL_explode_string(not_null(j_40));
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
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
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
            ATerm v_17 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(v_17, t);
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
                  ATerm q_50 = NULL;
                  if(match_cons(t, sym_Path_1))
                    {
                      if(((q_50 != NULL) && (q_50 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(q_50);
                  ;
                  LocalPopChoice(e_24);
                }
              else
                {
                  t = d_24;
                  {
                    ATerm f_24 = t;
                    int g_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_50 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            if(((p_50 != NULL) && (p_50 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              p_50 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = not_null(p_50);
                        {
                          ATerm h_24 = t;
                          int i_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0_0(t);
                              ;
                              LocalPopChoice(i_24);
                            }
                          else
                            {
                              t = h_24;
                              {
                                ATerm w_17 (ATerm t)
                                {
                                  t = term_j_24;
                                  return(t);
                                }
                                t = debug_1_0(w_17, t);
                                _fail(t);
                              }
                            }
                        }
                        ;
                        LocalPopChoice(g_24);
                      }
                    else
                      {
                        t = f_24;
                        {
                          ATerm n_50 = NULL,o_50 = NULL,m_0 = NULL,h_424 = NULL,n_0 = NULL,t_424 = NULL;
                          if(match_cons(t, sym_Prefix_2))
                            {
                              if(((n_50 != NULL) && (n_50 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                n_50 = ATgetArgument(t, 0);
                              if(((o_50 != NULL) && (o_50 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                o_50 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          if(((m_0 != NULL) && (m_0 != t)))
                            _fail(t);
                          else
                            m_0 = t;
                          t = not_null(n_50);
                          t = eval_config_0_0(t);
                          if(((h_424 != NULL) && (h_424 != t)))
                            _fail(t);
                          else
                            h_424 = t;
                          t = not_null(m_0);
                          if(((n_0 != NULL) && (n_0 != t)))
                            _fail(t);
                          else
                            n_0 = t;
                          t = not_null(o_50);
                          t = eval_config_0_0(t);
                          if(((t_424 != NULL) && (t_424 != t)))
                            _fail(t);
                          else
                            t_424 = t;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_424), not_null(t_424));
                          t = conc_strings_0_0(t);
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
  ATerm m_50 = NULL;
  if(((m_50 != NULL) && (m_50 != t)))
    _fail(t);
  else
    m_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_24, not_null(m_50));
  t = table_get_0_0(t);
  {
    ATerm x_17 (ATerm t)
    {
      ATerm o_0 = NULL,p_0 = NULL,i_423 = NULL;
      t = eval_config_0_0(t);
      if(((o_0 != NULL) && (o_0 != t)))
        _fail(t);
      else
        o_0 = t;
      if(((p_0 != NULL) && (p_0 != t)))
        _fail(t);
      else
        p_0 = t;
      if(((i_423 != NULL) && (i_423 != t)))
        _fail(t);
      else
        i_423 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_24, not_null(m_50), not_null(i_423));
      t = table_put_0_0(t);
      t = not_null(o_0);
      return(t);
    }
    t = try_1_0(x_17, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_95 (ATerm), ATerm t)
{
  ATerm y_17 (ATerm t)
  {
    ATerm q_0 = NULL,r_0 = NULL,p_405 = NULL;
    if(((q_0 != NULL) && (q_0 != t)))
      _fail(t);
    else
      q_0 = t;
    if(((r_0 != NULL) && (r_0 != t)))
      _fail(t);
    else
      r_0 = t;
    t = term_l_24;
    t = get_config_0_0(t);
    if(((p_405 != NULL) && (p_405 != t)))
      _fail(t);
    else
      p_405 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_405), term_m_24);
    t = geq_0_0(t);
    t = not_null(q_0);
    t = e_95(t);
    return(t);
  }
  t = try_1_0(y_17, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,s_0 = NULL,n_346 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_45 != NULL) && (m_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_45 = ATgetArgument(t, 0);
      {
        ATerm n_24 = ATgetArgument(t, 1);
        if(match_cons(n_24, sym_Stream_1))
          {
            if(((n_45 != NULL) && (n_45 != ATgetArgument(n_24, 0))))
              _fail(ATgetArgument(n_24, 0));
            else
              n_45 = ATgetArgument(n_24, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputc(not_null(m_45), not_null(n_45));
  if(((s_0 != NULL) && (s_0 != t)))
    _fail(t);
  else
    s_0 = t;
  if(((n_346 != NULL) && (n_346 != t)))
    _fail(t);
  else
    n_346 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_346));
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,t_0 = NULL,b_389 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_24 = ATgetArgument(t, 0);
      if(match_cons(o_24, sym_Stream_1))
        {
          if(((a_49 != NULL) && (a_49 != ATgetArgument(o_24, 0))))
            _fail(ATgetArgument(o_24, 0));
          else
            a_49 = ATgetArgument(o_24, 0);
        }
      else
        _fail(t);
      if(((b_49 != NULL) && (b_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(a_49), not_null(b_49));
  if(((t_0 != NULL) && (t_0 != t)))
    _fail(t);
  else
    t_0 = t;
  if(((b_389 != NULL) && (b_389 != t)))
    _fail(t);
  else
    b_389 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_389));
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm z_17 (ATerm t)
  {
    ATerm u_0 = NULL,p_390 = NULL;
    t = write_in_text_to_stream_0_0(t);
    if(((u_0 != NULL) && (u_0 != t)))
      _fail(t);
    else
      u_0 = t;
    if(((p_390 != NULL) && (p_390 != t)))
      _fail(t);
    else
      p_390 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_24, not_null(p_390));
    t = fputc_0_0(t);
    return(t);
  }
  t = WriteToFile_1_0(z_17, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,v_0 = NULL,v_387 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_24 = ATgetArgument(t, 0);
      if(match_cons(q_24, sym_Stream_1))
        {
          if(((w_48 != NULL) && (w_48 != ATgetArgument(q_24, 0))))
            _fail(ATgetArgument(q_24, 0));
          else
            w_48 = ATgetArgument(q_24, 0);
        }
      else
        _fail(t);
      if(((x_48 != NULL) && (x_48 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(w_48), not_null(x_48));
  if(((v_0 != NULL) && (v_0 != t)))
    _fail(t);
  else
    v_0 = t;
  if(((v_387 != NULL) && (v_387 != t)))
    _fail(t);
  else
    v_387 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_387));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm a_94 (ATerm), ATerm t)
{
  ATerm a_391 = NULL,e_49 = NULL,w_0 = NULL,l_391 = NULL,x_0 = NULL,w_391 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_391 != NULL) && (a_391 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_391 = ATgetArgument(t, 0);
      if(((e_49 != NULL) && (e_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(a_391);
  if(((w_0 != NULL) && (w_0 != t)))
    _fail(t);
  else
    w_0 = t;
  if(((l_391 != NULL) && (l_391 != t)))
    _fail(t);
  else
    l_391 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_391), term_r_24);
  t = open_stream_0_0(t);
  if(((x_0 != NULL) && (x_0 != t)))
    _fail(t);
  else
    x_0 = t;
  if(((w_391 != NULL) && (w_391 != t)))
    _fail(t);
  else
    w_391 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_391), not_null(e_49));
  t = a_94(t);
  t = fclose_0_0(t);
  t = not_null(e_49);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_0 = NULL,z_51 = NULL;
  if(((y_0 != NULL) && (y_0 != t)))
    _fail(t);
  else
    y_0 = t;
  {
    ATerm a_18 (ATerm t)
    {
      ATerm s_24 = t;
      int t_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_18 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((z_51 != NULL) && (z_51 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_51 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(b_18, t);
          ;
          LocalPopChoice(t_24);
        }
      else
        {
          t = s_24;
          t = term_u_24;
          if(((z_51 != NULL) && (z_51 != t)))
            _fail(t);
          else
            z_51 = t;
        }
      return(t);
    }
    t = _2_0(a_18, _id, t);
    t = not_null(y_0);
    {
      ATerm c_18 (ATerm t)
      {
        ATerm d_18 (ATerm t)
        {
          t = not_null(z_51);
          return(t);
        }
        t = split_2_0(d_18, _id, t);
        return(t);
      }
      t = _2_0(_id, c_18, t);
      {
        ATerm v_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_18 (ATerm t)
            {
              ATerm f_18 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(f_18, t);
              return(t);
            }
            t = _2_0(e_18, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(w_24);
          }
        else
          {
            t = v_24;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm c_97 (ATerm), ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL;
  if(((z_0 != NULL) && (z_0 != t)))
    _fail(t);
  else
    z_0 = t;
  t = dtime_0_0(t);
  t = not_null(z_0);
  t = c_97(t);
  if(((a_1 != NULL) && (a_1 != t)))
    _fail(t);
  else
    a_1 = t;
  t = dtime_0_0(t);
  if(((w_51 != NULL) && (w_51 != t)))
    _fail(t);
  else
    w_51 = t;
  t = not_null(a_1);
  if(match_cons(t, sym__2))
    {
      if(((x_51 != NULL) && (x_51 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_51 = ATgetArgument(t, 0);
      if(((y_51 != NULL) && (y_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_51)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(w_51))), not_null(y_51));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_45 = NULL,r_45 = NULL;
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Stream_1))
        {
          if(((q_45 != NULL) && (q_45 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            q_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_fclose(not_null(q_45));
      ;
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
      if(((r_45 != NULL) && (r_45 != t)))
        _fail(t);
      else
        r_45 = t;
      t = SSL_fclose(not_null(r_45));
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm c_49 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((c_49 != NULL) && (c_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(c_49));
  return(t);
}
ATerm debug_1_0 (ATerm m_93 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,x_381 = NULL,d_1 = NULL,e_382 = NULL;
  if(((b_1 != NULL) && (b_1 != t)))
    _fail(t);
  else
    b_1 = t;
  if(((c_1 != NULL) && (c_1 != t)))
    _fail(t);
  else
    c_1 = t;
  t = m_93(t);
  if(((x_381 != NULL) && (x_381 != t)))
    _fail(t);
  else
    x_381 = t;
  t = not_null(c_1);
  if(((d_1 != NULL) && (d_1 != t)))
    _fail(t);
  else
    d_1 = t;
  if(((e_382 != NULL) && (e_382 != t)))
    _fail(t);
  else
    e_382 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_382)), not_null(x_381)));
  t = printnl_0_0(t);
  t = not_null(b_1);
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,e_1 = NULL,d_347 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_45 != NULL) && (o_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_45 = ATgetArgument(t, 0);
      if(((p_45 != NULL) && (p_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(o_45), not_null(p_45));
  if(((e_1 != NULL) && (e_1 != t)))
    _fail(t);
  else
    e_1 = t;
  if(((d_347 != NULL) && (d_347 != t)))
    _fail(t);
  else
    d_347 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_347));
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm h_40 = NULL;
  if(((h_40 != NULL) && (h_40 != t)))
    _fail(t);
  else
    h_40 = t;
  t = SSL_is_string(not_null(h_40));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_1 = NULL,e_349 = NULL;
  t = SSL_stdin_stream();
  if(((f_1 != NULL) && (f_1 != t)))
    _fail(t);
  else
    f_1 = t;
  if(((e_349 != NULL) && (e_349 != t)))
    _fail(t);
  else
    e_349 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_349));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_1 = NULL,p_349 = NULL;
  t = SSL_stdout_stream();
  if(((g_1 != NULL) && (g_1 != t)))
    _fail(t);
  else
    g_1 = t;
  if(((p_349 != NULL) && (p_349 != t)))
    _fail(t);
  else
    p_349 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_349));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_1 = NULL,a_350 = NULL;
  t = SSL_stderr_stream();
  if(((h_1 != NULL) && (h_1 != t)))
    _fail(t);
  else
    h_1 = t;
  if(((a_350 != NULL) && (a_350 != t)))
    _fail(t);
  else
    a_350 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_350));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_stderr_0)))
        _fail(t);
      t = stderr_stream_0_0(t);
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_stdout_0)))
              _fail(t);
            t = stdout_stream_0_0(t);
            ;
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
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
  ATerm k_221 = NULL,i_1 = NULL,l_221 = NULL,h_35 = NULL,i_35 = NULL;
  if(((k_221 != NULL) && (k_221 != t)))
    _fail(t);
  else
    k_221 = t;
  if(((i_1 != NULL) && (i_1 != t)))
    _fail(t);
  else
    i_1 = t;
  t = not_null(k_221);
  if(((l_221 != NULL) && (l_221 != t)))
    _fail(t);
  else
    l_221 = t;
  t = SSL_explode_term(not_null(l_221));
  if(match_cons(t, sym__2))
    {
      ATerm d_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_25 = ATgetArgument(t, 1);
        if(((ATgetType(e_25) == AT_LIST) && !(ATisEmpty(e_25))))
          {
            if(((i_35 != NULL) && (i_35 != ATgetFirst((ATermList) e_25))))
              _fail(ATgetFirst((ATermList) e_25));
            else
              i_35 = ATgetFirst((ATermList) e_25);
            if(((h_35 != NULL) && (h_35 != (ATerm) ATgetNext((ATermList) e_25))))
              _fail((ATerm) ATgetNext((ATermList) e_25));
            else
              h_35 = (ATerm) ATgetNext((ATermList) e_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(i_35);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      ATerm g_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        {
          ATerm j_25 = t;
          int k_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_18 (ATerm t)
              {
                ATerm p_340 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    if(((p_340 != NULL) && (p_340 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      p_340 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = not_null(p_340);
                return(t);
              }
              t = _2_0(g_18, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(k_25);
            }
          else
            {
              t = j_25;
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
  ATerm k_1 = NULL,d_49 = NULL;
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 = NULL,r_389 = NULL;
      if(((j_1 != NULL) && (j_1 != t)))
        _fail(t);
      else
        j_1 = t;
      if(((r_389 != NULL) && (r_389 != t)))
        _fail(t);
      else
        r_389 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_389), term_n_25);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm h_18 (ATerm t)
        {
          t = term_o_25;
          return(t);
        }
        t = debug_1_0(h_18, t);
        _fail(t);
      }
    }
  if(((k_1 != NULL) && (k_1 != t)))
    _fail(t);
  else
    k_1 = t;
  t = read_from_stream_0_0(t);
  if(((d_49 != NULL) && (d_49 != t)))
    _fail(t);
  else
    d_49 = t;
  t = not_null(k_1);
  t = fclose_0_0(t);
  t = not_null(d_49);
  return(t);
}
ATerm split_2_0 (ATerm e_89 (ATerm), ATerm f_89 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,x_224 = NULL,m_1 = NULL,e_225 = NULL;
  if(((l_1 != NULL) && (l_1 != t)))
    _fail(t);
  else
    l_1 = t;
  t = e_89(t);
  if(((x_224 != NULL) && (x_224 != t)))
    _fail(t);
  else
    x_224 = t;
  t = not_null(l_1);
  if(((m_1 != NULL) && (m_1 != t)))
    _fail(t);
  else
    m_1 = t;
  t = f_89(t);
  if(((e_225 != NULL) && (e_225 != t)))
    _fail(t);
  else
    e_225 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_224), not_null(e_225));
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm n_1 = NULL,v_51 = NULL;
  if(((n_1 != NULL) && (n_1 != t)))
    _fail(t);
  else
    n_1 = t;
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_18 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((v_51 != NULL) && (v_51 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(i_18, t);
        ;
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        t = term_r_25;
        if(((v_51 != NULL) && (v_51 != t)))
          _fail(t);
        else
          v_51 = t;
      }
    t = not_null(n_1);
    {
      ATerm j_18 (ATerm t)
      {
        t = not_null(v_51);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, j_18, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm k_18 (ATerm t)
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-k", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm l_18 (ATerm t)
  {
    ATerm o_1 = NULL,p_1 = NULL,l_457 = NULL;
    if(((o_1 != NULL) && (o_1 != t)))
      _fail(t);
    else
      o_1 = t;
    if(((p_1 != NULL) && (p_1 != t)))
      _fail(t);
    else
      p_1 = t;
    t = string_to_int_0_0(t);
    if(((l_457 != NULL) && (l_457 != t)))
      _fail(t);
    else
      l_457 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_25, not_null(l_457));
    t = set_config_0_0(t);
    t = not_null(o_1);
    return(t);
  }
  ATerm m_18 (ATerm t)
  {
    t = term_v_25;
    return(t);
  }
  t = ArgOption_3_0(k_18, l_18, m_18, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm d_42 = NULL;
  if(((d_42 != NULL) && (d_42 != t)))
    _fail(t);
  else
    d_42 = t;
  t = SSL_string_to_int(not_null(d_42));
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_18 (ATerm t)
      {
        ATerm y_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-S", 0, ATtrue)))
              _fail(t);
            ;
            LocalPopChoice(z_25);
          }
        else
          {
            t = y_25;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
          }
        return(t);
      }
      ATerm o_18 (ATerm t)
      {
        ATerm q_1 = NULL;
        if(((q_1 != NULL) && (q_1 != t)))
          _fail(t);
        else
          q_1 = t;
        t = term_b_26;
        t = set_config_0_0(t);
        t = term_c_26;
        return(t);
      }
      ATerm p_18 (ATerm t)
      {
        t = term_d_26;
        return(t);
      }
      t = Option_3_0(n_18, o_18, p_18, t);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_18 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm r_18 (ATerm t)
            {
              ATerm r_1 = NULL,s_1 = NULL,q_462 = NULL,t_1 = NULL,b_463 = NULL;
              if(((r_1 != NULL) && (r_1 != t)))
                _fail(t);
              else
                r_1 = t;
              if(((s_1 != NULL) && (s_1 != t)))
                _fail(t);
              else
                s_1 = t;
              t = string_to_int_0_0(t);
              if(((q_462 != NULL) && (q_462 != t)))
                _fail(t);
              else
                q_462 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_l_24, not_null(q_462));
              t = set_config_0_0(t);
              t = not_null(r_1);
              if(((t_1 != NULL) && (t_1 != t)))
                _fail(t);
              else
                t_1 = t;
              if(((b_463 != NULL) && (b_463 != t)))
                _fail(t);
              else
                b_463 = t;
              t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_463));
              return(t);
            }
            ATerm s_18 (ATerm t)
            {
              t = term_g_26;
              return(t);
            }
            t = ArgOption_3_0(q_18, r_18, s_18, t);
            ;
            LocalPopChoice(f_26);
          }
        else
          {
            t = e_26;
            {
              ATerm t_18 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm u_18 (ATerm t)
              {
                ATerm u_1 = NULL;
                if(((u_1 != NULL) && (u_1 != t)))
                  _fail(t);
                else
                  u_1 = t;
                t = term_i_26;
                t = set_config_0_0(t);
                t = term_j_26;
                return(t);
              }
              ATerm v_18 (ATerm t)
              {
                t = term_k_26;
                return(t);
              }
              t = Option_3_0(t_18, u_18, v_18, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm w_18 (ATerm t)
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-o", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm x_18 (ATerm t)
  {
    ATerm v_1 = NULL,w_1 = NULL,y_459 = NULL,x_1 = NULL,j_460 = NULL;
    if(((v_1 != NULL) && (v_1 != t)))
      _fail(t);
    else
      v_1 = t;
    if(((w_1 != NULL) && (w_1 != t)))
      _fail(t);
    else
      w_1 = t;
    if(((y_459 != NULL) && (y_459 != t)))
      _fail(t);
    else
      y_459 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_26, not_null(y_459));
    t = set_config_0_0(t);
    t = not_null(v_1);
    if(((x_1 != NULL) && (x_1 != t)))
      _fail(t);
    else
      x_1 = t;
    if(((j_460 != NULL) && (j_460 != t)))
      _fail(t);
    else
      j_460 = t;
    t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_460));
    return(t);
  }
  ATerm y_18 (ATerm t)
  {
    t = term_q_26;
    return(t);
  }
  t = ArgOption_3_0(w_18, x_18, y_18, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
      {
        ATerm z_18 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm a_19 (ATerm t)
        {
          ATerm y_1 = NULL;
          if(((y_1 != NULL) && (y_1 != t)))
            _fail(t);
          else
            y_1 = t;
          t = term_u_26;
          t = set_config_0_0(t);
          t = term_v_26;
          return(t);
        }
        ATerm b_19 (ATerm t)
        {
          t = term_w_26;
          return(t);
        }
        t = Option_3_0(z_18, a_19, b_19, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register-usage-info", 0, ATtrue)))
        _fail(t);
      t = register_usage_1_0(j_0, t);
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      {
        ATerm p_54 = NULL,n_54 = NULL,o_54 = NULL,z_1 = NULL,a_2 = NULL,g_497 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((p_54 != NULL) && (p_54 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              p_54 = ATgetFirst((ATermList) t);
            {
              ATerm z_26 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(z_26) == AT_LIST) && !(ATisEmpty(z_26))))
                {
                  if(((n_54 != NULL) && (n_54 != ATgetFirst((ATermList) z_26))))
                    _fail(ATgetFirst((ATermList) z_26));
                  else
                    n_54 = ATgetFirst((ATermList) z_26);
                  if(((o_54 != NULL) && (o_54 != (ATerm) ATgetNext((ATermList) z_26))))
                    _fail((ATerm) ATgetNext((ATermList) z_26));
                  else
                    o_54 = (ATerm) ATgetNext((ATermList) z_26);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        if(((z_1 != NULL) && (z_1 != t)))
          _fail(t);
        else
          z_1 = t;
        t = not_null(p_54);
        t = h_0(t);
        t = not_null(z_1);
        if(((a_2 != NULL) && (a_2 != t)))
          _fail(t);
        else
          a_2 = t;
        t = not_null(n_54);
        t = i_0(t);
        if(((g_497 != NULL) && (g_497 != t)))
          _fail(t);
        else
          g_497 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(o_54)), not_null(g_497));
      }
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm c_19 (ATerm t)
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm d_19 (ATerm t)
  {
    ATerm b_2 = NULL,c_2 = NULL,o_458 = NULL,d_2 = NULL,z_458 = NULL;
    if(((b_2 != NULL) && (b_2 != t)))
      _fail(t);
    else
      b_2 = t;
    if(((c_2 != NULL) && (c_2 != t)))
      _fail(t);
    else
      c_2 = t;
    if(((o_458 != NULL) && (o_458 != t)))
      _fail(t);
    else
      o_458 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_27, not_null(o_458));
    t = set_config_0_0(t);
    t = not_null(b_2);
    if(((d_2 != NULL) && (d_2 != t)))
      _fail(t);
    else
      d_2 = t;
    if(((z_458 != NULL) && (z_458 != t)))
      _fail(t);
    else
      z_458 = t;
    t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_458));
    return(t);
  }
  ATerm e_19 (ATerm t)
  {
    t = term_d_27;
    return(t);
  }
  t = ArgOption_3_0(c_19, d_19, e_19, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      {
        ATerm g_27 = t;
        int h_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(h_27);
          }
        else
          {
            t = g_27;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_2 = NULL,h_455 = NULL;
  t = report_run_time_0_0(t);
  if(((e_2 != NULL) && (e_2 != t)))
    _fail(t);
  else
    e_2 = t;
  t = term_n_23;
  t = whoami_0_0(t);
  if(((h_455 != NULL) && (h_455 != t)))
    _fail(t);
  else
    h_455 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATinsert(ATinsert(ATempty, term_i_27), not_null(h_455)));
  t = printnl_0_0(t);
  t = term_r_23;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_27;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm e_52 = NULL;
  if(((e_52 != NULL) && (e_52 != t)))
    _fail(t);
  else
    e_52 = t;
  t = SSL_TicksToSeconds(not_null(e_52));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_42 != NULL) && (i_42 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_42 = ATgetArgument(t, 0);
      if(((j_42 != NULL) && (j_42 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(i_42), not_null(j_42));
        ;
        LocalPopChoice(q_27);
      }
    else
      {
        t = k_27;
        t = SSL_addr(not_null(i_42), not_null(j_42));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm t)
{
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = p_87(t);
      ;
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      {
        ATerm s_33 = NULL,t_33 = NULL,f_2 = NULL,b_201 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((s_33 != NULL) && (s_33 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              s_33 = ATgetFirst((ATermList) t);
            if(((t_33 != NULL) && (t_33 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              t_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        if(((f_2 != NULL) && (f_2 != t)))
          _fail(t);
        else
          f_2 = t;
        t = not_null(t_33);
        t = foldr_2_0(p_87, q_87, t);
        if(((b_201 != NULL) && (b_201 != t)))
          _fail(t);
        else
          b_201 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_33), not_null(b_201));
        t = q_87(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm t)
{
  ATerm a_292 = NULL,g_2 = NULL,b_292 = NULL,l_40 = NULL;
  if(((a_292 != NULL) && (a_292 != t)))
    _fail(t);
  else
    a_292 = t;
  if(((g_2 != NULL) && (g_2 != t)))
    _fail(t);
  else
    g_2 = t;
  t = not_null(a_292);
  if(((b_292 != NULL) && (b_292 != t)))
    _fail(t);
  else
    b_292 = t;
  t = SSL_explode_term(not_null(b_292));
  if(match_cons(t, sym__2))
    {
      ATerm t_27 = ATgetArgument(t, 0);
      if(((l_40 != NULL) && (l_40 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_40);
  t = foldr_2_0(i_91, j_91, t);
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
    ATerm f_19 (ATerm t)
    {
      t = term_a_26;
      return(t);
    }
    t = crush_2_0(f_19, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,h_2 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_43 != NULL) && (i_43 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_43 = ATgetArgument(t, 0);
      if(((j_43 != NULL) && (j_43 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((h_2 != NULL) && (h_2 != t)))
    _fail(t);
  else
    h_2 = t;
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(i_43), not_null(j_43));
        ;
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = SSL_gtr(not_null(i_43), not_null(j_43));
      }
    t = not_null(h_2);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_43 = NULL;
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym__2))
        {
          if(((o_43 != NULL) && (o_43 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_43 = ATgetArgument(t, 0);
          if(((o_43 != NULL) && (o_43 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            o_43 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      ;
      LocalPopChoice(x_27);
    }
  else
    {
      t = w_27;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_95 (ATerm), ATerm t)
{
  ATerm g_19 (ATerm t)
  {
    ATerm i_2 = NULL,j_2 = NULL,z_404 = NULL;
    if(((i_2 != NULL) && (i_2 != t)))
      _fail(t);
    else
      i_2 = t;
    if(((j_2 != NULL) && (j_2 != t)))
      _fail(t);
    else
      j_2 = t;
    t = term_l_24;
    t = get_config_0_0(t);
    if(((z_404 != NULL) && (z_404 != t)))
      _fail(t);
    else
      z_404 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_404), term_r_23);
    t = geq_0_0(t);
    t = not_null(i_2);
    t = d_95(t);
    return(t);
  }
  t = try_1_0(g_19, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm h_19 (ATerm t)
  {
    ATerm k_2 = NULL,a_456 = NULL,l_2 = NULL,i_456 = NULL;
    if(((k_2 != NULL) && (k_2 != t)))
      _fail(t);
    else
      k_2 = t;
    t = run_time_0_0(t);
    if(((a_456 != NULL) && (a_456 != t)))
      _fail(t);
    else
      a_456 = t;
    t = not_null(k_2);
    if(((l_2 != NULL) && (l_2 != t)))
      _fail(t);
    else
      l_2 = t;
    t = term_n_23;
    t = whoami_0_0(t);
    if(((i_456 != NULL) && (i_456 != t)))
      _fail(t);
    else
      i_456 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_27), not_null(a_456)), term_y_27), not_null(i_456)));
    t = printnl_0_0(t);
    return(t);
  }
  t = if_verbose1_1_0(h_19, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_a_26;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1_0 (ATerm a_98 (ATerm), ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      {
        ATerm i_19 (ATerm t)
        {
          ATerm d_28 = t;
          int h_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(h_28);
            }
          else
            {
              t = d_28;
              {
                ATerm i_28 = t;
                int j_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(j_28);
                  }
                else
                  {
                    t = i_28;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(i_19, t);
      }
    }
  t = a_98(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm m_56 = NULL;
  if(((m_56 != NULL) && (m_56 != t)))
    _fail(t);
  else
    m_56 = t;
  t = SSL_table_create(not_null(m_56));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm a_52 = NULL,m_2 = NULL;
  if(((a_52 != NULL) && (a_52 != t)))
    _fail(t);
  else
    a_52 = t;
  if(((m_2 != NULL) && (m_2 != t)))
    _fail(t);
  else
    m_2 = t;
  t = term_k_28;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_28, term_l_28, not_null(a_52));
  t = table_put_0_0(t);
  t = not_null(m_2);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_56 = NULL;
  if(((n_56 != NULL) && (n_56 != t)))
    _fail(t);
  else
    n_56 = t;
  t = SSL_table_destroy(not_null(n_56));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm f_51 = NULL;
  if(((f_51 != NULL) && (f_51 != t)))
    _fail(t);
  else
    f_51 = t;
  t = SSL_exit(not_null(f_51));
  return(t);
}
ATerm long_description_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm o_81 (ATerm), ATerm t)
{
  ATerm p_81 (ATerm t)
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
        t = Cons_2_0(o_81, p_81, t);
      }
    return(t);
  }
  t = p_81(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_28 = NULL,f_28 = NULL,n_2 = NULL,o_2 = NULL,w_148 = NULL,p_2 = NULL,e_149 = NULL,g_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((e_28 != NULL) && (e_28 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            e_28 = ATgetFirst((ATermList) t);
          if(((f_28 != NULL) && (f_28 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(f_28);
      if(((n_2 != NULL) && (n_2 != t)))
        _fail(t);
      else
        n_2 = t;
      if(((o_2 != NULL) && (o_2 != t)))
        _fail(t);
      else
        o_2 = t;
      t = g_0(t);
      if(((w_148 != NULL) && (w_148 != t)))
        _fail(t);
      else
        w_148 = t;
      t = not_null(o_2);
      if(((p_2 != NULL) && (p_2 != t)))
        _fail(t);
      else
        p_2 = t;
      t = not_null(e_28);
      t = e_0(t);
      if(((e_149 != NULL) && (e_149 != t)))
        _fail(t);
      else
        e_149 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(w_148)), not_null(e_149));
      if(((g_28 != NULL) && (g_28 != t)))
        _fail(t);
      else
        g_28 = t;
      t = not_null(n_2);
      {
        ATerm j_19 (ATerm t)
        {
          t = not_null(g_28);
          return(t);
        }
        t = reverse_acc_2_0(e_0, j_19, t);
      }
      ;
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_23;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm k_19 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, k_19, t);
  return(t);
}
ATerm short_description_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm v_73 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,s_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  if(((v_12 != NULL) && (v_12 != t)))
    _fail(t);
  else
    v_12 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((s_12 != NULL) && (s_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_16 = NULL;
    if(((h_16 != NULL) && (h_16 != t)))
      _fail(t);
    else
      h_16 = t;
    t = SSLgetAnnotations(not_null(v_12));
    if(((t_12 != NULL) && (t_12 != t)))
      _fail(t);
    else
      t_12 = t;
    t = not_null(h_16);
    t = not_null(s_12);
    t = v_73(t);
    if(((u_12 != NULL) && (u_12 != t)))
      _fail(t);
    else
      u_12 = t;
    {
      ATerm i_16 = NULL;
      if(((i_16 != NULL) && (i_16 != t)))
        _fail(t);
      else
        i_16 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_12)), not_null(t_12));
      if(((w_12 != NULL) && (w_12 != t)))
        _fail(t);
      else
        w_12 = t;
    }
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_55 = NULL;
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_27;
      t = get_config_0_0(t);
      if(((b_55 != NULL) && (b_55 != t)))
        _fail(t);
      else
        b_55 = t;
      ;
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      {
        ATerm l_19 (ATerm t)
        {
          ATerm m_19 (ATerm t)
          {
            if(((b_55 != NULL) && (b_55 != t)))
              _fail(t);
            else
              b_55 = t;
            return(t);
          }
          t = Program_1_0(m_19, t);
          return(t);
        }
        t = option_defined_1_0(l_19, t);
      }
    }
  {
    ATerm n_19 (ATerm t)
    {
      ATerm o_19 (ATerm t)
      {
        t = not_null(b_55);
        return(t);
      }
      t = short_description_1_0(o_19, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(n_19, t);
    t = term_s_28;
    t = echo_0_0(t);
    t = term_v_28;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm p_19 (ATerm t)
      {
        ATerm q_2 = NULL,a_507 = NULL;
        if(((q_2 != NULL) && (q_2 != t)))
          _fail(t);
        else
          q_2 = t;
        if(((a_507 != NULL) && (a_507 != t)))
          _fail(t);
        else
          a_507 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_507)), term_w_28);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(p_19, t);
      {
        ATerm q_19 (ATerm t)
        {
          ATerm r_2 = NULL,l_507 = NULL;
          if(((r_2 != NULL) && (r_2 != t)))
            _fail(t);
          else
            r_2 = t;
          {
            ATerm r_19 (ATerm t)
            {
              t = not_null(b_55);
              return(t);
            }
            t = long_description_1_0(r_19, t);
            if(((l_507 != NULL) && (l_507 != t)))
              _fail(t);
            else
              l_507 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(l_507)), term_x_28);
            t = echo_0_0(t);
          }
          return(t);
        }
        t = try_1_0(q_19, t);
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
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm w_73 (ATerm), ATerm t)
{
  ATerm y_12 = NULL,x_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  if(((a_13 != NULL) && (a_13 != t)))
    _fail(t);
  else
    a_13 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((x_12 != NULL) && (x_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_16 = NULL;
    if(((j_16 != NULL) && (j_16 != t)))
      _fail(t);
    else
      j_16 = t;
    t = SSLgetAnnotations(not_null(a_13));
    if(((y_12 != NULL) && (y_12 != t)))
      _fail(t);
    else
      y_12 = t;
    t = not_null(j_16);
    t = not_null(x_12);
    t = w_73(t);
    if(((z_12 != NULL) && (z_12 != t)))
      _fail(t);
    else
      z_12 = t;
    {
      ATerm k_16 = NULL;
      if(((k_16 != NULL) && (k_16 != t)))
        _fail(t);
      else
        k_16 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_12)), not_null(y_12));
      if(((b_13 != NULL) && (b_13 != t)))
        _fail(t);
      else
        b_13 = t;
    }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm y_81 (ATerm), ATerm t)
{
  ATerm z_81 (ATerm t)
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_81, _id, t);
        ;
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
        t = Cons_2_0(_id, z_81, t);
      }
    return(t);
  }
  t = z_81(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  t = fetch_1_0(a_99, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm e_29 = ATgetFirst((ATermList) t);
          ATerm f_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,y_378 = NULL;
  if(((s_2 != NULL) && (s_2 != t)))
    _fail(t);
  else
    s_2 = t;
  if(((t_2 != NULL) && (t_2 != t)))
    _fail(t);
  else
    t_2 = t;
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
        {
          ATerm u_2 = NULL,a_379 = NULL;
          if(((u_2 != NULL) && (u_2 != t)))
            _fail(t);
          else
            u_2 = t;
          if(((a_379 != NULL) && (a_379 != t)))
            _fail(t);
          else
            a_379 = t;
          t = (ATerm) ATinsert(ATempty, not_null(a_379));
        }
      }
    if(((y_378 != NULL) && (y_378 != t)))
      _fail(t);
    else
      y_378 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_24, not_null(y_378));
    t = printnl_0_0(t);
    t = not_null(s_2);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_27;
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
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
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
ATerm try_1_0 (ATerm d_74 (ATerm), ATerm t)
{
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_74(t);
      ;
      LocalPopChoice(l_29);
    }
  else
    {
      t = k_29;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_19 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm t_19 (ATerm t)
      {
        t = term_p_29;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm u_19 (ATerm t)
      {
        t = term_q_29;
        return(t);
      }
      t = Option_3_0(s_19, t_19, u_19, t);
      ;
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      {
        ATerm v_19 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm w_19 (ATerm t)
        {
          ATerm v_2 = NULL;
          if(((v_2 != NULL) && (v_2 != t)))
            _fail(t);
          else
            v_2 = t;
          t = term_p_29;
          t = set_config_0_0(t);
          t = term_s_29;
          t = set_config_0_0(t);
          t = term_t_29;
          return(t);
        }
        ATerm x_19 (ATerm t)
        {
          t = term_u_29;
          return(t);
        }
        t = Option_3_0(v_19, w_19, x_19, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_56 != NULL) && (r_56 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_56 = ATgetArgument(t, 0);
      if(((s_56 != NULL) && (s_56 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(r_56), not_null(s_56));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,c_55 = NULL,w_2 = NULL,x_2 = NULL,g_510 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((d_55 != NULL) && (d_55 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_55 = ATgetArgument(t, 0);
      if(((e_55 != NULL) && (e_55 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_55 = ATgetArgument(t, 1);
      if(((c_55 != NULL) && (c_55 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        c_55 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((w_2 != NULL) && (w_2 != t)))
    _fail(t);
  else
    w_2 = t;
  if(((x_2 != NULL) && (x_2 != t)))
    _fail(t);
  else
    x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_55), not_null(e_55));
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        t = (ATerm) ATempty;
      }
    if(((g_510 != NULL) && (g_510 != t)))
      _fail(t);
    else
      g_510 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(d_55), not_null(e_55), (ATerm) ATinsert(CheckATermList(not_null(g_510)), not_null(c_55)));
    t = table_put_0_0(t);
    t = not_null(w_2);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm f_100 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,l_505 = NULL;
  if(((y_2 != NULL) && (y_2 != t)))
    _fail(t);
  else
    y_2 = t;
  t = term_n_23;
  t = f_100(t);
  if(((l_505 != NULL) && (l_505 != t)))
    _fail(t);
  else
    l_505 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_28, term_u_28, not_null(l_505));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register-usage-info", 0, ATtrue)))
        _fail(t);
      t = register_usage_1_0(d_0, t);
      ;
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
      {
        ATerm m_54 = NULL,l_54 = NULL,z_2 = NULL,a_3 = NULL,y_495 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((m_54 != NULL) && (m_54 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              m_54 = ATgetFirst((ATermList) t);
            if(((l_54 != NULL) && (l_54 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              l_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        if(((z_2 != NULL) && (z_2 != t)))
          _fail(t);
        else
          z_2 = t;
        t = not_null(m_54);
        t = a_0(t);
        t = not_null(z_2);
        if(((a_3 != NULL) && (a_3 != t)))
          _fail(t);
        else
          a_3 = t;
        t = term_n_23;
        t = c_0(t);
        if(((y_495 != NULL) && (y_495 != t)))
          _fail(t);
        else
          y_495 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(l_54)), not_null(y_495));
      }
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm y_19 (ATerm t)
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        {
          ATerm b_30 = t;
          int c_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-h", 0, ATtrue)))
                _fail(t);
              ;
              LocalPopChoice(c_30);
            }
          else
            {
              t = b_30;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                _fail(t);
            }
        }
      }
    return(t);
  }
  ATerm z_19 (ATerm t)
  {
    t = term_d_30;
    t = set_config_0_0(t);
    t = term_e_30;
    return(t);
  }
  ATerm a_20 (ATerm t)
  {
    t = term_f_30;
    return(t);
  }
  t = Option_3_0(y_19, z_19, a_20, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((y_54 != NULL) && (y_54 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        y_54 = ATgetFirst((ATermList) t);
      if(((z_54 != NULL) && (z_54 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        z_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(z_54)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_54)));
  return(t);
}
ATerm Cons_2_0 (ATerm b_61 (ATerm), ATerm c_61 (ATerm), ATerm t)
{
  ATerm e_13 = NULL,c_13 = NULL,d_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
  if(((h_13 != NULL) && (h_13 != t)))
    _fail(t);
  else
    h_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((c_13 != NULL) && (c_13 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        c_13 = ATgetFirst((ATermList) t);
      if(((d_13 != NULL) && (d_13 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        d_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm l_16 = NULL;
    if(((l_16 != NULL) && (l_16 != t)))
      _fail(t);
    else
      l_16 = t;
    t = SSLgetAnnotations(not_null(h_13));
    if(((e_13 != NULL) && (e_13 != t)))
      _fail(t);
    else
      e_13 = t;
    t = not_null(l_16);
    t = not_null(c_13);
    t = b_61(t);
    if(((f_13 != NULL) && (f_13 != t)))
      _fail(t);
    else
      f_13 = t;
    t = not_null(d_13);
    t = c_61(t);
    if(((g_13 != NULL) && (g_13 != t)))
      _fail(t);
    else
      g_13 = t;
    {
      ATerm m_16 = NULL;
      if(((m_16 != NULL) && (m_16 != t)))
        _fail(t);
      else
        m_16 = t;
      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_13)), not_null(f_13)), not_null(e_13));
      if(((i_13 != NULL) && (i_13 != t)))
        _fail(t);
      else
        i_13 = t;
    }
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
  ATerm d_50 = NULL,e_50 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_50 != NULL) && (d_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_50 = ATgetArgument(t, 0);
      if(((e_50 != NULL) && (e_50 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_24, not_null(d_50), not_null(e_50));
  t = table_put_0_0(t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_100 (ATerm), ATerm t)
{
  ATerm b_3 = NULL;
  if(((b_3 != NULL) && (b_3 != t)))
    _fail(t);
  else
    b_3 = t;
  {
    ATerm b_20 (ATerm t)
    {
      t = term_g_30;
      t = d_100(t);
      return(t);
    }
    t = try_1_0(b_20, t);
    t = not_null(b_3);
    {
      ATerm c_20 (ATerm t)
      {
        ATerm c_3 = NULL,d_3 = NULL,o_504 = NULL,e_3 = NULL,z_504 = NULL;
        if(((c_3 != NULL) && (c_3 != t)))
          _fail(t);
        else
          c_3 = t;
        if(((d_3 != NULL) && (d_3 != t)))
          _fail(t);
        else
          d_3 = t;
        if(((o_504 != NULL) && (o_504 != t)))
          _fail(t);
        else
          o_504 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_27, not_null(o_504));
        t = set_config_0_0(t);
        t = not_null(c_3);
        if(((e_3 != NULL) && (e_3 != t)))
          _fail(t);
        else
          e_3 = t;
        if(((z_504 != NULL) && (z_504 != t)))
          _fail(t);
        else
          z_504 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_504));
        return(t);
      }
      ATerm d_20 (ATerm t)
      {
        ATerm h_30 = t;
        int i_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_30 = t;
            int k_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(k_30);
              }
            else
              {
                t = j_30;
                t = d_100(t);
                t = Cons_2_0(_id, d_20, t);
              }
            ;
            LocalPopChoice(i_30);
          }
        else
          {
            t = h_30;
            t = UndefinedOption_0_0(t);
          }
        return(t);
      }
      t = Cons_2_0(c_20, d_20, t);
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm f_3 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL;
  if(((f_3 != NULL) && (f_3 != t)))
    _fail(t);
  else
    f_3 = t;
  if(match_cons(t, sym__3))
    {
      if(((o_56 != NULL) && (o_56 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_56 = ATgetArgument(t, 0);
      if(((p_56 != NULL) && (p_56 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_56 = ATgetArgument(t, 1);
      if(((q_56 != NULL) && (q_56 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        q_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(o_56), not_null(p_56), not_null(q_56));
  t = not_null(f_3);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_100 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,a_55 = NULL,j_3 = NULL;
  if(((g_3 != NULL) && (g_3 != t)))
    _fail(t);
  else
    g_3 = t;
  t = term_l_30;
  t = table_put_0_0(t);
  t = not_null(g_3);
  {
    ATerm e_20 (ATerm t)
    {
      ATerm m_30 = t;
      int n_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_100(t);
          ;
          LocalPopChoice(n_30);
        }
      else
        {
          t = m_30;
          {
            ATerm o_30 = t;
            int p_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(p_30);
              }
            else
              {
                t = o_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_20, t);
    {
      ATerm f_20 (ATerm t)
      {
        ATerm q_30 = t;
        int r_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 = NULL;
            if(((h_3 != NULL) && (h_3 != t)))
              _fail(t);
            else
              h_3 = t;
            {
              ATerm s_30 = t;
              int t_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_c_28;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(t_30);
                }
              else
                {
                  t = s_30;
                  t = option_defined_1_0(Help_0_0, t);
                }
              t = not_null(h_3);
              t = system_usage_0_0(t);
              t = term_a_26;
              t = exit_0_0(t);
            }
            ;
            LocalPopChoice(r_30);
          }
        else
          {
            t = q_30;
            {
              ATerm u_30 = t;
              int v_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_3 = NULL;
                  if(((i_3 != NULL) && (i_3 != t)))
                    _fail(t);
                  else
                    i_3 = t;
                  t = term_o_29;
                  t = get_config_0_0(t);
                  t = not_null(i_3);
                  t = system_about_0_0(t);
                  t = term_a_26;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(v_30);
                }
              else
                {
                  t = u_30;
                  {
                    ATerm g_20 (ATerm t)
                    {
                      ATerm h_20 (ATerm t)
                      {
                        if(((a_55 != NULL) && (a_55 != t)))
                          _fail(t);
                        else
                          a_55 = t;
                        return(t);
                      }
                      t = Undefined_1_0(h_20, t);
                      return(t);
                    }
                    t = option_defined_1_0(g_20, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_55)), term_w_30));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_r_23;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(f_20, t);
      if(((j_3 != NULL) && (j_3 != t)))
        _fail(t);
      else
        j_3 = t;
      t = term_t_28;
      t = table_destroy_0_0(t);
      t = not_null(j_3);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm t)
{
  t = parse_options_1_0(c_98, t);
  t = store_options_0_0(t);
  t = e_98(t);
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_98, t);
        ;
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_98(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_31);
            }
          else
            {
              t = z_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm t)
{
  ATerm i_20 (ATerm t)
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_97(t);
        ;
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm j_20 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(r_97, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(i_20, t_97, u_97, j_20, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm t)
{
  ATerm k_20 (ATerm t)
  {
    ATerm l_20 (ATerm t)
    {
      ATerm k_3 = NULL,l_3 = NULL,g_453 = NULL;
      if(((k_3 != NULL) && (k_3 != t)))
        _fail(t);
      else
        k_3 = t;
      if(((l_3 != NULL) && (l_3 != t)))
        _fail(t);
      else
        l_3 = t;
      t = term_j_27;
      t = get_config_0_0(t);
      if(((g_453 != NULL) && (g_453 != t)))
        _fail(t);
      else
        g_453 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATinsert(ATempty, not_null(g_453)));
      t = printnl_0_0(t);
      t = not_null(k_3);
      return(t);
    }
    t = if_verbose2_1_0(l_20, t);
    return(t);
  }
  t = iowrap_4_0(l_97, m_97, n_97, k_20, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm t)
{
  t = iowrap_3_0(j_97, k_97, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm g_97 (ATerm), ATerm t)
{
  ATerm m_20 (ATerm t)
  {
    t = _2_0(_id, g_97, t);
    return(t);
  }
  t = iowrap_2_0(m_20, _fail, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_1_0(stratego_specification_0_0, t);
  return(t);
}
